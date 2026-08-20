# _CheckCompoundSkill

`_ZN5CUser19_CheckCompoundSkillEPK14CStackableItemb`

`CUser::_CheckCompoundSkill(CStackableItem const*, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08670f1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08670f1e  _ZN5CUser19_CheckCompoundSkillEPK14CStackableItemb
#           CUser::_CheckCompoundSkill(CStackableItem const*, bool)
# range [0x08670f1e, 0x08671101]
08670f1e +0x000:  push   %ebp
08670f1f +0x001:  mov    %esp,%ebp
08670f21 +0x003:  push   %esi
08670f22 +0x004:  push   %ebx
08670f23 +0x005:  sub    $0x50,%esp
08670f26 +0x008:  mov    0x10(%ebp),%eax
08670f29 +0x00b:  mov    %al,-0x3c(%ebp)
08670f2c +0x00e:  mov    0xc(%ebp),%eax
08670f2f +0x011:  movzbl 0x198(%eax),%eax
08670f36 +0x018:  test   %al,%al
08670f38 +0x01a:  je     08670f5e <+0x40>
08670f3a +0x01c:  movl   $0x7,0x4(%esp)
08670f42 +0x024:  mov    0x8(%ebp),%eax
08670f45 +0x027:  mov    %eax,(%esp)
08670f48 +0x02a:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08670f4d +0x02f:  xor    $0x1,%eax
08670f50 +0x032:  test   %al,%al
08670f52 +0x034:  je     08670f5e <+0x40>
08670f54 +0x036:  mov    $0x0,%eax
08670f59 +0x03b:  jmp    086710fa <+0x1dc>
08670f5e +0x040:  mov    0xc(%ebp),%eax
08670f61 +0x043:  movzbl 0x199(%eax),%eax
08670f68 +0x04a:  test   %al,%al
08670f6a +0x04c:  je     08671069 <+0x14b>
08670f70 +0x052:  mov    0xc(%ebp),%eax
08670f73 +0x055:  add    $0x18c,%eax
08670f78 +0x05a:  mov    %eax,0x4(%esp)
08670f7c +0x05e:  lea    -0x30(%ebp),%eax
08670f7f +0x061:  mov    %eax,(%esp)
08670f82 +0x064:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
08670f87 +0x069:  mov    0x8(%ebp),%eax
08670f8a +0x06c:  mov    %eax,(%esp)
08670f8d +0x06f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08670f92 +0x074:  mov    %eax,%ebx
08670f94 +0x076:  mov    0x8(%ebp),%eax
08670f97 +0x079:  mov    %eax,(%esp)
08670f9a +0x07c:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
08670f9f +0x081:  movl   $0x2,0xc(%esp)
08670fa7 +0x089:  lea    -0x30(%ebp),%edx
08670faa +0x08c:  mov    %edx,0x8(%esp)
08670fae +0x090:  mov    %ebx,0x4(%esp)
08670fb2 +0x094:  mov    %eax,(%esp)
08670fb5 +0x097:  call   08604c02 <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi>  ; SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >, int) const
08670fba +0x09c:  mov    %eax,%ebx
08670fbc +0x09e:  xor    $0x1,%ebx
08670fbf +0x0a1:  lea    -0x30(%ebp),%eax
08670fc2 +0x0a4:  mov    %eax,(%esp)
08670fc5 +0x0a7:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670fca +0x0ac:  test   %bl,%bl
08670fcc +0x0ae:  jne    08670feb <+0xcd>
08670fce +0x0b0:  jmp    0867103c <+0x11e>
08670fd0 +0x0b2:  mov    %edx,%ebx
08670fd2 +0x0b4:  mov    %eax,%esi
08670fd4 +0x0b6:  lea    -0x30(%ebp),%eax
08670fd7 +0x0b9:  mov    %eax,(%esp)
08670fda +0x0bc:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670fdf +0x0c1:  mov    %esi,%eax
08670fe1 +0x0c3:  mov    %ebx,%edx
08670fe3 +0x0c5:  mov    %eax,(%esp)
08670fe6 +0x0c8:  call   08ae3750 <_Unwind_Resume>
08670feb +0x0cd:  mov    0x8(%ebp),%eax
08670fee +0x0d0:  mov    %eax,(%esp)
08670ff1 +0x0d3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08670ff6 +0x0d8:  mov    %eax,%ebx
08670ff8 +0x0da:  movl   $0x0,0xc(%esp)
08671000 +0x0e2:  movl   $0x5c68,0x8(%esp)
08671008 +0x0ea:  movl   $&_ZZN5CUser19_CheckCompoundSkillEPK14CStackableItembE19__PRETTY_FUNCTION__,0x4(%esp)
08671010 +0x0f2:  lea    -0x24(%ebp),%eax
08671013 +0x0f5:  mov    %eax,(%esp)
08671016 +0x0f8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0867101b +0x0fd:  mov    %ebx,0x8(%esp)
0867101f +0x101:  movl   $"EXPERT_JOB_ERROR : check_skill_list() charac_no(%d)",0x4(%esp)
08671027 +0x109:  lea    -0x24(%ebp),%eax
0867102a +0x10c:  mov    %eax,(%esp)
0867102d +0x10f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08671032 +0x114:  mov    $0x0,%eax
08671037 +0x119:  jmp    086710fa <+0x1dc>
0867103c +0x11e:  mov    0xc(%ebp),%eax
0867103f +0x121:  mov    %eax,0x4(%esp)
08671043 +0x125:  mov    0x8(%ebp),%eax
08671046 +0x128:  mov    %eax,(%esp)
08671049 +0x12b:  call   0849b590 <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem>  ; expert_job::CExpertJob::IsLearnRecipe(CUser*, CStackableItem const*)
0867104e +0x130:  xor    $0x1,%eax
08671051 +0x133:  test   %al,%al
08671053 +0x135:  je     0867105f <+0x141>
08671055 +0x137:  mov    $0x0,%eax
0867105a +0x13c:  jmp    086710fa <+0x1dc>
0867105f +0x141:  mov    $0x1,%eax
08671064 +0x146:  jmp    086710fa <+0x1dc>
08671069 +0x14b:  cmpb   $0x0,-0x3c(%ebp)
0867106d +0x14f:  jne    086710f5 <+0x1d7>
08671073 +0x155:  mov    0xc(%ebp),%eax
08671076 +0x158:  add    $0x18c,%eax
0867107b +0x15d:  mov    %eax,0x4(%esp)
0867107f +0x161:  lea    -0x14(%ebp),%eax
08671082 +0x164:  mov    %eax,(%esp)
08671085 +0x167:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
0867108a +0x16c:  mov    0x8(%ebp),%eax
0867108d +0x16f:  mov    %eax,(%esp)
08671090 +0x172:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08671095 +0x177:  mov    %eax,%ebx
08671097 +0x179:  mov    0x8(%ebp),%eax
0867109a +0x17c:  mov    %eax,(%esp)
0867109d +0x17f:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
086710a2 +0x184:  movl   $0x2,0xc(%esp)
086710aa +0x18c:  lea    -0x14(%ebp),%edx
086710ad +0x18f:  mov    %edx,0x8(%esp)
086710b1 +0x193:  mov    %ebx,0x4(%esp)
086710b5 +0x197:  mov    %eax,(%esp)
086710b8 +0x19a:  call   08604c02 <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi>  ; SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >, int) const
086710bd +0x19f:  mov    %eax,%ebx
086710bf +0x1a1:  xor    $0x1,%ebx
086710c2 +0x1a4:  lea    -0x14(%ebp),%eax
086710c5 +0x1a7:  mov    %eax,(%esp)
086710c8 +0x1aa:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086710cd +0x1af:  test   %bl,%bl
086710cf +0x1b1:  jne    086710ee <+0x1d0>
086710d1 +0x1b3:  jmp    086710f5 <+0x1d7>
086710d3 +0x1b5:  mov    %edx,%ebx
086710d5 +0x1b7:  mov    %eax,%esi
086710d7 +0x1b9:  lea    -0x14(%ebp),%eax
086710da +0x1bc:  mov    %eax,(%esp)
086710dd +0x1bf:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086710e2 +0x1c4:  mov    %esi,%eax
086710e4 +0x1c6:  mov    %ebx,%edx
086710e6 +0x1c8:  mov    %eax,(%esp)
086710e9 +0x1cb:  call   08ae3750 <_Unwind_Resume>
086710ee +0x1d0:  mov    $0x0,%eax
086710f3 +0x1d5:  jmp    086710fa <+0x1dc>
086710f5 +0x1d7:  mov    $0x1,%eax
086710fa +0x1dc:  add    $0x50,%esp
086710fd +0x1df:  pop    %ebx
086710fe +0x1e0:  pop    %esi
086710ff +0x1e1:  pop    %ebp
08671100 +0x1e2:  ret
08671101 +0x1e3:  nop
```

