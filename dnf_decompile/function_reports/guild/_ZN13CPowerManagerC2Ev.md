# _ZN13CPowerManagerC2Ev

`CPowerManager::CPowerManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a36b8` | `0xfc` | `0x809994e` | `0xfe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x2c,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV13CPowerManager+0x8,(%eax)
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN13CPowerManagerC1Ev+0x70>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
+mov    -0x1c(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+lea    (%eax,%edx,1),%esi
+mov    %esi,0x4(%esp)
+movl   $0x6c,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13CPowerManagerC1Ev+0x6c>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CPowerC1Ev>
+jmp    <T> <_ZN13CPowerManagerC1Ev+0x6c>
+mov    %edx,%edi
+mov    %eax,-0x30(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x30(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x2,-0x1c(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN13CPowerManagerC1Ev+0x1b>
 mov    0x8(%ebp),%eax
-lea    0x8(%eax),%esi
-mov    %esi,%edi
-mov    $0x2,%ebx
-jmp    <T> <_ZN13CPowerManagerC1Ev+0x39>
-mov    %edi,(%esp)
-call   <T> <_ZN6CPowerC1Ev>
-add    $0x6c,%edi
-sub    $0x1,%ebx
-cmp    $0xffffffff,%ebx
-setne  %al
-test   %al,%al
-jne    <T> <_ZN13CPowerManagerC1Ev+0x2b>
-jmp    <T> <_ZN13CPowerManagerC1Ev+0x7a>
+lea    0x14c(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x38,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13CPowerManagerC1Ev+0xc6>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9CPowerWarC1Ev>
+jmp    <T> <_ZN13CPowerManagerC1Ev+0xc6>
 mov    %edx,%edi
-mov    %eax,-0x1c(%ebp)
-test   %esi,%esi
-je     <T> <_ZN13CPowerManagerC1Ev+0x6d>
-mov    $0x2,%eax
-sub    %ebx,%eax
-imul   $0x6c,%eax,%eax
-lea    (%esi,%eax,1),%ebx
-cmp    %esi,%ebx
-je     <T> <_ZN13CPowerManagerC1Ev+0x6d>
-sub    $0x6c,%ebx
-mov    (%ebx),%eax
-mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
 mov    %ebx,(%esp)
-call   *%eax
-jmp    <T> <_ZN13CPowerManagerC1Ev+0x5b>
-mov    -0x1c(%ebp),%eax
+call   <T> <_ZdlPvS_>
+mov    -0x2c(%ebp),%eax
 mov    %edi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
-add    $0x14c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN9CPowerWarC1Ev>
+add    $0x184,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x184(%eax)
+add    $0x186,%eax
+movw   $0x3c,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0x3c,0x186(%eax)
+add    $0x188,%eax
+movb   $0x3,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x3,0x188(%eax)
-mov    0x8(%ebp),%eax
-movw   $0x0,0x18a(%eax)
-add    $0x2c,%esp
+add    $0x18a,%eax
+movw   $0x0,(%eax)
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
-mov    %edx,%esi
-mov    %eax,%edi
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-test   %eax,%eax
-je     <T> <_ZN13CPowerManagerC1Ev+0xf0>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-lea    0x144(%eax),%ebx
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-cmp    %eax,%ebx
-je     <T> <_ZN13CPowerManagerC1Ev+0xf0>
-sub    $0x6c,%ebx
-mov    (%ebx),%eax
-mov    (%eax),%eax
-mov    %ebx,(%esp)
-call   *%eax
-jmp    <T> <_ZN13CPowerManagerC1Ev+0xd8>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::CPowerManager() */

void __thiscall CPowerManager::_ZN13CPowerManagerC2Ev(CPowerManager *this)

{
  int iVar1;
  CPower *this_00;
  
  *(undefined ***)this = &PTR__CPowerManager_08136d40;
  *(undefined4 *)(this + 4) = 0;
  this_00 = (CPower *)(this + 8);
  for (iVar1 = 2; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 080a36e6 to 080a36ea has its CatchHandler @ 080a36fd */
    CPower::CPower(this_00);
    this_00 = this_00 + 0x6c;
  }
                    /* try { // try from 080a373d to 080a3741 has its CatchHandler @ 080a3776 */
  CPowerWar::CPowerWar((CPowerWar *)(this + 0x14c));
  this[0x184] = (CPowerManager)0x0;
  *(undefined2 *)(this + 0x186) = 0x3c;
  this[0x188] = (CPowerManager)0x3;
  *(undefined2 *)(this + 0x18a) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 95 行）：

```cpp
CPowerManager::CPowerManager()
{
    for (int i = 0; i < 3; i++)
    {
        new ((char*)this + 8 + i * 0x6c) CPower();
    }
    new ((char*)this + 0x14c) CPowerWar();
    *(char*)((char*)this + 0x184) = 0;
    *(unsigned short*)((char*)this + 0x186) = 0x3c;
    *(char*)((char*)this + 0x188) = 3;
    *(unsigned short*)((char*)this + 0x18a) = 0;
}
```
