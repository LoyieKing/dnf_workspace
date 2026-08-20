# StageTimeLineParameter

`_ZN12advancealtar22StageTimeLineParameterC1Ev`

`advancealtar::StageTimeLineParameter::StageTimeLineParameter()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x08899e1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899e1c  _ZN12advancealtar22StageTimeLineParameterC1Ev
#           advancealtar::StageTimeLineParameter::StageTimeLineParameter()
# range [0x08899e1c, 0x08899e87]
08899e1c +0x00:  push   %ebp
08899e1d +0x01:  mov    %esp,%ebp
08899e1f +0x03:  push   %esi
08899e20 +0x04:  push   %ebx
08899e21 +0x05:  sub    $0x10,%esp
08899e24 +0x08:  mov    0x8(%ebp),%eax
08899e27 +0x0b:  mov    %eax,(%esp)
08899e2a +0x0e:  call   0889bdc2 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x48b>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x48b
08899e2f +0x13:  mov    0x8(%ebp),%eax
08899e32 +0x16:  add    $0x18,%eax
08899e35 +0x19:  mov    %eax,(%esp)
08899e38 +0x1c:  call   0889be3c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x505>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x505
08899e3d +0x21:  mov    0x8(%ebp),%eax
08899e40 +0x24:  add    $0x30,%eax
08899e43 +0x27:  mov    %eax,(%esp)
08899e46 +0x2a:  call   08899d6e <_ZN12advancealtar8TimeLineC1Ev>  ; advancealtar::TimeLine::TimeLine()
08899e4b +0x2f:  jmp    08899e80 <+0x64>
08899e4d +0x31:  mov    %edx,%ebx
08899e4f +0x33:  mov    %eax,%esi
08899e51 +0x35:  mov    0x8(%ebp),%eax
08899e54 +0x38:  add    $0x18,%eax
08899e57 +0x3b:  mov    %eax,(%esp)
08899e5a +0x3e:  call   0889b9f8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xc1>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xc1
08899e5f +0x43:  mov    %esi,%eax
08899e61 +0x45:  mov    %ebx,%edx
08899e63 +0x47:  jmp    08899e65 <+0x49>
08899e65 +0x49:  mov    %edx,%ebx
08899e67 +0x4b:  mov    %eax,%esi
08899e69 +0x4d:  mov    0x8(%ebp),%eax
08899e6c +0x50:  mov    %eax,(%esp)
08899e6f +0x53:  call   0889b9e4 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xad>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xad
08899e74 +0x58:  mov    %esi,%eax
08899e76 +0x5a:  mov    %ebx,%edx
08899e78 +0x5c:  mov    %eax,(%esp)
08899e7b +0x5f:  call   08ae3750 <_Unwind_Resume>
08899e80 +0x64:  add    $0x10,%esp
08899e83 +0x67:  pop    %ebx
08899e84 +0x68:  pop    %esi
08899e85 +0x69:  pop    %ebp
08899e86 +0x6a:  ret
08899e87 +0x6b:  nop
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::StageTimeLineParameter @ 0x8899e1c

/* advancealtar::StageTimeLineParameter::StageTimeLineParameter() */

void __thiscall
advancealtar::StageTimeLineParameter::StageTimeLineParameter(StageTimeLineParameter *this)

{
  std::
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  ::map((map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
         *)this);
                    /* try { // try from 08899e38 to 08899e3c has its CatchHandler @ 08899e65 */
  std::
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  ::map((map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
         *)(this + 0x18));
                    /* try { // try from 08899e46 to 08899e4a has its CatchHandler @ 08899e4d */
  TimeLine::TimeLine((TimeLine *)(this + 0x30));
  return;
}
```
