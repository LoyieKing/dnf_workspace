# OnGiveup

`_ZN18online_preliminary18COnlinePreliminary8OnGiveupEP5CUser`

`online_preliminary::COnlinePreliminary::OnGiveup(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561e36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561e36  _ZN18online_preliminary18COnlinePreliminary8OnGiveupEP5CUser
#           online_preliminary::COnlinePreliminary::OnGiveup(CUser*)
# range [0x08561e36, 0x08561e3f]
08561e36 +0x00:  push   %ebp
08561e37 +0x01:  mov    %esp,%ebp
08561e39 +0x03:  mov    $0x1,%eax
08561e3e +0x08:  pop    %ebp
08561e3f +0x09:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnGiveup @ 0x8561e36

/* online_preliminary::COnlinePreliminary::OnGiveup(CUser*) */

undefined4 online_preliminary::COnlinePreliminary::OnGiveup(CUser *param_1)

{
  return 1;
}
```
