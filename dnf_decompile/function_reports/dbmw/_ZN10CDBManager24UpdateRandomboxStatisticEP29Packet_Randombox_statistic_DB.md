# _ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB

`CDBManager::UpdateRandomboxStatistic(Packet_Randombox_statistic_DB*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8083460` | `0x176` | `0x8051f4a` | `0x192` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,99 +1,114 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x44,%esp
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x3c(%ebp),%edx
+mov    $0x0,%ecx
+mov    $0x20,%eax
+mov    %eax,%ebx
+and    $0xfffffffc,%ebx
+mov    $0x0,%eax
+mov    %ecx,(%edx,%eax,1)
+add    $0x4,%eax
+cmp    %ebx,%eax
+jb     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x27>
+add    %eax,%edx
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x43>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x18c>
+mov    0xc(%ebp),%eax
 mov    %eax,-0x10(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x3c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x170>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x15c>
-mov    -0xc(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x56>
-cmp    $0x2,%eax
-je     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x73>
-jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x8e>
+jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x178>
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x78>
 movl   $0xa,0x8(%esp)
 movl   $"randombox",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x8e>
+jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x99>
+cmpl   $0x2,-0xc(%ebp)
+jne    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x99>
 movl   $0xb,0x8(%esp)
 movl   $"emeraldbox",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,4),%eax
+mov    -0xc(%ebp),%eax
+shl    $0x2,%eax
+add    $0xa,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0xb1>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x4,%edx
-mov    0xe(%eax,%edx,4),%eax
+je     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x170>
+mov    -0xc(%ebp),%eax
+shl    $0x2,%eax
+add    $0x1e,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x157>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x173>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%ebx
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x4,%edx
-mov    0xe(%eax,%edx,4),%edx
-mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%ecx,4),%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+shl    $0x2,%eax
+add    $0x1e,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+shl    $0x2,%eax
+add    $0xa,%eax
+add    -0x10(%ebp),%eax
+mov    (%eax),%eax
 mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_randombox(occ_date, box_kind, create_count, open_count) values(CURDATE(), '%s', %d, %d)",0x8(%esp)
 movl   $0x4eea,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   *%ebx
-mov    -0x10(%ebp),%eax
+call   *%ecx
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eea,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x158>
+je     <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x174>
 movl   $0x207b,0x8(%esp)
 movl   $&_ZZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DBE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"UpdateRandomboxStatistic db error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x170>
+jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x18c>
+nop
+jmp    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x174>
 nop
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x4,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x48>
+jne    <T> <_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB+0x55>
 mov    $0x1,%eax
-add    $0x44,%esp
+add    $0x64,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateRandomboxStatistic(Packet_Randombox_statistic_DB*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24UpdateRandomboxStatisticEP29Packet_Randombox_statistic_DB
          (CDBManager *this,Packet_Randombox_statistic_DB *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  CMyFileLog local_1c [8];
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x10);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_14 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (local_10 == 0) {
        memcpy(&local_2c,"randombox",10);
      }
      else if (local_10 == 2) {
        memcpy(&local_2c,"emeraldbox",0xb);
      }
      if ((*(int *)(param_1 + local_10 * 4 + 10) != 0) ||
         (*(int *)(param_1 + (local_10 + 4) * 4 + 0xe) != 0)) {
        (**(code **)(*local_14 + 0x1c))
                  (local_14,0x4eea,
                   "inSert into log_randombox(occ_date, box_kind, create_count, open_count) values(CURDATE(), \'%s\', %d, %d)"
                   ,&local_2c,*(undefined4 *)(param_1 + local_10 * 4 + 10),
                   *(undefined4 *)(param_1 + (local_10 + 4) * 4 + 0xe));
        cVar1 = (**(code **)(*local_14 + 0x20))(local_14,0x4eea);
        if (cVar1 != '\x01') {
          CMyFileLog::CMyFileLog(local_1c,"UpdateRandomboxStatistic",0x207b);
          CMyFileLog::operator()(local_1c,"./log/statistic","UpdateRandomboxStatistic db error!!\n")
          ;
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
