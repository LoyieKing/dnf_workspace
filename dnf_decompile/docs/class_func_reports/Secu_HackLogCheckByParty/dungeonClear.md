# dungeonClear

`_ZN24Secu_HackLogCheckByParty12dungeonClearEv`

`Secu_HackLogCheckByParty::dungeonClear()`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheckByParty` | `0x0827aab6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827aab6  _ZN24Secu_HackLogCheckByParty12dungeonClearEv
#           Secu_HackLogCheckByParty::dungeonClear()
# range [0x0827aab6, 0x0827aac9]
0827aab6 +0x00:  push   %ebp
0827aab7 +0x01:  mov    %esp,%ebp
0827aab9 +0x03:  sub    $0x18,%esp
0827aabc +0x06:  mov    0x8(%ebp),%eax
0827aabf +0x09:  mov    %eax,(%esp)
0827aac2 +0x0c:  call   082799d6 <_ZN24Secu_DungeonAverageCheck12dungeonClearEv>  ; Secu_DungeonAverageCheck::dungeonClear()
0827aac7 +0x11:  leave
0827aac8 +0x12:  ret
0827aac9 +0x13:  nop
```

## 反编译 C

```c
// Secu_HackLogCheckByParty::dungeonClear @ 0x827aab6

/* Secu_HackLogCheckByParty::dungeonClear() */

void __thiscall Secu_HackLogCheckByParty::dungeonClear(Secu_HackLogCheckByParty *this)

{
  Secu_DungeonAverageCheck::dungeonClear((Secu_DungeonAverageCheck *)this);
  return;
}
```
