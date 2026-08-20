# getNextRoundDifficulty

`_ZN13CBattle_Field22getNextRoundDifficultyEs`

`CBattle_Field::getNextRoundDifficulty(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083061b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083061b6  _ZN13CBattle_Field22getNextRoundDifficultyEs
#           CBattle_Field::getNextRoundDifficulty(short)
# range [0x083061b6, 0x08306211]
083061b6 +0x00:  push   %ebp
083061b7 +0x01:  mov    %esp,%ebp
083061b9 +0x03:  push   %ebx
083061ba +0x04:  sub    $0x34,%esp
083061bd +0x07:  mov    0xc(%ebp),%eax
083061c0 +0x0a:  mov    %ax,-0x1c(%ebp)
083061c4 +0x0e:  mov    0x8(%ebp),%eax
083061c7 +0x11:  mov    %eax,(%esp)
083061ca +0x14:  call   0822d02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26d8
083061cf +0x19:  movsbl %al,%eax
083061d2 +0x1c:  mov    %eax,-0xc(%ebp)
083061d5 +0x1f:  movswl -0x1c(%ebp),%ebx
083061d9 +0x23:  mov    0x8(%ebp),%eax
083061dc +0x26:  mov    %eax,(%esp)
083061df +0x29:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
083061e4 +0x2e:  sub    $0x1,%eax
083061e7 +0x31:  cmp    %eax,%ebx
083061e9 +0x33:  je     083061f2 <+0x3c>
083061eb +0x35:  cmpw   $0x0,-0x1c(%ebp)
083061f0 +0x3a:  jne    083061f9 <+0x43>
083061f2 +0x3c:  mov    $0x1,%eax
083061f7 +0x41:  jmp    083061fe <+0x48>
083061f9 +0x43:  mov    $0x0,%eax
083061fe +0x48:  test   %al,%al
08306200 +0x4a:  je     08306209 <+0x53>
08306202 +0x4c:  mov    $0x1,%eax
08306207 +0x51:  jmp    0830620c <+0x56>
08306209 +0x53:  mov    -0xc(%ebp),%eax
0830620c +0x56:  add    $0x34,%esp
0830620f +0x59:  pop    %ebx
08306210 +0x5a:  pop    %ebp
08306211 +0x5b:  ret
```

## 反编译 C

```c
// CBattle_Field::getNextRoundDifficulty @ 0x83061b6

/* CBattle_Field::getNextRoundDifficulty(short) */

int __thiscall CBattle_Field::getNextRoundDifficulty(CBattle_Field *this,short param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = getUltimateDifficylty(this);
  iVar3 = (int)cVar2;
  iVar4 = getBloodMaxRound(this);
  if (((int)param_1 == iVar4 + -1) || (param_1 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    iVar3 = 1;
  }
  return iVar3;
}
```
