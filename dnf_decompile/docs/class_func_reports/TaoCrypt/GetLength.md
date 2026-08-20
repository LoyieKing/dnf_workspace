# GetLength

`_ZN8TaoCrypt9GetLengthERNS_6SourceE`

`TaoCrypt::GetLength(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08753700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753700  _ZN8TaoCrypt9GetLengthERNS_6SourceE
#           TaoCrypt::GetLength(TaoCrypt::Source&)
# range [0x08753700, 0x0875376f]
08753700 +0x00:  push   %ebp
08753701 +0x01:  mov    %esp,%ebp
08753703 +0x03:  push   %edi
08753704 +0x04:  push   %esi
08753705 +0x05:  sub    $0xc,%esp
08753708 +0x08:  mov    0x8(%ebp),%esi
0875370b +0x0b:  mov    0xc(%esi),%eax
0875370e +0x0e:  mov    0x4(%esi),%edi
08753711 +0x11:  lea    0x1(%eax),%edx
08753714 +0x14:  mov    %edx,0xc(%esi)
08753717 +0x17:  movzbl (%edi,%eax,1),%ecx
0875371b +0x1b:  test   %cl,%cl
0875371d +0x1d:  movzbl %cl,%eax
08753720 +0x20:  js     08753730 <+0x30>
08753722 +0x22:  add    $0xc,%esp
08753725 +0x25:  pop    %esi
08753726 +0x26:  pop    %edi
08753727 +0x27:  pop    %ebp
08753728 +0x28:  ret
08753729 +0x29:  lea    0x0(%esi,%eiz,1),%esi
08753730 +0x30:  xor    %eax,%eax
08753732 +0x32:  and    $0x7f,%ecx
08753735 +0x35:  je     08753722 <+0x22>
08753737 +0x37:  mov    %edi,-0xc(%ebp)
0875373a +0x3a:  mov    %esi,%edi
0875373c +0x3c:  mov    %esi,-0x10(%ebp)
0875373f +0x3f:  jmp    0875374d <+0x4d>
08753741 +0x41:  lea    0x0(%esi,%eiz,1),%esi
08753748 +0x48:  mov    -0x10(%ebp),%edi
0875374b +0x4b:  mov    %esi,%edx
0875374d +0x4d:  lea    0x1(%edx),%esi
08753750 +0x50:  mov    %esi,0xc(%edi)
08753753 +0x53:  mov    -0xc(%ebp),%edi
08753756 +0x56:  shl    $0x8,%eax
08753759 +0x59:  mov    %eax,-0x14(%ebp)
0875375c +0x5c:  movzbl (%edi,%edx,1),%eax
08753760 +0x60:  or     -0x14(%ebp),%eax
08753763 +0x63:  sub    $0x1,%ecx
08753766 +0x66:  jne    08753748 <+0x48>
08753768 +0x68:  add    $0xc,%esp
0875376b +0x6b:  pop    %esi
0875376c +0x6c:  pop    %edi
0875376d +0x6d:  pop    %ebp
0875376e +0x6e:  ret
0875376f +0x6f:  nop
```

## 反编译 C

```c
// TaoCrypt::GetLength @ 0x8753700

/* TaoCrypt::GetLength(TaoCrypt::Source&) */

void TaoCrypt::GetLength(Source *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = iVar2 + 1;
  *(int *)(param_1 + 0xc) = iVar4;
  bVar1 = *(byte *)(*(int *)(param_1 + 4) + iVar2);
  if (((char)bVar1 < '\0') && (uVar3 = bVar1 & 0x7f, (bVar1 & 0x7f) != 0)) {
    do {
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0xc) = iVar4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return;
  }
  return;
}
```
