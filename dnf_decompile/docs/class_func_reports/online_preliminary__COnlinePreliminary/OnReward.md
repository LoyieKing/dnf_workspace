# OnReward

`_ZN18online_preliminary18COnlinePreliminary8OnRewardEP8PvP_Roomib`

`online_preliminary::COnlinePreliminary::OnReward(PvP_Room*, int, bool)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08562250` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562250  _ZN18online_preliminary18COnlinePreliminary8OnRewardEP8PvP_Roomib
#           online_preliminary::COnlinePreliminary::OnReward(PvP_Room*, int, bool)
# range [0x08562250, 0x085623df]
08562250 +0x000:  push   %ebp
08562251 +0x001:  mov    %esp,%ebp
08562253 +0x003:  sub    $0x28,%esp
08562256 +0x006:  mov    0x14(%ebp),%eax
08562259 +0x009:  mov    %al,-0xc(%ebp)
0856225c +0x00c:  cmpb   $0x0,-0xc(%ebp)
08562260 +0x010:  je     085622e1 <+0x91>
08562262 +0x012:  movl   $0x1,0x8(%esp)
0856226a +0x01a:  movl   $0x1,0x4(%esp)
08562272 +0x022:  mov    0x8(%ebp),%eax
08562275 +0x025:  mov    %eax,(%esp)
08562278 +0x028:  call   08560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
0856227d +0x02d:  movl   $0x1,0x8(%esp)
08562285 +0x035:  movl   $0x2,0x4(%esp)
0856228d +0x03d:  mov    0x8(%ebp),%eax
08562290 +0x040:  mov    %eax,(%esp)
08562293 +0x043:  call   08560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08562298 +0x048:  movl   $0x1,0x4(%esp)
085622a0 +0x050:  mov    0x8(%ebp),%eax
085622a3 +0x053:  mov    %eax,(%esp)
085622a6 +0x056:  call   08568866 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x230>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x230
085622ab +0x05b:  mov    %eax,0x4(%esp)
085622af +0x05f:  mov    0x8(%ebp),%eax
085622b2 +0x062:  mov    %eax,(%esp)
085622b5 +0x065:  call   085603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM)
085622ba +0x06a:  movl   $0x2,0x4(%esp)
085622c2 +0x072:  mov    0x8(%ebp),%eax
085622c5 +0x075:  mov    %eax,(%esp)
085622c8 +0x078:  call   08568866 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x230>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x230
085622cd +0x07d:  mov    %eax,0x4(%esp)
085622d1 +0x081:  mov    0x8(%ebp),%eax
085622d4 +0x084:  mov    %eax,(%esp)
085622d7 +0x087:  call   085603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM)
085622dc +0x08c:  jmp    085623dd <+0x18d>
085622e1 +0x091:  cmpl   $0x1,0x10(%ebp)
085622e5 +0x095:  jne    08562363 <+0x113>
085622e7 +0x097:  movl   $0x2,0x8(%esp)
085622ef +0x09f:  movl   $0x1,0x4(%esp)
085622f7 +0x0a7:  mov    0x8(%ebp),%eax
085622fa +0x0aa:  mov    %eax,(%esp)
085622fd +0x0ad:  call   08560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08562302 +0x0b2:  movl   $0x0,0x8(%esp)
0856230a +0x0ba:  movl   $0x2,0x4(%esp)
08562312 +0x0c2:  mov    0x8(%ebp),%eax
08562315 +0x0c5:  mov    %eax,(%esp)
08562318 +0x0c8:  call   08560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
0856231d +0x0cd:  movl   $0x1,0x4(%esp)
08562325 +0x0d5:  mov    0x8(%ebp),%eax
08562328 +0x0d8:  mov    %eax,(%esp)
0856232b +0x0db:  call   08568866 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x230>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x230
08562330 +0x0e0:  mov    %eax,0x4(%esp)
08562334 +0x0e4:  mov    0x8(%ebp),%eax
08562337 +0x0e7:  mov    %eax,(%esp)
0856233a +0x0ea:  call   085603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM)
0856233f +0x0ef:  movl   $0x2,0x4(%esp)
08562347 +0x0f7:  mov    0x8(%ebp),%eax
0856234a +0x0fa:  mov    %eax,(%esp)
0856234d +0x0fd:  call   08568866 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x230>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x230
08562352 +0x102:  mov    %eax,0x4(%esp)
08562356 +0x106:  mov    0x8(%ebp),%eax
08562359 +0x109:  mov    %eax,(%esp)
0856235c +0x10c:  call   08560484 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_IncreaseLoseCount(ENUM_SCHOOL_MATCH_TEAM)
08562361 +0x111:  jmp    085623dd <+0x18d>
08562363 +0x113:  movl   $0x2,0x8(%esp)
0856236b +0x11b:  movl   $0x2,0x4(%esp)
08562373 +0x123:  mov    0x8(%ebp),%eax
08562376 +0x126:  mov    %eax,(%esp)
08562379 +0x129:  call   08560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
0856237e +0x12e:  movl   $0x0,0x8(%esp)
08562386 +0x136:  movl   $0x1,0x4(%esp)
0856238e +0x13e:  mov    0x8(%ebp),%eax
08562391 +0x141:  mov    %eax,(%esp)
08562394 +0x144:  call   08560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>  ; online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
08562399 +0x149:  movl   $0x1,0x4(%esp)
085623a1 +0x151:  mov    0x8(%ebp),%eax
085623a4 +0x154:  mov    %eax,(%esp)
085623a7 +0x157:  call   08568866 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x230>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x230
085623ac +0x15c:  mov    %eax,0x4(%esp)
085623b0 +0x160:  mov    0x8(%ebp),%eax
085623b3 +0x163:  mov    %eax,(%esp)
085623b6 +0x166:  call   08560484 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_IncreaseLoseCount(ENUM_SCHOOL_MATCH_TEAM)
085623bb +0x16b:  movl   $0x2,0x4(%esp)
085623c3 +0x173:  mov    0x8(%ebp),%eax
085623c6 +0x176:  mov    %eax,(%esp)
085623c9 +0x179:  call   08568866 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x230>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x230
085623ce +0x17e:  mov    %eax,0x4(%esp)
085623d2 +0x182:  mov    0x8(%ebp),%eax
085623d5 +0x185:  mov    %eax,(%esp)
085623d8 +0x188:  call   085603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM)
085623dd +0x18d:  leave
085623de +0x18e:  ret
085623df +0x18f:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnReward @ 0x8562250

/* online_preliminary::COnlinePreliminary::OnReward(PvP_Room*, int, bool) */

void __thiscall
online_preliminary::COnlinePreliminary::OnReward
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  
  if (param_3) {
    _UpdateRating(this,1,1);
    _UpdateRating(this,2,1);
    uVar1 = _GetTeam(this,1);
    _IncreaseWinCount(this,uVar1);
    uVar1 = _GetTeam(this,2);
    _IncreaseWinCount(this,uVar1);
  }
  else if (param_2 == 1) {
    _UpdateRating(this,1,2);
    _UpdateRating(this,2,0);
    uVar1 = _GetTeam(this,1);
    _IncreaseWinCount(this,uVar1);
    uVar1 = _GetTeam(this,2);
    _IncreaseLoseCount(this,uVar1);
  }
  else {
    _UpdateRating(this,2,2);
    _UpdateRating(this,1,0);
    uVar1 = _GetTeam(this,1);
    _IncreaseLoseCount(this,uVar1);
    uVar1 = _GetTeam(this,2);
    _IncreaseWinCount(this,uVar1);
  }
  return;
}
```
