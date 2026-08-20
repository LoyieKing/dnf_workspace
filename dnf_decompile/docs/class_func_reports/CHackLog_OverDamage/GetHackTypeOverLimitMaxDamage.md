# GetHackTypeOverLimitMaxDamage

`_ZN19CHackLog_OverDamage29GetHackTypeOverLimitMaxDamageEv`

`CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage()`

| 类 | 地址 |
|---|---|
| `CHackLog_OverDamage` | `0x082869a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082869a2  _ZN19CHackLog_OverDamage29GetHackTypeOverLimitMaxDamageEv
#           CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage()
# range [0x082869a2, 0x082869ab]
082869a2 +0x00:  push   %ebp
082869a3 +0x01:  mov    %esp,%ebp
082869a5 +0x03:  mov    $0x6b,%eax
082869aa +0x08:  pop    %ebp
082869ab +0x09:  ret
```

## 反编译 C

```c
// CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage @ 0x82869a2

/* CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage() */

undefined4 CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage(void)

{
  return 0x6b;
}
```
