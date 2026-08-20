# _UpdateRating

`_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM`

`online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560be2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560be2  _ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM
#           online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
# range [0x08560be2, 0x08560cd1]
08560be2 +0x00:  push   %ebp
08560be3 +0x01:  mov    %esp,%ebp
08560be5 +0x03:  sub    $0x28,%esp
08560be8 +0x06:  mov    $0x0,%eax
08560bed +0x0b:  mov    %eax,-0xc(%ebp)
08560bf0 +0x0e:  mov    $0x0,%eax
08560bf5 +0x13:  mov    %eax,-0x10(%ebp)
08560bf8 +0x16:  cmpl   $0x1,0xc(%ebp)
08560bfc +0x1a:  jne    08560c68 <+0x86>
08560bfe +0x1c:  movl   $0x0,0x4(%esp)
08560c06 +0x24:  mov    0x8(%ebp),%eax
08560c09 +0x27:  mov    %eax,(%esp)
08560c0c +0x2a:  call   08560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)
08560c11 +0x2f:  fstps  -0xc(%ebp)
08560c14 +0x32:  movl   $0x1,0x4(%esp)
08560c1c +0x3a:  mov    0x8(%ebp),%eax
08560c1f +0x3d:  mov    %eax,(%esp)
08560c22 +0x40:  call   08560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)
08560c27 +0x45:  fstps  -0x10(%ebp)
08560c2a +0x48:  mov    &_ZN28PvPGlobalEnvironmentVariable19school_match_elo_k_E,%eax
08560c2f +0x4d:  mov    %eax,0xc(%esp)
08560c33 +0x51:  mov    0x10(%ebp),%eax
08560c36 +0x54:  mov    %eax,0x8(%esp)
08560c3a +0x58:  lea    -0x10(%ebp),%eax
08560c3d +0x5b:  mov    %eax,0x4(%esp)
08560c41 +0x5f:  lea    -0xc(%ebp),%eax
08560c44 +0x62:  mov    %eax,(%esp)
08560c47 +0x65:  call   0844dca1 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8b7>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8b7
08560c4c +0x6a:  mov    -0xc(%ebp),%eax
08560c4f +0x6d:  mov    %eax,0x8(%esp)
08560c53 +0x71:  movl   $0x0,0x4(%esp)
08560c5b +0x79:  mov    0x8(%ebp),%eax
08560c5e +0x7c:  mov    %eax,(%esp)
08560c61 +0x7f:  call   08560368 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf>  ; online_preliminary::COnlinePreliminary::_SetRating(ENUM_SCHOOL_MATCH_TEAM, float)
08560c66 +0x84:  jmp    08560cd0 <+0xee>
08560c68 +0x86:  movl   $0x1,0x4(%esp)
08560c70 +0x8e:  mov    0x8(%ebp),%eax
08560c73 +0x91:  mov    %eax,(%esp)
08560c76 +0x94:  call   08560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)
08560c7b +0x99:  fstps  -0xc(%ebp)
08560c7e +0x9c:  movl   $0x0,0x4(%esp)
08560c86 +0xa4:  mov    0x8(%ebp),%eax
08560c89 +0xa7:  mov    %eax,(%esp)
08560c8c +0xaa:  call   08560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)
08560c91 +0xaf:  fstps  -0x10(%ebp)
08560c94 +0xb2:  mov    &_ZN28PvPGlobalEnvironmentVariable19school_match_elo_k_E,%eax
08560c99 +0xb7:  mov    %eax,0xc(%esp)
08560c9d +0xbb:  mov    0x10(%ebp),%eax
08560ca0 +0xbe:  mov    %eax,0x8(%esp)
08560ca4 +0xc2:  lea    -0x10(%ebp),%eax
08560ca7 +0xc5:  mov    %eax,0x4(%esp)
08560cab +0xc9:  lea    -0xc(%ebp),%eax
08560cae +0xcc:  mov    %eax,(%esp)
08560cb1 +0xcf:  call   0844dca1 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8b7>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8b7
08560cb6 +0xd4:  mov    -0xc(%ebp),%eax
08560cb9 +0xd7:  mov    %eax,0x8(%esp)
08560cbd +0xdb:  movl   $0x1,0x4(%esp)
08560cc5 +0xe3:  mov    0x8(%ebp),%eax
08560cc8 +0xe6:  mov    %eax,(%esp)
08560ccb +0xe9:  call   08560368 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf>  ; online_preliminary::COnlinePreliminary::_SetRating(ENUM_SCHOOL_MATCH_TEAM, float)
08560cd0 +0xee:  leave
08560cd1 +0xef:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_UpdateRating @ 0x8560be2

/* online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM) */

void __thiscall
online_preliminary::COnlinePreliminary::_UpdateRating
          (COnlinePreliminary *this,int param_1,undefined4 param_3)

{
  longdouble lVar1;
  float local_14;
  float local_10 [3];
  
  local_10[0] = 0.0;
  local_14 = 0.0;
  if (param_1 == 1) {
    lVar1 = (longdouble)_GetRating(this,0);
    local_10[0] = (float)lVar1;
    lVar1 = (longdouble)_GetRating(this,1);
    local_14 = (float)lVar1;
    CEloRating::calc(local_10,&local_14,param_3,PvPGlobalEnvironmentVariable::school_match_elo_k_);
    _SetRating(this,0,local_10[0]);
  }
  else {
    lVar1 = (longdouble)_GetRating(this,1);
    local_10[0] = (float)lVar1;
    lVar1 = (longdouble)_GetRating(this,0);
    local_14 = (float)lVar1;
    CEloRating::calc(local_10,&local_14,param_3,PvPGlobalEnvironmentVariable::school_match_elo_k_);
    _SetRating(this,1,local_10[0]);
  }
  return;
}
```
