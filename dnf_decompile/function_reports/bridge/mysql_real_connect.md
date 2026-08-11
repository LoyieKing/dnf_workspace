# mysql_real_connect

`mysql_real_connect`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x8096d60` | `0x15fc` | `0x8056e49` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,1238 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x3ac,%esp
-mov    0x8(%ebp),%edx
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x1908fc,%ebx
-mov    (%edx),%ecx
-test   %ecx,%ecx
-jne    <T> <mysql_real_connect+0xad0>
-lea    0x18d0(%ebx),%eax
-mov    %eax,0x3b0(%edx)
-mov    0x328(%edx),%eax
-movl   $0x0,(%edx)
-movl   $0x0,0x2dc(%edx)
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xe20>
-mov    0x32c(%edx),%ecx
-mov    %eax,0x4(%esp)
-lea    0x2f8(%edx),%eax
-mov    %ecx,0x8(%esp)
-mov    %eax,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <mysql_read_default_options>
-mov    -0x37c(%ebp),%edx
-mov    0x328(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    -0x37c(%ebp),%edx
-mov    0x32c(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    -0x37c(%ebp),%edx
-movl   $0x0,0x32c(%edx)
-movl   $0x0,0x328(%edx)
-mov    0xc(%ebp),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x7b8>
-mov    0xc(%ebp),%eax
-cmpb   $0x0,(%eax)
-je     <T> <mysql_real_connect+0x7b8>
-mov    0x10(%ebp),%edi
-test   %edi,%edi
-je     <T> <mysql_real_connect+0x750>
-mov    0x10(%ebp),%eax
-cmpb   $0x0,(%eax)
-je     <T> <mysql_real_connect+0x750>
-mov    0x14(%ebp),%esi
-test   %esi,%esi
-je     <T> <mysql_real_connect+0x76f>
-mov    0x18(%ebp),%ecx
-test   %ecx,%ecx
-je     <T> <mysql_real_connect+0xfa>
-mov    0x18(%ebp),%eax
-cmpb   $0x0,(%eax)
-jne    <T> <mysql_real_connect+0x103>
-mov    0x320(%edx),%ecx
-mov    %ecx,0x18(%ebp)
-mov    0x1c(%ebp),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x550>
-mov    0x20(%ebp),%edi
-test   %edi,%edi
-je     <T> <mysql_real_connect+0x564>
-mov    (%edx),%eax
-movl   $0x2,0x2ec(%edx)
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x588>
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-mov    %eax,0x4(%esp)
-call   <T> <my_net_init>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-jne    <T> <mysql_real_connect+0xfa8>
-mov    (%edx),%eax
-mov    %edx,-0x37c(%ebp)
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-call   *0x15c(%eax)
-mov    -0x37c(%ebp),%edx
-mov    0x2fc(%edx),%eax
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x7f8>
-mov    0x300(%edx),%eax
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x7c8>
-mov    0x350(%edx),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x195>
-mov    %eax,0x2c(%edx)
-mov    0x2f8(%edx),%eax
-movl   $0xa,0x2e4(%edx)
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x718>
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <cli_safe_read>
-mov    -0x37c(%ebp),%edx
-cmp    $0xffffffff,%eax
-mov    %eax,%esi
-je     <T> <mysql_real_connect+0x12f8>
-mov    0x10(%edx),%ecx
-movzbl (%ecx),%eax
-cmp    $0xa,%eax
-mov    %eax,0x2e4(%edx)
-jne    <T> <mysql_real_connect+0xdc8>
-add    $0x1,%ecx
-mov    %ecx,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <strend>
-mov    -0x37c(%ebp),%edx
-lea    0x386(%edx),%ecx
-mov    %ecx,-0x370(%ebp)
-mov    %eax,%edi
-mov    0x1(%eax),%eax
-mov    %eax,0x2d0(%edx)
-lea    0x5(%edi),%eax
-mov    %ecx,(%esp)
-movl   $0x8,0x8(%esp)
-mov    %eax,0x4(%esp)
-call   <T> <strmake>
-mov    -0x37c(%ebp),%edx
-lea    0xe(%edi),%ecx
-mov    0x10(%edx),%eax
-mov    %eax,-0x36c(%ebp)
-lea    0xf(%edi),%eax
-sub    -0x36c(%ebp),%eax
-cmp    %eax,%esi
-jb     <T> <mysql_real_connect+0x24f>
-movzwl 0xe(%edi),%eax
-mov    %eax,0x2e0(%edx)
-lea    0x12(%ecx),%edi
-mov    %edi,%eax
-sub    -0x36c(%ebp),%eax
-cmp    %eax,%esi
-jb     <T> <mysql_real_connect+0x272>
-movsbl 0x2(%ecx),%eax
-mov    %eax,0x2f0(%edx)
-movzwl 0x3(%ecx),%eax
-mov    %eax,0x2ec(%edx)
-lea    0xd(%edi),%eax
-sub    -0x36c(%ebp),%eax
-cmp    %eax,%esi
-jae    <T> <mysql_real_connect+0xd68>
-andl   $0xffff7fff,0x2e0(%edx)
-cmpb   $0x0,0x364(%edx)
-je     <T> <mysql_real_connect+0x2a2>
-mov    0x14(%ebp),%ecx
-cmpb   $0x0,(%ecx)
-jne    <T> <mysql_real_connect+0xd28>
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <mysql_init_character_set>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0xa08>
-mov    0x10(%edx),%eax
-mov    $0x1,%esi
-mov    %eax,-0x36c(%ebp)
-mov    0x20(%ebp),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x2e7>
-mov    0x20(%ebp),%ecx
-mov    %ecx,(%esp)
-call   <T> <strlen>
-mov    -0x37c(%ebp),%edx
-lea    0x1(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    -0x378(%ebp),%ecx
-mov    %ecx,(%esp)
-mov    %eax,-0x374(%ebp)
-call   <T> <strlen>
-mov    -0x37c(%ebp),%edx
-sub    -0x36c(%ebp),%edi
-movl   $0x0,0x24(%esp)
-mov    %esi,0x18(%esp)
-lea    0x280(%edx),%ecx
-mov    %ecx,0x1c(%esp)
-lea    0x27c(%edx),%ecx
-mov    %ecx,0x14(%esp)
-mov    -0x374(%ebp),%ecx
-add    $0x1,%eax
-mov    %eax,0x8(%esp)
-lea    0x284(%edx),%eax
-mov    %edi,0x20(%esp)
-mov    %eax,0x4(%esp)
-add    $0x1,%ecx
-mov    %ecx,0x10(%esp)
-lea    0x270(%edx),%ecx
-mov    %ecx,0xc(%esp)
-movl   $0x0,(%esp)
-call   <T> <my_multi_malloc>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x10e8>
-mov    0x10(%ebp),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <my_strdup>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-mov    %eax,0x274(%edx)
-je     <T> <mysql_real_connect+0x10e8>
-mov    0x14(%ebp),%ecx
-movl   $0x0,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <my_strdup>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-mov    %eax,0x278(%edx)
-je     <T> <mysql_real_connect+0x10e8>
-mov    -0x378(%ebp),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %eax,0x4(%esp)
-mov    0x284(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <strcpy>
-mov    -0x37c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %ecx,0x4(%esp)
-mov    0x270(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <strcpy>
-mov    0x20(%ebp),%edi
-mov    -0x37c(%ebp),%edx
-test   %edi,%edi
-je     <T> <mysql_real_connect+0xe10>
-mov    0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x27c(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <strcpy>
-mov    -0x37c(%ebp),%edx
-mov    0x10(%edx),%eax
-mov    %edx,-0x37c(%ebp)
-add    $0x1,%eax
-mov    %eax,0x4(%esp)
-mov    0x280(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <strcpy>
-mov    -0x37c(%ebp),%edx
-mov    0x24(%ebp),%eax
-mov    0x1c(%ebp),%ecx
-or     0x30c(%edx),%eax
-mov    0x338(%edx),%esi
-mov    %ecx,0x2d8(%edx)
-or     $0x6a205,%eax
-mov    %eax,%ecx
-or     $0x20000,%ecx
-test   $0x10000,%eax
-cmovne %ecx,%eax
-test   %esi,%esi
-je     <T> <mysql_real_connect+0x10a0>
-movb   $0x1,0x354(%edx)
-or     $0x8,%ah
-mov    0x18(%ebp),%esi
-mov    %eax,%ecx
-or     $0x8,%ecx
-test   %esi,%esi
-cmovne %ecx,%eax
-mov    %eax,0x24(%ebp)
-mov    0x2e0(%edx),%eax
-or     $0xfffff5df,%eax
-and    %eax,0x24(%ebp)
-testl  $0x200,0x24(%ebp)
-je     <T> <mysql_real_connect+0xb00>
-mov    0x24(%ebp),%eax
-mov    %eax,-0x34e(%ebp)
-mov    0x2c(%edx),%eax
-mov    %eax,-0x34a(%ebp)
-mov    0x290(%edx),%eax
-mov    (%eax),%eax
-mov    %al,-0x346(%ebp)
-mov    0x290(%edx),%eax
-mov    (%eax),%eax
-cmp    $0x2d,%eax
-je     <T> <mysql_real_connect+0xda8>
-mov    %al,-0x346(%ebp)
-lea    -0x344(%ebp),%ecx
-mov    $0x16,%esi
-test   $0x2,%cl
-movb   $0x0,-0x345(%ebp)
-jne    <T> <mysql_real_connect+0x131b>
-mov    %esi,%edi
-xor    %eax,%eax
-and    $0xfffffffc,%edi
-movl   $0x0,(%ecx,%eax,1)
-add    $0x4,%eax
-cmp    %edi,%eax
-jb     <T> <mysql_real_connect+0x518>
-add    %eax,%ecx
-test   $0x2,%esi
-je     <T> <mysql_real_connect+0x538>
-movw   $0x0,(%ecx)
-add    $0x2,%ecx
-and    $0x1,%esi
-je     <T> <mysql_real_connect+0x540>
-movb   $0x0,(%ecx)
-lea    -0x32e(%ebp),%edi
-jmp    <T> <mysql_real_connect+0xb30>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x20(%ebp),%edi
-mov    0x304(%edx),%eax
-test   %edi,%edi
-mov    %eax,0x1c(%ebp)
-jne    <T> <mysql_real_connect+0x119>
-mov    (%edx),%eax
-mov    0x31c(%edx),%ecx
-movl   $0x2,0x2ec(%edx)
-test   %eax,%eax
-mov    %ecx,0x20(%ebp)
-jne    <T> <mysql_real_connect+0x12d>
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x308(%edx),%eax
-cmp    $0x2,%eax
-mov    %eax,-0x36c(%ebp)
-je     <T> <mysql_real_connect+0x5a1>
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0xe50>
-mov    0x20(%ebp),%esi
-test   %esi,%esi
-je     <T> <mysql_real_connect+0xe39>
-mov    0xc(%ebp),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x5c9>
-mov    0xc(%ebp),%esi
-mov    $0xa,%ecx
-lea    -0xf005f(%ebx),%edi
-repz cmpsb %es:(%edi),%ds:(%esi)
-jne    <T> <mysql_real_connect+0xe50>
-mov    %edx,-0x37c(%ebp)
-movl   $0x0,0x8(%esp)
-movl   $0x1,0x4(%esp)
-movl   $0x1,(%esp)
-call   <T> <socket>
-mov    -0x37c(%ebp),%edx
-cmp    $0xffffffff,%eax
-mov    %eax,%esi
-je     <T> <mysql_real_connect+0x1495>
-mov    %edx,-0x37c(%ebp)
-movl   $0x3,0x8(%esp)
-movl   $0x2,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <vio_new>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-mov    %eax,(%edx)
-je     <T> <mysql_real_connect+0x15cd>
-mov    0x20(%ebp),%edi
-test   %edi,%edi
-je     <T> <mysql_real_connect+0x1398>
-mov    -0x410(%ebx),%ecx
-movl   $0x6e,-0x370(%ebp)
-mov    0x28(%ecx),%eax
-mov    %ecx,-0x36c(%ebp)
-lea    -0xaa(%ebp),%ecx
-mov    %ecx,-0x364(%ebp)
-mov    %ecx,%edi
-and    $0x2,%ecx
-mov    %eax,-0x378(%ebp)
-lea    -0xa8(%ebp),%eax
-mov    %eax,-0x374(%ebp)
-jne    <T> <mysql_real_connect+0x13a8>
-mov    -0x370(%ebp),%ecx
-xor    %eax,%eax
-shr    $0x2,%ecx
-rep stos %eax,%es:(%edi)
-testb  $0x2,-0x370(%ebp)
-je     <T> <mysql_real_connect+0x692>
-movw   $0x0,(%edi)
-mov    0x20(%ebp),%ecx
-mov    -0x374(%ebp),%eax
-mov    %edx,-0x37c(%ebp)
-movw   $0x1,-0xaa(%ebp)
-mov    %ecx,0x4(%esp)
-movl   $0x6b,0x8(%esp)
-mov    %eax,(%esp)
-call   <T> <strmake>
-mov    -0x37c(%ebp),%edx
-mov    -0x364(%ebp),%ecx
-mov    0x2f8(%edx),%eax
-movl   $0x6e,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %esi,(%esp)
-mov    %eax,0xc(%esp)
-call   <T> <my_connect>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x152a>
-mov    (%edx),%eax
-movl   $0x2,0x308(%edx)
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xe5d>
-lea    -0xf005f(%ebx),%ecx
-mov    %ecx,0xc(%ebp)
-jmp    <T> <mysql_real_connect+0x12d>
-mov    %eax,0x4(%esp)
-mov    (%edx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %eax,(%esp)
-call   <T> <vio_poll_read>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-je     <T> <mysql_real_connect+0x1ad>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xefd4c(%ebx),%eax
-jmp    <T> <mysql_real_connect+0xea7>
-mov    0x314(%edx),%ecx
-lea    -0xe784c(%ebx),%eax
-mov    0x14(%ebp),%esi
-test   %ecx,%ecx
-cmovne %ecx,%eax
-test   %esi,%esi
-mov    %eax,0x10(%ebp)
-jne    <T> <mysql_real_connect+0xeb>
-mov    0x318(%edx),%eax
-test   %eax,%eax
-mov    %eax,0x14(%ebp)
-jne    <T> <mysql_real_connect+0xeb>
-lea    -0xf0069(%ebx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %eax,(%esp)
-call   <T> <getenv>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-mov    %eax,0x14(%ebp)
-jne    <T> <mysql_real_connect+0xeb>
-lea    -0xe784c(%ebx),%ecx
-mov    %ecx,0x14(%ebp)
-jmp    <T> <mysql_real_connect+0xeb>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x310(%edx),%ecx
-mov    %ecx,0xc(%ebp)
-jmp    <T> <mysql_real_connect+0xc9>
-xchg   %ax,%ax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <my_net_set_write_timeout>
-mov    -0x37c(%ebp),%edx
-mov    0x350(%edx),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x195>
-jmp    <T> <mysql_real_connect+0x192>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <my_net_set_read_timeout>
-mov    -0x37c(%ebp),%edx
-mov    0x300(%edx),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x188>
-jmp    <T> <mysql_real_connect+0x7c8>
-lea    0x0(%esi),%esi
-lea    -0x34e(%ebp),%esi
-mov    %edi,%eax
-sub    %esi,%eax
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-mov    %eax,0x8(%esp)
-mov    %esi,0x4(%esp)
-call   <T> <my_net_write>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-jne    <T> <mysql_real_connect+0x1118>
-mov    %edx,(%esp)
-call   <T> <net_flush>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-jne    <T> <mysql_real_connect+0x1118>
-mov    0x348(%edx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %eax,0x10(%esp)
-mov    0x344(%edx),%eax
-mov    %eax,0xc(%esp)
-mov    0x340(%edx),%eax
-mov    %eax,0x8(%esp)
-mov    0x33c(%edx),%eax
-mov    %eax,0x4(%esp)
-mov    0x338(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <new_VioSSLConnectorFd>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x1371>
-mov    0x2f8(%edx),%ecx
-mov    %eax,0x26c(%edx)
-mov    %edx,-0x37c(%ebp)
-mov    %ecx,0x8(%esp)
-mov    (%edx),%ecx
-mov    %eax,(%esp)
-mov    %ecx,0x4(%esp)
-call   <T> <sslconnect>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x1371>
-testl  $0x40000000,0x24(%ebp)
-je     <T> <mysql_real_connect+0xb48>
-mov    (%edx),%eax
-mov    0x270(%edx),%ecx
-mov    0x17c(%eax),%eax
-mov    %ecx,-0x364(%ebp)
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x9dd>
-test   %ecx,%ecx
-je     <T> <mysql_real_connect+0x9dd>
-mov    %edx,-0x37c(%ebp)
-mov    %eax,(%esp)
-call   <T> <yaSSL_get_peer_certificate>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x9dd>
-mov    %eax,(%esp)
-mov    %eax,-0x380(%ebp)
-call   <T> <yaX509_get_subject_name>
-movl   $0x100,0x8(%esp)
-mov    %eax,(%esp)
-lea    -0x1aa(%ebp),%eax
-mov    %eax,-0x368(%ebp)
-mov    %eax,0x4(%esp)
-call   <T> <yaX509_NAME_oneline>
-mov    -0x380(%ebp),%ecx
-mov    %ecx,(%esp)
-call   <T> <yaX509_free>
-mov    -0x368(%ebp),%ecx
-lea    -0xf0055(%ebx),%eax
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <strstr>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x9dd>
-lea    0x4(%eax),%ecx
-mov    %ecx,(%esp)
-movl   $0x2f,0x4(%esp)
-mov    %ecx,-0x380(%ebp)
-call   <T> <strchr>
-mov    -0x37c(%ebp),%edx
-mov    -0x380(%ebp),%ecx
-test   %eax,%eax
-je     <T> <mysql_real_connect+0x9b7>
-movb   $0x0,(%eax)
-mov    -0x364(%ebp),%eax
-mov    %ecx,(%esp)
-mov    %edx,-0x37c(%ebp)
-mov    %eax,0x4(%esp)
-call   <T> <strcmp>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xb48>
-mov    -0x474(%ebx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7ea,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    -0x37c(%ebp),%edx
-lea    0x0(%esi),%esi
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <end_server>
-mov    -0x37c(%ebp),%edx
-mov    0x284(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    -0x37c(%ebp),%edx
-mov    0x274(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    -0x37c(%ebp),%edx
-mov    0x278(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    -0x37c(%ebp),%edx
-mov    0x28c(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    -0x37c(%ebp),%edx
-mov    0x3bc(%edx),%eax
-mov    %eax,(%esp)
-call   <T> <my_no_flags_free>
-mov    0x24(%ebp),%ecx
-mov    -0x37c(%ebp),%edx
-test   %ecx,%ecx
-movl   $0x0,0x3bc(%edx)
-movl   $0x0,0x28c(%edx)
-movl   $0x0,0x278(%edx)
-movl   $0x0,0x274(%edx)
-movl   $0x0,0x284(%edx)
-jns    <T> <mysql_real_connect+0xd98>
-xor    %edx,%edx
-add    $0x3ac,%esp
-mov    %edx,%eax
-pop    %ebx
-pop    %esi
-pop    %edi
+mov    $0x0,%eax
 pop    %ebp
 ret
-lea    0x0(%esi,%eiz,1),%esi
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x80a,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-xor    %edx,%edx
-add    $0x3ac,%esp
-mov    %edx,%eax
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x2c(%edx),%eax
-lea    -0x349(%ebp),%edi
-movzwl 0x24(%ebp),%ecx
-mov    %al,-0x34c(%ebp)
-mov    0x2c(%edx),%eax
-mov    %cx,-0x34e(%ebp)
-shr    $0x8,%eax
-mov    %al,-0x34b(%ebp)
-movzwl 0x2e(%edx),%eax
-mov    %al,-0x34a(%ebp)
-mov    0x24(%ebp),%eax
-lea    -0x34e(%ebp),%esi
-test   $0x8,%ah
-mov    %eax,0x2dc(%edx)
-jne    <T> <mysql_real_connect+0x820>
-mov    0x10(%ebp),%ecx
-cmpb   $0x0,(%ecx)
-jne    <T> <mysql_real_connect+0xee8>
-mov    %edx,-0x37c(%ebp)
-mov    %edi,(%esp)
-call   <T> <read_user_name>
-mov    -0x37c(%ebp),%edx
-mov    %edi,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <strend>
-mov    0x14(%ebp),%ecx
-mov    -0x37c(%ebp),%edx
-cmpb   $0x0,(%ecx)
-mov    %eax,%edi
-lea    0x1(%eax),%eax
-jne    <T> <mysql_real_connect+0xce8>
-movb   $0x0,0x1(%edi)
-add    $0x2,%edi
-mov    0x18(%ebp),%ecx
-test   %ecx,%ecx
-je     <T> <mysql_real_connect+0xba8>
-testb  $0x8,0x2e0(%edx)
-jne    <T> <mysql_real_connect+0xf40>
-sub    %esi,%edi
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-mov    %edi,0x8(%esp)
-mov    %esi,0x4(%esp)
-call   <T> <my_net_write>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-jne    <T> <mysql_real_connect+0xe90>
-mov    %edx,(%esp)
-call   <T> <net_flush>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-jne    <T> <mysql_real_connect+0xe90>
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <cli_safe_read>
-mov    -0x37c(%ebp),%edx
-cmp    $0xffffffff,%eax
-je     <T> <mysql_real_connect+0x134e>
-cmp    $0x1,%eax
-je     <T> <mysql_real_connect+0xfe8>
-testb  $0x20,0x24(%ebp)
-je     <T> <mysql_real_connect+0xc14>
-movb   $0x1,0x50(%edx)
-mov    0x18(%ebp),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xc3e>
-mov    0x18(%ebp),%eax
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-mov    %eax,0x4(%esp)
-call   <T> <mysql_select_db>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x132b>
-mov    0x324(%edx),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xabf>
-mov    (%eax),%esi
-mov    0x4(%eax),%eax
-lea    (%esi,%eax,4),%eax
-mov    %eax,-0x360(%ebp)
-movzbl 0x385(%edx),%ecx
-cmp    %eax,%esi
-mov    %cl,-0x364(%ebp)
-movb   $0x0,0x385(%edx)
-jae    <T> <mysql_real_connect+0xf96>
-mov    %edx,-0x35c(%ebp)
-jmp    <T> <mysql_real_connect+0xcb3>
-xchg   %ax,%ax
-mov    -0x35c(%ebp),%ecx
-mov    0x294(%ecx),%edi
-test   %edi,%edi
-je     <T> <mysql_real_connect+0xca4>
-mov    %ecx,(%esp)
-call   <T> <cli_use_result>
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xcd7>
-mov    %eax,(%esp)
-call   <T> <mysql_free_result>
-add    $0x4,%esi
-cmp    %esi,-0x360(%ebp)
-jbe    <T> <mysql_real_connect+0xf90>
-mov    (%esi),%edi
-mov    %edi,(%esp)
-call   <T> <strlen>
-mov    %edi,0x4(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x35c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <mysql_real_query>
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xc80>
-mov    -0x35c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-lea    0x0(%esi),%esi
-cmpw   $0x0,0x2e0(%edx)
-jns    <T> <mysql_real_connect+0xf10>
-movb   $0x14,0x1(%edi)
-lea    0x2(%edi),%eax
-add    $0x16,%edi
-mov    %ecx,0x8(%esp)
-mov    -0x370(%ebp),%ecx
-mov    %edx,-0x37c(%ebp)
-mov    %eax,(%esp)
-mov    %ecx,0x4(%esp)
-call   <T> <scramble>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xb94>
-nop
-cmpw   $0x0,0x2e0(%edx)
-js     <T> <mysql_real_connect+0x2a2>
-mov    -0x474(%ebx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x801,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-lea    0x38e(%edx),%eax
-mov    %edx,-0x37c(%ebp)
-movl   $0xc,0x8(%esp)
-mov    %edi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <strmake>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0x28d>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    %edx,%eax
-call   <T> <mysql_close_free_options>
-jmp    <T> <mysql_real_connect+0xabd>
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x280(%edx),%ecx
-cmpb   $0x35,(%ecx)
-jg     <T> <mysql_real_connect+0x4f0>
-movb   $0x21,-0x346(%ebp)
-jmp    <T> <mysql_real_connect+0x4f6>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    %eax,0x10(%esp)
-mov    -0x410(%ebx),%eax
-movl   $0xa,0x14(%esp)
-mov    %edx,-0x37c(%ebp)
-mov    0x1c(%eax),%eax
-mov    %eax,0xc(%esp)
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7d7,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_extended_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-xchg   %ax,%ax
-movl   $0x0,0x27c(%edx)
-jmp    <T> <mysql_real_connect+0x431>
-nop
-mov    0x32c(%edx),%ecx
-lea    -0xf006c(%ebx),%eax
-test   %ecx,%ecx
-jne    <T> <mysql_real_connect+0x54>
-jmp    <T> <mysql_real_connect+0xb2>
-mov    -0x470(%ebx),%eax
-mov    (%eax),%ecx
-test   %ecx,%ecx
-jne    <T> <mysql_real_connect+0x5ac>
-lea    0x0(%esi,%eiz,1),%esi
-cmpl   $0x1,-0x36c(%ebp)
-jbe    <T> <mysql_real_connect+0x1138>
-mov    -0x474(%ebx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7ff,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-lea    0x0(%esi),%esi
-mov    %edx,-0x37c(%ebp)
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xefccc(%ebx),%eax
-mov    %eax,0x10(%esp)
-mov    -0x410(%ebx),%eax
-mov    -0x37c(%ebp),%edx
-mov    0xdc(%eax),%eax
-mov    %eax,0xc(%esp)
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7dd,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_extended_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-mov    %edx,-0x37c(%ebp)
-movl   $0x40,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %edi,(%esp)
-call   <T> <strmake>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xb68>
-lea    0x0(%esi),%esi
-mov    0x14(%ebp),%ecx
-add    $0xa,%edi
-mov    %edx,-0x37c(%ebp)
-mov    %eax,(%esp)
-mov    %ecx,0x8(%esp)
-mov    -0x370(%ebp),%ecx
-mov    %ecx,0x4(%esp)
-call   <T> <scramble_323>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xb94>
-lea    0x0(%esi),%esi
-mov    0x18(%ebp),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %edi,(%esp)
-movl   $0x100,0x8(%esp)
-mov    %eax,0x4(%esp)
-call   <T> <strmake>
-mov    0x18(%ebp),%ecx
-movl   $0x10,0x4(%esp)
-mov    %ecx,(%esp)
-lea    0x1(%eax),%edi
-call   <T> <my_strdup>
-mov    -0x37c(%ebp),%edx
-mov    %eax,0x28c(%edx)
-movl   $0x0,0x18(%ebp)
-jmp    <T> <mysql_real_connect+0xba8>
-nop
-lea    0x0(%esi,%eiz,1),%esi
-mov    -0x35c(%ebp),%edx
-movzbl -0x364(%ebp),%eax
-mov    %al,0x385(%edx)
-jmp    <T> <mysql_real_connect+0xabf>
-mov    (%edx),%eax
-mov    %eax,(%esp)
-call   *0x144(%eax)
-mov    -0x474(%ebx),%eax
-mov    -0x37c(%ebp),%edx
-mov    (%eax),%eax
-movl   $0x0,(%edx)
-mov    %edx,(%esp)
-movl   $0x7d8,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-xchg   %ax,%ax
-mov    0x10(%edx),%eax
-cmpb   $0xfe,(%eax)
-jne    <T> <mysql_real_connect+0xc0a>
-cmpw   $0x0,0x2e0(%edx)
-jns    <T> <mysql_real_connect+0xc0a>
-mov    0x14(%ebp),%eax
-mov    -0x370(%ebp),%ecx
-mov    %edx,-0x37c(%ebp)
-mov    %esi,(%esp)
-mov    %eax,0x8(%esp)
-mov    %ecx,0x4(%esp)
-call   <T> <scramble_323>
-mov    -0x37c(%ebp),%edx
-movl   $0x9,0x8(%esp)
-mov    %esi,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <my_net_write>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-jne    <T> <mysql_real_connect+0x1479>
-mov    %edx,(%esp)
-call   <T> <net_flush>
-mov    -0x37c(%ebp),%edx
-test   %al,%al
-jne    <T> <mysql_real_connect+0x1479>
-mov    %edx,(%esp)
-mov    %edx,-0x37c(%ebp)
-call   <T> <cli_safe_read>
-mov    -0x37c(%ebp),%edx
-cmp    $0xffffffff,%eax
-jne    <T> <mysql_real_connect+0xc0a>
-cmpl   $0x7dd,0x58(%edx)
-jne    <T> <mysql_real_connect+0xa08>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xefca8(%ebx),%eax
-jmp    <T> <mysql_real_connect+0xea7>
-nop
-mov    0x33c(%edx),%ecx
-test   %ecx,%ecx
-jne    <T> <mysql_real_connect+0x48a>
-mov    0x340(%edx),%edi
-test   %edi,%edi
-jne    <T> <mysql_real_connect+0x48a>
-cmpl   $0x0,0x344(%edx)
-jne    <T> <mysql_real_connect+0x48a>
-cmpl   $0x0,0x348(%edx)
-jne    <T> <mysql_real_connect+0x48a>
-cmpb   $0x0,0x354(%edx)
-je     <T> <mysql_real_connect+0x494>
-jmp    <T> <mysql_real_connect+0x491>
-mov    -0x474(%ebx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7d8,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-lea    0x0(%esi),%esi
-mov    %edx,-0x37c(%ebp)
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xefcf8(%ebx),%eax
-jmp    <T> <mysql_real_connect+0xea7>
-lea    0x0(%esi,%eiz,1),%esi
-mov    0x1c(%ebp),%esi
-test   %esi,%esi
-jne    <T> <mysql_real_connect+0x114a>
-mov    -0x74(%ebx),%eax
-mov    (%eax),%eax
-mov    %eax,0x1c(%ebp)
-mov    0xc(%ebp),%ecx
-lea    -0xf005f(%ebx),%eax
-lea    -0x34e(%ebp),%esi
-mov    %edx,-0x37c(%ebp)
-lea    -0x3c(%ebp),%edi
-test   %ecx,%ecx
-cmovne 0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    %eax,0xc(%ebp)
-mov    -0x410(%ebx),%eax
-mov    %eax,-0x36c(%ebp)
-mov    0x2c(%eax),%eax
-movl   $0x1a3,0x4(%esp)
-mov    %esi,(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <my_snprintf>
-mov    -0x37c(%ebp),%edx
-xor    %eax,%eax
-movl   $0x0,(%edi,%eax,1)
-add    $0x4,%eax
-cmp    $0x20,%eax
-jb     <T> <mysql_real_connect+0x119a>
-mov    0x1c(%ebp),%eax
-lea    -0x1aa(%ebp),%ecx
-mov    %edx,-0x37c(%ebp)
-mov    %ecx,(%esp)
-mov    %ecx,-0x380(%ebp)
-mov    %eax,0xc(%esp)
-lea    -0xed370(%ebx),%eax
-movl   $0x1,-0x34(%ebp)
-movl   $0x6,-0x30(%ebp)
-movl   $0x0,-0x38(%ebp)
-mov    %eax,0x8(%esp)
-movl   $0x20,0x4(%esp)
-call   <T> <my_snprintf>
-mov    -0x380(%ebp),%ecx
-lea    -0x1c(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    %edi,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    0xc(%ebp),%ecx
-mov    %ecx,(%esp)
-call   <T> <getaddrinfo>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x13b9>
-mov    -0x1c(%ebp),%edi
-mov    %edx,-0x37c(%ebp)
-mov    0xc(%edi),%eax
-mov    %eax,0x8(%esp)
-mov    0x8(%edi),%eax
-mov    %eax,0x4(%esp)
-mov    0x4(%edi),%eax
-mov    %eax,(%esp)
-call   <T> <socket>
-mov    -0x37c(%ebp),%edx
-cmp    $0xffffffff,%eax
-je     <T> <mysql_real_connect+0x14da>
-mov    %edx,-0x37c(%ebp)
-movl   $0x2,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-mov    %eax,-0x380(%ebp)
-call   <T> <vio_new>
-mov    -0x37c(%ebp),%edx
-mov    -0x380(%ebp),%ecx
-test   %eax,%eax
-mov    %eax,(%edx)
-je     <T> <mysql_real_connect+0x158d>
-mov    0x2f8(%edx),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %eax,0xc(%esp)
-mov    0x10(%edi),%eax
-mov    %eax,0x8(%esp)
-mov    0x14(%edi),%eax
-mov    %ecx,(%esp)
-mov    %eax,0x4(%esp)
-call   <T> <my_connect>
-mov    -0x37c(%ebp),%edx
-test   %eax,%eax
-jne    <T> <mysql_real_connect+0x1405>
-mov    -0x1c(%ebp),%eax
-mov    %edx,-0x37c(%ebp)
-mov    %eax,(%esp)
-call   <T> <freeaddrinfo>
-mov    -0x37c(%ebp),%edx
-mov    (%edx),%eax
-test   %eax,%eax
-je     <T> <mysql_real_connect+0xe5d>
-mov    %esi,-0x378(%ebp)
-movl   $0x0,0x20(%ebp)
-jmp    <T> <mysql_real_connect+0x12d>
-lea    0x0(%esi,%eiz,1),%esi
-cmpl   $0x7dd,0x58(%edx)
-jne    <T> <mysql_real_connect+0xa08>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xefd20(%ebx),%eax
-jmp    <T> <mysql_real_connect+0xea7>
-movw   $0x0,(%ecx)
-sub    $0x2,%esi
-add    $0x2,%ecx
-jmp    <T> <mysql_real_connect+0x511>
-cmpl   $0x7dd,0x58(%edx)
-jne    <T> <mysql_real_connect+0xa08>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xf0016(%ebx),%eax
-jmp    <T> <mysql_real_connect+0xea7>
-cmpl   $0x7dd,0x58(%edx)
-jne    <T> <mysql_real_connect+0xa08>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xf0050(%ebx),%eax
-jmp    <T> <mysql_real_connect+0xea7>
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7ea,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-mov    -0x470(%ebx),%eax
-mov    (%eax),%eax
-mov    %eax,0x20(%ebp)
-jmp    <T> <mysql_real_connect+0x635>
-mov    %eax,%edi
-movl   $0x6c,-0x370(%ebp)
-jmp    <T> <mysql_real_connect+0x677>
-call   <T> <__errno_location>
-mov    -0x36c(%ebp),%ecx
-mov    -0x37c(%ebp),%edx
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x14(%ecx),%eax
-mov    %eax,0xc(%esp)
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7d5,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_extended_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-call   <T> <__errno_location>
-mov    -0x36c(%ebp),%ecx
-mov    -0x37c(%ebp),%edx
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0xc(%ecx),%eax
-mov    %eax,0xc(%esp)
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7d3,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_extended_error>
-mov    -0x37c(%ebp),%edx
-mov    (%edx),%eax
-mov    %eax,(%esp)
-call   *0x144(%eax)
-mov    -0x37c(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-movl   $0x0,(%edx)
-mov    %eax,(%esp)
-call   <T> <freeaddrinfo>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-mov    %edx,-0x37c(%ebp)
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-lea    -0xf0033(%ebx),%eax
-jmp    <T> <mysql_real_connect+0xea7>
-call   <T> <__errno_location>
-mov    -0x37c(%ebp),%edx
-mov    (%eax),%eax
-mov    %eax,0x10(%esp)
-mov    -0x410(%ebx),%eax
-mov    0x4(%eax),%eax
-mov    %eax,0xc(%esp)
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7d1,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_extended_error>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-call   <T> <__errno_location>
-mov    -0x36c(%ebp),%ecx
-mov    -0x37c(%ebp),%edx
-mov    (%eax),%eax
-mov    %eax,0x10(%esp)
-mov    0x10(%ecx),%eax
-mov    %eax,0xc(%esp)
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7d4,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_extended_error>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <freeaddrinfo>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-call   <T> <__errno_location>
-mov    -0x36c(%ebp),%ecx
-mov    -0x37c(%ebp),%edx
-mov    (%eax),%eax
-mov    %eax,0x14(%esp)
-mov    0x20(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x8(%ecx),%eax
-mov    %eax,0xc(%esp)
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7d2,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_extended_error>
-mov    -0x37c(%ebp),%edx
-mov    (%edx),%eax
-mov    %eax,(%esp)
-call   *0x144(%eax)
-mov    -0x37c(%ebp),%edx
-movl   $0x0,(%edx)
-jmp    <T> <mysql_real_connect+0xa08>
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7ff,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    -0x380(%ebp),%ecx
-mov    %ecx,(%esp)
-call   <T> <close>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <freeaddrinfo>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
-mov    -0x474(%ebx),%eax
-mov    (%eax),%eax
-mov    %edx,(%esp)
-movl   $0x7ff,0x4(%esp)
-mov    %eax,0x8(%esp)
-call   <T> <set_mysql_error>
-mov    %esi,(%esp)
-call   <T> <close>
-mov    -0x37c(%ebp),%edx
-jmp    <T> <mysql_real_connect+0xa08>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x0809807b) */
/* WARNING: Removing unreachable block (ram,0x0809729d) */

int * mysql_real_connect(int *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                        int param_6,char *param_7,uint param_8)

{
  int iVar1;
  undefined1 uVar2;
  addrinfo *paVar3;
  char cVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  size_t sVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  bool bVar21;
  byte bVar22;
  int *local_380;
  uint *local_37c;
  uint local_374;
  uint local_352;
  undefined4 local_34e;
  undefined1 local_34a;
  undefined1 local_349;
  undefined4 local_348;
  undefined2 auStack_344 [9];
  undefined1 local_332 [388];
  char local_1ae [256];
  undefined2 local_ae;
  undefined4 local_ac [27];
  addrinfo local_40;
  addrinfo *local_20 [4];
  
  bVar22 = 0;
  if (*param_1 != 0) {
    set_mysql_error(param_1,0x80a,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
    return (int *)0x0;
  }
  param_1[0xec] = (int)client_methods;
  puVar5 = (undefined *)param_1[0xca];
  *param_1 = 0;
  param_1[0xb7] = 0;
  if (puVar5 == (undefined *)0x0) {
    iVar15 = param_1[0xcb];
    puVar5 = &DAT_08137604;
    if (iVar15 != 0) goto LAB_08096db4;
  }
  else {
    iVar15 = param_1[0xcb];
LAB_08096db4:
    mysql_read_default_options(param_1 + 0xbe,puVar5,iVar15);
    my_no_flags_free(param_1[0xca]);
    my_no_flags_free(param_1[0xcb]);
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = (char *)param_1[0xc4];
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    param_3 = "";
    if ((char *)param_1[0xc5] != (char *)0x0) {
      param_3 = (char *)param_1[0xc5];
    }
  }
  if (((param_4 == (char *)0x0) && (param_4 = (char *)param_1[0xc6], param_4 == (char *)0x0)) &&
     (param_4 = getenv("MYSQL_PWD"), param_4 == (char *)0x0)) {
    param_4 = "";
  }
  if ((param_5 == (char *)0x0) || (*param_5 == '\0')) {
    param_5 = (char *)param_1[200];
  }
  if (param_6 == 0) {
    param_6 = param_1[0xc1];
    if (param_7 != (char *)0x0) goto LAB_08096e79;
LAB_080972c4:
    iVar15 = *param_1;
    param_7 = (char *)param_1[199];
    param_1[0xbb] = 2;
    puVar5 = PTR_client_errors_08227260;
  }
  else {
    if (param_7 == (char *)0x0) goto LAB_080972c4;
LAB_08096e79:
    iVar15 = *param_1;
    param_1[0xbb] = 2;
    puVar5 = PTR_client_errors_08227260;
  }
  PTR_client_errors_08227260 = puVar5;
  if (iVar15 == 0) {
    uVar6 = param_1[0xc2];
    if (((uVar6 == 2) || (uVar6 == 0)) &&
       ((param_7 != (char *)0x0 || (*(int *)PTR_mysql_unix_port_08227200 != 0)))) {
      bVar21 = param_2 == (char *)0x0;
      if (!bVar21) {
        iVar15 = 10;
        pcVar16 = param_2;
        pcVar13 = "localhost";
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar21 = *pcVar16 == *pcVar13;
          pcVar16 = pcVar16 + (uint)bVar22 * -2 + 1;
          pcVar13 = pcVar13 + (uint)bVar22 * -2 + 1;
        } while (bVar21);
        if (!bVar21) goto LAB_08097bb0;
      }
      iVar15 = socket(1,1,0);
      if (iVar15 == -1) {
        piVar17 = __errno_location();
        set_mysql_extended_error
                  (param_1,0x7d1,*(undefined4 *)PTR_unknown_sqlstate_082271fc,
                   *(undefined4 *)(PTR_client_errors_08227260 + 4),*piVar17);
        goto LAB_08097768;
      }
      iVar9 = vio_new(iVar15,2,3);
      *param_1 = iVar9;
      puVar5 = PTR_client_errors_08227260;
      if (iVar9 == 0) {
        set_mysql_error(param_1,0x7ff,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
        close(iVar15);
        goto LAB_08097768;
      }
      if (param_7 == (char *)0x0) {
        param_7 = *(char **)PTR_mysql_unix_port_08227200;
      }
      local_374 = 0x6e;
      local_37c = *(uint **)(PTR_client_errors_08227260 + 0x28);
      bVar21 = ((uint)&local_ae & 2) != 0;
      puVar19 = (undefined4 *)&local_ae;
      if (bVar21) {
        local_374 = 0x6c;
        puVar19 = local_ac;
      }
      for (local_374 = local_374 >> 2; local_374 != 0; local_374 = local_374 - 1) {
        *puVar19 = 0;
        puVar19 = puVar19 + (uint)bVar22 * -2 + 1;
      }
      if (!bVar21) {
        *(undefined2 *)puVar19 = 0;
      }
      local_ae = 1;
      strmake(local_ac,param_7,0x6b);
      iVar15 = my_connect(iVar15,&local_ae,0x6e,param_1[0xbe]);
      if (iVar15 != 0) {
        piVar17 = __errno_location();
        set_mysql_extended_error
                  (param_1,0x7d2,*(undefined4 *)PTR_unknown_sqlstate_082271fc,
                   *(undefined4 *)(puVar5 + 8),param_7,*piVar17);
        (**(code **)(*param_1 + 0x144))(*param_1);
        *param_1 = 0;
        goto LAB_08097768;
      }
      iVar15 = *param_1;
      param_1[0xc2] = 2;
      if (iVar15 != 0) {
        param_2 = "localhost";
        goto LAB_08096e8d;
      }
    }
    else {
LAB_08097bb0:
      if (uVar6 < 2) {
        if (param_6 == 0) {
          param_6 = *(int *)PTR_mysql_port_082275fc;
        }
        local_37c = &local_352;
        pcVar16 = "localhost";
        if (param_2 != (char *)0x0) {
          pcVar16 = param_2;
        }
        my_snprintf(local_37c,0x1a3,*(undefined4 *)(puVar5 + 0x2c),pcVar16);
        uVar6 = 0;
        do {
          *(undefined4 *)((int)&local_40.ai_flags + uVar6) = 0;
          uVar6 = uVar6 + 4;
        } while (uVar6 < 0x20);
        local_40.ai_socktype = 1;
        local_40.ai_protocol = 6;
        local_40.ai_family = 0;
        my_snprintf(local_1ae,0x20,"%d",param_6);
        iVar15 = getaddrinfo(pcVar16,local_1ae,&local_40,local_20);
        paVar3 = local_20[0];
        if (iVar15 != 0) {
          piVar17 = __errno_location();
          set_mysql_extended_error
                    (param_1,0x7d5,*(undefined4 *)PTR_unknown_sqlstate_082271fc,
                     *(undefined4 *)(puVar5 + 0x14),pcVar16,*piVar17);
          goto LAB_08097768;
        }
        iVar15 = socket(local_20[0]->ai_family,local_20[0]->ai_socktype,local_20[0]->ai_protocol);
        if (iVar15 == -1) {
          piVar17 = __errno_location();
          set_mysql_extended_error
                    (param_1,0x7d4,*(undefined4 *)PTR_unknown_sqlstate_082271fc,
                     *(undefined4 *)(puVar5 + 0x10),*piVar17);
          freeaddrinfo(local_20[0]);
          goto LAB_08097768;
        }
        iVar9 = vio_new(iVar15,1,2);
        *param_1 = iVar9;
        if (iVar9 == 0) {
          set_mysql_error(param_1,0x7ff,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
          close(iVar15);
          freeaddrinfo(local_20[0]);
          goto LAB_08097768;
        }
        iVar15 = my_connect(iVar15,paVar3->ai_addr,paVar3->ai_addrlen,param_1[0xbe]);
        if (iVar15 != 0) {
          piVar17 = __errno_location();
          set_mysql_extended_error
                    (param_1,0x7d3,*(undefined4 *)PTR_unknown_sqlstate_082271fc,
                     *(undefined4 *)(puVar5 + 0xc),pcVar16,*piVar17);
          (**(code **)(*param_1 + 0x144))(*param_1);
          *param_1 = 0;
          freeaddrinfo(local_20[0]);
          goto LAB_08097768;
        }
        freeaddrinfo(local_20[0]);
        iVar15 = *param_1;
        if (iVar15 != 0) {
          param_7 = (char *)0x0;
          param_2 = pcVar16;
          goto LAB_08096e8d;
        }
      }
    }
    set_mysql_error(param_1,0x7ff,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
    goto LAB_08097768;
  }
LAB_08096e8d:
  cVar4 = my_net_init(param_1,iVar15);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x144))(*param_1);
    uVar12 = *(undefined4 *)PTR_unknown_sqlstate_082271fc;
    *param_1 = 0;
    set_mysql_error(param_1,0x7d8,uVar12);
    goto LAB_08097768;
  }
  (**(code **)(*param_1 + 0x15c))(*param_1,1);
  if (param_1[0xbf] == 0) {
    iVar15 = param_1[0xc0];
    if (iVar15 != 0) goto LAB_08097528;
LAB_08096ee8:
    iVar15 = param_1[0xd4];
  }
  else {
    my_net_set_read_timeout(param_1,param_1[0xbf]);
    iVar15 = param_1[0xc0];
    if (iVar15 == 0) goto LAB_08096ee8;
LAB_08097528:
    my_net_set_write_timeout(param_1,iVar15);
    iVar15 = param_1[0xd4];
  }
  if (iVar15 != 0) {
    param_1[0xb] = iVar15;
  }
  param_1[0xb9] = 10;
  if (param_1[0xbe] == 0) {
LAB_08096f0d:
    local_380 = param_1;
    uVar6 = cli_safe_read(param_1);
    if (uVar6 != 0xffffffff) {
      uVar7 = (uint)*(byte *)param_1[4];
      param_1[0xb9] = uVar7;
      if (uVar7 != 10) {
        set_mysql_extended_error
                  (param_1,0x7d7,*(undefined4 *)PTR_unknown_sqlstate_082271fc,
                   *(undefined4 *)(PTR_client_errors_08227260 + 0x1c),uVar7,10);
        goto LAB_08097768;
      }
      iVar8 = strend((byte *)param_1[4] + 1);
      iVar15 = (int)param_1 + 0x386;
      param_1[0xb4] = *(int *)(iVar8 + 1);
      strmake(iVar15,iVar8 + 5,8);
      iVar9 = param_1[4];
      if ((uint)((iVar8 + 0xf) - iVar9) <= uVar6) {
        param_1[0xb8] = (uint)*(ushort *)(iVar8 + 0xe);
      }
      iVar1 = iVar8 + 0x20;
      if ((uint)(iVar1 - iVar9) <= uVar6) {
        param_1[0xbc] = (int)*(char *)(iVar8 + 0x10);
        param_1[0xbb] = (uint)*(ushort *)(iVar8 + 0x11);
      }
      if (uVar6 < (uint)((iVar8 + 0x2d) - iVar9)) {
        param_1[0xb8] = param_1[0xb8] & 0xffff7fff;
      }
      else {
        strmake((int)param_1 + 0x38e,iVar1,0xc);
      }
      if ((((char)param_1[0xd9] != '\0') && (*param_4 != '\0')) && (-1 < (short)param_1[0xb8])) {
        set_mysql_error(param_1,0x801,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
        goto LAB_08097768;
      }
      iVar9 = mysql_init_character_set(param_1);
      if (iVar9 != 0) goto LAB_08097768;
      iVar8 = param_1[4];
      iVar9 = 1;
      if (param_7 != (char *)0x0) {
        sVar10 = strlen(param_7);
        iVar9 = sVar10 + 1;
      }
      sVar10 = strlen(param_2);
      sVar11 = strlen((char *)local_37c);
      iVar9 = my_multi_malloc(0,param_1 + 0xa1,sVar11 + 1,param_1 + 0x9c,sVar10 + 1,param_1 + 0x9f,
                              iVar9,param_1 + 0xa0,iVar1 - iVar8,0);
      if (iVar9 != 0) {
        iVar9 = my_strdup(param_3,0);
        param_1[0x9d] = iVar9;
        if (iVar9 != 0) {
          iVar9 = my_strdup(param_4,0);
          param_1[0x9e] = iVar9;
          if (iVar9 != 0) {
            strcpy((char *)param_1[0xa1],(char *)local_37c);
            strcpy((char *)param_1[0x9c],param_2);
            if (param_7 == (char *)0x0) {
              param_1[0x9f] = 0;
            }
            else {
              strcpy((char *)param_1[0x9f],param_7);
            }
            strcpy((char *)param_1[0xa0],(char *)(param_1[4] + 1));
            param_1[0xb6] = param_6;
            uVar6 = param_8 | param_1[0xc3] | 0x6a205;
            if (((param_1[0xce] == 0) && (param_1[0xcf] == 0)) &&
               ((param_1[0xd0] == 0 && ((param_1[0xd1] == 0 && (param_1[0xd2] == 0)))))) {
              if ((char)param_1[0xd5] != '\0') goto LAB_080971f1;
            }
            else {
              *(undefined1 *)(param_1 + 0xd5) = 1;
LAB_080971f1:
              uVar6 = param_8 | param_1[0xc3] | 0x6aa05;
            }
            if (param_5 != (char *)0x0) {
              uVar6 = uVar6 | 8;
            }
            param_8 = uVar6 & (param_1[0xb8] | 0xfffff5dfU);
            if ((param_8 & 0x200) == 0) {
              puVar20 = (undefined1 *)((int)&local_34e + 1);
              local_352 = CONCAT13((char)((uint)param_1[0xb] >> 8),
                                   (int3)CONCAT22((short)param_1[0xb],(undefined2)param_8));
              local_34e = CONCAT31(local_34e._1_3_,(char)*(undefined2 *)((int)param_1 + 0x2e));
            }
            else {
              local_34e = param_1[0xb];
              if ((*(int *)param_1[0xa4] == 0x2d) && (*(char *)param_1[0xa0] < '6')) {
                local_34a = 0x21;
              }
              else {
                local_34a = (undefined1)*(int *)param_1[0xa4];
              }
              local_349 = 0;
              uVar6 = 0;
              do {
                uVar7 = uVar6;
                *(undefined4 *)((int)&local_348 + uVar7) = 0;
                uVar6 = uVar7 + 4;
              } while (uVar7 + 4 < 0x14);
              *(undefined2 *)((int)auStack_344 + uVar7) = 0;
              puVar20 = local_332;
              local_352 = param_8;
            }
            param_1[0xb7] = param_8;
            if ((param_8 & 0x800) == 0) goto LAB_080978a8;
            cVar4 = my_net_write(param_1,&local_352,(int)puVar20 - (int)&local_352);
            if ((cVar4 != '\0') || (cVar4 = net_flush(param_1), cVar4 != '\0')) {
              piVar17 = __errno_location();
              iVar15 = *piVar17;
              pcVar16 = "sending connection information to server";
              goto LAB_08097c07;
            }
            iVar9 = new_VioSSLConnectorFd
                              (param_1[0xce],param_1[0xcf],param_1[0xd0],param_1[0xd1],param_1[0xd2]
                              );
            if (iVar9 != 0) {
              param_1[0x9b] = iVar9;
              iVar9 = sslconnect(iVar9,*param_1,param_1[0xbe]);
              if (iVar9 == 0) {
                if ((param_8 & 0x40000000) != 0) {
                  pcVar16 = (char *)param_1[0x9c];
                  if (((*(int *)(*param_1 + 0x17c) != 0) && (pcVar16 != (char *)0x0)) &&
                     (iVar9 = yaSSL_get_peer_certificate(*(int *)(*param_1 + 0x17c)), iVar9 != 0)) {
                    uVar12 = yaX509_get_subject_name(iVar9);
                    yaX509_NAME_oneline(uVar12,local_1ae,0x100);
                    yaX509_free(iVar9);
                    pcVar13 = strstr(local_1ae,"/CN=");
                    if (pcVar13 != (char *)0x0) {
                      pcVar14 = strchr(pcVar13 + 4,0x2f);
                      if (pcVar14 != (char *)0x0) {
                        *pcVar14 = '\0';
                      }
                      iVar9 = strcmp(pcVar13 + 4,pcVar16);
                      if (iVar9 == 0) goto LAB_080978a8;
                    }
                  }
                  set_mysql_error(param_1,0x7ea,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
                  goto LAB_08097768;
                }
LAB_080978a8:
                if (*param_3 == '\0') {
                  read_user_name(puVar20);
                }
                else {
                  strmake(puVar20,param_3,0x40);
                }
                iVar9 = strend(puVar20);
                if (*param_4 == '\0') {
                  *(undefined1 *)(iVar9 + 1) = 0;
                  iVar8 = iVar9 + 2;
                }
                else if ((short)param_1[0xb8] < 0) {
                  *(undefined1 *)(iVar9 + 1) = 0x14;
                  iVar8 = iVar9 + 0x16;
                  scramble(iVar9 + 2,iVar15,param_4);
                }
                else {
                  iVar8 = iVar9 + 10;
                  scramble_323(iVar9 + 1,iVar15,param_4);
                }
                if ((param_5 != (char *)0x0) && ((*(byte *)(param_1 + 0xb8) & 8) != 0)) {
                  iVar8 = strmake(iVar8,param_5,0x100);
                  iVar8 = iVar8 + 1;
                  iVar9 = my_strdup(param_5,0x10);
                  param_1[0xa3] = iVar9;
                  param_5 = (char *)0x0;
                }
                cVar4 = my_net_write(param_1,&local_352,iVar8 - (int)&local_352);
                if ((cVar4 == '\0') && (cVar4 = net_flush(param_1), cVar4 == '\0')) {
                  iVar9 = cli_safe_read(param_1);
                  if (iVar9 == -1) {
                    if (param_1[0x16] != 0x7dd) goto LAB_08097768;
                    piVar17 = __errno_location();
                    iVar15 = *piVar17;
                    pcVar16 = "reading authorization packet";
                  }
                  else if (((iVar9 == 1) && (*(char *)param_1[4] == -2)) &&
                          ((short)param_1[0xb8] < 0)) {
                    scramble_323(&local_352,iVar15,param_4);
                    cVar4 = my_net_write(param_1,&local_352,9);
                    if ((cVar4 == '\0') && (cVar4 = net_flush(param_1), cVar4 == '\0')) {
                      iVar15 = cli_safe_read(param_1);
                      if (iVar15 != -1) goto LAB_0809796a;
                      if (param_1[0x16] != 0x7dd) goto LAB_08097768;
                      piVar17 = __errno_location();
                      iVar15 = *piVar17;
                      pcVar16 = "reading final connect information";
                    }
                    else {
                      piVar17 = __errno_location();
                      iVar15 = *piVar17;
                      pcVar16 = "sending password information";
                    }
                  }
                  else {
LAB_0809796a:
                    if ((param_8 & 0x20) != 0) {
                      *(undefined1 *)(param_1 + 0x14) = 1;
                    }
                    if ((param_5 == (char *)0x0) ||
                       (iVar15 = mysql_select_db(param_1,param_5), iVar15 == 0)) {
                      piVar17 = (int *)param_1[0xc9];
                      if (piVar17 == (int *)0x0) {
                        return param_1;
                      }
                      puVar18 = (undefined4 *)*piVar17;
                      puVar19 = puVar18 + piVar17[1];
                      uVar2 = *(undefined1 *)((int)param_1 + 0x385);
                      *(undefined1 *)((int)param_1 + 0x385) = 0;
                      do {
                        if (puVar19 <= puVar18) {
                          *(undefined1 *)((int)param_1 + 0x385) = uVar2;
                          return param_1;
                        }
                        pcVar16 = (char *)*puVar18;
                        sVar10 = strlen(pcVar16);
                        iVar15 = mysql_real_query(param_1,pcVar16,sVar10);
                        if (iVar15 != 0) goto LAB_08097768;
                        if (param_1[0xa5] != 0) {
                          iVar15 = cli_use_result(param_1);
                          if (iVar15 == 0) goto LAB_08097768;
                          mysql_free_result(iVar15);
                        }
                        puVar18 = puVar18 + 1;
                      } while( true );
                    }
                    if (param_1[0x16] != 0x7dd) goto LAB_08097768;
                    piVar17 = __errno_location();
                    iVar15 = *piVar17;
                    pcVar16 = "Setting intital database";
                  }
                }
                else {
                  piVar17 = __errno_location();
                  iVar15 = *piVar17;
                  pcVar16 = "sending authentication information";
                }
                goto LAB_08097c07;
              }
            }
            set_mysql_error(param_1,0x7ea,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
            goto LAB_08097768;
          }
        }
      }
      set_mysql_error(param_1,0x7d8,*(undefined4 *)PTR_unknown_sqlstate_082271fc);
      goto LAB_08097768;
    }
    if (param_1[0x16] != 0x7dd) goto LAB_08097768;
    piVar17 = __errno_location();
    iVar15 = *piVar17;
    pcVar16 = "reading initial communication packet";
  }
  else {
    local_380 = param_1;
    cVar4 = vio_poll_read(*param_1,param_1[0xbe]);
    if (cVar4 == '\0') goto LAB_08096f0d;
    piVar17 = __errno_location();
    iVar15 = *piVar17;
    pcVar16 = "waiting for initial communication packet";
  }
LAB_08097c07:
  set_mysql_extended_error
            (local_380,0x7dd,*(undefined4 *)PTR_unknown_sqlstate_082271fc,
             *(undefined4 *)(PTR_client_errors_08227260 + 0xdc),pcVar16,iVar15);
  param_1 = local_380;
LAB_08097768:
  end_server(param_1);
  my_no_flags_free(param_1[0xa1]);
  my_no_flags_free(param_1[0x9d]);
  my_no_flags_free(param_1[0x9e]);
  my_no_flags_free(param_1[0xa3]);
  my_no_flags_free(param_1[0xef]);
  param_1[0xef] = 0;
  param_1[0xa3] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa1] = 0;
  if (-1 < (int)param_8) {
    mysql_close_free_options();
  }
  return (int *)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/MysqlClient.cpp](source/ChannelOld/DNFChannelBridge/MysqlClient.cpp)（约第 31 行）：

```cpp
MYSQL* mysql_real_connect(MYSQL* mysql, const char* host, const char* user, const char* passwd,
                          const char* db, unsigned int port, const char* unix_socket, unsigned long clientflag)
{
    return NULL;
}
```
