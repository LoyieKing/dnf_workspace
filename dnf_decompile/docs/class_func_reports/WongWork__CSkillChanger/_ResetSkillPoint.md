# _ResetSkillPoint

`_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND`

`WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a558` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a558  _ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND
#           WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND)
# range [0x0860a558, 0x0860a5d7]
0860a558 +0x00:  push   %ebp
0860a559 +0x01:  mov    %esp,%ebp
0860a55b +0x03:  push   %ebx
0860a55c +0x04:  sub    $0x24,%esp
0860a55f +0x07:  movl   $0x1,-0xc(%ebp)
0860a566 +0x0e:  jmp    0860a5bc <+0x64>
0860a568 +0x10:  mov    0xc(%ebp),%eax
0860a56b +0x13:  mov    %eax,(%esp)
0860a56e +0x16:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0860a573 +0x1b:  mov    0x10(%ebp),%edx
0860a576 +0x1e:  mov    %edx,0x4(%esp)
0860a57a +0x22:  mov    %eax,(%esp)
0860a57d +0x25:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0860a582 +0x2a:  mov    %eax,%ebx
0860a584 +0x2c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860a589 +0x31:  mov    -0xc(%ebp),%edx
0860a58c +0x34:  mov    %edx,0x4(%esp)
0860a590 +0x38:  mov    %eax,(%esp)
0860a593 +0x3b:  call   08360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>  ; CDataManager::GetSpAtLevelUp(int) const
0860a598 +0x40:  add    %eax,%ebx
0860a59a +0x42:  mov    0xc(%ebp),%eax
0860a59d +0x45:  mov    %eax,(%esp)
0860a5a0 +0x48:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0860a5a5 +0x4d:  mov    0x10(%ebp),%edx
0860a5a8 +0x50:  mov    %edx,0x8(%esp)
0860a5ac +0x54:  mov    %ebx,0x4(%esp)
0860a5b0 +0x58:  mov    %eax,(%esp)
0860a5b3 +0x5b:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0860a5b8 +0x60:  addl   $0x1,-0xc(%ebp)
0860a5bc +0x64:  mov    0xc(%ebp),%eax
0860a5bf +0x67:  mov    %eax,(%esp)
0860a5c2 +0x6a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860a5c7 +0x6f:  cmp    -0xc(%ebp),%eax
0860a5ca +0x72:  setge  %al
0860a5cd +0x75:  test   %al,%al
0860a5cf +0x77:  jne    0860a568 <+0x10>
0860a5d1 +0x79:  add    $0x24,%esp
0860a5d4 +0x7c:  pop    %ebx
0860a5d5 +0x7d:  pop    %ebp
0860a5d6 +0x7e:  ret
0860a5d7 +0x7f:  nop
```

## 反编译 C

```c
// WongWork::CSkillChanger::_ResetSkillPoint @ 0x860a558

/* WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND) */

void __thiscall
WongWork::CSkillChanger::_ResetSkillPoint
          (undefined4 this,CUserCharacInfo *param_1,undefined4 param_3)

{
  SkillSlot *pSVar1;
  CDataManager *this_00;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  local_10 = 1;
  while( true ) {
    iVar3 = CUserCharacInfo::get_charac_level(param_1);
    if (iVar3 < local_10) break;
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    iVar3 = SkillSlot::get_remain_sp_at_index(pSVar1,param_3);
    this_00 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::GetSpAtLevelUp(this_00,local_10);
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
    SkillSlot::set_remain_sp_at_index(pSVar1,iVar3 + iVar2,param_3);
    local_10 = local_10 + 1;
  }
  return;
}
```
