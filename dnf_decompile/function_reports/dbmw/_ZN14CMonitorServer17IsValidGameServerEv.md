# _ZN14CMonitorServer17IsValidGameServerEv

`CMonitorServer::IsValidGameServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808ef4a` | `0x1b` | `0x8074b2a` | `0x1b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xff,%al
-jne    <T> <_ZN14CMonitorServer17IsValidGameServerEv+0x14>
+je     <T> <_ZN14CMonitorServer17IsValidGameServerEv+0x14>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CMonitorServer17IsValidGameServerEv+0x19>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CMonitorServer17IsValidGameServerEv+0x19>
-mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMonitorServer::IsValidGameServer() */

bool __thiscall CMonitorServer::_ZN14CMonitorServer17IsValidGameServerEv(CMonitorServer *this)

{
  return *this != (CMonitorServer)0xff;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMonitorServer.cpp](source/DNFServer/GameServer/DBMW/DNFMonitorServer.cpp)（约第 46 行）：

```cpp
char CMonitorServer::IsValidGameServer() 
{ 
    if (m_type != 0xff) 
        return 1; 
    return 0; 
}
```
