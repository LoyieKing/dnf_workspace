# _ZN17CPacketTranslater12OnForbidChatEP12PacketHeader

`CPacketTranslater::OnForbidChat(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808753a` | `0x234` | `0x8070404` | `0x234` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,154 +1,154 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0xdf>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnForbidChat : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0xa4>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x156>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%ebx
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x12(%eax),%esi
 movl   $0xfdd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnForbidChatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"CPacketTranslater::OnForbidChat() %s for %d secs\n",0x8(%esp)
 movl   $"./log/GM_msg",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
 movl   $0x30,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x22c>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x1d2>
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
 movl   $0xfe3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnForbidChatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnForbidChat() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x1cb>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x22c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xfe8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnForbidChatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnForbidChat() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader+0x227>
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

/* CPacketTranslater::OnForbidChat(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader(PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *this;
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08087570 to 08087574 has its CatchHandler @ 080875de */
    std::string::string(local_44,"CPacketTranslater::OnForbidChat : 0 == m_pclApp",&local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808758f to 08087593 has its CatchHandler @ 08087596 */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 080875cd to 080875d1 has its CatchHandler @ 080875d4 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08087614 to 0808768a has its CatchHandler @ 08087690 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_3c,"OnForbidChat",0xfdd);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/GM_msg","CPacketTranslater::OnForbidChat() %s for %d secs\n",
             param_1 + 0x12,uVar1);
  CServerHandler::SendAllToGameServer(*(CServerHandler **)(m_pclApp + 0xa0),(char *)local_24,0x30);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1965 行）：

```cpp
void CPacketTranslater::OnForbidChat(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnForbidChat : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0xfdd,"./log/GM_msg", "CPacketTranslater::OnForbidChat() %s for %d secs\n", (char*)pkt + 0x12,
        ((RA_UINT<10>*)pkt)->v);
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendAllToGameServer((char*)pkt, 0x30);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xfe3, "./log/Except", "CPacketTranslater::OnForbidChat() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xfe8, "./log/Except", "CPacketTranslater::OnForbidChat() Exception Break\n");
    }
}
```
