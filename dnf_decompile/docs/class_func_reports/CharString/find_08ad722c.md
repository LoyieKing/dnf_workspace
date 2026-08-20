# find

`_ZNK10CharString4findEPKci`

`CharString::find(char const*, int) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad722c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad722c  _ZNK10CharString4findEPKci
#           CharString::find(char const*, int) const
# range [0x08ad722c, 0x08ad7255]
08ad722c +0x00:  push   %ebp
08ad722d +0x01:  mov    %esp,%ebp
08ad722f +0x03:  sub    $0x18,%esp
08ad7232 +0x06:  mov    0x10(%ebp),%eax
08ad7235 +0x09:  mov    %eax,0xc(%esp)
08ad7239 +0x0d:  mov    0xc(%ebp),%eax
08ad723c +0x10:  mov    %eax,0x8(%esp)
08ad7240 +0x14:  movl   $0x0,0x4(%esp)
08ad7248 +0x1c:  mov    0x8(%ebp),%eax
08ad724b +0x1f:  mov    %eax,(%esp)
08ad724e +0x22:  call   08ad7256 <_ZNK10CharString4findEiPKci>  ; CharString::find(int, char const*, int) const
08ad7253 +0x27:  leave
08ad7254 +0x28:  ret
08ad7255 +0x29:  nop
```

## 反编译 C

```c
// CharString::find @ 0x8ad722c

/* DWARF original prototype: int32 find(CharString * this, char * pat, int32 patLength) */

int32 __thiscall CharString::find(CharString *this,char *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}
```
