# _ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save

`CDBManager::SaveUnchangableGuildInfo(Packet_UnChangable_GuildInfo_Save*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807ad84` | `0x418` | `0x805fff2` | `0x41a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,276 +1,278 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x7c,%esp
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 add    $0x12,%eax
 movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x73>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+jne    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x75>
 movl   $0x1313,0x8(%esp)
 movl   $"SaveUnchangableGuildInfo",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveUnchangableGuildInfo guild(%d), charac_no(%d)\n",0x8(%esp)
 movl   $"./log/TraceGuildErr",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
+mov    %edx,0xc(%esp)
 movl   $"seLect master_no from guild_info where guild_id = %d and expire_flag = 0",0x8(%esp)
 movl   $0x4e86,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0xf0>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0xf6>
 movl   $0x1319,0x8(%esp)
 movl   $"SaveUnchangableGuildInfo",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveUnchangableGuildInfo() seLect master_no from guild_info where guild_id = %d and expire_flag = 0",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e86,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x122>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x121>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x18c>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x186>
 movl   $0x1327,0x8(%esp)
 movl   $"SaveUnchangableGuildInfo",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveUnchangableGuildInfo() seLect master_no from guild_info where guild_id = %d and expire_flag = 0, fetch()",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    -0x1c(%ebp),%eax
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+movl   $0x0,-0x10(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x8(%esp)
+mov    (%eax),%eax
+lea    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x1c5>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x5c(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x1bf>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+mov    0xc(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x2e3>
-mov    -0x1c(%ebp),%eax
+jne    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x2e2>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
 mov    0xc(%ebp),%ecx
 add    $0x12,%ecx
-mov    %eax,0x10(%esp)
+mov    %edx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 movl   $"upDate guild_info set master_name='%s' where guild_id=%d and expire_flag = 0",0x8(%esp)
 movl   $0x4e87,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x267>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    0xc(%ebp),%eax
-lea    0x12(%eax),%esi
 movl   $0x1348,0x8(%esp)
 movl   $"SaveUnchangableGuildInfo",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0x12,%edx
+mov    %eax,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"CDBManager::SaveUnchangableGuildInfo() : upDate guild_info set master_name='%s' where guild_id=%d and expire_flag = 0",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    -0x1c(%ebp),%eax
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e87,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x2e3>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    0xc(%ebp),%eax
-lea    0x12(%eax),%esi
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x40f>
 movl   $0x134f,0x8(%esp)
 movl   $"SaveUnchangableGuildInfo",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0x12,%edx
+mov    %eax,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"CDBManager::SaveUnchangableGuildInfo() : upDate guild_info set master_name='%s' where guild_id=%d and expire_flag = 0, exe()",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0xe,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
 mov    0xc(%ebp),%ebx
 add    $0x12,%ebx
-mov    %edx,0x14(%esp)
-mov    %eax,0x10(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"upDate guild_member set charac_name='%s' where guild_id=%d and charac_no=%d",0x8(%esp)
 movl   $0x4e84,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x388>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    0xc(%ebp),%eax
-lea    0x12(%eax),%edi
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x38f>
 movl   $0x135e,0x8(%esp)
 movl   $"SaveUnchangableGuildInfo",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%ecx
+add    $0x12,%ecx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    %ecx,0xc(%esp)
 movl   $"CDBManager::SaveUnchangableGuildInfo() : upDate guild_member set charac_name=%s where guild_id=%d and charac_no=%d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
-mov    -0x1c(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e84,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x40b>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    0xc(%ebp),%eax
-lea    0x12(%eax),%edi
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x40f>
 movl   $0x1369,0x8(%esp)
 movl   $"SaveUnchangableGuildInfo",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%ecx
+add    $0x12,%ecx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    %ecx,0xc(%esp)
 movl   $"CDBManager::SaveUnchangableGuildInfo() : upDate guild_member set charac_name=%s where guild_id=%d and charac_no=%d, exe()",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x410>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save+0x414>
 mov    $0x1,%eax
-add    $0x7c,%esp
+add    $0x64,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveUnchangableGuildInfo(Packet_UnChangable_GuildInfo_Save*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24SaveUnchangableGuildInfoEP33Packet_UnChangable_GuildInfo_Save
          (CDBManager *this,Packet_UnChangable_GuildInfo_Save *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int local_60;
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  
  local_20 = *(int **)(this + 0x20);
  if (param_1[0x12] == (Packet_UnChangable_GuildInfo_Save)0x0) {
    uVar3 = *(undefined4 *)(param_1 + 0xe);
    uVar1 = *(undefined4 *)(param_1 + 10);
    CMyFileLog::CMyFileLog(local_5c,"SaveUnchangableGuildInfo",0x1313);
    CMyFileLog::operator()
              (local_5c,"./log/TraceGuildErr",
               "CDBManager::SaveUnchangableGuildInfo guild(%d), charac_no(%d)\n",uVar1,uVar3);
    uVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(*local_20 + 0x1c))
                      (local_20,0x4e86,
                       "seLect master_no from guild_info where guild_id = %d and expire_flag = 0",
                       *(undefined4 *)(param_1 + 10));
    if (cVar2 == '\x01') {
      local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4e86);
      if (local_21 == '\x01') {
        local_21 = (**(code **)(*local_20 + 0x24))(local_20);
        if (local_21 == '\x01') {
          local_21 = (**(code **)(*local_20 + 0x38))(local_20,0,&local_60);
          if (local_21 == '\x01') {
            cVar2 = '\x01';
            if (*(int *)(param_1 + 0xe) == local_60) {
              cVar2 = (**(code **)(*local_20 + 0x1c))
                                (local_20,0x4e87,
                                 "upDate guild_info set master_name=\'%s\' where guild_id=%d and expire_flag = 0"
                                 ,param_1 + 0x12,*(undefined4 *)(param_1 + 10));
              if (cVar2 != '\x01') {
                uVar3 = *(undefined4 *)(param_1 + 10);
                CMyFileLog::CMyFileLog(local_44,"SaveUnchangableGuildInfo",0x1348);
                CMyFileLog::operator()
                          (local_44,"./log/DBQueryErr",
                           "CDBManager::SaveUnchangableGuildInfo() : upDate guild_info set master_name=\'%s\' where guild_id=%d and expire_flag = 0"
                           ,param_1 + 0x12,uVar3);
                return 0;
              }
              local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4e87);
              cVar2 = local_21;
              if (local_21 != '\x01') {
                uVar3 = *(undefined4 *)(param_1 + 10);
                CMyFileLog::CMyFileLog(local_3c,"SaveUnchangableGuildInfo",0x134f);
                CMyFileLog::operator()
                          (local_3c,"./log/DBQueryErr",
                           "CDBManager::SaveUnchangableGuildInfo() : upDate guild_info set master_name=\'%s\' where guild_id=%d and expire_flag = 0, exe()"
                           ,param_1 + 0x12,uVar3);
                return 0;
              }
            }
            local_21 = cVar2;
            cVar2 = (**(code **)(*local_20 + 0x1c))
                              (local_20,0x4e84,
                               "upDate guild_member set charac_name=\'%s\' where guild_id=%d and charac_no=%d"
                               ,param_1 + 0x12,*(undefined4 *)(param_1 + 10),
                               *(undefined4 *)(param_1 + 0xe));
            if (cVar2 == '\x01') {
              local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4e84);
              if (local_21 == '\x01') {
                uVar3 = 1;
              }
              else {
                uVar3 = *(undefined4 *)(param_1 + 0xe);
                uVar1 = *(undefined4 *)(param_1 + 10);
                CMyFileLog::CMyFileLog(local_2c,"SaveUnchangableGuildInfo",0x1369);
                CMyFileLog::operator()
                          (local_2c,"./log/DBQueryErr",
                           "CDBManager::SaveUnchangableGuildInfo() : upDate guild_member set charac_name=%s where guild_id=%d and charac_no=%d, exe()"
                           ,param_1 + 0x12,uVar1,uVar3);
                uVar3 = 0;
              }
            }
            else {
              uVar3 = *(undefined4 *)(param_1 + 0xe);
              uVar1 = *(undefined4 *)(param_1 + 10);
              CMyFileLog::CMyFileLog(local_34,"SaveUnchangableGuildInfo",0x135e);
              CMyFileLog::operator()
                        (local_34,"./log/DBQueryErr",
                         "CDBManager::SaveUnchangableGuildInfo() : upDate guild_member set charac_name=%s where guild_id=%d and charac_no=%d"
                         ,param_1 + 0x12,uVar1,uVar3);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 10);
          CMyFileLog::CMyFileLog(local_4c,"SaveUnchangableGuildInfo",0x1327);
          CMyFileLog::operator()
                    (local_4c,"./log/DBQueryErr",
                     "CDBManager::SaveUnchangableGuildInfo() seLect master_no from guild_info where guild_id = %d and expire_flag = 0, fetch()"
                     ,uVar3);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 10);
      CMyFileLog::CMyFileLog(local_54,"SaveUnchangableGuildInfo",0x1319);
      CMyFileLog::operator()
                (local_54,"./log/DBQueryErr",
                 "CDBManager::SaveUnchangableGuildInfo() seLect master_no from guild_info where guild_id = %d and expire_flag = 0"
                 ,uVar3);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
