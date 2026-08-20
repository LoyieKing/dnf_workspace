# ~moneypunct

`_ZNSt10moneypunctIcLb1EED1Ev`

`std::moneypunct<char, true>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<char, true>` | `0x0871fe40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fe40  _ZNSt10moneypunctIcLb1EED1Ev
#           std::moneypunct<char, true>::~moneypunct()
# range [0x0871fe40, 0x0871fe8f]
0871fe40 +0x00:  push   %ebp
0871fe41 +0x01:  mov    %esp,%ebp
0871fe43 +0x03:  push   %ebx
0871fe44 +0x04:  sub    $0x24,%esp
0871fe47 +0x07:  mov    0x8(%ebp),%ebx
0871fe4a +0x0a:  mov    0x8(%ebx),%eax
0871fe4d +0x0d:  movl   $&_ZTVSt10moneypunctIcLb1EE+0x8,(%ebx)
0871fe53 +0x13:  test   %eax,%eax
0871fe55 +0x15:  je     0871fe5f <+0x1f>
0871fe57 +0x17:  mov    (%eax),%edx
0871fe59 +0x19:  mov    %eax,(%esp)
0871fe5c +0x1c:  call   *0x4(%edx)
0871fe5f +0x1f:  mov    %ebx,0x8(%ebp)
0871fe62 +0x22:  add    $0x24,%esp
0871fe65 +0x25:  pop    %ebx
0871fe66 +0x26:  pop    %ebp
0871fe67 +0x27:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fe6c +0x2c:  mov    %eax,-0xc(%ebp)
0871fe6f +0x2f:  mov    %ebx,(%esp)
0871fe72 +0x32:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fe77 +0x37:  mov    -0xc(%ebp),%eax
0871fe7a +0x3a:  mov    %eax,(%esp)
0871fe7d +0x3d:  call   08ae3750 <_Unwind_Resume>
0871fe82 +0x42:  nop
0871fe83 +0x43:  nop
0871fe84 +0x44:  nop
0871fe85 +0x45:  nop
0871fe86 +0x46:  nop
0871fe87 +0x47:  nop
0871fe88 +0x48:  nop
0871fe89 +0x49:  nop
0871fe8a +0x4a:  nop
0871fe8b +0x4b:  nop
0871fe8c +0x4c:  nop
0871fe8d +0x4d:  nop
0871fe8e +0x4e:  nop
0871fe8f +0x4f:  nop
```

## 反编译 C

```c
// std::moneypunct<char, @ 0x871fe40

/* std::moneypunct<char, true>::~moneypunct() */

void __thiscall std::moneypunct<char,true>::~moneypunct(moneypunct<char,true> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__moneypunct_08cff1a8;
  if (piVar1 != (int *)0x0) {
                    /* try { // try from 0871fe5c to 0871fe5e has its CatchHandler @ 0871fe6c */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  locale::facet::~facet((facet *)this);
  return;
}
```
