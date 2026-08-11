# _ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi

`CPowerManager::IncPowerScore(ENUM_POWER_SIDE_TYPE, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3c70` | `0x4d` | `0x8099f2e` | `0x57` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x14c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9CPowerWar12IsPowerWarOnEv>
+test   %eax,%eax
+sete   %al
 test   %al,%al
 je     <T> <_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi+0x37>
-mov    0xc(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-lea    0x8(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CPower8GetScoreEv>
+jmp    <T> <_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi+0x55>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+lea    (%eax,%edx,1),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN6CPower8IncScoreEi>
-jmp    <T> <_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi+0x4b>
-mov    0xc(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CPower8GetScoreEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::IncPowerScore(ENUM_POWER_SIDE_TYPE, int) */

void __thiscall
CPowerManager::_ZN13CPowerManager13IncPowerScoreE20ENUM_POWER_SIDE_TYPEi
          (CPowerManager *this,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CPowerWar::IsPowerWarOn((CPowerWar *)(this + 0x14c));
  if (cVar1 == '\0') {
    CPower::GetScore((CPower *)(this + param_2 * 0x6c + 8));
  }
  else {
    CPower::IncScore((CPower *)(this + param_2 * 0x6c + 8),param_3);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 177 行）：

```cpp
int CPowerManager::IncPowerScore(ENUM_POWER_SIDE_TYPE side, int score)
{
    if (((const CPowerWar*)((char*)this + 0x14c))->IsPowerWarOn() == 0)
    {
        return ((CPower*)((char*)this + 8 + side * 0x6c))->GetScore();
    }
    return ((CPower*)((char*)this + 8 + side * 0x6c))->IncScore(score);
}
```
