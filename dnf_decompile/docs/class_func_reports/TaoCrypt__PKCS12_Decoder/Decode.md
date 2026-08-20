# Decode

`_ZN8TaoCrypt14PKCS12_Decoder6DecodeEv`

`TaoCrypt::PKCS12_Decoder::Decode()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PKCS12_Decoder` | `0x08753b50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753b50  _ZN8TaoCrypt14PKCS12_Decoder6DecodeEv
#           TaoCrypt::PKCS12_Decoder::Decode()
# range [0x08753b50, 0x08753bcc]
08753b50 +0x00:  push   %ebp
08753b51 +0x01:  mov    %esp,%ebp
08753b53 +0x03:  sub    $0x18,%esp
08753b56 +0x06:  mov    %esi,-0x4(%ebp)
08753b59 +0x09:  mov    0x8(%ebp),%esi
08753b5c +0x0c:  mov    %ebx,-0x8(%ebp)
08753b5f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08753b64 +0x14:  add    $0xc19034,%ebx
08753b6a +0x1a:  mov    (%esi),%eax
08753b6c +0x1c:  mov    %esi,(%esp)
08753b6f +0x1f:  call   *0x8(%eax)
08753b72 +0x22:  mov    0x4(%esi),%eax
08753b75 +0x25:  mov    0x10(%eax),%eax
08753b78 +0x28:  test   %eax,%eax
08753b7a +0x2a:  je     08753b88 <+0x38>
08753b7c +0x2c:  mov    -0x8(%ebp),%ebx
08753b7f +0x2f:  mov    -0x4(%ebp),%esi
08753b82 +0x32:  mov    %ebp,%esp
08753b84 +0x34:  pop    %ebp
08753b85 +0x35:  ret
08753b86 +0x36:  xchg   %ax,%ax
08753b88 +0x38:  mov    %esi,(%esp)
08753b8b +0x3b:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08753b90 +0x40:  mov    0x4(%esi),%eax
08753b93 +0x43:  mov    0xc(%eax),%edx
08753b96 +0x46:  lea    0x1(%edx),%ecx
08753b99 +0x49:  mov    %ecx,0xc(%eax)
08753b9c +0x4c:  mov    0x4(%eax),%ecx
08753b9f +0x4f:  cmpb   $0x6,(%ecx,%edx,1)
08753ba3 +0x53:  je     08753bb8 <+0x68>
08753ba5 +0x55:  movl   $0x402,0x10(%eax)
08753bac +0x5c:  mov    -0x8(%ebp),%ebx
08753baf +0x5f:  mov    -0x4(%ebp),%esi
08753bb2 +0x62:  mov    %ebp,%esp
08753bb4 +0x64:  pop    %ebp
08753bb5 +0x65:  ret
08753bb6 +0x66:  xchg   %ax,%ax
08753bb8 +0x68:  mov    %eax,(%esp)
08753bbb +0x6b:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08753bc0 +0x70:  test   %eax,%eax
08753bc2 +0x72:  je     08753b7c <+0x2c>
08753bc4 +0x74:  mov    0x4(%esi),%edx
08753bc7 +0x77:  add    %eax,0xc(%edx)
08753bca +0x7a:  jmp    08753b7c <+0x2c>
08753bcc +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::PKCS12_Decoder::Decode @ 0x8753b50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PKCS12_Decoder::Decode() */

void __thiscall TaoCrypt::PKCS12_Decoder::Decode(PKCS12_Decoder *this)

{
  Source *pSVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    pSVar1 = *(Source **)(this + 4);
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\x06') {
      *(undefined4 *)(pSVar1 + 0x10) = 0x402;
      return;
    }
    iVar2 = GetLength(pSVar1);
    if (iVar2 != 0) {
      *(int *)(*(int *)(this + 4) + 0xc) = *(int *)(*(int *)(this + 4) + 0xc) + iVar2;
    }
  }
  return;
}
```
