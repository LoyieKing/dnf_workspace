# _ZN13CPowerManager17ComputeWinnerSideEv

`CPowerManager::ComputeWinnerSide()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3d54` | `0x82` | `0x809a020` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x14,%esp
+sub    $0x28,%esp
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-cmp    %eax,%ebx
-setg   %al
-test   %al,%al
-je     <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x3f>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
+jge    <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x41>
 mov    $0x1,%eax
-jmp    <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x7c>
+jmp    <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x81>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-cmp    %eax,%ebx
-setl   %al
-test   %al,%al
-je     <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x77>
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0xc(%ebp),%eax
+jge    <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x7c>
 mov    $0x2,%eax
-jmp    <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x7c>
+jmp    <T> <_ZN13CPowerManager17ComputeWinnerSideEv+0x81>
 mov    $0x0,%eax
-add    $0x14,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::ComputeWinnerSide() */

undefined4 __thiscall CPowerManager::_ZN13CPowerManager17ComputeWinnerSideEv(CPowerManager *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,1);
  iVar2 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,2);
  if (iVar2 < iVar1) {
    uVar3 = 1;
  }
  else {
    iVar1 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,1);
    iVar2 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,2);
    if (iVar1 < iVar2) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 201 行）：

```cpp
int CPowerManager::ComputeWinnerSide()
{
    int a = GetPowerScore((ENUM_POWER_SIDE_TYPE)1);
    int b = GetPowerScore((ENUM_POWER_SIDE_TYPE)2);
    if (b < a)
    {
        return 1;
    }
    a = GetPowerScore((ENUM_POWER_SIDE_TYPE)1);
    b = GetPowerScore((ENUM_POWER_SIDE_TYPE)2);
    if (a < b)
    {
        return 2;
    }
    return 0;
}
```
