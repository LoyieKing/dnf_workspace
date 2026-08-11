# _ZN11CGameServer7DestroyEv

`CGameServer::Destroy()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c3ae` | `0x26` | `0x80524ea` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface7DestroyEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN11CGameServer7DestroyEv+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN11CGameServer7DestroyEv+0x24>
-mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGameServer::Destroy() */

bool __thiscall CGameServer::_ZN11CGameServer7DestroyEv(CGameServer *this)

{
  char cVar1;
  
  cVar1 = CServerInterface::Destroy((CServerInterface *)this);
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGameServer.cpp](source/DNFServer/GameServer/Guild/DNFGameServer.cpp)（约第 90 行）：

```cpp
bool CGameServer::Destroy()
{
    return CServerInterface::Destroy();
}
```
