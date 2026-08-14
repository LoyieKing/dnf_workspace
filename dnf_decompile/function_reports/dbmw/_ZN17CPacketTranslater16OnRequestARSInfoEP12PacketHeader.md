# _ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader

`CPacketTranslater::OnRequestARSInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809d53a` | `0x3a5` | `0x80d8bba` | `0x391` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,236 +1,230 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x530,%esp
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI16st_ars_info_listSaIS0_EEC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x390>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x37c>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager16QueryLoadARSInfoERSt6vectorI16st_ars_info_listSaIS1_EE>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x82>
+je     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x7c>
 movl   $0xdf6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestARSInfo Select fail\n",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x390>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x37c>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x20(%ebp)
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI16st_ars_info_listSaIS0_EE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x215>
-lea    -0x58(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x207>
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI16st_ars_info_listSaIS0_EE4sizeEv>
 mov    %eax,-0x1c(%ebp)
 movl   $0x0,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0xca>
-nop
-lea    -0x517(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x1f1>
+lea    -0x513(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19Packet_Set_ARS_InfoC1Ev>
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0xe2>
-nop
-mov    -0x14(%ebp),%eax
-addl   $0x1,-0x14(%ebp)
-mov    %eax,0x4(%esp)
-lea    -0x58(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x11d>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI16st_ars_info_listSaIS0_EEixEj>
 mov    %eax,%ecx
 mov    -0x10(%ebp),%edx
-lea    -0x517(%ebp),%ebx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-lea    (%ebx,%eax,1),%eax
+lea    -0x513(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 add    $0xf,%eax
+mov    %ecx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN16st_ars_info_list10CopyStructERKS_>
+addl   $0x1,-0x18(%ebp)
 addl   $0x1,-0x10(%ebp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN16st_ars_info_list10CopyStructERKS_>
 cmpl   $0x63,-0x10(%ebp)
-jg     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x130>
-mov    -0x14(%ebp),%eax
+jg     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x132>
+mov    -0x18(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0xe1>
+jge    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x132>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x137>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0xdd>
 mov    -0x10(%ebp),%eax
-mov    %eax,-0x50d(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-jne    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x148>
-movb   $0x0,-0x509(%ebp)
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x160>
-mov    -0x14(%ebp),%eax
+movsbl %al,%eax
+mov    %eax,-0x509(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x156>
+movb   $0x0,-0x505(%ebp)
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x16e>
+mov    -0x18(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x159>
-movb   $0x2,-0x509(%ebp)
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x160>
-movb   $0x1,-0x509(%ebp)
-mov    -0x50d(%ebp),%eax
-mov    $0x64,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+jge    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x167>
+movb   $0x1,-0x505(%ebp)
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x16e>
+movb   $0x2,-0x505(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-mov    $0x4bf,%edx
-mov    %edx,%ecx
-sub    %ax,%cx
-mov    %ecx,%eax
-mov    %ax,-0x515(%ebp)
-movzwl -0x515(%ebp),%eax
+add    $0xf,%eax
+mov    %ax,-0x511(%ebp)
+movzwl -0x511(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x517(%ebp),%eax
+lea    -0x513(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-mov    -0x50d(%ebp),%esi
-movzbl -0x509(%ebp),%eax
-movsbl %al,%ebx
 movl   $0xe1a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[ARS_INFO] Packet Send - Stats : %3d, Cnt : %3d",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x18(%ebp)
-mov    -0x14(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x14(%ebp)
+mov    -0x18(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0xc9>
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x390>
-lea    -0x517(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0xc6>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x37c>
+lea    -0x513(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19Packet_Set_ARS_InfoC1Ev>
-movl   $0x0,-0x50d(%ebp)
-movb   $0x0,-0x509(%ebp)
-movw   $0x4bf,-0x515(%ebp)
-movzwl -0x515(%ebp),%eax
+movl   $0x0,-0x509(%ebp)
+movb   $0x0,-0x505(%ebp)
+movw   $0x4bf,-0x511(%ebp)
+movzwl -0x511(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x517(%ebp),%eax
+lea    -0x513(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-movzbl -0x509(%ebp),%eax
-movsbl %al,%ebx
 movl   $0xe2d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $0x0,0xc(%esp)
 movl   $"[ARS_INFO] Packet Send - Stats : %3d, Cnt : 0",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x390>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x37c>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x31f>
+jne    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x30b>
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
 movl   $0xe32,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestARSInfo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x318>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x304>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x375>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x390>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x361>
+call   <T> <__cxa_end_catch>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x37c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xe37,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestARSInfo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x36e>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x35a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x375>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x390>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x361>
+call   <T> <__cxa_end_catch>
+jmp    <T> <_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader+0x37c>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI16st_ars_info_listSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI16st_ars_info_listSaIS0_EED1Ev>
 add    $0x530,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestARSInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  char cVar2;
  st_ars_info_list *psVar3;
  int iVar4;
  int iVar5;
  Packet_Set_ARS_Info local_51b [2];
  ushort local_519;
  int local_511;
  char local_50d;
  st_ars_info_list asStack_50c [1200];
  vector<st_ars_info_list,std::allocator<st_ars_info_list>> local_5c [12];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CMonitorServer *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  std::vector<st_ars_info_list,std::allocator<st_ars_info_list>>::vector(local_5c);
  if (m_pclApp != 0) {
    local_28 = param_1;
                    /* try { // try from 0809d575 to 0809d7dd has its CatchHandler @ 0809d7e3 */
    cVar2 = CDBManager::QueryLoadARSInfo((CDBManager *)(m_pclApp + 0x50),(vector *)local_5c);
    if (cVar2 == '\x01') {
      local_24 = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      cVar2 = std::vector<st_ars_info_list,std::allocator<st_ars_info_list>>::empty();
      if (cVar2 == '\x01') {
        Packet_Set_ARS_Info::Packet_Set_ARS_Info(local_51b);
        local_511 = 0;
        local_50d = '\0';
        local_519 = 0x4bf;
        CMonitorServer::SendToServer(local_24,(char *)local_51b,0x4bf);
        iVar4 = (int)local_50d;
        CMyFileLog::CMyFileLog(local_40,"OnRequestARSInfo",0xe2d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_40,"./log/Secu","[ARS_INFO] Packet Send - Stats : %3d, Cnt : 0",iVar4);
      }
      else {
        local_20 = std::vector<st_ars_info_list,std::allocator<st_ars_info_list>>::size(local_5c);
        local_1c = 0;
        local_18 = 0;
        do {
          Packet_Set_ARS_Info::Packet_Set_ARS_Info(local_51b);
          local_14 = 0;
          do {
            uVar1 = local_18;
            local_18 = local_18 + 1;
            psVar3 = (st_ars_info_list *)
                     std::vector<st_ars_info_list,std::allocator<st_ars_info_list>>::operator[]
                               (local_5c,uVar1);
            iVar4 = local_14 * 0xc;
            local_14 = local_14 + 1;
            st_ars_info_list::CopyStruct(asStack_50c + iVar4,psVar3);
            if (99 < local_14) break;
          } while ((int)local_18 < local_20);
          local_511 = local_14;
          if (local_1c == 0) {
            local_50d = '\0';
          }
          else if ((int)local_18 < local_20) {
            local_50d = '\x01';
          }
          else {
            local_50d = '\x02';
          }
          local_519 = (100 - (short)local_14) * -0xc + 0x4bf;
          CMonitorServer::SendToServer(local_24,(char *)local_51b,(uint)local_519);
          iVar4 = local_511;
          iVar5 = (int)local_50d;
          CMyFileLog::CMyFileLog(local_48,"OnRequestARSInfo",0xe1a);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/Secu","[ARS_INFO] Packet Send - Stats : %3d, Cnt : %3d",iVar5,
                     iVar4);
          local_1c = local_1c + 1;
        } while ((int)local_18 < local_20);
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_50,"OnRequestARSInfo",0xdf6);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/Secu","CPacketTranslater::OnRequestARSInfo Select fail\n");
    }
  }
  std::vector<st_ars_info_list,std::allocator<st_ars_info_list>>::~vector(local_5c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2266 行）：

```cpp
void CPacketTranslater::OnRequestARSInfo(PacketHeader* header)
{
    std::vector<st_ars_info_list> list;
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.QueryLoadARSInfo(list))
        {
            DNF_LOG_SCOPE_LINE(0xdf6,
                "./log/Secu",
                "CPacketTranslater::OnRequestARSInfo Select fail\n"
            );

            return;
        }
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        if (!list.empty())
        {
            int size = list.size();
            int srcIdx = 0;
            int batch = 0;
            while (srcIdx < size)
            {
                Packet_Set_ARS_Info reply;
                int count = 0;
                while (count <= 0x63 && srcIdx < size)
                {
                    (*(st_ars_info_list*)&reply.m_rest[count * 0xc])
                        .CopyStruct(list[srcIdx]);
                    srcIdx++;
                    count++;
                }
                reply.m_count = (char)count;
                if (batch == 0)
                    reply.m_statsType = 0;
                else if (srcIdx < size)
                    reply.m_statsType = 1;
                else
                    reply.m_statsType = 2;
                reply.packetSize =
                    (unsigned short)(0x4bf - (0x64 - count) * 0xc);
                ms->SendToServer((char*)&reply, reply.packetSize);
                DNF_LOG_SCOPE_LINE(0xe1a,
                    "./log/Secu",
                    "[ARS_INFO] Packet Send - Stats : %3d, Cnt : %3d", batch,
                    count
                );

                batch++;
            }
        }
        else
        {
            Packet_Set_ARS_Info reply;
            reply.m_count = 0;
            reply.m_statsType = 0;
            reply.packetSize = 0x4bf;
            ms->SendToServer((char*)&reply, reply.packetSize);
            DNF_LOG_SCOPE_LINE(0xe2d,
                "./log/Secu",
                "[ARS_INFO] Packet Send - Stats : %3d, Cnt : 0", 0
            );

        }
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnRequestARSInfo Exception Break",
                  0xe32, 0xe37);
}
```
