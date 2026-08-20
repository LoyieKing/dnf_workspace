# SetHotKeyOption

`_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption`

`CGameOption::SetHotKeyOption(unsigned char, CHotkeyOption&)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6cf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6cf0  _ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption
#           CGameOption::SetHotKeyOption(unsigned char, CHotkeyOption&)
# range [0x084b6cf0, 0x084b6d9f]
084b6cf0 +0x00:  push   %ebp
084b6cf1 +0x01:  mov    %esp,%ebp
084b6cf3 +0x03:  push   %edi
084b6cf4 +0x04:  push   %esi
084b6cf5 +0x05:  push   %ebx
084b6cf6 +0x06:  sub    $0x4,%esp
084b6cf9 +0x09:  mov    0xc(%ebp),%eax
084b6cfc +0x0c:  mov    %al,-0x10(%ebp)
084b6cff +0x0f:  cmpb   $0x1,-0x10(%ebp)
084b6d03 +0x13:  ja     084b6d97 <+0xa7>
084b6d09 +0x19:  movzbl -0x10(%ebp),%eax
084b6d0d +0x1d:  mov    0x8(%ebp),%ecx
084b6d10 +0x20:  imul   $0xbc,%eax,%eax
084b6d16 +0x26:  mov    0x10(%ebp),%edx
084b6d19 +0x29:  lea    (%ecx,%eax,1),%eax
084b6d1c +0x2c:  mov    $0xbc,%ebx
084b6d21 +0x31:  mov    %eax,%ecx
084b6d23 +0x33:  and    $0x1,%ecx
084b6d26 +0x36:  test   %ecx,%ecx
084b6d28 +0x38:  je     084b6d38 <+0x48>
084b6d2a +0x3a:  movzbl (%edx),%ecx
084b6d2d +0x3d:  mov    %cl,(%eax)
084b6d2f +0x3f:  add    $0x1,%eax
084b6d32 +0x42:  add    $0x1,%edx
084b6d35 +0x45:  sub    $0x1,%ebx
084b6d38 +0x48:  mov    %eax,%ecx
084b6d3a +0x4a:  and    $0x2,%ecx
084b6d3d +0x4d:  test   %ecx,%ecx
084b6d3f +0x4f:  je     084b6d50 <+0x60>
084b6d41 +0x51:  movzwl (%edx),%ecx
084b6d44 +0x54:  mov    %cx,(%eax)
084b6d47 +0x57:  add    $0x2,%eax
084b6d4a +0x5a:  add    $0x2,%edx
084b6d4d +0x5d:  sub    $0x2,%ebx
084b6d50 +0x60:  mov    %ebx,%ecx
084b6d52 +0x62:  shr    $0x2,%ecx
084b6d55 +0x65:  mov    %eax,%edi
084b6d57 +0x67:  mov    %edx,%esi
084b6d59 +0x69:  rep movsl %ds:(%esi),%es:(%edi)
084b6d5b +0x6b:  mov    %esi,%edx
084b6d5d +0x6d:  mov    %edi,%eax
084b6d5f +0x6f:  mov    $0x0,%ecx
084b6d64 +0x74:  mov    %ebx,%esi
084b6d66 +0x76:  and    $0x2,%esi
084b6d69 +0x79:  test   %esi,%esi
084b6d6b +0x7b:  je     084b6d78 <+0x88>
084b6d6d +0x7d:  movzwl (%edx,%ecx,1),%esi
084b6d71 +0x81:  mov    %si,(%eax,%ecx,1)
084b6d75 +0x85:  add    $0x2,%ecx
084b6d78 +0x88:  and    $0x1,%ebx
084b6d7b +0x8b:  test   %ebx,%ebx
084b6d7d +0x8d:  je     084b6d86 <+0x96>
084b6d7f +0x8f:  movzbl (%edx,%ecx,1),%edx
084b6d83 +0x93:  mov    %dl,(%eax,%ecx,1)
084b6d86 +0x96:  movzbl -0x10(%ebp),%eax
084b6d8a +0x9a:  mov    0x8(%ebp),%edx
084b6d8d +0x9d:  movb   $0x1,0x178(%edx,%eax,1)
084b6d95 +0xa5:  jmp    084b6d98 <+0xa8>
084b6d97 +0xa7:  nop
084b6d98 +0xa8:  add    $0x4,%esp
084b6d9b +0xab:  pop    %ebx
084b6d9c +0xac:  pop    %esi
084b6d9d +0xad:  pop    %edi
084b6d9e +0xae:  pop    %ebp
084b6d9f +0xaf:  ret
```

## 反编译 C

```c
// CGameOption::SetHotKeyOption @ 0x84b6cf0

/* CGameOption::SetHotKeyOption(unsigned char, CHotkeyOption&) */

void __thiscall CGameOption::SetHotKeyOption(CGameOption *this,uchar param_1,CHotkeyOption *param_2)

{
  CGameOption *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_1 < 2) {
    pCVar1 = this + (uint)param_1 * 0xbc;
    uVar4 = 0xbc;
    bVar5 = ((uint)pCVar1 & 1) != 0;
    if (bVar5) {
      *pCVar1 = *(CGameOption *)param_2;
      pCVar1 = pCVar1 + 1;
      param_2 = param_2 + 1;
      uVar4 = 0xbb;
    }
    if (((uint)pCVar1 & 2) != 0) {
      *(undefined2 *)pCVar1 = *(undefined2 *)param_2;
      pCVar1 = pCVar1 + 2;
      param_2 = param_2 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pCVar1 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pCVar1 = pCVar1 + 4;
    }
    iVar3 = 0;
    if ((uVar4 & 2) != 0) {
      *(undefined2 *)pCVar1 = *(undefined2 *)param_2;
      iVar3 = 2;
    }
    if (bVar5) {
      pCVar1[iVar3] = *(CGameOption *)(param_2 + iVar3);
    }
    this[param_1 + 0x178] = (CGameOption)0x1;
  }
  return;
}
```
