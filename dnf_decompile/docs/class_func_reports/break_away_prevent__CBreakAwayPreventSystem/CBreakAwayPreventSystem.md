# CBreakAwayPreventSystem

`_ZN18break_away_prevent23CBreakAwayPreventSystemC1Ev`

`break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831c3e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c3e0  _ZN18break_away_prevent23CBreakAwayPreventSystemC1Ev
#           break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()
# range [0x0831c3e0, 0x0831c485]
0831c3e0 +0x00:  push   %ebp
0831c3e1 +0x01:  mov    %esp,%ebp
0831c3e3 +0x03:  push   %esi
0831c3e4 +0x04:  push   %ebx
0831c3e5 +0x05:  sub    $0x10,%esp
0831c3e8 +0x08:  mov    0x8(%ebp),%eax
0831c3eb +0x0b:  mov    %eax,(%esp)
0831c3ee +0x0e:  call   0831d2b0 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x69>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x69
0831c3f3 +0x13:  mov    0x8(%ebp),%eax
0831c3f6 +0x16:  add    $0x2e4,%eax
0831c3fb +0x1b:  mov    %eax,(%esp)
0831c3fe +0x1e:  call   0831d624 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x3dd>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x3dd
0831c403 +0x23:  mov    0x8(%ebp),%eax
0831c406 +0x26:  add    $0x2fc,%eax
0831c40b +0x2b:  mov    %eax,%ebx
0831c40d +0x2d:  mov    $0x4,%esi
0831c412 +0x32:  jmp    0831c422 <+0x42>
0831c414 +0x34:  mov    %ebx,(%esp)
0831c417 +0x37:  call   0831d3ae <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x167>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x167
0831c41c +0x3c:  add    $0x3,%ebx
0831c41f +0x3f:  sub    $0x1,%esi
0831c422 +0x42:  cmp    $0xffffffff,%esi
0831c425 +0x45:  setne  %al
0831c428 +0x48:  test   %al,%al
0831c42a +0x4a:  jne    0831c414 <+0x34>
0831c42c +0x4c:  mov    0x8(%ebp),%eax
0831c42f +0x4f:  add    $0x30b,%eax
0831c434 +0x54:  movl   $0x1f,0x8(%esp)
0831c43c +0x5c:  movl   $0x0,0x4(%esp)
0831c444 +0x64:  mov    %eax,(%esp)
0831c447 +0x67:  call   0807dcc0 <_init+0x5b8>
0831c44c +0x6c:  mov    0x8(%ebp),%eax
0831c44f +0x6f:  add    $0x2e4,%eax
0831c454 +0x74:  mov    %eax,(%esp)
0831c457 +0x77:  call   0831d69e <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x457>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x457
0831c45c +0x7c:  jmp    0831c47e <+0x9e>
0831c45e +0x7e:  mov    %edx,%ebx
0831c460 +0x80:  mov    %eax,%esi
0831c462 +0x82:  mov    0x8(%ebp),%eax
0831c465 +0x85:  add    $0x2e4,%eax
0831c46a +0x8a:  mov    %eax,(%esp)
0831c46d +0x8d:  call   0831d548 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x301>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x301
0831c472 +0x92:  mov    %esi,%eax
0831c474 +0x94:  mov    %ebx,%edx
0831c476 +0x96:  mov    %eax,(%esp)
0831c479 +0x99:  call   08ae3750 <_Unwind_Resume>
0831c47e +0x9e:  add    $0x10,%esp
0831c481 +0xa1:  pop    %ebx
0831c482 +0xa2:  pop    %esi
0831c483 +0xa3:  pop    %ebp
0831c484 +0xa4:  ret
0831c485 +0xa5:  nop
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem @ 0x831c3e0

/* break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem() */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem(CBreakAwayPreventSystem *this)

{
  STRewardDataKey *this_00;
  int iVar1;
  
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER::SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER
            ((SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *)this);
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::map((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
         *)(this + 0x2e4));
  this_00 = (STRewardDataKey *)(this + 0x2fc);
  for (iVar1 = 4; iVar1 != -1; iVar1 = iVar1 + -1) {
    STRewardDataKey::STRewardDataKey(this_00);
    this_00 = this_00 + 3;
  }
  memset(this + 0x30b,0,0x1f);
                    /* try { // try from 0831c457 to 0831c45b has its CatchHandler @ 0831c45e */
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::clear((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
           *)(this + 0x2e4));
  return;
}
```
