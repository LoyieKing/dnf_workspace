# _ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader

`CPacketTranslater::OnUpdateMiniCraneSeed(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8091bc6` | `0x31b` | `0x807d11c` | `0x317` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,235 +1,235 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22SetMiniCraneRandomSeedEv>
+mov    -0x20(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CApplication16getMiniCraneSeedEv>
-mov    -0x20(%ebp),%edx
-mov    %eax,0xa(%edx)
+mov    %eax,0xa(%ebx)
 cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x112>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnUpdateMiniCraneSeed, packet is null",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0xb8>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0xb2>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0xd7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0xd7>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0xef>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0xd7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x231>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x12e>
+je     <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x157>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x204>
+je     <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x157>
+mov    -0x20(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%ecx
+mov    -0x20(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x30f>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnUpdateMiniCraneSeed m_pclApp or m_pclServerHandler is null",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1ad>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1d6>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1a7>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1cc>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1cc>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1d0>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1f5>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1f5>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1e1>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1cc>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x31(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x20a>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x1f5>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x231>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
-mov    -0x20(%ebp),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x313>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x2b5>
+jne    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x2b1>
 mov    %ecx,(%esp)
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
 movl   $0x222b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnUpdateMiniCraneSeed Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x2ae>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x2aa>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x313>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x30f>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x2230,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPakcetTranslater::OnUpdateMiniCraneSeed Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x30e>
+jmp    <T> <_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader+0x30a>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
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

/* CPacketTranslater::OnUpdateMiniCraneSeed(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *pCVar2;
  string local_44 [7];
  allocator local_3d;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  local_24 = param_1;
                    /* try { // try from 08091bdd to 08091be1 has its CatchHandler @ 08091df7 */
  CApplication::_ZN12CApplication22SetMiniCraneRandomSeedEv(m_pclApp);
  uVar1 = CApplication::getMiniCraneSeed(m_pclApp);
  *(undefined4 *)(local_24 + 10) = uVar1;
  if (local_24 == (PacketHeader *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08091c1f to 08091c23 has its CatchHandler @ 08091c99 */
    std::string::string(local_44,"CPacketTranslater::OnUpdateMiniCraneSeed, packet is null",
                        &local_3d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08091c3e to 08091c42 has its CatchHandler @ 08091c45 */
    CDNFException::CDNFException(pCVar2,local_44);
                    /* try { // try from 08091c84 to 08091c88 has its CatchHandler @ 08091c8b */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08091cd3 to 08091cd7 has its CatchHandler @ 08091df7 */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  if ((m_pclApp != (CApplication *)0x0) && (*(int *)(m_pclApp + 0xa0) != 0)) {
    CServerHandler::SendAllToGameServer
              (*(CServerHandler **)(m_pclApp + 0xa0),(char *)local_24,
               (uint)*(ushort *)(local_24 + 2));
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08091d14 to 08091d18 has its CatchHandler @ 08091d8e */
  std::string::string(local_3c,
                      "CPacketTranslater::OnUpdateMiniCraneSeed m_pclApp or m_pclServerHandler is null"
                      ,local_35);
  pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08091d33 to 08091d37 has its CatchHandler @ 08091d3a */
  CDNFException::CDNFException(pCVar2,local_3c);
                    /* try { // try from 08091d79 to 08091d7d has its CatchHandler @ 08091d80 */
  std::string::~string(local_3c);
  std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08091dc5 to 08091df1 has its CatchHandler @ 08091df7 */
  __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5449 行）：

```cpp
void CPacketTranslater::OnUpdateMiniCraneSeed(PacketHeader* pkt)
{
    try
    {
        PacketHeader* local_pkt = pkt;
        m_pclApp->SetMiniCraneRandomSeed();
        ((RA_UINT<10>*)local_pkt)->v = (unsigned int)m_pclApp->getMiniCraneSeed();
        if (local_pkt == 0)
        {
            throw CDNFException("CPacketTranslater::OnUpdateMiniCraneSeed, packet is null");
        }
        if (m_pclApp != 0 && ((RA_INT<160>*)m_pclApp)->v != 0)
        {
            m_pclApp->m_serverHandler2->SendAllToGameServer((char*)local_pkt, ((RA_U16<2>*)local_pkt)->v);
            return;
        }
        throw CDNFException("CPacketTranslater::OnUpdateMiniCraneSeed m_pclApp or m_pclServerHandler is null");
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x222b,"./log/Except",
            "CPacketTranslater::OnUpdateMiniCraneSeed Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x2230, "./log/Except",
            "CPakcetTranslater::OnUpdateMiniCraneSeed Exception Break\n");
    }
}
```
