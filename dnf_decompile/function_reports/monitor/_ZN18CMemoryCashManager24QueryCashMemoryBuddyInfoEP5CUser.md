# _ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser

`CMemoryCashManager::QueryCashMemoryBuddyInfo(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a150e` | `0x290` | `0x8097a28` | `0x272` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,181 +1,175 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0xb0,%esp
+sub    $0xc0,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x27>
-mov    $0x0,%eax
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x286>
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x263>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
-lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x281>
-lea    -0x24(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x263>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
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
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0xcd>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CCashObject12DeleteBuddysEv>
-mov    $0x0,%eax
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x286>
-lea    -0xa8(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x251>
+lea    -0xac(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject15GetBuddysObjectEPP6CBuddy>
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x222>
-mov    -0x10(%ebp),%eax
-mov    -0xa8(%ebp,%eax,4),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x1f8>
+mov    -0x14(%ebp),%eax
+mov    -0xac(%ebp,%eax,4),%eax
 test   %eax,%eax
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x21d>
-lea    -0x28(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x1f4>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
-mov    -0x10(%ebp),%eax
-mov    -0xa8(%ebp,%eax,4),%eax
+mov    -0x14(%ebp),%eax
+mov    -0xac(%ebp,%eax,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0x22(%eax),%eax
-lea    -0x28(%ebp),%edx
+lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager22QueryUpdatedCharacNameEjRSs>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x19a>
-mov    -0x10(%ebp),%eax
-mov    -0xa8(%ebp,%eax,4),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
+setne  %al
+test   %al,%al
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x171>
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
-mov    %eax,%ebx
-mov    -0x10(%ebp),%eax
-mov    -0xa8(%ebp,%eax,4),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
+mov    -0x10(%ebp),%edx
 movl   $0x1d,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <strncpy>
-mov    -0x10(%ebp),%eax
-mov    -0xa8(%ebp,%eax,4),%eax
+mov    -0x14(%ebp),%eax
+mov    -0xac(%ebp,%eax,4),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16AddBuddyFromCashEP6CBuddy>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x10(%ebp),%eax
+mov    0x22(%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
-mov    -0x10(%ebp),%eax
-mov    -0xa8(%ebp,%eax,4),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    0x22(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24Get_BuddyRegisterManagerEv>
 mov    %ebx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN21CBuddyRegisterManager16addBuddyRegisterEjj>
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x210>
+jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x1e9>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x21e>
-nop
-addl   $0x1,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-cmp    -0x14(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+cmp    -0x18(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0xf1>
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x25c>
+jne    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0xdd>
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x22c>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
-mov    %eax,-0xc(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser>
 movl   $0x4,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14SetBuddyDBFlagEt>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager18incBuddyCashHitCntEv>
 mov    $0x1,%eax
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x286>
+jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x268>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CCashObject12DeleteBuddysEv>
+mov    $0x0,%eax
+jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser+0x268>
 mov    $0x0,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::QueryCashMemoryBuddyInfo(CUser*) */

undefined4 __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser
          (CMemoryCashManager *this,CUser *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *__s;
  char *__src;
  char *__dest;
  uint uVar6;
  CBuddy *local_ac [32];
  string local_2c [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> local_28 [4];
  undefined4 local_24;
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  local_20 [4];
  CCashObject *local_1c;
  int local_18;
  int local_14;
  CUserManager *local_10;
  
  cVar2 = std::
          map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
          ::empty((map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
                   *)(this + 0x18));
  if (cVar2 == '\0') {
    local_24 = CUser::GetDBID(param_1);
    std::
    map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
    ::find((uint *)local_28);
    std::
    map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator!=
                      (local_28,(_Rb_tree_iterator *)local_20);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator->
                        (local_28);
      local_1c = *(CCashObject **)(iVar4 + 4);
      iVar4 = CCashObject::GetCharacNo(local_1c);
      iVar5 = CUser::GetUniqCharNo(param_1);
      if (iVar4 == iVar5) {
        local_18 = CCashObject::_ZN11CCashObject15GetBuddysObjectEPP6CBuddy(local_1c,local_ac);
        for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
          if (local_ac[local_14] != (CBuddy *)0x0) {
            std::string::string(local_2c);
            iVar4 = CBuddy::getBuddyDBInfo(local_ac[local_14]);
                    /* try { // try from 080a1642 to 080a1700 has its CatchHandler @ 080a1703 */
            cVar2 = QueryUpdatedCharacName(this,*(uint *)(iVar4 + 0x22),local_2c);
            if (cVar2 != '\0') {
              __s = (void *)CBuddy::getBuddyDBInfo(local_ac[local_14]);
              memset(__s,0,0x1e);
              __src = (char *)std::string::c_str(local_2c);
              __dest = (char *)CBuddy::getBuddyDBInfo(local_ac[local_14]);
              strncpy(__dest,__src,0x1d);
            }
            CUser::AddBuddyFromCash(param_1,local_ac[local_14]);
            CUser::GetUniqCharNo(param_1);
            iVar4 = CBuddy::getBuddyDBInfo(local_ac[local_14]);
            uVar1 = *(uint *)(iVar4 + 0x22);
            uVar6 = CApplication::_ZN12CApplication24Get_BuddyRegisterManagerEv
                              (*(CApplication **)(this + 0x30));
            CBuddyRegisterManager::addBuddyRegister(uVar6,uVar1);
            std::string::~string(local_2c);
          }
        }
        if (local_18 != 0) {
          local_10 = (CUserManager *)CApplication::Get_UserManager(*(CApplication **)(this + 0x30));
          CUserManager::_ZN12CUserManager23SendConnectedBuddysListEP5CUser(local_10,param_1);
        }
        CUser::SetBuddyDBFlag(param_1,4);
        incBuddyCashHitCnt(this);
        uVar3 = 1;
      }
      else {
        CCashObject::DeleteBuddys(local_1c);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp](source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp)（约第 141 行）：

```cpp
int CMemoryCashManager::QueryCashMemoryBuddyInfo(CUser* user)
{
    if (!m_cashObjects.empty())
    {
        unsigned int dbid = user->GetDBID();
        std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
        if (it != m_cashObjects.end())
        {
            CCashObject* obj = it->second;
            if (obj->GetCharacNo() == user->GetUniqCharNo())
            {
                CBuddy* buddies[32];
                int count = obj->GetBuddysObject(buddies);
                for (int i = 0; i < count; i++)
                {
                    if (buddies[i] != 0)
                    {
                        std::string name;
                        unsigned int* info = buddies[i]->getBuddyDBInfo();
                        if (QueryUpdatedCharacName(((RA_UINT<34>*)info)->v, name))
                        {
                            memset(info, 0, 0x1e);
                            strncpy((char*)info, name.c_str(), 0x1d);
                        }
                        user->AddBuddyFromCash(buddies[i]);
                        user->GetUniqCharNo();
                        unsigned int charNo = ((RA_UINT<34>*)info)->v;
                        m_app->Get_BuddyRegisterManager()->addBuddyRegister(charNo,
                                                                            user->GetUniqCharNo());
                    }
                }
                if (count != 0)
                {
                    m_app->Get_UserManager()->SendConnectedBuddysList(user);
                }
                user->SetBuddyDBFlag(4);
                incBuddyCashHitCnt();
                return 1;
            }
            obj->DeleteBuddys();
            return 0;
        }
    }
    return 0;
}
```
