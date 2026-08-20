# SendHeartBeat

`_ZN17CGuildServerProxy13SendHeartBeatEi`

`CGuildServerProxy::SendHeartBeat(int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846daf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846daf4  _ZN17CGuildServerProxy13SendHeartBeatEi
#           CGuildServerProxy::SendHeartBeat(int)
# range [0x0846daf4, 0x0846db29]
0846daf4 +0x00:  push   %ebp
0846daf5 +0x01:  mov    %esp,%ebp
0846daf7 +0x03:  sub    $0x28,%esp
0846dafa +0x06:  lea    -0x13(%ebp),%eax
0846dafd +0x09:  mov    %eax,(%esp)
0846db00 +0x0c:  call   0846f34c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x11c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x11c
0846db05 +0x11:  mov    0xc(%ebp),%eax
0846db08 +0x14:  mov    %al,-0x9(%ebp)
0846db0b +0x17:  movzwl -0x11(%ebp),%eax
0846db0f +0x1b:  movzwl %ax,%edx
0846db12 +0x1e:  lea    -0x13(%ebp),%eax
0846db15 +0x21:  mov    %edx,0x8(%esp)
0846db19 +0x25:  mov    %eax,0x4(%esp)
0846db1d +0x29:  mov    0x8(%ebp),%eax
0846db20 +0x2c:  mov    %eax,(%esp)
0846db23 +0x2f:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846db28 +0x34:  leave
0846db29 +0x35:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendHeartBeat @ 0x846daf4

/* CGuildServerProxy::SendHeartBeat(int) */

void __thiscall CGuildServerProxy::SendHeartBeat(CGuildServerProxy *this,int param_1)

{
  Packet_Monitor_UDP_HeartBeat local_17 [2];
  ushort local_15;
  undefined1 local_d;
  
  Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat(local_17);
  local_d = (undefined1)param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}
```
