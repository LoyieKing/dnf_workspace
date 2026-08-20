# getNextDifficulty

`_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE`

`advancealtar::StageDifficulty::getNextDifficulty(advancealtar::StageDifficulty::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageDifficulty` | `0x0889900a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889900a  _ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE
#           advancealtar::StageDifficulty::getNextDifficulty(advancealtar::StageDifficulty::T)
# range [0x0889900a, 0x08899037]
0889900a +0x00:  push   %ebp
0889900b +0x01:  mov    %esp,%ebp
0889900d +0x03:  mov    0x8(%ebp),%eax
08899010 +0x06:  test   %eax,%eax
08899012 +0x08:  je     08899025 <+0x1b>
08899014 +0x0a:  cmp    $0x1,%eax
08899017 +0x0d:  je     0889902c <+0x22>
08899019 +0x0f:  cmp    $0xffffffff,%eax
0889901c +0x12:  jne    08899033 <+0x29>
0889901e +0x14:  mov    $0x0,%eax
08899023 +0x19:  jmp    08899036 <+0x2c>
08899025 +0x1b:  mov    $0x1,%eax
0889902a +0x20:  jmp    08899036 <+0x2c>
0889902c +0x22:  mov    $0x2,%eax
08899031 +0x27:  jmp    08899036 <+0x2c>
08899033 +0x29:  mov    0x8(%ebp),%eax
08899036 +0x2c:  pop    %ebp
08899037 +0x2d:  ret
```

## 反编译 C

```c
// advancealtar::StageDifficulty::getNextDifficulty @ 0x889900a

/* advancealtar::StageDifficulty::getNextDifficulty(advancealtar::StageDifficulty::T) */

int advancealtar::StageDifficulty::getNextDifficulty(int param_1)

{
  if (param_1 == 0) {
    param_1 = 1;
  }
  else if (param_1 == 1) {
    param_1 = 2;
  }
  else if (param_1 == -1) {
    param_1 = 0;
  }
  return param_1;
}
```
