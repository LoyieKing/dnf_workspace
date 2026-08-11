# _ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer

`CTcpNetSystem::PopDeleteTcpSendPacketQ(CTcpSendBuffer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80535a2` | `0xa8` | `0x80a7ee2` | `0xae` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
+add    $0xc0,%eax
+mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
 add    $0xe8,%eax
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    0x8(%ebp),%eax
-add    $0xc0,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE3popEv>
-jmp    <T> <_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer+0x4c>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    0x8(%ebp),%eax
-add    $0x100,%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN14CTcpSendBufferdlEPv>
-jmp    <T> <_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer+0x96>
+call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE3popEv>
+jmp    <T> <_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer+0x52>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    0x8(%ebp),%eax
+add    $0x100,%eax
+mov    %eax,0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpSendBufferdlEPv>
+jmp    <T> <_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer+0x9c>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::PopDeleteTcpSendPacketQ(CTcpSendBuffer*) */

void __thiscall
CTcpNetSystem::_ZN13CTcpNetSystem23PopDeleteTcpSendPacketQEP14CTcpSendBuffer
          (CTcpNetSystem *this,CTcpSendBuffer *param_1)

{
  CMutex *pCVar1;
  CGuard<CMutex> local_14 [4];
  CGuard<CMutex> local_10 [4];
  
  CGuard<CMutex>::CGuard(local_10,(CMutex *)(this + 0xe8));
                    /* try { // try from 080535cc to 080535d0 has its CatchHandler @ 080535d3 */
  std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::pop
            ((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>> *)
             (this + 0xc0));
  CGuard<CMutex>::~CGuard(local_10);
  pCVar1 = (CMutex *)(this + 0x100);
  CGuard<CMutex>::CGuard(local_14,pCVar1);
                    /* try { // try from 08053616 to 0805361a has its CatchHandler @ 0805361d */
  CTcpSendBuffer::operator_delete(param_1,pCVar1);
  CGuard<CMutex>::~CGuard(local_14);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/TcpNetSystem.cpp](source/DNFServer/GameServer/Guild/TcpNetSystem.cpp)（约第 397 行）：

```cpp
void CTcpNetSystem::PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf)
{
    std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >* q =
        (std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >*)(m_data + 0xc0);
    {
        CGuard<CMutex> g((CMutex*)(m_data + 0xe8));
        q->pop();
    }
    {
        CGuard<CMutex> g2((CMutex*)(m_data + 0x100));
        delete buf;
    }
}
```
