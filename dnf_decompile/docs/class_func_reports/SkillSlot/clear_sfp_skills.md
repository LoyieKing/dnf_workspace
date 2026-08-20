# clear_sfp_skills

`_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND`

`SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604e78  _ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND
#           SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND)
# range [0x08604e78, 0x08604fe1]
08604e78 +0x000:  push   %ebp
08604e79 +0x001:  mov    %esp,%ebp
08604e7b +0x003:  push   %esi
08604e7c +0x004:  push   %ebx
08604e7d +0x005:  sub    $0x40,%esp
08604e80 +0x008:  mov    0xc(%ebp),%eax
08604e83 +0x00b:  mov    %al,-0x1c(%ebp)
08604e86 +0x00e:  movl   $0x0,-0x10(%ebp)
08604e8d +0x015:  movl   $0x0,-0xc(%ebp)
08604e94 +0x01c:  jmp    08604fc4 <+0x14c>
08604e99 +0x021:  mov    0x10(%ebp),%eax
08604e9c +0x024:  cmp    $0xffffffff,%eax
08604e9f +0x027:  je     08604ea8 <+0x30>
08604ea1 +0x029:  mov    0x10(%ebp),%eax
08604ea4 +0x02c:  test   %eax,%eax
08604ea6 +0x02e:  jne    08604f13 <+0x9b>
08604ea8 +0x030:  mov    -0xc(%ebp),%edx
08604eab +0x033:  mov    0x8(%ebp),%eax
08604eae +0x036:  add    $0x20,%edx
08604eb1 +0x039:  movzbl 0x6(%eax,%edx,2),%eax
08604eb6 +0x03e:  movzbl %al,%esi
08604eb9 +0x041:  movsbl -0x1c(%ebp),%ebx
08604ebd +0x045:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08604ec2 +0x04a:  mov    %esi,0x8(%esp)
08604ec6 +0x04e:  mov    %ebx,0x4(%esp)
08604eca +0x052:  mov    %eax,(%esp)
08604ecd +0x055:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08604ed2 +0x05a:  mov    %eax,-0x10(%ebp)
08604ed5 +0x05d:  cmpl   $0x0,-0x10(%ebp)
08604ed9 +0x061:  je     08604fb9 <+0x141>
08604edf +0x067:  mov    -0x10(%ebp),%eax
08604ee2 +0x06a:  mov    %eax,(%esp)
08604ee5 +0x06d:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
08604eea +0x072:  test   %al,%al
08604eec +0x074:  je     08604fbc <+0x144>
08604ef2 +0x07a:  mov    -0xc(%ebp),%edx
08604ef5 +0x07d:  mov    0x8(%ebp),%eax
08604ef8 +0x080:  add    $0x20,%edx
08604efb +0x083:  movb   $0x0,0x6(%eax,%edx,2)
08604f00 +0x088:  mov    -0xc(%ebp),%edx
08604f03 +0x08b:  mov    0x8(%ebp),%eax
08604f06 +0x08e:  add    $0x20,%edx
08604f09 +0x091:  movb   $0x0,0x7(%eax,%edx,2)
08604f0e +0x096:  jmp    08604fc0 <+0x148>
08604f13 +0x09b:  mov    0x10(%ebp),%eax
08604f16 +0x09e:  cmp    $0x1,%eax
08604f19 +0x0a1:  jne    08604f84 <+0x10c>
08604f1b +0x0a3:  mov    -0xc(%ebp),%edx
08604f1e +0x0a6:  mov    0x8(%ebp),%eax
08604f21 +0x0a9:  add    $0xe8,%edx
08604f27 +0x0af:  movzbl 0xe(%eax,%edx,2),%eax
08604f2c +0x0b4:  movzbl %al,%esi
08604f2f +0x0b7:  movsbl -0x1c(%ebp),%ebx
08604f33 +0x0bb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08604f38 +0x0c0:  mov    %esi,0x8(%esp)
08604f3c +0x0c4:  mov    %ebx,0x4(%esp)
08604f40 +0x0c8:  mov    %eax,(%esp)
08604f43 +0x0cb:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08604f48 +0x0d0:  mov    %eax,-0x10(%ebp)
08604f4b +0x0d3:  cmpl   $0x0,-0x10(%ebp)
08604f4f +0x0d7:  je     08604fbf <+0x147>
08604f51 +0x0d9:  mov    -0x10(%ebp),%eax
08604f54 +0x0dc:  mov    %eax,(%esp)
08604f57 +0x0df:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
08604f5c +0x0e4:  test   %al,%al
08604f5e +0x0e6:  je     08604fc0 <+0x148>
08604f60 +0x0e8:  mov    -0xc(%ebp),%edx
08604f63 +0x0eb:  mov    0x8(%ebp),%eax
08604f66 +0x0ee:  add    $0xe8,%edx
08604f6c +0x0f4:  movb   $0x0,0xe(%eax,%edx,2)
08604f71 +0x0f9:  mov    -0xc(%ebp),%edx
08604f74 +0x0fc:  mov    0x8(%ebp),%eax
08604f77 +0x0ff:  add    $0xe8,%edx
08604f7d +0x105:  movb   $0x0,0xf(%eax,%edx,2)
08604f82 +0x10a:  jmp    08604fc0 <+0x148>
08604f84 +0x10c:  mov    0x10(%ebp),%eax
08604f87 +0x10f:  mov    %eax,0x14(%esp)
08604f8b +0x113:  movl   $"SkillSlot::clear_sfp_skills error %d",0x10(%esp)
08604f93 +0x11b:  movl   $0x49c,0xc(%esp)
08604f9b +0x123:  movl   $&_ZZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08604fa3 +0x12b:  movl   $"skill_slot.cpp",0x4(%esp)
08604fab +0x133:  movl   $0x1,(%esp)
08604fb2 +0x13a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08604fb7 +0x13f:  jmp    08604fc0 <+0x148>
08604fb9 +0x141:  nop
08604fba +0x142:  jmp    08604fc0 <+0x148>
08604fbc +0x144:  nop
08604fbd +0x145:  jmp    08604fc0 <+0x148>
08604fbf +0x147:  nop
08604fc0 +0x148:  addl   $0x1,-0xc(%ebp)
08604fc4 +0x14c:  cmpl   $0xcb,-0xc(%ebp)
08604fcb +0x153:  setle  %al
08604fce +0x156:  test   %al,%al
08604fd0 +0x158:  jne    08604e99 <+0x21>
08604fd6 +0x15e:  mov    $0x1,%eax
08604fdb +0x163:  add    $0x40,%esp
08604fde +0x166:  pop    %ebx
08604fdf +0x167:  pop    %esi
08604fe0 +0x168:  pop    %ebp
08604fe1 +0x169:  ret
```

