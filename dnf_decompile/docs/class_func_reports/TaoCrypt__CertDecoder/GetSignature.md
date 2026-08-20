# GetSignature

`_ZN8TaoCrypt11CertDecoder12GetSignatureEv`

`TaoCrypt::CertDecoder::GetSignature()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08753d80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753d80  _ZN8TaoCrypt11CertDecoder12GetSignatureEv
#           TaoCrypt::CertDecoder::GetSignature()
# range [0x08753d80, 0x08753e49]
08753d80 +0x00:  push   %ebp
08753d81 +0x01:  xor    %eax,%eax
08753d83 +0x03:  mov    %esp,%ebp
08753d85 +0x05:  sub    $0x18,%esp
08753d88 +0x08:  mov    %esi,-0x4(%ebp)
08753d8b +0x0b:  mov    0x8(%ebp),%esi
08753d8e +0x0e:  mov    %ebx,-0x8(%ebp)
08753d91 +0x11:  call   08722df8 <__i686.get_pc_thunk.bx>
08753d96 +0x16:  add    $0xc18e02,%ebx
08753d9c +0x1c:  mov    0x4(%esi),%edx
08753d9f +0x1f:  mov    0x10(%edx),%ecx
08753da2 +0x22:  test   %ecx,%ecx
08753da4 +0x24:  jne    08753dc1 <+0x41>
08753da6 +0x26:  mov    0xc(%edx),%eax
08753da9 +0x29:  lea    0x1(%eax),%ecx
08753dac +0x2c:  mov    %ecx,0xc(%edx)
08753daf +0x2f:  mov    0x4(%edx),%ecx
08753db2 +0x32:  cmpb   $0x3,(%ecx,%eax,1)
08753db6 +0x36:  je     08753dd0 <+0x50>
08753db8 +0x38:  movl   $0x400,0x10(%edx)
08753dbf +0x3f:  xor    %eax,%eax
08753dc1 +0x41:  mov    -0x8(%ebp),%ebx
08753dc4 +0x44:  mov    -0x4(%ebp),%esi
08753dc7 +0x47:  mov    %ebp,%esp
08753dc9 +0x49:  pop    %ebp
08753dca +0x4a:  ret
08753dcb +0x4b:  nop
08753dcc +0x4c:  lea    0x0(%esi,%eiz,1),%esi
08753dd0 +0x50:  mov    %edx,(%esp)
08753dd3 +0x53:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08753dd8 +0x58:  mov    %eax,0x18(%esi)
08753ddb +0x5b:  mov    0x4(%esi),%eax
08753dde +0x5e:  mov    0xc(%eax),%edx
08753de1 +0x61:  lea    0x1(%edx),%ecx
08753de4 +0x64:  mov    %ecx,0xc(%eax)
08753de7 +0x67:  mov    0x4(%eax),%ecx
08753dea +0x6a:  cmpb   $0x0,(%ecx,%edx,1)
08753dee +0x6e:  je     08753e00 <+0x80>
08753df0 +0x70:  movl   $0x404,0x10(%eax)
08753df7 +0x77:  xor    %eax,%eax
08753df9 +0x79:  jmp    08753dc1 <+0x41>
08753dfb +0x7b:  nop
08753dfc +0x7c:  lea    0x0(%esi,%eiz,1),%esi
08753e00 +0x80:  subl   $0x1,0x18(%esi)
08753e04 +0x84:  movb   $0x0,0x4(%esp)
08753e09 +0x89:  mov    0x18(%esi),%eax
08753e0c +0x8c:  mov    %eax,(%esp)
08753e0f +0x8f:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08753e14 +0x94:  mov    0x4(%esi),%ecx
08753e17 +0x97:  mov    %eax,0x4c(%esi)
08753e1a +0x9a:  mov    0x4(%ecx),%edx
08753e1d +0x9d:  add    0xc(%ecx),%edx
08753e20 +0xa0:  mov    0x18(%esi),%ecx
08753e23 +0xa3:  mov    %eax,(%esp)
08753e26 +0xa6:  mov    %edx,0x4(%esp)
08753e2a +0xaa:  mov    %ecx,0x8(%esp)
08753e2e +0xae:  call   0807d8a0 <_init+0x198>
08753e33 +0xb3:  mov    0x4(%esi),%eax
08753e36 +0xb6:  mov    0x18(%esi),%edx
08753e39 +0xb9:  add    %edx,0xc(%eax)
08753e3c +0xbc:  mov    0x18(%esi),%eax
08753e3f +0xbf:  jmp    08753dc1 <+0x41>
08753e41 +0xc1:  nop
08753e42 +0xc2:  lea    0x0(%esi,%eiz,1),%esi
08753e49 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetSignature @ 0x8753d80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetSignature() */

undefined4 __thiscall TaoCrypt::CertDecoder::GetSignature(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *__dest;
  uint in_stack_ffffffe8;
  
  uVar4 = 0;
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '\x03') {
      uVar4 = GetLength(pSVar1);
      *(undefined4 *)(this + 0x18) = uVar4;
      iVar2 = *(int *)(this + 4);
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar3 + 1;
      if (*(char *)(*(int *)(iVar2 + 4) + iVar3) == '\0') {
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
        __dest = operator_new__(*(undefined4 *)(this + 0x18),in_stack_ffffffe8 & 0xffffff00);
        *(void **)(this + 0x4c) = __dest;
        memcpy(__dest,(void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)
                              ),*(size_t *)(this + 0x18));
        *(int *)(*(int *)(this + 4) + 0xc) =
             *(int *)(*(int *)(this + 4) + 0xc) + *(int *)(this + 0x18);
        uVar4 = *(undefined4 *)(this + 0x18);
      }
      else {
        *(undefined4 *)(iVar2 + 0x10) = 0x404;
        uVar4 = 0;
      }
    }
    else {
      *(undefined4 *)(pSVar1 + 0x10) = 0x400;
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
