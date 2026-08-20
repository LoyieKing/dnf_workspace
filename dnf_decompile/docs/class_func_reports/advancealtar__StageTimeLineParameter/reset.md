# reset

`_ZN12advancealtar22StageTimeLineParameter5resetEv`

`advancealtar::StageTimeLineParameter::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x08899ef6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899ef6  _ZN12advancealtar22StageTimeLineParameter5resetEv
#           advancealtar::StageTimeLineParameter::reset()
# range [0x08899ef6, 0x08899f25]
08899ef6 +0x00:  push   %ebp
08899ef7 +0x01:  mov    %esp,%ebp
08899ef9 +0x03:  sub    $0x18,%esp
08899efc +0x06:  mov    0x8(%ebp),%eax
08899eff +0x09:  mov    %eax,(%esp)
08899f02 +0x0c:  call   0889beb6 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x57f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x57f
08899f07 +0x11:  mov    0x8(%ebp),%eax
08899f0a +0x14:  add    $0x18,%eax
08899f0d +0x17:  mov    %eax,(%esp)
08899f10 +0x1a:  call   0889beca <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x593>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x593
08899f15 +0x1f:  mov    0x8(%ebp),%eax
08899f18 +0x22:  add    $0x30,%eax
08899f1b +0x25:  mov    %eax,(%esp)
08899f1e +0x28:  call   08899dfa <_ZN12advancealtar8TimeLine5resetEv>  ; advancealtar::TimeLine::reset()
08899f23 +0x2d:  leave
08899f24 +0x2e:  ret
08899f25 +0x2f:  nop
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::reset @ 0x8899ef6

/* advancealtar::StageTimeLineParameter::reset() */

void __thiscall advancealtar::StageTimeLineParameter::reset(StageTimeLineParameter *this)

{
  std::
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  ::clear((map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
           *)this);
  std::
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  ::clear((map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
           *)(this + 0x18));
  TimeLine::reset((TimeLine *)(this + 0x30));
  return;
}
```
