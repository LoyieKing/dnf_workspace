# _ZN12CUserManager10DeleteUserEj

`CUserManager::DeleteUser(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8068ab8` | `0x120` | `0x808b46e` | `0x10b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN12CUserManager10DeleteUserEj+0x22>
-mov    $0x0,%eax
-jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x118>
+jne    <T> <_ZN12CUserManager10DeleteUserEj+0x100>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager10DeleteUserEj+0x113>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN12CUserManager10DeleteUserEj+0x104>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager10DeleteUserEj+0x64>
-mov    $0x0,%eax
-jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x118>
+jne    <T> <_ZN12CUserManager10DeleteUserEj+0x103>
 mov    0x8(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseERS0_>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager10DeleteUserEj+0x113>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%edi
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
+je     <T> <_ZN12CUserManager10DeleteUserEj+0x104>
 mov    0xc(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,%esi
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x5f,0x8(%esp)
 movl   $&_ZZN12CUserManager10DeleteUserEjE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[USER LOGOUT] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x1c(%ebp),%ebx
+mov    -0x10(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CUserManager10DeleteUserEj+0x10c>
+je     <T> <_ZN12CUserManager10DeleteUserEj+0x104>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserdlEPv>
-mov    $0x1,%eax
-jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x118>
-mov    $0x0,%eax
-add    $0x3c,%esp
+jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x104>
+nop
+jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x104>
+nop
+add    $0x30,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteUser(unsigned int) */

undefined4 __thiscall CUserManager::_ZN12CUserManager10DeleteUserEj(CUserManager *this,uint param_1)

{
  CUser *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  CMyFileLog local_28 [8];
  CUser *local_20;
  
  cVar1 = std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)this);
  if (cVar1 != '\0') {
    return 0;
  }
  local_20 = (CUser *)FindUser((uint)this);
  if (local_20 != (CUser *)0x0) {
    iVar2 = CUser::GetGameServer(local_20);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = std::
            map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::erase((uint *)this);
    if (iVar2 == 1) {
      uVar3 = CUser::GetCharName(local_20);
      uVar4 = CUser::GetUniqCharNo(local_20);
      uVar5 = NumberToString(param_1,0);
      CMyFileLog::CMyFileLog(local_28,"DeleteUser",0x5f);
      pcVar6 = "./log/User";
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/User",
                 "[USER LOGOUT] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",uVar5,
                 uVar4,uVar3);
      this_00 = local_20;
      if (local_20 != (CUser *)0x0) {
        CUser::~CUser(local_20);
        CUser::operator_delete(this_00,pcVar6);
      }
      return 1;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 118 行）：

```cpp
void CUserManager::DeleteUser(unsigned int dbid)
{
    if (m_users.empty())
    {
        return;
    }
    CUser* user = FindUser(dbid);
    if (user != 0)
    {
        if (user->GetGameServer() == 0)
        {
            return;
        }
        if (m_users.erase(dbid) == 1)
        {
            char* mid = NumberToString(dbid, 0);
            DNF_LOG_SCOPE_LINE(0x5f,"./log/User",
                "[USER LOGOUT] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",
                mid, user->GetUniqCharNo(), user->GetCharName());
            delete user;
        }
    }
}
```
