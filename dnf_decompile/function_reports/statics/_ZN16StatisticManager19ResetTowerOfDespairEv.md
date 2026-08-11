# _ZN16StatisticManager19ResetTowerOfDespairEv

`StatisticManager::ResetTowerOfDespair()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8074bf8` | `0x69` | `0x8074b18` | `0x69` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x83c,0x8(%esp)
 movl   $"ResetTowerOfDespair",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"TOD reset",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
-add    $0x807,%eax
+add    $0x808,%eax
 movl   $0x328,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIjSt4lessIjESaIjEE5clearEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::ResetTowerOfDespair() */

void __thiscall
StatisticManager::_ZN16StatisticManager19ResetTowerOfDespairEv(StatisticManager *this)

{
  CMyFileLog local_14 [16];
  
  CMyFileLog::CMyFileLog(local_14,"ResetTowerOfDespair",0x83c);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/statistic","TOD reset");
  memset(this + 0x807,0,0x328);
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::clear
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1506 行）：

```cpp
void StatisticManager::ResetTowerOfDespair()
{
    DNF_LOG_SCOPE_LINE(0x83c, "./log/statistic", "TOD reset");
    memset(m_tower, 0, 0x328);
    m_serverList.clear();
}
```
