# _ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh

`CDBManager::SaveGuildMember(unsigned char, unsigned int, STGuildMemerDBInfo&, unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8072004` | `0x219` | `0x804e8a0` | `0x222` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,142 +1,146 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x60,%esp
 mov    0xc(%ebp),%edx
 mov    0x1c(%ebp),%eax
-mov    %dl,-0x3c(%ebp)
-mov    %al,-0x40(%ebp)
+mov    %dl,-0x2c(%ebp)
+mov    %al,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-cmpb   $0x2,-0x40(%ebp)
-ja     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0xe1>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpb   $0x2,-0x30(%ebp)
+ja     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0xe0>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-movzbl -0x3c(%ebp),%edx
+movzbl -0x2c(%ebp),%edx
 mov    0x14(%ebp),%eax
-mov    0x16(%eax),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 mov    0x18(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    %edx,0x14(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_member set member_point=%d, last_play_time =  now() where guild_id = %d and server_id = %d and charac_no = %d",0x8(%esp)
 movl   $0x4e30,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-movzbl -0x3c(%ebp),%eax
-mov    %eax,-0x44(%ebp)
-mov    0x14(%ebp),%eax
-mov    0x16(%eax),%edi
-mov    0x14(%ebp),%eax
-movzbl 0x15(%eax),%eax
-movzbl %al,%esi
-movzbl -0x40(%ebp),%ebx
 movl   $0x2ba,0x8(%esp)
 movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x18(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x44(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl -0x2c(%ebp),%ebx
+mov    0x14(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%ecx
+mov    0x14(%ebp),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+movzbl -0x30(%ebp),%eax
+mov    0x18(%ebp),%esi
+mov    %esi,0x20(%esp)
+mov    %ebx,0x1c(%esp)
+mov    0x10(%ebp),%ebx
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveGuildMember(SAVE_LOGOUT flag(%d), grade(%d), guildMemPoint(%d), g(%d), s(%d), c(%d))",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1dd>
-cmpb   $0x3,-0x40(%ebp)
-jne    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x19f>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1ee>
+cmpb   $0x3,-0x30(%ebp)
+jne    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1b0>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
-movzbl -0x3c(%ebp),%ecx
+movzbl -0x2c(%ebp),%ecx
 mov    0x14(%ebp),%eax
-movzbl 0x15(%eax),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    0x14(%ebp),%eax
-mov    0x16(%eax),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 mov    0x18(%ebp),%ebx
 mov    %ebx,0x1c(%esp)
 mov    %ecx,0x18(%esp)
 mov    0x10(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_member set member_point=%d, grade=%d where guild_id = %d and server_id = %d and charac_no = %d",0x8(%esp)
 movl   $0x4e30,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-movzbl -0x3c(%ebp),%edi
-mov    0x14(%ebp),%eax
-movzbl 0x15(%eax),%eax
-movzbl %al,%esi
-movzbl -0x40(%ebp),%ebx
 movl   $0x2c5,0x8(%esp)
 movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x18(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    %edi,0x18(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::SaveGuildMember(GRADE_CHANGE flag(%d), grade(%d), g(%d), s(%d), c(%d))",0x8(%esp)
+movzbl -0x2c(%ebp),%ebx
+mov    0x14(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%ecx
+mov    0x14(%ebp),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+movzbl -0x30(%ebp),%eax
+mov    0x18(%ebp),%esi
+mov    %esi,0x20(%esp)
+mov    %ebx,0x1c(%esp)
+mov    0x10(%ebp),%ebx
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::SaveGuildMember(SAVE_LOGOUT flag(%d), grade(%d), guildMemPoint(%d), g(%d), s(%d), c(%d))",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1dd>
-movzbl -0x40(%ebp),%ebx
+jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1ee>
 movl   $0x2c9,0x8(%esp)
 movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movzbl -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveGuildMember ERR(save_flag err(%d))",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e30,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x20c>
+je     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x216>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x211>
+jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x21b>
 mov    $0x1,%eax
-add    $0x6c,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveGuildMember(unsigned char, unsigned int, STGuildMemerDBInfo&, unsigned int,
   unsigned char) */

bool __thiscall
CDBManager::_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh
          (CDBManager *this,uchar param_1,uint param_2,STGuildMemerDBInfo *param_3,uint param_4,
          uchar param_5)

{
  STGuildMemerDBInfo SVar1;
  undefined4 uVar2;
  char cVar3;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [12];
  int *local_20;
  
  local_20 = *(int **)(this + 0x20);
  if (param_5 < 3) {
    (**(code **)(*local_20 + 0x1c))
              (local_20,0x4e30,
               "upDate guild_member set member_point=%d, last_play_time =  now() where guild_id = %d and server_id = %d and charac_no = %d"
               ,*(undefined4 *)(param_3 + 0x16),param_2,param_1,param_4);
    uVar2 = *(undefined4 *)(param_3 + 0x16);
    SVar1 = param_3[0x15];
    CMyFileLog::CMyFileLog(local_3c,"SaveGuildMember",0x2ba);
    CMyFileLog::operator()
              (local_3c,"./log/GuildModify",
               "CDBManager::SaveGuildMember(SAVE_LOGOUT flag(%d), grade(%d), guildMemPoint(%d), g(%d), s(%d), c(%d))"
               ,(uint)param_5,(uint)(byte)SVar1,uVar2,param_2,(uint)param_1,param_4);
  }
  else if (param_5 == '\x03') {
    (**(code **)(*local_20 + 0x1c))
              (local_20,0x4e30,
               "upDate guild_member set member_point=%d, grade=%d where guild_id = %d and server_id = %d and charac_no = %d"
               ,*(undefined4 *)(param_3 + 0x16),param_3[0x15],param_2,param_1,param_4);
    SVar1 = param_3[0x15];
    CMyFileLog::CMyFileLog(local_34,"SaveGuildMember",0x2c5);
    CMyFileLog::operator()
              (local_34,"./log/GuildModify",
               "CDBManager::SaveGuildMember(GRADE_CHANGE flag(%d), grade(%d), g(%d), s(%d), c(%d))",
               3,(uint)(byte)SVar1,param_2,(uint)param_1,param_4);
  }
  else {
    CMyFileLog::CMyFileLog(local_2c,"SaveGuildMember",0x2c9);
    CMyFileLog::operator()
              (local_2c,"./log/GuildModify","CDBManager::SaveGuildMember ERR(save_flag err(%d))",
               (uint)param_5);
  }
  cVar3 = (**(code **)(*local_20 + 0x20))(local_20,0x4e30);
  return cVar3 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
