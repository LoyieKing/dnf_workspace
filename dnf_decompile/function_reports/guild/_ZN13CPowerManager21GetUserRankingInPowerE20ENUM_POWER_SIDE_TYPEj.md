# _ZN13CPowerManager21GetUserRankingInPowerE20ENUM_POWER_SIDE_TYPEj

`CPowerManager::GetUserRankingInPower(ENUM_POWER_SIDE_TYPE, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4d8e` | `0x2b` | `0x809ac18` | `0x2d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-mov    0xc(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower21GetPowerWarCharacInfoEv>
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::GetUserRankingInPower(ENUM_POWER_SIDE_TYPE, unsigned int) */

void __thiscall
CPowerManager::_ZN13CPowerManager21GetUserRankingInPowerE20ENUM_POWER_SIDE_TYPEj
          (CPowerManager *this,int param_2,uint param_3)

{
  CPowerWarCharacInfo *this_00;
  
  this_00 = (CPowerWarCharacInfo *)
            CPower::GetPowerWarCharacInfo((CPower *)(this + param_2 * 0x6c + 8));
  CPowerWarCharacInfo::GetUserRanking(this_00,param_3);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 526 行）：

```cpp
unsigned int CPowerManager::GetUserRankingInPower(ENUM_POWER_SIDE_TYPE side, unsigned int charNo)
{
    return ((CPower*)((char*)this + side * 0x6c + 8))->GetPowerWarCharacInfo()
        ->GetUserRanking(charNo);
}
```
