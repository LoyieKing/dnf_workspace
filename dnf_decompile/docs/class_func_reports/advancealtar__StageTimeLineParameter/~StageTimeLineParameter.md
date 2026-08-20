# ~StageTimeLineParameter

`_ZN12advancealtar22StageTimeLineParameterD1Ev`

`advancealtar::StageTimeLineParameter::~StageTimeLineParameter()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x08899e88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899e88  _ZN12advancealtar22StageTimeLineParameterD1Ev
#           advancealtar::StageTimeLineParameter::~StageTimeLineParameter()
# range [0x08899e88, 0x08899ef5]
08899e88 +0x00:  push   %ebp
08899e89 +0x01:  mov    %esp,%ebp
08899e8b +0x03:  push   %esi
08899e8c +0x04:  push   %ebx
08899e8d +0x05:  sub    $0x10,%esp
08899e90 +0x08:  mov    0x8(%ebp),%eax
08899e93 +0x0b:  add    $0x30,%eax
08899e96 +0x0e:  mov    %eax,(%esp)
08899e99 +0x11:  call   08899db4 <_ZN12advancealtar8TimeLineD1Ev>  ; advancealtar::TimeLine::~TimeLine()
08899e9e +0x16:  jmp    08899eb8 <+0x30>
08899ea0 +0x18:  mov    %edx,%ebx
08899ea2 +0x1a:  mov    %eax,%esi
08899ea4 +0x1c:  mov    0x8(%ebp),%eax
08899ea7 +0x1f:  add    $0x18,%eax
08899eaa +0x22:  mov    %eax,(%esp)
08899ead +0x25:  call   0889b9f8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xc1>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xc1
08899eb2 +0x2a:  mov    %esi,%eax
08899eb4 +0x2c:  mov    %ebx,%edx
08899eb6 +0x2e:  jmp    08899ec8 <+0x40>
08899eb8 +0x30:  mov    0x8(%ebp),%eax
08899ebb +0x33:  add    $0x18,%eax
08899ebe +0x36:  mov    %eax,(%esp)
08899ec1 +0x39:  call   0889b9f8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xc1>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xc1
08899ec6 +0x3e:  jmp    08899ee3 <+0x5b>
08899ec8 +0x40:  mov    %edx,%ebx
08899eca +0x42:  mov    %eax,%esi
08899ecc +0x44:  mov    0x8(%ebp),%eax
08899ecf +0x47:  mov    %eax,(%esp)
08899ed2 +0x4a:  call   0889b9e4 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xad>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xad
08899ed7 +0x4f:  mov    %esi,%eax
08899ed9 +0x51:  mov    %ebx,%edx
08899edb +0x53:  mov    %eax,(%esp)
08899ede +0x56:  call   08ae3750 <_Unwind_Resume>
08899ee3 +0x5b:  mov    0x8(%ebp),%eax
08899ee6 +0x5e:  mov    %eax,(%esp)
08899ee9 +0x61:  call   0889b9e4 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xad>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xad
08899eee +0x66:  add    $0x10,%esp
08899ef1 +0x69:  pop    %ebx
08899ef2 +0x6a:  pop    %esi
08899ef3 +0x6b:  pop    %ebp
08899ef4 +0x6c:  ret
08899ef5 +0x6d:  nop
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::~StageTimeLineParameter @ 0x8899e88

/* advancealtar::StageTimeLineParameter::~StageTimeLineParameter() */

void __thiscall
advancealtar::StageTimeLineParameter::~StageTimeLineParameter(StageTimeLineParameter *this)

{
                    /* try { // try from 08899e99 to 08899e9d has its CatchHandler @ 08899ea0 */
  TimeLine::~TimeLine((TimeLine *)(this + 0x30));
                    /* try { // try from 08899ec1 to 08899ec5 has its CatchHandler @ 08899ec8 */
  std::
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  ::~map((map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
          *)(this + 0x18));
  std::
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  ::~map((map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
          *)this);
  return;
}
```
