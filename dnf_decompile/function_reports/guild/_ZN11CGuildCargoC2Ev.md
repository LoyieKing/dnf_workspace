# _ZN11CGuildCargoC2Ev

`CGuildCargo::CGuildCargo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f1c4` | `0x57` | `0x809164c` | `0xad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $0x18dc,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN11CGuildCargoC1Ev+0x4f>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildCargoDBInfoC1Ev>
+jmp    <T> <_ZN11CGuildCargoC1Ev+0x4f>
+mov    %edx,%esi
+mov    %eax,%edi
 mov    0x8(%ebp),%eax
-add    $0x18e8,%eax
+mov    %eax,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    0x8(%ebp),%eax
+lea    0x18e8(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x28,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN11CGuildCargoC1Ev+0x9a>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EEC1Ev>
+jmp    <T> <_ZN11CGuildCargoC1Ev+0x9a>
+mov    %edx,%edi
+mov    %eax,-0x1c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x1c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo5ResetEv>
-jmp    <T> <_ZN11CGuildCargoC1Ev+0x50>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x18e8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-add    $0x10,%esp
+add    $0x2c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::CGuildCargo() */

void __thiscall CGuildCargo::_ZN11CGuildCargoC2Ev(CGuildCargo *this)

{
  STGuildCargoDBInfo::STGuildCargoDBInfo((STGuildCargoDBInfo *)this);
  std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::deque
            ((deque<STGuildCargoLog,std::allocator<STGuildCargoLog>> *)(this + 0x18e8));
                    /* try { // try from 0809f1ed to 0809f1f1 has its CatchHandler @ 0809f1f4 */
  _ZN11CGuildCargo5ResetEv(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 112 行）：

```cpp
CGuildCargo::CGuildCargo()
{
    new (m_data) STGuildCargoDBInfo();
    new (m_data + 0x18e8) std::deque<STGuildCargoLog>();
    Reset();
}
```
