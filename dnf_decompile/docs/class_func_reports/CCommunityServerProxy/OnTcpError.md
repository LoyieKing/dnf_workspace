# OnTcpError

`_ZN21CCommunityServerProxy10OnTcpErrorEv`

`CCommunityServerProxy::OnTcpError()`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c962` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c962  _ZN21CCommunityServerProxy10OnTcpErrorEv
#           CCommunityServerProxy::OnTcpError()
# range [0x0846c962, 0x0846c9eb]
0846c962 +0x00:  push   %ebp
0846c963 +0x01:  mov    %esp,%ebp
0846c965 +0x03:  push   %esi
0846c966 +0x04:  push   %ebx
0846c967 +0x05:  sub    $0x20,%esp
0846c96a +0x08:  call   0807dd70 <_init+0x668>
0846c96f +0x0d:  mov    (%eax),%eax
0846c971 +0x0f:  test   %eax,%eax
0846c973 +0x11:  je     0846c9e0 <+0x7e>
0846c975 +0x13:  call   0807dd70 <_init+0x668>
0846c97a +0x18:  mov    (%eax),%eax
0846c97c +0x1a:  mov    %eax,(%esp)
0846c97f +0x1d:  call   0807d730 <_init+0x28>
0846c984 +0x22:  mov    %eax,%esi
0846c986 +0x24:  mov    0x8(%ebp),%eax
0846c989 +0x27:  mov    %eax,(%esp)
0846c98c +0x2a:  call   0846d048 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x31b>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x31b
0846c991 +0x2f:  mov    %eax,(%esp)
0846c994 +0x32:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0846c999 +0x37:  mov    %eax,%ebx
0846c99b +0x39:  movl   $0x0,0xc(%esp)
0846c9a3 +0x41:  movl   $0x10f,0x8(%esp)
0846c9ab +0x49:  movl   $&_ZZN21CCommunityServerProxy10OnTcpErrorEvE19__PRETTY_FUNCTION__,0x4(%esp)
0846c9b3 +0x51:  lea    -0x18(%ebp),%eax
0846c9b6 +0x54:  mov    %eax,(%esp)
0846c9b9 +0x57:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0846c9be +0x5c:  mov    %esi,0xc(%esp)
0846c9c2 +0x60:  mov    %ebx,0x8(%esp)
0846c9c6 +0x64:  movl   $"CommunityServer OnError() Socket[%d] Error(%s)",0x4(%esp)
0846c9ce +0x6c:  lea    -0x18(%ebp),%eax
0846c9d1 +0x6f:  mov    %eax,(%esp)
0846c9d4 +0x72:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846c9d9 +0x77:  mov    $0x0,%eax
0846c9de +0x7c:  jmp    0846c9e5 <+0x83>
0846c9e0 +0x7e:  mov    $0x1,%eax
0846c9e5 +0x83:  add    $0x20,%esp
0846c9e8 +0x86:  pop    %ebx
0846c9e9 +0x87:  pop    %esi
0846c9ea +0x88:  pop    %ebp
0846c9eb +0x89:  ret
```

## 反编译 C

```c
// CCommunityServerProxy::OnTcpError @ 0x846c962

/* CCommunityServerProxy::OnTcpError() */

bool __thiscall CCommunityServerProxy::OnTcpError(CCommunityServerProxy *this)

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
    cMyTrace::cMyTrace(local_1c,"bool CCommunityServerProxy::OnTcpError()",0x10f,0);
    cMyTrace::operator()(local_1c,"CommunityServer OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}
```
