# CopyQuickChatting

`_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj`

`CGameOption::CopyQuickChatting(CQuickChattingOption&, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6fe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6fe0  _ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj
#           CGameOption::CopyQuickChatting(CQuickChattingOption&, unsigned int)
# range [0x084b6fe0, 0x084b707f]
084b6fe0 +0x00:  push   %ebp
084b6fe1 +0x01:  mov    %esp,%ebp
084b6fe3 +0x03:  push   %edi
084b6fe4 +0x04:  push   %esi
084b6fe5 +0x05:  push   %ebx
084b6fe6 +0x06:  cmpl   $0x0,0x10(%ebp)
084b6fea +0x0a:  je     084b6ff6 <+0x16>
084b6fec +0x0c:  cmpl   $0x1,0x10(%ebp)
084b6ff0 +0x10:  jne    084b707b <+0x9b>
084b6ff6 +0x16:  mov    0x10(%ebp),%edx
084b6ff9 +0x19:  mov    0xc(%ebp),%eax
084b6ffc +0x1c:  mov    0x8(%ebp),%ecx
084b6fff +0x1f:  imul   $0x12c,%edx,%edx
084b7005 +0x25:  lea    (%ecx,%edx,1),%edx
084b7008 +0x28:  add    $0x1c0,%edx
084b700e +0x2e:  add    $0x2,%edx
084b7011 +0x31:  mov    $0x12c,%ebx
084b7016 +0x36:  mov    %eax,%ecx
084b7018 +0x38:  and    $0x1,%ecx
084b701b +0x3b:  test   %ecx,%ecx
084b701d +0x3d:  je     084b702d <+0x4d>
084b701f +0x3f:  movzbl (%edx),%ecx
084b7022 +0x42:  mov    %cl,(%eax)
084b7024 +0x44:  add    $0x1,%eax
084b7027 +0x47:  add    $0x1,%edx
084b702a +0x4a:  sub    $0x1,%ebx
084b702d +0x4d:  mov    %eax,%ecx
084b702f +0x4f:  and    $0x2,%ecx
084b7032 +0x52:  test   %ecx,%ecx
084b7034 +0x54:  je     084b7045 <+0x65>
084b7036 +0x56:  movzwl (%edx),%ecx
084b7039 +0x59:  mov    %cx,(%eax)
084b703c +0x5c:  add    $0x2,%eax
084b703f +0x5f:  add    $0x2,%edx
084b7042 +0x62:  sub    $0x2,%ebx
084b7045 +0x65:  mov    %ebx,%ecx
084b7047 +0x67:  shr    $0x2,%ecx
084b704a +0x6a:  mov    %eax,%edi
084b704c +0x6c:  mov    %edx,%esi
084b704e +0x6e:  rep movsl %ds:(%esi),%es:(%edi)
084b7050 +0x70:  mov    %esi,%edx
084b7052 +0x72:  mov    %edi,%eax
084b7054 +0x74:  mov    $0x0,%ecx
084b7059 +0x79:  mov    %ebx,%esi
084b705b +0x7b:  and    $0x2,%esi
084b705e +0x7e:  test   %esi,%esi
084b7060 +0x80:  je     084b706d <+0x8d>
084b7062 +0x82:  movzwl (%edx,%ecx,1),%esi
084b7066 +0x86:  mov    %si,(%eax,%ecx,1)
084b706a +0x8a:  add    $0x2,%ecx
084b706d +0x8d:  and    $0x1,%ebx
084b7070 +0x90:  test   %ebx,%ebx
084b7072 +0x92:  je     084b707b <+0x9b>
084b7074 +0x94:  movzbl (%edx,%ecx,1),%edx
084b7078 +0x98:  mov    %dl,(%eax,%ecx,1)
084b707b +0x9b:  pop    %ebx
084b707c +0x9c:  pop    %esi
084b707d +0x9d:  pop    %edi
084b707e +0x9e:  pop    %ebp
084b707f +0x9f:  ret
```

## 反编译 C

```c
// CGameOption::CopyQuickChatting @ 0x84b6fe0

/* CGameOption::CopyQuickChatting(CQuickChattingOption&, unsigned int) */

void __thiscall
CGameOption::CopyQuickChatting(CGameOption *this,CQuickChattingOption *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CGameOption *pCVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    pCVar3 = this + param_2 * 300 + 0x1c2;
    uVar4 = 300;
    bVar5 = ((uint)param_1 & 1) != 0;
    if (bVar5) {
      *param_1 = (CQuickChattingOption)*pCVar3;
      param_1 = param_1 + 1;
      pCVar3 = this + param_2 * 300 + 0x1c3;
      uVar4 = 299;
    }
    if (((uint)param_1 & 2) != 0) {
      *(undefined2 *)param_1 = *(undefined2 *)pCVar3;
      param_1 = param_1 + 2;
      pCVar3 = pCVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pCVar3;
      pCVar3 = pCVar3 + 4;
      param_1 = param_1 + 4;
    }
    iVar2 = 0;
    if ((uVar4 & 2) != 0) {
      *(undefined2 *)param_1 = *(undefined2 *)pCVar3;
      iVar2 = 2;
    }
    if (bVar5) {
      *(CGameOption *)(param_1 + iVar2) = pCVar3[iVar2];
    }
  }
  return;
}
```
