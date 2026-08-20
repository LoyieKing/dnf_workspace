# getAvatarRecharageLimit

`_ZN4ARAD6SCRIPT14AvatarRecharge23getAvatarRecharageLimitEv`

`ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b1314` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1314  _ZN4ARAD6SCRIPT14AvatarRecharge23getAvatarRecharageLimitEv
#           ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit()
# range [0x088b1314, 0x088b131d]
088b1314 +0x00:  push   %ebp
088b1315 +0x01:  mov    %esp,%ebp
088b1317 +0x03:  mov    0x8(%ebp),%eax
088b131a +0x06:  mov    (%eax),%eax
088b131c +0x08:  pop    %ebp
088b131d +0x09:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit @ 0x88b1314

/* ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit() */

undefined4 __thiscall ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit(AvatarRecharge *this)

{
  return *(undefined4 *)this;
}
```
