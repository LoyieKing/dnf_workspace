# _ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser

`CMemoryCashManager::QueryCashMemoryBlackList(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a1ed0` | `0xa7` | `0x8096812` | `0xc5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
-lea    -0x14(%ebp),%ecx
+lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0xa0>
-lea    -0x18(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0x99>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject19GetBlackUsersObjectEv>
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser23RegisterToCashBlackListERSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS2_EEE>
 movl   $0x4,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetBlackListDBFlagEt>
-mov    $0x1,%eax
-jmp    <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser+0xa5>
-mov    $0x0,%eax
+mov    0x8(%ebp),%edx
+lea    -0x10(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
+movzbl %al,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::QueryCashMemoryBlackList(CUser*) */

bool __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser
          (CMemoryCashManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  map *pmVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> local_1c [4];
  undefined4 local_18;
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  local_14 [4];
  CCashObject *local_10;
  
  local_18 = CUser::GetDBID(param_1);
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::find((uint *)local_1c);
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator!=
                    (local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator->(local_1c)
    ;
    local_10 = *(CCashObject **)(iVar2 + 4);
    pmVar3 = (map *)CCashObject::GetBlackUsersObject(local_10);
    CUser::RegisterToCashBlackList(param_1,pmVar3);
    CUser::SetBlackListDBFlag(param_1,4);
  }
  return cVar1 != '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemoryCashManager.cpp](source/DNFServer/GameServer/Guild/MemoryCashManager.cpp)（约第 159 行）：

```cpp
int CMemoryCashManager::QueryCashMemoryBlackList(CUser* user)
{
    std::map<unsigned int, CCashObject*>::iterator it =
        m_cashObjects.find(user->GetDBID());
    if (it != m_cashObjects.end())
    {
        CCashObject* obj = it->second;
        user->RegisterToCashBlackList(*obj->GetBlackUsersObject());
        user->SetBlackListDBFlag(4);
        return true;
    }
    return false;
}
```
