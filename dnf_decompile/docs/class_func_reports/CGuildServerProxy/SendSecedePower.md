# SendSecedePower

`_ZN17CGuildServerProxy15SendSecedePowerEjj`

`CGuildServerProxy::SendSecedePower(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e500  _ZN17CGuildServerProxy15SendSecedePowerEjj
#           CGuildServerProxy::SendSecedePower(unsigned int, unsigned int)
# range [0x0846e500, 0x0846e53b]
0846e500 +0x00:  push   %ebp
0846e501 +0x01:  mov    %esp,%ebp
0846e503 +0x03:  sub    $0x38,%esp
0846e506 +0x06:  lea    -0x1b(%ebp),%eax
0846e509 +0x09:  mov    %eax,(%esp)
0846e50c +0x0c:  call   0846f812 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x5e2>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x5e2
0846e511 +0x11:  mov    0xc(%ebp),%eax
0846e514 +0x14:  mov    %eax,-0x11(%ebp)
0846e517 +0x17:  mov    0x10(%ebp),%eax
0846e51a +0x1a:  mov    %eax,-0xd(%ebp)
0846e51d +0x1d:  movzwl -0x19(%ebp),%eax
0846e521 +0x21:  movzwl %ax,%edx
0846e524 +0x24:  lea    -0x1b(%ebp),%eax
0846e527 +0x27:  mov    %edx,0x8(%esp)
0846e52b +0x2b:  mov    %eax,0x4(%esp)
0846e52f +0x2f:  mov    0x8(%ebp),%eax
0846e532 +0x32:  mov    %eax,(%esp)
0846e535 +0x35:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e53a +0x3a:  leave
0846e53b +0x3b:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendSecedePower @ 0x846e500

/* CGuildServerProxy::SendSecedePower(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendSecedePower(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Request_Secede_Power local_1f [2];
  ushort local_1d;
  uint local_15;
  uint local_11;
  
  Packet_Request_Secede_Power::Packet_Request_Secede_Power(local_1f);
  local_15 = param_1;
  local_11 = param_2;
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}
```
