# add

`_ZN8fair_pvp13TeamInfoThird3addEP5CUser`

`fair_pvp::TeamInfoThird::add(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::TeamInfoThird` | `0x085625c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085625c6  _ZN8fair_pvp13TeamInfoThird3addEP5CUser
#           fair_pvp::TeamInfoThird::add(CUser*)
# range [0x085625c6, 0x085626a9]
085625c6 +0x00:  push   %ebp
085625c7 +0x01:  mov    %esp,%ebp
085625c9 +0x03:  push   %ebx
085625ca +0x04:  sub    $0x24,%esp
085625cd +0x07:  movl   $0x0,-0xc(%ebp)
085625d4 +0x0e:  jmp    08562690 <+0xca>
085625d9 +0x13:  mov    -0xc(%ebp),%edx
085625dc +0x16:  mov    0x8(%ebp),%eax
085625df +0x19:  shl    $0x4,%edx
085625e2 +0x1c:  movzbl 0xc(%edx,%eax,1),%eax
085625e7 +0x21:  xor    $0x1,%eax
085625ea +0x24:  test   %al,%al
085625ec +0x26:  je     0856268c <+0xc6>
085625f2 +0x2c:  mov    -0xc(%ebp),%edx
085625f5 +0x2f:  mov    0x8(%ebp),%eax
085625f8 +0x32:  shl    $0x4,%edx
085625fb +0x35:  movb   $0x1,0xc(%edx,%eax,1)
08562600 +0x3a:  mov    -0xc(%ebp),%edx
08562603 +0x3d:  mov    0x8(%ebp),%eax
08562606 +0x40:  shl    $0x4,%edx
08562609 +0x43:  add    %edx,%eax
0856260b +0x45:  lea    0x8(%eax),%edx
0856260e +0x48:  mov    0xc(%ebp),%eax
08562611 +0x4b:  mov    %eax,(%edx)
08562613 +0x4d:  mov    -0xc(%ebp),%ebx
08562616 +0x50:  mov    0xc(%ebp),%eax
08562619 +0x53:  mov    %eax,(%esp)
0856261c +0x56:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08562621 +0x5b:  mov    %eax,%edx
08562623 +0x5d:  mov    0x8(%ebp),%eax
08562626 +0x60:  mov    %ebx,%ecx
08562628 +0x62:  shl    $0x4,%ecx
0856262b +0x65:  mov    %dl,0xd(%ecx,%eax,1)
0856262f +0x69:  mov    -0xc(%ebp),%ebx
08562632 +0x6c:  mov    0xc(%ebp),%eax
08562635 +0x6f:  mov    %eax,(%esp)
08562638 +0x72:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0856263d +0x77:  mov    %eax,%edx
0856263f +0x79:  mov    0x8(%ebp),%eax
08562642 +0x7c:  mov    %ebx,%ecx
08562644 +0x7e:  shl    $0x4,%ecx
08562647 +0x81:  mov    %dl,0xe(%ecx,%eax,1)
0856264b +0x85:  mov    -0xc(%ebp),%ebx
0856264e +0x88:  mov    0xc(%ebp),%eax
08562651 +0x8b:  mov    %eax,(%esp)
08562654 +0x8e:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08562659 +0x93:  mov    0x8(%ebp),%edx
0856265c +0x96:  mov    %ebx,%ecx
0856265e +0x98:  shl    $0x4,%ecx
08562661 +0x9b:  add    %ecx,%edx
08562663 +0x9d:  add    $0x10,%edx
08562666 +0xa0:  mov    %eax,(%edx)
08562668 +0xa2:  mov    -0xc(%ebp),%ebx
0856266b +0xa5:  mov    0xc(%ebp),%eax
0856266e +0xa8:  mov    %eax,(%esp)
08562671 +0xab:  call   08568e84 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x84e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x84e
08562676 +0xb0:  mov    0x8(%ebp),%eax
08562679 +0xb3:  mov    %ebx,%edx
0856267b +0xb5:  shl    $0x4,%edx
0856267e +0xb8:  add    %edx,%eax
08562680 +0xba:  add    $0x14,%eax
08562683 +0xbd:  fstps  (%eax)
08562685 +0xbf:  mov    $0x1,%eax
0856268a +0xc4:  jmp    085626a4 <+0xde>
0856268c +0xc6:  addl   $0x1,-0xc(%ebp)
08562690 +0xca:  cmpl   $0x3,-0xc(%ebp)
08562694 +0xce:  setle  %al
08562697 +0xd1:  test   %al,%al
08562699 +0xd3:  jne    085625d9 <+0x13>
0856269f +0xd9:  mov    $0x0,%eax
085626a4 +0xde:  add    $0x24,%esp
085626a7 +0xe1:  pop    %ebx
085626a8 +0xe2:  pop    %ebp
085626a9 +0xe3:  ret
```

## 反编译 C

```c
// fair_pvp::TeamInfoThird::add @ 0x85625c6

/* fair_pvp::TeamInfoThird::add(CUser*) */

undefined4 __thiscall fair_pvp::TeamInfoThird::add(TeamInfoThird *this,CUser *param_1)

{
  TeamInfoThird TVar1;
  undefined4 uVar2;
  longdouble lVar3;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    if (this[local_10 * 0x10 + 0xc] != (TeamInfoThird)0x1) break;
    local_10 = local_10 + 1;
  }
  this[local_10 * 0x10 + 0xc] = (TeamInfoThird)0x1;
  *(CUser **)(this + local_10 * 0x10 + 8) = param_1;
  TVar1 = (TeamInfoThird)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  this[local_10 * 0x10 + 0xd] = TVar1;
  TVar1 = (TeamInfoThird)CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  this[local_10 * 0x10 + 0xe] = TVar1;
  uVar2 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + local_10 * 0x10 + 0x10) = uVar2;
  lVar3 = (longdouble)CUser::GetRating(param_1);
  *(float *)(this + local_10 * 0x10 + 0x14) = (float)lVar3;
  return 1;
}
```
