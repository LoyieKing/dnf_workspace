# GetCurCharacOption

`_ZNK5CUser18GetCurCharacOptionER15CharacterOption`

`CUser::GetCurCharacOption(CharacterOption&) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f03c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f03c  _ZNK5CUser18GetCurCharacOptionER15CharacterOption
#           CUser::GetCurCharacOption(CharacterOption&) const
# range [0x0868f03c, 0x0868f0e7]
0868f03c +0x00:  push   %ebp
0868f03d +0x01:  mov    %esp,%ebp
0868f03f +0x03:  push   %edi
0868f040 +0x04:  push   %esi
0868f041 +0x05:  push   %ebx
0868f042 +0x06:  sub    $0x1c,%esp
0868f045 +0x09:  mov    0x8(%ebp),%eax
0868f048 +0x0c:  mov    %eax,(%esp)
0868f04b +0x0f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868f050 +0x14:  test   %eax,%eax
0868f052 +0x16:  sete   %al
0868f055 +0x19:  test   %al,%al
0868f057 +0x1b:  jne    0868f0df <+0xa3>
0868f05d +0x21:  mov    0x8(%ebp),%eax
0868f060 +0x24:  mov    %eax,(%esp)
0868f063 +0x27:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868f068 +0x2c:  mov    %eax,%edx
0868f06a +0x2e:  mov    0xc(%ebp),%eax
0868f06d +0x31:  add    $0x12b7,%edx
0868f073 +0x37:  mov    $0x200,%ebx
0868f078 +0x3c:  mov    %eax,%ecx
0868f07a +0x3e:  and    $0x1,%ecx
0868f07d +0x41:  test   %ecx,%ecx
0868f07f +0x43:  je     0868f08f <+0x53>
0868f081 +0x45:  movzbl (%edx),%ecx
0868f084 +0x48:  mov    %cl,(%eax)
0868f086 +0x4a:  add    $0x1,%eax
0868f089 +0x4d:  add    $0x1,%edx
0868f08c +0x50:  sub    $0x1,%ebx
0868f08f +0x53:  mov    %eax,%ecx
0868f091 +0x55:  and    $0x2,%ecx
0868f094 +0x58:  test   %ecx,%ecx
0868f096 +0x5a:  je     0868f0a7 <+0x6b>
0868f098 +0x5c:  movzwl (%edx),%ecx
0868f09b +0x5f:  mov    %cx,(%eax)
0868f09e +0x62:  add    $0x2,%eax
0868f0a1 +0x65:  add    $0x2,%edx
0868f0a4 +0x68:  sub    $0x2,%ebx
0868f0a7 +0x6b:  mov    %ebx,%ecx
0868f0a9 +0x6d:  shr    $0x2,%ecx
0868f0ac +0x70:  mov    %eax,%edi
0868f0ae +0x72:  mov    %edx,%esi
0868f0b0 +0x74:  rep movsl %ds:(%esi),%es:(%edi)
0868f0b2 +0x76:  mov    %esi,%edx
0868f0b4 +0x78:  mov    %edi,%eax
0868f0b6 +0x7a:  mov    $0x0,%ecx
0868f0bb +0x7f:  mov    %ebx,%esi
0868f0bd +0x81:  and    $0x2,%esi
0868f0c0 +0x84:  test   %esi,%esi
0868f0c2 +0x86:  je     0868f0cf <+0x93>
0868f0c4 +0x88:  movzwl (%edx,%ecx,1),%esi
0868f0c8 +0x8c:  mov    %si,(%eax,%ecx,1)
0868f0cc +0x90:  add    $0x2,%ecx
0868f0cf +0x93:  and    $0x1,%ebx
0868f0d2 +0x96:  test   %ebx,%ebx
0868f0d4 +0x98:  je     0868f0e0 <+0xa4>
0868f0d6 +0x9a:  movzbl (%edx,%ecx,1),%edx
0868f0da +0x9e:  mov    %dl,(%eax,%ecx,1)
0868f0dd +0xa1:  jmp    0868f0e0 <+0xa4>
0868f0df +0xa3:  nop
0868f0e0 +0xa4:  add    $0x1c,%esp
0868f0e3 +0xa7:  pop    %ebx
0868f0e4 +0xa8:  pop    %esi
0868f0e5 +0xa9:  pop    %edi
0868f0e6 +0xaa:  pop    %ebp
0868f0e7 +0xab:  ret
```

## 反编译 C

```c
// CUser::GetCurCharacOption @ 0x868f03c

/* CUser::GetCurCharacOption(CharacterOption&) const */

void __thiscall CUser::GetCurCharacOption(CUser *this,CharacterOption *param_1)

{
  int iVar1;
  uint uVar2;
  CharacterOption *pCVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    pCVar3 = (CharacterOption *)(iVar1 + 0x12b7);
    uVar4 = 0x200;
    bVar5 = ((uint)param_1 & 1) != 0;
    if (bVar5) {
      *param_1 = *pCVar3;
      param_1 = param_1 + 1;
      pCVar3 = (CharacterOption *)(iVar1 + 0x12b8);
      uVar4 = 0x1ff;
    }
    if (((uint)param_1 & 2) != 0) {
      *(undefined2 *)param_1 = *(undefined2 *)pCVar3;
      param_1 = param_1 + 2;
      pCVar3 = pCVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pCVar3;
      pCVar3 = pCVar3 + (uint)bVar6 * -8 + 4;
      param_1 = param_1 + (uint)bVar6 * -8 + 4;
    }
    iVar1 = 0;
    if ((uVar4 & 2) != 0) {
      *(undefined2 *)param_1 = *(undefined2 *)pCVar3;
      iVar1 = 2;
    }
    if (bVar5) {
      param_1[iVar1] = pCVar3[iVar1];
    }
  }
  return;
}
```
