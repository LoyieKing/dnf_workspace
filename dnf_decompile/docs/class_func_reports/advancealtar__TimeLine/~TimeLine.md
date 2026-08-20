# ~TimeLine

`_ZN12advancealtar8TimeLineD1Ev`

`advancealtar::TimeLine::~TimeLine()`

| 类 | 地址 |
|---|---|
| `advancealtar::TimeLine` | `0x08899db4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899db4  _ZN12advancealtar8TimeLineD1Ev
#           advancealtar::TimeLine::~TimeLine()
# range [0x08899db4, 0x08899df9]
08899db4 +0x00:  push   %ebp
08899db5 +0x01:  mov    %esp,%ebp
08899db7 +0x03:  push   %esi
08899db8 +0x04:  push   %ebx
08899db9 +0x05:  sub    $0x10,%esp
08899dbc +0x08:  mov    0x8(%ebp),%eax
08899dbf +0x0b:  add    $0xc,%eax
08899dc2 +0x0e:  mov    %eax,(%esp)
08899dc5 +0x11:  call   08899d38 <_ZN12advancealtar15TimeLineSummaryD1Ev>  ; advancealtar::TimeLineSummary::~TimeLineSummary()
08899dca +0x16:  jmp    08899de7 <+0x33>
08899dcc +0x18:  mov    %edx,%ebx
08899dce +0x1a:  mov    %eax,%esi
08899dd0 +0x1c:  mov    0x8(%ebp),%eax
08899dd3 +0x1f:  mov    %eax,(%esp)
08899dd6 +0x22:  call   083942fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23d9c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23d9c
08899ddb +0x27:  mov    %esi,%eax
08899ddd +0x29:  mov    %ebx,%edx
08899ddf +0x2b:  mov    %eax,(%esp)
08899de2 +0x2e:  call   08ae3750 <_Unwind_Resume>
08899de7 +0x33:  mov    0x8(%ebp),%eax
08899dea +0x36:  mov    %eax,(%esp)
08899ded +0x39:  call   083942fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23d9c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23d9c
08899df2 +0x3e:  add    $0x10,%esp
08899df5 +0x41:  pop    %ebx
08899df6 +0x42:  pop    %esi
08899df7 +0x43:  pop    %ebp
08899df8 +0x44:  ret
08899df9 +0x45:  nop
```

## 反编译 C

```c
// advancealtar::TimeLine::~TimeLine @ 0x8899db4

/* advancealtar::TimeLine::~TimeLine() */

void __thiscall advancealtar::TimeLine::~TimeLine(TimeLine *this)

{
                    /* try { // try from 08899dc5 to 08899dc9 has its CatchHandler @ 08899dcc */
  TimeLineSummary::~TimeLineSummary((TimeLineSummary *)(this + 0xc));
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::~vector
            ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)this);
  return;
}
```
