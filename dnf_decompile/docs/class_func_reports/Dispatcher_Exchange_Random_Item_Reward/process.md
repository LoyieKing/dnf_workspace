# process

`_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Exchange_Random_Item_Reward::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Exchange_Random_Item_Reward` | `0x081de52c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de52c  _ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Exchange_Random_Item_Reward::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081de52c, 0x081de72b]
081de52c +0x000:  push   %ebp
081de52d +0x001:  mov    %esp,%ebp
081de52f +0x003:  push   %esi
081de530 +0x004:  push   %ebx
081de531 +0x005:  sub    $0x50,%esp
081de534 +0x008:  mov    0x10(%ebp),%eax
081de537 +0x00b:  mov    %eax,-0x14(%ebp)
081de53a +0x00e:  mov    0x14(%ebp),%eax
081de53d +0x011:  mov    %eax,-0x10(%ebp)
081de540 +0x014:  mov    0xc(%ebp),%eax
081de543 +0x017:  mov    %eax,(%esp)
081de546 +0x01a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081de54b +0x01f:  cmp    $0x3,%eax
081de54e +0x022:  setne  %al
081de551 +0x025:  test   %al,%al
081de553 +0x027:  je     081de569 <+0x3d>
081de555 +0x029:  mov    -0x10(%ebp),%eax
081de558 +0x02c:  movl   $0x7,0x4(%eax)
081de55f +0x033:  mov    $0x0,%ebx
081de564 +0x038:  jmp    081de722 <+0x1f6>
081de569 +0x03d:  mov    -0x14(%ebp),%eax
081de56c +0x040:  movzwl 0xe(%eax),%eax
081de570 +0x044:  movzwl %ax,%ebx
081de573 +0x047:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081de578 +0x04c:  mov    %eax,(%esp)
081de57b +0x04f:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081de580 +0x054:  mov    %ebx,0x4(%esp)
081de584 +0x058:  mov    %eax,(%esp)
081de587 +0x05b:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
081de58c +0x060:  mov    %eax,-0xc(%ebp)
081de58f +0x063:  cmpl   $0x0,-0xc(%ebp)
081de593 +0x067:  jne    081de5a9 <+0x7d>
081de595 +0x069:  mov    -0x10(%ebp),%eax
081de598 +0x06c:  movl   $0xb2,0x4(%eax)
081de59f +0x073:  mov    $0x0,%ebx
081de5a4 +0x078:  jmp    081de722 <+0x1f6>
081de5a9 +0x07d:  mov    -0xc(%ebp),%eax
081de5ac +0x080:  mov    (%eax),%eax
081de5ae +0x082:  add    $0x8,%eax
081de5b1 +0x085:  mov    (%eax),%edx
081de5b3 +0x087:  mov    -0xc(%ebp),%eax
081de5b6 +0x08a:  mov    %eax,(%esp)
081de5b9 +0x08d:  call   *%edx
081de5bb +0x08f:  xor    $0x1,%eax
081de5be +0x092:  test   %al,%al
081de5c0 +0x094:  je     081de5d6 <+0xaa>
081de5c2 +0x096:  mov    -0x10(%ebp),%eax
081de5c5 +0x099:  movl   $0xb2,0x4(%eax)
081de5cc +0x0a0:  mov    $0x0,%ebx
081de5d1 +0x0a5:  jmp    081de722 <+0x1f6>
081de5d6 +0x0aa:  lea    -0x20(%ebp),%eax
081de5d9 +0x0ad:  mov    %eax,(%esp)
081de5dc +0x0b0:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
081de5e1 +0x0b5:  mov    -0x14(%ebp),%eax
081de5e4 +0x0b8:  lea    0x10(%eax),%edx
081de5e7 +0x0bb:  lea    -0x20(%ebp),%eax
081de5ea +0x0be:  mov    %eax,0xc(%esp)
081de5ee +0x0c2:  mov    %edx,0x8(%esp)
081de5f2 +0x0c6:  mov    0xc(%ebp),%eax
081de5f5 +0x0c9:  mov    %eax,0x4(%esp)
081de5f9 +0x0cd:  mov    -0xc(%ebp),%eax
081de5fc +0x0d0:  mov    %eax,(%esp)
081de5ff +0x0d3:  call   0810eb30 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE>  ; EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule(CUser*, std::vector<int, std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081de604 +0x0d8:  mov    -0x10(%ebp),%edx
081de607 +0x0db:  mov    %eax,0x4(%edx)
081de60a +0x0de:  mov    -0x10(%ebp),%eax
081de60d +0x0e1:  mov    0x4(%eax),%eax
081de610 +0x0e4:  test   %eax,%eax
081de612 +0x0e6:  je     081de61e <+0xf2>
081de614 +0x0e8:  mov    $0x0,%ebx
081de619 +0x0ed:  jmp    081de717 <+0x1eb>
081de61e +0x0f2:  lea    -0x2c(%ebp),%eax
081de621 +0x0f5:  mov    %eax,(%esp)
081de624 +0x0f8:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
081de629 +0x0fd:  lea    -0x2c(%ebp),%eax
081de62c +0x100:  mov    %eax,0x4(%esp)
081de630 +0x104:  mov    -0xc(%ebp),%eax
081de633 +0x107:  mov    %eax,(%esp)
081de636 +0x10a:  call   0810ee40 <_ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE>  ; EventClassify::CExchangeRandomItemReward::getRewardItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081de63b +0x10f:  mov    -0x10(%ebp),%edx
081de63e +0x112:  mov    %eax,0x4(%edx)
081de641 +0x115:  mov    -0x10(%ebp),%eax
081de644 +0x118:  mov    0x4(%eax),%eax
081de647 +0x11b:  test   %eax,%eax
081de649 +0x11d:  je     081de655 <+0x129>
081de64b +0x11f:  mov    $0x0,%ebx
081de650 +0x124:  jmp    081de6ef <+0x1c3>
081de655 +0x129:  mov    -0x10(%ebp),%eax
081de658 +0x12c:  add    $0xc,%eax
081de65b +0x12f:  mov    %eax,0xc(%esp)
081de65f +0x133:  lea    -0x20(%ebp),%eax
081de662 +0x136:  mov    %eax,0x8(%esp)
081de666 +0x13a:  mov    0xc(%ebp),%eax
081de669 +0x13d:  mov    %eax,0x4(%esp)
081de66d +0x141:  mov    -0xc(%ebp),%eax
081de670 +0x144:  mov    %eax,(%esp)
081de673 +0x147:  call   0810eede <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_>  ; EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081de678 +0x14c:  mov    -0x10(%ebp),%edx
081de67b +0x14f:  mov    %eax,0x4(%edx)
081de67e +0x152:  mov    -0x10(%ebp),%eax
081de681 +0x155:  mov    0x4(%eax),%eax
081de684 +0x158:  test   %eax,%eax
081de686 +0x15a:  je     081de68f <+0x163>
081de688 +0x15c:  mov    $0x0,%ebx
081de68d +0x161:  jmp    081de6ef <+0x1c3>
081de68f +0x163:  mov    -0x10(%ebp),%eax
081de692 +0x166:  lea    0x9(%eax),%edx
081de695 +0x169:  mov    -0x10(%ebp),%eax
081de698 +0x16c:  add    $0x18,%eax
081de69b +0x16f:  mov    %edx,0x10(%esp)
081de69f +0x173:  mov    %eax,0xc(%esp)
081de6a3 +0x177:  lea    -0x2c(%ebp),%eax
081de6a6 +0x17a:  mov    %eax,0x8(%esp)
081de6aa +0x17e:  mov    0xc(%ebp),%eax
081de6ad +0x181:  mov    %eax,0x4(%esp)
081de6b1 +0x185:  mov    -0xc(%ebp),%eax
081de6b4 +0x188:  mov    %eax,(%esp)
081de6b7 +0x18b:  call   0810f26e <_ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh>  ; EventClassify::CExchangeRandomItemReward::sendRandomItemReward(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, unsigned char&)
081de6bc +0x190:  mov    -0x10(%ebp),%edx
081de6bf +0x193:  mov    %eax,0x4(%edx)
081de6c2 +0x196:  mov    -0x10(%ebp),%eax
081de6c5 +0x199:  mov    0x4(%eax),%eax
081de6c8 +0x19c:  test   %eax,%eax
081de6ca +0x19e:  je     081de6d3 <+0x1a7>
081de6cc +0x1a0:  mov    $0x0,%ebx
081de6d1 +0x1a5:  jmp    081de6ef <+0x1c3>
081de6d3 +0x1a7:  mov    $0x0,%ebx
081de6d8 +0x1ac:  jmp    081de6ef <+0x1c3>
081de6da +0x1ae:  mov    %edx,%ebx
081de6dc +0x1b0:  mov    %eax,%esi
081de6de +0x1b2:  lea    -0x2c(%ebp),%eax
081de6e1 +0x1b5:  mov    %eax,(%esp)
081de6e4 +0x1b8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081de6e9 +0x1bd:  mov    %esi,%eax
081de6eb +0x1bf:  mov    %ebx,%edx
081de6ed +0x1c1:  jmp    081de6fc <+0x1d0>
081de6ef +0x1c3:  lea    -0x2c(%ebp),%eax
081de6f2 +0x1c6:  mov    %eax,(%esp)
081de6f5 +0x1c9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081de6fa +0x1ce:  jmp    081de717 <+0x1eb>
081de6fc +0x1d0:  mov    %edx,%ebx
081de6fe +0x1d2:  mov    %eax,%esi
081de700 +0x1d4:  lea    -0x20(%ebp),%eax
081de703 +0x1d7:  mov    %eax,(%esp)
081de706 +0x1da:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081de70b +0x1df:  mov    %esi,%eax
081de70d +0x1e1:  mov    %ebx,%edx
081de70f +0x1e3:  mov    %eax,(%esp)
081de712 +0x1e6:  call   08ae3750 <_Unwind_Resume>
081de717 +0x1eb:  lea    -0x20(%ebp),%eax
081de71a +0x1ee:  mov    %eax,(%esp)
081de71d +0x1f1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081de722 +0x1f6:  mov    %ebx,%eax
081de724 +0x1f8:  add    $0x50,%esp
081de727 +0x1fb:  pop    %ebx
081de728 +0x1fc:  pop    %esi
081de729 +0x1fd:  pop    %ebp
081de72a +0x1fe:  ret
081de72b +0x1ff:  nop
```

