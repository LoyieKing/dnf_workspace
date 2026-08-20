# GetBossTowerOverDamageHackType

`_ZN19CHackLog_OverDamage30GetBossTowerOverDamageHackTypeEv`

`CHackLog_OverDamage::GetBossTowerOverDamageHackType()`

| 类 | 地址 |
|---|---|
| `CHackLog_OverDamage` | `0x082869b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082869b6  _ZN19CHackLog_OverDamage30GetBossTowerOverDamageHackTypeEv
#           CHackLog_OverDamage::GetBossTowerOverDamageHackType()
# range [0x082869b6, 0x082869bf]
082869b6 +0x00:  push   %ebp
082869b7 +0x01:  mov    %esp,%ebp
082869b9 +0x03:  mov    $0x85,%eax
082869be +0x08:  pop    %ebp
082869bf +0x09:  ret
```

## 反编译 C

```c
// CHackLog_OverDamage::GetBossTowerOverDamageHackType @ 0x82869b6

/* CHackLog_OverDamage::GetBossTowerOverDamageHackType() */

undefined4 CHackLog_OverDamage::GetBossTowerOverDamageHackType(void)

{
  return 0x85;
}
```
