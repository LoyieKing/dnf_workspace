# _ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_

`CDBManager::QueryGuildCreate(Packet_DBMW_Request_Guild_Create*, unsigned int&, unsigned int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80797d2` | `0x99f` | `0x805a6e0` | `0x9b5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,709 +1,709 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xcc,%esp
 mov    0x14(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x20(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
 mov    %eax,-0x1c(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%edx
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"seLect member_flag, unix_timestamp(secede_time) from guild_member where charac_no = %d and server_id = %d",0x8(%esp)
 movl   $0x4e6b,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0xd2>
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0xc9>
 movl   $0x110a,0x8(%esp)
 movl   $&_ZZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_E12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    0xf(%eax),%edx
+mov    0xc(%ebp),%eax
+movzbl 0xa(%eax),%eax
+movzbl %al,%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"seLect member_flag from guild_member where server_id = %d and charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x14(%ebp),%eax
 movl   $0x2,(%eax)
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e6b,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x10d>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0xfd>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x231>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x213>
+mov    -0x20(%ebp),%eax
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
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x15f>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x148>
 mov    0x14(%ebp),%eax
 movl   $0x22,(%eax)
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-movl   $0x0,-0x54(%ebp)
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+movl   $0x0,-0x3c(%ebp)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x54(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x1a8>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    -0x54(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x18a>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    -0x3c(%ebp),%eax
 cmp    $0x1,%eax
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x1c3>
+jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x1a5>
 mov    0x14(%ebp),%eax
 movl   $0x20,(%eax)
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    -0x54(%ebp),%eax
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    -0x3c(%ebp),%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x231>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x213>
+movl   $0x0,-0x40(%ebp)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x58(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x204>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    -0x58(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x1e6>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    -0x40(%ebp),%eax
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z13isDayTimeOverjj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x231>
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x213>
 mov    0x14(%ebp),%eax
 movl   $0x68,(%eax)
 mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    0xc(%ebp),%eax
-add    $0x13,%eax
-movzbl (%eax),%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x24f>
-mov    0xc(%ebp),%eax
-add    $0x38,%eax
-movzbl (%eax),%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x30d>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    0xc(%ebp),%eax
-add    $0x13,%eax
-movzbl (%eax),%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x2b5>
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    0xc(%ebp),%eax
+movzbl 0x13(%eax),%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x22d>
+mov    0xc(%ebp),%eax
+movzbl 0x38(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x2e7>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    0xc(%ebp),%eax
+movzbl 0x13(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x299>
 movl   $0x114f,0x8(%esp)
 movl   $&_ZZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_E12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    0xf(%eax),%edx
+mov    0xc(%ebp),%eax
+movzbl 0xa(%eax),%eax
+movzbl %al,%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildCreate server_group(%d), charac_no(%d) CharacName NULL\n",0x8(%esp)
 movl   $"./log/TraceGuildErr",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x303>
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
 movl   $0x1151,0x8(%esp)
 movl   $&_ZZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_E12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    0xf(%eax),%edx
+mov    0xc(%ebp),%eax
+movzbl 0xa(%eax),%eax
+movzbl %al,%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildCreate server_group(%d), charac_no(%d) GuildName NULL\n",0x8(%esp)
 movl   $"./log/TraceGuildErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    0xc(%ebp),%eax
 add    $0x4f,%eax
 mov    %eax,-0x88(%ebp)
 mov    0xc(%ebp),%eax
 lea    0x13(%eax),%edi
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%edx
 mov    0xc(%ebp),%eax
 lea    0x38(%eax),%ecx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x8c(%ebp)
 mov    -0x88(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    %edi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %edx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    -0x8c(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 movl   $"inSert into guild_info set server_id=%d,guild_name='%s',master_id=%s,master_no=%d,master_name='%s',guild_url='%s',create_time=now(),member_count=1",0x8(%esp)
 movl   $0x4e6c,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-mov    -0x24(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x38d>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e6c,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x3d4>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    $0x0,%ebx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x3c1>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x9a8>
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle>
 mov    0x10(%ebp),%edx
 mov    %eax,(%edx)
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
 mov    (%eax),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0xc(%esp)
 movl   $"url",0x8(%esp)
 movl   $"%s%d",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z7sformatPKcz>
 sub    $0x4,%esp
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_charcvPcEv>
-lea    -0x31(%ebp),%edx
+lea    -0x21(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x455>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StackBuffer_charD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x477>
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StackBuffer_charD1Ev>
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x492>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x477>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x31(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x31(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    0x10(%ebp),%eax
 mov    (%eax),%ebx
-lea    -0x50(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set guild_url='%s' where guild_id=%d",0x8(%esp)
 movl   $0x4f5f,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f5f,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x517>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x49e>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x51e>
+jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x4a5>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x523>
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x4aa>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x530>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x4b7>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x84(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%edi
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%eax
 mov    %eax,-0x80(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x34(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x7c(%ebp)
 mov    0xc(%ebp),%eax
 add    $0x35,%eax
 mov    %eax,-0x78(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x33(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x74(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x32(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x70(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x31(%eax),%eax
 movsbl %al,%esi
 mov    0xc(%ebp),%eax
 lea    0x13(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %edi,0x30(%esp)
 mov    -0x80(%ebp),%ecx
 mov    %ecx,0x2c(%esp)
 mov    -0x7c(%ebp),%ecx
 mov    %ecx,0x28(%esp)
 mov    -0x78(%ebp),%ecx
 mov    %ecx,0x24(%esp)
 mov    -0x74(%ebp),%ecx
 mov    %ecx,0x20(%esp)
 mov    -0x70(%ebp),%ecx
 mov    %ecx,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_member set guild_id=%d,m_id=%s,charac_name='%s',grade=1,job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,apply_time=now(),member_time=now(),member_flag=1 where charac_no=%d and server_id=%d",0x8(%esp)
 movl   $0x4e6d,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x84(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e6d,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x643>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x5c7>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x64a>
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x5c7>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x64f>
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x5cc>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x74f>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x6c5>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x6c(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x34(%eax),%eax
 movsbl %al,%esi
 mov    0xc(%ebp),%eax
 add    $0x35,%eax
 mov    %eax,-0x68(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x33(%eax),%eax
 movsbl %al,%edi
 mov    0xc(%ebp),%eax
 movzbl 0x32(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x64(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x31(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x60(%ebp)
 mov    0xc(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,-0x5c(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ecx
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %esi,0x30(%esp)
 mov    -0x68(%ebp),%esi
 mov    %esi,0x2c(%esp)
 mov    %edi,0x28(%esp)
 mov    -0x64(%ebp),%esi
 mov    %esi,0x24(%esp)
 mov    -0x60(%ebp),%esi
 mov    %esi,0x20(%esp)
 mov    -0x5c(%ebp),%esi
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_member set guild_id=%d,charac_no=%d,m_id=%s,server_id=%d,charac_name='%s',grade=1,job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,apply_time=now(),member_time=now(),member_flag=1",0x8(%esp)
 movl   $0x4e6e,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x6c(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e6e,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x74f>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x6c5>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_introduce set guild_id=%d,server_id=%d",0x8(%esp)
 movl   $0x4e6f,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x24(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x718>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x953>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e6f,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x7b9>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x742>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_member_introduce set guild_id=%d,charac_no=%d",0x8(%esp)
 movl   $0x4e70,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x24(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x791>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x953>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e70,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x81f>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x7bb>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_visit set guild_id=%d,server_id=%d, total_visit=0, today_visit=0",0x8(%esp)
 movl   $0x4e71,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x24(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x80e>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x953>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e71,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x889>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x838>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_skill set guild_id=%d",0x8(%esp)
 movl   $0x4e72,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x87d>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x953>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e72,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x8e5>
-mov    0x14(%ebp),%eax
-movl   $0x2,(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x8a7>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    0x10(%ebp),%edx
 mov    (%edx),%edx
 mov    %ebx,0x14(%esp)
 mov    %eax,0x10(%esp)
 mov    %edx,0xc(%esp)
 movl   $"upDate charac_info set guild_id=%d where m_id=%s and charac_no=%d",0x8(%esp)
 movl   $0x4e73,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-mov    -0x20(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x90d>
+mov    0x14(%ebp),%eax
+movl   $0x2,(%eax)
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x953>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e73,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x965>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x937>
 mov    0x14(%ebp),%eax
 movl   $0x2,(%eax)
 mov    $0x1,%ebx
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x992>
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x953>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x50(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x960>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x975>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StackBuffer_charD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x982>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StackBuffer_charD1Ev>
+jmp    <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_+0x99d>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x21(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
+lea    -0x21(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
 mov    %ebx,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildCreate(Packet_DBMW_Request_Guild_Create*, unsigned int&, unsigned int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_
          (CDBManager *this,Packet_DBMW_Request_Guild_Create *param_1,uint *param_2,uint *param_3)

{
  Packet_DBMW_Request_Guild_Create PVar1;
  Packet_DBMW_Request_Guild_Create PVar2;
  Packet_DBMW_Request_Guild_Create PVar3;
  Packet_DBMW_Request_Guild_Create PVar4;
  Packet_DBMW_Request_Guild_Create PVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  char *__in_chrg;
  undefined4 uVar13;
  longlong lVar14;
  uint local_5c;
  int local_58;
  string local_54 [4];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [11];
  allocator local_35;
  StackBuffer_char local_34;
  char local_29;
  CDBHandle *local_28;
  int *local_24;
  undefined4 local_20;
  
  *param_3 = 0;
  local_28 = *(CDBHandle **)(this + 0x20);
  local_24 = *(int **)(this + 8);
  local_20 = *(undefined4 *)(this + 0x14);
  cVar8 = (**(code **)(*(int *)local_28 + 0x1c))
                    (local_28,0x4e6b,
                     "seLect member_flag, unix_timestamp(secede_time) from guild_member where charac_no = %d and server_id = %d"
                     ,*(undefined4 *)(param_1 + 0xf),param_1[10]);
  if (cVar8 != '\x01') {
    uVar13 = *(undefined4 *)(param_1 + 0xf);
    PVar1 = param_1[10];
    CMyFileLog::CMyFileLog(local_50,"QueryGuildCreate",0x110a);
    CMyFileLog::operator()
              (local_50,"./log/DBQueryErr",
               "seLect member_flag from guild_member where server_id = %d and charac_no = %d",
               (uint)(byte)PVar1,uVar13);
    *param_3 = 2;
    return 0;
  }
  local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e6b);
  if (local_29 != '\x01') {
    *param_3 = 2;
    return 0;
  }
  iVar10 = (**(code **)(*(int *)local_28 + 0x6c))(local_28);
  cVar8 = local_29;
  if (iVar10 != 0) {
    local_29 = (**(code **)(*(int *)local_28 + 0x24))(local_28);
    if (local_29 != '\x01') {
      *param_3 = 0x22;
      return 0;
    }
    local_58 = 0;
    local_29 = (**(code **)(*(int *)local_28 + 0x38))(local_28,0,&local_58);
    if (local_29 != '\x01') {
      *param_3 = 2;
      return 0;
    }
    if (local_58 == 1) {
      *param_3 = 0x20;
      return 0;
    }
    cVar8 = '\x01';
    if (local_58 == 2) {
      local_29 = (**(code **)(*(int *)local_28 + 0x38))(local_28,1,&local_5c);
      if (local_29 != '\x01') {
        return 0;
      }
      cVar9 = isDayTimeOver(local_5c,3);
      cVar8 = local_29;
      if (cVar9 != '\x01') {
        *param_3 = 0x68;
        return 0;
      }
    }
  }
  local_29 = cVar8;
  if ((param_1[0x13] != (Packet_DBMW_Request_Guild_Create)0x0) &&
     (param_1[0x38] != (Packet_DBMW_Request_Guild_Create)0x0)) {
    pcVar6 = *(code **)(*(int *)local_28 + 0x1c);
    uVar13 = *(undefined4 *)(param_1 + 0xf);
    uVar11 = NumberToString(*(uint *)(param_1 + 0xb),0);
    (*pcVar6)(local_28,0x4e6c,
              "inSert into guild_info set server_id=%d,guild_name=\'%s\',master_id=%s,master_no=%d,master_name=\'%s\',guild_url=\'%s\',create_time=now(),member_count=1"
              ,param_1[10],param_1 + 0x38,uVar11,uVar13,param_1 + 0x13,param_1 + 0x4f);
    local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e6c);
    if (local_29 == '\x01') {
      uVar12 = _ZN10CDBManager11GetIdentityEP9CDBHandle(this,local_28);
      *param_2 = uVar12;
      std::allocator<char>::allocator();
                    /* try { // try from 08079be7 to 08079beb has its CatchHandler @ 08079c49 */
      sformat(&local_34,"%s%d",&DAT_081b2527,*param_2);
                    /* try { // try from 08079bf5 to 08079c0f has its CatchHandler @ 08079c12 */
      __in_chrg = StackBuffer_char::operator_char_(&local_34);
      std::string::string(local_54,__in_chrg,&local_35);
                    /* try { // try from 08079c2d to 08079c31 has its CatchHandler @ 08079c34 */
      StackBuffer_char::~StackBuffer_char(&local_34,(int)__in_chrg);
      std::allocator<char>::~allocator((allocator<char> *)&local_35);
      pcVar6 = *(code **)(*(int *)local_28 + 0x1c);
      uVar12 = *param_2;
                    /* try { // try from 08079c84 to 0807a11f has its CatchHandler @ 0807a149 */
      uVar13 = std::string::c_str(local_54);
      (*pcVar6)(local_28,0x4f5f,"upDate guild_info set guild_url=\'%s\' where guild_id=%d",uVar13,
                uVar12);
      local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4f5f);
      if ((local_29 == '\x01') &&
         (lVar14 = (**(code **)(*(int *)local_28 + 0x74))(local_28), lVar14 != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *param_3 = 2;
      }
      pcVar6 = *(code **)(*(int *)local_28 + 0x1c);
      PVar1 = param_1[10];
      uVar13 = *(undefined4 *)(param_1 + 0xf);
      PVar2 = param_1[0x34];
      PVar3 = param_1[0x33];
      PVar4 = param_1[0x32];
      PVar5 = param_1[0x31];
      uVar11 = NumberToString(*(uint *)(param_1 + 0xb),0);
      (*pcVar6)(local_28,0x4e6d,
                "upDate guild_member set guild_id=%d,m_id=%s,charac_name=\'%s\',grade=1,job=%d,grow_type=%d,lev=%d,born_year=\'%s\',sex=%d,apply_time=now(),member_time=now(),member_flag=1 where charac_no=%d and server_id=%d"
                ,*param_2,uVar11,param_1 + 0x13,(int)(char)PVar5,(int)(char)PVar4,(int)(char)PVar3,
                param_1 + 0x35,(int)(char)PVar2,uVar13,PVar1);
      local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e6d);
      if ((local_29 == '\x01') &&
         (lVar14 = (**(code **)(*(int *)local_28 + 0x74))(local_28), lVar14 != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pcVar6 = *(code **)(*(int *)local_28 + 0x1c);
        PVar1 = param_1[0x34];
        PVar2 = param_1[0x33];
        PVar3 = param_1[0x32];
        PVar4 = param_1[0x31];
        PVar5 = param_1[10];
        uVar13 = NumberToString(*(uint *)(param_1 + 0xb),0);
        (*pcVar6)(local_28,0x4e6e,
                  "inSert into guild_member set guild_id=%d,charac_no=%d,m_id=%s,server_id=%d,charac_name=\'%s\',grade=1,job=%d,grow_type=%d,lev=%d,born_year=\'%s\',sex=%d,apply_time=now(),member_time=now(),member_flag=1"
                  ,*param_2,*(undefined4 *)(param_1 + 0xf),uVar13,PVar5,param_1 + 0x13,
                  (int)(char)PVar4,(int)(char)PVar3,(int)(char)PVar2,param_1 + 0x35,(int)(char)PVar1
                 );
        local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e6e);
        if (local_29 != '\x01') {
          *param_3 = 2;
        }
      }
      (**(code **)(*(int *)local_28 + 0x1c))
                (local_28,0x4e6f,"inSert into guild_introduce set guild_id=%d,server_id=%d",*param_2
                 ,param_1[10]);
      local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e6f);
      if (local_29 != '\x01') {
        *param_3 = 2;
      }
      (**(code **)(*(int *)local_28 + 0x1c))
                (local_28,0x4e70,"inSert into guild_member_introduce set guild_id=%d,charac_no=%d",
                 *param_2,*(undefined4 *)(param_1 + 0xf));
      local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e70);
      if (local_29 != '\x01') {
        *param_3 = 2;
      }
      (**(code **)(*(int *)local_28 + 0x1c))
                (local_28,0x4e71,
                 "inSert into guild_visit set guild_id=%d,server_id=%d, total_visit=0, today_visit=0"
                 ,*param_2,param_1[10]);
      local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e71);
      if (local_29 != '\x01') {
        *param_3 = 2;
      }
      (**(code **)(*(int *)local_28 + 0x1c))
                (local_28,0x4e72,"inSert into guild_skill set guild_id=%d",*param_2);
      local_29 = (**(code **)(*(int *)local_28 + 0x20))(local_28,0x4e72);
      if (local_29 != '\x01') {
        *param_3 = 2;
      }
      pcVar6 = *(code **)(*local_24 + 0x1c);
      uVar13 = *(undefined4 *)(param_1 + 0xf);
      uVar11 = NumberToString(*(uint *)(param_1 + 0xb),0);
      (*pcVar6)(local_24,0x4e73,"upDate charac_info set guild_id=%d where m_id=%s and charac_no=%d",
                *param_2,uVar11,uVar13);
      local_29 = (**(code **)(*local_24 + 0x20))(local_24,0x4e73);
      if (local_29 != '\x01') {
        *param_3 = 2;
      }
      std::string::~string(local_54);
      return 1;
    }
    *param_3 = 2;
    return 0;
  }
  *param_3 = 2;
  if (param_1[0x13] == (Packet_DBMW_Request_Guild_Create)0x0) {
    uVar13 = *(undefined4 *)(param_1 + 0xf);
    PVar1 = param_1[10];
    CMyFileLog::CMyFileLog(local_48,"QueryGuildCreate",0x114f);
    CMyFileLog::operator()
              (local_48,"./log/TraceGuildErr",
               "CDBManager::QueryGuildCreate server_group(%d), charac_no(%d) CharacName NULL\n",
               (uint)(byte)PVar1,uVar13);
  }
  else {
    uVar13 = *(undefined4 *)(param_1 + 0xf);
    PVar1 = param_1[10];
    CMyFileLog::CMyFileLog(local_40,"QueryGuildCreate",0x1151);
    CMyFileLog::operator()
              (local_40,"./log/TraceGuildErr",
               "CDBManager::QueryGuildCreate server_group(%d), charac_no(%d) GuildName NULL\n",
               (uint)(byte)PVar1,uVar13);
  }
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
