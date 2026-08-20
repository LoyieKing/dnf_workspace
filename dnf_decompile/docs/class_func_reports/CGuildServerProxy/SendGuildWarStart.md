# SendGuildWarStart

`_ZN17CGuildServerProxy17SendGuildWarStartEh`

`CGuildServerProxy::SendGuildWarStart(unsigned char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846df90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846df90  _ZN17CGuildServerProxy17SendGuildWarStartEh
#           CGuildServerProxy::SendGuildWarStart(unsigned char)
# range [0x0846df90, 0x0846dfcd]
0846df90 +0x00:  push   %ebp
0846df91 +0x01:  mov    %esp,%ebp
0846df93 +0x03:  sub    $0x38,%esp
0846df96 +0x06:  mov    0xc(%ebp),%eax
0846df99 +0x09:  mov    %al,-0x1c(%ebp)
0846df9c +0x0c:  lea    -0x13(%ebp),%eax
0846df9f +0x0f:  mov    %eax,(%esp)
0846dfa2 +0x12:  call   0846f59a <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x36a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x36a
0846dfa7 +0x17:  movzbl -0x1c(%ebp),%eax
0846dfab +0x1b:  mov    %al,-0x9(%ebp)
0846dfae +0x1e:  movzwl -0x11(%ebp),%eax
0846dfb2 +0x22:  movzwl %ax,%edx
0846dfb5 +0x25:  lea    -0x13(%ebp),%eax
0846dfb8 +0x28:  mov    %edx,0x8(%esp)
0846dfbc +0x2c:  mov    %eax,0x4(%esp)
0846dfc0 +0x30:  mov    0x8(%ebp),%eax
0846dfc3 +0x33:  mov    %eax,(%esp)
0846dfc6 +0x36:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846dfcb +0x3b:  leave
0846dfcc +0x3c:  ret
0846dfcd +0x3d:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildWarStart @ 0x846df90

/* CGuildServerProxy::SendGuildWarStart(unsigned char) */

void __thiscall CGuildServerProxy::SendGuildWarStart(CGuildServerProxy *this,uchar param_1)

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
