# _ZN19COnTimeEventManager10StartEventEv

`COnTimeEventManager::StartEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4c5e` | `0x27` | `0x8099a12` | `0x29` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x28(%eax),%edx
+mov    0x28(%eax),%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager10StartEventEjj>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::StartEvent() */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager10StartEventEv(COnTimeEventManager *this)

{
  _ZN19COnTimeEventManager10StartEventEjj(this,*(uint *)(this + 0x24),*(uint *)(this + 0x28));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 131 行）：

```cpp
void COnTimeEventManager::StartEvent()
{
    StartEvent((unsigned int)m_field24, (unsigned int)m_field28);
}
```
