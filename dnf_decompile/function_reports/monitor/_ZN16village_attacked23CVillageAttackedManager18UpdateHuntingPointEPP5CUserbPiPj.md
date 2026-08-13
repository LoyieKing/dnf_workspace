# _ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj

`village_attacked::CVillageAttackedManager::UpdateHuntingPoint(CUser**, bool, int*, unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a9904` | `0x211` | `0x80a86aa` | `0x1f5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,162 +1,151 @@
-push   %ebp
-mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x70,%esp
-mov    0x10(%ebp),%eax
-mov    %al,-0x4c(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x24(%eax),%eax
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x206>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1eb>
 movl   $0x0,-0x18(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1c5>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1ac>
 mov    -0x18(%ebp),%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1c0>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1a8>
 movl   $0x0,-0x14(%ebp)
 mov    -0x18(%ebp),%eax
 shl    $0x2,%eax
 add    0x18(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0xa3>
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0xd9>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16village_attacked14stHuntingPointC1Ev>
+movl   $0x0,-0x3c(%ebp)
+movl   $0x0,-0x38(%ebp)
 cmpb   $0x0,-0x4c(%ebp)
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x7e>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x90>
+mov    -0x3c(%ebp),%eax
+add    $0x1,%eax
+mov    %eax,-0x3c(%ebp)
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x99>
+mov    -0x38(%ebp),%eax
+add    $0x1,%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x18(%ebp),%eax
+shl    $0x2,%eax
+add    0x18(%ebp),%eax
+lea    -0x3c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIKjN16village_attacked14stHuntingPointEEC1IRjRS2_EEOT_OT0_>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%ecx
+lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
+sub    $0x4,%esp
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x10e>
+cmpb   $0x0,-0x4c(%ebp)
+je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0xee>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %edx,(%eax)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x8d>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0xfd>
 mov    -0x10(%ebp),%eax
 mov    0x4(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %edx,0x4(%eax)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    0x4(%eax),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x124>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16village_attacked14stHuntingPointC1Ev>
 cmpb   $0x0,-0x4c(%ebp)
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0xbf>
-mov    -0x48(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0x48(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0xc8>
-mov    -0x44(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0x44(%ebp)
-movl   $0x1,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-add    0x18(%ebp),%edx
-lea    -0x2c(%ebp),%eax
-lea    -0x48(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjRN16village_attacked14stHuntingPointEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
-sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjN16village_attacked14stHuntingPointEEC1IjS2_EEOS_IT_T0_E>
-mov    0x8(%ebp),%eax
-lea    0x4(%eax),%ecx
-lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
-sub    $0x4,%esp
-cmpb   $0x0,-0x4c(%ebp)
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1c1>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1a8>
 mov    -0x18(%ebp),%eax
 shl    $0x2,%eax
 add    0x18(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    -0x18(%ebp),%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager28SendVillageAttackedRewardJpnEP5CUseri>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%esi
 mov    -0x18(%ebp),%eax
 shl    $0x2,%eax
 add    0x18(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0x3ae,0x8(%esp)
-movl   $&_ZZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPjE12__FUNCTION__,0x4(%esp)
+movl   $"UpdateHuntingPoint",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Send Success Count [charac:%u][count:%d]",0x8(%esp)
 movl   $"./log/village",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1c1>
-nop
 addl   $0x1,-0x18(%ebp)
 cmpl   $0x3,-0x18(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x2c>
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x29>
 cmpb   $0x0,-0x4c(%ebp)
-je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1e9>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1d0>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x207>
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x1eb>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager11SendMinTimeEv>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj+0x207>
-nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
+nop
+push   %ebp
+mov    %esp,%ebp
+push   %esi
+push   %ebx
+sub    $0x2090,%esp
+movb   $0x0,-0x19(%ebp)
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::UpdateHuntingPoint(CUser**, bool, int*, unsigned int*)
    */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager18UpdateHuntingPointEPP5CUserbPiPj
          (CVillageAttackedManager *this,CUser **param_1,bool param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int local_4c;
  int local_48;
  pair local_44 [8];
  pair<unsigned_int_const,village_attacked::stHuntingPoint> local_3c [12];
  uint local_30 [3];
  CMyFileLog local_24 [8];
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  
  if (this[0x24] == (CVillageAttackedManager)0x1) {
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      if (param_1[local_1c] != (CUser *)0x0) {
        local_18 = 0;
        local_14 = (int *)_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj
                                    ((uint)this);
        if (local_14 == (int *)0x0) {
          stHuntingPoint::stHuntingPoint((stHuntingPoint *)&local_4c);
          if (param_2) {
            local_4c = local_4c + 1;
          }
          else {
            local_48 = local_48 + 1;
          }
          local_18 = 1;
          std::make_pair<unsigned_int&,village_attacked::stHuntingPoint&>
                    (local_30,(stHuntingPoint *)(param_4 + local_1c));
          std::pair<unsigned_int_const,village_attacked::stHuntingPoint>::
          pair<unsigned_int,village_attacked::stHuntingPoint>(local_3c,(pair *)local_30);
          std::
          map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
          ::insert(local_44);
        }
        else {
          if (param_2) {
            *local_14 = *local_14 + 1;
          }
          else {
            local_14[1] = local_14[1] + 1;
          }
          local_18 = *local_14 + local_14[1];
        }
        if (param_2) {
          local_10 = (int *)_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj
                                      ((uint)this);
          SendVillageAttackedRewardJpn(this,param_1[local_1c],*local_10);
          iVar1 = *local_10;
          uVar2 = param_4[local_1c];
          CMyFileLog::CMyFileLog(local_24,"UpdateHuntingPoint",0x3ae);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_24,"./log/village","Send Success Count [charac:%u][count:%d]",uVar2,iVar1
                    );
        }
      }
    }
    if (param_2) {
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x20)) {
      _ZN16village_attacked23CVillageAttackedManager11SendMinTimeEv(this);
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h 等 299 个文件*
