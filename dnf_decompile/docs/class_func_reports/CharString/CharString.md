# CharString

`_ZN10CharStringC1Ev`

`CharString::CharString()`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad69aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad69aa  _ZN10CharStringC1Ev
#           CharString::CharString()
# range [0x08ad69aa, 0x08ad69c5]
08ad69aa +0x00:  push   %ebp
08ad69ab +0x01:  mov    %esp,%ebp
08ad69ad +0x03:  sub    $0x18,%esp
08ad69b0 +0x06:  mov    &_ZL21s_emptyCharStringData,%eax
08ad69b5 +0x0b:  mov    %eax,0x4(%esp)
08ad69b9 +0x0f:  mov    0x8(%ebp),%eax
08ad69bc +0x12:  mov    %eax,(%esp)
08ad69bf +0x15:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad69c4 +0x1a:  leave
08ad69c5 +0x1b:  ret
```

## 反编译 C

```c
// CharString::CharString @ 0x8ad69aa

/* DWARF original prototype: void CharString(CharString * this) */

void __thiscall CharString::CharString(CharString *this)

{
  attachData(this,s_emptyCharStringData);
  return;
}
```
