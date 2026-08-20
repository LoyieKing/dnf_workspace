# reset

`_ZN12advancealtar8TimeLine5resetEv`

`advancealtar::TimeLine::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::TimeLine` | `0x08899dfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899dfa  _ZN12advancealtar8TimeLine5resetEv
#           advancealtar::TimeLine::reset()
# range [0x08899dfa, 0x08899e1b]
08899dfa +0x00:  push   %ebp
08899dfb +0x01:  mov    %esp,%ebp
08899dfd +0x03:  sub    $0x18,%esp
08899e00 +0x06:  mov    0x8(%ebp),%eax
08899e03 +0x09:  mov    %eax,(%esp)
08899e06 +0x0c:  call   0889bda6 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x46f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x46f
08899e0b +0x11:  mov    0x8(%ebp),%eax
08899e0e +0x14:  add    $0xc,%eax
08899e11 +0x17:  mov    %eax,(%esp)
08899e14 +0x1a:  call   08899d4e <_ZN12advancealtar15TimeLineSummary5resetEv>  ; advancealtar::TimeLineSummary::reset()
08899e19 +0x1f:  leave
08899e1a +0x20:  ret
08899e1b +0x21:  nop
```

## 反编译 C

```c
// advancealtar::TimeLine::reset @ 0x8899dfa

/* advancealtar::TimeLine::reset() */

void __thiscall advancealtar::TimeLine::reset(TimeLine *this)

{
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::clear
            ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)this);
  TimeLineSummary::reset((TimeLineSummary *)(this + 0xc));
  return;
}
```
