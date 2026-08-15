## dbmw _ZL16allocStackBufferjPPhPi [NEAR] pm=2
```diff
+mov    0x8(%ebp),%edx
-mov    0x8(%ebp),%edx
```

## dbmw _ZN10CAppConfig11Parse_TableEPci [DIFF] pm=1069
```diff
-sub    $0xb0,%esp
+sub    $0xa0,%esp
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    -0x18(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd2>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd0>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    0x8(%ebp),%edx
+mov    %eax,0x50(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+movl   $"master_db_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x13f>
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
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+movl   $"neople_db_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x271>
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
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x2b6>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x2b4>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x37e>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x37c>
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
-lea    -0x5c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x325>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x323>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x3c1>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x3bf>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x404>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x402>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x436>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x434>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x479>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x477>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x53c>
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
-lea    -0x9c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x4eb>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x4e9>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x581>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x57f>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5c4>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5c2>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5f6>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x5f4>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x639>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x637>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x6ff>
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
-lea    -0x5c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x6a8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x6a6>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x744>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x742>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x787>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x785>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x7b9>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x7b7>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x7fc>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x7fa>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x8bf>
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
-lea    -0x9c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x86e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x86c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x904>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x902>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x947>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x945>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x979>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x977>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9bc>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9ba>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xa82>
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
-lea    -0x5c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xa2b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xa29>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xac7>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xac5>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb0a>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb08>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb3c>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb3a>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb7f>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xb7d>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xc42>
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
-lea    -0x9c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xbf1>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xbef>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xc87>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xc85>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xcca>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xcc8>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xcfc>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xcfa>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd3f>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd3d>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe05>
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
-lea    -0x5c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xdae>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xdac>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe4a>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe48>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe8d>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xe8b>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xebf>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xebd>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xf02>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xf00>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xfc5>
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
-lea    -0x9c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xf74>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xf72>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x100a>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1008>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1039>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1037>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1068>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1064>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    0x8(%ebp),%edx
+mov    %eax,0x5c(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+movl   $"tcp_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1091>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    0x8(%ebp),%edx
+mov    %eax,0x54(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+movl   $"event_db_ip",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x10d4>
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
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+movl   $"event_db_port",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1106>
-mov    %edx,0x5c(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-movl   $"tcp_port",0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcmp>
-test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1097>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
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
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x114f>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1149>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1211>
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
-lea    -0x5c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x11be>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x5c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x11b8>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x9c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x125a>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1254>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x129d>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1297>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12cf>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12c9>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1312>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x130c>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
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
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x13ce>
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
-lea    -0x9c(%ebp),%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x1384>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x137e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1414>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x140e>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
-add    $0xb0,%esp
+add    $0xa0,%esp
```

