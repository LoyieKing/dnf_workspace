# _ResetSFPoint

`_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND`

`WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a5d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a5d8  _ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND
#           WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND)
# range [0x0860a5d8, 0x0860a633]
0860a5d8 +0x00:  push   %ebp
0860a5d9 +0x01:  mov    %esp,%ebp
0860a5db +0x03:  push   %ebx
0860a5dc +0x04:  sub    $0x14,%esp
0860a5df +0x07:  mov    0xc(%ebp),%eax
0860a5e2 +0x0a:  mov    %eax,(%esp)
0860a5e5 +0x0d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860a5ea +0x12:  cmp    $0x31,%eax
0860a5ed +0x15:  setle  %al
0860a5f0 +0x18:  test   %al,%al
0860a5f2 +0x1a:  jne    0860a62a <+0x52>
0860a5f4 +0x1c:  mov    0x10(%ebp),%eax
0860a5f7 +0x1f:  cmp    $0x1,%eax
0860a5fa +0x22:  jle    0860a62d <+0x55>
0860a5fc +0x24:  mov    0xc(%ebp),%eax
0860a5ff +0x27:  mov    %eax,(%esp)
0860a602 +0x2a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860a607 +0x2f:  lea    -0x31(%eax),%ebx
0860a60a +0x32:  mov    0xc(%ebp),%eax
0860a60d +0x35:  mov    %eax,(%esp)
0860a610 +0x38:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0860a615 +0x3d:  mov    0x10(%ebp),%edx
0860a618 +0x40:  mov    %edx,0x8(%esp)
0860a61c +0x44:  mov    %ebx,0x4(%esp)
0860a620 +0x48:  mov    %eax,(%esp)
0860a623 +0x4b:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0860a628 +0x50:  jmp    0860a62e <+0x56>
0860a62a +0x52:  nop
0860a62b +0x53:  jmp    0860a62e <+0x56>
0860a62d +0x55:  nop
0860a62e +0x56:  add    $0x14,%esp
0860a631 +0x59:  pop    %ebx
0860a632 +0x5a:  pop    %ebp
0860a633 +0x5b:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::_ResetSFPoint @ 0x860a5d8

/* WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND) */

void __thiscall
WongWork::CSkillChanger::_ResetSFPoint(undefined4 this,CUserCharacInfo *param_1,int param_3)

{
  int iVar1;
  SkillSlot *pSVar2;
  
  iVar1 = CUserCharacInfo::get_charac_level(param_1);
  if ((0x31 < iVar1) && (1 < param_3)) {
    iVar1 = CUserCharacInfo::get_charac_level(param_1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
    SkillSlot::set_remain_sfp_at_index(pSVar2,iVar1 + -0x31,param_3);
  }
  return;
}
```
