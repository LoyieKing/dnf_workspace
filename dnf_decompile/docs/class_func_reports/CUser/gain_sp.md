# gain_sp

`_ZN5CUser7gain_spEi`

`CUser::gain_sp(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866a9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866a9a0  _ZN5CUser7gain_spEi
#           CUser::gain_sp(int)
# range [0x0866a9a0, 0x0866aad1]
0866a9a0 +0x000:  push   %ebp
0866a9a1 +0x001:  mov    %esp,%ebp
0866a9a3 +0x003:  push   %ebx
0866a9a4 +0x004:  sub    $0x14,%esp
0866a9a7 +0x007:  mov    $0x7fffffff,%eax
0866a9ac +0x00c:  mov    %eax,%ebx
0866a9ae +0x00e:  sub    0xc(%ebp),%ebx
0866a9b1 +0x011:  mov    0x8(%ebp),%eax
0866a9b4 +0x014:  mov    %eax,(%esp)
0866a9b7 +0x017:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866a9bc +0x01c:  movl   $0x0,0x4(%esp)
0866a9c4 +0x024:  mov    %eax,(%esp)
0866a9c7 +0x027:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866a9cc +0x02c:  cmp    %eax,%ebx
0866a9ce +0x02e:  setl   %al
0866a9d1 +0x031:  test   %al,%al
0866a9d3 +0x033:  je     0866a9fa <+0x5a>
0866a9d5 +0x035:  mov    0x8(%ebp),%eax
0866a9d8 +0x038:  mov    %eax,(%esp)
0866a9db +0x03b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866a9e0 +0x040:  movl   $0x0,0x8(%esp)
0866a9e8 +0x048:  movl   $0x7fffffff,0x4(%esp)
0866a9f0 +0x050:  mov    %eax,(%esp)
0866a9f3 +0x053:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0866a9f8 +0x058:  jmp    0866aa39 <+0x99>
0866a9fa +0x05a:  mov    0x8(%ebp),%eax
0866a9fd +0x05d:  mov    %eax,(%esp)
0866aa00 +0x060:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866aa05 +0x065:  movl   $0x0,0x4(%esp)
0866aa0d +0x06d:  mov    %eax,(%esp)
0866aa10 +0x070:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866aa15 +0x075:  mov    %eax,%ebx
0866aa17 +0x077:  add    0xc(%ebp),%ebx
0866aa1a +0x07a:  mov    0x8(%ebp),%eax
0866aa1d +0x07d:  mov    %eax,(%esp)
0866aa20 +0x080:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866aa25 +0x085:  movl   $0x0,0x8(%esp)
0866aa2d +0x08d:  mov    %ebx,0x4(%esp)
0866aa31 +0x091:  mov    %eax,(%esp)
0866aa34 +0x094:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0866aa39 +0x099:  mov    $0x7fffffff,%eax
0866aa3e +0x09e:  mov    %eax,%ebx
0866aa40 +0x0a0:  sub    0xc(%ebp),%ebx
0866aa43 +0x0a3:  mov    0x8(%ebp),%eax
0866aa46 +0x0a6:  mov    %eax,(%esp)
0866aa49 +0x0a9:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866aa4e +0x0ae:  movl   $0x1,0x4(%esp)
0866aa56 +0x0b6:  mov    %eax,(%esp)
0866aa59 +0x0b9:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866aa5e +0x0be:  cmp    %eax,%ebx
0866aa60 +0x0c0:  setl   %al
0866aa63 +0x0c3:  test   %al,%al
0866aa65 +0x0c5:  je     0866aa8c <+0xec>
0866aa67 +0x0c7:  mov    0x8(%ebp),%eax
0866aa6a +0x0ca:  mov    %eax,(%esp)
0866aa6d +0x0cd:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866aa72 +0x0d2:  movl   $0x1,0x8(%esp)
0866aa7a +0x0da:  movl   $0x7fffffff,0x4(%esp)
0866aa82 +0x0e2:  mov    %eax,(%esp)
0866aa85 +0x0e5:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0866aa8a +0x0ea:  jmp    0866aacb <+0x12b>
0866aa8c +0x0ec:  mov    0x8(%ebp),%eax
0866aa8f +0x0ef:  mov    %eax,(%esp)
0866aa92 +0x0f2:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866aa97 +0x0f7:  movl   $0x1,0x4(%esp)
0866aa9f +0x0ff:  mov    %eax,(%esp)
0866aaa2 +0x102:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866aaa7 +0x107:  mov    %eax,%ebx
0866aaa9 +0x109:  add    0xc(%ebp),%ebx
0866aaac +0x10c:  mov    0x8(%ebp),%eax
0866aaaf +0x10f:  mov    %eax,(%esp)
0866aab2 +0x112:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866aab7 +0x117:  movl   $0x1,0x8(%esp)
0866aabf +0x11f:  mov    %ebx,0x4(%esp)
0866aac3 +0x123:  mov    %eax,(%esp)
0866aac6 +0x126:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0866aacb +0x12b:  add    $0x14,%esp
0866aace +0x12e:  pop    %ebx
0866aacf +0x12f:  pop    %ebp
0866aad0 +0x130:  ret
0866aad1 +0x131:  nop
```

## 反编译 C

```c
// CUser::gain_sp @ 0x866a9a0

/* CUser::gain_sp(int) */

void __thiscall CUser::gain_sp(CUser *this,int param_1)

{
  SkillSlot *pSVar1;
  int iVar2;
  
  pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  iVar2 = SkillSlot::get_remain_sp_at_index(pSVar1,0);
  if (0x7fffffff - param_1 < iVar2) {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sp_at_index(pSVar1,0x7fffffff,0);
  }
  else {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sp_at_index(pSVar1,0);
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sp_at_index(pSVar1,iVar2 + param_1,0);
  }
  pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  iVar2 = SkillSlot::get_remain_sp_at_index(pSVar1,1);
  if (0x7fffffff - param_1 < iVar2) {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sp_at_index(pSVar1,0x7fffffff,1);
  }
  else {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar2 = SkillSlot::get_remain_sp_at_index(pSVar1,1);
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sp_at_index(pSVar1,iVar2 + param_1,1);
  }
  return;
}
```
