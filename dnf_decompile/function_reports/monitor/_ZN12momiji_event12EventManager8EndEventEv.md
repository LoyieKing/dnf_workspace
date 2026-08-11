# _ZN12momiji_event12EventManager8EndEventEv

`momiji_event::EventManager::EndEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c2a8` | `0x46` | `0x804b40a` | `0x4a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager16sendDeleteEffectEv>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12momiji_event12EventManager8EndEventEv+0x25>
+je     <T> <_ZN12momiji_event12EventManager8EndEventEv+0x27>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-movb   $0x0,0x10(%eax)
+add    $0x10,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12momiji_event12EventManager8EndEventEv+0x39>
+je     <T> <_ZN12momiji_event12EventManager8EndEventEv+0x3d>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-movb   $0x0,0x10(%eax)
+add    $0x10,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event12EventManager4InitEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventManager::EndEvent() */

void __thiscall
momiji_event::EventManager::_ZN12momiji_event12EventManager8EndEventEv(EventManager *this)

{
  _ZN12momiji_event12EventManager16sendDeleteEffectEv();
  if (*(int *)(this + 0xc) != 0) {
    *(undefined1 *)(*(int *)(this + 0xc) + 0x10) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    *(undefined1 *)(*(int *)(this + 0x10) + 0x10) = 0;
  }
  Init(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 173 行）：

```cpp
void EventManager::EndEvent()
{
    sendDeleteEffect();
    if (m_startTask != 0)
    {
        *(char*)((char*)m_startTask + 0x10) = 0;
    }
    if (m_endTask != 0)
    {
        *(char*)((char*)m_endTask + 0x10) = 0;
    }
    Init();
}
```
