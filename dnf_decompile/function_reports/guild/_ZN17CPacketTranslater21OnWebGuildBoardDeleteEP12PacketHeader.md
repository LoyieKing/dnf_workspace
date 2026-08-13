# _ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader

`CPacketTranslater::OnWebGuildBoardDelete(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8087a1e` | `0x23d` | `0x807d0c0` | `0x244` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,146 +1,148 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
 mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
 movl   $0x1e15,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnWebGuildBoardDelete Receive Data: GuildKey : %u, CharacID : %u, NO : %u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0xbe>
 movl   $0x1e19,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebGuildBoardDelete : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x23d>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x10e>
+je     <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x121>
 movl   $0x1e20,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebGuildBoardDelete : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x23d>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard20deleteGuildBoardDataEjjj>
-mov    -0x24(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard22setWebGuildBoardActionEb>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x23d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1db>
+jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1e3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+movl   $0x1e29,0x8(%esp)
+movl   $"OnWebGuildBoardDelete",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x1e29,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnWebGuildBoardDelete Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1d4>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1dc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x23d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1e2e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebGuildBoardDelete Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x230>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x238>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x6c,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebGuildBoardDelete(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CGuildBoard *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_24 = param_1;
  uVar7 = *(undefined4 *)(param_1 + 0x12);
  uVar6 = *(undefined4 *)(param_1 + 0xe);
  uVar5 = *(undefined4 *)(param_1 + 10);
                    /* try { // try from 08087a55 to 08087b5c has its CatchHandler @ 08087b7d */
  CMyFileLog::CMyFileLog(local_50,"OnWebGuildBoardDelete",0x1e15);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_50,"./log/GuildBoard",
             "CPacketTranslater::OnWebGuildBoardDelete Receive Data: GuildKey : %u, CharacID : %u, NO : %u"
             ,uVar5,uVar6,uVar7);
  if (m_pclApp == 0) {
    CMyFileLog::CMyFileLog(local_48,"OnWebGuildBoardDelete",0x1e19);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/GuildBoard",
               "CPacketTranslater::OnWebGuildBoardDelete : 0 == m_pclApp",uVar5,uVar6,uVar7);
  }
  else {
    local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_28 == (CGuild *)0x0) {
      CMyFileLog::CMyFileLog(local_40,"OnWebGuildBoardDelete",0x1e20);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/GuildBoard",
                 "CPacketTranslater::OnWebGuildBoardDelete : 0 == pclGuild",uVar5,uVar6,uVar7);
    }
    else {
      uVar1 = *(uint *)(local_24 + 0xe);
      uVar2 = *(uint *)(local_24 + 10);
      uVar3 = *(uint *)(local_24 + 0x12);
      pCVar4 = (CGuildBoard *)CGuild::GetGuildBoard(local_28);
      CGuildBoard::_ZN11CGuildBoard20deleteGuildBoardDataEjjj(pCVar4,uVar3,uVar2,uVar1);
      pCVar4 = (CGuildBoard *)CGuild::GetGuildBoard(local_28);
      CGuildBoard::_ZN11CGuildBoard22setWebGuildBoardActionEb(pCVar4,true);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5485 行）：

```cpp
void CPacketTranslater::OnWebGuildBoardDelete(PacketHeader* pkt)
{
    try
    {
        char* pb = (char*)pkt;
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        unsigned int charNo = *(unsigned int*)(pb + 0xe);
        unsigned int no = *(unsigned int*)(pb + 0x12);
        {
            DNF_LOG_SCOPE_LINE(0x1e15,"./log/GuildBoard",
                "CPacketTranslater::OnWebGuildBoardDelete Receive Data: GuildKey : %u, CharacID : %u, NO : %u",
                guildKey, charNo, no);
        }
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1e19, "./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardDelete : 0 == m_pclApp");
            return;
        }
        CGuild* guild;
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1e20, "./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardDelete : 0 == pclGuild");
            return;
        }
        guild->GetGuildBoard()->deleteGuildBoardData(no, guildKey, charNo);
        guild->GetGuildBoard()->setWebGuildBoardAction(true);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnWebGuildBoardDelete", 0x1e29);
        log("./log/Except",
            "CPacketTranslater::OnWebGuildBoardDelete Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1e2e);
        log("./log/Except", "CPacketTranslater::OnWebGuildBoardDelete Exception Break\n");
    }
}
```
