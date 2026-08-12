# _ZN16village_attacked23CVillageAttackedManager19SendMaxHuntingPointEv

`village_attacked::CVillageAttackedManager::SendMaxHuntingPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a8b10` | `0x98` | `0x80a78e4` | `0x97` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,40 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x1040,%esp
-lea    -0x101b(%ebp),%eax
+sub    $0x2040,%esp
+lea    -0x201c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_DBMW_Query_MsgC1Ev>
-movl   $0x6,-0x100d(%ebp)
-movl   $0x4ee2,-0x1011(%ebp)
+movl   $0x6,-0x200e(%ebp)
+movl   $0x4ee2,-0x2012(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%esi
+mov    0x1c(%eax),%eax
+mov    %eax,%esi
 call   <T> <_Z10GetNowTimev>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"inSert into village_attacked_server_point_rank(server_info, occ_date, hunting_point) values(%d,cast(from_unixtime(%d) as date),%u)",0x4(%esp)
-lea    -0x101b(%ebp),%eax
-add    $0x12,%eax
+lea    -0x1009(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x101b(%ebp),%edx
+lea    -0x201c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-add    $0x1040,%esp
+add    $0x2040,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::SendMaxHuntingPoint() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager19SendMaxHuntingPointEv(CVillageAttackedManager *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  CServerHandler *this_00;
  Packet_DBMW_Query_Msg local_101f [10];
  undefined4 local_1015;
  undefined4 local_1011;
  char acStack_100d [4097];
  
  Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg(local_101f);
  local_1011 = 6;
  local_1015 = 0x4ee2;
  uVar1 = *(undefined4 *)(this + 0x1c);
  uVar2 = GetNowTime();
  uVar3 = CApplication::Get_ServerGroup(*(CApplication **)this);
  sprintf(acStack_100d,
          "inSert into village_attacked_server_point_rank(server_info, occ_date, hunting_point) values(%d,cast(from_unixtime(%d) as date),%u)"
          ,uVar3 & 0xff,uVar2,uVar1);
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  CServerHandler::SendToDB(this_00,(PacketHeader *)local_101f);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 319 行）：

```cpp
void CVillageAttackedManager::SendMaxHuntingPoint()
{
    Packet_DBMW_Query_Msg pkt;
    char sql[0x1001];
    pkt.m_fieldB = 6;
    pkt.m_fieldA = 0x4ee2;
    register unsigned int hp = (unsigned int)m_field1c;
    register unsigned int now = GetNowTime();
    sprintf(sql,
            "inSert into village_attacked_server_point_rank(server_info, occ_date, hunting_point) values(%d,cast(from_unixtime(%d) as date),%u)",
            (unsigned int)m_app->Get_ServerGroup() & 0xff, now, hp);
    m_app->Get_ServerHandler()->SendToDB(&pkt);
}
```
