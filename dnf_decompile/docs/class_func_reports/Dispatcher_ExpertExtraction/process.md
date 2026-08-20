# process

`_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ExpertExtraction` | `0x081d9412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d9412  _ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d9412, 0x081d962d]
081d9412 +0x000:  push   %ebp
081d9413 +0x001:  mov    %esp,%ebp
081d9415 +0x003:  push   %esi
081d9416 +0x004:  push   %ebx
081d9417 +0x005:  sub    $0x50,%esp
081d941a +0x008:  mov    0x14(%ebp),%eax
081d941d +0x00b:  mov    %eax,-0x18(%ebp)
081d9420 +0x00e:  mov    0x10(%ebp),%eax
081d9423 +0x011:  mov    %eax,0x8(%esp)
081d9427 +0x015:  mov    0xc(%ebp),%eax
081d942a +0x018:  mov    %eax,0x4(%esp)
081d942e +0x01c:  mov    0x8(%ebp),%eax
081d9431 +0x01f:  mov    %eax,(%esp)
081d9434 +0x022:  call   081d962e <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ExpertExtraction::check_error(CUser*, MSG_BASE&)
081d9439 +0x027:  mov    -0x18(%ebp),%edx
081d943c +0x02a:  mov    %eax,0x4(%edx)
081d943f +0x02d:  mov    -0x18(%ebp),%eax
081d9442 +0x030:  mov    0x4(%eax),%eax
081d9445 +0x033:  test   %eax,%eax
081d9447 +0x035:  jle    081d9453 <+0x41>
081d9449 +0x037:  mov    $0x0,%ebx
081d944e +0x03c:  jmp    081d9624 <+0x212>
081d9453 +0x041:  mov    -0x18(%ebp),%eax
081d9456 +0x044:  mov    0x4(%eax),%eax
081d9459 +0x047:  test   %eax,%eax
081d945b +0x049:  jns    081d948a <+0x78>
081d945d +0x04b:  mov    -0x18(%ebp),%eax
081d9460 +0x04e:  mov    0x4(%eax),%eax
081d9463 +0x051:  movl   $0x0,0xc(%esp)
081d946b +0x059:  mov    %eax,0x8(%esp)
081d946f +0x05d:  movl   $&_ZZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d9477 +0x065:  movl   $0x45bf,(%esp)
081d947e +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9483 +0x071:  mov    %eax,%ebx
081d9485 +0x073:  jmp    081d9624 <+0x212>
081d948a +0x078:  mov    0x10(%ebp),%eax
081d948d +0x07b:  mov    %eax,-0x14(%ebp)
081d9490 +0x07e:  mov    -0x14(%ebp),%eax
081d9493 +0x081:  movzbl 0xd(%eax),%eax
081d9497 +0x085:  movsbl %al,%eax
081d949a +0x088:  mov    %eax,(%esp)
081d949d +0x08b:  call   084a2904 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE>  ; expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)
081d94a2 +0x090:  mov    %eax,-0x10(%ebp)
081d94a5 +0x093:  mov    -0x10(%ebp),%edx
081d94a8 +0x096:  mov    &_ZN10GlobalData15g_ExtractionMgrE,%eax
081d94ad +0x09b:  mov    %edx,0x4(%esp)
081d94b1 +0x09f:  mov    %eax,(%esp)
081d94b4 +0x0a2:  call   084a3166 <_ZN17expert_extraction14CExtractionMgr13get_extracterEj>  ; expert_extraction::CExtractionMgr::get_extracter(unsigned int)
081d94b9 +0x0a7:  mov    %eax,-0xc(%ebp)
081d94bc +0x0aa:  cmpl   $0x0,-0xc(%ebp)
081d94c0 +0x0ae:  jne    081d94f4 <+0xe2>
081d94c2 +0x0b0:  mov    0xc(%ebp),%eax
081d94c5 +0x0b3:  mov    %eax,(%esp)
081d94c8 +0x0b6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d94cd +0x0bb:  mov    %eax,0xc(%esp)
081d94d1 +0x0bf:  movl   $0x0,0x8(%esp)
081d94d9 +0x0c7:  movl   $&_ZZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d94e1 +0x0cf:  movl   $0x45cb,(%esp)
081d94e8 +0x0d6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d94ed +0x0db:  mov    %eax,%ebx
081d94ef +0x0dd:  jmp    081d9624 <+0x212>
081d94f4 +0x0e2:  lea    -0x24(%ebp),%eax
081d94f7 +0x0e5:  mov    %eax,(%esp)
081d94fa +0x0e8:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
081d94ff +0x0ed:  lea    -0x24(%ebp),%eax
081d9502 +0x0f0:  mov    %eax,(%esp)
081d9505 +0x0f3:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
081d950a +0x0f8:  mov    -0xc(%ebp),%eax
081d950d +0x0fb:  mov    (%eax),%eax
081d950f +0x0fd:  add    $0x8,%eax
081d9512 +0x100:  mov    (%eax),%ecx
081d9514 +0x102:  mov    -0x14(%ebp),%eax
081d9517 +0x105:  movzwl 0x10(%eax),%eax
081d951b +0x109:  cwtl
081d951c +0x10a:  lea    -0x24(%ebp),%edx
081d951f +0x10d:  mov    %edx,0xc(%esp)
081d9523 +0x111:  mov    %eax,0x8(%esp)
081d9527 +0x115:  mov    0xc(%ebp),%eax
081d952a +0x118:  mov    %eax,0x4(%esp)
081d952e +0x11c:  mov    -0xc(%ebp),%eax
081d9531 +0x11f:  mov    %eax,(%esp)
081d9534 +0x122:  call   *%ecx
081d9536 +0x124:  xor    $0x1,%eax
081d9539 +0x127:  test   %al,%al
081d953b +0x129:  je     081d9551 <+0x13f>
081d953d +0x12b:  mov    -0x18(%ebp),%eax
081d9540 +0x12e:  movl   $0x1,0x4(%eax)
081d9547 +0x135:  mov    $0x0,%ebx
081d954c +0x13a:  jmp    081d9619 <+0x207>
081d9551 +0x13f:  lea    -0x30(%ebp),%eax
081d9554 +0x142:  mov    %eax,(%esp)
081d9557 +0x145:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081d955c +0x14a:  lea    -0x30(%ebp),%eax
081d955f +0x14d:  mov    %eax,(%esp)
081d9562 +0x150:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
081d9567 +0x155:  mov    -0xc(%ebp),%eax
081d956a +0x158:  mov    (%eax),%eax
081d956c +0x15a:  add    $0x10,%eax
081d956f +0x15d:  mov    (%eax),%ecx
081d9571 +0x15f:  mov    -0x14(%ebp),%eax
081d9574 +0x162:  movzwl 0x10(%eax),%eax
081d9578 +0x166:  cwtl
081d9579 +0x167:  lea    -0x30(%ebp),%edx
081d957c +0x16a:  mov    %edx,0x10(%esp)
081d9580 +0x16e:  lea    -0x24(%ebp),%edx
081d9583 +0x171:  mov    %edx,0xc(%esp)
081d9587 +0x175:  mov    %eax,0x8(%esp)
081d958b +0x179:  mov    0xc(%ebp),%eax
081d958e +0x17c:  mov    %eax,0x4(%esp)
081d9592 +0x180:  mov    -0xc(%ebp),%eax
081d9595 +0x183:  mov    %eax,(%esp)
081d9598 +0x186:  call   *%ecx
081d959a +0x188:  xor    $0x1,%eax
081d959d +0x18b:  test   %al,%al
081d959f +0x18d:  je     081d95b2 <+0x1a0>
081d95a1 +0x18f:  mov    -0x18(%ebp),%eax
081d95a4 +0x192:  movl   $0x11,0x4(%eax)
081d95ab +0x199:  mov    $0x0,%ebx
081d95b0 +0x19e:  jmp    081d95f1 <+0x1df>
081d95b2 +0x1a0:  mov    -0x14(%ebp),%eax
081d95b5 +0x1a3:  movzwl 0x10(%eax),%edx
081d95b9 +0x1a7:  mov    -0x18(%ebp),%eax
081d95bc +0x1aa:  mov    %dx,0x8(%eax)
081d95c0 +0x1ae:  mov    -0x18(%ebp),%eax
081d95c3 +0x1b1:  lea    0xc(%eax),%edx
081d95c6 +0x1b4:  lea    -0x30(%ebp),%eax
081d95c9 +0x1b7:  mov    %eax,0x4(%esp)
081d95cd +0x1bb:  mov    %edx,(%esp)
081d95d0 +0x1be:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
081d95d5 +0x1c3:  mov    $0x0,%ebx
081d95da +0x1c8:  jmp    081d95f1 <+0x1df>
081d95dc +0x1ca:  mov    %edx,%ebx
081d95de +0x1cc:  mov    %eax,%esi
081d95e0 +0x1ce:  lea    -0x30(%ebp),%eax
081d95e3 +0x1d1:  mov    %eax,(%esp)
081d95e6 +0x1d4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081d95eb +0x1d9:  mov    %esi,%eax
081d95ed +0x1db:  mov    %ebx,%edx
081d95ef +0x1dd:  jmp    081d95fe <+0x1ec>
081d95f1 +0x1df:  lea    -0x30(%ebp),%eax
081d95f4 +0x1e2:  mov    %eax,(%esp)
081d95f7 +0x1e5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081d95fc +0x1ea:  jmp    081d9619 <+0x207>
081d95fe +0x1ec:  mov    %edx,%ebx
081d9600 +0x1ee:  mov    %eax,%esi
081d9602 +0x1f0:  lea    -0x24(%ebp),%eax
081d9605 +0x1f3:  mov    %eax,(%esp)
081d9608 +0x1f6:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081d960d +0x1fb:  mov    %esi,%eax
081d960f +0x1fd:  mov    %ebx,%edx
081d9611 +0x1ff:  mov    %eax,(%esp)
081d9614 +0x202:  call   08ae3750 <_Unwind_Resume>
081d9619 +0x207:  lea    -0x24(%ebp),%eax
081d961c +0x20a:  mov    %eax,(%esp)
081d961f +0x20d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081d9624 +0x212:  mov    %ebx,%eax
081d9626 +0x214:  add    $0x50,%esp
081d9629 +0x217:  pop    %ebx
081d962a +0x218:  pop    %esi
081d962b +0x219:  pop    %ebp
081d962c +0x21a:  ret
081d962d +0x21b:  nop
```

