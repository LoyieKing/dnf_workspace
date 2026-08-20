# SetCurCharacOption

`_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption`

`CUserCharacInfo::SetCurCharacOption(CharacterOption&)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868efae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868efae  _ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption
#           CUserCharacInfo::SetCurCharacOption(CharacterOption&)
# range [0x0868efae, 0x0868f03b]
0868efae +0x00:  push   %ebp
0868efaf +0x01:  mov    %esp,%ebp
0868efb1 +0x03:  push   %edi
0868efb2 +0x04:  push   %esi
0868efb3 +0x05:  push   %ebx
0868efb4 +0x06:  mov    0x8(%ebp),%eax
0868efb7 +0x09:  mov    0x10(%eax),%eax
0868efba +0x0c:  test   %eax,%eax
0868efbc +0x0e:  je     0868f036 <+0x88>
0868efbe +0x10:  mov    0x8(%ebp),%eax
0868efc1 +0x13:  mov    0x10(%eax),%eax
0868efc4 +0x16:  mov    0xc(%ebp),%edx
0868efc7 +0x19:  add    $0x12b7,%eax
0868efcc +0x1e:  mov    $0x200,%ebx
0868efd1 +0x23:  mov    %eax,%ecx
0868efd3 +0x25:  and    $0x1,%ecx
0868efd6 +0x28:  test   %ecx,%ecx
0868efd8 +0x2a:  je     0868efe8 <+0x3a>
0868efda +0x2c:  movzbl (%edx),%ecx
0868efdd +0x2f:  mov    %cl,(%eax)
0868efdf +0x31:  add    $0x1,%eax
0868efe2 +0x34:  add    $0x1,%edx
0868efe5 +0x37:  sub    $0x1,%ebx
0868efe8 +0x3a:  mov    %eax,%ecx
0868efea +0x3c:  and    $0x2,%ecx
0868efed +0x3f:  test   %ecx,%ecx
0868efef +0x41:  je     0868f000 <+0x52>
0868eff1 +0x43:  movzwl (%edx),%ecx
0868eff4 +0x46:  mov    %cx,(%eax)
0868eff7 +0x49:  add    $0x2,%eax
0868effa +0x4c:  add    $0x2,%edx
0868effd +0x4f:  sub    $0x2,%ebx
0868f000 +0x52:  mov    %ebx,%ecx
0868f002 +0x54:  shr    $0x2,%ecx
0868f005 +0x57:  mov    %eax,%edi
0868f007 +0x59:  mov    %edx,%esi
0868f009 +0x5b:  rep movsl %ds:(%esi),%es:(%edi)
0868f00b +0x5d:  mov    %esi,%edx
0868f00d +0x5f:  mov    %edi,%eax
0868f00f +0x61:  mov    $0x0,%ecx
0868f014 +0x66:  mov    %ebx,%esi
0868f016 +0x68:  and    $0x2,%esi
0868f019 +0x6b:  test   %esi,%esi
0868f01b +0x6d:  je     0868f028 <+0x7a>
0868f01d +0x6f:  movzwl (%edx,%ecx,1),%esi
0868f021 +0x73:  mov    %si,(%eax,%ecx,1)
0868f025 +0x77:  add    $0x2,%ecx
0868f028 +0x7a:  and    $0x1,%ebx
0868f02b +0x7d:  test   %ebx,%ebx
0868f02d +0x7f:  je     0868f036 <+0x88>
0868f02f +0x81:  movzbl (%edx,%ecx,1),%edx
0868f033 +0x85:  mov    %dl,(%eax,%ecx,1)
0868f036 +0x88:  pop    %ebx
0868f037 +0x89:  pop    %esi
0868f038 +0x8a:  pop    %edi
0868f039 +0x8b:  pop    %ebp
0868f03a +0x8c:  ret
0868f03b +0x8d:  nop
```

## 反编译 C

```c
// CUserCharacInfo::SetCurCharacOption @ 0x868efae

/* CUserCharacInfo::SetCurCharacOption(CharacterOption&) */

void __thiscall CUserCharacInfo::SetCurCharacOption(CUserCharacInfo *this,CharacterOption *param_1)

{
  CharacterOption *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x10) != 0) {
    iVar3 = *(int *)(this + 0x10);
    pCVar1 = (CharacterOption *)(iVar3 + 0x12b7);
    uVar4 = 0x200;
    bVar5 = ((uint)pCVar1 & 1) != 0;
    if (bVar5) {
      *pCVar1 = *param_1;
      pCVar1 = (CharacterOption *)(iVar3 + 0x12b8);
      param_1 = param_1 + 1;
      uVar4 = 0x1ff;
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
      pCVar1[iVar3] = param_1[iVar3];
    }
  }
  return;
}
```
