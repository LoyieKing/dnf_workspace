# process_skill_init

`_ZN20Dispatcher_SkillInit18process_skill_initEP5CUserR9ParamBase`

`Dispatcher_SkillInit::process_skill_init(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SkillInit` | `0x081e5bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5bdc  _ZN20Dispatcher_SkillInit18process_skill_initEP5CUserR9ParamBase
#           Dispatcher_SkillInit::process_skill_init(CUser*, ParamBase&)
# range [0x081e5bdc, 0x081e5c87]
081e5bdc +0x00:  push   %ebp
081e5bdd +0x01:  mov    %esp,%ebp
081e5bdf +0x03:  sub    $0x28,%esp
081e5be2 +0x06:  cmpl   $0x0,0xc(%ebp)
081e5be6 +0x0a:  je     081e5c84 <+0xa8>
081e5bec +0x10:  mov    0x10(%ebp),%eax
081e5bef +0x13:  mov    %eax,-0x10(%ebp)
081e5bf2 +0x16:  mov    -0x10(%ebp),%eax
081e5bf5 +0x19:  movzbl 0x8(%eax),%eax
081e5bf9 +0x1d:  movsbl %al,%eax
081e5bfc +0x20:  mov    %eax,-0xc(%ebp)
081e5bff +0x23:  mov    0xc(%ebp),%eax
081e5c02 +0x26:  mov    %eax,(%esp)
081e5c05 +0x29:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081e5c0a +0x2e:  mov    -0xc(%ebp),%edx
081e5c0d +0x31:  mov    %edx,0x4(%esp)
081e5c11 +0x35:  mov    %eax,(%esp)
081e5c14 +0x38:  call   08604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
081e5c19 +0x3d:  mov    0xc(%ebp),%eax
081e5c1c +0x40:  mov    %eax,(%esp)
081e5c1f +0x43:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081e5c24 +0x48:  mov    0xc(%ebp),%edx
081e5c27 +0x4b:  mov    %edx,0x4(%esp)
081e5c2b +0x4f:  mov    %eax,(%esp)
081e5c2e +0x52:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
081e5c33 +0x57:  mov    0xc(%ebp),%eax
081e5c36 +0x5a:  mov    %eax,(%esp)
081e5c39 +0x5d:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081e5c3e +0x62:  mov    -0xc(%ebp),%edx
081e5c41 +0x65:  mov    %edx,0x8(%esp)
081e5c45 +0x69:  movl   $0x0,0x4(%esp)
081e5c4d +0x71:  mov    %eax,(%esp)
081e5c50 +0x74:  call   08608120 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND>  ; SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)
081e5c55 +0x79:  mov    0xc(%ebp),%eax
081e5c58 +0x7c:  mov    %eax,(%esp)
081e5c5b +0x7f:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081e5c60 +0x84:  mov    -0xc(%ebp),%edx
081e5c63 +0x87:  mov    %edx,0x4(%esp)
081e5c67 +0x8b:  mov    %eax,(%esp)
081e5c6a +0x8e:  call   08608cf6 <_ZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::resetComboSkill(ENUM_SKILL_TREE_KIND)
081e5c6f +0x93:  movl   $0x1,0x4(%esp)
081e5c77 +0x9b:  mov    0xc(%ebp),%eax
081e5c7a +0x9e:  mov    %eax,(%esp)
081e5c7d +0xa1:  call   08692f0a <_ZN5CUser16setComboSkillSetEb>  ; CUser::setComboSkillSet(bool)
081e5c82 +0xa6:  jmp    081e5c85 <+0xa9>
081e5c84 +0xa8:  nop
081e5c85 +0xa9:  leave
081e5c86 +0xaa:  ret
081e5c87 +0xab:  nop
```

## 反编译 C

```c
// Dispatcher_SkillInit::process_skill_init @ 0x81e5bdc

/* Dispatcher_SkillInit::process_skill_init(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SkillInit::process_skill_init
          (Dispatcher_SkillInit *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  SkillSlot *pSVar2;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = (int)(char)param_2[8];
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::clear_all_skills(pSVar2,iVar1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::set_parent(pSVar2,param_1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::InitSkill(pSVar2,0,iVar1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::resetComboSkill(pSVar2,iVar1);
    CUser::setComboSkillSet(param_1,true);
  }
  return;
}
```