## 反编译 C

```c
// Dispatcher_ExpertExtraction::process @ 0x81d9412

/* Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ExpertExtraction::process
          (Dispatcher_ExpertExtraction *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  vector<int,std::allocator<int>> local_34 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [12];
  ParamBase *local_1c;
  MSG_BASE *local_18;
  uint local_14;
  int *local_10;
  
  local_1c = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_1c + 4) = uVar2;
  if (*(int *)(local_1c + 4) < 1) {
    if (*(int *)(local_1c + 4) < 0) {
      uVar2 = LineFunc(0x45bf,
                       "virtual int Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_1c + 4),0);
    }
    else {
      local_18 = param_2;
      local_14 = expert_extraction::GetExtracterType((int)(char)param_2[0xd]);
      local_10 = (int *)expert_extraction::CExtractionMgr::get_extracter
                                  (GlobalData::g_ExtractionMgr,local_14);
      if (local_10 == (int *)0x0) {
        uVar3 = CUser::get_acc_id(param_1);
        uVar2 = LineFunc(0x45cb,
                         "virtual int Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_28);
                    /* try { // try from 081d9505 to 081d955b has its CatchHandler @ 081d95fe */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_28);
        cVar1 = (**(code **)(*local_10 + 8))
                          (local_10,param_1,(int)*(short *)(local_18 + 0x10),local_28);
        if (cVar1 == '\x01') {
          std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 081d9562 to 081d95d4 has its CatchHandler @ 081d95dc */
          std::vector<int,std::allocator<int>>::clear(local_34);
          cVar1 = (**(code **)(*local_10 + 0x10))
                            (local_10,param_1,(int)*(short *)(local_18 + 0x10),local_28,local_34);
          if (cVar1 == '\x01') {
            *(undefined2 *)(local_1c + 8) = *(undefined2 *)(local_18 + 0x10);
            std::vector<int,std::allocator<int>>::operator=
                      ((vector<int,std::allocator<int>> *)(local_1c + 0xc),(vector *)local_34);
          }
          else {
            *(undefined4 *)(local_1c + 4) = 0x11;
          }
                    /* try { // try from 081d95f7 to 081d95fb has its CatchHandler @ 081d95fe */
          std::vector<int,std::allocator<int>>::~vector(local_34);
        }
        else {
          *(undefined4 *)(local_1c + 4) = 1;
        }
        uVar2 = 0;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_28);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
