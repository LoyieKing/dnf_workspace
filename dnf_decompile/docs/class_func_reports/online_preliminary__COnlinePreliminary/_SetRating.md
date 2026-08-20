# _SetRating

`_ZN18online_preliminary18COnlinePreliminary10_SetRatingEP5CUserf`

`online_preliminary::COnlinePreliminary::_SetRating(CUser*, float)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085600f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085600f6  _ZN18online_preliminary18COnlinePreliminary10_SetRatingEP5CUserf
#           online_preliminary::COnlinePreliminary::_SetRating(CUser*, float)
# range [0x085600f6, 0x0856015d]
085600f6 +0x00:  push   %ebp
085600f7 +0x01:  mov    %esp,%ebp
085600f9 +0x03:  sub    $0x18,%esp
085600fc +0x06:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
08560101 +0x0b:  cmp    $0x1,%al
08560103 +0x0d:  sete   %al
08560106 +0x10:  test   %al,%al
08560108 +0x12:  je     0856012e <+0x38>
0856010a +0x14:  movl   $0x4,0x4(%esp)
08560112 +0x1c:  mov    0xc(%ebp),%eax
08560115 +0x1f:  mov    %eax,(%esp)
08560118 +0x22:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0856011d +0x27:  mov    0x10(%ebp),%edx
08560120 +0x2a:  mov    %edx,0x4(%esp)
08560124 +0x2e:  mov    %eax,(%esp)
08560127 +0x31:  call   08586168 <_ZN18online_preliminary24COnlinePreliminaryMember9SetRatingEf>  ; online_preliminary::COnlinePreliminaryMember::SetRating(float)
0856012c +0x36:  jmp    0856015c <+0x66>
0856012e +0x38:  mov    0xc(%ebp),%eax
08560131 +0x3b:  mov    %eax,(%esp)
08560134 +0x3e:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
08560139 +0x43:  test   %eax,%eax
0856013b +0x45:  setne  %al
0856013e +0x48:  test   %al,%al
08560140 +0x4a:  je     0856015c <+0x66>
08560142 +0x4c:  mov    0xc(%ebp),%eax
08560145 +0x4f:  mov    %eax,(%esp)
08560148 +0x52:  call   08568dea <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x7b4>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x7b4
0856014d +0x57:  mov    0x10(%ebp),%edx
08560150 +0x5a:  mov    %edx,0x4(%esp)
08560154 +0x5e:  mov    %eax,(%esp)
08560157 +0x61:  call   08588436 <_ZN18online_preliminary22COnlinePreliminaryTeam9SetRatingEf>  ; online_preliminary::COnlinePreliminaryTeam::SetRating(float)
0856015c +0x66:  leave
0856015d +0x67:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_SetRating @ 0x85600f6

/* online_preliminary::COnlinePreliminary::_SetRating(CUser*, float) */

void __thiscall
online_preliminary::COnlinePreliminary::_SetRating
          (COnlinePreliminary *this,CUser *param_1,float param_2)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    COnlinePreliminaryMember::SetRating(this_00,param_2);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::SetRating(this_01,param_2);
    }
  }
  return;
}
```
