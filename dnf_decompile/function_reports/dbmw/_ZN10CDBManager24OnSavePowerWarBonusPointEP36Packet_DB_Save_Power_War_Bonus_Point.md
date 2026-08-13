# _ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point

`CDBManager::OnSavePowerWarBonusPoint(Packet_DB_Save_Power_War_Bonus_Point*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8083ae2` | `0x251` | `0x804ebd0` | `0x259` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,153 +1,157 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x7c,%esp
+sub    $0x70,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x1c(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x3c(%ebp)
-lea    -0x3c(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
-mov    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %edx,0x8(%eax)
-mov    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%eax
 movl   $0x0,0x4(%eax)
-mov    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%eax
 movl   $0x0,(%eax)
-mov    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x24(%ebp)
-lea    -0x35(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"세력전 포인트",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0xa1>
+jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0xa0>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x35(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-movl   $0x4df,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x206>
-mov    -0x2c(%ebp),%eax
+movl   $0x4df,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x20f>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
-mov    -0x1c(%ebp),%ecx
+mov    -0xc(%ebp),%ecx
 mov    0xc(%ebp),%edx
 mov    0x12(%edx,%ecx,8),%ecx
-mov    -0x1c(%ebp),%ebx
+mov    -0xc(%ebp),%ebx
 mov    0xc(%ebp),%edx
 mov    0xe(%edx,%ebx,8),%edx
 mov    %eax,0x30(%esp)
 movl   $0x0,0x2c(%esp)
 movl   $0x0,0x28(%esp)
 movl   $0x1,0x24(%esp)
 mov    %ecx,0x20(%esp)
-movl   $0x4df,0x1c(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x1c(%esp)
 movl   $0x0,0x18(%esp)
 mov    %edx,0x14(%esp)
 movl   $0x0,0x10(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name) values (from_unixtime(%d), %d, %d, %d, %d, %d, %d, %d, %d,'%s')",0x8(%esp)
 movl   $0x4ef7,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-mov    -0x2c(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x1e3>
+movl   $0x2172,0x8(%esp)
+movl   $&_ZZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_PointE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    -0xc(%ebp),%ecx
+mov    0xc(%ebp),%edx
+mov    0x12(%edx,%ecx,8),%ecx
+mov    -0xc(%ebp),%ebx
+mov    0xc(%ebp),%edx
+mov    0xe(%edx,%ebx,8),%edx
+mov    %eax,0x2c(%esp)
+movl   $0x0,0x28(%esp)
+movl   $0x0,0x24(%esp)
+movl   $0x1,0x20(%esp)
+mov    %ecx,0x1c(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x18(%esp)
+movl   $0x0,0x14(%esp)
+mov    %edx,0x10(%esp)
+movl   $0x0,0xc(%esp)
+movl   $"CDBManager::OnSavePowerWarBonusPoint() : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( now() ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x245>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ef7,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x202>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    %eax,%ebx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0x12(%eax,%edx,8),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax,%edx,8),%esi
-movl   $0x2172,0x8(%esp)
-movl   $&_ZZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_PointE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x2c(%esp)
-movl   $0x0,0x28(%esp)
-movl   $0x0,0x24(%esp)
-movl   $0x1,0x20(%esp)
-mov    %edi,0x1c(%esp)
-movl   $0x4df,0x18(%esp)
-movl   $0x0,0x14(%esp)
-mov    %esi,0x10(%esp)
-movl   $0x0,0xc(%esp)
-movl   $"CDBManager::OnSavePowerWarBonusPoint() : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( now() ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x20b>
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x23c>
-addl   $0x1,-0x1c(%ebp)
+jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x245>
+addl   $0x1,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
-cmp    -0x1c(%ebp),%eax
+cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0xbf>
+jne    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0xbe>
 mov    $0x1,%ebx
-jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x23c>
+jmp    <T> <_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point+0x245>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x40(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
-add    $0x7c,%esp
+add    $0x70,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSavePowerWarBonusPoint(Packet_DB_Save_Power_War_Bonus_Point*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24OnSavePowerWarBonusPointEP36Packet_DB_Save_Power_War_Bonus_Point
          (CDBManager *this,Packet_DB_Save_Power_War_Bonus_Point *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  string local_44 [4];
  time_t local_40;
  allocator local_39;
  CMyFileLog local_38 [8];
  int *local_30;
  tm *local_2c;
  time_t local_28;
  undefined4 local_24;
  int local_20;
  
  local_30 = *(int **)(this + 0xc);
  local_40 = time((time_t *)0x0);
  local_2c = localtime(&local_40);
  local_2c->tm_hour = local_2c->tm_hour + 1;
  local_2c->tm_min = 0;
  local_2c->tm_sec = 0;
  local_28 = mktime(local_2c);
  std::allocator<char>::allocator();
                    /* try { // try from 08083b61 to 08083b65 has its CatchHandler @ 08083b68 */
  std::string::string(local_44,&DAT_081b662c,&local_39);
  std::allocator<char>::~allocator((allocator<char> *)&local_39);
  local_24 = 0x4df;
  local_20 = 0;
  do {
    if (*(int *)(param_1 + 10) <= local_20) {
      uVar5 = 1;
LAB_08083d1e:
      std::string::~string(local_44);
      return uVar5;
    }
    pcVar1 = *(code **)(*local_30 + 0x1c);
                    /* try { // try from 08083bb1 to 08083cdc has its CatchHandler @ 08083d03 */
    uVar5 = std::string::c_str(local_44);
    (*pcVar1)(local_30,0x4ef7,
              "inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name) values (from_unixtime(%d), %d, %d, %d, %d, %d, %d, %d, %d,\'%s\')"
              ,local_28,0,*(undefined4 *)(param_1 + local_20 * 8 + 0xe),0,0x4df,
              *(undefined4 *)(param_1 + local_20 * 8 + 0x12),1,0,0,uVar5);
    cVar3 = (**(code **)(*local_30 + 0x20))(local_30,0x4ef7);
    if (cVar3 != '\x01') {
      uVar4 = std::string::c_str(local_44);
      uVar5 = *(undefined4 *)(param_1 + local_20 * 8 + 0x12);
      uVar2 = *(undefined4 *)(param_1 + local_20 * 8 + 0xe);
      CMyFileLog::CMyFileLog(local_38,"OnSavePowerWarBonusPoint",0x2172);
      CMyFileLog::operator()
                (local_38,"./log/DBQueryErr",
                 "CDBManager::OnSavePowerWarBonusPoint() : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( now() ), %d, %d, %d, %d, %d, %d, %d, %d,\'%s\')\n"
                 ,0,uVar2,0,0x4df,uVar5,1,0,0,uVar4);
      uVar5 = 0;
      goto LAB_08083d1e;
    }
    local_20 = local_20 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
