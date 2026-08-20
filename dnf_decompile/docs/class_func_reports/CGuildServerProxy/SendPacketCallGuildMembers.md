# SendPacketCallGuildMembers

`_ZN17CGuildServerProxy26SendPacketCallGuildMembersEjj`

`CGuildServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dd12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dd12  _ZN17CGuildServerProxy26SendPacketCallGuildMembersEjj
#           CGuildServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int)
# range [0x0846dd12, 0x0846dd4d]
0846dd12 +0x00:  push   %ebp
0846dd13 +0x01:  mov    %esp,%ebp
0846dd15 +0x03:  sub    $0x38,%esp
0846dd18 +0x06:  lea    -0x1a(%ebp),%eax
0846dd1b +0x09:  mov    %eax,(%esp)
0846dd1e +0x0c:  call   0846f3a0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x170>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x170
0846dd23 +0x11:  mov    0xc(%ebp),%eax
0846dd26 +0x14:  mov    %eax,-0x10(%ebp)
0846dd29 +0x17:  mov    0x10(%ebp),%eax
0846dd2c +0x1a:  mov    %eax,-0xc(%ebp)
0846dd2f +0x1d:  movzwl -0x18(%ebp),%eax
0846dd33 +0x21:  movzwl %ax,%edx
0846dd36 +0x24:  lea    -0x1a(%ebp),%eax
0846dd39 +0x27:  mov    %edx,0x8(%esp)
0846dd3d +0x2b:  mov    %eax,0x4(%esp)
0846dd41 +0x2f:  mov    0x8(%ebp),%eax
0846dd44 +0x32:  mov    %eax,(%esp)
0846dd47 +0x35:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846dd4c +0x3a:  leave
0846dd4d +0x3b:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendPacketCallGuildMembers @ 0x846dd12

/* CGuildServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendPacketCallGuildMembers(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Monitor_Call_Guild_Members local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Monitor_Call_Guild_Members::Packet_Monitor_Call_Guild_Members(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
