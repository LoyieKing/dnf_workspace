# _ZN18CMemoryCashManager18ProcessLifeTimeOutEv

`CMemoryCashManager::ProcessLifeTimeOut()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a1dee` | `0xe1` | `0x80965d4` | `0xd2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,69 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xdb>
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xcd>
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xaa>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x9e>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject13IsLifeTimeOutEv>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x9f>
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x93>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CCashObject15ClearBlackUsersEv>
-lea    -0x10(%ebp),%eax
-movl   $0x0,0x8(%esp)
-lea    -0x18(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEppEi>
-sub    $0x4,%esp
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEppEv>
 mov    0x8(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xaa>
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x9e>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN11CCashObjectdlEPv>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xaa>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x9e>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x2c>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xdc>
-nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::ProcessLifeTimeOut() */

void __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager18ProcessLifeTimeOutEv(CMemoryCashManager *this)

{
  CCashObject *this_00;
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  local_1c [4];
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  local_18 [4];
  void *local_14;
  CCashObject *local_10;
  
  if (*(int *)(this + 0x18) != 0) {
    std::
    map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> *)local_1c);
      local_10 = *(CCashObject **)(iVar2 + 4);
      cVar1 = CCashObject::_ZN11CCashObject13IsLifeTimeOutEv(local_10);
      if (cVar1 == '\0') {
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> *)local_1c);
      }
      else {
        CCashObject::ClearBlackUsers(local_10);
        uVar4 = 0;
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> *)&local_14,
                   (int)local_1c);
        pvVar3 = local_14;
        std::
        map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
        ::erase((map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
                 *)this,local_14,uVar4);
        this_00 = local_10;
        if (local_10 != (CCashObject *)0x0) {
          CCashObject::_ZN11CCashObjectD2Ev(local_10);
          CCashObject::operator_delete(this_00,pvVar3);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemoryCashManager.cpp](source/DNFServer/GameServer/Guild/MemoryCashManager.cpp)（约第 140 行）：

```cpp
void CMemoryCashManager::ProcessLifeTimeOut()
{
    if (m_app != 0)
    {
        for (std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.begin();
             it != m_cashObjects.end(); )
        {
            CCashObject* obj = it->second;
            if (obj->IsLifeTimeOut())
            {
                obj->ClearBlackUsers();
                std::map<unsigned int, CCashObject*>::iterator cur = it;
                ++it;
                m_cashObjects.erase(cur);
                delete obj;
            }
            else
            {
                ++it;
            }
        }
    }
}
```
