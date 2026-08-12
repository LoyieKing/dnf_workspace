# _ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader

`CPacketTranslater::OnChannelType(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8089fca` | `0x1b6` | `0x807569c` | `0x1d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,136 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1ae>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1c8>
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14FindGameServerEi>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x10d>
-lea    -0x2d(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x108>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnChannelType : pclGameServer == 0",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xbe>
+jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xb9>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xb8>
+jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xb3>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xd5>
+jne    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xd0>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xd5>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xd0>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xea>
+jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xe5>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xd5>
+jne    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0xd0>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x149>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x146>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x6(%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17FindTcpGameServerEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1ad>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1c8>
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer14SetChannelTypeEi>
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1ae>
+jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1c8>
+cmp    $0x1,%edx
+je     <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x153>
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,%ebx
 movl   $0x13f4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater13OnChannelTypeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $&_ZZN17CPacketTranslater13OnChannelTypeEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1a6>
+jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1c3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader+0x1ae>
-nop
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnChannelType(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader(PacketHeader *param_1)

{
  CDNFException *this;
  string local_38 [7];
  allocator local_31 [9];
  int local_28;
  CTcpGameServer *local_24;
  PacketHeader *local_20;
  
  local_20 = param_1;
  if (m_pclApp != 0) {
                    /* try { // try from 08089ffa to 08089ffe has its CatchHandler @ 0808a113 */
    local_28 = CApplication::FindGameServer(m_pclApp);
    if (local_28 == 0) {
      std::allocator<char>::allocator();
                    /* try { // try from 0808a031 to 0808a035 has its CatchHandler @ 0808a09f */
      std::string::string(local_38,"CPacketTranslater::OnChannelType : pclGameServer == 0",local_31)
      ;
      this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808a050 to 0808a054 has its CatchHandler @ 0808a057 */
      CDNFException::CDNFException(this,local_38);
                    /* try { // try from 0808a08e to 0808a092 has its CatchHandler @ 0808a095 */
      std::string::~string(local_38);
      std::allocator<char>::~allocator((allocator<char> *)local_31);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808a0d2 to 0808a0ed has its CatchHandler @ 0808a113 */
      __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
    local_24 = (CTcpGameServer *)CApplication::FindTcpGameServer(m_pclApp);
    if (local_24 != (CTcpGameServer *)0x0) {
      CTcpGameServer::SetChannelType(local_24,*(int *)(local_20 + 0xe));
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3516 行）：

```cpp
void CPacketTranslater::OnChannelType(PacketHeader* pkt)
{
    PacketHeader* p = pkt;
    if (m_pclApp != 0)
    {
        try
        {
            CGameServer* gs = (CGameServer*)m_pclApp->FindGameServer((int)((RA_UINT<10>*)p)->v);
            if (gs == 0)
            {
                throw CDNFException("CPacketTranslater::OnChannelType : pclGameServer == 0");
            }
            CTcpGameServer* tcpGs =
                (CTcpGameServer*)m_pclApp->FindTcpGameServer(((RA_UINT<6>*)p)->v);
            if (tcpGs != 0)
            {
                tcpGs->SetChannelType(((RA_INT<14>*)p)->v);
            }
        }
        catch (CDNFException& e)
        {
            DNF_LOG_SCOPE_LINE(0x13f4, "./log/Except", "%s Exception Break\n", e.what());
        }
    }
}
```
