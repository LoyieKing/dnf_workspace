# _ZN12CApplication15ProcessTimeSyncEv

`CApplication::ProcessTimeSync()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8065cec` | `0xdf` | `0x8053ac0` | `0xd7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+sub    $0x68,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
-lea    -0xc(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    (%eax),%edx
+mov    %edx,-0x50(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0x4c(%ebp)
+mov    0x8(%eax),%edx
 mov    %edx,-0x48(%ebp)
-mov    0x4(%eax),%edx
+mov    0xc(%eax),%edx
 mov    %edx,-0x44(%ebp)
-mov    0x8(%eax),%edx
+mov    0x10(%eax),%edx
 mov    %edx,-0x40(%ebp)
-mov    0xc(%eax),%edx
+mov    0x14(%eax),%edx
 mov    %edx,-0x3c(%ebp)
-mov    0x10(%eax),%edx
+mov    0x18(%eax),%edx
 mov    %edx,-0x38(%ebp)
-mov    0x14(%eax),%edx
+mov    0x1c(%eax),%edx
 mov    %edx,-0x34(%ebp)
-mov    0x18(%eax),%edx
+mov    0x20(%eax),%edx
 mov    %edx,-0x30(%ebp)
-mov    0x1c(%eax),%edx
+mov    0x24(%eax),%edx
 mov    %edx,-0x2c(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x28(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x24(%ebp)
 mov    0x28(%eax),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x40(%ebp),%edx
+mov    %eax,-0x28(%ebp)
+mov    -0x48(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x390(%eax),%eax
 cwtl
-cmp    %eax,%edx
-je     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xdd>
-mov    -0x40(%ebp),%eax
-test   %eax,%eax
-js     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd3>
-mov    -0x40(%ebp),%eax
-cmp    $0x17,%eax
-jg     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd6>
-mov    -0x44(%ebp),%eax
-test   %eax,%eax
-js     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd9>
-mov    -0x44(%ebp),%eax
-cmp    $0x3b,%eax
-jg     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xdc>
-lea    -0x1a(%ebp),%eax
+cmp    -0x10(%ebp),%eax
+je     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd5>
+cmpl   $0x0,-0x10(%ebp)
+js     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd5>
+cmpl   $0x17,-0x10(%ebp)
+jg     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd5>
+cmpl   $0x0,-0xc(%ebp)
+js     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd5>
+cmpl   $0x3b,-0xc(%ebp)
+jg     <T> <_ZN12CApplication15ProcessTimeSyncEv+0xd5>
+lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_Send_Time_SyncC1Ev>
-mov    -0x40(%ebp),%eax
-mov    %ax,-0x10(%ebp)
-mov    -0x44(%ebp),%eax
-mov    %ax,-0xe(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %ax,-0x18(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %ax,-0x16(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
-lea    -0x1a(%ebp),%edx
+lea    -0x22(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x40(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x390(%eax)
-jmp    <T> <_ZN12CApplication15ProcessTimeSyncEv+0xdd>
-nop
-jmp    <T> <_ZN12CApplication15ProcessTimeSyncEv+0xdd>
-nop
-jmp    <T> <_ZN12CApplication15ProcessTimeSyncEv+0xdd>
-nop
-jmp    <T> <_ZN12CApplication15ProcessTimeSyncEv+0xdd>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::ProcessTimeSync() */

void __thiscall CApplication::_ZN12CApplication15ProcessTimeSyncEv(CApplication *this)

{
  int iVar1;
  int iVar2;
  tm *ptVar3;
  Packet_Send_Time_Sync local_1e [10];
  undefined2 local_14;
  undefined2 local_12;
  time_t local_10 [3];
  
  local_10[0] = time((time_t *)0x0);
  ptVar3 = localtime(local_10);
  iVar1 = ptVar3->tm_min;
  iVar2 = ptVar3->tm_hour;
  if ((((iVar2 != *(short *)(this + 0x390)) && (-1 < iVar2)) && (iVar2 < 0x18)) &&
     ((-1 < iVar1 && (iVar1 < 0x3c)))) {
    Packet_Send_Time_Sync::Packet_Send_Time_Sync(local_1e);
    local_12 = (undefined2)iVar1;
    local_14 = (short)iVar2;
    CServerHandler::SendAllTcpGameServer(*(CServerHandler **)(this + 0xa0),(PacketHeader *)local_1e)
    ;
    *(short *)(this + 0x390) = (short)iVar2;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 1116 行）：

```cpp
void CApplication::ProcessTimeSync()
{
    time_t now = time(0);
    tm t = *localtime(&now);
    int hour = t.tm_hour;
    int min = t.tm_min;
    if (hour != m_timeSyncHour && hour >= 0 && hour < 0x18 && min >= 0 && min < 0x3c)
    {
        Packet_Send_Time_Sync pkt;
        pkt.m_fieldA = (unsigned short)hour;
        pkt.m_fieldC = (unsigned short)min;
        m_serverHandler2->SendAllTcpGameServer(&pkt);
        m_timeSyncHour = (short)hour;
    }
}
```
