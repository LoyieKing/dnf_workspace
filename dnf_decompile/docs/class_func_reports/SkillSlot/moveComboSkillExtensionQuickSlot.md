# moveComboSkillExtensionQuickSlot

`_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND`

`SkillSlot::moveComboSkillExtensionQuickSlot(int, int, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608ee8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608ee8  _ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND
#           SkillSlot::moveComboSkillExtensionQuickSlot(int, int, ENUM_SKILL_TREE_KIND)
# range [0x08608ee8, 0x0860909f]
08608ee8 +0x000:  push   %ebp
08608ee9 +0x001:  mov    %esp,%ebp
08608eeb +0x003:  push   %ebx
08608eec +0x004:  sub    $0x44,%esp
08608eef +0x007:  mov    0x8(%ebp),%eax
08608ef2 +0x00a:  mov    (%eax),%eax
08608ef4 +0x00c:  test   %eax,%eax
08608ef6 +0x00e:  jne    08608f02 <+0x1a>
08608ef8 +0x010:  mov    $0x0,%eax
08608efd +0x015:  jmp    0860909a <+0x1b2>
08608f02 +0x01a:  mov    0x14(%ebp),%eax
08608f05 +0x01d:  mov    %eax,0x4(%esp)
08608f09 +0x021:  mov    0x8(%ebp),%eax
08608f0c +0x024:  mov    %eax,(%esp)
08608f0f +0x027:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08608f14 +0x02c:  mov    %eax,-0x18(%ebp)
08608f17 +0x02f:  cmpl   $0x0,-0x18(%ebp)
08608f1b +0x033:  jne    08608f27 <+0x3f>
08608f1d +0x035:  mov    $0x0,%eax
08608f22 +0x03a:  jmp    0860909a <+0x1b2>
08608f27 +0x03f:  mov    0x8(%ebp),%eax
08608f2a +0x042:  mov    (%eax),%eax
08608f2c +0x044:  mov    %eax,(%esp)
08608f2f +0x047:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08608f34 +0x04c:  mov    %eax,%ebx
08608f36 +0x04e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08608f3b +0x053:  mov    0xc(%ebp),%edx
08608f3e +0x056:  mov    %edx,0x8(%esp)
08608f42 +0x05a:  mov    %ebx,0x4(%esp)
08608f46 +0x05e:  mov    %eax,(%esp)
08608f49 +0x061:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08608f4e +0x066:  mov    %eax,-0x14(%ebp)
08608f51 +0x069:  cmpl   $0x0,-0x14(%ebp)
08608f55 +0x06d:  jne    08608f61 <+0x79>
08608f57 +0x06f:  mov    $0x0,%eax
08608f5c +0x074:  jmp    0860909a <+0x1b2>
08608f61 +0x079:  mov    -0x14(%ebp),%eax
08608f64 +0x07c:  mov    %eax,(%esp)
08608f67 +0x07f:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08608f6c +0x084:  mov    %eax,-0x10(%ebp)
08608f6f +0x087:  movl   $0x0,0x10(%esp)
08608f77 +0x08f:  mov    0x14(%ebp),%eax
08608f7a +0x092:  mov    %eax,0xc(%esp)
08608f7e +0x096:  mov    -0x10(%ebp),%eax
08608f81 +0x099:  mov    %eax,0x8(%esp)
08608f85 +0x09d:  mov    0xc(%ebp),%eax
08608f88 +0x0a0:  mov    %eax,0x4(%esp)
08608f8c +0x0a4:  mov    0x8(%ebp),%eax
08608f8f +0x0a7:  mov    %eax,(%esp)
08608f92 +0x0aa:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
08608f97 +0x0af:  mov    %eax,-0xc(%ebp)
08608f9a +0x0b2:  cmpl   $0xffffffff,-0xc(%ebp)
08608f9e +0x0b6:  je     08608fcb <+0xe3>
08608fa0 +0x0b8:  mov    -0xc(%ebp),%eax
08608fa3 +0x0bb:  add    %eax,%eax
08608fa5 +0x0bd:  add    -0x18(%ebp),%eax
08608fa8 +0x0c0:  movzbl 0x1(%eax),%eax
08608fac +0x0c4:  movsbl %al,%eax
08608faf +0x0c7:  cmp    0x10(%ebp),%eax
08608fb2 +0x0ca:  jge    08609095 <+0x1ad>
08608fb8 +0x0d0:  mov    -0xc(%ebp),%eax
08608fbb +0x0d3:  add    %eax,%eax
08608fbd +0x0d5:  add    -0x18(%ebp),%eax
08608fc0 +0x0d8:  mov    0x10(%ebp),%edx
08608fc3 +0x0db:  mov    %dl,0x1(%eax)
08608fc6 +0x0de:  jmp    08609095 <+0x1ad>
08608fcb +0x0e3:  movl   $0x1,0x14(%esp)
08608fd3 +0x0eb:  mov    0x14(%ebp),%eax
08608fd6 +0x0ee:  mov    %eax,0x10(%esp)
08608fda +0x0f2:  movl   $0x0,0xc(%esp)
08608fe2 +0x0fa:  mov    -0x10(%ebp),%eax
08608fe5 +0x0fd:  mov    %eax,0x8(%esp)
08608fe9 +0x101:  mov    0xc(%ebp),%eax
08608fec +0x104:  mov    %eax,0x4(%esp)
08608ff0 +0x108:  mov    0x8(%ebp),%eax
08608ff3 +0x10b:  mov    %eax,(%esp)
08608ff6 +0x10e:  call   08604324 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi>  ; SkillSlot::insert_skill(int, int, bool, ENUM_SKILL_TREE_KIND, int)
08608ffb +0x113:  mov    %eax,-0xc(%ebp)
08608ffe +0x116:  cmpl   $0x5,-0xc(%ebp)
08609002 +0x11a:  jle    0860901d <+0x135>
08609004 +0x11c:  cmpl   $0xc5,-0xc(%ebp)
0860900b +0x123:  jg     0860901d <+0x135>
0860900d +0x125:  mov    -0xc(%ebp),%eax
08609010 +0x128:  add    %eax,%eax
08609012 +0x12a:  add    -0x18(%ebp),%eax
08609015 +0x12d:  mov    0x10(%ebp),%edx
08609018 +0x130:  mov    %dl,0x1(%eax)
0860901b +0x133:  jmp    08609095 <+0x1ad>
0860901d +0x135:  mov    0x8(%ebp),%eax
08609020 +0x138:  mov    (%eax),%eax
08609022 +0x13a:  movl   $0xffffffff,0x4(%esp)
0860902a +0x142:  mov    %eax,(%esp)
0860902d +0x145:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08609032 +0x14a:  mov    0x14(%ebp),%ebx
08609035 +0x14d:  mov    -0xc(%ebp),%edx
08609038 +0x150:  add    %edx,%edx
0860903a +0x152:  add    -0x18(%ebp),%edx
0860903d +0x155:  movzbl 0x1(%edx),%edx
08609041 +0x159:  movsbl %dl,%ecx
08609044 +0x15c:  mov    -0xc(%ebp),%edx
08609047 +0x15f:  add    %edx,%edx
08609049 +0x161:  add    -0x18(%ebp),%edx
0860904c +0x164:  movzbl (%edx),%edx
0860904f +0x167:  movzbl %dl,%edx
08609052 +0x16a:  mov    %eax,0x24(%esp)
08609056 +0x16e:  mov    %ebx,0x20(%esp)
0860905a +0x172:  mov    %ecx,0x1c(%esp)
0860905e +0x176:  mov    %edx,0x18(%esp)
08609062 +0x17a:  mov    -0xc(%ebp),%eax
08609065 +0x17d:  mov    %eax,0x14(%esp)
08609069 +0x181:  movl   $"moveComboSkillExtensionQuickSlot Error slot(%d) index(%d) level(%d)kind(%d) characNo(%d)",0x10(%esp)
08609071 +0x189:  movl   $0xcf9,0xc(%esp)
08609079 +0x191:  movl   $&_ZZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08609081 +0x199:  movl   $"skill_slot.cpp",0x4(%esp)
08609089 +0x1a1:  movl   $0x1,(%esp)
08609090 +0x1a8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08609095 +0x1ad:  mov    $0x1,%eax
0860909a +0x1b2:  add    $0x44,%esp
0860909d +0x1b5:  pop    %ebx
0860909e +0x1b6:  pop    %ebp
0860909f +0x1b7:  ret
```

