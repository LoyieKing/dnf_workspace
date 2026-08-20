# GetDeathTowerOverDamageHackType

`_ZN19CHackLog_OverDamage31GetDeathTowerOverDamageHackTypeEv`

`CHackLog_OverDamage::GetDeathTowerOverDamageHackType()`

| 类 | 地址 |
|---|---|
| `CHackLog_OverDamage` | `0x0828698e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828698e  _ZN19CHackLog_OverDamage31GetDeathTowerOverDamageHackTypeEv
#           CHackLog_OverDamage::GetDeathTowerOverDamageHackType()
# range [0x0828698e, 0x08286997]
0828698e +0x00:  push   %ebp
0828698f +0x01:  mov    %esp,%ebp
08286991 +0x03:  mov    $0x6b,%eax
08286996 +0x08:  pop    %ebp
08286997 +0x09:  ret
```

## 反编译 C

```c
// CHackLog_OverDamage::GetDeathTowerOverDamageHackType @ 0x828698e

/* CHackLog_OverDamage::GetDeathTowerOverDamageHackType() */

undefined4 CHackLog_OverDamage::GetDeathTowerOverDamageHackType(void)

{
  return 0x6b;
}
```
