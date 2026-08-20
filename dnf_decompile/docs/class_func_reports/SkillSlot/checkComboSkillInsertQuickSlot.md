# checkComboSkillInsertQuickSlot

`_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi`

`SkillSlot::checkComboSkillInsertQuickSlot(int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608d58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608d58  _ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi
#           SkillSlot::checkComboSkillInsertQuickSlot(int) const
# range [0x08608d58, 0x08608da3]
08608d58 +0x00:  push   %ebp
08608d59 +0x01:  mov    %esp,%ebp
08608d5b +0x03:  sub    $0x18,%esp
08608d5e +0x06:  mov    0x8(%ebp),%eax
08608d61 +0x09:  mov    (%eax),%eax
08608d63 +0x0b:  test   %eax,%eax
08608d65 +0x0d:  jne    08608d6e <+0x16>
08608d67 +0x0f:  mov    $0x0,%eax
08608d6c +0x14:  jmp    08608da2 <+0x4a>
08608d6e +0x16:  mov    0x8(%ebp),%eax
08608d71 +0x19:  mov    (%eax),%eax
08608d73 +0x1b:  mov    %eax,(%esp)
08608d76 +0x1e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08608d7b +0x23:  cmp    $0x9,%eax
08608d7e +0x26:  jne    08608d8d <+0x35>
08608d80 +0x28:  cmpl   $0x0,0xc(%ebp)
08608d84 +0x2c:  jne    08608d8d <+0x35>
08608d86 +0x2e:  mov    $0x1,%eax
08608d8b +0x33:  jmp    08608d92 <+0x3a>
08608d8d +0x35:  mov    $0x0,%eax
08608d92 +0x3a:  test   %al,%al
08608d94 +0x3c:  je     08608d9d <+0x45>
08608d96 +0x3e:  mov    $0x0,%eax
08608d9b +0x43:  jmp    08608da2 <+0x4a>
08608d9d +0x45:  mov    $0x1,%eax
08608da2 +0x4a:  leave
08608da3 +0x4b:  ret
```

## 反编译 C

```c
// SkillSlot::checkComboSkillInsertQuickSlot @ 0x8608d58

/* SkillSlot::checkComboSkillInsertQuickSlot(int) const */

undefined4 __thiscall SkillSlot::checkComboSkillInsertQuickSlot(SkillSlot *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    if ((iVar3 == 9) && (param_1 == 0)) {
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
