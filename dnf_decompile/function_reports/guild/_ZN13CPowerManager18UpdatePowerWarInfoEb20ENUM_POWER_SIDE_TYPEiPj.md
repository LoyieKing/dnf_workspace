# _ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj

`CPowerManager::UpdatePowerWarInfo(bool, ENUM_POWER_SIDE_TYPE, int, unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4c3a` | `0xc5` | `0x809ad18` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xbe>
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xad>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xb5>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xa4>
+mov    -0x10(%ebp),%eax
 shl    $0x2,%eax
 add    0x18(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xa5>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xa0>
+mov    -0x10(%ebp),%eax
 shl    $0x2,%eax
 add    0x18(%ebp),%eax
 mov    (%eax),%ebx
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xa8>
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xa0>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
-mov    %eax,-0xc(%ebp)
-mov    -0x14(%ebp),%eax
-shl    $0x2,%eax
-add    0x18(%ebp),%eax
-mov    (%eax),%eax
-mov    0x10(%ebp),%edx
-imul   $0x6c,%edx,%edx
-add    0x8(%ebp),%edx
-lea    0x8(%edx),%ecx
-mov    -0xc(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%edx
+shl    $0x2,%edx
+add    0x18(%ebp),%edx
+mov    (%edx),%edx
+mov    0x8(%ebp),%ecx
+mov    0x10(%ebp),%ebx
+imul   $0x6c,%ebx,%ebx
+add    $0x8,%ebx
+add    %ebx,%ecx
+mov    %eax,0xc(%esp)
+mov    %edx,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN6CPower18UpdatePowerWarInfoEijj>
-jmp    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xa9>
-nop
-jmp    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xa9>
-nop
-addl   $0x1,-0x14(%ebp)
-cmpl   $0x3,-0x14(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x3,-0x10(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0x27>
-jmp    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xbf>
+jne    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0x26>
+jmp    <T> <_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj+0xb6>
 nop
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::UpdatePowerWarInfo(bool, ENUM_POWER_SIDE_TYPE, int, unsigned int*) */

void __thiscall
CPowerManager::_ZN13CPowerManager18UpdatePowerWarInfoEb20ENUM_POWER_SIDE_TYPEiPj
          (CPowerManager *this,undefined4 param_1,int param_3,int param_4,int param_5)

{
  uint uVar1;
  CUser *this_00;
  int local_18;
  
  if (*(int *)(this + 4) != 0) {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      if (*(int *)(local_18 * 4 + param_5) != 0) {
        uVar1 = CApplication::Get_UserManager(*(CApplication **)(this + 4));
        this_00 = (CUser *)CUserManager::FindUser_CharNo(uVar1);
        if (this_00 != (CUser *)0x0) {
          uVar1 = CUser::GetGuildKey(this_00);
          CPower::UpdatePowerWarInfo
                    ((CPower *)(this + param_3 * 0x6c + 8),param_4,*(uint *)(local_18 * 4 + param_5)
                     ,uVar1);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 474 行）：

```cpp
void CPowerManager::UpdatePowerWarInfo(bool flag, ENUM_POWER_SIDE_TYPE side, int score, unsigned int* p)
{
    if (*(CApplication**)((char*)this + 4) == 0)
    {
        return;
    }
    for (int i = 0; i <= 3; i++)
    {
        if (p[i] != 0)
        {
            CUser* user = (*(CApplication**)((char*)this + 4))
                              ->Get_UserManager()
                              ->FindUser_CharNo(p[i]);
            if (user != 0)
            {
                ((CPower*)((char*)this + (int)side * 0x6c + 8))
                    ->UpdatePowerWarInfo(score, p[i], user->GetGuildKey());
            }
        }
    }
}
```
