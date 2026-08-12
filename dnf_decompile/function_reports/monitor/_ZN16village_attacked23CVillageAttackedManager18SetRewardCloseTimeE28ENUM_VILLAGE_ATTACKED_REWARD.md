# _ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD

`village_attacked::CVillageAttackedManager::SetRewardCloseTime(ENUM_VILLAGE_ATTACKED_REWARD)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a9758` | `0x4f` | `0x80a793e` | `0x4a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x8,%esp
-mov    0xc(%ebp),%eax
-cmp    $0x1,%eax
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x15>
-cmp    $0x2,%eax
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x2c>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x43>
+cmpl   $0x1,0xc(%ebp)
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x22>
 call   <T> <_Z10GetNowTimev>
-mov    &_ZN16village_attacked16REWARD_BUFF_TIMEE,%edx
-add    %edx,%eax
 mov    %eax,%edx
+mov    &_ZN16village_attacked16REWARD_BUFF_TIMEE,%eax
+add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x34(%eax)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x4d>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x48>
+cmpl   $0x2,0xc(%ebp)
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x3e>
 call   <T> <_Z10GetNowTimev>
-mov    &_ZN16village_attacked19REWARD_PENALTY_TIMEE,%edx
-add    %edx,%eax
 mov    %eax,%edx
+mov    &_ZN16village_attacked19REWARD_PENALTY_TIMEE,%eax
+add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x34(%eax)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x4d>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD+0x48>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x34(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::SetRewardCloseTime(ENUM_VILLAGE_ATTACKED_REWARD) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD
          (CVillageAttackedManager *this,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = GetNowTime();
    *(int *)(this + 0x34) = iVar1 + REWARD_BUFF_TIME;
  }
  else if (param_2 == 2) {
    iVar1 = GetNowTime();
    *(int *)(this + 0x34) = iVar1 + REWARD_PENALTY_TIME;
  }
  else {
    *(undefined4 *)(this + 0x34) = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 225 行）：

```cpp
void CVillageAttackedManager::SetRewardCloseTime(ENUM_VILLAGE_ATTACKED_REWARD rewardType)
{
    if (rewardType == ENUM_VILLAGE_ATTACKED_REWARD_BUFF)
    {
        m_field34 = (int)GetNowTime() + REWARD_BUFF_TIME;
    }
    else if (rewardType == ENUM_VILLAGE_ATTACKED_REWARD_PENALTY)
    {
        m_field34 = (int)GetNowTime() + REWARD_PENALTY_TIME;
    }
    else
    {
        m_field34 = 0;
    }
}
```
