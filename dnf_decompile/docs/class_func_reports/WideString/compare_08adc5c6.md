# compare

`_ZN10WideString7compareERKS_S1_`

`WideString::compare(WideString const&, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc5c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc5c6  _ZN10WideString7compareERKS_S1_
#           WideString::compare(WideString const&, WideString const&)
# range [0x08adc5c6, 0x08adc5f7]
08adc5c6 +0x00:  push   %ebp
08adc5c7 +0x01:  mov    %esp,%ebp
08adc5c9 +0x03:  push   %ebx
08adc5ca +0x04:  sub    $0x14,%esp
08adc5cd +0x07:  mov    0xc(%ebp),%eax
08adc5d0 +0x0a:  mov    %eax,(%esp)
08adc5d3 +0x0d:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc5d8 +0x12:  mov    %eax,%ebx
08adc5da +0x14:  mov    0x8(%ebp),%eax
08adc5dd +0x17:  mov    %eax,(%esp)
08adc5e0 +0x1a:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc5e5 +0x1f:  mov    %ebx,0x4(%esp)
08adc5e9 +0x23:  mov    %eax,(%esp)
08adc5ec +0x26:  call   0807e6b0 <_init+0xfa8>
08adc5f1 +0x2b:  add    $0x14,%esp
08adc5f4 +0x2e:  pop    %ebx
08adc5f5 +0x2f:  pop    %ebp
08adc5f6 +0x30:  ret
08adc5f7 +0x31:  nop
```

## 反编译 C

```c
// WideString::compare @ 0x8adc5c6

int32 WideString::compare(WideString *src1,WideString *src2)

{
  wchar_t *__s2;
  wchar_t *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = wcscmp(__s1,__s2);
  return iVar1;
}
```
