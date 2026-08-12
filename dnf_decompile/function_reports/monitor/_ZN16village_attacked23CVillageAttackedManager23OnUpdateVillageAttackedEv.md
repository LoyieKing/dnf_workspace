# _ZN16village_attacked23CVillageAttackedManager23OnUpdateVillageAttackedEv

`village_attacked::CVillageAttackedManager::OnUpdateVillageAttacked()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a95d8` | `0x61` | `0x80a7c16` | `0x5c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x34,%esp
 lea    -0x1e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_VillageAttackedUpdateC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv>
 mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
-movzwl -0x1c(%ebp),%eax
-movzwl %ax,%esi
 lea    -0x1e(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %esi,0x8(%esp)
+movl   $0x16,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-add    $0x30,%esp
+add    $0x34,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::OnUpdateVillageAttacked() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager23OnUpdateVillageAttackedEv
          (CVillageAttackedManager *this)

{
  CServerHandler *this_00;
  Packet_VillageAttackedUpdate local_22 [2];
  ushort local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Packet_VillageAttackedUpdate::Packet_VillageAttackedUpdate(local_22);
  local_18 = _ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv(this);
  local_14 = *(undefined4 *)(this + 0x1c);
  local_10 = *(undefined4 *)(this + 0x20);
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  CServerHandler::SendAllToGameServer(this_00,(char *)local_22,(uint)local_20);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 398 行）：

```cpp
void CVillageAttackedManager::OnUpdateVillageAttacked()
{
    Packet_VillageAttackedUpdate pkt;
    pkt.m_remainTime = (unsigned int)GetRemainTime();
    pkt.m_fieldE = (unsigned int)m_field1c;
    pkt.m_field12 = (unsigned int)m_field20;
    m_app->Get_ServerHandler()->SendAllToGameServer((char*)&pkt, 0x16);
}
```
