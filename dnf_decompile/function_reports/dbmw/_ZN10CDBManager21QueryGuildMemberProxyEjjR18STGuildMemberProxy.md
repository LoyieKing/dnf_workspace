# _ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy

`CDBManager::QueryGuildMemberProxy(unsigned int, unsigned int, STGuildMemberProxy&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8071da8` | `0x25b` | `0x8054442` | `0x223` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,178 +1,162 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no, charac_name, job, lev, grow_type, sex from guild_member where guild_id = %d and charac_no = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e54,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x94>
 movl   $0x25d,0x8(%esp)
 movl   $&_ZZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxyE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildMemberProxy() seLect charac_no, charac_name, job, lev, grow_type, sex from guild_member where guild_id = %d and charac_no = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e54,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xc6>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xbf>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
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
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xf0>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xe2>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x129>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x114>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x4,%eax
 movl   $0x1d,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x16d>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x151>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
-add    $0x50,%eax
+add    $0x58,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x22,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1a9>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x186>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1e2>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1b8>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
-add    $0x50,%eax
+add    $0x58,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x23,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x21b>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1ea>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
-add    $0x50,%eax
+add    $0x58,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0x26,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x254>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x21c>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildMemberProxy(unsigned int, unsigned int, STGuildMemberProxy&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy
          (CDBManager *this,uint param_1,uint param_2,STGuildMemberProxy *param_3)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e54,
                     "seLect charac_no, charac_name, job, lev, grow_type, sex from guild_member where guild_id = %d and charac_no = %d and member_flag = 1"
                     ,param_1,param_2);
  if (cVar1 == '\x01') {
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e54);
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x24))(local_10);
      if (local_11 == '\x01') {
        local_11 = (**(code **)(*local_10 + 0x38))(local_10,0,param_3);
        if (local_11 == '\x01') {
          local_11 = (**(code **)(*local_10 + 0x2c))(local_10,1,param_3 + 4,0x1d);
          if (local_11 == '\x01') {
            local_11 = (**(code **)(*local_10 + 0x50))(local_10,2,param_3 + 0x22);
            if (local_11 == '\x01') {
              local_11 = (**(code **)(*local_10 + 0x40))(local_10,3,param_3 + 0x24);
              if (local_11 == '\x01') {
                local_11 = (**(code **)(*local_10 + 0x50))(local_10,4,param_3 + 0x23);
                if (local_11 == '\x01') {
                  cVar1 = (**(code **)(*local_10 + 0x50))(local_10,5,param_3 + 0x26);
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
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"QueryGuildMemberProxy",0x25d);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr",
               "CDBManager::QueryGuildMemberProxy() seLect charac_no, charac_name, job, lev, grow_type, sex from guild_member where guild_id = %d and charac_no = %d and member_flag = 1"
               ,param_1,param_2);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
