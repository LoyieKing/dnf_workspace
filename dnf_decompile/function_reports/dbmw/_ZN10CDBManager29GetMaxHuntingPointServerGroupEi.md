# _ZN10CDBManager29GetMaxHuntingPointServerGroupEi

`CDBManager::GetMaxHuntingPointServerGroup(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80828f8` | `0x12f` | `0x8051a36` | `0x124` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,91 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-movb   $0x0,-0xd(%ebp)
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect server_info from village_attacked_server_point_rank where occ_date = cast(from_unixtime(%d) as date) order by hunting_point desc limit 1",0x8(%esp)
 movl   $0x4ee0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4ee0,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0xa4>
+je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x7f>
 movl   $0x1dc9,0x8(%esp)
 movl   $&_ZZN10CDBManager29GetMaxHuntingPointServerGroupEiE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"GetMaxHuntingPointServerGroup Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x12d>
+jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x122>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4ee0,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0xa7>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x122>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0xc6>
+je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0xc9>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x12d>
+jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x122>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0xed>
+je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0xe9>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x12d>
-movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x122>
+movl   $0x0,-0x10(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x12a>
+je     <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x11f>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x12d>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi+0x122>
+mov    -0x10(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::GetMaxHuntingPointServerGroup(int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager29GetMaxHuntingPointServerGroupEi(CDBManager *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_11 = 0;
  local_10 = *(int **)(this + 0x18);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4ee0,
             "seLect server_info from village_attacked_server_point_rank where occ_date = cast(from_unixtime(%d) as date) order by hunting_point desc limit 1"
             ,param_1);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4ee0);
  if (local_11 == '\x01') {
    iVar2 = (**(code **)(*local_10 + 0x6c))(local_10);
    if (iVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_11 = (**(code **)(*local_10 + 0x24))(local_10);
      if (local_11 == '\x01') {
        local_20 = 0;
        cVar1 = (**(code **)(*local_10 + 0x34))(local_10,0,&local_20);
        if (cVar1 != '\x01') {
          local_20 = 0;
        }
      }
      else {
        local_20 = 0;
      }
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"GetMaxHuntingPointServerGroup",0x1dc9);
    CMyFileLog::operator()(local_1c,"./log/DBQueryErr","GetMaxHuntingPointServerGroup Error\n");
    local_20 = 0;
  }
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1348 行）：

```cpp
int CDBManager::GetMaxHuntingPointServerGroup(int serverId)
{
    CDBHandle* h = m_handles[6];    // sso db
    if (!h->set_query(0x4ee0,
                      "seLect server_info from village_attacked_server_point_rank where occ_date = cast(from_unixtime(%d) as date) order by hunting_point desc limit 1",
                      serverId))
    {
        CMyFileLog log(__FUNCTION__, 0x1dc9);
        log("./log/DBQueryErr", "GetMaxHuntingPointServerGroup Error\n");
        return 0;
    }
    if (!h->exec(0x4ee0))
        return 0;
    if (h->get_n_rows() == 0)
        return 0;
    if (!h->fetch())
        return 0;
    int result = 0;
    if (!h->get_int(0, result))
        return 0;
    return result;
}
```
