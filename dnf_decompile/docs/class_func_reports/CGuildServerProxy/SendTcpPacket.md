# SendTcpPacket

`_ZN17CGuildServerProxy13SendTcpPacketEPci`

`CGuildServerProxy::SendTcpPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dcce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dcce  _ZN17CGuildServerProxy13SendTcpPacketEPci
#           CGuildServerProxy::SendTcpPacket(char*, int)
# range [0x0846dcce, 0x0846dd11]
0846dcce +0x00:  push   %ebp
0846dccf +0x01:  mov    %esp,%ebp
0846dcd1 +0x03:  sub    $0x18,%esp
0846dcd4 +0x06:  mov    0x8(%ebp),%eax
0846dcd7 +0x09:  mov    %eax,(%esp)
0846dcda +0x0c:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0846dcdf +0x11:  mov    %eax,(%esp)
0846dce2 +0x14:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0846dce7 +0x19:  cmp    $0xffffffff,%eax
0846dcea +0x1c:  sete   %al
0846dced +0x1f:  test   %al,%al
0846dcef +0x21:  jne    0846dd0f <+0x41>
0846dcf1 +0x23:  mov    0x8(%ebp),%eax
0846dcf4 +0x26:  lea    0x24(%eax),%edx
0846dcf7 +0x29:  mov    0x10(%ebp),%eax
0846dcfa +0x2c:  mov    %eax,0x8(%esp)
0846dcfe +0x30:  mov    0xc(%ebp),%eax
0846dd01 +0x33:  mov    %eax,0x4(%esp)
0846dd05 +0x37:  mov    %edx,(%esp)
0846dd08 +0x3a:  call   082fdfcc <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x27d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x27d
0846dd0d +0x3f:  jmp    0846dd10 <+0x42>
0846dd0f +0x41:  nop
0846dd10 +0x42:  leave
0846dd11 +0x43:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendTcpPacket @ 0x846dcce

/* CGuildServerProxy::SendTcpPacket(char*, int) */

void __thiscall CGuildServerProxy::SendTcpPacket(CGuildServerProxy *this,char *param_1,int param_2)

{
  CNetwork<100000,100000> *this_00;
  int iVar1;
  
  this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
  iVar1 = CNetwork<100000,100000>::get_socket(this_00);
  if (iVar1 != -1) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0x24),param_1,param_2);
  }
  return;
}
```
