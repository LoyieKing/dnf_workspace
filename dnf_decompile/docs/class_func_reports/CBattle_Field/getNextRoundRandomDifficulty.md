# getNextRoundRandomDifficulty

`_ZN13CBattle_Field28getNextRoundRandomDifficultyEv`

`CBattle_Field::getNextRoundRandomDifficulty()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306156` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306156  _ZN13CBattle_Field28getNextRoundRandomDifficultyEv
#           CBattle_Field::getNextRoundRandomDifficulty()
# range [0x08306156, 0x083061b5]
08306156 +0x00:  push   %ebp
08306157 +0x01:  mov    %esp,%ebp
08306159 +0x03:  push   %ebx
0830615a +0x04:  sub    $0x24,%esp
0830615d +0x07:  mov    0x8(%ebp),%eax
08306160 +0x0a:  add    $0x2ac,%eax
08306165 +0x0f:  mov    %eax,(%esp)
08306168 +0x12:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
0830616d +0x17:  movswl %ax,%ebx
08306170 +0x1a:  mov    0x8(%ebp),%eax
08306173 +0x1d:  mov    %eax,(%esp)
08306176 +0x20:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
0830617b +0x25:  sub    $0x1,%eax
0830617e +0x28:  cmp    %eax,%ebx
08306180 +0x2a:  sete   %al
08306183 +0x2d:  test   %al,%al
08306185 +0x2f:  je     0830618e <+0x38>
08306187 +0x31:  mov    $0x1,%eax
0830618c +0x36:  jmp    083061af <+0x59>
0830618e +0x38:  movl   $0x64,(%esp)
08306195 +0x3f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0830619a +0x44:  mov    %eax,-0xc(%ebp)
0830619d +0x47:  cmpl   $0x31,-0xc(%ebp)
083061a1 +0x4b:  jle    083061aa <+0x54>
083061a3 +0x4d:  mov    $0x1,%eax
083061a8 +0x52:  jmp    083061af <+0x59>
083061aa +0x54:  mov    $0x2,%eax
083061af +0x59:  add    $0x24,%esp
083061b2 +0x5c:  pop    %ebx
083061b3 +0x5d:  pop    %ebp
083061b4 +0x5e:  ret
083061b5 +0x5f:  nop
```

## 反编译 C

```c
// CBattle_Field::getNextRoundRandomDifficulty @ 0x8306156

/* CBattle_Field::getNextRoundRandomDifficulty() */

undefined4 __thiscall CBattle_Field::getNextRoundRandomDifficulty(CBattle_Field *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = CBloodRound::getBloodRoundOrder((CBloodRound *)(this + 0x2ac));
  iVar2 = getBloodMaxRound(this);
  if ((int)sVar1 == iVar2 + -1) {
    uVar3 = 1;
  }
  else {
    iVar2 = get_rand_int(100);
    if (iVar2 < 0x32) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
