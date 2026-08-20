# IsOpenEvenEnemy

`_ZNK8CDungeon15IsOpenEvenEnemyEv`

`CDungeon::IsOpenEvenEnemy() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x08365288` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365288  _ZNK8CDungeon15IsOpenEvenEnemyEv
#           CDungeon::IsOpenEvenEnemy() const
# range [0x08365288, 0x08365297]
08365288 +0x00:  push   %ebp
08365289 +0x01:  mov    %esp,%ebp
0836528b +0x03:  mov    0x8(%ebp),%eax
0836528e +0x06:  movzbl 0x6d1(%eax),%eax
08365295 +0x0d:  pop    %ebp
08365296 +0x0e:  ret
08365297 +0x0f:  nop
```

## 反编译 C

```c
// CDungeon::IsOpenEvenEnemy @ 0x8365288

/* CDungeon::IsOpenEvenEnemy() const */

CDungeon __thiscall CDungeon::IsOpenEvenEnemy(CDungeon *this)

{
  return this[0x6d1];
}
```
