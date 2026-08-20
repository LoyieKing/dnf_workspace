# AddCA

`_ZN5yaSSL7SSL_CTX5AddCAEPNS_4x509E`

`yaSSL::SSL_CTX::AddCA(yaSSL::x509*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x087525a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087525a0  _ZN5yaSSL7SSL_CTX5AddCAEPNS_4x509E
#           yaSSL::SSL_CTX::AddCA(yaSSL::x509*)
# range [0x087525a0, 0x08752609]
087525a0 +0x00:  push   %ebp
087525a1 +0x01:  mov    %esp,%ebp
087525a3 +0x03:  sub    $0x18,%esp
087525a6 +0x06:  mov    %ebx,-0x8(%ebp)
087525a9 +0x09:  mov    %esi,-0x4(%ebp)
087525ac +0x0c:  mov    0x8(%ebp),%esi
087525af +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087525b4 +0x14:  add    $0xc1a5e4,%ebx
087525ba +0x1a:  movb   $0x0,0x4(%esp)
087525bf +0x1f:  movl   $0xc,(%esp)
087525c6 +0x26:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087525cb +0x2b:  movl   $0x0,(%eax)
087525d1 +0x31:  movl   $0x0,0x4(%eax)
087525d8 +0x38:  mov    0xc(%ebp),%edx
087525db +0x3b:  mov    %edx,0x8(%eax)
087525de +0x3e:  mov    0x10(%esi),%edx
087525e1 +0x41:  test   %edx,%edx
087525e3 +0x43:  je     08752600 <+0x60>
087525e5 +0x45:  mov    %eax,0x4(%edx)
087525e8 +0x48:  mov    0x10(%esi),%edx
087525eb +0x4b:  mov    %edx,(%eax)
087525ed +0x4d:  addl   $0x1,0x14(%esi)
087525f1 +0x51:  mov    %eax,0x10(%esi)
087525f4 +0x54:  mov    -0x8(%ebp),%ebx
087525f7 +0x57:  mov    -0x4(%ebp),%esi
087525fa +0x5a:  mov    %ebp,%esp
087525fc +0x5c:  pop    %ebp
087525fd +0x5d:  ret
087525fe +0x5e:  xchg   %ax,%ax
08752600 +0x60:  mov    %eax,0xc(%esi)
08752603 +0x63:  jmp    087525ed <+0x4d>
08752605 +0x65:  nop
08752606 +0x66:  lea    0x0(%esi),%esi
08752609 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::AddCA @ 0x87525a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::AddCA(yaSSL::x509*) */

void __thiscall yaSSL::SSL_CTX::AddCA(SSL_CTX *this,x509 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0xc,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  if (*(int *)(this + 0x10) == 0) {
    *(undefined4 **)(this + 0xc) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)(this + 0x10) + 4) = puVar1;
    *puVar1 = *(undefined4 *)(this + 0x10);
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  *(undefined4 **)(this + 0x10) = puVar1;
  return;
}
```
