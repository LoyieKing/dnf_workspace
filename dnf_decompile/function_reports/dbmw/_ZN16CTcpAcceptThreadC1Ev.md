# _ZN16CTcpAcceptThreadC1Ev

`CTcpAcceptThread::CTcpAcceptThread()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8062968` | `0x6c` | `0x808f110` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterfaceC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV16CTcpAcceptThread+0x8,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x10(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x14(%eax)
-mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketC1Ev>
-jmp    <T> <_ZN16CTcpAcceptThreadC1Ev+0x65>
+jmp    <T> <_ZN16CTcpAcceptThreadC1Ev+0x47>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterfaceD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpAcceptThread::CTcpAcceptThread() */

void __thiscall CTcpAcceptThread::_ZN16CTcpAcceptThreadC1Ev(CTcpAcceptThread *this)

{
  CThreadInterface::CThreadInterface((CThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_081a67d8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
                    /* try { // try from 080629ab to 080629af has its CatchHandler @ 080629b2 */
  TCPSocket::TCPSocket((TCPSocket *)(this + 0x18));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpAcceptThread.cpp](source/DNFServer/GameServer/DBMW/DNFTcpAcceptThread.cpp)（约第 26 行）：

```cpp
CTcpAcceptThread::CTcpAcceptThread() {}
```
