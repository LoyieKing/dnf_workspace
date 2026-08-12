# _ZN16village_attacked23CVillageAttackedManager26OnCountdownVillageAttackedEi

`village_attacked::CVillageAttackedManager::OnCountdownVillageAttacked(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a9574` | `0x63` | `0x80a7b00` | `0x69` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 cmpl   $0x258,0xc(%ebp)
 jne    <T> <_ZN16village_attacked23CVillageAttackedManager26OnCountdownVillageAttackedEi+0x24>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x20(%eax)
-lea    -0x16(%ebp),%eax
+lea    -0x12(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_VillageAttackedCountdownC1Ev>
-mov    0xc(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-movzwl -0x14(%ebp),%eax
+lea    -0x12(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xa(%eax)
+lea    -0x12(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
-lea    -0x16(%ebp),%ebx
+lea    -0x12(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::OnCountdownVillageAttacked(int) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager26OnCountdownVillageAttackedEi
          (CVillageAttackedManager *this,int param_1)

{
  undefined4 uVar1;
  CServerHandler *this_00;
  Packet_VillageAttackedCountdown local_1a [2];
  ushort local_18;
  int local_10;
  
  if (param_1 == 600) {
    uVar1 = _ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv(this);
    *(undefined4 *)(this + 0x20) = uVar1;
  }
  Packet_VillageAttackedCountdown::Packet_VillageAttackedCountdown(local_1a);
  local_10 = param_1;
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  CServerHandler::SendAllToGameServer(this_00,(char *)local_1a,(uint)local_18);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 280 行）：

```cpp
void CVillageAttackedManager::OnCountdownVillageAttacked(int time)
{
    if (time == 600)
    {
        m_field20 = GetMaxHuntingPoint();
    }
    Packet_VillageAttackedCountdown pkt;
    ((RA_INT<10>*)&pkt)->v = time;
    m_app->Get_ServerHandler()->SendAllToGameServer(
        (char*)&pkt, (unsigned int)((RA_U16<2>*)&pkt)->v);
}
```
