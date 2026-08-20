# GetExplicitVersion

`_ZN8TaoCrypt11BER_Decoder18GetExplicitVersionEv`

`TaoCrypt::BER_Decoder::GetExplicitVersion()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BER_Decoder` | `0x087538c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087538c0  _ZN8TaoCrypt11BER_Decoder18GetExplicitVersionEv
#           TaoCrypt::BER_Decoder::GetExplicitVersion()
# range [0x087538c0, 0x08753919]
087538c0 +0x00:  push   %ebp
087538c1 +0x01:  xor    %eax,%eax
087538c3 +0x03:  mov    %esp,%ebp
087538c5 +0x05:  sub    $0x18,%esp
087538c8 +0x08:  mov    0x8(%ebp),%ecx
087538cb +0x0b:  mov    %ebx,-0x8(%ebp)
087538ce +0x0e:  mov    %esi,-0x4(%ebp)
087538d1 +0x11:  call   08722df8 <__i686.get_pc_thunk.bx>
087538d6 +0x16:  add    $0xc192c2,%ebx
087538dc +0x1c:  mov    0x4(%ecx),%edx
087538df +0x1f:  mov    0x10(%edx),%esi
087538e2 +0x22:  test   %esi,%esi
087538e4 +0x24:  jne    087538fe <+0x3e>
087538e6 +0x26:  mov    0xc(%edx),%eax
087538e9 +0x29:  lea    0x1(%eax),%esi
087538ec +0x2c:  mov    %esi,0xc(%edx)
087538ef +0x2f:  mov    0x4(%edx),%esi
087538f2 +0x32:  cmpb   $0xa0,(%esi,%eax,1)
087538f6 +0x36:  je     08753908 <+0x48>
087538f8 +0x38:  subl   $0x1,0xc(%edx)
087538fc +0x3c:  xor    %eax,%eax
087538fe +0x3e:  mov    -0x8(%ebp),%ebx
08753901 +0x41:  mov    -0x4(%ebp),%esi
08753904 +0x44:  mov    %ebp,%esp
08753906 +0x46:  pop    %ebp
08753907 +0x47:  ret
08753908 +0x48:  addl   $0x1,0xc(%edx)
0875390c +0x4c:  mov    %ecx,(%esp)
0875390f +0x4f:  call   08753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>  ; TaoCrypt::BER_Decoder::GetVersion()
08753914 +0x54:  jmp    087538fe <+0x3e>
08753916 +0x56:  lea    0x0(%esi),%esi
08753919 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::BER_Decoder::GetExplicitVersion @ 0x87538c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetExplicitVersion() */

undefined4 __thiscall TaoCrypt::BER_Decoder::GetExplicitVersion(BER_Decoder *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(this + 4);
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(iVar1 + 4) + iVar2) == -0x60) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      uVar3 = GetVersion(this);
    }
    else {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
