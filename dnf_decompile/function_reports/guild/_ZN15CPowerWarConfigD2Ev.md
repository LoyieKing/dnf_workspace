# _ZN15CPowerWarConfigD2Ev

`CPowerWarConfig::~CPowerWarConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8060878` | `0x87` | `0x807f3e4` | `0x95` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV15CPowerWarConfig+0x8,(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CPowerWarConfig11Clear_TableEv>
-jmp    <T> <_ZN15CPowerWarConfigD1Ev+0x36>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN31ST_PowerWarEventStartTimeConfigD1Ev>
+jmp    <T> <_ZN15CPowerWarConfigD1Ev+0x44>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31ST_PowerWarEventStartTimeConfigD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN15CPowerWarConfigD1Ev+0x46>
+jmp    <T> <_ZN15CPowerWarConfigD1Ev+0x54>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31ST_PowerWarEventStartTimeConfigD1Ev>
-jmp    <T> <_ZN15CPowerWarConfigD1Ev+0x61>
+jmp    <T> <_ZN15CPowerWarConfigD1Ev+0x6f>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseD1Ev>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15CPowerWarConfigD1Ev+0x80>
+je     <T> <_ZN15CPowerWarConfigD1Ev+0x8e>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080608ed) */
/* CPowerWarConfig::~CPowerWarConfig() */

void __thiscall CPowerWarConfig::_ZN15CPowerWarConfigD2Ev(CPowerWarConfig *this)

{
  *(undefined ***)this = &PTR__ZN15CPowerWarConfigD2Ev_0811b8b8;
                    /* try { // try from 0806088f to 08060893 has its CatchHandler @ 08060896 */
  Clear_Table(this);
                    /* try { // try from 080608b7 to 080608bb has its CatchHandler @ 080608be */
  ST_PowerWarEventStartTimeConfig::~ST_PowerWarEventStartTimeConfig
            ((ST_PowerWarEventStartTimeConfig *)(this + 4));
  CTableBase::_ZN10CTableBaseD2Ev((CTableBase *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPowerWarConfig.cpp](source/DNFServer/GameServer/Guild/DNFPowerWarConfig.cpp)（约第 81 行）：

```cpp
CPowerWarConfig::~CPowerWarConfig()
{
    Clear_Table();
    m_info.~ST_PowerWarEventStartTimeConfig();
}
```
