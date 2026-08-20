# getTournamentRoundFatigue

`_ZNK8CDungeon25getTournamentRoundFatigueEv`

`CDungeon::getTournamentRoundFatigue() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x08365238` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365238  _ZNK8CDungeon25getTournamentRoundFatigueEv
#           CDungeon::getTournamentRoundFatigue() const
# range [0x08365238, 0x08365259]
08365238 +0x00:  push   %ebp
08365239 +0x01:  mov    %esp,%ebp
0836523b +0x03:  mov    0x8(%ebp),%eax
0836523e +0x06:  mov    0x8a4(%eax),%eax
08365244 +0x0c:  test   %eax,%eax
08365246 +0x0e:  jne    0836524f <+0x17>
08365248 +0x10:  mov    $0x1,%eax
0836524d +0x15:  jmp    08365258 <+0x20>
0836524f +0x17:  mov    0x8(%ebp),%eax
08365252 +0x1a:  mov    0x8a4(%eax),%eax
08365258 +0x20:  pop    %ebp
08365259 +0x21:  ret
```

## 反编译 C

```c
// CDungeon::getTournamentRoundFatigue @ 0x8365238

/* CDungeon::getTournamentRoundFatigue() const */

undefined4 __thiscall CDungeon::getTournamentRoundFatigue(CDungeon *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x8a4) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x8a4);
  }
  return uVar1;
}
```
