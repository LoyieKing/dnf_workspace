# reset

`_ZN12advancealtar15TimeLineSummary5resetEv`

`advancealtar::TimeLineSummary::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::TimeLineSummary` | `0x08899d4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899d4e  _ZN12advancealtar15TimeLineSummary5resetEv
#           advancealtar::TimeLineSummary::reset()
# range [0x08899d4e, 0x08899d6d]
08899d4e +0x00:  push   %ebp
08899d4f +0x01:  mov    %esp,%ebp
08899d51 +0x03:  sub    $0x18,%esp
08899d54 +0x06:  mov    0x8(%ebp),%eax
08899d57 +0x09:  movl   $0x0,(%eax)
08899d5d +0x0f:  mov    0x8(%ebp),%eax
08899d60 +0x12:  add    $0x4,%eax
08899d63 +0x15:  mov    %eax,(%esp)
08899d66 +0x18:  call   0889bd76 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x43f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x43f
08899d6b +0x1d:  leave
08899d6c +0x1e:  ret
08899d6d +0x1f:  nop
```

## 反编译 C

```c
// advancealtar::TimeLineSummary::reset @ 0x8899d4e

/* advancealtar::TimeLineSummary::reset() */

void __thiscall advancealtar::TimeLineSummary::reset(TimeLineSummary *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::clear
            ((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>> *)
             (this + 4));
  return;
}
```
