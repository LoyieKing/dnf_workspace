# _ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader

`CPacketTranslater::OnNoticeGuildEnter(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8072c3c` | `0x2e2` | `0x8069306` | `0x2e7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,203 +1,206 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0xdf>
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildEnter : 0 == m_pclApp",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0xa4>
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x1d2>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x1d9>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
 add    $0x2d,%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x16,%eax
 mov    %eax,-0x4c(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
+mov    -0x28(%ebp),%eax
+lea    0x16(%eax),%edi
+mov    -0x28(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%esi
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 movl   $0x283,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x50(%ebp),%eax
+mov    -0x4c(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"Packet_Monitor_Notice_Guild_Enter: guildkey : %d, m_id : %s , charid : %d, guildname : %s, charname : %s\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 lea    0xa(%eax),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
-mov    -0x20(%ebp),%eax
-movb   $0x1,0x4f(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %edx,0x4b(%eax)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2df>
+mov    -0x28(%ebp),%eax
+add    $0x4f,%eax
+movb   $0x1,(%eax)
+mov    -0x28(%ebp),%eax
+lea    0x4b(%eax),%edx
+mov    -0x28(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x28(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc>
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2df>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x274>
+jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x279>
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
 movl   $"CPacketTranslater::OnNoticeGuildEnter() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x290,0x8(%esp)
+movl   $"OnNoticeGuildEnter",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x290,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildEnter() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x26d>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x272>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2df>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeGuildEnter() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x296,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildEnter() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d5>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeGuildEnter(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CDNFException *this;
  undefined4 uVar3;
  string local_48 [7];
  allocator local_41;
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08072c72 to 08072c76 has its CatchHandler @ 08072ce0 */
    std::string::string(local_48,"CPacketTranslater::OnNoticeGuildEnter : 0 == m_pclApp",&local_41);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08072c91 to 08072c95 has its CatchHandler @ 08072c98 */
    CDNFException::CDNFException(this,local_48);
                    /* try { // try from 08072ccf to 08072cd3 has its CatchHandler @ 08072cd6 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)&local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08072d16 to 08072e08 has its CatchHandler @ 08072e0e */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x12);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xe),0);
  uVar2 = *(undefined4 *)(local_24 + 10);
  CMyFileLog::CMyFileLog(local_40,"OnNoticeGuildEnter",0x283);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_40,"./log/Web",
             "Packet_Monitor_Notice_Guild_Enter: guildkey : %d, m_id : %s , charid : %d, guildname : %s, charname : %s\n"
             ,uVar2,uVar3,uVar1,param_1 + 0x16,param_1 + 0x2d);
  local_28 = (CGuild *)
             CGuildManager::_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter
                       ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_24 + 10),
                        (ST_Notice_Guild_Enter *)(local_24 + 10));
  if (local_28 != (CGuild *)0x0) {
    local_24[0x4f] = (PacketHeader)0x1;
    *(undefined4 *)(local_24 + 0x4b) = *(undefined4 *)(local_24 + 0x12);
    CGuild::NoticeEnterToGuildMember(local_28,(char *)(local_24 + 10));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 643 行）：

```cpp
void CPacketTranslater::OnNoticeGuildEnter(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildEnter : 0 == m_pclApp")
    char* pb = (char*)pkt;
    char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
    DNF_LOG_SCOPE_LINE(0x283,"./log/Web",
        "Packet_Monitor_Notice_Guild_Enter: guildkey : %d, m_id : %s , charid : %d, guildname : %s, charname : %s\n",
        *(unsigned int*)(pb + 10), mid, *(unsigned int*)(pb + 0x12), pb + 0x16, pb + 0x2d);
    CGuild* guild = (&m_pclApp->m_guildManager)->GuildEnter(
        *(unsigned int*)(pb + 10), *(ST_Notice_Guild_Enter*)(pb + 10));
    if (guild != 0)
    {
        pb[0x4f] = 1;
        *(unsigned int*)(pb + 0x4b) = *(unsigned int*)(pb + 0x12);
        guild->NoticeEnterToGuildMember(pb + 10);
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildEnter() Exception Break : %s\n", e.what());
        CMyFileLog log("OnNoticeGuildEnter", 0x290);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildEnter() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildEnter() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x296);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildEnter() Exception Break\n");
    }
}
```
