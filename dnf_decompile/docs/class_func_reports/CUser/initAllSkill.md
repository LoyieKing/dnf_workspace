# initAllSkill

`_ZN5CUser12initAllSkillEv`

`CUser::initAllSkill()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fc46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fc46  _ZN5CUser12initAllSkillEv
#           CUser::initAllSkill()
# range [0x0868fc46, 0x0868fdbb]
0868fc46 +0x000:  push   %ebp
0868fc47 +0x001:  mov    %esp,%ebp
0868fc49 +0x003:  sub    $0x28,%esp
0868fc4c +0x006:  movl   $0x50076318,-0x10(%ebp)
0868fc53 +0x00d:  movl   $0x50c79ed0,-0x10(%ebp)
0868fc5a +0x014:  mov    0x8(%ebp),%eax
0868fc5d +0x017:  mov    %eax,(%esp)
0868fc60 +0x01a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868fc65 +0x01f:  mov    0x7b(%eax),%eax
0868fc68 +0x022:  cmp    -0x10(%ebp),%eax
0868fc6b +0x025:  setl   %al
0868fc6e +0x028:  test   %al,%al
0868fc70 +0x02a:  je     0868fdb9 <+0x173>
0868fc76 +0x030:  mov    0x8(%ebp),%eax
0868fc79 +0x033:  mov    %eax,(%esp)
0868fc7c +0x036:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0868fc81 +0x03b:  movl   $0x0,0x4(%esp)
0868fc89 +0x043:  mov    %eax,(%esp)
0868fc8c +0x046:  call   08604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
0868fc91 +0x04b:  mov    0x8(%ebp),%eax
0868fc94 +0x04e:  mov    %eax,(%esp)
0868fc97 +0x051:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0868fc9c +0x056:  mov    0x8(%ebp),%edx
0868fc9f +0x059:  mov    %edx,0x4(%esp)
0868fca3 +0x05d:  mov    %eax,(%esp)
0868fca6 +0x060:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0868fcab +0x065:  mov    0x8(%ebp),%eax
0868fcae +0x068:  mov    %eax,(%esp)
0868fcb1 +0x06b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0868fcb6 +0x070:  movl   $0x0,0x8(%esp)
0868fcbe +0x078:  movl   $0x0,0x4(%esp)
0868fcc6 +0x080:  mov    %eax,(%esp)
0868fcc9 +0x083:  call   08608120 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND>  ; SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)
0868fcce +0x088:  mov    0x8(%ebp),%eax
0868fcd1 +0x08b:  mov    %eax,(%esp)
0868fcd4 +0x08e:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0868fcd9 +0x093:  movl   $0x1,0x4(%esp)
0868fce1 +0x09b:  mov    %eax,(%esp)
0868fce4 +0x09e:  call   08604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
0868fce9 +0x0a3:  mov    0x8(%ebp),%eax
0868fcec +0x0a6:  mov    %eax,(%esp)
0868fcef +0x0a9:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0868fcf4 +0x0ae:  mov    0x8(%ebp),%edx
0868fcf7 +0x0b1:  mov    %edx,0x4(%esp)
0868fcfb +0x0b5:  mov    %eax,(%esp)
0868fcfe +0x0b8:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0868fd03 +0x0bd:  mov    0x8(%ebp),%eax
0868fd06 +0x0c0:  mov    %eax,(%esp)
0868fd09 +0x0c3:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0868fd0e +0x0c8:  movl   $0x1,0x8(%esp)
0868fd16 +0x0d0:  movl   $0x1,0x4(%esp)
0868fd1e +0x0d8:  mov    %eax,(%esp)
0868fd21 +0x0db:  call   08608120 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND>  ; SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)
0868fd26 +0x0e0:  movl   $0x21,0x4(%esp)
0868fd2e +0x0e8:  mov    0x8(%ebp),%eax
0868fd31 +0x0eb:  mov    %eax,(%esp)
0868fd34 +0x0ee:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0868fd39 +0x0f3:  test   %al,%al
0868fd3b +0x0f5:  je     0868fdb9 <+0x173>
0868fd3d +0x0f7:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0868fd42 +0x0fc:  mov    %eax,(%esp)
0868fd45 +0x0ff:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
0868fd4a +0x104:  mov    %eax,-0xc(%ebp)
0868fd4d +0x107:  cmpl   $0x0,-0xc(%ebp)
0868fd51 +0x10b:  je     0868fdb9 <+0x173>
0868fd53 +0x10d:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
0868fd5a +0x114:  movzbl %al,%edx
0868fd5d +0x117:  mov    0x8(%ebp),%eax
0868fd60 +0x11a:  mov    %edx,0x4(%esp)
0868fd64 +0x11e:  mov    %eax,(%esp)
0868fd67 +0x121:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
0868fd6c +0x126:  movl   $0x0,0x8(%esp)
0868fd74 +0x12e:  mov    0x8(%ebp),%eax
0868fd77 +0x131:  mov    %eax,0x4(%esp)
0868fd7b +0x135:  mov    -0xc(%ebp),%eax
0868fd7e +0x138:  mov    %eax,(%esp)
0868fd81 +0x13b:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
0868fd86 +0x140:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
0868fd8d +0x147:  movzbl %al,%edx
0868fd90 +0x14a:  mov    0x8(%ebp),%eax
0868fd93 +0x14d:  mov    %edx,0x4(%esp)
0868fd97 +0x151:  mov    %eax,(%esp)
0868fd9a +0x154:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
0868fd9f +0x159:  movl   $0x1,0x8(%esp)
0868fda7 +0x161:  mov    0x8(%ebp),%eax
0868fdaa +0x164:  mov    %eax,0x4(%esp)
0868fdae +0x168:  mov    -0xc(%ebp),%eax
0868fdb1 +0x16b:  mov    %eax,(%esp)
0868fdb4 +0x16e:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
0868fdb9 +0x173:  leave
0868fdba +0x174:  ret
0868fdbb +0x175:  nop
```

## 反编译 C

```c
// CUser::initAllSkill @ 0x868fc46

/* CUser::initAllSkill() */

void __thiscall CUser::initAllSkill(CUser *this)

{
  char cVar1;
  int iVar2;
  SkillSlot *pSVar3;
  CGameManager *this_00;
  CPremiumLetheManager *pCVar4;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (*(int *)(iVar2 + 0x7b) < 0x50c79ed0) {
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::clear_all_skills(pSVar3,0);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_parent(pSVar3,this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::InitSkill(pSVar3,0,0);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::clear_all_skills(pSVar3,1);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_parent(pSVar3,this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::InitSkill(pSVar3,1,1);
    cVar1 = isAffectedPremium(this,0x21);
    if (cVar1 != '\0') {
      this_00 = (CGameManager *)G_CGameManager();
      pCVar4 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this_00);
      if (pCVar4 != (CPremiumLetheManager *)0x0) {
        CUserCharacInfo::SetOneDayLetheFlag
                  ((CUserCharacInfo *)this,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        CPremiumLetheManager::BackupSkill(pCVar4,this,0);
        CUserCharacInfo::SetOneDayLetheFlag2ND
                  ((CUserCharacInfo *)this,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        CPremiumLetheManager::BackupSkill(pCVar4,this,1);
      }
    }
  }
  return;
}
```
