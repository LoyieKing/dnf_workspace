# _ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader

`CPacketTranslater::OnWebNoticeInGameAD(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8066bbe` | `0x15f` | `0x805b680` | `0x15d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x157>
-lea    -0x2e(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x155>
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Web_Notice_InGame_AdvertisementC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
-lea    -0x2e(%ebp),%edx
+lea    -0x16(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader>
+movl   $0x2ae,0x8(%esp)
+movl   $"OnWebNoticeInGameAD",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%ebx
-movl   $0x2ae,0x8(%esp)
-movl   $"OnWebNoticeInGameAD",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movzwl %ax,%eax
+mov    %eax,0xc(%esp)
 movl   $"OnWebNoticeInGameAD() packet_id(%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x158>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x156>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xfb>
+jne    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xf9>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x2b2,0x8(%esp)
+movl   $"OnWebNoticeInGameAD",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x2b2,0x8(%esp)
-movl   $"OnWebNoticeInGameAD",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeInGameAD Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xf4>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0xf2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x158>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x156>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x2b7,0x8(%esp)
 movl   $"OnWebNoticeInGameAD",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebNoticeInGameAD Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x150>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x14e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x158>
+jmp    <T> <_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader+0x156>
 nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebNoticeInGameAD(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  Packet_Web_Notice_InGame_Advertisement local_32 [10];
  CMyFileLog local_28 [28];
  
  if (m_pclApp != 0) {
    Packet_Web_Notice_InGame_Advertisement::Packet_Web_Notice_InGame_Advertisement(local_32);
                    /* try { // try from 08066bf0 to 08066c37 has its CatchHandler @ 08066c3d */
    CServerHandler::_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader
              (*(CServerHandler **)(m_pclApp + 0x18),(PacketHeader *)local_32);
    uVar1 = *(ushort *)param_1;
    CMyFileLog::CMyFileLog(local_28,"OnWebNoticeInGameAD",0x2ae);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_28,"./log/Web","OnWebNoticeInGameAD() packet_id(%d)\n",(uint)uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2586 行）：

```cpp
void CPacketTranslater::OnWebNoticeInGameAD(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_Web_Notice_InGame_Advertisement pkt;
        m_pclApp->m_serverHandler->SendAllTcpServer(&pkt);
        CMyFileLog log("OnWebNoticeInGameAD", 0x2ae);
        log("./log/Web", "OnWebNoticeInGameAD() packet_id(%d)\n", header->packetId);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnWebNoticeInGameAD Exception Break",
                  0x2b2, 0x2b7);
}
```
