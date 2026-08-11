# _ZN22CLoginLogoutStatistics15ProcessByMinuteEv

`CLoginLogoutStatistics::ProcessByMinute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a6558` | `0xa1` | `0x80966ec` | `0xa1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x644,%esp
-lea    -0x630(%ebp),%eax
+lea    -0x634(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_DBMW_Statistic_Login_LogoutC1Ev>
-movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xac(%eax),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xb0(%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xb4(%eax),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xb8(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb8(%eax)
-lea    -0x630(%ebp),%ebx
+lea    -0x634(%ebp),%ebx
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
 add    $0x644,%esp
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

定义于 [source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp](source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp)（约第 48 行）：

```cpp
void CLoginLogoutStatistics::ProcessByMinute()
{
    Packet_DBMW_Statistic_Login_Logout pkt;
    int v0, v1, v2, v3;
    int cnt = 0;
    v0 = m_fieldac;
    v1 = m_fieldb0;
    v2 = m_fieldb4;
    v3 = m_fieldb8;
    m_fieldb4 = 0;
    m_fieldb8 = 0;
    m_app->Get_ServerHandler()->GetDBServer()->SendToServer((char*)&pkt, 0x618);
}
```
