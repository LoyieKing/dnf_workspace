# compareNoCase

`_ZN10WideString13compareNoCaseERKS_PKw`

`WideString::compareNoCase(WideString const&, wchar_t const*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc61a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc61a  _ZN10WideString13compareNoCaseERKS_PKw
#           WideString::compareNoCase(WideString const&, wchar_t const*)
# range [0x08adc61a, 0x08adc63b]
08adc61a +0x00:  push   %ebp
08adc61b +0x01:  mov    %esp,%ebp
08adc61d +0x03:  sub    $0x18,%esp
08adc620 +0x06:  mov    0x8(%ebp),%eax
08adc623 +0x09:  mov    %eax,(%esp)
08adc626 +0x0c:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc62b +0x11:  mov    0xc(%ebp),%edx
08adc62e +0x14:  mov    %edx,0x4(%esp)
08adc632 +0x18:  mov    %eax,(%esp)
08adc635 +0x1b:  call   0807d950 <_init+0x248>
08adc63a +0x20:  leave
08adc63b +0x21:  ret
```

## 反编译 C

```c
// WideString::compareNoCase @ 0x8adc61a

int32 WideString::compareNoCase(WideString *src1,wchar *src2)

{
  wchar_t *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = wcscasecmp(__s1,src2);
  return iVar1;
}
```
