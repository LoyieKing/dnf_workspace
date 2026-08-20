# gain_sfp

`_ZN5CUser8gain_sfpEi`

`CUser::gain_sfp(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866aad2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866aad2  _ZN5CUser8gain_sfpEi
#           CUser::gain_sfp(int)
# range [0x0866aad2, 0x0866ac0d]
0866aad2 +0x000:  push   %ebp
0866aad3 +0x001:  mov    %esp,%ebp
0866aad5 +0x003:  push   %ebx
0866aad6 +0x004:  sub    $0x14,%esp
0866aad9 +0x007:  cmpl   $0x0,0xc(%ebp)
0866aadd +0x00b:  je     0866ac07 <+0x135>
0866aae3 +0x011:  mov    $0x7fffffff,%eax
0866aae8 +0x016:  mov    %eax,%ebx
0866aaea +0x018:  sub    0xc(%ebp),%ebx
0866aaed +0x01b:  mov    0x8(%ebp),%eax
0866aaf0 +0x01e:  mov    %eax,(%esp)
0866aaf3 +0x021:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866aaf8 +0x026:  movl   $0x2,0x4(%esp)
0866ab00 +0x02e:  mov    %eax,(%esp)
0866ab03 +0x031:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866ab08 +0x036:  cmp    %eax,%ebx
0866ab0a +0x038:  setl   %al
0866ab0d +0x03b:  test   %al,%al
0866ab0f +0x03d:  je     0866ab36 <+0x64>
0866ab11 +0x03f:  mov    0x8(%ebp),%eax
0866ab14 +0x042:  mov    %eax,(%esp)
0866ab17 +0x045:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866ab1c +0x04a:  movl   $0x2,0x8(%esp)
0866ab24 +0x052:  movl   $0x7fffffff,0x4(%esp)
0866ab2c +0x05a:  mov    %eax,(%esp)
0866ab2f +0x05d:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866ab34 +0x062:  jmp    0866ab75 <+0xa3>
0866ab36 +0x064:  mov    0x8(%ebp),%eax
0866ab39 +0x067:  mov    %eax,(%esp)
0866ab3c +0x06a:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ab41 +0x06f:  movl   $0x2,0x4(%esp)
0866ab49 +0x077:  mov    %eax,(%esp)
0866ab4c +0x07a:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866ab51 +0x07f:  mov    %eax,%ebx
0866ab53 +0x081:  add    0xc(%ebp),%ebx
0866ab56 +0x084:  mov    0x8(%ebp),%eax
0866ab59 +0x087:  mov    %eax,(%esp)
0866ab5c +0x08a:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866ab61 +0x08f:  movl   $0x2,0x8(%esp)
0866ab69 +0x097:  mov    %ebx,0x4(%esp)
0866ab6d +0x09b:  mov    %eax,(%esp)
0866ab70 +0x09e:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866ab75 +0x0a3:  mov    $0x7fffffff,%eax
0866ab7a +0x0a8:  mov    %eax,%ebx
0866ab7c +0x0aa:  sub    0xc(%ebp),%ebx
0866ab7f +0x0ad:  mov    0x8(%ebp),%eax
0866ab82 +0x0b0:  mov    %eax,(%esp)
0866ab85 +0x0b3:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ab8a +0x0b8:  movl   $0x3,0x4(%esp)
0866ab92 +0x0c0:  mov    %eax,(%esp)
0866ab95 +0x0c3:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866ab9a +0x0c8:  cmp    %eax,%ebx
0866ab9c +0x0ca:  setl   %al
0866ab9f +0x0cd:  test   %al,%al
0866aba1 +0x0cf:  je     0866abc8 <+0xf6>
0866aba3 +0x0d1:  mov    0x8(%ebp),%eax
0866aba6 +0x0d4:  mov    %eax,(%esp)
0866aba9 +0x0d7:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866abae +0x0dc:  movl   $0x3,0x8(%esp)
0866abb6 +0x0e4:  movl   $0x7fffffff,0x4(%esp)
0866abbe +0x0ec:  mov    %eax,(%esp)
0866abc1 +0x0ef:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866abc6 +0x0f4:  jmp    0866ac07 <+0x135>
0866abc8 +0x0f6:  mov    0x8(%ebp),%eax
0866abcb +0x0f9:  mov    %eax,(%esp)
0866abce +0x0fc:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866abd3 +0x101:  movl   $0x3,0x4(%esp)
0866abdb +0x109:  mov    %eax,(%esp)
0866abde +0x10c:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866abe3 +0x111:  mov    %eax,%ebx
0866abe5 +0x113:  add    0xc(%ebp),%ebx
0866abe8 +0x116:  mov    0x8(%ebp),%eax
0866abeb +0x119:  mov    %eax,(%esp)
0866abee +0x11c:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866abf3 +0x121:  movl   $0x3,0x8(%esp)
0866abfb +0x129:  mov    %ebx,0x4(%esp)
0866abff +0x12d:  mov    %eax,(%esp)
0866ac02 +0x130:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866ac07 +0x135:  add    $0x14,%esp
0866ac0a +0x138:  pop    %ebx
0866ac0b +0x139:  pop    %ebp
0866ac0c +0x13a:  ret
0866ac0d +0x13b:  nop
```

## 反编译 C

```c
// CUser::gain_sfp @ 0x866aad2

/* CUser::gain_sfp(int) */

void __thiscall CUser::gain_sfp(CUser *this,int param_1)

{
  SkillSlot *pSVar1;
  int iVar2;
  
  if (param_1 != 0) {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sfp_at_index(pSVar1,2);
    if (0x7fffffff - param_1 < iVar2) {
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar1,0x7fffffff,2);
    }
    else {
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      iVar2 = SkillSlot::get_remain_sfp_at_index(pSVar1,2);
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar1,iVar2 + param_1,2);
    }
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sfp_at_index(pSVar1,3);
    if (0x7fffffff - param_1 < iVar2) {
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar1,0x7fffffff,3);
    }
    else {
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      iVar2 = SkillSlot::get_remain_sfp_at_index(pSVar1,3);
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar1,iVar2 + param_1,3);
    }
  }
  return;
}
```
