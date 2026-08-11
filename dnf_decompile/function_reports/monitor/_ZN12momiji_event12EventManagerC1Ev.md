# _ZN12momiji_event12EventManagerC1Ev

`momiji_event::EventManager::EventManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c002` | `0x33` | `0x804b006` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-movb   $0x0,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x10(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventManager::EventManager() */

void __thiscall momiji_event::EventManager::_ZN12momiji_event12EventManagerC1Ev(EventManager *this)

{
  *this = (EventManager)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 87 行）：

```cpp
EventManager::EventManager() {}
```
