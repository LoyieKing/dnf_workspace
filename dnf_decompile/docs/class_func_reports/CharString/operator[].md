# operator[]

`_ZNK10CharStringixEi`

`CharString::operator[](int) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad709c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad709c  _ZNK10CharStringixEi
#           CharString::operator[](int) const
# range [0x08ad709c, 0x08ad70b5]
08ad709c +0x00:  push   %ebp
08ad709d +0x01:  mov    %esp,%ebp
08ad709f +0x03:  sub    $0x8,%esp
08ad70a2 +0x06:  mov    0xc(%ebp),%eax
08ad70a5 +0x09:  mov    %eax,0x4(%esp)
08ad70a9 +0x0d:  mov    0x8(%ebp),%eax
08ad70ac +0x10:  mov    %eax,(%esp)
08ad70af +0x13:  call   08ad6c8e <_ZNK10CharString5getAtEi>  ; CharString::getAt(int) const
08ad70b4 +0x18:  leave
08ad70b5 +0x19:  ret
```

## 反编译 C

```c
// CharString::operator[] @ 0x8ad709c

/* DWARF original prototype: char operator[](CharString * this, int idx) */

char __thiscall CharString::operator[](CharString *this,int idx)

{
  char cVar1;
  
  cVar1 = getAt(this,idx);
  return cVar1;
}
```
