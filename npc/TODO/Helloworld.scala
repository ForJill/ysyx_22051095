
import chisel3._
import chisel3.util._
import scala.config._

case object WIDTH extends Field[Int]
case object DBWIDTH extends Field[Int]
case object A_TYPE extends Field[String]
case object PA extends Field[Int]

class MyConfig extends Config((site, here, up) => {
  case WIDTH => 8
  case DBWIDTH => site(A_TYPE)match{
    case "big_a" => 6
    case "small_a" => 1
  }
})

class ModuleA (port_width:Int)(implicit p:Parameters) extends Module{
  val width: Int = p(DBWIDTH)
  val io = IO(new Bundle{
    val port_d = Input(UInt(port_width.W))
    val port_e = Input(UInt(port_width.W))
  })
  io.port_e := io.port_d
}

class Helloworld (implicit p:Parameters) extends Module{
    val width: Int = p(WIDTH)
    val io = IO(new Bundle{
        val port_a = Input(UInt(width.W))
        val port_b = Input(UInt(width.W))
        val port_c = Output(UInt(width.W))
    })
    
    val m_big_a = Module(new ModuleA(width)(p.alterPartial(
      {
        case A_TYPE => "big_a"
        case PA => 5
      }
    )))
    val m_small_a = Module(new ModuleA(width)(p.alterPartial(
      {
        case A_TYPE => "small_a"
        case PA => 5
      }
    )))
    m_big_a.io.port_d := io.port_b
    m_small_a.io.port_d := io.port_a
    io.port_c := m_big_a.io.port_e + m_small_a.io.port_e
}

