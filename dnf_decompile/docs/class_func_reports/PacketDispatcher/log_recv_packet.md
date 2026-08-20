# log_recv_packet

`_ZN16PacketDispatcher15log_recv_packetEP5CUser16ENUM_PACKETCLASStPci`

`PacketDispatcher::log_recv_packet(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int)`

| 类 | 地址 |
|---|---|
| `PacketDispatcher` | `0x0825f72e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f72e  _ZN16PacketDispatcher15log_recv_packetEP5CUser16ENUM_PACKETCLASStPci
#           PacketDispatcher::log_recv_packet(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int)
# range [0x0825f72e, 0x0825f75f]
0825f72e +0x00:  push   %ebp
0825f72f +0x01:  mov    %esp,%ebp
0825f731 +0x03:  push   %esi
0825f732 +0x04:  push   %ebx
0825f733 +0x05:  sub    $0x20,%esp
0825f736 +0x08:  mov    0x14(%ebp),%eax
0825f739 +0x0b:  mov    %ax,-0xc(%ebp)
0825f73d +0x0f:  movzwl -0xc(%ebp),%esi
0825f741 +0x13:  mov    0x10(%ebp),%ebx
0825f744 +0x16:  call   08260640 <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x370>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x370
0825f749 +0x1b:  mov    %esi,0x8(%esp)
0825f74d +0x1f:  mov    %ebx,0x4(%esp)
0825f751 +0x23:  mov    %eax,(%esp)
0825f754 +0x26:  call   085992c8 <_ZN13CPacketTracer9AddTcpLogEii>  ; CPacketTracer::AddTcpLog(int, int)
0825f759 +0x2b:  add    $0x20,%esp
0825f75c +0x2e:  pop    %ebx
0825f75d +0x2f:  pop    %esi
0825f75e +0x30:  pop    %ebp
0825f75f +0x31:  ret
```

## 反编译 C

```c
// PacketDispatcher::log_recv_packet @ 0x825f72e

/* PacketDispatcher::log_recv_packet(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int) */

void PacketDispatcher::log_recv_packet
               (undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  CPacketTracer *this;
  
  this = (CPacketTracer *)CPacketTracerInstance();
  CPacketTracer::AddTcpLog(this,param_3,param_4 & 0xffff);
  return;
}
```
