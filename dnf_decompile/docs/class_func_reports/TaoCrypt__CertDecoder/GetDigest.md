# GetDigest

`_ZN8TaoCrypt11CertDecoder9GetDigestEv`

`TaoCrypt::CertDecoder::GetDigest()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08753ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753ce0  _ZN8TaoCrypt11CertDecoder9GetDigestEv
#           TaoCrypt::CertDecoder::GetDigest()
# range [0x08753ce0, 0x08753d7f]
08753ce0 +0x00:  push   %ebp
08753ce1 +0x01:  xor    %eax,%eax
08753ce3 +0x03:  mov    %esp,%ebp
08753ce5 +0x05:  sub    $0x18,%esp
08753ce8 +0x08:  mov    %esi,-0x4(%ebp)
08753ceb +0x0b:  mov    0x8(%ebp),%esi
08753cee +0x0e:  mov    %ebx,-0x8(%ebp)
08753cf1 +0x11:  call   08722df8 <__i686.get_pc_thunk.bx>
08753cf6 +0x16:  add    $0xc18ea2,%ebx
08753cfc +0x1c:  mov    0x4(%esi),%edx
08753cff +0x1f:  mov    0x10(%edx),%ecx
08753d02 +0x22:  test   %ecx,%ecx
08753d04 +0x24:  jne    08753d21 <+0x41>
08753d06 +0x26:  mov    0xc(%edx),%eax
08753d09 +0x29:  lea    0x1(%eax),%ecx
08753d0c +0x2c:  mov    %ecx,0xc(%edx)
08753d0f +0x2f:  mov    0x4(%edx),%ecx
08753d12 +0x32:  cmpb   $0x4,(%ecx,%eax,1)
08753d16 +0x36:  je     08753d30 <+0x50>
08753d18 +0x38:  movl   $0x405,0x10(%edx)
08753d1f +0x3f:  xor    %eax,%eax
08753d21 +0x41:  mov    -0x8(%ebp),%ebx
08753d24 +0x44:  mov    -0x4(%ebp),%esi
08753d27 +0x47:  mov    %ebp,%esp
08753d29 +0x49:  pop    %ebp
08753d2a +0x4a:  ret
08753d2b +0x4b:  nop
08753d2c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
08753d30 +0x50:  mov    %edx,(%esp)
08753d33 +0x53:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08753d38 +0x58:  mov    %eax,0x18(%esi)
08753d3b +0x5b:  movb   $0x0,0x4(%esp)
08753d40 +0x60:  mov    0x18(%esi),%eax
08753d43 +0x63:  mov    %eax,(%esp)
08753d46 +0x66:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08753d4b +0x6b:  mov    0x4(%esi),%ecx
08753d4e +0x6e:  mov    %eax,0x4c(%esi)
08753d51 +0x71:  mov    0x4(%ecx),%edx
08753d54 +0x74:  add    0xc(%ecx),%edx
08753d57 +0x77:  mov    0x18(%esi),%ecx
08753d5a +0x7a:  mov    %eax,(%esp)
08753d5d +0x7d:  mov    %edx,0x4(%esp)
08753d61 +0x81:  mov    %ecx,0x8(%esp)
08753d65 +0x85:  call   0807d8a0 <_init+0x198>
08753d6a +0x8a:  mov    0x4(%esi),%eax
08753d6d +0x8d:  mov    0x18(%esi),%edx
08753d70 +0x90:  add    %edx,0xc(%eax)
08753d73 +0x93:  mov    0x18(%esi),%eax
08753d76 +0x96:  mov    -0x8(%ebp),%ebx
08753d79 +0x99:  mov    -0x4(%ebp),%esi
08753d7c +0x9c:  mov    %ebp,%esp
08753d7e +0x9e:  pop    %ebp
08753d7f +0x9f:  ret
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetDigest @ 0x8753ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetDigest() */

undefined4 __thiscall TaoCrypt::CertDecoder::GetDigest(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  undefined4 uVar3;
  void *__dest;
  uint in_stack_ffffffe8;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '\x04') {
      uVar3 = GetLength(pSVar1);
      *(undefined4 *)(this + 0x18) = uVar3;
      __dest = operator_new__(*(undefined4 *)(this + 0x18),in_stack_ffffffe8 & 0xffffff00);
      *(void **)(this + 0x4c) = __dest;
      memcpy(__dest,(void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),
             *(size_t *)(this + 0x18));
      *(int *)(*(int *)(this + 4) + 0xc) =
           *(int *)(*(int *)(this + 4) + 0xc) + *(int *)(this + 0x18);
      return *(undefined4 *)(this + 0x18);
    }
    *(undefined4 *)(pSVar1 + 0x10) = 0x405;
  }
  return 0;
}
```
