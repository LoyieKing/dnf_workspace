# _ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member

`CDBManager::QueryMember(unsigned int, Packet_DB_Reply_Query_Member&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8073048` | `0xb7a` | `0x8053940` | `0xaee` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,796 +1,758 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1bc,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x40(%ebp)
-mov    -0x40(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+mov    0x10(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect 1 as type, master_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) as charac from charac_members where charac_no = %d union all select 2, charac_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) from charac_members where master_no = %d",0x8(%esp)
 movl   $0x4e29,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xa7>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xaa>
 movl   $0x52d,0x8(%esp)
 movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildMember() select 1 as type, master_no as charac from charac_members where charac_no = %d union all select 2, charac_no from charac_members where master_no = %d\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x10(%ebp),%eax
 movb   $0x0,0xa(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e29,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x11d>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x119>
 mov    0x10(%ebp),%eax
 movb   $0x0,0xa(%eax)
 movl   $0x537,0x8(%esp)
 movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x80(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryMember() db->exec(select_from_charac_members_for_lower_member_query, Query ID : %d\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x80(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-lea    -0x19c(%ebp),%ebx
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+lea    -0x1a0(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x40,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
-movb   $0x28,-0x19c(%ebp)
-mov    -0x40(%ebp),%eax
+movb   $0x28,-0x1a0(%ebp)
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,-0x3c(%ebp)
-cmpl   $0xb,-0x3c(%ebp)
-jle    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x15e>
-movl   $0xb,-0x3c(%ebp)
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x17c>
-cmpl   $0x0,-0x3c(%ebp)
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x17c>
-mov    0x10(%ebp),%eax
-movb   $0x0,0x3e(%eax)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,-0x40(%ebp)
+cmpl   $0xb,-0x40(%ebp)
+jle    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x158>
+movl   $0xb,-0x40(%ebp)
+cmpl   $0x0,-0x40(%ebp)
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x178>
+mov    -0x44(%ebp),%eax
+add    $0x27,%eax
+movb   $0x0,(%eax)
 mov    0x10(%ebp),%eax
 movb   $0x1,0xa(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x1f1>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x1e6>
 mov    0x10(%ebp),%eax
 movb   $0x0,0xa(%eax)
 movl   $0x54f,0x8(%esp)
 movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x3c(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryMember() First db->fetch(), Lower, Query ID : %d, n_data : %d\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+movl   $0x0,-0x5c(%ebp)
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x5c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x226>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x44(%ebp),%eax
+add    $0x28,%eax
+mov    %eax,-0x3c(%ebp)
+movl   $0x0,-0x38(%ebp)
+movl   $0x0,-0x34(%ebp)
+mov    -0x5c(%ebp),%eax
+cmp    $0x1,%eax
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x4f3>
+movl   $0x0,-0x78(%ebp)
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
 lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x289>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x78(%ebp),%eax
+test   %eax,%eax
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x2d4>
+mov    -0x44(%ebp),%eax
+mov    -0x78(%ebp),%edx
+mov    %edx,(%eax)
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    -0x44(%ebp),%eax
+add    $0x23,%eax
+mov    %eax,0x8(%esp)
+movl   $0x2,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x2d4>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+movl   $0x0,-0x7c(%ebp)
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+lea    -0x7c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x3,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x314>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x7c(%ebp),%eax
+cmp    -0x38(%ebp),%eax
+jbe    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x322>
+mov    -0x7c(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+lea    -0x7c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x4,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x35b>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x7c(%ebp),%eax
+cmp    -0x34(%ebp),%eax
+jbe    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x369>
+mov    -0x7c(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x44(%ebp),%eax
+lea    0x27(%eax),%edx
 mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-lea    -0x8c(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x234>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    0x10(%ebp),%eax
-add    $0x3f,%eax
-mov    %eax,-0x38(%ebp)
-movl   $0x0,-0x34(%ebp)
-movl   $0x0,-0x30(%ebp)
-mov    -0x8c(%ebp),%eax
-cmp    $0x1,%eax
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x53c>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x98(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x29d>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x98(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x2f6>
-mov    -0x98(%ebp),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x17(%eax)
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-add    $0x3a,%eax
-mov    %eax,0x8(%esp)
-movl   $0x2,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x2f6>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x90(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x3,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x339>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x90(%ebp),%eax
-cmp    %eax,-0x34(%ebp)
-jae    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x34d>
-mov    -0x90(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x94(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x4,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x390>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x94(%ebp),%eax
-cmp    %eax,-0x30(%ebp)
-jae    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x3a4>
-mov    -0x94(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x3c(%ebp),%eax
-lea    -0x1(%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %dl,0x3e(%eax)
-mov    0x10(%ebp),%eax
-mov    0x17(%eax),%eax
-mov    %eax,0xc(%esp)
-lea    -0x19c(%ebp),%eax
+sub    $0x1,%eax
+mov    %al,(%edx)
+mov    -0x44(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
+lea    -0x1a0(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s%d,",0x4(%esp)
-lea    -0x19c(%ebp),%eax
+lea    -0x1a0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-movl   $0x1,-0x28(%ebp)
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x526>
-mov    -0x40(%ebp),%eax
+movl   $0x1,-0x24(%ebp)
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x4dd>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x45b>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x420>
 mov    0x10(%ebp),%eax
 movb   $0x0,0xa(%eax)
 movl   $0x58e,0x8(%esp)
 movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"CDBManager::QueryMember() 1 == type and find lower db->fetch() loop : %d, Lower, Query ID : %d\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
-sub    $0x1,%eax
-imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x4a4>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x28(%ebp),%eax
-sub    $0x1,%eax
-imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,0xc(%esp)
-lea    -0x19c(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"%s%d,",0x4(%esp)
-lea    -0x19c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <sprintf>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
-sub    $0x1,%eax
-imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
-add    $0x23,%eax
-mov    %eax,0x8(%esp)
-movl   $0x2,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x522>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-addl   $0x1,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-cmp    -0x3c(%ebp),%eax
-setl   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x3e6>
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x7ac>
-mov    -0x8c(%ebp),%eax
-cmp    $0x2,%eax
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x75b>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    -0x38(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x58b>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    -0x38(%ebp),%eax
-add    $0x23,%eax
-mov    %eax,0x8(%esp)
-movl   $0x2,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x5ce>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x3c(%ebp),%eax
-mov    %eax,%edx
-mov    0x10(%ebp),%eax
-mov    %dl,0x3e(%eax)
-mov    -0x38(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,0xc(%esp)
-lea    -0x19c(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"%s%d,",0x4(%esp)
-lea    -0x19c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <sprintf>
-movl   $0x1,-0x24(%ebp)
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x748>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x24,%eax
-mov    (%eax),%edx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x683>
-mov    0x10(%ebp),%eax
-movb   $0x0,0xa(%eax)
-movl   $0x5cb,0x8(%esp)
-movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"CDBManager::QueryMember() 1 != type and find lower db->fetch() loop, Lower Query ID : %d\n",0x8(%esp)
+movl   $"CDBManager::QueryMember() 1 == type and find lower db->fetch() loop : %d, Lower, Query ID : %d\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-mov    -0x24(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x6c9>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x24(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,0xc(%esp)
-lea    -0x19c(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"%s%d,",0x4(%esp)
-lea    -0x19c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <sprintf>
-mov    -0x40(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    -0x24(%ebp),%eax
 sub    $0x1,%eax
 imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
+add    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x462>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x24(%ebp),%eax
+sub    $0x1,%eax
+imul   $0x27,%eax,%eax
+add    -0x3c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
+lea    -0x1a0(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"%s%d,",0x4(%esp)
+lea    -0x1a0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <sprintf>
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    -0x24(%ebp),%eax
+sub    $0x1,%eax
+imul   $0x27,%eax,%eax
+add    -0x3c(%ebp),%eax
 add    $0x23,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x744>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x4d9>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
 addl   $0x1,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
-cmp    -0x3c(%ebp),%eax
+cmp    -0x40(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x60e>
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x7ac>
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x3ac>
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x746>
+mov    -0x5c(%ebp),%eax
+cmp    $0x2,%eax
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x6f2>
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x538>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x23,%eax
+mov    %eax,0x8(%esp)
+movl   $0x2,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x574>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x44(%ebp),%eax
+lea    0x27(%eax),%edx
+mov    -0x40(%ebp),%eax
+mov    %al,(%edx)
+mov    -0x3c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
+lea    -0x1a0(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"%s%d,",0x4(%esp)
+lea    -0x1a0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <sprintf>
+movl   $0x1,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x6df>
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x24,%eax
+mov    (%eax),%edx
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x628>
 mov    0x10(%ebp),%eax
 movb   $0x0,0xa(%eax)
-mov    -0x8c(%ebp),%ebx
+movl   $0x5cb,0x8(%esp)
+movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::QueryMember() 1 != type and find lower db->fetch() loop, Lower Query ID : %d\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    -0x20(%ebp),%eax
+imul   $0x27,%eax,%eax
+add    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x667>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x20(%ebp),%eax
+imul   $0x27,%eax,%eax
+add    -0x3c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
+lea    -0x1a0(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"%s%d,",0x4(%esp)
+lea    -0x1a0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <sprintf>
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    -0x20(%ebp),%eax
+sub    $0x1,%eax
+imul   $0x27,%eax,%eax
+add    -0x3c(%ebp),%eax
+add    $0x23,%eax
+mov    %eax,0x8(%esp)
+movl   $0x2,0x4(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x6db>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+addl   $0x1,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+cmp    -0x40(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x5b4>
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x746>
+mov    0x10(%ebp),%eax
+movb   $0x0,0xa(%eax)
 movl   $0x5e3,0x8(%esp)
 movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x5c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryMember() 1 != type and 2 != type, type(%d)\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-lea    -0x19c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+lea    -0x1a0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
 sub    $0x1,%eax
-movb   $0x0,-0x19c(%ebp,%eax,1)
-lea    -0x19c(%ebp),%eax
+movb   $0x0,-0x1a0(%ebp,%eax,1)
+lea    -0x1a0(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s)",0x4(%esp)
-lea    -0x19c(%ebp),%eax
+lea    -0x1a0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-mov    0x10(%ebp),%eax
+mov    -0x38(%ebp),%edx
+mov    0x10(%ebp),%eax
+mov    %edx,0xf(%eax)
 mov    -0x34(%ebp),%edx
-mov    %edx,0xf(%eax)
-mov    0x10(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    0x10(%ebp),%eax
 mov    %edx,0x13(%eax)
-mov    -0x40(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-lea    -0x19c(%ebp),%eax
+lea    -0x1a0(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no, lev, charac_name from charac_info where charac_no in %s",0x8(%esp)
 movl   $0x4e2b,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x87b>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x821>
 movl   $0x5f5,0x8(%esp)
 movl   $&_ZZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_MemberE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-lea    -0x19c(%ebp),%eax
+lea    -0x1a0(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildMember() select lev, charac_name from charac_info where charac_no in %s\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x10(%ebp),%eax
 movb   $0x2,0xa(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e2b,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x8b4>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x853>
 mov    0x10(%ebp),%eax
 movb   $0x0,0xa(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,-0x3c(%ebp)
-mov    0x10(%ebp),%eax
-add    $0x17,%eax
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,-0x40(%ebp)
+mov    -0x44(%ebp),%eax
 mov    %eax,-0x2c(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb52>
-mov    -0x40(%ebp),%eax
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xac6>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x90f>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x8a4>
 mov    0x10(%ebp),%eax
 movb   $0x0,0xa(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x9c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+movl   $0x0,-0xa0(%ebp)
+mov    -0x48(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+lea    -0xa0(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x952>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x8ea>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
 mov    -0x2c(%ebp),%eax
 mov    (%eax),%edx
-mov    -0x9c(%ebp),%eax
+mov    -0xa0(%ebp),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x9f7>
-mov    -0x40(%ebp),%eax
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x981>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    -0x2c(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x9a8>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x939>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    -0x2c(%ebp),%eax
 add    $0x5,%eax
 movl   $0x1d,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb4d>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x9c(%ebp),%eax
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xac2>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0xa0(%ebp),%eax
 movl   $0xa,0xc(%esp)
 mov    %eax,0x8(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0xffffffff,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xab9>
-lea    -0x42(%ebp),%eax
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xa3c>
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x42(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CDBManager::QueryMember(), Not Coresponding Database!",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionD1Ev>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionD1Ev>
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xa81>
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xa31>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xa8e>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xaa9>
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xa16>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x42(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x42(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb4e>
-mov    -0x40(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x58,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
+add    -0x3c(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xaff>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-mov    -0x40(%ebp),%eax
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xa7b>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+mov    -0x48(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 imul   $0x27,%eax,%eax
-add    -0x38(%ebp),%eax
+add    -0x3c(%ebp),%eax
 add    $0x5,%eax
 movl   $0x1d,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x41(%ebp)
-movzbl -0x41(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb4e>
-mov    0x10(%ebp),%eax
-movb   $0x3,0xa(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xb6f>
-nop
-addl   $0x1,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-cmp    -0x3c(%ebp),%eax
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xac2>
+mov    0x10(%ebp),%eax
+movb   $0x3,0xa(%eax)
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0xae3>
+addl   $0x1,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+cmp    -0x40(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x8de>
+jne    <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member+0x87a>
 mov    0x10(%ebp),%eax
 movb   $0x1,0xa(%eax)
 mov    $0x1,%eax
 add    $0x1bc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Type propagation algorithm not settling */
/* CDBManager::QueryMember(unsigned int, Packet_DB_Reply_Query_Member&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member
          (CDBManager *this,uint param_1,Packet_DB_Reply_Query_Member *param_2)

{
  char cVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  char acStack_1a1 [257];
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  CMyFileLog local_8c [8];
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CDNFException local_54 [8];
  string local_4c [6];
  allocator local_46;
  char local_45;
  int *local_44;
  int local_40;
  Packet_DB_Reply_Query_Member *local_3c;
  uint local_38;
  uint local_34;
  Packet_DB_Reply_Query_Member *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_44 = *(int **)(this + 8);
  cVar1 = (**(code **)(*local_44 + 0x1c))
                    (local_44,0x4e29,
                     "seLect 1 as type, master_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) as charac from charac_members where charac_no = %d union all select 2, charac_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) from charac_members where master_no = %d"
                     ,param_1,param_1);
  if (cVar1 == '\x01') {
    local_45 = (**(code **)(*local_44 + 0x20))(local_44,0x4e29);
    if (local_45 == '\x01') {
      local_45 = 1;
      puVar5 = (undefined4 *)((int)acStack_1a1 + 1);
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      acStack_1a1[1] = '(';
      local_40 = (**(code **)(*local_44 + 0x6c))(local_44);
      if (local_40 < 0xc) {
        if (local_40 == 0) {
          param_2[0x3e] = (Packet_DB_Reply_Query_Member)0x0;
          param_2[10] = (Packet_DB_Reply_Query_Member)0x1;
          return 1;
        }
      }
      else {
        local_40 = 0xb;
      }
      local_45 = (**(code **)(*local_44 + 0x24))(local_44);
      if (local_45 == '\x01') {
        local_45 = (**(code **)(*local_44 + 0x34))(local_44,0,&local_90);
        if (local_45 == '\x01') {
          local_3c = param_2 + 0x3f;
          local_38 = 0;
          local_34 = 0;
          if (local_90 == 1) {
            local_45 = (**(code **)(*local_44 + 0x38))(local_44,1,&local_9c);
            if (local_45 != '\x01') {
              param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
              return 0;
            }
            cVar1 = '\x01';
            if (local_9c != 0) {
              *(int *)(param_2 + 0x17) = local_9c;
              cVar1 = (**(code **)(*local_44 + 0x38))(local_44,2,param_2 + 0x3a);
              if (cVar1 != '\x01') {
                param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                return 0;
              }
            }
            local_45 = cVar1;
            local_45 = (**(code **)(*local_44 + 0x38))(local_44,3,&local_94);
            if (local_45 != '\x01') {
              param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
              return 0;
            }
            if (local_38 < local_94) {
              local_38 = local_94;
            }
            local_45 = (**(code **)(*local_44 + 0x38))(local_44,4,&local_98);
            if (local_45 != '\x01') {
              param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
              return 0;
            }
            if (local_34 < local_98) {
              local_34 = local_98;
            }
            param_2[0x3e] = (Packet_DB_Reply_Query_Member)((char)local_40 + -1);
            sprintf((char *)((int)acStack_1a1 + 1),"%s%d,",(int)acStack_1a1 + 1,
                    *(undefined4 *)(param_2 + 0x17));
            for (local_2c = 1; local_2c < local_40; local_2c = local_2c + 1) {
              local_45 = (**(code **)(*local_44 + 0x24))(local_44);
              if (local_45 != '\x01') {
                param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
                CMyFileLog::CMyFileLog(local_74,"QueryMember",0x58e);
                CMyFileLog::operator()
                          (local_74,"./log/DBQueryErr",
                           "CDBManager::QueryMember() 1 == type and find lower db->fetch() loop : %d, Lower, Query ID : %d\n"
                           ,local_2c,param_1);
                return 0;
              }
              local_45 = (**(code **)(*local_44 + 0x38))
                                   (local_44,1,local_3c + (local_2c + -1) * 0x27);
              if (local_45 != '\x01') {
                param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                return 0;
              }
              sprintf((char *)((int)acStack_1a1 + 1),"%s%d,",(int)acStack_1a1 + 1,
                      *(undefined4 *)(local_3c + (local_2c + -1) * 0x27));
              cVar1 = (**(code **)(*local_44 + 0x38))
                                (local_44,2,local_3c + (local_2c + -1) * 0x27 + 0x23);
              if (cVar1 != '\x01') {
                param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                return 0;
              }
              local_45 = '\x01';
            }
          }
          else {
            if (local_90 != 2) {
              param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
              CMyFileLog::CMyFileLog(local_64,"QueryMember",0x5e3);
              CMyFileLog::operator()
                        (local_64,"./log/DBQueryErr",
                         "CDBManager::QueryMember() 1 != type and 2 != type, type(%d)\n",local_90);
              return 0;
            }
            local_45 = (**(code **)(*local_44 + 0x38))(local_44,1,local_3c);
            if (local_45 != '\x01') {
              param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
              return 0;
            }
            local_45 = (**(code **)(*local_44 + 0x38))(local_44,2,local_3c + 0x23);
            if (local_45 != '\x01') {
              param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
              return 0;
            }
            param_2[0x3e] = SUB41(local_40,0);
            sprintf((char *)((int)acStack_1a1 + 1),"%s%d,",(int)acStack_1a1 + 1,
                    *(undefined4 *)local_3c);
            for (local_28 = 1; local_28 < local_40; local_28 = local_28 + 1) {
              local_45 = (**(code **)(*local_44 + 0x24))(local_44);
              if (local_45 != '\x01') {
                param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
                CMyFileLog::CMyFileLog(local_6c,"QueryMember",0x5cb);
                CMyFileLog::operator()
                          (local_6c,"./log/DBQueryErr",
                           "CDBManager::QueryMember() 1 != type and find lower db->fetch() loop, Lower Query ID : %d\n"
                           ,local_28,param_1);
                return 0;
              }
              local_45 = (**(code **)(*local_44 + 0x38))(local_44,1,local_3c + local_28 * 0x27);
              if (local_45 != '\x01') {
                param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                return 0;
              }
              sprintf((char *)((int)acStack_1a1 + 1),"%s%d,",(int)acStack_1a1 + 1,
                      *(undefined4 *)(local_3c + local_28 * 0x27));
              cVar1 = (**(code **)(*local_44 + 0x38))
                                (local_44,2,local_3c + (local_28 + -1) * 0x27 + 0x23);
              if (cVar1 != '\x01') {
                param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                return 0;
              }
              local_45 = '\x01';
            }
          }
          sVar3 = strlen((char *)((int)acStack_1a1 + 1));
          acStack_1a1[sVar3] = '\0';
          sprintf((char *)((int)acStack_1a1 + 1),"%s)",(int)acStack_1a1 + 1);
          *(uint *)(param_2 + 0xf) = local_38;
          *(uint *)(param_2 + 0x13) = local_34;
          cVar1 = (**(code **)(*local_44 + 0x1c))
                            (local_44,0x4e2b,
                             "seLect charac_no, lev, charac_name from charac_info where charac_no in %s"
                             ,(int)acStack_1a1 + 1);
          if (cVar1 == '\x01') {
            local_45 = (**(code **)(*local_44 + 0x20))(local_44,0x4e2b);
            if (local_45 == '\x01') {
              local_40 = (**(code **)(*local_44 + 0x6c))(local_44);
              local_30 = param_2 + 0x17;
              for (local_24 = 0; local_24 < local_40; local_24 = local_24 + 1) {
                local_45 = (**(code **)(*local_44 + 0x24))(local_44);
                if (local_45 != '\x01') {
                  param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
                  return 0;
                }
                local_45 = (**(code **)(*local_44 + 0x38))(local_44,0,&local_a0);
                if (local_45 != '\x01') {
                  param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                  return 0;
                }
                if (*(uint *)local_30 == local_a0) {
                  local_45 = (**(code **)(*local_44 + 0x58))(local_44,1,local_30 + 4);
                  if (local_45 != '\x01') {
                    param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                    return 0;
                  }
                  local_45 = (**(code **)(*local_44 + 0x2c))(local_44,2,local_30 + 5,0x1d);
                  if (local_45 != '\x01') {
                    param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                    return 0;
                  }
                }
                else {
                  local_20 = FindCharProxyInArray(this,(ST_MemberProxy *)local_3c,local_a0,'\n');
                  if (local_20 == -1) {
                    std::allocator<char>::allocator();
                    /* try { // try from 08073a90 to 08073a94 has its CatchHandler @ 08073ad6 */
                    std::string::string(local_4c,
                                        "CDBManager::QueryMember(), Not Coresponding Database!",
                                        &local_46);
                    /* try { // try from 08073aa2 to 08073ab1 has its CatchHandler @ 08073ab4 */
                    CDNFException::CDNFException(local_54,local_4c);
                    CDNFException::~CDNFException(local_54);
                    /* try { // try from 08073acf to 08073ad3 has its CatchHandler @ 08073ad6 */
                    std::string::~string(local_4c);
                    std::allocator<char>::~allocator((allocator<char> *)&local_46);
                  }
                  else {
                    local_45 = (**(code **)(*local_44 + 0x58))
                                         (local_44,1,local_3c + local_20 * 0x27 + 4);
                    if (local_45 != '\x01') {
                      param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                      return 0;
                    }
                    local_45 = (**(code **)(*local_44 + 0x2c))
                                         (local_44,2,local_3c + local_20 * 0x27 + 5,0x1d);
                    if (local_45 != '\x01') {
                      param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
                      return 0;
                    }
                  }
                }
              }
              param_2[10] = (Packet_DB_Reply_Query_Member)0x1;
              uVar2 = 1;
            }
            else {
              param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
              uVar2 = 0;
            }
          }
          else {
            CMyFileLog::CMyFileLog(local_5c,"QueryMember",0x5f5);
            CMyFileLog::operator()
                      (local_5c,"./log/DBQueryErr",
                       "CDBManager::QueryGuildMember() select lev, charac_name from charac_info where charac_no in %s\n"
                       ,(int)acStack_1a1 + 1);
            param_2[10] = (Packet_DB_Reply_Query_Member)0x2;
            uVar2 = 0;
          }
        }
        else {
          param_2[10] = (Packet_DB_Reply_Query_Member)0x3;
          uVar2 = 0;
        }
      }
      else {
        param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
        CMyFileLog::CMyFileLog(local_7c,"QueryMember",0x54f);
        CMyFileLog::operator()
                  (local_7c,"./log/DBQueryErr",
                   "CDBManager::QueryMember() First db->fetch(), Lower, Query ID : %d, n_data : %d\n"
                   ,param_1,local_40);
        uVar2 = 0;
      }
    }
    else {
      param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
      CMyFileLog::CMyFileLog(local_84,"QueryMember",0x537);
      CMyFileLog::operator()
                (local_84,"./log/DBQueryErr",
                 "CDBManager::QueryMember() db->exec(select_from_charac_members_for_lower_member_query, Query ID : %d\n"
                 ,param_1);
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_8c,"QueryMember",0x52d);
    CMyFileLog::operator()
              (local_8c,"./log/DBQueryErr",
               "CDBManager::QueryGuildMember() select 1 as type, master_no as charac from charac_members where charac_no = %d union all select 2, charac_no from charac_members where master_no = %d\n"
               ,param_1,param_1);
    param_2[10] = (Packet_DB_Reply_Query_Member)0x0;
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2008 行）：

```cpp
bool CDBManager::QueryMember(unsigned int characNo, Packet_DB_Reply_Query_Member& reply)
{
    CDBHandle* h = m_handles[2];    // game db
    char* mbase = (char*)&reply + 0x17;  // m_master（STMemberDBInfo，紧打包）
    if (!h->set_query(
            0x4e29,
            "seLect 1 as type, master_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) as charac from charac_members where charac_no = %d union all select 2, charac_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) from charac_members where master_no = %d",
            characNo, characNo))
    {
        CMyFileLog log(__FUNCTION__, 0x52d);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildMember() select 1 as type, master_no as charac from charac_members where charac_no = %d union all select 2, charac_no from charac_members where master_no = %d\n",
            characNo, characNo);
        reply.m_flag = 0;
        return 0;
    }
    if (!h->exec(0x4e29))
    {
        reply.m_flag = 0;
        CMyFileLog log(__FUNCTION__, 0x537);
        log("./log/DBQueryErr",
            "CDBManager::QueryMember() db->exec(select_from_charac_members_for_lower_member_query, Query ID : %d\n",
            characNo);
        return 0;
    }
    char str[0x100] = {0};
    str[0] = '(';
    int n = h->get_n_rows();
    if (n > 0xb)
        n = 0xb;
    if (n == 0)
    {
        *(char*)(mbase + 0x27) = 0;
        reply.m_flag = 1;
        return 1;
    }
    if (!h->fetch())
    {
        reply.m_flag = 0;
        CMyFileLog log(__FUNCTION__, 0x54f);
        log("./log/DBQueryErr",
            "CDBManager::QueryMember() First db->fetch(), Lower, Query ID : %d, n_data : %d\n",
            characNo, n);
        return 0;
    }
    int type = 0;
    if (!h->get_int(0, type))
    {
        reply.m_flag = 3;
        return 0;
    }
    ST_MemberProxy* proxies = (ST_MemberProxy*)(mbase + 0x28);
    unsigned int maxExp = 0;
    unsigned int maxIdx = 0;
    if (type == 1)
    {
        unsigned int masterNo = 0;
        if (!h->get_uint(1, masterNo))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (masterNo != 0)
        {
            *(int*)(mbase + 0) = masterNo;
            if (!h->get_uint(2, *(unsigned int*)(mbase + 0x23)))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
        unsigned int t = 0;
        if (!h->get_uint(3, t))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (t > maxExp)
            maxExp = t;
        if (!h->get_uint(4, t))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (t > maxIdx)
            maxIdx = t;
        *(char*)(mbase + 0x27) = (char)(n - 1);
        sprintf(str, "%s%d,", str, *(int*)(mbase + 0));
        for (int i = 1; i < n; i++)
        {
            if (!h->fetch())
            {
                reply.m_flag = 0;
                CMyFileLog log(__FUNCTION__, 0x58e);
                log("./log/DBQueryErr",
                    "CDBManager::QueryMember() 1 == type and find lower db->fetch() loop : %d, Lower, Query ID : %d\n",
                    i, characNo);
                return 0;
            }
            if (!h->get_uint(1, (unsigned int&)proxies[i - 1].m_no))
            {
                reply.m_flag = 3;
                return 0;
            }
            sprintf(str, "%s%d,", str, proxies[i - 1].m_no);
            if (!h->get_uint(2, (unsigned int&)proxies[i - 1].m_field23))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
    }
    else if (type == 2)
    {
        if (!h->get_uint(1, (unsigned int&)proxies[0].m_no))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (!h->get_uint(2, (unsigned int&)proxies[0].m_field23))
        {
            reply.m_flag = 3;
            return 0;
        }
        *(char*)(mbase + 0x27) = (char)n;
        sprintf(str, "%s%d,", str, proxies[0].m_no);
        for (int i = 1; i < n; i++)
        {
            if (!h->fetch())
            {
                reply.m_flag = 0;
                CMyFileLog log(__FUNCTION__, 0x5cb);
                log("./log/DBQueryErr",
                    "CDBManager::QueryMember() 1 != type and find lower db->fetch() loop, Lower Query ID : %d\n",
                    i, characNo);
                return 0;
            }
            if (!h->get_uint(1, (unsigned int&)proxies[i].m_no))
            {
                reply.m_flag = 3;
                return 0;
            }
            sprintf(str, "%s%d,", str, proxies[i].m_no);
            if (!h->get_uint(2, (unsigned int&)proxies[i - 1].m_field23))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
    }
    else
    {
        reply.m_flag = 0;
        CMyFileLog log(__FUNCTION__, 0x5e3);
        log("./log/DBQueryErr",
            "CDBManager::QueryMember() 1 != type and 2 != type, type(%d)\n", type);
        return 0;
    }
    int len = strlen(str);
    str[len - 1] = 0;
    sprintf(str, "%s)", str);
    reply.m_fieldF = (int)maxExp;
    reply.m_field13 = (int)maxIdx;
    if (!h->set_query(0x4e2b,
                      "seLect charac_no, lev, charac_name from charac_info where charac_no in %s",
                      str))
    {
        CMyFileLog log(__FUNCTION__, 0x5f5);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildMember() select lev, charac_name from charac_info where charac_no in %s\n",
            str);
        reply.m_flag = 2;
        return 0;
    }
    if (!h->exec(0x4e2b))
    {
        reply.m_flag = 0;
        return 0;
    }
    n = h->get_n_rows();
    ST_MemberProxy* master = (ST_MemberProxy*)mbase;
    int j = 0;
    for (; j < n; j++)
    {
        if (!h->fetch())
        {
            reply.m_flag = 0;
            return 0;
        }
        int no = 0;
        if (!h->get_uint(0, (unsigned int&)no))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (master->m_no == no)
        {
            if (!h->get_ubyte(1, master->m_lev))
            {
                reply.m_flag = 3;
                return 0;
            }
            if (!h->get_str(2, master->m_name, 0x1d))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
        else
        {
            int found = FindCharProxyInArray(proxies, (unsigned int)no, 0xa);
            if (found == -1)
                CDNFException("CDBManager::QueryMember(), Not Coresponding Database!");
            if (!h->get_ubyte(1, proxies[found].m_lev))
            {
                reply.m_flag = 3;
                return 0;
            }
            if (!h->get_str(2, proxies[found].m_name, 0x1d))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
    }
    reply.m_flag = 1;
    return 1;
}
```
