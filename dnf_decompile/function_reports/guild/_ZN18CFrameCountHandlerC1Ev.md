# _ZN18CFrameCountHandlerC1Ev

`CFrameCountHandler::CFrameCountHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804c954` | `0x16` | `0x808769e` | `0x7c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movb   $0x0,0x28(%eax)
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x4(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x8(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0xc(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x10(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x14(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x18(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x1c(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x20(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x24(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x28(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2c(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CFrameCountHandler::CFrameCountHandler() */

void __thiscall CFrameCountHandler::_ZN18CFrameCountHandlerC1Ev(CFrameCountHandler *this)

{
  this[0x28] = (CFrameCountHandler)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTickHandler.cpp](source/DNFServer/GameServer/Guild/DNFTickHandler.cpp)（约第 74 行）：

```cpp
CFrameCountHandler::CFrameCountHandler()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
    m_fieldc = 0;
    m_field10 = 0;
    m_field14 = 0;
    m_field18 = 0;
    m_field1c = 0;
    m_field20 = 0;
    m_field24 = 0;
    m_field28 = 0;
    m_field2c = 0;
}
```
