# _ZN16CServerInterface12GetChannelNoEv

`CServerInterface::GetChannelNo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807c33a` | `0xf` | `0x8082a8e` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-movzbl 0x1(%eax),%eax
+mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerInterface::GetChannelNo() */

undefined1 __thiscall
CServerInterface::_ZN16CServerInterface12GetChannelNoEv(CServerInterface *this)

{
  return *(undefined1 *)(*(int *)(this + 4) + 1);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerInterface.cpp](source/DNFServer/GameServer/Guild/DNFServerInterface.cpp)（约第 175 行）：

```cpp
unsigned char CServerInterface::GetChannelNo()
{
    return m_info ? *(unsigned char*)((char*)m_info + 1) : 0;
}
```
