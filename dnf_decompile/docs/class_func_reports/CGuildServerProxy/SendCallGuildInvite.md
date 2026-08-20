# SendCallGuildInvite

`_ZN17CGuildServerProxy19SendCallGuildInviteEjjPc`

`CGuildServerProxy::SendCallGuildInvite(unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e0f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e0f2  _ZN17CGuildServerProxy19SendCallGuildInviteEjjPc
#           CGuildServerProxy::SendCallGuildInvite(unsigned int, unsigned int, char*)
# range [0x0846e0f2, 0x0846e14b]
0846e0f2 +0x00:  push   %ebp
0846e0f3 +0x01:  mov    %esp,%ebp
0846e0f5 +0x03:  sub    $0x48,%esp
0846e0f8 +0x06:  lea    -0x38(%ebp),%eax
0846e0fb +0x09:  mov    %eax,(%esp)
0846e0fe +0x0c:  call   0846f8c0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x690>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x690
0846e103 +0x11:  mov    0xc(%ebp),%eax
0846e106 +0x14:  mov    %eax,-0x2e(%ebp)
0846e109 +0x17:  mov    0x10(%ebp),%eax
0846e10c +0x1a:  mov    %eax,-0x2a(%ebp)
0846e10f +0x1d:  movl   $0x1d,0x8(%esp)
0846e117 +0x25:  mov    0x14(%ebp),%eax
0846e11a +0x28:  mov    %eax,0x4(%esp)
0846e11e +0x2c:  lea    -0x38(%ebp),%eax
0846e121 +0x2f:  add    $0x12,%eax
0846e124 +0x32:  mov    %eax,(%esp)
0846e127 +0x35:  call   0807d8a0 <_init+0x198>
0846e12c +0x3a:  movzwl -0x36(%ebp),%eax
0846e130 +0x3e:  movzwl %ax,%edx
0846e133 +0x41:  lea    -0x38(%ebp),%eax
0846e136 +0x44:  mov    %edx,0x8(%esp)
0846e13a +0x48:  mov    %eax,0x4(%esp)
0846e13e +0x4c:  mov    0x8(%ebp),%eax
0846e141 +0x4f:  mov    %eax,(%esp)
0846e144 +0x52:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846e149 +0x57:  leave
0846e14a +0x58:  ret
0846e14b +0x59:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendCallGuildInvite @ 0x846e0f2

/* CGuildServerProxy::SendCallGuildInvite(unsigned int, unsigned int, char*) */

void __thiscall
CGuildServerProxy::SendCallGuildInvite
          (CGuildServerProxy *this,uint param_1,uint param_2,char *param_3)

{
  Packet_Guild_Call_Guild_Invite local_3c [2];
  ushort local_3a;
  uint local_32;
  uint local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Guild_Call_Guild_Invite::Packet_Guild_Call_Guild_Invite(local_3c);
  local_32 = param_1;
  local_2e = param_2;
  memcpy(auStack_2a,param_3,0x1d);
  SendPacket(this,(char *)local_3c,(uint)local_3a);
  return;
}
```
