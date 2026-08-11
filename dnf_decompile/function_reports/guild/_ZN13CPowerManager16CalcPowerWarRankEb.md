# _ZN13CPowerManager16CalcPowerWarRankEb

`CPowerManager::CalcPowerWarRank(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3f4c` | `0x10b` | `0x8099a68` | `0x118` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x34,%esp
+sub    $0x44,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x1c(%ebp)
-cmpb   $0x0,-0x1c(%ebp)
+mov    %al,-0x2c(%ebp)
+cmpb   $0x0,-0x2c(%ebp)
 je     <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x1a>
-mov    $"All",%ebx
+mov    $"All",%eax
 jmp    <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x1f>
-mov    $"Winner",%ebx
+mov    $"Winner",%eax
+mov    %eax,-0xc(%ebp)
 movl   $0x17c,0x8(%esp)
 movl   $&_ZZN13CPowerManager16CalcPowerWarRankEbE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPowerManager::CalcPowerWarRank(%s)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x82>
+cmpb   $0x0,-0x2c(%ebp)
+je     <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x88>
 mov    0x8(%ebp),%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower16CalcPowerWarRankEv>
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower16CalcPowerWarRankEv>
-jmp    <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x105>
+jmp    <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x112>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
+add    $0x184,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x9e>
+je     <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0xa6>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
+add    $0x184,%eax
+movzbl (%eax),%eax
 cmp    $0x2,%al
-jle    <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0xe7>
+jle    <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0xf0>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
+add    $0x184,%eax
+movzbl (%eax),%eax
 movsbl %al,%ebx
 movl   $0x187,0x8(%esp)
 movl   $&_ZZN13CPowerManager16CalcPowerWarRankEbE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"invalid winner side income(%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x105>
+jmp    <T> <_ZN13CPowerManager16CalcPowerWarRankEb+0x112>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-movsbl %al,%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+mov    0x8(%ebp),%edx
+add    $0x184,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower16CalcPowerWarRankEv>
-add    $0x34,%esp
+add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::CalcPowerWarRank(bool) */

void __thiscall
CPowerManager::_ZN13CPowerManager16CalcPowerWarRankEb(CPowerManager *this,bool param_1)

{
  CPowerManager CVar1;
  char *pcVar2;
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [12];
  
  if (param_1) {
    pcVar2 = "All";
  }
  else {
    pcVar2 = "Winner";
  }
  CMyFileLog::CMyFileLog(local_1c,"CalcPowerWarRank",0x17c);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_1c,"./log/Power","CPowerManager::CalcPowerWarRank(%s)",pcVar2);
  if (param_1) {
    CPower::CalcPowerWarRank();
    CPower::CalcPowerWarRank();
  }
  else if ((this[0x184] == (CPowerManager)0x0) || ('\x02' < (char)this[0x184])) {
    CVar1 = this[0x184];
    CMyFileLog::CMyFileLog(local_14,"CalcPowerWarRank",0x187);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Power","invalid winner side income(%d)",(int)(char)CVar1);
  }
  else {
    CPower::CalcPowerWarRank();
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 246 行）：

```cpp
void CPowerManager::CalcPowerWarRank(bool flag)
{
    const char* s = flag ? "All" : "Winner";
    DNF_LOG_SCOPE_LINE(0x17c, "./log/Power", "CPowerManager::CalcPowerWarRank(%s)", s);
    if (flag)
    {
        ((CPower*)((char*)this + 0x74))->CalcPowerWarRank();
        ((CPower*)((char*)this + 0xe0))->CalcPowerWarRank();
    }
    else if (*(char*)((char*)this + 0x184) == 0 ||
             *(char*)((char*)this + 0x184) > 2)
    {
        DNF_LOG_SCOPE_LINE(0x187,"./log/Power", "invalid winner side income(%d)",
            (int)*(char*)((char*)this + 0x184));
    }
    else
    {
        ((CPower*)((char*)this + (unsigned char)*(char*)((char*)this + 0x184) * 0x6c + 8))
            ->CalcPowerWarRank();
    }
}
```
