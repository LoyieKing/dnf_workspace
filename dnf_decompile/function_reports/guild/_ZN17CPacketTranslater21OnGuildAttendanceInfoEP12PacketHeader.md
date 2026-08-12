# _ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader

`CPacketTranslater::OnGuildAttendanceInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808902a` | `0x287` | `0x807ded4` | `0x286` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,161 +1,167 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x67>
+jne    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x52>
 movl   $0x200e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildAttendanceInfo : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x280>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x27f>
+mov    -0x20(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
 mov    -0x1c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0xce>
+je     <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0xc0>
 movl   $0x2014,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildAttendanceInfo : 0 == pGuild",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x280>
-mov    -0x1c(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x27f>
+mov    -0x20(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x132>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x126>
 movl   $0x201a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildAttendanceInfo : 0 == pUser",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x280>
-lea    -0x73(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x27f>
+lea    -0x77(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_Guild_Attendance_Info_ReplyC1Ev>
-mov    -0x14(%ebp),%eax
+lea    -0x77(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+lea    -0x77(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x65(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x69(%ebp)
+mov    %eax,(%ebx)
+lea    -0x77(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x20(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+lea    -0x77(%ebp),%eax
+add    $0x13,%eax
+mov    %eax,0x8(%esp)
 mov    -0x1c(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0x61(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-lea    -0x73(%ebp),%ecx
-add    $0x13,%ecx
-mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo>
-lea    -0x73(%ebp),%eax
+lea    -0x77(%ebp),%eax
 movl   $0x2f,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x280>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x27f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x226>
+jne    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x225>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x2029,0x8(%esp)
+movl   $"OnGuildAttendanceInfo",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x2029,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnApproveJoinGuild Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x21e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x280>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x27f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x202e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnApproveJoinGuild Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x27b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader+0x27a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildAttendanceInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_Guild_Attendance_Info_Reply local_77 [10];
  undefined4 local_6d;
  undefined4 local_69;
  PacketHeader local_65;
  STAttendanceInfo aSStack_64 [28];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  PacketHeader *local_20;
  undefined4 local_1c;
  CUser *local_18;
  int local_14;
  
  local_20 = param_1;
  local_1c = 0;
  local_18 = (CUser *)0x0;
  local_14 = 0;
  if (m_pclApp == 0) {
                    /* try { // try from 0808906c to 080891ce has its CatchHandler @ 080891d4 */
    CMyFileLog::CMyFileLog(local_48,"OnGuildAttendanceInfo",0x200e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Guild","CPacketTranslater::OnGuildAttendanceInfo : 0 == m_pclApp");
  }
  else {
    local_14 = CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_14 == 0) {
      CMyFileLog::CMyFileLog(local_40,"OnGuildAttendanceInfo",0x2014);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/Guild","CPacketTranslater::OnGuildAttendanceInfo : 0 == pGuild");
    }
    else {
      local_18 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
      if (local_18 == (CUser *)0x0) {
        CMyFileLog::CMyFileLog(local_38,"OnGuildAttendanceInfo",0x201a);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/Guild","CPacketTranslater::OnGuildAttendanceInfo : 0 == pUser");
      }
      else {
        Packet_Guild_Attendance_Info_Reply::Packet_Guild_Attendance_Info_Reply(local_77);
        local_69 = CUser::GetIdByChannel(local_18);
        local_6d = CUser::GetUniqCharNo(local_18);
        local_65 = local_20[0x12];
        CGuildManager::_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo
                  ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_20 + 10),aSStack_64);
        CUser::SendToGameserver(local_18,(char *)local_77,0x2f);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5661 行）：

```cpp
void CPacketTranslater::OnGuildAttendanceInfo(PacketHeader* pkt)
{
    try
    {
        char* pb = (char*)pkt;
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x200e, "./log/Guild", "CPacketTranslater::OnGuildAttendanceInfo : 0 == m_pclApp");
            return;
        }
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild;
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x2014, "./log/Guild", "CPacketTranslater::OnGuildAttendanceInfo : 0 == pGuild");
            return;
        }
        unsigned int charNo = *(unsigned int*)(pb + 0xe);
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x201a, "./log/Guild", "CPacketTranslater::OnGuildAttendanceInfo : 0 == pUser");
            return;
        }
        Packet_Guild_Attendance_Info_Reply reply;
        *(unsigned int*)((char*)&reply + 0xa) = user->GetUniqCharNo();
        *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
        *(unsigned char*)((char*)&reply + 0x12) = *(unsigned char*)(pb + 0x12);
        (&m_pclApp->m_guildManager)->GetAttendanceInfo(
            guildKey, *(STAttendanceInfo*)((char*)&reply + 0x13));
        user->SendToGameserver((char*)&reply, 0x2f);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildAttendanceInfo", 0x2029);
        log("./log/Except",
            "CPacketTranslater::OnApproveJoinGuild Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x202e);
        log("./log/Except", "CPacketTranslater::OnApproveJoinGuild Exception Break\n");
    }
}
```
