# _ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic

`CDBManager::QueryErrorLineStatisticCreate(Packet_DBMW_Save_Error_Line_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807a74a` | `0x200` | `0x8051392` | `0x1df` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,155 +1,145 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x84c,%esp
+sub    $0x24c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x82c(%ebp),%ebx
+lea    -0x234(%ebp),%ebx
 mov    $0x0,%eax
-mov    $0x200,%edx
+mov    $0x80,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x15c>
-lea    -0x2c(%ebp),%eax
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x12d>
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    %eax,%eax
+add    -0x28(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0xdd>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-mov    0x14(%eax,%ecx,1),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-mov    0xe(%eax,%ecx,1),%ecx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%esi
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-movzwl 0x12(%eax,%esi,1),%eax
+je     <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0xcf>
+mov    -0x1c(%ebp),%eax
+add    $0x14,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-mov    %ebx,0x14(%esp)
-mov    %ecx,0x10(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $",(from_unixtime(%d),%d,%d,%d)",0x4(%esp)
-lea    -0x82c(%ebp),%eax
+lea    -0x234(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x143>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-mov    0x14(%eax,%ecx,1),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-mov    0xe(%eax,%ecx,1),%ecx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%esi
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-movzwl 0x12(%eax,%esi,1),%eax
+jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x114>
+mov    -0x1c(%ebp),%eax
+add    $0x14,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-mov    %ebx,0x14(%esp)
-mov    %ecx,0x10(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"(from_unixtime(%d),%d,%d,%d)",0x4(%esp)
-lea    -0x82c(%ebp),%eax
+lea    -0x234(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x82c(%ebp),%eax
+lea    -0x234(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-cmp    -0x20(%ebp),%eax
+addl   $0x1,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+cmp    -0x24(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x61>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x62>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_packet_dispatcher_error_line(occ_time,channel_no,error_line,cnt) values%s",0x8(%esp)
 movl   $0x4e88,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x24(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x17d>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x1c7>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e88,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x1c6>
+je     <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x1a5>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x1e8>
+jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x1c7>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x1e8>
+jmp    <T> <_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic+0x1c7>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
-add    $0x84c,%esp
+add    $0x24c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryErrorLineStatisticCreate(Packet_DBMW_Save_Error_Line_Statistic*) */

bool __thiscall
CDBManager::_ZN10CDBManager29QueryErrorLineStatisticCreateEP37Packet_DBMW_Save_Error_Line_Statistic
          (CDBManager *this,Packet_DBMW_Save_Error_Line_Statistic *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_830 [2048];
  string local_30 [4];
  time_t local_2c;
  int *local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_2c = time((time_t *)0x0);
  local_28 = *(int **)(this + 0x10);
  local_24 = *(int *)(param_1 + 10);
  pcVar5 = local_830;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  std::string::string(local_30);
  for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
                    /* try { // try from 0807a7b1 to 0807a901 has its CatchHandler @ 0807a917 */
    iVar4 = std::string::size(local_30);
    if (iVar4 == 0) {
      sprintf(local_830,"(from_unixtime(%d),%d,%d,%d)",local_2c,
              (uint)*(ushort *)(param_1 + local_20 * 10 + 0x12),
              *(undefined4 *)(param_1 + local_20 * 10 + 0xe),
              *(undefined4 *)(param_1 + local_20 * 10 + 0x14));
    }
    else {
      sprintf(local_830,",(from_unixtime(%d),%d,%d,%d)",local_2c,
              (uint)*(ushort *)(param_1 + local_20 * 10 + 0x12),
              *(undefined4 *)(param_1 + local_20 * 10 + 0xe),
              *(undefined4 *)(param_1 + local_20 * 10 + 0x14));
    }
    std::string::operator+=(local_30,local_830);
  }
  pcVar1 = *(code **)(*local_28 + 0x1c);
  uVar3 = std::string::c_str(local_30);
  (*pcVar1)(local_28,0x4e88,
            "inSert into log_packet_dispatcher_error_line(occ_time,channel_no,error_line,cnt) values%s"
            ,uVar3);
  cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e88);
  std::string::~string(local_30);
  return cVar2 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
