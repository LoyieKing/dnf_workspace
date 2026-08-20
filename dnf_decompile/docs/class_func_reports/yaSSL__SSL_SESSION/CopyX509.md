# CopyX509

`_ZN5yaSSL11SSL_SESSION8CopyX509EPNS_4X509E`

`yaSSL::SSL_SESSION::CopyX509(yaSSL::X509*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x08752720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752720  _ZN5yaSSL11SSL_SESSION8CopyX509EPNS_4X509E
#           yaSSL::SSL_SESSION::CopyX509(yaSSL::X509*)
# range [0x08752720, 0x08752819]
08752720 +0x00:  push   %ebp
08752721 +0x01:  mov    %esp,%ebp
08752723 +0x03:  sub    $0x78,%esp
08752726 +0x06:  mov    %esi,-0x8(%ebp)
08752729 +0x09:  mov    0xc(%ebp),%esi
0875272c +0x0c:  mov    %ebx,-0xc(%ebp)
0875272f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08752734 +0x14:  add    $0xc1a464,%ebx
0875273a +0x1a:  mov    %edi,-0x4(%ebp)
0875273d +0x1d:  test   %esi,%esi
0875273f +0x1f:  je     08752804 <+0xe4>
08752745 +0x25:  mov    %esi,(%esp)
08752748 +0x28:  call   0874f000 <_ZN5yaSSL4X5099GetIssuerEv>  ; yaSSL::X509::GetIssuer()
0875274d +0x2d:  mov    %esi,(%esp)
08752750 +0x30:  mov    %eax,-0x20(%ebp)
08752753 +0x33:  call   0874f010 <_ZN5yaSSL4X50910GetSubjectEv>  ; yaSSL::X509::GetSubject()
08752758 +0x38:  mov    %esi,(%esp)
0875275b +0x3b:  mov    %eax,-0x1c(%ebp)
0875275e +0x3e:  call   0874f060 <_ZN5yaSSL4X5099GetBeforeEv>  ; yaSSL::X509::GetBefore()
08752763 +0x43:  mov    %esi,(%esp)
08752766 +0x46:  mov    %eax,%edi
08752768 +0x48:  call   0874f030 <_ZN5yaSSL4X5098GetAfterEv>  ; yaSSL::X509::GetAfter()
0875276d +0x4d:  mov    %eax,%esi
0875276f +0x4f:  mov    -0x20(%ebp),%eax
08752772 +0x52:  mov    %eax,(%esp)
08752775 +0x55:  call   0874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>  ; yaSSL::X509_NAME::GetName() const
0875277a +0x5a:  mov    -0x20(%ebp),%edx
0875277d +0x5d:  mov    %edx,(%esp)
08752780 +0x60:  mov    %eax,-0x24(%ebp)
08752783 +0x63:  call   0874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>  ; yaSSL::X509_NAME::GetLength() const
08752788 +0x68:  mov    -0x1c(%ebp),%ecx
0875278b +0x6b:  mov    %ecx,(%esp)
0875278e +0x6e:  mov    %eax,-0x20(%ebp)
08752791 +0x71:  call   0874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>  ; yaSSL::X509_NAME::GetName() const
08752796 +0x76:  mov    %eax,-0x3c(%ebp)
08752799 +0x79:  mov    -0x1c(%ebp),%eax
0875279c +0x7c:  mov    %eax,(%esp)
0875279f +0x7f:  call   0874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>  ; yaSSL::X509_NAME::GetLength() const
087527a4 +0x84:  movb   $0x0,0x4(%esp)
087527a9 +0x89:  movl   $0x40,(%esp)
087527b0 +0x90:  mov    %eax,-0x28(%ebp)
087527b3 +0x93:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087527b8 +0x98:  mov    0x4(%esi),%ecx
087527bb +0x9b:  mov    -0x28(%ebp),%edx
087527be +0x9e:  mov    %ecx,0x20(%esp)
087527c2 +0xa2:  mov    0x8(%esi),%esi
087527c5 +0xa5:  mov    -0x20(%ebp),%ecx
087527c8 +0xa8:  mov    %eax,-0x28(%ebp)
087527cb +0xab:  mov    %esi,0x1c(%esp)
087527cf +0xaf:  mov    0x4(%edi),%esi
087527d2 +0xb2:  mov    %esi,0x18(%esp)
087527d6 +0xb6:  mov    0x8(%edi),%esi
087527d9 +0xb9:  mov    %edx,0x10(%esp)
087527dd +0xbd:  mov    -0x3c(%ebp),%edx
087527e0 +0xc0:  mov    %eax,(%esp)
087527e3 +0xc3:  mov    %ecx,0x8(%esp)
087527e7 +0xc7:  mov    %esi,0x14(%esp)
087527eb +0xcb:  mov    %edx,0xc(%esp)
087527ef +0xcf:  mov    -0x24(%ebp),%edx
087527f2 +0xd2:  mov    %edx,0x4(%esp)
087527f6 +0xd6:  call   08752520 <_ZN5yaSSL4X509C1EPKcjS2_jS2_iS2_i>  ; yaSSL::X509::X509(char const*, unsigned int, char const*, unsigned int, char const*, int, char const*, int)
087527fb +0xdb:  mov    0x8(%ebp),%edx
087527fe +0xde:  mov    -0x28(%ebp),%eax
08752801 +0xe1:  mov    %eax,0x60(%edx)
08752804 +0xe4:  mov    -0xc(%ebp),%ebx
08752807 +0xe7:  mov    -0x8(%ebp),%esi
0875280a +0xea:  mov    -0x4(%ebp),%edi
0875280d +0xed:  mov    %ebp,%esp
0875280f +0xef:  pop    %ebp
08752810 +0xf0:  ret
08752811 +0xf1:  nop
08752812 +0xf2:  lea    0x0(%esi,%eiz,1),%esi
08752819 +0xf9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::CopyX509 @ 0x8752720

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::CopyX509(yaSSL::X509*) */

void __thiscall yaSSL::SSL_SESSION::CopyX509(SSL_SESSION *this,X509 *param_1)

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
    *(X509 **)(this + 0x60) = this_02;
  }
  return;
}
```
