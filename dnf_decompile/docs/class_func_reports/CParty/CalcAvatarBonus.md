# CalcAvatarBonus

`_ZN6CParty15CalcAvatarBonusEv`

`CParty::CalcAvatarBonus()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085acfde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085acfde  _ZN6CParty15CalcAvatarBonusEv
#           CParty::CalcAvatarBonus()
# range [0x085acfde, 0x085ad083]
085acfde +0x00:  push   %ebp
085acfdf +0x01:  mov    %esp,%ebp
085acfe1 +0x03:  sub    $0x38,%esp
085acfe4 +0x06:  mov    $0x0,%eax
085acfe9 +0x0b:  mov    %eax,-0x14(%ebp)
085acfec +0x0e:  movb   $0x0,-0xd(%ebp)
085acff0 +0x12:  movl   $0x0,-0xc(%ebp)
085acff7 +0x19:  jmp    085ad040 <+0x62>
085acff9 +0x1b:  mov    -0xc(%ebp),%eax
085acffc +0x1e:  mov    %eax,0x4(%esp)
085ad000 +0x22:  mov    0x8(%ebp),%eax
085ad003 +0x25:  mov    %eax,(%esp)
085ad006 +0x28:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ad00b +0x2d:  xor    $0x1,%eax
085ad00e +0x30:  test   %al,%al
085ad010 +0x32:  jne    085ad03b <+0x5d>
085ad012 +0x34:  mov    -0xc(%ebp),%edx
085ad015 +0x37:  mov    0x8(%ebp),%ecx
085ad018 +0x3a:  mov    %edx,%eax
085ad01a +0x3c:  add    %eax,%eax
085ad01c +0x3e:  add    %edx,%eax
085ad01e +0x40:  shl    $0x3,%eax
085ad021 +0x43:  lea    (%ecx,%eax,1),%eax
085ad024 +0x46:  add    $0x78,%eax
085ad027 +0x49:  mov    (%eax),%eax
085ad029 +0x4b:  mov    %eax,(%esp)
085ad02c +0x4e:  call   0867c80e <_ZN5CUser13IsEquipAvatarEv>  ; CUser::IsEquipAvatar()
085ad031 +0x53:  test   %al,%al
085ad033 +0x55:  je     085ad03c <+0x5e>
085ad035 +0x57:  movb   $0x1,-0xd(%ebp)
085ad039 +0x5b:  jmp    085ad04b <+0x6d>
085ad03b +0x5d:  nop
085ad03c +0x5e:  addl   $0x1,-0xc(%ebp)
085ad040 +0x62:  cmpl   $0x3,-0xc(%ebp)
085ad044 +0x66:  setle  %al
085ad047 +0x69:  test   %al,%al
085ad049 +0x6b:  jne    085acff9 <+0x1b>
085ad04b +0x6d:  cmpb   $0x0,-0xd(%ebp)
085ad04f +0x71:  je     085ad078 <+0x9a>
085ad051 +0x73:  mov    0x8(%ebp),%eax
085ad054 +0x76:  mov    %eax,(%esp)
085ad057 +0x79:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085ad05c +0x7e:  cmp    $0x1,%eax
085ad05f +0x81:  setle  %al
085ad062 +0x84:  test   %al,%al
085ad064 +0x86:  je     085ad070 <+0x92>
085ad066 +0x88:  mov    $0x3ca3d70a,%eax
085ad06b +0x8d:  mov    %eax,-0x14(%ebp)
085ad06e +0x90:  jmp    085ad078 <+0x9a>
085ad070 +0x92:  mov    $0x3d4ccccd,%eax
085ad075 +0x97:  mov    %eax,-0x14(%ebp)
085ad078 +0x9a:  mov    -0x14(%ebp),%eax
085ad07b +0x9d:  mov    %eax,-0x1c(%ebp)
085ad07e +0xa0:  flds   -0x1c(%ebp)
085ad081 +0xa3:  leave
085ad082 +0xa4:  ret
085ad083 +0xa5:  nop
```

## 反编译 C

```c
// CParty::CalcAvatarBonus @ 0x85acfde

/* CParty::CalcAvatarBonus() */

longdouble __thiscall CParty::CalcAvatarBonus(CParty *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float local_18;
  int local_10;
  
  local_18 = 0.0;
  bVar1 = false;
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_085ad04b:
      if (bVar1) {
        iVar3 = get_member_count(this);
        if (iVar3 < 2) {
          local_18 = 0.02;
        }
        else {
          local_18 = 0.05;
        }
      }
      return (longdouble)local_18;
    }
    cVar2 = _checkValidUser(this,local_10);
    if (cVar2 == '\x01') {
      cVar2 = CUser::IsEquipAvatar(*(CUser **)(this + local_10 * 0x18 + 0x78));
      if (cVar2 != '\0') {
        bVar1 = true;
        goto LAB_085ad04b;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
