# _ZN3nsl12DBConnection4openEPcS1_S1_S1_j

`nsl::DBConnection::open(char*, char*, char*, char*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80a1e22` | `0x197` | `0x806630c` | `0x19c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,105 +1,105 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 lea    0x4202c(%eax),%edx
 movl   $0x10,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 mov    0x1c(%ebp),%edx
 mov    %edx,0x4203c(%eax)
 mov    0x8(%ebp),%eax
 lea    0x42040(%eax),%edx
 movl   $0x14,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 lea    0x42054(%eax),%edx
 movl   $0x14,0x8(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 lea    0x42068(%eax),%edx
 movl   $0x1e,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x0,0x1c(%esp)
 movl   $0x0,0x18(%esp)
 mov    0x1c(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    0x18(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <mysql_real_connect>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl12DBConnection4openEPcS1_S1_S1_j+0x172>
+je     <T> <_ZN3nsl12DBConnection4openEPcS1_S1_S1_j+0x17b>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0x1c(%esp)
-mov    0x18(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    0x14(%ebp),%edx
-mov    %edx,0x14(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    0x1c(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    0x18(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    0x14(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x8(%esp)
 movl   $"%s %u %s %s %s error='%d' FAILED",0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8errorLogEPKcz>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
 mov    %eax,0x18(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"%s %u %s %s %s error='%d' FAILED\n",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl12DBConnection4openEPcS1_S1_S1_j+0x191>
+jmp    <T> <_ZN3nsl12DBConnection4openEPcS1_S1_S1_j+0x19a>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"%s %s SUCCESS\n",(%esp)
 call   <T> <printf>
 mov    $0x1,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool open(DBConnection * this, char * ip, char * dbname, char * id,
   char * pass, uint port) */

bool __thiscall
nsl::DBConnection::_ZN3nsl12DBConnection4openEPcS1_S1_S1_j
          (DBConnection *this,char *ip,char *dbname,char *id,char *pass,uint port)

{
  int iVar1;
  undefined4 uVar2;
  TraceLog *this_00;
  
  strncpy(this->dbIp_,ip,0x10);
  this->dbPort_ = port;
  strncpy(this->dbAcc_,id,0x14);
  strncpy(this->dbPwd_,pass,0x14);
  strncpy(this->dbName_,dbname,0x1e);
  iVar1 = mysql_real_connect(this->h_db,ip,id,pass,dbname,port,0,0);
  if (iVar1 != 0) {
    printf("%s %s SUCCESS\n",ip,dbname);
  }
  else {
    uVar2 = mysql_errno(this->h_db);
    this_00 = G_TraceLog();
    TraceLog::errorLog(this_00,"%s %u %s %s %s error=\'%d\' FAILED",ip,port,dbname,id,pass,uVar2);
    uVar2 = mysql_errno(this->h_db);
    printf("%s %u %s %s %s error=\'%d\' FAILED\n",ip,port,dbname,id,pass,uVar2);
  }
  return iVar1 != 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnection.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnection.cpp)（约第 76 行）：

```cpp
bool DBConnection::open(char* ip, char* dbname, char* id, char* pass, unsigned int port)
{
    strncpy(dbIp_, ip, 0x10);
    dbPort_ = port;
    strncpy(dbAcc_, id, 0x14);
    strncpy(dbPwd_, pass, 0x14);
    strncpy(dbName_, dbname, 0x1e);
    if (mysql_real_connect(h_db, ip, id, pass, dbname, port, 0, 0) == 0)
    {
        unsigned int err = mysql_errno(h_db);
        TraceLog* pLog = G_TraceLog();
        pLog->errorLog("%s %u %s %s %s error=\'%d\' FAILED", ip, port, dbname, id, pass, err);
        printf("%s %u %s %s %s error=\'%d\' FAILED\n", ip, port, dbname, id, pass,
               mysql_errno(h_db));
        return false;
    }
    printf("%s %s SUCCESS\n", ip, dbname);
    return true;
}
```
