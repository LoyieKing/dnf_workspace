# _ZN14CMemberManager12DeleteMemberEjb

`CMemberManager::DeleteMember(unsigned int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099e1c` | `0x14a` | `0x8061bec` | `0x14a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,96 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0x29>
 mov    $0x0,%eax
 jmp    <T> <_ZN14CMemberManager12DeleteMemberEjb+0x145>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEneERKS5_>
 test   %al,%al
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0xfd>
 cmpb   $0x0,-0x1c(%ebp)
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0x99>
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0x99>
 mov    $0x1,%eax
 jmp    <T> <_ZN14CMemberManager12DeleteMemberEjb+0x9e>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0xc4>
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEptEv>
 mov    0x4(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0xc4>
 mov    %ebx,(%esp)
 call   <T> <_ZN7CMemberD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN7CMemberdlEPv>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0xe1>
 mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24Call_ResetUserMemberInfoEj>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
-mov    -0x18(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 mov    $0x1,%eax
 jmp    <T> <_ZN14CMemberManager12DeleteMemberEjb+0x145>
 cmpb   $0x0,-0x1c(%ebp)
 je     <T> <_ZN14CMemberManager12DeleteMemberEjb+0x140>
-mov    0xc(%ebp),%ebx
 movl   $0xbb,0x8(%esp)
 movl   $&_ZZN14CMemberManager12DeleteMemberEjbE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[DELETE_CASH_PROCESS] Member Key : %d",0x8(%esp)
 movl   $"./log/Member",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::DeleteMember(unsigned int, bool) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager12DeleteMemberEjb(CMemberManager *this,uint param_1,bool param_2)

{
  CMember *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  uint local_1c;
  map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
  local_18 [4];
  CMyFileLog local_14 [12];
  
  cVar2 = std::
          map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
          ::empty((map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
                   *)(this + 8));
  if (cVar2 != '\0') {
    return 0;
  }
  std::
  map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
  ::find(&local_1c);
  std::
  map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
  ::end(local_18);
  p_Var4 = (_Rb_tree_iterator *)local_18;
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)&local_1c,p_Var4);
  if (cVar2 != '\0') {
    if ((param_2) &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)&local_1c),
       *(int *)(iVar3 + 4) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)&local_1c);
      this_00 = *(CMember **)(iVar3 + 4);
      if (this_00 != (CMember *)0x0) {
        CMember::~CMember(this_00);
        CMember::operator_delete(this_00,p_Var4);
      }
    }
    if (*(int *)this != 0) {
      CApplication::Call_ResetUserMemberInfo(*(uint *)this);
    }
    std::
    map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
    ::erase((map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
             *)(this + 8),local_1c);
    return 1;
  }
  if (param_2) {
    CMyFileLog::CMyFileLog(local_14,"DeleteMember",0xbb);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Member","[DELETE_CASH_PROCESS] Member Key : %d",param_1);
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 91 行）：

```cpp
int CMemberManager::DeleteMember(unsigned int key, bool cash)
{
    if (m_members.empty())
    {
        return 0;
    }
    std::map<unsigned int, CMember*>::iterator it = m_members.find(key);
    std::map<unsigned int, CMember*>::iterator end = m_members.end();
    if (it != end)
    {
        if (cash && it->second != 0)
        {
            delete it->second;
        }
        if (m_app != 0)
        {
            m_app->Call_ResetUserMemberInfo(key);
        }
        m_members.erase(it);
        return 1;
    }
    if (cash)
    {
        CMyFileLog log(__FUNCTION__, 0xbb);
        log("./log/Member", "[DELETE_CASH_PROCESS] Member Key : %d", key);
    }
    return 0;
}
```
