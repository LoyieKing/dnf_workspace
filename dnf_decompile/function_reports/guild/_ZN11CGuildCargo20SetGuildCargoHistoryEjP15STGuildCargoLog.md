# _ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog

`CGuildCargo::SetGuildCargoHistory(unsigned int, STGuildCargoLog*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809fdce` | `0x56` | `0x80924aa` | `0x59` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
-cmp    $0x32,%eax
-jbe    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x13>
-mov    $0x32,%eax
 mov    %eax,-0x10(%ebp)
+cmpl   $0x32,-0x10(%ebp)
+jbe    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x19>
+movl   $0x32,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x47>
+jmp    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x4a>
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x4,%eax
 add    0x10(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x18e8,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EE10push_frontERKS0_>
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-setl   %al
+mov    -0x10(%ebp),%eax
+cmp    -0xc(%ebp),%eax
+setg   %al
 test   %al,%al
-jne    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x1f>
+jne    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x22>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::SetGuildCargoHistory(unsigned int, STGuildCargoLog*) */

void __thiscall
CGuildCargo::_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog
          (CGuildCargo *this,uint param_1,STGuildCargoLog *param_2)

{
  int local_10;
  
  if (0x32 < param_1) {
    param_1 = 0x32;
  }
  for (local_10 = 0; local_10 < (int)param_1; local_10 = local_10 + 1) {
    std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::push_front
              ((deque<STGuildCargoLog,std::allocator<STGuildCargoLog>> *)(this + 0x18e8),
               param_2 + local_10 * 0x30);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 357 行）：

```cpp
void CGuildCargo::SetGuildCargoHistory(unsigned int idx, STGuildCargoLog* log)
{
    unsigned int c = idx;
    if (c > 0x32)
    {
        c = 0x32;
    }
    for (int i = 0; i < (int)c; i++)
    {
        m_history.push_front(log[i]);
    }
}
```
