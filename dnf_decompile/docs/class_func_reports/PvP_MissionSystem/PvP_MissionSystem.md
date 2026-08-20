# PvP_MissionSystem

`_ZN17PvP_MissionSystemC1Ev`

`PvP_MissionSystem::PvP_MissionSystem()`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e1abc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e1abc  _ZN17PvP_MissionSystemC1Ev
#           PvP_MissionSystem::PvP_MissionSystem()
# range [0x085e1abc, 0x085e1c47]
085e1abc +0x000:  push   %ebp
085e1abd +0x001:  mov    %esp,%ebp
085e1abf +0x003:  push   %edi
085e1ac0 +0x004:  push   %esi
085e1ac1 +0x005:  push   %ebx
085e1ac2 +0x006:  sub    $0x2c,%esp
085e1ac5 +0x009:  mov    0x8(%ebp),%eax
085e1ac8 +0x00c:  mov    %eax,(%esp)
085e1acb +0x00f:  call   085e724c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9d4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9d4
085e1ad0 +0x014:  mov    0x8(%ebp),%eax
085e1ad3 +0x017:  add    $0x18,%eax
085e1ad6 +0x01a:  mov    %eax,(%esp)
085e1ad9 +0x01d:  call   085e72c6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa4e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa4e
085e1ade +0x022:  mov    0x8(%ebp),%eax
085e1ae1 +0x025:  add    $0x24,%eax
085e1ae4 +0x028:  mov    %eax,(%esp)
085e1ae7 +0x02b:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
085e1aec +0x030:  mov    0x8(%ebp),%eax
085e1aef +0x033:  add    $0x34,%eax
085e1af2 +0x036:  mov    %eax,(%esp)
085e1af5 +0x039:  call   085e7338 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xac0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xac0
085e1afa +0x03e:  mov    0x8(%ebp),%eax
085e1afd +0x041:  add    $0x40,%eax
085e1b00 +0x044:  mov    %eax,(%esp)
085e1b03 +0x047:  call   084954de <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x61bc>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x61bc
085e1b08 +0x04c:  mov    0x8(%ebp),%eax
085e1b0b +0x04f:  add    $0x48,%eax
085e1b0e +0x052:  mov    %eax,(%esp)
085e1b11 +0x055:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
085e1b16 +0x05a:  movl   $0x0,(%esp)
085e1b1d +0x061:  call   0807d750 <_init+0x48>
085e1b22 +0x066:  mov    %eax,-0x24(%ebp)
085e1b25 +0x069:  lea    -0x24(%ebp),%esi
085e1b28 +0x06c:  movl   $0x9c8,(%esp)
085e1b2f +0x073:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e1b34 +0x078:  mov    %eax,%ebx
085e1b36 +0x07a:  mov    %ebx,%eax
085e1b38 +0x07c:  mov    %esi,0x4(%esp)
085e1b3c +0x080:  mov    %eax,(%esp)
085e1b3f +0x083:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
085e1b44 +0x088:  jmp    085e1b58 <+0x9c>
085e1b46 +0x08a:  mov    %edx,%esi
085e1b48 +0x08c:  mov    %eax,%edi
085e1b4a +0x08e:  mov    %ebx,(%esp)
085e1b4d +0x091:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e1b52 +0x096:  mov    %edi,%eax
085e1b54 +0x098:  mov    %esi,%edx
085e1b56 +0x09a:  jmp    085e1bc4 <+0x108>
085e1b58 +0x09c:  mov    %ebx,%edx
085e1b5a +0x09e:  mov    0x8(%ebp),%eax
085e1b5d +0x0a1:  mov    %edx,0x44(%eax)
085e1b60 +0x0a4:  mov    0x8(%ebp),%eax
085e1b63 +0x0a7:  movl   $0x0,0x3c(%eax)
085e1b6a +0x0ae:  mov    0x8(%ebp),%eax
085e1b6d +0x0b1:  add    $0x40,%eax
085e1b70 +0x0b4:  mov    %eax,(%esp)
085e1b73 +0x0b7:  call   085e73a2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xb2a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xb2a
085e1b78 +0x0bc:  lea    -0x20(%ebp),%eax
085e1b7b +0x0bf:  mov    %eax,(%esp)
085e1b7e +0x0c2:  call   085e73b8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xb40>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xb40
085e1b83 +0x0c7:  mov    0x8(%ebp),%eax
085e1b86 +0x0ca:  lea    0x18(%eax),%edx
085e1b89 +0x0cd:  lea    -0x20(%ebp),%eax
085e1b8c +0x0d0:  mov    %eax,0x8(%esp)
085e1b90 +0x0d4:  movl   $0x24,0x4(%esp)
085e1b98 +0x0dc:  mov    %edx,(%esp)
085e1b9b +0x0df:  call   085e7444 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xbcc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xbcc
085e1ba0 +0x0e4:  jmp    085e1bb7 <+0xfb>
085e1ba2 +0x0e6:  mov    %edx,%ebx
085e1ba4 +0x0e8:  mov    %eax,%esi
085e1ba6 +0x0ea:  lea    -0x20(%ebp),%eax
085e1ba9 +0x0ed:  mov    %eax,(%esp)
085e1bac +0x0f0:  call   085e6ec4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x64c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x64c
085e1bb1 +0x0f5:  mov    %esi,%eax
085e1bb3 +0x0f7:  mov    %ebx,%edx
085e1bb5 +0x0f9:  jmp    085e1bc4 <+0x108>
085e1bb7 +0x0fb:  lea    -0x20(%ebp),%eax
085e1bba +0x0fe:  mov    %eax,(%esp)
085e1bbd +0x101:  call   085e6ec4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x64c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x64c
085e1bc2 +0x106:  jmp    085e1c3f <+0x183>
085e1bc4 +0x108:  mov    %edx,%ebx
085e1bc6 +0x10a:  mov    %eax,%esi
085e1bc8 +0x10c:  mov    0x8(%ebp),%eax
085e1bcb +0x10f:  add    $0x48,%eax
085e1bce +0x112:  mov    %eax,(%esp)
085e1bd1 +0x115:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085e1bd6 +0x11a:  mov    %esi,%eax
085e1bd8 +0x11c:  mov    %ebx,%edx
085e1bda +0x11e:  jmp    085e1bdc <+0x120>
085e1bdc +0x120:  mov    %edx,%ebx
085e1bde +0x122:  mov    %eax,%esi
085e1be0 +0x124:  mov    0x8(%ebp),%eax
085e1be3 +0x127:  add    $0x34,%eax
085e1be6 +0x12a:  mov    %eax,(%esp)
085e1be9 +0x12d:  call   085e6eb0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x638>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x638
085e1bee +0x132:  mov    %esi,%eax
085e1bf0 +0x134:  mov    %ebx,%edx
085e1bf2 +0x136:  jmp    085e1bf4 <+0x138>
085e1bf4 +0x138:  mov    %edx,%ebx
085e1bf6 +0x13a:  mov    %eax,%esi
085e1bf8 +0x13c:  mov    0x8(%ebp),%eax
085e1bfb +0x13f:  add    $0x24,%eax
085e1bfe +0x142:  mov    %eax,(%esp)
085e1c01 +0x145:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085e1c06 +0x14a:  mov    %esi,%eax
085e1c08 +0x14c:  mov    %ebx,%edx
085e1c0a +0x14e:  jmp    085e1c0c <+0x150>
085e1c0c +0x150:  mov    %edx,%ebx
085e1c0e +0x152:  mov    %eax,%esi
085e1c10 +0x154:  mov    0x8(%ebp),%eax
085e1c13 +0x157:  add    $0x18,%eax
085e1c16 +0x15a:  mov    %eax,(%esp)
085e1c19 +0x15d:  call   085e72da <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa62>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa62
085e1c1e +0x162:  mov    %esi,%eax
085e1c20 +0x164:  mov    %ebx,%edx
085e1c22 +0x166:  jmp    085e1c24 <+0x168>
085e1c24 +0x168:  mov    %edx,%ebx
085e1c26 +0x16a:  mov    %eax,%esi
085e1c28 +0x16c:  mov    0x8(%ebp),%eax
085e1c2b +0x16f:  mov    %eax,(%esp)
085e1c2e +0x172:  call   085e6e9c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x624>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x624
085e1c33 +0x177:  mov    %esi,%eax
085e1c35 +0x179:  mov    %ebx,%edx
085e1c37 +0x17b:  mov    %eax,(%esp)
085e1c3a +0x17e:  call   08ae3750 <_Unwind_Resume>
085e1c3f +0x183:  add    $0x2c,%esp
085e1c42 +0x186:  pop    %ebx
085e1c43 +0x187:  pop    %esi
085e1c44 +0x188:  pop    %edi
085e1c45 +0x189:  pop    %ebp
085e1c46 +0x18a:  ret
085e1c47 +0x18b:  nop
```

## 反编译 C

```c
// PvP_MissionSystem::PvP_MissionSystem @ 0x85e1abc

