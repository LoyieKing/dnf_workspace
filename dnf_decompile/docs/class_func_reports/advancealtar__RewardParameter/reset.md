# reset

`_ZN12advancealtar15RewardParameter5resetEv`

`advancealtar::RewardParameter::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::RewardParameter` | `0x0889af9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889af9c  _ZN12advancealtar15RewardParameter5resetEv
#           advancealtar::RewardParameter::reset()
# range [0x0889af9c, 0x0889afaf]
0889af9c +0x00:  push   %ebp
0889af9d +0x01:  mov    %esp,%ebp
0889af9f +0x03:  sub    $0x18,%esp
0889afa2 +0x06:  mov    0x8(%ebp),%eax
0889afa5 +0x09:  mov    %eax,(%esp)
0889afa8 +0x0c:  call   0889c494 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xb5d>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xb5d
0889afad +0x11:  leave
0889afae +0x12:  ret
0889afaf +0x13:  nop
```

## 反编译 C

```c
// advancealtar::RewardParameter::reset @ 0x889af9c

/* advancealtar::RewardParameter::reset() */

void __thiscall advancealtar::RewardParameter::reset(RewardParameter *this)

{
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::clear((map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
           *)this);
  return;
}
```
