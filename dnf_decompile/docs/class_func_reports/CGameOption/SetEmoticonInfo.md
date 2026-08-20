# SetEmoticonInfo

`_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig`

`CGameOption::SetEmoticonInfo(CChattingEmoticonConfig const&)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b7080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7080  _ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig
#           CGameOption::SetEmoticonInfo(CChattingEmoticonConfig const&)
# range [0x084b7080, 0x084b7135]
084b7080 +0x00:  push   %ebp
084b7081 +0x01:  mov    %esp,%ebp
084b7083 +0x03:  push   %edi
084b7084 +0x04:  push   %esi
084b7085 +0x05:  push   %ebx
084b7086 +0x06:  sub    $0x1c,%esp
084b7089 +0x09:  mov    0x8(%ebp),%eax
084b708c +0x0c:  lea    0x41b(%eax),%edx
084b7092 +0x12:  movl   $0x210,0x8(%esp)
084b709a +0x1a:  mov    0xc(%ebp),%eax
084b709d +0x1d:  mov    %eax,0x4(%esp)
084b70a1 +0x21:  mov    %edx,(%esp)
084b70a4 +0x24:  call   0807dc90 <_init+0x588>
084b70a9 +0x29:  test   %eax,%eax
084b70ab +0x2b:  je     084b7129 <+0xa9>
084b70ad +0x2d:  mov    0x8(%ebp),%eax
084b70b0 +0x30:  mov    0xc(%ebp),%edx
084b70b3 +0x33:  add    $0x41b,%eax
084b70b8 +0x38:  mov    $0x210,%ebx
084b70bd +0x3d:  mov    %eax,%ecx
084b70bf +0x3f:  and    $0x1,%ecx
084b70c2 +0x42:  test   %ecx,%ecx
084b70c4 +0x44:  je     084b70d4 <+0x54>
084b70c6 +0x46:  movzbl (%edx),%ecx
084b70c9 +0x49:  mov    %cl,(%eax)
084b70cb +0x4b:  add    $0x1,%eax
084b70ce +0x4e:  add    $0x1,%edx
084b70d1 +0x51:  sub    $0x1,%ebx
084b70d4 +0x54:  mov    %eax,%ecx
084b70d6 +0x56:  and    $0x2,%ecx
084b70d9 +0x59:  test   %ecx,%ecx
084b70db +0x5b:  je     084b70ec <+0x6c>
084b70dd +0x5d:  movzwl (%edx),%ecx
084b70e0 +0x60:  mov    %cx,(%eax)
084b70e3 +0x63:  add    $0x2,%eax
084b70e6 +0x66:  add    $0x2,%edx
084b70e9 +0x69:  sub    $0x2,%ebx
084b70ec +0x6c:  mov    %ebx,%ecx
084b70ee +0x6e:  shr    $0x2,%ecx
084b70f1 +0x71:  mov    %eax,%edi
084b70f3 +0x73:  mov    %edx,%esi
084b70f5 +0x75:  rep movsl %ds:(%esi),%es:(%edi)
084b70f7 +0x77:  mov    %esi,%edx
084b70f9 +0x79:  mov    %edi,%eax
084b70fb +0x7b:  mov    $0x0,%ecx
084b7100 +0x80:  mov    %ebx,%esi
084b7102 +0x82:  and    $0x2,%esi
084b7105 +0x85:  test   %esi,%esi
084b7107 +0x87:  je     084b7114 <+0x94>
084b7109 +0x89:  movzwl (%edx,%ecx,1),%esi
084b710d +0x8d:  mov    %si,(%eax,%ecx,1)
084b7111 +0x91:  add    $0x2,%ecx
084b7114 +0x94:  and    $0x1,%ebx
084b7117 +0x97:  test   %ebx,%ebx
084b7119 +0x99:  je     084b7122 <+0xa2>
084b711b +0x9b:  movzbl (%edx,%ecx,1),%edx
084b711f +0x9f:  mov    %dl,(%eax,%ecx,1)
084b7122 +0xa2:  mov    $0x1,%eax
084b7127 +0xa7:  jmp    084b712e <+0xae>
084b7129 +0xa9:  mov    $0x0,%eax
084b712e +0xae:  add    $0x1c,%esp
084b7131 +0xb1:  pop    %ebx
084b7132 +0xb2:  pop    %esi
084b7133 +0xb3:  pop    %edi
084b7134 +0xb4:  pop    %ebp
084b7135 +0xb5:  ret
```

## 反编译 C

```c
// CGameOption::SetEmoticonInfo @ 0x84b7080

/* CGameOption::SetEmoticonInfo(CChattingEmoticonConfig const&) */

undefined4 __thiscall
CGameOption::SetEmoticonInfo(CGameOption *this,CChattingEmoticonConfig *param_1)

{
  int iVar1;
  CGameOption *pCVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar1 = memcmp(this + 0x41b,param_1,0x210);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    pCVar2 = this + 0x41b;
    uVar5 = 0x210;
    bVar6 = ((uint)pCVar2 & 1) != 0;
    if (bVar6) {
      *pCVar2 = *(CGameOption *)param_1;
      pCVar2 = this + 0x41c;
      param_1 = param_1 + 1;
      uVar5 = 0x20f;
    }
    if (((uint)pCVar2 & 2) != 0) {
      *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
      pCVar2 = pCVar2 + 2;
      param_1 = param_1 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + (uint)bVar7 * -8 + 4;
      pCVar2 = pCVar2 + (uint)bVar7 * -8 + 4;
    }
    iVar1 = 0;
    if ((uVar5 & 2) != 0) {
      *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
      iVar1 = 2;
    }
    if (bVar6) {
      pCVar2[iVar1] = *(CGameOption *)(param_1 + iVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
