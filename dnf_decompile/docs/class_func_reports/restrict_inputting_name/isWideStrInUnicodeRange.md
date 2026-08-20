# isWideStrInUnicodeRange

`_ZN23restrict_inputting_name23isWideStrInUnicodeRangeEPKw`

`restrict_inputting_name::isWideStrInUnicodeRange(wchar_t const*)`

| 类 | 地址 |
|---|---|
| `restrict_inputting_name` | `0x08ac2de4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac2de4  _ZN23restrict_inputting_name23isWideStrInUnicodeRangeEPKw
#           restrict_inputting_name::isWideStrInUnicodeRange(wchar_t const*)
# range [0x08ac2de4, 0x08ac2e39]
08ac2de4 +0x00:  push   %ebp
08ac2de5 +0x01:  mov    %esp,%ebp
08ac2de7 +0x03:  sub    $0x28,%esp
08ac2dea +0x06:  lea    -0x11(%ebp),%eax
08ac2ded +0x09:  mov    %eax,(%esp)
08ac2df0 +0x0c:  call   08ac3240 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x39d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x39d
08ac2df5 +0x11:  mov    0x8(%ebp),%eax
08ac2df8 +0x14:  mov    %eax,(%esp)
08ac2dfb +0x17:  call   0807e130 <_init+0xa28>
08ac2e00 +0x1c:  mov    %eax,-0x10(%ebp)
08ac2e03 +0x1f:  mov    -0x10(%ebp),%eax
08ac2e06 +0x22:  shl    $0x2,%eax
08ac2e09 +0x25:  add    0x8(%ebp),%eax
08ac2e0c +0x28:  movzbl -0x11(%ebp),%edx
08ac2e10 +0x2c:  mov    %dl,0x8(%esp)
08ac2e14 +0x30:  mov    %eax,0x4(%esp)
08ac2e18 +0x34:  mov    0x8(%ebp),%eax
08ac2e1b +0x37:  mov    %eax,(%esp)
08ac2e1e +0x3a:  call   08ac3253 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x3b0>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x3b0
08ac2e23 +0x3f:  mov    %al,-0x9(%ebp)
08ac2e26 +0x42:  cmpb   $0x0,-0x9(%ebp)
08ac2e2a +0x46:  je     08ac2e33 <+0x4f>
08ac2e2c +0x48:  mov    $0x0,%eax
08ac2e31 +0x4d:  jmp    08ac2e38 <+0x54>
08ac2e33 +0x4f:  mov    $0x1,%eax
08ac2e38 +0x54:  leave
08ac2e39 +0x55:  ret
```

## 反编译 C

```c
// restrict_inputting_name::isWideStrInUnicodeRange @ 0x8ac2de4

/* restrict_inputting_name::isWideStrInUnicodeRange(wchar_t const*) */

bool restrict_inputting_name::isWideStrInUnicodeRange(wchar_t *param_1)

{
  bool bVar1;
  IsNoneUnicodeRange local_15;
  size_t local_14;
  
  IsNoneUnicodeRange::IsNoneUnicodeRange(&local_15);
  local_14 = wcslen(param_1);
  bVar1 = std::any_of<wchar_t_const*,restrict_inputting_name::IsNoneUnicodeRange>
                    (param_1,param_1 + local_14,local_15);
  return !bVar1;
}
```
