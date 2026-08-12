# _ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv

`village_attacked::CVillageAttackedManager::OnEndVillageAttacked()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a916e` | `0x147` | `0x80a7cbe` | `0x180` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,116 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x24,%esp
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x24(%eax),%eax
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x140>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x177>
 call   <T> <_Z10GetNowTimev>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 cmp    %eax,%edx
-jb     <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x8f>
+jb     <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0xaa>
 mov    0x8(%ebp),%eax
 movl   $0x1,0x30(%eax)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    &_ZN16village_attacked16REWARD_BUFF_TIMEE,%eax
-add    -0xc(%ebp),%eax
+add    -0x24(%ebp),%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked22CVillageAttackedRewardC1EjjPNS_23CVillageAttackedManagerE>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x89>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x20(%ebp)
+mov    -0x20(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0xeb>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x122>
 mov    0x8(%ebp),%eax
 movl   $0x2,0x30(%eax)
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    &_ZN16village_attacked19REWARD_PENALTY_TIMEE,%eax
-add    -0xc(%ebp),%eax
+add    -0x24(%ebp),%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 mov    0x8(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked22CVillageAttackedRewardC1EjjPNS_23CVillageAttackedManagerE>
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x103>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16GetTaskSchedulerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler7AddTaskEPNS_5CTaskE>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x24(%eax)
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager22SendVillageAttackedEndEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager19SendMaxHuntingPointEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager5ResetEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x141>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x178>
 nop
-add    $0x24,%esp
+add    $0x2c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::OnEndVillageAttacked() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv
          (CVillageAttackedManager *this)

{
  int iVar1;
  CVillageAttackedReward *pCVar2;
  CTaskScheduler *pCVar3;
  
  if (this[0x24] == (CVillageAttackedManager)0x1) {
    iVar1 = GetNowTime();
    if (*(uint *)(this + 0x1c) < *(uint *)(this + 0x20)) {
      *(undefined4 *)(this + 0x30) = 2;
      pCVar2 = operator_new(0x14);
      CVillageAttackedReward::
      _ZN16village_attacked22CVillageAttackedRewardC2EjjPNS_23CVillageAttackedManagerE
                (pCVar2,REWARD_PENALTY_TIME + iVar1,0,this);
      pCVar3 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
      CTaskScheduler::AddTask(pCVar3,(CTask *)pCVar2);
    }
    else {
      *(undefined4 *)(this + 0x30) = 1;
      pCVar2 = operator_new(0x14);
      CVillageAttackedReward::
      _ZN16village_attacked22CVillageAttackedRewardC2EjjPNS_23CVillageAttackedManagerE
                (pCVar2,REWARD_BUFF_TIME + iVar1,0,this);
      pCVar3 = (CTaskScheduler *)CApplication::GetTaskScheduler(*(CApplication **)this);
      CTaskScheduler::AddTask(pCVar3,(CTask *)pCVar2);
    }
    this[0x24] = (CVillageAttackedManager)0x0;
    _ZN16village_attacked23CVillageAttackedManager18SetRewardCloseTimeE28ENUM_VILLAGE_ATTACKED_REWARD
              (this,*(undefined4 *)(this + 0x30));
    SendVillageAttackedEnd(this);
    _ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv(this);
    _ZN16village_attacked23CVillageAttackedManager19SendMaxHuntingPointEv(this);
    Reset(this);
    _ZN16village_attacked23CVillageAttackedManager10OnScheduleEv(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 343 行）：

```cpp
void CVillageAttackedManager::OnEndVillageAttacked()
{
    if (!m_state24)
    {
        return;
    }
    int now = (int)GetNowTime();
    if ((unsigned int)m_field1c >= (unsigned int)m_field20)
    {
        m_field30 = 1;
        CVillageAttackedReward* task =
            new CVillageAttackedReward(REWARD_BUFF_TIME + now, 0, this);
        m_app->GetTaskScheduler()->AddTask(task);
    }
    else
    {
        m_field30 = 2;
        CVillageAttackedReward* task =
            new CVillageAttackedReward(REWARD_PENALTY_TIME + now, 0, this);
        m_app->GetTaskScheduler()->AddTask(task);
    }
    m_state24 = 0;
    SetRewardCloseTime((ENUM_VILLAGE_ATTACKED_REWARD)m_field30);
    SendVillageAttackedEnd();
    SendCharacRank();
    SendMaxHuntingPoint();
    Reset();
    OnSchedule();
}
```
