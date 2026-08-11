# _ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader

`CPacketTranslater::OnSaveGuild(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8093c9c` | `0x2bc` | `0x80d2692` | `0x2c3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,190 +1,190 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x8c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b0>
+je     <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b7>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0xcc(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x61>
+jne    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x64>
 mov    -0x20(%ebp),%eax
 lea    0xf(%eax),%ebx
 mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%edx
 mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly>
-jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0xa2>
+jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b8>
 mov    -0x20(%ebp),%eax
 mov    0xcc(%eax),%eax
 cmp    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0xa2>
+jne    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b8>
 mov    -0x20(%ebp),%eax
 lea    0xf(%eax),%ebx
 mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%edx
 mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly>
 mov    -0x20(%ebp),%eax
 movzbl 0xae(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x58(%ebp)
 mov    -0x20(%ebp),%eax
 movzbl 0xad(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x54(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0xa9(%eax),%eax
 mov    %eax,-0x50(%ebp)
 mov    -0x20(%ebp),%eax
 movzbl 0xa4(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x4c(%ebp)
 mov    -0x20(%ebp),%eax
 movzbl 0x3c(%eax),%eax
-movzbl %al,%eax
+movsbl %al,%eax
 mov    %eax,-0x48(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x38(%eax),%eax
 mov    %eax,-0x44(%ebp)
 mov    -0x20(%ebp),%eax
 movzwl 0x31(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x40(%ebp)
 mov    -0x20(%ebp),%eax
 movzbl 0x2a(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x3c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0xcc(%eax),%edi
 mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%esi
 mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0xca,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnSaveGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x58(%ebp),%eax
 mov    %eax,0x34(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,0x30(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,0x2c(%esp)
 mov    -0x4c(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    -0x48(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    -0x44(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x40(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"::OnSaveGuild s(%d) g(%d) k(%d) g_level(%d) g_cnt(%d) g_exp(%d) g_sub_cnt(%d) power_side(%d) power_war_p(%d) agit(%d) power_join_cnt(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b1>
+jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b8>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x248>
+jne    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x24f>
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
 movl   $"CPacketTranslater::OnSaveGuild() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xd8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnSaveGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSaveGuild() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x241>
+jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x248>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b1>
+jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnSaveGuild() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0xde,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnSaveGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSaveGuild() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2a9>
+jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b1>
+jmp    <T> <_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader+0x2b8>
 nop
 add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSaveGuild(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  PacketHeader PVar3;
  PacketHeader PVar4;
  PacketHeader PVar5;
  PacketHeader PVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp != 0) {
    local_24 = param_1;
    if (*(int *)(param_1 + 0xcc) == 0) {
                    /* try { // try from 08093cf6 to 08093e3c has its CatchHandler @ 08093e42 */
      CDBManager::_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly
                ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[10],*(uint *)(param_1 + 0xb),
                 (STGuildDBInfoOnly *)(param_1 + 0xf));
    }
    else if (*(int *)(param_1 + 0xcc) == 1) {
      CDBManager::_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly
                ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[10],*(uint *)(param_1 + 0xb),
                 (STGuildDBInfoOnly *)(param_1 + 0xf));
    }
    PVar1 = local_24[0xae];
    PVar2 = local_24[0xad];
    uVar8 = *(undefined4 *)(local_24 + 0xa9);
    PVar3 = local_24[0xa4];
    PVar4 = local_24[0x3c];
    uVar9 = *(undefined4 *)(local_24 + 0x38);
    uVar7 = *(ushort *)(local_24 + 0x31);
    PVar5 = local_24[0x2a];
    uVar10 = *(undefined4 *)(local_24 + 0xcc);
    uVar11 = *(undefined4 *)(local_24 + 0xb);
    PVar6 = local_24[10];
    CMyFileLog::CMyFileLog(local_3c,"OnSaveGuild",0xca);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/GuildModify",
               "::OnSaveGuild s(%d) g(%d) k(%d) g_level(%d) g_cnt(%d) g_exp(%d) g_sub_cnt(%d) power_side(%d) power_war_p(%d) agit(%d) power_join_cnt(%d)"
               ,(uint)(byte)PVar6,uVar11,uVar10,(uint)(byte)PVar5,(uint)uVar7,uVar9,
               (uint)(byte)PVar4,(uint)(byte)PVar3,uVar8,(uint)(byte)PVar2,(uint)(byte)PVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 739 行）：

```cpp
void CPacketTranslater::OnSaveGuild(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Save_Guild* pkt = (Packet_DBMW_Save_Guild*)header;
        if (pkt->m_fieldCC == 0)
        {
            m_pclApp->m_dbManager.SaveGuildInfo(
                pkt->m_serverId, pkt->m_guildId, pkt->m_info);
        }
        else if (pkt->m_fieldCC == 1)
        {
            m_pclApp->m_dbManager.SaveGuildSkill(
                pkt->m_serverId, pkt->m_guildId, pkt->m_info);
            DNF_LOG_SCOPE_LINE(0xca,
                "./log/GuildModify",
                "::OnSaveGuild s(%d) g(%d) k(%d) g_level(%d) g_cnt(%d) g_exp(%d) g_sub_cnt(%d) power_side(%d) power_war_p(%d) agit(%d) power_join_cnt(%d)",
                pkt->m_serverId,
                pkt->m_guildId,
                pkt->m_fieldCC,
                pkt->m_info.m_lev,
                pkt->m_info.m_memberCount,
                pkt->m_info.m_guildExp,
                pkt->m_info.m_field2D,
                pkt->m_info.m_powerSide,
                pkt->m_info.m_powerWarPoint,
                pkt->m_info.m_guildAgitFlag,
                pkt->m_info.m_powerJoinCount
            );

        }
    }
    DNF_CATCH_LOG_PRINTF("./log/Except",
                         "CPacketTranslater::OnSaveGuild() Exception Break",
                         0xd8, 0xde);
}
```
