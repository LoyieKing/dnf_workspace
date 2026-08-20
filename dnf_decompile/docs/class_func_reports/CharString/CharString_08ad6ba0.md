# CharString

`_ZN10CharStringC1EP14CharStringData`

`CharString::CharString(CharStringData*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6ba0  _ZN10CharStringC1EP14CharStringData
#           CharString::CharString(CharStringData*)
# range [0x08ad6ba0, 0x08ad6bb9]
08ad6ba0 +0x00:  push   %ebp
08ad6ba1 +0x01:  mov    %esp,%ebp
08ad6ba3 +0x03:  sub    $0x18,%esp
08ad6ba6 +0x06:  mov    0xc(%ebp),%eax
08ad6ba9 +0x09:  mov    %eax,0x4(%esp)
08ad6bad +0x0d:  mov    0x8(%ebp),%eax
08ad6bb0 +0x10:  mov    %eax,(%esp)
08ad6bb3 +0x13:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6bb8 +0x18:  leave
08ad6bb9 +0x19:  ret
```

## 反编译 C

```c
// CharString::CharString @ 0x8ad6ba0

/* DWARF original prototype: void CharString(CharString * this, CharStringData * newData) */

void __thiscall CharString::CharString(CharString *this,CharStringData *newData)

{
  attachData(this,newData);
  return;
}
```
