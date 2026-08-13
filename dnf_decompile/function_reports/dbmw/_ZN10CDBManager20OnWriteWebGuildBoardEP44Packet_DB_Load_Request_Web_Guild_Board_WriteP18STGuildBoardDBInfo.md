# _ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo

`CDBManager::OnWriteWebGuildBoard(Packet_DB_Load_Request_Web_Guild_Board_Write*, STGuildBoardDBInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8084d92` | `0x213` | `0x804dac8` | `0x214` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,155 +1,156 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0xc(%ebp),%eax
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect no, charac_no, charac_name, memo, unix_timestamp(create_time), job from guild_memo where no=%u",0x8(%esp)
 movl   $0x4f07,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f07,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0xa3>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0xa4>
 movl   $0x2329,0x8(%esp)
 movl   $&_ZZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnWriteWebGuildBoard Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0xc6>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0xc7>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x7c,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0xfb>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0xfc>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 sub    $0xffffff80,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x130>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x131>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x87,%eax
 movl   $0x1e,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x16f>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x170>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 movl   $0x78,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x1a6>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x1a7>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x1d8>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x1d9>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x20c>
+je     <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x20d>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x211>
+jmp    <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo+0x212>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnWriteWebGuildBoard(Packet_DB_Load_Request_Web_Guild_Board_Write*,
   STGuildBoardDBInfo*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo
          (CDBManager *this,Packet_DB_Load_Request_Web_Guild_Board_Write *param_1,
          STGuildBoardDBInfo *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x14);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4f07,
             "seLect no, charac_no, charac_name, memo, unix_timestamp(create_time), job from guild_memo where no=%u"
             ,*(undefined4 *)(param_1 + 0x12));
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4f07);
  if (local_11 == '\x01') {
    cVar1 = (**(code **)(*local_10 + 0x24))(local_10);
    if (cVar1 == '\x01') {
      cVar1 = (**(code **)(*local_10 + 0x38))(local_10,0,param_2 + 0x7c);
      if (cVar1 == '\x01') {
        cVar1 = (**(code **)(*local_10 + 0x38))(local_10,1,param_2 + 0x80);
        if (cVar1 == '\x01') {
          cVar1 = (**(code **)(*local_10 + 0x2c))(local_10,2,param_2 + 0x87,0x1e);
          if (cVar1 == '\x01') {
            cVar1 = (**(code **)(*local_10 + 0x2c))(local_10,3,param_2,0x78);
            if (cVar1 == '\x01') {
              cVar1 = (**(code **)(*local_10 + 0x38))(local_10,4,param_2 + 0x78);
              if (cVar1 == '\x01') {
                cVar1 = (**(code **)(*local_10 + 0x50))(local_10,5,param_2 + 0x84);
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
    CMyFileLog::CMyFileLog(local_1c,"OnWriteWebGuildBoard",0x2329);
    CMyFileLog::operator()(local_1c,"./log/DBQueryErr","OnWriteWebGuildBoard Query Error");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
