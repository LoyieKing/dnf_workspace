# ~CBreakAwayPreventSystem

`_ZN18break_away_prevent23CBreakAwayPreventSystemD1Ev`

`break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem()`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831c486` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c486  _ZN18break_away_prevent23CBreakAwayPreventSystemD1Ev
#           break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem()
# range [0x0831c486, 0x0831c49d]
0831c486 +0x00:  push   %ebp
0831c487 +0x01:  mov    %esp,%ebp
0831c489 +0x03:  sub    $0x18,%esp
0831c48c +0x06:  mov    0x8(%ebp),%eax
0831c48f +0x09:  add    $0x2e4,%eax
0831c494 +0x0e:  mov    %eax,(%esp)
0831c497 +0x11:  call   0831d548 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x301>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x301
0831c49c +0x16:  leave
0831c49d +0x17:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem @ 0x831c486

/* break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem() */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem(CBreakAwayPreventSystem *this)

{
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::~map((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
          *)(this + 0x2e4));
  return;
}
```
