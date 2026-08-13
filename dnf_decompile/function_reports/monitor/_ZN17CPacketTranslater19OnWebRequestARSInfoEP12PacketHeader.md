# _ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader

`CPacketTranslater::OnWebRequestARSInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808ca7c` | `0x264` | `0x80783b6` | `0x261` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,167 +1,165 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0xdf>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnWebRequestARSInfo : 0 == m_pclApp",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0xa4>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x151>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25b>
+je     <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
 movl   $0x181d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[ARS_INFO] Web -> Monitor -> DBMW",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x24(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler22SendDBMWRequestARSInfoEh>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
+jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x1f3>
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
 movl   $"CPacketTranslater::OnWebRequestARSInfo() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1824,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebRequestARSInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x1ec>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
+jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnWebRequestARSInfo() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x182a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebRequestARSInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x254>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
-nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebRequestARSInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_48 [7];
  allocator local_41;
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CServerHandler *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808cab2 to 0808cab6 has its CatchHandler @ 0808cb20 */
    std::string::string(local_48,"CPacketTranslater::OnWebRequestARSInfo : 0 == m_pclApp",&local_41)
    ;
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808cad1 to 0808cad5 has its CatchHandler @ 0808cad8 */
    CDNFException::CDNFException(this,local_48);
                    /* try { // try from 0808cb0f to 0808cb13 has its CatchHandler @ 0808cb16 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)&local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808cb56 to 0808cbc7 has its CatchHandler @ 0808cbcd */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_24 = *(CServerHandler **)(m_pclApp + 0xa0);
  if (local_24 != (CServerHandler *)0x0) {
    CMyFileLog::CMyFileLog(local_40,"OnWebRequestARSInfo",0x181d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_40,"./log/Secu","[ARS_INFO] Web -> Monitor -> DBMW")
    ;
    CServerHandler::SendDBMWRequestARSInfo(local_24,(uchar)local_28[10]);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4209 行）：

```cpp
void CPacketTranslater::OnWebRequestARSInfo(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnWebRequestARSInfo : 0 == m_pclApp");
    }
    PacketHeader* p = pkt;
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    if (handler != 0)
    {
        DNF_LOG_SCOPE_LINE(0x181d, "./log/Secu", "[ARS_INFO] Web -> Monitor -> DBMW");
        handler->SendDBMWRequestARSInfo(((RA_U8<10>*)p)->v);
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnWebRequestARSInfo() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1824, "./log/Except", "CPacketTranslater::OnWebRequestARSInfo() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnWebRequestARSInfo() Exception Break");
        DNF_LOG_SCOPE_LINE(0x182a, "./log/Except", "CPacketTranslater::OnWebRequestARSInfo() Exception Break\n");
    }
}
```
