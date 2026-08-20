# Decode

`_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE`

`TaoCrypt::CertDecoder::Decode(mySTL::list<TaoCrypt::Signer*>*, TaoCrypt::CertDecoder::CertType)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x087564e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087564e0  _ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE
#           TaoCrypt::CertDecoder::Decode(mySTL::list<TaoCrypt::Signer*>*, TaoCrypt::CertDecoder::CertType)
# range [0x087564e0, 0x08756599]
087564e0 +0x00:  push   %ebp
087564e1 +0x01:  mov    %esp,%ebp
087564e3 +0x03:  sub    $0x28,%esp
087564e6 +0x06:  mov    %esi,-0x8(%ebp)
087564e9 +0x09:  mov    0x8(%ebp),%esi
087564ec +0x0c:  mov    %ebx,-0xc(%ebp)
087564ef +0x0f:  mov    %edi,-0x4(%ebp)
087564f2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087564f7 +0x17:  add    $0xc166a1,%ebx
087564fd +0x1d:  mov    0x4(%esi),%eax
08756500 +0x20:  mov    0x10(%eax),%eax
08756503 +0x23:  test   %eax,%eax
08756505 +0x25:  je     08756518 <+0x38>
08756507 +0x27:  mov    -0xc(%ebp),%ebx
0875650a +0x2a:  mov    -0x8(%ebp),%esi
0875650d +0x2d:  mov    -0x4(%ebp),%edi
08756510 +0x30:  mov    %ebp,%esp
08756512 +0x32:  pop    %ebp
08756513 +0x33:  ret
08756514 +0x34:  lea    0x0(%esi,%eiz,1),%esi
08756518 +0x38:  mov    %esi,(%esp)
0875651b +0x3b:  call   087550b0 <_ZN8TaoCrypt11CertDecoder11DecodeToKeyEv>  ; TaoCrypt::CertDecoder::DecodeToKey()
08756520 +0x40:  mov    0x4(%esi),%eax
08756523 +0x43:  mov    0x10(%eax),%edi
08756526 +0x46:  test   %edi,%edi
08756528 +0x48:  jne    08756507 <+0x27>
0875652a +0x4a:  mov    0x14(%esi),%edx
0875652d +0x4d:  cmp    0xc(%eax),%edx
08756530 +0x50:  je     08756535 <+0x55>
08756532 +0x52:  mov    %edx,0xc(%eax)
08756535 +0x55:  mov    %esi,(%esp)
08756538 +0x58:  call   08753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>  ; TaoCrypt::CertDecoder::GetAlgoId()
0875653d +0x5d:  mov    %esi,(%esp)
08756540 +0x60:  mov    %eax,%edi
08756542 +0x62:  call   08753d80 <_ZN8TaoCrypt11CertDecoder12GetSignatureEv>  ; TaoCrypt::CertDecoder::GetSignature()
08756547 +0x67:  mov    0x4(%esi),%eax
0875654a +0x6a:  mov    0x10(%eax),%ecx
0875654d +0x6d:  test   %ecx,%ecx
0875654f +0x6f:  jne    08756507 <+0x27>
08756551 +0x71:  cmp    0x1c(%esi),%edi
08756554 +0x74:  je     08756560 <+0x80>
08756556 +0x76:  movl   $0x3ff,0x10(%eax)
0875655d +0x7d:  jmp    08756507 <+0x27>
0875655f +0x7f:  nop
08756560 +0x80:  mov    0x10(%ebp),%edx
08756563 +0x83:  test   %edx,%edx
08756565 +0x85:  je     08756507 <+0x27>
08756567 +0x87:  cmpb   $0x0,0x470(%esi)
0875656e +0x8e:  je     08756507 <+0x27>
08756570 +0x90:  mov    0xc(%ebp),%eax
08756573 +0x93:  mov    %esi,(%esp)
08756576 +0x96:  mov    %eax,0x4(%esp)
0875657a +0x9a:  call   087563f0 <_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE>  ; TaoCrypt::CertDecoder::ValidateSignature(mySTL::list<TaoCrypt::Signer*>*)
0875657f +0x9f:  test   %al,%al
08756581 +0xa1:  jne    08756507 <+0x27>
08756583 +0xa3:  mov    0x4(%esi),%eax
08756586 +0xa6:  movl   $0x40f,0x10(%eax)
0875658d +0xad:  jmp    08756507 <+0x27>
08756592 +0xb2:  lea    0x0(%esi,%eiz,1),%esi
08756599 +0xb9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::Decode @ 0x87564e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::Decode(mySTL::list<TaoCrypt::Signer*>*, TaoCrypt::CertDecoder::CertType)
    */

void __thiscall TaoCrypt::CertDecoder::Decode(CertDecoder *this,list *param_1,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    DecodeToKey(this);
    iVar2 = *(int *)(this + 4);
    if (*(int *)(iVar2 + 0x10) == 0) {
      if (*(int *)(this + 0x14) != *(int *)(iVar2 + 0xc)) {
        *(int *)(iVar2 + 0xc) = *(int *)(this + 0x14);
      }
      iVar2 = GetAlgoId(this);
      GetSignature(this);
      if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
        if (iVar2 == *(int *)(this + 0x1c)) {
          if ((param_3 != 0) && (this[0x470] != (CertDecoder)0x0)) {
            cVar1 = ValidateSignature(this,param_1);
            if (cVar1 == '\0') {
              *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x40f;
            }
          }
        }
        else {
          *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x3ff;
        }
      }
    }
  }
  return;
}
```
