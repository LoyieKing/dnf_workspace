# SendGuildWarEnd

`_ZN19CMonitorServerProxy15SendGuildWarEndEh`

`CMonitorServerProxy::SendGuildWarEnd(unsigned char)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x084710a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084710a8  _ZN19CMonitorServerProxy15SendGuildWarEndEh
#           CMonitorServerProxy::SendGuildWarEnd(unsigned char)
# range [0x084710a8, 0x084710e5]
084710a8 +0x00:  push   %ebp
084710a9 +0x01:  mov    %esp,%ebp
084710ab +0x03:  sub    $0x38,%esp
084710ae +0x06:  mov    0xc(%ebp),%eax
084710b1 +0x09:  mov    %al,-0x1c(%ebp)
084710b4 +0x0c:  lea    -0x13(%ebp),%eax
084710b7 +0x0f:  mov    %eax,(%esp)
084710ba +0x12:  call   0846f576 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x346>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x346
084710bf +0x17:  movzbl -0x1c(%ebp),%eax
084710c3 +0x1b:  mov    %al,-0x9(%ebp)
084710c6 +0x1e:  movzwl -0x11(%ebp),%eax
084710ca +0x22:  movzwl %ax,%edx
084710cd +0x25:  lea    -0x13(%ebp),%eax
084710d0 +0x28:  mov    %edx,0x8(%esp)
084710d4 +0x2c:  mov    %eax,0x4(%esp)
084710d8 +0x30:  mov    0x8(%ebp),%eax
084710db +0x33:  mov    %eax,(%esp)
084710de +0x36:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084710e3 +0x3b:  leave
084710e4 +0x3c:  ret
084710e5 +0x3d:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::SendGuildWarEnd @ 0x84710a8

/* CMonitorServerProxy::SendGuildWarEnd(unsigned char) */

void __thiscall CMonitorServerProxy::SendGuildWarEnd(CMonitorServerProxy *this,uchar param_1)

{
  Packet_Notice_Guild_War_End local_17 [2];
  ushort local_15;
  uchar local_d;
  
  Packet_Notice_Guild_War_End::Packet_Notice_Guild_War_End(local_17);
  local_d = param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}
```
