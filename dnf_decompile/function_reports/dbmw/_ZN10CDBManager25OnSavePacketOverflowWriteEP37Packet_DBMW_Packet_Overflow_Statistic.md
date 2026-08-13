# _ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic

`CDBManager::OnSavePacketOverflowWrite(Packet_DBMW_Packet_Overflow_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8080324` | `0x24b` | `0x805114c` | `0x241` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,154 +1,154 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x534,%esp
+sub    $0x538,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x242>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23f>
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x8e>
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x8b>
 mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
-movzwl %ax,%ebx
+add    $0xb,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x10(%ebp)
 call   <T> <_Z22getNotiPacketNameCountv>
-cmp    %eax,%ebx
-setge  %al
+cmp    -0x10(%ebp),%eax
+setle  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x69>
+je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x6d>
 movl   $0x4,0x8(%esp)
 movl   $"???",0x4(%esp)
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
-mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
-movzwl %ax,%eax
-mov    &g_szNotiPacketName(,%eax,4),%eax
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe5>
+mov    -0x10(%ebp),%eax
+mov    &_ZL18g_szNotiPacketName(,%eax,4),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcpy>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe5>
 mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
-movzwl %ax,%ebx
+add    $0xb,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0xc(%ebp)
 call   <T> <_Z21getCmdPacketNameCountv>
-cmp    %eax,%ebx
-setge  %al
+cmp    -0xc(%ebp),%eax
+setle  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xc6>
+je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xc9>
 movl   $0x4,0x8(%esp)
 movl   $"???",0x4(%esp)
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
-mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
-movzwl %ax,%eax
-mov    &g_szCmdPacketName(,%eax,4),%eax
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe5>
+mov    -0xc(%ebp),%eax
+mov    &_ZL17g_szCmdPacketName(,%eax,4),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcpy>
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    0xc(%ebp),%eax
-mov    0xd(%eax),%eax
-lea    -0x10d(%ebp),%ecx
+add    $0xd,%eax
+mov    (%eax),%eax
+lea    -0x114(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"upDate packet_overflow set cnt=cnt+%d where packet_type=%d and packet_kind='%s'",0x4(%esp)
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4eba,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eba,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x18d>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x186>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x194>
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x18d>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x199>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x192>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23d>
+je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23a>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0xc(%ebp),%eax
-mov    0xd(%eax),%edx
+add    $0xd,%eax
+mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %edx,0x10(%esp)
-lea    -0x10d(%ebp),%edx
+lea    -0x114(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"inSert into packet_overflow (packet_type, packet_kind, cnt) values (%d, '%s', %d)",0x4(%esp)
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4eb9,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eb9,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    $0x1,%eax
-add    $0x534,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSavePacketOverflowWrite(Packet_DBMW_Packet_Overflow_Statistic*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic
          (CDBManager *this,Packet_DBMW_Packet_Overflow_Statistic *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char local_511 [1024];
  char local_111 [256];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x3c);
  if (local_10 != (int *)0x0) {
    if (param_1[10] == (Packet_DBMW_Packet_Overflow_Statistic)0x0) {
      uVar1 = *(ushort *)(param_1 + 0xb);
      iVar3 = getNotiPacketNameCount();
      if ((int)(uint)uVar1 < iVar3) {
        strcpy(local_111,*(char **)(g_szNotiPacketName + (uint)*(ushort *)(param_1 + 0xb) * 4));
      }
      else {
        memcpy(local_111,&DAT_081b50f7,4);
      }
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0xb);
      iVar3 = getCmdPacketNameCount();
      if ((int)(uint)uVar1 < iVar3) {
        strcpy(local_111,*(char **)(g_szCmdPacketName + (uint)*(ushort *)(param_1 + 0xb) * 4));
      }
      else {
        memcpy(local_111,&DAT_081b50f7,4);
      }
    }
    sprintf(local_511,
            "upDate packet_overflow set cnt=cnt+%d where packet_type=%d and packet_kind=\'%s\'",
            *(undefined4 *)(param_1 + 0xd),(uint)(byte)param_1[10],local_111);
    (**(code **)(*local_10 + 0x1c))(local_10,0x4eba,&DAT_081ad540,local_511);
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4eba);
    if ((local_11 == '\x01') && (lVar4 = (**(code **)(*local_10 + 0x74))(local_10), lVar4 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      memset(local_511,0,0x400);
      sprintf(local_511,
              "inSert into packet_overflow (packet_type, packet_kind, cnt) values (%d, \'%s\', %d)",
              (uint)(byte)param_1[10],local_111,*(undefined4 *)(param_1 + 0xd));
      (**(code **)(*local_10 + 0x1c))(local_10,0x4eb9,&DAT_081ad540,local_511);
      (**(code **)(*local_10 + 0x20))(local_10,0x4eb9);
    }
    return 1;
  }
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
