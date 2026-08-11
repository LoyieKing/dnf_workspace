# _ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader

`CPacketTranslater::OnGuildRequestGuildBoardDelete(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80870e6` | `0x241` | `0x807c7ae` | `0x17a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,147 +1,100 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x70,%esp
+sub    $0x54,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x51>
 movl   $0x1d52,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x23a>
+jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x174>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0xb6>
 movl   $0x1d5c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x23a>
+jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x174>
 mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+add    $0xe,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x11d>
 movl   $0x1d63,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x23a>
-lea    -0x5b(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x174>
+lea    -0x43(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_DB_Load_Request_Guild_Board_DeleteC1Ev>
+lea    -0x43(%ebp),%eax
+lea    0xb(%eax),%edx
 mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x50(%ebp)
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x43(%ebp),%eax
+lea    0xf(%eax),%edx
 mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x4c(%ebp)
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x43(%ebp),%eax
+lea    0x13(%eax),%edx
 mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x48(%ebp)
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x5b(%ebp),%edx
+lea    -0x43(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x23a>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x1e0>
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
-movl   $0x1d71,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildRequestGuildBoardDelete Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x1d9>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x23a>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1d76,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildRequestGuildBoardDelete Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader+0x235>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x70,%esp
+add    $0x54,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildRequestGuildBoardDelete(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerHandler *this;
  Packet_DB_Load_Request_Guild_Board_Delete local_5f [11];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  int local_20;
  int local_1c;
  PacketHeader *local_18;
  CApplication *local_14;
  
  local_18 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08087113 to 08087244 has its CatchHandler @ 0808724a */
    CMyFileLog::CMyFileLog(local_48,"OnGuildRequestGuildBoardDelete",0x1d52);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/GuildBoard",
               "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == m_pclApp");
  }
  else {
    local_14 = m_pclApp + 0x10;
    local_20 = CUserManager::FindUser_CharNo((uint)local_14);
    if (local_20 == 0) {
      CMyFileLog::CMyFileLog(local_40,"OnGuildRequestGuildBoardDelete",0x1d5c);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/GuildBoard",
                 "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclUser");
    }
    else {
      local_1c = CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
      if (local_1c == 0) {
        CMyFileLog::CMyFileLog(local_38,"OnGuildRequestGuildBoardDelete",0x1d63);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/GuildBoard",
                   "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclGuild");
      }
      else {
        Packet_DB_Load_Request_Guild_Board_Delete::Packet_DB_Load_Request_Guild_Board_Delete
                  (local_5f);
        local_54 = *(undefined4 *)(local_18 + 10);
        local_50 = *(undefined4 *)(local_18 + 0xe);
        local_4c = *(undefined4 *)(local_18 + 0x12);
        this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(this,(PacketHeader *)local_5f);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5012 行）：

```cpp
void CPacketTranslater::OnGuildRequestGuildBoardDelete(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d52,"./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d5c,"./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclUser");
        return;
    }
    CGuild* guild;
    if ((guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe))) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d63,"./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclGuild");
        return;
    }
    Packet_DB_Load_Request_Guild_Board_Delete dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xb) = *(unsigned int*)(pb + 0xa);
    *(unsigned int*)((char*)&dbPkt + 0xf) = *(unsigned int*)(pb + 0xe);
    *(unsigned int*)((char*)&dbPkt + 0x13) = *(unsigned int*)(pb + 0x12);
    m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
}
```
