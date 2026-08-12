# _ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value

`CDBManager::QueryDeathTowerValueStatisticCreate(Packet_DBMW_DeathTower_Statistic_Value*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807dff2` | `0x36c` | `0x8061150` | `0x2fb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,240 +1,208 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xdc,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x34>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x361>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x2f0>
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
 movl   $0x1760,0x8(%esp)
-movl   $&_ZZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_ValueE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+movl   $"QueryDeathTowerValueStatisticCreate",0x4(%esp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_DeathTower_Statistic_Value : (%d) 개 패킷 수신\n",0x8(%esp)
+movl   $"Packet_DBMW_DeathTower_Statistic_Value : (%d) 째쨀 횈횖횇쨋 쩌철쩍횇\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x34b>
+jmp    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x2da>
 lea    -0x64(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0xb,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-mov    0x11(%eax,%ecx,1),%eax
-mov    %eax,%ecx
+mov    %edx,%eax
+shl    $0x4,%eax
+sub    %edx,%eax
+add    $0x11,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%ecx
+mov    0xc(%ebp),%ebx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-mov    0x19(%eax,%ebx,1),%eax
+mov    %edx,%eax
+shl    $0x4,%eax
+sub    %edx,%eax
+add    $0x19,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%eax
 mov    %eax,-0x64(%ebp,%ecx,4)
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
-mov    %eax,-0xa8(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-movzwl 0xf(%eax,%ecx,1),%eax
-movswl %ax,%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xe,%eax
-movzbl (%eax),%eax
-movsbl %al,%ecx
-mov    -0x40(%ebp),%edi
-mov    -0x44(%ebp),%eax
-mov    %eax,-0xa4(%ebp)
-mov    -0x48(%ebp),%edx
-mov    %edx,-0xa0(%ebp)
+mov    %eax,-0xa0(%ebp)
+mov    -0x40(%ebp),%edx
+mov    -0x44(%ebp),%ebx
+mov    -0x48(%ebp),%edi
 mov    -0x4c(%ebp),%eax
 mov    %eax,-0x9c(%ebp)
-mov    -0x50(%ebp),%edx
-mov    %edx,-0x98(%ebp)
+mov    -0x50(%ebp),%ecx
+mov    %ecx,-0x98(%ebp)
 mov    -0x54(%ebp),%eax
 mov    %eax,-0x94(%ebp)
-mov    -0x58(%ebp),%edx
-mov    %edx,-0x90(%ebp)
+mov    -0x58(%ebp),%ecx
+mov    %ecx,-0x90(%ebp)
 mov    -0x5c(%ebp),%esi
-mov    -0x60(%ebp),%edx
+mov    -0x60(%ebp),%ecx
 mov    -0x64(%ebp),%eax
-mov    %ebx,0x38(%esp)
-mov    %ecx,0x34(%esp)
-mov    %edi,0x30(%esp)
-mov    -0xa4(%ebp),%ecx
-mov    %ecx,0x2c(%esp)
-mov    -0xa0(%ebp),%edi
+mov    %edx,0x30(%esp)
+mov    %ebx,0x2c(%esp)
 mov    %edi,0x28(%esp)
-mov    -0x9c(%ebp),%ecx
-mov    %ecx,0x24(%esp)
-mov    -0x98(%ebp),%edi
-mov    %edi,0x20(%esp)
-mov    -0x94(%ebp),%ecx
-mov    %ecx,0x1c(%esp)
-mov    -0x90(%ebp),%edi
-mov    %edi,0x18(%esp)
+mov    -0x9c(%ebp),%edi
+mov    %edi,0x24(%esp)
+mov    -0x98(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    -0x94(%ebp),%edi
+mov    %edi,0x1c(%esp)
+mov    -0x90(%ebp),%edx
+mov    %edx,0x18(%esp)
 mov    %esi,0x14(%esp)
-mov    %edx,0x10(%esp)
+mov    %ecx,0x10(%esp)
 mov    %eax,0xc(%esp)
-movl   $"upDate log_deathtower_value set try_cnt=try_cnt+%u, clear_stage=clear_stage+%u, recipeCnt=recipeCnt+%u, commonCnt=commonCnt+%u, uncommonCnt=uncommonCnt+%u, rareCnt=rareCnt+%u, uniqCnt=uniqCnt+%u, card_item_goldprice=card_item_goldprice+%u, card_gold=card_gold+%u, repair_price=repair_price+%u  where occ_date=cast(now() as date) and type=%d and level=%d",0x8(%esp)
+movl   $"upDate log_deathtower_value set try_cnt=try_cnt+%u, clear_stage=clear_stage+%u, recipeCnt=recipeCnt+%u, commonCnt=commonCnt+%u, uncommonCnt=uncommonCnt+%u, rareCnt=rareCnt+%u, uniqCnt=uniqCnt+%u, card_item_goldprice=card_item_goldprice+%u, card_gold=card_gold+%u, repair_price=repair_price+%u  where ",0x8(%esp)
 movl   $0x4e9e,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
-call   *-0xa8(%ebp)
+call   *-0xa0(%ebp)
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e9e,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x1f1>
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-add    $0x74,%eax
-mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-or     %edx,%eax
-test   %eax,%eax
-jne    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x1f8>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x1fd>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x347>
+je     <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x2d6>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x8c(%ebp)
 mov    -0x40(%ebp),%esi
 mov    -0x44(%ebp),%edi
-mov    -0x48(%ebp),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x4c(%ebp),%edx
-mov    %edx,-0x84(%ebp)
-mov    -0x50(%ebp),%ecx
-mov    %ecx,-0x80(%ebp)
-mov    -0x54(%ebp),%eax
-mov    %eax,-0x7c(%ebp)
-mov    -0x58(%ebp),%edx
-mov    %edx,-0x78(%ebp)
-mov    -0x5c(%ebp),%ecx
-mov    %ecx,-0x74(%ebp)
-mov    -0x60(%ebp),%eax
-mov    %eax,-0x70(%ebp)
-mov    -0x64(%ebp),%edx
-mov    %edx,-0x6c(%ebp)
+mov    -0x48(%ebp),%ecx
+mov    %ecx,-0x88(%ebp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+mov    -0x50(%ebp),%edx
+mov    %edx,-0x80(%ebp)
+mov    -0x54(%ebp),%ecx
+mov    %ecx,-0x7c(%ebp)
+mov    -0x58(%ebp),%eax
+mov    %eax,-0x78(%ebp)
+mov    -0x5c(%ebp),%edx
+mov    %edx,-0x74(%ebp)
+mov    -0x60(%ebp),%ecx
+mov    %ecx,-0x70(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+lea    0x1(%eax),%edx
+mov    %edx,%eax
+shl    $0x4,%eax
+sub    %edx,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+movswl %ax,%ebx
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-movzwl 0xf(%eax,%ecx,1),%eax
-movswl %ax,%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
+mov    %edx,%eax
+shl    $0x4,%eax
+sub    %edx,%eax
+add    $0xe,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0xe,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %esi,0x38(%esp)
 mov    %edi,0x34(%esp)
-mov    -0x88(%ebp),%ecx
-mov    %ecx,0x30(%esp)
-mov    -0x84(%ebp),%edi
-mov    %edi,0x2c(%esp)
-mov    -0x80(%ebp),%edx
-mov    %edx,0x28(%esp)
-mov    -0x7c(%ebp),%ecx
-mov    %ecx,0x24(%esp)
-mov    -0x78(%ebp),%edi
-mov    %edi,0x20(%esp)
-mov    -0x74(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    -0x70(%ebp),%ecx
-mov    %ecx,0x18(%esp)
-mov    -0x6c(%ebp),%edi
-mov    %edi,0x14(%esp)
+mov    -0x88(%ebp),%edx
+mov    %edx,0x30(%esp)
+mov    -0x84(%ebp),%ecx
+mov    %ecx,0x2c(%esp)
+mov    -0x80(%ebp),%edi
+mov    %edi,0x28(%esp)
+mov    -0x7c(%ebp),%edx
+mov    %edx,0x24(%esp)
+mov    -0x78(%ebp),%ecx
+mov    %ecx,0x20(%esp)
+mov    -0x74(%ebp),%edi
+mov    %edi,0x1c(%esp)
+mov    -0x70(%ebp),%edx
+mov    %edx,0x18(%esp)
+mov    -0x6c(%ebp),%ecx
+mov    %ecx,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_deathtower_value (occ_date, type, level, try_cnt, clear_stage, recipeCnt, commonCnt, uncommonCnt, rareCnt, uniqCnt, card_item_goldprice, card_gold, repair_price) values (cast(now() as date), %d, %d, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u)",0x8(%esp)
 movl   $0x4e9d,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x8c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e9d,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x347>
+je     <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x2d6>
 movl   $0x178c,0x8(%esp)
 movl   $&_ZZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_ValueE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryDeathTowerValueStatisticCreate db error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x361>
+jmp    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x2f0>
 addl   $0x1,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 cmp    -0x20(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x8d>
+jne    <T> <_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value+0x88>
 mov    $0x1,%eax
 add    $0xdc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryDeathTowerValueStatisticCreate(Packet_DBMW_DeathTower_Statistic_Value*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager35QueryDeathTowerValueStatisticCreateEP38Packet_DBMW_DeathTower_Statistic_Value
          (CDBManager *this,Packet_DBMW_DeathTower_Statistic_Value *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  time_t local_2c;
  int *local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_2c = time((time_t *)0x0);
  local_28 = *(int **)(this + 0x10);
  if (local_28 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    local_24 = *(int *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_3c,"QueryDeathTowerValueStatisticCreate",0x1760);
    CMyFileLog::operator()(local_3c,"./log/statistic",&DAT_081b410c,local_24);
    for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
      puVar5 = local_68;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      local_68[*(int *)(param_1 + local_20 * 0xf + 0x11)] =
           *(undefined4 *)(param_1 + local_20 * 0xf + 0x19);
      (**(code **)(*local_28 + 0x1c))
                (local_28,0x4e9e,
                 "upDate log_deathtower_value set try_cnt=try_cnt+%u, clear_stage=clear_stage+%u, recipeCnt=recipeCnt+%u, commonCnt=commonCnt+%u, uncommonCnt=uncommonCnt+%u, rareCnt=rareCnt+%u, uniqCnt=uniqCnt+%u, card_item_goldprice=card_item_goldprice+%u, card_gold=card_gold+%u, repair_price=repair_price+%u  where occ_date=cast(now() as date) and type=%d and level=%d"
                 ,local_68[0],local_68[1],local_68[2],local_68[3],local_58,local_54,local_50,
                 local_4c,local_48,local_44,(int)(char)param_1[local_20 * 0xf + 0xe],
                 (int)*(short *)(param_1 + local_20 * 0xf + 0xf));
      cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e9e);
      if ((cVar2 == '\x01') && (lVar7 = (**(code **)(*local_28 + 0x74))(local_28), lVar7 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*local_28 + 0x1c))
                  (local_28,0x4e9d,
                   "inSert into log_deathtower_value (occ_date, type, level, try_cnt, clear_stage, recipeCnt, commonCnt, uncommonCnt, rareCnt, uniqCnt, card_item_goldprice, card_gold, repair_price) values (cast(now() as date), %d, %d, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u)"
                   ,(int)(char)param_1[local_20 * 0xf + 0xe],
                   (int)*(short *)(param_1 + local_20 * 0xf + 0xf),local_68[0],local_68[1],
                   local_68[2],local_68[3],local_58,local_54,local_50,local_4c,local_48,local_44);
        cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e9d);
        if (cVar2 != '\x01') {
          CMyFileLog::CMyFileLog(local_34,"QueryDeathTowerValueStatisticCreate",0x178c);
          CMyFileLog::operator()
                    (local_34,"./log/statistic","\nQueryDeathTowerValueStatisticCreate db error!!\n"
                    );
          return 0;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
