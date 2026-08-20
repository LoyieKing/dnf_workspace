# GetVersion

`_ZN8TaoCrypt11BER_Decoder10GetVersionEv`

`TaoCrypt::BER_Decoder::GetVersion()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BER_Decoder` | `0x08753850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753850  _ZN8TaoCrypt11BER_Decoder10GetVersionEv
#           TaoCrypt::BER_Decoder::GetVersion()
# range [0x08753850, 0x087538b9]
08753850 +0x00:  push   %ebp
08753851 +0x01:  mov    %esp,%ebp
08753853 +0x03:  mov    0x8(%ebp),%eax
08753856 +0x06:  push   %esi
08753857 +0x07:  mov    0x4(%eax),%edx
0875385a +0x0a:  xor    %eax,%eax
0875385c +0x0c:  mov    0x10(%edx),%esi
0875385f +0x0f:  test   %esi,%esi
08753861 +0x11:  jne    0875387e <+0x2e>
08753863 +0x13:  mov    0xc(%edx),%eax
08753866 +0x16:  lea    0x1(%eax),%ecx
08753869 +0x19:  mov    %ecx,0xc(%edx)
0875386c +0x1c:  mov    0x4(%edx),%ecx
0875386f +0x1f:  cmpb   $0x2,(%ecx,%eax,1)
08753873 +0x23:  je     08753888 <+0x38>
08753875 +0x25:  movl   $0x3f2,0x10(%edx)
0875387c +0x2c:  xor    %eax,%eax
0875387e +0x2e:  pop    %esi
0875387f +0x2f:  pop    %ebp
08753880 +0x30:  ret
08753881 +0x31:  lea    0x0(%esi,%eiz,1),%esi
08753888 +0x38:  lea    0x2(%eax),%esi
0875388b +0x3b:  mov    %esi,0xc(%edx)
0875388e +0x3e:  cmpb   $0x1,0x1(%ecx,%eax,1)
08753893 +0x43:  je     087538a8 <+0x58>
08753895 +0x45:  movl   $0x3fe,0x10(%edx)
0875389c +0x4c:  xor    %eax,%eax
0875389e +0x4e:  pop    %esi
0875389f +0x4f:  pop    %ebp
087538a0 +0x50:  ret
087538a1 +0x51:  lea    0x0(%esi,%eiz,1),%esi
087538a8 +0x58:  lea    0x3(%eax),%esi
087538ab +0x5b:  mov    %esi,0xc(%edx)
087538ae +0x5e:  movzbl 0x2(%ecx,%eax,1),%eax
087538b3 +0x63:  jmp    0875387e <+0x2e>
087538b5 +0x65:  nop
087538b6 +0x66:  lea    0x0(%esi),%esi
087538b9 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::BER_Decoder::GetVersion @ 0x8753850

/* TaoCrypt::BER_Decoder::GetVersion() */

undefined1 __thiscall TaoCrypt::BER_Decoder::GetVersion(BER_Decoder *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar1 = *(int *)(this + 4);
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar2 + 1;
    iVar3 = *(int *)(iVar1 + 4);
    if (*(char *)(iVar3 + iVar2) == '\x02') {
      *(int *)(iVar1 + 0xc) = iVar2 + 2;
      if (*(char *)(iVar3 + 1 + iVar2) != '\x01') {
        *(undefined4 *)(iVar1 + 0x10) = 0x3fe;
        return 0;
      }
      *(int *)(iVar1 + 0xc) = iVar2 + 3;
      uVar4 = *(undefined1 *)(iVar3 + 2 + iVar2);
    }
    else {
      *(undefined4 *)(iVar1 + 0x10) = 0x3f2;
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
