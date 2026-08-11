# _ZN10CAppConfig11Parse_TableEPci

`CAppConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806860c` | `0x142a` | `0x806a60c` | `0x1438` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,1314 +1,1321 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %ebx
-sub    $0xb0,%esp
+sub    $0xa0,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1f>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
 movl   $0x2,0xc(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" =\t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x2,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x55>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
 cmpl   $0xfe,0x10(%ebp)
 jle    <T> <_ZN10CAppConfig11Parse_TableEPci+0x68>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    -0x18(%ebp),%eax
 mov    %eax,-0x10(%ebp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 movl   $"tick_value",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xa3>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4c(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"udp_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd2>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd0>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    0x8(%ebp),%edx
+mov    %eax,0x50(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"master_db_ip",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x110>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0x60,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"master_db_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x13f>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x50(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"master_db_ip",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x112>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0x60,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"master_db_port",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141>
+mov    %edx,0x74(%eax)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"master_db_acc",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x17f>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0x78,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"master_db_pwd",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1b9>
+mov    0x8(%ebp),%eax
+add    $0x8d,%eax
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CAppConfig12DecryptValueEPKcPc>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"master_db_name",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1fc>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0xa2,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"neople_db_ip",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x23f>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0x1c8,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"neople_db_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x271>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x74(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"master_db_acc",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x181>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0x78,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"master_db_pwd",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1bb>
-mov    0x8(%ebp),%eax
-add    $0x8d,%eax
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CAppConfig12DecryptValueEPKcPc>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"master_db_name",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1fe>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0xa2,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"neople_db_ip",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x241>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0x1c8,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"neople_db_port",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x273>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
 mov    %edx,0x1dc(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"neople_db_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x2b6>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x2b4>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x1e0,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"neople_db_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x37e>
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
 je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x325>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x1f5,%edx
 mov    %eax,0x8(%esp)
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"neople_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x3c1>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x20a,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_ip",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x404>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x330,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x436>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x344(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x479>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x348,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x53e>
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x540>
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x9c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x4eb>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x4ed>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x35d,%edx
 mov    %eax,0x8(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x581>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x583>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x372,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"log_db_ip",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5c4>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5c6>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x600,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"log_db_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5f6>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5f8>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x614(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"log_db_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x639>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x63b>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x618,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"log_db_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x701>
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x705>
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x6a8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x6ac>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x62d,%edx
 mov    %eax,0x8(%esp)
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"log_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x744>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x748>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x642,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"sso_db_ip",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x787>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x78b>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x8d0,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"sso_db_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x7b9>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x7bd>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8e4(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"sso_db_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x7fc>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x800>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x8e8,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"sso_db_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x8c1>
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x8c7>
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x9c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x86e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x874>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x8fd,%edx
 mov    %eax,0x8(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"sso_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x904>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x90a>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x912,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_2nd_ip",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x947>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x94d>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x498,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_2nd_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x979>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x97f>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4ac(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_2nd_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9bc>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9c2>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x4b0,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_2nd_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xa84>
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xa8c>
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xa2b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xa33>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x4c5,%edx
 mov    %eax,0x8(%esp)
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"game_db_2nd_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xac7>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xacf>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x4da,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"guild_db_ip",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb0a>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb12>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0xba0,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"guild_db_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb3c>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb44>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xbb4(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"guild_db_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb7f>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb87>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0xbb8,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"guild_db_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xc44>
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xc4e>
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x9c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xbf1>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xbfb>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0xbcd,%edx
 mov    %eax,0x8(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"guild_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xc87>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xc91>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0xbe2,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"web_db_ip",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xcca>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xcd4>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x768,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"web_db_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xcfc>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd06>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x77c(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"web_db_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd3f>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd49>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x780,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"web_db_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe07>
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe13>
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xdae>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xdba>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x795,%edx
 mov    %eax,0x8(%esp)
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"web_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe4a>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe56>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x7aa,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"stat_db_ip",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe8d>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe99>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x1578,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"stat_db_port",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xebf>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xecb>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x158c(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"stat_db_acc",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xf02>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xf0e>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x1590,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"stat_db_pwd",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xfc7>
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xfd5>
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x9c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xf74>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xf82>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x15a5,%edx
 mov    %eax,0x8(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"stat_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x100a>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1018>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x15ba,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"dbmw_type",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1039>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1047>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x58(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"server_group",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1068>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1074>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    0x8(%ebp),%edx
+mov    %eax,0x5c(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"tcp_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x10a1>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    0x8(%ebp),%edx
+mov    %eax,0x54(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"event_db_ip",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x10e4>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0xd08,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"event_db_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1116>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x5c(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"tcp_port",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1097>
+mov    %edx,0xd1c(%eax)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"event_db_acc",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1159>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0xd20,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"event_db_pwd",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1223>
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x58(%ebp),%eax
+movl   $0x18,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x11ca>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
+movl   $0x18,0xc(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN4CTEA7DecryptEPKcPcj>
+lea    -0x98(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0xd35,%edx
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"event_db_name",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1266>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0xd4a,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"se_event_db_ip",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12a9>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0x12a8,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"se_event_db_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12db>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x54(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"event_db_ip",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x10da>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0xd08,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"event_db_port",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x110c>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xd1c(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"event_db_acc",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x114f>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0xd20,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"event_db_pwd",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1217>
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+mov    %edx,0x12bc(%eax)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"se_event_db_acc",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x131e>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0x12c0,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+movl   $"se_event_db_pwd",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x13e2>
+lea    -0x58(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%ebx
+mov    $0x0,%eax
+mov    $0x10,%edx
+mov    %ebx,%edi
+mov    %edx,%ecx
+rep stos %eax,%es:(%edi)
+lea    -0x98(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x11be>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x1392>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x18,0xc(%esp)
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x9c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0xd35,%edx
-mov    %eax,0x8(%esp)
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"event_db_name",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x125a>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0xd4a,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"se_event_db_ip",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x129d>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0x12a8,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"se_event_db_port",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12cf>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x12bc(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"se_event_db_acc",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1312>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    0x8(%ebp),%edx
-add    $0x12c0,%edx
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"se_event_db_pwd",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x13d4>
-lea    -0x5c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x9c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x10,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-movl   $0x18,0x8(%esp)
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x1384>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
-movl   $0x18,0xc(%esp)
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN4CTEA7DecryptEPKcPcj>
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x12d5,%edx
 mov    %eax,0x8(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
 movl   $"se_event_db_name",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1414>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1422>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x12ea,%edx
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1429>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x142e>
 mov    $0x1,%eax
-add    $0xb0,%esp
+add    $0xa0,%esp
 pop    %ebx
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::Parse_Table(char*, int) */

undefined4 __thiscall
CAppConfig::_ZN10CAppConfig11Parse_TableEPci(CAppConfig *this,char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  uchar *puVar5;
  byte bVar6;
  uchar local_a0 [64];
  uchar local_60 [64];
  char *local_20;
  char *local_1c;
  char *local_14;
  char *local_10;
  
  bVar6 = 0;
  if (*param_1 == '#') {
    uVar2 = 0;
  }
  else {
    iVar3 = DNFFLib::ExplodeString(param_1," =\t\r\n\"",&local_20,2);
    if (iVar3 == 2) {
      if (param_2 < 0xff) {
        local_14 = local_20;
        local_10 = local_1c;
        iVar3 = strcmp(local_20,"tick_value");
        if (iVar3 == 0) {
          iVar3 = atoi(local_10);
          this[0x4c] = SUB41(iVar3,0);
        }
        else {
          iVar3 = strcmp(local_14,"udp_port");
          if (iVar3 == 0) {
            iVar3 = atoi(local_10);
            *(int *)(this + 0x50) = iVar3;
          }
          else {
            iVar3 = strcmp(local_14,"master_db_ip");
            if (iVar3 == 0) {
              sVar4 = strlen(local_10);
              memcpy(this + 0x60,local_10,sVar4);
            }
            else {
              iVar3 = strcmp(local_14,"master_db_port");
              if (iVar3 == 0) {
                iVar3 = atoi(local_10);
                *(int *)(this + 0x74) = iVar3;
              }
              else {
                iVar3 = strcmp(local_14,"master_db_acc");
                if (iVar3 == 0) {
                  sVar4 = strlen(local_10);
                  memcpy(this + 0x78,local_10,sVar4);
                }
                else {
                  iVar3 = strcmp(local_14,"master_db_pwd");
                  if (iVar3 == 0) {
                    DecryptValue(this,local_10,(char *)(this + 0x8d));
                  }
                  else {
                    iVar3 = strcmp(local_14,"master_db_name");
                    if (iVar3 == 0) {
                      sVar4 = strlen(local_10);
                      memcpy(this + 0xa2,local_10,sVar4);
                    }
                    else {
                      iVar3 = strcmp(local_14,"neople_db_ip");
                      if (iVar3 == 0) {
                        sVar4 = strlen(local_10);
                        memcpy(this + 0x1c8,local_10,sVar4);
                      }
                      else {
                        iVar3 = strcmp(local_14,"neople_db_port");
                        if (iVar3 == 0) {
                          iVar3 = atoi(local_10);
                          *(int *)(this + 0x1dc) = iVar3;
                        }
                        else {
                          iVar3 = strcmp(local_14,"neople_db_acc");
                          if (iVar3 == 0) {
                            sVar4 = strlen(local_10);
                            memcpy(this + 0x1e0,local_10,sVar4);
                          }
                          else {
                            iVar3 = strcmp(local_14,"neople_db_pwd");
                            if (iVar3 == 0) {
                              puVar5 = local_a0;
                              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                                puVar5[0] = '\0';
                                puVar5[1] = '\0';
                                puVar5[2] = '\0';
                                puVar5[3] = '\0';
                                puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                              }
                              puVar5 = local_60;
                              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                                puVar5[0] = '\0';
                                puVar5[1] = '\0';
                                puVar5[2] = '\0';
                                puVar5[3] = '\0';
                                puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                              }
                              cVar1 = DNFFLib::Hex2Binary(local_10,local_60,0x18);
                              if (cVar1 != '\x01') {
                                return 0;
                              }
                              CTEA::Decrypt((CTEA *)(this + 4),(char *)local_60,(char *)local_a0,
                                            0x18);
                              sVar4 = strlen((char *)local_a0);
                              memcpy(this + 0x1f5,local_a0,sVar4);
                            }
                            else {
                              iVar3 = strcmp(local_14,"neople_db_name");
                              if (iVar3 == 0) {
                                sVar4 = strlen(local_10);
                                memcpy(this + 0x20a,local_10,sVar4);
                              }
                              else {
                                iVar3 = strcmp(local_14,"game_db_ip");
                                if (iVar3 == 0) {
                                  sVar4 = strlen(local_10);
                                  memcpy(this + 0x330,local_10,sVar4);
                                }
                                else {
                                  iVar3 = strcmp(local_14,"game_db_port");
                                  if (iVar3 == 0) {
                                    iVar3 = atoi(local_10);
                                    *(int *)(this + 0x344) = iVar3;
                                  }
                                  else {
                                    iVar3 = strcmp(local_14,"game_db_acc");
                                    if (iVar3 == 0) {
                                      sVar4 = strlen(local_10);
                                      memcpy(this + 0x348,local_10,sVar4);
                                    }
                                    else {
                                      iVar3 = strcmp(local_14,"game_db_pwd");
                                      if (iVar3 == 0) {
                                        puVar5 = local_60;
                                        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                                          puVar5[0] = '\0';
                                          puVar5[1] = '\0';
                                          puVar5[2] = '\0';
                                          puVar5[3] = '\0';
                                          puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                        }
                                        puVar5 = local_a0;
                                        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                                          puVar5[0] = '\0';
                                          puVar5[1] = '\0';
                                          puVar5[2] = '\0';
                                          puVar5[3] = '\0';
                                          puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                        }
                                        cVar1 = DNFFLib::Hex2Binary(local_10,local_a0,0x18);
                                        if (cVar1 != '\x01') {
                                          return 0;
                                        }
                                        CTEA::Decrypt((CTEA *)(this + 4),(char *)local_a0,
                                                      (char *)local_60,0x18);
                                        sVar4 = strlen((char *)local_60);
                                        memcpy(this + 0x35d,local_60,sVar4);
                                      }
                                      else {
                                        iVar3 = strcmp(local_14,"game_db_name");
                                        if (iVar3 == 0) {
                                          sVar4 = strlen(local_10);
                                          memcpy(this + 0x372,local_10,sVar4);
                                        }
                                        else {
                                          iVar3 = strcmp(local_14,"log_db_ip");
                                          if (iVar3 == 0) {
                                            sVar4 = strlen(local_10);
                                            memcpy(this + 0x600,local_10,sVar4);
                                          }
                                          else {
                                            iVar3 = strcmp(local_14,"log_db_port");
                                            if (iVar3 == 0) {
                                              iVar3 = atoi(local_10);
                                              *(int *)(this + 0x614) = iVar3;
                                            }
                                            else {
                                              iVar3 = strcmp(local_14,"log_db_acc");
                                              if (iVar3 == 0) {
                                                sVar4 = strlen(local_10);
                                                memcpy(this + 0x618,local_10,sVar4);
                                              }
                                              else {
                                                iVar3 = strcmp(local_14,"log_db_pwd");
                                                if (iVar3 == 0) {
                                                  puVar5 = local_a0;
                                                  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1)
                                                  {
                                                    puVar5[0] = '\0';
                                                    puVar5[1] = '\0';
                                                    puVar5[2] = '\0';
                                                    puVar5[3] = '\0';
                                                    puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                                  }
                                                  puVar5 = local_60;
                                                  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1)
                                                  {
                                                    puVar5[0] = '\0';
                                                    puVar5[1] = '\0';
                                                    puVar5[2] = '\0';
                                                    puVar5[3] = '\0';
                                                    puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                                  }
                                                  cVar1 = DNFFLib::Hex2Binary(local_10,local_60,0x18
                                                                             );
                                                  if (cVar1 != '\x01') {
                                                    return 0;
                                                  }
                                                  CTEA::Decrypt((CTEA *)(this + 4),(char *)local_60,
                                                                (char *)local_a0,0x18);
                                                  sVar4 = strlen((char *)local_a0);
                                                  memcpy(this + 0x62d,local_a0,sVar4);
                                                }
                                                else {
                                                  iVar3 = strcmp(local_14,"log_db_name");
                                                  if (iVar3 == 0) {
                                                    sVar4 = strlen(local_10);
                                                    memcpy(this + 0x642,local_10,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"sso_db_ip");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0x8d0,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"sso_db_port");
                                                      if (iVar3 == 0) {
                                                        iVar3 = atoi(local_10);
                                                        *(int *)(this + 0x8e4) = iVar3;
                                                      }
                                                      else {
                                                        iVar3 = strcmp(local_14,"sso_db_acc");
                                                        if (iVar3 == 0) {
                                                          sVar4 = strlen(local_10);
                                                          memcpy(this + 0x8e8,local_10,sVar4);
                                                        }
                                                        else {
                                                          iVar3 = strcmp(local_14,"sso_db_pwd");
                                                          if (iVar3 == 0) {
                                                            puVar5 = local_60;
                                                            for (iVar3 = 0x10; iVar3 != 0;
                                                                iVar3 = iVar3 + -1) {
                                                              puVar5[0] = '\0';
                                                              puVar5[1] = '\0';
                                                              puVar5[2] = '\0';
                                                              puVar5[3] = '\0';
                                                              puVar5 = puVar5 + ((uint)bVar6 * -2 +
                                                                                1) * 4;
                                                            }
                                                            puVar5 = local_a0;
                                                            for (iVar3 = 0x10; iVar3 != 0;
                                                                iVar3 = iVar3 + -1) {
                                                              puVar5[0] = '\0';
                                                              puVar5[1] = '\0';
                                                              puVar5[2] = '\0';
                                                              puVar5[3] = '\0';
                                                              puVar5 = puVar5 + ((uint)bVar6 * -2 +
                                                                                1) * 4;
                                                            }
                                                            cVar1 = DNFFLib::Hex2Binary(local_10,
                                                  local_a0,0x18);
                                                  if (cVar1 != '\x01') {
                                                    return 0;
                                                  }
                                                  CTEA::Decrypt((CTEA *)(this + 4),(char *)local_a0,
                                                                (char *)local_60,0x18);
                                                  sVar4 = strlen((char *)local_60);
                                                  memcpy(this + 0x8fd,local_60,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"sso_db_name");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0x912,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"game_db_2nd_ip");
                                                      if (iVar3 == 0) {
                                                        sVar4 = strlen(local_10);
                                                        memcpy(this + 0x498,local_10,sVar4);
                                                      }
                                                      else {
                                                        iVar3 = strcmp(local_14,"game_db_2nd_port");
                                                        if (iVar3 == 0) {
                                                          iVar3 = atoi(local_10);
                                                          *(int *)(this + 0x4ac) = iVar3;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(local_14,"game_db_2nd_acc")
                                                          ;
                                                          if (iVar3 == 0) {
                                                            sVar4 = strlen(local_10);
                                                            memcpy(this + 0x4b0,local_10,sVar4);
                                                          }
                                                          else {
                                                            iVar3 = strcmp(local_14,
                                                  "game_db_2nd_pwd");
                                                  if (iVar3 == 0) {
                                                    puVar5 = local_a0;
                                                    for (iVar3 = 0x10; iVar3 != 0;
                                                        iVar3 = iVar3 + -1) {
                                                      puVar5[0] = '\0';
                                                      puVar5[1] = '\0';
                                                      puVar5[2] = '\0';
                                                      puVar5[3] = '\0';
                                                      puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                                    }
                                                    puVar5 = local_60;
                                                    for (iVar3 = 0x10; iVar3 != 0;
                                                        iVar3 = iVar3 + -1) {
                                                      puVar5[0] = '\0';
                                                      puVar5[1] = '\0';
                                                      puVar5[2] = '\0';
                                                      puVar5[3] = '\0';
                                                      puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                                    }
                                                    cVar1 = DNFFLib::Hex2Binary(local_10,local_60,
                                                                                0x18);
                                                    if (cVar1 != '\x01') {
                                                      return 0;
                                                    }
                                                    CTEA::Decrypt((CTEA *)(this + 4),
                                                                  (char *)local_60,(char *)local_a0,
                                                                  0x18);
                                                    sVar4 = strlen((char *)local_a0);
                                                    memcpy(this + 0x4c5,local_a0,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"game_db_2nd_name");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0x4da,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"guild_db_ip");
                                                      if (iVar3 == 0) {
                                                        sVar4 = strlen(local_10);
                                                        memcpy(this + 0xba0,local_10,sVar4);
                                                      }
                                                      else {
                                                        iVar3 = strcmp(local_14,"guild_db_port");
                                                        if (iVar3 == 0) {
                                                          iVar3 = atoi(local_10);
                                                          *(int *)(this + 0xbb4) = iVar3;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(local_14,"guild_db_acc");
                                                          if (iVar3 == 0) {
                                                            sVar4 = strlen(local_10);
                                                            memcpy(this + 3000,local_10,sVar4);
                                                          }
                                                          else {
                                                            iVar3 = strcmp(local_14,"guild_db_pwd");
                                                            if (iVar3 == 0) {
                                                              puVar5 = local_60;
                                                              for (iVar3 = 0x10; iVar3 != 0;
                                                                  iVar3 = iVar3 + -1) {
                                                                puVar5[0] = '\0';
                                                                puVar5[1] = '\0';
                                                                puVar5[2] = '\0';
                                                                puVar5[3] = '\0';
                                                                puVar5 = puVar5 + ((uint)bVar6 * -2
                                                                                  + 1) * 4;
                                                              }
                                                              puVar5 = local_a0;
                                                              for (iVar3 = 0x10; iVar3 != 0;
                                                                  iVar3 = iVar3 + -1) {
                                                                puVar5[0] = '\0';
                                                                puVar5[1] = '\0';
                                                                puVar5[2] = '\0';
                                                                puVar5[3] = '\0';
                                                                puVar5 = puVar5 + ((uint)bVar6 * -2
                                                                                  + 1) * 4;
                                                              }
                                                              cVar1 = DNFFLib::Hex2Binary(local_10,
                                                  local_a0,0x18);
                                                  if (cVar1 != '\x01') {
                                                    return 0;
                                                  }
                                                  CTEA::Decrypt((CTEA *)(this + 4),(char *)local_a0,
                                                                (char *)local_60,0x18);
                                                  sVar4 = strlen((char *)local_60);
                                                  memcpy(this + 0xbcd,local_60,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"guild_db_name");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0xbe2,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"web_db_ip");
                                                      if (iVar3 == 0) {
                                                        sVar4 = strlen(local_10);
                                                        memcpy(this + 0x768,local_10,sVar4);
                                                      }
                                                      else {
                                                        iVar3 = strcmp(local_14,"web_db_port");
                                                        if (iVar3 == 0) {
                                                          iVar3 = atoi(local_10);
                                                          *(int *)(this + 0x77c) = iVar3;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(local_14,"web_db_acc");
                                                          if (iVar3 == 0) {
                                                            sVar4 = strlen(local_10);
                                                            memcpy(this + 0x780,local_10,sVar4);
                                                          }
                                                          else {
                                                            iVar3 = strcmp(local_14,"web_db_pwd");
                                                            if (iVar3 == 0) {
                                                              puVar5 = local_a0;
                                                              for (iVar3 = 0x10; iVar3 != 0;
                                                                  iVar3 = iVar3 + -1) {
                                                                puVar5[0] = '\0';
                                                                puVar5[1] = '\0';
                                                                puVar5[2] = '\0';
                                                                puVar5[3] = '\0';
                                                                puVar5 = puVar5 + ((uint)bVar6 * -2
                                                                                  + 1) * 4;
                                                              }
                                                              puVar5 = local_60;
                                                              for (iVar3 = 0x10; iVar3 != 0;
                                                                  iVar3 = iVar3 + -1) {
                                                                puVar5[0] = '\0';
                                                                puVar5[1] = '\0';
                                                                puVar5[2] = '\0';
                                                                puVar5[3] = '\0';
                                                                puVar5 = puVar5 + ((uint)bVar6 * -2
                                                                                  + 1) * 4;
                                                              }
                                                              cVar1 = DNFFLib::Hex2Binary(local_10,
                                                  local_60,0x18);
                                                  if (cVar1 != '\x01') {
                                                    return 0;
                                                  }
                                                  CTEA::Decrypt((CTEA *)(this + 4),(char *)local_60,
                                                                (char *)local_a0,0x18);
                                                  sVar4 = strlen((char *)local_a0);
                                                  memcpy(this + 0x795,local_a0,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"web_db_name");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0x7aa,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"stat_db_ip");
                                                      if (iVar3 == 0) {
                                                        sVar4 = strlen(local_10);
                                                        memcpy(this + 0x1578,local_10,sVar4);
                                                      }
                                                      else {
                                                        iVar3 = strcmp(local_14,"stat_db_port");
                                                        if (iVar3 == 0) {
                                                          iVar3 = atoi(local_10);
                                                          *(int *)(this + 0x158c) = iVar3;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(local_14,"stat_db_acc");
                                                          if (iVar3 == 0) {
                                                            sVar4 = strlen(local_10);
                                                            memcpy(this + 0x1590,local_10,sVar4);
                                                          }
                                                          else {
                                                            iVar3 = strcmp(local_14,"stat_db_pwd");
                                                            if (iVar3 == 0) {
                                                              puVar5 = local_60;
                                                              for (iVar3 = 0x10; iVar3 != 0;
                                                                  iVar3 = iVar3 + -1) {
                                                                puVar5[0] = '\0';
                                                                puVar5[1] = '\0';
                                                                puVar5[2] = '\0';
                                                                puVar5[3] = '\0';
                                                                puVar5 = puVar5 + ((uint)bVar6 * -2
                                                                                  + 1) * 4;
                                                              }
                                                              puVar5 = local_a0;
                                                              for (iVar3 = 0x10; iVar3 != 0;
                                                                  iVar3 = iVar3 + -1) {
                                                                puVar5[0] = '\0';
                                                                puVar5[1] = '\0';
                                                                puVar5[2] = '\0';
                                                                puVar5[3] = '\0';
                                                                puVar5 = puVar5 + ((uint)bVar6 * -2
                                                                                  + 1) * 4;
                                                              }
                                                              cVar1 = DNFFLib::Hex2Binary(local_10,
                                                  local_a0,0x18);
                                                  if (cVar1 != '\x01') {
                                                    return 0;
                                                  }
                                                  CTEA::Decrypt((CTEA *)(this + 4),(char *)local_a0,
                                                                (char *)local_60,0x18);
                                                  sVar4 = strlen((char *)local_60);
                                                  memcpy(this + 0x15a5,local_60,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"stat_db_name");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0x15ba,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"dbmw_type");
                                                      if (iVar3 == 0) {
                                                        iVar3 = atoi(local_10);
                                                        this[0x58] = SUB41(iVar3,0);
                                                      }
                                                      else {
                                                        iVar3 = strcmp(local_14,"server_group");
                                                        if (iVar3 == 0) {
                                                          iVar3 = atoi(local_10);
                                                          *(int *)(this + 0x5c) = iVar3;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(local_14,"tcp_port");
                                                          if (iVar3 == 0) {
                                                            iVar3 = atoi(local_10);
                                                            *(int *)(this + 0x54) = iVar3;
                                                          }
                                                          else {
                                                            iVar3 = strcmp(local_14,"event_db_ip");
                                                            if (iVar3 == 0) {
                                                              sVar4 = strlen(local_10);
                                                              memcpy(this + 0xd08,local_10,sVar4);
                                                            }
                                                            else {
                                                              iVar3 = strcmp(local_14,
                                                  "event_db_port");
                                                  if (iVar3 == 0) {
                                                    iVar3 = atoi(local_10);
                                                    *(int *)(this + 0xd1c) = iVar3;
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"event_db_acc");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0xd20,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"event_db_pwd");
                                                      if (iVar3 == 0) {
                                                        puVar5 = local_a0;
                                                        for (iVar3 = 0x10; iVar3 != 0;
                                                            iVar3 = iVar3 + -1) {
                                                          puVar5[0] = '\0';
                                                          puVar5[1] = '\0';
                                                          puVar5[2] = '\0';
                                                          puVar5[3] = '\0';
                                                          puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) *
                                                                            4;
                                                        }
                                                        puVar5 = local_60;
                                                        for (iVar3 = 0x10; iVar3 != 0;
                                                            iVar3 = iVar3 + -1) {
                                                          puVar5[0] = '\0';
                                                          puVar5[1] = '\0';
                                                          puVar5[2] = '\0';
                                                          puVar5[3] = '\0';
                                                          puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) *
                                                                            4;
                                                        }
                                                        cVar1 = DNFFLib::Hex2Binary(local_10,
                                                  local_60,0x18);
                                                  if (cVar1 != '\x01') {
                                                    return 0;
                                                  }
                                                  CTEA::Decrypt((CTEA *)(this + 4),(char *)local_60,
                                                                (char *)local_a0,0x18);
                                                  sVar4 = strlen((char *)local_a0);
                                                  memcpy(this + 0xd35,local_a0,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"event_db_name");
                                                    if (iVar3 == 0) {
                                                      sVar4 = strlen(local_10);
                                                      memcpy(this + 0xd4a,local_10,sVar4);
                                                    }
                                                    else {
                                                      iVar3 = strcmp(local_14,"se_event_db_ip");
                                                      if (iVar3 == 0) {
                                                        sVar4 = strlen(local_10);
                                                        memcpy(this + 0x12a8,local_10,sVar4);
                                                      }
                                                      else {
                                                        iVar3 = strcmp(local_14,"se_event_db_port");
                                                        if (iVar3 == 0) {
                                                          iVar3 = atoi(local_10);
                                                          *(int *)(this + 0x12bc) = iVar3;
                                                        }
                                                        else {
                                                          iVar3 = strcmp(local_14,"se_event_db_acc")
                                                          ;
                                                          if (iVar3 == 0) {
                                                            sVar4 = strlen(local_10);
                                                            memcpy(this + 0x12c0,local_10,sVar4);
                                                          }
                                                          else {
                                                            iVar3 = strcmp(local_14,
                                                  "se_event_db_pwd");
                                                  if (iVar3 == 0) {
                                                    puVar5 = local_60;
                                                    for (iVar3 = 0x10; iVar3 != 0;
                                                        iVar3 = iVar3 + -1) {
                                                      puVar5[0] = '\0';
                                                      puVar5[1] = '\0';
                                                      puVar5[2] = '\0';
                                                      puVar5[3] = '\0';
                                                      puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                                    }
                                                    puVar5 = local_a0;
                                                    for (iVar3 = 0x10; iVar3 != 0;
                                                        iVar3 = iVar3 + -1) {
                                                      puVar5[0] = '\0';
                                                      puVar5[1] = '\0';
                                                      puVar5[2] = '\0';
                                                      puVar5[3] = '\0';
                                                      puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
                                                    }
                                                    cVar1 = DNFFLib::Hex2Binary(local_10,local_a0,
                                                                                0x18);
                                                    if (cVar1 != '\x01') {
                                                      return 0;
                                                    }
                                                    CTEA::Decrypt((CTEA *)(this + 4),
                                                                  (char *)local_a0,(char *)local_60,
                                                                  0x18);
                                                    sVar4 = strlen((char *)local_60);
                                                    memcpy(this + 0x12d5,local_60,sVar4);
                                                  }
                                                  else {
                                                    iVar3 = strcmp(local_14,"se_event_db_name");
                                                    if (iVar3 != 0) {
                                                      return 0;
                                                    }
                                                    sVar4 = strlen(local_10);
                                                    memcpy(this + 0x12ea,local_10,sVar4);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFAppConfig.cpp](source/DNFServer/GameServer/COServer/DNFAppConfig.cpp)（约第 34 行）：

```cpp
bool CAppConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tok0;
    char* tok1;
    int n;
    if (DNFFLib::ExplodeString(line, " \t\r\n\"", &tok0, 2) == 2)
    {
        if (idx < 0x14)
        {
            if (idx == 0)
            {
                m_frameCount = (char)atoi(tok1);
            }
            else
            {
                int i = atoi(tok0);
                if (i < 0x65)
                {
                    m_udpPorts[i] = (unsigned int)atoi(tok1);
                }
            }
            return 1;
        }
    }
    return 0;
}
```
