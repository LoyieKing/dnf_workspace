# initTPSkill

`_ZN5CUser11initTPSkillEv`

`CUser::initTPSkill()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fdbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fdbc  _ZN5CUser11initTPSkillEv
#           CUser::initTPSkill()
# range [0x0868fdbc, 0x0868fe01]
0868fdbc +0x00:  push   %ebp
0868fdbd +0x01:  mov    %esp,%ebp
0868fdbf +0x03:  sub    $0x28,%esp
0868fdc2 +0x06:  movl   $0x500723d0,-0xc(%ebp)
0868fdc9 +0x0d:  mov    0x8(%ebp),%eax
0868fdcc +0x10:  mov    %eax,(%esp)
0868fdcf +0x13:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868fdd4 +0x18:  mov    0x7b(%eax),%eax
0868fdd7 +0x1b:  cmp    -0xc(%ebp),%eax
0868fdda +0x1e:  setl   %al
0868fddd +0x21:  test   %al,%al
0868fddf +0x23:  je     0868fdff <+0x43>
0868fde1 +0x25:  mov    0x8(%ebp),%eax
0868fde4 +0x28:  mov    %eax,(%esp)
0868fde7 +0x2b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0868fdec +0x30:  mov    %eax,(%esp)
0868fdef +0x33:  call   08608a1e <_ZN9SkillSlot20initialize_sfp_skillEv>  ; SkillSlot::initialize_sfp_skill()
0868fdf4 +0x38:  mov    0x8(%ebp),%eax
0868fdf7 +0x3b:  mov    %eax,(%esp)
0868fdfa +0x3e:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0868fdff +0x43:  leave
0868fe00 +0x44:  ret
0868fe01 +0x45:  nop
```

## 反编译 C

```c
// CUser::initTPSkill @ 0x868fdbc

/* CUser::initTPSkill() */

void __thiscall CUser::initTPSkill(CUser *this)

{
  int iVar1;
  SkillSlot *this_00;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (*(int *)(iVar1 + 0x7b) < 0x500723d0) {
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::initialize_sfp_skill(this_00);
    send_skill_info(this);
  }
  return;
}
```
