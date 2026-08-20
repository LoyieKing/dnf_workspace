# setQuestMaze

`_ZN13CBattle_Field12setQuestMazeEb`

`CBattle_Field::setQuestMaze(bool)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830e302` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830e302  _ZN13CBattle_Field12setQuestMazeEb
#           CBattle_Field::setQuestMaze(bool)
# range [0x0830e302, 0x0830e31d]
0830e302 +0x00:  push   %ebp
0830e303 +0x01:  mov    %esp,%ebp
0830e305 +0x03:  sub    $0x4,%esp
0830e308 +0x06:  mov    0xc(%ebp),%eax
0830e30b +0x09:  mov    %al,-0x4(%ebp)
0830e30e +0x0c:  mov    0x8(%ebp),%eax
0830e311 +0x0f:  movzbl -0x4(%ebp),%edx
0830e315 +0x13:  mov    %dl,0x110(%eax)
0830e31b +0x19:  leave
0830e31c +0x1a:  ret
0830e31d +0x1b:  nop
```

## 反编译 C

```c
// CBattle_Field::setQuestMaze @ 0x830e302

/* CBattle_Field::setQuestMaze(bool) */

void __thiscall CBattle_Field::setQuestMaze(CBattle_Field *this,bool param_1)

{
  this[0x110] = (CBattle_Field)param_1;
  return;
}
```
