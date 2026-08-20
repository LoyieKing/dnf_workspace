# OnTcpError

`_ZN19CMonitorServerProxy10OnTcpErrorEv`

`CMonitorServerProxy::OnTcpError()`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08471444` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471444  _ZN19CMonitorServerProxy10OnTcpErrorEv
#           CMonitorServerProxy::OnTcpError()
# range [0x08471444, 0x084714cd]
08471444 +0x00:  push   %ebp
08471445 +0x01:  mov    %esp,%ebp
08471447 +0x03:  push   %esi
08471448 +0x04:  push   %ebx
08471449 +0x05:  sub    $0x20,%esp
0847144c +0x08:  call   0807dd70 <_init+0x668>
08471451 +0x0d:  mov    (%eax),%eax
08471453 +0x0f:  test   %eax,%eax
08471455 +0x11:  je     084714c2 <+0x7e>
08471457 +0x13:  call   0807dd70 <_init+0x668>
0847145c +0x18:  mov    (%eax),%eax
0847145e +0x1a:  mov    %eax,(%esp)
08471461 +0x1d:  call   0807d730 <_init+0x28>
08471466 +0x22:  mov    %eax,%esi
08471468 +0x24:  mov    0x8(%ebp),%eax
0847146b +0x27:  mov    %eax,(%esp)
0847146e +0x2a:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
08471473 +0x2f:  mov    %eax,(%esp)
08471476 +0x32:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0847147b +0x37:  mov    %eax,%ebx
0847147d +0x39:  movl   $0x0,0xc(%esp)
08471485 +0x41:  movl   $0x6b6,0x8(%esp)
0847148d +0x49:  movl   $&_ZZN19CMonitorServerProxy10OnTcpErrorEvE19__PRETTY_FUNCTION__,0x4(%esp)
08471495 +0x51:  lea    -0x18(%ebp),%eax
08471498 +0x54:  mov    %eax,(%esp)
0847149b +0x57:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084714a0 +0x5c:  mov    %esi,0xc(%esp)
084714a4 +0x60:  mov    %ebx,0x8(%esp)
084714a8 +0x64:  movl   $"Monitor Server OnError() Socket[%d] Error(%s)",0x4(%esp)
084714b0 +0x6c:  lea    -0x18(%ebp),%eax
084714b3 +0x6f:  mov    %eax,(%esp)
084714b6 +0x72:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084714bb +0x77:  mov    $0x0,%eax
084714c0 +0x7c:  jmp    084714c7 <+0x83>
084714c2 +0x7e:  mov    $0x1,%eax
084714c7 +0x83:  add    $0x20,%esp
084714ca +0x86:  pop    %ebx
084714cb +0x87:  pop    %esi
084714cc +0x88:  pop    %ebp
084714cd +0x89:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::OnTcpError @ 0x8471444

/* CMonitorServerProxy::OnTcpError() */

bool __thiscall CMonitorServerProxy::OnTcpError(CMonitorServerProxy *this)

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
    cMyTrace::cMyTrace(local_1c,"bool CMonitorServerProxy::OnTcpError()",0x6b6,0);
    cMyTrace::operator()(local_1c,"Monitor Server OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}
```
