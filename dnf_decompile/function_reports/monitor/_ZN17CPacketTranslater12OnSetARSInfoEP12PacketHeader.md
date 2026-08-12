# _ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader

`CPacketTranslater::OnSetARSInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808cce0` | `0x252` | `0x80780f0` | `0x252` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,160 +1,160 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0xdf>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnSetARSInfo : 0 == m_pclApp",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0xa4>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x142>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
 movl   $0x183d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnSetARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[ARS_INFO] DBMW -> Monitor -> GameSvr",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
 movl   $0x4bf,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x24a>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x1e4>
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
 movl   $"CPacketTranslater::OnSetARSInfo() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1844,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnSetARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSetARSInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x1dd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x24a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnSetARSInfo() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x184a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnSetARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSetARSInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader+0x245>
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

/* CPacketTranslater::OnSetARSInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader(PacketHeader *param_1)

{
  CDNFException *this;
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808cd16 to 0808cd1a has its CatchHandler @ 0808cd84 */
    std::string::string(local_44,"CPacketTranslater::OnSetARSInfo : 0 == m_pclApp",&local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808cd35 to 0808cd39 has its CatchHandler @ 0808cd3c */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0808cd73 to 0808cd77 has its CatchHandler @ 0808cd7a */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808cdba to 0808ce1c has its CatchHandler @ 0808ce22 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  CMyFileLog::CMyFileLog(local_3c,"OnSetARSInfo",0x183d);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/Secu","[ARS_INFO] DBMW -> Monitor -> GameSvr");
  CServerHandler::SendAllToGameServer(*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,0x4bf);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4160 行）：

```cpp
void CPacketTranslater::OnSetARSInfo(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnSetARSInfo : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0x183d, "./log/Secu", "[ARS_INFO] DBMW -> Monitor -> GameSvr");
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendAllToGameServer((char*)pkt, 0x4bf);


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnSetARSInfo() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1844, "./log/Except", "CPacketTranslater::OnSetARSInfo() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnSetARSInfo() Exception Break");
        DNF_LOG_SCOPE_LINE(0x184a, "./log/Except", "CPacketTranslater::OnSetARSInfo() Exception Break\n");
    }
}
```
