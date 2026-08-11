# _ZN14CTcpGameServer13IsValidServerEv

`CTcpGameServer::IsValidServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c45a` | `0x24` | `0x80525b6` | `0xf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CTcpGameServer13IsValidServerEv+0x1d>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN14CTcpGameServer13IsValidServerEv+0x1d>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CTcpGameServer13IsValidServerEv+0x22>
-mov    $0x0,%eax
+setne  %al
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpGameServer::IsValidServer() */

undefined4 __thiscall CTcpGameServer::_ZN14CTcpGameServer13IsValidServerEv(CTcpGameServer *this)

{
  undefined4 uVar1;
  
  if ((*(int *)this == 0) || (*(int *)(this + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGameServer.cpp](source/DNFServer/GameServer/Guild/DNFGameServer.cpp)（约第 137 行）：

```cpp
bool CTcpGameServer::IsValidServer()
{
    return m_group != 0;
}
```
