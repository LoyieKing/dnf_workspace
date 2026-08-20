# SendGuildCreate

`_ZN17CGuildServerProxy15SendGuildCreateEjPcS0_`

`CGuildServerProxy::SendGuildCreate(unsigned int, char*, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e304` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e304  _ZN17CGuildServerProxy15SendGuildCreateEjPcS0_
#           CGuildServerProxy::SendGuildCreate(unsigned int, char*, char*)
# range [0x0846e304, 0x0846e375]
0846e304 +0x00:  push   %ebp
0846e305 +0x01:  mov    %esp,%ebp
0846e307 +0x03:  sub    $0x58,%esp
0846e30a +0x06:  lea    -0x3a(%ebp),%eax
0846e30d +0x09:  mov    %eax,(%esp)
0846e310 +0x0c:  call   0846fa60 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x830>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x830
0846e315 +0x11:  mov    0xc(%ebp),%eax
0846e318 +0x14:  mov    %eax,-0x30(%ebp)
0846e31b +0x17:  movl   $0x16,0x8(%esp)
0846e323 +0x1f:  mov    0x10(%ebp),%eax
0846e326 +0x22:  mov    %eax,0x4(%esp)
0846e32a +0x26:  lea    -0x3a(%ebp),%eax
0846e32d +0x29:  add    $0xe,%eax
0846e330 +0x2c:  mov    %eax,(%esp)
0846e333 +0x2f:  call   0807d8a0 <_init+0x198>
0846e338 +0x34:  movl   $0xd,0x8(%esp)
0846e340 +0x3c:  movl   $0x0,0x4(%esp)
0846e348 +0x44:  lea    -0x3a(%ebp),%eax
0846e34b +0x47:  add    $0x25,%eax
0846e34e +0x4a:  mov    %eax,(%esp)
0846e351 +0x4d:  call   0807dcc0 <_init+0x5b8>
0846e356 +0x52:  movzwl -0x38(%ebp),%eax
0846e35a +0x56:  movzwl %ax,%edx
0846e35d +0x59:  lea    -0x3a(%ebp),%eax
0846e360 +0x5c:  mov    %edx,0x8(%esp)
0846e364 +0x60:  mov    %eax,0x4(%esp)
0846e368 +0x64:  mov    0x8(%ebp),%eax
0846e36b +0x67:  mov    %eax,(%esp)
0846e36e +0x6a:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e373 +0x6f:  leave
0846e374 +0x70:  ret
0846e375 +0x71:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildCreate @ 0x846e304

/* CGuildServerProxy::SendGuildCreate(unsigned int, char*, char*) */

void CGuildServerProxy::SendGuildCreate(uint param_1,char *param_2,char *param_3)

{
  Packet_Request_Guild_Create local_3e [2];
  ushort local_3c;
  char *local_34;
  undefined1 auStack_30 [23];
  undefined1 auStack_19 [21];
  
  Packet_Request_Guild_Create::Packet_Request_Guild_Create(local_3e);
  local_34 = param_2;
  memcpy(auStack_30,param_3,0x16);
  memset(auStack_19,0,0xd);
  SendTcpPacket((CGuildServerProxy *)param_1,(char *)local_3e,(uint)local_3c);
  return;
}
```