## 反编译 C

```c
// SkillSlot::clear_sfp_skills @ 0x8604e78

/* SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::clear_sfp_skills(SkillSlot *this,char param_1,int param_3)

{
  char cVar1;
  int iVar2;
  CSkill *pCVar3;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
    if ((param_3 == -1) || (param_3 == 0)) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,(int)param_1);
      if ((pCVar3 != (CSkill *)0x0) && (cVar1 = CSkill::IsSpecialSkill(pCVar3), cVar1 != '\0')) {
        this[(local_10 + 0x20) * 2 + 6] = (SkillSlot)0x0;
        this[(local_10 + 0x20) * 2 + 7] = (SkillSlot)0x0;
      }
    }
    else if (param_3 == 1) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,(int)param_1);
      if ((pCVar3 != (CSkill *)0x0) && (cVar1 = CSkill::IsSpecialSkill(pCVar3), cVar1 != '\0')) {
        this[(local_10 + 0xe8) * 2 + 0xe] = (SkillSlot)0x0;
        this[(local_10 + 0xe8) * 2 + 0xf] = (SkillSlot)0x0;
      }
    }
    else {
      LogManager::logFormat
                (1,"skill_slot.cpp","bool SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND)",
                 0x49c,"SkillSlot::clear_sfp_skills error %d",param_3);
    }
  }
  return 1;
}
```