/* PvP_MissionSystem::PvP_MissionSystem() */

void __thiscall PvP_MissionSystem::PvP_MissionSystem(PvP_MissionSystem *this)

{
  CMTRand *this_00;
  ulong local_28;
  list<CMission*,std::allocator<CMission*>> local_24 [20];
  
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::map
            ((map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> *)
             this);
                    /* try { // try from 085e1ad9 to 085e1add has its CatchHandler @ 085e1c24 */
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::vector((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            *)(this + 0x18));
                    /* try { // try from 085e1ae7 to 085e1aeb has its CatchHandler @ 085e1c0c */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24));
                    /* try { // try from 085e1af5 to 085e1af9 has its CatchHandler @ 085e1bf4 */
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  list((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
        *)(this + 0x34));
  std::bitset<32u>::bitset((bitset<32u> *)(this + 0x40));
                    /* try { // try from 085e1b11 to 085e1b15 has its CatchHandler @ 085e1bdc */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48));
  local_28 = time((time_t *)0x0);
                    /* try { // try from 085e1b2f to 085e1b33 has its CatchHandler @ 085e1bc4 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 085e1b3f to 085e1b43 has its CatchHandler @ 085e1b46 */
  CMTRand::CMTRand(this_00,&local_28);
  *(CMTRand **)(this + 0x44) = this_00;
  *(undefined4 *)(this + 0x3c) = 0;
  std::bitset<32u>::reset((bitset<32u> *)(this + 0x40));
                    /* try { // try from 085e1b7e to 085e1b82 has its CatchHandler @ 085e1bc4 */
  std::list<CMission*,std::allocator<CMission*>>::list(local_24);
                    /* try { // try from 085e1b9b to 085e1b9f has its CatchHandler @ 085e1ba2 */
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::resize((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            *)(this + 0x18),0x24,local_24);
                    /* try { // try from 085e1bbd to 085e1bc1 has its CatchHandler @ 085e1bc4 */
  std::list<CMission*,std::allocator<CMission*>>::~list(local_24);
  return;
}
```
