# _ZN14CServerHandler21UnregistManagerServerEv

`CServerHandler::UnregistManagerServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x806de52` | `0x40` | `0x8082448` | `0x40` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x14,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandler21UnregistManagerServerEv+0x2b>
+je     <T> <_ZN14CServerHandler21UnregistManagerServerEv+0x35>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14CServerHandler21UnregistManagerServerEv+0x2b>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CManagerServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 mov    $0x1,%eax
 add    $0x14,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::UnregistManagerServer() */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler21UnregistManagerServerEv(CServerHandler *this)

{
  CManagerServer *this_00;
  
  if ((*(int *)(this + 0x1c) != 0) &&
     (this_00 = *(CManagerServer **)(this + 0x1c), this_00 != (CManagerServer *)0x0)) {
    CManagerServer::_ZN14CManagerServerD2Ev(this_00);
    ::operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 486 行）：

```cpp
bool CServerHandler::UnregistManagerServer()
{
    if (m_managerServer != 0)
    {
        delete m_managerServer;
        m_managerServer = 0;
    }
    return true;
}
```
