# _ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii

`CPowerWarGuildInfo::RewardGuildPowerWarPoint(CGuildManager&, bool, int, int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa1ea` | `0x24a` | `0x80a119c` | `0x25c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,169 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x70,%esp
+add    $0xffffff80,%esp
 mov    0x10(%ebp),%eax
-mov    %al,-0x4c(%ebp)
+mov    %al,-0x5c(%ebp)
 mov    0x14(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x18(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x1c(%ebp),%eax
 mov    %eax,-0x2c(%ebp)
-mov    0x18(%ebp),%eax
+mov    0x20(%ebp),%eax
 mov    %eax,-0x28(%ebp)
-mov    0x1c(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    0x20(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP19STPowerWarGuildInfoSaIS1_EE4sizeEv>
-mov    %eax,%ebx
+mov    %eax,-0x1c(%ebp)
 movl   $0xec,0x8(%esp)
 movl   $&_ZZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiiiE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x1c(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,0x18(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x14(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Basic:%d, First:%d, Decrease:%d, MaxGrade:%d, DomainCount:%d",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x20e>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x220>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x1c(%ebp)
-cmpb   $0x0,-0x4c(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xda>
-mov    -0x2c(%ebp),%eax
-add    %eax,-0x1c(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x20(%ebp)
+cmpb   $0x0,-0x5c(%ebp)
+je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xde>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x18(%ebp),%eax
 mov    0x4(%eax),%eax
-add    %eax,-0x1c(%ebp)
-mov    -0x14(%ebp),%eax
+add    %eax,-0x20(%ebp)
+mov    -0x18(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x124>
-mov    -0x18(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-jge    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x124>
+je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x131>
 mov    -0x24(%ebp),%eax
-imul   -0x18(%ebp),%eax
-mov    -0x28(%ebp),%edx
-sub    %eax,%edx
-mov    %edx,%eax
+cmp    -0x28(%ebp),%eax
+jge    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x131>
+mov    -0x2c(%ebp),%eax
+imul   -0x24(%ebp),%eax
+mov    -0x30(%ebp),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 sar    $0x1f,%eax
 not    %eax
-and    %edx,%eax
+and    -0xc(%ebp),%eax
 mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %edx,0x8(%eax)
+mov    -0x18(%ebp),%eax
+mov    0x8(%eax),%eax
+add    %eax,-0x20(%ebp)
+mov    -0x18(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    %edx,0xc(%eax)
+mov    -0x18(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
-mov    %edx,0x8(%eax)
-mov    -0x14(%ebp),%eax
-mov    0x8(%eax),%eax
-add    %eax,-0x1c(%ebp)
-mov    -0x14(%ebp),%eax
-mov    -0x1c(%ebp),%edx
-mov    %edx,0xc(%eax)
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x171>
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16AddPowerWarPointEj>
-movl   $0x0,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x1ff>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x1ec>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv>
-mov    %eax,-0x48(%ebp)
-mov    -0x48(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x50(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x1ff>
-mov    -0x48(%ebp),%eax
-mov    -0x10(%ebp),%edx
+je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x211>
+mov    -0x50(%ebp),%eax
+mov    -0x14(%ebp),%edx
 mov    %edx,(%eax)
-mov    -0x48(%ebp),%eax
-mov    -0x14(%ebp),%edx
+mov    -0x50(%ebp),%eax
+mov    -0x18(%ebp),%edx
 mov    0xc(%edx),%edx
 mov    %edx,0x4(%eax)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIP21STDBSavePowerWarPointSaIS1_EE9push_backERKS1_>
-mov    -0x48(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    0x4(%eax),%esi
-mov    -0x48(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0x120,0x8(%esp)
 movl   $&_ZZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiiiE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Additional Save(GRADE:%d, Guild ID:%d, PowerWarPoint:%d)",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x18(%ebp)
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x211>
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16AddPowerWarPointEj>
+movl   $0x0,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+addl   $0x1,-0x24(%ebp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xb7>
+jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xbb>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::RewardGuildPowerWarPoint(CGuildManager&, bool, int, int, int, int) */

void __thiscall
CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii
          (CPowerWarGuildInfo *this,CGuildManager *param_1,bool param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  STDBSavePowerWarPoint *local_4c;
  __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
  local_48 [4];
  CMyFileLog local_44 [8];
  __normal_iterator local_3c [4];
  CMyFileLog local_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  CGuild *local_10;
  
  local_30 = param_3;
  local_2c = param_4;
  local_28 = param_5;
  local_24 = param_6;
  local_20 = 0;
  local_1c = 0;
  uVar3 = std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::size
                    ((vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>> *)
                     (this + 0x1c));
  CMyFileLog::CMyFileLog(local_44,"RewardGuildPowerWarPoint",0xec);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_44,"./log/PowerResult",
             "Basic:%d, First:%d, Decrease:%d, MaxGrade:%d, DomainCount:%d",local_30,local_2c,
             local_28,local_24,uVar3);
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::begin();
  while( true ) {
    std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::end();
    bVar2 = __gnu_cxx::operator!=(local_48,local_3c);
    if (!bVar2) break;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
                    ::operator*(local_48);
    local_18 = (undefined4 *)*piVar4;
    local_20 = 0;
    if (param_2) {
      local_20 = local_30;
    }
    local_20 = local_20 + local_18[1];
    if ((local_18[1] != 0) && (local_1c < local_24)) {
      uVar5 = local_2c - local_28 * local_1c;
      local_18[2] = ~((int)uVar5 >> 0x1f) & uVar5;
      local_20 = local_20 + local_18[2];
      local_18[3] = local_20;
    }
    local_14 = *local_18;
    local_10 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)param_1);
    if (local_10 == (CGuild *)0x0) {
      local_4c = (STDBSavePowerWarPoint *)CreateDBSavePowerWarPoint();
      if (local_4c != (STDBSavePowerWarPoint *)0x0) {
        *(undefined4 *)local_4c = local_14;
        *(undefined4 *)(local_4c + 4) = local_18[3];
        std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::push_back
                  ((vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>> *)
                   (this + 0x28),&local_4c);
        uVar3 = *(undefined4 *)(local_4c + 4);
        uVar1 = *(undefined4 *)local_4c;
        CMyFileLog::CMyFileLog(local_38,"RewardGuildPowerWarPoint",0x120);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/PowerResult",
                   "Additional Save(GRADE:%d, Guild ID:%d, PowerWarPoint:%d)",local_1c,uVar1,uVar3);
      }
    }
    else {
      CGuild::AddPowerWarPoint(local_10,local_20);
      CGuild::SendGuildInfoToMembers(local_10,false);
    }
    local_1c = local_1c + 1;
    __gnu_cxx::
    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
    ::operator++(local_48);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 280 个文件*
