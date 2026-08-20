# CertDecoder

`_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE`

`TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*, bool, TaoCrypt::CertDecoder::CertType)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x087565a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087565a0  _ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE
#           TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*, bool, TaoCrypt::CertDecoder::CertType)
# range [0x087565a0, 0x08756659]
087565a0 +0x00:  push   %ebp
087565a1 +0x01:  mov    %esp,%ebp
087565a3 +0x03:  sub    $0x38,%esp
087565a6 +0x06:  mov    %ebx,-0xc(%ebp)
087565a9 +0x09:  mov    0xc(%ebp),%edx
087565ac +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087565b1 +0x11:  add    $0xc165e7,%ebx
087565b7 +0x17:  movzbl 0x18(%ebp),%eax
087565bb +0x1b:  mov    %esi,-0x8(%ebp)
087565be +0x1e:  mov    0x8(%ebp),%esi
087565c1 +0x21:  mov    %edi,-0x4(%ebp)
087565c4 +0x24:  movzbl 0x10(%ebp),%edi
087565c8 +0x28:  mov    %al,-0x1c(%ebp)
087565cb +0x2b:  mov    %edx,0x4(%esi)
087565ce +0x2e:  mov    -0x508(%ebx),%edx
087565d4 +0x34:  add    $0x8,%edx
087565d7 +0x37:  mov    %edx,(%esi)
087565d9 +0x39:  lea    0x8(%esi),%edx
087565dc +0x3c:  movl   $0x0,0x8(%esp)
087565e4 +0x44:  movl   $0x0,0x4(%esp)
087565ec +0x4c:  mov    %edx,(%esp)
087565ef +0x4f:  call   08753f40 <_ZN8TaoCrypt9PublicKeyC1EPKhj>  ; TaoCrypt::PublicKey::PublicKey(unsigned char const*, unsigned int)
087565f4 +0x54:  movzbl -0x1c(%ebp),%eax
087565f8 +0x58:  movl   $0x0,0x10(%esi)
087565ff +0x5f:  movl   $0x0,0x14(%esi)
08756606 +0x66:  movl   $0x0,0x18(%esi)
0875660d +0x6d:  xor    $0x1,%eax
08756610 +0x70:  mov    %al,0x470(%esi)
08756616 +0x76:  mov    %edi,%eax
08756618 +0x78:  test   %al,%al
0875661a +0x7a:  movl   $0x0,0x4c(%esi)
08756621 +0x81:  movb   $0x0,0x50(%esi)
08756625 +0x85:  movb   $0x0,0x250(%esi)
0875662c +0x8c:  je     08756644 <+0xa4>
0875662e +0x8e:  mov    0x1c(%ebp),%eax
08756631 +0x91:  mov    %esi,(%esp)
08756634 +0x94:  mov    %eax,0x8(%esp)
08756638 +0x98:  mov    0x14(%ebp),%eax
0875663b +0x9b:  mov    %eax,0x4(%esp)
0875663f +0x9f:  call   087564e0 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE>  ; TaoCrypt::CertDecoder::Decode(mySTL::list<TaoCrypt::Signer*>*, TaoCrypt::CertDecoder::CertType)
08756644 +0xa4:  mov    -0xc(%ebp),%ebx
08756647 +0xa7:  mov    -0x8(%ebp),%esi
0875664a +0xaa:  mov    -0x4(%ebp),%edi
0875664d +0xad:  mov    %ebp,%esp
0875664f +0xaf:  pop    %ebp
08756650 +0xb0:  ret
08756651 +0xb1:  nop
08756652 +0xb2:  lea    0x0(%esi,%eiz,1),%esi
08756659 +0xb9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::CertDecoder @ 0x87565a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*,
   bool, TaoCrypt::CertDecoder::CertType) */

void __thiscall
TaoCrypt::CertDecoder::CertDecoder
          (CertDecoder *this,undefined4 param_1,char param_2,undefined4 param_3,byte param_4,
          undefined4 param_6)

{
  *(undefined4 *)(this + 4) = param_1;
  *(undefined **)this = PTR_vtable_0936c690 + 8;
  PublicKey::PublicKey((PublicKey *)(this + 8),(uchar *)0x0,0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x470] = (CertDecoder)(param_4 ^ 1);
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (CertDecoder)0x0;
  this[0x250] = (CertDecoder)0x0;
  if (param_2 != '\0') {
    Decode(this,param_3,param_6);
  }
  return;
}
```
