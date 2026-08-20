# getAchievementRewardData

`_ZNK12advancealtar15RewardParameter24getAchievementRewardDataEi`

`advancealtar::RewardParameter::getAchievementRewardData(int) const`

| 类 | 地址 |
|---|---|
| `advancealtar::RewardParameter` | `0x0889b544` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889b544  _ZNK12advancealtar15RewardParameter24getAchievementRewardDataEi
#           advancealtar::RewardParameter::getAchievementRewardData(int) const
# range [0x0889b544, 0x0889b5a7]
0889b544 +0x00:  push   %ebp
0889b545 +0x01:  mov    %esp,%ebp
0889b547 +0x03:  sub    $0x28,%esp
0889b54a +0x06:  mov    0x8(%ebp),%edx
0889b54d +0x09:  lea    -0x10(%ebp),%eax
0889b550 +0x0c:  lea    0xc(%ebp),%ecx
0889b553 +0x0f:  mov    %ecx,0x8(%esp)
0889b557 +0x13:  mov    %edx,0x4(%esp)
0889b55b +0x17:  mov    %eax,(%esp)
0889b55e +0x1a:  call   0889c640 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd09>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd09
0889b563 +0x1f:  sub    $0x4,%esp
0889b566 +0x22:  mov    0x8(%ebp),%edx
0889b569 +0x25:  lea    -0xc(%ebp),%eax
0889b56c +0x28:  mov    %edx,0x4(%esp)
0889b570 +0x2c:  mov    %eax,(%esp)
0889b573 +0x2f:  call   0889c66c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd35>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd35
0889b578 +0x34:  sub    $0x4,%esp
0889b57b +0x37:  lea    -0xc(%ebp),%eax
0889b57e +0x3a:  mov    %eax,0x4(%esp)
0889b582 +0x3e:  lea    -0x10(%ebp),%eax
0889b585 +0x41:  mov    %eax,(%esp)
0889b588 +0x44:  call   0889c692 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd5b>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd5b
0889b58d +0x49:  test   %al,%al
0889b58f +0x4b:  je     0889b598 <+0x54>
0889b591 +0x4d:  mov    $0x0,%eax
0889b596 +0x52:  jmp    0889b5a6 <+0x62>
0889b598 +0x54:  lea    -0x10(%ebp),%eax
0889b59b +0x57:  mov    %eax,(%esp)
0889b59e +0x5a:  call   0889c6a6 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd6f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd6f
0889b5a3 +0x5f:  add    $0x4,%eax
0889b5a6 +0x62:  leave
0889b5a7 +0x63:  ret
```

## 反编译 C

```c
// advancealtar::RewardParameter::getAchievementRewardData @ 0x889b544

/* advancealtar::RewardParameter::getAchievementRewardData(int) const */

int advancealtar::RewardParameter::getAchievementRewardData(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>> local_14 [4];
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  local_10 [12];
  
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::find((int *)local_14);
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
          operator==(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
            operator->(local_14);
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
```
