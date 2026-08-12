# _ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR

`CGuildCargo::PrintCargo(ENUM_GUILD_CARGO_BEHAVIOR)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809fe9e` | `0xed` | `0x809219e` | `0xee` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x4c,%esp
-mov    0xc(%ebp),%edi
-mov    0x8(%ebp),%eax
-mov    0x18d8(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x18e0(%eax),%ebx
+sub    $0x48,%esp
 movl   $0x18d,0x8(%esp)
 movl   $&_ZZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIORE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%ecx
+mov    0x8(%ebp),%eax
+mov    0x18d8(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x18e0(%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CARGO - g:%d,capa:%d,behavior:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0xd2>
-mov    -0x1c(%ebp),%edx
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0xd3>
+mov    -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x1(%edx,%eax,1),%eax
 test   %eax,%eax
-je     <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0xce>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0xcf>
+mov    -0x10(%ebp),%eax
 imul   $0x35,%eax,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x195,0x8(%esp)
 movl   $&_ZZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIORE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SLOT - %d,%s",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x18d8(%eax),%eax
-cmp    -0x1c(%ebp),%eax
-setg   %al
+cmp    %eax,%edx
+setb   %al
 test   %al,%al
-jne    <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0x69>
-add    $0x4c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+jne    <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0x66>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::PrintCargo(ENUM_GUILD_CARGO_BEHAVIOR) */

void __thiscall
CGuildCargo::_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR
          (CGuildCargo *this,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  int local_20;
  
  uVar2 = *(undefined4 *)(this + 0x18d8);
  uVar1 = *(undefined4 *)(this + 0x18e0);
  CMyFileLog::CMyFileLog(local_30,"PrintCargo",0x18d);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_30,"./log/GuildCargo","CARGO - g:%d,capa:%d,behavior:%d",uVar1,uVar2,param_2);
  for (local_20 = 0; local_20 < *(int *)(this + 0x18d8); local_20 = local_20 + 1) {
    if (*(int *)(this + local_20 * 0x35 + 1) != 0) {
      uVar2 = PrintDnfItemInfo((DnfItemInfo *)(this + local_20 * 0x35));
      CMyFileLog::CMyFileLog(local_28,"PrintCargo",0x195);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/GuildCargo","SLOT - %d,%s",local_20,uVar2,param_2);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 388 行）：

```cpp
void CGuildCargo::PrintCargo(ENUM_GUILD_CARGO_BEHAVIOR behavior)
{
    CMyFileLog log0(__FUNCTION__, 0x18d);
    log0("./log/GuildCargo", "CARGO - g:%d,capa:%d,behavior:%d",
         m_guildKey, m_info.m_capacity,
         (int)behavior);
    for (int i = 0; i < m_info.m_capacity; i++)
    {
        if (m_info.m_items[i].m_itemId != 0)
        {
            const char* itemDesc = PrintDnfItemInfo(m_info.m_items[i]);
            DNF_LOG_SCOPE_LINE(0x195, "./log/GuildCargo", "SLOT - %d,%s", i, itemDesc);
        }
    }
}
```
