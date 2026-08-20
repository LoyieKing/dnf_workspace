# ~TimeLineSummary

`_ZN12advancealtar15TimeLineSummaryD1Ev`

`advancealtar::TimeLineSummary::~TimeLineSummary()`

| 类 | 地址 |
|---|---|
| `advancealtar::TimeLineSummary` | `0x08899d38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899d38  _ZN12advancealtar15TimeLineSummaryD1Ev
#           advancealtar::TimeLineSummary::~TimeLineSummary()
# range [0x08899d38, 0x08899d4d]
08899d38 +0x00:  push   %ebp
08899d39 +0x01:  mov    %esp,%ebp
08899d3b +0x03:  sub    $0x18,%esp
08899d3e +0x06:  mov    0x8(%ebp),%eax
08899d41 +0x09:  add    $0x4,%eax
08899d44 +0x0c:  mov    %eax,(%esp)
08899d47 +0x0f:  call   0889bd18 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x3e1>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x3e1
08899d4c +0x14:  leave
08899d4d +0x15:  ret
```

## 反编译 C

```c
// advancealtar::TimeLineSummary::~TimeLineSummary @ 0x8899d38

/* advancealtar::TimeLineSummary::~TimeLineSummary() */

void __thiscall advancealtar::TimeLineSummary::~TimeLineSummary(TimeLineSummary *this)

{
  std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::~vector
            ((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>> *)
             (this + 4));
  return;
}
```
