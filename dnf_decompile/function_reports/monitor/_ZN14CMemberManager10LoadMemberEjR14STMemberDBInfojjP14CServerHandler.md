# _ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler

`CMemberManager::LoadMember(unsigned int, STMemberDBInfo&, unsigned int, unsigned int, CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809acda` | `0x216` | `0x80621a6` | `0x216` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,134 +1,131 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x64,%esp
+sub    $0x68,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x6e>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x68>
 movl   $0x26d,0x8(%esp)
+movl   $&_ZZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager14FindMemberUserEj>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0xca>
+movl   $0x273,0x8(%esp)
 movl   $&_ZZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n",0x8(%esp)
+movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclUser is Null, member key(%d)\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0xd5>
-movl   $0x273,0x8(%esp)
-movl   $&_ZZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclUser is Null, member key(%d)\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-cwtl
+mov    %ax,-0xe(%ebp)
+movswl -0xe(%ebp),%eax
 mov    0x18(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj>
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember7IsEmptyEv>
 test   %al,%al
-je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x1f1>
-lea    -0x3a(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x139>
+movl   $0x1,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+lea    -0x42(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Monitor_Notice_Delete_Member_IdC1Ev>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x30(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2c(%ebp)
-lea    -0x3a(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x42(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 movl   $0x0,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x285,0x8(%esp)
 movl   $&_ZZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CMemberManager::LoadMember, true == pclMember->IsEmpty()\tChar id(%d), Member Key(%d)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager12DeleteMemberEjb>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-movl   $0x1,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
-mov    $0x1,%eax
-add    $0x64,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::LoadMember(unsigned int, STMemberDBInfo&, unsigned int, unsigned int,
   CServerHandler*) */

undefined4 __thiscall
CMemberManager::_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler
          (CMemberManager *this,uint param_1,STMemberDBInfo *param_2,uint param_3,uint param_4,
          CServerHandler *param_5)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  Packet_Monitor_Notice_Delete_Member_Id local_3e [10];
  undefined4 local_34;
  undefined4 local_30;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  CMember *local_14;
  CUser *local_10;
  
  local_14 = (CMember *)_ZN14CMemberManager10FindMemberEj((uint)this);
  if (local_14 == (CMember *)0x0) {
    CMyFileLog::CMyFileLog(local_2c,"LoadMember",0x26d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/Except",
               "[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n",param_1
              );
    uVar3 = 0;
  }
  else {
    local_10 = (CUser *)FindMemberUser((uint)this);
    if (local_10 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_24,"LoadMember",0x273);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/Except",
                 "[MEMBER]\tCMemberManager::LoadMember()\tpclUser is Null, member key(%d)\n",param_1
                );
      uVar3 = 0;
    }
    else {
      sVar2 = CUser::GetLevel(local_10);
      CMember::LoadMember(local_14,param_2,sVar2,param_3,param_4);
      cVar1 = CMember::IsEmpty(local_14);
      if (cVar1 == '\0') {
        CMember::NoticeMemberLogin_Out(local_14,local_10,'\x01');
        uVar3 = 1;
      }
      else {
        Packet_Monitor_Notice_Delete_Member_Id::Packet_Monitor_Notice_Delete_Member_Id(local_3e);
        local_34 = CUser::GetIdByChannel(local_10);
        local_30 = CUser::GetUniqCharNo(local_10);
        CUser::SendToGameserver(local_10,(char *)local_3e,0x12);
        SendToDBMemberUpdateCharInfo(this,param_5,param_1,'\0');
        uVar3 = CUser::GetUniqCharNo(local_10);
        CMyFileLog::CMyFileLog(local_1c,"LoadMember",0x285);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_1c,"./log/Except",
                   "CMemberManager::LoadMember, true == pclMember->IsEmpty()\tChar id(%d), Member Key(%d)"
                   ,uVar3,param_1);
        uVar4 = CUser::GetUniqCharNo(local_10);
        DeleteMember(this,uVar4,true);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h 等 290 个文件*
