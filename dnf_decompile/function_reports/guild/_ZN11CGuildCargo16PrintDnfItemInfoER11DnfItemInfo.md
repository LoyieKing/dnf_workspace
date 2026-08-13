# _ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo

`CGuildCargo::PrintDnfItemInfo(DnfItemInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809ff8c` | `0xea` | `0x8093524` | `0xef` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,69 +1,65 @@
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CARGO - g:%d,capa:%d,behavior:%d",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0xd2>
+mov    -0x1c(%ebp),%edx
+mov    0x8(%ebp),%eax
+imul   $0x35,%edx,%edx
+mov    0x1(%edx,%eax,1),%eax
+test   %eax,%eax
+je     <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0xce>
+mov    -0x1c(%ebp),%eax
+imul   $0x35,%eax,%eax
+add    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo>
+mov    %eax,%ebx
+movl   $0x195,0x8(%esp)
+movl   $&_ZZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIORE12__FUNCTION__,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"SLOT - %d,%s",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x18d8(%eax),%eax
+cmp    -0x1c(%ebp),%eax
+setg   %al
+test   %al,%al
+jne    <T> <_ZN11CGuildCargo10PrintCargoE25ENUM_GUILD_CARGO_BEHAVIOR+0x69>
+add    $0x4c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
+ret
+nop
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $&_ZZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfoE8szBuffer,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x2b,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
-movzbl %al,%esi
-mov    0x8(%ebp),%eax
-movzwl 0x11(%eax),%eax
-movzwl %ax,%edi
-mov    0x8(%ebp),%eax
-movzbl 0x10(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x28(%ebp)
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,-0x24(%ebp)
-mov    0x8(%ebp),%eax
-movzwl 0xa(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x20(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x6(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    0x8(%ebp),%eax
-movzbl 0x5(%eax),%eax
-and    $0x1f,%eax
 movzbl %al,%ebx
 mov    0x8(%ebp),%eax
-movzbl 0x5(%eax),%eax
-shr    $0x5,%al
-movzbl %al,%ecx
-mov    0x8(%ebp),%eax
-movzbl (%eax),%eax
-movzbl %al,%edx
-mov    0x8(%ebp),%eax
-mov    0x1(%eax),%eax
-mov    %esi,0x2c(%esp)
-mov    %edi,0x28(%esp)
-mov    -0x28(%ebp),%esi
-mov    %esi,0x24(%esp)
-mov    -0x24(%ebp),%esi
-mov    %esi,0x20(%esp)
-mov    -0x20(%ebp),%esi
-mov    %esi,0x1c(%esp)
-mov    -0x1c(%ebp),%esi
-mov    %esi,0x18(%esp)
-mov    %ebx,0x14(%esp)
-mov    %ecx,0x10(%esp)
-mov    %edx,0xc(%esp)
-mov    %eax,0x8(%esp)
-movl   $"id:%d,s:%d,sc:%d,up:%d,add:%d,en:%d,ex:%d,at:%d,av:%d,sp:%d",0x4(%esp)
-movl   $&_ZZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfoE8szBuffer,(%esp)
-call   <T> <sprintf>
-mov    $&_ZZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfoE8szBuffer,%eax
-add    $0x4c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::PrintDnfItemInfo(DnfItemInfo&) */

undefined1 * CGuildCargo::_ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo(DnfItemInfo *param_1)

{
  uint uVar1;
  
  memset(PrintDnfItemInfo(DnfItemInfo&)::szBuffer,0,0x400);
  uVar1 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x2b));
  sprintf(PrintDnfItemInfo(DnfItemInfo&)::szBuffer,
          "id:%d,s:%d,sc:%d,up:%d,add:%d,en:%d,ex:%d,at:%d,av:%d,sp:%d",*(undefined4 *)(param_1 + 1)
          ,(uint)(byte)*param_1,(uint)((byte)param_1[5] >> 5),(uint)((byte)param_1[5] & 0x1f),
          *(undefined4 *)(param_1 + 6),(uint)*(ushort *)(param_1 + 10),
          *(undefined4 *)(param_1 + 0xc),(uint)(byte)param_1[0x10],(uint)*(ushort *)(param_1 + 0x11)
          ,uVar1 & 0xff);
  return PrintDnfItemInfo(DnfItemInfo&)::szBuffer;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 400 行）：

```cpp
const char* CGuildCargo::PrintDnfItemInfo(DnfItemInfo& info)
{
    static char szBuffer[0x400];
    memset(szBuffer, 0, sizeof(szBuffer));
    sprintf(szBuffer,
            "id:%d,s:%d,sc:%d,up:%d,add:%d,en:%d,ex:%d,at:%d,av:%d,sp:%d",
            info.m_itemId,
            (unsigned int)(unsigned char)info.m_seal,
            (unsigned int)(unsigned char)(info.m_attr >> 5),
            (unsigned int)(unsigned char)(info.m_attr & 0x1f),
            info.m_addInfo,
            (unsigned int)info.m_endurance,
            info.m_extendInfo,
            (unsigned int)(unsigned char)info.m_abilityType,
            (unsigned int)info.m_abilityValue,
            (unsigned int)info.m_up.GetUpgradeSeparate());
    return szBuffer;
}
```
