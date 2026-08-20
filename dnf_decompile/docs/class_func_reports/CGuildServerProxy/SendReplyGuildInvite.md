# SendReplyGuildInvite

`_ZN17CGuildServerProxy20SendReplyGuildInviteEjh`

`CGuildServerProxy::SendReplyGuildInvite(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e14c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e14c  _ZN17CGuildServerProxy20SendReplyGuildInviteEjh
#           CGuildServerProxy::SendReplyGuildInvite(unsigned int, unsigned char)
# range [0x0846e14c, 0x0846e18f]
0846e14c +0x00:  push   %ebp
0846e14d +0x01:  mov    %esp,%ebp
0846e14f +0x03:  sub    $0x38,%esp
0846e152 +0x06:  mov    0x10(%ebp),%eax
0846e155 +0x09:  mov    %al,-0x1c(%ebp)
0846e158 +0x0c:  lea    -0x17(%ebp),%eax
0846e15b +0x0f:  mov    %eax,(%esp)
0846e15e +0x12:  call   0846f902 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x6d2>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x6d2
0846e163 +0x17:  mov    0xc(%ebp),%eax
0846e166 +0x1a:  mov    %eax,-0xd(%ebp)
0846e169 +0x1d:  movzbl -0x1c(%ebp),%eax
0846e16d +0x21:  mov    %al,-0x9(%ebp)
0846e170 +0x24:  movzwl -0x15(%ebp),%eax
0846e174 +0x28:  movzwl %ax,%edx
0846e177 +0x2b:  lea    -0x17(%ebp),%eax
0846e17a +0x2e:  mov    %edx,0x8(%esp)
0846e17e +0x32:  mov    %eax,0x4(%esp)
0846e182 +0x36:  mov    0x8(%ebp),%eax
0846e185 +0x39:  mov    %eax,(%esp)
0846e188 +0x3c:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846e18d +0x41:  leave
0846e18e +0x42:  ret
0846e18f +0x43:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendReplyGuildInvite @ 0x846e14c

/* CGuildServerProxy::SendReplyGuildInvite(unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::SendReplyGuildInvite(CGuildServerProxy *this,uint param_1,uchar param_2)

{
  Packet_Guild_Reply_Guild_Invite_From_Invited local_1b [2];
  ushort local_19;
  uint local_11;
  uchar local_d;
  
  Packet_Guild_Reply_Guild_Invite_From_Invited::Packet_Guild_Reply_Guild_Invite_From_Invited
            (local_1b);
  local_11 = param_1;
  local_d = param_2;
  SendPacket(this,(char *)local_1b,(uint)local_19);
  return;
}
```
