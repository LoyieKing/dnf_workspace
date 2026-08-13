# _ZN10CDBManager16SaveMemberInsertEjjh

`CDBManager::SaveMemberInsert(unsigned int, unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8072890` | `0x647` | `0x8055272` | `0x61b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,431 +1,419 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x88,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x5c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpb   $0x2,-0x5c(%ebp)
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x338>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x322>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_members set master_no = %d , create_time = now() where charac_no = %d",0x8(%esp)
 movl   $0x4e45,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0xa7>
 movl   $0x455,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() upDate charac_members set master_no = %d , create_time = now() where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e45,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0xe7>
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0xe0>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0xee>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0xf3>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x1b2>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0xe7>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0xec>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x1a4>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()",0x8(%esp)
 movl   $0x4e46,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x180>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x179>
 movl   $0x466,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e46,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x1b2>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x1a4>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_members set charac_no = %d, create_time = now() where charac_no = %d",0x8(%esp)
 movl   $0x4e4b,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x237>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x229>
 movl   $0x47b,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() upDate charac_members set charac_no = %d where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e4b,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x277>
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x262>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x27e>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x283>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x269>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x26e>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x318>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time = now()",0x8(%esp)
 movl   $0x4e47,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x302>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x2ed>
 movl   $0x488,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=0, exp = 0",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e47,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x318>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 cmpb   $0x1,-0x5c(%ebp)
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x332>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_members set master_no = %d, create_time = now() where charac_no = %d",0x8(%esp)
 movl   $0x4e48,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x3c7>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x3b7>
 movl   $0x49d,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() upDate charac_members set master_no = %d where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e48,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x407>
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x3f0>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x40e>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x413>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4d2>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x3f7>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x3fc>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4b4>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()",0x8(%esp)
 movl   $0x4e49,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4a0>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x489>
 movl   $0x4ae,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=%d, exp = 0",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e49,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4d2>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4b4>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_members set create_time = now() where charac_no = %d",0x8(%esp)
 movl   $0x4e4a,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x549>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x52b>
 movl   $0x4c2,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() upDate charac_members set create_time = now() where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e4a,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x589>
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x564>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x590>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x595>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x56b>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x570>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x614>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time=now()",0x8(%esp)
 movl   $0x4e46,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x611>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x5ec>
 movl   $0x4cf,0x8(%esp)
 movl   $&_ZZN10CDBManager16SaveMemberInsertEjjhE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time=now()",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e46,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x614>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x619>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveMemberInsert(unsigned int, unsigned int, unsigned char) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager16SaveMemberInsertEjjh
          (CDBManager *this,uint param_1,uint param_2,uchar param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 8);
  if (param_3 == '\x02') {
    cVar2 = (**(code **)(*local_10 + 0x1c))
                      (local_10,0x4e45,
                       "upDate charac_members set master_no = %d , create_time = now() where charac_no = %d"
                       ,param_1,param_2);
    if (cVar2 != '\x01') {
      CMyFileLog::CMyFileLog(local_54,"SaveMemberInsert",0x455);
      CMyFileLog::operator()
                (local_54,"./log/DBQueryErr",
                 "CDBManager::SaveMemberInsert() upDate charac_members set master_no = %d , create_time = now() where charac_no = %d"
                 ,param_1,param_2);
      return 0;
    }
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e45);
    if ((local_11 == '\x01') && (lVar3 = (**(code **)(*local_10 + 0x74))(local_10), lVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = (**(code **)(*local_10 + 0x1c))
                        (local_10,0x4e46,
                         "inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()"
                         ,param_2,param_1);
      if (cVar2 != '\x01') {
        CMyFileLog::CMyFileLog(local_4c,"SaveMemberInsert",0x466);
        CMyFileLog::operator()
                  (local_4c,"./log/DBQueryErr",
                   "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()"
                   ,param_2,param_1);
        return 0;
      }
      local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e46);
      if (local_11 != '\x01') {
        return 0;
      }
    }
    cVar2 = (**(code **)(*local_10 + 0x1c))
                      (local_10,0x4e4b,
                       "upDate charac_members set charac_no = %d, create_time = now() where charac_no = %d"
                       ,param_1,param_1);
    if (cVar2 != '\x01') {
      CMyFileLog::CMyFileLog(local_44,"SaveMemberInsert",0x47b);
      CMyFileLog::operator()
                (local_44,"./log/DBQueryErr",
                 "CDBManager::SaveMemberInsert() upDate charac_members set charac_no = %d where charac_no = %d"
                 ,param_1,param_1);
      return 0;
    }
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e4b);
    if ((local_11 == '\x01') && (lVar3 = (**(code **)(*local_10 + 0x74))(local_10), lVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = (**(code **)(*local_10 + 0x1c))
                        (local_10,0x4e47,
                         "inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time = now()"
                         ,param_1);
      if (cVar2 != '\x01') {
        CMyFileLog::CMyFileLog(local_3c,"SaveMemberInsert",0x488);
        CMyFileLog::operator()
                  (local_3c,"./log/DBQueryErr",
                   "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=0, exp = 0"
                   ,param_1);
        return 0;
      }
      cVar2 = (**(code **)(*local_10 + 0x20))(local_10,0x4e47);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    cVar2 = (**(code **)(*local_10 + 0x1c))
                      (local_10,0x4e48,
                       "upDate charac_members set master_no = %d, create_time = now() where charac_no = %d"
                       ,param_1,param_2);
    if (cVar2 != '\x01') {
      CMyFileLog::CMyFileLog(local_34,"SaveMemberInsert",0x49d);
      CMyFileLog::operator()
                (local_34,"./log/DBQueryErr",
                 "CDBManager::SaveMemberInsert() upDate charac_members set master_no = %d where charac_no = %d"
                 ,param_1,param_2);
      return 0;
    }
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e48);
    if ((local_11 == '\x01') && (lVar3 = (**(code **)(*local_10 + 0x74))(local_10), lVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = (**(code **)(*local_10 + 0x1c))
                        (local_10,0x4e49,
                         "inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()"
                         ,param_2,param_1);
      if (cVar2 != '\x01') {
        CMyFileLog::CMyFileLog(local_2c,"SaveMemberInsert",0x4ae);
        CMyFileLog::operator()
                  (local_2c,"./log/DBQueryErr",
                   "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=%d, exp = 0"
                   ,param_2,param_1);
        return 0;
      }
      local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e49);
      if (local_11 != '\x01') {
        return 0;
      }
    }
    cVar2 = (**(code **)(*local_10 + 0x1c))
                      (local_10,0x4e4a,
                       "upDate charac_members set create_time = now() where charac_no = %d",param_1)
    ;
    if (cVar2 != '\x01') {
      CMyFileLog::CMyFileLog(local_24,"SaveMemberInsert",0x4c2);
      CMyFileLog::operator()
                (local_24,"./log/DBQueryErr",
                 "CDBManager::SaveMemberInsert() upDate charac_members set create_time = now() where charac_no = %d"
                 ,param_1);
      return 0;
    }
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e4a);
    if ((local_11 == '\x01') && (lVar3 = (**(code **)(*local_10 + 0x74))(local_10), lVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = (**(code **)(*local_10 + 0x1c))
                        (local_10,0x4e46,
                         "inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time=now()"
                         ,param_1);
      if (cVar2 != '\x01') {
        CMyFileLog::CMyFileLog(local_1c,"SaveMemberInsert",0x4cf);
        CMyFileLog::operator()
                  (local_1c,"./log/DBQueryErr",
                   "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time=now()"
                   ,param_1);
        return 0;
      }
      cVar2 = (**(code **)(*local_10 + 0x20))(local_10,0x4e46);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
