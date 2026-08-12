# _ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv

`village_attacked::CVillageAttackedManager::GetMaxHuntingPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a847c` | `0xb3` | `0x80a76aa` | `0xb3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jle    <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0x49>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0x49>
 cmpl   $0x11,-0xc(%ebp)
-jg     <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0x49>
+ja     <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0x49>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager4SizeEv>
 mov    -0xc(%ebp),%edx
-mov    &_ZN16village_attackedL22HuntingPointMultiplierE(,%edx,4),%edx
+mov    &_ZN16village_attacked22HuntingPointMultiplierE(,%edx,4),%edx
 imul   %edx,%eax
 jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0xb1>
 cmpl   $0x61,-0xc(%ebp)
-jle    <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0x6f>
+jbe    <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0x6f>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager4SizeEv>
 mov    &_ZN16village_attacked26HUNTING_POINT_WEIGTH_CONSTE,%edx
 imul   %edx,%eax
 jmp    <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv+0xb1>
 movl   $0xfe,0x8(%esp)
 movl   $&_ZZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEvE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"ServerGroup is over REAL_GROUP_MAX : %d",0x8(%esp)
 movl   $"./log/village",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::GetMaxHuntingPoint() */

int __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv(CVillageAttackedManager *this)

{
  CUserManager *pCVar1;
  int iVar2;
  CMyFileLog local_18 [8];
  uint local_10;
  
  local_10 = CApplication::Get_ServerGroup(*(CApplication **)this);
  local_10 = local_10 & 0xff;
  if ((local_10 == 0) || (0x11 < local_10)) {
    if (local_10 < 0x62) {
      CMyFileLog::CMyFileLog(local_18,"GetMaxHuntingPoint",0xfe);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_18,"./log/village","ServerGroup is over REAL_GROUP_MAX : %d",local_10);
      iVar2 = 0;
    }
    else {
      pCVar1 = (CUserManager *)CApplication::Get_UserManager(*(CApplication **)this);
      iVar2 = CUserManager::Size(pCVar1);
      iVar2 = iVar2 * HUNTING_POINT_WEIGTH_CONST;
    }
  }
  else {
    pCVar1 = (CUserManager *)CApplication::Get_UserManager(*(CApplication **)this);
    iVar2 = CUserManager::Size(pCVar1);
    iVar2 = iVar2 * *(int *)(HuntingPointMultiplier + local_10 * 4);
  }
  return iVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 253 行）：

```cpp
int CVillageAttackedManager::GetMaxHuntingPoint()
{
    unsigned int group = (unsigned int)m_app->Get_ServerGroup() & 0xff;
    if (0 < group && group <= 0x11)
    {
        return m_app->Get_UserManager()->Size() * HuntingPointMultiplier[group];
    }
    if (group > 0x61)
    {
        return m_app->Get_UserManager()->Size() * HUNTING_POINT_WEIGTH_CONST;
    }
    DNF_LOG_SCOPE_AT(__FUNCTION__, 0xfe, "./log/village", "ServerGroup is over REAL_GROUP_MAX : %d", group);
    return 0;
}
```
