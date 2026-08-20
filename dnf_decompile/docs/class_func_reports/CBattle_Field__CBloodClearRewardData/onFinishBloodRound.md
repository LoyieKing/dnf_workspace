# onFinishBloodRound

`_ZN13CBattle_Field21CBloodClearRewardData18onFinishBloodRoundEbsP6CPartyPK8CDungeon`

`CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CBloodClearRewardData` | `0x08306fc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306fc4  _ZN13CBattle_Field21CBloodClearRewardData18onFinishBloodRoundEbsP6CPartyPK8CDungeon
#           CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)
# range [0x08306fc4, 0x08307095]
08306fc4 +0x00:  push   %ebp
08306fc5 +0x01:  mov    %esp,%ebp
08306fc7 +0x03:  push   %esi
08306fc8 +0x04:  push   %ebx
08306fc9 +0x05:  sub    $0x40,%esp
08306fcc +0x08:  mov    0xc(%ebp),%edx
08306fcf +0x0b:  mov    0x10(%ebp),%eax
08306fd2 +0x0e:  mov    %dl,-0xc(%ebp)
08306fd5 +0x11:  mov    %ax,-0x10(%ebp)
08306fd9 +0x15:  cmpb   $0x0,-0xc(%ebp)
08306fdd +0x19:  je     08306ff2 <+0x2e>
08306fdf +0x1b:  movl   $0x1,0x4(%esp)
08306fe7 +0x23:  mov    0x8(%ebp),%eax
08306fea +0x26:  mov    %eax,(%esp)
08306fed +0x29:  call   0830ec7c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x861>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x861
08306ff2 +0x2e:  movswl -0x10(%ebp),%edx
08306ff6 +0x32:  mov    0x8(%ebp),%eax
08306ff9 +0x35:  mov    %edx,0x8(%eax)
08306ffc +0x38:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08307003 +0x3f:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08307008 +0x44:  mov    0x8(%ebp),%edx
0830700b +0x47:  mov    %eax,0x10(%edx)
0830700e +0x4a:  mov    0x8(%ebp),%eax
08307011 +0x4d:  mov    %eax,(%esp)
08307014 +0x50:  call   0830ec64 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x849>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x849
08307019 +0x55:  mov    %eax,0x4(%esp)
0830701d +0x59:  mov    0x8(%ebp),%eax
08307020 +0x5c:  mov    %eax,(%esp)
08307023 +0x5f:  call   0830ec3a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x81f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x81f
08307028 +0x64:  mov    0x18(%ebp),%eax
0830702b +0x67:  mov    %eax,(%esp)
0830702e +0x6a:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
08307033 +0x6f:  mov    %eax,%ebx
08307035 +0x71:  mov    0x8(%ebp),%eax
08307038 +0x74:  mov    %eax,(%esp)
0830703b +0x77:  call   0830ec5a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x83f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x83f
08307040 +0x7c:  mov    %eax,-0x1c(%ebp)
08307043 +0x7f:  mov    $0x10624dd3,%edx
08307048 +0x84:  mov    -0x1c(%ebp),%eax
0830704b +0x87:  mul    %edx
0830704d +0x89:  mov    %edx,%esi
0830704f +0x8b:  shr    $0x6,%esi
08307052 +0x8e:  mov    0x8(%ebp),%eax
08307055 +0x91:  mov    %eax,(%esp)
08307058 +0x94:  call   0830ec64 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x849>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x849
0830705d +0x99:  mov    %eax,-0x1c(%ebp)
08307060 +0x9c:  mov    $0x10624dd3,%edx
08307065 +0xa1:  mov    -0x1c(%ebp),%eax
08307068 +0xa4:  mul    %edx
0830706a +0xa6:  shr    $0x6,%edx
0830706d +0xa9:  mov    0x8(%ebp),%eax
08307070 +0xac:  mov    0x8(%eax),%eax
08307073 +0xaf:  mov    %ebx,0x10(%esp)
08307077 +0xb3:  mov    %esi,0xc(%esp)
0830707b +0xb7:  mov    %edx,0x8(%esp)
0830707f +0xbb:  mov    %eax,0x4(%esp)
08307083 +0xbf:  mov    0x14(%ebp),%eax
08307086 +0xc2:  mov    %eax,(%esp)
08307089 +0xc5:  call   085b7db6 <_ZN6CParty22historyBloodRoundClearEijjPKc>  ; CParty::historyBloodRoundClear(int, unsigned int, unsigned int, char const*)
0830708e +0xca:  add    $0x40,%esp
08307091 +0xcd:  pop    %ebx
08307092 +0xce:  pop    %esi
08307093 +0xcf:  pop    %ebp
08307094 +0xd0:  ret
08307095 +0xd1:  nop
```

## 反编译 C

```c
// CBattle_Field::CBloodClearRewardData::onFinishBloodRound @ 0x8306fc4

/* CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)
    */

void __thiscall
CBattle_Field::CBloodClearRewardData::onFinishBloodRound
          (CBloodClearRewardData *this,bool param_1,short param_2,CParty *param_3,CDungeon *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1) {
    setBloodClear(this,true);
  }
  *(int *)(this + 8) = (int)param_2;
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar2 = getBloodRoundClearTime(this);
  addPlayTime(this,uVar2);
  pcVar3 = (char *)CDungeon::GetDungeonName(param_4);
  uVar2 = getPlayTime(this);
  uVar4 = getBloodRoundClearTime(this);
  CParty::historyBloodRoundClear(param_3,*(int *)(this + 8),uVar4 / 1000,uVar2 / 1000,pcVar3);
  return;
}
```
