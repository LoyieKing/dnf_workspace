# _ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo

`CDBManager::OnWriteGuildBoard(Packet_DB_Load_Request_Guild_Board_Write*, STGuildBoardDBInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8084a8a` | `0x307` | `0x804d7ba` | `0x311` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,211 +1,221 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    0xc(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x3c>
-mov    0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x44>
+mov    -0x1c(%ebp),%eax
 add    $0x9e,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x44(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x9c(%eax),%eax
-movsbl %al,%ebx
-mov    0xc(%ebp),%eax
-movzbl 0x9b(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x9c,%eax
+movzbl (%eax),%eax
+movsbl %al,%esi
+mov    -0x1c(%ebp),%eax
+add    $0x9b,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x40(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x28,%eax
 mov    (%eax),%edx
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x17,%eax
 movl   $0x78,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%esi
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,%ebx
+mov    -0x1c(%ebp),%eax
 add    $0x9e,%eax
 mov    %eax,-0x3c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x13(%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x13,%eax
+mov    (%eax),%edi
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%edx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %ebx,0x24(%esp)
+mov    -0x1c(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %esi,0x24(%esp)
 mov    -0x40(%ebp),%ecx
 mov    %ecx,0x20(%esp)
-mov    %esi,0x1c(%esp)
+mov    %ebx,0x1c(%esp)
 mov    -0x3c(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_memo set guild_id=%u, m_id=%s, charac_no=%u, charac_name='%s', memo='%s', create_time=now(), job=%d, grow_type=%d",0x8(%esp)
 movl   $0x4f08,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x44(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f08,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x166>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x16f>
 movl   $0x22fc,0x8(%esp)
+movl   $&_ZZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"OnWriteGuildBoard Query Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x309>
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%edx
+movl   $"seLect no, unix_timestamp(create_time) from guild_memo where no=LAST_INSERT_ID()",0x8(%esp)
+movl   $0x4f07,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f07,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x1f2>
+movl   $0x2306,0x8(%esp)
 movl   $&_ZZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnWriteGuildBoard Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edx
-movl   $"seLect no, unix_timestamp(create_time) from guild_memo where no=LAST_INSERT_ID()",0x8(%esp)
-movl   $0x4f07,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f07,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x1f0>
-movl   $0x2306,0x8(%esp)
-movl   $&_ZZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"OnWriteGuildBoard Query Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x309>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x213>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x215>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x309>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x7c,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x248>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x24a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x309>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x27d>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x27f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x309>
+mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x296>
-mov    0x10(%ebp),%eax
-movl   $0x0,0x80(%eax)
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2a5>
-mov    0xc(%ebp),%eax
-mov    0x13(%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x80(%eax)
-mov    0xc(%ebp),%eax
-movzbl 0x9b(%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %dl,0x84(%eax)
-mov    0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x299>
+mov    0x10(%ebp),%eax
+sub    $0xffffff80,%eax
+movl   $0x0,(%eax)
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x304>
+mov    0x10(%ebp),%eax
+lea    0x80(%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x13,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    0x10(%ebp),%eax
+lea    0x84(%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0x9b,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x1c(%ebp),%eax
 lea    0x9e(%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x87,%eax
 movl   $0x1e,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0xc(%ebp),%eax
-lea    0x17(%eax),%edx
-mov    0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x17,%eax
 movl   $0x78,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    $0x1,%eax
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnWriteGuildBoard(Packet_DB_Load_Request_Guild_Board_Write*, STGuildBoardDBInfo*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo
          (CDBManager *this,Packet_DB_Load_Request_Guild_Board_Write *param_1,
          STGuildBoardDBInfo *param_2)

{
  Packet_DB_Load_Request_Guild_Board_Write PVar1;
  Packet_DB_Load_Request_Guild_Board_Write PVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  
  local_20 = *(int **)(this + 0x14);
  if (*(int *)(param_1 + 0xf) == 0) {
    memset(param_1 + 0x9e,0,0x1e);
  }
  pcVar3 = *(code **)(*local_20 + 0x1c);
  PVar1 = param_1[0x9c];
  PVar2 = param_1[0x9b];
  uVar5 = (**(code **)(*local_20 + 0x28))(local_20,0,param_1 + 0x17,0x78);
  uVar7 = *(undefined4 *)(param_1 + 0x13);
  uVar6 = NumberToString(*(uint *)(param_1 + 0xf),0);
  (*pcVar3)(local_20,0x4f08,
            "inSert into guild_memo set guild_id=%u, m_id=%s, charac_no=%u, charac_name=\'%s\', memo=\'%s\', create_time=now(), job=%d, grow_type=%d"
            ,*(undefined4 *)(param_1 + 0xb),uVar6,uVar7,param_1 + 0x9e,uVar5,(int)(char)PVar2,
            (int)(char)PVar1);
  local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4f08);
  if (local_21 == '\x01') {
    (**(code **)(*local_20 + 0x1c))
              (local_20,0x4f07,
               "seLect no, unix_timestamp(create_time) from guild_memo where no=LAST_INSERT_ID()");
    local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4f07);
    if (local_21 == '\x01') {
      cVar4 = (**(code **)(*local_20 + 0x24))(local_20);
      if (cVar4 == '\x01') {
        cVar4 = (**(code **)(*local_20 + 0x38))(local_20,0,param_2 + 0x7c);
        if (cVar4 == '\x01') {
          cVar4 = (**(code **)(*local_20 + 0x38))(local_20,1,param_2 + 0x78);
          if (cVar4 == '\x01') {
            if (*(int *)(param_1 + 0xf) == 0) {
              *(undefined4 *)(param_2 + 0x80) = 0;
            }
            else {
              *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x13);
            }
            *(Packet_DB_Load_Request_Guild_Board_Write *)(param_2 + 0x84) = param_1[0x9b];
            memcpy(param_2 + 0x87,param_1 + 0x9e,0x1e);
            memcpy(param_2,param_1 + 0x17,0x78);
            uVar7 = 1;
          }
          else {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_2c,"OnWriteGuildBoard",0x2306);
      CMyFileLog::operator()(local_2c,"./log/DBQueryErr","OnWriteGuildBoard Query Error");
      uVar7 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_34,"OnWriteGuildBoard",0x22fc);
    CMyFileLog::operator()(local_34,"./log/DBQueryErr","OnWriteGuildBoard Query Error");
    uVar7 = 0;
  }
  return uVar7;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
