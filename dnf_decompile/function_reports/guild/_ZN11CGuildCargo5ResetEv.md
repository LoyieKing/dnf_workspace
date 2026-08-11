# _ZN11CGuildCargo5ResetEv

`CGuildCargo::Reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f268` | `0x64` | `0x809171e` | `0x68` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x18d8(%eax)
+add    $0x18d8,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x18dc(%eax)
+add    $0x18dc,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x18e0(%eax)
+add    $0x18e0,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x18e4(%eax)
+add    $0x18e4,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x18e8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EE5clearEv>
 mov    0x8(%ebp),%eax
 movl   $0x18d8,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::Reset() */

void __thiscall CGuildCargo::_ZN11CGuildCargo5ResetEv(CGuildCargo *this)

{
  *(undefined4 *)(this + 0x18d8) = 0;
  *(undefined4 *)(this + 0x18dc) = 0;
  *(undefined4 *)(this + 0x18e0) = 0;
  this[0x18e4] = (CGuildCargo)0x0;
  std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::clear
            ((deque<STGuildCargoLog,std::allocator<STGuildCargoLog>> *)(this + 0x18e8));
  memset(this,0,0x18d8);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 125 行）：

```cpp
void CGuildCargo::Reset()
{
    *(int*)((char*)this + 0x18d8) = 0;
    *(int*)((char*)this + 0x18dc) = 0;
    *(int*)((char*)this + 0x18e0) = 0;
    *(char*)((char*)this + 0x18e4) = 0;
    ((std::deque<STGuildCargoLog>*)(m_data + 0x18e8))->clear();
    memset(m_data, 0, 0x18d8);
}
```
