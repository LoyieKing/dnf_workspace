# _ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild

`CDBManager::QueryGuildNotiMessage(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807752e` | `0x125` | `0x8064590` | `0x110` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,79 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect notice from guild_notice where guild_id = %d",0x8(%esp)
 movl   $0x4e64,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x85>
 movl   $0xd65,0x8(%esp)
 movl   $&_ZZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_GuildE12__FUNCTION__,0x4(%esp)
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
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x123>
+jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x10e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e64,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0xb4>
+je     <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0xad>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x123>
+jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x10e>
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
-je     <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0xdb>
+je     <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0xcd>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x123>
+jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x10e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 add    $0xd0,%eax
 movl   $0x64,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x11e>
+je     <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x109>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x123>
+jmp    <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild+0x10e>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildNotiMessage(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild
          (CDBManager *this,uchar param_1,uint param_2,Packet_DB_Reply_Query_Guild *param_3)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e64,"seLect notice from guild_notice where guild_id = %d",param_2);
  if (cVar1 == '\x01') {
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e64);
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x24))(local_10);
      if (local_11 == '\x01') {
        cVar1 = (**(code **)(*local_10 + 0x2c))(local_10,0,param_3 + 0xd0,100);
        if (cVar1 == '\x01') {
          uVar2 = 1;
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
    CMyFileLog::CMyFileLog(local_1c,"QueryGuildNotiMessage",0xd65);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr","CDBManager::QueryGuildMember() Exception Break\n");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
