# GetDeathTowerLimitDamage

`_ZN19CHackLog_OverDamage24GetDeathTowerLimitDamageEv`

`CHackLog_OverDamage::GetDeathTowerLimitDamage()`

| 类 | 地址 |
|---|---|
| `CHackLog_OverDamage` | `0x08286984` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286984  _ZN19CHackLog_OverDamage24GetDeathTowerLimitDamageEv
#           CHackLog_OverDamage::GetDeathTowerLimitDamage()
# range [0x08286984, 0x0828698d]
08286984 +0x00:  push   %ebp
08286985 +0x01:  mov    %esp,%ebp
08286987 +0x03:  mov    "`�\n",%eax
0828698c +0x08:  pop    %ebp
0828698d +0x09:  ret
```

## 反编译 C

```c
// CHackLog_OverDamage::GetDeathTowerLimitDamage @ 0x8286984

/* CHackLog_OverDamage::GetDeathTowerLimitDamage() */

undefined4 CHackLog_OverDamage::GetDeathTowerLimitDamage(void)

{
  return _S_KILL_MONSTER_OVER_DAMAGE_CONST._24_4_;
}
```
