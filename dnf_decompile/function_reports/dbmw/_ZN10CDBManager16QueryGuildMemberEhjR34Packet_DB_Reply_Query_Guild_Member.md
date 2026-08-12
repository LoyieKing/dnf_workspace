# _ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member

`CDBManager::QueryGuildMember(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild_Member&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80717c2` | `0x21a` | `0x804f798` | `0x200` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,157 +1,153 @@
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
 mov    (%eax),%edx
 movzbl -0x1c(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect guild_id, memo, grade, member_point from guild_member where charac_no = %d and server_id = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e24,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x94>
+je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x96>
 movl   $0x180,0x8(%esp)
 movl   $&_ZZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::QueryGuildMember() Exception Break\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x218>
+jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1fe>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e24,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0xcd>
+je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0xca>
 mov    0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x218>
+jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1fe>
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
-je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0xfe>
+je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0xf6>
 mov    0x14(%ebp),%eax
-movb   $0x2,0xa(%eax)
+add    $0xa,%eax
+movb   $0x2,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x218>
+jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1fe>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0xb,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x141>
+je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x134>
 mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
+add    $0xa,%eax
+movb   $0x3,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x218>
+jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1fe>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x13,%eax
 movl   $0x15,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x18c>
+je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x17a>
 mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
+add    $0xa,%eax
+movb   $0x3,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x218>
+jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1fe>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1cc>
+je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1b5>
 mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
+add    $0xa,%eax
+movb   $0x3,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x218>
+jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1fe>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x29,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x20c>
+je     <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1f0>
 mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
+add    $0xa,%eax
+movb   $0x3,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x218>
+jmp    <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member+0x1fe>
 mov    0x14(%ebp),%eax
-movb   $0x1,0xa(%eax)
+add    $0xa,%eax
+movb   $0x1,(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildMember(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild_Member&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member
          (CDBManager *this,uchar param_1,uint param_2,Packet_DB_Reply_Query_Guild_Member *param_3)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e24,
                     "seLect guild_id, memo, grade, member_point from guild_member where charac_no = %d and server_id = %d and member_flag = 1"
                     ,param_2,param_1);
  if (cVar1 == '\x01') {
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e24);
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x24))(local_10);
      if (local_11 == '\x01') {
        local_11 = (**(code **)(*local_10 + 0x38))(local_10,0,param_3 + 0xb);
        if (local_11 == '\x01') {
          local_11 = (**(code **)(*local_10 + 0x2c))(local_10,1,param_3 + 0x13,0x15);
          if (local_11 == '\x01') {
            local_11 = (**(code **)(*local_10 + 0x58))(local_10,2,param_3 + 0x28);
            if (local_11 == '\x01') {
              cVar1 = (**(code **)(*local_10 + 0x38))(local_10,3,param_3 + 0x29);
              if (cVar1 == '\x01') {
                param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x1;
                uVar2 = 1;
              }
              else {
                param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x3;
                uVar2 = 0;
              }
            }
            else {
              param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x3;
              uVar2 = 0;
            }
          }
          else {
            param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x3;
            uVar2 = 0;
          }
        }
        else {
          param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x3;
          uVar2 = 0;
        }
      }
      else {
        param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x2;
        uVar2 = 0;
      }
    }
    else {
      param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x0;
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"QueryGuildMember",0x180);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr","CDBManager::QueryGuildMember() Exception Break\n");
    param_3[10] = (Packet_DB_Reply_Query_Guild_Member)0x0;
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
