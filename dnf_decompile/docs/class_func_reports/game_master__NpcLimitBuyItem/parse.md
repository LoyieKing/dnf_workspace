# parse

`_ZN11game_master15NpcLimitBuyItem5parseEv`

`game_master::NpcLimitBuyItem::parse()`

| 类 | 地址 |
|---|---|
| `game_master::NpcLimitBuyItem` | `0x084b1f22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1f22  _ZN11game_master15NpcLimitBuyItem5parseEv
#           game_master::NpcLimitBuyItem::parse()
# range [0x084b1f22, 0x084b1f27]
084b1f22 +0x00:  push   %ebp
084b1f23 +0x01:  mov    %esp,%ebp
084b1f25 +0x03:  pop    %ebp
084b1f26 +0x04:  ret
084b1f27 +0x05:  nop
```

## 反编译 C

```c
// game_master::NpcLimitBuyItem::parse @ 0x84b1f22

/* game_master::NpcLimitBuyItem::parse() */

void game_master::NpcLimitBuyItem::parse(void)

{
  return;
}
```
