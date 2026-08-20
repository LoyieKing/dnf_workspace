# _IncreaseLoseCount

`_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountEP5CUser`

`online_preliminary::COnlinePreliminary::_IncreaseLoseCount(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085601b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085601b8  _ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountEP5CUser
#           online_preliminary::COnlinePreliminary::_IncreaseLoseCount(CUser*)
# range [0x085601b8, 0x08560211]
085601b8 +0x00:  push   %ebp
085601b9 +0x01:  mov    %esp,%ebp
085601bb +0x03:  sub    $0x18,%esp
085601be +0x06:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
085601c3 +0x0b:  cmp    $0x1,%al
085601c5 +0x0d:  sete   %al
085601c8 +0x10:  test   %al,%al
085601ca +0x12:  je     085601e9 <+0x31>
085601cc +0x14:  movl   $0x4,0x4(%esp)
085601d4 +0x1c:  mov    0xc(%ebp),%eax
085601d7 +0x1f:  mov    %eax,(%esp)
085601da +0x22:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085601df +0x27:  mov    %eax,(%esp)
085601e2 +0x2a:  call   08586146 <_ZN18online_preliminary24COnlinePreliminaryMember17IncreaseLoseCountEv>  ; online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount()
085601e7 +0x2f:  jmp    08560210 <+0x58>
085601e9 +0x31:  mov    0xc(%ebp),%eax
085601ec +0x34:  mov    %eax,(%esp)
085601ef +0x37:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
085601f4 +0x3c:  test   %eax,%eax
085601f6 +0x3e:  setne  %al
085601f9 +0x41:  test   %al,%al
085601fb +0x43:  je     08560210 <+0x58>
085601fd +0x45:  mov    0xc(%ebp),%eax
08560200 +0x48:  mov    %eax,(%esp)
08560203 +0x4b:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
08560208 +0x50:  mov    %eax,(%esp)
0856020b +0x53:  call   0858841a <_ZN18online_preliminary22COnlinePreliminaryTeam17IncreaseLoseCountEv>  ; online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount()
08560210 +0x58:  leave
08560211 +0x59:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_IncreaseLoseCount @ 0x85601b8

/* online_preliminary::COnlinePreliminary::_IncreaseLoseCount(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseLoseCount(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    COnlinePreliminaryMember::IncreaseLoseCount(this_00);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::IncreaseLoseCount(this_01);
    }
  }
  return;
}
```
