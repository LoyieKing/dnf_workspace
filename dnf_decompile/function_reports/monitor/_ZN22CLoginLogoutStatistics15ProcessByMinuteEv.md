# _ZN22CLoginLogoutStatistics15ProcessByMinuteEv

`CLoginLogoutStatistics::ProcessByMinute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a6558` | `0xa1` | `0x8096476` | `0xc6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x644,%esp
-lea    -0x630(%ebp),%eax
+sub    $0x634,%esp
+lea    -0x620(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_DBMW_Statistic_Login_LogoutC1Ev>
-movl   $0x0,-0x10(%ebp)
+lea    -0x620(%ebp),%eax
+lea    0x608(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0xac(%eax),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,(%edx)
+lea    -0x620(%ebp),%eax
+lea    0x60c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0xb0(%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,(%edx)
+lea    -0x620(%ebp),%eax
+lea    0x610(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0xb4(%eax),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,(%edx)
+lea    -0x620(%ebp),%eax
+lea    0x614(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0xb8(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb8(%eax)
-lea    -0x630(%ebp),%ebx
+lea    -0x620(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler11GetDBServerEv>
 movl   $0x618,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
-add    $0x644,%esp
+add    $0x634,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CLoginLogoutStatistics::ProcessByMinute() */

void __thiscall
CLoginLogoutStatistics::_ZN22CLoginLogoutStatistics15ProcessByMinuteEv(CLoginLogoutStatistics *this)

{
  CServerHandler *this_00;
  CServerInterface *this_01;
  Packet_DBMW_Statistic_Login_Logout local_634 [1544];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  
  Packet_DBMW_Statistic_Login_Logout::Packet_DBMW_Statistic_Login_Logout(local_634);
  local_14 = 0;
  local_2c = *(undefined4 *)(this + 0xac);
  local_28 = *(undefined4 *)(this + 0xb0);
  local_24 = *(undefined4 *)(this + 0xb4);
  local_20 = *(undefined4 *)(this + 0xb8);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  this_01 = (CServerInterface *)CServerHandler::GetDBServer(this_00);
  CServerInterface::_ZN16CServerInterface12SendToServerEPci(this_01,(char *)local_634,0x618);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp](source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp)（约第 51 行）：

```cpp
void CLoginLogoutStatistics::ProcessByMinute()
{
    Packet_DBMW_Statistic_Login_Logout pkt;
    *(unsigned int*)((char*)&pkt + 0x608) = m_fieldac;
    *(unsigned int*)((char*)&pkt + 0x60c) = m_fieldb0;
    *(unsigned int*)((char*)&pkt + 0x610) = m_fieldb4;
    *(unsigned int*)((char*)&pkt + 0x614) = m_fieldb8;
    m_fieldb4 = 0;
    m_fieldb8 = 0;
    m_app->Get_ServerHandler()->GetDBServer()->SendToServer((char*)&pkt, 0x618);
}
```
