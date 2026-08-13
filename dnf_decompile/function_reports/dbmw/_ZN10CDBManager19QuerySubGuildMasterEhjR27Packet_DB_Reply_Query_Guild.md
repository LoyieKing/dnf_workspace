# _ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild

`CDBManager::QuerySubGuildMaster(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8077654` | `0x1b3` | `0x8062a78` | `0x1a0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,127 +1,125 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    0x14(%ebp),%eax
 add    $0x13,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x2c(%ebp),%eax
 movl   $0x5,0x18(%esp)
 movl   $0x2,0x14(%esp)
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no from guild_member where guild_id = %d and server_id = %d and grade =  %d and member_flag = 1 limit %d",0x8(%esp)
 movl   $0x4e58,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xb6>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xb8>
 movl   $0xd9d,0x8(%esp)
 movl   $&_ZZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_GuildE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::QueryGuildMember() Exception Break\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x19e>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e58,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xef>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xec>
 mov    0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x19e>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%edx
+mov    %eax,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
+lea    0x2d(%eax),%edx
 mov    -0x10(%ebp),%eax
-mov    %dl,0x2d(%eax)
+mov    %al,(%edx)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x18d>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x183>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x140>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x13e>
 mov    0x14(%ebp),%eax
-movb   $0x1,0xa(%eax)
+add    $0xa,%eax
+movb   $0x1,(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x19e>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-add    $0x8,%eax
 shl    $0x2,%eax
-add    -0x10(%ebp),%eax
-add    $0xe,%eax
+add    $0x2e,%eax
+add    -0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x189>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x17f>
 mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
+add    $0xa,%eax
+movb   $0x3,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x19e>
 addl   $0x1,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
-movzbl 0x2d(%eax),%eax
-movzbl %al,%eax
-cmp    -0xc(%ebp),%eax
-setg   %al
+mov    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
+setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x112>
+jne    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x115>
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

/* CDBManager::QuerySubGuildMaster(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild
          (CDBManager *this,uchar param_1,uint param_2,Packet_DB_Reply_Query_Guild *param_3)

{
  char cVar1;
  Packet_DB_Reply_Query_Guild PVar2;
  undefined4 uVar3;
  CMyFileLog local_28 [11];
  char local_1d;
  int *local_1c;
  undefined4 local_18;
  Packet_DB_Reply_Query_Guild *local_14;
  int local_10;
  
  local_1c = *(int **)(this + 0x20);
  local_18 = *(undefined4 *)(this + 8);
  local_14 = param_3 + 0x13;
  cVar1 = (**(code **)(*local_1c + 0x1c))
                    (local_1c,0x4e58,
                     "seLect charac_no from guild_member where guild_id = %d and server_id = %d and grade =  %d and member_flag = 1 limit %d"
                     ,param_2,param_1,2,5);
  if (cVar1 == '\x01') {
    local_1d = (**(code **)(*local_1c + 0x20))(local_1c,0x4e58);
    if (local_1d == '\x01') {
      PVar2 = (Packet_DB_Reply_Query_Guild)(**(code **)(*local_1c + 0x6c))(local_1c);
      local_14[0x2d] = PVar2;
      for (local_10 = 0; local_10 < (int)(uint)(byte)local_14[0x2d]; local_10 = local_10 + 1) {
        local_1d = (**(code **)(*local_1c + 0x24))(local_1c);
        if (local_1d != '\x01') {
          param_3[10] = (Packet_DB_Reply_Query_Guild)0x1;
          return 1;
        }
        cVar1 = (**(code **)(*local_1c + 0x38))(local_1c,0,local_14 + (local_10 + 8) * 4 + 0xe);
        if (cVar1 != '\x01') {
          param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
          return 0;
        }
        local_1d = '\x01';
      }
      param_3[10] = (Packet_DB_Reply_Query_Guild)0x1;
      uVar3 = 1;
    }
    else {
      param_3[10] = (Packet_DB_Reply_Query_Guild)0x0;
      uVar3 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_28,"QuerySubGuildMaster",0xd9d);
    CMyFileLog::operator()
              (local_28,"./log/DBQueryErr","CDBManager::QueryGuildMember() Exception Break\n");
    param_3[10] = (Packet_DB_Reply_Query_Guild)0x0;
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
