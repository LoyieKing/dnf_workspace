# _ZN18CMemoryCashManager13IsRightObjectEP5CUser

`CMemoryCashManager::IsRightObject(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a1c20` | `0x2e` | `0x8096806` | `0x1e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18GetBlackListDBFlagEv>
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
 setne  %al
-test   %al,%al
-je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUser+0x27>
-mov    $0x1,%eax
-jmp    <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUser+0x2c>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::IsRightObject(CUser*) */

bool __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager13IsRightObjectEP5CUser
          (CMemoryCashManager *this,CUser *param_1)

{
  uint uVar1;
  
  uVar1 = CUser::GetBlackListDBFlag(param_1);
  return (uVar1 & 4) != 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemoryCashManager.cpp](source/DNFServer/GameServer/Guild/MemoryCashManager.cpp)（约第 101 行）：

```cpp
bool CMemoryCashManager::IsRightObject(CUser* user)
{
    return (user->GetBlackListDBFlag() & 4) != 0;
}
```
