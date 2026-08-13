# _ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj

`CDBManager::OnGuildJoinByListApprove(unsigned int, char, unsigned int, unsigned int, STGuildJoinInfo&, unsigned int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80853d4` | `0x65b` | `0x8055882` | `0x667` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,408 +1,410 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0xa8,%esp
+sub    $0xb8,%esp
 mov    0x10(%ebp),%eax
-mov    %al,-0x7c(%ebp)
+mov    %al,-0x8c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0xc(%ebp)
 movl   $0x3c,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-movzbl -0x7c(%ebp),%edx
+movzbl -0x8c(%ebp),%edx
 mov    0x1c(%ebp),%eax
 mov    %dl,(%eax)
-mov    0x1c(%ebp),%eax
 mov    0xc(%ebp),%edx
+mov    0x1c(%ebp),%eax
 mov    %edx,0x4(%eax)
 mov    0x1c(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0xc(%eax)
-mov    0x1c(%ebp),%eax
 mov    0x18(%ebp),%edx
+mov    0x1c(%ebp),%eax
 mov    %edx,0x10(%eax)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect m_id,born_year from guild_join_list where guild_id=%d and charac_no=%d",0x8(%esp)
 movl   $0x4f0a,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0xd7>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0xdd>
 movl   $0x23d1,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(seLect_from_guild_join_list) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f0a,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x111>
+jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x117>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x118>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x11e>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x11d>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x161>
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x123>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x167>
 movl   $0x23d7,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"exec(seLect_from_guild_join_list) or fetch() Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    0x1c(%ebp),%eax
-add    $0x8,%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x1cc>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x1cf>
 movl   $0x23dd,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"get_uint(0, join_info.m_uAccId) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
+mov    -0x14(%ebp),%edx
+mov    0x1c(%ebp),%eax
+mov    %edx,0x8(%eax)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 add    $0x36,%eax
 movl   $0x3,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x23f>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x24b>
 movl   $0x23e3,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"get_str(1, join_info.m_bornYear, sizeof(join_info.m_bornYear)) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_name,job,grow_type,lev,sex from charac_info where charac_no=%d",0x8(%esp)
 movl   $0x4f0b,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2af>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2bb>
 movl   $0x23ec,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(seLect_from_charac_info_with_guild_join_list Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f0b,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2e9>
+jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2f5>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2f0>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2fc>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2f5>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x339>
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x301>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x345>
 movl   $0x23f2,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"exec(seLect_from_charac_info_with_guild_join_list) or fetch() Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 add    $0x14,%eax
 movl   $0x1d,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x3ac>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x3b8>
 movl   $0x240a,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"get_str(0, join_info.m_szJoinCharName) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 add    $0x32,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x417>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x423>
 movl   $0x2411,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"get_byte(1, join_info.m_JoinJob) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 add    $0x33,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x482>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x48e>
 movl   $0x2417,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"get_byte(2, join_info.m_JoinGrowType) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x4ed>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x4f9>
 movl   $0x241d,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"get_byte(3, join_info.m_JoinLevel) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 add    $0x35,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x558>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x564>
 movl   $0x2423,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"get_byte(4, join_info.m_JoinSex) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x582>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x58e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_join_list where guild_id=%d and charac_no=%d",0x8(%esp)
 movl   $0x4f0c,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x5f6>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x602>
 movl   $0x242f,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(deLete_from_guild_join_list) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f0c,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x654>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x660>
 movl   $0x2435,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRjE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"guild_db->exec(deLete_from_guild_join_list) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnGuildJoinByListApprove(unsigned int, char, unsigned int, unsigned int,
   STGuildJoinInfo&, unsigned int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj
          (CDBManager *this,uint param_1,char param_2,uint param_3,uint param_4,
          STGuildJoinInfo *param_5,uint *param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int *local_14;
  int *local_10;
  
  local_14 = *(int **)(this + 0x20);
  local_10 = *(int **)(this + 8);
  memset(param_5,0,0x3c);
  *param_5 = (STGuildJoinInfo)param_2;
  *(uint *)(param_5 + 4) = param_1;
  *(uint *)(param_5 + 0xc) = param_3;
  *(uint *)(param_5 + 0x10) = param_4;
  cVar2 = (**(code **)(*local_14 + 0x1c))
                    (local_14,0x4f0a,
                     "seLect m_id,born_year from guild_join_list where guild_id=%d and charac_no=%d"
                     ,param_1,param_4);
  if (cVar2 != '\x01') {
    CMyFileLog::CMyFileLog(local_7c,"OnGuildJoinByListApprove",0x23d1);
    CMyFileLog::operator()
              (local_7c,"./log/DBQueryErr","set_query(seLect_from_guild_join_list) Query Error");
    return 0;
  }
  cVar2 = (**(code **)(*local_14 + 0x20))(local_14,0x4f0a);
  if ((cVar2 == '\x01') && (cVar2 = (**(code **)(*local_14 + 0x24))(local_14), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    CMyFileLog::CMyFileLog(local_74,"OnGuildJoinByListApprove",0x23d7);
    CMyFileLog::operator()
              (local_74,"./log/DBQueryErr",
               "exec(seLect_from_guild_join_list) or fetch() Query Error");
    return 0;
  }
  cVar2 = (**(code **)(*local_14 + 0x38))(local_14,0,param_5 + 8);
  if (cVar2 != '\x01') {
    CMyFileLog::CMyFileLog(local_6c,"OnGuildJoinByListApprove",0x23dd);
    CMyFileLog::operator()
              (local_6c,"./log/DBQueryErr","get_uint(0, join_info.m_uAccId) Query Error");
    return 0;
  }
  cVar2 = (**(code **)(*local_14 + 0x2c))(local_14,1,param_5 + 0x36,3);
  if (cVar2 == '\x01') {
    cVar2 = (**(code **)(*local_10 + 0x1c))
                      (local_10,0x4f0b,
                       "seLect charac_name,job,grow_type,lev,sex from charac_info where charac_no=%d"
                       ,param_4);
    if (cVar2 == '\x01') {
      cVar2 = (**(code **)(*local_10 + 0x20))(local_10,0x4f0b);
      if ((cVar2 == '\x01') && (cVar2 = (**(code **)(*local_10 + 0x24))(local_10), cVar2 == '\x01'))
      {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CMyFileLog::CMyFileLog(local_54,"OnGuildJoinByListApprove",0x23f2);
        CMyFileLog::operator()
                  (local_54,"./log/DBQueryErr",
                   "exec(seLect_from_charac_info_with_guild_join_list) or fetch() Query Error");
        uVar3 = 0;
      }
      else {
        cVar2 = (**(code **)(*local_10 + 0x2c))(local_10,0,param_5 + 0x14,0x1d);
        if (cVar2 == '\x01') {
          cVar2 = (**(code **)(*local_10 + 0x50))(local_10,1,param_5 + 0x32);
          if (cVar2 == '\x01') {
            cVar2 = (**(code **)(*local_10 + 0x50))(local_10,2,param_5 + 0x33);
            if (cVar2 == '\x01') {
              cVar2 = (**(code **)(*local_10 + 0x50))(local_10,3,param_5 + 0x34);
              if (cVar2 == '\x01') {
                cVar2 = (**(code **)(*local_10 + 0x50))(local_10,4,param_5 + 0x35);
                if (cVar2 == '\x01') {
                  cVar2 = GuildJoin(this,param_5,param_6);
                  if (cVar2 == '\x01') {
                    cVar2 = (**(code **)(*local_14 + 0x1c))
                                      (local_14,0x4f0c,
                                       "deLete from guild_join_list where guild_id=%d and charac_no=%d"
                                       ,param_1,param_4);
                    if (cVar2 == '\x01') {
                      cVar2 = (**(code **)(*local_14 + 0x20))(local_14,0x4f0c);
                      if (cVar2 == '\x01') {
                        uVar3 = 1;
                      }
                      else {
                        CMyFileLog::CMyFileLog(local_1c,"OnGuildJoinByListApprove",0x2435);
                        CMyFileLog::operator()
                                  (local_1c,"./log/DBQueryErr",
                                   "guild_db->exec(deLete_from_guild_join_list) Query Error");
                        uVar3 = 0;
                      }
                    }
                    else {
                      CMyFileLog::CMyFileLog(local_24,"OnGuildJoinByListApprove",0x242f);
                      CMyFileLog::operator()
                                (local_24,"./log/DBQueryErr",
                                 "set_query(deLete_from_guild_join_list) Query Error");
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  CMyFileLog::CMyFileLog(local_2c,"OnGuildJoinByListApprove",0x2423);
                  CMyFileLog::operator()
                            (local_2c,"./log/DBQueryErr",
                             "get_byte(4, join_info.m_JoinSex) Query Error");
                  uVar3 = 0;
                }
              }
              else {
                CMyFileLog::CMyFileLog(local_34,"OnGuildJoinByListApprove",0x241d);
                CMyFileLog::operator()
                          (local_34,"./log/DBQueryErr",
                           "get_byte(3, join_info.m_JoinLevel) Query Error");
                uVar3 = 0;
              }
            }
            else {
              CMyFileLog::CMyFileLog(local_3c,"OnGuildJoinByListApprove",0x2417);
              CMyFileLog::operator()
                        (local_3c,"./log/DBQueryErr",
                         "get_byte(2, join_info.m_JoinGrowType) Query Error");
              uVar3 = 0;
            }
          }
          else {
            CMyFileLog::CMyFileLog(local_44,"OnGuildJoinByListApprove",0x2411);
            CMyFileLog::operator()
                      (local_44,"./log/DBQueryErr","get_byte(1, join_info.m_JoinJob) Query Error");
            uVar3 = 0;
          }
        }
        else {
          CMyFileLog::CMyFileLog(local_4c,"OnGuildJoinByListApprove",0x240a);
          CMyFileLog::operator()
                    (local_4c,"./log/DBQueryErr",
                     "get_str(0, join_info.m_szJoinCharName) Query Error");
          uVar3 = 0;
        }
      }
      return uVar3;
    }
    CMyFileLog::CMyFileLog(local_5c,"OnGuildJoinByListApprove",0x23ec);
    CMyFileLog::operator()
              (local_5c,"./log/DBQueryErr",
               "set_query(seLect_from_charac_info_with_guild_join_list Query Error");
    return 0;
  }
  CMyFileLog::CMyFileLog(local_64,"OnGuildJoinByListApprove",0x23e3);
  CMyFileLog::operator()
            (local_64,"./log/DBQueryErr",
             "get_str(1, join_info.m_bornYear, sizeof(join_info.m_bornYear)) Query Error");
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
