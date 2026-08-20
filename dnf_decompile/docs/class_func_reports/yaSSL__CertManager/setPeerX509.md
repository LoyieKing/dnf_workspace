# setPeerX509

`_ZN5yaSSL11CertManager11setPeerX509EPNS_4X509E`

`yaSSL::CertManager::setPeerX509(yaSSL::X509*)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087974e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087974e0  _ZN5yaSSL11CertManager11setPeerX509EPNS_4X509E
#           yaSSL::CertManager::setPeerX509(yaSSL::X509*)
# range [0x087974e0, 0x087975d9]
087974e0 +0x00:  push   %ebp
087974e1 +0x01:  mov    %esp,%ebp
087974e3 +0x03:  sub    $0x78,%esp
087974e6 +0x06:  mov    %esi,-0x8(%ebp)
087974e9 +0x09:  mov    0xc(%ebp),%esi
087974ec +0x0c:  mov    %ebx,-0xc(%ebp)
087974ef +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087974f4 +0x14:  add    $0xbd56a4,%ebx
087974fa +0x1a:  mov    %edi,-0x4(%ebp)
087974fd +0x1d:  test   %esi,%esi
087974ff +0x1f:  je     087975c4 <+0xe4>
08797505 +0x25:  mov    %esi,(%esp)
08797508 +0x28:  call   0874f000 <_ZN5yaSSL4X5099GetIssuerEv>  ; yaSSL::X509::GetIssuer()
0879750d +0x2d:  mov    %esi,(%esp)
08797510 +0x30:  mov    %eax,-0x20(%ebp)
08797513 +0x33:  call   0874f010 <_ZN5yaSSL4X50910GetSubjectEv>  ; yaSSL::X509::GetSubject()
08797518 +0x38:  mov    %esi,(%esp)
0879751b +0x3b:  mov    %eax,-0x1c(%ebp)
0879751e +0x3e:  call   0874f060 <_ZN5yaSSL4X5099GetBeforeEv>  ; yaSSL::X509::GetBefore()
08797523 +0x43:  mov    %esi,(%esp)
08797526 +0x46:  mov    %eax,%edi
08797528 +0x48:  call   0874f030 <_ZN5yaSSL4X5098GetAfterEv>  ; yaSSL::X509::GetAfter()
0879752d +0x4d:  mov    %eax,%esi
0879752f +0x4f:  mov    -0x20(%ebp),%eax
08797532 +0x52:  mov    %eax,(%esp)
08797535 +0x55:  call   0874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>  ; yaSSL::X509_NAME::GetName() const
0879753a +0x5a:  mov    -0x20(%ebp),%edx
0879753d +0x5d:  mov    %edx,(%esp)
08797540 +0x60:  mov    %eax,-0x24(%ebp)
08797543 +0x63:  call   0874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>  ; yaSSL::X509_NAME::GetLength() const
08797548 +0x68:  mov    -0x1c(%ebp),%ecx
0879754b +0x6b:  mov    %ecx,(%esp)
0879754e +0x6e:  mov    %eax,-0x20(%ebp)
08797551 +0x71:  call   0874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>  ; yaSSL::X509_NAME::GetName() const
08797556 +0x76:  mov    %eax,-0x3c(%ebp)
08797559 +0x79:  mov    -0x1c(%ebp),%eax
0879755c +0x7c:  mov    %eax,(%esp)
0879755f +0x7f:  call   0874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>  ; yaSSL::X509_NAME::GetLength() const
08797564 +0x84:  movb   $0x0,0x4(%esp)
08797569 +0x89:  movl   $0x40,(%esp)
08797570 +0x90:  mov    %eax,-0x28(%ebp)
08797573 +0x93:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08797578 +0x98:  mov    0x4(%esi),%ecx
0879757b +0x9b:  mov    -0x28(%ebp),%edx
0879757e +0x9e:  mov    %ecx,0x20(%esp)
08797582 +0xa2:  mov    0x8(%esi),%esi
08797585 +0xa5:  mov    -0x20(%ebp),%ecx
08797588 +0xa8:  mov    %eax,-0x28(%ebp)
0879758b +0xab:  mov    %esi,0x1c(%esp)
0879758f +0xaf:  mov    0x4(%edi),%esi
08797592 +0xb2:  mov    %esi,0x18(%esp)
08797596 +0xb6:  mov    0x8(%edi),%esi
08797599 +0xb9:  mov    %edx,0x10(%esp)
0879759d +0xbd:  mov    -0x3c(%ebp),%edx
087975a0 +0xc0:  mov    %eax,(%esp)
087975a3 +0xc3:  mov    %ecx,0x8(%esp)
087975a7 +0xc7:  mov    %esi,0x14(%esp)
087975ab +0xcb:  mov    %edx,0xc(%esp)
087975af +0xcf:  mov    -0x24(%ebp),%edx
087975b2 +0xd2:  mov    %edx,0x4(%esp)
087975b6 +0xd6:  call   08752520 <_ZN5yaSSL4X509C1EPKcjS2_jS2_iS2_i>  ; yaSSL::X509::X509(char const*, unsigned int, char const*, unsigned int, char const*, int, char const*, int)
087975bb +0xdb:  mov    0x8(%ebp),%edx
087975be +0xde:  mov    -0x28(%ebp),%eax
087975c1 +0xe1:  mov    %eax,0x38(%edx)
087975c4 +0xe4:  mov    -0xc(%ebp),%ebx
087975c7 +0xe7:  mov    -0x8(%ebp),%esi
087975ca +0xea:  mov    -0x4(%ebp),%edi
087975cd +0xed:  mov    %ebp,%esp
087975cf +0xef:  pop    %ebp
087975d0 +0xf0:  ret
087975d1 +0xf1:  nop
087975d2 +0xf2:  lea    0x0(%esi,%eiz,1),%esi
087975d9 +0xf9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::setPeerX509 @ 0x87974e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::setPeerX509(yaSSL::X509*) */

void __thiscall yaSSL::CertManager::setPeerX509(CertManager *this,X509 *param_1)

{
  X509_NAME *this_00;
  X509_NAME *this_01;
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  X509 *this_02;
  uint in_stack_ffffff88;
  
  if (param_1 != (X509 *)0x0) {
    this_00 = (X509_NAME *)X509::GetIssuer(param_1);
    this_01 = (X509_NAME *)X509::GetSubject(param_1);
    iVar1 = X509::GetBefore(param_1);
    iVar2 = X509::GetAfter(param_1);
    pcVar3 = (char *)X509_NAME::GetName(this_00);
    uVar4 = X509_NAME::GetLength(this_00);
    pcVar5 = (char *)X509_NAME::GetName(this_01);
    uVar6 = X509_NAME::GetLength(this_01);
    this_02 = operator_new(0x40,in_stack_ffffff88 & 0xffffff00);
    X509::X509(this_02,pcVar3,uVar4,pcVar5,uVar6,*(char **)(iVar1 + 8),*(int *)(iVar1 + 4),
               *(char **)(iVar2 + 8),*(int *)(iVar2 + 4));
    *(X509 **)(this + 0x38) = this_02;
  }
  return;
}
```
