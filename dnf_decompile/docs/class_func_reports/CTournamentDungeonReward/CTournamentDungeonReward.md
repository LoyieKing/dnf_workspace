# CTournamentDungeonReward

`_ZN24CTournamentDungeonRewardC1Ev`

`CTournamentDungeonReward::CTournamentDungeonReward()`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284770  _ZN24CTournamentDungeonRewardC1Ev
#           CTournamentDungeonReward::CTournamentDungeonReward()
# range [0x08284770, 0x082847db]
08284770 +0x00:  push   %ebp
08284771 +0x01:  mov    %esp,%ebp
08284773 +0x03:  push   %edi
08284774 +0x04:  push   %esi
08284775 +0x05:  push   %ebx
08284776 +0x06:  sub    $0x2c,%esp
08284779 +0x09:  mov    0x8(%ebp),%eax
0828477c +0x0c:  movl   $&_ZTV24CTournamentDungeonReward+0x8,(%eax)
08284782 +0x12:  mov    0x8(%ebp),%eax
08284785 +0x15:  add    $0x8,%eax
08284788 +0x18:  mov    %eax,%edi
0828478a +0x1a:  mov    $0x1,%esi
0828478f +0x1f:  jmp    082847be <+0x4e>
08284791 +0x21:  mov    %edi,%eax
08284793 +0x23:  mov    %eax,%ebx
08284795 +0x25:  movl   $0x1,-0x1c(%ebp)
0828479c +0x2c:  jmp    082847ad <+0x3d>
0828479e +0x2e:  mov    %ebx,(%esp)
082847a1 +0x31:  call   08285546 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x1d>  ; global constructors keyed to TournamentRewardType::Clear()+0x1d
082847a6 +0x36:  add    $0xc,%ebx
082847a9 +0x39:  subl   $0x1,-0x1c(%ebp)
082847ad +0x3d:  cmpl   $0xffffffff,-0x1c(%ebp)
082847b1 +0x41:  setne  %al
082847b4 +0x44:  test   %al,%al
082847b6 +0x46:  jne    0828479e <+0x2e>
082847b8 +0x48:  add    $0x18,%edi
082847bb +0x4b:  sub    $0x1,%esi
082847be +0x4e:  cmp    $0xffffffff,%esi
082847c1 +0x51:  setne  %al
082847c4 +0x54:  test   %al,%al
082847c6 +0x56:  jne    08284791 <+0x21>
082847c8 +0x58:  mov    0x8(%ebp),%eax
082847cb +0x5b:  mov    %eax,(%esp)
082847ce +0x5e:  call   08284820 <_ZN24CTournamentDungeonReward11ResetRewardEv>  ; CTournamentDungeonReward::ResetReward()
082847d3 +0x63:  add    $0x2c,%esp
082847d6 +0x66:  pop    %ebx
082847d7 +0x67:  pop    %esi
082847d8 +0x68:  pop    %edi
082847d9 +0x69:  pop    %ebp
082847da +0x6a:  ret
082847db +0x6b:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::CTournamentDungeonReward @ 0x8284770

/* CTournamentDungeonReward::CTournamentDungeonReward() */

void __thiscall CTournamentDungeonReward::CTournamentDungeonReward(CTournamentDungeonReward *this)

{
  TournamentRewardType *pTVar1;
  TournamentRewardType *this_00;
  int iVar2;
  int local_20;
  
  *(undefined ***)this = &PTR__CTournamentDungeonReward_08c0cbf0;
  pTVar1 = (TournamentRewardType *)(this + 8);
  for (iVar2 = 1; iVar2 != -1; iVar2 = iVar2 + -1) {
    this_00 = pTVar1;
    for (local_20 = 1; local_20 != -1; local_20 = local_20 + -1) {
      TournamentRewardType::TournamentRewardType(this_00);
      this_00 = this_00 + 0xc;
    }
    pTVar1 = pTVar1 + 0x18;
  }
  ResetReward(this);
  return;
}
```