## 反编译 C

```c
// CUser::_CheckCompoundSkill @ 0x8670f1e

/* CUser::_CheckCompoundSkill(CStackableItem const*, bool) */

undefined4 __thiscall CUser::_CheckCompoundSkill(CUser *this,CStackableItem *param_1,bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  SkillSlot *pSVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_34 [12];
  cMyTrace local_28 [16];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_18 [12];
  
  if ((param_1[0x198] == (CStackableItem)0x0) ||
     (cVar1 = isAffectedPremium(this,7), cVar1 == '\x01')) {
    if (param_1[0x199] == (CStackableItem)0x0) {
      if (!param_2) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                  (local_18,(vector *)(param_1 + 0x18c));
        uVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
        pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
                    /* try { // try from 086710b8 to 086710bc has its CatchHandler @ 086710d3 */
        cVar1 = SkillSlot::check_skill_list(pSVar3,uVar2,local_18,2);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_18);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                (local_34,(vector *)(param_1 + 0x18c));
      uVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
                    /* try { // try from 08670fb5 to 08670fb9 has its CatchHandler @ 08670fd0 */
      cVar1 = SkillSlot::check_skill_list(pSVar3,uVar2,local_34,2);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_34);
      if (cVar1 == '\x01') {
        cVar1 = expert_job::CExpertJob::IsLearnRecipe(this,param_1);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_28,"bool CUser::_CheckCompoundSkill(const CStackableItem*, bool)",
                           0x5c68,0);
        cMyTrace::operator()(local_28,"EXPERT_JOB_ERROR : check_skill_list() charac_no(%d)",uVar2);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
