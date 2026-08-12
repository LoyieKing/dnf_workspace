# _ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_

`CDBManager::GuildSecede(Packet_DB_Request_Guild_Secede*, unsigned int&, unsigned int&, unsigned int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80787b0` | `0xdbb` | `0x80598a4` | `0xdbd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,922 +1,932 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0xdc,%esp
+sub    $0xc4,%esp
 mov    0x18(%ebp),%eax
 movl   $0x2,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x20(%ebp)
-movb   $0x0,-0xb1(%ebp)
+mov    %eax,-0x10(%ebp)
+movb   $0x0,-0x15(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x13(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x29d>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x261>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 lea    0x17(%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %ecx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no,grade from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",0x8(%esp)
 movl   $0x4e66,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd3>
-mov    0xc(%ebp),%eax
-lea    0x17(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xc8>
 movl   $0xfaf,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0xb0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+lea    0x17(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede()seLect charac_no from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0xb0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e66,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x155>
-mov    0xc(%ebp),%eax
-lea    0x17(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x13d>
 movl   $0xfb6,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0xa8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+lea    0x17(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() db->exec() seLect charac_no from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0xa8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x188>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x169>
 mov    0x18(%ebp),%eax
 movl   $0x22,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x211>
-mov    0xc(%ebp),%eax
-lea    0x17(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x1e5>
 movl   $0xfc4,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+lea    0x17(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() db->get_uint() seLect charac_no from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-add    $0x50,%eax
-mov    (%eax),%edx
-lea    -0xb1(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%eax
+add    $0x58,%eax
+mov    (%eax),%edx
+lea    -0x15(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x29d>
-mov    0xc(%ebp),%eax
-lea    0x17(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x261>
 movl   $0xfcc,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+lea    0x17(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() db->get_uint() seLect grade from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-movl   $0x0,-0xb8(%ebp)
-mov    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+movl   $0x0,-0x1c(%ebp)
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e83,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x2e4>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x2a5>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e83,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x30f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x2d0>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x339>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x2f3>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0xb8(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x375>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x325>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
 mov    0xc(%ebp),%eax
 movzbl 0x12(%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3a2>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x352>
 mov    0xc(%ebp),%eax
 mov    0x35(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3a2>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x352>
 mov    0x18(%ebp),%eax
 movl   $0x57,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
 mov    0xc(%ebp),%eax
 movzbl 0x12(%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3db>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x388>
 mov    0xc(%ebp),%eax
 mov    0x35(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 cmp    %eax,%edx
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3db>
-movzbl -0xb1(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x388>
+movzbl -0x15(%ebp),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3db>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x388>
 mov    0x18(%ebp),%eax
 movl   $0x18,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-movb   $0x0,-0x19(%ebp)
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+movb   $0x0,-0x9(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x12(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x41d>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3c7>
 mov    0xc(%ebp),%eax
 mov    0x35(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x41d>
-mov    -0xb8(%ebp),%eax
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3c7>
+mov    -0x1c(%ebp),%eax
 cmp    $0x1,%eax
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x40a>
-movb   $0x1,-0x19(%ebp)
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x41d>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3b4>
+movb   $0x1,-0x9(%ebp)
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3c7>
 mov    0x18(%ebp),%eax
 movl   $0x4,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_info set guild_id = 0 where charac_no = %d",0x8(%esp)
 movl   $0x4e68,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x49e>
-mov    0x10(%ebp),%eax
-mov    (%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x442>
 movl   $0x100f,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() upDate charac_info set guild_id = 0 where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x20(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e68,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x515>
-mov    0x10(%ebp),%eax
-mov    (%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x4ac>
 movl   $0x1016,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() upDate charac_info set guild_id = 0 where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 mov    0x10(%ebp),%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    0xc(%ebp),%ecx
 movzbl 0x12(%ecx),%ecx
 movsbl %cl,%ecx
 sub    $0x1,%ecx
 mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
 mov    %ecx,0xc(%esp)
 movl   $"upDate guild_member set member_flag = 2, secede_time = now(), secede_type = %d where guild_id = %d and charac_no = %d",0x8(%esp)
 movl   $0x4e67,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x5b5>
-mov    0x10(%ebp),%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x54c>
 movl   $0x1023,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede()upDate guild_member set member_flag = 2 where guild_id = %d and charac_no = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e67,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x630>
-mov    0x10(%ebp),%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x5c0>
 movl   $0x102b,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede()upDate guild_member set member_flag = 2 where guild_id = %d and charac_no = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e83,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x6ad>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x63d>
 movl   $0x1034,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e83,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x718>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x6a8>
 movl   $0x1039,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x782>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x70b>
 movl   $0x103f,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() db->fetch() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0xbc(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x7fe>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x77d>
 movl   $0x1046,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() db->get_int() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0xbc(%ebp),%eax
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x1c(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x924>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x8a3>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%edx
-mov    -0xbc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set member_count = %d where guild_id = %d",0x8(%esp)
 movl   $0x4e74,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x8a6>
-mov    0x10(%ebp),%eax
-mov    (%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0xbc(%ebp),%ebx
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x822>
 movl   $0x104e,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x1c(%ebp),%ecx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() upDate guild_info set member_count = %d where guild_id = %d seceded(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e74,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x924>
-mov    0x10(%ebp),%eax
-mov    (%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0xbc(%ebp),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x8a3>
 movl   $0x1053,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x1c(%ebp),%ecx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() upDate guild_info set member_count = %d where guild_id = %d seceded(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
 mov    0xc(%ebp),%eax
 mov    0x13(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xad6>
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa52>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xad6>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa52>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect m_id from charac_info where charac_no = %u",0x8(%esp)
 movl   $0x4f01,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x9ba>
-mov    0x10(%ebp),%eax
-mov    (%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x93f>
 movl   $0x105f,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() seLect m_id from charac_info where charac_no = %u",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x20(%ebp),%eax
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f01,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa2b>
-mov    0x10(%ebp),%eax
-mov    (%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x9af>
 movl   $0x1067,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x9c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede() seLect m_id from charac_info where charac_no = %u",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x20(%ebp),%eax
+lea    -0x9c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa5e>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x9db>
 mov    0x18(%ebp),%eax
 movl   $0x22,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xad6>
-mov    0x10(%ebp),%eax
-mov    (%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa52>
 movl   $0x1076,0x8(%esp)
 movl   $&_ZZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_E12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::GuildSecede()  db->get_uint() seLect m_id from charac_info where charac_no = %u",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-cmpb   $0x0,-0x19(%ebp)
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xda2>
-mov    -0x24(%ebp),%eax
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xda6>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set expire_flag=1, expire_time=now() where guild_id=%d",0x8(%esp)
 movl   $0x4f0d,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa99>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f0d,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xb37>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xac4>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_introduce where guild_id=%d",0x8(%esp)
 movl   $0x4f0e,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xb01>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f0e,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xb8e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xb2c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_member_introduce where guild_id=%d",0x8(%esp)
 movl   $0x4f10,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xb69>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f10,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xbe5>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xb94>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_member where guild_id=%d",0x8(%esp)
 movl   $0x4f0f,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xbd1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f0f,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xc3c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xbfc>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_visit where guild_id=%d",0x8(%esp)
 movl   $0x4f11,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xc39>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f11,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xc93>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xc64>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_notice where guild_id=%d",0x8(%esp)
 movl   $0x4f12,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xca1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f12,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xcea>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xccc>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_skill where guild_id=%d",0x8(%esp)
 movl   $0x4f13,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd09>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f13,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd3e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd34>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_join_list where guild_id=%d",0x8(%esp)
 movl   $0x4f13,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd6e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f13,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd92>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd96>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
 mov    0x18(%ebp),%eax
 movl   $0x1,(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
 mov    0x18(%ebp),%eax
 movl   $0x0,(%eax)
 mov    $0x1,%eax
-add    $0xdc,%esp
+add    $0xc4,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::GuildSecede(Packet_DB_Request_Guild_Secede*, unsigned int&, unsigned int&, unsigned
   int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_
          (CDBManager *this,Packet_DB_Request_Guild_Secede *param_1,uint *param_2,uint *param_3,
          uint *param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int local_c0;
  int local_bc;
  char local_b5;
  CMyFileLog local_b4 [8];
  CMyFileLog local_ac [8];
  CMyFileLog local_a4 [8];
  CMyFileLog local_9c [8];
  CMyFileLog local_94 [8];
  CMyFileLog local_8c [8];
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [11];
  char local_29;
  int *local_28;
  int *local_24;
  char local_1d;
  
  *param_4 = 2;
  local_28 = *(int **)(this + 0x20);
  local_24 = *(int **)(this + 8);
  local_b5 = '\0';
  if (*(int *)(param_1 + 0x13) != 0) {
    cVar2 = (**(code **)(*local_28 + 0x1c))
                      (local_28,0x4e66,
                       "seLect charac_no,grade from guild_member where guild_id = %d and charac_name = \'%s\' and member_flag = 1"
                       ,*(undefined4 *)(param_1 + 10),param_1 + 0x17);
    if (cVar2 != '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 10);
      CMyFileLog::CMyFileLog(local_b4,"GuildSecede",0xfaf);
      CMyFileLog::operator()
                (local_b4,"./log/DBQueryErr",
                 "CDBManager::GuildSecede()seLect charac_no from guild_member where guild_id = %d and charac_name = \'%s\' and member_flag = 1"
                 ,uVar3,param_1 + 0x17);
      return 0;
    }
    local_29 = (**(code **)(*local_28 + 0x20))(local_28,0x4e66);
    if (local_29 != '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 10);
      CMyFileLog::CMyFileLog(local_ac,"GuildSecede",0xfb6);
      CMyFileLog::operator()
                (local_ac,"./log/DBQueryErr",
                 "CDBManager::GuildSecede() db->exec() seLect charac_no from guild_member where guild_id = %d and charac_name = \'%s\' and member_flag = 1"
                 ,uVar3,param_1 + 0x17);
      return 0;
    }
    local_29 = (**(code **)(*local_28 + 0x24))(local_28);
    if (local_29 != '\x01') {
      *param_4 = 0x22;
      return 0;
    }
    local_29 = (**(code **)(*local_28 + 0x38))(local_28,0,param_2);
    if (local_29 != '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 10);
      CMyFileLog::CMyFileLog(local_a4,"GuildSecede",0xfc4);
      CMyFileLog::operator()
                (local_a4,"./log/DBQueryErr",
                 "CDBManager::GuildSecede() db->get_uint() seLect charac_no from guild_member where guild_id = %d and charac_name = \'%s\' and member_flag = 1"
                 ,uVar3,param_1 + 0x17);
      return 0;
    }
    local_29 = (**(code **)(*local_28 + 0x50))(local_28,1,&local_b5);
    if (local_29 != '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 10);
      CMyFileLog::CMyFileLog(local_9c,"GuildSecede",0xfcc);
      CMyFileLog::operator()
                (local_9c,"./log/DBQueryErr",
                 "CDBManager::GuildSecede() db->get_uint() seLect grade from guild_member where guild_id = %d and charac_name = \'%s\' and member_flag = 1"
                 ,uVar3,param_1 + 0x17);
      return 0;
    }
  }
  local_bc = 0;
  cVar2 = (**(code **)(*local_28 + 0x1c))
                    (local_28,0x4e83,
                     "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                     *(undefined4 *)(param_1 + 10));
  if (cVar2 == '\x01') {
    cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e83);
    if (cVar2 == '\x01') {
      local_29 = (**(code **)(*local_28 + 0x24))(local_28);
      if (local_29 == '\x01') {
        local_29 = (**(code **)(*local_28 + 0x34))(local_28,0,&local_bc);
        if (local_29 == '\x01') {
          if ((param_1[0x12] == (Packet_DB_Request_Guild_Secede)0x2) &&
             (*(uint *)(param_1 + 0x35) == *param_2)) {
            *param_4 = 0x57;
            uVar3 = 0;
          }
          else if ((param_1[0x12] == (Packet_DB_Request_Guild_Secede)0x2) &&
                  ((*(int *)(param_1 + 0x35) != *(int *)(param_1 + 0xe) && (local_b5 == '\x02')))) {
            *param_4 = 0x18;
            uVar3 = 0;
          }
          else {
            local_1d = '\0';
            if ((param_1[0x12] == (Packet_DB_Request_Guild_Secede)0x1) &&
               (*(uint *)(param_1 + 0x35) == *param_2)) {
              if (local_bc != 1) {
                *param_4 = 4;
                return 0;
              }
              local_1d = '\x01';
            }
            cVar2 = (**(code **)(*local_24 + 0x1c))
                              (local_24,0x4e68,
                               "upDate charac_info set guild_id = 0 where charac_no = %d",*param_2);
            if (cVar2 == '\x01') {
              local_29 = (**(code **)(*local_24 + 0x20))(local_24,0x4e68);
              if (local_29 == '\x01') {
                cVar2 = (**(code **)(*local_28 + 0x1c))
                                  (local_28,0x4e67,
                                   "upDate guild_member set member_flag = 2, secede_time = now(), secede_type = %d where guild_id = %d and charac_no = %d"
                                   ,(char)param_1[0x12] + -1,*(undefined4 *)(param_1 + 10),*param_2)
                ;
                if (cVar2 == '\x01') {
                  local_29 = (**(code **)(*local_28 + 0x20))(local_28,0x4e67);
                  if (local_29 == '\x01') {
                    cVar2 = (**(code **)(*local_28 + 0x1c))
                                      (local_28,0x4e83,
                                       "seLect count(*) from guild_member where guild_id = %d and member_flag = 1"
                                       ,*(undefined4 *)(param_1 + 10));
                    if (cVar2 == '\x01') {
                      cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e83);
                      if (cVar2 == '\x01') {
                        local_29 = (**(code **)(*local_28 + 0x24))(local_28);
                        if (local_29 == '\x01') {
                          local_29 = (**(code **)(*local_28 + 0x34))(local_28,0,&local_c0);
                          if (local_29 == '\x01') {
                            if (local_c0 != 0) {
                              cVar2 = (**(code **)(*local_28 + 0x1c))
                                                (local_28,0x4e74,
                                                 "upDate guild_info set member_count = %d where guild_id = %d"
                                                 ,local_c0,*(undefined4 *)(param_1 + 10));
                              if (cVar2 != '\x01') {
                                uVar1 = *param_2;
                                uVar3 = *(undefined4 *)(param_1 + 10);
                                CMyFileLog::CMyFileLog(local_54,"GuildSecede",0x104e);
                                CMyFileLog::operator()
                                          (local_54,"./log/DBQueryErr",
                                           "CDBManager::GuildSecede() upDate guild_info set member_count = %d where guild_id = %d seceded(%d)"
                                           ,local_c0,uVar3,uVar1);
                                return 0;
                              }
                              cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4e74);
                              if (cVar2 != '\x01') {
                                uVar1 = *param_2;
                                uVar3 = *(undefined4 *)(param_1 + 10);
                                CMyFileLog::CMyFileLog(local_4c,"GuildSecede",0x1053);
                                CMyFileLog::operator()
                                          (local_4c,"./log/DBQueryErr",
                                           "CDBManager::GuildSecede() upDate guild_info set member_count = %d where guild_id = %d seceded(%d)"
                                           ,local_c0,uVar3,uVar1);
                                return 0;
                              }
                            }
                            if ((*(int *)(param_1 + 0x13) != 0) && (*param_2 != 0)) {
                              cVar2 = (**(code **)(*local_24 + 0x1c))
                                                (local_24,0x4f01,
                                                 "seLect m_id from charac_info where charac_no = %u"
                                                 ,*param_2);
                              if (cVar2 != '\x01') {
                                uVar1 = *param_2;
                                CMyFileLog::CMyFileLog(local_44,"GuildSecede",0x105f);
                                CMyFileLog::operator()
                                          (local_44,"./log/DBQueryErr",
                                           "CDBManager::GuildSecede() seLect m_id from charac_info where charac_no = %u"
                                           ,uVar1);
                                return 0;
                              }
                              local_29 = (**(code **)(*local_24 + 0x20))(local_24,0x4f01);
                              if (local_29 != '\x01') {
                                uVar1 = *param_2;
                                CMyFileLog::CMyFileLog(local_3c,"GuildSecede",0x1067);
                                CMyFileLog::operator()
                                          (local_3c,"./log/DBQueryErr",
                                           "CDBManager::GuildSecede() seLect m_id from charac_info where charac_no = %u"
                                           ,uVar1);
                                return 0;
                              }
                              local_29 = (**(code **)(*local_24 + 0x24))(local_24);
                              if (local_29 != '\x01') {
                                *param_4 = 0x22;
                                return 0;
                              }
                              local_29 = (**(code **)(*local_24 + 0x38))(local_24,0,param_3);
                              if (local_29 != '\x01') {
                                uVar1 = *param_2;
                                CMyFileLog::CMyFileLog(local_34,"GuildSecede",0x1076);
                                CMyFileLog::operator()
                                          (local_34,"./log/DBQueryErr",
                                           "CDBManager::GuildSecede()  db->get_uint() seLect m_id from charac_info where charac_no = %u"
                                           ,uVar1);
                                return 0;
                              }
                            }
                            if (local_1d == '\0') {
                              *param_4 = 0;
                              uVar3 = 1;
                            }
                            else {
                              (**(code **)(*local_28 + 0x1c))
                                        (local_28,0x4f0d,
                                         "upDate guild_info set expire_flag=1, expire_time=now() where guild_id=%d"
                                         ,*(undefined4 *)(param_1 + 10));
                              cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f0d);
                              if (cVar2 == '\x01') {
                                (**(code **)(*local_28 + 0x1c))
                                          (local_28,0x4f0e,
                                           "deLete from guild_introduce where guild_id=%d",
                                           *(undefined4 *)(param_1 + 10));
                                cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f0e);
                                if (cVar2 == '\x01') {
                                  (**(code **)(*local_28 + 0x1c))
                                            (local_28,0x4f10,
                                             "deLete from guild_member_introduce where guild_id=%d",
                                             *(undefined4 *)(param_1 + 10));
                                  cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f10);
                                  if (cVar2 == '\x01') {
                                    (**(code **)(*local_28 + 0x1c))
                                              (local_28,0x4f0f,
                                               "deLete from guild_member where guild_id=%d",
                                               *(undefined4 *)(param_1 + 10));
                                    cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f0f);
                                    if (cVar2 == '\x01') {
                                      (**(code **)(*local_28 + 0x1c))
                                                (local_28,0x4f11,
                                                 "deLete from guild_visit where guild_id=%d",
                                                 *(undefined4 *)(param_1 + 10));
                                      cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f11);
                                      if (cVar2 == '\x01') {
                                        (**(code **)(*local_28 + 0x1c))
                                                  (local_28,0x4f12,
                                                   "deLete from guild_notice where guild_id=%d",
                                                   *(undefined4 *)(param_1 + 10));
                                        cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f12);
                                        if (cVar2 == '\x01') {
                                          (**(code **)(*local_28 + 0x1c))
                                                    (local_28,0x4f13,
                                                     "deLete from guild_skill where guild_id=%d",
                                                     *(undefined4 *)(param_1 + 10));
                                          cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f13);
                                          if (cVar2 == '\x01') {
                                            (**(code **)(*local_28 + 0x1c))
                                                      (local_28,0x4f13,
                                                                                                              
                                                  "deLete from guild_join_list where guild_id=%d",
                                                  *(undefined4 *)(param_1 + 10));
                                            cVar2 = (**(code **)(*local_28 + 0x20))(local_28,0x4f13)
                                            ;
                                            if (cVar2 == '\x01') {
                                              *param_4 = 1;
                                              uVar3 = 1;
                                            }
                                            else {
                                              uVar3 = 0;
                                            }
                                          }
                                          else {
                                            uVar3 = 0;
                                          }
                                        }
                                        else {
                                          uVar3 = 0;
                                        }
                                      }
                                      else {
                                        uVar3 = 0;
                                      }
                                    }
                                    else {
                                      uVar3 = 0;
                                    }
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  uVar3 = 0;
                                }
                              }
                              else {
                                uVar3 = 0;
                              }
                            }
                          }
                          else {
                            uVar3 = *(undefined4 *)(param_1 + 10);
                            CMyFileLog::CMyFileLog(local_5c,"GuildSecede",0x1046);
                            CMyFileLog::operator()
                                      (local_5c,"./log/DBQueryErr",
                                       "CDBManager::GuildSecede() db->get_int() seLect count(*) from guild_member where guild_id = %d and member_flag = 1"
                                       ,uVar3);
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = *(undefined4 *)(param_1 + 10);
                          CMyFileLog::CMyFileLog(local_64,"GuildSecede",0x103f);
                          CMyFileLog::operator()
                                    (local_64,"./log/DBQueryErr",
                                     "CDBManager::GuildSecede() db->fetch() seLect count(*) from guild_member where guild_id = %d and member_flag = 1"
                                     ,uVar3);
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = *(undefined4 *)(param_1 + 10);
                        CMyFileLog::CMyFileLog(local_6c,"GuildSecede",0x1039);
                        CMyFileLog::operator()
                                  (local_6c,"./log/DBQueryErr",
                                   "CDBManager::GuildSecede() seLect count(*) from guild_member where guild_id = %d and member_flag = 1"
                                   ,uVar3);
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = *(undefined4 *)(param_1 + 10);
                      CMyFileLog::CMyFileLog(local_74,"GuildSecede",0x1034);
                      CMyFileLog::operator()
                                (local_74,"./log/DBQueryErr",
                                 "CDBManager::GuildSecede() seLect count(*) from guild_member where guild_id = %d and member_flag = 1"
                                 ,uVar3);
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar1 = *param_2;
                    uVar3 = *(undefined4 *)(param_1 + 10);
                    CMyFileLog::CMyFileLog(local_7c,"GuildSecede",0x102b);
                    CMyFileLog::operator()
                              (local_7c,"./log/DBQueryErr",
                               "CDBManager::GuildSecede()upDate guild_member set member_flag = 2 where guild_id = %d and charac_no = %d and member_flag = 1"
                               ,uVar3,uVar1);
                    uVar3 = 0;
                  }
                }
                else {
                  uVar1 = *param_2;
                  uVar3 = *(undefined4 *)(param_1 + 10);
                  CMyFileLog::CMyFileLog(local_84,"GuildSecede",0x1023);
                  CMyFileLog::operator()
                            (local_84,"./log/DBQueryErr",
                             "CDBManager::GuildSecede()upDate guild_member set member_flag = 2 where guild_id = %d and charac_no = %d and member_flag = 1"
                             ,uVar3,uVar1);
                  uVar3 = 0;
                }
              }
              else {
                uVar1 = *param_2;
                CMyFileLog::CMyFileLog(local_8c,"GuildSecede",0x1016);
                CMyFileLog::operator()
                          (local_8c,"./log/DBQueryErr",
                           "CDBManager::GuildSecede() upDate charac_info set guild_id = 0 where charac_no = %d"
                           ,uVar1);
                uVar3 = 0;
              }
            }
            else {
              uVar1 = *param_2;
              CMyFileLog::CMyFileLog(local_94,"GuildSecede",0x100f);
              CMyFileLog::operator()
                        (local_94,"./log/DBQueryErr",
                         "CDBManager::GuildSecede() upDate charac_info set guild_id = 0 where charac_no = %d"
                         ,uVar1);
              uVar3 = 0;
            }
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
