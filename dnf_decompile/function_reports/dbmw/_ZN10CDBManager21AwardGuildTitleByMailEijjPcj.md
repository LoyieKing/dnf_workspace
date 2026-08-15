# _ZN10CDBManager21AwardGuildTitleByMailEijjPcj

`CDBManager::AwardGuildTitleByMail(int, unsigned int, unsigned int, char*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80749bc` | `0x2f6` | `0x8059058` | `0x2f5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,198 +1,196 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x84,%esp
+sub    $0x88,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e39,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0xa1>
+je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0xa0>
 movl   $0x82b,0x8(%esp)
 movl   $&_ZZN10CDBManager21AwardGuildTitleByMailEijjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::AwardGuildTitleByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2ed>
+jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2f3>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e39,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x25(%ebp)
 movzbl -0x25(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0xd3>
+je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0xd2>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2ed>
+jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2f3>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x1c(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x40(%ebp)
-lea    -0x40(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x18(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x18(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    -0x18(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    -0x18(%ebp),%eax
 movl   $0x0,(%eax)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
 mov    %eax,-0x14(%ebp)
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2d7>
+jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2dd>
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x25(%ebp)
 movzbl -0x25(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x16b>
+je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x16a>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2ed>
+jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2f3>
+movl   $0x0,-0x38(%ebp)
 mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %al,-0x25(%ebp)
 movzbl -0x25(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x1a4>
+je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x1aa>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2ed>
+jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2f3>
 movl   $0x3e8,(%esp)
 call   <T> <_ZN7DNFFLib12get_rand_intEi>
 mov    %eax,-0xc(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
-mov    -0x3c(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    0x18(%ebp),%edx
 mov    %edx,0x30(%esp)
 movl   $0x0,0x2c(%esp)
 movl   $0x0,0x28(%esp)
 mov    0x1c(%ebp),%edx
 mov    %edx,0x24(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x20(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0x1c(%esp)
 movl   $0x0,0x18(%esp)
 mov    %eax,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')",0x8(%esp)
 movl   $0x4e3a,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2ab>
-mov    -0x3c(%ebp),%ebx
+je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2b1>
 movl   $0x87d,0x8(%esp)
 movl   $&_ZZN10CDBManager21AwardGuildTitleByMailEijjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x18(%ebp),%eax
-mov    %eax,0x30(%esp)
+mov    -0x38(%ebp),%eax
+mov    0x18(%ebp),%edx
+mov    %edx,0x30(%esp)
 movl   $0x0,0x2c(%esp)
 movl   $0x0,0x28(%esp)
 movl   $0x0,0x24(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    0x14(%ebp),%eax
-mov    %eax,0x1c(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    0x14(%ebp),%edx
+mov    %edx,0x1c(%esp)
 movl   $0x0,0x18(%esp)
-mov    %ebx,0x14(%esp)
+mov    %eax,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::AwardGuildTitleByMail() Fatal Error Break : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e3a,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2d3>
+je     <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2d9>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2ed>
+jmp    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x2f3>
 addl   $0x1,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x141>
+jne    <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj+0x140>
 mov    $0x1,%eax
-add    $0x84,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::AwardGuildTitleByMail(int, unsigned int, unsigned int, char*, unsigned int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21AwardGuildTitleByMailEijjPcj
          (CDBManager *this,int param_1,uint param_2,uint param_3,char *param_4,uint param_5)

{
  char cVar1;
  undefined4 uVar2;
  time_t local_44;
  undefined4 local_40;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [11];
  char local_29;
  int *local_28;
  int *local_24;
  int local_20;
  tm *local_1c;
  time_t local_18;
  int local_14;
  undefined4 local_10;
  
  local_28 = *(int **)(this + 0x20);
  local_24 = *(int **)(this + 0xc);
  cVar1 = (**(code **)(*local_28 + 0x1c))
                    (local_28,0x4e39,
                     "seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1"
                     ,param_2,param_1);
  if (cVar1 == '\x01') {
    local_29 = (**(code **)(*local_28 + 0x20))(local_28,0x4e39);
    if (local_29 == '\x01') {
      local_20 = (**(code **)(*local_28 + 0x6c))(local_28);
      local_44 = time((time_t *)0x0);
      local_1c = localtime(&local_44);
      local_1c->tm_hour = local_1c->tm_hour + 1;
      local_1c->tm_min = 0;
      local_1c->tm_sec = 0;
      local_18 = mktime(local_1c);
      for (local_14 = 0; local_14 < local_20; local_14 = local_14 + 1) {
        local_29 = (**(code **)(*local_28 + 0x24))(local_28);
        if (local_29 != '\x01') {
          return 0;
        }
        local_29 = (**(code **)(*local_28 + 0x38))(local_28,0,&local_40);
        if (local_29 != '\x01') {
          return 0;
        }
        local_10 = DNFFLib::get_rand_int(1000);
        cVar1 = (**(code **)(*local_24 + 0x1c))
                          (local_24,0x4e3a,
                           "inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,\'%s\')"
                           ,local_18,0,local_40,0,param_3,local_10,param_5,0,0,param_4);
        uVar2 = local_40;
        if (cVar1 != '\x01') {
          CMyFileLog::CMyFileLog(local_34,"AwardGuildTitleByMail",0x87d);
          CMyFileLog::operator()
                    (local_34,"./log/DBQueryErr",
                     "CDBManager::AwardGuildTitleByMail() Fatal Error Break : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,\'%s\')\n"
                     ,local_18,0,uVar2,0,param_3,local_10,0,0,0,param_4);
        }
        cVar1 = (**(code **)(*local_24 + 0x20))(local_24,0x4e3a);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_3c,"AwardGuildTitleByMail",0x82b);
    CMyFileLog::operator()
              (local_3c,"./log/DBQueryErr",
               "CDBManager::AwardGuildTitleByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n"
               ,param_1,param_2);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 284 个文件*
