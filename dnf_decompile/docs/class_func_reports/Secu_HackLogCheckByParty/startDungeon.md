# startDungeon

`_ZN24Secu_HackLogCheckByParty12startDungeonEv`

`Secu_HackLogCheckByParty::startDungeon()`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheckByParty` | `0x0827a92c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a92c  _ZN24Secu_HackLogCheckByParty12startDungeonEv
#           Secu_HackLogCheckByParty::startDungeon()
# range [0x0827a92c, 0x0827a93f]
0827a92c +0x00:  push   %ebp
0827a92d +0x01:  mov    %esp,%ebp
0827a92f +0x03:  sub    $0x18,%esp
0827a932 +0x06:  mov    0x8(%ebp),%eax
0827a935 +0x09:  mov    %eax,(%esp)
0827a938 +0x0c:  call   082794c2 <_ZN24Secu_DungeonAverageCheck12startDungeonEv>  ; Secu_DungeonAverageCheck::startDungeon()
0827a93d +0x11:  leave
0827a93e +0x12:  ret
0827a93f +0x13:  nop
```

## 反编译 C

```c
// Secu_HackLogCheckByParty::startDungeon @ 0x827a92c

/* Secu_HackLogCheckByParty::startDungeon() */

void __thiscall Secu_HackLogCheckByParty::startDungeon(Secu_HackLogCheckByParty *this)

{
  Secu_DungeonAverageCheck::startDungeon((Secu_DungeonAverageCheck *)this);
  return;
}
```
