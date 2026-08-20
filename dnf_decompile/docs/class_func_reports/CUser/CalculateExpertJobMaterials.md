# CalculateExpertJobMaterials

`_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE`

`CUser::CalculateExpertJobMaterials(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ba58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ba58  _ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE
#           CUser::CalculateExpertJobMaterials(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0868ba58, 0x0868bc7b]
0868ba58 +0x000:  push   %ebp
0868ba59 +0x001:  mov    %esp,%ebp
0868ba5b +0x003:  push   %esi
0868ba5c +0x004:  push   %ebx
0868ba5d +0x005:  sub    $0x50,%esp
0868ba60 +0x008:  mov    0x8(%ebp),%eax
0868ba63 +0x00b:  mov    %eax,(%esp)
0868ba66 +0x00e:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0868ba6b +0x013:  mov    %eax,0x4(%esp)
0868ba6f +0x017:  mov    0x8(%ebp),%eax
0868ba72 +0x01a:  mov    %eax,(%esp)
0868ba75 +0x01d:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0868ba7a +0x022:  mov    %eax,%ebx
0868ba7c +0x024:  mov    0x8(%ebp),%eax
0868ba7f +0x027:  mov    %eax,(%esp)
0868ba82 +0x02a:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0868ba87 +0x02f:  mov    %eax,%esi
0868ba89 +0x031:  mov    0x8(%ebp),%eax
0868ba8c +0x034:  mov    %eax,(%esp)
0868ba8f +0x037:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868ba94 +0x03c:  mov    %ebx,0x8(%esp)
0868ba98 +0x040:  mov    %esi,0x4(%esp)
0868ba9c +0x044:  mov    %eax,(%esp)
0868ba9f +0x047:  call   0850c8a8 <_ZNK10CInventory37GetExpertJobCompoundMaterialVariationE20ENUM_EXPERT_JOB_TYPEi>  ; CInventory::GetExpertJobCompoundMaterialVariation(ENUM_EXPERT_JOB_TYPE, int) const
0868baa4 +0x04c:  fstps  -0xc(%ebp)
0868baa7 +0x04f:  mov    0xc(%ebp),%eax
0868baaa +0x052:  mov    %eax,0x4(%esp)
0868baae +0x056:  lea    -0x28(%ebp),%eax
0868bab1 +0x059:  mov    %eax,(%esp)
0868bab4 +0x05c:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
0868bab9 +0x061:  flds   -0xc(%ebp)
0868babc +0x064:  flds   ""
0868bac2 +0x06a:  fdivrp %st,%st(1)
0868bac4 +0x06c:  fstps  -0xc(%ebp)
0868bac7 +0x06f:  lea    -0x2c(%ebp),%eax
0868baca +0x072:  mov    %eax,(%esp)
0868bacd +0x075:  call   085176cc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d01>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d01
0868bad2 +0x07a:  lea    -0x30(%ebp),%eax
0868bad5 +0x07d:  mov    %eax,(%esp)
0868bad8 +0x080:  call   085176cc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d01>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d01
0868badd +0x085:  lea    -0x3c(%ebp),%eax
0868bae0 +0x088:  lea    -0x28(%ebp),%edx
0868bae3 +0x08b:  mov    %edx,0x4(%esp)
0868bae7 +0x08f:  mov    %eax,(%esp)
0868baea +0x092:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0868baef +0x097:  sub    $0x4,%esp
0868baf2 +0x09a:  mov    -0x3c(%ebp),%eax
0868baf5 +0x09d:  mov    %eax,-0x2c(%ebp)
0868baf8 +0x0a0:  lea    -0x3c(%ebp),%eax
0868bafb +0x0a3:  mov    0xc(%ebp),%edx
0868bafe +0x0a6:  mov    %edx,0x4(%esp)
0868bb02 +0x0aa:  mov    %eax,(%esp)
0868bb05 +0x0ad:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0868bb0a +0x0b2:  sub    $0x4,%esp
0868bb0d +0x0b5:  mov    -0x3c(%ebp),%eax
0868bb10 +0x0b8:  mov    %eax,-0x30(%ebp)
0868bb13 +0x0bb:  jmp    0868bbdf <+0x187>
0868bb18 +0x0c0:  lea    -0x2c(%ebp),%eax
0868bb1b +0x0c3:  mov    %eax,(%esp)
0868bb1e +0x0c6:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0868bb23 +0x0cb:  mov    %eax,%ebx
0868bb25 +0x0cd:  lea    -0x2c(%ebp),%eax
0868bb28 +0x0d0:  mov    %eax,(%esp)
0868bb2b +0x0d3:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0868bb30 +0x0d8:  mov    0x4(%eax),%eax
0868bb33 +0x0db:  mov    %eax,-0x40(%ebp)
0868bb36 +0x0de:  fildl  -0x40(%ebp)
0868bb39 +0x0e1:  fmuls  -0xc(%ebp)
0868bb3c +0x0e4:  fnstcw -0x42(%ebp)
0868bb3f +0x0e7:  movzwl -0x42(%ebp),%eax
0868bb43 +0x0eb:  mov    $0xc,%ah
0868bb45 +0x0ed:  mov    %ax,-0x44(%ebp)
0868bb49 +0x0f1:  fldcw  -0x44(%ebp)
0868bb4c +0x0f4:  fistpl -0x40(%ebp)
0868bb4f +0x0f7:  fldcw  -0x42(%ebp)
0868bb52 +0x0fa:  mov    -0x40(%ebp),%eax
0868bb55 +0x0fd:  mov    %eax,0x4(%ebx)
0868bb58 +0x100:  lea    -0x30(%ebp),%eax
0868bb5b +0x103:  mov    %eax,(%esp)
0868bb5e +0x106:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0868bb63 +0x10b:  mov    %eax,%ebx
0868bb65 +0x10d:  mov    0x4(%ebx),%esi
0868bb68 +0x110:  lea    -0x2c(%ebp),%eax
0868bb6b +0x113:  mov    %eax,(%esp)
0868bb6e +0x116:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0868bb73 +0x11b:  mov    0x4(%eax),%eax
0868bb76 +0x11e:  lea    (%esi,%eax,1),%eax
0868bb79 +0x121:  mov    %eax,0x4(%ebx)
0868bb7c +0x124:  lea    -0x30(%ebp),%eax
0868bb7f +0x127:  mov    %eax,(%esp)
0868bb82 +0x12a:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0868bb87 +0x12f:  mov    0x4(%eax),%eax
0868bb8a +0x132:  test   %eax,%eax
0868bb8c +0x134:  sete   %al
0868bb8f +0x137:  test   %al,%al
0868bb91 +0x139:  je     0868bba5 <+0x14d>
0868bb93 +0x13b:  lea    -0x30(%ebp),%eax
0868bb96 +0x13e:  mov    %eax,(%esp)
0868bb99 +0x141:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0868bb9e +0x146:  movl   $0x1,0x4(%eax)
0868bba5 +0x14d:  lea    -0x10(%ebp),%eax
0868bba8 +0x150:  movl   $0x0,0x8(%esp)
0868bbb0 +0x158:  lea    -0x2c(%ebp),%edx
0868bbb3 +0x15b:  mov    %edx,0x4(%esp)
0868bbb7 +0x15f:  mov    %eax,(%esp)
0868bbba +0x162:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0868bbbf +0x167:  sub    $0x4,%esp
0868bbc2 +0x16a:  lea    -0x14(%ebp),%eax
0868bbc5 +0x16d:  movl   $0x0,0x8(%esp)
0868bbcd +0x175:  lea    -0x30(%ebp),%edx
0868bbd0 +0x178:  mov    %edx,0x4(%esp)
0868bbd4 +0x17c:  mov    %eax,(%esp)
0868bbd7 +0x17f:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0868bbdc +0x184:  sub    $0x4,%esp
0868bbdf +0x187:  lea    -0x1c(%ebp),%eax
0868bbe2 +0x18a:  lea    -0x28(%ebp),%edx
0868bbe5 +0x18d:  mov    %edx,0x4(%esp)
0868bbe9 +0x191:  mov    %eax,(%esp)
0868bbec +0x194:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0868bbf1 +0x199:  sub    $0x4,%esp
0868bbf4 +0x19c:  lea    -0x1c(%ebp),%eax
0868bbf7 +0x19f:  mov    %eax,0x4(%esp)
0868bbfb +0x1a3:  lea    -0x2c(%ebp),%eax
0868bbfe +0x1a6:  mov    %eax,(%esp)
0868bc01 +0x1a9:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0868bc06 +0x1ae:  test   %al,%al
0868bc08 +0x1b0:  je     0868bc3c <+0x1e4>
0868bc0a +0x1b2:  lea    -0x18(%ebp),%eax
0868bc0d +0x1b5:  mov    0xc(%ebp),%edx
0868bc10 +0x1b8:  mov    %edx,0x4(%esp)
0868bc14 +0x1bc:  mov    %eax,(%esp)
0868bc17 +0x1bf:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0868bc1c +0x1c4:  sub    $0x4,%esp
0868bc1f +0x1c7:  lea    -0x18(%ebp),%eax
0868bc22 +0x1ca:  mov    %eax,0x4(%esp)
0868bc26 +0x1ce:  lea    -0x30(%ebp),%eax
0868bc29 +0x1d1:  mov    %eax,(%esp)
0868bc2c +0x1d4:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0868bc31 +0x1d9:  test   %al,%al
0868bc33 +0x1db:  je     0868bc3c <+0x1e4>
0868bc35 +0x1dd:  mov    $0x1,%eax
0868bc3a +0x1e2:  jmp    0868bc41 <+0x1e9>
0868bc3c +0x1e4:  mov    $0x0,%eax
0868bc41 +0x1e9:  test   %al,%al
0868bc43 +0x1eb:  jne    0868bb18 <+0xc0>
0868bc49 +0x1f1:  jmp    0868bc66 <+0x20e>
0868bc4b +0x1f3:  mov    %edx,%ebx
0868bc4d +0x1f5:  mov    %eax,%esi
0868bc4f +0x1f7:  lea    -0x28(%ebp),%eax
0868bc52 +0x1fa:  mov    %eax,(%esp)
0868bc55 +0x1fd:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868bc5a +0x202:  mov    %esi,%eax
0868bc5c +0x204:  mov    %ebx,%edx
0868bc5e +0x206:  mov    %eax,(%esp)
0868bc61 +0x209:  call   08ae3750 <_Unwind_Resume>
0868bc66 +0x20e:  lea    -0x28(%ebp),%eax
0868bc69 +0x211:  mov    %eax,(%esp)
0868bc6c +0x214:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868bc71 +0x219:  lea    -0x8(%ebp),%esp
0868bc74 +0x21c:  add    $0x0,%esp
0868bc77 +0x21f:  pop    %ebx
0868bc78 +0x220:  pop    %esi
0868bc79 +0x221:  pop    %ebp
0868bc7a +0x222:  ret
0868bc7b +0x223:  nop
```

