# CSyncSlangFilter

`_ZN16CSyncSlangFilterC1Ev`

`CSyncSlangFilter::CSyncSlangFilter()`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862dba4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862dba4  _ZN16CSyncSlangFilterC1Ev
#           CSyncSlangFilter::CSyncSlangFilter()
# range [0x0862dba4, 0x0862dc35]
0862dba4 +0x00:  push   %ebp
0862dba5 +0x01:  mov    %esp,%ebp
0862dba7 +0x03:  push   %edi
0862dba8 +0x04:  push   %esi
0862dba9 +0x05:  push   %ebx
0862dbaa +0x06:  sub    $0x1c,%esp
0862dbad +0x09:  movl   $0x4,(%esp)
0862dbb4 +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0862dbb9 +0x15:  mov    %eax,%ebx
0862dbbb +0x17:  mov    %ebx,%eax
0862dbbd +0x19:  mov    %eax,(%esp)
0862dbc0 +0x1c:  call   0862eb60 <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x281>  ; global constructors keyed to CSyncSlangFilter::instance+0x281
0862dbc5 +0x21:  jmp    0862dbdf <+0x3b>
0862dbc7 +0x23:  mov    %edx,%esi
0862dbc9 +0x25:  mov    %eax,%edi
0862dbcb +0x27:  mov    %ebx,(%esp)
0862dbce +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862dbd3 +0x2f:  mov    %edi,%eax
0862dbd5 +0x31:  mov    %esi,%edx
0862dbd7 +0x33:  mov    %eax,(%esp)
0862dbda +0x36:  call   08ae3750 <_Unwind_Resume>
0862dbdf +0x3b:  mov    %ebx,%edx
0862dbe1 +0x3d:  mov    0x8(%ebp),%eax
0862dbe4 +0x40:  mov    %edx,(%eax)
0862dbe6 +0x42:  movl   $0x4,(%esp)
0862dbed +0x49:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0862dbf2 +0x4e:  mov    %eax,%ebx
0862dbf4 +0x50:  mov    %ebx,%eax
0862dbf6 +0x52:  mov    %eax,(%esp)
0862dbf9 +0x55:  call   0862eb60 <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x281>  ; global constructors keyed to CSyncSlangFilter::instance+0x281
0862dbfe +0x5a:  jmp    0862dc18 <+0x74>
0862dc00 +0x5c:  mov    %edx,%esi
0862dc02 +0x5e:  mov    %eax,%edi
0862dc04 +0x60:  mov    %ebx,(%esp)
0862dc07 +0x63:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862dc0c +0x68:  mov    %edi,%eax
0862dc0e +0x6a:  mov    %esi,%edx
0862dc10 +0x6c:  mov    %eax,(%esp)
0862dc13 +0x6f:  call   08ae3750 <_Unwind_Resume>
0862dc18 +0x74:  mov    %ebx,%edx
0862dc1a +0x76:  mov    0x8(%ebp),%eax
0862dc1d +0x79:  mov    %edx,0x4(%eax)
0862dc20 +0x7c:  mov    0x8(%ebp),%eax
0862dc23 +0x7f:  add    $0x8,%eax
0862dc26 +0x82:  mov    %eax,(%esp)
0862dc29 +0x85:  call   082a3c48 <_GLOBAL__I__ZN4CLog5this_E+0x6f>  ; global constructors keyed to CLog::this_+0x6f
0862dc2e +0x8a:  add    $0x1c,%esp
0862dc31 +0x8d:  pop    %ebx
0862dc32 +0x8e:  pop    %esi
0862dc33 +0x8f:  pop    %edi
0862dc34 +0x90:  pop    %ebp
0862dc35 +0x91:  ret
```

## 反编译 C

```c
// CSyncSlangFilter::CSyncSlangFilter @ 0x862dba4

/* CSyncSlangFilter::CSyncSlangFilter() */

void __thiscall CSyncSlangFilter::CSyncSlangFilter(CSyncSlangFilter *this)

{
  IMPL *pIVar1;
  
  pIVar1 = operator_new(4);
                    /* try { // try from 0862dbc0 to 0862dbc4 has its CatchHandler @ 0862dbc7 */
  IMPL::IMPL(pIVar1);
  *(IMPL **)this = pIVar1;
  pIVar1 = operator_new(4);
                    /* try { // try from 0862dbf9 to 0862dbfd has its CatchHandler @ 0862dc00 */
  IMPL::IMPL(pIVar1);
  *(IMPL **)(this + 4) = pIVar1;
  rwLock::rwLock((rwLock *)(this + 8));
  return;
}
```
