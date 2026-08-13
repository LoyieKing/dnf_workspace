# _ZN6CMySql4execEj

`CMySql::exec(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808d744` | `0x177` | `0x80c8986` | `0x179` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN6CMySql4execEj+0x95>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql10exec_queryEv>
 mov    %eax,-0x18(%ebp)
 cmpl   $0x1,-0x18(%ebp)
 jne    <T> <_ZN6CMySql4execEj+0x8b>
 call   <T> <_Z21CQueryCounterInstancev>
 mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter15SetResponseTimeEj>
 mov    0x8(%ebp),%eax
 lea    0x78(%eax),%ebx
 movl   $0x14e,0x8(%esp)
 movl   $&_ZZN6CMySql4execEjE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Database query error. The last query('%s') has been lost. iret == R_FAIL",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4execEj+0x171>
+jmp    <T> <_ZN6CMySql4execEj+0x173>
 cmpl   $0x0,-0x18(%ebp)
 je     <T> <_ZN6CMySql4execEj+0xa6>
 addl   $0x1,-0x10(%ebp)
 cmpl   $0x4,-0x10(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN6CMySql4execEj+0x13>
 jmp    <T> <_ZN6CMySql4execEj+0xa7>
 nop
 call   <T> <_Z21CQueryCounterInstancev>
 mov    %eax,-0x14(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter15SetResponseTimeEj>
 cmpl   $0x0,-0x18(%ebp)
-jne    <T> <_ZN6CMySql4execEj+0x12c>
+jne    <T> <_ZN6CMySql4execEj+0x12e>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_store_result>
 mov    0x8(%ebp),%edx
 mov    %eax,0x8(%edx)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql4execEj+0x111>
+je     <T> <_ZN6CMySql4execEj+0x113>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_num_rows>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x14(%eax)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_num_fields>
-mov    0x8(%ebp),%edx
-mov    %eax,0x18(%edx)
-jmp    <T> <_ZN6CMySql4execEj+0x125>
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x18(%eax)
+jmp    <T> <_ZN6CMySql4execEj+0x127>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql4execEj+0x171>
+jmp    <T> <_ZN6CMySql4execEj+0x173>
 mov    0x8(%ebp),%eax
 lea    0x78(%eax),%ebx
 movl   $0x16e,0x8(%esp)
 movl   $&_ZZN6CMySql4execEjE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Database query error. The last query('%s') has been lost.",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::exec(unsigned int) */

undefined4 __thiscall CMySql::_ZN6CMySql4execEj(CMySql *this,uint param_1)

{
  undefined4 uVar1;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  int local_1c;
  CQueryCounter *local_18;
  int local_14;
  CQueryCounter *local_10;
  
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    local_1c = _ZN6CMySql10exec_queryEv(this);
    if (local_1c == 1) {
      local_10 = (CQueryCounter *)CQueryCounterInstance();
      CQueryCounter::_ZN13CQueryCounter15SetResponseTimeEj(local_10,param_1);
      CMyFileLog::CMyFileLog(local_2c,"exec",0x14e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/MysqlErr.log",
                 "Database query error. The last query(\'%s\') has been lost. iret == R_FAIL",
                 this + 0x78);
      return 0;
    }
    if (local_1c == 0) break;
  }
  local_18 = (CQueryCounter *)CQueryCounterInstance();
  CQueryCounter::_ZN13CQueryCounter15SetResponseTimeEj(local_18,param_1);
  if (local_1c == 0) {
    uVar1 = mysql_store_result(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 8) = uVar1;
    if (*(int *)(this + 8) == 0) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    else {
      uVar1 = mysql_num_rows(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x14) = uVar1;
      uVar1 = mysql_num_fields(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x18) = uVar1;
    }
    uVar1 = 1;
  }
  else {
    CMyFileLog::CMyFileLog(local_24,"exec",0x16e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/MysqlErr.log",
               "Database query error. The last query(\'%s\') has been lost.",this + 0x78);
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 172 行）：

```cpp
bool CMySql::exec(unsigned int q)
{
    int ret;
    for (int i = 0; i <= 4; i++)
    {
        ret = exec_query();
        if (ret == 1)
        {
            CQueryCounter* p = CQueryCounterInstance();
            p->SetResponseTime(q);
            register char* qs = m_query;
            CMyFileLog log(__FUNCTION__, 0x14e);
            log("./log/MysqlErr.log",
                "Database query error. The last query('%s') has been lost. iret == R_FAIL",
                qs);
            return 0;
        }
        if (ret == 0)
            break;
    }
    CQueryCounter* p = CQueryCounterInstance();
    p->SetResponseTime(q);
    if (ret == 0)
    {
        m_result = mysql_store_result(m_mysql);
        if (m_result)
        {
            m_nRows = mysql_num_rows(m_result);
            m_nFields = mysql_num_fields(m_result);
        }
        else
        {
            m_nRows = 0;
            m_nFields = 0;
        }
        return 1;
    }
    register char* qs = m_query;
    CMyFileLog log(__FUNCTION__, 0x16e);
    log("./log/MysqlErr.log",
        "Database query error. The last query('%s') has been lost.", qs);
    return 0;
}
```
