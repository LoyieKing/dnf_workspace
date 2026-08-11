# _ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History

`CDBManager::OnLoadGuildCargoHistory(unsigned int, Packet_Guild_Load_Guild_Cargo_History&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8080e48` | `0x384` | `0x805e984` | `0x2db` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,286 +1,212 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %ebx
-sub    $0x140,%esp
+sub    $0x144,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x14(%ebp)
-lea    -0x11f(%ebp),%edx
-mov    $0xff,%ebx
-mov    $0x0,%eax
-mov    %edx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x35>
-mov    %al,(%edx)
-add    $0x1,%edx
-sub    $0x1,%ebx
-mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x47>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
-rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x61>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x6f>
-mov    %al,(%edx)
-add    $0x1,%edx
+movl   $0x100,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x11c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
 mov    0xc(%ebp),%ecx
 mov    $0xcccccccd,%edx
 mov    %ecx,%eax
 mul    %edx
 shr    $0x3,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,0x8(%esp)
 movl   $"guild_cargo_history_%d",0x4(%esp)
-lea    -0x11f(%ebp),%eax
+lea    -0x11c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x32,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-lea    -0x11f(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+lea    -0x11c(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"seLect occ_time,behavior,charac_name,item_id,add_info,random_option from %s where guild_id=%d order by occ_time desc limit %d",0x8(%esp)
 movl   $0x4ed8,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4ed8,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x148>
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x103>
 movl   $0x1b63,0x8(%esp)
 movl   $"OnLoadGuildCargoHistory",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnLoadGuildCargoHistory Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
+mov    0x10(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
-mov    (%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    0x10(%ebp),%edx
-mov    %eax,0xe(%edx)
+mov    (%eax),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,(%ebx)
 movl   $0x0,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x355>
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2ad>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
-mov    (%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x196>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-movl   $0x0,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-add    $0x1,%eax
-shl    $0x4,%eax
-add    0x10(%ebp),%eax
-lea    0x2(%eax),%edx
-mov    -0x10(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x1e4>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-add    $0x50,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-add    $0x1,%eax
-shl    $0x4,%eax
-add    0x10(%ebp),%eax
-lea    0x6(%eax),%edx
-mov    -0x10(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x22b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-add    $0x2c,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-add    $0x1,%eax
-shl    $0x4,%eax
-add    0x10(%ebp),%eax
-lea    0x7(%eax),%edx
-mov    -0x10(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-movl   $0x15,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x27a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%edx
+mov    (%eax),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x14c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
+mov    0x10(%ebp),%ecx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x4,%eax
-add    $0x20,%eax
-add    0x10(%ebp),%eax
-lea    0xc(%eax),%edx
-mov    -0x10(%ebp),%eax
+add    $0x12,%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x196>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x50,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0x4,%edx
+mov    %edx,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x1cb>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x2c,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0x5,%edx
+movl   $0x15,0xc(%esp)
+mov    %edx,0x8(%esp)
+movl   $0x2,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x208>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0x1a,%edx
+mov    %edx,0x8(%esp)
+movl   $0x3,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x23d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0x1e,%edx
+mov    %edx,0x8(%esp)
+movl   $0x4,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x26f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x30,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0x22,%edx
+movl   $0xe,0xc(%esp)
+mov    %edx,0x8(%esp)
+movl   $0x5,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2a9>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2d2>
 addl   $0x1,-0x10(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2c1>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x4,%eax
-add    $0x20,%eax
-add    0x10(%ebp),%eax
-lea    0x10(%eax),%edx
-mov    -0x10(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x305>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-add    $0x30,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-lea    0x1(%eax),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x4,%eax
-add    0x10(%ebp),%eax
-lea    0x4(%eax),%edx
-mov    -0x10(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-movl   $0xe,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x351>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-addl   $0x1,-0xc(%ebp)
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
-mov    (%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-cmp    -0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+cmp    -0x10(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x173>
+jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x129>
 mov    $0x1,%eax
-add    $0x140,%esp
+add    $0x144,%esp
 pop    %ebx
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnLoadGuildCargoHistory(unsigned int, Packet_Guild_Load_Guild_Cargo_History&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History
          (CDBManager *this,uint param_1,Packet_Guild_Load_Guild_Cargo_History *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  char local_123;
  char local_122 [254];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  int local_14;
  uint local_10;
  
  local_18 = *(int **)(this + 0x20);
  pcVar5 = &local_123;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_123 = '\0';
    pcVar5 = local_122;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  sprintf(&local_123,"guild_cargo_history_%d",param_1 % 10);
  (**(code **)(*local_18 + 0x1c))
            (local_18,0x4ed8,
             "seLect occ_time,behavior,charac_name,item_id,add_info,random_option from %s where guild_id=%d order by occ_time desc limit %d"
             ,&local_123,param_1,0x32);
  local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4ed8);
  if (local_19 == '\x01') {
    uVar3 = (**(code **)(*local_18 + 0x6c))(local_18);
    *(undefined4 *)(param_2 + 0xe) = uVar3;
    local_14 = 0;
    local_10 = 0;
    while (uVar6 = (**(code **)(*local_18 + 0x6c))(local_18), local_10 < uVar6) {
      cVar2 = (**(code **)(*local_18 + 0x24))(local_18);
      if (cVar2 != '\x01') {
        return 0;
      }
      local_14 = 1;
      cVar2 = (**(code **)(*local_18 + 0x34))(local_18,0,param_2 + (local_10 * 3 + 1) * 0x10 + 2);
      iVar1 = local_14;
      if (cVar2 != '\x01') {
        return 0;
      }
      local_14 = local_14 + 1;
      cVar2 = (**(code **)(*local_18 + 0x50))
                        (local_18,iVar1,param_2 + (local_10 * 3 + 1) * 0x10 + 6);
      iVar1 = local_14;
      if (cVar2 != '\x01') {
        return 0;
      }
      local_14 = local_14 + 1;
      cVar2 = (**(code **)(*local_18 + 0x2c))
                        (local_18,iVar1,param_2 + (local_10 * 3 + 1) * 0x10 + 7,0x15);
      iVar1 = local_14;
      if (cVar2 != '\x01') {
        return 0;
      }
      local_14 = local_14 + 1;
      cVar2 = (**(code **)(*local_18 + 0x34))(local_18,iVar1,param_2 + local_10 * 0x30 + 0x2c);
      iVar1 = local_14;
      if (cVar2 != '\x01') {
        return 0;
      }
      local_14 = local_14 + 1;
      cVar2 = (**(code **)(*local_18 + 0x34))(local_18,iVar1,param_2 + local_10 * 0x30 + 0x30);
      iVar1 = local_14;
      if (cVar2 != '\x01') {
        return 0;
      }
      local_14 = local_14 + 1;
      cVar2 = (**(code **)(*local_18 + 0x30))
                        (local_18,iVar1,param_2 + (local_10 + 1) * 0x30 + 4,0xe);
      if (cVar2 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    uVar3 = 1;
  }
  else {
    CMyFileLog::CMyFileLog(local_24,"OnLoadGuildCargoHistory",0x1b63);
    CMyFileLog::operator()(local_24,"./log/DBQueryErr","OnLoadGuildCargoHistory Query Error");
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
