# enumToString

`_ZN16RestrictCategory12enumToStringENS_4EnumE`

`RestrictCategory::enumToString(RestrictCategory::Enum)`

| 类 | 地址 |
|---|---|
| `RestrictCategory` | `0x0816d454` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d454  _ZN16RestrictCategory12enumToStringENS_4EnumE
#           RestrictCategory::enumToString(RestrictCategory::Enum)
# range [0x0816d454, 0x0816d462]
0816d454 +0x00:  push   %ebp
0816d455 +0x01:  mov    %esp,%ebp
0816d457 +0x03:  mov    0x8(%ebp),%eax
0816d45a +0x06:  mov    &_ZN16RestrictCategoryL18enumStringRestrictE(,%eax,4),%eax
0816d461 +0x0d:  pop    %ebp
0816d462 +0x0e:  ret
```

## 反编译 C

```c
// RestrictCategory::enumToString @ 0x816d454

/* RestrictCategory::enumToString(RestrictCategory::Enum) */

undefined4 RestrictCategory::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringRestrict + param_1 * 4);
}
```
