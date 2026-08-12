# _ZN12CUserManager10DeleteUserEP5CUser

`CUserManager::DeleteUser(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8068bd8` | `0xea` | `0x808b04a` | `0xfa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,70 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0x20>
 mov    $0x0,%eax
-jmp    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xe4>
+jmp    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xf4>
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xdf>
+jne    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0x30>
+mov    $0x0,%eax
+jmp    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xf4>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0x48>
+je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0x4e>
 mov    $0x0,%eax
-jmp    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xe4>
+jmp    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xf4>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%eax
-lea    -0x14(%ebp),%edx
+lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseERS0_>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xdf>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xef>
+mov    -0x18(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x7d,0x8(%esp)
 movl   $&_ZZN12CUserManager10DeleteUserEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[USER LOGOUT] Disconnected User DB ID : %s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+cmpl   $0x0,0xc(%ebp)
+je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xef>
 mov    0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xd8>
+je     <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xe8>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserdlEPv>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xe4>
+jmp    <T> <_ZN12CUserManager10DeleteUserEP5CUser+0xf4>
 mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteUser(CUser*) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager10DeleteUserEP5CUser(CUserManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  CMyFileLog local_14 [12];
  
  cVar1 = std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)this);
  if (cVar1 != '\0') {
    return 0;
  }
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::GetGameServer(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = CUser::GetDBID(param_1);
    iVar2 = std::
            map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::erase((uint *)this);
    if (iVar2 == 1) {
      uVar4 = NumberToString(uVar3,0);
      CMyFileLog::CMyFileLog(local_14,"DeleteUser",0x7d);
      pcVar5 = "./log/User";
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/User","[USER LOGOUT] Disconnected User DB ID : %s\n",uVar4);
      if (param_1 != (CUser *)0x0) {
        CUser::~CUser(param_1);
        CUser::operator_delete(param_1,pcVar5);
      }
      return 1;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 142 行）：

```cpp
int CUserManager::DeleteUser(CUser* user)
{
    if (m_users.empty())
    {
        return 0;
    }
    if (user == 0)
    {
        return 0;
    }
    if (user->GetGameServer() == 0)
    {
        return 0;
    }
    unsigned int dbid = user->GetDBID();
    if (m_users.erase(dbid) == 1)
    {
        char* mid = NumberToString(dbid, 0);
        DNF_LOG_SCOPE_LINE(0x7d, "./log/User", "[USER LOGOUT] Disconnected User DB ID : %s\n", mid);
        if (user != 0)
        {
            delete user;
            return 1;
        }
    }
    return 0;
}
```
