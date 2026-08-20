# SetEtcOption

`_ZN11CGameOption12SetEtcOptionER10CETCOption`

`CGameOption::SetEtcOption(CETCOption&)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6df4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6df4  _ZN11CGameOption12SetEtcOptionER10CETCOption
#           CGameOption::SetEtcOption(CETCOption&)
# range [0x084b6df4, 0x084b6e73]
084b6df4 +0x00:  push   %ebp
084b6df5 +0x01:  mov    %esp,%ebp
084b6df7 +0x03:  push   %edi
084b6df8 +0x04:  push   %esi
084b6df9 +0x05:  push   %ebx
084b6dfa +0x06:  mov    0x8(%ebp),%eax
084b6dfd +0x09:  mov    0xc(%ebp),%edx
084b6e00 +0x0c:  add    $0x17a,%eax
084b6e05 +0x11:  mov    $0x48,%ebx
084b6e0a +0x16:  mov    %eax,%ecx
084b6e0c +0x18:  and    $0x1,%ecx
084b6e0f +0x1b:  test   %ecx,%ecx
084b6e11 +0x1d:  je     084b6e21 <+0x2d>
084b6e13 +0x1f:  movzbl (%edx),%ecx
084b6e16 +0x22:  mov    %cl,(%eax)
084b6e18 +0x24:  add    $0x1,%eax
084b6e1b +0x27:  add    $0x1,%edx
084b6e1e +0x2a:  sub    $0x1,%ebx
084b6e21 +0x2d:  mov    %eax,%ecx
084b6e23 +0x2f:  and    $0x2,%ecx
084b6e26 +0x32:  test   %ecx,%ecx
084b6e28 +0x34:  je     084b6e39 <+0x45>
084b6e2a +0x36:  movzwl (%edx),%ecx
084b6e2d +0x39:  mov    %cx,(%eax)
084b6e30 +0x3c:  add    $0x2,%eax
084b6e33 +0x3f:  add    $0x2,%edx
084b6e36 +0x42:  sub    $0x2,%ebx
084b6e39 +0x45:  mov    %ebx,%ecx
084b6e3b +0x47:  shr    $0x2,%ecx
084b6e3e +0x4a:  mov    %eax,%edi
084b6e40 +0x4c:  mov    %edx,%esi
084b6e42 +0x4e:  rep movsl %ds:(%esi),%es:(%edi)
084b6e44 +0x50:  mov    %esi,%edx
084b6e46 +0x52:  mov    %edi,%eax
084b6e48 +0x54:  mov    $0x0,%ecx
084b6e4d +0x59:  mov    %ebx,%esi
084b6e4f +0x5b:  and    $0x2,%esi
084b6e52 +0x5e:  test   %esi,%esi
084b6e54 +0x60:  je     084b6e61 <+0x6d>
084b6e56 +0x62:  movzwl (%edx,%ecx,1),%esi
084b6e5a +0x66:  mov    %si,(%eax,%ecx,1)
084b6e5e +0x6a:  add    $0x2,%ecx
084b6e61 +0x6d:  and    $0x1,%ebx
084b6e64 +0x70:  test   %ebx,%ebx
084b6e66 +0x72:  je     084b6e6f <+0x7b>
084b6e68 +0x74:  movzbl (%edx,%ecx,1),%edx
084b6e6c +0x78:  mov    %dl,(%eax,%ecx,1)
084b6e6f +0x7b:  pop    %ebx
084b6e70 +0x7c:  pop    %esi
084b6e71 +0x7d:  pop    %edi
084b6e72 +0x7e:  pop    %ebp
084b6e73 +0x7f:  ret
```

## 反编译 C

```c
// CGameOption::SetEtcOption @ 0x84b6df4

/* CGameOption::SetEtcOption(CETCOption&) */

void __thiscall CGameOption::SetEtcOption(CGameOption *this,CETCOption *param_1)

{
  CGameOption *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  pCVar1 = this + 0x17a;
  uVar4 = 0x48;
  bVar5 = ((uint)pCVar1 & 1) != 0;
  if (bVar5) {
    *pCVar1 = *(CGameOption *)param_1;
    pCVar1 = this + 0x17b;
    param_1 = param_1 + 1;
    uVar4 = 0x47;
  }
  if (((uint)pCVar1 & 2) != 0) {
    *(undefined2 *)pCVar1 = *(undefined2 *)param_1;
    pCVar1 = pCVar1 + 2;
    param_1 = param_1 + 2;
    uVar4 = uVar4 - 2;
  }
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pCVar1 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar1 = pCVar1 + 4;
  }
  iVar3 = 0;
  if ((uVar4 & 2) != 0) {
    *(undefined2 *)pCVar1 = *(undefined2 *)param_1;
    iVar3 = 2;
  }
  if (bVar5) {
    pCVar1[iVar3] = *(CGameOption *)(param_1 + iVar3);
  }
  return;
}
```
