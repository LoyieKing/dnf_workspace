# SendGuildNameChange

`_ZN17CGuildServerProxy19SendGuildNameChangeEjjPc`

`CGuildServerProxy::SendGuildNameChange(unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e376` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e376  _ZN17CGuildServerProxy19SendGuildNameChangeEjjPc
#           CGuildServerProxy::SendGuildNameChange(unsigned int, unsigned int, char*)
# range [0x0846e376, 0x0846e3c7]
0846e376 +0x00:  push   %ebp
0846e377 +0x01:  mov    %esp,%ebp
0846e379 +0x03:  sub    $0x48,%esp
0846e37c +0x06:  lea    -0x31(%ebp),%eax
0846e37f +0x09:  mov    %eax,(%esp)
0846e382 +0x0c:  call   0846f9aa <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x77a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x77a
0846e387 +0x11:  mov    0xc(%ebp),%eax
0846e38a +0x14:  mov    %eax,-0x23(%ebp)
0846e38d +0x17:  mov    0x10(%ebp),%eax
0846e390 +0x1a:  mov    %eax,-0x27(%ebp)
0846e393 +0x1d:  mov    0x14(%ebp),%eax
0846e396 +0x20:  mov    %eax,0x4(%esp)
0846e39a +0x24:  lea    -0x31(%ebp),%eax
0846e39d +0x27:  add    $0x12,%eax
0846e3a0 +0x2a:  mov    %eax,(%esp)
0846e3a3 +0x2d:  call   0807def0 <_init+0x7e8>
0846e3a8 +0x32:  movzwl -0x2f(%ebp),%eax
0846e3ac +0x36:  movzwl %ax,%edx
0846e3af +0x39:  lea    -0x31(%ebp),%eax
0846e3b2 +0x3c:  mov    %edx,0x8(%esp)
0846e3b6 +0x40:  mov    %eax,0x4(%esp)
0846e3ba +0x44:  mov    0x8(%ebp),%eax
0846e3bd +0x47:  mov    %eax,(%esp)
0846e3c0 +0x4a:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e3c5 +0x4f:  leave
0846e3c6 +0x50:  ret
0846e3c7 +0x51:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildNameChange @ 0x846e376

/* CGuildServerProxy::SendGuildNameChange(unsigned int, unsigned int, char*) */

void __thiscall
CGuildServerProxy::SendGuildNameChange
          (CGuildServerProxy *this,uint param_1,uint param_2,char *param_3)

{
  Packet_Change_Guild_Name local_35 [2];
  ushort local_33;
  uint local_2b;
  uint local_27;
  char acStack_23 [31];
  
  Packet_Change_Guild_Name::Packet_Change_Guild_Name(local_35);
  local_27 = param_1;
  local_2b = param_2;
  strcpy(acStack_23,param_3);
  SendTcpPacket(this,(char *)local_35,(uint)local_33);
  return;
}
```
