# _ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader

`CPacketTranslater::OnPvPChannelUserCount(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8089e4c` | `0x17d` | `0x80755a8` | `0x175` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,100 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1830,%esp
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
 mov    -0x10(%ebp),%eax
-mov    0x26(%eax),%eax
-mov    %eax,%ebx
+mov    0x26(%eax),%ebx
 mov    -0x10(%ebp),%eax
-mov    0x22(%eax),%eax
-mov    %eax,%ecx
+mov    0x22(%eax),%ecx
 mov    -0x10(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,%edx
+mov    0x1a(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser19SetChannelUserCountEiiii>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser26IsCompleteChannelUserCountEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
-lea    -0x1810(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
+lea    -0x1815(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_PvPChannelInfoC1Ev>
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x1806(%ebp)
+mov    %eax,-0x180b(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x1802(%ebp)
+mov    %eax,-0x1807(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x17fe(%ebp)
-movb   $0xff,-0x17f9(%ebp)
-lea    -0x1810(%ebp),%eax
-add    $0x17,%eax
+mov    %eax,-0x1803(%ebp)
+movb   $0xff,-0x1d(%ebp)
+lea    -0x1815(%ebp),%eax
+lea    0x18(%eax),%edx
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x1810(%ebp),%eax
-add    $0x18,%eax
-mov    %eax,0x4(%esp)
+mov    %edx,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh>
-movzbl -0x17f9(%ebp),%eax
+movzbl -0x1d(%ebp),%eax
 movzbl %al,%eax
 shl    $0x4,%eax
 add    $0x18,%eax
-mov    %ax,-0x180e(%ebp)
-lea    -0x1810(%ebp),%eax
+mov    %ax,-0x1813(%ebp)
+lea    -0x1815(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x13d3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $&_ZZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16e>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x166>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x1830,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnPvPChannelUserCount(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  Packet_PvPChannelInfo local_1814 [2];
  short local_1812;
  undefined4 local_180a;
  undefined4 local_1806;
  undefined4 local_1802;
  byte local_17fd;
  STPvPChannelInfo aSStack_17fc [6120];
  PacketHeader *local_14;
  CUser *local_10;
  
  local_14 = param_1;
                    /* try { // try from 08089e73 to 08089f5a has its CatchHandler @ 08089f5d */
  local_10 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (local_10 != (CUser *)0x0) {
    CUser::SetChannelUserCount
              (local_10,*(int *)(local_14 + 0x16),*(int *)(local_14 + 0x1a),
               *(int *)(local_14 + 0x22),*(int *)(local_14 + 0x26));
    cVar1 = CUser::IsCompleteChannelUserCount(local_10);
    if (cVar1 != '\0') {
      Packet_PvPChannelInfo::Packet_PvPChannelInfo(local_1814);
      local_180a = *(undefined4 *)(local_14 + 10);
      local_1806 = *(undefined4 *)(local_14 + 0xe);
      local_1802 = *(undefined4 *)(local_14 + 0x12);
      local_17fd = 0xff;
      CUser::GetChannelUserCount(local_10,aSStack_17fc,&local_17fd);
      local_1812 = (ushort)local_17fd * 0x10 + 0x18;
      CUser::SendTcpGameserver(local_10,(PacketHeader *)local_1814);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3634 行）：

```cpp
void CPacketTranslater::OnPvPChannelUserCount(PacketHeader* pkt)
{
    try
    {
        CUserManager* userMgr = &m_pclApp->m_userManager;
        Packet_PvPChannelUserCount* cnt = (Packet_PvPChannelUserCount*)pkt;
        CUser* user = userMgr->FindUser_CharNo(cnt->m_charNo);
        if (user != 0)
        {
            user->SetChannelUserCount(cnt->m_countA, cnt->m_countB,
                                      cnt->m_countC, cnt->m_countD);
            if (user->IsCompleteChannelUserCount())
            {
                Packet_PvPChannelInfo reply;
                reply.m_charNo = cnt->m_charNo;
                reply.m_fieldE = cnt->m_fieldE;
                reply.m_field12 = cnt->m_field12;
                unsigned char count = 0xff;
                user->GetChannelUserCount((STPvPChannelInfo*)reply.m_channels, count);
                reply.packetSize =
                    (unsigned short)((unsigned int)count * 0x10 + 0x18);
                user->SendTcpGameserver(&reply);
            }
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x13d3, "./log/Except", "%s Exception Break\n", __FUNCTION__);
    }
}
```
