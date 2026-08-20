# AddTournamentMonster

`_ZN13CBattle_Field20AddTournamentMonsterERKNS_14TournamentInfoERSt4listI11_mapMonsterSaIS4_EEb`

`CBattle_Field::AddTournamentMonster(CBattle_Field::TournamentInfo const&, std::list<_mapMonster, std::allocator<_mapMonster> >&, bool)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08304718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08304718  _ZN13CBattle_Field20AddTournamentMonsterERKNS_14TournamentInfoERSt4listI11_mapMonsterSaIS4_EEb
#           CBattle_Field::AddTournamentMonster(CBattle_Field::TournamentInfo const&, std::list<_mapMonster, std::allocator<_mapMonster> >&, bool)
# range [0x08304718, 0x08304803]
08304718 +0x00:  push   %ebp
08304719 +0x01:  mov    %esp,%ebp
0830471b +0x03:  push   %esi
0830471c +0x04:  push   %ebx
0830471d +0x05:  sub    $0x70,%esp
08304720 +0x08:  mov    0x14(%ebp),%eax
08304723 +0x0b:  mov    %al,-0x5c(%ebp)
08304726 +0x0e:  movl   $0x0,-0xc(%ebp)
0830472d +0x15:  jmp    083047ed <+0xd5>
08304732 +0x1a:  lea    -0x4c(%ebp),%eax
08304735 +0x1d:  mov    %eax,(%esp)
08304738 +0x20:  call   0830e4fc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xe1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xe1
0830473d +0x25:  mov    -0xc(%ebp),%edx
08304740 +0x28:  mov    0xc(%ebp),%eax
08304743 +0x2b:  mov    0x4(%eax,%edx,8),%eax
08304747 +0x2f:  test   %eax,%eax
08304749 +0x31:  je     083047de <+0xc6>
0830474f +0x37:  mov    -0xc(%ebp),%edx
08304752 +0x3a:  mov    0xc(%ebp),%eax
08304755 +0x3d:  mov    0x4(%eax,%edx,8),%eax
08304759 +0x41:  mov    %eax,-0x4c(%ebp)
0830475c +0x44:  movb   $0x1,-0x48(%ebp)
08304760 +0x48:  movl   $0x0,-0x44(%ebp)
08304767 +0x4f:  movl   $0x1,-0x3c(%ebp)
0830476e +0x56:  movl   $0x1,-0x38(%ebp)
08304775 +0x5d:  movl   $0x0,-0x40(%ebp)
0830477c +0x64:  cmpb   $0x0,-0x5c(%ebp)
08304780 +0x68:  je     0830478b <+0x73>
08304782 +0x6a:  movl   $0x3,-0x34(%ebp)
08304789 +0x71:  jmp    08304792 <+0x7a>
0830478b +0x73:  movl   $0x0,-0x34(%ebp)
08304792 +0x7a:  movb   $0x0,-0x30(%ebp)
08304796 +0x7e:  movl   $0x0,-0x2c(%ebp)
0830479d +0x85:  movl   $0x0,-0x20(%ebp)
083047a4 +0x8c:  movl   $0x64,-0x24(%ebp)
083047ab +0x93:  movb   $0x0,-0x1c(%ebp)
083047af +0x97:  lea    -0x4c(%ebp),%eax
083047b2 +0x9a:  mov    %eax,0x4(%esp)
083047b6 +0x9e:  mov    0x10(%ebp),%eax
083047b9 +0xa1:  mov    %eax,(%esp)
083047bc +0xa4:  call   08139882 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5489>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5489
083047c1 +0xa9:  jmp    083047de <+0xc6>
083047c3 +0xab:  mov    %edx,%ebx
083047c5 +0xad:  mov    %eax,%esi
083047c7 +0xaf:  lea    -0x4c(%ebp),%eax
083047ca +0xb2:  mov    %eax,(%esp)
083047cd +0xb5:  call   081398c6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x54cd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x54cd
083047d2 +0xba:  mov    %esi,%eax
083047d4 +0xbc:  mov    %ebx,%edx
083047d6 +0xbe:  mov    %eax,(%esp)
083047d9 +0xc1:  call   08ae3750 <_Unwind_Resume>
083047de +0xc6:  lea    -0x4c(%ebp),%eax
083047e1 +0xc9:  mov    %eax,(%esp)
083047e4 +0xcc:  call   081398c6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x54cd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x54cd
083047e9 +0xd1:  addl   $0x1,-0xc(%ebp)
083047ed +0xd5:  cmpl   $0x1,-0xc(%ebp)
083047f1 +0xd9:  setle  %al
083047f4 +0xdc:  test   %al,%al
083047f6 +0xde:  jne    08304732 <+0x1a>
083047fc +0xe4:  add    $0x70,%esp
083047ff +0xe7:  pop    %ebx
08304800 +0xe8:  pop    %esi
08304801 +0xe9:  pop    %ebp
08304802 +0xea:  ret
08304803 +0xeb:  nop
```

## 反编译 C

```c
// CBattle_Field::AddTournamentMonster @ 0x8304718

/* CBattle_Field::AddTournamentMonster(CBattle_Field::TournamentInfo const&, std::list<_mapMonster,
   std::allocator<_mapMonster> >&, bool) */

void __thiscall
CBattle_Field::AddTournamentMonster
          (CBattle_Field *this,TournamentInfo *param_1,list *param_2,bool param_3)

{
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    _mapMonster::_mapMonster((_mapMonster *)&local_50);
    if (*(int *)(param_1 + local_10 * 8 + 4) != 0) {
      local_50 = *(undefined4 *)(param_1 + local_10 * 8 + 4);
      local_4c = 1;
      local_48 = 0;
      local_40 = 1;
      local_3c = 1;
      local_44 = 0;
      if (param_3) {
        local_38 = 3;
      }
      else {
        local_38 = 0;
      }
      local_34 = 0;
      local_30 = 0;
      local_24 = 0;
      local_28 = 100;
      local_20 = 0;
                    /* try { // try from 083047bc to 083047c0 has its CatchHandler @ 083047c3 */
      std::list<_mapMonster,std::allocator<_mapMonster>>::push_back
                ((list<_mapMonster,std::allocator<_mapMonster>> *)param_2,(_mapMonster *)&local_50);
    }
    _mapMonster::~_mapMonster((_mapMonster *)&local_50);
  }
  return;
}
```
