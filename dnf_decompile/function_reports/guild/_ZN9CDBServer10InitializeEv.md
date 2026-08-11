# _ZN9CDBServer10InitializeEv

`CDBServer::Initialize()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806be84` | `0x26` | `0x804fb60` | `0x13` |

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
 call   <T> <_ZN16CServerInterface10InitializeEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN9CDBServer10InitializeEv+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN9CDBServer10InitializeEv+0x24>
-mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBServer::Initialize() */

bool __thiscall CDBServer::_ZN9CDBServer10InitializeEv(CDBServer *this)

{
  char cVar1;
  
  cVar1 = CServerInterface::_ZN16CServerInterface10InitializeEv((CServerInterface *)this);
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFDBServer.cpp](source/DNFServer/GameServer/Guild/DNFDBServer.cpp)（约第 103 行）：

```cpp
bool CDBServer::Initialize()
{
    return CServerInterface::Initialize();
}
```
