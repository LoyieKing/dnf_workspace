# OnTcpSend

`_ZN17CGuildServerProxy9OnTcpSendEv`

`CGuildServerProxy::OnTcpSend()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e5cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e5cc  _ZN17CGuildServerProxy9OnTcpSendEv
#           CGuildServerProxy::OnTcpSend()
# range [0x0846e5cc, 0x0846e66b]
0846e5cc +0x00:  push   %ebp
0846e5cd +0x01:  mov    %esp,%ebp
0846e5cf +0x03:  push   %esi
0846e5d0 +0x04:  push   %ebx
0846e5d1 +0x05:  sub    $0x20,%esp
0846e5d4 +0x08:  mov    0x8(%ebp),%eax
0846e5d7 +0x0b:  add    $0x24,%eax
0846e5da +0x0e:  mov    %eax,(%esp)
0846e5dd +0x11:  call   082fe352 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x603>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x603
0846e5e2 +0x16:  shr    $0x1f,%eax
0846e5e5 +0x19:  test   %al,%al
0846e5e7 +0x1b:  je     0846e65f <+0x93>
0846e5e9 +0x1d:  call   0807dd70 <_init+0x668>
0846e5ee +0x22:  mov    (%eax),%eax
0846e5f0 +0x24:  mov    %eax,(%esp)
0846e5f3 +0x27:  call   0807d730 <_init+0x28>
0846e5f8 +0x2c:  mov    %eax,%esi
0846e5fa +0x2e:  mov    0x8(%ebp),%eax
0846e5fd +0x31:  mov    %eax,(%esp)
0846e600 +0x34:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0846e605 +0x39:  mov    %eax,(%esp)
0846e608 +0x3c:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0846e60d +0x41:  mov    %eax,%ebx
0846e60f +0x43:  movl   $0x0,0xc(%esp)
0846e617 +0x4b:  movl   $0x733,0x8(%esp)
0846e61f +0x53:  movl   $&_ZZN17CGuildServerProxy9OnTcpSendEvE19__PRETTY_FUNCTION__,0x4(%esp)
0846e627 +0x5b:  lea    -0x18(%ebp),%eax
0846e62a +0x5e:  mov    %eax,(%esp)
0846e62d +0x61:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0846e632 +0x66:  mov    %esi,0xc(%esp)
0846e636 +0x6a:  mov    %ebx,0x8(%esp)
0846e63a +0x6e:  movl   $"OnSend() Socket[%d] Error(%s)",0x4(%esp)
0846e642 +0x76:  lea    -0x18(%ebp),%eax
0846e645 +0x79:  mov    %eax,(%esp)
0846e648 +0x7c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846e64d +0x81:  mov    0x8(%ebp),%eax
0846e650 +0x84:  mov    %eax,(%esp)
0846e653 +0x87:  call   0846da84 <_ZN17CGuildServerProxy10DisconnectEv>  ; CGuildServerProxy::Disconnect()
0846e658 +0x8c:  mov    $0xffffffff,%eax
0846e65d +0x91:  jmp    0846e665 <+0x99>
0846e65f +0x93:  mov    0x8(%ebp),%eax
0846e662 +0x96:  mov    0x3c(%eax),%eax
0846e665 +0x99:  add    $0x20,%esp
0846e668 +0x9c:  pop    %ebx
0846e669 +0x9d:  pop    %esi
0846e66a +0x9e:  pop    %ebp
0846e66b +0x9f:  ret
```

## 反编译 C

```c
// CGuildServerProxy::OnTcpSend @ 0x846e5cc

/* CGuildServerProxy::OnTcpSend() */

undefined4 __thiscall CGuildServerProxy::OnTcpSend(CGuildServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  iVar1 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0x24));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"int CGuildServerProxy::OnTcpSend()",0x733,0);
    cMyTrace::operator()(local_1c,"OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
    Disconnect(this);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x3c);
  }
  return uVar4;
}
```
