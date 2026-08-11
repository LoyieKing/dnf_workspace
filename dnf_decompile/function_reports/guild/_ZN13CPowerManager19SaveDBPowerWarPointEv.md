# _ZN13CPowerManager19SaveDBPowerWarPointEv

`CPowerManager::SaveDBPowerWarPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a48da` | `0xe4` | `0x809abb2` | `0x129` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
-lea    -0x34(%ebp),%eax
+sub    $0x4c,%esp
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_DB_Save_Power_War_PointC1Ev>
+lea    -0x30(%ebp),%eax
+lea    0xb(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetWinnerSideEv>
-mov    %al,-0x29(%ebp)
+mov    %al,(%ebx)
+lea    -0x30(%ebp),%eax
+lea    0xc(%eax),%ebx
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,-0x28(%ebp)
+mov    %eax,(%ebx)
+lea    -0x30(%ebp),%eax
+lea    0x10(%eax),%ebx
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,-0x24(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+mov    %eax,(%ebx)
+lea    -0x30(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x2a(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x34(%ebp),%edx
+lea    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-movzbl -0x2a(%ebp),%eax
-movzbl %al,%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x24(%ebp),%edi
-mov    -0x28(%ebp),%esi
-movzbl -0x29(%ebp),%eax
-movsbl %al,%ebx
 movl   $0x28e,0x8(%esp)
 movl   $"SaveDBPowerWarPoint",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+movzbl %al,%edi
+movl   $0x2,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
+mov    %eax,%esi
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CPowerManager13GetWinnerSideEv>
+movsbl %al,%eax
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"winner:%d, A:%d, B:%d, svr group:%d",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x5c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SaveDBPowerWarPoint() */

void __thiscall CPowerManager::_ZN13CPowerManager19SaveDBPowerWarPointEv(CPowerManager *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CServerHandler *this_00;
  uint uVar3;
  int iVar4;
  Packet_DB_Save_Power_War_Point local_38 [10];
  byte local_2e;
  char local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  CMyFileLog local_24 [20];
  
  Packet_DB_Save_Power_War_Point::Packet_DB_Save_Power_War_Point(local_38);
  local_2d = _ZN13CPowerManager13GetWinnerSideEv(this);
  local_2c = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,1);
  local_28 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,2);
  local_2e = CApplication::_ZN12CApplication15Get_ServerGroupEv(*(CApplication **)(this + 4));
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
  CServerHandler::SendToDB(this_00,(PacketHeader *)local_38);
  uVar2 = local_28;
  uVar1 = local_2c;
  uVar3 = (uint)local_2e;
  iVar4 = (int)local_2d;
  CMyFileLog::CMyFileLog(local_24,"SaveDBPowerWarPoint",0x28e);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_24,"./log/Power","winner:%d, A:%d, B:%d, svr group:%d",iVar4,uVar1,uVar2,uVar3);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 397 行）：

```cpp
void CPowerManager::SaveDBPowerWarPoint()
{
    CApplication* app = *(CApplication**)((char*)this + 4);
    Packet_DB_Save_Power_War_Point pkt;
    *(char*)((char*)&pkt + 0xb) = GetWinnerSide();
    *(unsigned int*)((char*)&pkt + 0xc) = (unsigned int)GetPowerScore((ENUM_POWER_SIDE_TYPE)1);
    *(unsigned int*)((char*)&pkt + 0x10) = (unsigned int)GetPowerScore((ENUM_POWER_SIDE_TYPE)2);
    *(unsigned char*)((char*)&pkt + 0xa) = app->Get_ServerGroup();
    app->Get_ServerHandler()->SendToDB(&pkt);
    DNF_LOG_SCOPE_LINE(0x28e,"./log/Power", "winner:%d, A:%d, B:%d, svr group:%d",
        (int)GetWinnerSide(), (int)GetPowerScore((ENUM_POWER_SIDE_TYPE)1),
        (int)GetPowerScore((ENUM_POWER_SIDE_TYPE)2),
        (unsigned int)app->Get_ServerGroup());
}
```
