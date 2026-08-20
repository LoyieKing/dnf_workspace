# CHadesServerProxy

`_ZN17CHadesServerProxyC1EPcii`

`CHadesServerProxy::CHadesServerProxy(char*, int, int)`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x08470510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470510  _ZN17CHadesServerProxyC1EPcii
#           CHadesServerProxy::CHadesServerProxy(char*, int, int)
# range [0x08470510, 0x08470599]
08470510 +0x00:  push   %ebp
08470511 +0x01:  mov    %esp,%ebp
08470513 +0x03:  push   %esi
08470514 +0x04:  push   %ebx
08470515 +0x05:  sub    $0x10,%esp
08470518 +0x08:  mov    0x8(%ebp),%eax
0847051b +0x0b:  movl   $"HadesSvr",0xc(%esp)
08470523 +0x13:  mov    0x10(%ebp),%edx
08470526 +0x16:  mov    %edx,0x8(%esp)
0847052a +0x1a:  mov    0xc(%ebp),%edx
0847052d +0x1d:  mov    %edx,0x4(%esp)
08470531 +0x21:  mov    %eax,(%esp)
08470534 +0x24:  call   082fd350 <_ZN15BaseServerProxyC1EPciS0_>  ; BaseServerProxy::BaseServerProxy(char*, int, char*)
08470539 +0x29:  mov    0x8(%ebp),%eax
0847053c +0x2c:  movl   $&_ZTV17CHadesServerProxy+0x8,(%eax)
08470542 +0x32:  mov    0x8(%ebp),%eax
08470545 +0x35:  mov    0x14(%ebp),%edx
08470548 +0x38:  mov    %edx,&_ZL14gUnicodeBuffer+0x268e0(%eax)
0847054e +0x3e:  mov    0x8(%ebp),%eax
08470551 +0x41:  add    $&_ZL14gUnicodeBuffer+0x268e4,%eax
08470556 +0x46:  mov    %eax,(%esp)
08470559 +0x49:  call   08483518 <_ZN11CUdpHandlerC1Ev>  ; CUdpHandler::CUdpHandler()
0847055e +0x4e:  mov    0x8(%ebp),%eax
08470561 +0x51:  movl   $0x0,&_ZL14gUnicodeBuffer+0x268ec(%eax)
0847056b +0x5b:  mov    0x8(%ebp),%eax
0847056e +0x5e:  mov    %eax,(%esp)
08470571 +0x61:  call   0847059a <_ZN17CHadesServerProxy12HadesSvrInitEv>  ; CHadesServerProxy::HadesSvrInit()
08470576 +0x66:  jmp    08470593 <+0x83>
08470578 +0x68:  mov    %edx,%ebx
0847057a +0x6a:  mov    %eax,%esi
0847057c +0x6c:  mov    0x8(%ebp),%eax
0847057f +0x6f:  mov    %eax,(%esp)
08470582 +0x72:  call   082aa92a <_GLOBAL__I__ZN4CLog5this_E+0x6d51>  ; global constructors keyed to CLog::this_+0x6d51
08470587 +0x77:  mov    %esi,%eax
08470589 +0x79:  mov    %ebx,%edx
0847058b +0x7b:  mov    %eax,(%esp)
0847058e +0x7e:  call   08ae3750 <_Unwind_Resume>
08470593 +0x83:  add    $0x10,%esp
08470596 +0x86:  pop    %ebx
08470597 +0x87:  pop    %esi
08470598 +0x88:  pop    %ebp
08470599 +0x89:  ret
```

## 反编译 C

```c
// CHadesServerProxy::CHadesServerProxy @ 0x8470510

/* CHadesServerProxy::CHadesServerProxy(char*, int, int) */

void __thiscall
CHadesServerProxy::CHadesServerProxy(CHadesServerProxy *this,char *param_1,int param_2,int param_3)

{
  BaseServerProxy::BaseServerProxy((BaseServerProxy *)this,param_1,param_2,"HadesSvr");
  *(undefined ***)this = &PTR_OnDisconnect_08c69fb0;
  *(int *)(this + 0x30e0c) = param_3;
                    /* try { // try from 08470559 to 08470575 has its CatchHandler @ 08470578 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x30e10));
  *(undefined4 *)(this + 0x30e18) = 0;
  HadesSvrInit(this);
  return;
}
```
