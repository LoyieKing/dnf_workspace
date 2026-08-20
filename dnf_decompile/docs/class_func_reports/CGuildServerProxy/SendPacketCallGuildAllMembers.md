# SendPacketCallGuildAllMembers

`_ZN17CGuildServerProxy29SendPacketCallGuildAllMembersEjj`

`CGuildServerProxy::SendPacketCallGuildAllMembers(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dd4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dd4e  _ZN17CGuildServerProxy29SendPacketCallGuildAllMembersEjj
#           CGuildServerProxy::SendPacketCallGuildAllMembers(unsigned int, unsigned int)
# range [0x0846dd4e, 0x0846dd89]
0846dd4e +0x00:  push   %ebp
0846dd4f +0x01:  mov    %esp,%ebp
0846dd51 +0x03:  sub    $0x38,%esp
0846dd54 +0x06:  lea    -0x1a(%ebp),%eax
0846dd57 +0x09:  mov    %eax,(%esp)
0846dd5a +0x0c:  call   0846f3ce <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x19e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x19e
0846dd5f +0x11:  mov    0xc(%ebp),%eax
0846dd62 +0x14:  mov    %eax,-0x10(%ebp)
0846dd65 +0x17:  mov    0x10(%ebp),%eax
0846dd68 +0x1a:  mov    %eax,-0xc(%ebp)
0846dd6b +0x1d:  movzwl -0x18(%ebp),%eax
0846dd6f +0x21:  movzwl %ax,%edx
0846dd72 +0x24:  lea    -0x1a(%ebp),%eax
0846dd75 +0x27:  mov    %edx,0x8(%esp)
0846dd79 +0x2b:  mov    %eax,0x4(%esp)
0846dd7d +0x2f:  mov    0x8(%ebp),%eax
0846dd80 +0x32:  mov    %eax,(%esp)
0846dd83 +0x35:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846dd88 +0x3a:  leave
0846dd89 +0x3b:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendPacketCallGuildAllMembers @ 0x846dd4e

/* CGuildServerProxy::SendPacketCallGuildAllMembers(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendPacketCallGuildAllMembers(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Monitor_Call_Guild_All_Members local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Monitor_Call_Guild_All_Members::Packet_Monitor_Call_Guild_All_Members(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
