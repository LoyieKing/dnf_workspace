# _ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild

`CDBManager::QueryGuild(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807128a` | `0x537` | `0x805bb9a` | `0x4ef` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,391 +1,378 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x2c(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect guild_name, master_no, lev, ability, member_count, guild_rank, guild_point, guild_exp, power_side, unix_timestamp(power_secede_time), power_war_point, guild_agit_flag, power_join_count, guild_fund,master_name from guild_info where guild_id = %d and server_id = %d and expire_flag = 0",0x8(%esp)
 movl   $0x4e22,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x9b>
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x9d>
 movl   $0x97,0x8(%esp)
 movl   $&_ZZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_GuildE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuild() select guild_name, master_no, lev, ability, member_count, guild_rank, guild_point, guild_exp from guild_info where guild_id = %d\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+add    $0xa,%eax
+movb   $0x0,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e22,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0xd4>
-mov    0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0xd1>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x0,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x105>
-mov    0x14(%ebp),%eax
-movb   $0x2,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0xfd>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x2,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    0x14(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
 movl   $0x17,0xc(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x156>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x149>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x199>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x187>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x1b,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x1dc>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x1c5>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x48,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x21f>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x203>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x48,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x22,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x262>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x20(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x241>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
+movl   $0x0,-0x14(%ebp)
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+lea    -0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x2a2>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
-mov    -0x20(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x283>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
+mov    -0x14(%ebp),%eax
 cmp    $0x64,%eax
-jbe    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x2b3>
-mov    -0xc(%ebp),%eax
-movb   $0x0,0x28(%eax)
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x2be>
-mov    -0x20(%ebp),%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %dl,0x28(%eax)
+jbe    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x296>
+mov    -0xc(%ebp),%eax
+add    $0x28,%eax
+movb   $0x0,(%eax)
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x2a1>
+mov    -0xc(%ebp),%eax
+lea    0x28(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %al,(%edx)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,0x8(%esp)
 movl   $0x6,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x301>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x2df>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x29,%eax
 mov    %eax,0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x344>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x31d>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x95,%eax
 mov    %eax,0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x389>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x35d>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x96,%eax
 mov    %eax,0x8(%esp)
 movl   $0x9,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x3ce>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x39d>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x9a,%eax
 mov    %eax,0x8(%esp)
 movl   $0xa,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x413>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x3dd>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x9e,%eax
 mov    %eax,0x8(%esp)
 movl   $0xb,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x458>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x41d>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x9f,%eax
 mov    %eax,0x8(%esp)
 movl   $0xc,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x49d>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x45d>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,0x8(%esp)
 movl   $0xd,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4df>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x49a>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0xa4,%eax
 movl   $0x15,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0xe,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x529>
-mov    0x14(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x535>
-mov    0x14(%ebp),%eax
-movb   $0x1,0xa(%eax)
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4df>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x3,(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild+0x4ed>
+mov    0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x1,(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuild(unsigned char, unsigned int, Packet_DB_Reply_Query_Guild&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild
          (CDBManager *this,uchar param_1,uint param_2,Packet_DB_Reply_Query_Guild *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint local_24;
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  Packet_DB_Reply_Query_Guild *local_10;
  
  local_14 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_14 + 0x1c))
                    (local_14,0x4e22,
                     "seLect guild_name, master_no, lev, ability, member_count, guild_rank, guild_point, guild_exp, power_side, unix_timestamp(power_secede_time), power_war_point, guild_agit_flag, power_join_count, guild_fund,master_name from guild_info where guild_id = %d and server_id = %d and expire_flag = 0"
                     ,param_2,param_1);
  if (cVar1 == '\x01') {
    local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e22);
    if (local_15 == '\x01') {
      local_15 = (**(code **)(*local_14 + 0x24))(local_14);
      if (local_15 == '\x01') {
        local_10 = param_3 + 0x13;
        local_15 = (**(code **)(*local_14 + 0x2c))(local_14,0,local_10,0x17);
        if (local_15 == '\x01') {
          local_15 = (**(code **)(*local_14 + 0x38))(local_14,1,local_10 + 0x17);
          if (local_15 == '\x01') {
            local_15 = (**(code **)(*local_14 + 0x58))(local_14,2,local_10 + 0x1b);
            if (local_15 == '\x01') {
              local_15 = (**(code **)(*local_14 + 0x48))(local_14,3,local_10 + 0x1c);
              if (local_15 == '\x01') {
                local_15 = (**(code **)(*local_14 + 0x48))(local_14,4,local_10 + 0x22);
                if (local_15 == '\x01') {
                  local_15 = (**(code **)(*local_14 + 0x38))(local_14,5,&local_24);
                  if (local_15 == '\x01') {
                    if (local_24 < 0x65) {
                      local_10[0x28] = SUB41(local_24,0);
                    }
                    else {
                      local_10[0x28] = (Packet_DB_Reply_Query_Guild)0x0;
                    }
                    local_15 = (**(code **)(*local_14 + 0x38))(local_14,6,local_10 + 0x24);
                    if (local_15 == '\x01') {
                      local_15 = (**(code **)(*local_14 + 0x38))(local_14,7,local_10 + 0x29);
                      if (local_15 == '\x01') {
                        local_15 = (**(code **)(*local_14 + 0x58))(local_14,8,local_10 + 0x95);
                        if (local_15 == '\x01') {
                          local_15 = (**(code **)(*local_14 + 0x38))(local_14,9,local_10 + 0x96);
                          if (local_15 == '\x01') {
                            local_15 = (**(code **)(*local_14 + 0x38))(local_14,10,local_10 + 0x9a);
                            if (local_15 == '\x01') {
                              local_15 = (**(code **)(*local_14 + 0x58))
                                                   (local_14,0xb,local_10 + 0x9e);
                              if (local_15 == '\x01') {
                                local_15 = (**(code **)(*local_14 + 0x58))
                                                     (local_14,0xc,local_10 + 0x9f);
                                if (local_15 == '\x01') {
                                  local_15 = (**(code **)(*local_14 + 0x38))
                                                       (local_14,0xd,local_10 + 0xa0);
                                  if (local_15 == '\x01') {
                                    cVar1 = (**(code **)(*local_14 + 0x2c))
                                                      (local_14,0xe,local_10 + 0xa4,0x15);
                                    if (cVar1 == '\x01') {
                                      param_3[10] = (Packet_DB_Reply_Query_Guild)0x1;
                                      uVar2 = 1;
                                    }
                                    else {
                                      param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                                      uVar2 = 0;
                                    }
                                  }
                                  else {
                                    param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                                    uVar2 = 0;
                                  }
                                }
                                else {
                                  param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                                  uVar2 = 0;
                                }
                              }
                              else {
                                param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                                uVar2 = 0;
                              }
                            }
                            else {
                              param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                              uVar2 = 0;
                            }
                          }
                          else {
                            param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                            uVar2 = 0;
                          }
                        }
                        else {
                          param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                          uVar2 = 0;
                        }
                      }
                      else {
                        param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                        uVar2 = 0;
                      }
                    }
                    else {
                      param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                      uVar2 = 0;
                    }
                  }
                  else {
                    param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                    uVar2 = 0;
                  }
                }
                else {
                  param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                  uVar2 = 0;
                }
              }
              else {
                param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
                uVar2 = 0;
              }
            }
            else {
              param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
              uVar2 = 0;
            }
          }
          else {
            param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
            uVar2 = 0;
          }
        }
        else {
          param_3[10] = (Packet_DB_Reply_Query_Guild)0x3;
          uVar2 = 0;
        }
      }
      else {
        param_3[10] = (Packet_DB_Reply_Query_Guild)0x2;
        uVar2 = 0;
      }
    }
    else {
      param_3[10] = (Packet_DB_Reply_Query_Guild)0x0;
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_20,"QueryGuild",0x97);
    CMyFileLog::operator()
              (local_20,"./log/DBQueryErr",
               "CDBManager::QueryGuild() select guild_name, master_no, lev, ability, member_count, guild_rank, guild_point, guild_exp from guild_info where guild_id = %d\n"
               ,param_2);
    param_3[10] = (Packet_DB_Reply_Query_Guild)0x0;
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
