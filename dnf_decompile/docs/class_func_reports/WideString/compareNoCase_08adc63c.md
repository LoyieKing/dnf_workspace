# compareNoCase

`_ZN10WideString13compareNoCaseERKS_S1_`

`WideString::compareNoCase(WideString const&, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc63c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc63c  _ZN10WideString13compareNoCaseERKS_S1_
#           WideString::compareNoCase(WideString const&, WideString const&)
# range [0x08adc63c, 0x08adc66d]
08adc63c +0x00:  push   %ebp
08adc63d +0x01:  mov    %esp,%ebp
08adc63f +0x03:  push   %ebx
08adc640 +0x04:  sub    $0x14,%esp
08adc643 +0x07:  mov    0xc(%ebp),%eax
08adc646 +0x0a:  mov    %eax,(%esp)
08adc649 +0x0d:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc64e +0x12:  mov    %eax,%ebx
08adc650 +0x14:  mov    0x8(%ebp),%eax
08adc653 +0x17:  mov    %eax,(%esp)
08adc656 +0x1a:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc65b +0x1f:  mov    %ebx,0x4(%esp)
08adc65f +0x23:  mov    %eax,(%esp)
08adc662 +0x26:  call   0807d950 <_init+0x248>
08adc667 +0x2b:  add    $0x14,%esp
08adc66a +0x2e:  pop    %ebx
08adc66b +0x2f:  pop    %ebp
08adc66c +0x30:  ret
08adc66d +0x31:  nop
```

## 反编译 C

```c
// WideString::compareNoCase @ 0x8adc63c

int32 WideString::compareNoCase(WideString *src1,WideString *src2)

{
  wchar_t *__s2;
  wchar_t *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = wcscasecmp(__s1,__s2);
  return iVar1;
}
```
