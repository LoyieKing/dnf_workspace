# _ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD

`CDBManager::QueryTowerOfDespairStatistic(Packet_TowerOfDespair_Statistic_STD*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8085e74` | `0x1fd` | `0x80515ba` | `0x216` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,144 +1,155 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x44,%esp
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x19>
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f5>
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x210>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x32>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x30>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f5>
-movl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x14a>
-mov    -0x1c(%ebp),%edx
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x210>
 mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x6(%eax,%edx,8),%eax
+mov    %eax,-0x10(%ebp)
+movl   $0x1,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x15f>
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+add    $0x12,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x64>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x2(%eax,%edx,8),%eax
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x157>
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+add    $0xe,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x145>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x15a>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x2(%eax,%edx,8),%ecx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x6(%eax,%edx,8),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+add    $0xe,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+add    $0x12,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %ecx,0x18(%esp)
 mov    %edx,0x14(%esp)
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_tower_despair_layer_stat(occ_date,server_id,layer,enter,success) values(now(),%d,%d,%d,%d)",0x8(%esp)
 movl   $0x4f27,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f27,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x146>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x2(%eax,%edx,8),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x6(%eax,%edx,8),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x15b>
 movl   $0x27bc,0x8(%esp)
 movl   $&_ZZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STDE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+add    $0xe,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+add    $0x12,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"insert error TOD : group(%d),layer(%d),enter(%d),succ(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x146>
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x15b>
 nop
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x64,-0x1c(%ebp)
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x15b>
+nop
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x64,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x3e>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x42>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x10(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_tower_despair_uv_stat(occ_date,server_id,uv) values(now(),%d,%d)",0x8(%esp)
 movl   $0x4f28,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f28,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f0>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x20b>
 movl   $0x27c8,0x8(%esp)
 movl   $&_ZZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STDE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"insert error TOD : uv(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
-add    $0x4c,%esp
+add    $0x44,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryTowerOfDespairStatistic(Packet_TowerOfDespair_Statistic_STD*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD
          (CDBManager *this,Packet_TowerOfDespair_Statistic_STD *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  int *local_24;
  int local_20;
  
  if (param_1 == (Packet_TowerOfDespair_Statistic_STD *)0x0) {
    uVar4 = 0;
  }
  else {
    local_24 = *(int **)(this + 0x10);
    if (local_24 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      for (local_20 = 1; local_20 < 0x65; local_20 = local_20 + 1) {
        if ((*(int *)(param_1 + (local_20 + 2) * 8 + 6) != 0) ||
           (*(int *)(param_1 + (local_20 + 2) * 8 + 2) != 0)) {
          (**(code **)(*local_24 + 0x1c))
                    (local_24,0x4f27,
                     "inSert into log_tower_despair_layer_stat(occ_date,server_id,layer,enter,success) values(now(),%d,%d,%d,%d)"
                     ,*(undefined4 *)(param_1 + 10),local_20,
                     *(undefined4 *)(param_1 + (local_20 + 2) * 8 + 6),
                     *(undefined4 *)(param_1 + (local_20 + 2) * 8 + 2));
          cVar3 = (**(code **)(*local_24 + 0x20))(local_24,0x4f27);
          if (cVar3 != '\x01') {
            uVar4 = *(undefined4 *)(param_1 + (local_20 + 2) * 8 + 2);
            uVar1 = *(undefined4 *)(param_1 + (local_20 + 2) * 8 + 6);
            uVar2 = *(undefined4 *)(param_1 + 10);
            CMyFileLog::CMyFileLog(local_34,"QueryTowerOfDespairStatistic",0x27bc);
            CMyFileLog::operator()
                      (local_34,"./log/DBQueryErr",
                       "insert error TOD : group(%d),layer(%d),enter(%d),succ(%d)",uVar2,local_20,
                       uVar1,uVar4);
          }
        }
      }
      (**(code **)(*local_24 + 0x1c))
                (local_24,0x4f28,
                 "inSert into log_tower_despair_uv_stat(occ_date,server_id,uv) values(now(),%d,%d)",
                 *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe));
      cVar3 = (**(code **)(*local_24 + 0x20))(local_24,0x4f28);
      if (cVar3 != '\x01') {
        uVar4 = *(undefined4 *)(param_1 + 0xe);
        CMyFileLog::CMyFileLog(local_2c,"QueryTowerOfDespairStatistic",0x27c8);
        CMyFileLog::operator()(local_2c,"./log/DBQueryErr","insert error TOD : uv(%d)",uVar4);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
