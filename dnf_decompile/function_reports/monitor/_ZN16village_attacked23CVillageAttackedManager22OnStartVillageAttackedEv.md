# _ZN16village_attacked23CVillageAttackedManager22OnStartVillageAttackedEv

`village_attacked::CVillageAttackedManager::OnStartVillageAttacked()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a8aa2` | `0x6e` | `0x80a7526` | `0x77` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x34,%esp
+sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 movb   $0x1,0x24(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager21ClearDungeonCloseTimeEv>
-lea    -0x1e(%ebp),%eax
+lea    -0x12(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_VillageAttackedStartC1Ev>
+lea    -0x12(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv>
-mov    %eax,-0x14(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x20(%eax),%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x1e(%ebp),%ebx
+mov    %eax,0xa(%ebx)
+lea    -0x12(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0x1c(%edx),%edx
+mov    %edx,0xe(%eax)
+lea    -0x12(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0x20(%edx),%edx
+mov    %edx,0x12(%eax)
+lea    -0x12(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 movl   $0x16,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-add    $0x34,%esp
+add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::OnStartVillageAttacked() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager22OnStartVillageAttackedEv
          (CVillageAttackedManager *this)

{
  CServerHandler *this_00;
  Packet_VillageAttackedStart local_22 [10];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  this[0x24] = (CVillageAttackedManager)0x1;
  ClearDungeonCloseTime(this);
  Packet_VillageAttackedStart::Packet_VillageAttackedStart(local_22);
  local_18 = _ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv(this);
  local_14 = *(undefined4 *)(this + 0x1c);
  local_10 = *(undefined4 *)(this + 0x20);
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  CServerHandler::SendAllToGameServer(this_00,(char *)local_22,0x16);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 268 行）：

```cpp
void CVillageAttackedManager::OnStartVillageAttacked()
{
    m_state24 = 1;
    ClearDungeonCloseTime();
    Packet_VillageAttackedStart pkt;
    ((RA_UINT<10>*)&pkt)->v = (unsigned int)GetRemainTime();
    ((RA_UINT<14>*)&pkt)->v = (unsigned int)m_field1c;
    ((RA_UINT<18>*)&pkt)->v = (unsigned int)m_field20;
    m_app->Get_ServerHandler()->SendAllToGameServer((char*)&pkt, 0x16);
}
```
