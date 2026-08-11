# _ZN13CPowerManager18StartPowerWarEventEv

`CPowerManager::StartPowerWarEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3cda` | `0x7a` | `0x8099fa4` | `0x7c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x14c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CPowerWar8setEventEv>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN13CPowerManager18StartPowerWarEventEv+0x37>
-mov    -0xc(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+jmp    <T> <_ZN13CPowerManager18StartPowerWarEventEv+0x39>
+mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower9InitPowerEv>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x2,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN13CPowerManager18StartPowerWarEventEv+0x1f>
 movl   $0xb9,0x8(%esp)
 movl   $"StartPowerWarEvent",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPowerManager::StartPowerWarEvent",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::StartPowerWarEvent() */

void __thiscall CPowerManager::_ZN13CPowerManager18StartPowerWarEventEv(CPowerManager *this)

{
  CMyFileLog local_18 [8];
  int local_10;
  
  CPowerWar::setEvent((CPowerWar *)(this + 0x14c));
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    CPower::InitPower((CPower *)(this + local_10 * 0x6c + 8));
  }
  CMyFileLog::CMyFileLog(local_18,"StartPowerWarEvent",0xb9);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/Power","CPowerManager::StartPowerWarEvent");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 191 行）：

```cpp
void CPowerManager::StartPowerWarEvent()
{
    ((CPowerWar*)((char*)this + 0x14c))->CPowerWar::setEvent();
    for (int i = 0; i < 3; i++)
    {
        ((CPower*)((char*)this + i * 0x6c + 8))->InitPower();
    }
    DNF_LOG_SCOPE_LINE(0xb9, "./log/Power", "CPowerManager::StartPowerWarEvent");
}
```
