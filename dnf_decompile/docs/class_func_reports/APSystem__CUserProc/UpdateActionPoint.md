# UpdateActionPoint

`_ZN8APSystem9CUserProc17UpdateActionPointEP5CUser`

`APSystem::CUserProc::UpdateActionPoint(CUser*)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x0812256c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812256c  _ZN8APSystem9CUserProc17UpdateActionPointEP5CUser
#           APSystem::CUserProc::UpdateActionPoint(CUser*)
# range [0x0812256c, 0x08122571]
0812256c +0x00:  push   %ebp
0812256d +0x01:  mov    %esp,%ebp
0812256f +0x03:  pop    %ebp
08122570 +0x04:  ret
08122571 +0x05:  nop
```

## 反编译 C

```c
// APSystem::CUserProc::UpdateActionPoint @ 0x812256c

/* APSystem::CUserProc::UpdateActionPoint(CUser*) */

void APSystem::CUserProc::UpdateActionPoint(CUser *param_1)

{
  return;
}
```
