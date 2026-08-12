# _ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi

`CGuildCargo::InsertItem(DnfItemInfo&, int&, int, unsigned char, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f4e2` | `0x1ec` | `0x80917e4` | `0x1e3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,135 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x18(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo11IsValidSlotEi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x34>
 mov    $0xc4,%eax
-jmp    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1e4>
+jmp    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1db>
 cmpb   $0x1,-0x3c(%ebp)
-jne    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1bc>
+jne    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1b9>
 mov    0xc(%ebp),%eax
 mov    0x1(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo19GetSpecificItemSlotEi>
 mov    %eax,-0x24(%ebp)
 cmpl   $0xffffffff,-0x24(%ebp)
-je     <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1bc>
+je     <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1b9>
 mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%eax
 mov    %eax,-0x20(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x6(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    -0x20(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 cmp    0x14(%ebp),%eax
-jg     <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x133>
+jg     <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x130>
 mov    -0x24(%ebp),%ebx
 mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%edx
-mov    0xc(%ebp),%eax
-mov    0x6(%eax),%eax
+mov    -0x1c(%ebp),%eax
 lea    (%edx,%eax,1),%ecx
 mov    0x8(%ebp),%eax
 imul   $0x35,%ebx,%edx
 mov    %ecx,0x6(%edx,%eax,1)
 mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%edi
 mov    0xc(%ebp),%eax
 mov    0x1(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    0x18e0(%eax),%ebx
 movl   $0x89,0x8(%esp)
 movl   $&_ZZN11CGuildCargo10InsertItemER11DnfItemInfoRiihiE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x20(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"InsertItem STACKABLE ADD SUCCESS - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, ADD:%d, CURR:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x10(%ebp),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,(%eax)
 mov    $0xc1,%eax
-jmp    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1e4>
+jmp    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1db>
 mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x6(%edx,%eax,1),%edi
 mov    0xc(%ebp),%eax
 mov    0x1(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    0x18e0(%eax),%ebx
 movl   $0x96,0x8(%esp)
 movl   $&_ZZN11CGuildCargo10InsertItemER11DnfItemInfoRiihiE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x24(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"InsertItem STACKABLE ADD OVER STACK LIMIT - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, ADD:%d, LMT:%d, CURR:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x10(%ebp),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,(%eax)
 mov    $0xc8,%eax
-jmp    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1e4>
+jmp    <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi+0x1db>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    0x1c(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo7AddItemER11DnfItemInfoii>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::InsertItem(DnfItemInfo&, int&, int, unsigned char, int) */

undefined4 __thiscall
CGuildCargo::_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi
          (CGuildCargo *this,DnfItemInfo *param_1,int *param_2,int param_3,uchar param_4,int param_5
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  
  cVar3 = IsValidSlot(this,*param_2);
  if (cVar3 == '\x01') {
    if ((param_4 == '\x01') &&
       (local_28 = GetSpecificItemSlot(this,*(int *)(param_1 + 1)), local_28 != -1)) {
      local_24 = *(int *)(this + local_28 * 0x35 + 6);
      local_20 = *(int *)(param_1 + 6);
      if (local_24 + local_20 <= param_3) {
        *(int *)(this + local_28 * 0x35 + 6) =
             *(int *)(this + local_28 * 0x35 + 6) + *(int *)(param_1 + 6);
        uVar4 = *(undefined4 *)(this + local_28 * 0x35 + 6);
        uVar1 = *(undefined4 *)(param_1 + 1);
        uVar2 = *(undefined4 *)(this + 0x18e0);
        CMyFileLog::CMyFileLog(local_3c,"InsertItem",0x89);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_3c,"./log/GuildCargo",
                   "InsertItem STACKABLE ADD SUCCESS - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, ADD:%d, CURR:%d"
                   ,uVar2,param_5,uVar1,local_24,local_20,uVar4);
        *param_2 = local_28;
        return 0xc1;
      }
      uVar4 = *(undefined4 *)(this + local_28 * 0x35 + 6);
      uVar1 = *(undefined4 *)(param_1 + 1);
      uVar2 = *(undefined4 *)(this + 0x18e0);
      CMyFileLog::CMyFileLog(local_34,"InsertItem",0x96);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/GuildCargo",
                 "InsertItem STACKABLE ADD OVER STACK LIMIT - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, ADD:%d, LMT:%d, CURR:%d"
                 ,uVar2,param_5,uVar1,local_24,local_20,param_3,uVar4);
      *param_2 = local_28;
      return 200;
    }
    uVar4 = AddItem(this,param_1,*param_2,param_5);
  }
  else {
    uVar4 = 0xc4;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 207 行）：

```cpp
int CGuildCargo::InsertItem(DnfItemInfo& info, int& slot, int count, unsigned char a, int b)
{
    if (!IsValidSlot(slot))
    {
        return 0xc4;
    }
    if (a == 1)
    {
        int existingSlot = GetSpecificItemSlot(info.m_itemId);
        if (existingSlot != -1)
        {
            int oldCount = m_info.m_items[existingSlot].m_addInfo;
            int addCount = info.m_addInfo;
            if (oldCount + addCount <= count)
            {
                m_info.m_items[existingSlot].m_addInfo =
                    m_info.m_items[existingSlot].m_addInfo + addCount;
                DNF_LOG_SCOPE_LINE(0x89,"./log/GuildCargo",
                    "InsertItem STACKABLE ADD SUCCESS - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, ADD:%d, CURR:%d",
                    m_guildKey, b, info.m_itemId,
                    oldCount, addCount, m_info.m_items[existingSlot].m_addInfo);
                slot = existingSlot;
                return 0xc1;
            }
            DNF_LOG_SCOPE_LINE(0x96,"./log/GuildCargo",
                "InsertItem STACKABLE ADD OVER STACK LIMIT - GUILD:%d, CHARAC:%d, ITEM:%d, OLD:%d, ADD:%d, LMT:%d, CURR:%d",
                m_guildKey, b, info.m_itemId,
                oldCount, addCount, count, m_info.m_items[existingSlot].m_addInfo);
            slot = existingSlot;
            return 200;
        }
    }
    return AddItem(info, slot, b);
}
```
