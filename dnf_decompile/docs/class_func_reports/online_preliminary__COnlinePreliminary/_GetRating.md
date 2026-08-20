# _GetRating

`_ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser`

`online_preliminary::COnlinePreliminary::_GetRating(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560082  _ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser
#           online_preliminary::COnlinePreliminary::_GetRating(CUser*)
# range [0x08560082, 0x085600f5]
08560082 +0x00:  push   %ebp
08560083 +0x01:  mov    %esp,%ebp
08560085 +0x03:  sub    $0x28,%esp
08560088 +0x06:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
0856008d +0x0b:  cmp    $0x1,%al
0856008f +0x0d:  sete   %al
08560092 +0x10:  test   %al,%al
08560094 +0x12:  je     085600b9 <+0x37>
08560096 +0x14:  movl   $0x4,0x4(%esp)
0856009e +0x1c:  mov    0xc(%ebp),%eax
085600a1 +0x1f:  mov    %eax,(%esp)
085600a4 +0x22:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085600a9 +0x27:  mov    %eax,(%esp)
085600ac +0x2a:  call   08568f02 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8cc>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8cc
085600b1 +0x2f:  fstps  -0xc(%ebp)
085600b4 +0x32:  mov    -0xc(%ebp),%eax
085600b7 +0x35:  jmp    085600ed <+0x6b>
085600b9 +0x37:  mov    0xc(%ebp),%eax
085600bc +0x3a:  mov    %eax,(%esp)
085600bf +0x3d:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
085600c4 +0x42:  test   %eax,%eax
085600c6 +0x44:  setne  %al
085600c9 +0x47:  test   %al,%al
085600cb +0x49:  je     085600e8 <+0x66>
085600cd +0x4b:  mov    0xc(%ebp),%eax
085600d0 +0x4e:  mov    %eax,(%esp)
085600d3 +0x51:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
085600d8 +0x56:  mov    %eax,(%esp)
085600db +0x59:  call   08568eee <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8b8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8b8
085600e0 +0x5e:  fstps  -0xc(%ebp)
085600e3 +0x61:  mov    -0xc(%ebp),%eax
085600e6 +0x64:  jmp    085600ed <+0x6b>
085600e8 +0x66:  mov    $0x0,%eax
085600ed +0x6b:  mov    %eax,-0xc(%ebp)
085600f0 +0x6e:  flds   -0xc(%ebp)
085600f3 +0x71:  leave
085600f4 +0x72:  ret
085600f5 +0x73:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_GetRating @ 0x8560082

/* online_preliminary::COnlinePreliminary::_GetRating(CUser*) */

longdouble __thiscall
online_preliminary::COnlinePreliminary::_GetRating(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  float fVar3;
  longdouble lVar4;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    lVar4 = (longdouble)COnlinePreliminaryMember::GetRating(this_00);
    fVar3 = (float)lVar4;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      fVar3 = 0.0;
    }
    else {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      lVar4 = (longdouble)COnlinePreliminaryTeam::GetRating(this_01);
      fVar3 = (float)lVar4;
    }
  }
  return (longdouble)fVar3;
}
```
