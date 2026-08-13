# _ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi

`CDBManager::QueryGuildBooting(Packet_DB_Query_Reply_On_Guild_Booting&, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807a94a` | `0x1b3` | `0x8050d30` | `0x190` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,131 +1,121 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect a_side_point, b_side_point, winner_side from power_war where server_id = %d",0x8(%esp)
 movl   $0x4e80,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x86>
 movl   $0x1297,0x8(%esp)
 movl   $&_ZZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_BootingiE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildBooting() : seLect a_side_point, b_side_point, winner_side from power_war where server_id = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1b1>
+jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x18e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e80,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0xb8>
+je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0xb1>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1b1>
+jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x18e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1ac>
+je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x189>
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
-je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x101>
+je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0xf3>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1b1>
+jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x18e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x13a>
+je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x125>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1b1>
+jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x18e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x173>
+je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x157>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1b1>
+jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x18e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1ac>
+je     <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x189>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x1b1>
+jmp    <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi+0x18e>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildBooting(Packet_DB_Query_Reply_On_Guild_Booting&, int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi
          (CDBManager *this,Packet_DB_Query_Reply_On_Guild_Booting *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e80,
                     "seLect a_side_point, b_side_point, winner_side from power_war where server_id = %d"
                     ,param_2);
  if (cVar1 == '\x01') {
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e80);
    if (local_11 == '\x01') {
      iVar3 = (**(code **)(*local_10 + 0x6c))(local_10);
      if (iVar3 != 0) {
        local_11 = (**(code **)(*local_10 + 0x24))(local_10);
        if (local_11 != '\x01') {
          return 0;
        }
        local_11 = (**(code **)(*local_10 + 0x34))(local_10,0,param_1 + 10);
        if (local_11 != '\x01') {
          return 0;
        }
        local_11 = (**(code **)(*local_10 + 0x34))(local_10,1,param_1 + 0xe);
        if (local_11 != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_10 + 0x50))(local_10,2,param_1 + 0x12);
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
    CMyFileLog::CMyFileLog(local_1c,"QueryGuildBooting",0x1297);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr",
               "CDBManager::QueryGuildBooting() : seLect a_side_point, b_side_point, winner_side from power_war where server_id = %d"
               ,param_2);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
