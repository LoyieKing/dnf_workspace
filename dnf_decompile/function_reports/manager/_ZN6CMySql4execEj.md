# _ZN6CMySql4execEj

`CMySql::exec(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80619f2` | `0x130` | `0x80549d8` | `0x12d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,87 +1,85 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN6CMySql4execEj+0x52>
+jmp    <T> <_ZN6CMySql4execEj+0x51>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql10exec_queryEv>
 mov    %eax,-0x18(%ebp)
 cmpl   $0x1,-0x18(%ebp)
-jne    <T> <_ZN6CMySql4execEj+0x48>
+jne    <T> <_ZN6CMySql4execEj+0x47>
 call   <T> <_Z21CQueryCounterInstancev>
 mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter15SetResponseTimeEj>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4execEj+0x12a>
+jmp    <T> <_ZN6CMySql4execEj+0x12b>
 cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN6CMySql4execEj+0x5f>
+je     <T> <_ZN6CMySql4execEj+0x5e>
 addl   $0x1,-0x10(%ebp)
 cmpl   $0x4,-0x10(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN6CMySql4execEj+0x10>
-jmp    <T> <_ZN6CMySql4execEj+0x60>
+jne    <T> <_ZN6CMySql4execEj+0xf>
+jmp    <T> <_ZN6CMySql4execEj+0x5f>
 nop
 call   <T> <_Z21CQueryCounterInstancev>
 mov    %eax,-0x14(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter15SetResponseTimeEj>
 cmpl   $0x0,-0x18(%ebp)
-jne    <T> <_ZN6CMySql4execEj+0xe5>
+jne    <T> <_ZN6CMySql4execEj+0xe6>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_store_result>
 mov    0x8(%ebp),%edx
 mov    %eax,0x8(%edx)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql4execEj+0xca>
+je     <T> <_ZN6CMySql4execEj+0xcb>
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
-jmp    <T> <_ZN6CMySql4execEj+0xde>
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x18(%eax)
+jmp    <T> <_ZN6CMySql4execEj+0xdf>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql4execEj+0x12a>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%ebx
+jmp    <T> <_ZN6CMySql4execEj+0x12b>
 movl   $0xed,0x8(%esp)
 movl   $"exec",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,0xc(%esp)
 movl   $"Database query error. The last query('%s') has been lost.",0x8(%esp)
 movl   $"./log/MysqlErr.log",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::exec(unsigned int) */

undefined4 __thiscall CMySql::_ZN6CMySql4execEj(CMySql *this,uint param_1)

{
  undefined4 uVar1;
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
    CMyFileLog::CMyFileLog(local_24,"exec",0xed);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/MysqlErr.log",
               "Database query error. The last query(\'%s\') has been lost.",this + 0x1c);
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 178 行）：

```cpp
bool CMySql::exec(unsigned int q)
{
    int ret = 0;
    for (int i = 0; i <= 4; i++)
    {
        ret = exec_query();
        if (ret == 1)
        {
            CQueryCounterInstance()->SetResponseTime(q);
            CMyFileLog log("exec", 0x14e);
            log("./log/MysqlErr.log",
                "Database query error. The last query('%s') has been lost. iret == R_FAIL",
                m_query);
            return 0;
        }
        if (ret == 0)
            break;
    }
    CQueryCounterInstance()->SetResponseTime(q);
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
    CMyFileLog log("exec", 0x16e);
    log("./log/MysqlErr.log",
        "Database query error. The last query('%s') has been lost.", m_query);
    return 0;
}
```
