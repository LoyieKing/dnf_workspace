# DelMaterialOfRecipe

`_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb`

`expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int, PacketGuard*, bool&)`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849c204` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c204  _ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb
#           expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int, PacketGuard*, bool&)
# range [0x0849c204, 0x0849c535]
0849c204 +0x000:  push   %ebp
0849c205 +0x001:  mov    %esp,%ebp
0849c207 +0x003:  push   %esi
0849c208 +0x004:  push   %ebx
0849c209 +0x005:  sub    $0x90,%esp
0849c20f +0x00b:  movl   $0x1,-0x14(%ebp)
0849c216 +0x012:  lea    -0x50(%ebp),%eax
0849c219 +0x015:  mov    %eax,(%esp)
0849c21c +0x018:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0849c221 +0x01d:  lea    -0x5c(%ebp),%eax
0849c224 +0x020:  mov    %eax,(%esp)
0849c227 +0x023:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0849c22c +0x028:  lea    -0x60(%ebp),%eax
0849c22f +0x02b:  mov    %eax,(%esp)
0849c232 +0x02e:  call   0817f232 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x463>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x463
0849c237 +0x033:  mov    0xc(%ebp),%eax
0849c23a +0x036:  mov    %eax,(%esp)
0849c23d +0x039:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849c242 +0x03e:  movl   $0x0,0x18(%esp)
0849c24a +0x046:  movl   $0x8,0x14(%esp)
0849c252 +0x04e:  movl   $0xc,0x10(%esp)
0849c25a +0x056:  mov    0x1c(%ebp),%edx
0849c25d +0x059:  mov    %edx,0xc(%esp)
0849c261 +0x05d:  lea    -0x50(%ebp),%edx
0849c264 +0x060:  mov    %edx,0x8(%esp)
0849c268 +0x064:  mov    0x10(%ebp),%edx
0849c26b +0x067:  mov    %edx,0x4(%esp)
0849c26f +0x06b:  mov    %eax,(%esp)
0849c272 +0x06e:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
0849c277 +0x073:  mov    %eax,-0x10(%ebp)
0849c27a +0x076:  cmpl   $0x0,-0x10(%ebp)
0849c27e +0x07a:  jne    0849c2e9 <+0xe5>
0849c280 +0x07c:  mov    0x10(%ebp),%eax
0849c283 +0x07f:  mov    %eax,(%esp)
0849c286 +0x082:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0849c28b +0x087:  mov    %eax,%esi
0849c28d +0x089:  mov    0xc(%ebp),%eax
0849c290 +0x08c:  mov    %eax,(%esp)
0849c293 +0x08f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849c298 +0x094:  mov    %eax,%ebx
0849c29a +0x096:  movl   $0x5,0xc(%esp)
0849c2a2 +0x09e:  movl   $0x288,0x8(%esp)
0849c2aa +0x0a6:  movl   $&_ZZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRbE19__PRETTY_FUNCTION__,0x4(%esp)
0849c2b2 +0x0ae:  lea    -0x44(%ebp),%eax
0849c2b5 +0x0b1:  mov    %eax,(%esp)
0849c2b8 +0x0b4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849c2bd +0x0b9:  mov    %esi,0x10(%esp)
0849c2c1 +0x0bd:  mov    -0x10(%ebp),%eax
0849c2c4 +0x0c0:  mov    %eax,0xc(%esp)
0849c2c8 +0x0c4:  mov    %ebx,0x8(%esp)
0849c2cc +0x0c8:  movl   $"ExpertJobMaterial::DelMaterialOfRecipe, getCurCharacInvenR()->delete_event_items , size does not match! %d %d!=%d",0x4(%esp)
0849c2d4 +0x0d0:  lea    -0x44(%ebp),%eax
0849c2d7 +0x0d3:  mov    %eax,(%esp)
0849c2da +0x0d6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849c2df +0x0db:  mov    $0x0,%ebx
0849c2e4 +0x0e0:  jmp    0849c4f6 <+0x2f2>
0849c2e9 +0x0e5:  mov    -0x14(%ebp),%eax
0849c2ec +0x0e8:  mov    -0x10(%ebp),%edx
0849c2ef +0x0eb:  add    %eax,%edx
0849c2f1 +0x0ed:  mov    0x18(%ebp),%eax
0849c2f4 +0x0f0:  mov    %edx,0x4(%esp)
0849c2f8 +0x0f4:  mov    %eax,(%esp)
0849c2fb +0x0f7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849c300 +0x0fc:  mov    0xc(%ebp),%eax
0849c303 +0x0ff:  mov    %eax,(%esp)
0849c306 +0x102:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849c30b +0x107:  movl   $0x1,0x14(%esp)
0849c313 +0x10f:  movl   $0x8,0x10(%esp)
0849c31b +0x117:  mov    -0x14(%ebp),%edx
0849c31e +0x11a:  mov    %edx,0xc(%esp)
0849c322 +0x11e:  mov    0x14(%ebp),%edx
0849c325 +0x121:  mov    %edx,0x8(%esp)
0849c329 +0x125:  movl   $0x1,0x4(%esp)
0849c331 +0x12d:  mov    %eax,(%esp)
0849c334 +0x130:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0849c339 +0x135:  mov    %al,-0x9(%ebp)
0849c33c +0x138:  movzbl -0x9(%ebp),%eax
0849c340 +0x13c:  xor    $0x1,%eax
0849c343 +0x13f:  test   %al,%al
0849c345 +0x141:  je     0849c39f <+0x19b>
0849c347 +0x143:  mov    0xc(%ebp),%eax
0849c34a +0x146:  mov    %eax,(%esp)
0849c34d +0x149:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849c352 +0x14e:  mov    %eax,%ebx
0849c354 +0x150:  movl   $0x5,0xc(%esp)
0849c35c +0x158:  movl   $0x292,0x8(%esp)
0849c364 +0x160:  movl   $&_ZZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRbE19__PRETTY_FUNCTION__,0x4(%esp)
0849c36c +0x168:  lea    -0x34(%ebp),%eax
0849c36f +0x16b:  mov    %eax,(%esp)
0849c372 +0x16e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849c377 +0x173:  mov    0x14(%ebp),%eax
0849c37a +0x176:  mov    %eax,0xc(%esp)
0849c37e +0x17a:  mov    %ebx,0x8(%esp)
0849c382 +0x17e:  movl   $"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",0x4(%esp)
0849c38a +0x186:  lea    -0x34(%ebp),%eax
0849c38d +0x189:  mov    %eax,(%esp)
0849c390 +0x18c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849c395 +0x191:  mov    $0x0,%ebx
0849c39a +0x196:  jmp    0849c4f6 <+0x2f2>
0849c39f +0x19b:  mov    0x18(%ebp),%eax
0849c3a2 +0x19e:  movl   $0x0,0x4(%esp)
0849c3aa +0x1a6:  mov    %eax,(%esp)
0849c3ad +0x1a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849c3b2 +0x1ae:  mov    0x18(%ebp),%eax
0849c3b5 +0x1b1:  mov    0x14(%ebp),%edx
0849c3b8 +0x1b4:  mov    %edx,0x4(%esp)
0849c3bc +0x1b8:  mov    %eax,(%esp)
0849c3bf +0x1bb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849c3c4 +0x1c0:  mov    0x18(%ebp),%eax
0849c3c7 +0x1c3:  mov    -0x14(%ebp),%edx
0849c3ca +0x1c6:  mov    %edx,0x4(%esp)
0849c3ce +0x1ca:  mov    %eax,(%esp)
0849c3d1 +0x1cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849c3d6 +0x1d2:  cmpl   $0x0,-0x10(%ebp)
0849c3da +0x1d6:  jle    0849c4da <+0x2d6>
0849c3e0 +0x1dc:  lea    -0x6c(%ebp),%eax
0849c3e3 +0x1df:  lea    -0x50(%ebp),%edx
0849c3e6 +0x1e2:  mov    %edx,0x4(%esp)
0849c3ea +0x1e6:  mov    %eax,(%esp)
0849c3ed +0x1e9:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0849c3f2 +0x1ee:  sub    $0x4,%esp
0849c3f5 +0x1f1:  mov    -0x6c(%ebp),%eax
0849c3f8 +0x1f4:  mov    %eax,-0x60(%ebp)
0849c3fb +0x1f7:  jmp    0849c4ab <+0x2a7>
0849c400 +0x1fc:  lea    -0x60(%ebp),%eax
0849c403 +0x1ff:  mov    %eax,(%esp)
0849c406 +0x202:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849c40b +0x207:  mov    (%eax),%edx
0849c40d +0x209:  mov    0x18(%ebp),%eax
0849c410 +0x20c:  mov    %edx,0x4(%esp)
0849c414 +0x210:  mov    %eax,(%esp)
0849c417 +0x213:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849c41c +0x218:  lea    -0x20(%ebp),%eax
0849c41f +0x21b:  movl   $0x0,0x8(%esp)
0849c427 +0x223:  lea    -0x60(%ebp),%edx
0849c42a +0x226:  mov    %edx,0x4(%esp)
0849c42e +0x22a:  mov    %eax,(%esp)
0849c431 +0x22d:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0849c436 +0x232:  sub    $0x4,%esp
0849c439 +0x235:  lea    -0x60(%ebp),%eax
0849c43c +0x238:  mov    %eax,(%esp)
0849c43f +0x23b:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849c444 +0x240:  mov    (%eax),%edx
0849c446 +0x242:  mov    0x18(%ebp),%eax
0849c449 +0x245:  mov    %edx,0x4(%esp)
0849c44d +0x249:  mov    %eax,(%esp)
0849c450 +0x24c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849c455 +0x251:  lea    -0x1c(%ebp),%eax
0849c458 +0x254:  movl   $0x0,0x8(%esp)
0849c460 +0x25c:  lea    -0x60(%ebp),%edx
0849c463 +0x25f:  mov    %edx,0x4(%esp)
0849c467 +0x263:  mov    %eax,(%esp)
0849c46a +0x266:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0849c46f +0x26b:  sub    $0x4,%esp
0849c472 +0x26e:  lea    -0x60(%ebp),%eax
0849c475 +0x271:  mov    %eax,(%esp)
0849c478 +0x274:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849c47d +0x279:  mov    (%eax),%edx
0849c47f +0x27b:  mov    0x18(%ebp),%eax
0849c482 +0x27e:  mov    %edx,0x4(%esp)
0849c486 +0x282:  mov    %eax,(%esp)
0849c489 +0x285:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849c48e +0x28a:  lea    -0x18(%ebp),%eax
0849c491 +0x28d:  movl   $0x0,0x8(%esp)
0849c499 +0x295:  lea    -0x60(%ebp),%edx
0849c49c +0x298:  mov    %edx,0x4(%esp)
0849c4a0 +0x29c:  mov    %eax,(%esp)
0849c4a3 +0x29f:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0849c4a8 +0x2a4:  sub    $0x4,%esp
0849c4ab +0x2a7:  lea    -0x24(%ebp),%eax
0849c4ae +0x2aa:  lea    -0x50(%ebp),%edx
0849c4b1 +0x2ad:  mov    %edx,0x4(%esp)
0849c4b5 +0x2b1:  mov    %eax,(%esp)
0849c4b8 +0x2b4:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0849c4bd +0x2b9:  sub    $0x4,%esp
0849c4c0 +0x2bc:  lea    -0x24(%ebp),%eax
0849c4c3 +0x2bf:  mov    %eax,0x4(%esp)
0849c4c7 +0x2c3:  lea    -0x60(%ebp),%eax
0849c4ca +0x2c6:  mov    %eax,(%esp)
0849c4cd +0x2c9:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0849c4d2 +0x2ce:  test   %al,%al
0849c4d4 +0x2d0:  jne    0849c400 <+0x1fc>
0849c4da +0x2d6:  mov    $0x1,%ebx
0849c4df +0x2db:  jmp    0849c4f6 <+0x2f2>
0849c4e1 +0x2dd:  mov    %edx,%ebx
0849c4e3 +0x2df:  mov    %eax,%esi
0849c4e5 +0x2e1:  lea    -0x5c(%ebp),%eax
0849c4e8 +0x2e4:  mov    %eax,(%esp)
0849c4eb +0x2e7:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849c4f0 +0x2ec:  mov    %esi,%eax
0849c4f2 +0x2ee:  mov    %ebx,%edx
0849c4f4 +0x2f0:  jmp    0849c503 <+0x2ff>
0849c4f6 +0x2f2:  lea    -0x5c(%ebp),%eax
0849c4f9 +0x2f5:  mov    %eax,(%esp)
0849c4fc +0x2f8:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849c501 +0x2fd:  jmp    0849c51e <+0x31a>
0849c503 +0x2ff:  mov    %edx,%ebx
0849c505 +0x301:  mov    %eax,%esi
0849c507 +0x303:  lea    -0x50(%ebp),%eax
0849c50a +0x306:  mov    %eax,(%esp)
0849c50d +0x309:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849c512 +0x30e:  mov    %esi,%eax
0849c514 +0x310:  mov    %ebx,%edx
0849c516 +0x312:  mov    %eax,(%esp)
0849c519 +0x315:  call   08ae3750 <_Unwind_Resume>
0849c51e +0x31a:  lea    -0x50(%ebp),%eax
0849c521 +0x31d:  mov    %eax,(%esp)
0849c524 +0x320:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849c529 +0x325:  mov    %ebx,%eax
0849c52b +0x327:  lea    -0x8(%ebp),%esp
0849c52e +0x32a:  add    $0x0,%esp
0849c531 +0x32d:  pop    %ebx
0849c532 +0x32e:  pop    %esi
0849c533 +0x32f:  pop    %ebp
0849c534 +0x330:  ret
0849c535 +0x331:  nop
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::DelMaterialOfRecipe @ 0x849c204

/* expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&, int, PacketGuard*, bool&) */

undefined4 __thiscall
expert_job::ExpertJobMaterial::DelMaterialOfRecipe
          (ExpertJobMaterial *this,CUser *param_1,vector *param_2,int param_3,PacketGuard *param_4,
          bool *param_5)

{
  bool bVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_64 [4];
  vector<int,std::allocator<int>> local_60 [12];
  vector<int,std::allocator<int>> local_54 [12];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  __normal_iterator local_28 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  int local_18;
  int local_14;
  char local_d;
  
  local_18 = 1;
  std::vector<int,std::allocator<int>>::vector(local_54);
                    /* try { // try from 0849c227 to 0849c22b has its CatchHandler @ 0849c503 */
  std::vector<int,std::allocator<int>>::vector(local_60);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            (local_64);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0849c272 to 0849c4d1 has its CatchHandler @ 0849c4e1 */
  local_14 = CInventory::delete_event_items(pCVar2,param_2,local_54,param_5,0xc,8,0);
  if (local_14 == 0) {
    uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_48,
                       "bool expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, const IntPairVector&, int, PacketGuard*, bool&)"
                       ,0x288,5);
    cMyTrace::operator()
              (local_48,
               "ExpertJobMaterial::DelMaterialOfRecipe, getCurCharacInvenR()->delete_event_items , size does not match! %d %d!=%d"
               ,uVar4,local_14,uVar3);
    uVar3 = 0;
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_14 + local_18);
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_d = CInventory::delete_item(pCVar2,1,param_3,local_18,8,1);
    if (local_d == '\x01') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,param_3);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,local_18);
      if (0 < local_14) {
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar1 = __gnu_cxx::operator!=(local_64,local_28);
          if (!bVar1) break;
          piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_64);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,*piVar5);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_24,(int)local_64);
          piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_64);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,*piVar5);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_20,(int)local_64);
          piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_64);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,*piVar5);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_1c,(int)local_64);
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_38,
                         "bool expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, const IntPairVector&, int, PacketGuard*, bool&)"
                         ,0x292,5);
      cMyTrace::operator()
                (local_38,"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",
                 uVar3,param_3);
      uVar3 = 0;
    }
  }
                    /* try { // try from 0849c4fc to 0849c500 has its CatchHandler @ 0849c503 */
  std::vector<int,std::allocator<int>>::~vector(local_60);
  std::vector<int,std::allocator<int>>::~vector(local_54);
  return uVar3;
}
```
