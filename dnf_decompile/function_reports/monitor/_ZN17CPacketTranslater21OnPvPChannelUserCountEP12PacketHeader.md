# _ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader

`CPacketTranslater::OnPvPChannelUserCount(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8089e4c` | `0x17d` | `0x80753fe` | `0x178` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,114 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x1830,%esp
+sub    $0x40,%esp
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
-mov    -0x10(%ebp),%eax
-mov    0x26(%eax),%eax
-mov    %eax,%ebx
-mov    -0x10(%ebp),%eax
-mov    0x22(%eax),%eax
-mov    %eax,%ecx
-mov    -0x10(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,%edx
-mov    -0x10(%ebp),%eax
-mov    0x16(%eax),%eax
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x171>
+mov    0x8(%ebp),%eax
+add    $0x26,%eax
+mov    (%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0x22,%eax
+mov    (%eax),%ecx
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
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
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x171>
+lea    -0x1a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_PvPChannelInfoC1Ev>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x1806(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x1802(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x17fe(%ebp)
-movb   $0xff,-0x17f9(%ebp)
-lea    -0x1810(%ebp),%eax
-add    $0x17,%eax
+lea    -0x1a(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x1a(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x1a(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+movb   $0xff,-0x1b(%ebp)
+lea    -0x1a(%ebp),%eax
+lea    0x18(%eax),%edx
+lea    -0x1b(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x1810(%ebp),%eax
-add    $0x18,%eax
-mov    %eax,0x4(%esp)
+mov    %edx,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh>
-movzbl -0x17f9(%ebp),%eax
-movzbl %al,%eax
-shl    $0x4,%eax
-add    $0x18,%eax
-mov    %ax,-0x180e(%ebp)
-lea    -0x1810(%ebp),%eax
+lea    -0x1a(%ebp),%eax
+add    $0x2,%eax
+movzbl -0x1b(%ebp),%edx
+movzbl %dl,%edx
+shl    $0x4,%edx
+add    $0x18,%edx
+mov    %dx,(%eax)
+lea    -0x1a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x171>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x13d3,0x8(%esp)
 movl   $"OnPvPChannelUserCount",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnPvPChannelUserCount",0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16e>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x1830,%esp
+add    $0x40,%esp
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

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3470 行）：

```cpp
void CPacketTranslater::OnPvPChannelUserCount(PacketHeader* pkt)
{
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            user->SetChannelUserCount(*(int*)((char*)pkt + 0x16), *(int*)((char*)pkt + 0x1a),
                                      *(int*)((char*)pkt + 0x22), *(int*)((char*)pkt + 0x26));
            if (user->IsCompleteChannelUserCount())
            {
                Packet_PvPChannelInfo reply;
                *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
                *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
                *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)((char*)pkt + 0x12);
                unsigned char count = 0xff;
                user->GetChannelUserCount((STPvPChannelInfo*)((char*)&reply + 0x18), count);
                *(unsigned short*)((char*)&reply + 2) =
                    (unsigned short)((unsigned int)count * 0x10 + 0x18);
                user->SendTcpGameserver(&reply);
            }
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x13d3, "./log/Except", "%s Exception Break\n", "OnPvPChannelUserCount");
    }
}
```
