# _ZN6CMySql4openEPKcS1_S1_S1_

`CMySql::open(char const*, char const*, char const*, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808d152` | `0x168` | `0x80c90da` | `0x166` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x1e>
 cmpl   $0x0,0x10(%ebp)
 je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x1e>
 cmpl   $0x0,0x14(%ebp)
 je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x1e>
 cmpl   $0x0,0x18(%ebp)
 jne    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x28>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x166>
+jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x164>
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strcpy>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strcpy>
 mov    0x8(%ebp),%eax
 lea    0x2c(%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strcpy>
 mov    0x8(%ebp),%eax
 lea    0x40(%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strcpy>
 mov    0x8(%ebp),%eax
 movl   $0xcea,0x74(%eax)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 movl   $0x400,0x1c(%esp)
 movl   $0x0,0x18(%esp)
 movl   $0xcea,0x14(%esp)
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
-je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x161>
+je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x15f>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_errno>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Can't connect db : ( dbname : %s, ip : %s, id : %s )\n",(%esp)
 call   <T> <printf>
 movl   $0xad,0x8(%esp)
 movl   $&_ZZN6CMySql4openEPKcS1_S1_S1_E12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x14(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Can't connect db : ( dbname : %s, ip : %s, id : %s )\n",0x8(%esp)
 movl   $"./log/DBErr",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x166>
+jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x164>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::open(char const*, char const*, char const*, char const*) */

undefined4 __thiscall
CMySql::_ZN6CMySql4openEPKcS1_S1_S1_
          (CMySql *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  CMyFileLog local_14 [16];
  
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == (char *)0x0)) ||
     (param_4 == (char *)0x0)) {
    uVar1 = 0;
  }
  else {
    strcpy((char *)(this + 0x54),param_2);
    strcpy((char *)(this + 0x1c),param_1);
    strcpy((char *)(this + 0x2c),param_3);
    strcpy((char *)(this + 0x40),param_4);
    *(undefined4 *)(this + 0x74) = 0xcea;
    iVar2 = mysql_real_connect(*(undefined4 *)(this + 4),param_1,param_3,param_4,param_2,0xcea,0,
                               0x400);
    if (iVar2 == 0) {
      uVar1 = mysql_errno(*(undefined4 *)(this + 4));
      *(undefined4 *)(this + 0x42088) = uVar1;
      printf("Can\'t connect db : ( dbname : %s, ip : %s, id : %s )\n",param_2,param_1,param_3);
      CMyFileLog::CMyFileLog(local_14,"open",0xad);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/DBErr","Can\'t connect db : ( dbname : %s, ip : %s, id : %s )\n",
                 param_2,param_1,param_3);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 339 行）：

```cpp
char CMySql::open(const char* host, const char* user, const char* pass, const char* db)
{
    if (!host || !user || !pass || !db)
        return 0;
    strcpy(m_user, user);
    strcpy(m_host, host);
    strcpy(m_pass, pass);
    strcpy(m_db, db);
    m_port = 0xcea;
    // 原版实际传参顺序（host, pass, db, user），client_flag 0x400
    if (!mysql_real_connect(m_mysql, host, pass, db, user, 0xcea, 0, 0x400))
    {
        m_lastErrno = mysql_errno(m_mysql);
        printf("Can't connect db : ( dbname : %s, ip : %s, id : %s )\n",
               user, host, pass);
        CMyFileLog log(__FUNCTION__, 0xad);
        log("./log/DBErr", "Can't connect db : ( dbname : %s, ip : %s, id : %s )\n",
            user, host, pass);
        return 0;
    }
    return 1;
}
```