## 反编译 C

```c
// SkillSlot::moveComboSkillExtensionQuickSlot @ 0x8608ee8

/* SkillSlot::moveComboSkillExtensionQuickSlot(int, int, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
SkillSlot::moveComboSkillExtensionQuickSlot
          (SkillSlot *this,undefined4 param_1,int param_2,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CSkill *this_00;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_4);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar4 = G_CDataManager();
      this_00 = (CSkill *)CDataManager::find_skill(iVar4,iVar3);
      if (this_00 == (CSkill *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = CSkill::get_group(this_00);
        iVar3 = get_skillslot_no(this,param_1,uVar1,param_4,0);
        if (iVar3 == -1) {
          iVar3 = insert_skill(this,param_1,uVar1,0,param_4,1);
          if ((iVar3 < 6) || (0xc5 < iVar3)) {
            uVar1 = CUser::get_charac_no(*(CUser **)this,-1);
            LogManager::logFormat
                      (1,"skill_slot.cpp",
                       "bool SkillSlot::moveComboSkillExtensionQuickSlot(int, int, ENUM_SKILL_TREE_KIND)"
                       ,0xcf9,
                       "moveComboSkillExtensionQuickSlot Error slot(%d) index(%d) level(%d)kind(%d) characNo(%d)"
                       ,iVar3,(uint)*(byte *)(iVar3 * 2 + iVar2),
                       (int)*(char *)(iVar3 * 2 + iVar2 + 1),param_4,uVar1);
          }
          else {
            *(char *)(iVar3 * 2 + iVar2 + 1) = (char)param_2;
          }
        }
        else if (*(char *)(iVar3 * 2 + iVar2 + 1) < param_2) {
          *(char *)(iVar3 * 2 + iVar2 + 1) = (char)param_2;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}
```
