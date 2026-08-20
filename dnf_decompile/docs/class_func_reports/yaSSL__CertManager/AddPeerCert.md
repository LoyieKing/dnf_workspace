# AddPeerCert

`_ZN5yaSSL11CertManager11AddPeerCertEPNS_4x509E`

`yaSSL::CertManager::AddPeerCert(yaSSL::x509*)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087975e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087975e0  _ZN5yaSSL11CertManager11AddPeerCertEPNS_4x509E
#           yaSSL::CertManager::AddPeerCert(yaSSL::x509*)
# range [0x087975e0, 0x08797649]
087975e0 +0x00:  push   %ebp
087975e1 +0x01:  mov    %esp,%ebp
087975e3 +0x03:  sub    $0x18,%esp
087975e6 +0x06:  mov    %ebx,-0x8(%ebp)
087975e9 +0x09:  mov    %esi,-0x4(%ebp)
087975ec +0x0c:  mov    0x8(%ebp),%esi
087975ef +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087975f4 +0x14:  add    $0xbd55a4,%ebx
087975fa +0x1a:  movb   $0x0,0x4(%esp)
087975ff +0x1f:  movl   $0xc,(%esp)
08797606 +0x26:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879760b +0x2b:  movl   $0x0,(%eax)
08797611 +0x31:  movl   $0x0,0x4(%eax)
08797618 +0x38:  mov    0xc(%ebp),%edx
0879761b +0x3b:  mov    %edx,0x8(%eax)
0879761e +0x3e:  mov    0x20(%esi),%edx
08797621 +0x41:  test   %edx,%edx
08797623 +0x43:  je     08797640 <+0x60>
08797625 +0x45:  mov    %eax,0x4(%edx)
08797628 +0x48:  mov    0x20(%esi),%edx
0879762b +0x4b:  mov    %edx,(%eax)
0879762d +0x4d:  addl   $0x1,0x24(%esi)
08797631 +0x51:  mov    %eax,0x20(%esi)
08797634 +0x54:  mov    -0x8(%ebp),%ebx
08797637 +0x57:  mov    -0x4(%ebp),%esi
0879763a +0x5a:  mov    %ebp,%esp
0879763c +0x5c:  pop    %ebp
0879763d +0x5d:  ret
0879763e +0x5e:  xchg   %ax,%ax
08797640 +0x60:  mov    %eax,0x1c(%esi)
08797643 +0x63:  jmp    0879762d <+0x4d>
08797645 +0x65:  nop
08797646 +0x66:  lea    0x0(%esi),%esi
08797649 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::AddPeerCert @ 0x87975e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::AddPeerCert(yaSSL::x509*) */

void __thiscall yaSSL::CertManager::AddPeerCert(CertManager *this,x509 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0xc,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  if (*(int *)(this + 0x20) == 0) {
    *(undefined4 **)(this + 0x1c) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)(this + 0x20) + 4) = puVar1;
    *puVar1 = *(undefined4 *)(this + 0x20);
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
  *(undefined4 **)(this + 0x20) = puVar1;
  return;
}
```
