# rfind

`_ZNK10CharString5rfindEPKc`

`CharString::rfind(char const*) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad7442` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad7442  _ZNK10CharString5rfindEPKc
#           CharString::rfind(char const*) const
# range [0x08ad7442, 0x08ad7483]
08ad7442 +0x00:  push   %ebp
08ad7443 +0x01:  mov    %esp,%ebp
08ad7445 +0x03:  sub    $0x28,%esp
08ad7448 +0x06:  mov    0xc(%ebp),%eax
08ad744b +0x09:  mov    %eax,(%esp)
08ad744e +0x0c:  call   0807e3b0 <_init+0xca8>
08ad7453 +0x11:  mov    %eax,-0xc(%ebp)
08ad7456 +0x14:  mov    0x8(%ebp),%eax
08ad7459 +0x17:  mov    %eax,(%esp)
08ad745c +0x1a:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad7461 +0x1f:  sub    -0xc(%ebp),%eax
08ad7464 +0x22:  mov    -0xc(%ebp),%edx
08ad7467 +0x25:  mov    %edx,0xc(%esp)
08ad746b +0x29:  mov    0xc(%ebp),%edx
08ad746e +0x2c:  mov    %edx,0x8(%esp)
08ad7472 +0x30:  mov    %eax,0x4(%esp)
08ad7476 +0x34:  mov    0x8(%ebp),%eax
08ad7479 +0x37:  mov    %eax,(%esp)
08ad747c +0x3a:  call   08ad74e8 <_ZNK10CharString5rfindEiPKci>  ; CharString::rfind(int, char const*, int) const
08ad7481 +0x3f:  leave
08ad7482 +0x40:  ret
08ad7483 +0x41:  nop
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad7442

/* DWARF original prototype: int32 rfind(CharString * this, char * pat) */

int32 __thiscall CharString::rfind(CharString *this,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
                    /* Unresolved local var: int32 patLength@[???] */
  patLength = strlen(pat);
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}
```
