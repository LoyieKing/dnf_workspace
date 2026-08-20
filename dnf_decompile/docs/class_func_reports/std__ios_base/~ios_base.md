# ~ios_base

`_ZNSt8ios_baseD1Ev`

`std::ios_base::~ios_base()`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x08727070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08727070  _ZNSt8ios_baseD1Ev
#           std::ios_base::~ios_base()
# range [0x08727070, 0x087270cf]
08727070 +0x00:  push   %ebp
08727071 +0x01:  mov    %esp,%ebp
08727073 +0x03:  push   %ebx
08727074 +0x04:  sub    $0x14,%esp
08727077 +0x07:  mov    0x8(%ebp),%ebx
0872707a +0x0a:  movl   $&_ZTVSt8ios_base+0x8,(%ebx)
08727080 +0x10:  movl   $0x0,0x4(%esp)
08727088 +0x18:  mov    %ebx,(%esp)
0872708b +0x1b:  call   08726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>  ; std::ios_base::_M_call_callbacks(std::ios_base::event)
08727090 +0x20:  mov    %ebx,(%esp)
08727093 +0x23:  call   08726db0 <_ZNSt8ios_base20_M_dispose_callbacksEv>  ; std::ios_base::_M_dispose_callbacks()
08727098 +0x28:  mov    0x68(%ebx),%eax
0872709b +0x2b:  lea    0x24(%ebx),%edx
0872709e +0x2e:  cmp    %edx,%eax
087270a0 +0x30:  je     087270b5 <+0x45>
087270a2 +0x32:  test   %eax,%eax
087270a4 +0x34:  je     087270ae <+0x3e>
087270a6 +0x36:  mov    %eax,(%esp)
087270a9 +0x39:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
087270ae +0x3e:  movl   $0x0,0x68(%ebx)
087270b5 +0x45:  add    $0x6c,%ebx
087270b8 +0x48:  mov    %ebx,0x8(%ebp)
087270bb +0x4b:  add    $0x14,%esp
087270be +0x4e:  pop    %ebx
087270bf +0x4f:  pop    %ebp
087270c0 +0x50:  jmp    086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
087270c5 +0x55:  nop
087270c6 +0x56:  nop
087270c7 +0x57:  nop
087270c8 +0x58:  nop
087270c9 +0x59:  nop
087270ca +0x5a:  nop
087270cb +0x5b:  nop
087270cc +0x5c:  nop
087270cd +0x5d:  nop
087270ce +0x5e:  nop
087270cf +0x5f:  nop
```

## 反编译 C

```c
// std::ios_base::~ios_base @ 0x8727070

/* std::ios_base::~ios_base() */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  ios_base *piVar1;
  
  *(undefined ***)this = &PTR__ios_base_08d01f38;
  _M_call_callbacks(this,0);
  _M_dispose_callbacks(this);
  piVar1 = *(ios_base **)(this + 0x68);
  if (piVar1 != this + 0x24) {
    if (piVar1 != (ios_base *)0x0) {
      operator_delete__(piVar1);
    }
    *(undefined4 *)(this + 0x68) = 0;
  }
  locale::~locale((locale *)(this + 0x6c));
  return;
}
```
