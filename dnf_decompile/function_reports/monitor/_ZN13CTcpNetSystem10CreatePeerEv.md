# _ZN13CTcpNetSystem10CreatePeerEv

`CTcpNetSystem::CreatePeer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80537f6` | `0x7a` | `0x80a2a9c` | `0x7a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-movl   $0x97840,(%esp)
+movl   $0x9783c,(%esp)
 call   <T> <_ZN5CPeernwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeerC1Ev>
 jmp    <T> <_ZN13CTcpNetSystem10CreatePeerEv+0x4a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN5CPeerdlEPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN13CTcpNetSystem10CreatePeerEv+0x5f>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %ebx,%eax
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::CreatePeer() */

CPeer * __thiscall CTcpNetSystem::_ZN13CTcpNetSystem10CreatePeerEv(CTcpNetSystem *this)

{
  CMutex *pCVar1;
  CPeer *this_00;
  CGuard<CMutex> local_20 [16];
  
  pCVar1 = (CMutex *)(this + 0x78);
  CGuard<CMutex>::CGuard(local_20,pCVar1);
                    /* try { // try from 0805381b to 0805381f has its CatchHandler @ 08053855 */
  this_00 = CPeer::operator_new((CPeer *)0x97840,(uint)pCVar1);
                    /* try { // try from 08053827 to 0805382b has its CatchHandler @ 0805382e */
  CPeer::CPeer(this_00);
  CGuard<CMutex>::~CGuard(local_20);
  return this_00;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp](source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp)（约第 120 行）：

```cpp
CPeer* CTcpNetSystem::CreatePeer()
{
    CGuard<CMutex> guard(&m_mutex78);
    return new CPeer;
}
```
