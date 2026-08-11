# _ZN13CPowerManager12SetPowerInfoEcii

`CPowerManager::SetPowerInfo(char, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a38a2` | `0x6d` | `0x8099b04` | `0x72` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-movzbl -0xc(%ebp),%edx
-mov    %dl,0x184(%eax)
+lea    0x184(%eax),%edx
+movzbl -0xc(%ebp),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN13CPowerManager12SetPowerInfoEcii+0x58>
+je     <T> <_ZN13CPowerManager12SetPowerInfoEcii+0x5d>
 mov    0x8(%ebp),%eax
 lea    0x74(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN6CPower8SetScoreEi>
 mov    0x8(%ebp),%eax
 lea    0xe0(%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN6CPower8SetScoreEi>
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager14SetPowerDBFlagEt>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SetPowerInfo(char, int, int) */

void __thiscall
CPowerManager::_ZN13CPowerManager12SetPowerInfoEcii
          (CPowerManager *this,char param_1,int param_2,int param_3)

{
  char cVar1;
  
  this[0x184] = (CPowerManager)param_1;
  cVar1 = IsPowerWarOn(this);
  if (cVar1 != '\x01') {
    CPower::SetScore((CPower *)(this + 0x74),param_2);
    CPower::SetScore((CPower *)(this + 0xe0),param_3);
  }
  SetPowerDBFlag(this,4);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 123 行）：

```cpp
void CPowerManager::SetPowerInfo(char side, int score1, int score2)
{
    *(char*)((char*)this + 0x184) = side;
    if (IsPowerWarOn() != 1)
    {
        ((CPower*)((char*)this + 0x74))->SetScore(score1);
        ((CPower*)((char*)this + 0xe0))->SetScore(score2);
    }
    SetPowerDBFlag(4);
}
```
