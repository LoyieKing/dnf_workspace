# _ZN13CPowerManager16RewardBonusPointEv

`CPowerManager::RewardBonusPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4a24` | `0x56` | `0x809ad42` | `0x44` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-test   %al,%al
-je     <T> <_ZN13CPowerManager16RewardBonusPointEv+0x50>
+add    $0x184,%eax
+movzbl (%eax),%eax
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN13CPowerManager16RewardBonusPointEv+0x42>
+cmpb   $0x2,-0x9(%ebp)
+jg     <T> <_ZN13CPowerManager16RewardBonusPointEv+0x42>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-cmp    $0x2,%al
-jg     <T> <_ZN13CPowerManager16RewardBonusPointEv+0x53>
-mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-movsbl %al,%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+movzbl -0x9(%ebp),%edx
+movzbl %dl,%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower21GetPowerWarCharacInfoEv>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19CPowerWarCharacInfo9CalcBonusEv>
-jmp    <T> <_ZN13CPowerManager16RewardBonusPointEv+0x54>
-nop
-jmp    <T> <_ZN13CPowerManager16RewardBonusPointEv+0x54>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::RewardBonusPoint() */

void __thiscall CPowerManager::_ZN13CPowerManager16RewardBonusPointEv(CPowerManager *this)

{
  CPowerWarCharacInfo *this_00;
  
  if ((this[0x184] != (CPowerManager)0x0) && ((char)this[0x184] < '\x03')) {
    this_00 = (CPowerWarCharacInfo *)
              CPower::GetPowerWarCharacInfo((CPower *)(this + (char)this[0x184] * 0x6c + 8));
    CPowerWarCharacInfo::CalcBonus(this_00);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 431 行）：

```cpp
void CPowerManager::RewardBonusPoint()
{
    char winnerSide = *(char*)((char*)this + 0x184);
    if (winnerSide != 0 && winnerSide < 3)
    {
        ((CPower*)((char*)this + (unsigned char)winnerSide * 0x6c + 8))
            ->GetPowerWarCharacInfo()->CalcBonus();
    }
}
```
