# _ZN13CTcpNetSystem10CleanPeersEv

`CTcpNetSystem::CleanPeers()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80593d8` | `0xde` | `0x80668dc` | `0xea` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,69 +1,73 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x8f>
+jmp    <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x9b>
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CPeerEEptEv>
-mov    0x4(%eax),%ebx
+mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x85>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x5c>
+je     <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x85>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CPeerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CPeerdlEPv>
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CPeerEEppEv>
-jmp    <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x84>
+jmp    <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x85>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CPeerEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CPeerEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN13CTcpNetSystem10CleanPeersEv+0x25>
 mov    0x8(%ebp),%eax
 add    $0x144,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::CleanPeers() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystem10CleanPeersEv(CTcpNetSystem *this)

{
  CPeer *this_00;
  char cVar1;
  CMutex *pCVar2;
  int iVar3;
  CGuard<CMutex> local_18 [4];
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  local_14 [4];
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  local_10 [4];
  
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    pCVar2 = (CMutex *)(this + 0x78);
    CGuard<CMutex>::CGuard(local_18,pCVar2);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>> *)local_14);
    this_00 = *(CPeer **)(iVar3 + 4);
    if (this_00 != (CPeer *)0x0) {
                    /* try { // try from 08059427 to 0805943e has its CatchHandler @ 08059441 */
      CPeer::~CPeer(this_00);
      CPeer::operator_delete(this_00,pCVar2);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>> *)local_14);
    CGuard<CMutex>::~CGuard(local_18);
  }
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::clear((map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
           *)(this + 0x144));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp](source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp)（约第 98 行）：

```cpp
void CTcpNetSystem::CleanPeers()
{
    for (std::map<unsigned int, CPeer*>::iterator it = m_peerMap.begin();
         it != m_peerMap.end(); ++it)
    {
        CGuard<CMutex> guard(&m_mutex78);
        CPeer* peer = it->second;
        if (peer)
            delete peer;
    }
    m_peerMap.clear();
}
```
