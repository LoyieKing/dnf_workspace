# _ZN17CPacketTranslater10OnEventEndEP12PacketHeader

`CPacketTranslater::OnEventEnd(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80845bc` | `0x273` | `0x806f784` | `0x277` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,170 +1,172 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0xdf>
-lea    -0x39(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnEventEnd : 0 == m_pclApp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0xa4>
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x163>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x169>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
 movl   $0xa66,0x8(%esp)
 movl   $"OnEventEnd",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnEventEnd() eventCode(%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x31c(%eax),%eax
+add    $0x31c,%eax
+mov    (%eax),%eax
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19CEventActionManager11OnEndActionEj>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x26f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x205>
+jne    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x209>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0x4(%esp)
+movl   $"CPacketTranslater::OnEventEnd() �삁�쇅 諛쒖깮 : %s\n",(%esp)
+call   <T> <printf>
+movl   $0xa73,0x8(%esp)
+movl   $"OnEventEnd",0x4(%esp)
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
-call   *%edx
-mov    %eax,0x4(%esp)
-movl   $"CPacketTranslater::OnEventEnd() 예외 발생 : %s\n",(%esp)
-call   <T> <printf>
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0xa73,0x8(%esp)
-movl   $"OnEventEnd",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnEventEnd() 예외 발생 : %s\n",0x8(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnEventEnd() �삁�쇅 諛쒖깮 : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x1fe>
+jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x202>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x26f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-movl   $"CPacketTranslater::OnEventEnd() 예외 발생",(%esp)
+movl   $"CPacketTranslater::OnEventEnd() �삁�쇅 諛쒖깮",(%esp)
 call   <T> <puts>
 movl   $0xa79,0x8(%esp)
 movl   $"OnEventEnd",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnEventEnd() 예외 발생\n",0x8(%esp)
+movl   $"CPacketTranslater::OnEventEnd() �삁�쇅 諛쒖깮\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader+0x26a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnEventEnd(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater10OnEventEndEP12PacketHeader(PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *this;
  CServerHandler *this_00;
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080845f2 to 080845f6 has its CatchHandler @ 08084660 */
    std::string::string(local_44,"CPacketTranslater::OnEventEnd : 0 == m_pclApp",&local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08084611 to 08084615 has its CatchHandler @ 08084618 */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0808464f to 08084653 has its CatchHandler @ 08084656 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08084696 to 08084719 has its CatchHandler @ 0808471f */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_3c,"OnEventEnd",0xa66);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/Web","CPacketTranslater::OnEventEnd() eventCode(%d)\n",uVar1);
  CEventActionManager::OnEndAction
            (*(CEventActionManager **)(m_pclApp + 0x31c),*(uint *)(local_24 + 10));
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader(this_00,param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2411 行）：

```cpp
void CPacketTranslater::OnEventEnd(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnEventEnd : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnEventEnd", 0x92);
        log("./log/Web", "CPacketTranslater::OnEventEnd() eventCode(%d)\n",
            *(int*)((char*)header + 0xa));
    }
    DNF_CATCH_LOG_THROW("CPacketTranslater::OnEventEnd() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
}
```
