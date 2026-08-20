# rfind

`_ZNK10CharString5rfindEiPKc`

`CharString::rfind(int, char const*) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad7484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad7484  _ZNK10CharString5rfindEiPKc
#           CharString::rfind(int, char const*) const
# range [0x08ad7484, 0x08ad74b3]
08ad7484 +0x00:  push   %ebp
08ad7485 +0x01:  mov    %esp,%ebp
08ad7487 +0x03:  sub    $0x18,%esp
08ad748a +0x06:  mov    0x10(%ebp),%eax
08ad748d +0x09:  mov    %eax,(%esp)
08ad7490 +0x0c:  call   0807e3b0 <_init+0xca8>
08ad7495 +0x11:  mov    %eax,0xc(%esp)
08ad7499 +0x15:  mov    0x10(%ebp),%eax
08ad749c +0x18:  mov    %eax,0x8(%esp)
08ad74a0 +0x1c:  mov    0xc(%ebp),%eax
08ad74a3 +0x1f:  mov    %eax,0x4(%esp)
08ad74a7 +0x23:  mov    0x8(%ebp),%eax
08ad74aa +0x26:  mov    %eax,(%esp)
08ad74ad +0x29:  call   08ad74e8 <_ZNK10CharString5rfindEiPKci>  ; CharString::rfind(int, char const*, int) const
08ad74b2 +0x2e:  leave
08ad74b3 +0x2f:  ret
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad7484

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, char * pat) */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = strlen(pat);
  iVar1 = rfind(this,pos,pat,patLength);
  return iVar1;
}
```
