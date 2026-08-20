# _check_level_up

`_ZN5CUser15_check_level_upEiRiS0_13eExpAddReasoni`

`CUser::_check_level_up(int, int&, int&, eExpAddReason, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08662aea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08662aea  _ZN5CUser15_check_level_upEiRiS0_13eExpAddReasoni
#           CUser::_check_level_up(int, int&, int&, eExpAddReason, int)
# range [0x08662aea, 0x08663119]
08662aea +0x000:  push   %ebp
08662aeb +0x001:  mov    %esp,%ebp
08662aed +0x003:  push   %edi
08662aee +0x004:  push   %esi
08662aef +0x005:  push   %ebx
08662af0 +0x006:  sub    $0xac,%esp
08662af6 +0x00c:  mov    0x8(%ebp),%eax
08662af9 +0x00f:  mov    %eax,(%esp)
08662afc +0x012:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662b01 +0x017:  add    $0x1,%eax
08662b04 +0x01a:  mov    %eax,-0x30(%ebp)
08662b07 +0x01d:  movb   $0x0,-0x21(%ebp)
08662b0b +0x021:  mov    0x8(%ebp),%eax
08662b0e +0x024:  mov    %eax,(%esp)
08662b11 +0x027:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08662b16 +0x02c:  test   %eax,%eax
08662b18 +0x02e:  sete   %al
08662b1b +0x031:  test   %al,%al
08662b1d +0x033:  je     08662b5f <+0x75>
08662b1f +0x035:  movl   $0x5,0xc(%esp)
08662b27 +0x03d:  movl   $0x401b,0x8(%esp)
08662b2f +0x045:  movl   $&_ZZN5CUser15_check_level_upEiRiS0_13eExpAddReasoniE19__PRETTY_FUNCTION__,0x4(%esp)
08662b37 +0x04d:  lea    -0x70(%ebp),%eax
08662b3a +0x050:  mov    %eax,(%esp)
08662b3d +0x053:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08662b42 +0x058:  movl   $"CUser::_check_level_up m_selected is NULL",0x4(%esp)
08662b4a +0x060:  lea    -0x70(%ebp),%eax
08662b4d +0x063:  mov    %eax,(%esp)
08662b50 +0x066:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08662b55 +0x06b:  mov    $0x0,%eax
08662b5a +0x070:  jmp    0866310e <+0x624>
08662b5f +0x075:  mov    0x8(%ebp),%eax
08662b62 +0x078:  mov    %eax,(%esp)
08662b65 +0x07b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662b6a +0x080:  test   %eax,%eax
08662b6c +0x082:  sete   %al
08662b6f +0x085:  test   %al,%al
08662b71 +0x087:  je     086630ea <+0x600>
08662b77 +0x08d:  movl   $0x5,0xc(%esp)
08662b7f +0x095:  movl   $0x4022,0x8(%esp)
08662b87 +0x09d:  movl   $&_ZZN5CUser15_check_level_upEiRiS0_13eExpAddReasoniE19__PRETTY_FUNCTION__,0x4(%esp)
08662b8f +0x0a5:  lea    -0x60(%ebp),%eax
08662b92 +0x0a8:  mov    %eax,(%esp)
08662b95 +0x0ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08662b9a +0x0b0:  movl   $"CUser::_check_level_up m_selected->m_level is 0",0x4(%esp)
08662ba2 +0x0b8:  lea    -0x60(%ebp),%eax
08662ba5 +0x0bb:  mov    %eax,(%esp)
08662ba8 +0x0be:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08662bad +0x0c3:  mov    $0x0,%eax
08662bb2 +0x0c8:  jmp    0866310e <+0x624>
08662bb7 +0x0cd:  mov    0x8(%ebp),%eax
08662bba +0x0d0:  mov    %eax,(%esp)
08662bbd +0x0d3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662bc2 +0x0d8:  mov    %eax,%ebx
08662bc4 +0x0da:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08662bc9 +0x0df:  mov    %ebx,0x4(%esp)
08662bcd +0x0e3:  mov    %eax,(%esp)
08662bd0 +0x0e6:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08662bd5 +0x0eb:  mov    %eax,-0x2c(%ebp)
08662bd8 +0x0ee:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08662bdd +0x0f3:  mov    -0x30(%ebp),%edx
08662be0 +0x0f6:  mov    %edx,0x4(%esp)
08662be4 +0x0fa:  mov    %eax,(%esp)
08662be7 +0x0fd:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08662bec +0x102:  mov    %eax,-0x28(%ebp)
08662bef +0x105:  mov    0x8(%ebp),%eax
08662bf2 +0x108:  mov    %eax,(%esp)
08662bf5 +0x10b:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
08662bfa +0x110:  cmp    -0x2c(%ebp),%eax
08662bfd +0x113:  jl     08662c0f <+0x125>
08662bff +0x115:  mov    0x8(%ebp),%eax
08662c02 +0x118:  mov    %eax,(%esp)
08662c05 +0x11b:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
08662c0a +0x120:  cmp    -0x28(%ebp),%eax
08662c0d +0x123:  jle    08662c16 <+0x12c>
08662c0f +0x125:  mov    $0x1,%eax
08662c14 +0x12a:  jmp    08662c1b <+0x131>
08662c16 +0x12c:  mov    $0x0,%eax
08662c1b +0x131:  test   %al,%al
08662c1d +0x133:  je     08662cac <+0x1c2>
08662c23 +0x139:  mov    0x8(%ebp),%eax
08662c26 +0x13c:  mov    %eax,(%esp)
08662c29 +0x13f:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
08662c2e +0x144:  mov    %eax,%edi
08662c30 +0x146:  mov    0x8(%ebp),%eax
08662c33 +0x149:  mov    %eax,(%esp)
08662c36 +0x14c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662c3b +0x151:  mov    %eax,%esi
08662c3d +0x153:  mov    0x8(%ebp),%eax
08662c40 +0x156:  mov    %eax,(%esp)
08662c43 +0x159:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08662c48 +0x15e:  mov    %eax,%ebx
08662c4a +0x160:  movl   $0x5,0xc(%esp)
08662c52 +0x168:  movl   $0x403b,0x8(%esp)
08662c5a +0x170:  movl   $&_ZZN5CUser15_check_level_upEiRiS0_13eExpAddReasoniE19__PRETTY_FUNCTION__,0x4(%esp)
08662c62 +0x178:  lea    -0x50(%ebp),%eax
08662c65 +0x17b:  mov    %eax,(%esp)
08662c68 +0x17e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08662c6d +0x183:  mov    -0x28(%ebp),%eax
08662c70 +0x186:  mov    %eax,0x18(%esp)
08662c74 +0x18a:  mov    -0x2c(%ebp),%eax
08662c77 +0x18d:  mov    %eax,0x14(%esp)
08662c7b +0x191:  mov    %edi,0x10(%esp)
08662c7f +0x195:  mov    %esi,0xc(%esp)
08662c83 +0x199:  mov    %ebx,0x8(%esp)
08662c87 +0x19d:  movl   $"%s is Level(%d) and Exp(%d) Inconsistency(bottom(%d), top(%d))",0x4(%esp)
08662c8f +0x1a5:  lea    -0x50(%ebp),%eax
08662c92 +0x1a8:  mov    %eax,(%esp)
08662c95 +0x1ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08662c9a +0x1b0:  mov    0x8(%ebp),%eax
08662c9d +0x1b3:  mov    -0x2c(%ebp),%edx
08662ca0 +0x1b6:  mov    %edx,0x4(%esp)
08662ca4 +0x1ba:  mov    %eax,(%esp)
08662ca7 +0x1bd:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
08662cac +0x1c2:  mov    -0x2c(%ebp),%eax
08662caf +0x1c5:  mov    -0x28(%ebp),%edx
08662cb2 +0x1c8:  mov    %edx,%ecx
08662cb4 +0x1ca:  sub    %eax,%ecx
08662cb6 +0x1cc:  mov    %ecx,%eax
08662cb8 +0x1ce:  test   %eax,%eax
08662cba +0x1d0:  jg     08662d11 <+0x227>
08662cbc +0x1d2:  movl   $0x5,0xc(%esp)
08662cc4 +0x1da:  movl   $0x4046,0x8(%esp)
08662ccc +0x1e2:  movl   $&_ZZN5CUser15_check_level_upEiRiS0_13eExpAddReasoniE19__PRETTY_FUNCTION__,0x4(%esp)
08662cd4 +0x1ea:  lea    -0x40(%ebp),%eax
08662cd7 +0x1ed:  mov    %eax,(%esp)
08662cda +0x1f0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08662cdf +0x1f5:  mov    -0x2c(%ebp),%eax
08662ce2 +0x1f8:  mov    %eax,0x10(%esp)
08662ce6 +0x1fc:  mov    -0x28(%ebp),%eax
08662ce9 +0x1ff:  mov    %eax,0xc(%esp)
08662ced +0x203:  mov    -0x30(%ebp),%eax
08662cf0 +0x206:  mov    %eax,0x8(%esp)
08662cf4 +0x20a:  movl   $"CUser::_check_level_up, LEVEL:%d TOP:%d BOTTOM:%d",0x4(%esp)
08662cfc +0x212:  lea    -0x40(%ebp),%eax
08662cff +0x215:  mov    %eax,(%esp)
08662d02 +0x218:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08662d07 +0x21d:  mov    $0x0,%eax
08662d0c +0x222:  jmp    0866310e <+0x624>
08662d11 +0x227:  mov    0x8(%ebp),%eax
08662d14 +0x22a:  mov    %eax,(%esp)
08662d17 +0x22d:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
08662d1c +0x232:  add    0xc(%ebp),%eax
08662d1f +0x235:  cmp    -0x28(%ebp),%eax
08662d22 +0x238:  setge  %al
08662d25 +0x23b:  test   %al,%al
08662d27 +0x23d:  je     086630b1 <+0x5c7>
08662d2d +0x243:  mov    0x10(%ebp),%eax
08662d30 +0x246:  mov    (%eax),%ebx
08662d32 +0x248:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08662d37 +0x24d:  mov    -0x30(%ebp),%edx
08662d3a +0x250:  mov    %edx,0x4(%esp)
08662d3e +0x254:  mov    %eax,(%esp)
08662d41 +0x257:  call   08360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>  ; CDataManager::GetSpAtLevelUp(int) const
08662d46 +0x25c:  lea    (%ebx,%eax,1),%edx
08662d49 +0x25f:  mov    0x10(%ebp),%eax
08662d4c +0x262:  mov    %edx,(%eax)
08662d4e +0x264:  cmpl   $0x31,-0x30(%ebp)
08662d52 +0x268:  jle    08662d61 <+0x277>
08662d54 +0x26a:  mov    0x14(%ebp),%eax
08662d57 +0x26d:  mov    (%eax),%eax
08662d59 +0x26f:  lea    0x1(%eax),%edx
08662d5c +0x272:  mov    0x14(%ebp),%eax
08662d5f +0x275:  mov    %edx,(%eax)
08662d61 +0x277:  mov    0x8(%ebp),%eax
08662d64 +0x27a:  mov    %eax,(%esp)
08662d67 +0x27d:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
08662d6c +0x282:  mov    -0x28(%ebp),%edx
08662d6f +0x285:  mov    %edx,%ecx
08662d71 +0x287:  sub    %eax,%ecx
08662d73 +0x289:  mov    %ecx,%eax
08662d75 +0x28b:  mov    %eax,-0x20(%ebp)
08662d78 +0x28e:  addl   $0x1,-0x30(%ebp)
08662d7c +0x292:  mov    0x8(%ebp),%eax
08662d7f +0x295:  mov    %eax,(%esp)
08662d82 +0x298:  call   08696762 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2fb7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2fb7
08662d87 +0x29d:  mov    0x8(%ebp),%eax
08662d8a +0x2a0:  mov    %eax,(%esp)
08662d8d +0x2a3:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
08662d92 +0x2a8:  sub    -0x28(%ebp),%eax
08662d95 +0x2ab:  add    %eax,0xc(%ebp)
08662d98 +0x2ae:  mov    0x8(%ebp),%eax
08662d9b +0x2b1:  mov    %eax,(%esp)
08662d9e +0x2b4:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662da3 +0x2b9:  cmp    $0x9,%eax
08662da6 +0x2bc:  jle    08662dbe <+0x2d4>
08662da8 +0x2be:  mov    0x8(%ebp),%eax
08662dab +0x2c1:  mov    %eax,(%esp)
08662dae +0x2c4:  call   084ecad4 <_GLOBAL__I__Z7getUserj+0x3a86>  ; global constructors keyed to getUser(unsigned int)+0x3a86
08662db3 +0x2c9:  test   %al,%al
08662db5 +0x2cb:  jne    08662dbe <+0x2d4>
08662db7 +0x2cd:  mov    $0x1,%eax
08662dbc +0x2d2:  jmp    08662dc3 <+0x2d9>
08662dbe +0x2d4:  mov    $0x0,%eax
08662dc3 +0x2d9:  test   %al,%al
08662dc5 +0x2db:  je     08662dd2 <+0x2e8>
08662dc7 +0x2dd:  mov    0x8(%ebp),%eax
08662dca +0x2e0:  mov    %eax,(%esp)
08662dcd +0x2e3:  call   08697318 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3b6d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3b6d
08662dd2 +0x2e8:  mov    0x8(%ebp),%eax
08662dd5 +0x2eb:  mov    -0x28(%ebp),%edx
08662dd8 +0x2ee:  mov    %edx,0x4(%esp)
08662ddc +0x2f2:  mov    %eax,(%esp)
08662ddf +0x2f5:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
08662de4 +0x2fa:  movl   $0x1,0x4(%esp)
08662dec +0x302:  mov    0x8(%ebp),%eax
08662def +0x305:  mov    %eax,(%esp)
08662df2 +0x308:  call   086646c8 <_ZN5CUser19_update_charac_statEb>  ; CUser::_update_charac_stat(bool)
08662df7 +0x30d:  movb   $0x1,-0x21(%ebp)
08662dfb +0x311:  mov    0x8(%ebp),%eax
08662dfe +0x314:  mov    %eax,(%esp)
08662e01 +0x317:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
08662e06 +0x31c:  mov    0x8(%ebp),%edx
08662e09 +0x31f:  mov    0x796f8(%edx),%edx
08662e0f +0x325:  mov    %eax,0x4(%esp)
08662e13 +0x329:  mov    %edx,(%esp)
08662e16 +0x32c:  call   084b9e5e <_ZN10HistoryLog12WriteLevelUpEP8_IO_FILEi>  ; HistoryLog::WriteLevelUp(_IO_FILE*, int)
08662e1b +0x331:  mov    0x8(%ebp),%eax
08662e1e +0x334:  mov    %eax,(%esp)
08662e21 +0x337:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662e26 +0x33c:  mov    0x8(%ebp),%edx
08662e29 +0x33f:  add    $0x7121c,%edx
08662e2f +0x345:  mov    %eax,0x4(%esp)
08662e33 +0x349:  mov    %edx,(%esp)
08662e36 +0x34c:  call   08694a64 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x12b9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x12b9
08662e3b +0x351:  mov    %eax,-0x1c(%ebp)
08662e3e +0x354:  cmpl   $0x0,-0x1c(%ebp)
08662e42 +0x358:  je     08662eb8 <+0x3ce>
08662e44 +0x35a:  mov    0x8(%ebp),%eax
08662e47 +0x35d:  mov    %eax,(%esp)
08662e4a +0x360:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662e4f +0x365:  mov    0x8(%ebp),%edx
08662e52 +0x368:  add    $0x7121c,%edx
08662e58 +0x36e:  mov    %eax,0x4(%esp)
08662e5c +0x372:  mov    %edx,(%esp)
08662e5f +0x375:  call   08694a64 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x12b9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x12b9
08662e64 +0x37a:  mov    %eax,%ebx
08662e66 +0x37c:  mov    0x8(%ebp),%eax
08662e69 +0x37f:  mov    %eax,(%esp)
08662e6c +0x382:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08662e71 +0x387:  movl   $0x0,0x10(%esp)
08662e79 +0x38f:  movl   $0x1,0xc(%esp)
08662e81 +0x397:  movl   $0xd,0x8(%esp)
08662e89 +0x39f:  mov    %ebx,0x4(%esp)
08662e8d +0x3a3:  mov    %eax,(%esp)
08662e90 +0x3a6:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08662e95 +0x3ab:  movl   $0x0,0xc(%esp)
08662e9d +0x3b3:  movl   $0x0,0x8(%esp)
08662ea5 +0x3bb:  movl   $0x1,0x4(%esp)
08662ead +0x3c3:  mov    0x8(%ebp),%eax
08662eb0 +0x3c6:  mov    %eax,(%esp)
08662eb3 +0x3c9:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08662eb8 +0x3ce:  mov    0x8(%ebp),%eax
08662ebb +0x3d1:  lea    0x7121c(%eax),%edx
08662ec1 +0x3d7:  mov    0x8(%ebp),%eax
08662ec4 +0x3da:  mov    %eax,0x4(%esp)
08662ec8 +0x3de:  mov    %edx,(%esp)
08662ecb +0x3e1:  call   086ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>  ; WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)
08662ed0 +0x3e6:  cmpl   $0x0,0x18(%ebp)
08662ed4 +0x3ea:  je     08662ef0 <+0x406>
08662ed6 +0x3ec:  mov    -0x20(%ebp),%ebx
08662ed9 +0x3ef:  mov    0x8(%ebp),%eax
08662edc +0x3f2:  mov    %eax,(%esp)
08662edf +0x3f5:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08662ee4 +0x3fa:  mov    %ebx,0x4(%esp)
08662ee8 +0x3fe:  mov    %eax,(%esp)
08662eeb +0x401:  call   084b953e <_ZN8XNuclear6CHades5ExpUpEj>  ; XNuclear::CHades::ExpUp(unsigned int)
08662ef0 +0x406:  mov    0x8(%ebp),%eax
08662ef3 +0x409:  mov    %eax,(%esp)
08662ef6 +0x40c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662efb +0x411:  mov    0x8(%ebp),%edx
08662efe +0x414:  add    $0x79700,%edx
08662f04 +0x41a:  movl   $0x0,0x8(%esp)
08662f0c +0x422:  mov    %eax,0x4(%esp)
08662f10 +0x426:  mov    %edx,(%esp)
08662f13 +0x429:  call   086845b2 <_ZN15cUserHistoryLog7LevelUpEi14eLevelUpReason>  ; cUserHistoryLog::LevelUp(int, eLevelUpReason)
08662f18 +0x42e:  mov    0x8(%ebp),%eax
08662f1b +0x431:  mov    %eax,(%esp)
08662f1e +0x434:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662f23 +0x439:  cmp    $0x3b,%eax
08662f26 +0x43c:  setg   %al
08662f29 +0x43f:  test   %al,%al
08662f2b +0x441:  je     08662f48 <+0x45e>
08662f2d +0x443:  movl   $0x1,0x8(%esp)
08662f35 +0x44b:  movl   $0x1,0x4(%esp)
08662f3d +0x453:  mov    0x8(%ebp),%eax
08662f40 +0x456:  mov    %eax,(%esp)
08662f43 +0x459:  call   08656c12 <_ZN5CUser20DimensionInoutUpdateEbb>  ; CUser::DimensionInoutUpdate(bool, bool)
08662f48 +0x45e:  mov    0x8(%ebp),%eax
08662f4b +0x461:  mov    %eax,(%esp)
08662f4e +0x464:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08662f53 +0x469:  cmp    $0x55,%eax
08662f56 +0x46c:  jne    08662f83 <+0x499>
08662f58 +0x46e:  mov    0x8(%ebp),%eax
08662f5b +0x471:  mov    %eax,(%esp)
08662f5e +0x474:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08662f63 +0x479:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
08662f69 +0x47f:  mov    %eax,0x4(%esp)
08662f6d +0x483:  mov    %edx,(%esp)
08662f70 +0x486:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
08662f75 +0x48b:  xor    $0x1,%eax
08662f78 +0x48e:  test   %al,%al
08662f7a +0x490:  je     08662f83 <+0x499>
08662f7c +0x492:  mov    $0x1,%eax
08662f81 +0x497:  jmp    08662f88 <+0x49e>
08662f83 +0x499:  mov    $0x0,%eax
08662f88 +0x49e:  test   %al,%al
08662f8a +0x4a0:  je     08662ff9 <+0x50f>
08662f8c +0x4a2:  lea    -0x98(%ebp),%eax
08662f92 +0x4a8:  mov    %eax,(%esp)
08662f95 +0x4ab:  call   08694560 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xdb5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xdb5
08662f9a +0x4b0:  mov    0x8(%ebp),%eax
08662f9d +0x4b3:  mov    %eax,(%esp)
08662fa0 +0x4b6:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08662fa5 +0x4bb:  movl   $0x1e,0x8(%esp)
08662fad +0x4c3:  mov    %eax,0x4(%esp)
08662fb1 +0x4c7:  lea    -0x98(%ebp),%eax
08662fb7 +0x4cd:  add    $0xa,%eax
08662fba +0x4d0:  mov    %eax,(%esp)
08662fbd +0x4d3:  call   0807d8d0 <_init+0x1c8>
08662fc2 +0x4d8:  lea    -0x98(%ebp),%ebx
08662fc8 +0x4de:  mov    0x8(%ebp),%eax
08662fcb +0x4e1:  mov    %eax,(%esp)
08662fce +0x4e4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08662fd3 +0x4e9:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08662fd9 +0x4ef:  mov    %eax,0x4(%esp)
08662fdd +0x4f3:  mov    %edx,(%esp)
08662fe0 +0x4f6:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08662fe5 +0x4fb:  movl   $0x28,0x8(%esp)
08662fed +0x503:  mov    %ebx,0x4(%esp)
08662ff1 +0x507:  mov    %eax,(%esp)
08662ff4 +0x50a:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08662ff9 +0x50f:  mov    0x8(%ebp),%eax
08662ffc +0x512:  mov    %eax,(%esp)
08662fff +0x515:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08663004 +0x51a:  mov    %eax,%ebx
08663006 +0x51c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0866300b +0x521:  movl   $0x2aff,0x4(%esp)
08663013 +0x529:  mov    %eax,(%esp)
08663016 +0x52c:  call   086c9076 <_ZN9GameWorld30getDungeonMinimumRequiredLevelEi>  ; GameWorld::getDungeonMinimumRequiredLevel(int)
0866301b +0x531:  cmp    %eax,%ebx
0866301d +0x533:  sete   %al
08663020 +0x536:  test   %al,%al
08663022 +0x538:  je     0866308a <+0x5a0>
08663024 +0x53a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08663029 +0x53f:  add    $0x68,%eax
0866302c +0x542:  movl   $0x2aff,0x4(%esp)
08663034 +0x54a:  mov    %eax,(%esp)
08663037 +0x54d:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
0866303c +0x552:  test   %al,%al
0866303e +0x554:  je     08663066 <+0x57c>
08663040 +0x556:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08663045 +0x55b:  movl   $0x1,0xc(%esp)
0866304d +0x563:  movl   $0x2aff,0x8(%esp)
08663055 +0x56b:  mov    0x8(%ebp),%edx
08663058 +0x56e:  mov    %edx,0x4(%esp)
0866305c +0x572:  mov    %eax,(%esp)
0866305f +0x575:  call   086c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>  ; GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)
08663064 +0x57a:  jmp    0866308a <+0x5a0>
08663066 +0x57c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0866306b +0x581:  movl   $0x0,0xc(%esp)
08663073 +0x589:  movl   $0x2aff,0x8(%esp)
0866307b +0x591:  mov    0x8(%ebp),%edx
0866307e +0x594:  mov    %edx,0x4(%esp)
08663082 +0x598:  mov    %eax,(%esp)
08663085 +0x59b:  call   086c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>  ; GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)
0866308a +0x5a0:  mov    0x8(%ebp),%eax
0866308d +0x5a3:  mov    %eax,(%esp)
08663090 +0x5a6:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08663095 +0x5ab:  mov    %eax,0x4(%esp)
08663099 +0x5af:  mov    0x8(%ebp),%eax
0866309c +0x5b2:  mov    %eax,(%esp)
0866309f +0x5b5:  call   08679754 <_ZN5CUser23makeGuildLevelUpMessageEi>  ; CUser::makeGuildLevelUpMessage(int)
086630a4 +0x5ba:  mov    0x8(%ebp),%eax
086630a7 +0x5bd:  mov    %eax,(%esp)
086630aa +0x5c0:  call   0866311a <_ZN5CUser10_onLevelUpEv>  ; CUser::_onLevelUp()
086630af +0x5c5:  jmp    086630ea <+0x600>
086630b1 +0x5c7:  mov    0x8(%ebp),%eax
086630b4 +0x5ca:  mov    0xc(%ebp),%edx
086630b7 +0x5cd:  mov    %edx,0x4(%esp)
086630bb +0x5d1:  mov    %eax,(%esp)
086630be +0x5d4:  call   086967be <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3013>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3013
086630c3 +0x5d9:  cmpl   $0x0,0x18(%ebp)
086630c7 +0x5dd:  je     086630e3 <+0x5f9>
086630c9 +0x5df:  mov    0xc(%ebp),%ebx
086630cc +0x5e2:  mov    0x8(%ebp),%eax
086630cf +0x5e5:  mov    %eax,(%esp)
086630d2 +0x5e8:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
086630d7 +0x5ed:  mov    %ebx,0x4(%esp)
086630db +0x5f1:  mov    %eax,(%esp)
086630de +0x5f4:  call   084b953e <_ZN8XNuclear6CHades5ExpUpEj>  ; XNuclear::CHades::ExpUp(unsigned int)
086630e3 +0x5f9:  movl   $0x0,0xc(%ebp)
086630ea +0x600:  cmpl   $0x0,0xc(%ebp)
086630ee +0x604:  jle    086630fd <+0x613>
086630f0 +0x606:  cmpl   $0x55,-0x30(%ebp)
086630f4 +0x60a:  jg     086630fd <+0x613>
086630f6 +0x60c:  mov    $0x1,%eax
086630fb +0x611:  jmp    08663102 <+0x618>
086630fd +0x613:  mov    $0x0,%eax
08663102 +0x618:  test   %al,%al
08663104 +0x61a:  jne    08662bb7 <+0xcd>
0866310a +0x620:  movzbl -0x21(%ebp),%eax
0866310e +0x624:  add    $0xac,%esp
08663114 +0x62a:  pop    %ebx
08663115 +0x62b:  pop    %esi
08663116 +0x62c:  pop    %edi
08663117 +0x62d:  pop    %ebp
08663118 +0x62e:  ret
08663119 +0x62f:  nop
```

