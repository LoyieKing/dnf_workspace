# _ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic

`CDBManager::QueryCubeStatisticCreate(Packet_DBMW_Cube_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807f03c` | `0x3db` | `0x805fa54` | `0x34a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,280 +1,228 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x86c,%esp
+sub    $0x850,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x34>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x33>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3ce>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x33e>
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x20(%ebp)
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
 movl   $0x1872,0x8(%esp)
-movl   $&_ZZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_StatisticE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+movl   $"QueryCubeStatisticCreate",0x4(%esp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"CDBManager::QueryCubeStatisticCreate : (%d) 개 패킷 수신\n",0x8(%esp)
+movl   $"CDBManager::QueryCubeStatisticCreate : (%d) 째쨀 횈횖횇쨋 쩌철쩍횇\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x844(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x200,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x44(%ebp),%eax
+movl   $0x800,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x838(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x301>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs4sizeEv>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x178>
-mov    -0x1c(%ebp),%edx
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x271>
 mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    0x16(%eax,%ecx,1),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs4sizeEv>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x139>
+mov    -0xc(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0xc(%ebp),%eax
 add    $0x1a,%eax
 movzbl (%eax),%eax
-movzbl %al,%esi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    0x12(%eax,%ecx,1),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-movzwl 0x10(%eax,%ecx,1),%eax
-movswl %ax,%ecx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,-0x84c(%ebp)
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    -0x84c(%ebp),%edx
-movzwl 0xe(%eax,%edx,1),%eax
+movzbl %al,%ebx
+mov    -0xc(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+add    $0x10,%eax
+movzwl (%eax),%eax
+movswl %ax,%edx
+mov    -0xc(%ebp),%eax
+add    $0xe,%eax
+movzwl (%eax),%eax
 cwtl
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %ecx,0xc(%esp)
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $",(now(),%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x844(%ebp),%eax
+lea    -0x838(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x225>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    0x16(%eax,%ecx,1),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x195>
+mov    -0xc(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0xc(%ebp),%eax
 add    $0x1a,%eax
 movzbl (%eax),%eax
-movzbl %al,%esi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    0x12(%eax,%ecx,1),%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-movzwl 0x10(%eax,%ecx,1),%eax
-movswl %ax,%ecx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,-0x850(%ebp)
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    -0x850(%ebp),%edx
-movzwl 0xe(%eax,%edx,1),%eax
+movzbl %al,%ebx
+mov    -0xc(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+add    $0x10,%eax
+movzwl (%eax),%eax
+movswl %ax,%edx
+mov    -0xc(%ebp),%eax
+add    $0xe,%eax
+movzwl (%eax),%eax
 cwtl
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %ecx,0xc(%esp)
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(now(),%d,%d,%d,%d,%d)",0x4(%esp)
-lea    -0x844(%ebp),%eax
+lea    -0x838(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 add    $0x800,%eax
 cmp    $0x6000,%eax
 seta   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2e8>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x258>
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s",0x8(%esp)
 movl   $0x4ec2,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ec2,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2d7>
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x247>
 movl   $0x1895,0x8(%esp)
+movl   $&_ZZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_StatisticE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"\nQueryCubeStatisticCreate db1 error!!\n",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x333>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSs5clearEv>
+subl   $0x1,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x26d>
+lea    -0x838(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSspLEPKc>
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0xb0>
+mov    -0x18(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    %eax,0xc(%esp)
+movl   $"inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s",0x8(%esp)
+movl   $0x4ec2,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ebx
+mov    -0x18(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4ec2,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x311>
+movl   $0x18a2,0x8(%esp)
 movl   $&_ZZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_StatisticE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"\nQueryCubeStatisticCreate db1 error!!\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSs5clearEv>
-subl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2fd>
-lea    -0x844(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSspLEPKc>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-setl   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0xae>
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    %eax,0xc(%esp)
-movl   $"inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s",0x8(%esp)
-movl   $0x4ec2,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ebx
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4ec2,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3a1>
-movl   $0x18a2,0x8(%esp)
-movl   $&_ZZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_StatisticE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"\nQueryCubeStatisticCreate db1 error!!\n",0x8(%esp)
-movl   $"./log/statistic",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x333>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x333>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
-add    $0x86c,%esp
+add    $0x850,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryCubeStatisticCreate(Packet_DBMW_Cube_Statistic*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic
          (CDBManager *this,Packet_DBMW_Cube_Statistic *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte bVar6;
  char local_848 [2048];
  string local_48 [4];
  CMyFileLog local_44 [8];
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
    uVar4 = 0;
  }
  else {
    local_24 = *(int *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_44,"QueryCubeStatisticCreate",0x1872);
    CMyFileLog::operator()(local_44,"./log/statistic",&DAT_081b484c,local_24);
    pcVar5 = local_848;
    for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    std::string::string(local_48);
    for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
                    /* try { // try from 0807f0f0 to 0807f3d5 has its CatchHandler @ 0807f3e4 */
      iVar3 = std::string::size(local_48);
      if (iVar3 == 0) {
        sprintf(local_848,"(now(),%d,%d,%d,%d,%d)",(int)*(short *)(param_1 + local_20 * 0xd + 0xe),
                (int)*(short *)(param_1 + local_20 * 0xd + 0x10),
                *(undefined4 *)(param_1 + local_20 * 0xd + 0x12),
                (uint)(byte)param_1[local_20 * 0xd + 0x1a],
                *(undefined4 *)(param_1 + local_20 * 0xd + 0x16));
      }
      else {
        sprintf(local_848,",(now(),%d,%d,%d,%d,%d)",(int)*(short *)(param_1 + local_20 * 0xd + 0xe),
                (int)*(short *)(param_1 + local_20 * 0xd + 0x10),
                *(undefined4 *)(param_1 + local_20 * 0xd + 0x12),
                (uint)(byte)param_1[local_20 * 0xd + 0x1a],
                *(undefined4 *)(param_1 + local_20 * 0xd + 0x16));
      }
      iVar3 = std::string::length(local_48);
      if (iVar3 + 0x800U < 0x6001) {
        std::string::operator+=(local_48,local_848);
      }
      else {
        pcVar1 = *(code **)(*local_28 + 0x1c);
        uVar4 = std::string::c_str(local_48);
        (*pcVar1)(local_28,0x4ec2,
                  "inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s"
                  ,uVar4);
        cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4ec2);
        if (cVar2 != '\x01') {
          CMyFileLog::CMyFileLog(local_3c,"QueryCubeStatisticCreate",0x1895);
          CMyFileLog::operator()
                    (local_3c,"./log/statistic","\nQueryCubeStatisticCreate db1 error!!\n");
          uVar4 = 0;
          goto LAB_0807f3ff;
        }
        std::string::clear(local_48);
        local_20 = local_20 + -1;
      }
    }
    pcVar1 = *(code **)(*local_28 + 0x1c);
    uVar4 = std::string::c_str(local_48);
    (*pcVar1)(local_28,0x4ec2,
              "inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s"
              ,uVar4);
    cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4ec2);
    if (cVar2 == '\x01') {
      uVar4 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_34,"QueryCubeStatisticCreate",0x18a2);
      CMyFileLog::operator()(local_34,"./log/statistic","\nQueryCubeStatisticCreate db1 error!!\n");
      uVar4 = 0;
    }
LAB_0807f3ff:
    std::string::~string(local_48);
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 5015 行）：

```cpp
char CDBManager::QueryCubeStatisticCreate(Packet_DBMW_Cube_Statistic* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = *(int*)((char*)packet + 0xa);
    CMyFileLog slog("QueryCubeStatisticCreate", 0x1872);
    slog("./log/statistic",
         "CDBManager::QueryCubeStatisticCreate : (%d) °³ ÆÐÅ¶ ¼ö½Å\n", count);
    char buf[0x800];
    memset(buf, 0, 0x800);
    std::string str;
    for (int i = 0; i < count; i++)
    {
        char* e = (char*)packet + i * 0xd;
        if (str.size() != 0)
        {
            sprintf(buf, ",(now(),%d,%d,%d,%d,%d)", *(short*)(e + 0xe),
                    *(short*)(e + 0x10), *(int*)(e + 0x12),
                    *(unsigned char*)(e + 0x1a), *(int*)(e + 0x16));
        }
        else
        {
            sprintf(buf, "(now(),%d,%d,%d,%d,%d)", *(short*)(e + 0xe),
                    *(short*)(e + 0x10), *(int*)(e + 0x12),
                    *(unsigned char*)(e + 0x1a), *(int*)(e + 0x16));
        }
        if (str.length() + 0x800 > 0x6000)
        {
            h->set_query(0x4ec2,
                         "inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s",
                         str.c_str());
            if (!h->exec(0x4ec2))
            {
                CMyFileLog log(__FUNCTION__, 0x1895);
                log("./log/statistic",
                    "\nQueryCubeStatisticCreate db1 error!!\n");
                return 0;
            }
            str.clear();
            i--;
        }
        else
        {
            str += buf;
        }
    }
    h->set_query(0x4ec2,
                 "inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s",
                 str.c_str());
    if (!h->exec(0x4ec2))
    {
        CMyFileLog log(__FUNCTION__, 0x18a2);
        log("./log/statistic", "\nQueryCubeStatisticCreate db1 error!!\n");
        return 0;
    }
    return 1;
}
```
