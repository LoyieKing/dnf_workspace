# _GetEachOtherPlayCount

`_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_`

`online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560212` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560212  _ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_
#           online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(CUser*, CUser*)
# range [0x08560212, 0x085602ad]
08560212 +0x00:  push   %ebp
08560213 +0x01:  mov    %esp,%ebp
08560215 +0x03:  push   %esi
08560216 +0x04:  push   %ebx
08560217 +0x05:  sub    $0x10,%esp
0856021a +0x08:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
0856021f +0x0d:  cmp    $0x1,%al
08560221 +0x0f:  sete   %al
08560224 +0x12:  test   %al,%al
08560226 +0x14:  je     08560267 <+0x55>
08560228 +0x16:  mov    0x10(%ebp),%eax
0856022b +0x19:  mov    %eax,(%esp)
0856022e +0x1c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08560233 +0x21:  mov    %eax,%ebx
08560235 +0x23:  mov    0x10(%ebp),%eax
08560238 +0x26:  mov    %eax,(%esp)
0856023b +0x29:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08560240 +0x2e:  mov    %eax,%esi
08560242 +0x30:  movl   $0x5,0x4(%esp)
0856024a +0x38:  mov    0xc(%ebp),%eax
0856024d +0x3b:  mov    %eax,(%esp)
08560250 +0x3e:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08560255 +0x43:  mov    %ebx,0x8(%esp)
08560259 +0x47:  mov    %esi,0x4(%esp)
0856025d +0x4b:  mov    %eax,(%esp)
08560260 +0x4e:  call   08586184 <_ZNK18online_preliminary33COnlinePreliminaryMemberMatchList16GetPeerPlayCountEij>  ; online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount(int, unsigned int) const
08560265 +0x53:  jmp    085602a6 <+0x94>
08560267 +0x55:  mov    0xc(%ebp),%eax
0856026a +0x58:  mov    %eax,(%esp)
0856026d +0x5b:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
08560272 +0x60:  test   %eax,%eax
08560274 +0x62:  setne  %al
08560277 +0x65:  test   %al,%al
08560279 +0x67:  je     085602a1 <+0x8f>
0856027b +0x69:  mov    0x10(%ebp),%eax
0856027e +0x6c:  mov    %eax,(%esp)
08560281 +0x6f:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
08560286 +0x74:  mov    %eax,%ebx
08560288 +0x76:  mov    0xc(%ebp),%eax
0856028b +0x79:  mov    %eax,(%esp)
0856028e +0x7c:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
08560293 +0x81:  mov    %ebx,0x4(%esp)
08560297 +0x85:  mov    %eax,(%esp)
0856029a +0x88:  call   0858844c <_ZNK18online_preliminary22COnlinePreliminaryTeam25GetEachOtherTeamPlayCountEi>  ; online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(int) const
0856029f +0x8d:  jmp    085602a6 <+0x94>
085602a1 +0x8f:  mov    $0x0,%eax
085602a6 +0x94:  add    $0x10,%esp
085602a9 +0x97:  pop    %ebx
085602aa +0x98:  pop    %esi
085602ab +0x99:  pop    %ebp
085602ac +0x9a:  ret
085602ad +0x9b:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount @ 0x8560212

/* online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(CUser*, CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount
          (COnlinePreliminary *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  COnlinePreliminaryMemberMatchList *this_00;
  undefined4 uVar4;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar3 = CUser::GetServerGroup(param_2);
    this_00 = (COnlinePreliminaryMemberMatchList *)CUser::GetCharacExpandData(param_1,5);
    uVar4 = COnlinePreliminaryMemberMatchList::GetPeerPlayCount(this_00,iVar3,uVar2);
  }
  else {
    iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
      iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      uVar4 = COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(iVar3);
    }
  }
  return uVar4;
}
```
