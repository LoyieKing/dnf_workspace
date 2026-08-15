# _ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader

`CPacketTranslater::OnCreateGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8082206` | `0x327` | `0x807841a` | `0x31f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,204 +1,199 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x8c,%esp
 movl   $0x0,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x57>
 movl   $0x1608,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCreateGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x31c>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x314>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x8e>
+je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x88>
 mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x95>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x9a>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xd9>
+jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xc9>
 movl   $0x1610,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x31c>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x314>
 mov    -0x20(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x144>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1616,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x31c>
+je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x1ef>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x198>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x161c,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCreateGuildAgit : %d guild already have guild agit",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x31c>
+je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x1aa>
 mov    -0x20(%ebp),%eax
 mov    0x16(%eax),%ebx
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildFundEv>
 cmp    %eax,%ebx
 seta   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x1f7>
+je     <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x15b>
 mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x1623,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x31c>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x314>
 mov    -0x20(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x6c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x12(%eax),%edi
 mov    -0x20(%ebp),%eax
 mov    0xe(%eax),%esi
 mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    -0x6c(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15CreateGuildAgitEP14CServerHandlerjjjj>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x31c>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x314>
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%ebx
+movl   $0x161c,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnCreateGuildAgit : %d guild already have guild agit",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x314>
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%esi
+mov    -0x20(%ebp),%eax
+mov    0xe(%eax),%ebx
+movl   $0x1616,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x314>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2c2>
+jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2ba>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1630,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCreateGuildAgit Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2bb>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2b3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x31c>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x314>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1635,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCreateGuildAgit Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x317>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x30f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCreateGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  CServerHandler *pCVar9;
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_28 = (CGuild *)0x0;
  if (m_pclApp != (CApplication *)0x0) {
    local_24 = param_1;
    if ((*(int *)(param_1 + 10) == 0) ||
       (local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290))
       , local_28 == (CGuild *)0x0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      CMyFileLog::CMyFileLog(local_58,"OnCreateGuildAgit",0x1610);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/GuildAgit","CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild");
    }
    else {
      cVar7 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 0xe));
      if (cVar7 == '\x01') {
        cVar7 = CGuild::IsExistGuildAgit(local_28);
        if (cVar7 == '\0') {
          uVar3 = *(uint *)(local_24 + 0x16);
          uVar8 = CGuild::GetGuildFund(local_28);
          if (uVar8 < uVar3) {
            uVar1 = *(undefined4 *)(local_24 + 10);
            CMyFileLog::CMyFileLog(local_40,"OnCreateGuildAgit",0x1623);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_40,"./log/GuildAgit",
                       "CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",uVar1);
          }
          else {
            uVar3 = *(uint *)(local_24 + 0x16);
            uVar8 = *(uint *)(local_24 + 0x12);
            uVar4 = *(uint *)(local_24 + 0xe);
            uVar5 = *(uint *)(local_24 + 10);
            pCVar9 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
            CGuild::CreateGuildAgit(local_28,pCVar9,uVar5,uVar4,uVar8,uVar3);
          }
        }
        else {
          uVar1 = *(undefined4 *)(local_24 + 10);
          CMyFileLog::CMyFileLog(local_48,"OnCreateGuildAgit",0x161c);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/GuildAgit",
                     "CPacketTranslater::OnCreateGuildAgit : %d guild already have guild agit",uVar1
                    );
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_24 + 10);
        uVar2 = *(undefined4 *)(local_24 + 0xe);
        CMyFileLog::CMyFileLog(local_50,"OnCreateGuildAgit",0x1616);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_50,"./log/GuildAgit",
                   "CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",uVar2,uVar1
                  );
      }
    }
    return;
  }
                    /* try { // try from 08082238 to 08082446 has its CatchHandler @ 0808244c */
  CMyFileLog::CMyFileLog(local_60,"OnCreateGuildAgit",0x1608);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_60,"./log/Except","CPacketTranslater::OnCreateGuildAgit : 0 == m_pclApp");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3947 行）：

```cpp
void CPacketTranslater::OnCreateGuildAgit(PacketHeader* pkt)
{
    CGuild* guild = 0;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1608, "./log/Except", "CPacketTranslater::OnCreateGuildAgit : 0 == m_pclApp");
            return;
        }
        Packet_Guild_Create_Guild_Agit* pb = (Packet_Guild_Create_Guild_Agit*)pkt;
        if (pb->m_guildKey != 0)
        {
            guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildKey);
        }
        if (guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1610, "./log/GuildAgit", "CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild");
        }
        else if (guild->IsGuildMaster(pb->m_charNo))
        {
            if (!guild->IsExistGuildAgit())
            {
                if (pb->m_fund > guild->GetGuildFund())
                {
                    DNF_LOG_SCOPE_LINE(0x1623,"./log/GuildAgit",
                        "CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",
                        pb->m_guildKey);
                }
                else
                {
                    guild->CreateGuildAgit(m_pclApp->Get_ServerHandler(), pb->m_guildKey,
                                           pb->m_charNo, pb->m_field12, pb->m_fund);
                }
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x161c,"./log/GuildAgit",
                    "CPacketTranslater::OnCreateGuildAgit : %d guild already have guild agit",
                    pb->m_guildKey);
            }
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x1616,"./log/GuildAgit",
                "CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",
                pb->m_charNo, pb->m_guildKey);
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnCreateGuildAgit Exception Break", 0x1630, 0x1635)
}
```
