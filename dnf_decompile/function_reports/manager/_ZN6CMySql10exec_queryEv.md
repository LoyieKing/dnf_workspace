# _ZN6CMySql10exec_queryEv

`CMySql::exec_query()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806181e` | `0x19f` | `0x8054844` | `0x194` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,104 +1,97 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x60,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    0x8(%ebp),%eax
-mov    0xb028(%eax),%eax
-mov    %eax,%edx
+mov    0xb028(%eax),%edx
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <mysql_real_query>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN6CMySql10exec_queryEv+0x193>
+je     <T> <_ZN6CMySql10exec_queryEv+0x18d>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xb02c(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0xb02c(%edx)
 mov    0x8(%ebp),%eax
 mov    0xb02c(%eax),%eax
 cmp    $0x7d5,%eax
-je     <T> <_ZN6CMySql10exec_queryEv+0x87>
+je     <T> <_ZN6CMySql10exec_queryEv+0x81>
 mov    0x8(%ebp),%eax
 mov    0xb02c(%eax),%eax
 cmp    $0x7dd,%eax
-jne    <T> <_ZN6CMySql10exec_queryEv+0xe5>
+jne    <T> <_ZN6CMySql10exec_queryEv+0xdf>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_ping>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN6CMySql10exec_queryEv+0xdb>
+je     <T> <_ZN6CMySql10exec_queryEv+0xd5>
 movl   $0xa3,0x8(%esp)
 movl   $"exec_query",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"DB reconnection fail. %d\n",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x2,%eax
-jmp    <T> <_ZN6CMySql10exec_queryEv+0x198>
+jmp    <T> <_ZN6CMySql10exec_queryEv+0x192>
 mov    0x8(%ebp),%eax
 mov    0xb02c(%eax),%eax
 cmp    $0x426,%eax
-je     <T> <_ZN6CMySql10exec_queryEv+0x18c>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0xb02c(%eax),%ebx
+je     <T> <_ZN6CMySql10exec_queryEv+0x186>
 movl   $0xaa,0x8(%esp)
 movl   $"exec_query",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+lea    0x1c(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xb02c(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"DB error occured (%d) Query('%s')\n",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0xb02c(%eax),%eax
 cmp    $0x7d6,%eax
-jne    <T> <_ZN6CMySql10exec_queryEv+0x18c>
+jne    <T> <_ZN6CMySql10exec_queryEv+0x186>
 movl   $0xac,0x8(%esp)
 movl   $"exec_query",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CMySql::open() Function Error!\tCheck Connection First, Must Be Not Connected!\n",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql10exec_queryEv+0x198>
+jmp    <T> <_ZN6CMySql10exec_queryEv+0x192>
 mov    $0x0,%eax
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::exec_query() */

undefined4 __thiscall CMySql::_ZN6CMySql10exec_queryEv(CMySql *this)

{
  undefined4 uVar1;
  CMySql *pCVar2;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int local_14;
  int local_10;
  
  (**(code **)(*(int *)this + 0x60))(this);
  local_14 = mysql_real_query(*(undefined4 *)(this + 4),this + 0x1c,*(undefined4 *)(this + 0xb028));
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = mysql_errno(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 0xb02c) = uVar1;
    if ((*(int *)(this + 0xb02c) == 0x7d5) || (*(int *)(this + 0xb02c) == 0x7dd)) {
      local_10 = mysql_ping(*(undefined4 *)(this + 4));
      if (local_10 != 0) {
        CMyFileLog::CMyFileLog(local_2c,"exec_query",0xa3);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_2c,"./log/MysqlErr.log","DB reconnection fail. %d\n",local_10);
      }
      uVar1 = 2;
    }
    else {
      if (*(int *)(this + 0xb02c) != 0x426) {
        pCVar2 = this + 0x1c;
        uVar1 = *(undefined4 *)(this + 0xb02c);
        CMyFileLog::CMyFileLog(local_24,"exec_query",0xaa);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_24,"./log/MysqlErr.log","DB error occured (%d) Query(\'%s\')\n",uVar1,
                   pCVar2);
        if (*(int *)(this + 0xb02c) == 0x7d6) {
          CMyFileLog::CMyFileLog(local_1c,"exec_query",0xac);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_1c,"./log/MysqlErr.log",
                     "CMySql::open() Function Error!\tCheck Connection First, Must Be Not Connected!\n"
                     ,uVar1,pCVar2);
        }
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 127 行）：

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
                int e = mysql_errno(m_mysql);
                if (e == 0x7d6)
                {
                    if (!mysql_real_connect(m_mysql, m_host, m_pass, m_db,
                                            m_user, 0xcea, 0, 0x400))
                    {
                        int e2 = mysql_errno(m_mysql);
                        CMyFileLog log("exec_query", 0x118);
                        log("./log/MysqlErr.log",
                            "DB reconnection fail. err_no(%d)\n", e2);
                    }
                    else
                    {
                        CMyFileLog log("exec_query", 0x11c);
                        log("./log/MysqlErr.log",
                            "DB Reconnect By Server Gone Error\n");
                    }
                }
            }
            return 2;
        }
        if (m_lastErrno != 0x426)
        {
            CMyFileLog log("exec_query", 0x12a);
            log("./log/MysqlErr.log",
                "DB error occured (%d) Query('%s')\n", m_lastErrno, m_query);
            if (m_lastErrno == 0x7d6)
            {
                CMyFileLog log2("exec_query", 300);
                log2("./log/MysqlErr.log",
                     "CMySql::open() Function Error!\tCheck Connection First, Must Be Not Connected!\n",
                     m_lastErrno, m_query);
            }
        }
        return 1;
    }
    return 0;
}
```
