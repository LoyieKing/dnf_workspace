# _ZN10CDBManager19GuildMasterDelegateEijjjjPc

`CDBManager::GuildMasterDelegate(int, unsigned int, unsigned int, unsigned int, unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807956c` | `0x266` | `0x804d278` | `0x256` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,154 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x54,%esp
+sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    0x20(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x78>
+jne    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x6f>
 movl   $0x10b3,0x8(%esp)
 movl   $&_ZZN10CDBManager19GuildMasterDelegateEijjjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x1c(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildMasterDelegate server_group(%d), guild(%d), charac_no(%d)\n",0x8(%esp)
 movl   $"./log/TraceGuildErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x260>
+jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x250>
 mov    0xc(%ebp),%eax
 movzbl %al,%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x3,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager22ChangeGuildMemberGradeEhjhj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0xb4>
+sete   %al
+test   %al,%al
+je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0xad>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x260>
+jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x250>
 mov    0xc(%ebp),%eax
 movzbl %al,%eax
 mov    0x1c(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x1,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager22ChangeGuildMemberGradeEhjhj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0xf0>
+sete   %al
+test   %al,%al
+je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0xeb>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x260>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x250>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 movl   $0x0,0x4(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    0xc(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    0x20(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    0x1c(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",0x8(%esp)
 movl   $0x4e6a,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x1c1>
+je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x1ba>
+movl   $0x10da,0x8(%esp)
+movl   $&_ZZN10CDBManager19GuildMasterDelegateEijjjjPcE12__FUNCTION__,0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x0,0x4(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x10da,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x1c(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x18(%esp)
+mov    0x20(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0x1c(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::GuildMasterDelegate() set : upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x250>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4e6a,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x24b>
+movl   $0x10e7,0x8(%esp)
 movl   $&_ZZN10CDBManager19GuildMasterDelegateEijjjjPcE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    0x20(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0x1c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::GuildMasterDelegate() set : upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    0xc(%ebp),%edx
+mov    %edx,0x1c(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x18(%esp)
+mov    0x20(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0x1c(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::GuildMasterDelegate() exec : upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x260>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4e6a,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x25b>
-movl   $0x0,0x4(%esp)
-mov    0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x10e7,0x8(%esp)
-movl   $&_ZZN10CDBManager19GuildMasterDelegateEijjjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    0x20(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0x1c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::GuildMasterDelegate() exec : upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x260>
+jmp    <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc+0x250>
 mov    $0x1,%eax
-add    $0x54,%esp
+add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::GuildMasterDelegate(int, unsigned int, unsigned int, unsigned int, unsigned int,
   char*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager19GuildMasterDelegateEijjjjPc
          (CDBManager *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          char *param_6)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  undefined4 local_10;
  
  local_14 = *(int **)(this + 0x20);
  local_10 = *(undefined4 *)(this + 8);
  if (*param_6 == '\0') {
    CMyFileLog::CMyFileLog(local_30,"GuildMasterDelegate",0x10b3);
    CMyFileLog::operator()
              (local_30,"./log/TraceGuildErr",
               "CDBManager::GuildMasterDelegate server_group(%d), guild(%d), charac_no(%d)\n",
               param_1,param_2,param_5);
    uVar3 = 0;
  }
  else {
    cVar2 = ChangeGuildMemberGrade(this,(uchar)param_1,param_2,'\x03',param_3);
    if (cVar2 == '\x01') {
      cVar2 = ChangeGuildMemberGrade(this,(uchar)param_1,param_2,'\x01',param_5);
      if (cVar2 == '\x01') {
        pcVar1 = *(code **)(*local_14 + 0x1c);
        uVar3 = NumberToString(param_4,0);
        cVar2 = (*pcVar1)(local_14,0x4e6a,
                          "upDate guild_info set master_id=%s, master_no=%d, master_name=\'%s\' where guild_id = %d and server_id= %d"
                          ,uVar3,param_5,param_6,param_2,param_1);
        if (cVar2 == '\x01') {
          local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e6a);
          if (local_15 == '\x01') {
            uVar3 = 1;
          }
          else {
            uVar3 = NumberToString(param_4,0);
            CMyFileLog::CMyFileLog(local_20,"GuildMasterDelegate",0x10e7);
            CMyFileLog::operator()
                      (local_20,"./log/DBQueryErr",
                       "CDBManager::GuildMasterDelegate() exec : upDate guild_info set master_id=%s, master_no=%d, master_name=\'%s\' where guild_id = %d and server_id= %d"
                       ,uVar3,param_5,param_6,param_2,param_1);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = NumberToString(param_4,0);
          CMyFileLog::CMyFileLog(local_28,"GuildMasterDelegate",0x10da);
          CMyFileLog::operator()
                    (local_28,"./log/DBQueryErr",
                     "CDBManager::GuildMasterDelegate() set : upDate guild_info set master_id=%s, master_no=%d, master_name=\'%s\' where guild_id = %d and server_id= %d"
                     ,uVar3,param_5,param_6,param_2,param_1);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
