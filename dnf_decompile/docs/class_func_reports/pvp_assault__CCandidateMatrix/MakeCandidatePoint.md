# MakeCandidatePoint

`_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_`

`pvp_assault::CCandidateMatrix::MakeCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CCandidateMatrix` | `0x082e5ca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5ca8  _ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_
#           pvp_assault::CCandidateMatrix::MakeCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&)
# range [0x082e5ca8, 0x082e5ed0]
082e5ca8 +0x000:  push   %ebp
082e5ca9 +0x001:  mov    %esp,%ebp
082e5cab +0x003:  push   %ebx
082e5cac +0x004:  sub    $0x54,%esp
082e5caf +0x007:  movl   $0x0,-0x10(%ebp)
082e5cb6 +0x00e:  movl   $0x0,-0xc(%ebp)
082e5cbd +0x015:  movl   $0xa,0x10(%esp)
082e5cc5 +0x01d:  mov    0x10(%ebp),%eax
082e5cc8 +0x020:  mov    %eax,0xc(%esp)
082e5ccc +0x024:  mov    0xc(%ebp),%eax
082e5ccf +0x027:  mov    %eax,0x8(%esp)
082e5cd3 +0x02b:  mov    0xc(%ebp),%eax
082e5cd6 +0x02e:  mov    %eax,0x4(%esp)
082e5cda +0x032:  mov    0x8(%ebp),%eax
082e5cdd +0x035:  mov    %eax,(%esp)
082e5ce0 +0x038:  call   082e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>  ; pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&, pvp_assault::Point2d const&, int)
082e5ce5 +0x03d:  movl   $0x1,-0x10(%ebp)
082e5cec +0x044:  jmp    082e5d98 <+0xf0>
082e5cf1 +0x049:  mov    0xc(%ebp),%eax
082e5cf4 +0x04c:  mov    0x4(%eax),%ecx
082e5cf7 +0x04f:  mov    -0x10(%ebp),%edx
082e5cfa +0x052:  mov    %edx,%eax
082e5cfc +0x054:  shl    $0x2,%eax
082e5cff +0x057:  add    %edx,%eax
082e5d01 +0x059:  add    %eax,%eax
082e5d03 +0x05b:  lea    (%ecx,%eax,1),%edx
082e5d06 +0x05e:  mov    0xc(%ebp),%eax
082e5d09 +0x061:  mov    (%eax),%eax
082e5d0b +0x063:  mov    %edx,0x8(%esp)
082e5d0f +0x067:  mov    %eax,0x4(%esp)
082e5d13 +0x06b:  lea    -0x30(%ebp),%eax
082e5d16 +0x06e:  mov    %eax,(%esp)
082e5d19 +0x071:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e5d1e +0x076:  movl   $0xa,0x10(%esp)
082e5d26 +0x07e:  mov    0x10(%ebp),%eax
082e5d29 +0x081:  mov    %eax,0xc(%esp)
082e5d2d +0x085:  mov    0xc(%ebp),%eax
082e5d30 +0x088:  mov    %eax,0x8(%esp)
082e5d34 +0x08c:  lea    -0x30(%ebp),%eax
082e5d37 +0x08f:  mov    %eax,0x4(%esp)
082e5d3b +0x093:  mov    0x8(%ebp),%eax
082e5d3e +0x096:  mov    %eax,(%esp)
082e5d41 +0x099:  call   082e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>  ; pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&, pvp_assault::Point2d const&, int)
082e5d46 +0x09e:  mov    0xc(%ebp),%eax
082e5d49 +0x0a1:  mov    0x4(%eax),%edx
082e5d4c +0x0a4:  mov    -0x10(%ebp),%eax
082e5d4f +0x0a7:  imul   $0xfffffff6,%eax,%eax
082e5d52 +0x0aa:  add    %eax,%edx
082e5d54 +0x0ac:  mov    0xc(%ebp),%eax
082e5d57 +0x0af:  mov    (%eax),%eax
082e5d59 +0x0b1:  mov    %edx,0x8(%esp)
082e5d5d +0x0b5:  mov    %eax,0x4(%esp)
082e5d61 +0x0b9:  lea    -0x28(%ebp),%eax
082e5d64 +0x0bc:  mov    %eax,(%esp)
082e5d67 +0x0bf:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e5d6c +0x0c4:  movl   $0xa,0x10(%esp)
082e5d74 +0x0cc:  mov    0x10(%ebp),%eax
082e5d77 +0x0cf:  mov    %eax,0xc(%esp)
082e5d7b +0x0d3:  mov    0xc(%ebp),%eax
082e5d7e +0x0d6:  mov    %eax,0x8(%esp)
082e5d82 +0x0da:  lea    -0x28(%ebp),%eax
082e5d85 +0x0dd:  mov    %eax,0x4(%esp)
082e5d89 +0x0e1:  mov    0x8(%ebp),%eax
082e5d8c +0x0e4:  mov    %eax,(%esp)
082e5d8f +0x0e7:  call   082e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>  ; pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&, pvp_assault::Point2d const&, int)
082e5d94 +0x0ec:  addl   $0x1,-0x10(%ebp)
082e5d98 +0x0f0:  cmpl   $0x7,-0x10(%ebp)
082e5d9c +0x0f4:  setle  %al
082e5d9f +0x0f7:  test   %al,%al
082e5da1 +0x0f9:  jne    082e5cf1 <+0x49>
082e5da7 +0x0ff:  movl   $0x0,-0xc(%ebp)
082e5dae +0x106:  jmp    082e5eb8 <+0x210>
082e5db3 +0x10b:  movl   $0x1,-0x10(%ebp)
082e5dba +0x112:  jmp    082e5ea5 <+0x1fd>
082e5dbf +0x117:  mov    -0xc(%ebp),%edx
082e5dc2 +0x11a:  mov    0x8(%ebp),%eax
082e5dc5 +0x11d:  mov    %edx,0x4(%esp)
082e5dc9 +0x121:  mov    %eax,(%esp)
082e5dcc +0x124:  call   082f16a2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1426>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1426
082e5dd1 +0x129:  mov    0x8(%eax),%ebx
082e5dd4 +0x12c:  mov    -0xc(%ebp),%edx
082e5dd7 +0x12f:  mov    0x8(%ebp),%eax
082e5dda +0x132:  mov    %edx,0x4(%esp)
082e5dde +0x136:  mov    %eax,(%esp)
082e5de1 +0x139:  call   082f16a2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1426>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1426
082e5de6 +0x13e:  mov    0x4(%eax),%ecx
082e5de9 +0x141:  mov    -0x10(%ebp),%edx
082e5dec +0x144:  mov    %edx,%eax
082e5dee +0x146:  shl    $0x2,%eax
082e5df1 +0x149:  add    %edx,%eax
082e5df3 +0x14b:  add    %eax,%eax
082e5df5 +0x14d:  lea    (%ecx,%eax,1),%eax
082e5df8 +0x150:  mov    %ebx,0x8(%esp)
082e5dfc +0x154:  mov    %eax,0x4(%esp)
082e5e00 +0x158:  lea    -0x20(%ebp),%eax
082e5e03 +0x15b:  mov    %eax,(%esp)
082e5e06 +0x15e:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e5e0b +0x163:  movl   $0x0,0x10(%esp)
082e5e13 +0x16b:  mov    0x10(%ebp),%eax
082e5e16 +0x16e:  mov    %eax,0xc(%esp)
082e5e1a +0x172:  mov    0xc(%ebp),%eax
082e5e1d +0x175:  mov    %eax,0x8(%esp)
082e5e21 +0x179:  lea    -0x20(%ebp),%eax
082e5e24 +0x17c:  mov    %eax,0x4(%esp)
082e5e28 +0x180:  mov    0x8(%ebp),%eax
082e5e2b +0x183:  mov    %eax,(%esp)
082e5e2e +0x186:  call   082e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>  ; pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&, pvp_assault::Point2d const&, int)
082e5e33 +0x18b:  mov    -0xc(%ebp),%edx
082e5e36 +0x18e:  mov    0x8(%ebp),%eax
082e5e39 +0x191:  mov    %edx,0x4(%esp)
082e5e3d +0x195:  mov    %eax,(%esp)
082e5e40 +0x198:  call   082f16a2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1426>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1426
082e5e45 +0x19d:  mov    0x8(%eax),%ebx
082e5e48 +0x1a0:  mov    -0xc(%ebp),%edx
082e5e4b +0x1a3:  mov    0x8(%ebp),%eax
082e5e4e +0x1a6:  mov    %edx,0x4(%esp)
082e5e52 +0x1aa:  mov    %eax,(%esp)
082e5e55 +0x1ad:  call   082f16a2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1426>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1426
082e5e5a +0x1b2:  mov    0x4(%eax),%edx
082e5e5d +0x1b5:  mov    -0x10(%ebp),%eax
082e5e60 +0x1b8:  imul   $0xfffffff6,%eax,%eax
082e5e63 +0x1bb:  lea    (%edx,%eax,1),%eax
082e5e66 +0x1be:  mov    %ebx,0x8(%esp)
082e5e6a +0x1c2:  mov    %eax,0x4(%esp)
082e5e6e +0x1c6:  lea    -0x18(%ebp),%eax
082e5e71 +0x1c9:  mov    %eax,(%esp)
082e5e74 +0x1cc:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e5e79 +0x1d1:  movl   $0x0,0x10(%esp)
082e5e81 +0x1d9:  mov    0x10(%ebp),%eax
082e5e84 +0x1dc:  mov    %eax,0xc(%esp)
082e5e88 +0x1e0:  mov    0xc(%ebp),%eax
082e5e8b +0x1e3:  mov    %eax,0x8(%esp)
082e5e8f +0x1e7:  lea    -0x18(%ebp),%eax
082e5e92 +0x1ea:  mov    %eax,0x4(%esp)
082e5e96 +0x1ee:  mov    0x8(%ebp),%eax
082e5e99 +0x1f1:  mov    %eax,(%esp)
082e5e9c +0x1f4:  call   082e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>  ; pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&, pvp_assault::Point2d const&, pvp_assault::Point2d const&, int)
082e5ea1 +0x1f9:  addl   $0x1,-0x10(%ebp)
082e5ea5 +0x1fd:  cmpl   $0x7,-0x10(%ebp)
082e5ea9 +0x201:  setle  %al
082e5eac +0x204:  test   %al,%al
082e5eae +0x206:  jne    082e5dbf <+0x117>
082e5eb4 +0x20c:  addl   $0x1,-0xc(%ebp)
082e5eb8 +0x210:  call   082e5c9e <_Z24GetMaxCandidateMatirxRowv>  ; GetMaxCandidateMatirxRow()
082e5ebd +0x215:  cmp    -0xc(%ebp),%eax
082e5ec0 +0x218:  setg   %al
082e5ec3 +0x21b:  test   %al,%al
082e5ec5 +0x21d:  jne    082e5db3 <+0x10b>
082e5ecb +0x223:  add    $0x54,%esp
082e5ece +0x226:  pop    %ebx
082e5ecf +0x227:  pop    %ebp
082e5ed0 +0x228:  ret
```

