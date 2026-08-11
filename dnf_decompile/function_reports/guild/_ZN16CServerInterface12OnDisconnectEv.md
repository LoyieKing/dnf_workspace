# _ZN16CServerInterface12OnDisconnectEv

`CServerInterface::OnDisconnect()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806f796` | `0x1a` | `0x8083ddc` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-movb   $0x0,0x8(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x14,0x9(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0xa(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerInterface::OnDisconnect() */

void __thiscall CServerInterface::_ZN16CServerInterface12OnDisconnectEv(CServerInterface *this)

{
  this[8] = (CServerInterface)0x0;
  this[9] = (CServerInterface)0x14;
  this[10] = (CServerInterface)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerInterface.cpp](source/DNFServer/GameServer/Guild/DNFServerInterface.cpp)（约第 135 行）：

```cpp
void CServerInterface::OnDisconnect()
{
}
```
