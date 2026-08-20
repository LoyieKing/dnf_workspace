# enumToString

`_ZN14MobileRestrict12enumToStringENS_4EnumE`

`MobileRestrict::enumToString(MobileRestrict::Enum)`

| 类 | 地址 |
|---|---|
| `MobileRestrict` | `0x0816d463` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d463  _ZN14MobileRestrict12enumToStringENS_4EnumE
#           MobileRestrict::enumToString(MobileRestrict::Enum)
# range [0x0816d463, 0x0816d471]
0816d463 +0x00:  push   %ebp
0816d464 +0x01:  mov    %esp,%ebp
0816d466 +0x03:  mov    0x8(%ebp),%eax
0816d469 +0x06:  mov    &_ZN14MobileRestrictL17enumStringMobilesE(,%eax,4),%eax
0816d470 +0x0d:  pop    %ebp
0816d471 +0x0e:  ret
```

## 反编译 C

```c
// MobileRestrict::enumToString @ 0x816d463

/* MobileRestrict::enumToString(MobileRestrict::Enum) */

undefined4 MobileRestrict::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringMobiles + param_1 * 4);
}
```
