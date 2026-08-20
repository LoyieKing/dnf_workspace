# SetSkillLevel

`_ZN5CUser13SetSkillLevelEii`

`CUser::SetSkillLevel(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867b51c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867b51c  _ZN5CUser13SetSkillLevelEii
#           CUser::SetSkillLevel(int, int)
# range [0x0867b51c, 0x0867b6d3]
0867b51c +0x000:  push   %ebp
0867b51d +0x001:  mov    %esp,%ebp
0867b51f +0x003:  push   %edi
0867b520 +0x004:  push   %esi
0867b521 +0x005:  push   %ebx
0867b522 +0x006:  sub    $0x4c,%esp
0867b525 +0x009:  mov    0x8(%ebp),%eax
0867b528 +0x00c:  movzbl 0x711d8(%eax),%eax
0867b52f +0x013:  xor    $0x1,%eax
0867b532 +0x016:  test   %al,%al
0867b534 +0x018:  jne    0867b545 <+0x29>
0867b536 +0x01a:  mov    0x8(%ebp),%eax
0867b539 +0x01d:  mov    %eax,(%esp)
0867b53c +0x020:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867b541 +0x025:  test   %eax,%eax
0867b543 +0x027:  jne    0867b54c <+0x30>
0867b545 +0x029:  mov    $0x1,%eax
0867b54a +0x02e:  jmp    0867b551 <+0x35>
0867b54c +0x030:  mov    $0x0,%eax
0867b551 +0x035:  test   %al,%al
0867b553 +0x037:  je     0867b55f <+0x43>
0867b555 +0x039:  mov    $0x0,%eax
0867b55a +0x03e:  jmp    0867b6cb <+0x1af>
0867b55f +0x043:  mov    0x8(%ebp),%eax
0867b562 +0x046:  mov    %eax,(%esp)
0867b565 +0x049:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0867b56a +0x04e:  mov    %eax,%ebx
0867b56c +0x050:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867b571 +0x055:  mov    0xc(%ebp),%edx
0867b574 +0x058:  mov    %edx,0x8(%esp)
0867b578 +0x05c:  mov    %ebx,0x4(%esp)
0867b57c +0x060:  mov    %eax,(%esp)
0867b57f +0x063:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0867b584 +0x068:  mov    %eax,-0x1c(%ebp)
0867b587 +0x06b:  cmpl   $0x0,-0x1c(%ebp)
0867b58b +0x06f:  jne    0867b597 <+0x7b>
0867b58d +0x071:  mov    $0x0,%eax
0867b592 +0x076:  jmp    0867b6cb <+0x1af>
0867b597 +0x07b:  mov    0x8(%ebp),%eax
0867b59a +0x07e:  mov    %eax,(%esp)
0867b59d +0x081:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0867b5a2 +0x086:  test   %al,%al
0867b5a4 +0x088:  setle  %al
0867b5a7 +0x08b:  test   %al,%al
0867b5a9 +0x08d:  je     0867b5fd <+0xe1>
0867b5ab +0x08f:  mov    0x8(%ebp),%eax
0867b5ae +0x092:  mov    %eax,(%esp)
0867b5b1 +0x095:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867b5b6 +0x09a:  movsbl %al,%eax
0867b5b9 +0x09d:  mov    %eax,0x4(%esp)
0867b5bd +0x0a1:  mov    -0x1c(%ebp),%eax
0867b5c0 +0x0a4:  mov    %eax,(%esp)
0867b5c3 +0x0a7:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
0867b5c8 +0x0ac:  mov    %eax,-0x28(%ebp)
0867b5cb +0x0af:  lea    0x10(%ebp),%eax
0867b5ce +0x0b2:  mov    %eax,0x4(%esp)
0867b5d2 +0x0b6:  lea    -0x28(%ebp),%eax
0867b5d5 +0x0b9:  mov    %eax,(%esp)
0867b5d8 +0x0bc:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0867b5dd +0x0c1:  movl   $0x0,-0x24(%ebp)
0867b5e4 +0x0c8:  mov    %eax,0x4(%esp)
0867b5e8 +0x0cc:  lea    -0x24(%ebp),%eax
0867b5eb +0x0cf:  mov    %eax,(%esp)
0867b5ee +0x0d2:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0867b5f3 +0x0d7:  mov    (%eax),%eax
0867b5f5 +0x0d9:  mov    %eax,0x10(%ebp)
0867b5f8 +0x0dc:  jmp    0867b683 <+0x167>
0867b5fd +0x0e1:  mov    0x8(%ebp),%eax
0867b600 +0x0e4:  mov    %eax,(%esp)
0867b603 +0x0e7:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0867b608 +0x0ec:  movsbl %al,%ebx
0867b60b +0x0ef:  mov    0x8(%ebp),%eax
0867b60e +0x0f2:  mov    %eax,(%esp)
0867b611 +0x0f5:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867b616 +0x0fa:  movsbl %al,%eax
0867b619 +0x0fd:  mov    %ebx,0x8(%esp)
0867b61d +0x101:  mov    %eax,0x4(%esp)
0867b621 +0x105:  mov    -0x1c(%ebp),%eax
0867b624 +0x108:  mov    %eax,(%esp)
0867b627 +0x10b:  call   08350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>  ; CSkill::get_second_growtype_max_level(int, int) const
0867b62c +0x110:  mov    %eax,-0x2c(%ebp)
0867b62f +0x113:  mov    -0x2c(%ebp),%eax
0867b632 +0x116:  test   %eax,%eax
0867b634 +0x118:  jne    0867b656 <+0x13a>
0867b636 +0x11a:  mov    0x8(%ebp),%eax
0867b639 +0x11d:  mov    %eax,(%esp)
0867b63c +0x120:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867b641 +0x125:  movsbl %al,%eax
0867b644 +0x128:  mov    %eax,0x4(%esp)
0867b648 +0x12c:  mov    -0x1c(%ebp),%eax
0867b64b +0x12f:  mov    %eax,(%esp)
0867b64e +0x132:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
0867b653 +0x137:  mov    %eax,-0x2c(%ebp)
0867b656 +0x13a:  lea    0x10(%ebp),%eax
0867b659 +0x13d:  mov    %eax,0x4(%esp)
0867b65d +0x141:  lea    -0x2c(%ebp),%eax
0867b660 +0x144:  mov    %eax,(%esp)
0867b663 +0x147:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0867b668 +0x14c:  movl   $0x0,-0x20(%ebp)
0867b66f +0x153:  mov    %eax,0x4(%esp)
0867b673 +0x157:  lea    -0x20(%ebp),%eax
0867b676 +0x15a:  mov    %eax,(%esp)
0867b679 +0x15d:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0867b67e +0x162:  mov    (%eax),%eax
0867b680 +0x164:  mov    %eax,0x10(%ebp)
0867b683 +0x167:  mov    0x8(%ebp),%eax
0867b686 +0x16a:  mov    %eax,(%esp)
0867b689 +0x16d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0867b68e +0x172:  mov    %eax,%esi
0867b690 +0x174:  mov    0x10(%ebp),%edi
0867b693 +0x177:  mov    0x8(%ebp),%eax
0867b696 +0x17a:  mov    %eax,(%esp)
0867b699 +0x17d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0867b69e +0x182:  mov    %eax,%ebx
0867b6a0 +0x184:  mov    0x8(%ebp),%eax
0867b6a3 +0x187:  mov    %eax,(%esp)
0867b6a6 +0x18a:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867b6ab +0x18f:  mov    %esi,0x10(%esp)
0867b6af +0x193:  mov    %edi,0xc(%esp)
0867b6b3 +0x197:  mov    0xc(%ebp),%edx
0867b6b6 +0x19a:  mov    %edx,0x8(%esp)
0867b6ba +0x19e:  mov    %ebx,0x4(%esp)
0867b6be +0x1a2:  mov    %eax,(%esp)
0867b6c1 +0x1a5:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0867b6c6 +0x1aa:  mov    $0x1,%eax
0867b6cb +0x1af:  add    $0x4c,%esp
0867b6ce +0x1b2:  pop    %ebx
0867b6cf +0x1b3:  pop    %esi
0867b6d0 +0x1b4:  pop    %edi
0867b6d1 +0x1b5:  pop    %ebp
0867b6d2 +0x1b6:  ret
0867b6d3 +0x1b7:  nop
```

