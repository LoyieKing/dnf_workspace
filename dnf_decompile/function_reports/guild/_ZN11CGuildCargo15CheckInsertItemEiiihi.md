# _ZN11CGuildCargo15CheckInsertItemEiiihi

`CGuildCargo::CheckInsertItem(int, int, int, unsigned char, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f6ce` | `0x8f` | `0x80919cc` | `0x94` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,47 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x18(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo11IsValidSlotEi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x2c>
 mov    $0xc4,%eax
-jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x8d>
+jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x92>
 cmpb   $0x1,-0x1c(%ebp)
-jne    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x70>
+jne    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x75>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo19GetSpecificItemSlotEi>
 mov    %eax,-0xc(%ebp)
 cmpl   $0xffffffff,-0xc(%ebp)
-je     <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x70>
+je     <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x75>
+mov    0x1c(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
-mov    0x6(%edx,%eax,1),%eax
-add    0x10(%ebp),%eax
-cmp    0x1c(%ebp),%eax
-jle    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x69>
+mov    0x6(%edx,%eax,1),%edx
+mov    0x10(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+cmp    %eax,%ecx
+jae    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x6e>
 mov    $0xc8,%eax
-jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x8d>
+jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x92>
 mov    $0xc1,%eax
-jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x8d>
+jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x92>
 mov    0x14(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x1(%edx,%eax,1),%eax
 test   %eax,%eax
-je     <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x88>
+je     <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x8d>
 mov    $0xc9,%eax
-jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x8d>
+jmp    <T> <_ZN11CGuildCargo15CheckInsertItemEiiihi+0x92>
 mov    $0xc1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::CheckInsertItem(int, int, int, unsigned char, int) */

undefined4 __thiscall
CGuildCargo::_ZN11CGuildCargo15CheckInsertItemEiiihi
          (CGuildCargo *this,int param_1,int param_2,int param_3,uchar param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = _ZN11CGuildCargo11IsValidSlotEi(this,param_3);
  if (cVar1 == '\x01') {
    if ((param_4 == '\x01') && (iVar3 = GetSpecificItemSlot(this,param_1), iVar3 != -1)) {
      if (param_5 < *(int *)(this + iVar3 * 0x35 + 6) + param_2) {
        return 200;
      }
      return 0xc1;
    }
    if (*(int *)(this + param_3 * 0x35 + 1) == 0) {
      uVar2 = 0xc1;
    }
    else {
      uVar2 = 0xc9;
    }
  }
  else {
    uVar2 = 0xc4;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildCargo.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
