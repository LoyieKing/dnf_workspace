# _ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj

`CDBManager::GuildJoin(STGuildJoinInfo*, unsigned int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8077ce2` | `0x84d` | `0x8054a04` | `0x825` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,560 +1,546 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xdc,%esp
 mov    0x10(%ebp),%eax
 movl   $0x2,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x9e>
+movzbl 0x14(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x9c>
 mov    0x10(%ebp),%eax
 movl   $0x27,(%eax)
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%edi
+movl   $0xe76,0x8(%esp)
+movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0x10(%eax),%ecx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
-movzbl %al,%esi
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
-movl   $0xe76,0x8(%esp)
-movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %al,%edx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildJoin guild(%d), server_group(%d), charac_no(%d)\n",0x8(%esp)
 movl   $"./log/TraceGuildErr",0x4(%esp)
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%edx
 mov    0xc(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"seLect member_flag, unix_timestamp(secede_time) from guild_member where charac_no = %d and  server_id= %d",0x8(%esp)
 movl   $0x4e60,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x11e>
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x11c>
 movl   $0xe80,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::GuildJoin()select_secede_time_from_guild_member_for_guildjoin Exception Break\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e60,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x150>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x147>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-cmpb   $0x0,-0x21(%ebp)
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x231>
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x225>
+movl   $0x0,-0x38(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x80(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x1a8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
-mov    -0x80(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x19a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
+mov    -0x38(%ebp),%eax
 cmp    $0x1,%eax
-jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x1c3>
+jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x1b5>
 mov    0x10(%ebp),%eax
 movl   $0x27,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
-mov    -0x80(%ebp),%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
+mov    -0x38(%ebp),%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x231>
+jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x225>
+movl   $0x0,-0x3c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x7c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x204>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
-mov    -0x7c(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x1f6>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
+mov    -0x3c(%ebp),%eax
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z13isDayTimeOverjj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x231>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x225>
 mov    0x10(%ebp),%eax
 movl   $0x68,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e83,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x2ae>
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x2a2>
 movl   $0xeb9,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e83,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x319>
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x30d>
 movl   $0xebe,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x343>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x330>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
+movl   $0x0,-0x24(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x78(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x37c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
-mov    -0x78(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x369>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
+mov    -0x24(%ebp),%eax
 add    $0x1,%eax
 cmp    $0x12c,%eax
-jle    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x39c>
+jle    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x389>
 mov    0x10(%ebp),%eax
 movl   $0x26,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%ecx
 mov    0xc(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_member set guild_id=%d, member_flag=1, member_time= now(), grade = 0,last_visit_time = 0, secede_type = 0, secede_time = 0, member_point = 0, member_point_prev = 0, last_play_time = 0  where charac_no = %d and server_id= %d",0x8(%esp)
 movl   $0x4e61,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x447>
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x434>
+movl   $0xedb,0x8(%esp)
+movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
-movzbl %al,%edi
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
-movl   $0xedb,0x8(%esp)
-movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
+movzbl %al,%ecx
+mov    0xc(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::GuildJoin() upDate guild_member set guild_id=%d, member_flag=1 where charac_no = %d and server_id= %d",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::GuildJoin() upDate guild_member set guild_id=%d, member_flag=1 where charac_no = %d and server_id= %d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e61,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x487>
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x46d>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x48e>
+jne    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x474>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x493>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x605>
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x479>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x5e4>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0xa0(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x35(%eax),%eax
-movsbl %al,%esi
+movzbl %al,%esi
 mov    0xc(%ebp),%eax
 add    $0x36,%eax
 mov    %eax,-0x9c(%ebp)
 mov    0xc(%ebp),%eax
+movzbl 0x32(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x98(%ebp)
+mov    0xc(%ebp),%eax
+movzbl 0x33(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x94(%ebp)
+mov    0xc(%ebp),%eax
 movzbl 0x34(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x98(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x33(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x94(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x32(%eax),%eax
-movsbl %al,%eax
+movzbl %al,%eax
 mov    %eax,-0x90(%ebp)
 mov    0xc(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,-0x8c(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x10(%eax),%edi
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%ebx
 mov    0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %esi,0x30(%esp)
 mov    -0x9c(%ebp),%ecx
 mov    %ecx,0x2c(%esp)
 mov    -0x98(%ebp),%ecx
 mov    %ecx,0x28(%esp)
 mov    -0x94(%ebp),%ecx
 mov    %ecx,0x24(%esp)
 mov    -0x90(%ebp),%ecx
 mov    %ecx,0x20(%esp)
 mov    -0x8c(%ebp),%ecx
 mov    %ecx,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_member set guild_id=%d,m_id=%s,server_id=%d,charac_no=%d,charac_name='%s',job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,member_flag=1,member_time= now()",0x8(%esp)
 movl   $0x4e5e,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0xa0(%ebp)
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x5d3>
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x5b9>
 movl   $0xefd,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::GuildJoin() Exception Break\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e5e,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x605>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
-mov    -0x78(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x5e4>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
+mov    -0x24(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x72a>
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x709>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    -0x78(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
 add    $0x1,%ecx
 mov    %eax,0x10(%esp)
 mov    %ecx,0xc(%esp)
 movl   $"upDate guild_info set member_count = %d where guild_id = %d",0x8(%esp)
 movl   $0x4e5f,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x6ab>
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
-mov    -0x78(%ebp),%eax
-lea    0x1(%eax),%edi
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x68a>
 movl   $0xf0d,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    -0x24(%ebp),%ecx
+add    $0x1,%ecx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    %ecx,0xc(%esp)
 movl   $"CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e5f,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x72a>
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
-mov    -0x78(%ebp),%eax
-lea    0x1(%eax),%edi
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x709>
 movl   $0xf12,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    -0x24(%ebp),%ecx
+add    $0x1,%ecx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    %ecx,0xc(%esp)
 movl   $"CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_info set guild_id=%d where charac_no = %d",0x8(%esp)
 movl   $0x4e65,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x7bb>
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x79a>
 movl   $0xf1d,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e65,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x834>
-mov    0xc(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x4(%eax),%ebx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x80c>
 movl   $0xf24,0x8(%esp)
 movl   $&_ZZN10CDBManager9GuildJoinEP15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x842>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj+0x81a>
 mov    0x10(%ebp),%eax
 movl   $0x0,(%eax)
 mov    $0x1,%eax
 add    $0xdc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::GuildJoin(STGuildJoinInfo*, unsigned int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj
          (CDBManager *this,STGuildJoinInfo *param_1,uint *param_2)

{
  STGuildJoinInfo SVar1;
  STGuildJoinInfo SVar2;
  STGuildJoinInfo SVar3;
  STGuildJoinInfo SVar4;
  STGuildJoinInfo SVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int local_84;
  uint local_80;
  int local_7c;
  CMyFileLog local_78 [8];
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [11];
  char local_25;
  int *local_24;
  int *local_20;
  
  *param_2 = 2;
  local_24 = *(int **)(this + 0x20);
  local_20 = *(int **)(this + 8);
  if (param_1[0x14] == (STGuildJoinInfo)0x0) {
    *param_2 = 0x27;
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    SVar1 = *param_1;
    uVar10 = *(undefined4 *)(param_1 + 4);
    CMyFileLog::CMyFileLog(local_78,"GuildJoin",0xe76);
    CMyFileLog::operator()
              (local_78,"./log/TraceGuildErr",
               "CDBManager::GuildJoin guild(%d), server_group(%d), charac_no(%d)\n",uVar10,
               (uint)(byte)SVar1,uVar11);
    return 0;
  }
  cVar8 = (**(code **)(*local_24 + 0x1c))
                    (local_24,0x4e60,
                     "seLect member_flag, unix_timestamp(secede_time) from guild_member where charac_no = %d and  server_id= %d"
                     ,*(undefined4 *)(param_1 + 0x10),*param_1);
  if (cVar8 != '\x01') {
    CMyFileLog::CMyFileLog(local_70,"GuildJoin",0xe80);
    CMyFileLog::operator()
              (local_70,"./log/DBQueryErr",
               "CDBManager::GuildJoin()select_secede_time_from_guild_member_for_guildjoin Exception Break\n"
              );
    return 0;
  }
  local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4e60);
  if (local_25 != '\x01') {
    return 0;
  }
  local_25 = (**(code **)(*local_24 + 0x24))(local_24);
  cVar8 = local_25;
  if (local_25 != '\0') {
    local_25 = (**(code **)(*local_24 + 0x38))(local_24,0,&local_84);
    if (local_25 != '\x01') {
      return 0;
    }
    if (local_84 == 1) {
      *param_2 = 0x27;
      return 0;
    }
    cVar8 = '\x01';
    if (local_84 == 2) {
      local_25 = (**(code **)(*local_24 + 0x38))(local_24,1,&local_80);
      if (local_25 != '\x01') {
        return 0;
      }
      cVar9 = isDayTimeOver(local_80,3);
      cVar8 = local_25;
      if (cVar9 != '\x01') {
        *param_2 = 0x68;
        return 0;
      }
    }
  }
  local_25 = cVar8;
  cVar8 = (**(code **)(*local_24 + 0x1c))
                    (local_24,0x4e83,
                     "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                     *(undefined4 *)(param_1 + 4));
  if (cVar8 != '\x01') {
    uVar11 = *(undefined4 *)(param_1 + 4);
    CMyFileLog::CMyFileLog(local_68,"GuildJoin",0xeb9);
    CMyFileLog::operator()
              (local_68,"./log/DBQueryErr",
               "CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1"
               ,uVar11);
    return 0;
  }
  cVar8 = (**(code **)(*local_24 + 0x20))(local_24,0x4e83);
  if (cVar8 != '\x01') {
    uVar11 = *(undefined4 *)(param_1 + 4);
    CMyFileLog::CMyFileLog(local_60,"GuildJoin",0xebe);
    CMyFileLog::operator()
              (local_60,"./log/DBQueryErr",
               "CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1"
               ,uVar11);
    return 0;
  }
  local_25 = (**(code **)(*local_24 + 0x24))(local_24);
  if (local_25 != '\x01') {
    return 0;
  }
  local_25 = (**(code **)(*local_24 + 0x34))(local_24,0,&local_7c);
  if (local_25 != '\x01') {
    return 0;
  }
  if (300 < local_7c + 1) {
    *param_2 = 0x26;
    return 0;
  }
  cVar8 = (**(code **)(*local_24 + 0x1c))
                    (local_24,0x4e61,
                     "upDate guild_member set guild_id=%d, member_flag=1, member_time= now(), grade = 0,last_visit_time = 0, secede_type = 0, secede_time = 0, member_point = 0, member_point_prev = 0, last_play_time = 0  where charac_no = %d and server_id= %d"
                     ,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),*param_1);
  if (cVar8 == '\x01') {
    local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4e61);
    if ((local_25 == '\x01') && (lVar12 = (**(code **)(*local_24 + 0x74))(local_24), lVar12 != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pcVar6 = *(code **)(*local_24 + 0x1c);
      SVar1 = param_1[0x35];
      SVar2 = param_1[0x34];
      SVar3 = param_1[0x33];
      SVar4 = param_1[0x32];
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      SVar5 = *param_1;
      uVar10 = NumberToString(*(uint *)(param_1 + 8),0);
      cVar8 = (*pcVar6)(local_24,0x4e5e,
                        "inSert into guild_member set guild_id=%d,m_id=%s,server_id=%d,charac_no=%d,charac_name=\'%s\',job=%d,grow_type=%d,lev=%d,born_year=\'%s\',sex=%d,member_flag=1,member_time= now()"
                        ,*(undefined4 *)(param_1 + 4),uVar10,SVar5,uVar11,param_1 + 0x14,
                        (int)(char)SVar4,(int)(char)SVar3,(int)(char)SVar2,param_1 + 0x36,
                        (int)(char)SVar1);
      if (cVar8 != '\x01') {
        CMyFileLog::CMyFileLog(local_50,"GuildJoin",0xefd);
        CMyFileLog::operator()
                  (local_50,"./log/DBQueryErr","CDBManager::GuildJoin() Exception Break\n");
        return 0;
      }
      local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4e5e);
      if (local_25 != '\x01') {
        return 0;
      }
    }
    if (local_7c != 0) {
      cVar8 = (**(code **)(*local_24 + 0x1c))
                        (local_24,0x4e5f,
                         "upDate guild_info set member_count = %d where guild_id = %d",local_7c + 1,
                         *(undefined4 *)(param_1 + 4));
      if (cVar8 != '\x01') {
        uVar11 = *(undefined4 *)(param_1 + 0x10);
        uVar10 = *(undefined4 *)(param_1 + 4);
        CMyFileLog::CMyFileLog(local_48,"GuildJoin",0xf0d);
        CMyFileLog::operator()
                  (local_48,"./log/DBQueryErr",
                   "CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)"
                   ,local_7c + 1,uVar10,uVar11);
        return 0;
      }
      cVar8 = (**(code **)(*local_24 + 0x20))(local_24,0x4e5f);
      if (cVar8 != '\x01') {
        uVar11 = *(undefined4 *)(param_1 + 0x10);
        uVar10 = *(undefined4 *)(param_1 + 4);
        CMyFileLog::CMyFileLog(local_40,"GuildJoin",0xf12);
        CMyFileLog::operator()
                  (local_40,"./log/DBQueryErr",
                   "CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)"
                   ,local_7c + 1,uVar10,uVar11);
        return 0;
      }
    }
    cVar8 = (**(code **)(*local_20 + 0x1c))
                      (local_20,0x4e65,"upDate charac_info set guild_id=%d where charac_no = %d",
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    if (cVar8 == '\x01') {
      local_25 = (**(code **)(*local_20 + 0x20))(local_20,0x4e65);
      if (local_25 == '\x01') {
        *param_2 = 0;
        uVar11 = 1;
      }
      else {
        uVar11 = *(undefined4 *)(param_1 + 0x10);
        uVar10 = *(undefined4 *)(param_1 + 4);
        CMyFileLog::CMyFileLog(local_30,"GuildJoin",0xf24);
        CMyFileLog::operator()
                  (local_30,"./log/DBQueryErr",
                   "CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d"
                   ,uVar10,uVar11);
        uVar11 = 0;
      }
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      uVar10 = *(undefined4 *)(param_1 + 4);
      CMyFileLog::CMyFileLog(local_38,"GuildJoin",0xf1d);
      CMyFileLog::operator()
                (local_38,"./log/DBQueryErr",
                 "CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d",
                 uVar10,uVar11);
      uVar11 = 0;
    }
    return uVar11;
  }
  SVar1 = *param_1;
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 4);
  CMyFileLog::CMyFileLog(local_58,"GuildJoin",0xedb);
  CMyFileLog::operator()
            (local_58,"./log/DBQueryErr",
             "CDBManager::GuildJoin() upDate guild_member set guild_id=%d, member_flag=1 where charac_no = %d and server_id= %d"
             ,uVar10,uVar11,(uint)(byte)SVar1);
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2253 行）：

```cpp
char CDBManager::GuildJoin(STGuildJoinInfo* info, unsigned int& result)
{
    result = 2;
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[2];   // game db
    if (info->m_characName[0] == 0)
    {
        result = 0x27;
        CMyFileLog log(__FUNCTION__, 0xe76);
        log("./log/TraceGuildErr",
            "CDBManager::GuildJoin guild(%d), server_group(%d), charac_no(%d)\n",
            info->m_guildId, info->m_serverId, info->m_characNo);
        return 0;
    }
    if (!h->set_query(0x4e60,
                      "seLect member_flag, unix_timestamp(secede_time) from guild_member where charac_no = %d and  server_id= %d",
                      info->m_characNo, info->m_serverId))
    {
        CMyFileLog log(__FUNCTION__, 0xe80);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin()select_secede_time_from_guild_member_for_guildjoin Exception Break\n");
        return 0;
    }
    if (!h->exec(0x4e60))
        return 0;
    if (h->fetch())
    {
        int memberFlag = 0;
        if (!h->get_uint(0, (unsigned int&)memberFlag))
            return 0;
        if (memberFlag == 1)
        {
            result = 0x27;
            return 0;
        }
        if (memberFlag == 2)
        {
            unsigned int secedeTime = 0;
            if (!h->get_uint(1, secedeTime))
                return 0;
            if (!isDayTimeOver(secedeTime, 3))
            {
                result = 0x68;
                return 0;
            }
        }
    }
    if (!h->set_query(0x4e83,
                      "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                      info->m_guildId))
    {
        CMyFileLog log(__FUNCTION__, 0xeb9);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            info->m_guildId);
        return 0;
    }
    if (!h->exec(0x4e83))
    {
        CMyFileLog log(__FUNCTION__, 0xebe);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            info->m_guildId);
        return 0;
    }
    if (!h->fetch())
        return 0;
    int memberCount = 0;
    if (!h->get_int(0, memberCount))
        return 0;
    if (memberCount + 1 > 0x12c)
    {
        result = 0x26;
        return 0;
    }
    if (!h->set_query(0x4e61,
                      "upDate guild_member set guild_id=%d, member_flag=1, member_time= now(), grade = 0,last_visit_time = 0, secede_type = 0, secede_time = 0, member_point = 0, member_point_prev = 0, last_play_time = 0  where charac_no = %d and server_id= %d",
                      info->m_guildId, info->m_characNo, info->m_serverId))
    {
        CMyFileLog log(__FUNCTION__, 0xedb);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() upDate guild_member set guild_id=%d, member_flag=1 where charac_no = %d and server_id= %d",
            info->m_guildId, info->m_characNo, info->m_serverId);
        return 0;
    }
    if (!h->exec(0x4e61) || h->getAffectedRowCount() == 0)
    {
        if (!h->set_query(0x4e5e,
                          "inSert into guild_member set guild_id=%d,m_id=%s,server_id=%d,charac_no=%d,charac_name='%s',job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,member_flag=1,member_time= now()",
                          info->m_guildId, NumberToString(info->m_id, 0),
                          info->m_serverId, info->m_characNo, info->m_characName,
                          info->m_job, info->m_growType, info->m_lev,
                          info->m_bornYear, info->m_sex))
        {
            CMyFileLog log(__FUNCTION__, 0xefd);
            log("./log/DBQueryErr",
                "CDBManager::GuildJoin() Exception Break\n");
            return 0;
        }
        if (!h->exec(0x4e5e))
            return 0;
    }
    if (memberCount != 0)
    {
        if (!h->set_query(0x4e5f,
                          "upDate guild_info set member_count = %d where guild_id = %d",
                          memberCount + 1, info->m_guildId))
        {
            CMyFileLog log(__FUNCTION__, 0xf0d);
            log("./log/DBQueryErr",
                "CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)",
                memberCount + 1, info->m_guildId, info->m_characNo);
            return 0;
        }
        if (!h->exec(0x4e5f))
        {
            CMyFileLog log(__FUNCTION__, 0xf12);
            log("./log/DBQueryErr",
                "CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)",
                memberCount + 1, info->m_guildId, info->m_characNo);
            return 0;
        }
    }
    if (!h2->set_query(0x4e65,
                       "upDate charac_info set guild_id=%d where charac_no = %d",
                       info->m_guildId, info->m_characNo))
    {
        CMyFileLog log(__FUNCTION__, 0xf1d);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d",
            info->m_guildId, info->m_characNo);
        return 0;
    }
    if (!h2->exec(0x4e65))
    {
        CMyFileLog log(__FUNCTION__, 0xf24);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d",
            info->m_guildId, info->m_characNo);
        return 0;
    }
    result = 0;
    return 1;
}
```
