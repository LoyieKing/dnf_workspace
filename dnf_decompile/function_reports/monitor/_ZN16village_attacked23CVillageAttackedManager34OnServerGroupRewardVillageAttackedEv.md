# _ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv

`village_attacked::CVillageAttackedManager::OnServerGroupRewardVillageAttacked()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a931c` | `0x258` | `0x80a8250` | `0x17a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,194 +1,113 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0xac,%esp
-mov    %esp,%eax
-mov    %eax,%edi
-lea    -0x43(%ebp),%eax
+sub    $0xa0,%esp
+lea    -0x1b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_DB_VillageAttackedRankC1Ev>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x39(%ebp)
+mov    %al,-0x11(%ebp)
 call   <T> <_Z10GetNowTimev>
-mov    %eax,-0x48(%ebp)
-lea    -0x48(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x20(%ebp)
-mov    &_ZN16village_attacked19MAX_SCHEDULER_COUNTE,%eax
-lea    -0x1(%eax),%ecx
-mov    %ecx,-0x28(%ebp)
-mov    %ecx,%eax
-mov    $0x0,%edx
-mov    %eax,%ebx
-and    $0xff,%bh
-mov    %edx,%esi
-and    $0xf,%esi
-mov    %ebx,%eax
-mov    %esi,%edx
-add    $0x1,%eax
-adc    $0x0,%edx
-mov    %eax,%ebx
-and    $0xff,%bh
-mov    %ebx,-0x50(%ebp)
-mov    %edx,%ebx
-and    $0xf,%ebx
-mov    %ebx,-0x4c(%ebp)
-mov    -0x50(%ebp),%eax
-mov    -0x4c(%ebp),%edx
-shld   $0x5,%eax,%edx
-shl    $0x5,%eax
-mov    %eax,%ebx
-and    $0xff,%bh
-mov    %ebx,-0x58(%ebp)
-mov    %edx,%ebx
-and    $0xf,%ebx
-mov    %ebx,-0x54(%ebp)
-mov    -0x58(%ebp),%eax
-mov    -0x54(%ebp),%edx
-mov    %ecx,%eax
-mov    $0x0,%edx
-mov    %eax,%ebx
-and    $0xff,%bh
-mov    %ebx,-0x60(%ebp)
-mov    %edx,%ebx
-and    $0xf,%ebx
-mov    %ebx,-0x5c(%ebp)
-mov    -0x60(%ebp),%eax
-mov    -0x5c(%ebp),%edx
-add    $0x1,%eax
-adc    $0x0,%edx
-mov    %eax,%ebx
-and    $0xff,%bh
-mov    %ebx,-0x68(%ebp)
-mov    %edx,%ebx
-and    $0xf,%ebx
-mov    %ebx,-0x64(%ebp)
-mov    -0x68(%ebp),%eax
-mov    -0x64(%ebp),%edx
-shld   $0x5,%eax,%edx
-shl    $0x5,%eax
-mov    %eax,%ebx
-and    $0xff,%bh
-mov    %ebx,-0x70(%ebp)
-mov    %edx,%ebx
-and    $0xf,%ebx
-mov    %ebx,-0x6c(%ebp)
-mov    -0x70(%ebp),%eax
-mov    -0x6c(%ebp),%edx
-mov    %ecx,%eax
-add    $0x1,%eax
-shl    $0x2,%eax
-add    $0xf,%eax
-add    $0xf,%eax
-shr    $0x4,%eax
-shl    $0x4,%eax
-sub    %eax,%esp
-lea    0x38(%esp),%eax
-add    $0xf,%eax
-shr    $0x4,%eax
-shl    $0x4,%eax
-mov    %eax,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv+0x1c8>
-mov    -0x1c(%ebp),%ebx
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv+0xee>
+mov    -0xc(%ebp),%ebx
+mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    $0x1,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,8),%esi
-mov    -0x1c(%ebp),%edx
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%esi
+mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    %eax,%eax
 add    $0x1,%eax
 mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ecx
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE(%eax),%eax
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%eax
 mov    %esi,0x34(%esp)
 mov    %ecx,0x30(%esp)
 mov    %eax,0x2c(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%edx
 mov    %edx,(%esp)
 mov    0x4(%eax),%edx
 mov    %edx,0x4(%esp)
 mov    0x8(%eax),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%eax),%edx
 mov    %edx,0xc(%esp)
 mov    0x10(%eax),%edx
 mov    %edx,0x10(%esp)
 mov    0x14(%eax),%edx
 mov    %edx,0x14(%esp)
 mov    0x18(%eax),%edx
 mov    %edx,0x18(%esp)
 mov    0x1c(%eax),%edx
 mov    %edx,0x1c(%esp)
 mov    0x20(%eax),%edx
 mov    %edx,0x20(%esp)
 mov    0x24(%eax),%edx
 mov    %edx,0x24(%esp)
 mov    0x28(%eax),%eax
 mov    %eax,0x28(%esp)
 call   <T> <_Z15GetPrevSchedule2tmiii>
-mov    -0x24(%ebp),%edx
-mov    %eax,(%edx,%ebx,4)
-addl   $0x1,-0x1c(%ebp)
+mov    %eax,-0x68(%ebp,%ebx,4)
+addl   $0x1,-0xc(%ebp)
 mov    &_ZN16village_attacked19MAX_SCHEDULER_COUNTE,%eax
-cmp    %eax,-0x1c(%ebp)
+cmp    %eax,-0xc(%ebp)
 setl   %al
 test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv+0x122>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv+0x48>
 mov    &_ZN16village_attacked19MAX_SCHEDULER_COUNTE,%edx
+lea    -0x68(%ebp),%eax
 shl    $0x2,%edx
-lea    (%eax,%edx,1),%edx
-mov    -0x24(%ebp),%eax
+add    %edx,%eax
 movl   $&_Z11compareTimeRKiS0_,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIPiPFbRKiS2_EEvT_S5_T0_>
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x2c(%ebp)
+lea    -0x1b(%ebp),%eax
+movzbl -0x11(%ebp),%edx
+mov    %dl,0xa(%eax)
+lea    -0x1b(%ebp),%eax
+mov    -0x68(%ebp),%edx
+mov    %edx,0xb(%eax)
+lea    -0x1b(%ebp),%eax
+mov    -0x68(%ebp),%edx
+mov    %edx,0xf(%eax)
+lea    -0x1b(%ebp),%eax
+mov    -0x64(%ebp),%edx
+mov    %edx,0x13(%eax)
+lea    -0x1b(%ebp),%eax
+mov    -0x64(%ebp),%edx
+mov    %edx,0x17(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x43(%ebp),%edx
+lea    -0x1b(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv+0x24b>
-mov    %edi,%esp
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    %edi,%esp
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
+add    $0xa0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::OnServerGroupRewardVillageAttacked() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv
          (CVillageAttackedManager *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  tm *ptVar5;
  int iVar6;
  undefined4 uVar7;
  int iStackY_c0;
  long alStack_98 [2];
  int aiStack_90 [8];
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  time_t local_4c;
  Packet_DB_VillageAttackedRank local_47 [10];
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 *local_28;
  tm *local_24;
  int local_20;
  
  iStackY_c0 = 0x80a9337;
  Packet_DB_VillageAttackedRank::Packet_DB_VillageAttackedRank(local_47);
                    /* try { // try from 080a933f to 080a955a has its CatchHandler @ 080a955d */
  iStackY_c0 = 0x80a9344;
  local_3d = CApplication::Get_ServerGroup(*(CApplication **)this);
  iStackY_c0 = 0x80a934c;
  local_4c = GetNowTime();
  iStackY_c0 = 0x80a935a;
  local_24 = localtime(&local_4c);
  local_2c = MAX_SCHEDULER_COUNT - 1;
  local_54 = MAX_SCHEDULER_COUNT;
  local_50 = (uint)(0xfffffffe < local_2c);
  local_5c = MAX_SCHEDULER_COUNT << 5;
  local_58 = MAX_SCHEDULER_COUNT >> 0x1b & 0xf;
  local_64 = local_2c;
  local_60 = 0;
  local_6c = MAX_SCHEDULER_COUNT;
  local_68 = (uint)(0xfffffffe < local_2c);
  aiStack_90[7] = MAX_SCHEDULER_COUNT << 5;
  local_70 = MAX_SCHEDULER_COUNT >> 0x1b & 0xf;
  iVar3 = -(MAX_SCHEDULER_COUNT * 4 + 0x1e & 0xfffffff0);
  local_28 = (undefined4 *)((int)aiStack_90 + iVar3 + 0x10);
  for (local_20 = 0; iVar6 = local_20, puVar4 = local_28, local_20 < (int)MAX_SCHEDULER_COUNT;
      local_20 = local_20 + 1) {
    uVar7 = (&village_attacked_scheduler)[local_20 * 6 + 1];
    uVar2 = (&village_attacked_scheduler)[local_20 * 6];
    *(undefined4 *)((int)aiStack_90 + iVar3 + 8) =
         (&village_attacked_scheduler)[(local_20 * 3 + 1) * 2];
    *(undefined4 *)((int)aiStack_90 + iVar3 + 4) = uVar7;
    *(undefined4 *)((int)aiStack_90 + iVar3) = uVar2;
    ptVar5 = local_24;
    *(int *)(&stack0xffffff44 + iVar3) = local_24->tm_sec;
    *(int *)(&stack0xffffff48 + iVar3) = ptVar5->tm_min;
    *(int *)(&stack0xffffff4c + iVar3) = ptVar5->tm_hour;
    *(int *)(&stack0xffffff50 + iVar3) = ptVar5->tm_mday;
    *(int *)(&stack0xffffff54 + iVar3) = ptVar5->tm_mon;
    *(int *)(&stack0xffffff58 + iVar3) = ptVar5->tm_year;
    *(int *)(&stack0xffffff5c + iVar3) = ptVar5->tm_wday;
    *(int *)(&stack0xffffff60 + iVar3) = ptVar5->tm_yday;
    *(int *)(&stack0xffffff64 + iVar3) = ptVar5->tm_isdst;
    *(long *)((int)alStack_98 + iVar3) = ptVar5->tm_gmtoff;
    *(char **)((int)alStack_98 + iVar3 + 4) = ptVar5->tm_zone;
    *(undefined4 *)((int)&iStackY_c0 + iVar3) = 0x80a94da;
    uVar7 = GetPrevSchedule(*(tm *)(&stack0xffffff44 + iVar3),*(int *)((int)aiStack_90 + iVar3),
                            *(int *)((int)aiStack_90 + iVar3 + 4),
                            *(int *)((int)aiStack_90 + iVar3 + 8));
    local_28[iVar6] = uVar7;
  }
  puVar1 = local_28 + MAX_SCHEDULER_COUNT;
  *(code **)(&stack0xffffff4c + iVar3) = compareTime;
  *(undefined4 **)(&stack0xffffff48 + iVar3) = puVar1;
  *(undefined4 **)(&stack0xffffff44 + iVar3) = puVar4;
  *(undefined4 *)((int)&iStackY_c0 + iVar3) = 0x80a951d;
  std::sort<int*,bool(*)(int_const&,int_const&)>
            (*(int **)(&stack0xffffff44 + iVar3),*(int **)(&stack0xffffff48 + iVar3),
             *(_func_bool_int_ptr_int_ptr **)(&stack0xffffff4c + iVar3));
  local_3c = *local_28;
  local_38 = *local_28;
  local_34 = local_28[1];
  local_30 = local_28[1];
  *(undefined4 *)(&stack0xffffff44 + iVar3) = *(undefined4 *)this;
  *(undefined4 *)((int)&iStackY_c0 + iVar3) = 0x80a954c;
  uVar7 = CApplication::Get_ServerHandler(*(CApplication **)(&stack0xffffff44 + iVar3));
  *(Packet_DB_VillageAttackedRank **)(&stack0xffffff48 + iVar3) = local_47;
  *(undefined4 *)(&stack0xffffff44 + iVar3) = uVar7;
  *(undefined4 *)((int)&iStackY_c0 + iVar3) = 0x80a955b;
  CServerHandler::SendToDB
            (*(CServerHandler **)(&stack0xffffff44 + iVar3),
             *(PacketHeader **)(&stack0xffffff48 + iVar3));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 488 行）：

```cpp
void CVillageAttackedManager::OnServerGroupRewardVillageAttacked()
{
    Packet_DB_VillageAttackedRank pkt;
    unsigned char group = m_app->Get_ServerGroup();
    time_t now = GetNowTime();
    tm* pt = localtime(&now);
    int times[18];
    for (int i = 0; i < MAX_SCHEDULER_COUNT; i++)
    {
        times[i] = GetPrevSchedule(*pt, village_attacked_scheduler[i * 6],
                                   village_attacked_scheduler[i * 6 + 1],
                                   village_attacked_scheduler[i * 6 + 2]);
    }
    std::sort(&times[0], &times[MAX_SCHEDULER_COUNT], compareTime);
    ((RA_S8<10>*)&pkt)->v = (char)group;
    ((RA_INT<11>*)&pkt)->v = times[0];
    ((RA_INT<15>*)&pkt)->v = times[0];
    ((RA_INT<19>*)&pkt)->v = times[1];
    ((RA_INT<23>*)&pkt)->v = times[1];
    m_app->Get_ServerHandler()->SendToDB(&pkt);
}
```
