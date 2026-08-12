# _ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_

`CDBManager::QueryGuildMemberGradeByName(unsigned char, unsigned int, char*, unsigned char&, unsigned int&, unsigned int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8077808` | `0x199` | `0x8063fa2` | `0x176` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,121 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 movzbl -0x1c(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no, grade, m_id from guild_member where guild_id = %d and server_id = %d and charac_name =  '%s' and member_flag = 1",0x8(%esp)
 movl   $0x4e5a,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x94>
 movl   $0xddf,0x8(%esp)
 movl   $&_ZZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_E12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::ChangeUnconnectedGuildMemberGrade() Exception Break\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x197>
+jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x174>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e5a,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0xc6>
+je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0xbf>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x197>
+jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x174>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0xf0>
+je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0xe2>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x197>
+jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x174>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x126>
+je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x111>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x197>
+jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x174>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x15c>
+je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x140>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x197>
+jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x174>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
-add    $0x38,%eax
+add    $0x58,%eax
 mov    (%eax),%edx
 mov    0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x192>
+je     <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x16f>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x197>
+jmp    <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_+0x174>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildMemberGradeByName(unsigned char, unsigned int, char*, unsigned char&,
   unsigned int&, unsigned int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_
          (CDBManager *this,uchar param_1,uint param_2,char *param_3,uchar *param_4,uint *param_5,
          uint *param_6)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e5a,
                     "seLect charac_no, grade, m_id from guild_member where guild_id = %d and server_id = %d and charac_name =  \'%s\' and member_flag = 1"
                     ,param_2,param_1,param_3);
  if (cVar1 == '\x01') {
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e5a);
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x24))(local_10);
      if (local_11 == '\x01') {
        local_11 = (**(code **)(*local_10 + 0x38))(local_10,0,param_5);
        if (local_11 == '\x01') {
          local_11 = (**(code **)(*local_10 + 0x58))(local_10,1,param_4);
          if (local_11 == '\x01') {
            cVar1 = (**(code **)(*local_10 + 0x38))(local_10,2,param_6);
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"QueryGuildMemberGradeByName",0xddf);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr",
               "CDBManager::ChangeUnconnectedGuildMemberGrade() Exception Break\n");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
