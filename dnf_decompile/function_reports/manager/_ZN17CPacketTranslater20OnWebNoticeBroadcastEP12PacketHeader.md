# _ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader

`CPacketTranslater::OnWebNoticeBroadcast(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8065d0a` | `0x46d` | `0x805b620` | `0x46a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,308 +1,306 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x19c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0xe2>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x45(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnWebNoticeBroadcast : 0 == m_pclApp",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x4c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0xa7>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x389>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 add    $0x10b,%eax
 mov    %eax,-0x17c(%ebp)
 mov    -0x28(%ebp),%eax
 movzbl 0x10a(%eax),%eax
 movzbl %al,%esi
 mov    -0x28(%ebp),%eax
 lea    0xb(%eax),%edi
 mov    -0x28(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x1b2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x17c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"%d, %s, %d, %s\n",0x8(%esp)
 movl   $"./log/test",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x462>
+je     <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x45f>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x461>
+je     <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x45f>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISsSaISsEEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    -0x28(%ebp),%eax
 lea    0xb(%eax),%edx
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x1cd>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x364>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 movl   $0x2c,0x8(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z12parse_stringRSt6vectorISsSaISsEERSsc>
 lea    -0x64(%ebp),%eax
 lea    -0x58(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISsSaISsEE5beginEv>
 sub    $0x4,%esp
 lea    -0x68(%ebp),%eax
 lea    -0x58(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISsSaISsEE3endEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x304>
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSsSt6vectorISsSaISsEEEdeEv>
 mov    %eax,0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsaSERKSs>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %al,-0x1d(%ebp)
 cmpb   $0x64,-0x1d(%ebp)
 ja     <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x2f9>
 lea    -0x172(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Web_Notice_SingleC1Ev>
 mov    -0x28(%ebp),%eax
 movzbl 0x10a(%eax),%eax
 mov    %al,-0x168(%ebp)
 movl   $0xff,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x172(%ebp),%eax
 add    $0xb,%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x28(%ebp),%eax
 movzbl 0x10a(%eax),%eax
 movzbl %al,%eax
 mov    -0x28(%ebp),%edx
 add    $0x10b,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x172(%ebp),%eax
 add    $0xb,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 movzbl -0x1d(%ebp),%edx
 lea    -0x172(%ebp),%eax
 mov    %edx,0xc(%esp)
 movl   $0x10a,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler15SendToTcpServerEPcih>
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSsSt6vectorISsSaISsEEEppEv>
 lea    -0x68(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSsSt6vectorISsSaISsEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x22c>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x335>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x342>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x357>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x364>
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x379>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISsSaISsEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x389>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISsSaISsEED1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x462>
+jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x45f>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x405>
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
 movl   $0x1e0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeBroadcast() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x3fe>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x462>
+jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x45f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1e5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebNoticeBroadcast() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x45a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader+0x462>
-nop
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebNoticeBroadcast(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  bool bVar3;
  CDNFException *this;
  string *psVar4;
  char *__nptr;
  int iVar5;
  Packet_Web_Notice_Single local_176 [10];
  PacketHeader local_16c;
  char acStack_16b [255];
  __normal_iterator local_6c [4];
  __normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>> local_68 [4];
  string local_64 [4];
  string local_60 [4];
  vector<std::string,std::allocator<std::string>> local_5c [12];
  string local_50 [7];
  allocator local_49;
  CMyFileLog local_48 [11];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CServerHandler *local_28;
  byte local_21;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08065d43 to 08065d47 has its CatchHandler @ 08065db1 */
    std::string::string(local_50,"CPacketTranslater::OnWebNoticeBroadcast : 0 == m_pclApp",&local_49
                       );
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08065d62 to 08065d66 has its CatchHandler @ 08065d69 */
    CDNFException::CDNFException(this,local_50);
                    /* try { // try from 08065da0 to 08065da4 has its CatchHandler @ 08065da7 */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08065de7 to 08065e95 has its CatchHandler @ 08066093 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  PVar1 = param_1[0x10a];
  PVar2 = param_1[10];
  CMyFileLog::CMyFileLog(local_48,"OnWebNoticeBroadcast",0x1b2);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_48,"./log/test","%d, %s, %d, %s\n",(uint)(byte)PVar2,param_1 + 0xb,
             (uint)(byte)PVar1,param_1 + 0x10b);
  if ((m_pclApp != 0) &&
     (local_28 = *(CServerHandler **)(m_pclApp + 0x18), local_28 != (CServerHandler *)0x0)) {
    std::vector<std::string,std::allocator<std::string>>::vector(local_5c);
    std::allocator<char>::allocator();
                    /* try { // try from 08065eb8 to 08065ebc has its CatchHandler @ 08065ebf */
    std::string::string(local_60,(char *)(local_2c + 0xb),local_3d);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* try { // try from 08065ee8 to 08065eec has its CatchHandler @ 0806604c */
    std::string::string(local_64);
                    /* try { // try from 08065f02 to 0806601f has its CatchHandler @ 0806602a */
    parse_string((vector *)local_5c,local_60,',');
    std::vector<std::string,std::allocator<std::string>>::begin();
    std::vector<std::string,std::allocator<std::string>>::end();
    while( true ) {
      bVar3 = __gnu_cxx::operator!=(local_68,local_6c);
      if (!bVar3) break;
      psVar4 = (string *)
               __gnu_cxx::
               __normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>
               ::operator*(local_68);
      std::string::operator=(local_64,psVar4);
      __nptr = (char *)std::string::c_str(local_64);
      iVar5 = atoi(__nptr);
      local_21 = (byte)iVar5;
      if (local_21 < 0x65) {
        Packet_Web_Notice_Single::Packet_Web_Notice_Single(local_176);
        local_16c = local_2c[0x10a];
        memset(acStack_16b,0,0xff);
        strncpy(acStack_16b,(char *)(local_2c + 0x10b),(uint)(byte)local_2c[0x10a]);
        CServerHandler::_ZN14CServerHandler15SendToTcpServerEPcih
                  (local_28,(char *)local_176,0x10a,local_21);
      }
      __gnu_cxx::
      __normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>::
      operator++(local_68);
    }
                    /* try { // try from 08066045 to 08066049 has its CatchHandler @ 0806604c */
    std::string::~string(local_64);
                    /* try { // try from 08066067 to 0806606b has its CatchHandler @ 0806606e */
    std::string::~string(local_60);
                    /* try { // try from 08066089 to 0806608d has its CatchHandler @ 08066093 */
    std::vector<std::string,std::allocator<std::string>>::~vector(local_5c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp)（约第 430 行）：

```cpp
void CPacketTranslater::OnWebNoticeBroadcast(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnWebNoticeBroadcast : 0 == m_pclApp");
        // R10: ORIG local_2c@-0x28 + 临时日志形态（第 4 实参先求值入栈槽）
        PacketHeader* hdr = header;
        DNF_LOG_SCOPE_LINE(0x1b2, "./log/test", "%d, %s, %d, %s\n",
            ((WebNoticeBroadcastPacket*)hdr)->m_byType,
            (char*)hdr + 0xb,
            ((WebNoticeBroadcastPacket*)hdr)->m_byLen,
            (char*)hdr + 0x10b);
        // R10: ORIG local_28@-0x24（m_serverHandler 一次装载）
        if (m_pclApp)
        {
            CServerHandler* handler = m_pclApp->m_serverHandler;
            if (handler)
            {
                // R10: ORIG string 构造形态：s(ptr) 无长度、tok 默认构造 + operator=
                std::vector<std::string> parts;
                std::string s((char*)hdr + 0xb);
                std::string tok;
                parse_string(parts, s, ',');
                for (std::vector<std::string>::iterator it = parts.begin(),
                         end = parts.end(); it != end; ++it)
                {
                    tok = *it;
                    unsigned char ch = (unsigned char)atoi(tok.c_str());
                    if (ch <= 0x64)
                    {
                        Packet_Web_Notice_Single pkt;
                        // R10: 成员访问复现 ORIG 的 mov %al,-0x168(%ebp) 直写
                        pkt.data[0] = ((WebNoticeBroadcastPacket*)hdr)->m_byLen;
                        memset((char*)&pkt + 0xb, 0, 0xff);
                        strncpy((char*)&pkt + 0xb, (char*)hdr + 0x10b,
                            ((WebNoticeBroadcastPacket*)hdr)->m_byLen);
                        handler->SendToTcpServer((char*)&pkt, 0x10a, ch);
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1e0, "./log/Except",
            "CPacketTranslater::OnWebNoticeBroadcast() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1e5, "./log/Except",
            "CPacketTranslater::OnWebNoticeBroadcast() Exception Break\n");
    }
}
```
