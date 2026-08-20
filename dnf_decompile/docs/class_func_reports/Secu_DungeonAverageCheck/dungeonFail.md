# dungeonFail

`_ZN24Secu_DungeonAverageCheck11dungeonFailEv`

`Secu_DungeonAverageCheck::dungeonFail()`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x082799f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082799f4  _ZN24Secu_DungeonAverageCheck11dungeonFailEv
#           Secu_DungeonAverageCheck::dungeonFail()
# range [0x082799f4, 0x08279a11]
082799f4 +0x00:  push   %ebp
082799f5 +0x01:  mov    %esp,%ebp
082799f7 +0x03:  sub    $0x18,%esp
082799fa +0x06:  mov    0x8(%ebp),%eax
082799fd +0x09:  mov    %eax,(%esp)
08279a00 +0x0c:  call   08279a12 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv>  ; Secu_DungeonAverageCheck::CheckHackTypeEndDungeon()
08279a05 +0x11:  mov    0x8(%ebp),%eax
08279a08 +0x14:  mov    %eax,(%esp)
08279a0b +0x17:  call   08279490 <_ZN24Secu_DungeonAverageCheck5resetEv>  ; Secu_DungeonAverageCheck::reset()
08279a10 +0x1c:  leave
08279a11 +0x1d:  ret
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::dungeonFail @ 0x82799f4

/* Secu_DungeonAverageCheck::dungeonFail() */

void __thiscall Secu_DungeonAverageCheck::dungeonFail(Secu_DungeonAverageCheck *this)

{
  CheckHackTypeEndDungeon(this);
  reset(this);
  return;
}
```
