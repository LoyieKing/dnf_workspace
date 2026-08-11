# _ZN12CUserManager10CreateUserEjjPciP11CGameServer

`CUserManager::CreateUser(unsigned int, unsigned int, char*, int, CGameServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8069286` | `0x223` | `0x808b81e` | `0x238` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,143 +1,149 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x5c,%esp
 movl   $0x8c,(%esp)
 call   <T> <_ZN5CUsernwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserC1Ev>
 jmp    <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x3b>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserdlEPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-mov    %ebx,-0x1c(%ebp)
+mov    %ebx,-0x28(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7SetDBIDEj>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13SetUniqCharNoEj>
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14SetIdByChannelEi>
 mov    0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13SetGameServerEP11CGameServer>
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager10InsertUserEjP5CUser>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0xfc>
+je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x103>
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x24(%ebp)
 movl   $0x13c,0x8(%esp)
 movl   $&_ZZN12CUserManager10CreateUserEjjPciP11CGameServerE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"uDBID(%s) uCharNo(%d) is already exist at m_mapUsers!",0x8(%esp)
 movl   $"./log/LoginErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x2,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetUserPosStateEh>
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x218>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x22d>
+mov    -0x28(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x18f>
+je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x19d>
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x20(%ebp)
 movl   $0x146,0x8(%esp)
 movl   $&_ZZN12CUserManager10CreateUserEjjPciP11CGameServerE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"uDBID(%s) uCharNo(%d) is already exist at m_mapCharNoUsers!",0x8(%esp)
 movl   $"./log/LoginErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x205>
+je     <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer+0x21a>
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x1c(%ebp)
 movl   $0x14a,0x8(%esp)
 movl   $&_ZZN12CUserManager10CreateUserEjjPciP11CGameServerE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",0x8(%esp)
 movl   $"./log/LoginErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x3,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetUserPosStateEh>
-mov    -0x1c(%ebp),%eax
-add    $0x4c,%esp
+mov    -0x28(%ebp),%eax
+add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::CreateUser(unsigned int, unsigned int, char*, int, CGameServer*) */

CUser * __thiscall
CUserManager::_ZN12CUserManager10CreateUserEjjPciP11CGameServer
          (CUserManager *this,uint param_1,uint param_2,char *param_3,int param_4,
          CGameServer *param_5)

{
  char cVar1;
  CUser *this_00;
  undefined4 uVar2;
  uint in_stack_ffffffa8;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CUser *local_20;
  
  this_00 = CUser::operator_new((CUser *)0x8c,in_stack_ffffffa8);
                    /* try { // try from 080692a2 to 080692a6 has its CatchHandler @ 080692a9 */
  CUser::CUser(this_00);
  local_20 = this_00;
  CUser::SetDBID(this_00,param_1);
  CUser::SetUniqCharNo(local_20,param_2);
  CUser::SetIdByChannel(local_20,param_4);
  CUser::SetGameServer(local_20,param_5);
  cVar1 = InsertUser(this,param_1,local_20);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(param_1,0);
    CMyFileLog::CMyFileLog(local_38,"CreateUser",0x13c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/LoginErr","uDBID(%s) uCharNo(%d) is already exist at m_mapUsers!",
               uVar2,param_2);
  }
  CUser::SetUserPosState(local_20,'\x02');
  if (param_2 != 0) {
    cVar1 = InsertUser_CharNo(this,param_2,local_20);
    if (cVar1 != '\x01') {
      uVar2 = NumberToString(param_1,0);
      CMyFileLog::CMyFileLog(local_30,"CreateUser",0x146);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/LoginErr",
                 "uDBID(%s) uCharNo(%d) is already exist at m_mapCharNoUsers!",uVar2,param_2);
    }
    cVar1 = InsertUser_CharName(this,param_3,local_20);
    if (cVar1 != '\x01') {
      uVar2 = NumberToString(param_1,0);
      CMyFileLog::CMyFileLog(local_28,"CreateUser",0x14a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/LoginErr",
                 "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",uVar2,param_3);
    }
    CUser::SetUserPosState(local_20,'\x03');
  }
  return local_20;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFUserManager.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
