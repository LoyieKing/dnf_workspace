# SendHeartBeat

`_ZN19CMonitorServerProxy13SendHeartBeatEi`

`CMonitorServerProxy::SendHeartBeat(int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470c5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470c5e  _ZN19CMonitorServerProxy13SendHeartBeatEi
#           CMonitorServerProxy::SendHeartBeat(int)
# range [0x08470c5e, 0x08470c93]
08470c5e +0x00:  push   %ebp
08470c5f +0x01:  mov    %esp,%ebp
08470c61 +0x03:  sub    $0x28,%esp
08470c64 +0x06:  lea    -0x13(%ebp),%eax
08470c67 +0x09:  mov    %eax,(%esp)
08470c6a +0x0c:  call   0846f34c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x11c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x11c
08470c6f +0x11:  mov    0xc(%ebp),%eax
08470c72 +0x14:  mov    %al,-0x9(%ebp)
08470c75 +0x17:  movzwl -0x11(%ebp),%eax
08470c79 +0x1b:  movzwl %ax,%edx
08470c7c +0x1e:  lea    -0x13(%ebp),%eax
08470c7f +0x21:  mov    %edx,0x8(%esp)
08470c83 +0x25:  mov    %eax,0x4(%esp)
08470c87 +0x29:  mov    0x8(%ebp),%eax
08470c8a +0x2c:  mov    %eax,(%esp)
08470c8d +0x2f:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08470c92 +0x34:  leave
08470c93 +0x35:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendHeartBeat @ 0x8470c5e

/* CMonitorServerProxy::SendHeartBeat(int) */

void __thiscall CMonitorServerProxy::SendHeartBeat(CMonitorServerProxy *this,int param_1)

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
