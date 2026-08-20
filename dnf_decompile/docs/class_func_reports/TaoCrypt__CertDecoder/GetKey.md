# GetKey

`_ZN8TaoCrypt11CertDecoder6GetKeyEv`

`TaoCrypt::CertDecoder::GetKey()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x087543d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087543d0  _ZN8TaoCrypt11CertDecoder6GetKeyEv
#           TaoCrypt::CertDecoder::GetKey()
# range [0x087543d0, 0x0875449a]
087543d0 +0x00:  push   %ebp
087543d1 +0x01:  mov    %esp,%ebp
087543d3 +0x03:  sub    $0x28,%esp
087543d6 +0x06:  mov    %esi,-0x8(%ebp)
087543d9 +0x09:  mov    0x8(%ebp),%esi
087543dc +0x0c:  mov    %ebx,-0xc(%ebp)
087543df +0x0f:  mov    %edi,-0x4(%ebp)
087543e2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087543e7 +0x17:  add    $0xc187b1,%ebx
087543ed +0x1d:  mov    0x4(%esi),%eax
087543f0 +0x20:  mov    0x10(%eax),%ecx
087543f3 +0x23:  test   %ecx,%ecx
087543f5 +0x25:  je     08754408 <+0x38>
087543f7 +0x27:  mov    -0xc(%ebp),%ebx
087543fa +0x2a:  mov    -0x8(%ebp),%esi
087543fd +0x2d:  mov    -0x4(%ebp),%edi
08754400 +0x30:  mov    %ebp,%esp
08754402 +0x32:  pop    %ebp
08754403 +0x33:  ret
08754404 +0x34:  lea    0x0(%esi,%eiz,1),%esi
08754408 +0x38:  mov    %esi,(%esp)
0875440b +0x3b:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08754410 +0x40:  mov    %esi,(%esp)
08754413 +0x43:  call   08753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>  ; TaoCrypt::CertDecoder::GetAlgoId()
08754418 +0x48:  cmp    $0x285,%eax
0875441d +0x4d:  mov    %eax,0x20(%esi)
08754420 +0x50:  je     08754478 <+0xa8>
08754422 +0x52:  cmp    $0x203,%eax
08754427 +0x57:  je     08754457 <+0x87>
08754429 +0x59:  mov    0x4(%esi),%eax
0875442c +0x5c:  movl   $0x401,0x10(%eax)
08754433 +0x63:  mov    -0xc(%ebp),%ebx
08754436 +0x66:  mov    -0x8(%ebp),%esi
08754439 +0x69:  mov    -0x4(%ebp),%edi
0875443c +0x6c:  mov    %ebp,%esp
0875443e +0x6e:  pop    %ebp
0875443f +0x6f:  ret
08754440 +0x70:  addl   $0x1,0xc(%eax)
08754444 +0x74:  lea    0x0(%esi,%eiz,1),%esi
08754448 +0x78:  mov    0xc(%eax),%edx
0875444b +0x7b:  lea    0x1(%edx),%ecx
0875444e +0x7e:  mov    %ecx,0xc(%eax)
08754451 +0x81:  cmpb   $0x0,(%edi,%edx,1)
08754455 +0x85:  jne    08754448 <+0x78>
08754457 +0x87:  mov    %esi,(%esp)
0875445a +0x8a:  call   08753e90 <_ZN8TaoCrypt11CertDecoder8StoreKeyEv>  ; TaoCrypt::CertDecoder::StoreKey()
0875445f +0x8f:  cmpl   $0x203,0x20(%esi)
08754466 +0x96:  jne    087543f7 <+0x27>
08754468 +0x98:  mov    %esi,(%esp)
0875446b +0x9b:  call   08754310 <_ZN8TaoCrypt11CertDecoder6AddDSAEv>  ; TaoCrypt::CertDecoder::AddDSA()
08754470 +0xa0:  jmp    087543f7 <+0x27>
08754472 +0xa2:  lea    0x0(%esi),%esi
08754478 +0xa8:  mov    0x4(%esi),%eax
0875447b +0xab:  mov    0xc(%eax),%edx
0875447e +0xae:  mov    0x4(%eax),%edi
08754481 +0xb1:  lea    0x1(%edx),%ecx
08754484 +0xb4:  mov    %ecx,0xc(%eax)
08754487 +0xb7:  cmpb   $0x3,(%edi,%edx,1)
0875448b +0xbb:  je     08754440 <+0x70>
0875448d +0xbd:  movl   $0x400,0x10(%eax)
08754494 +0xc4:  jmp    087543f7 <+0x27>
08754499 +0xc9:  nop
0875449a +0xca:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetKey @ 0x87543d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetKey() */

void __thiscall TaoCrypt::CertDecoder::GetKey(CertDecoder *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    iVar2 = GetAlgoId(this);
    *(int *)(this + 0x20) = iVar2;
    if (iVar2 == 0x285) {
      iVar2 = *(int *)(this + 4);
      iVar1 = *(int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar1 + 1;
      if (*(char *)(*(int *)(iVar2 + 4) + iVar1) != '\x03') {
        *(undefined4 *)(iVar2 + 0x10) = 0x400;
        return;
      }
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      do {
        iVar1 = *(int *)(iVar2 + 0xc);
        *(int *)(iVar2 + 0xc) = iVar1 + 1;
      } while (*(char *)(*(int *)(iVar2 + 4) + iVar1) != '\0');
    }
    else if (iVar2 != 0x203) {
      *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x401;
      return;
    }
    StoreKey(this);
    if (*(int *)(this + 0x20) == 0x203) {
      AddDSA(this);
    }
  }
  return;
}
```
