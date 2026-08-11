# _ZN16StatisticManager11AddMoneyLogEP14MoneyLogPacketP14CServerHandler

`StatisticManager::AddMoneyLog(MoneyLogPacket*, CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074c62` | `0x104` | `0x8074d20` | `0x126` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,76 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x1040,%esp
-lea    -0x1020(%ebp),%eax
+sub    $0x1054,%esp
+lea    -0x102c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18PacketInsertUpdateC1Ev>
-movl   $0x4,-0x1016(%ebp)
-movl   $0x4f2d,-0x1012(%ebp)
+movl   $0x4,-0x1022(%ebp)
+movl   $0x4f2d,-0x101e(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%esi
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%ebx
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    0xc(%ebp),%edx
-mov    0x1a(%edx),%ecx
-mov    0xc(%ebp),%edx
-mov    0xa(%edx),%edx
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %eax,0x14(%esp)
-mov    %ecx,0x10(%esp)
-mov    %edx,0xc(%esp)
+mov    %eax,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    -0x14(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+mov    -0x10(%ebp),%ecx
+mov    %ecx,0x18(%esp)
+mov    -0xc(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"inSert into log_charac_money(charac_no,occ_date,m_id,money_plus,money_minus) values(%u,cast(from_unixtime(%d) as date),%s,%u,%u)",0x8(%esp)
 movl   $0x800,0x4(%esp)
-lea    -0x1020(%ebp),%eax
+lea    -0x102c(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-movl   $0x4f2e,-0x100e(%ebp)
+movl   $0x4f2e,-0x101a(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x1a(%eax),%ebx
+add    $0x1a,%eax
+mov    (%eax),%ebx
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ecx
+add    $0xa,%eax
+mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%edx
+add    $0x12,%eax
+mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"update log_charac_money set money_plus=money_plus+%u,money_minus=money_minus+%u where charac_no=%u and occ_date=cast(from_unixtime(%d) as date)",0x8(%esp)
 movl   $0x800,0x4(%esp)
-lea    -0x1020(%ebp),%eax
+lea    -0x102c(%ebp),%eax
 add    $0x817,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x1020(%ebp),%eax
+lea    -0x102c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-add    $0x1040,%esp
+add    $0x1054,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddMoneyLog(MoneyLogPacket*, CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager11AddMoneyLogEP14MoneyLogPacketP14CServerHandler
          (StatisticManager *this,MoneyLogPacket *param_1,CServerHandler *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketInsertUpdate local_1024 [10];
  undefined4 local_101a;
  undefined4 local_1016;
  undefined4 local_1012;
  char acStack_100e [2049];
  char acStack_80d [2049];
  
  PacketInsertUpdate::PacketInsertUpdate(local_1024);
  local_101a = 4;
  local_1016 = 0x4f2d;
  uVar1 = *(undefined4 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(param_1 + 0xe);
  uVar3 = NumberToString(*(uint *)(param_1 + 0x16),0);
  snprintf(acStack_100e,0x800,
           "inSert into log_charac_money(charac_no,occ_date,m_id,money_plus,money_minus) values(%u,cast(from_unixtime(%d) as date),%s,%u,%u)"
           ,*(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x1a),uVar3,uVar2,uVar1);
  local_1012 = 0x4f2e;
  snprintf(acStack_80d,0x800,
           "update log_charac_money set money_plus=money_plus+%u,money_minus=money_minus+%u where charac_no=%u and occ_date=cast(from_unixtime(%d) as date)"
           ,*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12),
           *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x1a));
  CServerHandler::SendToDB(param_2,(PacketHeader *)local_1024);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1680 行）：

```cpp
void StatisticManager::AddMoneyLog(MoneyLogPacket* pkt, CServerHandler* handler)
{
    PacketInsertUpdate p;
    p.m_handleIdx = 4;
    p.m_updateQueryId = 0x4f2d;
    unsigned int a = *(unsigned int*)((char*)pkt + 0x12);
    unsigned int b = *(unsigned int*)((char*)pkt + 0xe);
    char* uid = NumberToString(*(unsigned int*)((char*)pkt + 0x16), 0);
    snprintf(p.m_updateSql, 0x800,
        "inSert into log_charac_money(charac_no,occ_date,m_id,money_plus,money_minus) values(%u,cast(from_unixtime(%d) as date),%s,%u,%u)",
        *(unsigned int*)((char*)pkt + 10), *(unsigned int*)((char*)pkt + 0x1a), uid, b, a);
    p.m_insertQueryId = 0x4f2e;
    snprintf(p.m_insertSql, 0x800,
        "update log_charac_money set money_plus=money_plus+%u,money_minus=money_minus+%u where charac_no=%u and occ_date=cast(from_unixtime(%d) as date)",
        *(unsigned int*)((char*)pkt + 0xe), *(unsigned int*)((char*)pkt + 0x12),
        *(unsigned int*)((char*)pkt + 10), *(unsigned int*)((char*)pkt + 0x1a));
    handler->SendToDB((PacketHeader*)&p);
}
```
