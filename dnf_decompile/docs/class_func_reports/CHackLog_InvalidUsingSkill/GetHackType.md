# GetHackType

`_ZN26CHackLog_InvalidUsingSkill11GetHackTypeEv`

`CHackLog_InvalidUsingSkill::GetHackType()`

| 类 | 地址 |
|---|---|
| `CHackLog_InvalidUsingSkill` | `0x08286656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286656  _ZN26CHackLog_InvalidUsingSkill11GetHackTypeEv
#           CHackLog_InvalidUsingSkill::GetHackType()
# range [0x08286656, 0x0828665f]
08286656 +0x00:  push   %ebp
08286657 +0x01:  mov    %esp,%ebp
08286659 +0x03:  mov    $0x339,%eax
0828665e +0x08:  pop    %ebp
0828665f +0x09:  ret
```

## 反编译 C

```c
// CHackLog_InvalidUsingSkill::GetHackType @ 0x8286656

/* CHackLog_InvalidUsingSkill::GetHackType() */

undefined4 CHackLog_InvalidUsingSkill::GetHackType(void)

{
  return 0x339;
}
```
