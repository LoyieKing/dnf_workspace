# _ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD

`CDBManager::OnGoldcardEventStatistic(Packet_Goldcard_Event_Statistic_STD*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8084314` | `0x1e2` | `0x80507f4` | `0x1e9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,143 +1,147 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x40,%esp
+sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    0xc(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c7>
+jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1cf>
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-mov    0xb(%eax,%ecx,1),%eax
+add    $0xb,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x4b>
+jne    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x52>
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-mov    0xf(%eax,%ecx,1),%eax
+add    $0xf,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c2>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1cb>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%esi
+mov    (%eax),%ebx
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-mov    0xf(%eax,%ecx,1),%ecx
+add    $0xf,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-mov    0xb(%eax,%ebx,1),%eax
+add    $0xb,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate log_goldcard_event set create_cnt=create_cnt+%d,open_cnt=open_cnt+%d where occ_date=cast(now() as date) and level=%d",0x8(%esp)
 movl   $0x4f03,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   *%esi
-mov    -0x10(%ebp),%eax
+call   *%ebx
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f03,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0xf5>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0xfe>
 movl   $0x222b,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STDE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnGoldcardEventStatistic() upDate Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1cb>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%esi
+mov    (%eax),%ebx
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-mov    0xf(%eax,%ecx,1),%ecx
+add    $0xf,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-mov    0xb(%eax,%ebx,1),%eax
+add    $0xb,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 mov    %ecx,0x14(%esp)
 mov    %eax,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_goldcard_event(occ_date,level,create_cnt,open_cnt) values(cast(now() as date), %d, %d, %d)",0x8(%esp)
 movl   $0x4f02,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   *%esi
-mov    -0x10(%ebp),%eax
+call   *%ebx
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f02,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1cb>
 movl   $0x2236,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STDE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnGoldcardEventStatistic() inSert Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
-nop
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x62,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1d>
+jne    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x22>
 mov    $0x1,%eax
-add    $0x40,%esp
+add    $0x44,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnGoldcardEventStatistic(Packet_Goldcard_Event_Statistic_STD*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD
          (CDBManager *this,Packet_Goldcard_Event_Statistic_STD *param_1)

{
  char cVar1;
  longlong lVar2;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x10);
  for (local_10 = 0; local_10 < 99; local_10 = local_10 + 1) {
    if ((*(int *)(param_1 + local_10 * 9 + 0xb) != 0) ||
       (*(int *)(param_1 + local_10 * 9 + 0xf) != 0)) {
      (**(code **)(*local_14 + 0x1c))
                (local_14,0x4f03,
                 "upDate log_goldcard_event set create_cnt=create_cnt+%d,open_cnt=open_cnt+%d where occ_date=cast(now() as date) and level=%d"
                 ,*(undefined4 *)(param_1 + local_10 * 9 + 0xb),
                 *(undefined4 *)(param_1 + local_10 * 9 + 0xf),local_10);
      cVar1 = (**(code **)(*local_14 + 0x20))(local_14,0x4f03);
      if (cVar1 != '\x01') {
        CMyFileLog::CMyFileLog(local_24,"OnGoldcardEventStatistic",0x222b);
        CMyFileLog::operator()
                  (local_24,"./log/DBQueryErr","CDBManager::OnGoldcardEventStatistic() upDate Error"
                  );
      }
      lVar2 = (**(code **)(*local_14 + 0x74))(local_14);
      if (lVar2 == 0) {
        (**(code **)(*local_14 + 0x1c))
                  (local_14,0x4f02,
                   "inSert into log_goldcard_event(occ_date,level,create_cnt,open_cnt) values(cast(now() as date), %d, %d, %d)"
                   ,local_10,*(undefined4 *)(param_1 + local_10 * 9 + 0xb),
                   *(undefined4 *)(param_1 + local_10 * 9 + 0xf));
        cVar1 = (**(code **)(*local_14 + 0x20))(local_14,0x4f02);
        if (cVar1 != '\x01') {
          CMyFileLog::CMyFileLog(local_1c,"OnGoldcardEventStatistic",0x2236);
          CMyFileLog::operator()
                    (local_1c,"./log/DBQueryErr",
                     "CDBManager::OnGoldcardEventStatistic() inSert Error");
        }
      }
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
