# _MasterNewSkill

`_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii`

`CEventCharacterHandler::_MasterNewSkill(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848e7d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848e7d6  _ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii
#           CEventCharacterHandler::_MasterNewSkill(CUser*, int, int)
# range [0x0848e7d6, 0x0848e8e1]
0848e7d6 +0x000:  push   %ebp
0848e7d7 +0x001:  mov    %esp,%ebp
0848e7d9 +0x003:  push   %ebx
0848e7da +0x004:  sub    $0x44,%esp
0848e7dd +0x007:  movl   $0x0,-0x18(%ebp)
0848e7e4 +0x00e:  mov    0xc(%ebp),%eax
0848e7e7 +0x011:  mov    %eax,(%esp)
0848e7ea +0x014:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e7ef +0x019:  mov    %eax,%ebx
0848e7f1 +0x01b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0848e7f6 +0x020:  mov    0x10(%ebp),%edx
0848e7f9 +0x023:  mov    %edx,0x8(%esp)
0848e7fd +0x027:  mov    %ebx,0x4(%esp)
0848e801 +0x02b:  mov    %eax,(%esp)
0848e804 +0x02e:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0848e809 +0x033:  mov    %eax,-0x18(%ebp)
0848e80c +0x036:  cmpl   $0x0,-0x18(%ebp)
0848e810 +0x03a:  jne    0848e81c <+0x46>
0848e812 +0x03c:  mov    $0x0,%eax
0848e817 +0x041:  jmp    0848e8db <+0x105>
0848e81c +0x046:  mov    -0x18(%ebp),%eax
0848e81f +0x049:  mov    %eax,(%esp)
0848e822 +0x04c:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
0848e827 +0x051:  mov    %eax,-0x14(%ebp)
0848e82a +0x054:  mov    0xc(%ebp),%eax
0848e82d +0x057:  mov    %eax,(%esp)
0848e830 +0x05a:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0848e835 +0x05f:  movl   $0x1,0x10(%esp)
0848e83d +0x067:  movl   $0x0,0xc(%esp)
0848e845 +0x06f:  mov    -0x14(%ebp),%edx
0848e848 +0x072:  mov    %edx,0x8(%esp)
0848e84c +0x076:  mov    0x10(%ebp),%edx
0848e84f +0x079:  mov    %edx,0x4(%esp)
0848e853 +0x07d:  mov    %eax,(%esp)
0848e856 +0x080:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
0848e85b +0x085:  mov    %eax,-0x10(%ebp)
0848e85e +0x088:  mov    0xc(%ebp),%eax
0848e861 +0x08b:  mov    %eax,(%esp)
0848e864 +0x08e:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0848e869 +0x093:  movl   $0x0,0x4(%esp)
0848e871 +0x09b:  mov    %eax,(%esp)
0848e874 +0x09e:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
0848e879 +0x0a3:  mov    %eax,-0xc(%ebp)
0848e87c +0x0a6:  cmpl   $0x0,-0xc(%ebp)
0848e880 +0x0aa:  jne    0848e889 <+0xb3>
0848e882 +0x0ac:  mov    $0x0,%eax
0848e887 +0x0b1:  jmp    0848e8db <+0x105>
0848e889 +0x0b3:  movb   $0x0,-0x1b(%ebp)
0848e88d +0x0b7:  mov    0x10(%ebp),%eax
0848e890 +0x0ba:  mov    %al,-0x1a(%ebp)
0848e893 +0x0bd:  mov    0x14(%ebp),%eax
0848e896 +0x0c0:  mov    %eax,%edx
0848e898 +0x0c2:  mov    -0x10(%ebp),%eax
0848e89b +0x0c5:  add    %eax,%eax
0848e89d +0x0c7:  add    -0xc(%ebp),%eax
0848e8a0 +0x0ca:  movzbl 0x1(%eax),%eax
0848e8a4 +0x0ce:  mov    %edx,%ecx
0848e8a6 +0x0d0:  sub    %al,%cl
0848e8a8 +0x0d2:  mov    %ecx,%eax
0848e8aa +0x0d4:  mov    %al,-0x19(%ebp)
0848e8ad +0x0d7:  movzbl -0x19(%ebp),%eax
0848e8b1 +0x0db:  test   %al,%al
0848e8b3 +0x0dd:  jg     0848e8bc <+0xe6>
0848e8b5 +0x0df:  mov    $0x0,%eax
0848e8ba +0x0e4:  jmp    0848e8db <+0x105>
0848e8bc +0x0e6:  movl   $0x1,0x8(%esp)
0848e8c4 +0x0ee:  lea    -0x1b(%ebp),%eax
0848e8c7 +0x0f1:  mov    %eax,0x4(%esp)
0848e8cb +0x0f5:  mov    0xc(%ebp),%eax
0848e8ce +0x0f8:  mov    %eax,(%esp)
0848e8d1 +0x0fb:  call   0866afa2 <_ZN5CUser16master_new_skillER14stBuySkillInfob>  ; CUser::master_new_skill(stBuySkillInfo&, bool)
0848e8d6 +0x100:  mov    $0x1,%eax
0848e8db +0x105:  add    $0x44,%esp
0848e8de +0x108:  pop    %ebx
0848e8df +0x109:  pop    %ebp
0848e8e0 +0x10a:  ret
0848e8e1 +0x10b:  nop
```

## 反编译 C

```c
// CEventCharacterHandler::_MasterNewSkill @ 0x848e7d6

/* CEventCharacterHandler::_MasterNewSkill(CUser*, int, int) */

undefined4 __thiscall
CEventCharacterHandler::_MasterNewSkill
          (CEventCharacterHandler *this,CUser *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  CSkill *this_00;
  undefined4 uVar3;
  SkillSlot *pSVar4;
  
  iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  this_00 = (CSkill *)CDataManager::find_skill(iVar2,iVar1);
  if (this_00 == (CSkill *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CSkill::get_group(this_00);
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar1 = SkillSlot::get_skillslot_no(pSVar4,param_2,uVar3,0,1);
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar2 = SkillSlot::get_skillslot_buf(pSVar4,0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else if ((char)((char)param_3 - *(char *)(iVar1 * 2 + iVar2 + 1)) < '\x01') {
      uVar3 = 0;
    }
    else {
      CUser::master_new_skill((stBuySkillInfo *)param_1,true);
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
