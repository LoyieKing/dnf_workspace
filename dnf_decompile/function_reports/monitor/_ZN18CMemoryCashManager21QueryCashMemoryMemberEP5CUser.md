# _ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser

`CMemoryCashManager::QueryCashMemoryMember(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a127a` | `0x293` | `0x80976ca` | `0x289` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,191 +1,188 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
+movb   $0x0,-0x21(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x24>
-mov    $0x0,%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x27b>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
 lea    -0x30(%ebp),%eax
 lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x284>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x27b>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject11GetCharacNoEv>
 mov    %eax,%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 cmp    %eax,%ebx
-setne  %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0xca>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CCashObject18DeleteMemberObjectEv>
-mov    $0x0,%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x27b>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_MemberManagerEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject15GetMemberObjectEv>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x23e>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x26c>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember16GetMemberDBInfoWEv>
 mov    %eax,-0x14(%ebp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 lea    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager22QueryUpdatedCharacNameEjRSs>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x16e>
+setne  %al
+test   %al,%al
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x163>
 mov    -0x14(%ebp),%eax
-add    $0x5,%eax
+add    $0x14,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    -0x14(%ebp),%edx
-add    $0x5,%edx
+add    $0x14,%edx
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fe>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1f2>
 mov    -0x10(%ebp),%eax
 imul   $0x27,%eax,%eax
-add    $0x20,%eax
+add    $0x28,%eax
 add    -0x14(%ebp),%eax
-add    $0x8,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1f9>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1ee>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 lea    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager22QueryUpdatedCharacNameEjRSs>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fa>
+setne  %al
+test   %al,%al
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1ee>
 mov    -0xc(%ebp),%eax
-add    $0x5,%eax
+add    $0x14,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    -0xc(%ebp),%edx
-add    $0x5,%edx
+add    $0x14,%edx
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fa>
-nop
 addl   $0x1,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
 movzbl 0x27(%eax),%eax
 movzbl %al,%eax
 cmp    -0x10(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x17a>
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x233>
+jne    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x16f>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember>
+mov    %al,-0x21(%ebp)
+cmpb   $0x0,-0x21(%ebp)
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x237>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CMemoryCashManager19incMemberCashHitCntEv>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CCashObject17ClearMemberObjectEv>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x25f>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CCashObject15GetMemberObjectEv>
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x27b>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember>
-mov    %al,-0x15(%ebp)
-cmpb   $0x0,-0x15(%ebp)
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x273>
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18CMemoryCashManager19incMemberCashHitCntEv>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CCashObject17ClearMemberObjectEv>
-movzbl -0x15(%ebp),%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
-mov    $0x0,%eax
+call   <T> <_ZN11CCashObject18DeleteMemberObjectEv>
+movb   $0x0,-0x21(%ebp)
+movzbl -0x21(%ebp),%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::QueryCashMemoryMember(CUser*) */

char __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser
          (CMemoryCashManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CMember *pCVar5;
  string local_38 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> local_34 [4];
  undefined4 local_30;
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  local_2c [4];
  CCashObject *local_28;
  CMemberManager *local_24;
  CMember *local_20;
  char local_19;
  uint *local_18;
  int local_14;
  uint *local_10;
  
  cVar1 = std::
          map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
          ::empty((map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
                   *)(this + 0x18));
  if (cVar1 == '\0') {
    local_30 = CUser::GetDBID(param_1);
    std::
    map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
    ::find((uint *)local_34);
    std::
    map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
    ::end(local_2c);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator!=
                      (local_34,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') {
      local_19 = '\0';
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator->
                        (local_34);
      local_28 = *(CCashObject **)(iVar2 + 4);
      iVar2 = CCashObject::GetCharacNo(local_28);
      iVar3 = CUser::GetUniqCharNo(param_1);
      if (iVar2 == iVar3) {
        local_24 = (CMemberManager *)
                   CApplication::Get_MemberManager(*(CApplication **)(this + 0x30));
        local_20 = (CMember *)CCashObject::GetMemberObject(local_28);
        if (local_20 != (CMember *)0x0) {
          local_18 = (uint *)CMember::GetMemberDBInfoW(local_20);
          std::string::string(local_38);
                    /* try { // try from 080a139c to 080a1456 has its CatchHandler @ 080a1492 */
          cVar1 = QueryUpdatedCharacName(this,*local_18,local_38);
          if (cVar1 != '\0') {
            memset((void *)((int)local_18 + 5),0,0x1e);
            pcVar4 = (char *)std::string::c_str(local_38);
            strncpy((char *)((int)local_18 + 5),pcVar4,0x1d);
          }
          for (local_14 = 0; local_14 < (int)(uint)*(byte *)((int)local_18 + 0x27);
              local_14 = local_14 + 1) {
            local_10 = (uint *)((int)local_18 + local_14 * 0x27 + 0x28);
            if (*local_10 != 0) {
              cVar1 = QueryUpdatedCharacName(this,*local_10,local_38);
              if (cVar1 != '\0') {
                memset((void *)((int)local_10 + 5),0,0x1e);
                pcVar4 = (char *)std::string::c_str(local_38);
                strncpy((char *)((int)local_10 + 5),pcVar4,0x1d);
              }
            }
          }
          std::string::~string(local_38);
        }
        pCVar5 = (CMember *)CCashObject::GetMemberObject(local_28);
        local_19 = CMemberManager::_ZN14CMemberManager18LoadMemberFromCashEP5CUserP7CMember
                             (local_24,param_1,pCVar5);
        if (local_19 != '\0') {
          incMemberCashHitCnt(this);
        }
        CCashObject::_ZN11CCashObject17ClearMemberObjectEv(local_28);
      }
      else {
        CCashObject::DeleteMemberObject(local_28);
        local_19 = '\0';
      }
    }
  }
  else {
    local_19 = '\0';
  }
  return local_19;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp](source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp)（约第 87 行）：

```cpp
char CMemoryCashManager::QueryCashMemoryMember(CUser* user)
{
    char ok = 0;
    if (!m_cashObjects.empty())
    {
        unsigned int dbid = user->GetDBID();
        std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
        if (it != m_cashObjects.end())
        {
            CCashObject* obj = it->second;
            if (obj->GetCharacNo() == user->GetUniqCharNo())
            {
                CMemberManager* mgr = m_app->Get_MemberManager();
                CMember* member = obj->GetMemberObject();
                if (member != 0)
                {
                    unsigned int* dbInfo = member->GetMemberDBInfoW();
                    std::string name;
                    if (QueryUpdatedCharacName(*dbInfo, name))
                    {
                        memset((char*)dbInfo + 5 * 4, 0, 0x1e);
                        strncpy((char*)dbInfo + 5 * 4, name.c_str(), 0x1d);
                    }
                    for (int i = 0; i < (int)((RA_U8<39>*)dbInfo)->v; i++)
                    {
                        unsigned int* sub =
                            (unsigned int*)((char*)dbInfo + i * 0x27 + 0x28);
                        if (*sub != 0)
                        {
                            if (QueryUpdatedCharacName(*sub, name))
                            {
                                memset((char*)sub + 5 * 4, 0, 0x1e);
                                strncpy((char*)sub + 5 * 4, name.c_str(), 0x1d);
                            }
                        }
                    }
                    ok = mgr->LoadMemberFromCash(user, member);
                    if (ok != 0)
                    {
                        incMemberCashHitCnt();
                    }
                    obj->ClearMemberObject();
                }
                else
                {
                    obj->DeleteMemberObject();
                    ok = 0;
                }
            }
        }
    }
    return ok;
}
```
