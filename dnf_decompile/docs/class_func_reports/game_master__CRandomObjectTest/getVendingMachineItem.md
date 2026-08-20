# getVendingMachineItem

`_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CRandomObjectTest::getVendingMachineItem(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CRandomObjectTest` | `0x084b02e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b02e6  _ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CRandomObjectTest::getVendingMachineItem(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084b02e6, 0x084b0443]
084b02e6 +0x000:  push   %ebp
084b02e7 +0x001:  mov    %esp,%ebp
084b02e9 +0x003:  sub    $0xa58,%esp
084b02ef +0x009:  mov    0x8(%ebp),%eax
084b02f2 +0x00c:  mov    %eax,(%esp)
084b02f5 +0x00f:  call   084b0444 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv>  ; game_master::CRandomObjectTest::getVendingMachineInfo()
084b02fa +0x014:  mov    %eax,-0x10(%ebp)
084b02fd +0x017:  cmpl   $0x0,-0x10(%ebp)
084b0301 +0x01b:  je     084b0440 <+0x15a>
084b0307 +0x021:  lea    -0x7d(%ebp),%eax
084b030a +0x024:  mov    %eax,(%esp)
084b030d +0x027:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084b0312 +0x02c:  movl   $0x0,(%esp)
084b0319 +0x033:  call   0807d750 <_init+0x48>
084b031e +0x038:  mov    %eax,-0x3c(%ebp)
084b0321 +0x03b:  lea    -0x3c(%ebp),%eax
084b0324 +0x03e:  mov    %eax,0x4(%esp)
084b0328 +0x042:  lea    -0xa48(%ebp),%eax
084b032e +0x048:  mov    %eax,(%esp)
084b0331 +0x04b:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
084b0336 +0x050:  movl   $0x0,-0xc(%ebp)
084b033d +0x057:  jmp    084b042a <+0x144>
084b0342 +0x05c:  movl   $0xffffffff,-0x7b(%ebp)
084b0349 +0x063:  lea    -0x7d(%ebp),%eax
084b034c +0x066:  mov    %eax,0xc(%esp)
084b0350 +0x06a:  mov    -0x10(%ebp),%eax
084b0353 +0x06d:  mov    %eax,0x8(%esp)
084b0357 +0x071:  lea    -0xa48(%ebp),%eax
084b035d +0x077:  mov    %eax,0x4(%esp)
084b0361 +0x07b:  mov    0x8(%ebp),%eax
084b0364 +0x07e:  mov    %eax,(%esp)
084b0367 +0x081:  call   084b0550 <_ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item>  ; game_master::CRandomObjectTest::processVendingMachineItemLottery(CMTRand&, stVendingMachineInfo_t const*, Inven_Item&)
084b036c +0x086:  mov    -0x7b(%ebp),%eax
084b036f +0x089:  mov    %eax,-0x38(%ebp)
084b0372 +0x08c:  lea    -0x40(%ebp),%eax
084b0375 +0x08f:  lea    -0x38(%ebp),%edx
084b0378 +0x092:  mov    %edx,0x8(%esp)
084b037c +0x096:  mov    0xc(%ebp),%edx
084b037f +0x099:  mov    %edx,0x4(%esp)
084b0383 +0x09d:  mov    %eax,(%esp)
084b0386 +0x0a0:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084b038b +0x0a5:  sub    $0x4,%esp
084b038e +0x0a8:  lea    -0x34(%ebp),%eax
084b0391 +0x0ab:  mov    0xc(%ebp),%edx
084b0394 +0x0ae:  mov    %edx,0x4(%esp)
084b0398 +0x0b2:  mov    %eax,(%esp)
084b039b +0x0b5:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084b03a0 +0x0ba:  sub    $0x4,%esp
084b03a3 +0x0bd:  lea    -0x34(%ebp),%eax
084b03a6 +0x0c0:  mov    %eax,0x4(%esp)
084b03aa +0x0c4:  lea    -0x40(%ebp),%eax
084b03ad +0x0c7:  mov    %eax,(%esp)
084b03b0 +0x0ca:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084b03b5 +0x0cf:  test   %al,%al
084b03b7 +0x0d1:  je     084b03cf <+0xe9>
084b03b9 +0x0d3:  lea    -0x40(%ebp),%eax
084b03bc +0x0d6:  mov    %eax,(%esp)
084b03bf +0x0d9:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084b03c4 +0x0de:  mov    0x4(%eax),%edx
084b03c7 +0x0e1:  add    $0x1,%edx
084b03ca +0x0e4:  mov    %edx,0x4(%eax)
084b03cd +0x0e7:  jmp    084b0426 <+0x140>
084b03cf +0x0e9:  movl   $0x1,-0x18(%ebp)
084b03d6 +0x0f0:  mov    -0x7b(%ebp),%eax
084b03d9 +0x0f3:  mov    %eax,-0x14(%ebp)
084b03dc +0x0f6:  lea    -0x20(%ebp),%eax
084b03df +0x0f9:  lea    -0x18(%ebp),%edx
084b03e2 +0x0fc:  mov    %edx,0x8(%esp)
084b03e6 +0x100:  lea    -0x14(%ebp),%edx
084b03e9 +0x103:  mov    %edx,0x4(%esp)
084b03ed +0x107:  mov    %eax,(%esp)
084b03f0 +0x10a:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084b03f5 +0x10f:  sub    $0x4,%esp
084b03f8 +0x112:  lea    -0x20(%ebp),%eax
084b03fb +0x115:  mov    %eax,0x4(%esp)
084b03ff +0x119:  lea    -0x28(%ebp),%eax
084b0402 +0x11c:  mov    %eax,(%esp)
084b0405 +0x11f:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084b040a +0x124:  lea    -0x30(%ebp),%eax
084b040d +0x127:  lea    -0x28(%ebp),%edx
084b0410 +0x12a:  mov    %edx,0x8(%esp)
084b0414 +0x12e:  mov    0xc(%ebp),%edx
084b0417 +0x131:  mov    %edx,0x4(%esp)
084b041b +0x135:  mov    %eax,(%esp)
084b041e +0x138:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084b0423 +0x13d:  sub    $0x4,%esp
084b0426 +0x140:  addl   $0x1,-0xc(%ebp)
084b042a +0x144:  mov    0x8(%ebp),%eax
084b042d +0x147:  mov    0xc(%eax),%eax
084b0430 +0x14a:  cmp    -0xc(%ebp),%eax
084b0433 +0x14d:  setg   %al
084b0436 +0x150:  test   %al,%al
084b0438 +0x152:  jne    084b0342 <+0x5c>
084b043e +0x158:  jmp    084b0441 <+0x15b>
084b0440 +0x15a:  nop
084b0441 +0x15b:  leave
084b0442 +0x15c:  ret
084b0443 +0x15d:  nop
```

