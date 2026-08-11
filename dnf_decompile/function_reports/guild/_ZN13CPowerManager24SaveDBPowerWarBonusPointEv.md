# _ZN13CPowerManager24SaveDBPowerWarBonusPointEv

`CPowerManager::SaveDBPowerWarBonusPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4a7a` | `0x9b` | `0x809a5ca` | `0x9f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x808,%esp
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-test   %al,%al
-je     <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x95>
-mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-cmp    $0x2,%al
-jg     <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x98>
-lea    -0x7ea(%ebp),%eax
+add    $0x184,%eax
+movzbl (%eax),%eax
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x99>
+cmpb   $0x2,-0x11(%ebp)
+jg     <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x9c>
+lea    -0x7ef(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36Packet_DB_Save_Power_War_Bonus_PointC1Ev>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-movsbl %al,%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+movsbl -0x11(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower21GetPowerWarCharacInfoEv>
+mov    %eax,-0x10(%ebp)
+lea    -0x7ef(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point>
+lea    -0x7ef(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x9d>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
-lea    -0x7ea(%ebp),%eax
-mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point>
-mov    -0x7e0(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x99>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x7ea(%ebp),%edx
+lea    -0x7ef(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x99>
+jmp    <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x9d>
 nop
-jmp    <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x99>
+jmp    <T> <_ZN13CPowerManager24SaveDBPowerWarBonusPointEv+0x9d>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SaveDBPowerWarBonusPoint() */

void __thiscall CPowerManager::_ZN13CPowerManager24SaveDBPowerWarBonusPointEv(CPowerManager *this)

{
  CServerHandler *this_00;
  Packet_DB_Save_Power_War_Bonus_Point local_7ee [10];
  int local_7e4;
  CPowerWarCharacInfo *local_10;
  
  if ((this[0x184] != (CPowerManager)0x0) && ((char)this[0x184] < '\x03')) {
    Packet_DB_Save_Power_War_Bonus_Point::Packet_DB_Save_Power_War_Bonus_Point(local_7ee);
    local_10 = (CPowerWarCharacInfo *)
               CPower::GetPowerWarCharacInfo((CPower *)(this + (char)this[0x184] * 0x6c + 8));
    CPowerWarCharacInfo::GetBonus(local_10,local_7ee);
    if (local_7e4 != 0) {
      this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
      CServerHandler::SendToDB(this_00,(PacketHeader *)local_7ee);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 441 行）：

```cpp
void CPowerManager::SaveDBPowerWarBonusPoint()
{
    char winnerSide = *(char*)((char*)this + 0x184);
    if (winnerSide == 0 || winnerSide > 2)
    {
        return;
    }
    Packet_DB_Save_Power_War_Bonus_Point pkt;
    CPowerWarCharacInfo* info =
        ((CPower*)((char*)this + winnerSide * 0x6c + 8))->GetPowerWarCharacInfo();
    info->GetBonus(pkt);
    if (*(int*)((char*)&pkt + 0xa) != 0)
    {
        CApplication* app = *(CApplication**)((char*)this + 4);
        app->Get_ServerHandler()->SendToDB(&pkt);
    }
}
```
