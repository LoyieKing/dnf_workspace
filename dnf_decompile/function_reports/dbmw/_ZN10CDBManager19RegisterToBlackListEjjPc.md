# _ZN10CDBManager19RegisterToBlackListEjjPc

`CDBManager::RegisterToBlackList(unsigned int, unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80758d2` | `0x5fb` | `0x8059364` | `0x5cb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,393 +1,378 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x94,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    0x14(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into charac_black_list( m_id, charac_no, charac_name,  occ_time ) values( %s, %d, '%s', now() )",0x8(%esp)
 movl   $0x4e3f,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0xc8>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0xc6>
+movl   $0x9fd,0x8(%esp)
+movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x9fd,0x8(%esp)
-movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x14(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x14(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() inSert into charac_black_list( m_id, charac_no, charac_name,  occ_time ) values( %s, %d, '%s', now() )",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e3f,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0xfa>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0xf1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_black_info set black_point = black_point + 1 where charac_no = %d",0x8(%esp)
 movl   $0x4e41,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x171>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x168>
 movl   $0xa0e,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() upDate charac_black_info set black_point = black_point + 1 where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e41,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x1b1>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x1b8>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x1bd>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x26e>
+sete   %al
+test   %al,%al
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x245>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into charac_black_info( charac_no, black_point,  offset_point ) values( %d, 1, 0 )",0x8(%esp)
 movl   $0x4e43,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x23c>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x21a>
 movl   $0xa17,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() inSert into charac_black_info( charac_no, black_point,  offset_point ) values( %d, 1, 0 )",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e43,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x26e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x245>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect black_point,offset_point,unix_timestamp(problem_child_time) from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $0x4ed4,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x2e5>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x2bc>
 movl   $0xa24,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ed4,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x310>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x2e7>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0xc(%ebp)
 cmpl   $0x1,-0xc(%ebp)
-jle    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x368>
+jle    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x33f>
 movl   $0xa2c,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() idata > 1 seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $"./log/BlackListModify",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x3c8>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x39f>
 movl   $0xa32,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
-movl   $0x0,-0x68(%ebp)
-movl   $0x0,-0x6c(%ebp)
-movl   $0x0,-0x70(%ebp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
+movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x1c(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x68(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x44c>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x423>
 movl   $0xa3b,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x6c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x4bb>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x492>
 movl   $0xa40,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x70(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x52a>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x501>
 movl   $0xa45,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
-mov    -0x70(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
+mov    -0x1c(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5ed>
-mov    -0x68(%ebp),%edx
-mov    -0x6c(%ebp),%eax
+jne    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5bd>
+mov    -0x14(%ebp),%edx
+mov    -0x18(%ebp),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x63,%eax
-jle    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5ed>
+jle    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5bd>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_black_info set problem_child_time = now() where charac_no = %d",0x8(%esp)
 movl   $0x4ed5,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5be>
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x595>
 movl   $0xa4e,0x8(%esp)
 movl   $&_ZZN10CDBManager19RegisterToBlackListEjjPcE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::RegisterToBlackList() upDate charac_black_info set problem_child_time = now() where charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ed5,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5ed>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5f2>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5bd>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager19RegisterToBlackListEjjPc+0x5c2>
 mov    $0x1,%eax
 add    $0x94,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::RegisterToBlackList(unsigned int, unsigned int, char*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager19RegisterToBlackListEjjPc
          (CDBManager *this,uint param_1,uint param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  int local_74;
  int local_70;
  int local_6c;
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0xc);
  pcVar1 = *(code **)(*local_14 + 0x1c);
  uVar4 = NumberToString(param_1,0);
  cVar3 = (*pcVar1)(local_14,0x4e3f,
                    "inSert into charac_black_list( m_id, charac_no, charac_name,  occ_time ) values( %s, %d, \'%s\', now() )"
                    ,uVar4,param_2,param_3);
  if (cVar3 != '\x01') {
    uVar4 = NumberToString(param_1,0);
    CMyFileLog::CMyFileLog(local_68,"RegisterToBlackList",0x9fd);
    CMyFileLog::operator()
              (local_68,"./log/DBQueryErr",
               "CDBManager::RegisterToBlackList() inSert into charac_black_list( m_id, charac_no, charac_name,  occ_time ) values( %s, %d, \'%s\', now() )"
               ,uVar4,param_2,param_3);
    return 0;
  }
  local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e3f);
  if (local_15 != '\x01') {
    return 0;
  }
  cVar3 = (**(code **)(*local_14 + 0x1c))
                    (local_14,0x4e41,
                     "upDate charac_black_info set black_point = black_point + 1 where charac_no = %d"
                     ,param_2);
  if (cVar3 != '\x01') {
    CMyFileLog::CMyFileLog(local_60,"RegisterToBlackList",0xa0e);
    CMyFileLog::operator()
              (local_60,"./log/DBQueryErr",
               "CDBManager::RegisterToBlackList() upDate charac_black_info set black_point = black_point + 1 where charac_no = %d"
               ,param_2);
    return 0;
  }
  local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e41);
  if ((local_15 == '\x01') && (lVar5 = (**(code **)(*local_14 + 0x74))(local_14), lVar5 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    cVar3 = (**(code **)(*local_14 + 0x1c))
                      (local_14,0x4e43,
                       "inSert into charac_black_info( charac_no, black_point,  offset_point ) values( %d, 1, 0 )"
                       ,param_2);
    if (cVar3 != '\x01') {
      CMyFileLog::CMyFileLog(local_58,"RegisterToBlackList",0xa17);
      CMyFileLog::operator()
                (local_58,"./log/DBQueryErr",
                 "CDBManager::RegisterToBlackList() inSert into charac_black_info( charac_no, black_point,  offset_point ) values( %d, 1, 0 )"
                 ,param_2);
      return 0;
    }
    local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e43);
    if (local_15 != '\x01') {
      return 0;
    }
  }
  cVar3 = (**(code **)(*local_14 + 0x1c))
                    (local_14,0x4ed4,
                     "seLect black_point,offset_point,unix_timestamp(problem_child_time) from charac_black_info where charac_no=%d"
                     ,param_2);
  if (cVar3 == '\x01') {
    cVar3 = (**(code **)(*local_14 + 0x20))(local_14,0x4ed4);
    if (cVar3 == '\x01') {
      local_10 = (**(code **)(*local_14 + 0x6c))(local_14);
      if (1 < local_10) {
        CMyFileLog::CMyFileLog(local_48,"RegisterToBlackList",0xa2c);
        CMyFileLog::operator()
                  (local_48,"./log/BlackListModify",
                   "CDBManager::RegisterToBlackList() idata > 1 seLect black_point,offset_point from charac_black_info where charac_no=%d"
                   ,param_2);
      }
      cVar3 = (**(code **)(*local_14 + 0x24))(local_14);
      if (cVar3 == '\x01') {
        local_6c = 0;
        local_70 = 0;
        local_74 = 0;
        cVar3 = (**(code **)(*local_14 + 0x34))(local_14,0,&local_6c);
        if (cVar3 == '\x01') {
          cVar3 = (**(code **)(*local_14 + 0x34))(local_14,1,&local_70);
          if (cVar3 == '\x01') {
            cVar3 = (**(code **)(*local_14 + 0x38))(local_14,2,&local_74);
            if (cVar3 == '\x01') {
              if ((local_74 == 0) && (99 < local_6c - local_70)) {
                cVar3 = (**(code **)(*local_14 + 0x1c))
                                  (local_14,0x4ed5,
                                   "upDate charac_black_info set problem_child_time = now() where charac_no = %d"
                                   ,param_2);
                if (cVar3 != '\x01') {
                  CMyFileLog::CMyFileLog(local_20,"RegisterToBlackList",0xa4e);
                  CMyFileLog::operator()
                            (local_20,"./log/DBQueryErr",
                             "CDBManager::RegisterToBlackList() upDate charac_black_info set problem_child_time = now() where charac_no = %d"
                             ,param_2);
                  return 0;
                }
                cVar3 = (**(code **)(*local_14 + 0x20))(local_14,0x4ed5);
                if (cVar3 != '\x01') {
                  return 0;
                }
              }
              uVar4 = 1;
            }
            else {
              CMyFileLog::CMyFileLog(local_28,"RegisterToBlackList",0xa45);
              CMyFileLog::operator()
                        (local_28,"./log/DBQueryErr",
                         "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                         ,param_2);
              uVar4 = 0;
            }
          }
          else {
            CMyFileLog::CMyFileLog(local_30,"RegisterToBlackList",0xa40);
            CMyFileLog::operator()
                      (local_30,"./log/DBQueryErr",
                       "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                       ,param_2);
            uVar4 = 0;
          }
        }
        else {
          CMyFileLog::CMyFileLog(local_38,"RegisterToBlackList",0xa3b);
          CMyFileLog::operator()
                    (local_38,"./log/DBQueryErr",
                     "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                     ,param_2);
          uVar4 = 0;
        }
      }
      else {
        CMyFileLog::CMyFileLog(local_40,"RegisterToBlackList",0xa32);
        CMyFileLog::operator()
                  (local_40,"./log/DBQueryErr",
                   "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                   ,param_2);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_50,"RegisterToBlackList",0xa24);
    CMyFileLog::operator()
              (local_50,"./log/DBQueryErr",
               "CDBManager::RegisterToBlackList() seLect black_point,offset_point from charac_black_info where charac_no=%d"
               ,param_2);
    uVar4 = 0;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
