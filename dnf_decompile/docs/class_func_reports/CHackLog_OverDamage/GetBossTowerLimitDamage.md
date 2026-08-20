# GetBossTowerLimitDamage

`_ZN19CHackLog_OverDamage23GetBossTowerLimitDamageEv`

`CHackLog_OverDamage::GetBossTowerLimitDamage()`

| 类 | 地址 |
|---|---|
| `CHackLog_OverDamage` | `0x082869ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082869ac  _ZN19CHackLog_OverDamage23GetBossTowerLimitDamageEv
#           CHackLog_OverDamage::GetBossTowerLimitDamage()
# range [0x082869ac, 0x082869b5]
082869ac +0x00:  push   %ebp
082869ad +0x01:  mov    %esp,%ebp
082869af +0x03:  mov    &_ZL33_S_KILL_MONSTER_OVER_DAMAGE_CONST+0x14,%eax
082869b4 +0x08:  pop    %ebp
082869b5 +0x09:  ret
```

## 反编译 C

```c
// CHackLog_OverDamage::GetBossTowerLimitDamage @ 0x82869ac

/* CHackLog_OverDamage::GetBossTowerLimitDamage() */

undefined4 CHackLog_OverDamage::GetBossTowerLimitDamage(void)

{
  return _S_KILL_MONSTER_OVER_DAMAGE_CONST._20_4_;
}
```
