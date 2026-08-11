# _ZN12CUserManager10DeleteUserEj

`CUserManager::DeleteUser(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80705f2` | `0x1ce` | `0x808c404` | `0x1ce` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,130 +1,130 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN12CUserManager10DeleteUserEj+0x25>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x1c6>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-setne  %al
-test   %al,%al
+setne  %bl
+test   %bl,%bl
 je     <T> <_ZN12CUserManager10DeleteUserEj+0x1c1>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CUserManager10DeleteUserEj+0x67>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x1c6>
 movl   $0xc,(%esp)
 call   <T> <_ZN16CDNFProhibitUsernwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUserC1Ev>
 jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x99>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
 movsbl %al,%edx
 mov    0xc(%ebp),%eax
 movl   $0x0,0x10(%esp)
 mov    %edx,0xc(%esp)
 movl   $0xa,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb>
 mov    0xc(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager18InsertProhibitUserEjP16CDNFProhibitUser>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CUserManager10DeleteUserEj+0x184>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
 movzbl %al,%esi
 mov    0xc(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x8b,0x8(%esp)
 movl   $&_ZZN12CUserManager10DeleteUserEjE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 movl   $0xa,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[INSERT_ERR_] CUserManager::DeleteUser() m_id : %s, time( %d ), Channel( %d )\n",0x8(%esp)
 movl   $"./log/ProhibitUser",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x1c(%ebp),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CUserManager10DeleteUserEj+0x184>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5eraseERS5_>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CUserManager10DeleteUserEj+0x1c1>
 mov    -0x20(%ebp),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CUserManager10DeleteUserEj+0x1ba>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserdlEPv>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CUserManager10DeleteUserEj+0x1c6>
 mov    $0x0,%eax
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
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
  CDNFProhibitUser *pCVar3;
  CServerInterface *pCVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint *puVar8;
  CMyFileLog local_2c [8];
  CUser *local_24;
  CDNFProhibitUser *local_20;
  
  cVar1 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x18));
  if (cVar1 != '\0') {
    return 0;
  }
  uVar5 = param_1;
  local_24 = (CUser *)FindUser((uint)this);
  if (local_24 != (CUser *)0x0) {
    iVar2 = CUser::GetGameServer(local_24);
    if (iVar2 == 0) {
      return 0;
    }
    pCVar3 = CDNFProhibitUser::operator_new((CDNFProhibitUser *)0xc,uVar5);
                    /* try { // try from 0807066c to 08070670 has its CatchHandler @ 08070673 */
    CDNFProhibitUser::CDNFProhibitUser(pCVar3);
    local_20 = pCVar3;
    pCVar4 = (CServerInterface *)CUser::GetGameServer(local_24);
    cVar1 = CServerInterface::GetChannelNo(pCVar4);
    CDNFProhibitUser::SetUserConnectableTime(local_20,param_1,10,cVar1,false);
    cVar1 = InsertProhibitUser(this,param_1,local_20);
    if (cVar1 != '\x01') {
      pCVar4 = (CServerInterface *)CUser::GetGameServer(local_24);
      uVar5 = CServerInterface::GetChannelNo(pCVar4);
      uVar6 = NumberToString(param_1,0);
      CMyFileLog::CMyFileLog(local_2c,"DeleteUser",0x8b);
      pcVar7 = "./log/ProhibitUser";
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/ProhibitUser",
                 "[INSERT_ERR_] CUserManager::DeleteUser() m_id : %s, time( %d ), Channel( %d )\n",
                 uVar6,10,uVar5 & 0xff);
      pCVar3 = local_20;
      if (local_20 != (CDNFProhibitUser *)0x0) {
        CDNFProhibitUser::~CDNFProhibitUser(local_20);
        CDNFProhibitUser::operator_delete(pCVar3,pcVar7);
      }
    }
    puVar8 = &param_1;
    iVar2 = std::
            map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::erase((uint *)(this + 0x18));
    this_00 = local_24;
    if (iVar2 == 1) {
      if (local_24 != (CUser *)0x0) {
        CUser::~CUser(local_24);
        CUser::operator_delete(this_00,puVar8);
      }
      return 1;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 527 行）：

```cpp
int CUserManager::DeleteUser(unsigned int dbid)
{
    if (m_users.empty())
    {
        return 0;
    }
    CUser* user = FindUser(dbid);
    register bool hasUser = user != 0;
    if (hasUser)
    {
        if (user->GetGameServer() == 0)
        {
            return 0;
        }
        CDNFProhibitUser* pu = new CDNFProhibitUser;
        pu->SetUserConnectableTime(
            dbid, 10, ((CServerInterface*)user->GetGameServer())->GetChannelNo(), false);
        if (InsertProhibitUser(dbid, pu) != 1)
        {
            DNF_LOG_SCOPE_LINE(0x8b,"./log/ProhibitUser",
                "[INSERT_ERR_] CUserManager::DeleteUser() m_id : %s, time( %d ), Channel( %d )\n",
                NumberToString(dbid, 0), 10,
                (unsigned int)((CServerInterface*)user->GetGameServer())->GetChannelNo() & 0xff);
            delete pu;
        }
        if (m_users.erase(dbid) == 1)
        {
            delete user;
            return 1;
        }
    }
    return 0;
}
```
