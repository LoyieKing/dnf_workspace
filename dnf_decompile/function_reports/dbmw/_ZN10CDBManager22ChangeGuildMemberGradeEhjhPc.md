# _ZN10CDBManager22ChangeGuildMemberGradeEhjhPc

`CDBManager::ChangeGuildMemberGrade(unsigned char, unsigned int, unsigned char, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x80779a2` | `0x12c` | `0x8064118` | `0x12c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,81 +1,81 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x54,%esp
 mov    0xc(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %dl,-0x2c(%ebp)
 mov    %al,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 movzbl -0x2c(%ebp),%edx
 movzbl -0x30(%ebp),%eax
 mov    0x18(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    %edx,0x14(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_member set grade = %d where guild_id = %d and server_id = %d and  charac_name = '%s' and member_flag = 1",0x8(%esp)
 movl   $0x4e5b,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager22ChangeGuildMemberGradeEhjhPc+0xae>
 movl   $0xe1f,0x8(%esp)
 movl   $&_ZZN10CDBManager22ChangeGuildMemberGradeEhjhPcE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::ChangeGuildMemberGrade() SetQuery Break,guild_id=%d,charac_name=%s",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager22ChangeGuildMemberGradeEhjhPc+0x126>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e5b,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager22ChangeGuildMemberGradeEhjhPc+0x121>
 movl   $0xe26,0x8(%esp)
 movl   $&_ZZN10CDBManager22ChangeGuildMemberGradeEhjhPcE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::ChangeGuildMemberGrade() Exce Break,guild_id=%d,charac_name=%s",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager22ChangeGuildMemberGradeEhjhPc+0x126>
 mov    $0x1,%eax
 add    $0x54,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::ChangeGuildMemberGrade(unsigned char, unsigned int, unsigned char, char*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager22ChangeGuildMemberGradeEhjhPc
          (CDBManager *this,uchar param_1,uint param_2,uchar param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e5b,
                     "upDate guild_member set grade = %d where guild_id = %d and server_id = %d and  charac_name = \'%s\' and member_flag = 1"
                     ,param_3,param_2,param_1,param_4);
  if (cVar1 == '\x01') {
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e5b);
    if (local_11 == '\x01') {
      uVar2 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_1c,"ChangeGuildMemberGrade",0xe26);
      CMyFileLog::operator()
                (local_1c,"./log/DBQueryErr",
                 "CDBManager::ChangeGuildMemberGrade() Exce Break,guild_id=%d,charac_name=%s",
                 param_2,param_4);
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_24,"ChangeGuildMemberGrade",0xe1f);
    CMyFileLog::operator()
              (local_24,"./log/DBQueryErr",
               "CDBManager::ChangeGuildMemberGrade() SetQuery Break,guild_id=%d,charac_name=%s",
               param_2,param_4);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