## 反编译 C

```c
// CUser::_check_level_up @ 0x8662aea

/* CUser::_check_level_up(int, int&, int&, eExpAddReason, int) */

undefined1 CUser::_check_level_up(CUser *param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  CInventory *pCVar9;
  uint uVar10;
  char *__src;
  CMonitorServerProxy *this;
  GameWorld *pGVar11;
  Packet_Monitor_Max_Level_BroadCast local_9c [10];
  char acStack_92 [30];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_25;
  int local_24;
  int local_20;
  
  local_34 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_34 = local_34 + 1;
  local_25 = 0;
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    cMyTrace::cMyTrace(local_74,"bool CUser::_check_level_up(int, int&, int&, eExpAddReason, int)",
                       0x401b,5);
    cMyTrace::operator()(local_74,"CUser::_check_level_up m_selected is NULL");
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      cMyTrace::cMyTrace(local_64,"bool CUser::_check_level_up(int, int&, int&, eExpAddReason, int)"
                         ,0x4022,5);
      cMyTrace::operator()(local_64,"CUser::_check_level_up m_selected->m_level is 0");
    }
    else {
      while( true ) {
        if ((param_2 < 1) || (0x55 < local_34)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return local_25;
        }
        iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        pCVar4 = (CDataManager *)G_CDataManager();
        local_30 = CDataManager::get_level_exp(pCVar4,iVar3);
        pCVar4 = (CDataManager *)G_CDataManager();
        local_2c = CDataManager::get_level_exp(pCVar4,local_34);
        iVar3 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
        if ((iVar3 < local_30) ||
           (iVar3 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1), local_2c < iVar3))
        {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar5 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
          uVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_54,
                             "bool CUser::_check_level_up(int, int&, int&, eExpAddReason, int)",
                             0x403b,5);
          cMyTrace::operator()
                    (local_54,"%s is Level(%d) and Exp(%d) Inconsistency(bottom(%d), top(%d))",uVar7
                     ,uVar6,uVar5,local_30,local_2c);
          CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_1,local_30);
        }
        if (local_2c == local_30 || local_2c - local_30 < 0) break;
        iVar3 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
        if (iVar3 + param_2 < local_2c) {
          CUserCharacInfo::addCurCharacExp((CUserCharacInfo *)param_1,param_2);
          if (param_5 != 0) {
            uVar10 = getHades(param_1);
            XNuclear::CHades::ExpUp(uVar10);
          }
          param_2 = 0;
        }
        else {
          iVar3 = *param_3;
          pCVar4 = (CDataManager *)G_CDataManager();
          iVar8 = CDataManager::GetSpAtLevelUp(pCVar4,local_34);
          *param_3 = iVar3 + iVar8;
          if (0x31 < local_34) {
            *param_4 = *param_4 + 1;
          }
          local_24 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
          local_24 = local_2c - local_24;
          local_34 = local_34 + 1;
          CUserCharacInfo::incCurCharacLevel((CUserCharacInfo *)param_1);
          iVar3 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
          param_2 = param_2 + (iVar3 - local_2c);
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          if ((iVar3 < 10) || (cVar2 = GetTutorialSkipable(param_1), cVar2 != '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            UpdateTutorialSkipable(param_1);
          }
          CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_1,local_2c);
          _update_charac_stat(param_1,true);
          local_25 = 1;
          iVar3 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1);
          HistoryLog::WriteLevelUp(*(_IO_FILE **)(param_1 + 0x796f8),iVar3);
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_20 = WongWork::CUserPremium::GetGoldBonus((CUserPremium *)(param_1 + 0x7121c),iVar3)
          ;
          if (local_20 != 0) {
            iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
            uVar5 = WongWork::CUserPremium::GetGoldBonus((CUserPremium *)(param_1 + 0x7121c),iVar3);
            pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::gain_money(pCVar9,uVar5,0xd,1,0);
            SendUpdateItemList(param_1,1,0,0);
          }
          WongWork::CUserPremium::RecalcAdditionalInfo((CUserPremium *)(param_1 + 0x7121c),param_1);
          if (param_5 != 0) {
            uVar10 = getHades(param_1);
            XNuclear::CHades::ExpUp(uVar10);
          }
          uVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          cUserHistoryLog::LevelUp((cUserHistoryLog *)(param_1 + 0x79700),uVar5,0);
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          if (0x3b < iVar3) {
            DimensionInoutUpdate(param_1,true,true);
          }
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          if (iVar3 == 0x55) {
            uVar10 = get_acc_id(param_1);
            cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar10);
            if (cVar2 == '\x01') goto LAB_08662f83;
            bVar1 = true;
          }
          else {
LAB_08662f83:
            bVar1 = false;
          }
          if (bVar1) {
            Packet_Monitor_Max_Level_BroadCast::Packet_Monitor_Max_Level_BroadCast(local_9c);
            __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
            strncpy(acStack_92,__src,0x1e);
            uVar5 = GetServerGroup(param_1);
            this = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                             (GlobalData::s_monitor_proxy_mgr,uVar5);
            CMonitorServerProxy::SendPacket(this,(char *)local_9c,0x28);
          }
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          iVar8 = G_GameWorld();
          iVar8 = GameWorld::getDungeonMinimumRequiredLevel(iVar8);
          if (iVar3 == iVar8) {
            iVar3 = G_CDataManager();
            cVar2 = ServerParameterScript::isDungeonOpen(iVar3 + 0x68);
            if (cVar2 == '\0') {
              pGVar11 = (GameWorld *)G_GameWorld();
              GameWorld::send_user_dungeon_inout_message(pGVar11,param_1,0x2aff,false);
            }
            else {
              pGVar11 = (GameWorld *)G_GameWorld();
              GameWorld::send_user_dungeon_inout_message(pGVar11,param_1,0x2aff,true);
            }
          }
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          makeGuildLevelUpMessage(param_1,iVar3);
          _onLevelUp(param_1);
        }
      }
      cMyTrace::cMyTrace(local_44,"bool CUser::_check_level_up(int, int&, int&, eExpAddReason, int)"
                         ,0x4046,5);
      cMyTrace::operator()
                (local_44,"CUser::_check_level_up, LEVEL:%d TOP:%d BOTTOM:%d",local_34,local_2c,
                 local_30);
    }
  }
  return 0;
}
```
