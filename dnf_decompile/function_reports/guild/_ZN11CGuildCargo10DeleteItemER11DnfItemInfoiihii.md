# _ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii

`CGuildCargo::DeleteItem(DnfItemInfo&, int, int, unsigned char, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x809f75e` | `0x239` | `0x8092dc2` | `0x239` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,164 +1,164 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x18(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo11IsValidSlotEi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x32>
 mov    $0xc4,%eax
 jmp    <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x231>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x1(%edx,%eax,1),%eax
 test   %eax,%eax
 je     <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x57>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x1(%edx,%eax,1),%edx
 mov    0x14(%ebp),%eax
 cmp    %eax,%edx
 je     <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x61>
 mov    $0xca,%eax
 jmp    <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x231>
 mov    0x10(%ebp),%ecx
 mov    0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 imul   $0x35,%ecx,%ecx
 mov    (%ecx,%edx,1),%ebx
 mov    %ebx,(%eax)
 mov    0x4(%ecx,%edx,1),%ebx
 mov    %ebx,0x4(%eax)
 mov    0x8(%ecx,%edx,1),%ebx
 mov    %ebx,0x8(%eax)
 mov    0xc(%ecx,%edx,1),%ebx
 mov    %ebx,0xc(%eax)
 mov    0x10(%ecx,%edx,1),%ebx
 mov    %ebx,0x10(%eax)
 mov    0x14(%ecx,%edx,1),%ebx
 mov    %ebx,0x14(%eax)
 mov    0x18(%ecx,%edx,1),%ebx
 mov    %ebx,0x18(%eax)
 mov    0x1c(%ecx,%edx,1),%ebx
 mov    %ebx,0x1c(%eax)
 mov    0x20(%ecx,%edx,1),%ebx
 mov    %ebx,0x20(%eax)
 mov    0x24(%ecx,%edx,1),%ebx
 mov    %ebx,0x24(%eax)
 mov    0x28(%ecx,%edx,1),%ebx
 mov    %ebx,0x28(%eax)
 mov    0x2c(%ecx,%edx,1),%ebx
 mov    %ebx,0x2c(%eax)
 mov    0x30(%ecx,%edx,1),%ebx
 mov    %ebx,0x30(%eax)
 movzbl 0x34(%ecx,%edx,1),%edx
 mov    %dl,0x34(%eax)
 cmpb   $0x1,-0x3c(%ebp)
 jne    <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x1c7>
+mov    0x1c(%ebp),%edx
 mov    0xc(%ebp),%eax
-mov    0x1c(%ebp),%edx
 mov    %edx,0x6(%eax)
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%eax
 mov    %eax,-0x20(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x6(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
 jge    <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x10c>
 mov    $0xc7,%eax
 jmp    <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x231>
 mov    0x10(%ebp),%ebx
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%edx
 mov    0xc(%ebp),%eax
 mov    0x6(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    0x8(%ebp),%eax
 imul   $0x35,%ebx,%edx
 mov    %ecx,0x6(%edx,%eax,1)
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%eax
 test   %eax,%eax
 jne    <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x152>
 mov    0x10(%ebp),%eax
 imul   $0x35,%eax,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11DnfItemInfo5resetEv>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%edi
 mov    0xc(%ebp),%eax
 mov    0x1(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    0x18e0(%eax),%ebx
 movl   $0xee,0x8(%esp)
 movl   $&_ZZN11CGuildCargo10DeleteItemER11DnfItemInfoiihiiE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x20(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"DeleteItem STACKABLE DELETE SUCCESS(Stackable) - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, SUB:%d, CURR:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii+0x22c>
 mov    0x10(%ebp),%eax
 imul   $0x35,%eax,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11DnfItemInfo5resetEv>
 mov    0xc(%ebp),%eax
 mov    0x1(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    0x18e0(%eax),%ebx
 movl   $0xfa,0x8(%esp)
 movl   $&_ZZN11CGuildCargo10DeleteItemER11DnfItemInfoiihiiE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"DeleteItem STACKABLE DELETE SUCCESS(Equip) - GUILD:%d, CHARAC:%d, ITEM:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0xc1,%eax
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::DeleteItem(DnfItemInfo&, int, int, unsigned char, int, int) */

undefined4 __thiscall
CGuildCargo::_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii
          (CGuildCargo *this,DnfItemInfo *param_1,int param_2,int param_3,uchar param_4,int param_5,
          int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  int local_24;
  int local_20;
  
  cVar3 = IsValidSlot(this,param_2);
  if (cVar3 == '\x01') {
    if ((*(int *)(this + param_2 * 0x35 + 1) == 0) ||
       (*(int *)(this + param_2 * 0x35 + 1) != param_3)) {
      uVar4 = 0xca;
    }
    else {
      iVar5 = param_2 * 0x35;
      *(undefined4 *)param_1 = *(undefined4 *)(this + iVar5);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + iVar5 + 4);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + iVar5 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + iVar5 + 0xc);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + iVar5 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + iVar5 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + iVar5 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + iVar5 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + iVar5 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + iVar5 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this + iVar5 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + iVar5 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + iVar5 + 0x30);
      *(CGuildCargo *)(param_1 + 0x34) = this[iVar5 + 0x34];
      if (param_4 == '\x01') {
        *(int *)(param_1 + 6) = param_5;
        local_24 = *(int *)(this + param_2 * 0x35 + 6);
        local_20 = *(int *)(param_1 + 6);
        if (local_24 < local_20) {
          return 199;
        }
        *(int *)(this + param_2 * 0x35 + 6) =
             *(int *)(this + param_2 * 0x35 + 6) - *(int *)(param_1 + 6);
        if (*(int *)(this + param_2 * 0x35 + 6) == 0) {
          DnfItemInfo::reset((DnfItemInfo *)(this + param_2 * 0x35));
        }
        uVar4 = *(undefined4 *)(this + param_2 * 0x35 + 6);
        uVar1 = *(undefined4 *)(param_1 + 1);
        uVar2 = *(undefined4 *)(this + 0x18e0);
        CMyFileLog::CMyFileLog(local_34,"DeleteItem",0xee);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/GuildCargo",
                   "DeleteItem STACKABLE DELETE SUCCESS(Stackable) - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, SUB:%d, CURR:%d"
                   ,uVar2,param_6,uVar1,local_24,local_20,uVar4);
      }
      else {
        DnfItemInfo::reset((DnfItemInfo *)(this + param_2 * 0x35));
        uVar4 = *(undefined4 *)(param_1 + 1);
        uVar1 = *(undefined4 *)(this + 0x18e0);
        CMyFileLog::CMyFileLog(local_2c,"DeleteItem",0xfa);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_2c,"./log/GuildCargo",
                   "DeleteItem STACKABLE DELETE SUCCESS(Equip) - GUILD:%d, CHARAC:%d, ITEM:%d",uVar1
                   ,param_6,uVar4);
      }
      uVar4 = 0xc1;
    }
  }
  else {
    uVar4 = 0xc4;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 269 行）：

```cpp
int CGuildCargo::DeleteItem(DnfItemInfo& info, int slot, int count, unsigned char a, int b, int c)
{
    if (!IsValidSlot(slot))
    {
        return 0xc4;
    }
    if (m_info.m_items[slot].m_itemId == 0 ||
        m_info.m_items[slot].m_itemId != count)
    {
        return 0xca;
    }
    info = m_info.m_items[slot];
    if (a == 1)
    {
        info.m_addInfo = b;
        int oldCount = m_info.m_items[slot].m_addInfo;
        int subCount = info.m_addInfo;
        if (oldCount < subCount)
        {
            return 199;
        }
        m_info.m_items[slot].m_addInfo =
            m_info.m_items[slot].m_addInfo - info.m_addInfo;
        if (m_info.m_items[slot].m_addInfo == 0)
        {
            m_info.m_items[slot].reset();
        }
        DNF_LOG_SCOPE_LINE(0xee,"./log/GuildCargo",
            "DeleteItem STACKABLE DELETE SUCCESS(Stackable) - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, SUB:%d, CURR:%d",
            m_guildKey, c, info.m_itemId,
            oldCount, subCount, m_info.m_items[slot].m_addInfo);
    }
    else
    {
        m_info.m_items[slot].reset();
        DNF_LOG_SCOPE_LINE(0xfa,"./log/GuildCargo",
            "DeleteItem STACKABLE DELETE SUCCESS(Equip) - GUILD:%d, CHARAC:%d, ITEM:%d",
            m_guildKey, c, info.m_itemId);
    }
    return 0xc1;
}
```