## dbmw _ZN10CDBManager10InsertMailEjPcS0_jjii [NEAR] pm=22
```diff
-mov    %eax,-0x24(%ebp)
-lea    -0x24(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x14(%ebp),%eax
-movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x18(%ebp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## dbmw _ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild [NEAR] pm=10
```diff
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
```

## dbmw _ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_ [DIFF] pm=1102
```diff
-push   %edi
-push   %esi
-sub    $0xdc,%esp
+sub    $0xc4,%esp
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x14(%ebp)
-mov    %eax,-0x20(%ebp)
-movb   $0x0,-0xb1(%ebp)
+mov    %eax,-0x10(%ebp)
+movb   $0x0,-0x15(%ebp)
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x29d>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x261>
+mov    -0x14(%ebp),%eax
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
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
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
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x24(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
-lea    -0xb1(%ebp),%eax
+lea    -0x15(%ebp),%eax
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
-lea    -0xb8(%ebp),%eax
+lea    -0x1c(%ebp),%eax
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
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3a2>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x352>
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3a2>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x352>
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3db>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x388>
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3db>
-movzbl -0xb1(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x388>
+movzbl -0x15(%ebp),%eax
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3db>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x388>
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-movb   $0x0,-0x19(%ebp)
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+movb   $0x0,-0x9(%ebp)
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x41d>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3c7>
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x41d>
-mov    -0xb8(%ebp),%eax
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3c7>
+mov    -0x1c(%ebp),%eax
-jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x40a>
-movb   $0x1,-0x19(%ebp)
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x41d>
+jne    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3b4>
+movb   $0x1,-0x9(%ebp)
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x3c7>
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x10(%ebp),%eax
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
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x5b5>
-mov    0x10(%ebp),%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x54c>
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
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
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
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
-lea    -0xbc(%ebp),%eax
+lea    -0x1c(%ebp),%eax
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
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x924>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x8a3>
+mov    -0x14(%ebp),%eax
-mov    -0xbc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x8a6>
-mov    0x10(%ebp),%eax
-mov    (%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0xbc(%ebp),%ebx
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x822>
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%ecx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
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
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    (%eax),%ecx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
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
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xad6>
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa52>
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xad6>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xa52>
+mov    -0x10(%ebp),%eax
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
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x10(%ebp),%eax
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
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
-add    $0xdc,%esp
+add    $0xc4,%esp
-pop    %esi
-pop    %edi
```

## dbmw _ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly [DIFF] pm=19
```diff
-jne    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x67>
+jne    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x6a>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %bl,%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x165>
+je     <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x161>
-jmp    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x16a>
+jmp    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x166>
```

## dbmw _ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh [DIFF] pm=118
```diff
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xc8>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xc1>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2a0>
-mov    -0x10(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x256>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2b9>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x109>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+imul   $0x27,%eax,%eax
+add    0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x153>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x14a>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x19a>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x184>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x1dc>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x1b9>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x21e>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x1ee>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x25d>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x220>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x29c>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x252>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-addl   $0x1,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+addl   $0x1,-0x10(%ebp)
-cmp    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xed>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2ba>
-nop
+jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xe6>
```

## dbmw _ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly [DIFF] pm=31
```diff
-add    %edx,%eax
-mov    0x14(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    0x14(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xd9>
+jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xd3>
-jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xe0>
+jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xda>
-jmp    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xe5>
+jmp    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xdf>
-je     <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0x18c>
+je     <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0x184>
-add    %edx,%eax
-mov    0x14(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    0x14(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
-mov    %al,-0xd(%ebp)
```

## dbmw _ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit [NEAR] pm=8
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## dbmw _ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild [DIFF] pm=26
```diff
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fb>
+je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fc>
-add    %edx,%eax
-mov    -0xc(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    -0xc(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
-je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fb>
+je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fc>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
```

## dbmw _ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh [DIFF] pm=136
```diff
-push   %edi
-sub    $0x6c,%esp
+sub    $0x60,%esp
-mov    %dl,-0x3c(%ebp)
-mov    %al,-0x40(%ebp)
+mov    %dl,-0x2c(%ebp)
+mov    %al,-0x30(%ebp)
-mov    %eax,-0x1c(%ebp)
-cmpb   $0x2,-0x40(%ebp)
-ja     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0xe1>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpb   $0x2,-0x30(%ebp)
+ja     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0xda>
+mov    -0xc(%ebp),%eax
-movzbl -0x3c(%ebp),%edx
+movzbl -0x2c(%ebp),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-movzbl -0x3c(%ebp),%eax
-mov    %eax,-0x44(%ebp)
+movl   $0x2ba,0x8(%esp)
+movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x2c(%ebp),%ebx
-mov    0x16(%eax),%edi
+mov    0x16(%eax),%ecx
-movzbl %al,%esi
-movzbl -0x40(%ebp),%ebx
-movl   $0x2ba,0x8(%esp)
-movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x18(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x44(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %al,%edx
+movzbl -0x30(%ebp),%eax
+mov    0x18(%ebp),%esi
+mov    %esi,0x20(%esp)
+mov    %ebx,0x1c(%esp)
+mov    0x10(%ebp),%ebx
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1dd>
-cmpb   $0x3,-0x40(%ebp)
-jne    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x19f>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1d6>
+cmpb   $0x3,-0x30(%ebp)
+jne    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x198>
+mov    -0xc(%ebp),%eax
-movzbl -0x3c(%ebp),%ecx
+movzbl -0x2c(%ebp),%ecx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-movzbl -0x3c(%ebp),%edi
+movl   $0x2c5,0x8(%esp)
+movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x2c(%ebp),%ecx
-movzbl %al,%esi
-movzbl -0x40(%ebp),%ebx
-movl   $0x2c5,0x8(%esp)
+movzbl %al,%edx
+movzbl -0x30(%ebp),%eax
+mov    0x18(%ebp),%ebx
+mov    %ebx,0x1c(%esp)
+mov    %ecx,0x18(%esp)
+mov    0x10(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::SaveGuildMember(GRADE_CHANGE flag(%d), grade(%d), g(%d), s(%d), c(%d))",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1d6>
+movl   $0x2c9,0x8(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    0x18(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    %edi,0x18(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::SaveGuildMember(GRADE_CHANGE flag(%d), grade(%d), g(%d), s(%d), c(%d))",0x8(%esp)
+movzbl -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::SaveGuildMember ERR(save_flag err(%d))",0x8(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1dd>
-movzbl -0x40(%ebp),%ebx
-movl   $0x2c9,0x8(%esp)
-movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::SaveGuildMember ERR(save_flag err(%d))",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x20c>
+je     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1fe>
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x211>
+jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x203>
-add    $0x6c,%esp
+add    $0x60,%esp
-pop    %edi
```

## dbmw _ZN10CDBManager16SaveMemberInsertEjjh [DIFF] pm=162
```diff
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x338>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x33e>
-lea    -0x50(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-lea    -0x48(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-lea    -0x40(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x334>
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x334>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x34e>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x3c7>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x3d3>
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x407>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x413>
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x40e>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x413>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4d2>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x41a>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x41f>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4de>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4a0>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4ac>
-lea    -0x28(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4d2>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x4de>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x549>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x555>
-lea    -0x20(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x589>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x595>
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x590>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x595>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x59c>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x5a1>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x64c>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x611>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x61d>
-lea    -0x18(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x64c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
```

## dbmw _ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo [DIFF] pm=126
```diff
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
+movl   $&_ZZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"OnWriteGuildBoard Query Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%edx
+movl   $"seLect no, unix_timestamp(create_time) from guild_memo where no=LAST_INSERT_ID()",0x8(%esp)
+movl   $0x4f07,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f07,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x1f0>
+movl   $0x2306,0x8(%esp)
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edx
-movl   $"seLect no, unix_timestamp(create_time) from guild_memo where no=LAST_INSERT_ID()",0x8(%esp)
-movl   $0x4f07,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f07,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x1f0>
-movl   $0x2306,0x8(%esp)
-movl   $&_ZZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"OnWriteGuildBoard Query Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2a5>
-mov    0xc(%ebp),%eax
-mov    0x13(%eax),%edx
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2fe>
+mov    0xc(%ebp),%eax
+mov    0x13(%eax),%eax
+mov    %eax,%edx
-movzbl 0x9b(%eax),%edx
+movzbl 0x9b(%eax),%eax
+mov    %eax,%edx
-lea    0x17(%eax),%edx
-mov    0x10(%ebp),%eax
+add    $0x17,%eax
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    0x10(%ebp),%eax
```

## dbmw _ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic [DIFF] pm=396
```diff
-sub    $0x6c,%esp
+sub    $0x7c,%esp
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x3c(%ebp)
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x38(%ebp)
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x20c>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1f3>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x218>
+mov    -0x34(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x202>
+mov    -0x38(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%edi
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%edi
-mov    -0x2c(%ebp),%edx
+mov    -0x3c(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x44(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x54(%ebp)
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x112>
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x121>
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x119>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x128>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x11e>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1ef>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x12d>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1fe>
+mov    -0x38(%ebp),%eax
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x48(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x48(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%edx
+mov    %edx,-0x58(%ebp)
+add    %eax,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+mov    -0x58(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1ef>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
-addl   $0x1,-0x24(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x24(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3c>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5cb>
-mov    0xc(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1fe>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e8>
+addl   $0x1,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+cmp    -0x30(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4b>
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e3>
+mov    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3f7>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3de>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x40(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x409>
+mov    -0x34(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3f3>
+mov    -0x38(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%edi
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%edi
-mov    -0x2c(%ebp),%edx
+mov    -0x3c(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x40(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x50(%ebp)
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x2fd>
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x312>
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x304>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x319>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x309>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3da>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x31e>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3ef>
+mov    -0x38(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x4c(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x4c(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%edx
+mov    %edx,-0x5c(%ebp)
+add    %eax,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+mov    -0x5c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3da>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
-addl   $0x1,-0x20(%ebp)
-mov    0xc(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3ef>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e8>
+addl   $0x1,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+cmp    -0x28(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x23c>
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e3>
+mov    -0x34(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x227>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5cb>
+mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b7>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d2>
+mov    -0x38(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
-mov    0xc(%ebp),%edi
+mov    -0x34(%ebp),%edi
-mov    -0x2c(%ebp),%edx
+mov    -0x3c(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x3c(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x4c(%ebp)
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4d9>
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4f4>
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4e0>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4fb>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4e5>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b3>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x500>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5ce>
+mov    -0x38(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
-mov    0xc(%ebp),%edx
-mov    %edx,-0x50(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x50(%ebp),%eax
+mov    -0x34(%ebp),%edx
+mov    %edx,-0x60(%ebp)
+add    %eax,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+mov    -0x60(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b3>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5ce>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e8>
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x1c(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x403>
+mov    -0x1c(%ebp),%eax
+cmp    -0x20(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x41e>
-add    $0x6c,%esp
+add    $0x7c,%esp
```

## dbmw _ZN10CDBManager18selectCollectItemsEhRiS0_RjRh [DIFF] pm=327
```diff
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x9d>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x96>
-lea    -0x54(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x105>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0xf7>
-lea    -0x4c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x160>
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x152>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems (Row_Data Not Exist) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x24,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x1ab>
+movl   $0x298e,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems Query(fetch) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x213>
+movl   $0x2997,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems (get_uint(cur_count_)) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x27b>
+movl   $0x299e,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems (get_uint(total_count_) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x58,%eax
+mov    (%eax),%edx
+mov    0x1c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x2,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x2e0>
+movl   $0x29a5,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-movl   $"selectCollectItems (Row_Data Not Exist) Error",0x8(%esp)
+movl   $"selectCollectItems (get_ubyte(change_flag) Error",0x8(%esp)
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x24,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x1c0>
-movl   $0x298e,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems Query(fetch) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-movl   $0x0,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x239>
-movl   $0x2997,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (get_uint(cur_count_)) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x14(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x2ab>
-movl   $0x299e,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    0x18(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x3,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x345>
+movl   $0x29ac,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x58,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x1c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x31a>
-movl   $0x29a5,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (get_ubyte(change_flag) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x18(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x389>
-movl   $0x29ac,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (get_uint(total_count_) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
```

## dbmw _ZN10CDBManager18updateCollectItemsEhijh [DIFF] pm=93
```diff
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a2>
+movb   $0x0,-0x9(%ebp)
-jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xbe>
+jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xc2>
-jg     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x45>
+jg     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x49>
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a2>
-jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x81>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x85>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf3>
-mov    -0xc(%ebp),%eax
+mov    %al,-0x9(%ebp)
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf7>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf3>
-mov    -0xc(%ebp),%eax
+mov    %al,-0x9(%ebp)
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf7>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
-je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x13b>
+je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x13f>
+movl   $&_ZZN10CDBManager18updateCollectItemsEhijhE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a2>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f4d,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x19d>
+movl   $0x29df,0x8(%esp)
-movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a0>
-movl   $0x29df,0x8(%esp)
-movl   $&_ZZN10CDBManager18updateCollectItemsEhijhE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a2>
```

## dbmw _ZN10CDBManager19QueryCharacNoByNameEPcRjPi [DIFF] pm=68
```diff
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x139>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x132>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x153>
-jg     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x15a>
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1a1>
+jle    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x19a>
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1cb>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1bd>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x201>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1ef>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27c>
+movl   $0x0,-0x30(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x23d>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x22f>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x263>
+mov    -0x30(%ebp),%edx
+mov    %edx,0x4(%esp)
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x263>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x268>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27c>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
```

## dbmw _ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild [DIFF] pm=66
```diff
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x1c(%ebp)
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xef>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xe8>
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x18d>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x17e>
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x140>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x138>
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
+mov    -0x1c(%ebp),%eax
-add    $0x8,%eax
-add    -0x10(%ebp),%eax
+add    $0x20,%eax
+add    -0x14(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x189>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x17a>
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
-mov    -0x10(%ebp),%eax
-movzbl 0x2d(%eax),%eax
-movzbl %al,%eax
-cmp    -0xc(%ebp),%eax
-setg   %al
+mov    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
+setl   %al
-jne    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x112>
+jne    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x111>
```

## dbmw _ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_ [DIFF] pm=66
```diff
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0xcf>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0xc8>
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
-mov    %eax,-0x40(%ebp)
-lea    -0x40(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x24(%ebp),%eax
-mov    0x8(%eax),%eax
+mov    0xc(%eax),%eax
-mov    %edx,0x8(%eax)
+mov    %edx,0xc(%eax)
+mov    -0x14(%ebp),%eax
+movl   $0x0,0x8(%eax)
-mov    -0x14(%ebp),%eax
-movl   $0x0,(%eax)
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c9>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c3>
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x167>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x15a>
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
+movl   $0x0,-0x30(%ebp)
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x1a0>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x193>
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
-mov    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
+movl   $0x0,-0x34(%ebp)
+mov    -0x30(%ebp),%eax
-lea    -0x48(%ebp),%edx
+lea    -0x34(%ebp),%edx
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x226>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x220>
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c5>
-mov    -0x48(%ebp),%edx
-mov    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2bf>
+mov    -0x34(%ebp),%edx
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c5>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2bf>
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jne    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x13d>
+jne    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x137>
```

## dbmw _ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic [DIFF] pm=45
```diff
-push   %esi
-sub    $0x30,%esp
+sub    $0x34,%esp
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x21>
+jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x20>
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x120>
+jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x10e>
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x10c>
+jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0xfa>
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x4d>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,8),%eax
-test   %eax,%eax
-je     <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x107>
+je     <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0xf6>
+mov    0xc(%ebp),%eax
+mov    0xe(%eax,%edx,8),%edx
-mov    0xe(%eax,%edx,8),%edx
-mov    0xc(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax,%edx,8),%esi
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,8),%ebx
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    0xe(%eax,%edx,8),%edx
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+mov    0xa(%eax,%ecx,8),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x108>
-nop
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x2d>
+jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x2c>
-add    $0x30,%esp
+add    $0x34,%esp
-pop    %esi
```

## dbmw _ZN10CDBManager20updateCollectItemsGmEhiij [DIFF] pm=68
```diff
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x119>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x112>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0xaf>
+je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0xa8>
+movl   $&_ZZN10CDBManager20updateCollectItemsGmEhiijE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x112>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f4d,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x10d>
+movl   $0x29ff,0x8(%esp)
-movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x119>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x114>
-movl   $0x29ff,0x8(%esp)
-movl   $&_ZZN10CDBManager20updateCollectItemsGmEhiijE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x119>
+jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x112>
```

## dbmw _ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message [DIFF] pm=50
```diff
-sub    $0x48,%esp
+sub    $0x58,%esp
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-mov    0x10(%ebp),%eax
-add    $0x20a,%eax
+lea    -0x10(%ebp),%eax
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x225>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x223>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
+mov    -0x10(%ebp),%edx
+mov    0x10(%ebp),%eax
+mov    %edx,0x20a(%eax)
-mov    0x10(%ebp),%eax
-add    $0x20e,%eax
+lea    -0x14(%ebp),%eax
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x28f>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
-lea    -0x14(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
+mov    -0x14(%ebp),%edx
+mov    0x10(%ebp),%eax
+mov    %edx,0x20e(%eax)
```

## dbmw _ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic [DIFF] pm=104
```diff
-jmp    <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x285>
+jmp    <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x26b>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%eax
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x2(%eax),%edi
+add    $0x4,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%edi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%esi
+add    $0x3,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%esi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%ebx
+add    $0x2,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%ebx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%eax
+add    $0x1,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%eax
-je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x142>
+je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x135>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x281>
+je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x267>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x2(%eax),%eax
+add    $0x4,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%eax
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%edi
+add    $0x3,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%edi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%esi
+add    $0x2,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%esi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%ebx
+add    $0x1,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%ebx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%edx
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%edx
-je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x281>
+je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x267>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
```

## dbmw _ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy [DIFF] pm=54
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xc6>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xbf>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xf0>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xe2>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x129>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x114>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x16d>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x151>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1a9>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x186>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1e2>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1b8>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x21b>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1ea>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x254>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x21c>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
```

## dbmw _ZN10CDBManager21SaveGuildWarPointListEiPjS0_ [DIFF] pm=55
```diff
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x38,%esp
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x14>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1c>
-jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1e>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1c>
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x12a>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x121>
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x125>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x11c>
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0xf6>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0xf4>
+movl   $0x9b7,0x8(%esp)
+movl   $&_ZZN10CDBManager21SaveGuildWarPointListEiPjS0_E12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    (%eax),%esi
+mov    (%eax),%edx
-mov    (%eax),%ebx
-movl   $0x9b7,0x8(%esp)
-movl   $&_ZZN10CDBManager21SaveGuildWarPointListEiPjS0_E12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x126>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x11d>
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
-jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x33>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x31>
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
```
