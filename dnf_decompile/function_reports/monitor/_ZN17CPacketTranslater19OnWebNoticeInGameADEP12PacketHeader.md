# _ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader

`CPacketTranslater::OnWebNoticeInGameAD(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8090c3e` | `0x22a` | `0x807c236` | `0x230` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,152 +1,154 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xdf>
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"m_pclApp == 0",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xa4>
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x14c>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x152>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x46(%ebp),%eax
+lea    -0x4a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Web_Notice_InGame_AdvertisementC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-lea    -0x46(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x20(%ebp)
+lea    -0x4a(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 mov    0x8(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0x1f84,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"OnWebNoticeInGameAD() packet_id(%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x222>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x228>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x1c8>
+jne    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x1ce>
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
 movl   $0x1f88,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeInGameAD Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x1c1>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x1c7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x222>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x228>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1f8d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebNoticeInGameAD Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x21d>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x223>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x4c,%esp
+add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebNoticeInGameAD(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  CDNFException *this;
  Packet_Web_Notice_InGame_Advertisement local_4a [10];
  string local_40 [7];
  allocator local_39;
  CMyFileLog local_38 [40];
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08090c74 to 08090c78 has its CatchHandler @ 08090ce2 */
    std::string::string(local_40,"m_pclApp == 0",&local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08090c93 to 08090c97 has its CatchHandler @ 08090c9a */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08090cd1 to 08090cd5 has its CatchHandler @ 08090cd8 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08090d18 to 08090d84 has its CatchHandler @ 08090d8a */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  Packet_Web_Notice_InGame_Advertisement::Packet_Web_Notice_InGame_Advertisement(local_4a);
  CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
            (*(CServerHandler **)(m_pclApp + 0xa0),(PacketHeader *)local_4a);
  uVar1 = *(ushort *)param_1;
  CMyFileLog::CMyFileLog(local_38,"OnWebNoticeInGameAD",0x1f84);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_38,"./log/Web","OnWebNoticeInGameAD() packet_id(%d)\n",(uint)uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5237 行）：

```cpp
void CPacketTranslater::OnWebNoticeInGameAD(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("m_pclApp == 0");
    }
    Packet_Web_Notice_InGame_Advertisement reply;
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendAllTcpGameServer(&reply);
    DNF_LOG_SCOPE_LINE(0x1f84,"./log/Web", "OnWebNoticeInGameAD() packet_id(%d)\n",
        (unsigned int)*(unsigned short*)pkt);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1f88, "./log/Except", "CPacketTranslater::OnWebNoticeInGameAD Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1f8d, "./log/Except", "CPacketTranslater::OnWebNoticeInGameAD Exception Break\n");
    }
}
```
