# ios_base

`_ZNSt8ios_baseC1Ev`

`std::ios_base::ios_base()`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x087270f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087270f0  _ZNSt8ios_baseC1Ev
#           std::ios_base::ios_base()
# range [0x087270f0, 0x0872716f]
087270f0 +0x00:  push   %ebp
087270f1 +0x01:  xor    %eax,%eax
087270f3 +0x03:  mov    %esp,%ebp
087270f5 +0x05:  sub    $0x8,%esp
087270f8 +0x08:  mov    0x8(%ebp),%ecx
087270fb +0x0b:  movl   $&_ZTVSt8ios_base+0x8,(%ecx)
08727101 +0x11:  lea    0x24(%ecx),%edx
08727104 +0x14:  movl   $0x0,0x4(%ecx)
0872710b +0x1b:  movl   $0x0,0x8(%ecx)
08727112 +0x22:  movl   $0x0,0xc(%ecx)
08727119 +0x29:  movl   $0x0,0x10(%ecx)
08727120 +0x30:  movl   $0x0,0x14(%ecx)
08727127 +0x37:  movl   $0x0,0x18(%ecx)
0872712e +0x3e:  movl   $0x0,0x1c(%ecx)
08727135 +0x45:  movl   $0x0,0x20(%ecx)
0872713c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
08727140 +0x50:  movl   $0x0,(%edx,%eax,1)
08727147 +0x57:  movl   $0x0,0x4(%edx,%eax,1)
0872714f +0x5f:  add    $0x8,%eax
08727152 +0x62:  cmp    $0x40,%eax
08727155 +0x65:  jne    08727140 <+0x50>
08727157 +0x67:  movl   $0x8,0x64(%ecx)
0872715e +0x6e:  mov    %edx,0x68(%ecx)
08727161 +0x71:  add    $0x6c,%ecx
08727164 +0x74:  mov    %ecx,0x8(%ebp)
08727167 +0x77:  leave
08727168 +0x78:  jmp    086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
0872716d +0x7d:  nop
0872716e +0x7e:  nop
0872716f +0x7f:  nop
```

## 反编译 C

```c
// std::ios_base::ios_base @ 0x87270f0

/* std::ios_base::ios_base() */

void __thiscall std::ios_base::ios_base(ios_base *this)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined ***)this = &PTR__ios_base_08d01f38;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  do {
    *(undefined4 *)(this + 0x24 + iVar1) = 0;
    *(undefined4 *)(this + iVar1 + 0x28) = 0;
    iVar1 = iVar1 + 8;
  } while (iVar1 != 0x40);
  *(undefined4 *)(this + 100) = 8;
  *(ios_base **)(this + 0x68) = this + 0x24;
  locale::locale((locale *)(this + 0x6c));
  return;
}
```
