# _ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History

`CDBManager::OnInsertGuildCargoHistory(Packet_DB_Insert_Guild_Cargo_History*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80812aa` | `0x2fb` | `0x804e190` | `0x2dc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,207 +1,195 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1cc,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    0xc(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
-lea    -0x127(%ebp),%edx
-mov    $0xff,%ebx
-mov    $0x0,%eax
-mov    %edx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x36>
-mov    %al,(%edx)
-add    $0x1,%edx
-sub    $0x1,%ebx
-mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x48>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
-rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x62>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x70>
-mov    %al,(%edx)
-add    $0x1,%edx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%ecx
+movl   $0x100,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x128(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+mov    -0x1c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%ecx
 mov    $0xcccccccd,%edx
 mov    %ecx,%eax
 mul    %edx
 shr    $0x3,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,0x8(%esp)
 movl   $"guild_cargo_history_%d",0x4(%esp)
-lea    -0x127(%ebp),%eax
+lea    -0x128(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x15c(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 movzbl %al,%eax
 mov    %eax,-0x158(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x28,%eax
 mov    (%eax),%edx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x4e,%eax
 movl   $0xe,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x154(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x42(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x42,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x150(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x41(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x41,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x14c(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x36(%eax),%eax
-shr    $0x5,%al
-movzbl %al,%eax
-mov    %eax,-0x148(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x36(%eax),%eax
-and    $0x1f,%eax
-movzbl %al,%eax
-mov    %eax,-0x144(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x3d(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x36,%eax
+mov    (%eax),%eax
+shr    $0x5,%eax
+mov    %eax,%edx
+and    $0x1,%edx
+mov    %edx,-0x148(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0x36,%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+and    $0x1f,%edx
+mov    %edx,-0x144(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0x3d,%eax
+mov    (%eax),%eax
 mov    %eax,-0x140(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x3b(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x3b,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x13c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x37(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x37,%eax
+mov    (%eax),%eax
 mov    %eax,-0x138(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x32(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x32,%eax
+mov    (%eax),%eax
 mov    %eax,-0x134(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x31(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x31,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x130(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x28(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x28,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x12c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x2d(%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0x29(%eax),%ebx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x2d,%eax
+mov    (%eax),%edi
+mov    -0x1c(%ebp),%eax
+add    $0x29,%eax
+mov    (%eax),%ebx
+mov    -0x1c(%ebp),%eax
 lea    0x13(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%ecx
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,-0x16c(%ebp)
 mov    -0x158(%ebp),%eax
 mov    %eax,0x54(%esp)
 mov    -0x154(%ebp),%eax
 mov    %eax,0x50(%esp)
 mov    -0x150(%ebp),%eax
 mov    %eax,0x4c(%esp)
 mov    -0x14c(%ebp),%eax
 mov    %eax,0x48(%esp)
 mov    -0x148(%ebp),%eax
 mov    %eax,0x44(%esp)
 mov    -0x144(%ebp),%eax
 mov    %eax,0x40(%esp)
 mov    -0x140(%ebp),%eax
 mov    %eax,0x3c(%esp)
 mov    -0x13c(%ebp),%eax
 mov    %eax,0x38(%esp)
 mov    -0x138(%ebp),%eax
 mov    %eax,0x34(%esp)
 mov    -0x134(%ebp),%eax
 mov    %eax,0x30(%esp)
 mov    -0x130(%ebp),%eax
 mov    %eax,0x2c(%esp)
 mov    -0x12c(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    %edi,0x24(%esp)
 mov    %ebx,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ecx,0x18(%esp)
 mov    %edx,0x14(%esp)
-mov    -0x16c(%ebp),%edi
-mov    %edi,0x10(%esp)
-lea    -0x127(%ebp),%eax
+mov    -0x16c(%ebp),%edx
+mov    %edx,0x10(%esp)
+lea    -0x128(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into %s(occ_time,guild_id,server_id,charac_no,charac_name,slot_no,moveto_slot_no,behavior,seal_flag,item_id,add_info,endurance,extend_info,upgrade,seal_cnt,amplify_option,amplify_value,random_option,separate) values(unix_timestamp(now()),%d,%d,%d,'%s',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,'%s',%d)",0x8(%esp)
 movl   $0x4ed9,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x15c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ed9,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2eb>
+je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2cc>
 movl   $0x1bd3,0x8(%esp)
 movl   $&_ZZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_HistoryE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnInsertGuildCargoHistory Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2f0>
+jmp    <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2d1>
 mov    $0x1,%eax
 add    $0x1cc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnInsertGuildCargoHistory(Packet_DB_Insert_Guild_Cargo_History*) */

bool __thiscall
CDBManager::_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History
          (CDBManager *this,Packet_DB_Insert_Guild_Cargo_History *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  char local_12b;
  char local_12a [254];
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  
  local_20 = *(int **)(this + 0x20);
  pcVar5 = &local_12b;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_12b = '\0';
    pcVar5 = local_12a;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  sprintf(&local_12b,"guild_cargo_history_%d",*(uint *)(param_1 + 0xb) % 10);
  pcVar1 = *(code **)(*local_20 + 0x1c);
  uVar2 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x5c));
  uVar3 = (**(code **)(*local_20 + 0x28))(local_20,0,param_1 + 0x4e,0xe);
  (*pcVar1)(local_20,0x4ed9,
            "inSert into %s(occ_time,guild_id,server_id,charac_no,charac_name,slot_no,moveto_slot_no,behavior,seal_flag,item_id,add_info,endurance,extend_info,upgrade,seal_cnt,amplify_option,amplify_value,random_option,separate) values(unix_timestamp(now()),%d,%d,%d,\'%s\',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\'%s\',%d)"
            ,&local_12b,*(undefined4 *)(param_1 + 0xb),param_1[10],*(undefined4 *)(param_1 + 0xf),
            param_1 + 0x13,*(undefined4 *)(param_1 + 0x29),*(undefined4 *)(param_1 + 0x2d),
            (int)(char)param_1[0x28],param_1[0x31],*(undefined4 *)(param_1 + 0x32),
            *(undefined4 *)(param_1 + 0x37),*(undefined2 *)(param_1 + 0x3b),
            *(undefined4 *)(param_1 + 0x3d),(byte)param_1[0x36] & 0x1f,(byte)param_1[0x36] >> 5,
            param_1[0x41],*(undefined2 *)(param_1 + 0x42),uVar3,uVar2);
  local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4ed9);
  bVar7 = local_21 == '\x01';
  if (!bVar7) {
    CMyFileLog::CMyFileLog(local_2c,"OnInsertGuildCargoHistory",0x1bd3);
    CMyFileLog::operator()(local_2c,"./log/DBQueryErr","OnInsertGuildCargoHistory Query Error");
  }
  return bVar7;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
