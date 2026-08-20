# SendHeartBeatPacket

`_ZN17CHadesServerProxy19SendHeartBeatPacketEti`

`CHadesServerProxy::SendHeartBeatPacket(unsigned short, int)`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x08470682` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470682  _ZN17CHadesServerProxy19SendHeartBeatPacketEti
#           CHadesServerProxy::SendHeartBeatPacket(unsigned short, int)
# range [0x08470682, 0x084706bd]
08470682 +0x00:  push   %ebp
08470683 +0x01:  mov    %esp,%ebp
08470685 +0x03:  sub    $0x38,%esp
08470688 +0x06:  mov    0xc(%ebp),%eax
0847068b +0x09:  mov    %ax,-0x1c(%ebp)
0847068f +0x0d:  lea    -0x16(%ebp),%eax
08470692 +0x10:  mov    %eax,(%esp)
08470695 +0x13:  call   084708e4 <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x1d>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x1d
0847069a +0x18:  mov    0x10(%ebp),%eax
0847069d +0x1b:  mov    %ax,-0xa(%ebp)
084706a1 +0x1f:  movzwl -0x1c(%ebp),%eax
084706a5 +0x23:  mov    %ax,-0xc(%ebp)
084706a9 +0x27:  lea    -0x16(%ebp),%eax
084706ac +0x2a:  mov    %eax,0x4(%esp)
084706b0 +0x2e:  mov    0x8(%ebp),%eax
084706b3 +0x31:  mov    %eax,(%esp)
084706b6 +0x34:  call   084706be <_ZN17CHadesServerProxy18SendHadesUdpPacketEPc>  ; CHadesServerProxy::SendHadesUdpPacket(char*)
084706bb +0x39:  leave
084706bc +0x3a:  ret
084706bd +0x3b:  nop
```

## 反编译 C

```c
// CHadesServerProxy::SendHeartBeatPacket @ 0x8470682

/* CHadesServerProxy::SendHeartBeatPacket(unsigned short, int) */

void __thiscall
CHadesServerProxy::SendHeartBeatPacket(CHadesServerProxy *this,ushort param_1,int param_2)

{
  Packet_Hades_Udp_HeartBeat local_1a [10];
  ushort local_10;
  undefined2 local_e;
  
  Packet_Hades_Udp_HeartBeat::Packet_Hades_Udp_HeartBeat(local_1a);
  local_e = (undefined2)param_2;
  local_10 = param_1;
  SendHadesUdpPacket(this,(char *)local_1a);
  return;
}
```
