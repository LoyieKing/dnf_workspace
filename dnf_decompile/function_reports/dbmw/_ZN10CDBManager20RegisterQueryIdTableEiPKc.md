# _ZN10CDBManager20RegisterQueryIdTableEiPKc

`CDBManager::RegisterQueryIdTable(int, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8077090` | `0xb2` | `0x8058256` | `0xb1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x6038,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0xc(%ebp)
+movl   $0x6002,0x8(%esp)
+movl   $0x0,0x4(%esp)
 lea    -0x600e(%ebp),%eax
-mov    $0x6002,%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x600e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 lea    -0x600e(%ebp),%eax
 mov    %eax,0x14(%esp)
 lea    -0x600e(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_query_dbmw_ref(q_id,query,query_hash) values(%d,'%s',password('%s'))",0x8(%esp)
 movl   $0x4f61,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f61,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::RegisterQueryIdTable(int, char const*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager20RegisterQueryIdTableEiPKc(CDBManager *this,int param_1,char *param_2)

{
  undefined1 local_6012 [24578];
  int *local_10;
  
  local_10 = *(int **)(this + 0x18);
  memset(local_6012,0,0x6002);
  (**(code **)(*local_10 + 0x78))(local_10,local_6012,param_2);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4f61,
             "inSert into log_query_dbmw_ref(q_id,query,query_hash) values(%d,\'%s\',password(\'%s\'))"
             ,param_1,local_6012,local_6012);
  (**(code **)(*local_10 + 0x20))(local_10,0x4f61);
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2996 行）：

```cpp
char CDBManager::RegisterQueryIdTable(int queryId, const char* query)
{
    CDBHandle* h = m_handles[6];    // sso db
    char buf[0x6002];
    memset(buf, 0, 0x6002);
    h->escape_string(buf, query);
    h->set_query(0x4f61,
                 "inSert into log_query_dbmw_ref(q_id,query,query_hash) values(%d,'%s',password('%s'))",
                 queryId, buf, buf);
    h->exec(0x4f61);
    return 1;
}
```
