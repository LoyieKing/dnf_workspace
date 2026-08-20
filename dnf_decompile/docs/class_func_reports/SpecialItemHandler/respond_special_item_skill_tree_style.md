# respond_special_item_skill_tree_style

`_ZN18SpecialItemHandler37respond_special_item_skill_tree_styleEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_skill_tree_style(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827ce7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ce7e  _ZN18SpecialItemHandler37respond_special_item_skill_tree_styleEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_skill_tree_style(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827ce7e, 0x0827cfef]
0827ce7e +0x000:  push   %ebp
0827ce7f +0x001:  mov    %esp,%ebp
0827ce81 +0x003:  push   %esi
0827ce82 +0x004:  push   %ebx
0827ce83 +0x005:  sub    $0x40,%esp
0827ce86 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0827ce8b +0x00d:  mov    %eax,(%esp)
0827ce8e +0x010:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
0827ce93 +0x015:  mov    %eax,-0x10(%ebp)
0827ce96 +0x018:  mov    0x10(%ebp),%eax
0827ce99 +0x01b:  mov    (%eax),%eax
0827ce9b +0x01d:  mov    %eax,-0xc(%ebp)
0827ce9e +0x020:  mov    -0xc(%ebp),%eax
0827cea1 +0x023:  mov    %eax,(%esp)
0827cea4 +0x026:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827cea9 +0x02b:  mov    %eax,%esi
0827ceab +0x02d:  mov    -0xc(%ebp),%eax
0827ceae +0x030:  mov    %eax,(%esp)
0827ceb1 +0x033:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0827ceb6 +0x038:  mov    %eax,%ebx
0827ceb8 +0x03a:  movl   $0x0,0xc(%esp)
0827cec0 +0x042:  movl   $0x1f3,0x8(%esp)
0827cec8 +0x04a:  movl   $&_ZZN18SpecialItemHandler37respond_special_item_skill_tree_styleEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x4(%esp)
0827ced0 +0x052:  lea    -0x20(%ebp),%eax
0827ced3 +0x055:  mov    %eax,(%esp)
0827ced6 +0x058:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827cedb +0x05d:  mov    %esi,0xc(%esp)
0827cedf +0x061:  mov    %ebx,0x8(%esp)
0827cee3 +0x065:  movl   $"SKILL_TREE_STYLE : BUY_SKILL_TREE_STYLE, char(%s), char_no(%d)",0x4(%esp)
0827ceeb +0x06d:  lea    -0x20(%ebp),%eax
0827ceee +0x070:  mov    %eax,(%esp)
0827cef1 +0x073:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827cef6 +0x078:  mov    -0xc(%ebp),%eax
0827cef9 +0x07b:  movl   $0x0,0x4(%esp)
0827cf01 +0x083:  mov    %eax,(%esp)
0827cf04 +0x086:  call   0822f308 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49b2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49b2
0827cf09 +0x08b:  mov    -0xc(%ebp),%eax
0827cf0c +0x08e:  mov    %eax,(%esp)
0827cf0f +0x091:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
0827cf14 +0x096:  movl   $0x1,0xc(%esp)
0827cf1c +0x09e:  movl   $0x1,0x8(%esp)
0827cf24 +0x0a6:  mov    -0xc(%ebp),%eax
0827cf27 +0x0a9:  mov    %eax,0x4(%esp)
0827cf2b +0x0ad:  mov    -0x10(%ebp),%eax
0827cf2e +0x0b0:  mov    %eax,(%esp)
0827cf31 +0x0b3:  call   085c421e <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)
0827cf36 +0x0b8:  lea    -0x2c(%ebp),%eax
0827cf39 +0x0bb:  mov    %eax,(%esp)
0827cf3c +0x0be:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0827cf41 +0x0c3:  movl   $0x2,0x8(%esp)
0827cf49 +0x0cb:  movl   $0x0,0x4(%esp)
0827cf51 +0x0d3:  lea    -0x2c(%ebp),%eax
0827cf54 +0x0d6:  mov    %eax,(%esp)
0827cf57 +0x0d9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0827cf5c +0x0de:  movl   $0x0,0x4(%esp)
0827cf64 +0x0e6:  lea    -0x2c(%ebp),%eax
0827cf67 +0x0e9:  mov    %eax,(%esp)
0827cf6a +0x0ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0827cf6f +0x0f1:  movl   $0x1,0x4(%esp)
0827cf77 +0x0f9:  lea    -0x2c(%ebp),%eax
0827cf7a +0x0fc:  mov    %eax,(%esp)
0827cf7d +0x0ff:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0827cf82 +0x104:  lea    -0x2c(%ebp),%eax
0827cf85 +0x107:  movl   $0x0,0x8(%esp)
0827cf8d +0x10f:  mov    %eax,0x4(%esp)
0827cf91 +0x113:  mov    -0xc(%ebp),%eax
0827cf94 +0x116:  mov    %eax,(%esp)
0827cf97 +0x119:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0827cf9c +0x11e:  movl   $0x1,0x4(%esp)
0827cfa4 +0x126:  lea    -0x2c(%ebp),%eax
0827cfa7 +0x129:  mov    %eax,(%esp)
0827cfaa +0x12c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0827cfaf +0x131:  lea    -0x2c(%ebp),%eax
0827cfb2 +0x134:  mov    %eax,0x4(%esp)
0827cfb6 +0x138:  mov    -0xc(%ebp),%eax
0827cfb9 +0x13b:  mov    %eax,(%esp)
0827cfbc +0x13e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0827cfc1 +0x143:  jmp    0827cfde <+0x160>
0827cfc3 +0x145:  mov    %edx,%ebx
0827cfc5 +0x147:  mov    %eax,%esi
0827cfc7 +0x149:  lea    -0x2c(%ebp),%eax
0827cfca +0x14c:  mov    %eax,(%esp)
0827cfcd +0x14f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0827cfd2 +0x154:  mov    %esi,%eax
0827cfd4 +0x156:  mov    %ebx,%edx
0827cfd6 +0x158:  mov    %eax,(%esp)
0827cfd9 +0x15b:  call   08ae3750 <_Unwind_Resume>
0827cfde +0x160:  lea    -0x2c(%ebp),%eax
0827cfe1 +0x163:  mov    %eax,(%esp)
0827cfe4 +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0827cfe9 +0x16b:  add    $0x40,%esp
0827cfec +0x16e:  pop    %ebx
0827cfed +0x16f:  pop    %esi
0827cfee +0x170:  pop    %ebp
0827cfef +0x171:  ret
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_skill_tree_style @ 0x827ce7e

/* SpecialItemHandler::respond_special_item_skill_tree_style(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_skill_tree_style
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  CGameManager *this;
  undefined4 uVar1;
  undefined4 uVar2;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  CPremiumLetheManager *local_14;
  CUserCharacInfo *local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_14 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
  local_10 = *(CUserCharacInfo **)param_3;
  uVar1 = CUserCharacInfo::getCurCharacNo(local_10);
  uVar2 = CUserCharacInfo::getCurCharacName(local_10);
  cMyTrace::cMyTrace(local_24,
                     "void SpecialItemHandler::respond_special_item_skill_tree_style(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                     ,499,0);
  cMyTrace::operator()
            (local_24,"SKILL_TREE_STYLE : BUY_SKILL_TREE_STYLE, char(%s), char_no(%d)",uVar2,uVar1);
  CUserCharacInfo::SetCurCharacSkillTreeIndex(local_10,'\0');
  CUser::UpdateData((CUser *)local_10);
  CPremiumLetheManager::InitSkill(local_14,local_10,1,1);
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0827cf57 to 0827cfc0 has its CatchHandler @ 0827cfc3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
  CUser::make_basic_info((CUser *)local_10,(char *)local_30,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send((CUser *)local_10,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}
```
