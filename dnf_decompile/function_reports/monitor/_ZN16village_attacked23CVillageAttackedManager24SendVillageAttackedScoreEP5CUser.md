# _ZN16village_attacked23CVillageAttackedManager24SendVillageAttackedScoreEP5CUser

`village_attacked::CVillageAttackedManager::SendVillageAttackedScore(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a9690` | `0xb8` | `0x80a7fa2` | `0xcc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
-lea    -0x32(%ebp),%eax
+sub    $0x58,%esp
+lea    -0x3a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_VillageAttackedScoreC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv>
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x20(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj>
+mov    %eax,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN16village_attacked23CVillageAttackedManager24SendVillageAttackedScoreEP5CUser+0xa4>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
+mov    (%eax),%edx
+mov    -0x14(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+lea    (%edx,%eax,1),%eax
 mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16village_attacked23CVillageAttackedManager24SendVillageAttackedScoreEP5CUser+0x8b>
+mov    -0x10(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-lea    (%edx,%eax,1),%eax
-mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager24SendVillageAttackedScoreEP5CUser+0x99>
-movl   $0x0,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-movzwl -0x30(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x32(%ebp),%eax
-mov    %edx,0x8(%esp)
+mov    %eax,-0x18(%ebp)
+lea    -0x3a(%ebp),%eax
+movl   $0x26,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::SendVillageAttackedScore(CUser*) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager24SendVillageAttackedScoreEP5CUser
          (CVillageAttackedManager *this,CUser *param_1)

{
  Packet_VillageAttackedScore local_36 [2];
  ushort local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  Packet_VillageAttackedScore::Packet_VillageAttackedScore(local_36);
  local_2c = CUser::GetIdByChannel(param_1);
  local_28 = CUser::GetUniqCharNo(param_1);
  local_24 = _ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv(this);
  local_20 = *(undefined4 *)(this + 0x1c);
  local_1c = *(undefined4 *)(this + 0x20);
  CUser::GetUniqCharNo(param_1);
  local_10 = (int *)_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj((uint)this);
  if (local_10 == (int *)0x0) {
    local_18 = 0;
    local_14 = 0;
  }
  else {
    local_18 = *local_10;
    local_14 = *local_10 + local_10[1];
  }
  CUser::SendToGameserver(param_1,(char *)local_36,(uint)local_34);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 409 行）：

```cpp
void CVillageAttackedManager::SendVillageAttackedScore(CUser* user)
{
    Packet_VillageAttackedScore pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_remainTime = (unsigned int)GetRemainTime();
    pkt.m_field16 = (unsigned int)m_field1c;
    pkt.m_field1a = (unsigned int)m_field20;
    user->GetUniqCharNo();
    int* hp = GetHuntingPoint(user->GetUniqCharNo());
    int cur = 0;
    int max = 0;
    if (hp != 0)
    {
        cur = *hp;
        max = *hp + hp[1];
    }
    pkt.m_cur = cur;
    pkt.m_max = max;
    user->SendToGameserver((char*)&pkt, 0x26);
}
```
