# StartEvent

`_ZN23CCeraShopBonusItemEvent10StartEventEv`

`CCeraShopBonusItemEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CCeraShopBonusItemEvent` | `0x0810a346` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a346  _ZN23CCeraShopBonusItemEvent10StartEventEv
#           CCeraShopBonusItemEvent::StartEvent()
# range [0x0810a346, 0x0810a34b]
0810a346 +0x00:  push   %ebp
0810a347 +0x01:  mov    %esp,%ebp
0810a349 +0x03:  pop    %ebp
0810a34a +0x04:  ret
0810a34b +0x05:  nop
```

## 反编译 C

```c
// CCeraShopBonusItemEvent::StartEvent @ 0x810a346

/* CCeraShopBonusItemEvent::StartEvent() */

void CCeraShopBonusItemEvent::StartEvent(void)

{
  return;
}
```
