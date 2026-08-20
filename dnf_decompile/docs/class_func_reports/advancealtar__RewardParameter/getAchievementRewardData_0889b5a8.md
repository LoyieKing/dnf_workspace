# getAchievementRewardData

`_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi`

`advancealtar::RewardParameter::getAchievementRewardData(advancealtar::StageDifficulty::T, int) const`

| 类 | 地址 |
|---|---|
| `advancealtar::RewardParameter` | `0x0889b5a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889b5a8  _ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi
#           advancealtar::RewardParameter::getAchievementRewardData(advancealtar::StageDifficulty::T, int) const
# range [0x0889b5a8, 0x0889b661]
0889b5a8 +0x00:  push   %ebp
0889b5a9 +0x01:  mov    %esp,%ebp
0889b5ab +0x03:  sub    $0x28,%esp
0889b5ae +0x06:  mov    0x8(%ebp),%edx
0889b5b1 +0x09:  lea    -0x14(%ebp),%eax
0889b5b4 +0x0c:  mov    %edx,0x4(%esp)
0889b5b8 +0x10:  mov    %eax,(%esp)
0889b5bb +0x13:  call   0889c6b4 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd7d>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd7d
0889b5c0 +0x18:  sub    $0x4,%esp
0889b5c3 +0x1b:  jmp    0889b62c <+0x84>
0889b5c5 +0x1d:  lea    -0x14(%ebp),%eax
0889b5c8 +0x20:  mov    %eax,(%esp)
0889b5cb +0x23:  call   0889c6a6 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd6f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd6f
0889b5d0 +0x28:  mov    0x8(%eax),%eax
0889b5d3 +0x2b:  mov    %eax,%edx
0889b5d5 +0x2d:  mov    0xc(%ebp),%eax
0889b5d8 +0x30:  cmp    %eax,%edx
0889b5da +0x32:  jne    0889b5f6 <+0x4e>
0889b5dc +0x34:  lea    -0x14(%ebp),%eax
0889b5df +0x37:  mov    %eax,(%esp)
0889b5e2 +0x3a:  call   0889c6a6 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd6f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd6f
0889b5e7 +0x3f:  mov    0xc(%eax),%eax
0889b5ea +0x42:  cmp    0x10(%ebp),%eax
0889b5ed +0x45:  jne    0889b5f6 <+0x4e>
0889b5ef +0x47:  mov    $0x1,%eax
0889b5f4 +0x4c:  jmp    0889b5fb <+0x53>
0889b5f6 +0x4e:  mov    $0x0,%eax
0889b5fb +0x53:  test   %al,%al
0889b5fd +0x55:  je     0889b60f <+0x67>
0889b5ff +0x57:  lea    -0x14(%ebp),%eax
0889b602 +0x5a:  mov    %eax,(%esp)
0889b605 +0x5d:  call   0889c6a6 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd6f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd6f
0889b60a +0x62:  add    $0x4,%eax
0889b60d +0x65:  jmp    0889b660 <+0xb8>
0889b60f +0x67:  lea    -0xc(%ebp),%eax
0889b612 +0x6a:  movl   $0x0,0x8(%esp)
0889b61a +0x72:  lea    -0x14(%ebp),%edx
0889b61d +0x75:  mov    %edx,0x4(%esp)
0889b621 +0x79:  mov    %eax,(%esp)
0889b624 +0x7c:  call   0889c6ee <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xdb7>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xdb7
0889b629 +0x81:  sub    $0x4,%esp
0889b62c +0x84:  mov    0x8(%ebp),%edx
0889b62f +0x87:  lea    -0x10(%ebp),%eax
0889b632 +0x8a:  mov    %edx,0x4(%esp)
0889b636 +0x8e:  mov    %eax,(%esp)
0889b639 +0x91:  call   0889c66c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xd35>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xd35
0889b63e +0x96:  sub    $0x4,%esp
0889b641 +0x99:  lea    -0x10(%ebp),%eax
0889b644 +0x9c:  mov    %eax,0x4(%esp)
0889b648 +0xa0:  lea    -0x14(%ebp),%eax
0889b64b +0xa3:  mov    %eax,(%esp)
0889b64e +0xa6:  call   0889c6da <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xda3>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xda3
0889b653 +0xab:  test   %al,%al
0889b655 +0xad:  jne    0889b5c5 <+0x1d>
0889b65b +0xb3:  mov    $0x0,%eax
0889b660 +0xb8:  leave
0889b661 +0xb9:  ret
```

## 反编译 C

```c
// advancealtar::RewardParameter::getAchievementRewardData @ 0x889b5a8

/* advancealtar::RewardParameter::getAchievementRewardData(advancealtar::StageDifficulty::T, int)
   const */

int __thiscall
advancealtar::RewardParameter::getAchievementRewardData(undefined4 this,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  local_18 [4];
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  local_14 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>> local_10 [12];
  
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
    ::end(local_14);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                        *)local_18,(_Rb_tree_const_iterator *)local_14);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                        *)local_18);
    if ((*(int *)(iVar3 + 8) == param_2) &&
       (iVar3 = std::
                _Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
                operator->((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                            *)local_18), *(int *)(iVar3 + 0xc) == param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
    operator++(local_10,(int)local_18);
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
          operator->((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                      *)local_18);
  return iVar3 + 4;
}
```
