# ~numpunct

`_ZNSt8numpunctIwED1Ev`

`std::numpunct<wchar_t>::~numpunct()`

| 类 | 地址 |
|---|---|
| `std::numpunct<wchar_t>` | `0x08721070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08721070  _ZNSt8numpunctIwED1Ev
#           std::numpunct<wchar_t>::~numpunct()
# range [0x08721070, 0x087210bf]
08721070 +0x00:  push   %ebp
08721071 +0x01:  mov    %esp,%ebp
08721073 +0x03:  push   %ebx
08721074 +0x04:  sub    $0x24,%esp
08721077 +0x07:  mov    0x8(%ebp),%ebx
0872107a +0x0a:  mov    0x8(%ebx),%eax
0872107d +0x0d:  movl   $&_ZTVSt8numpunctIwE+0x8,(%ebx)
08721083 +0x13:  test   %eax,%eax
08721085 +0x15:  je     0872108f <+0x1f>
08721087 +0x17:  mov    (%eax),%edx
08721089 +0x19:  mov    %eax,(%esp)
0872108c +0x1c:  call   *0x4(%edx)
0872108f +0x1f:  mov    %ebx,0x8(%ebp)
08721092 +0x22:  add    $0x24,%esp
08721095 +0x25:  pop    %ebx
08721096 +0x26:  pop    %ebp
08721097 +0x27:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0872109c +0x2c:  mov    %eax,-0xc(%ebp)
0872109f +0x2f:  mov    %ebx,(%esp)
087210a2 +0x32:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087210a7 +0x37:  mov    -0xc(%ebp),%eax
087210aa +0x3a:  mov    %eax,(%esp)
087210ad +0x3d:  call   08ae3750 <_Unwind_Resume>
087210b2 +0x42:  nop
087210b3 +0x43:  nop
087210b4 +0x44:  nop
087210b5 +0x45:  nop
087210b6 +0x46:  nop
087210b7 +0x47:  nop
087210b8 +0x48:  nop
087210b9 +0x49:  nop
087210ba +0x4a:  nop
087210bb +0x4b:  nop
087210bc +0x4c:  nop
087210bd +0x4d:  nop
087210be +0x4e:  nop
087210bf +0x4f:  nop
```

## 反编译 C

```c
// std::numpunct<wchar_t>::~numpunct @ 0x8721070

/* std::numpunct<wchar_t>::~numpunct() */

void __thiscall std::numpunct<wchar_t>::~numpunct(numpunct<wchar_t> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__numpunct_08d00a48;
  if (piVar1 != (int *)0x0) {
                    /* try { // try from 0872108c to 0872108e has its CatchHandler @ 0872109c */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  locale::facet::~facet((facet *)this);
  return;
}
```