## 反编译 C

```c
// pvp_assault::CCandidateMatrix::MakeCandidatePoint @ 0x82e5ca8

/* pvp_assault::CCandidateMatrix::MakeCandidatePoint(pvp_assault::Point2d const&,
   pvp_assault::Point2d const&) */

void __thiscall
pvp_assault::CCandidateMatrix::MakeCandidatePoint
          (CCandidateMatrix *this,Point2d *param_1,Point2d *param_2)

{
  int iVar1;
  int iVar2;
  Point2d local_34 [8];
  Point2d local_2c [8];
  Point2d local_24 [8];
  Point2d local_1c [8];
  int local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  _AddCandidatePoint(this,param_1,param_1,param_2,10);
  for (local_14 = 1; local_14 < 8; local_14 = local_14 + 1) {
    Point2d::Point2d(local_34,*(int *)param_1,*(int *)(param_1 + 4) + local_14 * 10);
    _AddCandidatePoint(this,local_34,param_1,param_2,10);
    Point2d::Point2d(local_2c,*(int *)param_1,*(int *)(param_1 + 4) + local_14 * -10);
    _AddCandidatePoint(this,local_2c,param_1,param_2,10);
  }
  local_10 = 0;
  while( true ) {
    iVar2 = GetMaxCandidateMatirxRow();
    if (iVar2 <= (int)local_10) break;
    for (local_14 = 1; local_14 < 8; local_14 = local_14 + 1) {
      iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      Point2d::Point2d(local_24,*(int *)(iVar1 + 4) + local_14 * 10,iVar2);
      _AddCandidatePoint(this,local_24,param_1,param_2,0);
      iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      Point2d::Point2d(local_1c,*(int *)(iVar1 + 4) + local_14 * -10,iVar2);
      _AddCandidatePoint(this,local_1c,param_1,param_2,0);
    }
    local_10 = local_10 + 1;
  }
  return;
}
```
