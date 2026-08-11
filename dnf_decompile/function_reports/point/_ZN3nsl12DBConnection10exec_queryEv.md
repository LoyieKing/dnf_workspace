# _ZN3nsl12DBConnection10exec_queryEv

`nsl::DBConnection::exec_query()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80a2458` | `0x2fe` | `0x80668ac` | `0x317` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,194 +1,201 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection16clear_result_setEv>
 mov    0x8(%ebp),%eax
 mov    0x42024(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <mysql_real_query>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2f1>
+mov    %eax,-0x34(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x30a>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x42028(%eax)
 mov    0x8(%ebp),%eax
-mov    0x42028(%eax),%ebx
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0xc(%esp)
+mov    0x42028(%eax),%eax
+mov    %eax,-0x30(%ebp)
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    %eax,-0x2c(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Fail: mysql_real_query(), %d",0x8(%esp)
 movl   $0x7,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    0x42028(%eax),%eax
 cmp    $0x7d5,%eax
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0xcd>
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0xd9>
 mov    0x8(%ebp),%eax
 mov    0x42028(%eax),%eax
 cmp    $0x7dd,%eax
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0xcd>
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0xd9>
 mov    0x8(%ebp),%eax
 mov    0x42028(%eax),%eax
 cmp    $0x7d3,%eax
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0xcd>
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0xd9>
 mov    0x8(%ebp),%eax
 mov    0x42028(%eax),%eax
 cmp    $0x7d6,%eax
-jne    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2a0>
+jne    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2b9>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail: DB connection lost, reconnecting...",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_ping>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x299>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2b2>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
 cmp    $0x7d6,%eax
 sete   %al
-test   %al,%al
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x262>
+mov    %al,-0x21(%ebp)
+cmpb   $0x0,-0x21(%ebp)
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x277>
 mov    0x8(%ebp),%eax
 mov    0x4203c(%eax),%edx
 mov    0x8(%ebp),%eax
 lea    0x42068(%eax),%edi
 mov    0x8(%ebp),%eax
 lea    0x42054(%eax),%esi
 mov    0x8(%ebp),%eax
 lea    0x42040(%eax),%ebx
 mov    0x8(%ebp),%eax
 lea    0x4202c(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x0,0x1c(%esp)
 movl   $0x0,0x18(%esp)
 mov    %edx,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <mysql_real_connect>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x1ba>
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x1cf>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <mysql_errno>
+mov    %eax,-0x20(%ebp)
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $"DB reconnection fail. err_no(%d)",0x8(%esp)
+movl   $0x7,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
+jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x1ec>
+call   <T> <_ZN3nsl10G_TraceLogEv>
+movl   $"DB Reconnect By Server Gone Error",0x8(%esp)
+movl   $0x7,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
+mov    0x8(%ebp),%eax
+add    $0x42054,%eax
+mov    %eax,-0x44(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x42040,%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x4203c(%eax),%esi
+mov    0x8(%ebp),%eax
+add    $0x4202c,%eax
+mov    %eax,-0x3c(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x42068(%eax),%edi
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0xc(%esp)
-movl   $"DB reconnection fail. err_no(%d)",0x8(%esp)
-movl   $0x7,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x1d7>
-call   <T> <_ZN3nsl10G_TraceLogEv>
-movl   $"DB Reconnect By Server Gone Error",0x8(%esp)
-movl   $0x7,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    0x8(%ebp),%eax
-add    $0x42054,%eax
-mov    %eax,-0x34(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x42040,%eax
-mov    %eax,-0x30(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4203c(%eax),%esi
-mov    0x8(%ebp),%eax
-add    $0x4202c,%eax
-mov    %eax,-0x2c(%ebp)
-mov    0x8(%ebp),%eax
-lea    0x42068(%eax),%edi
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <mysql_errno>
-mov    %eax,%ebx
-call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %eax,%edx
-mov    -0x34(%ebp),%eax
+mov    -0x44(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    %esi,0x1c(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"DB reconnection fail. %d, %d (dbname : %s, ip : %s, port : %d, id : %s, pwd : %s)",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x299>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <mysql_errno>
-mov    %eax,%ebx
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0x10(%esp)
+jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2b2>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <mysql_errno>
+mov    %eax,-0x1c(%ebp)
+call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x1c(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    -0x28(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"DB reconnection fail. %d, %d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x2,%eax
-jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2f6>
+jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x30f>
 mov    0x8(%ebp),%eax
 mov    0x42028(%eax),%eax
 cmp    $0x426,%eax
-je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2ea>
+je     <T> <_ZN3nsl12DBConnection10exec_queryEv+0x303>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"DB error occured (%d) Query('%s')",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x2f6>
+jmp    <T> <_ZN3nsl12DBConnection10exec_queryEv+0x30f>
 mov    $0x0,%eax
-add    $0x5c,%esp
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: int exec_query(DBConnection * this) */

int __thiscall nsl::DBConnection::_ZN3nsl12DBConnection10exec_queryEv(DBConnection *this)

{
  uint uVar1;
  int iVar2;
  TraceLog *pTVar3;
  int iVar4;
  undefined4 uVar5;
  
                    /* Unresolved local var: int db_ret@[???] */
  clear_result_set(this);
  iVar2 = mysql_real_query(this->h_db,this->m_query,this->m_query_len);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = mysql_errno(this->h_db);
    this->m_db_err = iVar2;
    iVar2 = this->m_db_err;
    pTVar3 = G_TraceLog();
    TraceLog::sysLog(pTVar3,7,"Fail: mysql_real_query(), %d",iVar2);
    if ((((this->m_db_err == 0x7d5) || (this->m_db_err == 0x7dd)) || (this->m_db_err == 0x7d3)) ||
       (this->m_db_err == 0x7d6)) {
                    /* Unresolved local var: int db_ret@[???] */
      pTVar3 = G_TraceLog();
      TraceLog::sysLog(pTVar3,7,"Fail: DB connection lost, reconnecting...",iVar2);
      iVar2 = mysql_ping(this->h_db);
      if (iVar2 != 0) {
        iVar4 = mysql_errno(this->h_db);
        if (iVar4 == 0x7d6) {
          iVar4 = mysql_real_connect(this->h_db,this->dbIp_,this->dbAcc_,this->dbPwd_,this->dbName_,
                                     this->dbPort_,0,0);
          if (iVar4 == 0) {
            uVar5 = mysql_errno(this->h_db);
            pTVar3 = G_TraceLog();
            TraceLog::sysLog(pTVar3,7,"DB reconnection fail. err_no(%d)",uVar5);
          }
          else {
            pTVar3 = G_TraceLog();
            TraceLog::sysLog(pTVar3,7,"DB Reconnect By Server Gone Error");
          }
          uVar1 = this->dbPort_;
          uVar5 = mysql_errno(this->h_db);
          pTVar3 = G_TraceLog();
          TraceLog::sysLog(pTVar3,7,
                           "DB reconnection fail. %d, %d (dbname : %s, ip : %s, port : %d, id : %s, pwd : %s)"
                           ,iVar2,uVar5,this->dbName_,this->dbIp_,uVar1,this->dbAcc_,this->dbPwd_);
        }
        else {
          uVar5 = mysql_errno(this->h_db);
          pTVar3 = G_TraceLog();
          TraceLog::sysLog(pTVar3,7,"DB reconnection fail. %d, %d",iVar2,uVar5);
        }
      }
      iVar2 = 2;
    }
    else {
      if (this->m_db_err != 0x426) {
        uVar5 = mysql_errno(this->h_db);
        pTVar3 = G_TraceLog();
        TraceLog::sysLog(pTVar3,7,"DB error occured (%d) Query(\'%s\')",uVar5,this->m_query);
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnection.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnection.cpp)（约第 245 行）：

```cpp
int DBConnection::exec_query()
{
    clear_result_set();
    int db_ret = mysql_real_query(h_db, m_query, m_query_len);
    if (db_ret != 0)
    {
        m_db_err = (int)mysql_errno(h_db);
        int iVar2 = m_db_err;
        TraceLog* pLog = G_TraceLog();
        pLog->sysLog(7, "Fail: mysql_real_query(), %d", iVar2);
        if ((m_db_err == 0x7d5) || (m_db_err == 0x7dd) || (m_db_err == 0x7d3) ||
            (m_db_err == 0x7d6))
        {
            G_TraceLog()->sysLog(7, "Fail: DB connection lost, reconnecting...");
            int ping_ret = mysql_ping(h_db);
            if (ping_ret != 0)
            {
                bool bGone = (mysql_errno(h_db) == CR_SERVER_GONE_ERROR);
                if (bGone)
                {
                    if (mysql_real_connect(h_db, dbIp_, dbAcc_, dbPwd_, dbName_, dbPort_, 0, 0) ==
                        0)
                    {
                        unsigned int errno2 = mysql_errno(h_db);
                        G_TraceLog()->sysLog(7, "DB reconnection fail. err_no(%d)", errno2);
                    }
                    else
                    {
                        G_TraceLog()->sysLog(7, "DB Reconnect By Server Gone Error");
                    }
                    G_TraceLog()->sysLog(
                        7,
                        "DB reconnection fail. %d, %d (dbname : %s, ip : %s, port : %d, id : %s, pwd : %s)",
                        ping_ret, mysql_errno(h_db), dbName_, dbIp_, dbPort_, dbAcc_, dbPwd_);
                }
                else
                {
                    int err2 = (int)mysql_errno(h_db);
                    G_TraceLog()->sysLog(7, "DB reconnection fail. %d, %d", ping_ret, err2);
                }
            }
            return 2;
        }
        if (m_db_err != 0x426)
        {
            G_TraceLog()->sysLog(7, "DB error occured (%d) Query(\'%s\')", mysql_errno(h_db),
                                 m_query);
        }
        return 1;
    }
    return 0;
}
```
