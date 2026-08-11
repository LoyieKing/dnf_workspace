# _ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader

`CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80916e4` | `0x1df` | `0x807cce8` | `0x1de` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,137 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xdc>
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x38(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xa4>
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xb9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x101>
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x102>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0xa0,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d7>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d6>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x17d>
+jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x17c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x2017,0x8(%esp)
 movl   $"OnPcRoomPlayTimeReward",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x175>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d7>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x201c,0x8(%esp)
 movl   $"OnPcRoomPlayTimeReward",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d2>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809171a to 0809171e has its CatchHandler @ 08091788 */
    std::string::string(local_3c,"CPacketTranslater::OnPcRoomPlayTimeReward",local_35);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08091739 to 0809173d has its CatchHandler @ 08091740 */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 08091777 to 0809177b has its CatchHandler @ 0809177e */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080917bb to 080917df has its CatchHandler @ 080917e5 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1817 行）：

```cpp
void CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_PcRoom_PlayTime_Reward* pkt =
            (Packet_DBMW_PcRoom_PlayTime_Reward*)header;
        unsigned char serverInfo = pkt->m_serverInfo;
        int accId = pkt->m_accId;
        int characNo = pkt->m_characNo;
        CMyFileLog log1("OnPcRoomPlayTimeReward", 0x141b);
        log1("./log/event",
             "CPacketTranslater::OnPcRoomPlayTimeReward Noti acc_id(%d), charac_no(%d), server_info(%d)",
             accId, characNo, serverInfo);
        unsigned int pinNo = 0;
        char pinBuf[0x15];
        memset(pinBuf, 0, 0x15);
        if (!m_pclApp->m_dbManager.updateNexonPinPcRoomPlayTimeEvent(
                serverInfo, accId, pinNo, pinBuf, 0x15))
        {
            CMyFileLog log("OnPcRoomPlayTimeReward", 0x1423);
            log("./log/event",
                "CPacketTranslater::OnPcRoomPlayTimeReward Error acc_id(%d), charac_no(%d), server_info(%d)",
                accId, characNo, serverInfo);
            return;
        }
        time_t now = time(0);
        tm* t = localtime(&now);
        t->tm_mday += 1;
        t->tm_hour = 0;
        t->tm_min = 0;
        time_t tomorrow = mktime(t);
        char str[0x100];
        memset(str, 0, 0x100);
        sprintf(str,
                "\xbf\xa9\xb8\xa7\xb9\xe6\xc7\xd0\x20\xb1\xe2\xb0\xa3\xbf\xa1\x20\x31\xbd\xc3\xb0\xa3\xb5\xbf\xbe\xc8\x20\x50\x43\xb9\xe6\xbf\xa1\xbc\xad\x20\xc1\xa2\xbc\xd3\xc0\xbb\x20\xc0\xaf\xc1\xf6\xc7\xcf\xbd\xc5\x20\x50\x43\xb9\xe6\x20\xc0\xaf\xc0\xfa\x20\xbf\xa9\xb7\xaf\xba\xd0\xb2\xb2\x20\xc6\xaf\xba\xb0\xc7\xd1\x20\xbc\xb1\xb9\xb0\xc0\xbb\x20\xb5\xe5\xb8\xb3\xb4\xcf\xb4\xd9\x2e\x0a\x20\x2d\x20\xb3\xd8\xbd\xbc\xc7\xc9\x3a\x20\x25\x73\x20",
                pinBuf);
        str[0x68] = 0x1e;
        str[0x7d] = 0x1f;
        int letterNo = 0;
        if (!m_pclApp->m_dbManager.InsertLetter(
                characNo, 0,
                "\xb4\xf8\xc6\xc4\x50\x43\xb9\xe6\x20\xbd\xe6\xb8\xd3\xc5\xb8\xc0\xd3",
                str, letterNo, tomorrow))
        {
            CMyFileLog log("OnPcRoomPlayTimeReward", 0x143d);
            log("./log/event",
                "CPacketTranslater::OnPcRoomPlayTimeReward Letter Error acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d)",
                accId, characNo, serverInfo, pinNo);
            return;
        }
        Packet_Monitor_Notify_New_Mail mail;
        *(int*)((char*)&mail + 0xf) = characNo;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        ms->SendToServer((char*)&mail, mail.packetSize);
        CMyFileLog log2("OnPcRoomPlayTimeReward", 0x1447);
        log2("./log/event",
             "CPacketTranslater::OnPcRoomPlayTimeReward reward acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d), letter_id(%d)",
             accId, characNo, serverInfo, pinNo, letterNo);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnPcRoomPlayTimeReward Exception Break",
                  0x144c, 0x1451);
}
```
