# _ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader

`CPacketTranslater::OnWriteGuildMemberMemo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80836e6` | `0x2c3` | `0x80792ea` | `0x1d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,184 +1,120 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-add    $0xffffff80,%esp
+sub    $0x78,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x50>
 movl   $0x17eb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWriteGuildMemberMemo : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildMember",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x1ce>
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0xb6>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0xb1>
 movl   $0x17f5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildMember",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x1ce>
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x11d>
+je     <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x11f>
 movl   $0x17fc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildMember",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-lea    -0x6f(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x1ce>
+lea    -0x5b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_DB_Write_Guild_Member_MemoC1Ev>
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x61(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x65(%ebp)
-mov    -0x18(%ebp),%eax
+lea    -0x5b(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x5b(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x14,-0x10(%ebp)
-jg     <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x172>
-mov    -0x10(%ebp),%eax
-mov    -0x18(%ebp),%edx
+mov    %eax,-0xc(%ebp)
+mov    $0x14,%eax
+cmpl   $0x14,-0xc(%ebp)
+cmovbe -0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
 add    $0x12,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x6f(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x192>
-mov    -0x18(%ebp),%eax
-add    $0x12,%eax
-movl   $0x14,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x6f(%ebp),%eax
+lea    -0x5b(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x68(%eax),%eax
-lea    -0x6f(%ebp),%edx
+lea    -0x5b(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23NotifyMemoToGuildMemberEP5CUserPKc>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x262>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1818,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnWriteGuildMemberMemo Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x25b>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x181d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnWriteGuildMemberMemo Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2b7>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-sub    $0xffffff80,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWriteGuildMemberMemo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_DB_Write_Guild_Member_Memo local_73 [10];
  undefined4 local_69;
  undefined4 local_65;
  undefined1 auStack_61 [21];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [24];
  CUser *local_24;
  CGuild *local_20;
  PacketHeader *local_1c;
  uint local_18;
  size_t local_14;
  
  local_1c = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08083713 to 080838c6 has its CatchHandler @ 080838cc */
    CMyFileLog::CMyFileLog(local_4c,"OnWriteGuildMemberMemo",0x17eb);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_4c,"./log/GuildMember",
               "CPacketTranslater::OnWriteGuildMemberMemo : 0 == m_pclApp");
  }
  else {
    local_18 = m_pclApp + 0x10;
    local_24 = (CUser *)CUserManager::FindUser_CharNo(local_18);
    if (local_24 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_44,"OnWriteGuildMemberMemo",0x17f5);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/GuildMember",
                 "CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclUser");
    }
    else {
      local_20 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_20 == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_3c,"OnWriteGuildMemberMemo",0x17fc);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_3c,"./log/GuildMember",
                   "CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclGuild");
      }
      else {
        Packet_DB_Write_Guild_Member_Memo::Packet_DB_Write_Guild_Member_Memo(local_73);
        local_65 = *(undefined4 *)(local_1c + 0xe);
        local_69 = *(undefined4 *)(local_1c + 10);
        local_14 = strlen((char *)(local_1c + 0x12));
        if ((int)local_14 < 0x15) {
          memcpy(auStack_61,local_1c + 0x12,local_14);
        }
        else {
          memcpy(auStack_61,local_1c + 0x12,0x14);
        }
        CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
                  (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_73);
        CGuild::WriteGuildMemberMemo(local_20,local_24,(char *)(local_1c + 0x12));
        CGuild::NotifyMemoToGuildMember(local_20,local_24,(char *)(local_1c + 0x12));
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4291 行）：

```cpp
void CPacketTranslater::OnWriteGuildMemberMemo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x17eb,"./log/GuildMember",
            "CPacketTranslater::OnWriteGuildMemberMemo : 0 == m_pclApp");
        return;
    }
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x17f5, "./log/GuildMember", "CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x17fc, "./log/GuildMember", "CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclGuild");
        return;
    }
    Packet_DB_Write_Guild_Member_Memo dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xa) = *(unsigned int*)(pb + 0xa);
    *(unsigned int*)((char*)&dbPkt + 0xe) = guildKey;
    size_t len = strlen(pb + 0x12);
    memcpy((char*)&dbPkt + 0x12, pb + 0x12, len < 0x15 ? len : 0x14);
    m_pclApp->m_serverHandler->SendToDB(&dbPkt);
    guild->WriteGuildMemberMemo(user, pb + 0x12);
    guild->NotifyMemoToGuildMember(user, pb + 0x12);
}
```
