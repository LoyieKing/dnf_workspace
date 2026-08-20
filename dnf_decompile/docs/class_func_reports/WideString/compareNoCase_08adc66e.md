# compareNoCase

`_ZN10WideString13compareNoCaseEPKwRKS_`

`WideString::compareNoCase(wchar_t const*, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc66e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc66e  _ZN10WideString13compareNoCaseEPKwRKS_
#           WideString::compareNoCase(wchar_t const*, WideString const&)
# range [0x08adc66e, 0x08adc68f]
08adc66e +0x00:  push   %ebp
08adc66f +0x01:  mov    %esp,%ebp
08adc671 +0x03:  sub    $0x18,%esp
08adc674 +0x06:  mov    0xc(%ebp),%eax
08adc677 +0x09:  mov    %eax,(%esp)
08adc67a +0x0c:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc67f +0x11:  mov    %eax,0x4(%esp)
08adc683 +0x15:  mov    0x8(%ebp),%eax
08adc686 +0x18:  mov    %eax,(%esp)
08adc689 +0x1b:  call   0807d950 <_init+0x248>
08adc68e +0x20:  leave
08adc68f +0x21:  ret
```

## 反编译 C

```c
// WideString::compareNoCase @ 0x8adc66e

int32 WideString::compareNoCase(wchar *src1,WideString *src2)

{
  wchar_t *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = wcscasecmp(src1,__s2);
  return iVar1;
}
```