## 反编译 C

```c
// CUser::CalculateExpertJobMaterials @ 0x868ba58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::CalculateExpertJobMaterials(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&) */

void __thiscall CUser::CalculateExpertJobMaterials(CUser *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  int iVar6;
  int iVar7;
  longdouble lVar8;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_34 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_2c [12];
  __normal_iterator local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  float local_10;
  
  iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
  uVar3 = GetCurExpertJobLevel(this,iVar2);
  uVar4 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  lVar8 = (longdouble)CInventory::GetExpertJobCompoundMaterialVariation(pCVar5,uVar4,uVar3);
  local_10 = (float)lVar8;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_2c,param_1);
  local_10 = local_10 / _DAT_08cf3954;
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator(local_30);
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator(local_34);
                    /* try { // try from 0868baea to 0868bc30 has its CatchHandler @ 0868bc4b */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  do {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_30,local_20);
    if (bVar1) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_34,local_1c);
      if (!bVar1) goto LAB_0868bc3c;
      bVar1 = true;
    }
    else {
LAB_0868bc3c:
      bVar1 = false;
    }
    if (!bVar1) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_2c);
      return;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_30);
    iVar6 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_30);
    *(int *)(iVar2 + 4) = (int)ROUND((float)*(int *)(iVar6 + 4) * local_10);
    iVar6 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_34);
    iVar2 = *(int *)(iVar6 + 4);
    iVar7 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_30);
    *(int *)(iVar6 + 4) = iVar2 + *(int *)(iVar7 + 4);
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_34);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_34);
      *(undefined4 *)(iVar2 + 4) = 1;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_14,(int)local_30);
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18,(int)local_34);
  } while( true );
}
```
