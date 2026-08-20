# GetTradePunishType

`_ZN5CUser18GetTradePunishTypeEv`

`CUser::GetTradePunishType()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868995a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868995a  _ZN5CUser18GetTradePunishTypeEv
#           CUser::GetTradePunishType()
# range [0x0868995a, 0x08689967]
0868995a +0x00:  push   %ebp
0868995b +0x01:  mov    %esp,%ebp
0868995d +0x03:  mov    0x8(%ebp),%eax
08689960 +0x06:  mov    0x79628(%eax),%eax
08689966 +0x0c:  pop    %ebp
08689967 +0x0d:  ret
```

## 反编译 C

```c
// CUser::GetTradePunishType @ 0x868995a

/* CUser::GetTradePunishType() */

undefined4 __thiscall CUser::GetTradePunishType(CUser *this)

{
  return *(undefined4 *)(this + 0x79628);
}
```
