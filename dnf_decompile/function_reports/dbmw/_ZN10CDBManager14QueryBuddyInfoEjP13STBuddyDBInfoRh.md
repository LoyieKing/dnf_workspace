# _ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh

`CDBManager::QueryBuddyInfo(unsigned int, STBuddyDBInfo*, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8076c82` | `0x2c1` | `0x8062f68` | `0x274` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,208 +1,184 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $0x20,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect b.charac_no, b.charac_name, b.lev, b.job, b.grow_type, b.sex from charac_friends a, charac_info b where b.charac_no = a.friend_no and a.charac_no = %d and b.delete_flag=0 limit %d",0x8(%esp)
 movl   $0x4e52,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x96>
 movl   $0xc24,0x8(%esp)
 movl   $&_ZZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRhE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x20,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"select_b_charac_info_from_charac_friends_a_charac_friends_b_where_characno_limit where charac_no = %d and friend_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e52,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xc8>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xc1>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%edx
 mov    0x14(%ebp),%eax
 mov    %dl,(%eax)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2a0>
-mov    -0x10(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x256>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2b9>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x109>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
 mov    -0x10(%ebp),%eax
+imul   $0x27,%eax,%eax
+add    0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
 add    $0x22,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x153>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x14a>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
 movl   $0x1e,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x19a>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x184>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
 add    $0x1e,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x1dc>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x1b9>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x21e>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x1ee>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
 add    $0x21,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x25d>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x220>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
 add    $0x26,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x29c>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x252>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-addl   $0x1,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+addl   $0x1,-0x10(%ebp)
 mov    0x14(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
-cmp    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xed>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2ba>
-nop
+jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xe6>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryBuddyInfo(unsigned int, STBuddyDBInfo*, unsigned char&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh
          (CDBManager *this,uint param_1,STBuddyDBInfo *param_2,uchar *param_3)

{
  char cVar1;
  uchar uVar2;
  undefined4 uVar3;
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 8);
  cVar1 = (**(code **)(*local_14 + 0x1c))
                    (local_14,0x4e52,
                     "seLect b.charac_no, b.charac_name, b.lev, b.job, b.grow_type, b.sex from charac_friends a, charac_info b where b.charac_no = a.friend_no and a.charac_no = %d and b.delete_flag=0 limit %d"
                     ,param_1,0x20);
  if (cVar1 == '\x01') {
    local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e52);
    if (local_15 == '\x01') {
      uVar2 = (**(code **)(*local_14 + 0x6c))(local_14);
      *param_3 = uVar2;
      local_10 = 0;
      while ((local_10 < (int)(uint)*param_3 &&
             (local_15 = (**(code **)(*local_14 + 0x24))(local_14), local_15 == '\x01'))) {
        local_15 = (**(code **)(*local_14 + 0x38))(local_14,0,param_2 + local_10 * 0x27 + 0x22);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x2c))(local_14,1,param_2 + local_10 * 0x27,0x1e);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x40))(local_14,2,param_2 + local_10 * 0x27 + 0x1e);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x50))(local_14,3,param_2 + local_10 * 0x27 + 0x20);
        if (local_15 != '\x01') {
          return 0;
        }
        local_15 = (**(code **)(*local_14 + 0x50))(local_14,4,param_2 + local_10 * 0x27 + 0x21);
        if (local_15 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_14 + 0x50))(local_14,5,param_2 + local_10 * 0x27 + 0x26);
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        local_15 = '\x01';
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_20,"QueryBuddyInfo",0xc24);
    CMyFileLog::operator()
              (local_20,"./log/DBQueryErr",
               "select_b_charac_info_from_charac_friends_a_charac_friends_b_where_characno_limit where charac_no = %d and friend_no = %d"
               ,param_1,0x20);
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
