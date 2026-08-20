# isQuestMaze

`_ZN13CBattle_Field11isQuestMazeEv`

`CBattle_Field::isQuestMaze()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830e31e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830e31e  _ZN13CBattle_Field11isQuestMazeEv
#           CBattle_Field::isQuestMaze()
# range [0x0830e31e, 0x0830e32d]
0830e31e +0x00:  push   %ebp
0830e31f +0x01:  mov    %esp,%ebp
0830e321 +0x03:  mov    0x8(%ebp),%eax
0830e324 +0x06:  movzbl 0x110(%eax),%eax
0830e32b +0x0d:  pop    %ebp
0830e32c +0x0e:  ret
0830e32d +0x0f:  nop
```

## 反编译 C

```c
// CBattle_Field::isQuestMaze @ 0x830e31e

/* CBattle_Field::isQuestMaze() */

CBattle_Field __thiscall CBattle_Field::isQuestMaze(CBattle_Field *this)

{
  return this[0x110];
}
```
