# _ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader

`CPacketTranslater::OnDBMWInsertMail(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809ca50` | `0x28f` | `0x80d37d0` | `0x28b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,179 +1,177 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x9c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x283>
+je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x27f>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x30(%ebp)
 movl   $0x0,-0x2c(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x12f(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0xb9>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x60(%ebp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x28(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    -0x28(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    -0x28(%ebp),%eax
 movl   $0x0,(%eax)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
 mov    %eax,-0x24(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x12f(%eax),%eax
 imul   $0x15180,%eax,%edx
 mov    -0x24(%ebp),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 sub    $0x44a53c70,%eax
 mov    %eax,-0x7c(%ebp)
 mov    $0xc22e4507,%edx
 mov    -0x7c(%ebp),%eax
 mul    %edx
 mov    %edx,%eax
 shr    $0x10,%eax
 mov    %eax,-0x2c(%ebp)
 mov    -0x30(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,%edi
+mov    0x16(%eax),%edi
 mov    -0x30(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,%esi
+mov    0x12(%eax),%esi
 mov    -0x30(%ebp),%eax
 mov    0xe(%eax),%ebx
 mov    -0x30(%ebp),%eax
 add    $0x2f,%eax
 mov    %eax,-0x70(%ebp)
 mov    -0x30(%ebp),%eax
 add    $0x1a,%eax
 mov    %eax,-0x6c(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0xa(%eax),%ecx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
 mov    %edi,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x70(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    -0x6c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager10InsertMailEjPcS0_jjii>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x168>
+je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x164>
 mov    -0x30(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0xd1e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater.OnDBMWInsertMail Err(%d) : return false",0x8(%esp)
 movl   $"./log/GuildEvent",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
 lea    -0x5a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Monitor_Notify_New_MailC1Ev>
 mov    -0x30(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x50(%ebp)
 movzwl -0x58(%ebp),%eax
 movzwl %ax,%esi
 lea    -0x5a(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x227>
+jne    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x223>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xd29,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWInsertMail() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x220>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x21c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xd2e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWInsertMail() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x27c>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x278>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
 nop
 add    $0x9c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWInsertMail(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  CMonitorServer *this;
  time_t local_64;
  Packet_Monitor_Notify_New_Mail local_5e [2];
  ushort local_5c;
  undefined4 local_54;
  CMyFileLog local_4c [24];
  PacketHeader *local_34;
  uint local_30;
  tm *local_2c;
  time_t local_28;
  int local_24;
  
  if (m_pclApp != 0) {
    local_34 = param_1;
    local_30 = 0;
    if (*(int *)(param_1 + 0x12f) != 0) {
      local_64 = time((time_t *)0x0);
      local_2c = localtime(&local_64);
      local_2c->tm_hour = local_2c->tm_hour + 1;
      local_2c->tm_min = 0;
      local_2c->tm_sec = 0;
      local_28 = mktime(local_2c);
      local_24 = *(int *)(local_34 + 0x12f) * 0x15180 + local_28;
      local_30 = (local_24 + 0xbb5ac390U) / 0x15180;
    }
                    /* try { // try from 0809cb67 to 0809cbf5 has its CatchHandler @ 0809cbfb */
    cVar2 = CDBManager::_ZN10CDBManager10InsertMailEjPcS0_jjii
                      (m_pclApp + 0x50,*(char **)(local_34 + 10),(char *)(local_34 + 0x1a),
                       (uint)(local_34 + 0x2f),*(uint *)(local_34 + 0xe),local_30,
                       *(int *)(local_34 + 0x12));
    if (cVar2 == '\x01') {
      Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail(local_5e);
      local_54 = *(undefined4 *)(local_34 + 10);
      this = (CMonitorServer *)
             CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      CMonitorServer::SendToServer(this,(char *)local_5e,(uint)local_5c);
    }
    else {
      uVar1 = *(undefined4 *)(local_34 + 10);
      CMyFileLog::CMyFileLog(local_4c,"OnDBMWInsertMail",0xd1e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_4c,"./log/GuildEvent",
                 "CPacketTranslater.OnDBMWInsertMail Err(%d) : return false",uVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1029 行）：

```cpp
void CPacketTranslater::OnDBMWInsertMail(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Insert_Mail* pkt = (Packet_DBMW_Insert_Mail*)header;
        unsigned int letterNo = 0;
        if (pkt->m_delayHours != 0)
        {
            time_t now = time(0);
            struct tm* lt = localtime(&now);
            lt->tm_hour += 1;
            lt->tm_min = 0;
            lt->tm_sec = 0;
            time_t nextHour = mktime(lt);
            unsigned int occTime =
                (unsigned int)nextHour +
                (unsigned int)pkt->m_delayHours * 0x15180U;
            letterNo = (occTime - 0x44a53c70U) / 0x15180U;
        }
        if (!m_pclApp->m_dbManager.InsertMail(
                pkt->m_characNo, pkt->m_subject, pkt->m_content,
                pkt->m_fieldE, letterNo, pkt->m_field12, pkt->m_field16))
        {
            DNF_LOG_SCOPE_LINE(0xd1e,
                "./log/GuildEvent",
                "CPacketTranslater.OnDBMWInsertMail Err(%d) : return false",
                pkt->m_characNo
            );

            return;
        }
        Packet_Monitor_Notify_New_Mail notice;
        notice.m_fieldA = pkt->m_characNo;
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&notice, notice.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnDBMWInsertMail() Exception Break",
                  0xd29, 0xd2e);
}
```
