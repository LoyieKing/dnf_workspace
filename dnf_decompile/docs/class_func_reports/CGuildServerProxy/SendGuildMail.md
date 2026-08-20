# SendGuildMail

`_ZN17CGuildServerProxy13SendGuildMailEjjiPc`

`CGuildServerProxy::SendGuildMail(unsigned int, unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e084  _ZN17CGuildServerProxy13SendGuildMailEjjiPc
#           CGuildServerProxy::SendGuildMail(unsigned int, unsigned int, int, char*)
# range [0x0846e084, 0x0846e0f1]
0846e084 +0x00:  push   %ebp
0846e085 +0x01:  mov    %esp,%ebp
0846e087 +0x03:  sub    $0x138,%esp
0846e08d +0x09:  lea    -0x11a(%ebp),%eax
0846e093 +0x0f:  mov    %eax,(%esp)
0846e096 +0x12:  call   0846f87e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x64e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x64e
0846e09b +0x17:  mov    0xc(%ebp),%eax
0846e09e +0x1a:  mov    %eax,-0x110(%ebp)
0846e0a4 +0x20:  mov    0x10(%ebp),%eax
0846e0a7 +0x23:  mov    %eax,-0x10c(%ebp)
0846e0ad +0x29:  mov    0x14(%ebp),%eax
0846e0b0 +0x2c:  mov    %eax,0x8(%esp)
0846e0b4 +0x30:  mov    0x18(%ebp),%eax
0846e0b7 +0x33:  mov    %eax,0x4(%esp)
0846e0bb +0x37:  lea    -0x11a(%ebp),%eax
0846e0c1 +0x3d:  add    $0x12,%eax
0846e0c4 +0x40:  mov    %eax,(%esp)
0846e0c7 +0x43:  call   0807d8a0 <_init+0x198>
0846e0cc +0x48:  movzwl -0x118(%ebp),%eax
0846e0d3 +0x4f:  movzwl %ax,%edx
0846e0d6 +0x52:  lea    -0x11a(%ebp),%eax
0846e0dc +0x58:  mov    %edx,0x8(%esp)
0846e0e0 +0x5c:  mov    %eax,0x4(%esp)
0846e0e4 +0x60:  mov    0x8(%ebp),%eax
0846e0e7 +0x63:  mov    %eax,(%esp)
0846e0ea +0x66:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846e0ef +0x6b:  leave
0846e0f0 +0x6c:  ret
0846e0f1 +0x6d:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildMail @ 0x846e084

/* CGuildServerProxy::SendGuildMail(unsigned int, unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendGuildMail
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,char *param_4)

{
  Packet_Monitor_Send_Guild_Mail local_11e [2];
  ushort local_11c;
  uint local_114;
  uint local_110;
  undefined1 auStack_10c [264];
  
  Packet_Monitor_Send_Guild_Mail::Packet_Monitor_Send_Guild_Mail(local_11e);
  local_114 = param_1;
  local_110 = param_2;
  memcpy(auStack_10c,param_4,param_3);
  SendPacket(this,(char *)local_11e,(uint)local_11c);
  return;
}
```
