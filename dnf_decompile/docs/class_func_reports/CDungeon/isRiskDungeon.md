# isRiskDungeon

`_ZNK8CDungeon13isRiskDungeonEv`

`CDungeon::isRiskDungeon() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0836525a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836525a  _ZNK8CDungeon13isRiskDungeonEv
#           CDungeon::isRiskDungeon() const
# range [0x0836525a, 0x08365269]
0836525a +0x00:  push   %ebp
0836525b +0x01:  mov    %esp,%ebp
0836525d +0x03:  mov    0x8(%ebp),%eax
08365260 +0x06:  movzbl 0x6c9(%eax),%eax
08365267 +0x0d:  pop    %ebp
08365268 +0x0e:  ret
08365269 +0x0f:  nop
```

## 反编译 C

```c
// CDungeon::isRiskDungeon @ 0x836525a

/* CDungeon::isRiskDungeon() const */

CDungeon __thiscall CDungeon::isRiskDungeon(CDungeon *this)

{
  return this[0x6c9];
}
```
