# _ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE

`CPacketTranslater::SendColletItemsReward(unsigned int, int, char const*, int, TimeGateRewardType::T)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8090e68` | `0xe0` | `0x80720b8` | `0xe1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x88,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE+0xde>
-lea    -0x3e(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE+0xdf>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_CollectItemsRewardC1Ev>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x37(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0x33(%ebp)
 mov    0x18(%ebp),%eax
-mov    %al,-0x2c(%ebp)
+mov    %al,-0x2f(%ebp)
 mov    0x14(%ebp),%eax
-mov    %al,-0x2b(%ebp)
+mov    %al,-0x2e(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x3e(%ebp),%eax
+lea    -0x41(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
-lea    -0x3e(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-lea    -0x70(%ebp),%eax
+lea    -0x73(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_CollectItemsRewardBroadcastC1Ev>
 mov    0xc(%ebp),%eax
-mov    %eax,-0x62(%ebp)
+mov    %eax,-0x65(%ebp)
 mov    0x18(%ebp),%eax
-mov    %al,-0x5e(%ebp)
+mov    %al,-0x61(%ebp)
 mov    0x14(%ebp),%eax
-mov    %al,-0x5d(%ebp)
+mov    %al,-0x60(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x73(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-lea    -0x70(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0xc(%ebp)
+lea    -0x73(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::SendColletItemsReward(unsigned int, int, char const*, int,
   TimeGateRewardType::T) */

void CPacketTranslater::_ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE
               (undefined4 param_1,undefined4 param_2,char *param_3,size_t param_4,
               undefined1 param_5)

{
  Packet_CollectItemsRewardBroadcast local_74 [14];
  undefined4 local_66;
  undefined1 local_62;
  undefined1 local_61;
  char acStack_60 [30];
  Packet_CollectItemsReward local_42 [10];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  char acStack_2e [30];
  CUser *local_10;
  
  local_10 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
  if (local_10 != (CUser *)0x0) {
    Packet_CollectItemsReward::Packet_CollectItemsReward(local_42);
    local_38 = CUser::GetIdByChannel(local_10);
    local_34 = param_2;
    local_30 = param_5;
    local_2f = (char)param_4;
    strncpy(acStack_2e,param_3,param_4);
    CUser::SendTcpGameserver(local_10,(PacketHeader *)local_42);
    Packet_CollectItemsRewardBroadcast::Packet_CollectItemsRewardBroadcast(local_74);
    local_66 = param_2;
    local_62 = param_5;
    local_61 = (char)param_4;
    strncpy(acStack_60,param_3,param_4);
    CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
              (*(CServerHandler **)(m_pclApp + 0xa0),(PacketHeader *)local_74);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFAppConfig.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddy.h 等 299 个文件*
