# _ZN16village_attacked23CVillageAttackedManager23OnRewardVillageAttackedEv

`village_attacked::CVillageAttackedManager::OnRewardVillageAttacked()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a92b6` | `0x52` | `0x80a7afc` | `0x46` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x20,%esp
+sub    $0x24,%esp
 lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_VillageAttackedRewardServerC1Ev>
-movl   $0x0,-0xc(%ebp)
-movzwl -0x14(%ebp),%eax
-movzwl %ax,%esi
 lea    -0x16(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %esi,0x8(%esp)
+movl   $0xe,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x30(%eax)
-add    $0x20,%esp
+add    $0x24,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::OnRewardVillageAttacked() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager23OnRewardVillageAttackedEv
          (CVillageAttackedManager *this)

{
  CServerHandler *this_00;
  Packet_VillageAttackedRewardServer local_1a [2];
  ushort local_18;
  undefined4 local_10;
  
  Packet_VillageAttackedRewardServer::Packet_VillageAttackedRewardServer(local_1a);
  local_10 = 0;
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  CServerHandler::SendAllToGameServer(this_00,(char *)local_1a,(uint)local_18);
  *(undefined4 *)(this + 0x30) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 372 行）：

```cpp
void CVillageAttackedManager::OnRewardVillageAttacked()
{
    Packet_VillageAttackedRewardServer pkt;
    m_app->Get_ServerHandler()->SendAllToGameServer((char*)&pkt, 0xe);
    m_field30 = 0;
}
```
