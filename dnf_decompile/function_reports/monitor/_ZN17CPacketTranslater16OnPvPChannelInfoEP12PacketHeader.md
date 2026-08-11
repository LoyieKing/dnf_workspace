# _ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader

`CPacketTranslater::OnPvPChannelInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8089cb6` | `0x196` | `0x8075258` | `0x1a5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,107 +1,128 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x1850,%esp
+sub    $0x40,%esp
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x18c>
-lea    -0x46(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x19e>
+lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_PvPChannelUserCountC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x34(%ebp)
+lea    -0x22(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x22(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x22(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0xa0,%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x16(%eax),%eax
-movzbl %al,%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-mov    %edx,0x8(%esp)
-lea    -0x46(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,0x8(%esp)
+lea    -0x22(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeaderi>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21ResetChannelUserCountEi>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0xc3>
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
+je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0xd9>
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x18c>
-lea    -0x183e(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x19e>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_PvPChannelInfoC1Ev>
+lea    -0x2c(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x2c(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x2c(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x2c(%ebp),%eax
+add    $0x17,%eax
+movb   $0x0,(%eax)
+lea    -0x2c(%ebp),%eax
+add    $0x2,%eax
+movw   $0x18,(%eax)
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x1834(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x1830(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x182c(%ebp)
-movb   $0x0,-0x1827(%ebp)
-movzbl -0x1827(%ebp),%eax
-movzbl %al,%eax
-shl    $0x4,%eax
-add    $0x18,%eax
-mov    %ax,-0x183c(%ebp)
-lea    -0x183e(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x18c>
+jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x19e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x13aa,0x8(%esp)
 movl   $"OnPvPChannelInfo",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnPvPChannelInfo",0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x187>
+jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x199>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x1850,%esp
+add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnPvPChannelInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_PvPChannelInfo local_1842 [2];
  undefined2 local_1840;
  undefined4 local_1838;
  undefined4 local_1834;
  undefined4 local_1830;
  undefined1 local_182b;
  Packet_PvPChannelUserCount local_4a [10];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_2c;
  PacketHeader *local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = param_1;
                    /* try { // try from 08089cdd to 08089ddd has its CatchHandler @ 08089de0 */
  local_14 = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
  if (local_14 != (CUser *)0x0) {
    Packet_PvPChannelUserCount::Packet_PvPChannelUserCount(local_4a);
    local_40 = *(undefined4 *)(local_18 + 10);
    local_3c = *(undefined4 *)(local_18 + 0xe);
    local_38 = *(undefined4 *)(local_18 + 0x12);
    local_2c = CApplication::Get_ServerGroup(m_pclApp);
    local_2c = local_2c & 0xff;
    local_10 = CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeaderi
                         (*(CServerHandler **)(m_pclApp + 0xa0),(PacketHeader *)local_4a,
                          (uint)(byte)local_18[0x16]);
    CUser::ResetChannelUserCount(local_14,local_10);
    if ((local_10 == 0) || (*(int *)(local_18 + 0x12) == 0)) {
      Packet_PvPChannelInfo::Packet_PvPChannelInfo(local_1842);
      local_1838 = *(undefined4 *)(local_18 + 10);
      local_1834 = *(undefined4 *)(local_18 + 0xe);
      local_1830 = *(undefined4 *)(local_18 + 0x12);
      local_182b = 0;
      local_1840 = 0x18;
      CUser::SendTcpGameserver(local_14,(PacketHeader *)local_1842);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3434 行）：

```cpp
void CPacketTranslater::OnPvPChannelInfo(PacketHeader* pkt)
{
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            Packet_PvPChannelUserCount pkt2;
            *(unsigned int*)((char*)&pkt2 + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
            *(unsigned int*)((char*)&pkt2 + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
            *(unsigned int*)((char*)&pkt2 + 0x12) = *(unsigned int*)((char*)pkt + 0x12);
            m_pclApp->Get_ServerGroup();
            CServerHandler* handler = (CServerHandler*)((char*)m_pclApp + 0xa0);
            int count = handler->SendAllTcpGameServer(
                &pkt2, (int)(unsigned char)*(char*)((char*)pkt + 0x16));
            user->ResetChannelUserCount(count);
            if (count == 0 || *(int*)((char*)pkt + 0x12) == 0)
            {
                Packet_PvPChannelInfo reply;
                *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
                *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
                *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)((char*)pkt + 0x12);
                *(char*)((char*)&reply + 0x17) = 0;
                *(unsigned short*)((char*)&reply + 2) =
                    (unsigned short)((0 << 4) + 0x18);
                user->SendTcpGameserver(&reply);
            }
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x13aa, "./log/Except", "%s Exception Break\n", "OnPvPChannelInfo");
    }
}
```
