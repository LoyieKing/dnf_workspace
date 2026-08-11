# _ZN18CFrameCountHandlerC1Ev

`CFrameCountHandler::CFrameCountHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804cb00` | `0x16` | `0x808635c` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-movb   $0x0,0x28(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x2c(%eax)
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

定义于 [source/DNFServer/GameServer/COServer/DNFTickHandler.cpp](source/DNFServer/GameServer/COServer/DNFTickHandler.cpp)（约第 11 行）：

```cpp
CFrameCountHandler::CFrameCountHandler()
{
    m_writeTick = 0;
    m_value = 0;
}
```
