# _ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader

`CPacketTranslater::OnDBLoadRequestGuildBoardDelete(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809e8f2` | `0x1fc` | `0x80d10c6` | `0x205` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,136 +1,138 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1f4>
+je     <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1fd>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%eax
+mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x50,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager18OnDeleteGuildBoardEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x92>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN39Packet_DB_Load_Reply_Guild_Board_DeleteC1Ev>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0xe0>
 mov    -0x14(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0x30(%ebp)
-lea    -0x44(%ebp),%eax
-movl   $0x18,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1f5>
-mov    -0x14(%ebp),%eax
-mov    0xf(%eax),%ebx
+mov    0xe(%eax),%ebx
 movl   $0xfe9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x0,0x10(%esp)
 mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardDelete()\tGuild Id : %d,\t Query Result : %d\n",0x8(%esp)
+movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardDelete()\tGuild Id : %d, \t Query Result : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_DB_Load_Reply_Guild_Board_DeleteC1Ev>
 movw   $0x1,-0x52(%ebp)
 mov    -0x14(%ebp),%eax
-mov    0xf(%eax),%eax
+mov    0xe(%eax),%eax
 mov    %eax,-0x50(%ebp)
 mov    -0x14(%ebp),%eax
-mov    0x13(%eax),%eax
+mov    0x12(%eax),%eax
 mov    %eax,-0x4c(%ebp)
 lea    -0x5c(%ebp),%eax
 movl   $0x18,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1f5>
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1fe>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN39Packet_DB_Load_Reply_Guild_Board_DeleteC1Ev>
+mov    -0x14(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x44(%ebp),%eax
+movl   $0x18,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CGuildServer12SendToServerEPci>
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1fe>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x198>
+jne    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1a1>
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
 movl   $0xff6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardDelete() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x191>
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x19a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1f5>
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1fe>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xffb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadRequestGuildBoardDelete() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1ed>
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1f6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1f5>
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader+0x1fe>
 nop
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadRequestGuildBoardDelete(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  Packet_DB_Load_Reply_Guild_Board_Delete local_60 [10];
  undefined2 local_56;
  undefined4 local_54;
  undefined4 local_50;
  Packet_DB_Load_Reply_Guild_Board_Delete local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CGuildServer *local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    local_14 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
                    /* try { // try from 0809e936 to 0809ea08 has its CatchHandler @ 0809ea0e */
    cVar2 = CDBManager::_ZN10CDBManager18OnDeleteGuildBoardEj
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_18 + 0xb));
    if (cVar2 == '\0') {
      uVar1 = *(undefined4 *)(local_18 + 0xf);
      CMyFileLog::CMyFileLog(local_30,"OnDBLoadRequestGuildBoardDelete",0xfe9);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/Except",
                 "CPacketTranslater::OnDBLoadRequestGuildBoardDelete()\tGuild Id : %d,\t Query Result : %d\n"
                 ,uVar1,0);
      Packet_DB_Load_Reply_Guild_Board_Delete::Packet_DB_Load_Reply_Guild_Board_Delete(local_60);
      local_56 = 1;
      local_54 = *(undefined4 *)(local_18 + 0xf);
      local_50 = *(undefined4 *)(local_18 + 0x13);
      CGuildServer::SendToServer(local_14,(char *)local_60,0x18);
    }
    else {
      Packet_DB_Load_Reply_Guild_Board_Delete::Packet_DB_Load_Reply_Guild_Board_Delete(local_48);
      local_3c = *(undefined4 *)(local_18 + 0xf);
      local_38 = *(undefined4 *)(local_18 + 0x13);
      local_34 = *(undefined4 *)(local_18 + 0xb);
      CGuildServer::SendToServer(local_14,(char *)local_48,0x18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 452 行）：

```cpp
void CPacketTranslater::OnDBLoadRequestGuildBoardDelete(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Load_Request_Guild_Board_Delete* pkt =
            (Packet_DB_Load_Request_Guild_Board_Delete*)header;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        if (!m_pclApp->m_dbManager.OnDeleteGuildBoard(pkt->m_fieldB))
        {
            DNF_LOG_SCOPE_LINE(0xfe9,
                "./log/Except",
                "CPacketTranslater::OnDBLoadRequestGuildBoardDelete()\tGuild Id : %d, \t Query Result : %d\n", pkt->m_fieldF,
                0
            );

            Packet_DB_Load_Reply_Guild_Board_Delete reply;
            reply.m_fieldA = 1;
            reply.m_fieldC = pkt->m_fieldF;
            reply.m_field10 = pkt->m_field13;
            gs->SendToServer((char*)&reply, 0x18);
            return;
        }
        Packet_DB_Load_Reply_Guild_Board_Delete reply;
        reply.m_fieldC = pkt->m_fieldF;
        reply.m_field10 = pkt->m_field13;
        reply.m_field14 = pkt->m_fieldB;
        gs->SendToServer((char*)&reply, 0x18);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnDBLoadRequestGuildBoardDelete() Exception Break",
                  0xff6, 0xffb);
}
```
