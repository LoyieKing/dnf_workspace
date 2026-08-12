# _ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj

`CPacketTranslater::GuildJoin(CGuild*, CUser*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80793b0` | `0x235` | `0x806fa3c` | `0x252` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,150 +1,155 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
 cmpl   $0x0,0x8(%ebp)
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x22a>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x24b>
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x22d>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x24b>
 movl   $0x4,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetGuildMemFlagEt>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21SendSetGuildKeyToUserEjj>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0xc9>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0xcc>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0xa41,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserjE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[INSERT_ERR]\tChar Key : %d\t Insert False\n",0x8(%esp)
 movl   $"./log/GuildMember",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x1fb>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x21e>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x108>
+je     <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x10e>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26IncTotalCnt_Of_GuildDBInfoEv>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 mov    %eax,%ebx
 movl   $0xa4a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserjE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"GUILD JOIN guild(%s) char(%s)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x5e(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21ST_Notice_Guild_EnterC1Ev>
+movl   $0x41,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x59(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x59(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,-0x5e(%ebp)
+mov    %eax,(%ebx)
+lea    -0x59(%ebp),%eax
+lea    0x4(%eax),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+mov    %eax,(%ebx)
+lea    -0x59(%ebp),%eax
+lea    0x8(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x56(%ebp)
-mov    0x10(%ebp),%eax
-mov    %eax,-0x1d(%ebp)
-movb   $0x0,-0x19(%ebp)
+mov    %eax,(%ebx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x5e(%ebp),%eax
+lea    -0x59(%ebp),%eax
 add    $0x23,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x5e(%ebp),%eax
+lea    -0x59(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x5a(%ebp)
-lea    -0x5e(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser32MakeGameServerSendUserInfoPacketEj>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x22e>
-nop
-jmp    <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj+0x22e>
-nop
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::GuildJoin(CGuild*, CUser*, unsigned int) */

void CPacketTranslater::_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj
               (CGuild *param_1,CUser *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined1 auStack_56 [23];
  undefined1 auStack_3f [30];
  uint local_21;
  undefined1 local_1d;
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [8];
  
  if ((param_1 != (CGuild *)0x0) && (param_2 != (CUser *)0x0)) {
    CUser::SetGuildMemFlag(param_2,4);
    uVar2 = CUser::GetUniqCharNo(param_2);
    uVar3 = CGuild::GetGuildKey(param_1);
    CUser::SendSetGuildKeyToUser(param_2,uVar3,uVar2);
    uVar2 = CUser::GetUniqCharNo(param_2);
    cVar1 = CGuild::InsertGuildMember(param_1,uVar2,param_2);
    if (cVar1 != '\x01') {
      uVar4 = CUser::GetUniqCharNo(param_2);
      CMyFileLog::CMyFileLog(local_1c,"GuildJoin",0xa41);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/GuildMember","[INSERT_ERR]\tChar Key : %d\t Insert False\n",uVar4);
    }
    cVar1 = CGuild::IsSetGuildDBFlag(param_1,4);
    if (cVar1 != '\0') {
      cVar1 = CGuild::LoadGuildOneMemberProxy(param_1,param_2);
      if (cVar1 != '\x01') {
        CGuild::IncTotalCnt_Of_GuildDBInfo(param_1);
      }
      uVar4 = CUser::GetCharName(param_2);
      uVar5 = CGuild::GetGuildName(param_1);
      CMyFileLog::CMyFileLog(local_14,"GuildJoin",0xa4a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/GuildModify","GUILD JOIN guild(%s) char(%s)",uVar5,uVar4);
      ST_Notice_Guild_Enter::ST_Notice_Guild_Enter((ST_Notice_Guild_Enter *)&local_62);
      local_62 = CGuild::GetGuildKey(param_1);
      local_5a = CUser::GetUniqCharNo(param_2);
      local_21 = param_3;
      local_1d = 0;
      pvVar6 = (void *)CUser::GetCharName(param_2);
      memcpy(auStack_3f,pvVar6,0x1d);
      pvVar6 = (void *)CGuild::GetGuildName(param_1);
      memcpy(auStack_56,pvVar6,0x16);
      local_5e = CUser::GetDBID(param_2);
      CGuild::NoticeEnterToGuildMember(param_1,(char *)&local_62);
    }
    uVar2 = CGuild::GetGuildKey(param_1);
    CUser::MakeGameServerSendUserInfoPacket(param_2,uVar2);
    CGuild::SendGuildInfoToMembers(param_1,false);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1930 行）：

```cpp
void CPacketTranslater::GuildJoin(CGuild* guild, CUser* user, unsigned int dbid)
{
    if (guild != 0 && user != 0)
    {
        user->SetGuildMemFlag(4);
        user->SendSetGuildKeyToUser(guild->GetGuildKey(), user->GetUniqCharNo());
        if (guild->InsertGuildMember(user->GetUniqCharNo(), user) != 1)
        {
            DNF_LOG_SCOPE_LINE(0xa41, "./log/GuildMember", "[INSERT_ERR]\tChar Key : %d\t Insert False\n",
                user->GetUniqCharNo());
        }
        if (guild->IsSetGuildDBFlag(4) != 0)
        {
            if (guild->LoadGuildOneMemberProxy(user) != 1)
            {
                guild->IncTotalCnt_Of_GuildDBInfo();
            }
            DNF_LOG_SCOPE_LINE(0xa4a,"./log/GuildModify", "GUILD JOIN guild(%s) char(%s)",
                guild->GetGuildName(), user->GetCharName());
            ST_Notice_Guild_Enter info;
            memset(&info, 0, sizeof(info));
            *(unsigned int*)((char*)&info + 0) = guild->GetGuildKey();
            *(unsigned int*)((char*)&info + 4) = user->GetDBID();
            *(unsigned int*)((char*)&info + 8) = user->GetUniqCharNo();
            memcpy((char*)&info + 0x23, user->GetCharName(), 0x1d);
            memcpy((char*)&info + 0xc, guild->GetGuildName(), 0x16);
            guild->NoticeEnterToGuildMember((char*)&info);
        }
        user->MakeGameServerSendUserInfoPacket(guild->GetGuildKey());
        guild->SendGuildInfoToMembers(false);
    }
}
```
