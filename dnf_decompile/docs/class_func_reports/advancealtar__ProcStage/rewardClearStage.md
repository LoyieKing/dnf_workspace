# rewardClearStage

`_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE`

`advancealtar::ProcStage::rewardClearStage(std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> >&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812f0fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f0fa  _ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE
#           advancealtar::ProcStage::rewardClearStage(std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> >&)
# range [0x0812f0fa, 0x0812f3ad]
0812f0fa +0x000:  push   %ebp
0812f0fb +0x001:  mov    %esp,%ebp
0812f0fd +0x003:  push   %esi
0812f0fe +0x004:  push   %ebx
0812f0ff +0x005:  sub    $0x40,%esp
0812f102 +0x008:  mov    0x8(%ebp),%eax
0812f105 +0x00b:  mov    0x70(%eax),%eax
0812f108 +0x00e:  test   %eax,%eax
0812f10a +0x010:  je     0812f3a2 <+0x2a8>
0812f110 +0x016:  mov    0xc(%ebp),%eax
0812f113 +0x019:  mov    %eax,(%esp)
0812f116 +0x01c:  call   08134c52 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x859>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x859
0812f11b +0x021:  movl   $0x0,-0x10(%ebp)
0812f122 +0x028:  mov    0x8(%ebp),%eax
0812f125 +0x02b:  mov    %eax,(%esp)
0812f128 +0x02e:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812f12d +0x033:  cmp    $0x1,%eax
0812f130 +0x036:  je     0812f159 <+0x5f>
0812f132 +0x038:  mov    0x8(%ebp),%eax
0812f135 +0x03b:  mov    0x70(%eax),%ecx
0812f138 +0x03e:  mov    0x8(%ebp),%eax
0812f13b +0x041:  mov    0x68(%eax),%eax
0812f13e +0x044:  mov    %eax,%edx
0812f140 +0x046:  mov    %edx,%eax
0812f142 +0x048:  add    %eax,%eax
0812f144 +0x04a:  add    %edx,%eax
0812f146 +0x04c:  shl    $0x2,%eax
0812f149 +0x04f:  add    $0x820,%eax
0812f14e +0x054:  lea    (%ecx,%eax,1),%eax
0812f151 +0x057:  add    $0xc,%eax
0812f154 +0x05a:  mov    %eax,-0x10(%ebp)
0812f157 +0x05d:  jmp    0812f17a <+0x80>
0812f159 +0x05f:  mov    0x8(%ebp),%eax
0812f15c +0x062:  mov    0x7c(%eax),%eax
0812f15f +0x065:  mov    0x8(%ebp),%edx
0812f162 +0x068:  mov    0x70(%edx),%edx
0812f165 +0x06b:  add    $0x850,%edx
0812f16b +0x071:  mov    %eax,0x4(%esp)
0812f16f +0x075:  mov    %edx,(%esp)
0812f172 +0x078:  call   0889aebe <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi>  ; advancealtar::SurvivalRewardData::getRoundRewardData(int) const
0812f177 +0x07d:  mov    %eax,-0x10(%ebp)
0812f17a +0x080:  lea    -0x24(%ebp),%eax
0812f17d +0x083:  mov    %eax,(%esp)
0812f180 +0x086:  call   08134be0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7e7
0812f185 +0x08b:  lea    -0x30(%ebp),%eax
0812f188 +0x08e:  mov    %eax,(%esp)
0812f18b +0x091:  call   08134be0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7e7
0812f190 +0x096:  cmpl   $0x0,-0x10(%ebp)
0812f194 +0x09a:  je     0812f2c2 <+0x1c8>
0812f19a +0x0a0:  movl   $0x0,-0xc(%ebp)
0812f1a1 +0x0a7:  lea    -0x34(%ebp),%eax
0812f1a4 +0x0aa:  mov    -0x10(%ebp),%edx
0812f1a7 +0x0ad:  mov    %edx,0x4(%esp)
0812f1ab +0x0b1:  mov    %eax,(%esp)
0812f1ae +0x0b4:  call   08135754 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x135b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x135b
0812f1b3 +0x0b9:  sub    $0x4,%esp
0812f1b6 +0x0bc:  jmp    0812f293 <+0x199>
0812f1bb +0x0c1:  call   0812cfa6 <_ZN12advancealtar9isOnEventEv>  ; advancealtar::isOnEvent()
0812f1c0 +0x0c6:  test   %al,%al
0812f1c2 +0x0c8:  je     0812f22c <+0x132>
0812f1c4 +0x0ca:  lea    -0x34(%ebp),%eax
0812f1c7 +0x0cd:  mov    %eax,(%esp)
0812f1ca +0x0d0:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
0812f1cf +0x0d5:  mov    %eax,0x4(%esp)
0812f1d3 +0x0d9:  mov    0xc(%ebp),%eax
0812f1d6 +0x0dc:  mov    %eax,(%esp)
0812f1d9 +0x0df:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
0812f1de +0x0e4:  lea    -0x34(%ebp),%eax
0812f1e1 +0x0e7:  mov    %eax,(%esp)
0812f1e4 +0x0ea:  call   08135c5c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1863>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1863
0812f1e9 +0x0ef:  mov    (%eax),%eax
0812f1eb +0x0f1:  test   %eax,%eax
0812f1ed +0x0f3:  sete   %al
0812f1f0 +0x0f6:  test   %al,%al
0812f1f2 +0x0f8:  je     0812f210 <+0x116>
0812f1f4 +0x0fa:  lea    -0x34(%ebp),%eax
0812f1f7 +0x0fd:  mov    %eax,(%esp)
0812f1fa +0x100:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
0812f1ff +0x105:  mov    %eax,0x4(%esp)
0812f203 +0x109:  lea    -0x24(%ebp),%eax
0812f206 +0x10c:  mov    %eax,(%esp)
0812f209 +0x10f:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
0812f20e +0x114:  jmp    0812f276 <+0x17c>
0812f210 +0x116:  lea    -0x34(%ebp),%eax
0812f213 +0x119:  mov    %eax,(%esp)
0812f216 +0x11c:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
0812f21b +0x121:  mov    %eax,0x4(%esp)
0812f21f +0x125:  lea    -0x30(%ebp),%eax
0812f222 +0x128:  mov    %eax,(%esp)
0812f225 +0x12b:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
0812f22a +0x130:  jmp    0812f276 <+0x17c>
0812f22c +0x132:  lea    -0x34(%ebp),%eax
0812f22f +0x135:  mov    %eax,(%esp)
0812f232 +0x138:  call   08135c5c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1863>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1863
0812f237 +0x13d:  mov    (%eax),%eax
0812f239 +0x13f:  test   %eax,%eax
0812f23b +0x141:  sete   %al
0812f23e +0x144:  test   %al,%al
0812f240 +0x146:  je     0812f276 <+0x17c>
0812f242 +0x148:  lea    -0x34(%ebp),%eax
0812f245 +0x14b:  mov    %eax,(%esp)
0812f248 +0x14e:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
0812f24d +0x153:  mov    %eax,0x4(%esp)
0812f251 +0x157:  mov    0xc(%ebp),%eax
0812f254 +0x15a:  mov    %eax,(%esp)
0812f257 +0x15d:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
0812f25c +0x162:  lea    -0x34(%ebp),%eax
0812f25f +0x165:  mov    %eax,(%esp)
0812f262 +0x168:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
0812f267 +0x16d:  mov    %eax,0x4(%esp)
0812f26b +0x171:  lea    -0x24(%ebp),%eax
0812f26e +0x174:  mov    %eax,(%esp)
0812f271 +0x177:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
0812f276 +0x17c:  lea    -0x14(%ebp),%eax
0812f279 +0x17f:  movl   $0x0,0x8(%esp)
0812f281 +0x187:  lea    -0x34(%ebp),%edx
0812f284 +0x18a:  mov    %edx,0x4(%esp)
0812f288 +0x18e:  mov    %eax,(%esp)
0812f28b +0x191:  call   081357d8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13df>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13df
0812f290 +0x196:  sub    $0x4,%esp
0812f293 +0x199:  lea    -0x18(%ebp),%eax
0812f296 +0x19c:  mov    -0x10(%ebp),%edx
0812f299 +0x19f:  mov    %edx,0x4(%esp)
0812f29d +0x1a3:  mov    %eax,(%esp)
0812f2a0 +0x1a6:  call   08135780 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1387>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1387
0812f2a5 +0x1ab:  sub    $0x4,%esp
0812f2a8 +0x1ae:  lea    -0x18(%ebp),%eax
0812f2ab +0x1b1:  mov    %eax,0x4(%esp)
0812f2af +0x1b5:  lea    -0x34(%ebp),%eax
0812f2b2 +0x1b8:  mov    %eax,(%esp)
0812f2b5 +0x1bb:  call   081357ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13b3
0812f2ba +0x1c0:  test   %al,%al
0812f2bc +0x1c2:  jne    0812f1bb <+0xc1>
0812f2c2 +0x1c8:  lea    -0x24(%ebp),%eax
0812f2c5 +0x1cb:  mov    %eax,(%esp)
0812f2c8 +0x1ce:  call   081356c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12c7
0812f2cd +0x1d3:  test   %eax,%eax
0812f2cf +0x1d5:  setne  %al
0812f2d2 +0x1d8:  test   %al,%al
0812f2d4 +0x1da:  je     0812f302 <+0x208>
0812f2d6 +0x1dc:  mov    0x8(%ebp),%eax
0812f2d9 +0x1df:  mov    (%eax),%eax
0812f2db +0x1e1:  mov    %eax,(%esp)
0812f2de +0x1e4:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812f2e3 +0x1e9:  movl   $"chn_game_server_msg_89",0xc(%esp)
0812f2eb +0x1f1:  movl   $"chn_game_server_msg_88",0x8(%esp)
0812f2f3 +0x1f9:  lea    -0x24(%ebp),%edx
0812f2f6 +0x1fc:  mov    %edx,0x4(%esp)
0812f2fa +0x200:  mov    %eax,(%esp)
0812f2fd +0x203:  call   0812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>  ; advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*)
0812f302 +0x208:  call   0812cfa6 <_ZN12advancealtar9isOnEventEv>  ; advancealtar::isOnEvent()
0812f307 +0x20d:  test   %al,%al
0812f309 +0x20f:  je     0812f321 <+0x227>
0812f30b +0x211:  lea    -0x30(%ebp),%eax
0812f30e +0x214:  mov    %eax,(%esp)
0812f311 +0x217:  call   081356c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12c7
0812f316 +0x21c:  test   %eax,%eax
0812f318 +0x21e:  je     0812f321 <+0x227>
0812f31a +0x220:  mov    $0x1,%eax
0812f31f +0x225:  jmp    0812f326 <+0x22c>
0812f321 +0x227:  mov    $0x0,%eax
0812f326 +0x22c:  test   %al,%al
0812f328 +0x22e:  je     0812f36d <+0x273>
0812f32a +0x230:  mov    0x8(%ebp),%eax
0812f32d +0x233:  mov    (%eax),%eax
0812f32f +0x235:  mov    %eax,(%esp)
0812f332 +0x238:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812f337 +0x23d:  movl   $"chn_game_server_msg_87",0xc(%esp)
0812f33f +0x245:  movl   $"chn_game_server_msg_86",0x8(%esp)
0812f347 +0x24d:  lea    -0x30(%ebp),%edx
0812f34a +0x250:  mov    %edx,0x4(%esp)
0812f34e +0x254:  mov    %eax,(%esp)
0812f351 +0x257:  call   0812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>  ; advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*)
0812f356 +0x25c:  jmp    0812f36d <+0x273>
0812f358 +0x25e:  mov    %edx,%ebx
0812f35a +0x260:  mov    %eax,%esi
0812f35c +0x262:  lea    -0x30(%ebp),%eax
0812f35f +0x265:  mov    %eax,(%esp)
0812f362 +0x268:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0812f367 +0x26d:  mov    %esi,%eax
0812f369 +0x26f:  mov    %ebx,%edx
0812f36b +0x271:  jmp    0812f37a <+0x280>
0812f36d +0x273:  lea    -0x30(%ebp),%eax
0812f370 +0x276:  mov    %eax,(%esp)
0812f373 +0x279:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0812f378 +0x27e:  jmp    0812f395 <+0x29b>
0812f37a +0x280:  mov    %edx,%ebx
0812f37c +0x282:  mov    %eax,%esi
0812f37e +0x284:  lea    -0x24(%ebp),%eax
0812f381 +0x287:  mov    %eax,(%esp)
0812f384 +0x28a:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0812f389 +0x28f:  mov    %esi,%eax
0812f38b +0x291:  mov    %ebx,%edx
0812f38d +0x293:  mov    %eax,(%esp)
0812f390 +0x296:  call   08ae3750 <_Unwind_Resume>
0812f395 +0x29b:  lea    -0x24(%ebp),%eax
0812f398 +0x29e:  mov    %eax,(%esp)
0812f39b +0x2a1:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0812f3a0 +0x2a6:  jmp    0812f3a3 <+0x2a9>
0812f3a2 +0x2a8:  nop
0812f3a3 +0x2a9:  lea    -0x8(%ebp),%esp
0812f3a6 +0x2ac:  add    $0x0,%esp
0812f3a9 +0x2af:  pop    %ebx
0812f3aa +0x2b0:  pop    %esi
0812f3ab +0x2b1:  pop    %ebp
0812f3ac +0x2b2:  ret
0812f3ad +0x2b3:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::rewardClearStage @ 0x812f0fa

/* advancealtar::ProcStage::rewardClearStage(std::vector<advancealtar::_RewardItem,
   std::allocator<advancealtar::_RewardItem> >&) */

void __thiscall advancealtar::ProcStage::rewardClearStage(ProcStage *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _RewardItem *p_Var4;
  int *piVar5;
  CUser *pCVar6;
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_38 [4];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_34 [12];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_18 [4];
  int local_14;
  undefined4 local_10;
  
  if (*(int *)(this + 0x70) != 0) {
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::clear
              ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
               param_1);
    local_14 = 0;
    iVar3 = getStageType(this);
    if (iVar3 == 1) {
      local_14 = SurvivalRewardData::getRoundRewardData
                           ((SurvivalRewardData *)(*(int *)(this + 0x70) + 0x850),
                            *(int *)(this + 0x7c));
    }
    else {
      local_14 = *(int *)(this + 0x70) + *(int *)(this + 0x68) * 0xc + 0x82c;
    }
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
              (local_28);
                    /* try { // try from 0812f18b to 0812f18f has its CatchHandler @ 0812f37a */
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
              (local_34);
    if (local_14 != 0) {
      local_10 = 0;
                    /* try { // try from 0812f1ae to 0812f355 has its CatchHandler @ 0812f358 */
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
      while( true ) {
        std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
        bVar1 = __gnu_cxx::operator!=(local_38,local_1c);
        if (!bVar1) break;
        cVar2 = isOnEvent();
        if (cVar2 == '\0') {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                          ::operator->(local_38);
          if (*piVar5 == 0) {
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *
                      )param_1,p_Var4);
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back(local_28,p_Var4);
          }
        }
        else {
          p_Var4 = (_RewardItem *)
                   __gnu_cxx::
                   __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                   ::operator*(local_38);
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
          push_back((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
                    param_1,p_Var4);
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                          ::operator->(local_38);
          if (*piVar5 == 0) {
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back(local_28,p_Var4);
          }
          else {
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back(local_34,p_Var4);
          }
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
        ::operator++(local_18,(int)local_38);
      }
    }
    iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::size
                      (local_28);
    if (iVar3 != 0) {
      pCVar6 = (CUser *)CharacData::getUser(*(CharacData **)this);
      sendMailRewardItem(pCVar6,(vector *)local_28,"chn_game_server_msg_88","chn_game_server_msg_89"
                        );
    }
    cVar2 = isOnEvent();
    if ((cVar2 == '\0') ||
       (iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                size(local_34), iVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pCVar6 = (CUser *)CharacData::getUser(*(CharacData **)this);
      sendMailRewardItem(pCVar6,(vector *)local_34,"chn_game_server_msg_86","chn_game_server_msg_87"
                        );
    }
                    /* try { // try from 0812f373 to 0812f377 has its CatchHandler @ 0812f37a */
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
              (local_34);
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
              (local_28);
    return;
  }
  return;
}
```
