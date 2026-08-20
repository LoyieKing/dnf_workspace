# CaptchaGen

`_ZN10CaptchaGenC1Ev`

`CaptchaGen::CaptchaGen()`

| 类 | 地址 |
|---|---|
| `CaptchaGen` | `0x080de68c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de68c  _ZN10CaptchaGenC1Ev
#           CaptchaGen::CaptchaGen()
# range [0x080de68c, 0x080de705]
080de68c +0x00:  push   %ebp
080de68d +0x01:  mov    %esp,%ebp
080de68f +0x03:  push   %esi
080de690 +0x04:  push   %ebx
080de691 +0x05:  sub    $0x20,%esp
080de694 +0x08:  mov    0x8(%ebp),%eax
080de697 +0x0b:  movl   $0x0,(%eax)
080de69d +0x11:  mov    0x8(%ebp),%eax
080de6a0 +0x14:  add    $0x4,%eax
080de6a3 +0x17:  mov    %eax,(%esp)
080de6a6 +0x1a:  call   080df800 <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x1c>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x1c
080de6ab +0x1f:  mov    0x8(%ebp),%eax
080de6ae +0x22:  add    $0x10,%eax
080de6b1 +0x25:  mov    %eax,(%esp)
080de6b4 +0x28:  call   08adfa90 <_ZN8XorRand4C1Ev>  ; XorRand4::XorRand4()
080de6b9 +0x2d:  mov    0x8(%ebp),%eax
080de6bc +0x30:  mov    %eax,(%esp)
080de6bf +0x33:  call   087bcac0 <FT_Init_FreeType>
080de6c4 +0x38:  mov    %eax,-0xc(%ebp)
080de6c7 +0x3b:  call   08ade86a <_ZN4Tick18nowAsInternalValueEv>  ; Tick::nowAsInternalValue()
080de6cc +0x40:  mov    0x8(%ebp),%edx
080de6cf +0x43:  add    $0x10,%edx
080de6d2 +0x46:  mov    %eax,0x4(%esp)
080de6d6 +0x4a:  mov    %edx,(%esp)
080de6d9 +0x4d:  call   08adfaac <_ZN8XorRand44seedEj>  ; XorRand4::seed(unsigned int)
080de6de +0x52:  jmp    080de6fe <+0x72>
080de6e0 +0x54:  mov    %edx,%ebx
080de6e2 +0x56:  mov    %eax,%esi
080de6e4 +0x58:  mov    0x8(%ebp),%eax
080de6e7 +0x5b:  add    $0x4,%eax
080de6ea +0x5e:  mov    %eax,(%esp)
080de6ed +0x61:  call   080df814 <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x30>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x30
080de6f2 +0x66:  mov    %esi,%eax
080de6f4 +0x68:  mov    %ebx,%edx
080de6f6 +0x6a:  mov    %eax,(%esp)
080de6f9 +0x6d:  call   08ae3750 <_Unwind_Resume>
080de6fe +0x72:  add    $0x20,%esp
080de701 +0x75:  pop    %ebx
080de702 +0x76:  pop    %esi
080de703 +0x77:  pop    %ebp
080de704 +0x78:  ret
080de705 +0x79:  nop
```

## 反编译 C

```c
// CaptchaGen::CaptchaGen @ 0x80de68c

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::CaptchaGen() */

void __thiscall CaptchaGen::CaptchaGen(CaptchaGen *this)

{
  uint32 seed;
  
  *(undefined4 *)this = 0;
  std::vector<void*,std::allocator<void*>>::vector
            ((vector<void*,std::allocator<void*>> *)(this + 4));
                    /* try { // try from 080de6b4 to 080de6dd has its CatchHandler @ 080de6e0 */
  XorRand4::XorRand4((XorRand4 *)(this + 0x10));
  FT_Init_FreeType((FT_Library_conflict *)this);
  seed = Tick::nowAsInternalValue();
  XorRand4::seed((XorRand4 *)(this + 0x10),seed);
  return;
}
```
