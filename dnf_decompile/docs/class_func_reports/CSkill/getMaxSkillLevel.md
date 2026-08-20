# getMaxSkillLevel

`_ZNK6CSkill16getMaxSkillLevelEiii`

`CSkill::getMaxSkillLevel(int, int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x08350700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350700  _ZNK6CSkill16getMaxSkillLevelEiii
#           CSkill::getMaxSkillLevel(int, int, int) const
# range [0x08350700, 0x083507e7]
08350700 +0x00:  push   %ebp
08350701 +0x01:  mov    %esp,%ebp
08350703 +0x03:  sub    $0x38,%esp
08350706 +0x06:  cmpl   $0x0,0x14(%ebp)
0835070a +0x0a:  jg     08350723 <+0x23>
0835070c +0x0c:  mov    0x10(%ebp),%eax
0835070f +0x0f:  mov    %eax,0x4(%esp)
08350713 +0x13:  mov    0x8(%ebp),%eax
08350716 +0x16:  mov    %eax,(%esp)
08350719 +0x19:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
0835071e +0x1e:  mov    %eax,-0x10(%ebp)
08350721 +0x21:  jmp    0835075a <+0x5a>
08350723 +0x23:  mov    0x14(%ebp),%eax
08350726 +0x26:  mov    %eax,0x8(%esp)
0835072a +0x2a:  mov    0x10(%ebp),%eax
0835072d +0x2d:  mov    %eax,0x4(%esp)
08350731 +0x31:  mov    0x8(%ebp),%eax
08350734 +0x34:  mov    %eax,(%esp)
08350737 +0x37:  call   08350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>  ; CSkill::get_second_growtype_max_level(int, int) const
0835073c +0x3c:  mov    %eax,-0x10(%ebp)
0835073f +0x3f:  cmpl   $0x0,-0x10(%ebp)
08350743 +0x43:  jne    0835075a <+0x5a>
08350745 +0x45:  mov    0x10(%ebp),%eax
08350748 +0x48:  mov    %eax,0x4(%esp)
0835074c +0x4c:  mov    0x8(%ebp),%eax
0835074f +0x4f:  mov    %eax,(%esp)
08350752 +0x52:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
08350757 +0x57:  mov    %eax,-0x10(%ebp)
0835075a +0x5a:  cmpl   $0x0,-0x10(%ebp)
0835075e +0x5e:  jne    08350767 <+0x67>
08350760 +0x60:  mov    $0xffffffff,%eax
08350765 +0x65:  jmp    083507e5 <+0xe5>
08350767 +0x67:  mov    0x8(%ebp),%eax
0835076a +0x6a:  mov    0xc4(%eax),%eax
08350770 +0x70:  mov    0xc(%ebp),%edx
08350773 +0x73:  mov    %edx,%ecx
08350775 +0x75:  sub    %eax,%ecx
08350777 +0x77:  mov    %ecx,%eax
08350779 +0x79:  add    $0x1,%eax
0835077c +0x7c:  mov    -0x10(%ebp),%edx
0835077f +0x7f:  cmp    %edx,%eax
08350781 +0x81:  jle    08350785 <+0x85>
08350783 +0x83:  mov    %edx,%eax
08350785 +0x85:  mov    %eax,-0x10(%ebp)
08350788 +0x88:  mov    0x8(%ebp),%eax
0835078b +0x8b:  mov    0xc4(%eax),%eax
08350791 +0x91:  mov    0xc(%ebp),%edx
08350794 +0x94:  mov    %edx,%ecx
08350796 +0x96:  sub    %eax,%ecx
08350798 +0x98:  mov    0x8(%ebp),%eax
0835079b +0x9b:  mov    0xc8(%eax),%eax
083507a1 +0xa1:  mov    %eax,-0x1c(%ebp)
083507a4 +0xa4:  mov    %ecx,%edx
083507a6 +0xa6:  mov    %edx,%eax
083507a8 +0xa8:  sar    $0x1f,%edx
083507ab +0xab:  idivl  -0x1c(%ebp)
083507ae +0xae:  add    $0x1,%eax
083507b1 +0xb1:  mov    %eax,-0xc(%ebp)
083507b4 +0xb4:  mov    -0xc(%ebp),%eax
083507b7 +0xb7:  cmp    -0x10(%ebp),%eax
083507ba +0xba:  jge    083507c4 <+0xc4>
083507bc +0xbc:  mov    -0xc(%ebp),%eax
083507bf +0xbf:  shr    $0x1f,%eax
083507c2 +0xc2:  jmp    083507ca <+0xca>
083507c4 +0xc4:  mov    -0x10(%ebp),%eax
083507c7 +0xc7:  shr    $0x1f,%eax
083507ca +0xca:  test   %al,%al
083507cc +0xcc:  je     083507d5 <+0xd5>
083507ce +0xce:  mov    $0x0,%eax
083507d3 +0xd3:  jmp    083507e5 <+0xe5>
083507d5 +0xd5:  mov    -0xc(%ebp),%eax
083507d8 +0xd8:  cmp    -0x10(%ebp),%eax
083507db +0xdb:  jge    083507e2 <+0xe2>
083507dd +0xdd:  mov    -0xc(%ebp),%eax
083507e0 +0xe0:  jmp    083507e5 <+0xe5>
083507e2 +0xe2:  mov    -0x10(%ebp),%eax
083507e5 +0xe5:  leave
083507e6 +0xe6:  ret
083507e7 +0xe7:  nop
```

## 反编译 C

```c
// CSkill::getMaxSkillLevel @ 0x8350700

/* CSkill::getMaxSkillLevel(int, int, int) const */

int __thiscall CSkill::getMaxSkillLevel(CSkill *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if (param_3 < 1) {
    local_14 = get_type_max_level(this,param_2);
  }
  else {
    local_14 = get_second_growtype_max_level(this,param_2,param_3);
    if (local_14 == 0) {
      local_14 = get_type_max_level(this,param_2);
    }
  }
  if (local_14 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (param_1 - *(int *)(this + 0xc4)) + 1;
    if (local_14 < iVar2) {
      iVar2 = local_14;
    }
    iVar3 = (param_1 - *(int *)(this + 0xc4)) / *(int *)(this + 200) + 1;
    if (iVar3 < iVar2) {
      cVar1 = (char)((uint)iVar3 >> 0x18);
    }
    else {
      cVar1 = (char)((uint)iVar2 >> 0x18);
    }
    if (cVar1 < '\0') {
      iVar2 = 0;
    }
    else if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}
```
