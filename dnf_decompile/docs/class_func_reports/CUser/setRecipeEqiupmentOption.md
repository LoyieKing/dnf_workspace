# setRecipeEqiupmentOption

`_ZN5CUser24setRecipeEqiupmentOptionER10Inven_Item16stEquipConditioniPK14CStackableItemi`

`CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, CStackableItem const*, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867306e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867306e  _ZN5CUser24setRecipeEqiupmentOptionER10Inven_Item16stEquipConditioniPK14CStackableItemi
#           CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, CStackableItem const*, int)
# range [0x0867306e, 0x08673341]
0867306e +0x000:  push   %ebp
0867306f +0x001:  mov    %esp,%ebp
08673071 +0x003:  push   %edi
08673072 +0x004:  push   %esi
08673073 +0x005:  push   %ebx
08673074 +0x006:  sub    $0x7c,%esp
08673077 +0x009:  mov    0xc(%ebp),%eax
0867307a +0x00c:  mov    0x2(%eax),%eax
0867307d +0x00f:  mov    %eax,%ebx
0867307f +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08673084 +0x016:  mov    %ebx,0x4(%esp)
08673088 +0x01a:  mov    %eax,(%esp)
0867308b +0x01d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08673090 +0x022:  mov    %eax,-0x20(%ebp)
08673093 +0x025:  cmpl   $0x0,-0x20(%ebp)
08673097 +0x029:  jne    086730ca <+0x5c>
08673099 +0x02b:  movl   $"RECIPE ERROR : Not Exist Output Item",0x10(%esp)
086730a1 +0x033:  movl   $0x5fbe,0xc(%esp)
086730a9 +0x03b:  movl   $&_ZZN5CUser24setRecipeEqiupmentOptionER10Inven_Item16stEquipConditioniPK14CStackableItemiE19__PRETTY_FUNCTION__,0x8(%esp)
086730b1 +0x043:  movl   $"user.cpp",0x4(%esp)
086730b9 +0x04b:  movl   $0x1,(%esp)
086730c0 +0x052:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086730c5 +0x057:  jmp    0867333a <+0x2cc>
086730ca +0x05c:  mov    0xc(%ebp),%eax
086730cd +0x05f:  movzbl 0x1(%eax),%eax
086730d1 +0x063:  cmp    $0x1,%al
086730d3 +0x065:  je     08673106 <+0x98>
086730d5 +0x067:  movl   $"RECIPE ERROR : Not Equipment Item",0x10(%esp)
086730dd +0x06f:  movl   $0x5fc4,0xc(%esp)
086730e5 +0x077:  movl   $&_ZZN5CUser24setRecipeEqiupmentOptionER10Inven_Item16stEquipConditioniPK14CStackableItemiE19__PRETTY_FUNCTION__,0x8(%esp)
086730ed +0x07f:  movl   $"user.cpp",0x4(%esp)
086730f5 +0x087:  movl   $0x1,(%esp)
086730fc +0x08e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08673101 +0x093:  jmp    0867333a <+0x2cc>
08673106 +0x098:  movzbl 0x11(%ebp),%eax
0867310a +0x09c:  cmp    $0x1f,%al
0867310c +0x09e:  jbe    0867313f <+0xd1>
0867310e +0x0a0:  movl   $"RECIPE ERROR : Impossible Upgrade Value",0x10(%esp)
08673116 +0x0a8:  movl   $0x5fca,0xc(%esp)
0867311e +0x0b0:  movl   $&_ZZN5CUser24setRecipeEqiupmentOptionER10Inven_Item16stEquipConditioniPK14CStackableItemiE19__PRETTY_FUNCTION__,0x8(%esp)
08673126 +0x0b8:  movl   $"user.cpp",0x4(%esp)
0867312e +0x0c0:  movl   $0x1,(%esp)
08673135 +0x0c7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0867313a +0x0cc:  jmp    0867333a <+0x2cc>
0867313f +0x0d1:  cmpl   $0xb,0x20(%ebp)
08673143 +0x0d5:  je     08673167 <+0xf9>
08673145 +0x0d7:  mov    0x10(%ebp),%eax
08673148 +0x0da:  mov    0x14(%ebp),%edx
0867314b +0x0dd:  mov    %eax,0x8(%esp)
0867314f +0x0e1:  mov    %edx,0xc(%esp)
08673153 +0x0e5:  mov    0x1c(%ebp),%eax
08673156 +0x0e8:  mov    %eax,0x4(%esp)
0867315a +0x0ec:  mov    0x8(%ebp),%eax
0867315d +0x0ef:  mov    %eax,(%esp)
08673160 +0x0f2:  call   08682082 <_ZNK5CUser18getCompoundUpgradeEPK14CStackableItem16stEquipCondition>  ; CUser::getCompoundUpgrade(CStackableItem const*, stEquipCondition) const
08673165 +0x0f7:  jmp    0867316c <+0xfe>
08673167 +0x0f9:  mov    $0x0,%eax
0867316c +0x0fe:  mov    %eax,-0x1c(%ebp)
0867316f +0x101:  movzbl 0x16(%ebp),%eax
08673173 +0x105:  movzbl %al,%edi
08673176 +0x108:  movzbl 0x11(%ebp),%eax
0867317a +0x10c:  movzbl %al,%esi
0867317d +0x10f:  mov    0xc(%ebp),%eax
08673180 +0x112:  mov    0x2(%eax),%ebx
08673183 +0x115:  movl   $0x0,0xc(%esp)
0867318b +0x11d:  movl   $0x5fdb,0x8(%esp)
08673193 +0x125:  movl   $&_ZZN5CUser24setRecipeEqiupmentOptionER10Inven_Item16stEquipConditioniPK14CStackableItemiE19__PRETTY_FUNCTION__,0x4(%esp)
0867319b +0x12d:  lea    -0x30(%ebp),%eax
0867319e +0x130:  mov    %eax,(%esp)
086731a1 +0x133:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086731a6 +0x138:  mov    %edi,0x14(%esp)
086731aa +0x13c:  mov    -0x1c(%ebp),%eax
086731ad +0x13f:  mov    %eax,0x10(%esp)
086731b1 +0x143:  mov    %esi,0xc(%esp)
086731b5 +0x147:  mov    %ebx,0x8(%esp)
086731b9 +0x14b:  movl   $"RECIPE LOG : out_item_id-%u, mat_up_val-%d, out_up_val-%d, mat_seal-%d",0x4(%esp)
086731c1 +0x153:  lea    -0x30(%ebp),%eax
086731c4 +0x156:  mov    %eax,(%esp)
086731c7 +0x159:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086731cc +0x15e:  movzbl 0x12(%ebp),%eax
086731d0 +0x162:  test   %al,%al
086731d2 +0x164:  jne    086731eb <+0x17d>
086731d4 +0x166:  mov    -0x1c(%ebp),%eax
086731d7 +0x169:  movzbl %al,%eax
086731da +0x16c:  mov    %eax,0x4(%esp)
086731de +0x170:  mov    0xc(%ebp),%eax
086731e1 +0x173:  mov    %eax,(%esp)
086731e4 +0x176:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
086731e9 +0x17b:  jmp    08673232 <+0x1c4>
086731eb +0x17d:  movzwl 0x14(%ebp),%eax
086731ef +0x181:  movzwl %ax,%edx
086731f2 +0x184:  movzbl 0x13(%ebp),%eax
086731f6 +0x188:  movzbl %al,%eax
086731f9 +0x18b:  mov    0xc(%ebp),%ecx
086731fc +0x18e:  add    $0x11,%ecx
086731ff +0x191:  mov    %edx,0x8(%esp)
08673203 +0x195:  mov    %eax,0x4(%esp)
08673207 +0x199:  mov    %ecx,(%esp)
0867320a +0x19c:  call   084b40e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x197>  ; global constructors keyed to game_master::CMacro::Reset()+0x197
0867320f +0x1a1:  mov    0xc(%ebp),%eax
08673212 +0x1a4:  add    $0x11,%eax
08673215 +0x1a7:  mov    %eax,(%esp)
08673218 +0x1aa:  call   0822b3d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa82
0867321d +0x1af:  mov    -0x1c(%ebp),%eax
08673220 +0x1b2:  movzbl %al,%eax
08673223 +0x1b5:  mov    %eax,0x4(%esp)
08673227 +0x1b9:  mov    0xc(%ebp),%eax
0867322a +0x1bc:  mov    %eax,(%esp)
0867322d +0x1bf:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08673232 +0x1c4:  movzbl 0x16(%ebp),%eax
08673236 +0x1c8:  cmp    $0x1,%al
08673238 +0x1ca:  jne    08673261 <+0x1f3>
0867323a +0x1cc:  mov    -0x20(%ebp),%eax
0867323d +0x1cf:  mov    %eax,(%esp)
08673240 +0x1d2:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08673245 +0x1d7:  cmp    $0x3,%eax
08673248 +0x1da:  je     0867325a <+0x1ec>
0867324a +0x1dc:  mov    -0x20(%ebp),%eax
0867324d +0x1df:  mov    %eax,(%esp)
08673250 +0x1e2:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08673255 +0x1e7:  cmp    $0x4,%eax
08673258 +0x1ea:  jne    08673261 <+0x1f3>
0867325a +0x1ec:  mov    $0x1,%eax
0867325f +0x1f1:  jmp    08673266 <+0x1f8>
08673261 +0x1f3:  mov    $0x0,%eax
08673266 +0x1f8:  test   %al,%al
08673268 +0x1fa:  je     08673272 <+0x204>
0867326a +0x1fc:  mov    0xc(%ebp),%eax
0867326d +0x1ff:  movb   $0x1,(%eax)
08673270 +0x202:  jmp    08673278 <+0x20a>
08673272 +0x204:  mov    0xc(%ebp),%eax
08673275 +0x207:  movb   $0x0,(%eax)
08673278 +0x20a:  mov    -0x20(%ebp),%eax
0867327b +0x20d:  mov    %eax,(%esp)
0867327e +0x210:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08673283 +0x215:  cmp    $0x3,%eax
08673286 +0x218:  sete   %al
08673289 +0x21b:  test   %al,%al
0867328b +0x21d:  je     086732a3 <+0x235>
0867328d +0x21f:  movzbl 0x17(%ebp),%eax
08673291 +0x223:  movzbl %al,%eax
08673294 +0x226:  mov    %eax,0x4(%esp)
08673298 +0x22a:  mov    0xc(%ebp),%eax
0867329b +0x22d:  mov    %eax,(%esp)
0867329e +0x230:  call   0822b466 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb10
086732a3 +0x235:  mov    0x8(%ebp),%eax
086732a6 +0x238:  mov    %eax,(%esp)
086732a9 +0x23b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086732ae +0x240:  mov    %eax,%edx
086732b0 +0x242:  mov    0xc(%ebp),%eax
086732b3 +0x245:  mov    (%eax),%ecx
086732b5 +0x247:  mov    %ecx,0xc(%esp)
086732b9 +0x24b:  mov    0x4(%eax),%ecx
086732bc +0x24e:  mov    %ecx,0x10(%esp)
086732c0 +0x252:  mov    0x8(%eax),%ecx
086732c3 +0x255:  mov    %ecx,0x14(%esp)
086732c7 +0x259:  mov    0xc(%eax),%ecx
086732ca +0x25c:  mov    %ecx,0x18(%esp)
086732ce +0x260:  mov    0x10(%eax),%ecx
086732d1 +0x263:  mov    %ecx,0x1c(%esp)
086732d5 +0x267:  mov    0x14(%eax),%ecx
086732d8 +0x26a:  mov    %ecx,0x20(%esp)
086732dc +0x26e:  mov    0x18(%eax),%ecx
086732df +0x271:  mov    %ecx,0x24(%esp)
086732e3 +0x275:  mov    0x1c(%eax),%ecx
086732e6 +0x278:  mov    %ecx,0x28(%esp)
086732ea +0x27c:  mov    0x20(%eax),%ecx
086732ed +0x27f:  mov    %ecx,0x2c(%esp)
086732f1 +0x283:  mov    0x24(%eax),%ecx
086732f4 +0x286:  mov    %ecx,0x30(%esp)
086732f8 +0x28a:  mov    0x28(%eax),%ecx
086732fb +0x28d:  mov    %ecx,0x34(%esp)
086732ff +0x291:  mov    0x2c(%eax),%ecx
08673302 +0x294:  mov    %ecx,0x38(%esp)
08673306 +0x298:  mov    0x30(%eax),%ecx
08673309 +0x29b:  mov    %ecx,0x3c(%esp)
0867330d +0x29f:  mov    0x34(%eax),%ecx
08673310 +0x2a2:  mov    %ecx,0x40(%esp)
08673314 +0x2a6:  mov    0x38(%eax),%ecx
08673317 +0x2a9:  mov    %ecx,0x44(%esp)
0867331b +0x2ad:  movzbl 0x3c(%eax),%eax
0867331f +0x2b1:  mov    %al,0x48(%esp)
08673323 +0x2b5:  mov    0x18(%ebp),%eax
08673326 +0x2b8:  mov    %eax,0x8(%esp)
0867332a +0x2bc:  movl   $0x1,0x4(%esp)
08673332 +0x2c4:  mov    %edx,(%esp)
08673335 +0x2c7:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0867333a +0x2cc:  add    $0x7c,%esp
0867333d +0x2cf:  pop    %ebx
0867333e +0x2d0:  pop    %esi
0867333f +0x2d1:  pop    %edi
08673340 +0x2d2:  pop    %ebp
08673341 +0x2d3:  ret
```

