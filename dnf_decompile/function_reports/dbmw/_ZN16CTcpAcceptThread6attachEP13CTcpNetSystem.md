# _ZN16CTcpAcceptThread6attachEP13CTcpNetSystem

`CTcpAcceptThread::attach(CTcpNetSystem*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8062e6e` | `0x4b` | `0x80e2882` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN16CTcpAcceptThread6attachEP13CTcpNetSystem+0x49>
+je     <T> <_ZN16CTcpAcceptThread6attachEP13CTcpNetSystem+0x4b>
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0xc(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x10(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvBLockEv>
 mov    0x8(%ebp),%edx
 mov    %eax,0x14(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem17Get_TcpServerPortEv>
 mov    0x8(%ebp),%edx
 mov    %ax,0x34(%edx)
+jmp    <T> <_ZN16CTcpAcceptThread6attachEP13CTcpNetSystem+0x4c>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpAcceptThread::attach(CTcpNetSystem*) */

void __thiscall
CTcpAcceptThread::_ZN16CTcpAcceptThread6attachEP13CTcpNetSystem
          (CTcpAcceptThread *this,CTcpNetSystem *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (param_1 != (CTcpNetSystem *)0x0) {
    *(CTcpNetSystem **)(this + 0xc) = param_1;
    uVar2 = CTcpNetSystem::Get_TcpRecvQLock(param_1);
    *(undefined4 *)(this + 0x10) = uVar2;
    uVar2 = CTcpNetSystem::Get_TcpRecvBLock(param_1);
    *(undefined4 *)(this + 0x14) = uVar2;
    uVar1 = CTcpNetSystem::Get_TcpServerPort(param_1);
    *(undefined2 *)(this + 0x34) = uVar1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpAcceptThread.cpp](source/DNFServer/GameServer/DBMW/DNFTcpAcceptThread.cpp)（约第 28 行）：

```cpp
void CTcpAcceptThread::attach(CTcpNetSystem* net)
{
    if (!net)
        return;
    m_net = net;
    m_recvQLock = net->Get_TcpRecvQLock();
    m_recvBLock = net->Get_TcpRecvBLock();
    m_port = net->Get_TcpServerPort();
}
```
