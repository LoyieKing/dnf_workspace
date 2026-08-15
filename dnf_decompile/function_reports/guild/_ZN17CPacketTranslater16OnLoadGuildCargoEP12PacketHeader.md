# _ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader

`CPacketTranslater::OnLoadGuildCargo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80839aa` | `0x1b8` | `0x8079aa2` | `0x1b8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,113 +1,113 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x52>
 movl   $0x1831,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadGuildCargo : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x1b1>
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0xb9>
 movl   $0x1838,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadGuildCargo : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x1b1>
 mov    -0x10(%ebp),%eax
 lea    0xe(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo19SetGuildCargoDBInfoER18STGuildCargoDBInfo>
 jmp    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x1b1>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x157>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1849,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLoadGuildCargo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x150>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x1b1>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x184e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadGuildCargo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader+0x1ac>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLoadGuildCargo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader
               (PacketHeader *param_1)

{
  STGuildCargoDBInfo *pSVar1;
  CGuildCargo *this;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CGuild *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 080839d7 to 08083a7f has its CatchHandler @ 08083a85 */
    CMyFileLog::CMyFileLog(local_38,"OnLoadGuildCargo",0x1831);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/GuildCargo","CPacketTranslater::OnLoadGuildCargo : 0 == m_pclApp");
  }
  else {
    local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_18 == (CGuild *)0x0) {
      CMyFileLog::CMyFileLog(local_30,"OnLoadGuildCargo",0x1838);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/GuildCargo","CPacketTranslater::OnLoadGuildCargo : 0 == pclGuild");
    }
    else {
      pSVar1 = (STGuildCargoDBInfo *)(local_14 + 0xe);
      this = (CGuildCargo *)CGuild::GetGuildCargo(local_18);
      CGuildCargo::_ZN11CGuildCargo19SetGuildCargoDBInfoER18STGuildCargoDBInfo(this,pSVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4322 行）：

```cpp
void CPacketTranslater::OnLoadGuildCargo(PacketHeader* pkt)
{
    CGuild* guild;
    Packet_Guild_Load_Guild_Cargo* pb = (Packet_Guild_Load_Guild_Cargo*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1831, "./log/GuildCargo", "CPacketTranslater::OnLoadGuildCargo : 0 == m_pclApp");
        }
        else
        {
            if ((guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildId)) == 0)
            {
                DNF_LOG_SCOPE_LINE(0x1838, "./log/GuildCargo", "CPacketTranslater::OnLoadGuildCargo : 0 == pclGuild");
            }
            else
            {
                guild->GetGuildCargo()->SetGuildCargoDBInfo(pb->m_cargo);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1849, "./log/Except", "CPacketTranslater::OnLoadGuildCargo Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x184e, "./log/Except", "CPacketTranslater::OnLoadGuildCargo Exception Break\n");
    }
}
```
