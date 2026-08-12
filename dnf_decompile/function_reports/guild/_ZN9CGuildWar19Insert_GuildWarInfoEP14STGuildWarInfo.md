# _ZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfo

`CGuildWar::Insert_GuildWarInfo(STGuildWarInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809aa7c` | `0xcb` | `0x806138a` | `0xcb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0xc(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfo+0x8b>
+jne    <T> <_ZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfo+0x47>
+movl   $0x95,0x8(%esp)
+movl   $&_ZZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfoE12__FUNCTION__,0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"[INSERT_ERR]info == 0\n",0x8(%esp)
+movl   $"./log/GuildWar",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfo+0xc1>
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    0xc(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0x90,0x8(%esp)
 movl   $&_ZZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[INSERT]\tGuild Key : %d\tGuild Point : %d\n",0x8(%esp)
 movl   $"./log/GuildWar",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0xc(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP14STGuildWarInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE9push_backEOS3_>
-jmp    <T> <_ZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfo+0xc1>
-movl   $0x95,0x8(%esp)
-movl   $&_ZZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"[INSERT_ERR]info == 0\n",0x8(%esp)
-movl   $"./log/GuildWar",0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildWar::Insert_GuildWarInfo(STGuildWarInfo*) */

void __thiscall
CGuildWar::_ZN9CGuildWar19Insert_GuildWarInfoEP14STGuildWarInfo
          (CGuildWar *this,STGuildWarInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_24 [8];
  uint local_1c [2];
  CMyFileLog local_14 [8];
  
  if (param_1 == (STGuildWarInfo *)0x0) {
    CMyFileLog::CMyFileLog(local_14,"Insert_GuildWarInfo",0x95);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/GuildWar","[INSERT_ERR]info == 0\n");
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)param_1;
    CMyFileLog::CMyFileLog(local_24,"Insert_GuildWarInfo",0x90);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/GuildWar","[INSERT]\tGuild Key : %d\tGuild Point : %d\n",uVar2,uVar1)
    ;
    std::make_pair<unsigned_int&,STGuildWarInfo*&>(local_1c,(STGuildWarInfo **)(param_1 + 4));
    std::
    vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
    ::push_back((vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
                 *)this,(pair *)local_1c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildWar.cpp](source/DNFServer/GameServer/Guild/DNFGuildWar.cpp)（约第 182 行）：

```cpp
void CGuildWar::Insert_GuildWarInfo(STGuildWarInfo* info)
{
    if (info == 0)
    {
        DNF_LOG_SCOPE_LINE(0x95, "./log/GuildWar", "[INSERT_ERR]info == 0\n");
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x90,"./log/GuildWar", "[INSERT]\tGuild Key : %d\tGuild Point : %d\n",
            info->m_guildKey, info->m_point);
        m_vtGuildWarInfo.push_back(std::make_pair(info->m_point, info));
    }
}
```
