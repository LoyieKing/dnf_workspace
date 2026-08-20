# rfind

`_ZNK10CharString5rfindEPKci`

`CharString::rfind(char const*, int) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad74b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad74b4  _ZNK10CharString5rfindEPKci
#           CharString::rfind(char const*, int) const
# range [0x08ad74b4, 0x08ad74e7]
08ad74b4 +0x00:  push   %ebp
08ad74b5 +0x01:  mov    %esp,%ebp
08ad74b7 +0x03:  sub    $0x18,%esp
08ad74ba +0x06:  mov    0x8(%ebp),%eax
08ad74bd +0x09:  mov    %eax,(%esp)
08ad74c0 +0x0c:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad74c5 +0x11:  sub    0x10(%ebp),%eax
08ad74c8 +0x14:  mov    0x10(%ebp),%edx
08ad74cb +0x17:  mov    %edx,0xc(%esp)
08ad74cf +0x1b:  mov    0xc(%ebp),%edx
08ad74d2 +0x1e:  mov    %edx,0x8(%esp)
08ad74d6 +0x22:  mov    %eax,0x4(%esp)
08ad74da +0x26:  mov    0x8(%ebp),%eax
08ad74dd +0x29:  mov    %eax,(%esp)
08ad74e0 +0x2c:  call   08ad74e8 <_ZNK10CharString5rfindEiPKci>  ; CharString::rfind(int, char const*, int) const
08ad74e5 +0x31:  leave
08ad74e6 +0x32:  ret
08ad74e7 +0x33:  nop
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad74b4

/* DWARF original prototype: int32 rfind(CharString * this, char * pat, int32 patLength) */

int32 __thiscall CharString::rfind(CharString *this,char *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}
```
