# _IncreaseEachOtherPlayCount

`_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_`

`online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085602ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085602ae  _ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_
#           online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(CUser*, CUser*)
# range [0x085602ae, 0x08560341]
085602ae +0x00:  push   %ebp
085602af +0x01:  mov    %esp,%ebp
085602b1 +0x03:  push   %esi
085602b2 +0x04:  push   %ebx
085602b3 +0x05:  sub    $0x10,%esp
085602b6 +0x08:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
085602bb +0x0d:  cmp    $0x1,%al
085602bd +0x0f:  sete   %al
085602c0 +0x12:  test   %al,%al
085602c2 +0x14:  je     08560303 <+0x55>
085602c4 +0x16:  mov    0x10(%ebp),%eax
085602c7 +0x19:  mov    %eax,(%esp)
085602ca +0x1c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085602cf +0x21:  mov    %eax,%ebx
085602d1 +0x23:  mov    0x10(%ebp),%eax
085602d4 +0x26:  mov    %eax,(%esp)
085602d7 +0x29:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085602dc +0x2e:  mov    %eax,%esi
085602de +0x30:  movl   $0x5,0x4(%esp)
085602e6 +0x38:  mov    0xc(%ebp),%eax
085602e9 +0x3b:  mov    %eax,(%esp)
085602ec +0x3e:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085602f1 +0x43:  mov    %ebx,0x8(%esp)
085602f5 +0x47:  mov    %esi,0x4(%esp)
085602f9 +0x4b:  mov    %eax,(%esp)
085602fc +0x4e:  call   08586208 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij>  ; online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(int, unsigned int)
08560301 +0x53:  jmp    0856033b <+0x8d>
08560303 +0x55:  mov    0xc(%ebp),%eax
08560306 +0x58:  mov    %eax,(%esp)
08560309 +0x5b:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
0856030e +0x60:  test   %eax,%eax
08560310 +0x62:  setne  %al
08560313 +0x65:  test   %al,%al
08560315 +0x67:  je     0856033b <+0x8d>
08560317 +0x69:  mov    0x10(%ebp),%eax
0856031a +0x6c:  mov    %eax,(%esp)
0856031d +0x6f:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
08560322 +0x74:  mov    %eax,%ebx
08560324 +0x76:  mov    0xc(%ebp),%eax
08560327 +0x79:  mov    %eax,(%esp)
0856032a +0x7c:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
0856032f +0x81:  mov    %ebx,0x4(%esp)
08560333 +0x85:  mov    %eax,(%esp)
08560336 +0x88:  call   085884b6 <_ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi>  ; online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int)
0856033b +0x8d:  add    $0x10,%esp
0856033e +0x90:  pop    %ebx
0856033f +0x91:  pop    %esi
08560340 +0x92:  pop    %ebp
08560341 +0x93:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount @ 0x85602ae

/* online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(CUser*, CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount
          (COnlinePreliminary *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  COnlinePreliminaryMemberMatchList *this_00;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar3 = CUser::GetServerGroup(param_2);
    this_00 = (COnlinePreliminaryMemberMatchList *)CUser::GetCharacExpandData(param_1,5);
    COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(this_00,iVar3,uVar2);
  }
  else {
    iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
      iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(iVar3);
    }
  }
  return;
}
```