## 反编译 C

```c
// game_master::CRandomObjectTest::getVendingMachineItem @ 0x84b02e6

/* game_master::CRandomObjectTest::getVendingMachineItem(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CRandomObjectTest::getVendingMachineItem(map *param_1)

{
  char cVar1;
  int iVar2;
  CMTRand local_a4c [2507];
  Inven_Item local_81 [2];
  int local_7f;
  _Rb_tree_iterator<std::pair<int_const,int>> local_44 [4];
  ulong local_40;
  int local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  int local_24 [2];
  undefined4 local_1c;
  int local_18;
  stVendingMachineInfo_t *local_14;
  int local_10;
  
  local_14 = (stVendingMachineInfo_t *)getVendingMachineInfo();
  if (local_14 != (stVendingMachineInfo_t *)0x0) {
    Inven_Item::Inven_Item(local_81);
    local_40 = time((time_t *)0x0);
    CMTRand::CMTRand(local_a4c,&local_40);
    for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
      local_7f = -1;
      processVendingMachineItemLottery((CRandomObjectTest *)param_1,local_a4c,local_14,local_81);
      local_3c = local_7f;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_44);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_44,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        local_1c = 1;
        local_18 = local_7f;
        std::make_pair<int,int>(local_24,&local_18);
        std::pair<int_const,int>::pair<int,int>(local_2c,(pair *)local_24);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_34);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_44);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
    }
  }
  return;
}
```
