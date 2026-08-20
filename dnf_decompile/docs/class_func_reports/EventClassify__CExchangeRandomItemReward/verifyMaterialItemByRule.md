# verifyMaterialItemByRule

`_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE`

`EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule(CUser*, std::vector<int, std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CExchangeRandomItemReward` | `0x0810eb30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810eb30  _ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE
#           EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule(CUser*, std::vector<int, std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0810eb30, 0x0810ee3f]
0810eb30 +0x000:  push   %ebp
0810eb31 +0x001:  mov    %esp,%ebp
0810eb33 +0x003:  push   %ebx
0810eb34 +0x004:  sub    $0xb4,%esp
0810eb3a +0x00a:  mov    0x8(%ebp),%eax
0810eb3d +0x00d:  mov    0x1c(%eax),%eax
0810eb40 +0x010:  movzbl 0x8(%eax),%eax
0810eb44 +0x014:  test   %al,%al
0810eb46 +0x016:  je     0810ecc0 <+0x190>
0810eb4c +0x01c:  movl   $0x0,-0x18(%ebp)
0810eb53 +0x023:  jmp    0810ec6c <+0x13c>
0810eb58 +0x028:  movl   $0x0,-0x14(%ebp)
0810eb5f +0x02f:  jmp    0810ec4f <+0x11f>
0810eb64 +0x034:  mov    -0x14(%ebp),%eax
0810eb67 +0x037:  mov    %eax,0x4(%esp)
0810eb6b +0x03b:  mov    0x10(%ebp),%eax
0810eb6e +0x03e:  mov    %eax,(%esp)
0810eb71 +0x041:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810eb76 +0x046:  mov    (%eax),%ebx
0810eb78 +0x048:  mov    0xc(%ebp),%eax
0810eb7b +0x04b:  mov    %eax,(%esp)
0810eb7e +0x04e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810eb83 +0x053:  lea    -0x65(%ebp),%edx
0810eb86 +0x056:  mov    %ebx,0xc(%esp)
0810eb8a +0x05a:  movl   $0x1,0x8(%esp)
0810eb92 +0x062:  mov    %eax,0x4(%esp)
0810eb96 +0x066:  mov    %edx,(%esp)
0810eb99 +0x069:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0810eb9e +0x06e:  sub    $0x4,%esp
0810eba1 +0x071:  mov    0x8(%ebp),%eax
0810eba4 +0x074:  mov    0x1c(%eax),%eax
0810eba7 +0x077:  lea    0xc(%eax),%edx
0810ebaa +0x07a:  mov    -0x18(%ebp),%eax
0810ebad +0x07d:  mov    %eax,0x4(%esp)
0810ebb1 +0x081:  mov    %edx,(%esp)
0810ebb4 +0x084:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ebb9 +0x089:  mov    (%eax),%eax
0810ebbb +0x08b:  mov    %eax,%edx
0810ebbd +0x08d:  mov    -0x63(%ebp),%eax
0810ebc0 +0x090:  cmp    %eax,%edx
0810ebc2 +0x092:  jne    0810ebed <+0xbd>
0810ebc4 +0x094:  mov    0x8(%ebp),%eax
0810ebc7 +0x097:  mov    0x1c(%eax),%eax
0810ebca +0x09a:  lea    0xc(%eax),%edx
0810ebcd +0x09d:  mov    -0x18(%ebp),%eax
0810ebd0 +0x0a0:  mov    %eax,0x4(%esp)
0810ebd4 +0x0a4:  mov    %edx,(%esp)
0810ebd7 +0x0a7:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ebdc +0x0ac:  mov    0x4(%eax),%edx
0810ebdf +0x0af:  mov    -0x5e(%ebp),%eax
0810ebe2 +0x0b2:  cmp    %eax,%edx
0810ebe4 +0x0b4:  jg     0810ebed <+0xbd>
0810ebe6 +0x0b6:  mov    $0x1,%eax
0810ebeb +0x0bb:  jmp    0810ebf2 <+0xc2>
0810ebed +0x0bd:  mov    $0x0,%eax
0810ebf2 +0x0c2:  test   %al,%al
0810ebf4 +0x0c4:  je     0810ec4b <+0x11b>
0810ebf6 +0x0c6:  mov    0x8(%ebp),%eax
0810ebf9 +0x0c9:  mov    0x1c(%eax),%eax
0810ebfc +0x0cc:  lea    0xc(%eax),%edx
0810ebff +0x0cf:  mov    -0x18(%ebp),%eax
0810ec02 +0x0d2:  mov    %eax,0x4(%esp)
0810ec06 +0x0d6:  mov    %edx,(%esp)
0810ec09 +0x0d9:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ec0e +0x0de:  lea    0x4(%eax),%ebx
0810ec11 +0x0e1:  mov    -0x14(%ebp),%eax
0810ec14 +0x0e4:  mov    %eax,0x4(%esp)
0810ec18 +0x0e8:  mov    0x10(%ebp),%eax
0810ec1b +0x0eb:  mov    %eax,(%esp)
0810ec1e +0x0ee:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810ec23 +0x0f3:  lea    -0x28(%ebp),%edx
0810ec26 +0x0f6:  mov    %ebx,0x8(%esp)
0810ec2a +0x0fa:  mov    %eax,0x4(%esp)
0810ec2e +0x0fe:  mov    %edx,(%esp)
0810ec31 +0x101:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
0810ec36 +0x106:  sub    $0x4,%esp
0810ec39 +0x109:  lea    -0x28(%ebp),%eax
0810ec3c +0x10c:  mov    %eax,0x4(%esp)
0810ec40 +0x110:  mov    0x14(%ebp),%eax
0810ec43 +0x113:  mov    %eax,(%esp)
0810ec46 +0x116:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0810ec4b +0x11b:  addl   $0x1,-0x14(%ebp)
0810ec4f +0x11f:  mov    0x10(%ebp),%eax
0810ec52 +0x122:  mov    %eax,(%esp)
0810ec55 +0x125:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0810ec5a +0x12a:  cmp    -0x14(%ebp),%eax
0810ec5d +0x12d:  seta   %al
0810ec60 +0x130:  test   %al,%al
0810ec62 +0x132:  jne    0810eb64 <+0x34>
0810ec68 +0x138:  addl   $0x1,-0x18(%ebp)
0810ec6c +0x13c:  mov    0x8(%ebp),%eax
0810ec6f +0x13f:  mov    0x1c(%eax),%eax
0810ec72 +0x142:  add    $0xc,%eax
0810ec75 +0x145:  mov    %eax,(%esp)
0810ec78 +0x148:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810ec7d +0x14d:  cmp    -0x18(%ebp),%eax
0810ec80 +0x150:  seta   %al
0810ec83 +0x153:  test   %al,%al
0810ec85 +0x155:  jne    0810eb58 <+0x28>
0810ec8b +0x15b:  mov    0x14(%ebp),%eax
0810ec8e +0x15e:  mov    %eax,(%esp)
0810ec91 +0x161:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810ec96 +0x166:  mov    %eax,%ebx
0810ec98 +0x168:  mov    0x8(%ebp),%eax
0810ec9b +0x16b:  mov    0x1c(%eax),%eax
0810ec9e +0x16e:  add    $0xc,%eax
0810eca1 +0x171:  mov    %eax,(%esp)
0810eca4 +0x174:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810eca9 +0x179:  cmp    %eax,%ebx
0810ecab +0x17b:  setne  %al
0810ecae +0x17e:  test   %al,%al
0810ecb0 +0x180:  je     0810ee1f <+0x2ef>
0810ecb6 +0x186:  mov    $0x16,%eax
0810ecbb +0x18b:  jmp    0810ee3a <+0x30a>
0810ecc0 +0x190:  movl   $0x0,-0x10(%ebp)
0810ecc7 +0x197:  jmp    0810edfd <+0x2cd>
0810eccc +0x19c:  movl   $0x0,-0xc(%ebp)
0810ecd3 +0x1a3:  jmp    0810edce <+0x29e>
0810ecd8 +0x1a8:  mov    -0xc(%ebp),%eax
0810ecdb +0x1ab:  mov    %eax,0x4(%esp)
0810ecdf +0x1af:  mov    0x10(%ebp),%eax
0810ece2 +0x1b2:  mov    %eax,(%esp)
0810ece5 +0x1b5:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810ecea +0x1ba:  mov    (%eax),%ebx
0810ecec +0x1bc:  mov    0xc(%ebp),%eax
0810ecef +0x1bf:  mov    %eax,(%esp)
0810ecf2 +0x1c2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810ecf7 +0x1c7:  lea    -0xa2(%ebp),%edx
0810ecfd +0x1cd:  mov    %ebx,0xc(%esp)
0810ed01 +0x1d1:  movl   $0x1,0x8(%esp)
0810ed09 +0x1d9:  mov    %eax,0x4(%esp)
0810ed0d +0x1dd:  mov    %edx,(%esp)
0810ed10 +0x1e0:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0810ed15 +0x1e5:  sub    $0x4,%esp
0810ed18 +0x1e8:  mov    0x8(%ebp),%eax
0810ed1b +0x1eb:  mov    0x1c(%eax),%eax
0810ed1e +0x1ee:  lea    0xc(%eax),%edx
0810ed21 +0x1f1:  mov    -0x10(%ebp),%eax
0810ed24 +0x1f4:  mov    %eax,0x4(%esp)
0810ed28 +0x1f8:  mov    %edx,(%esp)
0810ed2b +0x1fb:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ed30 +0x200:  mov    (%eax),%eax
0810ed32 +0x202:  mov    %eax,%edx
0810ed34 +0x204:  mov    -0xa0(%ebp),%eax
0810ed3a +0x20a:  cmp    %eax,%edx
0810ed3c +0x20c:  jne    0810ed6a <+0x23a>
0810ed3e +0x20e:  mov    0x8(%ebp),%eax
0810ed41 +0x211:  mov    0x1c(%eax),%eax
0810ed44 +0x214:  lea    0xc(%eax),%edx
0810ed47 +0x217:  mov    -0x10(%ebp),%eax
0810ed4a +0x21a:  mov    %eax,0x4(%esp)
0810ed4e +0x21e:  mov    %edx,(%esp)
0810ed51 +0x221:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ed56 +0x226:  mov    0x4(%eax),%edx
0810ed59 +0x229:  mov    -0x9b(%ebp),%eax
0810ed5f +0x22f:  cmp    %eax,%edx
0810ed61 +0x231:  jg     0810ed6a <+0x23a>
0810ed63 +0x233:  mov    $0x1,%eax
0810ed68 +0x238:  jmp    0810ed6f <+0x23f>
0810ed6a +0x23a:  mov    $0x0,%eax
0810ed6f +0x23f:  test   %al,%al
0810ed71 +0x241:  je     0810edca <+0x29a>
0810ed73 +0x243:  mov    0x8(%ebp),%eax
0810ed76 +0x246:  mov    0x1c(%eax),%eax
0810ed79 +0x249:  lea    0xc(%eax),%edx
0810ed7c +0x24c:  mov    -0x10(%ebp),%eax
0810ed7f +0x24f:  mov    %eax,0x4(%esp)
0810ed83 +0x253:  mov    %edx,(%esp)
0810ed86 +0x256:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ed8b +0x25b:  lea    0x4(%eax),%ebx
0810ed8e +0x25e:  mov    -0xc(%ebp),%eax
0810ed91 +0x261:  mov    %eax,0x4(%esp)
0810ed95 +0x265:  mov    0x10(%ebp),%eax
0810ed98 +0x268:  mov    %eax,(%esp)
0810ed9b +0x26b:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810eda0 +0x270:  lea    -0x20(%ebp),%edx
0810eda3 +0x273:  mov    %ebx,0x8(%esp)
0810eda7 +0x277:  mov    %eax,0x4(%esp)
0810edab +0x27b:  mov    %edx,(%esp)
0810edae +0x27e:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
0810edb3 +0x283:  sub    $0x4,%esp
0810edb6 +0x286:  lea    -0x20(%ebp),%eax
0810edb9 +0x289:  mov    %eax,0x4(%esp)
0810edbd +0x28d:  mov    0x14(%ebp),%eax
0810edc0 +0x290:  mov    %eax,(%esp)
0810edc3 +0x293:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0810edc8 +0x298:  jmp    0810ede7 <+0x2b7>
0810edca +0x29a:  addl   $0x1,-0xc(%ebp)
0810edce +0x29e:  mov    0x10(%ebp),%eax
0810edd1 +0x2a1:  mov    %eax,(%esp)
0810edd4 +0x2a4:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0810edd9 +0x2a9:  cmp    -0xc(%ebp),%eax
0810eddc +0x2ac:  seta   %al
0810eddf +0x2af:  test   %al,%al
0810ede1 +0x2b1:  jne    0810ecd8 <+0x1a8>
0810ede7 +0x2b7:  mov    0x14(%ebp),%eax
0810edea +0x2ba:  mov    %eax,(%esp)
0810eded +0x2bd:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0810edf2 +0x2c2:  xor    $0x1,%eax
0810edf5 +0x2c5:  test   %al,%al
0810edf7 +0x2c7:  jne    0810ee1e <+0x2ee>
0810edf9 +0x2c9:  addl   $0x1,-0x10(%ebp)
0810edfd +0x2cd:  mov    0x8(%ebp),%eax
0810ee00 +0x2d0:  mov    0x1c(%eax),%eax
0810ee03 +0x2d3:  add    $0xc,%eax
0810ee06 +0x2d6:  mov    %eax,(%esp)
0810ee09 +0x2d9:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810ee0e +0x2de:  cmp    -0x10(%ebp),%eax
0810ee11 +0x2e1:  seta   %al
0810ee14 +0x2e4:  test   %al,%al
0810ee16 +0x2e6:  jne    0810eccc <+0x19c>
0810ee1c +0x2ec:  jmp    0810ee1f <+0x2ef>
0810ee1e +0x2ee:  nop
0810ee1f +0x2ef:  mov    0x14(%ebp),%eax
0810ee22 +0x2f2:  mov    %eax,(%esp)
0810ee25 +0x2f5:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0810ee2a +0x2fa:  test   %al,%al
0810ee2c +0x2fc:  je     0810ee35 <+0x305>
0810ee2e +0x2fe:  mov    $0x16,%eax
0810ee33 +0x303:  jmp    0810ee3a <+0x30a>
0810ee35 +0x305:  mov    $0x0,%eax
0810ee3a +0x30a:  mov    -0x4(%ebp),%ebx
0810ee3d +0x30d:  leave
0810ee3e +0x30e:  ret
0810ee3f +0x30f:  nop
```

