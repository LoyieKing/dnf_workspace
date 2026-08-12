# _ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader

`CPacketTranslater::OnDBMWVillageAttackRank(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809ce38` | `0x1d6` | `0x80d5a24` | `0x1d1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,124 +1,122 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ce>
-movb   $0x0,-0x29(%ebp)
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c9>
+movb   $0x0,-0x25(%ebp)
+movl   $0x0,-0x2c(%ebp)
 movl   $0x0,-0x30(%ebp)
-movl   $0x0,-0x34(%ebp)
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-lea    -0x34(%ebp),%eax
-mov    %eax,0x10(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,0xc(%esp)
-lea    -0x29(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x30(%ebp),%edx
+mov    %edx,0x10(%esp)
+lea    -0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
+lea    -0x25(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x9b>
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x96>
 movl   $0xd5a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater.OnDBMWVillageAttackRank Err : return false",0x8(%esp)
 movl   $"./log/GuildEvent",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
-movzbl -0x29(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
+movzbl -0x25(%ebp),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
-lea    -0x46(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
+lea    -0x42(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
-movl   $0x4,-0x3c(%ebp)
+movl   $0x4,-0x38(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %ax,-0x34(%ebp)
 mov    -0x30(%ebp),%eax
-mov    %ax,-0x38(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %ax,-0x36(%ebp)
-movzwl -0x44(%ebp),%eax
+mov    %ax,-0x32(%ebp)
+movzwl -0x40(%ebp),%eax
 movzwl %ax,%esi
-lea    -0x46(%ebp),%ebx
+lea    -0x42(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x172>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x16d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xd69,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWInsertMail() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x16b>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x166>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xd6e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWInsertMail() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c7>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
 nop
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWVillageAttackRank(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CMonitorServer *this;
  Packet_Monitor_Event_Start local_4a [2];
  ushort local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  int local_38 [2];
  bool local_2d;
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_2d = false;
    local_38[1] = 0;
    local_38[0] = 0;
    local_14 = param_1;
                    /* try { // try from 0809ce8c to 0809cf28 has its CatchHandler @ 0809cf2e */
    cVar1 = CDBManager::
            _ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_
                      ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_VillageAttackedRank *)param_1,
                       &local_2d,local_38 + 1,local_38);
    if (cVar1 == '\x01') {
      if (local_2d != false) {
        Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_4a);
        local_40 = 4;
        local_3c = (undefined2)local_38[1];
        local_3a = (undefined2)local_38[0];
        this = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
        CMonitorServer::SendToServer(this,(char *)local_4a,(uint)local_48);
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_2c,"OnDBMWVillageAttackRank",0xd5a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/GuildEvent",
                 "CPacketTranslater.OnDBMWVillageAttackRank Err : return false");
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1398 行）：

```cpp
void CPacketTranslater::OnDBMWVillageAttackRank(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        bool flag = false;
        int a = 0;
        int b = 0;
        if (!m_pclApp->m_dbManager.GetVillageAttackedRank(
                (Packet_DB_VillageAttackedRank*)header, flag, a, b))
        {
            DNF_LOG_SCOPE_LINE(0xd5a,
                "./log/GuildEvent",
                "CPacketTranslater.OnDBMWVillageAttackRank Err : return false"
            );

            return;
        }
        if (flag)
        {
            Packet_Monitor_Event_Start ev;
            ev.m_fieldA = 4;
            ev.m_fieldE = (unsigned short)a;
            ev.m_field10 = (unsigned short)b;
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)&ev, ev.packetSize);
        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnDBMWInsertMail() Exception Break",
                  0xd69, 0xd6e);
}
```
