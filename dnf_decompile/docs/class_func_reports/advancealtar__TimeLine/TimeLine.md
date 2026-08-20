# TimeLine

`_ZN12advancealtar8TimeLineC1Ev`

`advancealtar::TimeLine::TimeLine()`

| 类 | 地址 |
|---|---|
| `advancealtar::TimeLine` | `0x08899d6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899d6e  _ZN12advancealtar8TimeLineC1Ev
#           advancealtar::TimeLine::TimeLine()
# range [0x08899d6e, 0x08899db3]
08899d6e +0x00:  push   %ebp
08899d6f +0x01:  mov    %esp,%ebp
08899d71 +0x03:  push   %esi
08899d72 +0x04:  push   %ebx
08899d73 +0x05:  sub    $0x10,%esp
08899d76 +0x08:  mov    0x8(%ebp),%eax
08899d79 +0x0b:  mov    %eax,(%esp)
08899d7c +0x0e:  call   0889bd92 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x45b>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x45b
08899d81 +0x13:  mov    0x8(%ebp),%eax
08899d84 +0x16:  add    $0xc,%eax
08899d87 +0x19:  mov    %eax,(%esp)
08899d8a +0x1c:  call   08899d18 <_ZN12advancealtar15TimeLineSummaryC1Ev>  ; advancealtar::TimeLineSummary::TimeLineSummary()
08899d8f +0x21:  jmp    08899dac <+0x3e>
08899d91 +0x23:  mov    %edx,%ebx
08899d93 +0x25:  mov    %eax,%esi
08899d95 +0x27:  mov    0x8(%ebp),%eax
08899d98 +0x2a:  mov    %eax,(%esp)
08899d9b +0x2d:  call   083942fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23d9c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23d9c
08899da0 +0x32:  mov    %esi,%eax
08899da2 +0x34:  mov    %ebx,%edx
08899da4 +0x36:  mov    %eax,(%esp)
08899da7 +0x39:  call   08ae3750 <_Unwind_Resume>
08899dac +0x3e:  add    $0x10,%esp
08899daf +0x41:  pop    %ebx
08899db0 +0x42:  pop    %esi
08899db1 +0x43:  pop    %ebp
08899db2 +0x44:  ret
08899db3 +0x45:  nop
```

## 反编译 C

```c
// advancealtar::TimeLine::TimeLine @ 0x8899d6e

/* advancealtar::TimeLine::TimeLine() */

void __thiscall advancealtar::TimeLine::TimeLine(TimeLine *this)

{
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::vector
            ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)this);
                    /* try { // try from 08899d8a to 08899d8e has its CatchHandler @ 08899d91 */
  TimeLineSummary::TimeLineSummary((TimeLineSummary *)(this + 0xc));
  return;
}
```