## 反编译 C

```c
// EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule @ 0x810eb30

/* EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule(CUser*, std::vector<int,
   std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
    */

undefined4 __thiscall
EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule
          (CExchangeRandomItemReward *this,CUser *param_1,vector *param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_a6 [2];
  int local_a4;
  int local_9f;
  undefined1 local_69 [2];
  int local_67;
  int local_62;
  int local_2c [2];
  int local_24 [2];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*(char *)(*(int *)(this + 0x1c) + 8) == '\0') {
    local_14 = 0;
    while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (*(int *)(this + 0x1c) + 0xc)), local_14 < uVar4) {
      local_10 = 0;
      while (uVar4 = std::vector<int,std::allocator<int>>::size
                               ((vector<int,std::allocator<int>> *)param_2), local_10 < uVar4) {
        std::vector<int,std::allocator<int>>::operator[]
                  ((vector<int,std::allocator<int>> *)param_2,local_10);
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_a6,iVar5);
        piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (*(int *)(this + 0x1c) + 0xc),local_14);
        if ((*piVar3 == local_a4) &&
           (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (*(int *)(this + 0x1c) + 0xc),local_14),
           *(int *)(iVar5 + 4) <= local_9f)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x1c) + 0xc),local_14);
          piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)param_2,local_10);
          std::make_pair<int&,int&>(local_24,piVar3);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                     (pair *)local_24);
          break;
        }
        local_10 = local_10 + 1;
      }
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 != '\x01') break;
      local_14 = local_14 + 1;
    }
  }
  else {
    local_1c = 0;
    while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (*(int *)(this + 0x1c) + 0xc)), local_1c < uVar4) {
      local_18 = 0;
      while (uVar4 = std::vector<int,std::allocator<int>>::size
                               ((vector<int,std::allocator<int>> *)param_2), local_18 < uVar4) {
        std::vector<int,std::allocator<int>>::operator[]
                  ((vector<int,std::allocator<int>> *)param_2,local_18);
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_69,iVar5);
        piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (*(int *)(this + 0x1c) + 0xc),local_1c);
        if ((*piVar3 == local_67) &&
           (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (*(int *)(this + 0x1c) + 0xc),local_1c),
           *(int *)(iVar5 + 4) <= local_62)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x1c) + 0xc),local_1c);
          piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)param_2,local_18);
          std::make_pair<int&,int&>(local_2c,piVar3);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                     (pair *)local_2c);
        }
        local_18 = local_18 + 1;
      }
      local_1c = local_1c + 1;
    }
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3);
    iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (*(int *)(this + 0x1c) + 0xc));
    if (iVar5 != iVar6) {
      return 0x16;
    }
  }
  cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x16;
  }
  return uVar7;
}
```
