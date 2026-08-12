# _ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader

`CPacketTranslater::OnExchangeServerInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8086942` | `0x1f1` | `0x80724a0` | `0x200` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,135 +1,138 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x4d>
+jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x4c>
 movl   $0xe59,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnExchangeServerInfo : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/ExchangeServer",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1f9>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    %eax,-0x40(%ebp)
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x20(%ebp)
-movb   $0x0,-0x41(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%edi
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+movb   $0x0,-0x3d(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
 movzwl 0xe(%eax),%eax
-movswl %ax,%esi
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%ebx
+mov    %ax,-0x12(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x10(%ebp)
+movswl -0x12(%ebp),%ebx
 call   <T> <_Z25GetInstanceExchangeServerv>
-lea    -0x41(%ebp),%edx
+lea    -0x3d(%ebp),%edx
 mov    %edx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb>
-movzbl -0x41(%ebp),%eax
+movzbl -0x3d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+je     <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1f9>
+mov    -0x24(%ebp),%ebx
 call   <T> <_Z25GetInstanceExchangeServerv>
 mov    %eax,(%esp)
 call   <T> <_ZN15CExchangeServer21GetExchangeServerPortEv>
-mov    -0x24(%ebp),%edx
-mov    %ax,0xe(%edx)
+mov    %ax,0xe(%ebx)
+mov    -0x24(%ebp),%ebx
 call   <T> <_Z25GetInstanceExchangeServerv>
 mov    %eax,(%esp)
 call   <T> <_ZN15CExchangeServer19GetExchangeServerIpEv>
-mov    -0x24(%ebp),%edx
-mov    %eax,0x10(%edx)
+mov    %eax,0x10(%ebx)
+mov    -0x24(%ebp),%ebx
 call   <T> <_Z25GetInstanceExchangeServerv>
 mov    %eax,(%esp)
 call   <T> <_ZN15CExchangeServer26GetExchangeServerChannelNoEv>
-mov    -0x24(%ebp),%edx
-mov    %eax,0xa(%edx)
-mov    -0x24(%ebp),%esi
+mov    %eax,0xa(%ebx)
 mov    -0x20(%ebp),%eax
 movzbl %al,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %esi,0x8(%esp)
+mov    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendToGameServerEhP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1f9>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x18f>
+jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x19f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xe71,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnExchangeServerInfo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x198>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1f9>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xe76,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnExchangeServerInfo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e4>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1f4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x5c,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnExchangeServerInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  PacketHeader *pPVar4;
  undefined2 uVar5;
  CExchangeServer *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CServerHandler *this;
  bool local_45;
  undefined4 local_44;
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  undefined4 local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0808696a to 08086a4f has its CatchHandler @ 08086a55 */
    CMyFileLog::CMyFileLog(local_40,"OnExchangeServerInfo",0xe59);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/ExchangeServer",
               "CPacketTranslater::OnExchangeServerInfo : 0 == m_pclApp");
  }
  else {
    local_28 = param_1;
    local_44 = *(undefined4 *)(param_1 + 0x10);
    local_24 = *(undefined4 *)(param_1 + 10);
    local_45 = false;
    iVar2 = *(int *)(param_1 + 10);
    sVar1 = *(short *)(param_1 + 0xe);
    uVar3 = *(uint *)(param_1 + 0x10);
    pCVar6 = (CExchangeServer *)GetInstanceExchangeServer();
    CExchangeServer::_ZN15CExchangeServer16SetExchageServerEjsiRb
              (pCVar6,uVar3,sVar1,iVar2,&local_45);
    if (local_45 != true) {
      pCVar6 = (CExchangeServer *)GetInstanceExchangeServer();
      uVar5 = CExchangeServer::_ZN15CExchangeServer21GetExchangeServerPortEv(pCVar6);
      *(undefined2 *)(local_28 + 0xe) = uVar5;
      pCVar6 = (CExchangeServer *)GetInstanceExchangeServer();
      uVar7 = CExchangeServer::_ZN15CExchangeServer19GetExchangeServerIpEv(pCVar6);
      *(undefined4 *)(local_28 + 0x10) = uVar7;
      pCVar6 = (CExchangeServer *)GetInstanceExchangeServer();
      uVar8 = CExchangeServer::_ZN15CExchangeServer26GetExchangeServerChannelNoEv(pCVar6);
      uVar7 = local_24;
      pPVar4 = local_28;
      *(undefined4 *)(local_28 + 10) = uVar8;
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      CServerHandler::_ZN14CServerHandler16SendToGameServerEhP12PacketHeader
                (this,(uchar)uVar7,pPVar4);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2552 行）：

```cpp
void CPacketTranslater::OnExchangeServerInfo(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0xe59,"./log/ExchangeServer",
                "CPacketTranslater::OnExchangeServerInfo : 0 == m_pclApp");
        }
        else
        {
            PacketHeader* reply = pkt;
            unsigned int channel = ((RA_UINT<10>*)pkt)->v;
            unsigned int ip = ((RA_UINT<16>*)pkt)->v;
            bool result = false;
            int code = ((RA_INT<10>*)pkt)->v;
            short port = ((RA_S16<14>*)pkt)->v;
            unsigned int ip2 = ((RA_UINT<16>*)pkt)->v;
            GetInstanceExchangeServer()->SetExchageServer(ip2, port, code, result);
            if (!result)
            {
                ((RA_U16<14>*)reply)->v =
                    GetInstanceExchangeServer()->GetExchangeServerPort();
                ((RA_UINT<16>*)reply)->v =
                    GetInstanceExchangeServer()->GetExchangeServerIp();
                ((RA_UINT<10>*)reply)->v =
                    GetInstanceExchangeServer()->GetExchangeServerChannelNo();
                m_pclApp->Get_ServerHandler()->SendToGameServer((unsigned char)channel, reply);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xe71,"./log/Except",
            "CPacketTranslater::OnExchangeServerInfo Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xe76, "./log/Except", "CPacketTranslater::OnExchangeServerInfo Exception Break\n");
    }
}
```
