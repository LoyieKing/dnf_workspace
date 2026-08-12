# _ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader

`CPacketTranslater::onRequestCharacInfoByCharacName(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80909e4` | `0x259` | `0x807bfc4` | `0x29d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,174 +1,194 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
+movl   $0x0,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x24e>
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x296>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
 mov    %eax,-0x18(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x2d0,%eax
-mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
 mov    0x1f(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x251>
-lea    -0x69(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x296>
+lea    -0x71(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_Reply_Charac_InfoC1Ev>
-movl   $0x0,-0x5f(%ebp)
-mov    -0x20(%ebp),%eax
+lea    -0x71(%ebp),%eax
+movl   $0x0,0xa(%eax)
+lea    -0x71(%ebp),%ebx
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x5b(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,0xe(%ebx)
+mov    0x8(%ebp),%eax
 add    $0xa,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x69(%ebp),%eax
+lea    -0x71(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
-lea    -0x29(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0xa(%eax),%edx
-lea    -0x29(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0xdd>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1f2>
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+lea    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
+call   <T> <_ZNSsC1ERKSs>
 lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-sete   %bl
+mov    %eax,-0x20(%ebp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x125>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x134>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x10d>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1cd>
+cmpl   $0x0,-0x20(%ebp)
+sete   %al
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x14d>
+lea    -0x71(%ebp),%eax
+movb   $0x0,0x16(%eax)
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1b1>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,-0x10(%ebp)
+lea    -0x71(%ebp),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,0x16(%ebx)
+lea    -0x71(%ebp),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,0x12(%ebx)
+lea    -0x71(%ebp),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,0x35(%ebx)
+lea    -0x71(%ebp),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6GetJobEv>
+mov    %al,0x37(%ebx)
+lea    -0x71(%ebp),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGrowthTypeEv>
+mov    %al,0x38(%ebx)
+lea    -0x71(%ebp),%eax
+movl   $0x39,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1e2>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x29(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
+call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1a8>
-lea    -0x29(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1f2>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x13a>
-movb   $0x0,-0x53(%ebp)
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x189>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x53(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x57(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-mov    %ax,-0x34(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6GetJobEv>
-mov    %al,-0x32(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGrowthTypeEv>
-mov    %al,-0x31(%ebp)
-lea    -0x69(%ebp),%eax
-movl   $0x39,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x296>
 cmp    $0x1,%edx
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1b5>
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1ff>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::onRequestCharacInfoByCharacName() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1e82,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onRequestCharacInfoByCharacName() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x247>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x291>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
-nop
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
-nop
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onRequestCharacInfoByCharacName(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerInterface *this;
  bool bVar1;
  Packet_Monitor_Reply_Charac_Info local_6d [10];
  undefined4 local_63;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined1 local_57;
  char acStack_56 [30];
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  string local_34 [7];
  allocator local_2d [9];
  CUser *local_24;
  CUser *local_20;
  uint local_1c;
  int local_18;
  PacketHeader *local_14;
  
  local_24 = (CUser *)0x0;
  local_20 = (CUser *)0x0;
  if (m_pclApp != 0) {
    local_1c = m_pclApp + 0x10;
    local_18 = m_pclApp + 0x2d0;
    local_14 = param_1;
                    /* try { // try from 08090a35 to 08090a39 has its CatchHandler @ 08090b8c */
    local_24 = (CUser *)CUserManager::FindUser_CharNo(local_1c);
    if (local_24 != (CUser *)0x0) {
      Packet_Monitor_Reply_Charac_Info::Packet_Monitor_Reply_Charac_Info(local_6d);
      local_63 = 0;
      local_5f = CUser::GetIdByChannel(local_24);
      strncpy(acStack_56,(char *)(local_14 + 10),0x1d);
      std::allocator<char>::allocator();
                    /* try { // try from 08090aae to 08090ab2 has its CatchHandler @ 08090af1 */
      std::string::string(local_34,(char *)(local_14 + 10),local_2d);
                    /* try { // try from 08090ac0 to 08090ac4 has its CatchHandler @ 08090adc */
      local_20 = (CUser *)CUserManager::FindUser_CharName(local_1c,local_34);
      bVar1 = local_20 == (CUser *)0x0;
                    /* try { // try from 08090ad5 to 08090ad9 has its CatchHandler @ 08090af1 */
      std::string::~string(local_34);
      std::allocator<char>::~allocator((allocator<char> *)local_2d);
      if (bVar1) {
        local_57 = 0;
      }
      else {
        this = (CServerInterface *)CUser::GetGameServer(local_20);
                    /* try { // try from 08090b2c to 08090b86 has its CatchHandler @ 08090b8c */
        local_57 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(this);
        local_5b = CUser::GetIdByChannel(local_20);
        local_38 = CUser::GetLevel(local_20);
        local_36 = CUser::GetJob(local_20);
        local_35 = CUser::GetGrowthType(local_20);
      }
      CUser::SendToGameserver(local_24,(char *)local_6d,0x39);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5196 行）：

```cpp
void CPacketTranslater::onRequestCharacInfoByCharacName(PacketHeader* pkt)
{
    CUser* requester = 0;
    CUser* target = 0;
    if (m_pclApp != 0)
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        PacketHeader* rpkt = pkt;
        try
        {
            requester = userMgr->FindUser_CharNo(((RA_UINT<31>*)pkt)->v);
            if (requester != 0)
            {
                Packet_Monitor_Reply_Charac_Info reply;
                ((RA_UINT<10>*)&reply)->v = 0;
                ((RA_UINT<14>*)&reply)->v = requester->GetIdByChannel();
                strncpy((char*)&reply + 0x17, (char*)pkt + 0xa, 0x1d);
                std::string sname((char*)pkt + 0xa);
                target = userMgr->FindUser_CharName(sname);
                bool notfound = (target == 0);
                if (notfound)
                {
                    ((RA_S8<22>*)&reply)->v = 0;
                }
                else
                {
                    CServerInterface* gs = (CServerInterface*)target->GetGameServer();
                    ((RA_S8<22>*)&reply)->v = gs->GetChannelNo();
                    ((RA_UINT<18>*)&reply)->v = target->GetIdByChannel();
                    ((RA_U16<53>*)&reply)->v = target->GetLevel();
                    ((RA_S8<55>*)&reply)->v = target->GetJob();
                    ((RA_S8<56>*)&reply)->v = target->GetGrowthType();
                }
                requester->SendToGameserver((char*)&reply, 0x39);
            }
        }
        catch (CDNFException& e)
        {
            printf(
                "CPacketTranslater::onRequestCharacInfoByCharacName() Exception Break : %s\n",
                e.what());
            DNF_LOG_SCOPE_LINE(0x1e82,"./log/Except",
                "CPacketTranslater::onRequestCharacInfoByCharacName() Exception Break : %s\n",
                e.what());
        }
    }
}
```
