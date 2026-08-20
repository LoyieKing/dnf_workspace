# getEmblemRechargeStoneInfo

`_ZN4ARAD6SCRIPT14AvatarRecharge26getEmblemRechargeStoneInfoEv`

`ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b131e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b131e  _ZN4ARAD6SCRIPT14AvatarRecharge26getEmblemRechargeStoneInfoEv
#           ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo()
# range [0x088b131e, 0x088b1329]
088b131e +0x00:  push   %ebp
088b131f +0x01:  mov    %esp,%ebp
088b1321 +0x03:  mov    0x8(%ebp),%eax
088b1324 +0x06:  add    $0x4,%eax
088b1327 +0x09:  pop    %ebp
088b1328 +0x0a:  ret
088b1329 +0x0b:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo @ 0x88b131e

/* ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo() */

AvatarRecharge * __thiscall
ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo(AvatarRecharge *this)

{
  return this + 4;
}
```