## 反编译 C

```c
// Dispatcher_Exchange_Random_Item_Reward::process @ 0x81de52c

/* Dispatcher_Exchange_Random_Item_Reward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Exchange_Random_Item_Reward::process
          (Dispatcher_Exchange_Random_Item_Reward *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  uint uVar4;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_24 [12];
  MSG_BASE *local_18;
  ParamBase *local_14;
  CExchangeRandomItemReward *local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    uVar4 = (uint)*(ushort *)(local_18 + 0xe);
    this_00 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::get_event_script_mng(this_00);
    local_10 = (CExchangeRandomItemReward *)EventClassify::CEventScriptMng::get_event_entity(iVar2);
    if (local_10 == (CExchangeRandomItemReward *)0x0) {
      *(undefined4 *)(local_14 + 4) = 0xb2;
    }
    else {
      cVar1 = (**(code **)(*(int *)local_10 + 8))(local_10,uVar4);
      if (cVar1 == '\x01') {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_24);
                    /* try { // try from 081de5ff to 081de628 has its CatchHandler @ 081de6fc */
        uVar3 = EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule
                          (local_10,param_1,(vector *)(local_18 + 0x10),(vector *)local_24);
        *(undefined4 *)(local_14 + 4) = uVar3;
        if (*(int *)(local_14 + 4) == 0) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 081de636 to 081de6bb has its CatchHandler @ 081de6da */
          uVar3 = EventClassify::CExchangeRandomItemReward::getRewardItem
                            (local_10,(vector *)local_30);
          *(undefined4 *)(local_14 + 4) = uVar3;
          if (*(int *)(local_14 + 4) == 0) {
            uVar3 = EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem
                              (local_10,param_1,(vector *)local_24,(vector *)(local_14 + 0xc));
            *(undefined4 *)(local_14 + 4) = uVar3;
            if (*(int *)(local_14 + 4) == 0) {
              uVar3 = EventClassify::CExchangeRandomItemReward::sendRandomItemReward
                                (local_10,param_1,(vector *)local_30,(vector *)(local_14 + 0x18),
                                 (uchar *)(local_14 + 9));
              *(undefined4 *)(local_14 + 4) = uVar3;
            }
          }
                    /* try { // try from 081de6f5 to 081de6f9 has its CatchHandler @ 081de6fc */
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_24);
      }
      else {
        *(undefined4 *)(local_14 + 4) = 0xb2;
      }
    }
  }
  else {
    *(undefined4 *)(local_14 + 4) = 7;
  }
  return 0;
}
```
