# AddDSA

`_ZN8TaoCrypt11CertDecoder6AddDSAEv`

`TaoCrypt::CertDecoder::AddDSA()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08754310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754310  _ZN8TaoCrypt11CertDecoder6AddDSAEv
#           TaoCrypt::CertDecoder::AddDSA()
# range [0x08754310, 0x087543c9]
08754310 +0x00:  push   %ebp
08754311 +0x01:  mov    %esp,%ebp
08754313 +0x03:  sub    $0x28,%esp
08754316 +0x06:  mov    %esi,-0x8(%ebp)
08754319 +0x09:  mov    0x8(%ebp),%esi
0875431c +0x0c:  mov    %ebx,-0xc(%ebp)
0875431f +0x0f:  mov    %edi,-0x4(%ebp)
08754322 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08754327 +0x17:  add    $0xc18871,%ebx
0875432d +0x1d:  mov    0x4(%esi),%eax
08754330 +0x20:  mov    0x10(%eax),%edx
08754333 +0x23:  test   %edx,%edx
08754335 +0x25:  jne    08754350 <+0x40>
08754337 +0x27:  mov    0xc(%eax),%edx
0875433a +0x2a:  mov    0x4(%eax),%edi
0875433d +0x2d:  lea    0x1(%edx),%ecx
08754340 +0x30:  mov    %ecx,0xc(%eax)
08754343 +0x33:  cmpb   $0x3,(%edi,%edx,1)
08754347 +0x37:  je     08754360 <+0x50>
08754349 +0x39:  movl   $0x400,0x10(%eax)
08754350 +0x40:  mov    -0xc(%ebp),%ebx
08754353 +0x43:  mov    -0x8(%ebp),%esi
08754356 +0x46:  mov    -0x4(%ebp),%edi
08754359 +0x49:  mov    %ebp,%esp
0875435b +0x4b:  pop    %ebp
0875435c +0x4c:  ret
0875435d +0x4d:  lea    0x0(%esi),%esi
08754360 +0x50:  addl   $0x1,0xc(%eax)
08754364 +0x54:  lea    0x0(%esi,%eiz,1),%esi
08754368 +0x58:  mov    0xc(%eax),%edx
0875436b +0x5b:  lea    0x1(%edx),%ecx
0875436e +0x5e:  mov    %ecx,0xc(%eax)
08754371 +0x61:  cmpb   $0x0,(%edi,%edx,1)
08754375 +0x65:  jne    08754368 <+0x58>
08754377 +0x67:  mov    0xc(%eax),%edi
0875437a +0x6a:  lea    0x1(%edi),%edx
0875437d +0x6d:  mov    %edx,0xc(%eax)
08754380 +0x70:  mov    0x4(%eax),%edx
08754383 +0x73:  cmpb   $0x2,(%edx,%edi,1)
08754387 +0x77:  je     087543a0 <+0x90>
08754389 +0x79:  movl   $0x3f2,0x10(%eax)
08754390 +0x80:  mov    -0xc(%ebp),%ebx
08754393 +0x83:  mov    -0x8(%ebp),%esi
08754396 +0x86:  mov    -0x4(%ebp),%edi
08754399 +0x89:  mov    %ebp,%esp
0875439b +0x8b:  pop    %ebp
0875439c +0x8c:  ret
0875439d +0x8d:  lea    0x0(%esi),%esi
087543a0 +0x90:  mov    %eax,(%esp)
087543a3 +0x93:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
087543a8 +0x98:  mov    0x4(%esi),%edx
087543ab +0x9b:  add    $0x8,%esi
087543ae +0x9e:  sub    %edi,%eax
087543b0 +0xa0:  add    0xc(%edx),%eax
087543b3 +0xa3:  mov    %eax,0x8(%esp)
087543b7 +0xa7:  add    0x4(%edx),%edi
087543ba +0xaa:  mov    %esi,(%esp)
087543bd +0xad:  mov    %edi,0x4(%esp)
087543c1 +0xb1:  call   08754260 <_ZN8TaoCrypt9PublicKey8AddToEndEPKhj>  ; TaoCrypt::PublicKey::AddToEnd(unsigned char const*, unsigned int)
087543c6 +0xb6:  jmp    08754350 <+0x40>
087543c8 +0xb8:  nop
087543c9 +0xb9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::AddDSA @ 0x8754310

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::AddDSA() */

void __thiscall TaoCrypt::CertDecoder::AddDSA(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  int iVar3;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '\x03') {
      *(int *)(pSVar1 + 0xc) = *(int *)(pSVar1 + 0xc) + 1;
      do {
        iVar2 = *(int *)(pSVar1 + 0xc);
        *(int *)(pSVar1 + 0xc) = iVar2 + 1;
      } while (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\0');
      iVar2 = *(int *)(pSVar1 + 0xc);
      *(int *)(pSVar1 + 0xc) = iVar2 + 1;
      if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\x02') {
        *(undefined4 *)(pSVar1 + 0x10) = 0x3f2;
        return;
      }
      iVar3 = GetLength(pSVar1);
      PublicKey::AddToEnd((PublicKey *)(this + 8),
                          (uchar *)(iVar2 + *(int *)(*(int *)(this + 4) + 4)),
                          (iVar3 - iVar2) + *(int *)(*(int *)(this + 4) + 0xc));
    }
    else {
      *(undefined4 *)(pSVar1 + 0x10) = 0x400;
    }
  }
  return;
}
```
