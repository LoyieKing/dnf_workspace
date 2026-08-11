# _ZN31ST_PowerWarEventStartTimeConfigC1Ev

`ST_PowerWarEventStartTimeConfig::ST_PowerWarEventStartTimeConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a715c` | `0x2a` | `0x809d50c` | `0x2a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
+add    $0x8,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EEC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x1(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x2(%eax)
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EEC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ST_PowerWarEventStartTimeConfig::ST_PowerWarEventStartTimeConfig() */

void __thiscall
ST_PowerWarEventStartTimeConfig::_ZN31ST_PowerWarEventStartTimeConfigC1Ev
          (ST_PowerWarEventStartTimeConfig *this)

{
  *this = (ST_PowerWarEventStartTimeConfig)0xff;
  this[1] = (ST_PowerWarEventStartTimeConfig)0xff;
  this[2] = (ST_PowerWarEventStartTimeConfig)0xff;
  std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::vector
            ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)(this + 8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 212 行）：

```cpp
ST_PowerWarEventStartTimeConfig::ST_PowerWarEventStartTimeConfig()
{
    m_day = 0xff;
    m_hour = 0xff;
    m_min = 0xff;
}
```