## 反编译 C

```c
// CUser::setRecipeEqiupmentOption @ 0x867306e

/* CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, CStackableItem const*, int)
    */

void CUser::setRecipeEqiupmentOption
               (CUser *param_1,Inven_Item *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

{
  bool bVar1;
  CDataManager *this;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_34 [16];
  CItem *local_24;
  undefined4 local_20;
  
  iVar2 = *(int *)(param_2 + 2);
  this = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(this,iVar2);
  if (local_24 == (CItem *)0x0) {
    LogManager::logFormat
              (1,"user.cpp",
               "void CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, const CStackableItem*, int)"
               ,0x5fbe,"RECIPE ERROR : Not Exist Output Item");
    return;
  }
  if (param_2[1] == (Inven_Item)0x1) {
    if (param_3._1_1_ < 0x20) {
      if (param_7 == 0xb) {
        local_20 = 0;
      }
      else {
        local_20 = getCompoundUpgrade(param_1,param_6,param_3,param_4);
      }
      uVar3 = *(undefined4 *)(param_2 + 2);
      cMyTrace::cMyTrace(local_34,
                         "void CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, const CStackableItem*, int)"
                         ,0x5fdb,0);
      cMyTrace::operator()
                (local_34,"RECIPE LOG : out_item_id-%u, mat_up_val-%d, out_up_val-%d, mat_seal-%d",
                 uVar3,(uint)param_3._1_1_,local_20,(uint)param_4._2_1_);
      if (param_3._2_1_ == '\0') {
        Inven_Item::SetUpgrade(param_2,(uchar)local_20);
      }
      else {
        stAmplifyOption_t::assign
                  ((stAmplifyOption_t *)(param_2 + 0x11),param_3._3_1_,(ushort)param_4);
        stAmplifyOption_t::identify((stAmplifyOption_t *)(param_2 + 0x11));
        Inven_Item::SetUpgrade(param_2,(uchar)local_20);
      }
      if ((param_4._2_1_ == 1) &&
         ((iVar2 = CItem::GetAttachType(local_24), iVar2 == 3 ||
          (iVar2 = CItem::GetAttachType(local_24), iVar2 == 4)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        *param_2 = (Inven_Item)0x1;
      }
      else {
        *param_2 = (Inven_Item)0x0;
      }
      iVar2 = CItem::GetAttachType(local_24);
      if (iVar2 == 3) {
        Inven_Item::SetReSealCount(param_2,param_4._3_1_);
      }
      uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::update_item
                (uVar3,1,param_5,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                 *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                 *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                 *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                 *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                 *(undefined4 *)(param_2 + 0x38),param_2[0x3c]);
      return;
    }
    LogManager::logFormat
              (1,"user.cpp",
               "void CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, const CStackableItem*, int)"
               ,0x5fca,"RECIPE ERROR : Impossible Upgrade Value");
    return;
  }
  LogManager::logFormat
            (1,"user.cpp",
             "void CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, const CStackableItem*, int)"
             ,0x5fc4,"RECIPE ERROR : Not Equipment Item");
  return;
}
```
