# _ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser

`CMemoryCashManager::QueryCashMemoryBlackList(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a1034` | `0x245` | `0x8097dc4` | `0x20c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,174 +1,149 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
 lea    -0x28(%ebp),%eax
 lea    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x236>
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1fd>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1ec>
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1fd>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject19GetBlackUsersObjectEv>
 mov    %eax,-0x14(%ebp)
 lea    -0x2c(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1bd>
+jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x184>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEdeEv>
 mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEdeEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1b1>
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x179>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
+lea    -0x30(%ebp),%eax
+mov    %eax,0x8(%esp)
 mov    -0x10(%ebp),%eax
-lea    -0x30(%ebp),%edx
-mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager22QueryUpdatedCharacNameEjRSs>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1a4>
+setne  %al
+test   %al,%al
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x16e>
+movl   $0x1e,0x8(%esp)
+movl   $0x0,0x4(%esp)
 lea    -0x4e(%ebp),%eax
-mov    $0x1e,%ebx
-mov    $0x0,%edx
-mov    %eax,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x120>
-mov    %dx,(%eax)
-add    $0x2,%eax
-sub    $0x2,%ebx
-mov    %ebx,%esi
-and    $0xfffffffc,%esi
-mov    $0x0,%ecx
-mov    %edx,(%eax,%ecx,1)
-add    $0x4,%ecx
-cmp    %esi,%ecx
-jb     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x12a>
-add    %ecx,%eax
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x145>
-mov    %dx,(%eax)
-add    $0x2,%eax
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x153>
-mov    %dl,(%eax)
-add    $0x1,%eax
+mov    %eax,(%esp)
+call   <T> <memset>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x4e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 lea    -0x4e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUser14ChangeCharNameEPc>
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1a4>
+jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x16e>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x1b2>
-nop
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEppEv>
 lea    -0x1c(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0xaa>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject19GetBlackUsersObjectEv>
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser23RegisterToCashBlackListERSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS2_EEE>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject18ClearMapBlackUsersEv>
 movl   $0x4,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetBlackListDBFlagEt>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager22incBlackListCashHitCntEv>
 mov    $0x1,%eax
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x23b>
+jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x202>
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

/* WARNING: Removing unreachable block (ram,0x080a1182) */
/* CMemoryCashManager::QueryCashMemoryBlackList(CUser*) */

undefined4 __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser
          (CMemoryCashManager *this,CUser *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  map *pmVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  char local_52 [30];
  string local_34 [4];
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_30 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> local_2c [4];
  undefined4 local_28;
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  local_24 [4];
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_20 [4];
  CCashObject *local_1c;
  undefined4 local_18;
  uint local_14;
  CBlackUser *local_10;
  
  local_28 = CUser::GetDBID(param_1);
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::find((uint *)local_2c);
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::end(local_24);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator!=
                    (local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator->(local_2c)
    ;
    local_1c = *(CCashObject **)(iVar3 + 4);
    if (local_1c != (CCashObject *)0x0) {
      local_18 = CCashObject::_ZN11CCashObject19GetBlackUsersObjectEv(local_1c);
      std::
      map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
      ::begin(local_30);
      while( true ) {
        std::
        map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
        ::end(local_20);
        cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_30,
                           (_Rb_tree_iterator *)local_20);
        if (cVar2 == '\0') break;
        puVar4 = (uint *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::
                         operator*((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)
                                   local_30);
        local_14 = *puVar4;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator*
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_30)
        ;
        local_10 = *(CBlackUser **)(iVar3 + 4);
        if (local_10 != (CBlackUser *)0x0) {
          std::string::string(local_34);
                    /* try { // try from 080a1128 to 080a11ba has its CatchHandler @ 080a11bd */
          cVar2 = QueryUpdatedCharacName(this,local_14,local_34);
          if (cVar2 != '\0') {
            pcVar5 = local_52;
            uVar9 = 0x1e;
            bVar10 = ((uint)pcVar5 & 2) != 0;
            if (bVar10) {
              local_52[0] = '\0';
              local_52[1] = '\0';
              pcVar5 = local_52 + 2;
              uVar9 = 0x1c;
            }
            uVar8 = 0;
            do {
              pcVar1 = pcVar5 + uVar8;
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              uVar8 = uVar8 + 4;
            } while (uVar8 < (uVar9 & 0xfffffffc));
            if (!bVar10) {
              (pcVar5 + uVar8)[0] = '\0';
              (pcVar5 + uVar8)[1] = '\0';
            }
            pcVar5 = (char *)std::string::c_str(local_34);
            strncpy(local_52,pcVar5,0x1d);
            CBlackUser::_ZN10CBlackUser14ChangeCharNameEPc(local_10,local_52);
          }
          std::string::~string(local_34);
        }
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_30);
      }
    }
    pmVar6 = (map *)CCashObject::_ZN11CCashObject19GetBlackUsersObjectEv(local_1c);
    CUser::RegisterToCashBlackList(param_1,pmVar6);
    CCashObject::ClearMapBlackUsers(local_1c);
    CUser::SetBlackListDBFlag(param_1,4);
    incBlackListCashHitCnt(this);
    uVar7 = 1;
  }
  return uVar7;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp](source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp)（约第 187 行）：

```cpp
char CMemoryCashManager::QueryCashMemoryBlackList(CUser* user)
{
    unsigned int dbid = user->GetDBID();
    std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
    if (it != m_cashObjects.end())
    {
        CCashObject* obj = it->second;
        if (obj != 0)
        {
            std::map<unsigned int, CBlackUser*>* blackMap = obj->GetBlackUsersObject();
            for (std::map<unsigned int, CBlackUser*>::iterator bi = blackMap->begin();
                 bi != blackMap->end(); ++bi)
            {
                unsigned int key = (*bi).first;
                CBlackUser* bu = (*bi).second;
                if (bu != 0)
                {
                    std::string name;
                    if (QueryUpdatedCharacName(key, name))
                    {
                        char buf[30];
                        memset(buf, 0, 30);
                        strncpy(buf, name.c_str(), 0x1d);
                        bu->ChangeCharName(buf);
                    }
                }
            }
            user->RegisterToCashBlackList(*obj->GetBlackUsersObject());
            obj->ClearMapBlackUsers();
            user->SetBlackListDBFlag(4);
            incBlackListCashHitCnt();
            return 1;
        }
    }
    return 0;
}
```
