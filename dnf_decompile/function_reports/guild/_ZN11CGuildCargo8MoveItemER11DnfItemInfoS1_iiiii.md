# _ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii

`CGuildCargo::MoveItem(DnfItemInfo&, DnfItemInfo&, int, int, int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f998` | `0x3c4` | `0x8091c42` | `0x284` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,272 +1,183 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x8c,%esp
+sub    $0x98,%esp
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo11IsValidSlotEi>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x46>
+cmp    $0x1,%eax
+jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x3f>
 mov    0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo11IsValidSlotEi>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x46>
+cmp    $0x1,%eax
+jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x3f>
 mov    0x14(%ebp),%eax
 cmp    0x1c(%ebp),%eax
-jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x4d>
+jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x46>
 mov    $0x1,%eax
-jmp    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x52>
+jmp    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x4b>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x60>
+je     <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x59>
 mov    $0xc4,%eax
-jmp    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x3b9>
+jmp    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x282>
+mov    0x8(%ebp),%eax
+add    $0x18e0,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x14(%ebp),%edx
+imul   $0x35,%edx,%edx
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%edi
-mov    0x14(%ebp),%edx
-mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%esi
-mov    0x8(%ebp),%eax
-mov    0x18e0(%eax),%ebx
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
 movl   $0x115,0x8(%esp)
 movl   $&_ZZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiiiE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x20(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x20(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    %esi,0x18(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x18(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x24(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Before MoveItem - GUILD:%d, CHARAC:%d, SLOT1:(%d,%d), SLOT2:(%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x14(%ebp),%ecx
+mov    0x14(%ebp),%eax
+imul   $0x35,%eax,%eax
+add    0x8(%ebp),%eax
+movl   $0x35,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    0x1c(%ebp),%eax
+imul   $0x35,%eax,%eax
+add    0x8(%ebp),%eax
+movl   $0x35,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    0xc(%ebp),%eax
+add    $0x1,%eax
+mov    (%eax),%eax
+cmp    0x18(%ebp),%eax
+jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x27d>
+mov    0x10(%ebp),%eax
+add    $0x1,%eax
+mov    (%eax),%eax
+cmp    0x20(%ebp),%eax
+jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x27d>
+mov    0xc(%ebp),%eax
+mov    (%eax),%edx
+mov    %edx,-0x61(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0x5d(%ebp)
+mov    0x8(%eax),%edx
+mov    %edx,-0x59(%ebp)
+mov    0xc(%eax),%edx
+mov    %edx,-0x55(%ebp)
+mov    0x10(%eax),%edx
+mov    %edx,-0x51(%ebp)
+mov    0x14(%eax),%edx
+mov    %edx,-0x4d(%ebp)
+mov    0x18(%eax),%edx
+mov    %edx,-0x49(%ebp)
+mov    0x1c(%eax),%edx
+mov    %edx,-0x45(%ebp)
+mov    0x20(%eax),%edx
+mov    %edx,-0x41(%ebp)
+mov    0x24(%eax),%edx
+mov    %edx,-0x3d(%ebp)
+mov    0x28(%eax),%edx
+mov    %edx,-0x39(%ebp)
+mov    0x2c(%eax),%edx
+mov    %edx,-0x35(%ebp)
+mov    0x30(%eax),%edx
+mov    %edx,-0x31(%ebp)
+movzbl 0x34(%eax),%eax
+mov    %al,-0x2d(%ebp)
+mov    0x1c(%ebp),%eax
+imul   $0x35,%eax,%eax
+add    0x8(%ebp),%eax
+mov    0x8(%ebp),%ecx
+mov    0x14(%ebp),%edx
+imul   $0x35,%edx,%edx
+lea    (%ecx,%edx,1),%edx
+movl   $0x35,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
 mov    0x8(%ebp),%edx
-imul   $0x35,%ecx,%ecx
-mov    (%ecx,%edx,1),%ebx
-mov    %ebx,(%eax)
-mov    0x4(%ecx,%edx,1),%ebx
-mov    %ebx,0x4(%eax)
-mov    0x8(%ecx,%edx,1),%ebx
-mov    %ebx,0x8(%eax)
-mov    0xc(%ecx,%edx,1),%ebx
-mov    %ebx,0xc(%eax)
-mov    0x10(%ecx,%edx,1),%ebx
-mov    %ebx,0x10(%eax)
-mov    0x14(%ecx,%edx,1),%ebx
-mov    %ebx,0x14(%eax)
-mov    0x18(%ecx,%edx,1),%ebx
-mov    %ebx,0x18(%eax)
-mov    0x1c(%ecx,%edx,1),%ebx
-mov    %ebx,0x1c(%eax)
-mov    0x20(%ecx,%edx,1),%ebx
-mov    %ebx,0x20(%eax)
-mov    0x24(%ecx,%edx,1),%ebx
-mov    %ebx,0x24(%eax)
-mov    0x28(%ecx,%edx,1),%ebx
-mov    %ebx,0x28(%eax)
-mov    0x2c(%ecx,%edx,1),%ebx
-mov    %ebx,0x2c(%eax)
-mov    0x30(%ecx,%edx,1),%ebx
-mov    %ebx,0x30(%eax)
-movzbl 0x34(%ecx,%edx,1),%edx
-mov    %dl,0x34(%eax)
-mov    0x1c(%ebp),%ecx
-mov    0x10(%ebp),%eax
-mov    0x8(%ebp),%edx
-imul   $0x35,%ecx,%ecx
-mov    (%ecx,%edx,1),%ebx
-mov    %ebx,(%eax)
-mov    0x4(%ecx,%edx,1),%ebx
-mov    %ebx,0x4(%eax)
-mov    0x8(%ecx,%edx,1),%ebx
-mov    %ebx,0x8(%eax)
-mov    0xc(%ecx,%edx,1),%ebx
-mov    %ebx,0xc(%eax)
-mov    0x10(%ecx,%edx,1),%ebx
-mov    %ebx,0x10(%eax)
-mov    0x14(%ecx,%edx,1),%ebx
-mov    %ebx,0x14(%eax)
-mov    0x18(%ecx,%edx,1),%ebx
-mov    %ebx,0x18(%eax)
-mov    0x1c(%ecx,%edx,1),%ebx
-mov    %ebx,0x1c(%eax)
-mov    0x20(%ecx,%edx,1),%ebx
-mov    %ebx,0x20(%eax)
-mov    0x24(%ecx,%edx,1),%ebx
-mov    %ebx,0x24(%eax)
-mov    0x28(%ecx,%edx,1),%ebx
-mov    %ebx,0x28(%eax)
-mov    0x2c(%ecx,%edx,1),%ebx
-mov    %ebx,0x2c(%eax)
-mov    0x30(%ecx,%edx,1),%ebx
-mov    %ebx,0x30(%eax)
-movzbl 0x34(%ecx,%edx,1),%edx
-mov    %dl,0x34(%eax)
-mov    0xc(%ebp),%eax
-mov    0x1(%eax),%edx
-mov    0x18(%ebp),%eax
-cmp    %eax,%edx
-jne    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x1ce>
-mov    0x10(%ebp),%eax
-mov    0x1(%eax),%edx
-mov    0x20(%ebp),%eax
-cmp    %eax,%edx
-je     <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x1d8>
-mov    $0xca,%eax
-jmp    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x3b9>
-lea    -0x5d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11DnfItemInfoC1Ev>
+mov    0x1c(%ebp),%eax
+imul   $0x35,%eax,%eax
+add    %eax,%edx
+movl   $0x35,0x8(%esp)
+lea    -0x61(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+mov    0x8(%ebp),%eax
 mov    0x14(%ebp),%edx
+imul   $0x35,%edx,%edx
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
+mov    0x1c(%ebp),%edx
 imul   $0x35,%edx,%edx
-mov    (%edx,%eax,1),%ecx
-mov    %ecx,-0x5d(%ebp)
-mov    0x4(%edx,%eax,1),%ecx
-mov    %ecx,-0x59(%ebp)
-mov    0x8(%edx,%eax,1),%ecx
-mov    %ecx,-0x55(%ebp)
-mov    0xc(%edx,%eax,1),%ecx
-mov    %ecx,-0x51(%ebp)
-mov    0x10(%edx,%eax,1),%ecx
-mov    %ecx,-0x4d(%ebp)
-mov    0x14(%edx,%eax,1),%ecx
-mov    %ecx,-0x49(%ebp)
-mov    0x18(%edx,%eax,1),%ecx
-mov    %ecx,-0x45(%ebp)
-mov    0x1c(%edx,%eax,1),%ecx
-mov    %ecx,-0x41(%ebp)
-mov    0x20(%edx,%eax,1),%ecx
-mov    %ecx,-0x3d(%ebp)
-mov    0x24(%edx,%eax,1),%ecx
-mov    %ecx,-0x39(%ebp)
-mov    0x28(%edx,%eax,1),%ecx
-mov    %ecx,-0x35(%ebp)
-mov    0x2c(%edx,%eax,1),%ecx
-mov    %ecx,-0x31(%ebp)
-mov    0x30(%edx,%eax,1),%ecx
-mov    %ecx,-0x2d(%ebp)
-movzbl 0x34(%edx,%eax,1),%eax
-mov    %al,-0x29(%ebp)
-mov    0x14(%ebp),%edx
-mov    0x1c(%ebp),%ebx
-mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0x8(%ebp),%ecx
-imul   $0x35,%ebx,%ebx
-mov    (%ebx,%ecx,1),%esi
-mov    %esi,(%edx,%eax,1)
-mov    0x4(%ebx,%ecx,1),%esi
-mov    %esi,0x4(%edx,%eax,1)
-mov    0x8(%ebx,%ecx,1),%esi
-mov    %esi,0x8(%edx,%eax,1)
-mov    0xc(%ebx,%ecx,1),%esi
-mov    %esi,0xc(%edx,%eax,1)
-mov    0x10(%ebx,%ecx,1),%esi
-mov    %esi,0x10(%edx,%eax,1)
-mov    0x14(%ebx,%ecx,1),%esi
-mov    %esi,0x14(%edx,%eax,1)
-mov    0x18(%ebx,%ecx,1),%esi
-mov    %esi,0x18(%edx,%eax,1)
-mov    0x1c(%ebx,%ecx,1),%esi
-mov    %esi,0x1c(%edx,%eax,1)
-mov    0x20(%ebx,%ecx,1),%esi
-mov    %esi,0x20(%edx,%eax,1)
-mov    0x24(%ebx,%ecx,1),%esi
-mov    %esi,0x24(%edx,%eax,1)
-mov    0x28(%ebx,%ecx,1),%esi
-mov    %esi,0x28(%edx,%eax,1)
-mov    0x2c(%ebx,%ecx,1),%esi
-mov    %esi,0x2c(%edx,%eax,1)
-mov    0x30(%ebx,%ecx,1),%esi
-mov    %esi,0x30(%edx,%eax,1)
-movzbl 0x34(%ebx,%ecx,1),%ecx
-mov    %cl,0x34(%edx,%eax,1)
-mov    0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    -0x5d(%ebp),%ecx
-mov    %ecx,(%edx,%eax,1)
-mov    -0x59(%ebp),%ecx
-mov    %ecx,0x4(%edx,%eax,1)
-mov    -0x55(%ebp),%ecx
-mov    %ecx,0x8(%edx,%eax,1)
-mov    -0x51(%ebp),%ecx
-mov    %ecx,0xc(%edx,%eax,1)
-mov    -0x4d(%ebp),%ecx
-mov    %ecx,0x10(%edx,%eax,1)
-mov    -0x49(%ebp),%ecx
-mov    %ecx,0x14(%edx,%eax,1)
-mov    -0x45(%ebp),%ecx
-mov    %ecx,0x18(%edx,%eax,1)
-mov    -0x41(%ebp),%ecx
-mov    %ecx,0x1c(%edx,%eax,1)
-mov    -0x3d(%ebp),%ecx
-mov    %ecx,0x20(%edx,%eax,1)
-mov    -0x39(%ebp),%ecx
-mov    %ecx,0x24(%edx,%eax,1)
-mov    -0x35(%ebp),%ecx
-mov    %ecx,0x28(%edx,%eax,1)
-mov    -0x31(%ebp),%ecx
-mov    %ecx,0x2c(%edx,%eax,1)
-mov    -0x2d(%ebp),%ecx
-mov    %ecx,0x30(%edx,%eax,1)
-movzbl -0x29(%ebp),%ecx
-mov    %cl,0x34(%edx,%eax,1)
-mov    0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%edi
-mov    0x14(%ebp),%edx
-mov    0x8(%ebp),%eax
-imul   $0x35,%edx,%edx
-mov    0x1(%edx,%eax,1),%esi
-mov    0x8(%ebp),%eax
-mov    0x18e0(%eax),%ebx
+add    $0x1,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
 movl   $0x131,0x8(%esp)
 movl   $&_ZZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiiiE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x20(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x20(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    %esi,0x18(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x18(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x24(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"After MoveItem - GUILD:%d, CHARAC:%d, SLOT1:(%d,%d), SLOT2:(%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0xc1,%eax
-add    $0x8c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+jmp    <T> <_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii+0x282>
+mov    $0xca,%eax
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::MoveItem(DnfItemInfo&, DnfItemInfo&, int, int, int, int, int) */

undefined4 __thiscall
CGuildCargo::_ZN11CGuildCargo8MoveItemER11DnfItemInfoS1_iiiii
          (CGuildCargo *this,DnfItemInfo *param_1,DnfItemInfo *param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  CGuildCargo local_2d;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  cVar4 = _ZN11CGuildCargo11IsValidSlotEi(this,param_3);
  if (cVar4 == '\x01') {
    cVar4 = _ZN11CGuildCargo11IsValidSlotEi(this,param_5);
    if ((cVar4 == '\x01') && (param_3 != param_5)) {
      bVar3 = false;
      goto LAB_0809f9ea;
    }
  }
  bVar3 = true;
LAB_0809f9ea:
  if (bVar3) {
    uVar5 = 0xc4;
  }
  else {
    uVar5 = *(undefined4 *)(this + param_5 * 0x35 + 1);
    uVar1 = *(undefined4 *)(this + param_3 * 0x35 + 1);
    uVar2 = *(undefined4 *)(this + 0x18e0);
    CMyFileLog::CMyFileLog(local_2c,"MoveItem",0x115);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/GuildCargo",
               "Before MoveItem - GUILD:%d, CHARAC:%d, SLOT1:(%d,%d), SLOT2:(%d,%d)",uVar2,param_7,
               param_3,uVar1,param_5,uVar5);
    iVar6 = param_3 * 0x35;
    *(undefined4 *)param_1 = *(undefined4 *)(this + iVar6);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + iVar6 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + iVar6 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + iVar6 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + iVar6 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + iVar6 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + iVar6 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + iVar6 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + iVar6 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + iVar6 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this + iVar6 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + iVar6 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + iVar6 + 0x30);
    *(CGuildCargo *)(param_1 + 0x34) = this[iVar6 + 0x34];
    iVar6 = param_5 * 0x35;
    *(undefined4 *)param_2 = *(undefined4 *)(this + iVar6);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + iVar6 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + iVar6 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + iVar6 + 0xc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(this + iVar6 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + iVar6 + 0x14);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + iVar6 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + iVar6 + 0x1c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this + iVar6 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(this + iVar6 + 0x24);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + iVar6 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + iVar6 + 0x2c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + iVar6 + 0x30);
    *(CGuildCargo *)(param_2 + 0x34) = this[iVar6 + 0x34];
    if ((*(int *)(param_1 + 1) == param_4) && (*(int *)(param_2 + 1) == param_6)) {
      DnfItemInfo::DnfItemInfo((DnfItemInfo *)&local_61);
      iVar6 = param_3 * 0x35;
      local_61 = *(undefined4 *)(this + iVar6);
      local_5d = *(undefined4 *)(this + iVar6 + 4);
      local_59 = *(undefined4 *)(this + iVar6 + 8);
      local_55 = *(undefined4 *)(this + iVar6 + 0xc);
      local_51 = *(undefined4 *)(this + iVar6 + 0x10);
      local_4d = *(undefined4 *)(this + iVar6 + 0x14);
      local_49 = *(undefined4 *)(this + iVar6 + 0x18);
      local_45 = *(undefined4 *)(this + iVar6 + 0x1c);
      local_41 = *(undefined4 *)(this + iVar6 + 0x20);
      local_3d = *(undefined4 *)(this + iVar6 + 0x24);
      local_39 = *(undefined4 *)(this + iVar6 + 0x28);
      local_35 = *(undefined4 *)(this + iVar6 + 0x2c);
      local_31 = *(undefined4 *)(this + iVar6 + 0x30);
      local_2d = this[iVar6 + 0x34];
      iVar6 = param_3 * 0x35;
      iVar7 = param_5 * 0x35;
      *(undefined4 *)(this + iVar6) = *(undefined4 *)(this + iVar7);
      *(undefined4 *)(this + iVar6 + 4) = *(undefined4 *)(this + iVar7 + 4);
      *(undefined4 *)(this + iVar6 + 8) = *(undefined4 *)(this + iVar7 + 8);
      *(undefined4 *)(this + iVar6 + 0xc) = *(undefined4 *)(this + iVar7 + 0xc);
      *(undefined4 *)(this + iVar6 + 0x10) = *(undefined4 *)(this + iVar7 + 0x10);
      *(undefined4 *)(this + iVar6 + 0x14) = *(undefined4 *)(this + iVar7 + 0x14);
      *(undefined4 *)(this + iVar6 + 0x18) = *(undefined4 *)(this + iVar7 + 0x18);
      *(undefined4 *)(this + iVar6 + 0x1c) = *(undefined4 *)(this + iVar7 + 0x1c);
      *(undefined4 *)(this + iVar6 + 0x20) = *(undefined4 *)(this + iVar7 + 0x20);
      *(undefined4 *)(this + iVar6 + 0x24) = *(undefined4 *)(this + iVar7 + 0x24);
      *(undefined4 *)(this + iVar6 + 0x28) = *(undefined4 *)(this + iVar7 + 0x28);
      *(undefined4 *)(this + iVar6 + 0x2c) = *(undefined4 *)(this + iVar7 + 0x2c);
      *(undefined4 *)(this + iVar6 + 0x30) = *(undefined4 *)(this + iVar7 + 0x30);
      this[iVar6 + 0x34] = this[iVar7 + 0x34];
      iVar6 = param_5 * 0x35;
      *(undefined4 *)(this + iVar6) = local_61;
      *(undefined4 *)(this + iVar6 + 4) = local_5d;
      *(undefined4 *)(this + iVar6 + 8) = local_59;
      *(undefined4 *)(this + iVar6 + 0xc) = local_55;
      *(undefined4 *)(this + iVar6 + 0x10) = local_51;
      *(undefined4 *)(this + iVar6 + 0x14) = local_4d;
      *(undefined4 *)(this + iVar6 + 0x18) = local_49;
      *(undefined4 *)(this + iVar6 + 0x1c) = local_45;
      *(undefined4 *)(this + iVar6 + 0x20) = local_41;
      *(undefined4 *)(this + iVar6 + 0x24) = local_3d;
      *(undefined4 *)(this + iVar6 + 0x28) = local_39;
      *(undefined4 *)(this + iVar6 + 0x2c) = local_35;
      *(undefined4 *)(this + iVar6 + 0x30) = local_31;
      this[iVar6 + 0x34] = local_2d;
      uVar5 = *(undefined4 *)(this + param_5 * 0x35 + 1);
      uVar1 = *(undefined4 *)(this + param_3 * 0x35 + 1);
      uVar2 = *(undefined4 *)(this + 0x18e0);
      CMyFileLog::CMyFileLog(local_24,"MoveItem",0x131);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/GuildCargo",
                 "After MoveItem - GUILD:%d, CHARAC:%d, SLOT1:(%d,%d), SLOT2:(%d,%d)",uVar2,param_7,
                 param_3,uVar1,param_5,uVar5);
      uVar5 = 0xc1;
    }
    else {
      uVar5 = 0xca;
    }
  }
  return uVar5;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildCargo.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
