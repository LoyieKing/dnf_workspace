# RewardParameter

`_ZN12advancealtar15RewardParameterC1Ev`

`advancealtar::RewardParameter::RewardParameter()`

| 类 | 地址 |
|---|---|
| `advancealtar::RewardParameter` | `0x0889af74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889af74  _ZN12advancealtar15RewardParameterC1Ev
#           advancealtar::RewardParameter::RewardParameter()
# range [0x0889af74, 0x0889af87]
0889af74 +0x00:  push   %ebp
0889af75 +0x01:  mov    %esp,%ebp
0889af77 +0x03:  sub    $0x18,%esp
0889af7a +0x06:  mov    0x8(%ebp),%eax
0889af7d +0x09:  mov    %eax,(%esp)
0889af80 +0x0c:  call   0889c41a <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xae3>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xae3
0889af85 +0x11:  leave
0889af86 +0x12:  ret
0889af87 +0x13:  nop
```

## 反编译 C

```c
// advancealtar::RewardParameter::RewardParameter @ 0x889af74

/* advancealtar::RewardParameter::RewardParameter() */

void __thiscall advancealtar::RewardParameter::RewardParameter(RewardParameter *this)

{
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::map((map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
         *)this);
  return;
}
```
