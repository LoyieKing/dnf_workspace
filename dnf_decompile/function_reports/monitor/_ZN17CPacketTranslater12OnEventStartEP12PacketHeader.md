# _ZN17CPacketTranslater12OnEventStartEP12PacketHeader

`CPacketTranslater::OnEventStart(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8084332` | `0x28a` | `0x806f6c4` | `0x29a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,176 +1,180 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0xdf>
-lea    -0x39(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnEventStart : 0 == m_pclApp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0xa4>
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x17a>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x18a>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x10(%eax),%eax
+mov    %ax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0xe(%eax),%eax
+mov    %ax,-0x22(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-movzwl 0x10(%eax),%eax
-movzwl %ax,%edi
-mov    -0x20(%ebp),%eax
-movzwl 0xe(%eax),%eax
-movzwl %ax,%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+movzwl -0x24(%ebp),%esi
+movzwl -0x22(%ebp),%ebx
 movl   $0x9f4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnEventStartEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnEventStart() eventCode(%d), eventParam1(%d), eventParam2(%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x31c(%eax),%eax
-mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x282>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x292>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x21c>
+jne    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x22c>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnEventStart() 예외 발생 : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xa3b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnEventStartEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnEventStart() 예외 발생 : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x215>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x225>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x282>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x292>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnEventStart() 예외 발생",(%esp)
 call   <T> <puts>
 movl   $0xa41,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnEventStartEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnEventStart() 예외 발생\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x27d>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x28d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnEventStart(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnEventStartEP12PacketHeader(PacketHeader *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  CDNFException *this;
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08084368 to 0808436c has its CatchHandler @ 080843d6 */
    std::string::string(local_44,"CPacketTranslater::OnEventStart : 0 == m_pclApp",&local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08084387 to 0808438b has its CatchHandler @ 0808438e */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 080843c5 to 080843c9 has its CatchHandler @ 080843cc */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808440c to 080844a6 has its CatchHandler @ 080844ac */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_1 + 0xe);
  uVar3 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_3c,"OnEventStart",0x9f4);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/Web",
             "CPacketTranslater::OnEventStart() eventCode(%d), eventParam1(%d), eventParam2(%d)\n",
             uVar3,(uint)uVar2,(uint)uVar1);
  CEventActionManager::OnStartAction
            (*(CEventActionManager **)(m_pclApp + 0x31c),(Packet_Monitor_Event_Start *)local_24);
  CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
            (*(CServerHandler **)(m_pclApp + 0xa0),param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1828 行）：

```cpp
void CPacketTranslater::OnEventStart(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnEventStart : 0 == m_pclApp");
        }
        PacketHeader* rpkt = pkt;
        unsigned short p2 = ((RA_U16<16>*)pkt)->v;
        unsigned short p1 = ((RA_U16<14>*)pkt)->v;
        unsigned int code = ((RA_UINT<10>*)pkt)->v;
        DNF_LOG_SCOPE_LINE(0x9f4,"./log/Web",
            "CPacketTranslater::OnEventStart() eventCode(%d), eventParam1(%d), "
            "eventParam2(%d)\n",
            code, (unsigned int)p1, (unsigned int)p2);
        ((CEventActionManager*)((RA_INT<796>*)m_pclApp)->v)
            ->OnStartAction((Packet_Monitor_Event_Start*)pkt);
        (m_pclApp->m_serverHandler2)
            ->SendAllTcpGameServer(pkt);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc\x20\xb9\xdf\xbb\xfd : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0xa3b, "./log/Except", "CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc\x20\xb9\xdf\xbb\xfd : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc\x20\xb9\xdf\xbb\xfd");
        DNF_LOG_SCOPE_LINE(0xa41, "./log/Except", "CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc\x20\xb9\xdf\xbb\xfd\n");
    }
}
```
