# _ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics

`CDBManager::QueryP2PStatistics(Packet_P2P_Statistics*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8086aa4` | `0x1e6` | `0x8050630` | `0x207` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,146 +1,163 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xac,%esp
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1c>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1db>
+jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1fc>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x35>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1db>
+jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1fc>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x58(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x3b(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x3b,%eax
+mov    (%eax),%eax
 mov    %eax,-0x54(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x37(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x37,%eax
+mov    (%eax),%eax
 mov    %eax,-0x50(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x33(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x33,%eax
+mov    (%eax),%eax
 mov    %eax,-0x4c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x2f(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x2f,%eax
+mov    (%eax),%eax
 mov    %eax,-0x48(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x2d(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x2d,%eax
+movzwl (%eax),%eax
 cwtl
 mov    %eax,-0x44(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x2b(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x2b,%eax
+movzwl (%eax),%eax
 cwtl
 mov    %eax,-0x40(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x29(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x29,%eax
+movzwl (%eax),%eax
 cwtl
 mov    %eax,-0x3c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x25(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x25,%eax
+mov    (%eax),%eax
 mov    %eax,-0x34(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x21(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x21,%eax
+mov    (%eax),%eax
 mov    %eax,-0x30(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x1d(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x1d,%eax
+mov    (%eax),%eax
 mov    %eax,-0x2c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x19(%eax),%edi
-mov    0xc(%ebp),%eax
-movzwl 0x17(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x19,%eax
+mov    (%eax),%edi
+mov    -0x1c(%ebp),%eax
+add    $0x17,%eax
+movzwl (%eax),%eax
 movswl %ax,%esi
-mov    0xc(%ebp),%eax
-movzwl 0x15(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x15,%eax
+movzwl (%eax),%eax
 movswl %ax,%ebx
-mov    0xc(%ebp),%eax
-movzwl 0x13(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x13,%eax
+movzwl (%eax),%eax
 movswl %ax,%ecx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0x12(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x5c(%ebp)
 mov    -0x54(%ebp),%eax
 mov    %eax,0x4c(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,0x48(%esp)
 mov    -0x4c(%ebp),%eax
 mov    %eax,0x44(%esp)
 mov    -0x48(%ebp),%eax
 mov    %eax,0x40(%esp)
 mov    -0x44(%ebp),%eax
 mov    %eax,0x3c(%esp)
 mov    -0x40(%ebp),%eax
 mov    %eax,0x38(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x34(%esp)
 mov    -0x38(%ebp),%eax
 mov    %eax,0x30(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,0x2c(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    %edi,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    -0x5c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into p2p_statistics ( occ_time, server_group, p2p_user, p2p_min_ping, p2p_max_ping, p2p_avg_ping, p2p_over_ping_100, p2p_over_ping_200, p2p_over_ping_300, p2p_over_ping_400, relay_user, relay_min_ping, relay_max_ping, relay_avg_ping, relay_over_ping_100, relay_over_ping_200, relay_over_ping_300, relay_over_ping_400) values (now(), %d, %d, %d, %d, %d, %u, %u, %u, %u, %d, %d, %d, %d, %u, %u, %u, %u)",0x8(%esp)
 movl   $0x4f26,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x58(%ebp)
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1ae>
+je     <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1cf>
 movl   $0x295c,0x8(%esp)
 movl   $&_ZZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_StatisticsE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(insert_p2p_statistics)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1db>
+jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1fc>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f26,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1d6>
+je     <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1f7>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1db>
+jmp    <T> <_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics+0x1fc>
 mov    $0x1,%eax
 add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryP2PStatistics(Packet_P2P_Statistics*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager18QueryP2PStatisticsEP21Packet_P2P_Statistics
          (CDBManager *this,Packet_P2P_Statistics *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_2c [8];
  int *local_24;
  char local_1d;
  
  if (param_1 == (Packet_P2P_Statistics *)0x0) {
    uVar2 = 0;
  }
  else {
    local_24 = *(int **)(this + 0x3c);
    if (local_24 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      local_1d = (**(code **)(*local_24 + 0x1c))
                           (local_24,0x4f26,
                            "inSert into p2p_statistics ( occ_time, server_group, p2p_user, p2p_min_ping, p2p_max_ping, p2p_avg_ping, p2p_over_ping_100, p2p_over_ping_200, p2p_over_ping_300, p2p_over_ping_400, relay_user, relay_min_ping, relay_max_ping, relay_avg_ping, relay_over_ping_100, relay_over_ping_200, relay_over_ping_300, relay_over_ping_400) values (now(), %d, %d, %d, %d, %d, %u, %u, %u, %u, %d, %d, %d, %d, %u, %u, %u, %u)"
                            ,(int)(char)param_1[0x12],*(undefined4 *)(param_1 + 10),
                            (int)*(short *)(param_1 + 0x13),(int)*(short *)(param_1 + 0x15),
                            (int)*(short *)(param_1 + 0x17),*(undefined4 *)(param_1 + 0x19),
                            *(undefined4 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x21),
                            *(undefined4 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 0xe),
                            (int)*(short *)(param_1 + 0x29),(int)*(short *)(param_1 + 0x2b),
                            (int)*(short *)(param_1 + 0x2d),*(undefined4 *)(param_1 + 0x2f),
                            *(undefined4 *)(param_1 + 0x33),*(undefined4 *)(param_1 + 0x37),
                            *(undefined4 *)(param_1 + 0x3b));
      if (local_1d == '\x01') {
        cVar1 = (**(code **)(*local_24 + 0x20))(local_24,0x4f26);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        CMyFileLog::CMyFileLog(local_2c,"QueryP2PStatistics",0x295c);
        CMyFileLog::operator()(local_2c,"./log/DBQueryErr","set_query(insert_p2p_statistics)");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 953 行）：

```cpp
char CDBManager::QueryP2PStatistics(Packet_P2P_Statistics* packet)
{
    if (!packet)
        return 0;
    CDBHandle* h = m_handles[0xf];  // frame_lag db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(
            0x4f26,
            "inSert into p2p_statistics ( occ_time, server_group, p2p_user, p2p_min_ping, p2p_max_ping, p2p_avg_ping, p2p_over_ping_100, p2p_over_ping_200, p2p_over_ping_300, p2p_over_ping_400, relay_user, relay_min_ping, relay_max_ping, relay_avg_ping, relay_over_ping_100, relay_over_ping_200, relay_over_ping_300, relay_over_ping_400) values (now(), %d, %d, %d, %d, %d, %u, %u, %u, %u, %d, %d, %d, %d, %u, %u, %u, %u)",
            *(signed char*)(p + 0x12), *(int*)(p + 0xa),
            *(signed short*)(p + 0x13), *(signed short*)(p + 0x15),
            *(signed short*)(p + 0x17), *(int*)(p + 0x19),
            *(int*)(p + 0x1d), *(int*)(p + 0x21), *(int*)(p + 0x25),
            *(int*)(p + 0xe), *(signed short*)(p + 0x29),
            *(signed short*)(p + 0x2b), *(signed short*)(p + 0x2d),
            *(int*)(p + 0x2f), *(int*)(p + 0x33), *(int*)(p + 0x37),
            *(int*)(p + 0x3b)))
    {
        CMyFileLog log(__FUNCTION__, 0x295c);
        log("./log/DBQueryErr", "set_query(insert_p2p_statistics)");
        return 0;
    }
    if (!h->exec(0x4f26))
        return 0;
    return 1;
}
```
