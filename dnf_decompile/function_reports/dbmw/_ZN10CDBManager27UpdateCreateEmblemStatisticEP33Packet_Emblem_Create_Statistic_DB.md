# _ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB

`CDBManager::UpdateCreateEmblemStatistic(Packet_Emblem_Create_Statistic_DB*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8083370` | `0xef` | `0x80523d0` | `0x111` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,72 +1,86 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    0xc(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x30(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x22(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0x1e(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x22,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0x1e,%eax
+mov    (%eax),%eax
 mov    %eax,-0x2c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x1a(%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0x16(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%edi
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ebx
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %ecx,0x24(%esp)
 mov    -0x2c(%ebp),%ecx
 mov    %ecx,0x20(%esp)
 mov    %edi,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_emblem_create(cur_date, grade0, grade1, grade2, grade3, grade4, grade5, grade6) values(CURDATE(), %d, %d, %d, %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4ee9,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x30(%ebp)
-mov    -0x1c(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB+0xdc>
+movl   $0x1f04,0x8(%esp)
+movl   $&_ZZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DBE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"UpdateCreateEmblemStatistic db error!!\n",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB+0x109>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ee9,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB+0xe2>
-movl   $0x1f04,0x8(%esp)
-movl   $&_ZZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DBE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"UpdateCreateEmblemStatistic db error!!\n",0x8(%esp)
-movl   $"./log/statistic",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB+0x104>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB+0xe7>
+jmp    <T> <_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB+0x109>
 mov    $0x1,%eax
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateCreateEmblemStatistic(Packet_Emblem_Create_Statistic_DB*) */

bool __thiscall
CDBManager::_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB
          (CDBManager *this,Packet_Emblem_Create_Statistic_DB *param_1)

{
  char cVar1;
  CMyFileLog local_28 [8];
  int *local_20;
  
  local_20 = *(int **)(this + 0x10);
  (**(code **)(*local_20 + 0x1c))
            (local_20,0x4ee9,
             "inSert into log_emblem_create(cur_date, grade0, grade1, grade2, grade3, grade4, grade5, grade6) values(CURDATE(), %d, %d, %d, %d, %d, %d, %d)"
             ,*(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe),
             *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x16),
             *(undefined4 *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1e),
             *(undefined4 *)(param_1 + 0x22));
  cVar1 = (**(code **)(*local_20 + 0x20))(local_20,0x4ee9);
  if (cVar1 != '\x01') {
    CMyFileLog::CMyFileLog(local_28,"UpdateCreateEmblemStatistic",0x1f04);
    CMyFileLog::operator()(local_28,"./log/statistic","UpdateCreateEmblemStatistic db error!!\n");
  }
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
