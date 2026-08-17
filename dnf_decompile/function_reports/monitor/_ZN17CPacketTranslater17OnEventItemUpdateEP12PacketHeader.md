# _ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader

`CPacketTranslater::OnEventItemUpdate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8080076` | `0x328` | `0x806c08a` | `0x328` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,213 +1,212 @@
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
+nop
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x9c,%esp
+sub    $0x8c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x130>
-movl   $0x0,-0x20(%ebp)
+mov    %eax,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x12e>
+movl   $0x0,-0x24(%ebp)
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x8a>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14FindGameServerEi>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
 je     <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x7d>
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11IsConnectedEv>
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x7d>
 mov    $0x1,%eax
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x82>
 mov    $0x0,%eax
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x9a>
-addl   $0x1,-0x20(%ebp)
-cmpl   $0xfe,-0x20(%ebp)
+addl   $0x1,-0x24(%ebp)
+cmpl   $0xfe,-0x24(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x4a>
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x9b>
 nop
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x13e>
-mov    -0x2c(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x70(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x6c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x2c(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x2c(%ebp),%eax
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x13c>
+mov    -0x38(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x20(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x68(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x16(%eax),%edi
+mov    -0x38(%ebp),%eax
+mov    0xe(%eax),%esi
+mov    -0x38(%ebp),%eax
+mov    0x12(%eax),%ebx
 movl   $0x4b0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x68(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x6c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Fail: Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: %d][Stack: %d]\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x31d>
-mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-movzbl %al,%eax
-mov    %eax,-0x68(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x1e(%eax),%eax
-mov    %eax,-0x64(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x60(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x2c(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x2c(%ebp),%eax
+mov    %al,-0x29(%ebp)
+mov    -0x38(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x28(%ebp)
+movzbl -0x29(%ebp),%eax
+mov    %eax,-0x64(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x1e(%eax),%eax
+mov    %eax,-0x60(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x5c(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x16(%eax),%edi
+mov    -0x38(%ebp),%eax
+mov    0xe(%eax),%esi
+mov    -0x38(%ebp),%eax
+mov    0x12(%eax),%ebx
 movl   $0x4b7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x68(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x64(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0x64(%ebp),%eax
+mov    -0x60(%ebp),%eax
 mov    %eax,0x20(%esp)
-mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x5c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: %d][Stack: %d][TableID: %d][Channel No: %d]\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-cmpl   $0x0,-0x28(%ebp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+cmpl   $0x0,-0x30(%ebp)
 je     <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x31d>
-mov    -0x2c(%ebp),%edx
-mov    -0x28(%ebp),%eax
+mov    0x8(%ebp),%eax
 movl   $0x22,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x31d>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x2b7>
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
 movl   $"CPacketTranslater::OnCoinUpdate() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x4c3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCoinUpdate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x2b0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x31d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCoinUpdate() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x4c9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCoinUpdate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x318>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x9c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
+add    $0x8c,%esp
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnEventItemUpdate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  PacketHeader *local_30;
  CServerInterface *local_2c;
  CUser *local_28;
  int local_24;
  
  local_30 = param_1;
  local_2c = (CServerInterface *)0x0;
                    /* try { // try from 080800a5 to 08080285 has its CatchHandler @ 0808028b */
  local_28 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
  if (local_28 == (CUser *)0x0) {
    for (local_24 = 0; local_24 < 0xff; local_24 = local_24 + 1) {
      local_2c = (CServerInterface *)CApplication::FindGameServer(m_pclApp);
      if ((local_2c == (CServerInterface *)0x0) ||
         (cVar6 = CServerInterface::_ZN16CServerInterface11IsConnectedEv(local_2c), cVar6 == '\0'))
      {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) break;
    }
    if (local_2c == (CServerInterface *)0x0) {
      uVar1 = *(undefined4 *)(local_30 + 0x1a);
      uVar2 = *(undefined4 *)(local_30 + 0x16);
      uVar3 = *(undefined4 *)(local_30 + 0xe);
      uVar4 = *(undefined4 *)(local_30 + 0x12);
      uVar7 = NumberToString(*(uint *)(local_30 + 10),0);
      CMyFileLog::CMyFileLog(local_50,"OnEventItemUpdate",0x4b0);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/User",
                 "Fail: Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: %d][Stack: %d]\n"
                 ,uVar7,uVar4,uVar3,uVar2,uVar1);
      return;
    }
  }
  else {
    local_2c = (CServerInterface *)CUser::GetGameServer(local_28);
  }
  uVar8 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(local_2c);
  uVar1 = *(undefined4 *)(local_30 + 0x1e);
  uVar2 = *(undefined4 *)(local_30 + 0x1a);
  uVar3 = *(undefined4 *)(local_30 + 0x16);
  uVar4 = *(undefined4 *)(local_30 + 0xe);
  uVar7 = *(undefined4 *)(local_30 + 0x12);
  uVar9 = NumberToString(*(uint *)(local_30 + 10),0);
  CMyFileLog::CMyFileLog(local_48,"OnEventItemUpdate",0x4b7);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_48,"./log/User",
             "Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: %d][Stack: %d][TableID: %d][Channel No: %d]\n"
             ,uVar9,uVar7,uVar4,uVar3,uVar2,uVar1,uVar8 & 0xff);
  if (local_2c != (CServerInterface *)0x0) {
    CServerInterface::_ZN16CServerInterface12SendToServerEPci(local_2c,(char *)local_30,0x22);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1014 行）：

```cpp
void CPacketTranslater::OnEventItemUpdate(PacketHeader* pkt)
{
    try
    {
        Packet_Event_Item_Update* item = (Packet_Event_Item_Update*)pkt;
        CUser* user =
            (&m_pclApp->m_userManager)->FindUser(item->m_dbid);
        CServerInterface* gs = 0;
        if (user == 0)
        {
            for (int i = 0; i < 0xff; i++)
            {
                gs = (CServerInterface*)m_pclApp->FindGameServer(i);
                if (gs != 0 && gs->IsConnected() != 0)
                {
                    break;
                }
            }
            if (gs == 0)
            {
                char* dbid = NumberToString(item->m_dbid, 0);
                DNF_LOG_SCOPE_LINE(0x4b0,"./log/User",
                    "Fail: Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: "
                    "%d][Stack: %d]\n",
                    dbid, item->m_eventType,
                    item->m_charNo,
                    item->m_itemId,
                    item->m_stack);
                return;
            }
        }
        else
        {
            gs = (CServerInterface*)user->GetGameServer();
        }
        unsigned char channel = gs->GetChannelNo();
        char* dbid = NumberToString(item->m_dbid, 0);
        DNF_LOG_SCOPE_LINE(0x4b7,"./log/User",
            "Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: %d][Stack: "
            "%d][TableID: %d][Channel No: %d]\n",
            dbid, item->m_eventType,
            item->m_charNo, item->m_itemId,
            item->m_stack, item->m_tableId,
            (unsigned int)channel);
        if (gs != 0)
        {
            gs->SendToServer((char*)pkt, 0x22);
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnCoinUpdate() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x4c3, "./log/Except", "CPacketTranslater::OnCoinUpdate() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnCoinUpdate() Exception Break");
        DNF_LOG_SCOPE_LINE(0x4c9, "./log/Except", "CPacketTranslater::OnCoinUpdate() Exception Break\n");
    }
}
```
