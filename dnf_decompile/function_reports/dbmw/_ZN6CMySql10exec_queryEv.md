# _ZN6CMySql10exec_queryEv

`CMySql::exec_query()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808d49e` | `0x271` | `0x80c86a4` | `0x271` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,154 +1,154 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x70,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    0x8(%ebp),%eax
 mov    0x42084(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 lea    0x78(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <mysql_real_query>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 je     <T> <_ZN6CMySql10exec_queryEv+0x265>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
 mov    0x8(%ebp),%eax
 mov    0x42088(%eax),%eax
 cmp    $0x7d5,%eax
-je     <T> <_ZN6CMySql10exec_queryEv+0x9b>
+je     <T> <_ZN6CMySql10exec_queryEv+0x99>
 mov    0x8(%ebp),%eax
 mov    0x42088(%eax),%eax
 cmp    $0x7dd,%eax
-je     <T> <_ZN6CMySql10exec_queryEv+0x9b>
+je     <T> <_ZN6CMySql10exec_queryEv+0x99>
 mov    0x8(%ebp),%eax
 mov    0x42088(%eax),%eax
 cmp    $0x7d6,%eax
-jne    <T> <_ZN6CMySql10exec_queryEv+0x1b7>
+jne    <T> <_ZN6CMySql10exec_queryEv+0x1b5>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_ping>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+je     <T> <_ZN6CMySql10exec_queryEv+0x1ab>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
 cmp    $0x7d6,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+je     <T> <_ZN6CMySql10exec_queryEv+0x1ab>
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%esi
 mov    0x8(%ebp),%eax
 lea    0x40(%eax),%ebx
 mov    0x8(%ebp),%eax
 lea    0x2c(%eax),%ecx
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 movl   $0x400,0x1c(%esp)
 movl   $0x0,0x18(%esp)
 movl   $0xcea,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <mysql_real_connect>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN6CMySql10exec_queryEv+0x177>
+je     <T> <_ZN6CMySql10exec_queryEv+0x175>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
 mov    %eax,%ebx
 movl   $0x118,0x8(%esp)
 movl   $&_ZZN6CMySql10exec_queryEvE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"DB reconnection fail. err_no(%d)\n",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+jmp    <T> <_ZN6CMySql10exec_queryEv+0x1ab>
 movl   $0x11c,0x8(%esp)
 movl   $&_ZZN6CMySql10exec_queryEvE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"DB Reconnect By Server Gone Error\n",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x2,%eax
 jmp    <T> <_ZN6CMySql10exec_queryEv+0x26a>
 mov    0x8(%ebp),%eax
 mov    0x42088(%eax),%eax
 cmp    $0x426,%eax
 je     <T> <_ZN6CMySql10exec_queryEv+0x25e>
 mov    0x8(%ebp),%eax
 lea    0x78(%eax),%esi
 mov    0x8(%ebp),%eax
-mov    0x42088(%eax),%ebx
+mov    0x42088(%eax),%eax
+mov    %eax,%ebx
 movl   $0x12a,0x8(%esp)
 movl   $&_ZZN6CMySql10exec_queryEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"DB error occured (%d) Query('%s')\n",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x42088(%eax),%eax
 cmp    $0x7d6,%eax
 jne    <T> <_ZN6CMySql10exec_queryEv+0x25e>
 movl   $0x12c,0x8(%esp)
 movl   $&_ZZN6CMySql10exec_queryEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CMySql::open() Function Error!\tCheck Connection First, Must Be Not Connected!\n",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
 jmp    <T> <_ZN6CMySql10exec_queryEv+0x26a>
 mov    $0x0,%eax
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::exec_query() */

undefined4 __thiscall CMySql::_ZN6CMySql10exec_queryEv(CMySql *this)

{
  undefined4 uVar1;
  int iVar2;
  CMySql *pCVar3;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int local_14;
  int local_10;
  
  (**(code **)(*(int *)this + 0x70))(this);
  local_14 = mysql_real_query(*(undefined4 *)(this + 4),this + 0x78,*(undefined4 *)(this + 0x42084))
  ;
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = mysql_errno(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 0x42088) = uVar1;
    if (((*(int *)(this + 0x42088) == 0x7d5) || (*(int *)(this + 0x42088) == 0x7dd)) ||
       (*(int *)(this + 0x42088) == 0x7d6)) {
      local_10 = mysql_ping(*(undefined4 *)(this + 4));
      if (local_10 != 0) {
        iVar2 = mysql_errno(*(undefined4 *)(this + 4));
        if (iVar2 == 0x7d6) {
          iVar2 = mysql_real_connect(*(undefined4 *)(this + 4),this + 0x1c,this + 0x2c,this + 0x40,
                                     this + 0x54,0xcea,0,0x400);
          if (iVar2 == 0) {
            uVar1 = mysql_errno(*(undefined4 *)(this + 4));
            CMyFileLog::CMyFileLog(local_34,"exec_query",0x118);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_34,"./log/MysqlErr.log","DB reconnection fail. err_no(%d)\n",uVar1);
          }
          else {
            CMyFileLog::CMyFileLog(local_2c,"exec_query",0x11c);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_2c,"./log/MysqlErr.log","DB Reconnect By Server Gone Error\n");
          }
        }
      }
      uVar1 = 2;
    }
    else {
      if (*(int *)(this + 0x42088) != 0x426) {
        pCVar3 = this + 0x78;
        uVar1 = *(undefined4 *)(this + 0x42088);
        CMyFileLog::CMyFileLog(local_24,"exec_query",0x12a);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_24,"./log/MysqlErr.log","DB error occured (%d) Query(\'%s\')\n",uVar1,
                   pCVar3);
        if (*(int *)(this + 0x42088) == 0x7d6) {
          CMyFileLog::CMyFileLog(local_1c,"exec_query",300);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_1c,"./log/MysqlErr.log",
                     "CMySql::open() Function Error!\tCheck Connection First, Must Be Not Connected!\n"
                     ,uVar1,pCVar3);
        }
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 121 行）：

```cpp
int CMySql::exec_query()
{
    clear_result_set();
    int ret = mysql_real_query(m_mysql, m_query, m_queryLen);
    if (ret != 0)
    {
        m_lastErrno = mysql_errno(m_mysql);
        if (m_lastErrno == 0x7d5 || m_lastErrno == 0x7dd ||
            m_lastErrno == 0x7d6)
        {
            int ping = mysql_ping(m_mysql);
            if (ping != 0)
            {
                if (mysql_errno(m_mysql) == 0x7d6)
                {
                    if (!mysql_real_connect(m_mysql, m_host, m_pass, m_db,
                                            m_user, 0xcea, 0, 0x400))
                    {
                        register int e2 = mysql_errno(m_mysql);
                        CMyFileLog log(__FUNCTION__, 0x118);
                        log("./log/MysqlErr.log",
                            "DB reconnection fail. err_no(%d)\n", e2);
                    }
                    else
                    {
                        CMyFileLog log(__FUNCTION__, 0x11c);
                        log("./log/MysqlErr.log",
                            "DB Reconnect By Server Gone Error\n");
                    }
                }
            }
            return 2;
        }
        if (m_lastErrno != 0x426)
        {
            register char* q = m_query;
            register int err = m_lastErrno;
            CMyFileLog log(__FUNCTION__, 0x12a);
            log("./log/MysqlErr.log",
                "DB error occured (%d) Query('%s')\n", err, q);
            if (m_lastErrno == 0x7d6)
            {
                CMyFileLog log2(__FUNCTION__, 300);
                log2("./log/MysqlErr.log",
                     "CMySql::open() Function Error!\tCheck Connection First, Must Be Not Connected!\n");
            }
        }
        return 1;
    }
    return 0;
}
```
