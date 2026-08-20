# CopySelfCert

`_ZN5yaSSL11CertManager12CopySelfCertEPKNS_4x509E`

`yaSSL::CertManager::CopySelfCert(yaSSL::x509 const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087976b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087976b0  _ZN5yaSSL11CertManager12CopySelfCertEPKNS_4x509E
#           yaSSL::CertManager::CopySelfCert(yaSSL::x509 const*)
# range [0x087976b0, 0x0879774a]
087976b0 +0x00:  push   %ebp
087976b1 +0x01:  mov    %esp,%ebp
087976b3 +0x03:  sub    $0x38,%esp
087976b6 +0x06:  mov    %edi,-0x4(%ebp)
087976b9 +0x09:  mov    0xc(%ebp),%edi
087976bc +0x0c:  mov    %ebx,-0xc(%ebp)
087976bf +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087976c4 +0x14:  add    $0xbd54d4,%ebx
087976ca +0x1a:  mov    %esi,-0x8(%ebp)
087976cd +0x1d:  mov    0x8(%ebp),%esi
087976d0 +0x20:  test   %edi,%edi
087976d2 +0x22:  je     0879772e <+0x7e>
087976d4 +0x24:  movb   $0x0,0x4(%esp)
087976d9 +0x29:  movl   $0x8,(%esp)
087976e0 +0x30:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087976e5 +0x35:  mov    %edi,0x4(%esp)
087976e9 +0x39:  mov    %eax,(%esp)
087976ec +0x3c:  mov    %eax,-0x1c(%ebp)
087976ef +0x3f:  call   08797650 <_ZN5yaSSL4x509C1ERKS0_>  ; yaSSL::x509::x509(yaSSL::x509 const&)
087976f4 +0x44:  movb   $0x0,0x4(%esp)
087976f9 +0x49:  movl   $0xc,(%esp)
08797700 +0x50:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08797705 +0x55:  movl   $0x0,(%eax)
0879770b +0x5b:  movl   $0x0,0x4(%eax)
08797712 +0x62:  mov    -0x1c(%ebp),%edx
08797715 +0x65:  mov    %edx,0x8(%eax)
08797718 +0x68:  mov    0x4(%esi),%edx
0879771b +0x6b:  test   %edx,%edx
0879771d +0x6d:  je     08797740 <+0x90>
0879771f +0x6f:  mov    %eax,0x4(%edx)
08797722 +0x72:  mov    0x4(%esi),%edx
08797725 +0x75:  mov    %edx,(%eax)
08797727 +0x77:  addl   $0x1,0x8(%esi)
0879772b +0x7b:  mov    %eax,0x4(%esi)
0879772e +0x7e:  mov    -0xc(%ebp),%ebx
08797731 +0x81:  mov    -0x8(%ebp),%esi
08797734 +0x84:  mov    -0x4(%ebp),%edi
08797737 +0x87:  mov    %ebp,%esp
08797739 +0x89:  pop    %ebp
0879773a +0x8a:  ret
0879773b +0x8b:  nop
0879773c +0x8c:  lea    0x0(%esi,%eiz,1),%esi
08797740 +0x90:  mov    %eax,(%esi)
08797742 +0x92:  jmp    08797727 <+0x77>
08797744 +0x94:  lea    0x0(%esi),%esi
0879774a +0x9a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::CopySelfCert @ 0x87976b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::CopySelfCert(yaSSL::x509 const*) */

void __thiscall yaSSL::CertManager::CopySelfCert(CertManager *this,x509 *param_1)

{
  x509 *this_00;
  undefined4 *puVar1;
  uint in_stack_ffffffc8;
  
  if (param_1 != (x509 *)0x0) {
    this_00 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    yaSSL::x509::x509(this_00,param_1);
    puVar1 = operator_new__(0xc,(uint)param_1 & 0xffffff00);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = this_00;
    if (*(int *)(this + 4) == 0) {
      *(undefined4 **)this = puVar1;
    }
    else {
      *(undefined4 **)(*(int *)(this + 4) + 4) = puVar1;
      *puVar1 = *(undefined4 *)(this + 4);
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    *(undefined4 **)(this + 4) = puVar1;
  }
  return;
}
```
