# _ZN10CDBManager26UpdateAccumulateGuildPointEi

`CDBManager::UpdateAccumulateGuildPoint(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80740a2` | `0x151` | `0x805c332` | `0x143` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,91 +1,87 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0",0x8(%esp)
 movl   $0x4e35,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x7c>
 movl   $0x707,0x8(%esp)
 movl   $&_ZZN10CDBManager26UpdateAccumulateGuildPointEiE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e35,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0xae>
+je     <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0xa7>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x14f>
+jmp    <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x141>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_member set member_point_prev = member_point where server_id = %d",0x8(%esp)
 movl   $0x4e37,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x11b>
+je     <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x114>
 movl   $0x712,0x8(%esp)
 movl   $&_ZZN10CDBManager26UpdateAccumulateGuildPointEiE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::UpdateGuildRank() Fatal Error Break : update guild_member set member_point_prev = member_point where server_id = %d\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e37,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x14a>
+je     <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x13c>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x14f>
+jmp    <T> <_ZN10CDBManager26UpdateAccumulateGuildPointEi+0x141>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateAccumulateGuildPoint(int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager26UpdateAccumulateGuildPointEi(CDBManager *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e35,
                     "upDate guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0"
                     ,param_1);
  if (cVar1 != '\x01') {
    CMyFileLog::CMyFileLog(local_24,"UpdateAccumulateGuildPoint",0x707);
    CMyFileLog::operator()
              (local_24,"./log/DBQueryErr",
               "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0\n"
               ,param_1);
  }
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e35);
  if (local_11 == '\x01') {
    cVar1 = (**(code **)(*local_10 + 0x1c))
                      (local_10,0x4e37,
                       "upDate guild_member set member_point_prev = member_point where server_id = %d"
                       ,param_1);
    if (cVar1 != '\x01') {
      CMyFileLog::CMyFileLog(local_1c,"UpdateAccumulateGuildPoint",0x712);
      CMyFileLog::operator()
                (local_1c,"./log/DBQueryErr",
                 "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_member set member_point_prev = member_point where server_id = %d\n"
                 ,param_1);
    }
    cVar1 = (**(code **)(*local_10 + 0x20))(local_10,0x4e37);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4199 行）：

```cpp
char CDBManager::UpdateAccumulateGuildPoint(int serverId)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e35,
                      "upDate guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0",
                      serverId))
    {
        CMyFileLog log(__FUNCTION__, 0x707);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0\n",
            serverId);
    }
    if (!h->exec(0x4e35))
        return 0;
    if (!h->set_query(0x4e37,
                      "upDate guild_member set member_point_prev = member_point where server_id = %d",
                      serverId))
    {
        CMyFileLog log(__FUNCTION__, 0x712);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_member set member_point_prev = member_point where server_id = %d\n",
            serverId);
    }
    if (!h->exec(0x4e37))
        return 0;
    return 1;
}
```
