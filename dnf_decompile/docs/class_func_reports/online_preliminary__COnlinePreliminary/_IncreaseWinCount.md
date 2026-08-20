# _IncreaseWinCount

`_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountEP5CUser`

`online_preliminary::COnlinePreliminary::_IncreaseWinCount(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x0856015e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856015e  _ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountEP5CUser
#           online_preliminary::COnlinePreliminary::_IncreaseWinCount(CUser*)
# range [0x0856015e, 0x085601b7]
0856015e +0x00:  push   %ebp
0856015f +0x01:  mov    %esp,%ebp
08560161 +0x03:  sub    $0x18,%esp
08560164 +0x06:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
08560169 +0x0b:  cmp    $0x1,%al
0856016b +0x0d:  sete   %al
0856016e +0x10:  test   %al,%al
08560170 +0x12:  je     0856018f <+0x31>
08560172 +0x14:  movl   $0x4,0x4(%esp)
0856017a +0x1c:  mov    0xc(%ebp),%eax
0856017d +0x1f:  mov    %eax,(%esp)
08560180 +0x22:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08560185 +0x27:  mov    %eax,(%esp)
08560188 +0x2a:  call   08586124 <_ZN18online_preliminary24COnlinePreliminaryMember16IncreaseWinCountEv>  ; online_preliminary::COnlinePreliminaryMember::IncreaseWinCount()
0856018d +0x2f:  jmp    085601b6 <+0x58>
0856018f +0x31:  mov    0xc(%ebp),%eax
08560192 +0x34:  mov    %eax,(%esp)
08560195 +0x37:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
0856019a +0x3c:  test   %eax,%eax
0856019c +0x3e:  setne  %al
0856019f +0x41:  test   %al,%al
085601a1 +0x43:  je     085601b6 <+0x58>
085601a3 +0x45:  mov    0xc(%ebp),%eax
085601a6 +0x48:  mov    %eax,(%esp)
085601a9 +0x4b:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
085601ae +0x50:  mov    %eax,(%esp)
085601b1 +0x53:  call   085883fe <_ZN18online_preliminary22COnlinePreliminaryTeam16IncreaseWinCountEv>  ; online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount()
085601b6 +0x58:  leave
085601b7 +0x59:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_IncreaseWinCount @ 0x856015e

/* online_preliminary::COnlinePreliminary::_IncreaseWinCount(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseWinCount(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    COnlinePreliminaryMember::IncreaseWinCount(this_00);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::IncreaseWinCount(this_01);
    }
  }
  return;
}
```
