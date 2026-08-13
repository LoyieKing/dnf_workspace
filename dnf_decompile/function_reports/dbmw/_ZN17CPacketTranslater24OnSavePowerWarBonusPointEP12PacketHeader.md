# _ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader

`CPacketTranslater::OnSavePowerWarBonusPoint(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809d8e0` | `0x280` | `0x80d2fda` | `0x288` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,176 +1,180 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x50c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0xe2>
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnSavePowerWarBonusPoint() : 0 == m_pclApp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0xa7>
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x19f>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x1a7>
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point>
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
-jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
-lea    -0x4fe(%ebp),%eax
+jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x27d>
+lea    -0x502(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Notify_New_Group_MailC1Ev>
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0xa(%eax),%eax
-cmp    $0x12c,%eax
-jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x12d>
-mov    $0x12c,%eax
-mov    %eax,-0x4f4(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x12c,-0x28(%ebp)
+jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x134>
+movl   $0x12c,-0x28(%ebp)
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x154>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x15f>
+lea    -0x502(%ebp),%eax
+mov    -0x20(%ebp),%edx
+shl    $0x2,%edx
+add    $0xe,%edx
+lea    (%eax,%edx,1),%ecx
+mov    -0x20(%ebp),%edx
+mov    -0x2c(%ebp),%eax
+mov    0xe(%eax,%edx,8),%eax
+mov    %eax,(%ecx)
+addl   $0x1,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
-mov    -0x20(%ebp),%ecx
-mov    -0x28(%ebp),%edx
-mov    0xe(%edx,%ecx,8),%edx
-mov    %edx,-0x4f0(%ebp,%eax,4)
-addl   $0x1,-0x20(%ebp)
-mov    -0x4f4(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
+cmp    -0x28(%ebp),%eax
+setl   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x13c>
+jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x13d>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x24(%ebp)
-movzwl -0x4fc(%ebp),%eax
+movzwl -0x500(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x4fe(%ebp),%eax
+lea    -0x502(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x27d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x21b>
+jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x223>
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
 movl   $0xea5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSavePowerWarBonusPoint() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x214>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x21c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x27d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xeaa,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSavePowerWarBonusPoint() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x270>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x278>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x50c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSavePowerWarBonusPoint(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  Packet_Notify_New_Group_Mail local_502 [2];
  ushort local_500;
  int local_4f8;
  undefined4 auStack_4f4 [300];
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CGuildServer *local_28;
  int local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809d919 to 0809d91d has its CatchHandler @ 0809d987 */
    std::string::string(local_44,"CPacketTranslater::OnSavePowerWarBonusPoint() : 0 == m_pclApp",
                        local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809d938 to 0809d93c has its CatchHandler @ 0809d93f */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0809d976 to 0809d97a has its CatchHandler @ 0809d97d */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0809d9bd to 0809da79 has its CatchHandler @ 0809da7f */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  CDBManager::_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point
            ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Save_Power_War_Bonus_Point *)param_1);
  if (0 < *(int *)(local_2c + 10)) {
    Packet_Notify_New_Group_Mail::Packet_Notify_New_Group_Mail(local_502);
    local_4f8 = *(int *)(local_2c + 10);
    if (300 < local_4f8) {
      local_4f8 = 300;
    }
    for (local_24 = 0; local_24 < local_4f8; local_24 = local_24 + 1) {
      auStack_4f4[local_24] = *(undefined4 *)(local_2c + local_24 * 8 + 0xe);
    }
    local_28 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_28,(char *)local_502,(uint)local_500);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 932 行）：

```cpp
void CPacketTranslater::OnSavePowerWarBonusPoint(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException(std::string(
                "CPacketTranslater::OnSavePowerWarBonusPoint() : 0 == m_pclApp"));
        Packet_DB_Save_Power_War_Bonus_Point* pkt =
            (Packet_DB_Save_Power_War_Bonus_Point*)header;
        m_pclApp->m_dbManager.OnSavePowerWarBonusPoint(
            pkt);
        if (pkt->m_count > 0)
        {
            Packet_Notify_New_Group_Mail notice;
            int n = pkt->m_count;
            if (n > 0x12c)
                n = 0x12c;
            for (int i = 0; i < n; i++)
                *(int*)((char*)&notice + 0xe + i * 4) =
                    pkt->m_entries[i].m_characNo;
            CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
            gs->SendToServer((char*)&notice, notice.packetSize);
        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnSavePowerWarBonusPoint() Exception Break",
                  0xea5, 0xeaa);
}
```
