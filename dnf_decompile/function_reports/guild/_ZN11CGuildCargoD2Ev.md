# _ZN11CGuildCargoD2Ev

`CGuildCargo::~CGuildCargo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f21c` | `0x4c` | `0x80916fa` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo5ResetEv>
-jmp    <T> <_ZN11CGuildCargoD1Ev+0x35>
-mov    %edx,%ebx
-mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x18e8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    0x8(%ebp),%eax
-add    $0x18e8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EED1Ev>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::~CGuildCargo() */

void __thiscall CGuildCargo::_ZN11CGuildCargoD2Ev(CGuildCargo *this)

{
                    /* try { // try from 0809f22a to 0809f22e has its CatchHandler @ 0809f231 */
  _ZN11CGuildCargo5ResetEv(this);
  std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::~deque
            ((deque<STGuildCargoLog,std::allocator<STGuildCargoLog>> *)(this + 0x18e8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 119 行）：

```cpp
CGuildCargo::~CGuildCargo()
{
    Reset();
    ((std::deque<STGuildCargoLog>*)(m_data + 0x18e8))->~deque();
}
```
