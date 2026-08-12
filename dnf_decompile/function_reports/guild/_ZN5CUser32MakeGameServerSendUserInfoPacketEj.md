# _ZN5CUser32MakeGameServerSendUserInfoPacketEj

`CUser::MakeGameServerSendUserInfoPacket(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8067606` | `0x47` | `0x8089b6c` | `0x55` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+push   %ebx
+sub    $0x34,%esp
 lea    -0x1e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN50Packet_Send_All_User_Info_Minimum_For_Guild_SystemC1Ev>
-mov    0xc(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+lea    -0x1e(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xa(%eax)
+lea    -0x1e(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x10(%ebp)
+mov    %eax,0xe(%ebx)
+lea    -0x1e(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xc(%ebp)
+mov    %eax,0x12(%ebx)
 lea    -0x1e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-leave
+add    $0x34,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::MakeGameServerSendUserInfoPacket(unsigned int) */

void __thiscall CUser::_ZN5CUser32MakeGameServerSendUserInfoPacketEj(CUser *this,uint param_1)

{
  Packet_Send_All_User_Info_Minimum_For_Guild_System local_22 [10];
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Packet_Send_All_User_Info_Minimum_For_Guild_System::
  Packet_Send_All_User_Info_Minimum_For_Guild_System(local_22);
  local_18 = param_1;
  local_14 = GetUniqCharNo(this);
  local_10 = GetIdByChannel(this);
  _ZN5CUser17SendTcpGameserverEP12PacketHeader(this,(PacketHeader *)local_22);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 503 行）：

```cpp
void CUser::MakeGameServerSendUserInfoPacket(unsigned int guildKey)
{
    Packet_Send_All_User_Info_Minimum_For_Guild_System pkt;
    ((PktSendAllUserInfoLayout*)&pkt)->m_guildKey = guildKey;
    ((PktSendAllUserInfoLayout*)&pkt)->m_charNo = GetUniqCharNo();
    ((PktSendAllUserInfoLayout*)&pkt)->m_channel = GetIdByChannel();
    SendTcpGameserver(&pkt);
}
```
