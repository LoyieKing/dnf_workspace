# _ZN10CDBManager18OnUpdateGuildCargoEP28Packet_DB_Update_Guild_Cargo

`CDBManager::OnUpdateGuildCargo(Packet_DB_Update_Guild_Cargo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80811cc` | `0xde` | `0x805c82e` | `0xe0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x28,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0x12,%eax
 movl   $0x18d8,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_agit set cargo='%s' where guild_id=%d",0x8(%esp)
 movl   $0x4ecb,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ecb,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18OnUpdateGuildCargoEP28Packet_DB_Update_Guild_Cargo+0xd2>
+je     <T> <_ZN10CDBManager18OnUpdateGuildCargoEP28Packet_DB_Update_Guild_Cargo+0xd4>
 movl   $0x1b90,0x8(%esp)
 movl   $&_ZZN10CDBManager18OnUpdateGuildCargoEP28Packet_DB_Update_Guild_CargoE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnUpdateGuildCargo Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18OnUpdateGuildCargoEP28Packet_DB_Update_Guild_Cargo+0xd7>
+jmp    <T> <_ZN10CDBManager18OnUpdateGuildCargoEP28Packet_DB_Update_Guild_Cargo+0xd9>
 mov    $0x1,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnUpdateGuildCargo(Packet_DB_Update_Guild_Cargo*) */

bool __thiscall
CDBManager::_ZN10CDBManager18OnUpdateGuildCargoEP28Packet_DB_Update_Guild_Cargo
          (CDBManager *this,Packet_DB_Update_Guild_Cargo *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  pcVar1 = *(code **)(*local_10 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 10);
  uVar3 = (**(code **)(*local_10 + 0x28))(local_10,0,param_1 + 0x12,0x18d8);
  (*pcVar1)(local_10,0x4ecb,"upDate guild_agit set cargo=\'%s\' where guild_id=%d",uVar3,uVar2);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4ecb);
  bVar4 = local_11 == '\x01';
  if (!bVar4) {
    CMyFileLog::CMyFileLog(local_1c,"OnUpdateGuildCargo",0x1b90);
    CMyFileLog::operator()(local_1c,"./log/DBQueryErr","OnUpdateGuildCargo Query Error");
  }
  return bVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4229 行）：

```cpp
char CDBManager::OnUpdateGuildCargo(Packet_DB_Update_Guild_Cargo* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    h->set_query(0x4ecb,
                 "upDate guild_agit set cargo='%s' where guild_id=%d",
                 h->blob_to_str(0, (char*)packet + 0x12, 0x18d8),
                 *(int*)((char*)packet + 0xa));
    bool ret = h->exec(0x4ecb);
    if (!ret)
    {
        CMyFileLog log(__FUNCTION__, 0x1b90);
        log("./log/DBQueryErr", "OnUpdateGuildCargo Query Error");
        return 0;
    }
    return 1;
}
```
