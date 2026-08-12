# _ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader

`CPacketTranslater::OnDeleteToBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8085afe` | `0x353` | `0x807147e` | `0x352` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,222 +1,222 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xb0,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x55>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x4f>
 movl   $0xca6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
-lea    -0x70(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x1c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_DMBW_Delete_To_BlackListC1Ev>
-lea    -0xa1(%ebp),%eax
+lea    -0xa5(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_Delete_To_BlackList_ResultC1Ev>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x66(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x6a(%ebp)
+mov    0x8(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x74(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x31(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0xe(%eax),%edx
-lea    -0x31(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-lea    -0x38(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %bl
-lea    -0x38(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x119>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x38(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x120>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x101>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x108>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x273>
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x272>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x254>
-mov    -0x10(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x25b>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x190>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x18e>
 movl   $0xcb6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteToBlackList : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x9b(%ebp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x97(%ebp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x79(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xa5(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17DeleteToBlackListEj>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x223>
+movb   $0x2,-0x75(%ebp)
+lea    -0xa5(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+lea    -0xa5(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x48(%ebp)
+movb   $0x1,-0x75(%ebp)
+lea    -0xa5(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+lea    -0xa5(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+lea    -0x74(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x75(%ebp)
-mov    -0x10(%ebp),%eax
-add    $0xe,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xa1(%ebp),%eax
-add    $0xe,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17DeleteToBlackListEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x21f>
-movb   $0x2,-0x71(%ebp)
-movzwl -0x9f(%ebp),%eax
-movzwl %ax,%edx
-lea    -0xa1(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x44(%ebp)
-movb   $0x1,-0x71(%ebp)
-movzwl -0x9f(%ebp),%eax
-movzwl %ax,%edx
-lea    -0xa1(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-lea    -0x70(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2ef>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2ee>
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
 movl   $0xcd0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDeleteToBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2e8>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2e7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xcd5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeleteToBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x344>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x343>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0xb0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDeleteToBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  bool bVar2;
  Packet_Delete_To_BlackList_Result local_a5 [2];
  ushort local_a3;
  undefined4 local_9b;
  undefined1 auStack_97 [30];
  undefined4 local_79;
  undefined1 local_75;
  Packet_DMBW_Delete_To_BlackList local_74 [10];
  undefined4 local_6a;
  undefined1 auStack_66 [30];
  undefined4 local_48;
  CMyFileLog local_44 [8];
  string local_3c [7];
  allocator local_35;
  CMyFileLog local_34 [24];
  CUser *local_1c;
  CUser *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08085b2e to 08085b4d has its CatchHandler @ 08085d71 */
    CMyFileLog::CMyFileLog(local_44,"OnDeleteToBlackList",0xca6);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/BlackList","CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp");
    return;
  }
  Packet_DMBW_Delete_To_BlackList::Packet_DMBW_Delete_To_BlackList(local_74);
  Packet_Delete_To_BlackList_Result::Packet_Delete_To_BlackList_Result(local_a5);
  local_6a = *(undefined4 *)(local_14 + 10);
  memcpy(auStack_66,local_14 + 0xe,0x1d);
  std::allocator<char>::allocator();
                    /* try { // try from 08085bb7 to 08085bbb has its CatchHandler @ 08085bff */
  std::string::string(local_3c,(char *)(local_14 + 0xe),&local_35);
                    /* try { // try from 08085bce to 08085bd2 has its CatchHandler @ 08085bea */
  local_1c = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_3c);
  bVar2 = local_1c != (CUser *)0x0;
                    /* try { // try from 08085be3 to 08085be7 has its CatchHandler @ 08085bff */
  std::string::~string(local_3c);
  std::allocator<char>::~allocator((allocator<char> *)&local_35);
  if (bVar2) {
                    /* try { // try from 08085c40 to 08085d6b has its CatchHandler @ 08085d71 */
    local_18 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
    if (local_18 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_34,"OnDeleteToBlackList",0xcb6);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/BlackList","CPacketTranslater::OnDeleteToBlackList : 0 == pclUser")
      ;
      return;
    }
    local_9b = CUser::GetIdByChannel(local_18);
    local_79 = CUser::GetUniqCharNo(local_1c);
    memcpy(auStack_97,local_14 + 0xe,0x1d);
    CUser::GetUniqCharNo(local_1c);
    cVar1 = CUser::DeleteToBlackList((uint)local_18);
    if (cVar1 != '\x01') {
      local_75 = 2;
      CUser::SendToGameserver(local_18,(char *)local_a5,(uint)local_a3);
      return;
    }
    local_48 = CUser::GetUniqCharNo(local_1c);
    local_75 = 1;
    CUser::SendToGameserver(local_18,(char *)local_a5,(uint)local_a3);
  }
  CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),(PacketHeader *)local_74);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2257 行）：

```cpp
void CPacketTranslater::OnDeleteToBlackList(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xca6, "./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp");
        return;
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    Packet_DMBW_Delete_To_BlackList dbPkt;
    Packet_Delete_To_BlackList_Result result;
    dbPkt.m_charNo = ((RA_UINT<10>*)pkt)->v;
    memcpy(dbPkt.m_name, (char*)pkt + 0xe, 0x1d);
    CUser* target = userMgr->FindUser_CharName((char*)pkt + 0xe);
    if (target != 0)
    {
        CUser* user = userMgr->FindUser(((RA_UINT<10>*)pkt)->v);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xcb6, "./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == pclUser");
            return;
        }
        result.m_idByChannel = user->GetIdByChannel();
        result.m_charNo = target->GetUniqCharNo();
        memcpy(result.m_name, (char*)pkt + 0xe, 0x1d);
        if (user->DeleteToBlackList(target->GetUniqCharNo()) != 1)
        {
            result.m_result = 2;
            user->SendToGameserver((char*)&result, ((RA_U16<2>*)&result)->v);
            return;
        }
        dbPkt.m_charNo2 = target->GetUniqCharNo();
        result.m_result = 1;
        user->SendToGameserver((char*)&result, ((RA_U16<2>*)&result)->v);
    }
    handler->SendToDB(&dbPkt);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xcd0, "./log/Except", "CPacketTranslater::OnDeleteToBlackList Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xcd5, "./log/Except", "CPacketTranslater::OnDeleteToBlackList Exception Break\n");
    }
}
```
