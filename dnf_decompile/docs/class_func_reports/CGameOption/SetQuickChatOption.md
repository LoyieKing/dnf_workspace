# SetQuickChatOption

`_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj`

`CGameOption::SetQuickChatOption(CQuickChattingOption const&, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6e74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6e74  _ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj
#           CGameOption::SetQuickChatOption(CQuickChattingOption const&, unsigned int)
# range [0x084b6e74, 0x084b6f45]
084b6e74 +0x00:  push   %ebp
084b6e75 +0x01:  mov    %esp,%ebp
084b6e77 +0x03:  push   %edi
084b6e78 +0x04:  push   %esi
084b6e79 +0x05:  push   %ebx
084b6e7a +0x06:  sub    $0x1c,%esp
084b6e7d +0x09:  mov    0x10(%ebp),%eax
084b6e80 +0x0c:  mov    %eax,0x8(%esp)
084b6e84 +0x10:  mov    0xc(%ebp),%eax
084b6e87 +0x13:  mov    %eax,0x4(%esp)
084b6e8b +0x17:  mov    0x8(%ebp),%eax
084b6e8e +0x1a:  mov    %eax,(%esp)
084b6e91 +0x1d:  call   084b6f84 <_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj>  ; CGameOption::IsQuickChatOptionChanged(CQuickChattingOption const&, unsigned int)
084b6e96 +0x22:  test   %al,%al
084b6e98 +0x24:  je     084b6f3d <+0xc9>
084b6e9e +0x2a:  mov    0x8(%ebp),%eax
084b6ea1 +0x2d:  mov    %eax,(%esp)
084b6ea4 +0x30:  call   084b737c <_GLOBAL__I__ZN11CGameOptionC2Ev+0x62>  ; global constructors keyed to CGameOption::CGameOption()+0x62
084b6ea9 +0x35:  cmpl   $0x0,0x10(%ebp)
084b6ead +0x39:  je     084b6eb9 <+0x45>
084b6eaf +0x3b:  cmpl   $0x1,0x10(%ebp)
084b6eb3 +0x3f:  jne    084b6f3d <+0xc9>
084b6eb9 +0x45:  mov    0x10(%ebp),%eax
084b6ebc +0x48:  mov    0x8(%ebp),%edx
084b6ebf +0x4b:  imul   $0x12c,%eax,%eax
084b6ec5 +0x51:  lea    (%edx,%eax,1),%eax
084b6ec8 +0x54:  add    $0x1c0,%eax
084b6ecd +0x59:  mov    0xc(%ebp),%edx
084b6ed0 +0x5c:  add    $0x2,%eax
084b6ed3 +0x5f:  mov    $0x12c,%ebx
084b6ed8 +0x64:  mov    %eax,%ecx
084b6eda +0x66:  and    $0x1,%ecx
084b6edd +0x69:  test   %ecx,%ecx
084b6edf +0x6b:  je     084b6eef <+0x7b>
084b6ee1 +0x6d:  movzbl (%edx),%ecx
084b6ee4 +0x70:  mov    %cl,(%eax)
084b6ee6 +0x72:  add    $0x1,%eax
084b6ee9 +0x75:  add    $0x1,%edx
084b6eec +0x78:  sub    $0x1,%ebx
084b6eef +0x7b:  mov    %eax,%ecx
084b6ef1 +0x7d:  and    $0x2,%ecx
084b6ef4 +0x80:  test   %ecx,%ecx
084b6ef6 +0x82:  je     084b6f07 <+0x93>
084b6ef8 +0x84:  movzwl (%edx),%ecx
084b6efb +0x87:  mov    %cx,(%eax)
084b6efe +0x8a:  add    $0x2,%eax
084b6f01 +0x8d:  add    $0x2,%edx
084b6f04 +0x90:  sub    $0x2,%ebx
084b6f07 +0x93:  mov    %ebx,%ecx
084b6f09 +0x95:  shr    $0x2,%ecx
084b6f0c +0x98:  mov    %eax,%edi
084b6f0e +0x9a:  mov    %edx,%esi
084b6f10 +0x9c:  rep movsl %ds:(%esi),%es:(%edi)
084b6f12 +0x9e:  mov    %esi,%edx
084b6f14 +0xa0:  mov    %edi,%eax
084b6f16 +0xa2:  mov    $0x0,%ecx
084b6f1b +0xa7:  mov    %ebx,%esi
084b6f1d +0xa9:  and    $0x2,%esi
084b6f20 +0xac:  test   %esi,%esi
084b6f22 +0xae:  je     084b6f2f <+0xbb>
084b6f24 +0xb0:  movzwl (%edx,%ecx,1),%esi
084b6f28 +0xb4:  mov    %si,(%eax,%ecx,1)
084b6f2c +0xb8:  add    $0x2,%ecx
084b6f2f +0xbb:  and    $0x1,%ebx
084b6f32 +0xbe:  test   %ebx,%ebx
084b6f34 +0xc0:  je     084b6f3d <+0xc9>
084b6f36 +0xc2:  movzbl (%edx,%ecx,1),%edx
084b6f3a +0xc6:  mov    %dl,(%eax,%ecx,1)
084b6f3d +0xc9:  add    $0x1c,%esp
084b6f40 +0xcc:  pop    %ebx
084b6f41 +0xcd:  pop    %esi
084b6f42 +0xce:  pop    %edi
084b6f43 +0xcf:  pop    %ebp
084b6f44 +0xd0:  ret
084b6f45 +0xd1:  nop
```

## 反编译 C

```c
// CGameOption::SetQuickChatOption @ 0x84b6e74

/* CGameOption::SetQuickChatOption(CQuickChattingOption const&, unsigned int) */

void __thiscall
CGameOption::SetQuickChatOption(CGameOption *this,CQuickChattingOption *param_1,uint param_2)

{
  char cVar1;
  CGameOption *pCVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  cVar1 = IsQuickChatOptionChanged(this,param_1,param_2);
  if (cVar1 != '\0') {
    setFlag_QuickChatChange(this);
    if ((param_2 == 0) || (param_2 == 1)) {
      pCVar2 = this + param_2 * 300 + 0x1c2;
      uVar5 = 300;
      bVar6 = ((uint)pCVar2 & 1) != 0;
      if (bVar6) {
        *pCVar2 = *(CGameOption *)param_1;
        pCVar2 = this + param_2 * 300 + 0x1c3;
        param_1 = param_1 + 1;
        uVar5 = 299;
      }
      if (((uint)pCVar2 & 2) != 0) {
        *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
        pCVar2 = pCVar2 + 2;
        param_1 = param_1 + 2;
        uVar5 = uVar5 - 2;
      }
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
        param_1 = param_1 + (uint)bVar7 * -8 + 4;
        pCVar2 = pCVar2 + (uint)bVar7 * -8 + 4;
      }
      iVar4 = 0;
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
        iVar4 = 2;
      }
      if (bVar6) {
        pCVar2[iVar4] = *(CGameOption *)(param_1 + iVar4);
      }
    }
  }
  return;
}
```
