# ~numpunct

`_ZNSt8numpunctIcED1Ev`

`std::numpunct<char>::~numpunct()`

| 类 | 地址 |
|---|---|
| `std::numpunct<char>` | `0x087210e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087210e0  _ZNSt8numpunctIcED1Ev
#           std::numpunct<char>::~numpunct()
# range [0x087210e0, 0x0872112f]
087210e0 +0x00:  push   %ebp
087210e1 +0x01:  mov    %esp,%ebp
087210e3 +0x03:  push   %ebx
087210e4 +0x04:  sub    $0x24,%esp
087210e7 +0x07:  mov    0x8(%ebp),%ebx
087210ea +0x0a:  mov    0x8(%ebx),%eax
087210ed +0x0d:  movl   $&_ZTVSt8numpunctIcE+0x8,(%ebx)
087210f3 +0x13:  test   %eax,%eax
087210f5 +0x15:  je     087210ff <+0x1f>
087210f7 +0x17:  mov    (%eax),%edx
087210f9 +0x19:  mov    %eax,(%esp)
087210fc +0x1c:  call   *0x4(%edx)
087210ff +0x1f:  mov    %ebx,0x8(%ebp)
08721102 +0x22:  add    $0x24,%esp
08721105 +0x25:  pop    %ebx
08721106 +0x26:  pop    %ebp
08721107 +0x27:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0872110c +0x2c:  mov    %eax,-0xc(%ebp)
0872110f +0x2f:  mov    %ebx,(%esp)
08721112 +0x32:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
08721117 +0x37:  mov    -0xc(%ebp),%eax
0872111a +0x3a:  mov    %eax,(%esp)
0872111d +0x3d:  call   08ae3750 <_Unwind_Resume>
08721122 +0x42:  nop
08721123 +0x43:  nop
08721124 +0x44:  nop
08721125 +0x45:  nop
08721126 +0x46:  nop
08721127 +0x47:  nop
08721128 +0x48:  nop
08721129 +0x49:  nop
0872112a +0x4a:  nop
0872112b +0x4b:  nop
0872112c +0x4c:  nop
0872112d +0x4d:  nop
0872112e +0x4e:  nop
0872112f +0x4f:  nop
```

## 反编译 C

```c
// std::numpunct<char>::~numpunct @ 0x87210e0

/* std::numpunct<char>::~numpunct() */

void __thiscall std::numpunct<char>::~numpunct(numpunct<char> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__numpunct_08cff2c8;
  if (piVar1 != (int *)0x0) {
                    /* try { // try from 087210fc to 087210fe has its CatchHandler @ 0872110c */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  locale::facet::~facet((facet *)this);
  return;
}
```
