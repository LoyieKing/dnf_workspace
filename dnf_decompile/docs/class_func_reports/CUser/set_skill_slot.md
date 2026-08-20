# set_skill_slot

`_ZN5CUser14set_skill_slotEPcS0_i`

`CUser::set_skill_slot(char*, char*, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08662aba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08662aba  _ZN5CUser14set_skill_slotEPcS0_i
#           CUser::set_skill_slot(char*, char*, int)
# range [0x08662aba, 0x08662ae9]
08662aba +0x00:  push   %ebp
08662abb +0x01:  mov    %esp,%ebp
08662abd +0x03:  sub    $0x18,%esp
08662ac0 +0x06:  mov    0x8(%ebp),%eax
08662ac3 +0x09:  mov    %eax,(%esp)
08662ac6 +0x0c:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08662acb +0x11:  mov    0x14(%ebp),%edx
08662ace +0x14:  mov    %edx,0xc(%esp)
08662ad2 +0x18:  mov    0x10(%ebp),%edx
08662ad5 +0x1b:  mov    %edx,0x8(%esp)
08662ad9 +0x1f:  mov    0xc(%ebp),%edx
08662adc +0x22:  mov    %edx,0x4(%esp)
08662ae0 +0x26:  mov    %eax,(%esp)
08662ae3 +0x29:  call   08603378 <_ZN9SkillSlot14set_skill_slotEPcS0_i>  ; SkillSlot::set_skill_slot(char*, char*, int)
08662ae8 +0x2e:  leave
08662ae9 +0x2f:  ret
```

## 反编译 C

```c
// CUser::set_skill_slot @ 0x8662aba

/* CUser::set_skill_slot(char*, char*, int) */

void __thiscall CUser::set_skill_slot(CUser *this,char *param_1,char *param_2,int param_3)

{
  SkillSlot *this_00;
  
  this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
  SkillSlot::set_skill_slot(this_00,param_1,param_2,param_3);
  return;
}
```
