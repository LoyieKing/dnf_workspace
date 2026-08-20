# rfind

`_ZNK10WideString5rfindEiPKwi`

`WideString::rfind(int, wchar_t const*, int) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada53e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada53e  _ZNK10WideString5rfindEiPKwi
#           WideString::rfind(int, wchar_t const*, int) const
# range [0x08ada53e, 0x08ada5df]
08ada53e +0x00:  push   %ebp
08ada53f +0x01:  mov    %esp,%ebp
08ada541 +0x03:  sub    $0x28,%esp
08ada544 +0x06:  cmpl   $0x0,0x14(%ebp)
08ada548 +0x0a:  jne    08ada554 <+0x16>
08ada54a +0x0c:  mov    $0xffffffff,%eax
08ada54f +0x11:  jmp    08ada5de <+0xa0>
08ada554 +0x16:  cmpl   $0x0,0xc(%ebp)
08ada558 +0x1a:  js     08ada56d <+0x2f>
08ada55a +0x1c:  mov    0x8(%ebp),%eax
08ada55d +0x1f:  mov    %eax,(%esp)
08ada560 +0x22:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada565 +0x27:  sub    0xc(%ebp),%eax
08ada568 +0x2a:  cmp    0x14(%ebp),%eax
08ada56b +0x2d:  jge    08ada574 <+0x36>
08ada56d +0x2f:  mov    $0x1,%eax
08ada572 +0x34:  jmp    08ada579 <+0x3b>
08ada574 +0x36:  mov    $0x0,%eax
08ada579 +0x3b:  test   %al,%al
08ada57b +0x3d:  je     08ada584 <+0x46>
08ada57d +0x3f:  mov    $0xffffffff,%eax
08ada582 +0x44:  jmp    08ada5de <+0xa0>
08ada584 +0x46:  mov    0x8(%ebp),%eax
08ada587 +0x49:  mov    %eax,(%esp)
08ada58a +0x4c:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada58f +0x51:  mov    %eax,-0x10(%ebp)
08ada592 +0x54:  mov    0xc(%ebp),%eax
08ada595 +0x57:  mov    %eax,-0xc(%ebp)
08ada598 +0x5a:  jmp    08ada5cd <+0x8f>
08ada59a +0x5c:  mov    0x14(%ebp),%eax
08ada59d +0x5f:  lea    0x0(,%eax,4),%edx
08ada5a4 +0x66:  mov    -0xc(%ebp),%eax
08ada5a7 +0x69:  shl    $0x2,%eax
08ada5aa +0x6c:  add    -0x10(%ebp),%eax
08ada5ad +0x6f:  mov    %edx,0x8(%esp)
08ada5b1 +0x73:  mov    0x10(%ebp),%edx
08ada5b4 +0x76:  mov    %edx,0x4(%esp)
08ada5b8 +0x7a:  mov    %eax,(%esp)
08ada5bb +0x7d:  call   0807dc90 <_init+0x588>
08ada5c0 +0x82:  test   %eax,%eax
08ada5c2 +0x84:  jne    08ada5c9 <+0x8b>
08ada5c4 +0x86:  mov    -0xc(%ebp),%eax
08ada5c7 +0x89:  jmp    08ada5de <+0xa0>
08ada5c9 +0x8b:  subl   $0x1,-0xc(%ebp)
08ada5cd +0x8f:  mov    -0xc(%ebp),%eax
08ada5d0 +0x92:  not    %eax
08ada5d2 +0x94:  shr    $0x1f,%eax
08ada5d5 +0x97:  test   %al,%al
08ada5d7 +0x99:  jne    08ada59a <+0x5c>
08ada5d9 +0x9b:  mov    $0xffffffff,%eax
08ada5de +0xa0:  leave
08ada5df +0xa1:  ret
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada53e

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, wchar * pat, int32 patLength)
    */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,wchar *pat,int32 patLength)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int iVar4;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???] */
  if (patLength != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 - pos < patLength)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        iVar4 = memcmp(pwVar3 + local_10,pat,patLength * 4);
        if (iVar4 == 0) {
          return local_10;
        }
      }
    }
  }
  return -1;
}
```
