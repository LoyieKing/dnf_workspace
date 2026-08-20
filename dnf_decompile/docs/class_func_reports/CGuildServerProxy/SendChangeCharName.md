# SendChangeCharName

`_ZN17CGuildServerProxy18SendChangeCharNameEjjjPc`

`CGuildServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e3c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e3c8  _ZN17CGuildServerProxy18SendChangeCharNameEjjjPc
#           CGuildServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)
# range [0x0846e3c8, 0x0846e41f]
0846e3c8 +0x00:  push   %ebp
0846e3c9 +0x01:  mov    %esp,%ebp
0846e3cb +0x03:  sub    $0x58,%esp
0846e3ce +0x06:  lea    -0x3c(%ebp),%eax
0846e3d1 +0x09:  mov    %eax,(%esp)
0846e3d4 +0x0c:  call   0846fa00 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x7d0>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x7d0
0846e3d9 +0x11:  mov    0xc(%ebp),%eax
0846e3dc +0x14:  mov    %eax,-0x32(%ebp)
0846e3df +0x17:  mov    0x10(%ebp),%eax
0846e3e2 +0x1a:  mov    %eax,-0x2e(%ebp)
0846e3e5 +0x1d:  mov    0x14(%ebp),%eax
0846e3e8 +0x20:  mov    %eax,-0x2a(%ebp)
0846e3eb +0x23:  mov    0x18(%ebp),%eax
0846e3ee +0x26:  mov    %eax,0x4(%esp)
0846e3f2 +0x2a:  lea    -0x3c(%ebp),%eax
0846e3f5 +0x2d:  add    $0x16,%eax
0846e3f8 +0x30:  mov    %eax,(%esp)
0846e3fb +0x33:  call   0807def0 <_init+0x7e8>
0846e400 +0x38:  movzwl -0x3a(%ebp),%eax
0846e404 +0x3c:  movzwl %ax,%edx
0846e407 +0x3f:  lea    -0x3c(%ebp),%eax
0846e40a +0x42:  mov    %edx,0x8(%esp)
0846e40e +0x46:  mov    %eax,0x4(%esp)
0846e412 +0x4a:  mov    0x8(%ebp),%eax
0846e415 +0x4d:  mov    %eax,(%esp)
0846e418 +0x50:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e41d +0x55:  leave
0846e41e +0x56:  ret
0846e41f +0x57:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendChangeCharName @ 0x846e3c8

/* CGuildServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*) */

void __thiscall
CGuildServerProxy::SendChangeCharName
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,char *param_4)

{
  Packet_Change_Char_Name local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  uint local_2e;
  char acStack_2a [38];
  
  Packet_Change_Char_Name::Packet_Change_Char_Name(local_40);
  local_36 = param_1;
  local_32 = param_2;
  local_2e = param_3;
  strcpy(acStack_2a,param_4);
  SendTcpPacket(this,(char *)local_40,(uint)local_3e);
  return;
}
```
