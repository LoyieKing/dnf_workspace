# compare

`_ZN10WideString7compareERKS_PKw`

`WideString::compare(WideString const&, wchar_t const*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc5a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc5a4  _ZN10WideString7compareERKS_PKw
#           WideString::compare(WideString const&, wchar_t const*)
# range [0x08adc5a4, 0x08adc5c5]
08adc5a4 +0x00:  push   %ebp
08adc5a5 +0x01:  mov    %esp,%ebp
08adc5a7 +0x03:  sub    $0x18,%esp
08adc5aa +0x06:  mov    0x8(%ebp),%eax
08adc5ad +0x09:  mov    %eax,(%esp)
08adc5b0 +0x0c:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc5b5 +0x11:  mov    0xc(%ebp),%edx
08adc5b8 +0x14:  mov    %edx,0x4(%esp)
08adc5bc +0x18:  mov    %eax,(%esp)
08adc5bf +0x1b:  call   0807e6b0 <_init+0xfa8>
08adc5c4 +0x20:  leave
08adc5c5 +0x21:  ret
```

## 反编译 C

```c
// WideString::compare @ 0x8adc5a4

int32 WideString::compare(WideString *src1,wchar *src2)

{
  wchar_t *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = wcscmp(__s1,src2);
  return iVar1;
}
```
