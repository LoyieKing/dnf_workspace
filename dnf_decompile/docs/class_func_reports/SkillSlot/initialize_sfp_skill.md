# initialize_sfp_skill

`_ZN9SkillSlot20initialize_sfp_skillEv`

`SkillSlot::initialize_sfp_skill()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608a1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608a1e  _ZN9SkillSlot20initialize_sfp_skillEv
#           SkillSlot::initialize_sfp_skill()
# range [0x08608a1e, 0x08608b1d]
08608a1e +0x00:  push   %ebp
08608a1f +0x01:  mov    %esp,%ebp
08608a21 +0x03:  push   %ebx
08608a22 +0x04:  sub    $0x14,%esp
08608a25 +0x07:  mov    0x8(%ebp),%eax
08608a28 +0x0a:  mov    (%eax),%eax
08608a2a +0x0c:  test   %eax,%eax
08608a2c +0x0e:  je     08608b13 <+0xf5>
08608a32 +0x14:  mov    0x8(%ebp),%eax
08608a35 +0x17:  mov    (%eax),%eax
08608a37 +0x19:  mov    %eax,(%esp)
08608a3a +0x1c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08608a3f +0x21:  cmp    $0x31,%eax
08608a42 +0x24:  setle  %al
08608a45 +0x27:  test   %al,%al
08608a47 +0x29:  jne    08608b16 <+0xf8>
08608a4d +0x2f:  mov    0x8(%ebp),%eax
08608a50 +0x32:  mov    (%eax),%eax
08608a52 +0x34:  mov    %eax,(%esp)
08608a55 +0x37:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08608a5a +0x3c:  movsbl %al,%ebx
08608a5d +0x3f:  mov    0x8(%ebp),%eax
08608a60 +0x42:  mov    (%eax),%eax
08608a62 +0x44:  mov    %eax,(%esp)
08608a65 +0x47:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08608a6a +0x4c:  movl   $0x0,0x8(%esp)
08608a72 +0x54:  mov    %ebx,0x4(%esp)
08608a76 +0x58:  mov    %eax,(%esp)
08608a79 +0x5b:  call   08604e78 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND)
08608a7e +0x60:  mov    0x8(%ebp),%eax
08608a81 +0x63:  mov    (%eax),%eax
08608a83 +0x65:  mov    %eax,(%esp)
08608a86 +0x68:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08608a8b +0x6d:  movsbl %al,%ebx
08608a8e +0x70:  mov    0x8(%ebp),%eax
08608a91 +0x73:  mov    (%eax),%eax
08608a93 +0x75:  mov    %eax,(%esp)
08608a96 +0x78:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08608a9b +0x7d:  movl   $0x1,0x8(%esp)
08608aa3 +0x85:  mov    %ebx,0x4(%esp)
08608aa7 +0x89:  mov    %eax,(%esp)
08608aaa +0x8c:  call   08604e78 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND)
08608aaf +0x91:  mov    0x8(%ebp),%eax
08608ab2 +0x94:  mov    (%eax),%eax
08608ab4 +0x96:  mov    %eax,(%esp)
08608ab7 +0x99:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08608abc +0x9e:  lea    -0x31(%eax),%ebx
08608abf +0xa1:  mov    0x8(%ebp),%eax
08608ac2 +0xa4:  mov    (%eax),%eax
08608ac4 +0xa6:  mov    %eax,(%esp)
08608ac7 +0xa9:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08608acc +0xae:  movl   $0x2,0x8(%esp)
08608ad4 +0xb6:  mov    %ebx,0x4(%esp)
08608ad8 +0xba:  mov    %eax,(%esp)
08608adb +0xbd:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
08608ae0 +0xc2:  mov    0x8(%ebp),%eax
08608ae3 +0xc5:  mov    (%eax),%eax
08608ae5 +0xc7:  mov    %eax,(%esp)
08608ae8 +0xca:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08608aed +0xcf:  lea    -0x31(%eax),%ebx
08608af0 +0xd2:  mov    0x8(%ebp),%eax
08608af3 +0xd5:  mov    (%eax),%eax
08608af5 +0xd7:  mov    %eax,(%esp)
08608af8 +0xda:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08608afd +0xdf:  movl   $0x3,0x8(%esp)
08608b05 +0xe7:  mov    %ebx,0x4(%esp)
08608b09 +0xeb:  mov    %eax,(%esp)
08608b0c +0xee:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
08608b11 +0xf3:  jmp    08608b17 <+0xf9>
08608b13 +0xf5:  nop
08608b14 +0xf6:  jmp    08608b17 <+0xf9>
08608b16 +0xf8:  nop
08608b17 +0xf9:  add    $0x14,%esp
08608b1a +0xfc:  pop    %ebx
08608b1b +0xfd:  pop    %ebp
08608b1c +0xfe:  ret
08608b1d +0xff:  nop
```

## 反编译 C

```c
// SkillSlot::initialize_sfp_skill @ 0x8608a1e

/* SkillSlot::initialize_sfp_skill() */

void __thiscall SkillSlot::initialize_sfp_skill(SkillSlot *this)

{
  char cVar1;
  int iVar2;
  SkillSlot *pSVar3;
  
  if ((*(int *)this != 0) &&
     (iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this), 0x31 < iVar2)) {
    cVar1 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    clear_sfp_skills(pSVar3,(int)cVar1,0);
    cVar1 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    clear_sfp_skills(pSVar3,(int)cVar1,1);
    iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    set_remain_sfp_at_index(pSVar3,iVar2 + -0x31,2);
    iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    set_remain_sfp_at_index(pSVar3,iVar2 + -0x31,3);
  }
  return;
}
```
