# _ZN10CDBManager19OnUpgradeGuildCargoEP29Packet_DB_Guild_Cargo_Upgrade

`CDBManager::OnUpgradeGuildCargo(Packet_DB_Guild_Cargo_Upgrade*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x80815a6` | `0xd8` | `0x805c704` | `0xd8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_agit set cargo_capacity=%d where guild_id=%d",0x8(%esp)
 movl   $0x4edc,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4edc,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19OnUpgradeGuildCargoEP29Packet_DB_Guild_Cargo_Upgrade+0xcb>
 mov    0xc(%ebp),%eax
 mov    0x12(%eax),%edi
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%esi
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x1bec,0x8(%esp)
 movl   $&_ZZN10CDBManager19OnUpgradeGuildCargoEP29Packet_DB_Guild_Cargo_UpgradeE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"OnUpgradeGuildCargo Query Error(G:%d,U:%d,Capa:%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager19OnUpgradeGuildCargoEP29Packet_DB_Guild_Cargo_Upgrade+0xd0>
 mov    $0x1,%eax
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnUpgradeGuildCargo(Packet_DB_Guild_Cargo_Upgrade*) */

bool __thiscall
CDBManager::_ZN10CDBManager19OnUpgradeGuildCargoEP29Packet_DB_Guild_Cargo_Upgrade
          (CDBManager *this,Packet_DB_Guild_Cargo_Upgrade *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  
  local_20 = *(int **)(this + 0x20);
  (**(code **)(*local_20 + 0x1c))
            (local_20,0x4edc,"upDate guild_agit set cargo_capacity=%d where guild_id=%d",
             *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 10));
  local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4edc);
  bVar4 = local_21 == '\x01';
  if (!bVar4) {
    uVar1 = *(undefined4 *)(param_1 + 0x12);
    uVar2 = *(undefined4 *)(param_1 + 0xe);
    uVar3 = *(undefined4 *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_2c,"OnUpgradeGuildCargo",0x1bec);
    CMyFileLog::operator()
              (local_2c,"./log/DBQueryErr","OnUpgradeGuildCargo Query Error(G:%d,U:%d,Capa:%d)",
               uVar3,uVar2,uVar1);
  }
  return bVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4281 行）：

```cpp
char CDBManager::OnUpgradeGuildCargo(Packet_DB_Guild_Cargo_Upgrade* packet)
{
    bool ret;
    CDBHandle* h = m_handles[8];    // guild db
    h->set_query(0x4edc,
                 "upDate guild_agit set cargo_capacity=%d where guild_id=%d",
                 ((GuildCargoUpgradeView*)packet)->m_field12,
                 ((GuildCargoUpgradeView*)packet)->m_fieldA);
    ret = h->exec(0x4edc);
    if (!ret)
    {
        register unsigned int c =
            ((GuildCargoUpgradeView*)packet)->m_field12;
        register unsigned int u =
            ((GuildCargoUpgradeView*)packet)->m_fieldE;
        register unsigned int g =
            ((GuildCargoUpgradeView*)packet)->m_fieldA;
        CMyFileLog log(__FUNCTION__, 0x1bec);
        log("./log/DBQueryErr",
            "OnUpgradeGuildCargo Query Error(G:%d,U:%d,Capa:%d)",
            g, u, c);
        return 0;
    }
    return 1;
}
```
