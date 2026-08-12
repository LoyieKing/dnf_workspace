# _ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader

`CPacketTranslater::OnCheckOverlappedAccusation(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808cf32` | `0x1a9` | `0x8078594` | `0x1ad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,128 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%edx
+mov    0xa(%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17FindTcpGameServerEj>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a1>
-mov    -0x18(%ebp),%eax
-movzbl 0x15e(%eax),%eax
-movsbl %al,%esi
-mov    -0x18(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a6>
+mov    0x8(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,%ebx
-lea    -0x21(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x40(%eax),%edx
-lea    -0x21(%ebp),%eax
+lea    -0x16(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x19(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-mov    -0x18(%ebp),%eax
-lea    0x22(%eax),%edx
-lea    -0x19(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-lea    -0x28(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x20(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication19AddAccusationCharacERKSsS1_ic>
-mov    -0x18(%ebp),%edx
-mov    %al,0x15e(%edx)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x10b>
+jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x79>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0xe3>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x19(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x123>
-lea    -0x19(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x13e>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x21(%ebp),%eax
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x21(%ebp),%eax
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
+lea    -0x15(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+mov    0x8(%ebp),%eax
+lea    0x22(%eax),%edx
+lea    -0x15(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0xc5>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x15(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x180>
+lea    -0x15(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    0x8(%ebp),%ebx
+mov    0x8(%ebp),%eax
+movzbl 0x15e(%eax),%eax
+movsbl %al,%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %edx,0x10(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0xc(%esp)
+lea    -0x1c(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication19AddAccusationCharacERKSsS1_ic>
+mov    %al,0x15e(%ebx)
 movl   $0x15f,0x8(%esp)
 movl   $0x1b66,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a2>
-mov    -0x10(%ebp),%eax
 mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x173>
 movl   $0x15f,0x8(%esp)
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a2>
-nop
+jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x173>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x180>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x19b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCheckOverlappedAccusation(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader
               (PacketHeader *param_1)

{
  int iVar1;
  PacketHeader PVar2;
  string local_2c [7];
  allocator local_25;
  string local_24 [7];
  allocator local_1d;
  PacketHeader *local_1c;
  CTcpGameServer *local_18;
  char *local_14;
  char *local_10;
  
  local_1c = param_1;
  local_18 = (CTcpGameServer *)CApplication::FindTcpGameServer((uint)m_pclApp);
  if (local_18 != (CTcpGameServer *)0x0) {
    PVar2 = local_1c[0x15e];
    iVar1 = *(int *)(local_1c + 0x12);
    std::allocator<char>::allocator();
                    /* try { // try from 0808cf9b to 0808cf9f has its CatchHandler @ 0808d055 */
    std::string::string(local_2c,(char *)(local_1c + 0x40),&local_25);
    std::allocator<char>::allocator();
                    /* try { // try from 0808cfc2 to 0808cfc6 has its CatchHandler @ 0808d015 */
    std::string::string(local_24,(char *)(local_1c + 0x22),&local_1d);
                    /* try { // try from 0808cfe5 to 0808cfe9 has its CatchHandler @ 0808d000 */
    PVar2 = (PacketHeader)
            CApplication::AddAccusationCharac(m_pclApp,local_24,local_2c,iVar1,(char)PVar2);
    local_1c[0x15e] = PVar2;
                    /* try { // try from 0808cff9 to 0808cffd has its CatchHandler @ 0808d015 */
    std::string::~string(local_24);
    std::allocator<char>::~allocator((allocator<char> *)&local_1d);
                    /* try { // try from 0808d04e to 0808d052 has its CatchHandler @ 0808d055 */
    std::string::~string(local_2c);
    std::allocator<char>::~allocator((allocator<char> *)&local_25);
    local_14 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                 (local_18,0x1b66,0x15f);
    if (local_14 != (char *)0x0) {
      local_10 = local_14;
      memcpy(local_14,local_1c,0x15f);
      CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_18,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4217 行）：

```cpp
void CPacketTranslater::OnCheckOverlappedAccusation(PacketHeader* pkt)
{
    CTcpGameServer* tcpGs =
        (CTcpGameServer*)m_pclApp->FindTcpGameServer(
            ((RA_UINT<10>*)pkt)->v);
    if (tcpGs != 0)
    {
        int type = ((RA_INT<18>*)pkt)->v;
        std::string name2((char*)pkt + 0x40);
        std::string name1((char*)pkt + 0x22);
        ((RA_S8<350>*)pkt)->v = (char)m_pclApp->AddAccusationCharac(
            name1, name2, type, ((RA_S8<350>*)pkt)->v);
        char* buf = tcpGs->makePacketHeader(0x1b66, 0x15f);
        if (buf != 0)
        {
            memcpy(buf, pkt, 0x15f);
            tcpGs->SendToGameServer(buf);
        }
    }
}
```
