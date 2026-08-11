# _ZN13CPowerManagerD1Ev

`CPowerManager::~CPowerManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a37b4` | `0xac` | `0x8099a4c` | `0x73` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x1c,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV13CPowerManager+0x8,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x14c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CPowerWarD1Ev>
-jmp    <T> <_ZN13CPowerManagerD1Ev+0x62>
-mov    %edx,%esi
-mov    %eax,%edi
+movl   $0x2,-0xc(%ebp)
+jmp    <T> <_ZN13CPowerManagerD1Ev+0x51>
 mov    0x8(%ebp),%eax
-add    $0x8,%eax
-test   %eax,%eax
-je     <T> <_ZN13CPowerManagerD1Ev+0x56>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-lea    0x144(%eax),%ebx
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-cmp    %eax,%ebx
-je     <T> <_ZN13CPowerManagerD1Ev+0x56>
-sub    $0x6c,%ebx
-mov    (%ebx),%eax
+mov    -0xc(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    (%eax),%eax
-mov    %ebx,(%esp)
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    -0xc(%ebp),%ecx
+imul   $0x6c,%ecx,%ecx
+add    $0x8,%ecx
+add    %ecx,%edx
+mov    %edx,(%esp)
 call   *%eax
-jmp    <T> <_ZN13CPowerManagerD1Ev+0x3e>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-test   %eax,%eax
-je     <T> <_ZN13CPowerManagerD1Ev+0x90>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-lea    0x144(%eax),%ebx
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-cmp    %eax,%ebx
-je     <T> <_ZN13CPowerManagerD1Ev+0x90>
-sub    $0x6c,%ebx
-mov    (%ebx),%eax
-mov    (%eax),%eax
-mov    %ebx,(%esp)
-call   *%eax
-jmp    <T> <_ZN13CPowerManagerD1Ev+0x78>
+subl   $0x1,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+not    %eax
+shr    $0x1f,%eax
+test   %al,%al
+jne    <T> <_ZN13CPowerManagerD1Ev+0x28>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN13CPowerManagerD1Ev+0xa4>
+je     <T> <_ZN13CPowerManagerD1Ev+0x71>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
-add    $0x1c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080a384d) */
/* CPowerManager::~CPowerManager() */

void __thiscall CPowerManager::_ZN13CPowerManagerD1Ev(CPowerManager *this)

{
  CPowerManager *pCVar1;
  
  *(undefined ***)this = &PTR__ZN13CPowerManagerD1Ev_08136d40;
                    /* try { // try from 080a37d1 to 080a37d5 has its CatchHandler @ 080a37d8 */
  CPowerWar::~CPowerWar((CPowerWar *)(this + 0x14c));
  if (this != (CPowerManager *)0xfffffff8) {
    pCVar1 = this + 0x14c;
    while (pCVar1 != this + 8) {
      pCVar1 = pCVar1 + -0x6c;
      (*(code *)**(undefined4 **)pCVar1)(pCVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 108 行）：

```cpp
CPowerManager::~CPowerManager()
{
    ((CPowerWar*)((char*)this + 0x14c))->CPowerWar::~CPowerWar();
    for (int i = 2; i >= 0; i--)
    {
        ((CPower*)((char*)this + 8 + i * 0x6c))->~CPower();
    }
}
```
