# compare

`_ZN10WideString7compareEPKwRKS_`

`WideString::compare(wchar_t const*, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc5f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc5f8  _ZN10WideString7compareEPKwRKS_
#           WideString::compare(wchar_t const*, WideString const&)
# range [0x08adc5f8, 0x08adc619]
08adc5f8 +0x00:  push   %ebp
08adc5f9 +0x01:  mov    %esp,%ebp
08adc5fb +0x03:  sub    $0x18,%esp
08adc5fe +0x06:  mov    0xc(%ebp),%eax
08adc601 +0x09:  mov    %eax,(%esp)
08adc604 +0x0c:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc609 +0x11:  mov    %eax,0x4(%esp)
08adc60d +0x15:  mov    0x8(%ebp),%eax
08adc610 +0x18:  mov    %eax,(%esp)
08adc613 +0x1b:  call   0807e6b0 <_init+0xfa8>
08adc618 +0x20:  leave
08adc619 +0x21:  ret
```

## 反编译 C

```c
// WideString::compare @ 0x8adc5f8

int32 WideString::compare(wchar *src1,WideString *src2)

{
  wchar_t *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = wcscmp(src1,__s2);
  return iVar1;
}
```
