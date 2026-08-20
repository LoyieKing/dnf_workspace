# checkMoveComboSkillSlot

`_ZN9SkillSlot23checkMoveComboSkillSlotEhh`

`SkillSlot::checkMoveComboSkillSlot(unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608c98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608c98  _ZN9SkillSlot23checkMoveComboSkillSlotEhh
#           SkillSlot::checkMoveComboSkillSlot(unsigned char, unsigned char)
# range [0x08608c98, 0x08608cf5]
08608c98 +0x00:  push   %ebp
08608c99 +0x01:  mov    %esp,%ebp
08608c9b +0x03:  sub    $0x28,%esp
08608c9e +0x06:  mov    0xc(%ebp),%edx
08608ca1 +0x09:  mov    0x10(%ebp),%eax
08608ca4 +0x0c:  mov    %dl,-0xc(%ebp)
08608ca7 +0x0f:  mov    %al,-0x10(%ebp)
08608caa +0x12:  mov    0x8(%ebp),%eax
08608cad +0x15:  mov    (%eax),%eax
08608caf +0x17:  test   %eax,%eax
08608cb1 +0x19:  jne    08608cba <+0x22>
08608cb3 +0x1b:  mov    $0x0,%eax
08608cb8 +0x20:  jmp    08608cf4 <+0x5c>
08608cba +0x22:  mov    0x8(%ebp),%eax
08608cbd +0x25:  mov    (%eax),%eax
08608cbf +0x27:  mov    %eax,(%esp)
08608cc2 +0x2a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08608cc7 +0x2f:  cmp    $0x9,%eax
08608cca +0x32:  jne    08608cdf <+0x47>
08608ccc +0x34:  cmpb   $0x5,-0xc(%ebp)
08608cd0 +0x38:  jbe    08608cd8 <+0x40>
08608cd2 +0x3a:  cmpb   $0x5,-0x10(%ebp)
08608cd6 +0x3e:  ja     08608cdf <+0x47>
08608cd8 +0x40:  mov    $0x1,%eax
08608cdd +0x45:  jmp    08608ce4 <+0x4c>
08608cdf +0x47:  mov    $0x0,%eax
08608ce4 +0x4c:  test   %al,%al
08608ce6 +0x4e:  je     08608cef <+0x57>
08608ce8 +0x50:  mov    $0x0,%eax
08608ced +0x55:  jmp    08608cf4 <+0x5c>
08608cef +0x57:  mov    $0x1,%eax
08608cf4 +0x5c:  leave
08608cf5 +0x5d:  ret
```

## 反编译 C

```c
// SkillSlot::checkMoveComboSkillSlot @ 0x8608c98

/* SkillSlot::checkMoveComboSkillSlot(unsigned char, unsigned char) */

undefined4 __thiscall
SkillSlot::checkMoveComboSkillSlot(SkillSlot *this,uchar param_1,uchar param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    if ((iVar3 == 9) && ((param_1 < 6 || (param_2 < 6)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
