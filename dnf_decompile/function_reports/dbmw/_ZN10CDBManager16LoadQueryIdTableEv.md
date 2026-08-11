# _ZN10CDBManager16LoadQueryIdTableEv

`CDBManager::LoadQueryIdTable()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8076f44` | `0x14c` | `0x805822a` | `0x144` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,98 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $"seLect q_id from log_query_dbmw_ref",0x8(%esp)
 movl   $0x4f61,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x79>
 movl   $0xcb6,0x8(%esp)
 movl   $&_ZZN10CDBManager16LoadQueryIdTableEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"seLect q_id from log_query_dbmw_ref",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x146>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x13e>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f61,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-movzbl %al,%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-jne    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0xa9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16LoadQueryIdTableEv+0xa4>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x146>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x13e>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x131>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x129>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-movzbl %al,%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x140>
-mov    -0x10(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x138>
+movl   $0x0,-0x20(%ebp)
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-movzbl %al,%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-jne    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x119>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x111>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x146>
-mov    -0x24(%ebp),%ebx
+jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x13e>
+mov    -0x20(%ebp),%ebx
 call   <T> <_Z21CQueryCounterInstancev>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter16LoadQueryIdTableEi>
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
-cmp    -0x14(%ebp),%eax
+cmp    -0x10(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0xc7>
-jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x141>
+jne    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0xc2>
+jmp    <T> <_ZN10CDBManager16LoadQueryIdTableEv+0x139>
 nop
 mov    $0x1,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::LoadQueryIdTable() */

undefined4 __thiscall CDBManager::_ZN10CDBManager16LoadQueryIdTableEv(CDBManager *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CQueryCounter *this_00;
  int local_28;
  CMyFileLog local_24 [8];
  uint local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x18);
  cVar2 = (**(code **)(*local_14 + 0x1c))(local_14,0x4f61,"seLect q_id from log_query_dbmw_ref");
  if (cVar2 == '\x01') {
    local_1c = (**(code **)(*local_14 + 0x20))(local_14,0x4f61);
    local_1c = local_1c & 0xff;
    if (local_1c == 0) {
      uVar3 = 0;
    }
    else {
      local_18 = (**(code **)(*local_14 + 0x6c))(local_14);
      for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
        local_1c = (**(code **)(*local_14 + 0x24))(local_14);
        local_1c = local_1c & 0xff;
        if (local_1c == 0) break;
        local_1c = (**(code **)(*local_14 + 0x34))(local_14,0,&local_28);
        iVar1 = local_28;
        local_1c = local_1c & 0xff;
        if (local_1c == 0) {
          return 0;
        }
        this_00 = (CQueryCounter *)CQueryCounterInstance();
        CQueryCounter::LoadQueryIdTable(this_00,iVar1);
      }
      uVar3 = 1;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_24,"LoadQueryIdTable",0xcb6);
    CMyFileLog::operator()(local_24,"./log/DBQueryErr","seLect q_id from log_query_dbmw_ref");
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 3010 行）：

```cpp
char CDBManager::LoadQueryIdTable()
{
    CDBHandle* h = m_handles[6];    // sso db
    if (!h->set_query(0x4f61, "seLect q_id from log_query_dbmw_ref"))
    {
        CMyFileLog log(__FUNCTION__, 0xcb6);
        log("./log/DBQueryErr", "seLect q_id from log_query_dbmw_ref");
        return 0;
    }
    if (!h->exec(0x4f61))
        return 0;
    int n = h->get_n_rows();
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            break;
        int queryId = 0;
        if (!h->get_int(0, queryId))
            return 0;
        CQueryCounterInstance()->LoadQueryIdTable(queryId);
    }
    return 1;
}
```
