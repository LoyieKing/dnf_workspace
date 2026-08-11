# _ZN11CGuildCargo7AddItemER11DnfItemInfoii

`CGuildCargo::AddItem(DnfItemInfo&, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f30a` | `0x17b` | `0x80915fc` | `0x13f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,90 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
+mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
+imul   $0x35,%edx,%edx
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN11CGuildCargo7AddItemER11DnfItemInfoii+0xc0>
+mov    0x8(%ebp),%edx
+mov    0x10(%ebp),%eax
+imul   $0x35,%eax,%eax
+add    %eax,%edx
+movl   $0x35,0x8(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
 mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%eax
-test   %eax,%eax
-jne    <T> <_ZN11CGuildCargo7AddItemER11DnfItemInfoii+0x102>
-mov    0x10(%ebp),%edx
+add    $0x18dc,%eax
+mov    0x8(%ebp),%edx
+add    $0x18dc,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
+mov    0xc(%ebp),%eax
+add    $0x1,%eax
+mov    (%eax),%esi
 mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0xc(%ebp),%ecx
-mov    (%ecx),%ebx
-mov    %ebx,(%edx,%eax,1)
-mov    0x4(%ecx),%ebx
-mov    %ebx,0x4(%edx,%eax,1)
-mov    0x8(%ecx),%ebx
-mov    %ebx,0x8(%edx,%eax,1)
-mov    0xc(%ecx),%ebx
-mov    %ebx,0xc(%edx,%eax,1)
-mov    0x10(%ecx),%ebx
-mov    %ebx,0x10(%edx,%eax,1)
-mov    0x14(%ecx),%ebx
-mov    %ebx,0x14(%edx,%eax,1)
-mov    0x18(%ecx),%ebx
-mov    %ebx,0x18(%edx,%eax,1)
-mov    0x1c(%ecx),%ebx
-mov    %ebx,0x1c(%edx,%eax,1)
-mov    0x20(%ecx),%ebx
-mov    %ebx,0x20(%edx,%eax,1)
-mov    0x24(%ecx),%ebx
-mov    %ebx,0x24(%edx,%eax,1)
-mov    0x28(%ecx),%ebx
-mov    %ebx,0x28(%edx,%eax,1)
-mov    0x2c(%ecx),%ebx
-mov    %ebx,0x2c(%edx,%eax,1)
-mov    0x30(%ecx),%ebx
-mov    %ebx,0x30(%edx,%eax,1)
-movzbl 0x34(%ecx),%ecx
-mov    %cl,0x34(%edx,%eax,1)
-mov    0x8(%ebp),%eax
-mov    0x18dc(%eax),%eax
-lea    0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x18dc(%eax)
-mov    0xc(%ebp),%eax
-mov    0x1(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x18e0(%eax),%ebx
+add    $0x18e0,%eax
+mov    (%eax),%ebx
 movl   $0x4b,0x8(%esp)
 movl   $&_ZZN11CGuildCargo7AddItemER11DnfItemInfoiiE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"AddItem SUCCESS - GUILD:%d, CHARAC:%d, ITEM:%d, SLOT:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0xc1,%eax
-jmp    <T> <_ZN11CGuildCargo7AddItemER11DnfItemInfoii+0x173>
+jmp    <T> <_ZN11CGuildCargo7AddItemER11DnfItemInfoii+0x137>
+mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
+imul   $0x35,%edx,%edx
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%edi
+mov    0xc(%ebp),%eax
+add    $0x1,%eax
+mov    (%eax),%esi
 mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%edi
-mov    0xc(%ebp),%eax
-mov    0x1(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x18e0(%eax),%ebx
+add    $0x18e0,%eax
+mov    (%eax),%ebx
 movl   $0x54,0x8(%esp)
 movl   $&_ZZN11CGuildCargo7AddItemER11DnfItemInfoiiE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x1c(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"AddItem ITEM ALREADY EXIST - GUILD:%d, CHARAC:%d, INSERT ITEM:%d, SLOT:%d, AREADY ITEM:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0xc9,%eax
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::AddItem(DnfItemInfo&, int, int) */

undefined4 __thiscall
CGuildCargo::_ZN11CGuildCargo7AddItemER11DnfItemInfoii
          (CGuildCargo *this,DnfItemInfo *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  if (*(int *)(this + param_2 * 0x35 + 1) == 0) {
    iVar4 = param_2 * 0x35;
    *(undefined4 *)(this + iVar4) = *(undefined4 *)param_1;
    *(undefined4 *)(this + iVar4 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + iVar4 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + iVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + iVar4 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + iVar4 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(this + iVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + iVar4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(this + iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(this + iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(this + iVar4 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(this + iVar4 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    this[iVar4 + 0x34] = *(CGuildCargo *)(param_1 + 0x34);
    *(int *)(this + 0x18dc) = *(int *)(this + 0x18dc) + 1;
    uVar3 = *(undefined4 *)(param_1 + 1);
    uVar1 = *(undefined4 *)(this + 0x18e0);
    CMyFileLog::CMyFileLog(local_2c,"AddItem",0x4b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/GuildCargo","AddItem SUCCESS - GUILD:%d, CHARAC:%d, ITEM:%d, SLOT:%d"
               ,uVar1,param_3,uVar3,param_2);
    uVar3 = 0xc1;
  }
  else {
    uVar3 = *(undefined4 *)(this + param_2 * 0x35 + 1);
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar2 = *(undefined4 *)(this + 0x18e0);
    CMyFileLog::CMyFileLog(local_24,"AddItem",0x54);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/GuildCargo",
               "AddItem ITEM ALREADY EXIST - GUILD:%d, CHARAC:%d, INSERT ITEM:%d, SLOT:%d, AREADY ITEM:%d"
               ,uVar2,param_3,uVar1,param_2,uVar3);
    uVar3 = 0xc9;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 153 行）：

```cpp
int CGuildCargo::AddItem(DnfItemInfo& info, int slot, int count)
{
    if (*(int*)((char*)this + slot * 0x35 + 1) == 0)
    {
        memcpy((char*)this + slot * 0x35, &info, 0x35);
        *(int*)((char*)this + 0x18dc) += 1;
        DNF_LOG_SCOPE_LINE(0x4b,"./log/GuildCargo",
            "AddItem SUCCESS - GUILD:%d, CHARAC:%d, ITEM:%d, SLOT:%d",
            *(int*)((char*)this + 0x18e0), count, *(int*)((char*)&info + 1), slot);
        return 0xc1;
    }
    DNF_LOG_SCOPE_LINE(0x54,"./log/GuildCargo",
        "AddItem ITEM ALREADY EXIST - GUILD:%d, CHARAC:%d, INSERT ITEM:%d, SLOT:%d, AREADY ITEM:%d",
        *(int*)((char*)this + 0x18e0), count, *(int*)((char*)&info + 1), slot,
        *(int*)((char*)this + slot * 0x35 + 1));
    return 0xc9;
}
```
