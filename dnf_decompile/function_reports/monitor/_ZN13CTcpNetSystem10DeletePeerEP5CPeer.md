# _ZN13CTcpNetSystem10DeletePeerEP5CPeer

`CTcpNetSystem::DeletePeer(CPeer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8053870` | `0xe7` | `0x80a2d38` | `0xf3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,72 +1,76 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x20,%esp
+sub    $0x30,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%ecx
-lea    -0x14(%ebp),%eax
-lea    -0x10(%ebp),%edx
+lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
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
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CPeerEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer+0x89>
+je     <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer+0x8f>
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+cmpl   $0x0,0xc(%ebp)
+je     <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer+0xde>
 mov    0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer+0xd2>
+je     <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer+0xde>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CPeerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CPeerdlEPv>
-jmp    <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer+0xd2>
+jmp    <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer+0xde>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::DeletePeer(CPeer*) */

void __thiscall
CTcpNetSystem::_ZN13CTcpNetSystem10DeletePeerEP5CPeer(CTcpNetSystem *this,CPeer *param_1)

{
  char cVar1;
  TCPSocket *this_00;
  CMutex *pCVar2;
  undefined4 *puVar3;
  CGuard<CMutex> local_1c [4];
  uint local_18;
  undefined4 local_14;
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  local_10 [4];
  
  this_00 = (TCPSocket *)CPeer::GetTcpSocket(param_1);
  local_14 = TCPSocket::getHandle(this_00);
  puVar3 = &local_14;
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::find(&local_18);
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CPeer*>> *)&local_18,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::
    map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
    ::erase((map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
             *)(this + 0x144),local_18,puVar3);
  }
  pCVar2 = (CMutex *)(this + 0x78);
  CGuard<CMutex>::CGuard(local_1c,pCVar2);
  if (param_1 != (CPeer *)0x0) {
                    /* try { // try from 08053918 to 08053924 has its CatchHandler @ 08053927 */
    CPeer::~CPeer(param_1);
    CPeer::operator_delete(param_1,pCVar2);
  }
  CGuard<CMutex>::~CGuard(local_1c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 330 行）：

```cpp
void CTcpNetSystem::DeletePeer(CPeer* peer)
{
    int fd = peer->GetTcpSocket()->getHandle();
    std::map<unsigned int, CPeer*>::iterator it = m_peers.find((unsigned int)fd);
    if (it != m_peers.end())
    {
        m_peers.erase(it);
    }
    CGuard<CMutex> guard(&m_mutex78);
    if (peer != 0)
    {
        delete peer;
    }
}
```
