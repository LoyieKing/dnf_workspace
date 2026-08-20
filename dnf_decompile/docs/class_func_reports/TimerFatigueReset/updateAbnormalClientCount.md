# updateAbnormalClientCount

`_ZN17TimerFatigueReset25updateAbnormalClientCountEv`

`TimerFatigueReset::updateAbnormalClientCount()`

| 类 | 地址 |
|---|---|
| `TimerFatigueReset` | `0x086339fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086339fa  _ZN17TimerFatigueReset25updateAbnormalClientCountEv
#           TimerFatigueReset::updateAbnormalClientCount()
# range [0x086339fa, 0x08633a03]
086339fa +0x00:  push   %ebp
086339fb +0x01:  mov    %esp,%ebp
086339fd +0x03:  mov    $0x1,%eax
08633a02 +0x08:  pop    %ebp
08633a03 +0x09:  ret
```

## 反编译 C

```c
// TimerFatigueReset::updateAbnormalClientCount @ 0x86339fa

/* TimerFatigueReset::updateAbnormalClientCount() */

undefined4 TimerFatigueReset::updateAbnormalClientCount(void)

{
  return 1;
}
```
