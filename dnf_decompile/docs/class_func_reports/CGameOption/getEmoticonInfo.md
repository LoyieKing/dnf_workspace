# getEmoticonInfo

`_ZNK11CGameOption15getEmoticonInfoEv`

`CGameOption::getEmoticonInfo() const`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b7136` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7136  _ZNK11CGameOption15getEmoticonInfoEv
#           CGameOption::getEmoticonInfo() const
# range [0x084b7136, 0x084b71b9]
084b7136 +0x00:  push   %ebp
084b7137 +0x01:  mov    %esp,%ebp
084b7139 +0x03:  push   %edi
084b713a +0x04:  push   %esi
084b713b +0x05:  push   %ebx
084b713c +0x06:  mov    0xc(%ebp),%edx
084b713f +0x09:  mov    0x8(%ebp),%eax
084b7142 +0x0c:  add    $0x41b,%edx
084b7148 +0x12:  mov    $0x210,%ebx
084b714d +0x17:  mov    %eax,%ecx
084b714f +0x19:  and    $0x1,%ecx
084b7152 +0x1c:  test   %ecx,%ecx
084b7154 +0x1e:  je     084b7164 <+0x2e>
084b7156 +0x20:  movzbl (%edx),%ecx
084b7159 +0x23:  mov    %cl,(%eax)
084b715b +0x25:  add    $0x1,%eax
084b715e +0x28:  add    $0x1,%edx
084b7161 +0x2b:  sub    $0x1,%ebx
084b7164 +0x2e:  mov    %eax,%ecx
084b7166 +0x30:  and    $0x2,%ecx
084b7169 +0x33:  test   %ecx,%ecx
084b716b +0x35:  je     084b717c <+0x46>
084b716d +0x37:  movzwl (%edx),%ecx
084b7170 +0x3a:  mov    %cx,(%eax)
084b7173 +0x3d:  add    $0x2,%eax
084b7176 +0x40:  add    $0x2,%edx
084b7179 +0x43:  sub    $0x2,%ebx
084b717c +0x46:  mov    %ebx,%ecx
084b717e +0x48:  shr    $0x2,%ecx
084b7181 +0x4b:  mov    %eax,%edi
084b7183 +0x4d:  mov    %edx,%esi
084b7185 +0x4f:  rep movsl %ds:(%esi),%es:(%edi)
084b7187 +0x51:  mov    %esi,%edx
084b7189 +0x53:  mov    %edi,%eax
084b718b +0x55:  mov    $0x0,%ecx
084b7190 +0x5a:  mov    %ebx,%esi
084b7192 +0x5c:  and    $0x2,%esi
084b7195 +0x5f:  test   %esi,%esi
084b7197 +0x61:  je     084b71a4 <+0x6e>
084b7199 +0x63:  movzwl (%edx,%ecx,1),%esi
084b719d +0x67:  mov    %si,(%eax,%ecx,1)
084b71a1 +0x6b:  add    $0x2,%ecx
084b71a4 +0x6e:  and    $0x1,%ebx
084b71a7 +0x71:  test   %ebx,%ebx
084b71a9 +0x73:  je     084b71b2 <+0x7c>
084b71ab +0x75:  movzbl (%edx,%ecx,1),%edx
084b71af +0x79:  mov    %dl,(%eax,%ecx,1)
084b71b2 +0x7c:  mov    0x8(%ebp),%eax
084b71b5 +0x7f:  pop    %ebx
084b71b6 +0x80:  pop    %esi
084b71b7 +0x81:  pop    %edi
084b71b8 +0x82:  pop    %ebp
084b71b9 +0x83:  ret    $0x4
```

## 反编译 C

```c
// CGameOption::getEmoticonInfo @ 0x84b7136

/* CGameOption::getEmoticonInfo() const */

undefined4 * CGameOption::getEmoticonInfo(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  
  puVar4 = (undefined4 *)(in_stack_00000008 + 0x41b);
  uVar5 = 0x210;
  bVar6 = ((uint)in_stack_00000004 & 1) != 0;
  puVar1 = in_stack_00000004;
  if (bVar6) {
    *(undefined1 *)in_stack_00000004 = *(undefined1 *)puVar4;
    puVar1 = (undefined4 *)((int)in_stack_00000004 + 1);
    puVar4 = (undefined4 *)(in_stack_00000008 + 0x41c);
    uVar5 = 0x20f;
  }
  if (((uint)puVar1 & 2) != 0) {
    *(undefined2 *)puVar1 = *(undefined2 *)puVar4;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
    puVar4 = (undefined4 *)((int)puVar4 + 2);
    uVar5 = uVar5 - 2;
  }
  for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar3 = 0;
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)puVar1 = *(undefined2 *)puVar4;
    iVar3 = 2;
  }
  if (bVar6) {
    *(undefined1 *)((int)puVar1 + iVar3) = *(undefined1 *)((int)puVar4 + iVar3);
  }
  return in_stack_00000004;
}
```