## 反编译 C

```c
// CUser::SetSkillLevel @ 0x867b51c

/* CUser::SetSkillLevel(int, int) */

undefined4 __thiscall CUser::SetSkillLevel(CUser *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  SkillSlot *pSVar9;
  int local_30;
  int local_2c [3];
  CSkill *local_20;
  
  if (this[0x711d8] == (CUser)0x1) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_0867b551;
    }
  }
  bVar1 = true;
LAB_0867b551:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    iVar6 = G_CDataManager();
    local_20 = (CSkill *)CDataManager::find_skill(iVar6,iVar4);
    if (local_20 == (CSkill *)0x0) {
      uVar5 = 0;
    }
    else {
      cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
      if (cVar2 < '\x01') {
        cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
        local_2c[0] = CSkill::get_type_max_level(local_20,(int)cVar2);
        piVar7 = std::min<int>(local_2c,&param_2);
        local_2c[1] = 0;
        piVar7 = std::max<int>(local_2c + 1,piVar7);
        param_2 = *piVar7;
      }
      else {
        cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
        cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
        local_30 = CSkill::get_second_growtype_max_level(local_20,(int)cVar3,(int)cVar2);
        if (local_30 == 0) {
          cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
          local_30 = CSkill::get_type_max_level(local_20,(int)cVar2);
        }
        piVar7 = std::min<int>(&local_30,&param_2);
        local_2c[2] = 0;
        piVar7 = std::max<int>(local_2c + 2,piVar7);
        param_2 = *piVar7;
      }
      uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      iVar4 = param_2;
      uVar8 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::growtype_skill(pSVar9,uVar8,param_1,iVar4,uVar5);
      uVar5 = 1;
    }
  }
  return uVar5;
}
```
