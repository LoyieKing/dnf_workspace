# SendGuildWarStart

`_ZN19CMonitorServerProxy17SendGuildWarStartEh`

`CMonitorServerProxy::SendGuildWarStart(unsigned char)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x084710e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084710e6  _ZN19CMonitorServerProxy17SendGuildWarStartEh
#           CMonitorServerProxy::SendGuildWarStart(unsigned char)
# range [0x084710e6, 0x08471123]
084710e6 +0x00:  push   %ebp
084710e7 +0x01:  mov    %esp,%ebp
084710e9 +0x03:  sub    $0x38,%esp
084710ec +0x06:  mov    0xc(%ebp),%eax
084710ef +0x09:  mov    %al,-0x1c(%ebp)
084710f2 +0x0c:  lea    -0x13(%ebp),%eax
084710f5 +0x0f:  mov    %eax,(%esp)
084710f8 +0x12:  call   0846f59a <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x36a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x36a
084710fd +0x17:  movzbl -0x1c(%ebp),%eax
08471101 +0x1b:  mov    %al,-0x9(%ebp)
08471104 +0x1e:  movzwl -0x11(%ebp),%eax
08471108 +0x22:  movzwl %ax,%edx
0847110b +0x25:  lea    -0x13(%ebp),%eax
0847110e +0x28:  mov    %edx,0x8(%esp)
08471112 +0x2c:  mov    %eax,0x4(%esp)
08471116 +0x30:  mov    0x8(%ebp),%eax
08471119 +0x33:  mov    %eax,(%esp)
0847111c +0x36:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08471121 +0x3b:  leave
08471122 +0x3c:  ret
08471123 +0x3d:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::SendGuildWarStart @ 0x84710e6

/* CMonitorServerProxy::SendGuildWarStart(unsigned char) */

void __thiscall CMonitorServerProxy::SendGuildWarStart(CMonitorServerProxy *this,uchar param_1)

{
  Packet_Notice_Guild_War_Start local_17 [2];
  ushort local_15;
  uchar local_d;
  
  Packet_Notice_Guild_War_Start::Packet_Notice_Guild_War_Start(local_17);
  local_d = param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}
```
