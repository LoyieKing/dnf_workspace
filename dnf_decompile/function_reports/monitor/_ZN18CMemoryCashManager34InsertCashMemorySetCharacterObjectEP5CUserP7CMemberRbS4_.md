# _ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_

`CMemoryCashManager::InsertCashMemorySetCharacterObject(CUser*, CMember*, bool&, bool&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a0cbc` | `0x1bc` | `0x8098130` | `0x1a8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,132 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xdc,%esp
-movb   $0x0,-0x39(%ebp)
-lea    -0x39(%ebp),%eax
+sub    $0xcc,%esp
+movb   $0x0,-0x29(%ebp)
+lea    -0x29(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x1ac>
+sete   %al
+test   %al,%al
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x51>
+mov    $0x0,%eax
+jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x19d>
 movl   $0xa8,(%esp)
 call   <T> <_ZN11CCashObjectnwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObjectC1Ev>
-jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x78>
+jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x83>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectdlEPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-mov    %eax,-0x40(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0x14(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x91>
+jne    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x9c>
 mov    0x18(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0xab>
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0xb6>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x40(%ebp),%edx
+mov    -0x30(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN11CCashObject11SetCharacNoEj>
 mov    0x18(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0xd8>
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0xe3>
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0xd8>
-mov    -0x40(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0xe3>
+mov    -0x30(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject15SetMemberObjectEP7CMember>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager16incMemberCashCntEv>
 mov    0x14(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x121>
-lea    -0xc0(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x12c>
+lea    -0xb8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser9GetBuddysEPP6CBuddy>
 mov    %eax,-0x1c(%ebp)
-mov    -0x40(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0xc0(%ebp),%edx
+lea    -0xb8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject15SetBuddysObjectEPP6CBuddyi>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager15incBuddyCashCntEv>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,-0x20(%ebp)
+lea    -0x30(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
-lea    -0x40(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x20(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIjRP11CCashObjectESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
-sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjP11CCashObjectEC1IjS2_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjP11CCashObjectEC1IjRS2_EEOT_OT0_>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
 lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%edx
+lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
 movzbl -0x34(%ebp),%eax
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x1a5>
-mov    -0x40(%ebp),%ebx
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x181>
+mov    $0x1,%eax
+jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x19d>
+mov    -0x30(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x19e>
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x198>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectdlEPv>
-mov    $0x0,%eax
-jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x1b1>
-mov    $0x1,%eax
-jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_+0x1b1>
 mov    $0x0,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::InsertCashMemorySetCharacterObject(CUser*, CMember*, bool&, bool&) */

undefined4 __thiscall
CMemoryCashManager::
_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_
          (CMemoryCashManager *this,CUser *param_1,CMember *param_2,bool *param_3,bool *param_4)

{
  char cVar1;
  CCashObject *pCVar2;
  uint uVar3;
  undefined4 uVar4;
  CUser *pCVar5;
  CMemoryCashManager *pCVar6;
  CBuddy *local_c4 [32];
  CCashObject *local_44;
  bool local_3d;
  pair local_3c [4];
  char local_38;
  pair<unsigned_int_const,CCashObject*> local_34 [8];
  uint local_2c [2];
  CCashObject *local_24;
  int local_20;
  
  local_3d = false;
  pCVar5 = param_1;
  cVar1 = _ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_
                    (this,param_1,param_2,param_3,param_4,&local_3d);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    pCVar2 = CCashObject::operator_new((CCashObject *)0xa8,(uint)pCVar5);
                    /* try { // try from 080a0d15 to 080a0d19 has its CatchHandler @ 080a0d1c */
    CCashObject::_ZN11CCashObjectC2Ev(pCVar2);
    local_44 = pCVar2;
    if ((*param_3 != false) || (*param_4 != false)) {
      uVar3 = CUser::GetUniqCharNo(param_1);
      CCashObject::SetCharacNo(local_44,uVar3);
    }
    if ((*param_4 != false) && (param_2 != (CMember *)0x0)) {
      CCashObject::SetMemberObject(local_44,param_2);
      incMemberCashCnt(this);
    }
    if (*param_3 != false) {
      local_20 = CUser::GetBuddys(param_1,local_c4);
      CCashObject::SetBuddysObject(local_44,local_c4,local_20);
      incBuddyCashCnt(this);
    }
    local_24 = (CCashObject *)CUser::GetDBID(param_1);
    std::make_pair<unsigned_int,CCashObject*&>(local_2c,&local_24);
    std::pair<unsigned_int_const,CCashObject*>::pair<unsigned_int,CCashObject*>
              (local_34,(pair *)local_2c);
    pCVar6 = this + 0x18;
    std::
    map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
    ::insert(local_3c);
    pCVar2 = local_44;
    if (local_38 == '\x01') {
      uVar4 = 1;
    }
    else {
      if (local_44 != (CCashObject *)0x0) {
        CCashObject::~CCashObject(local_44);
        CCashObject::operator_delete(pCVar2,pCVar6);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/CashObject.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddy.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFMember.h 等 299 个文件*
