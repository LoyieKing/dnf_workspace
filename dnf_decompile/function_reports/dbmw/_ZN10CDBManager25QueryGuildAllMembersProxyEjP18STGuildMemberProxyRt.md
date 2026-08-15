# _ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt

`CDBManager::QueryGuildAllMembersProxy(unsigned int, STGuildMemberProxy*, unsigned short&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80719dc` | `0x3cb` | `0x8054642` | `0x37e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,293 +1,271 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $0x12c,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no, charac_name, job, lev, grow_type, sex, grade, unix_timestamp(last_play_time), memo from guild_member where guild_id = %d and member_flag = 1 limit %d",0x8(%esp)
 movl   $0x4e23,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x96>
 movl   $0x1d7,0x8(%esp)
 movl   $&_ZZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRtE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x12c,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildAllMembersProxy() seLect charac_no, charac_name, job, lev, grow_type, sex, grade, unix_timestamp(last_play_time) from guild_member where guild_id = %d and member_flag = 1 limit %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e23,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xc8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xc1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%edx
 mov    0x14(%ebp),%eax
 mov    %dx,(%eax)
 mov    0x14(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x12c,%ax
-jbe    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xf6>
+jbe    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xef>
 mov    0x14(%ebp),%eax
 movw   $0x12c,(%eax)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3ad>
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x360>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x12c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x11e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x16f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x15a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x4,%eax
 movl   $0x1d,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x1bd>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x1a1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x22,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x203>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x1e0>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x249>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x21f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x23,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x28f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x25e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x26,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x2d5>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x29d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x27,%eax
 mov    %eax,0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x31b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x2dc>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x35e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x318>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    0x10(%ebp),%eax
 add    $0x2c,%eax
 movl   $0x15,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3a9>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x35c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
 addl   $0x1,-0xc(%ebp)
 mov    0x14(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x102>
+jne    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xfb>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildAllMembersProxy(unsigned int, STGuildMemberProxy*, unsigned short&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt
          (CDBManager *this,uint param_1,STGuildMemberProxy *param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_14 + 0x1c))
                    (local_14,0x4e23,
                     "seLect charac_no, charac_name, job, lev, grow_type, sex, grade, unix_timestamp(last_play_time), memo from guild_member where guild_id = %d and member_flag = 1 limit %d"
                     ,param_1,300);
  if (cVar1 == '\x01') {
    local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e23);
    if (local_15 == '\x01') {
      uVar2 = (**(code **)(*local_14 + 0x6c))(local_14);
      *param_3 = uVar2;
      if (300 < *param_3) {
        *param_3 = 300;
      }
      for (local_10 = 0; local_10 < (int)(uint)*param_3; local_10 = local_10 + 1) {
        local_15 = (**(code **)(*local_14 + 0x24))(local_14);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x38))(local_14,0,param_2 + local_10 * 0x41);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x2c))(local_14,1,param_2 + local_10 * 0x41 + 4,0x1d);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x50))(local_14,2,param_2 + local_10 * 0x41 + 0x22);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x40))(local_14,3,param_2 + local_10 * 0x41 + 0x24);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x50))(local_14,4,param_2 + local_10 * 0x41 + 0x23);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x50))(local_14,5,param_2 + local_10 * 0x41 + 0x26);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x58))(local_14,6,param_2 + local_10 * 0x41 + 0x27);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x38))(local_14,7,param_2 + local_10 * 0x41 + 0x28);
        if (local_15 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x2c))(local_14,8,param_2 + local_10 * 0x41 + 0x2c,0x15);
        if (cVar1 != '\x01') {
          return 0;
        }
        local_15 = '\x01';
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_20,"QueryGuildAllMembersProxy",0x1d7);
    CMyFileLog::operator()
              (local_20,"./log/DBQueryErr",
               "CDBManager::QueryGuildAllMembersProxy() seLect charac_no, charac_name, job, lev, grow_type, sex, grade, unix_timestamp(last_play_time) from guild_member where guild_id = %d and member_flag = 1 limit %d"
               ,param_1,300);
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 284 个文件*
