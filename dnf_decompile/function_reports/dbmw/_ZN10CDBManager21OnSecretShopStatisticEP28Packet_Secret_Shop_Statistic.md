# _ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic

`CDBManager::OnSecretShopStatistic(Packet_Secret_Shop_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8083f2a` | `0x2a6` | `0x80638f6` | `0x230` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,211 +1,170 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x285>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x4c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x48(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x2c(%ebp)
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x20d>
 mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
+add    $0x10,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x24(%ebp)
 mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
+add    $0x20,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x2(%eax),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%esi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%eax
-mov    -0x48(%ebp),%edx
-mov    %edx,0x20(%esp)
-mov    -0x44(%ebp),%ecx
-mov    %ecx,0x1c(%esp)
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    %eax,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x50(%ebp)
+mov    0xc(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edi
+mov    -0x24(%ebp),%eax
+add    $0x2,%eax
+mov    (%eax),%esi
+mov    -0x20(%ebp),%eax
+add    $0x2,%eax
+mov    (%eax),%ebx
+mov    -0x24(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ecx
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%eax
+mov    %edi,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate log_secret_shop set show_count=show_count+%d,show_charac_count=show_charac_count+%d,buy_count=buy_count+%d,price=price+%d where occ_date=cast(now() as date) and dungeon_idx=%d and npc_idx=%d",0x8(%esp)
 movl   $0x4efc,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
-call   *-0x4c(%ebp)
-mov    -0x20(%ebp),%eax
+call   *-0x50(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4efc,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x142>
+je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x11c>
 movl   $0x21bd,0x8(%esp)
 movl   $&_ZZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_StatisticE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnSecretShopStatistic() upDate Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x281>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x209>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
-mov    %eax,-0x40(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x2(%eax),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%esi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%edx
+mov    %eax,-0x4c(%ebp)
+mov    -0x20(%ebp),%eax
+add    $0x2,%eax
+mov    (%eax),%edi
+mov    -0x24(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%esi
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+mov    -0x24(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%ecx
+mov    -0x24(%ebp),%eax
+add    $0x2,%eax
+mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    -0x3c(%ebp),%ecx
-mov    %ecx,0x20(%esp)
-mov    %edi,0x1c(%esp)
-mov    %esi,0x18(%esp)
-mov    %ebx,0x14(%esp)
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %edi,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_secret_shop(occ_date,npc_idx,dungeon_idx,show_count,show_charac_count,buy_count,price) values(cast(now() as date), %d, %d, %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4efb,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
-call   *-0x40(%ebp)
-mov    -0x20(%ebp),%eax
+call   *-0x4c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4efb,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x281>
+je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x209>
 movl   $0x21cb,0x8(%esp)
 movl   $&_ZZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_StatisticE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnSecretShopStatistic() inSert Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x28(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-cmp    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+cmp    -0x28(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x1e>
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

/* CDBManager::OnSecretShopStatistic(Packet_Secret_Shop_Statistic*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic
          (CDBManager *this,Packet_Secret_Shop_Statistic *param_1)

{
  char cVar1;
  longlong lVar2;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  int *local_24;
  int local_20;
  
  local_24 = *(int **)(this + 0x10);
  for (local_20 = 0; local_20 < *(int *)(param_1 + 10); local_20 = local_20 + 1) {
    (**(code **)(*local_24 + 0x1c))
              (local_24,0x4efc,
               "upDate log_secret_shop set show_count=show_count+%d,show_charac_count=show_charac_count+%d,buy_count=buy_count+%d,price=price+%d where occ_date=cast(now() as date) and dungeon_idx=%d and npc_idx=%d"
               ,*(undefined4 *)(param_1 + local_20 * 0x14 + 0x16),
               *(undefined4 *)(param_1 + local_20 * 0x14 + 0x1a),
               *(undefined4 *)(param_1 + local_20 * 0x14 + 0x1e),
               *(undefined4 *)(param_1 + local_20 * 0x14 + 0x22),
               *(undefined4 *)(param_1 + local_20 * 0x14 + 0x12),*(undefined4 *)(param_1 + 0xe));
    cVar1 = (**(code **)(*local_24 + 0x20))(local_24,0x4efc);
    if (cVar1 != '\x01') {
      CMyFileLog::CMyFileLog(local_34,"OnSecretShopStatistic",0x21bd);
      CMyFileLog::operator()
                (local_34,"./log/DBQueryErr","CDBManager::OnSecretShopStatistic() upDate Error");
    }
    lVar2 = (**(code **)(*local_24 + 0x74))(local_24);
    if (lVar2 == 0) {
      (**(code **)(*local_24 + 0x1c))
                (local_24,0x4efb,
                 "inSert into log_secret_shop(occ_date,npc_idx,dungeon_idx,show_count,show_charac_count,buy_count,price) values(cast(now() as date), %d, %d, %d, %d, %d, %d)"
                 ,*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + local_20 * 0x14 + 0x12),
                 *(undefined4 *)(param_1 + local_20 * 0x14 + 0x16),
                 *(undefined4 *)(param_1 + local_20 * 0x14 + 0x1a),
                 *(undefined4 *)(param_1 + local_20 * 0x14 + 0x1e),
                 *(undefined4 *)(param_1 + local_20 * 0x14 + 0x22));
      cVar1 = (**(code **)(*local_24 + 0x20))(local_24,0x4efb);
      if (cVar1 != '\x01') {
        CMyFileLog::CMyFileLog(local_2c,"OnSecretShopStatistic",0x21cb);
        CMyFileLog::operator()
                  (local_2c,"./log/DBQueryErr","CDBManager::OnSecretShopStatistic() inSert Error");
      }
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 6462 行）：

```cpp
char CDBManager::OnSecretShopStatistic(Packet_Secret_Shop_Statistic* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    for (int i = 0; i < *(int*)((char*)packet + 0xa); i++)
    {
        char* rec = (char*)packet + i * 0x14 + 0x10;
        char* rec20 = (char*)packet + i * 0x14 + 0x20;
        h->set_query(0x4efc,
                     "upDate log_secret_shop set show_count=show_count+%d,show_charac_count=show_charac_count+%d,buy_count=buy_count+%d,price=price+%d where occ_date=cast(now() as date) and dungeon_idx=%d and npc_idx=%d",
                     *(int*)(rec + 0x6),
                     *(int*)(rec + 0xa),
                     *(int*)(rec + 0xe),
                     *(int*)(rec20 + 0x2),
                     *(int*)(rec + 0x2),
                     *(int*)((char*)packet + 0xe));
        bool cVar1 = h->exec(0x4efc);
        if (!cVar1)
        {
            CMyFileLog log(__FUNCTION__, 0x21bd);
            log("./log/DBQueryErr",
                "CDBManager::OnSecretShopStatistic() upDate Error");
        }
        if (h->getAffectedRowCount() == 0)
        {
            h->set_query(
                0x4efb,
                "inSert into log_secret_shop(occ_date,npc_idx,dungeon_idx,show_count,show_charac_count,buy_count,price) values(cast(now() as date), %d, %d, %d, %d, %d, %d)",
                *(int*)((char*)packet + 0xe),
                *(int*)(rec + 0x2),
                *(int*)(rec + 0x6),
                *(int*)(rec + 0xa),
                *(int*)(rec + 0xe),
                *(int*)(rec20 + 0x2));
            cVar1 = h->exec(0x4efb);
            if (!cVar1)
            {
                CMyFileLog log(__FUNCTION__, 0x21cb);
                log("./log/DBQueryErr",
                    "CDBManager::OnSecretShopStatistic() inSert Error");
            }
        }
    }
    return 1;
}
```
