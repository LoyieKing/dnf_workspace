# StoreKey

`_ZN8TaoCrypt11CertDecoder8StoreKeyEv`

`TaoCrypt::CertDecoder::StoreKey()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08753e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753e90  _ZN8TaoCrypt11CertDecoder8StoreKeyEv
#           TaoCrypt::CertDecoder::StoreKey()
# range [0x08753e90, 0x08753f39]
08753e90 +0x00:  push   %ebp
08753e91 +0x01:  mov    %esp,%ebp
08753e93 +0x03:  sub    $0x48,%esp
08753e96 +0x06:  mov    %esi,-0x8(%ebp)
08753e99 +0x09:  mov    0x8(%ebp),%esi
08753e9c +0x0c:  mov    %ebx,-0xc(%ebp)
08753e9f +0x0f:  mov    %edi,-0x4(%ebp)
08753ea2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08753ea7 +0x17:  add    $0xc18cf1,%ebx
08753ead +0x1d:  mov    0x4(%esi),%eax
08753eb0 +0x20:  mov    0x10(%eax),%edi
08753eb3 +0x23:  test   %edi,%edi
08753eb5 +0x25:  je     08753ec8 <+0x38>
08753eb7 +0x27:  mov    -0xc(%ebp),%ebx
08753eba +0x2a:  mov    -0x8(%ebp),%esi
08753ebd +0x2d:  mov    -0x4(%ebp),%edi
08753ec0 +0x30:  mov    %ebp,%esp
08753ec2 +0x32:  pop    %ebp
08753ec3 +0x33:  ret
08753ec4 +0x34:  lea    0x0(%esi,%eiz,1),%esi
08753ec8 +0x38:  mov    0xc(%eax),%edi
08753ecb +0x3b:  mov    %esi,(%esp)
08753ece +0x3e:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08753ed3 +0x43:  mov    0x4(%esi),%ecx
08753ed6 +0x46:  mov    0xc(%ecx),%edx
08753ed9 +0x49:  mov    %eax,-0x2c(%ebp)
08753edc +0x4c:  mov    %edx,%eax
08753ede +0x4e:  sub    %edi,%eax
08753ee0 +0x50:  mov    %eax,%edi
08753ee2 +0x52:  mov    -0x2c(%ebp),%eax
08753ee5 +0x55:  add    %edi,%eax
08753ee7 +0x57:  test   %edi,%edi
08753ee9 +0x59:  je     08753efb <+0x6b>
08753eeb +0x5b:  nop
08753eec +0x5c:  lea    0x0(%esi,%eiz,1),%esi
08753ef0 +0x60:  sub    $0x1,%edx
08753ef3 +0x63:  sub    $0x1,%edi
08753ef6 +0x66:  mov    %edx,0xc(%ecx)
08753ef9 +0x69:  jne    08753ef0 <+0x60>
08753efb +0x6b:  lea    0x8(%esi),%edi
08753efe +0x6e:  mov    %eax,0x4(%esp)
08753f02 +0x72:  mov    %eax,-0x1c(%ebp)
08753f05 +0x75:  mov    %edi,(%esp)
08753f08 +0x78:  call   08753e50 <_ZN8TaoCrypt9PublicKey7SetSizeEj>  ; TaoCrypt::PublicKey::SetSize(unsigned int)
08753f0d +0x7d:  mov    0x4(%esi),%ecx
08753f10 +0x80:  mov    0x4(%ecx),%edx
08753f13 +0x83:  add    0xc(%ecx),%edx
08753f16 +0x86:  mov    %edi,(%esp)
08753f19 +0x89:  mov    %edx,0x4(%esp)
08753f1d +0x8d:  call   08753ca0 <_ZN8TaoCrypt9PublicKey6SetKeyEPKh>  ; TaoCrypt::PublicKey::SetKey(unsigned char const*)
08753f22 +0x92:  mov    0x4(%esi),%edx
08753f25 +0x95:  mov    -0x1c(%ebp),%eax
08753f28 +0x98:  add    %eax,0xc(%edx)
08753f2b +0x9b:  mov    -0xc(%ebp),%ebx
08753f2e +0x9e:  mov    -0x8(%ebp),%esi
08753f31 +0xa1:  mov    -0x4(%ebp),%edi
08753f34 +0xa4:  mov    %ebp,%esp
08753f36 +0xa6:  pop    %ebp
08753f37 +0xa7:  ret
08753f38 +0xa8:  nop
08753f39 +0xa9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::StoreKey @ 0x8753e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::StoreKey() */

void __thiscall TaoCrypt::CertDecoder::StoreKey(CertDecoder *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) != 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(this + 4) + 0xc);
  iVar2 = BER_Decoder::GetSequence((BER_Decoder *)this);
  iVar1 = *(int *)(this + 4);
  iVar5 = *(int *)(iVar1 + 0xc);
  iVar3 = iVar5 - iVar3;
  uVar4 = iVar2 + iVar3;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar5 = iVar5 + -1;
    *(int *)(iVar1 + 0xc) = iVar5;
  }
  PublicKey::SetSize((PublicKey *)(this + 8),uVar4);
  PublicKey::SetKey((PublicKey *)(this + 8),
                    (uchar *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc))
                   );
  *(int *)(*(int *)(this + 4) + 0xc) = *(int *)(*(int *)(this + 4) + 0xc) + uVar4;
  return;
}
```
