# _ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader

`CPacketTranslater::OnNotifyMessageToGuild(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807ef06` | `0x202` | `0x807572c` | `0x207` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,134 +1,136 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xb0,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x55>
 movl   $0x109d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNotifyMessageToGuild : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f8>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1fd>
+mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f4>
-mov    -0x10(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f9>
+mov    -0x14(%ebp),%eax
 movzbl 0xe(%eax),%eax
 cmp    $0x1,%al
-je     <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0xf7>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0xfc>
+mov    -0x14(%ebp),%eax
 movzbl 0xe(%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f7>
+jne    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1fc>
 lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_Web_Notify_Message_To_GuildC1Ev>
 movl   $0x74,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0xa0(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x92(%ebp)
+mov    %al,(%ebx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x68(%eax),%eax
 lea    -0xa0(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 add    $0xf,%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15SetGuildMessageEPc>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv>
-jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1fd>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x198>
+jne    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x19d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x10bf,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNotifyMessageToGuild Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x191>
+jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x196>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1fd>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x10c4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNotifyMessageToGuild Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1ed>
+jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1fd>
 nop
-jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader+0x1fd>
 nop
 add    $0xb0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNotifyMessageToGuild(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_Web_Notify_Message_To_Guild local_a4 [14];
  undefined1 local_96;
  CMyFileLog local_30 [24];
  CGuild *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0807ef36 to 0807f01c has its CatchHandler @ 0807f022 */
    CMyFileLog::CMyFileLog(local_30,"OnNotifyMessageToGuild",0x109d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/Except","CPacketTranslater::OnNotifyMessageToGuild : 0 == m_pclApp");
  }
  else {
    local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if (local_18 != (CGuild *)0x0) {
      if (local_14[0xe] != (PacketHeader)0x1) {
        if (local_14[0xe] != (PacketHeader)0x2) {
          return;
        }
        Packet_Web_Notify_Message_To_Guild::Packet_Web_Notify_Message_To_Guild(local_a4);
        memcpy(local_a4,local_14,0x74);
        local_96 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
        CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
                  (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_a4);
      }
      CGuild::SetGuildMessage(local_18,(char *)(local_14 + 0xf));
      CGuild::NotifyMessageToGuildMember(local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3374 行）：

```cpp
void CPacketTranslater::OnNotifyMessageToGuild(PacketHeader* pkt)
{
    struct PTL_NotifyMessageToGuildPkt
    {
        char m_base[0xa];
        unsigned int m_guildKey;  // +0xa
        unsigned char m_mode;     // +0xe
        char m_payload[0x66];     // +0xf
    } __attribute__((packed));
    PTL_NotifyMessageToGuildPkt* pb = (PTL_NotifyMessageToGuildPkt*)pkt;
    try
    {
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x109d, "./log/Except", "CPacketTranslater::OnNotifyMessageToGuild : 0 == m_pclApp");
        return;
    }
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildKey)) == 0)
    {
        return;
    }
    if (pb->m_mode != 1)
    {
        if (pb->m_mode != 2)
        {
            return;
        }
        Packet_Web_Notify_Message_To_Guild notify;
        memcpy(&notify, pb, 0x74);
        *(unsigned char*)((char*)&notify + 0xe) = m_pclApp->Get_ServerGroup();
        m_pclApp->m_serverHandler->SendToDB(&notify);
    }
    guild->SetGuildMessage(pb->m_payload);
    guild->NotifyMessageToGuildMember();
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnNotifyMessageToGuild Exception Break", 0x10bf, 0x10c4);
}
```
