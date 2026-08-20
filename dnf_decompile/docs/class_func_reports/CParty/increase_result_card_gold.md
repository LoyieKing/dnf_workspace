# increase_result_card_gold

`_ZN6CParty25increase_result_card_goldERN8WongWork18stGenerateResult_tE`

`CParty::increase_result_card_gold(WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859ba98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859ba98  _ZN6CParty25increase_result_card_goldERN8WongWork18stGenerateResult_tE
#           CParty::increase_result_card_gold(WongWork::stGenerateResult_t&)
# range [0x0859ba98, 0x0859bba7]
0859ba98 +0x000:  push   %ebp
0859ba99 +0x001:  mov    %esp,%ebp
0859ba9b +0x003:  sub    $0x58,%esp
0859ba9e +0x006:  mov    0xc(%ebp),%edx
0859baa1 +0x009:  lea    -0x14(%ebp),%eax
0859baa4 +0x00c:  mov    %edx,0x4(%esp)
0859baa8 +0x010:  mov    %eax,(%esp)
0859baab +0x013:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0859bab0 +0x018:  sub    $0x4,%esp
0859bab3 +0x01b:  movl   $0x0,-0xc(%ebp)
0859baba +0x022:  jmp    0859bb97 <+0xff>
0859babf +0x027:  mov    -0xc(%ebp),%eax
0859bac2 +0x02a:  mov    %eax,0x4(%esp)
0859bac6 +0x02e:  mov    0x8(%ebp),%eax
0859bac9 +0x031:  mov    %eax,(%esp)
0859bacc +0x034:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0859bad1 +0x039:  xor    $0x1,%eax
0859bad4 +0x03c:  test   %al,%al
0859bad6 +0x03e:  jne    0859bb92 <+0xfa>
0859badc +0x044:  mov    0xc(%ebp),%edx
0859badf +0x047:  lea    -0x10(%ebp),%eax
0859bae2 +0x04a:  mov    %edx,0x4(%esp)
0859bae6 +0x04e:  mov    %eax,(%esp)
0859bae9 +0x051:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0859baee +0x056:  sub    $0x4,%esp
0859baf1 +0x059:  lea    -0x10(%ebp),%eax
0859baf4 +0x05c:  mov    %eax,0x4(%esp)
0859baf8 +0x060:  lea    -0x14(%ebp),%eax
0859bafb +0x063:  mov    %eax,(%esp)
0859bafe +0x066:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
0859bb03 +0x06b:  test   %al,%al
0859bb05 +0x06d:  je     0859bb93 <+0xfb>
0859bb0b +0x073:  mov    0x8(%ebp),%eax
0859bb0e +0x076:  mov    %eax,0x4(%esp)
0859bb12 +0x07a:  lea    -0x1c(%ebp),%eax
0859bb15 +0x07d:  mov    %eax,(%esp)
0859bb18 +0x080:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
0859bb1d +0x085:  mov    0x8(%ebp),%eax
0859bb20 +0x088:  add    $0xb24,%eax
0859bb25 +0x08d:  mov    %eax,(%esp)
0859bb28 +0x090:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
0859bb2d +0x095:  mov    %eax,-0x18(%ebp)
0859bb30 +0x098:  lea    -0x38(%ebp),%eax
0859bb33 +0x09b:  mov    %eax,(%esp)
0859bb36 +0x09e:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
0859bb3b +0x0a3:  lea    -0x14(%ebp),%eax
0859bb3e +0x0a6:  mov    %eax,(%esp)
0859bb41 +0x0a9:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0859bb46 +0x0ae:  mov    0x7(%eax),%eax
0859bb49 +0x0b1:  mov    %eax,-0x38(%ebp)
0859bb4c +0x0b4:  lea    -0x38(%ebp),%eax
0859bb4f +0x0b7:  mov    %eax,0x10(%esp)
0859bb53 +0x0bb:  mov    -0x1c(%ebp),%eax
0859bb56 +0x0be:  mov    -0x18(%ebp),%edx
0859bb59 +0x0c1:  mov    %eax,0x8(%esp)
0859bb5d +0x0c5:  mov    %edx,0xc(%esp)
0859bb61 +0x0c9:  movl   $0xb,0x4(%esp)
0859bb69 +0x0d1:  mov    0x8(%ebp),%eax
0859bb6c +0x0d4:  mov    %eax,(%esp)
0859bb6f +0x0d7:  call   0859b992 <_ZN6CParty16set_basic_rewardEN10QuickParty15BasicRewardTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_basic_reward(QuickParty::BasicRewardType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
0859bb74 +0x0dc:  lea    -0x14(%ebp),%eax
0859bb77 +0x0df:  mov    %eax,(%esp)
0859bb7a +0x0e2:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0859bb7f +0x0e7:  mov    -0x38(%ebp),%edx
0859bb82 +0x0ea:  mov    %edx,0x7(%eax)
0859bb85 +0x0ed:  lea    -0x14(%ebp),%eax
0859bb88 +0x0f0:  mov    %eax,(%esp)
0859bb8b +0x0f3:  call   0815293c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2271>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2271
0859bb90 +0x0f8:  jmp    0859bb93 <+0xfb>
0859bb92 +0x0fa:  nop
0859bb93 +0x0fb:  addl   $0x1,-0xc(%ebp)
0859bb97 +0x0ff:  cmpl   $0x3,-0xc(%ebp)
0859bb9b +0x103:  setle  %al
0859bb9e +0x106:  test   %al,%al
0859bba0 +0x108:  jne    0859babf <+0x27>
0859bba6 +0x10e:  leave
0859bba7 +0x10f:  ret
```

## 反编译 C

```c
// CParty::increase_result_card_gold @ 0x859ba98

/* CParty::increase_result_card_gold(WongWork::stGenerateResult_t&) */

void CParty::increase_result_card_gold(stGenerateResult_t *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_3c [7];
  undefined4 local_20;
  undefined4 local_1c;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = checkValidUser((CParty *)param_1,local_10);
    if (cVar1 == '\x01') {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      bVar2 = __gnu_cxx::operator!=(local_18,local_14);
      if (bVar2) {
        QuickParty::RewardData_Param::RewardData_Param
                  ((RewardData_Param *)&local_20,(CParty *)param_1);
        local_1c = CBattle_Field::get_dungeon_index((CBattle_Field *)(param_1 + 0xb24));
        QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_3c);
        iVar3 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_18);
        local_3c[0] = *(undefined4 *)(iVar3 + 7);
        set_basic_reward(param_1,0xb,local_20,local_1c,local_3c);
        iVar3 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_18);
        *(undefined4 *)(iVar3 + 7) = local_3c[0];
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++(local_18);
      }
    }
  }
  return;
}
```
