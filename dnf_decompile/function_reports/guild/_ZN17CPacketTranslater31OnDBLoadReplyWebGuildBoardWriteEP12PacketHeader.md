# _ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader

`CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8087816` | `0x208` | `0x807ce50` | `0x12c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,134 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x40,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x53>
+jne    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x52>
 movl   $0x1ded,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x200>
-mov    -0x20(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x125>
+mov    -0x14(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0xba>
+je     <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0xbd>
 movl   $0x1df4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x200>
-mov    -0x20(%ebp),%eax
-movzwl 0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x125>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x200>
-mov    -0x20(%ebp),%eax
-lea    0x14(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xc(%eax),%ebx
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x125>
+mov    -0x14(%ebp),%eax
+lea    0x14(%eax),%esi
+mov    -0x14(%ebp),%eax
+add    $0x10,%eax
+mov    (%eax),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %edi,0x14(%esp)
+mov    %esi,0x14(%esp)
 movl   $0x1,0x10(%esp)
-mov    -0x24(%ebp),%edx
+mov    -0xc(%ebp),%edx
 mov    %edx,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %ebx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo>
-mov    -0x24(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard22setWebGuildBoardActionEb>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x200>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x1a6>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1e01,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x19f>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x200>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1e06,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader+0x1fb>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x5c,%esp
+add    $0x40,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader
               (PacketHeader *param_1)

{
  STGuildBoardDBInfo *pSVar1;
  uint uVar2;
  uint uVar3;
  CGuildBoard *pCVar4;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_24 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08087844 to 0808791f has its CatchHandler @ 08087940 */
    CMyFileLog::CMyFileLog(local_48,"OnDBLoadReplyWebGuildBoardWrite",0x1ded);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/GuildBoard",
               "CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == m_pclApp");
  }
  else {
    local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_28 == (CGuild *)0x0) {
      CMyFileLog::CMyFileLog(local_40,"OnDBLoadReplyWebGuildBoardWrite",0x1df4);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/GuildBoard",
                 "CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == pclGuild");
    }
    else if (*(short *)(local_24 + 10) == 0) {
      pSVar1 = (STGuildBoardDBInfo *)(local_24 + 0x14);
      uVar2 = *(uint *)(local_24 + 0x10);
      uVar3 = *(uint *)(local_24 + 0xc);
      pCVar4 = (CGuildBoard *)CGuild::GetGuildBoard(local_28);
      CGuildBoard::_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo
                (pCVar4,uVar3,uVar2,local_28,1,pSVar1);
      pCVar4 = (CGuildBoard *)CGuild::GetGuildBoard(local_28);
      CGuildBoard::_ZN11CGuildBoard22setWebGuildBoardActionEb(pCVar4,true);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5459 行）：

```cpp
void CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1ded,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xc);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1df4,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == pclGuild");
        return;
    }
    if (*(short*)(pb + 0xa) == 0)
    {
        guild->GetGuildBoard()->setGuildBoardData(guildKey, *(unsigned int*)(pb + 0x10),
                                                  guild, 1,
                                                  (STGuildBoardDBInfo*)(pb + 0x14));
        guild->GetGuildBoard()->setWebGuildBoardAction(true);
    }
}
```
