# _ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader

`CPacketTranslater::OnTcpServerLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809c2c6` | `0x27a` | `0x80dac7c` | `0x25e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,163 +1,154 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x272>
+je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x256>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0xa(%eax),%esi
+mov    -0x18(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x14(%ebp)
+mov    %esi,%edx
+movzbl %dl,%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEh>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x9a>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0xa0>
+and    $0xff,%esi
 movl   $0xc44,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    %esi,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogin Duplicate Server Instance(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x14(%ebp)
+mov    %ebx,%edx
+mov    %esi,%ecx
+movzbl %cl,%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler15CreateTcpServerEhj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x123>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+jne    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x11c>
+and    $0xff,%esi
 movl   $0xc4d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    %esi,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogin CreateTcpServer fail(TYPE:%d, sock:%d)\n",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%edx
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-mov    %edx,0x8(%esp)
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
+mov    %esi,%edx
+movzbl %dl,%eax
+mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)\n",(%esp)
 call   <T> <printf>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+and    $0xff,%esi
 movl   $0xc5b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    %esi,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x216>
+jne    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x1fa>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xc5f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogin Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x20f>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x1f3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xc64,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnTcpServerLogin Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x24f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
 nop
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnTcpServerLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  uint uVar3;
  uchar uVar4;
  int iVar5;
  CServerHandler *this;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  int local_14;
  
  if (m_pclApp != (CApplication *)0x0) {
    local_18 = param_1;
    uVar4 = CApplication::Get_ServerHandler(m_pclApp);
                    /* try { // try from 0809c2ff to 0809c45a has its CatchHandler @ 0809c460 */
    iVar5 = CServerHandler::GetTcpServer(uVar4);
    if (iVar5 == 0) {
      uVar3 = *(uint *)(local_18 + 6);
      PVar1 = local_18[10];
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      local_14 = CServerHandler::_ZN14CServerHandler15CreateTcpServerEhj(this,(uchar)PVar1,uVar3);
      if (local_14 == 0) {
        uVar2 = *(undefined4 *)(local_18 + 6);
        PVar1 = local_18[10];
        CMyFileLog::CMyFileLog(local_38,"OnTcpServerLogin",0xc4d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/TcpServer",
                   "CPacketTranslater::OnTcpServerLogin CreateTcpServer fail(TYPE:%d, sock:%d)\n",
                   (uint)(byte)PVar1,uVar2);
      }
      else {
        printf("CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)\n",(uint)(byte)local_18[10],
               *(undefined4 *)(local_18 + 6));
        uVar2 = *(undefined4 *)(local_18 + 6);
        PVar1 = local_18[10];
        CMyFileLog::CMyFileLog(local_30,"OnTcpServerLogin",0xc5b);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_30,"./log/TcpServer",
                   "CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)",(uint)(byte)PVar1,uVar2);
      }
    }
    else {
      uVar2 = *(undefined4 *)(local_18 + 6);
      PVar1 = local_18[10];
      CMyFileLog::CMyFileLog(local_40,"OnTcpServerLogin",0xc44);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/TcpServer",
                 "CPacketTranslater::OnTcpServerLogin Duplicate Server Instance(TYPE:%d, sock:%d)",
                 (uint)(byte)PVar1,uVar2);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2658 行）：

```cpp
void CPacketTranslater::OnTcpServerLogin(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_Tcp_Server_Login* pkt = (Packet_Tcp_Server_Login*)header;
        register unsigned char idx = pkt->m_idx;
        register int port = (int)pkt->reversed2;
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler->GetTcpServer(idx))
        {
            DNF_LOG_SCOPE_LINE(0xc44,
                "./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogin Duplicate Server Instance(TYPE:%d, sock:%d)",
                idx, port
            );

            return;
        }
        handler = m_pclApp->Get_ServerHandler();
        CTcpServer* ret = handler->CreateTcpServer(idx, port);
        if (ret == 0)
        {
            DNF_LOG_SCOPE_LINE(0xc4d,
                "./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogin CreateTcpServer fail(TYPE:%d, sock:%d)\n",
                idx, port
            );

            return;
        }
        printf("CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)\n", idx,
               port);
        DNF_LOG_SCOPE_LINE(0xc5b,
            "./log/TcpServer",
            "CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)", idx,
            port
        );

    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnTcpServerLogin Exception Break",
                  0xc5f, 0xc64);
}
```
