# SendItemMakingSkillInfo

`_ZN5CUser23SendItemMakingSkillInfoEv`

`CUser::SendItemMakingSkillInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868b00a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868b00a  _ZN5CUser23SendItemMakingSkillInfoEv
#           CUser::SendItemMakingSkillInfo()
# range [0x0868b00a, 0x0868b043]
0868b00a +0x00:  push   %ebp
0868b00b +0x01:  mov    %esp,%ebp
0868b00d +0x03:  sub    $0x28,%esp
0868b010 +0x06:  movl   $0xa,0x4(%esp)
0868b018 +0x0e:  mov    0x8(%ebp),%eax
0868b01b +0x11:  mov    %eax,(%esp)
0868b01e +0x14:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
0868b023 +0x19:  mov    %eax,-0xc(%ebp)
0868b026 +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868b02a +0x20:  je     0868b040 <+0x36>
0868b02c +0x22:  mov    0x8(%ebp),%eax
0868b02f +0x25:  mov    %eax,0x4(%esp)
0868b033 +0x29:  mov    -0xc(%ebp),%eax
0868b036 +0x2c:  mov    %eax,(%esp)
0868b039 +0x2f:  call   08545a62 <_ZNK16CItemMakingSkill24Send_ItemMakingSkillListEP5CUser>  ; CItemMakingSkill::Send_ItemMakingSkillList(CUser*) const
0868b03e +0x34:  jmp    0868b041 <+0x37>
0868b040 +0x36:  nop
0868b041 +0x37:  leave
0868b042 +0x38:  ret
0868b043 +0x39:  nop
```

## 反编译 C

```c
// CUser::SendItemMakingSkillInfo @ 0x868b00a

/* CUser::SendItemMakingSkillInfo() */

void __thiscall CUser::SendItemMakingSkillInfo(CUser *this)

{
  CItemMakingSkill *this_00;
  
  this_00 = (CItemMakingSkill *)GetCharacExpandDataR(this,10);
  if (this_00 != (CItemMakingSkill *)0x0) {
    CItemMakingSkill::Send_ItemMakingSkillList(this_00,this);
  }
  return;
}
```
