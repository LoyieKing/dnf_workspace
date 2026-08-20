# GetSet

`_ZN8TaoCrypt11BER_Decoder6GetSetEv`

`TaoCrypt::BER_Decoder::GetSet()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BER_Decoder` | `0x087537f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087537f0  _ZN8TaoCrypt11BER_Decoder6GetSetEv
#           TaoCrypt::BER_Decoder::GetSet()
# range [0x087537f0, 0x08753849]
087537f0 +0x00:  push   %ebp
087537f1 +0x01:  mov    %esp,%ebp
087537f3 +0x03:  push   %ebx
087537f4 +0x04:  sub    $0x14,%esp
087537f7 +0x07:  mov    0x8(%ebp),%eax
087537fa +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087537ff +0x0f:  add    $0xc19399,%ebx
08753805 +0x15:  mov    0x4(%eax),%edx
08753808 +0x18:  xor    %eax,%eax
0875380a +0x1a:  mov    0x10(%edx),%ecx
0875380d +0x1d:  test   %ecx,%ecx
0875380f +0x1f:  jne    0875382c <+0x3c>
08753811 +0x21:  mov    0xc(%edx),%eax
08753814 +0x24:  lea    0x1(%eax),%ecx
08753817 +0x27:  mov    %ecx,0xc(%edx)
0875381a +0x2a:  mov    0x4(%edx),%ecx
0875381d +0x2d:  cmpb   $0x31,(%ecx,%eax,1)
08753821 +0x31:  je     08753838 <+0x48>
08753823 +0x33:  movl   $0x3fd,0x10(%edx)
0875382a +0x3a:  xor    %eax,%eax
0875382c +0x3c:  add    $0x14,%esp
0875382f +0x3f:  pop    %ebx
08753830 +0x40:  pop    %ebp
08753831 +0x41:  ret
08753832 +0x42:  lea    0x0(%esi),%esi
08753838 +0x48:  mov    %edx,(%esp)
0875383b +0x4b:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08753840 +0x50:  add    $0x14,%esp
08753843 +0x53:  pop    %ebx
08753844 +0x54:  pop    %ebp
08753845 +0x55:  ret
08753846 +0x56:  lea    0x0(%esi),%esi
08753849 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::BER_Decoder::GetSet @ 0x87537f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetSet() */

undefined4 __thiscall TaoCrypt::BER_Decoder::GetSet(BER_Decoder *this)

{
  Source *pSVar1;
  int iVar2;
  undefined4 uVar3;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '1') {
      uVar3 = GetLength(pSVar1);
      return uVar3;
    }
    *(undefined4 *)(pSVar1 + 0x10) = 0x3fd;
  }
  return 0;
}
```
