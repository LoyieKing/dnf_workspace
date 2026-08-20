# GetAlgoId

`_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv`

`TaoCrypt::CertDecoder::GetAlgoId()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08753a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753a30  _ZN8TaoCrypt11CertDecoder9GetAlgoIdEv
#           TaoCrypt::CertDecoder::GetAlgoId()
# range [0x08753a30, 0x08753b49]
08753a30 +0x000:  push   %ebp
08753a31 +0x001:  xor    %eax,%eax
08753a33 +0x003:  mov    %esp,%ebp
08753a35 +0x005:  sub    $0x48,%esp
08753a38 +0x008:  mov    %esi,-0x8(%ebp)
08753a3b +0x00b:  mov    0x8(%ebp),%esi
08753a3e +0x00e:  mov    %ebx,-0xc(%ebp)
08753a41 +0x011:  mov    %edi,-0x4(%ebp)
08753a44 +0x014:  call   08722df8 <__i686.get_pc_thunk.bx>
08753a49 +0x019:  add    $0xc1914f,%ebx
08753a4f +0x01f:  mov    0x4(%esi),%edx
08753a52 +0x022:  mov    0x10(%edx),%edi
08753a55 +0x025:  test   %edi,%edi
08753a57 +0x027:  je     08753a68 <+0x38>
08753a59 +0x029:  mov    -0xc(%ebp),%ebx
08753a5c +0x02c:  mov    -0x8(%ebp),%esi
08753a5f +0x02f:  mov    -0x4(%ebp),%edi
08753a62 +0x032:  mov    %ebp,%esp
08753a64 +0x034:  pop    %ebp
08753a65 +0x035:  ret
08753a66 +0x036:  xchg   %ax,%ax
08753a68 +0x038:  mov    %esi,(%esp)
08753a6b +0x03b:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08753a70 +0x040:  mov    0x4(%esi),%eax
08753a73 +0x043:  mov    0xc(%eax),%edx
08753a76 +0x046:  lea    0x1(%edx),%ecx
08753a79 +0x049:  mov    %ecx,0xc(%eax)
08753a7c +0x04c:  mov    0x4(%eax),%ecx
08753a7f +0x04f:  cmpb   $0x6,(%ecx,%edx,1)
08753a83 +0x053:  je     08753aa0 <+0x70>
08753a85 +0x055:  movl   $0x402,0x10(%eax)
08753a8c +0x05c:  xor    %eax,%eax
08753a8e +0x05e:  mov    -0xc(%ebp),%ebx
08753a91 +0x061:  mov    -0x8(%ebp),%esi
08753a94 +0x064:  mov    -0x4(%ebp),%edi
08753a97 +0x067:  mov    %ebp,%esp
08753a99 +0x069:  pop    %ebp
08753a9a +0x06a:  ret
08753a9b +0x06b:  nop
08753a9c +0x06c:  lea    0x0(%esi,%eiz,1),%esi
08753aa0 +0x070:  mov    %eax,(%esp)
08753aa3 +0x073:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08753aa8 +0x078:  test   %eax,%eax
08753aaa +0x07a:  mov    %eax,%ecx
08753aac +0x07c:  je     08753b3f <+0x10f>
08753ab2 +0x082:  mov    0x4(%esi),%edi
08753ab5 +0x085:  mov    0x4(%edi),%eax
08753ab8 +0x088:  mov    0xc(%edi),%edx
08753abb +0x08b:  mov    %edi,-0x2c(%ebp)
08753abe +0x08e:  mov    %eax,-0x1c(%ebp)
08753ac1 +0x091:  xor    %eax,%eax
08753ac3 +0x093:  nop
08753ac4 +0x094:  lea    0x0(%esi,%eiz,1),%esi
08753ac8 +0x098:  mov    -0x2c(%ebp),%edi
08753acb +0x09b:  mov    %edx,%esi
08753acd +0x09d:  add    $0x1,%edx
08753ad0 +0x0a0:  mov    %edx,0xc(%edi)
08753ad3 +0x0a3:  mov    -0x1c(%ebp),%edi
08753ad6 +0x0a6:  movzbl (%edi,%esi,1),%esi
08753ada +0x0aa:  add    %esi,%eax
08753adc +0x0ac:  sub    $0x1,%ecx
08753adf +0x0af:  jne    08753ac8 <+0x98>
08753ae1 +0x0b1:  cmp    $0x203,%eax
08753ae6 +0x0b6:  mov    -0x2c(%ebp),%edi
08753ae9 +0x0b9:  je     08753a59 <+0x29>
08753aef +0x0bf:  cmp    $0x205,%eax
08753af4 +0x0c4:  je     08753a59 <+0x29>
08753afa +0x0ca:  mov    0xc(%edi),%edx
08753afd +0x0cd:  lea    0x1(%edx),%ecx
08753b00 +0x0d0:  mov    %ecx,0xc(%edi)
08753b03 +0x0d3:  mov    0x4(%edi),%ecx
08753b06 +0x0d6:  cmpb   $0x5,(%ecx,%edx,1)
08753b0a +0x0da:  je     08753b20 <+0xf0>
08753b0c +0x0dc:  movl   $0x403,0x10(%edi)
08753b13 +0x0e3:  xor    %eax,%eax
08753b15 +0x0e5:  jmp    08753a59 <+0x29>
08753b1a +0x0ea:  lea    0x0(%esi),%esi
08753b20 +0x0f0:  lea    0x2(%edx),%esi
08753b23 +0x0f3:  mov    %esi,0xc(%edi)
08753b26 +0x0f6:  cmpb   $0x0,0x1(%ecx,%edx,1)
08753b2b +0x0fb:  je     08753a59 <+0x29>
08753b31 +0x101:  movl   $0x404,0x10(%edi)
08753b38 +0x108:  xor    %eax,%eax
08753b3a +0x10a:  jmp    08753a59 <+0x29>
08753b3f +0x10f:  xor    %eax,%eax
08753b41 +0x111:  mov    0x4(%esi),%edi
08753b44 +0x114:  jmp    08753afa <+0xca>
08753b46 +0x116:  lea    0x0(%esi),%esi
08753b49 +0x119:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetAlgoId @ 0x8753a30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetAlgoId() */

int __thiscall TaoCrypt::CertDecoder::GetAlgoId(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    pSVar1 = *(Source **)(this + 4);
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\x06') {
      *(undefined4 *)(pSVar1 + 0x10) = 0x402;
      return 0;
    }
    iVar3 = GetLength(pSVar1);
    if (iVar3 == 0) {
      iVar2 = 0;
      iVar5 = *(int *)(this + 4);
    }
    else {
      iVar5 = *(int *)(this + 4);
      iVar2 = 0;
      iVar4 = *(int *)(iVar5 + 0xc);
      do {
        *(int *)(iVar5 + 0xc) = iVar4 + 1;
        iVar2 = iVar2 + (uint)*(byte *)(*(int *)(iVar5 + 4) + iVar4);
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + 1;
      } while (iVar3 != 0);
      if (iVar2 == 0x203) {
        return 0x203;
      }
      if (iVar2 == 0x205) {
        return 0x205;
      }
    }
    iVar3 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 0xc) = iVar3 + 1;
    if (*(char *)(*(int *)(iVar5 + 4) + iVar3) == '\x05') {
      *(int *)(iVar5 + 0xc) = iVar3 + 2;
      if (*(char *)(*(int *)(iVar5 + 4) + 1 + iVar3) != '\0') {
        *(undefined4 *)(iVar5 + 0x10) = 0x404;
        iVar2 = 0;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x10) = 0x403;
      iVar2 = 0;
    }
  }
  return iVar2;
}
```
