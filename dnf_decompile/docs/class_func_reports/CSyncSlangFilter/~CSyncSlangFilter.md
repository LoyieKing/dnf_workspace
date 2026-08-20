# ~CSyncSlangFilter

`_ZN16CSyncSlangFilterD1Ev`

`CSyncSlangFilter::~CSyncSlangFilter()`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862dc36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862dc36  _ZN16CSyncSlangFilterD1Ev
#           CSyncSlangFilter::~CSyncSlangFilter()
# range [0x0862dc36, 0x0862dccb]
0862dc36 +0x00:  push   %ebp
0862dc37 +0x01:  mov    %esp,%ebp
0862dc39 +0x03:  push   %esi
0862dc3a +0x04:  push   %ebx
0862dc3b +0x05:  sub    $0x10,%esp
0862dc3e +0x08:  mov    0x8(%ebp),%eax
0862dc41 +0x0b:  mov    (%eax),%eax
0862dc43 +0x0d:  test   %eax,%eax
0862dc45 +0x0f:  je     0862dc69 <+0x33>
0862dc47 +0x11:  mov    0x8(%ebp),%eax
0862dc4a +0x14:  mov    (%eax),%ebx
0862dc4c +0x16:  test   %ebx,%ebx
0862dc4e +0x18:  je     0862dc60 <+0x2a>
0862dc50 +0x1a:  mov    %ebx,(%esp)
0862dc53 +0x1d:  call   0862ebaa <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x2cb>  ; global constructors keyed to CSyncSlangFilter::instance+0x2cb
0862dc58 +0x22:  mov    %ebx,(%esp)
0862dc5b +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862dc60 +0x2a:  mov    0x8(%ebp),%eax
0862dc63 +0x2d:  movl   $0x0,(%eax)
0862dc69 +0x33:  mov    0x8(%ebp),%eax
0862dc6c +0x36:  mov    0x4(%eax),%eax
0862dc6f +0x39:  test   %eax,%eax
0862dc71 +0x3b:  je     0862dcb7 <+0x81>
0862dc73 +0x3d:  mov    0x8(%ebp),%eax
0862dc76 +0x40:  mov    0x4(%eax),%ebx
0862dc79 +0x43:  test   %ebx,%ebx
0862dc7b +0x45:  je     0862dc8d <+0x57>
0862dc7d +0x47:  mov    %ebx,(%esp)
0862dc80 +0x4a:  call   0862ebaa <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x2cb>  ; global constructors keyed to CSyncSlangFilter::instance+0x2cb
0862dc85 +0x4f:  mov    %ebx,(%esp)
0862dc88 +0x52:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862dc8d +0x57:  mov    0x8(%ebp),%eax
0862dc90 +0x5a:  movl   $0x0,0x4(%eax)
0862dc97 +0x61:  jmp    0862dcb7 <+0x81>
0862dc99 +0x63:  mov    %edx,%ebx
0862dc9b +0x65:  mov    %eax,%esi
0862dc9d +0x67:  mov    0x8(%ebp),%eax
0862dca0 +0x6a:  add    $0x8,%eax
0862dca3 +0x6d:  mov    %eax,(%esp)
0862dca6 +0x70:  call   082a3c64 <_GLOBAL__I__ZN4CLog5this_E+0x8b>  ; global constructors keyed to CLog::this_+0x8b
0862dcab +0x75:  mov    %esi,%eax
0862dcad +0x77:  mov    %ebx,%edx
0862dcaf +0x79:  mov    %eax,(%esp)
0862dcb2 +0x7c:  call   08ae3750 <_Unwind_Resume>
0862dcb7 +0x81:  mov    0x8(%ebp),%eax
0862dcba +0x84:  add    $0x8,%eax
0862dcbd +0x87:  mov    %eax,(%esp)
0862dcc0 +0x8a:  call   082a3c64 <_GLOBAL__I__ZN4CLog5this_E+0x8b>  ; global constructors keyed to CLog::this_+0x8b
0862dcc5 +0x8f:  add    $0x10,%esp
0862dcc8 +0x92:  pop    %ebx
0862dcc9 +0x93:  pop    %esi
0862dcca +0x94:  pop    %ebp
0862dccb +0x95:  ret
```

## 反编译 C

```c
// CSyncSlangFilter::~CSyncSlangFilter @ 0x862dc36

/* CSyncSlangFilter::~CSyncSlangFilter() */

void __thiscall CSyncSlangFilter::~CSyncSlangFilter(CSyncSlangFilter *this)

{
  IMPL *pIVar1;
  
  if (*(int *)this != 0) {
    pIVar1 = *(IMPL **)this;
    if (pIVar1 != (IMPL *)0x0) {
                    /* try { // try from 0862dc53 to 0862dc84 has its CatchHandler @ 0862dc99 */
      IMPL::~IMPL(pIVar1);
      operator_delete(pIVar1);
    }
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 4) != 0) {
    pIVar1 = *(IMPL **)(this + 4);
    if (pIVar1 != (IMPL *)0x0) {
      IMPL::~IMPL(pIVar1);
      operator_delete(pIVar1);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  rwLock::~rwLock((rwLock *)(this + 8));
  return;
}
```
