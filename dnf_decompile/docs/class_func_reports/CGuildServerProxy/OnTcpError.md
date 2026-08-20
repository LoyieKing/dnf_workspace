# OnTcpError

`_ZN17CGuildServerProxy10OnTcpErrorEv`

`CGuildServerProxy::OnTcpError()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e66c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e66c  _ZN17CGuildServerProxy10OnTcpErrorEv
#           CGuildServerProxy::OnTcpError()
# range [0x0846e66c, 0x0846e6f5]
0846e66c +0x00:  push   %ebp
0846e66d +0x01:  mov    %esp,%ebp
0846e66f +0x03:  push   %esi
0846e670 +0x04:  push   %ebx
0846e671 +0x05:  sub    $0x20,%esp
0846e674 +0x08:  call   0807dd70 <_init+0x668>
0846e679 +0x0d:  mov    (%eax),%eax
0846e67b +0x0f:  test   %eax,%eax
0846e67d +0x11:  je     0846e6ea <+0x7e>
0846e67f +0x13:  call   0807dd70 <_init+0x668>
0846e684 +0x18:  mov    (%eax),%eax
0846e686 +0x1a:  mov    %eax,(%esp)
0846e689 +0x1d:  call   0807d730 <_init+0x28>
0846e68e +0x22:  mov    %eax,%esi
0846e690 +0x24:  mov    0x8(%ebp),%eax
0846e693 +0x27:  mov    %eax,(%esp)
0846e696 +0x2a:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0846e69b +0x2f:  mov    %eax,(%esp)
0846e69e +0x32:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0846e6a3 +0x37:  mov    %eax,%ebx
0846e6a5 +0x39:  movl   $0x0,0xc(%esp)
0846e6ad +0x41:  movl   $0x745,0x8(%esp)
0846e6b5 +0x49:  movl   $&_ZZN17CGuildServerProxy10OnTcpErrorEvE19__PRETTY_FUNCTION__,0x4(%esp)
0846e6bd +0x51:  lea    -0x18(%ebp),%eax
0846e6c0 +0x54:  mov    %eax,(%esp)
0846e6c3 +0x57:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0846e6c8 +0x5c:  mov    %esi,0xc(%esp)
0846e6cc +0x60:  mov    %ebx,0x8(%esp)
0846e6d0 +0x64:  movl   $"GuildServer OnError() Socket[%d] Error(%s)",0x4(%esp)
0846e6d8 +0x6c:  lea    -0x18(%ebp),%eax
0846e6db +0x6f:  mov    %eax,(%esp)
0846e6de +0x72:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846e6e3 +0x77:  mov    $0x0,%eax
0846e6e8 +0x7c:  jmp    0846e6ef <+0x83>
0846e6ea +0x7e:  mov    $0x1,%eax
0846e6ef +0x83:  add    $0x20,%esp
0846e6f2 +0x86:  pop    %ebx
0846e6f3 +0x87:  pop    %esi
0846e6f4 +0x88:  pop    %ebp
0846e6f5 +0x89:  ret
```

## 反编译 C

```c
// CGuildServerProxy::OnTcpError @ 0x846e66c

/* CGuildServerProxy::OnTcpError() */

bool __thiscall CGuildServerProxy::OnTcpError(CGuildServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"bool CGuildServerProxy::OnTcpError()",0x745,0);
    cMyTrace::operator()(local_1c,"GuildServer OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}
```
