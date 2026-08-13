# _ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser

`CMemoryCashManager::InsertCashMemorySetCharacterObject(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a1c4e` | `0x10c` | `0x8096adc` | `0x129` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x4c,%esp
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairISt17_Rb_tree_iteratorIS_IKjP11CCashObjectEEbEC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUser>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0xfc>
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x119>
 movl   $0x24,(%esp)
 call   <T> <_ZN11CCashObjectnwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObjectC1Ev>
-jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x55>
+jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x60>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectdlEPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x40(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x38(%ebp),%edx
+mov    -0x40(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN11CCashObject11SetCharacNoEj>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,-0x1c(%ebp)
 lea    -0x24(%ebp),%eax
-lea    -0x38(%ebp),%edx
+lea    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIjRP11CCashObjectESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP11CCashObjectEC1IjS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%edx
 lea    -0x34(%ebp),%eax
 lea    -0x2c(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairISt17_Rb_tree_iteratorIS_IKjP11CCashObjectEEbEaSEOS6_>
+movzbl -0x38(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0xf5>
-mov    -0x38(%ebp),%ebx
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x112>
+mov    -0x40(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0xee>
+je     <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x10b>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectdlEPv>
 mov    $0x0,%eax
-jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x101>
+jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x11e>
 mov    $0x1,%eax
-jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x101>
+jmp    <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser+0x11e>
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

/* CMemoryCashManager::InsertCashMemorySetCharacterObject(CUser*) */

undefined4 __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUser
          (CMemoryCashManager *this,CUser *param_1)

{
  char cVar1;
  CCashObject *this_00;
  uint uVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  pair local_38 [4];
  char local_34;
  pair<unsigned_int_const,CCashObject*> local_30 [8];
  uint local_28 [2];
  CCashObject *local_20 [4];
  
  pCVar4 = param_1;
  cVar1 = _ZN18CMemoryCashManager13IsRightObjectEP5CUser(this,param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    this_00 = CCashObject::operator_new((CCashObject *)0x24,(uint)pCVar4);
                    /* try { // try from 080a1c84 to 080a1c88 has its CatchHandler @ 080a1c8b */
    CCashObject::_ZN11CCashObjectC2Ev(this_00);
    uVar2 = CUser::GetUniqCharNo(param_1);
    CCashObject::_ZN11CCashObject11SetCharacNoEj(this_00,uVar2);
    local_20[0] = (CCashObject *)CUser::GetDBID(param_1);
    std::make_pair<unsigned_int,CCashObject*&>(local_28,local_20);
    std::pair<unsigned_int_const,CCashObject*>::pair<unsigned_int,CCashObject*>
              (local_30,(pair *)local_28);
    std::
    map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
    ::insert(local_38);
    if (local_34 == '\x01') {
      uVar3 = 1;
    }
    else {
      if (this_00 != (CCashObject *)0x0) {
        CCashObject::_ZN11CCashObjectD2Ev(this_00);
        CCashObject::operator_delete(this_00,this);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemoryCashManager.cpp](source/DNFServer/GameServer/Guild/MemoryCashManager.cpp)（约第 104 行）：

```cpp
int CMemoryCashManager::InsertCashMemorySetCharacterObject(CUser* user)
{
    std::pair<std::map<unsigned int, CCashObject*>::iterator, bool> r;
    CCashObject* obj;
    if (IsRightObject(user))
    {
        obj = new CCashObject;
        obj->SetCharacNo(user->GetUniqCharNo());
        r = m_cashObjects.insert(std::make_pair(user->GetDBID(), obj));
        if (!r.second)
        {
            delete obj;
            return 0;
        }
        return 1;
    }
    return 0;
}
```
