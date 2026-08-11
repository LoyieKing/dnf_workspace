# _ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader

`CPacketTranslater::OnRequestBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8085e52` | `0x207` | `0x807163a` | `0x209` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,131 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1e0,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x55>
+jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x4f>
 movl   $0xce9,0x8(%esp)
 movl   $"OnRequestBlackList",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestBlackList : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
-lea    -0x1d3(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1ff>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x1d7(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Request_Result_BlackListC1Ev>
-mov    -0x10(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x1c9(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1cd(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0xd3>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0xd1>
 movl   $0xcf3,0x8(%esp)
 movl   $"OnRequestBlackList",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestBlackList : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
-movb   $0x0,-0x1c5(%ebp)
-lea    -0x1d3(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1ff>
+movb   $0x0,-0x25(%ebp)
+lea    -0x1d7(%ebp),%eax
 add    $0xf,%eax
 mov    %eax,0x8(%esp)
-lea    -0x1d3(%ebp),%eax
-add    $0xe,%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType>
-movzwl -0x1d1(%ebp),%eax
+movzbl -0x25(%ebp),%eax
+mov    %al,-0x1c9(%ebp)
+lea    -0x1d7(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%edx
-lea    -0x1d3(%ebp),%eax
+lea    -0x1d7(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1ff>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1a3>
+jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1a5>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0xcff,0x8(%esp)
+movl   $"OnRequestBlackList",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0xcff,0x8(%esp)
-movl   $"OnRequestBlackList",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x19c>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x19e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1ff>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xd04,0x8(%esp)
 movl   $"OnRequestBlackList",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fa>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x1e0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_Request_Result_BlackList local_1d7 [2];
  ushort local_1d5;
  undefined4 local_1cd;
  uchar local_1c9;
  STBlackUserDBType aSStack_1c8 [400];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CUser *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08085e82 to 08085f73 has its CatchHandler @ 08085f79 */
    CMyFileLog::CMyFileLog(local_38,"OnRequestBlackList",0xce9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/BlackList","CPacketTranslater::OnRequestBlackList : 0 == m_pclApp");
  }
  else {
    Packet_Request_Result_BlackList::Packet_Request_Result_BlackList(local_1d7);
    local_1cd = *(undefined4 *)(local_14 + 0xe);
    local_18 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
    if (local_18 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_30,"OnRequestBlackList",0xcf3);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/BlackList","CPacketTranslater::OnRequestBlackList : 0 == pclUser");
    }
    else {
      local_1c9 = '\0';
      CUser::GetBlackList(local_18,&local_1c9,aSStack_1c8);
      CUser::SendToGameserver(local_18,(char *)local_1d7,(uint)local_1d5);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 673 行）：

```cpp
void CPacketTranslater::OnRequestBlackListOnLogin(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_BlackList_Login* pkt =
            (Packet_DBMW_Request_BlackList_Login*)header;
        Packet_DBMW_Reponse_BlackList reply;
        *(unsigned int*)((char*)&reply + 0xa) = pkt->m_mid;
        if (!m_pclApp->m_dbManager.QueryBlackList(
                pkt->m_mid,
                (STBlackUserDBType*)((char*)&reply + 0xe)))
        {
            CMyFileLog log("OnRequestBlackListOnLogin", 0x2b8);
            log("./log/BlackList",
                "m_clDBManager.QueryBlackList Err : return false");
            return;
        }
        if (pkt->m_fieldE == 0xc9)
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)&reply, reply.packetSize);
        else if (pkt->m_fieldE == 0xcb)
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRequestBlackListOnLogin() Exception Break",
                  0x2ca, 0x2cf);
}
```
