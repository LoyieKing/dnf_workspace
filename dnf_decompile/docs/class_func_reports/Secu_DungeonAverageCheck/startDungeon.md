# startDungeon

`_ZN24Secu_DungeonAverageCheck12startDungeonEv`

`Secu_DungeonAverageCheck::startDungeon()`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x082794c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082794c2  _ZN24Secu_DungeonAverageCheck12startDungeonEv
#           Secu_DungeonAverageCheck::startDungeon()
# range [0x082794c2, 0x082794d5]
082794c2 +0x00:  push   %ebp
082794c3 +0x01:  mov    %esp,%ebp
082794c5 +0x03:  sub    $0x18,%esp
082794c8 +0x06:  mov    0x8(%ebp),%eax
082794cb +0x09:  mov    %eax,(%esp)
082794ce +0x0c:  call   08279490 <_ZN24Secu_DungeonAverageCheck5resetEv>  ; Secu_DungeonAverageCheck::reset()
082794d3 +0x11:  leave
082794d4 +0x12:  ret
082794d5 +0x13:  nop
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::startDungeon @ 0x82794c2

/* Secu_DungeonAverageCheck::startDungeon() */

void __thiscall Secu_DungeonAverageCheck::startDungeon(Secu_DungeonAverageCheck *this)

{
  reset(this);
  return;
}
```
