# dungeonClear

`_ZN24Secu_DungeonAverageCheck12dungeonClearEv`

`Secu_DungeonAverageCheck::dungeonClear()`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x082799d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082799d6  _ZN24Secu_DungeonAverageCheck12dungeonClearEv
#           Secu_DungeonAverageCheck::dungeonClear()
# range [0x082799d6, 0x082799f3]
082799d6 +0x00:  push   %ebp
082799d7 +0x01:  mov    %esp,%ebp
082799d9 +0x03:  sub    $0x18,%esp
082799dc +0x06:  mov    0x8(%ebp),%eax
082799df +0x09:  mov    %eax,(%esp)
082799e2 +0x0c:  call   08279a12 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv>  ; Secu_DungeonAverageCheck::CheckHackTypeEndDungeon()
082799e7 +0x11:  mov    0x8(%ebp),%eax
082799ea +0x14:  mov    %eax,(%esp)
082799ed +0x17:  call   08279490 <_ZN24Secu_DungeonAverageCheck5resetEv>  ; Secu_DungeonAverageCheck::reset()
082799f2 +0x1c:  leave
082799f3 +0x1d:  ret
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::dungeonClear @ 0x82799d6

/* Secu_DungeonAverageCheck::dungeonClear() */

void __thiscall Secu_DungeonAverageCheck::dungeonClear(Secu_DungeonAverageCheck *this)

{
  CheckHackTypeEndDungeon(this);
  reset(this);
  return;
}
```
