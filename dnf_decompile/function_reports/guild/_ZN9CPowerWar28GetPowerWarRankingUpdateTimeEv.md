# _ZN9CPowerWar28GetPowerWarRankingUpdateTimeEv

`CPowerWar::GetPowerWarRankingUpdateTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a70d6` | `0x2a` | `0x809d048` | `0x30` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
+add    $0x10,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN9CPowerWar28GetPowerWarRankingUpdateTimeEv+0x23>
+jne    <T> <_ZN9CPowerWar28GetPowerWarRankingUpdateTimeEv+0x19>
+mov    $0x0,%eax
+jmp    <T> <_ZN9CPowerWar28GetPowerWarRankingUpdateTimeEv+0x2e>
 mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
+add    $0x10,%eax
+mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15CPowerWarConfig7GetInfoEv>
-mov    0x4(%eax),%eax
-jmp    <T> <_ZN9CPowerWar28GetPowerWarRankingUpdateTimeEv+0x28>
-mov    $0x0,%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::GetPowerWarRankingUpdateTime() */

undefined4 __thiscall CPowerWar::_ZN9CPowerWar28GetPowerWarRankingUpdateTimeEv(CPowerWar *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = CPowerWarConfig::GetInfo(*(CPowerWarConfig **)(this + 0x10));
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 215 行）：

```cpp
int CPowerWar::GetPowerWarRankingUpdateTime()
{
    if (*(int*)((char*)this + 0x10) == 0)
    {
        return 0;
    }
    return *(int*)((char*)((*(CPowerWarConfig**)((char*)this + 0x10))->GetInfo()) + 4);
}
```
