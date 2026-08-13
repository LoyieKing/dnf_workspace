# _ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader

`CPacketTranslater::OnNoticeGuildMarkChange(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80732b8` | `0x2bb` | `0x8069aa0` | `0x2b6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,187 +1,185 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0xdf>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x45(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildMarkChange : 0 == m_pclApp",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x4c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0xa4>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x1ab>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x1a6>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x328,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[GUILD MARK CHANGE] Recv from web server. (guildkey:%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x166>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x161>
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj>
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x331,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[GUILD MARK CHANGE] Not exist guild. (guildkey:%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x24d>
+jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x248>
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
 movl   $"CPacketTranslater::OnNoticeGuildMarkChange() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x337,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildMarkChange() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x246>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x241>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeGuildMarkChange() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x33d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildMarkChange() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2a9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeGuildMarkChange(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *this;
  string local_50 [7];
  allocator local_49;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080732ee to 080732f2 has its CatchHandler @ 0807335c */
    std::string::string(local_50,"CPacketTranslater::OnNoticeGuildMarkChange : 0 == m_pclApp",
                        &local_49);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807330d to 08073311 has its CatchHandler @ 08073314 */
    CDNFException::CDNFException(this,local_50);
                    /* try { // try from 0807334b to 0807334f has its CatchHandler @ 08073352 */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08073392 to 0807345d has its CatchHandler @ 08073463 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_48,"OnNoticeGuildMarkChange",0x328);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_48,"./log/Web","[GUILD MARK CHANGE] Recv from web server. (guildkey:%d)\n",uVar1)
  ;
  local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_28 != (CGuild *)0x0) {
    CGuild::NoticeMarkChangeToGuildMember(local_28,*(uint *)(local_24 + 10));
  }
  uVar1 = *(undefined4 *)(local_24 + 10);
  CMyFileLog::CMyFileLog(local_40,"OnNoticeGuildMarkChange",0x331);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_40,"./log/Web","[GUILD MARK CHANGE] Not exist guild. (guildkey:%d)\n",uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 869 行）：

```cpp
void CPacketTranslater::OnNoticeGuildMarkChange(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildMarkChange : 0 == m_pclApp")
    Packet_Guild_Mark_Change_Notice* pbinfo = (Packet_Guild_Mark_Change_Notice*)pkt;
    DNF_LOG_SCOPE_LINE(0x328, "./log/Web",
        "[GUILD MARK CHANGE] Recv from web server. (guildkey:%d)\n", pbinfo->m_guildKey);
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(pbinfo->m_guildKey);
    if (guild != 0)
    {
        guild->NoticeMarkChangeToGuildMember(pbinfo->m_guildKey);
    }
    DNF_LOG_SCOPE_LINE(0x331, "./log/Web",
        "[GUILD MARK CHANGE] Not exist guild. (guildkey:%d)\n", pbinfo->m_guildKey);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildMarkChange() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x337, "./log/Except",
            "CPacketTranslater::OnNoticeGuildMarkChange() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildMarkChange() Exception Break");
        DNF_LOG_SCOPE_LINE(0x33d, "./log/Except",
            "CPacketTranslater::OnNoticeGuildMarkChange() Exception Break\n");
    }
}
```
