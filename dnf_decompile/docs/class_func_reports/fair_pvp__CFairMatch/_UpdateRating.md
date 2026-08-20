# _UpdateRating

`_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM`

`fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562e1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562e1e  _ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM
#           fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM)
# range [0x08562e1e, 0x08562fbb]
08562e1e +0x000:  push   %ebp
08562e1f +0x001:  mov    %esp,%ebp
08562e21 +0x003:  sub    $0x38,%esp
08562e24 +0x006:  mov    $0x0,%eax
08562e29 +0x00b:  mov    %eax,-0x18(%ebp)
08562e2c +0x00e:  mov    $0x0,%eax
08562e31 +0x013:  mov    %eax,-0x1c(%ebp)
08562e34 +0x016:  movl   $0x0,-0x14(%ebp)
08562e3b +0x01d:  cmpl   $0x1,0xc(%ebp)
08562e3f +0x021:  jne    08562f06 <+0xe8>
08562e45 +0x027:  mov    0x8(%ebp),%eax
08562e48 +0x02a:  add    $0x64,%eax
08562e4b +0x02d:  mov    %eax,(%esp)
08562e4e +0x030:  call   085627b2 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv>  ; fair_pvp::TeamInfoThird::GetTeamRating()
08562e53 +0x035:  fstps  -0x1c(%ebp)
08562e56 +0x038:  movl   $0x0,-0x10(%ebp)
08562e5d +0x03f:  jmp    08562ef2 <+0xd4>
08562e62 +0x044:  mov    -0x10(%ebp),%edx
08562e65 +0x047:  mov    0x8(%ebp),%eax
08562e68 +0x04a:  add    $0x1,%edx
08562e6b +0x04d:  shl    $0x4,%edx
08562e6e +0x050:  movzbl 0x18(%edx,%eax,1),%eax
08562e73 +0x055:  test   %al,%al
08562e75 +0x057:  je     08562eee <+0xd0>
08562e77 +0x059:  mov    -0x10(%ebp),%edx
08562e7a +0x05c:  mov    0x8(%ebp),%eax
08562e7d +0x05f:  add    $0x1,%edx
08562e80 +0x062:  shl    $0x4,%edx
08562e83 +0x065:  add    %edx,%eax
08562e85 +0x067:  add    $0x14,%eax
08562e88 +0x06a:  mov    (%eax),%eax
08562e8a +0x06c:  test   %eax,%eax
08562e8c +0x06e:  je     08562eee <+0xd0>
08562e8e +0x070:  mov    -0x10(%ebp),%edx
08562e91 +0x073:  mov    0x8(%ebp),%eax
08562e94 +0x076:  add    $0x1,%edx
08562e97 +0x079:  shl    $0x4,%edx
08562e9a +0x07c:  add    %edx,%eax
08562e9c +0x07e:  add    $0x14,%eax
08562e9f +0x081:  mov    (%eax),%eax
08562ea1 +0x083:  mov    %eax,-0x14(%ebp)
08562ea4 +0x086:  mov    -0x10(%ebp),%edx
08562ea7 +0x089:  mov    0x8(%ebp),%eax
08562eaa +0x08c:  add    $0x1,%edx
08562ead +0x08f:  shl    $0x4,%edx
08562eb0 +0x092:  add    %edx,%eax
08562eb2 +0x094:  add    $0x20,%eax
08562eb5 +0x097:  mov    (%eax),%eax
08562eb7 +0x099:  mov    %eax,-0x18(%ebp)
08562eba +0x09c:  mov    &_ZN28PvPGlobalEnvironmentVariable19school_match_elo_k_E,%eax
08562ebf +0x0a1:  mov    %eax,0xc(%esp)
08562ec3 +0x0a5:  mov    0x10(%ebp),%eax
08562ec6 +0x0a8:  mov    %eax,0x8(%esp)
08562eca +0x0ac:  lea    -0x1c(%ebp),%eax
08562ecd +0x0af:  mov    %eax,0x4(%esp)
08562ed1 +0x0b3:  lea    -0x18(%ebp),%eax
08562ed4 +0x0b6:  mov    %eax,(%esp)
08562ed7 +0x0b9:  call   0844dca1 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8b7>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8b7
08562edc +0x0be:  mov    -0x18(%ebp),%eax
08562edf +0x0c1:  mov    %eax,0x4(%esp)
08562ee3 +0x0c5:  mov    -0x14(%ebp),%eax
08562ee6 +0x0c8:  mov    %eax,(%esp)
08562ee9 +0x0cb:  call   08568e9c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x866>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x866
08562eee +0x0d0:  addl   $0x1,-0x10(%ebp)
08562ef2 +0x0d4:  cmpl   $0x3,-0x10(%ebp)
08562ef6 +0x0d8:  setle  %al
08562ef9 +0x0db:  test   %al,%al
08562efb +0x0dd:  jne    08562e62 <+0x44>
08562f01 +0x0e3:  jmp    08562fba <+0x19c>
08562f06 +0x0e8:  mov    0x8(%ebp),%eax
08562f09 +0x0eb:  add    $0x1c,%eax
08562f0c +0x0ee:  mov    %eax,(%esp)
08562f0f +0x0f1:  call   085627b2 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv>  ; fair_pvp::TeamInfoThird::GetTeamRating()
08562f14 +0x0f6:  fstps  -0x1c(%ebp)
08562f17 +0x0f9:  movl   $0x0,-0xc(%ebp)
08562f1e +0x100:  jmp    08562fab <+0x18d>
08562f23 +0x105:  mov    -0xc(%ebp),%edx
08562f26 +0x108:  mov    0x8(%ebp),%eax
08562f29 +0x10b:  shl    $0x4,%edx
08562f2c +0x10e:  add    %edx,%eax
08562f2e +0x110:  add    $0x58,%eax
08562f31 +0x113:  movzbl 0x18(%eax),%eax
08562f35 +0x117:  test   %al,%al
08562f37 +0x119:  je     08562fa7 <+0x189>
08562f39 +0x11b:  mov    -0xc(%ebp),%edx
08562f3c +0x11e:  mov    0x8(%ebp),%eax
08562f3f +0x121:  shl    $0x4,%edx
08562f42 +0x124:  add    %edx,%eax
08562f44 +0x126:  add    $0x6c,%eax
08562f47 +0x129:  mov    (%eax),%eax
08562f49 +0x12b:  test   %eax,%eax
08562f4b +0x12d:  je     08562fa7 <+0x189>
08562f4d +0x12f:  mov    -0xc(%ebp),%edx
08562f50 +0x132:  mov    0x8(%ebp),%eax
08562f53 +0x135:  shl    $0x4,%edx
08562f56 +0x138:  add    %edx,%eax
08562f58 +0x13a:  add    $0x6c,%eax
08562f5b +0x13d:  mov    (%eax),%eax
08562f5d +0x13f:  mov    %eax,-0x14(%ebp)
08562f60 +0x142:  mov    -0xc(%ebp),%edx
08562f63 +0x145:  mov    0x8(%ebp),%eax
08562f66 +0x148:  shl    $0x4,%edx
08562f69 +0x14b:  add    %edx,%eax
08562f6b +0x14d:  add    $0x78,%eax
08562f6e +0x150:  mov    (%eax),%eax
08562f70 +0x152:  mov    %eax,-0x18(%ebp)
08562f73 +0x155:  mov    &_ZN28PvPGlobalEnvironmentVariable19school_match_elo_k_E,%eax
08562f78 +0x15a:  mov    %eax,0xc(%esp)
08562f7c +0x15e:  mov    0x10(%ebp),%eax
08562f7f +0x161:  mov    %eax,0x8(%esp)
08562f83 +0x165:  lea    -0x1c(%ebp),%eax
08562f86 +0x168:  mov    %eax,0x4(%esp)
08562f8a +0x16c:  lea    -0x18(%ebp),%eax
08562f8d +0x16f:  mov    %eax,(%esp)
08562f90 +0x172:  call   0844dca1 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8b7>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8b7
08562f95 +0x177:  mov    -0x18(%ebp),%eax
08562f98 +0x17a:  mov    %eax,0x4(%esp)
08562f9c +0x17e:  mov    -0x14(%ebp),%eax
08562f9f +0x181:  mov    %eax,(%esp)
08562fa2 +0x184:  call   08568e9c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x866>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x866
08562fa7 +0x189:  addl   $0x1,-0xc(%ebp)
08562fab +0x18d:  cmpl   $0x3,-0xc(%ebp)
08562faf +0x191:  setle  %al
08562fb2 +0x194:  test   %al,%al
08562fb4 +0x196:  jne    08562f23 <+0x105>
08562fba +0x19c:  leave
08562fbb +0x19d:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_UpdateRating @ 0x8562e1e

/* fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM) */

void __thiscall fair_pvp::CFairMatch::_UpdateRating(CFairMatch *this,int param_1,undefined4 param_3)

{
  longdouble lVar1;
  float local_20;
  float local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  local_1c = 0.0;
  local_20 = 0.0;
  local_18 = (CUser *)0x0;
  if (param_1 == 1) {
    lVar1 = (longdouble)TeamInfoThird::GetTeamRating((TeamInfoThird *)(this + 100));
    local_20 = (float)lVar1;
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      if ((this[(local_14 + 1) * 0x10 + 0x18] != (CFairMatch)0x0) &&
         (*(int *)(this + (local_14 + 1) * 0x10 + 0x14) != 0)) {
        local_18 = *(CUser **)(this + (local_14 + 1) * 0x10 + 0x14);
        local_1c = *(float *)(this + (local_14 + 1) * 0x10 + 0x20);
        CEloRating::calc(&local_1c,&local_20,param_3,
                         PvPGlobalEnvironmentVariable::school_match_elo_k_);
        CUser::UpdateRating(local_18,local_1c);
      }
    }
  }
  else {
    lVar1 = (longdouble)TeamInfoThird::GetTeamRating((TeamInfoThird *)(this + 0x1c));
    local_20 = (float)lVar1;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if ((this[local_10 * 0x10 + 0x70] != (CFairMatch)0x0) &&
         (*(int *)(this + local_10 * 0x10 + 0x6c) != 0)) {
        local_18 = *(CUser **)(this + local_10 * 0x10 + 0x6c);
        local_1c = *(float *)(this + local_10 * 0x10 + 0x78);
        CEloRating::calc(&local_1c,&local_20,param_3,
                         PvPGlobalEnvironmentVariable::school_match_elo_k_);
        CUser::UpdateRating(local_18,local_1c);
      }
    }
  }
  return;
}
```
