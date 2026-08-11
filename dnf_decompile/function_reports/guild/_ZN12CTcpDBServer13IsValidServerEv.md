# _ZN12CTcpDBServer13IsValidServerEv

`CTcpDBServer::IsValidServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c1ca` | `0x7a` | `0x804feaa` | `0x73` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,32 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x30,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN12CTcpDBServer13IsValidServerEv+0x24>
+je     <T> <_ZN12CTcpDBServer13IsValidServerEv+0x22>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CTcpDBServer13IsValidServerEv+0x24>
+je     <T> <_ZN12CTcpDBServer13IsValidServerEv+0x22>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CTcpDBServer13IsValidServerEv+0x73>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%ebx
+jmp    <T> <_ZN12CTcpDBServer13IsValidServerEv+0x71>
 movl   $0x14f,0x8(%esp)
 movl   $"IsValidServer",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Invalid Tcp Server(%d,%x)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpDBServer::IsValidServer() */

undefined4 __thiscall CTcpDBServer::_ZN12CTcpDBServer13IsValidServerEv(CTcpDBServer *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [8];
  
  if ((*(int *)(this + 8) == -1) || (*(int *)(this + 0xc) == 0)) {
    uVar2 = *(undefined4 *)(this + 0xc);
    uVar1 = *(undefined4 *)(this + 8);
    CMyFileLog::CMyFileLog(local_14,"IsValidServer",0x14f);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/TcpServer","Invalid Tcp Server(%d,%x)",uVar1,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFDBServer.cpp](source/DNFServer/GameServer/Guild/DNFDBServer.cpp)（约第 197 行）：

```cpp
bool CTcpDBServer::IsValidServer()
{
    if (m_sock != -1 && m_net != 0)
    {
        return true;
    }
    DNF_LOG_SCOPE_LINE(0x14f, "./log/TcpServer", "Invalid Tcp Server(%d,%x)", m_sock, m_net);
    return false;
}
```
