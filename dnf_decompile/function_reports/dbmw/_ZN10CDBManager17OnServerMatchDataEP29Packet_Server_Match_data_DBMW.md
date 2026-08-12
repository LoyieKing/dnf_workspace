# _ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW

`CDBManager::OnServerMatchData(Packet_Server_Match_data_DBMW*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8083de4` | `0x145` | `0x805264e` | `0x14d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,96 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0xc(%ebp),%eax
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movsbl %al,%ecx
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate pvp_score set win_count=win_count+%d,lose_count=lose_count+%d where server_id = %d and occ_date = cast(now() as date)",0x8(%esp)
 movl   $0x4ef8,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ef8,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW+0xbc>
+je     <T> <_ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW+0xc1>
 movl   $0x219d,0x8(%esp)
 movl   $&_ZZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMWE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnServerMatchData Error db ",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW+0x13f>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW+0x147>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW+0x13a>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW+0x142>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into pvp_score(server_id,occ_date,win_count,lose_count) values(%d,cast(now() as date),%d,%d)",0x8(%esp)
 movl   $0x4ef9,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ef9,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
 mov    $0x1,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnServerMatchData(Packet_Server_Match_data_DBMW*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager17OnServerMatchDataEP29Packet_Server_Match_data_DBMW
          (CDBManager *this,Packet_Server_Match_data_DBMW *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x24);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4ef8,
             "upDate pvp_score set win_count=win_count+%d,lose_count=lose_count+%d where server_id = %d and occ_date = cast(now() as date)"
             ,*(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf),(int)(char)param_1[10]);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4ef8);
  if (local_11 == '\x01') {
    lVar2 = (**(code **)(*local_10 + 0x74))(local_10);
    if (lVar2 == 0) {
      (**(code **)(*local_10 + 0x1c))
                (local_10,0x4ef9,
                 "inSert into pvp_score(server_id,occ_date,win_count,lose_count) values(%d,cast(now() as date),%d,%d)"
                 ,(int)(char)param_1[10],*(undefined4 *)(param_1 + 0xb),
                 *(undefined4 *)(param_1 + 0xf));
      (**(code **)(*local_10 + 0x20))(local_10,0x4ef9);
    }
    uVar1 = 1;
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"OnServerMatchData",0x219d);
    CMyFileLog::operator()(local_1c,"./log/Except","OnServerMatchData Error db ");
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1611 行）：

```cpp
char CDBManager::OnServerMatchData(Packet_Server_Match_data_DBMW* packet)
{
    CDBHandle* h = m_handles[9];    // event db
    char* p = (char*)packet;
    h->set_query(0x4ef8,
                 "upDate pvp_score set win_count=win_count+%d,lose_count=lose_count+%d where server_id = %d and occ_date = cast(now() as date)",
                 *(int*)(p + 0xb), *(int*)(p + 0xf),
                 *(signed char*)(p + 0xa));
    if (h->exec(0x4ef8) != 1)
    {
        CMyFileLog log(__FUNCTION__, 0x219d);
        log("./log/Except", "OnServerMatchData Error db ");
        return 0;
    }
    if (h->getAffectedRowCount() == 0)
    {
        h->set_query(0x4ef9,
                     "inSert into pvp_score(server_id,occ_date,win_count,lose_count) values(%d,cast(now() as date),%d,%d)",
                     *(signed char*)(p + 0xa), *(int*)(p + 0xb),
                     *(int*)(p + 0xf));
        h->exec(0x4ef9);
    }
    return 1;
}
```
