# _ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic

`CDBManager::InsertUdpCharacteristic(Packet_Udp_Characteristic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807c778` | `0x114` | `0x804fd8c` | `0x137` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,89 +1,105 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x10c>
+jmp    <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x12f>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x40(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x2f(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x2b(%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0x27(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x2f,%eax
+mov    (%eax),%edi
+mov    -0x1c(%ebp),%eax
+add    $0x2b,%eax
+mov    (%eax),%eax
 mov    %eax,-0x3c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x23(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x27,%eax
+mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x1f(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x23,%eax
+mov    (%eax),%eax
 mov    %eax,-0x34(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x1b(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x1f,%eax
+mov    (%eax),%eax
 mov    %eax,-0x30(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x17(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x1b,%eax
+mov    (%eax),%eax
 mov    %eax,-0x2c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x13(%eax),%ebx
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x17,%eax
+mov    (%eax),%esi
+mov    -0x1c(%ebp),%eax
+add    $0x13,%eax
+mov    (%eax),%ebx
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
-mov    %esi,0x34(%esp)
+mov    %edi,0x34(%esp)
+mov    -0x3c(%ebp),%edi
 mov    %edi,0x30(%esp)
-mov    -0x3c(%ebp),%esi
-mov    %esi,0x2c(%esp)
-mov    -0x38(%ebp),%esi
-mov    %esi,0x28(%esp)
-mov    -0x34(%ebp),%esi
-mov    %esi,0x24(%esp)
-mov    -0x30(%ebp),%esi
-mov    %esi,0x20(%esp)
-mov    -0x2c(%ebp),%esi
+mov    -0x38(%ebp),%edi
+mov    %edi,0x2c(%esp)
+mov    -0x34(%ebp),%edi
+mov    %edi,0x28(%esp)
+mov    -0x30(%ebp),%edi
+mov    %edi,0x24(%esp)
+mov    -0x2c(%ebp),%edi
+mov    %edi,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"insert into p2pnetwork_statistic (occ_time,server_group,success_party_try,total_party_try,dungeon_bad_ping,dungeon_total,pvp_bad_ping,pvp_total,fair_pvp_bad_ping,fair_pvp_total,success_dungeon_clear,total_dungeon_clear)  values(now(),%hhd,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x8(%esp)
 movl   $0x4e92,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x40(%ebp)
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x102>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x12f>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e92,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x107>
+je     <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x12a>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x10c>
+jmp    <T> <_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic+0x12f>
 mov    $0x1,%eax
 add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::InsertUdpCharacteristic(Packet_Udp_Characteristic*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager23InsertUdpCharacteristicEP25Packet_Udp_Characteristic
          (CDBManager *this,Packet_Udp_Characteristic *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x3c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*piVar1 + 0x1c))
              (piVar1,0x4e92,
               "insert into p2pnetwork_statistic (occ_time,server_group,success_party_try,total_party_try,dungeon_bad_ping,dungeon_total,pvp_bad_ping,pvp_total,fair_pvp_bad_ping,fair_pvp_total,success_dungeon_clear,total_dungeon_clear)  values(now(),%hhd,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)"
               ,(int)(char)param_1[10],*(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf)
               ,*(undefined4 *)(param_1 + 0x13),*(undefined4 *)(param_1 + 0x17),
               *(undefined4 *)(param_1 + 0x1b),*(undefined4 *)(param_1 + 0x1f),
               *(undefined4 *)(param_1 + 0x23),*(undefined4 *)(param_1 + 0x27),
               *(undefined4 *)(param_1 + 0x2b),*(undefined4 *)(param_1 + 0x2f));
    cVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e92);
    if (cVar2 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 828 行）：

```cpp
bool CDBManager::InsertUdpCharacteristic(Packet_Udp_Characteristic* packet)
{
    CDBHandle* h = m_handles[0xf];  // frame_lag db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(
            0x4e92,
            "insert into p2pnetwork_statistic (occ_time,server_group,success_party_try,total_party_try,dungeon_bad_ping,dungeon_total,pvp_bad_ping,pvp_total,fair_pvp_bad_ping,fair_pvp_total,success_dungeon_clear,total_dungeon_clear)  values(now(),%hhd,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
            *(signed char*)(p + 0xa), *(int*)(p + 0xb), *(int*)(p + 0xf),
            *(int*)(p + 0x13), *(int*)(p + 0x17), *(int*)(p + 0x1b),
            *(int*)(p + 0x1f), *(int*)(p + 0x23), *(int*)(p + 0x27),
            *(int*)(p + 0x2b), *(int*)(p + 0x2f)))
        return 0;
    if (!h->exec(0x4e92))
        return 0;
    return 1;
}
```
