# GetSequence

`_ZN8TaoCrypt11BER_Decoder11GetSequenceEv`

`TaoCrypt::BER_Decoder::GetSequence()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BER_Decoder` | `0x08753790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753790  _ZN8TaoCrypt11BER_Decoder11GetSequenceEv
#           TaoCrypt::BER_Decoder::GetSequence()
# range [0x08753790, 0x087537e9]
08753790 +0x00:  push   %ebp
08753791 +0x01:  mov    %esp,%ebp
08753793 +0x03:  push   %ebx
08753794 +0x04:  sub    $0x14,%esp
08753797 +0x07:  mov    0x8(%ebp),%eax
0875379a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875379f +0x0f:  add    $0xc193f9,%ebx
087537a5 +0x15:  mov    0x4(%eax),%edx
087537a8 +0x18:  xor    %eax,%eax
087537aa +0x1a:  mov    0x10(%edx),%ecx
087537ad +0x1d:  test   %ecx,%ecx
087537af +0x1f:  jne    087537cc <+0x3c>
087537b1 +0x21:  mov    0xc(%edx),%eax
087537b4 +0x24:  lea    0x1(%eax),%ecx
087537b7 +0x27:  mov    %ecx,0xc(%edx)
087537ba +0x2a:  mov    0x4(%edx),%ecx
087537bd +0x2d:  cmpb   $0x30,(%ecx,%eax,1)
087537c1 +0x31:  je     087537d8 <+0x48>
087537c3 +0x33:  movl   $0x3fc,0x10(%edx)
087537ca +0x3a:  xor    %eax,%eax
087537cc +0x3c:  add    $0x14,%esp
087537cf +0x3f:  pop    %ebx
087537d0 +0x40:  pop    %ebp
087537d1 +0x41:  ret
087537d2 +0x42:  lea    0x0(%esi),%esi
087537d8 +0x48:  mov    %edx,(%esp)
087537db +0x4b:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
087537e0 +0x50:  add    $0x14,%esp
087537e3 +0x53:  pop    %ebx
087537e4 +0x54:  pop    %ebp
087537e5 +0x55:  ret
087537e6 +0x56:  lea    0x0(%esi),%esi
087537e9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::BER_Decoder::GetSequence @ 0x8753790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetSequence() */

undefined4 __thiscall TaoCrypt::BER_Decoder::GetSequence(BER_Decoder *this)

{
  Source *pSVar1;
  int iVar2;
  undefined4 uVar3;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '0') {
      uVar3 = GetLength(pSVar1);
      return uVar3;
    }
    *(undefined4 *)(pSVar1 + 0x10) = 0x3fc;
  }
  return 0;
}
```
