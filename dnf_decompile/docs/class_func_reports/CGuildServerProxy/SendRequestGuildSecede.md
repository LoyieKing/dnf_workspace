# SendRequestGuildSecede

`_ZN17CGuildServerProxy22SendRequestGuildSecedeEjjiPc`

`CGuildServerProxy::SendRequestGuildSecede(unsigned int, unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e190  _ZN17CGuildServerProxy22SendRequestGuildSecedeEjjiPc
#           CGuildServerProxy::SendRequestGuildSecede(unsigned int, unsigned int, int, char*)
# range [0x0846e190, 0x0846e1f3]
0846e190 +0x00:  push   %ebp
0846e191 +0x01:  mov    %esp,%ebp
0846e193 +0x03:  sub    $0x58,%esp
0846e196 +0x06:  lea    -0x3c(%ebp),%eax
0846e199 +0x09:  mov    %eax,(%esp)
0846e19c +0x0c:  call   0846f926 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x6f6>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x6f6
0846e1a1 +0x11:  mov    0xc(%ebp),%eax
0846e1a4 +0x14:  mov    %eax,-0x32(%ebp)
0846e1a7 +0x17:  mov    0x10(%ebp),%eax
0846e1aa +0x1a:  mov    %eax,-0x2e(%ebp)
0846e1ad +0x1d:  mov    0x14(%ebp),%eax
0846e1b0 +0x20:  mov    %eax,-0x2a(%ebp)
0846e1b3 +0x23:  cmpl   $0x0,0x14(%ebp)
0846e1b7 +0x27:  jle    0846e1d5 <+0x45>
0846e1b9 +0x29:  mov    0x14(%ebp),%eax
0846e1bc +0x2c:  mov    %eax,0x8(%esp)
0846e1c0 +0x30:  mov    0x18(%ebp),%eax
0846e1c3 +0x33:  mov    %eax,0x4(%esp)
0846e1c7 +0x37:  lea    -0x3c(%ebp),%eax
0846e1ca +0x3a:  add    $0x16,%eax
0846e1cd +0x3d:  mov    %eax,(%esp)
0846e1d0 +0x40:  call   0807d8a0 <_init+0x198>
0846e1d5 +0x45:  movzwl -0x3a(%ebp),%eax
0846e1d9 +0x49:  movzwl %ax,%edx
0846e1dc +0x4c:  lea    -0x3c(%ebp),%eax
0846e1df +0x4f:  mov    %edx,0x8(%esp)
0846e1e3 +0x53:  mov    %eax,0x4(%esp)
0846e1e7 +0x57:  mov    0x8(%ebp),%eax
0846e1ea +0x5a:  mov    %eax,(%esp)
0846e1ed +0x5d:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846e1f2 +0x62:  leave
0846e1f3 +0x63:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendRequestGuildSecede @ 0x846e190

/* CGuildServerProxy::SendRequestGuildSecede(unsigned int, unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendRequestGuildSecede
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,char *param_4)

{
  Packet_Guild_Request_Guild_Secede local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  int local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Guild_Request_Guild_Secede::Packet_Guild_Request_Guild_Secede(local_40);
  local_36 = param_1;
  local_32 = param_2;
  local_2e = param_3;
  if (0 < param_3) {
    memcpy(auStack_2a,param_4,param_3);
  }
  SendPacket(this,(char *)local_40,(uint)local_3e);
  return;
}
```
