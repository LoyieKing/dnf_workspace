# _ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader

`CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808a79e` | `0x3ad` | `0x8075ece` | `0x3b5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,251 +1,253 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x11c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x35>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x8b>
+mov    -0x28(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+movzbl %al,%eax
+cmp    -0x24(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0xa1>
+mov    -0x28(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x20(%ebp)
+movl   $0x146d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"(Ignore another server msg: %d)",0x8(%esp)
+movl   $"./log/ItemLimitEdition",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%edx
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %edx,0xb(%eax)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x99>
-mov    -0x20(%ebp),%eax
-mov    0xb(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-movzbl %al,%eax
-cmp    %eax,%ebx
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x99>
-mov    -0x20(%ebp),%eax
-mov    0xb(%eax),%ebx
-movl   $0x146d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"(Ignore another server msg: %d)",0x8(%esp)
-movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x6f(%eax),%eax
 mov    %eax,-0xa8(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x6b(%eax),%eax
 mov    %eax,-0xa4(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x67(%eax),%eax
 mov    %eax,-0xa0(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x63(%eax),%eax
 mov    %eax,-0x9c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x5f(%eax),%eax
 mov    %eax,-0x98(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x5b(%eax),%eax
 mov    %eax,-0x94(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x57(%eax),%eax
 mov    %eax,-0x90(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x53(%eax),%eax
 mov    %eax,-0x8c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x4f(%eax),%eax
 mov    %eax,-0x88(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x4b(%eax),%eax
 mov    %eax,-0x84(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x47(%eax),%eax
 mov    %eax,-0x80(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x43(%eax),%eax
 mov    %eax,-0x7c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x3f(%eax),%eax
 mov    %eax,-0x78(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x3b(%eax),%eax
 mov    %eax,-0x74(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x37(%eax),%eax
 mov    %eax,-0x70(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x33(%eax),%eax
 mov    %eax,-0x6c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x2f(%eax),%eax
 mov    %eax,-0x68(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x2b(%eax),%eax
 mov    %eax,-0x64(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x27(%eax),%eax
 mov    %eax,-0x60(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x23(%eax),%eax
 mov    %eax,-0x5c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x1f(%eax),%eax
 mov    %eax,-0x58(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x1b(%eax),%eax
 mov    %eax,-0x54(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x17(%eax),%eax
 mov    %eax,-0x50(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x13(%eax),%eax
 mov    %eax,-0x4c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xf(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xb(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x1474,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xa8(%ebp),%eax
 mov    %eax,0x74(%esp)
 mov    -0xa4(%ebp),%eax
 mov    %eax,0x70(%esp)
 mov    -0xa0(%ebp),%eax
 mov    %eax,0x6c(%esp)
 mov    -0x9c(%ebp),%eax
 mov    %eax,0x68(%esp)
 mov    -0x98(%ebp),%eax
 mov    %eax,0x64(%esp)
 mov    -0x94(%ebp),%eax
 mov    %eax,0x60(%esp)
 mov    -0x90(%ebp),%eax
 mov    %eax,0x5c(%esp)
 mov    -0x8c(%ebp),%eax
 mov    %eax,0x58(%esp)
 mov    -0x88(%ebp),%eax
 mov    %eax,0x54(%esp)
 mov    -0x84(%ebp),%eax
 mov    %eax,0x50(%esp)
 mov    -0x80(%ebp),%eax
 mov    %eax,0x4c(%esp)
 mov    -0x7c(%ebp),%eax
 mov    %eax,0x48(%esp)
 mov    -0x78(%ebp),%eax
 mov    %eax,0x44(%esp)
 mov    -0x74(%ebp),%eax
 mov    %eax,0x40(%esp)
 mov    -0x70(%ebp),%eax
 mov    %eax,0x3c(%esp)
 mov    -0x6c(%ebp),%eax
 mov    %eax,0x38(%esp)
 mov    -0x68(%ebp),%eax
 mov    %eax,0x34(%esp)
 mov    -0x64(%ebp),%eax
 mov    %eax,0x30(%esp)
 mov    -0x60(%ebp),%eax
 mov    %eax,0x2c(%esp)
 mov    -0x5c(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    -0x58(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x4c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"(FullLoad: %d, ServerType:%d, LoadTargetNum: %d, IPGNO: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x8(%esp)
 movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x348>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x350>
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
 movl   $0x1494,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x341>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x349>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1499,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x39d>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a5>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x11c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  local_24 = param_1;
  if (param_1[10] == (PacketHeader)0x0) {
    uVar28 = *(uint *)(param_1 + 0xb);
    uVar29 = CApplication::Get_ServerGroup(m_pclApp);
    if (uVar28 != (uVar29 & 0xff)) {
      uVar2 = *(undefined4 *)(local_24 + 0xb);
      CMyFileLog::CMyFileLog(local_44,"onItemLimitEditionLoadDataReq",0x146d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/ItemLimitEdition","(Ignore another server msg: %d)",uVar2);
      return;
    }
  }
  else {
                    /* try { // try from 0808a7c3 to 0808aa64 has its CatchHandler @ 0808aa6a */
    uVar28 = CApplication::Get_ServerGroup(m_pclApp);
    *(uint *)(local_24 + 0xb) = uVar28 & 0xff;
  }
  CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),param_1);
  uVar2 = *(undefined4 *)(local_24 + 0x6f);
  uVar3 = *(undefined4 *)(local_24 + 0x6b);
  uVar4 = *(undefined4 *)(local_24 + 0x67);
  uVar5 = *(undefined4 *)(local_24 + 99);
  uVar6 = *(undefined4 *)(local_24 + 0x5f);
  uVar7 = *(undefined4 *)(local_24 + 0x5b);
  uVar8 = *(undefined4 *)(local_24 + 0x57);
  uVar9 = *(undefined4 *)(local_24 + 0x53);
  uVar10 = *(undefined4 *)(local_24 + 0x4f);
  uVar11 = *(undefined4 *)(local_24 + 0x4b);
  uVar12 = *(undefined4 *)(local_24 + 0x47);
  uVar13 = *(undefined4 *)(local_24 + 0x43);
  uVar14 = *(undefined4 *)(local_24 + 0x3f);
  uVar15 = *(undefined4 *)(local_24 + 0x3b);
  uVar16 = *(undefined4 *)(local_24 + 0x37);
  uVar17 = *(undefined4 *)(local_24 + 0x33);
  uVar18 = *(undefined4 *)(local_24 + 0x2f);
  uVar19 = *(undefined4 *)(local_24 + 0x2b);
  uVar20 = *(undefined4 *)(local_24 + 0x27);
  uVar21 = *(undefined4 *)(local_24 + 0x23);
  uVar22 = *(undefined4 *)(local_24 + 0x1f);
  uVar23 = *(undefined4 *)(local_24 + 0x1b);
  uVar24 = *(undefined4 *)(local_24 + 0x17);
  uVar25 = *(undefined4 *)(local_24 + 0x13);
  uVar26 = *(undefined4 *)(local_24 + 0xf);
  uVar27 = *(undefined4 *)(local_24 + 0xb);
  PVar1 = local_24[10];
  CMyFileLog::CMyFileLog(local_3c,"onItemLimitEditionLoadDataReq",0x1474);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/ItemLimitEdition",
             "(FullLoad: %d, ServerType:%d, LoadTargetNum: %d, IPGNO: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)"
             ,(uint)(byte)PVar1,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,
             uVar18,uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,
             uVar5,uVar4,uVar3,uVar2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3775 行）：

```cpp
void CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader* pkt)
{
    try
    {
        Packet_Item_Limit_Edition_Load_Data_Req* req =
            (Packet_Item_Limit_Edition_Load_Data_Req*)pkt;
        if (req->m_fullLoad == 0)
        {
            unsigned int grp = req->m_serverType;
            if (grp != ((unsigned int)m_pclApp->Get_ServerGroup() & 0xff))
            {
                unsigned int g = req->m_serverType;
                DNF_LOG_SCOPE_LINE(0x146d, "./log/ItemLimitEdition", "(Ignore another server msg: %d)", g);
                return;
            }
        }
        else
        {
            req->m_serverType =
                (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
        }
        (m_pclApp->m_serverHandler2)->SendToDB(pkt);
        DNF_LOG_SCOPE_LINE(0x1474,"./log/ItemLimitEdition",
            "(FullLoad: %d, ServerType:%d, LoadTargetNum: %d, IPGNO: "
            "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
            (unsigned int)(unsigned char)req->m_fullLoad,
            req->m_serverType, req->m_loadTargetNum,
            req->m_ipgNo[0], req->m_ipgNo[1],
            req->m_ipgNo[2], req->m_ipgNo[3],
            req->m_ipgNo[4], req->m_ipgNo[5],
            req->m_ipgNo[6], req->m_ipgNo[7],
            req->m_ipgNo[8], req->m_ipgNo[9],
            req->m_ipgNo[10], req->m_ipgNo[11],
            req->m_ipgNo[12], req->m_ipgNo[13],
            req->m_ipgNo[14], req->m_ipgNo[15],
            req->m_ipgNo[16], req->m_ipgNo[17],
            req->m_ipgNo[18], req->m_ipgNo[19],
            req->m_ipgNo[20], req->m_ipgNo[21],
            req->m_ipgNo[22], req->m_ipgNo[23]);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1494,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1499,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
```
