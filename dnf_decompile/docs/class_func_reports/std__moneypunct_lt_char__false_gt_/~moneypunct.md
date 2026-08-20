# ~moneypunct

`_ZNSt10moneypunctIcLb0EED1Ev`

`std::moneypunct<char, false>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<char, false>` | `0x0871fdd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fdd0  _ZNSt10moneypunctIcLb0EED1Ev
#           std::moneypunct<char, false>::~moneypunct()
# range [0x0871fdd0, 0x0871fe1f]
0871fdd0 +0x00:  push   %ebp
0871fdd1 +0x01:  mov    %esp,%ebp
0871fdd3 +0x03:  push   %ebx
0871fdd4 +0x04:  sub    $0x24,%esp
0871fdd7 +0x07:  mov    0x8(%ebp),%ebx
0871fdda +0x0a:  mov    0x8(%ebx),%eax
0871fddd +0x0d:  movl   $&_ZTVSt10moneypunctIcLb0EE+0x8,(%ebx)
0871fde3 +0x13:  test   %eax,%eax
0871fde5 +0x15:  je     0871fdef <+0x1f>
0871fde7 +0x17:  mov    (%eax),%edx
0871fde9 +0x19:  mov    %eax,(%esp)
0871fdec +0x1c:  call   *0x4(%edx)
0871fdef +0x1f:  mov    %ebx,0x8(%ebp)
0871fdf2 +0x22:  add    $0x24,%esp
0871fdf5 +0x25:  pop    %ebx
0871fdf6 +0x26:  pop    %ebp
0871fdf7 +0x27:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fdfc +0x2c:  mov    %eax,-0xc(%ebp)
0871fdff +0x2f:  mov    %ebx,(%esp)
0871fe02 +0x32:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fe07 +0x37:  mov    -0xc(%ebp),%eax
0871fe0a +0x3a:  mov    %eax,(%esp)
0871fe0d +0x3d:  call   08ae3750 <_Unwind_Resume>
0871fe12 +0x42:  nop
0871fe13 +0x43:  nop
0871fe14 +0x44:  nop
0871fe15 +0x45:  nop
0871fe16 +0x46:  nop
0871fe17 +0x47:  nop
0871fe18 +0x48:  nop
0871fe19 +0x49:  nop
0871fe1a +0x4a:  nop
0871fe1b +0x4b:  nop
0871fe1c +0x4c:  nop
0871fe1d +0x4d:  nop
0871fe1e +0x4e:  nop
0871fe1f +0x4f:  nop
```

## 反编译 C

```c
// std::moneypunct<char, @ 0x871fdd0

/* std::moneypunct<char, false>::~moneypunct() */

void __thiscall std::moneypunct<char,false>::~moneypunct(moneypunct<char,false> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__moneypunct_08cff168;
  if (piVar1 != (int *)0x0) {
                    /* try { // try from 0871fdec to 0871fdee has its CatchHandler @ 0871fdfc */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  locale::facet::~facet((facet *)this);
  return;
}
```
