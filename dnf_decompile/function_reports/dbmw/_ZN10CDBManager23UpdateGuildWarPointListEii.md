# _ZN10CDBManager23UpdateGuildWarPointListEii

`CDBManager::UpdateGuildWarPointList(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8075808` | `0xc9` | `0x805c2c4` | `0xc9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,54 +1,54 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0xa,0x10(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"upDate guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d",0x8(%esp)
 movl   $0x4e3d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager23UpdateGuildWarPointListEii+0x93>
 movl   $0x9d2,0x8(%esp)
 movl   $"UpdateGuildWarPointList",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0xa,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::UpdateGuildWarPointList() update guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager23UpdateGuildWarPointListEii+0xc7>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e3d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager23UpdateGuildWarPointListEii+0xc2>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager23UpdateGuildWarPointListEii+0xc7>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateGuildWarPointList(int, int) */

undefined4 CDBManager::_ZN10CDBManager23UpdateGuildWarPointListEii(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [12];
  int *local_10;
  
  local_10 = *(int **)(param_1 + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e3d,
                     "upDate guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d"
                     ,param_2,10);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(*local_10 + 0x20))(local_10,0x4e3d);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"UpdateGuildWarPointList",0x9d2);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr",
               "CDBManager::UpdateGuildWarPointList() update guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d"
               ,param_2,10);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4167 行）：

```cpp
char CDBManager::UpdateGuildWarPointList(int serverId, int rank)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e3d,
                      "upDate guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d",
                      serverId, 0xa))
    {
        CMyFileLog log("UpdateGuildWarPointList", 0x9d2);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildWarPointList() update guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d",
            serverId, 0xa);
        return 0;
    }
    bool ret = h->exec(0x4e3d);
    if (!ret)
        return 0;
    return 1;
}
```
