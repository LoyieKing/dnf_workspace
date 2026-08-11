# _ZN16village_attacked23CVillageAttackedManager28SendVillageAttackedRewardJpnEP5CUseri

`village_attacked::CVillageAttackedManager::SendVillageAttackedRewardJpn(CUser*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a98aa` | `0x59` | `0x80a7e00` | `0x56` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_VillageAttackedRewardC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x18(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x14(%ebp)
-movl   $0x5,-0xc(%ebp)
+movl   $0x5,-0x10(%ebp)
 mov    0x10(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-movzwl -0x20(%ebp),%eax
-movzwl %ax,%edx
+mov    %eax,-0xc(%ebp)
 lea    -0x22(%ebp),%eax
-mov    %edx,0x8(%esp)
+movl   $0x1a,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::SendVillageAttackedRewardJpn(CUser*, int) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager28SendVillageAttackedRewardJpnEP5CUseri
          (CVillageAttackedManager *this,CUser *param_1,int param_2)

{
  Packet_VillageAttackedReward local_26 [2];
  ushort local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  Packet_VillageAttackedReward::Packet_VillageAttackedReward(local_26);
  local_1c = CUser::GetIdByChannel(param_1);
  local_18 = CUser::GetUniqCharNo(param_1);
  local_10 = 5;
  local_14 = param_2;
  CUser::SendToGameserver(param_1,(char *)local_26,(uint)local_24);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 460 行）：

```cpp
void CVillageAttackedManager::SendVillageAttackedRewardJpn(CUser* user, int count)
{
    Packet_VillageAttackedReward pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_rewardType = 5;
    pkt.m_count = count;
    user->SendToGameserver((char*)&pkt, 0x1a);
}
```
