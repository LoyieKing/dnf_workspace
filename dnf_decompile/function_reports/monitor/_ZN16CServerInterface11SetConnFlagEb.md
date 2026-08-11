# _ZN16CServerInterface11SetConnFlagEb

`CServerInterface::SetConnFlag(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807c276` | `0x18` | `0x8082ab2` | `0x1a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzbl -0x4(%ebp),%edx
-mov    %dl,0x8(%eax)
+lea    0x8(%eax),%edx
+movzbl -0x4(%ebp),%eax
+mov    %al,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerInterface::SetConnFlag(bool) */

void __thiscall
CServerInterface::_ZN16CServerInterface11SetConnFlagEb(CServerInterface *this,bool param_1)

{
  this[8] = (CServerInterface)param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerInterface.cpp](source/DNFServer/GameServer/Guild/DNFServerInterface.cpp)（约第 130 行）：

```cpp
void CServerInterface::SetConnFlag(bool flag)
{
    m_field8 = (char)flag;
}
```
