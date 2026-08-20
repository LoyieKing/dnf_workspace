# enumToString

`_ZN16SecurityRestrict12enumToStringENS_4EnumE`

`SecurityRestrict::enumToString(SecurityRestrict::Enum)`

| 类 | 地址 |
|---|---|
| `SecurityRestrict` | `0x0816d481` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d481  _ZN16SecurityRestrict12enumToStringENS_4EnumE
#           SecurityRestrict::enumToString(SecurityRestrict::Enum)
# range [0x0816d481, 0x0816d48f]
0816d481 +0x00:  push   %ebp
0816d482 +0x01:  mov    %esp,%ebp
0816d484 +0x03:  mov    0x8(%ebp),%eax
0816d487 +0x06:  mov    &_ZN16SecurityRestrictL18enumStringSecurityE(,%eax,4),%eax
0816d48e +0x0d:  pop    %ebp
0816d48f +0x0e:  ret
```

## 反编译 C

```c
// SecurityRestrict::enumToString @ 0x816d481

/* SecurityRestrict::enumToString(SecurityRestrict::Enum) */

undefined4 SecurityRestrict::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringSecurity + param_1 * 4);
}
```
