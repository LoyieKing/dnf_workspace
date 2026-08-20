# OnTcpError

`_ZN18CPCRoomServerProxy10OnTcpErrorEv`

`CPCRoomServerProxy::OnTcpError()`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x08471bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471bd0  _ZN18CPCRoomServerProxy10OnTcpErrorEv
#           CPCRoomServerProxy::OnTcpError()
# range [0x08471bd0, 0x08471c59]
08471bd0 +0x00:  push   %ebp
08471bd1 +0x01:  mov    %esp,%ebp
08471bd3 +0x03:  push   %esi
08471bd4 +0x04:  push   %ebx
08471bd5 +0x05:  sub    $0x20,%esp
08471bd8 +0x08:  call   0807dd70 <_init+0x668>
08471bdd +0x0d:  mov    (%eax),%eax
08471bdf +0x0f:  test   %eax,%eax
08471be1 +0x11:  je     08471c4e <+0x7e>
08471be3 +0x13:  call   0807dd70 <_init+0x668>
08471be8 +0x18:  mov    (%eax),%eax
08471bea +0x1a:  mov    %eax,(%esp)
08471bed +0x1d:  call   0807d730 <_init+0x28>
08471bf2 +0x22:  mov    %eax,%esi
08471bf4 +0x24:  mov    0x8(%ebp),%eax
08471bf7 +0x27:  mov    %eax,(%esp)
08471bfa +0x2a:  call   08471e08 <_GLOBAL__I__ZN18CPCRoomServerProxyC2EPci+0x1c>  ; global constructors keyed to CPCRoomServerProxy::CPCRoomServerProxy(char*, int)+0x1c
08471bff +0x2f:  mov    %eax,(%esp)
08471c02 +0x32:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
08471c07 +0x37:  mov    %eax,%ebx
08471c09 +0x39:  movl   $0x0,0xc(%esp)
08471c11 +0x41:  movl   $0x17f,0x8(%esp)
08471c19 +0x49:  movl   $&_ZZN18CPCRoomServerProxy10OnTcpErrorEvE12__FUNCTION__,0x4(%esp)
08471c21 +0x51:  lea    -0x18(%ebp),%eax
08471c24 +0x54:  mov    %eax,(%esp)
08471c27 +0x57:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08471c2c +0x5c:  mov    %esi,0xc(%esp)
08471c30 +0x60:  mov    %ebx,0x8(%esp)
08471c34 +0x64:  movl   $"PCRoomServer OnError() Socket[%d] Error(%s)",0x4(%esp)
08471c3c +0x6c:  lea    -0x18(%ebp),%eax
08471c3f +0x6f:  mov    %eax,(%esp)
08471c42 +0x72:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08471c47 +0x77:  mov    $0x0,%eax
08471c4c +0x7c:  jmp    08471c53 <+0x83>
08471c4e +0x7e:  mov    $0x1,%eax
08471c53 +0x83:  add    $0x20,%esp
08471c56 +0x86:  pop    %ebx
08471c57 +0x87:  pop    %esi
08471c58 +0x88:  pop    %ebp
08471c59 +0x89:  ret
```

## 反编译 C

```c
// CPCRoomServerProxy::OnTcpError @ 0x8471bd0

/* CPCRoomServerProxy::OnTcpError() */

bool __thiscall CPCRoomServerProxy::OnTcpError(CPCRoomServerProxy *this)

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
    cMyTrace::cMyTrace(local_1c,"OnTcpError",0x17f,0);
    cMyTrace::operator()(local_1c,"PCRoomServer OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}
```
