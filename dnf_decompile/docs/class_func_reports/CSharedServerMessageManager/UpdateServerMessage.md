# UpdateServerMessage

`_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i`

`CSharedServerMessageManager::UpdateServerMessage(CUser*, int, char*, char*, int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08600ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600ec0  _ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i
#           CSharedServerMessageManager::UpdateServerMessage(CUser*, int, char*, char*, int)
# range [0x08600ec0, 0x08601475]
08600ec0 +0x000:  push   %ebp
08600ec1 +0x001:  mov    %esp,%ebp
08600ec3 +0x003:  push   %esi
08600ec4 +0x004:  push   %ebx
08600ec5 +0x005:  sub    $0xb0,%esp
08600ecb +0x00b:  mov    0x10(%ebp),%eax
08600ece +0x00e:  mov    %eax,0x4(%esp)
08600ed2 +0x012:  mov    0x8(%ebp),%eax
08600ed5 +0x015:  mov    %eax,(%esp)
08600ed8 +0x018:  call   08600c34 <_ZN27CSharedServerMessageManager13getCurMessageEi>  ; CSharedServerMessageManager::getCurMessage(int)
08600edd +0x01d:  mov    %eax,-0x1c(%ebp)
08600ee0 +0x020:  cmpl   $0x0,-0x1c(%ebp)
08600ee4 +0x024:  jne    08601012 <+0x152>
08600eea +0x02a:  mov    0x8(%ebp),%eax
08600eed +0x02d:  mov    0x10(%ebp),%edx
08600ef0 +0x030:  mov    %edx,0x4(%esp)
08600ef4 +0x034:  mov    %eax,(%esp)
08600ef7 +0x037:  call   08601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int)
08600efc +0x03c:  test   %al,%al
08600efe +0x03e:  je     08600fd7 <+0x117>
08600f04 +0x044:  mov    0x8(%ebp),%eax
08600f07 +0x047:  mov    0x10(%ebp),%edx
08600f0a +0x04a:  mov    %edx,0x4(%esp)
08600f0e +0x04e:  mov    %eax,(%esp)
08600f11 +0x051:  call   08601794 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex(int)
08600f16 +0x056:  mov    %eax,-0x10(%ebp)
08600f19 +0x059:  cmpl   $0xffffffff,-0x10(%ebp)
08600f1d +0x05d:  je     08601456 <+0x596>
08600f23 +0x063:  mov    -0x10(%ebp),%eax
08600f26 +0x066:  mov    %al,-0x8c(%ebp)
08600f2c +0x06c:  mov    0x10(%ebp),%eax
08600f2f +0x06f:  mov    %al,-0x8b(%ebp)
08600f35 +0x075:  mov    0x18(%ebp),%eax
08600f38 +0x078:  mov    %eax,(%esp)
08600f3b +0x07b:  call   0807e3b0 <_init+0xca8>
08600f40 +0x080:  mov    %eax,-0x50(%ebp)
08600f43 +0x083:  mov    -0x50(%ebp),%eax
08600f46 +0x086:  add    $0x1,%eax
08600f49 +0x089:  mov    %eax,0x8(%esp)
08600f4d +0x08d:  mov    0x18(%ebp),%eax
08600f50 +0x090:  mov    %eax,0x4(%esp)
08600f54 +0x094:  lea    -0x8c(%ebp),%eax
08600f5a +0x09a:  add    $0x40,%eax
08600f5d +0x09d:  mov    %eax,(%esp)
08600f60 +0x0a0:  call   0807d8d0 <_init+0x1c8>
08600f65 +0x0a5:  mov    0x14(%ebp),%eax
08600f68 +0x0a8:  mov    %eax,(%esp)
08600f6b +0x0ab:  call   0807e3b0 <_init+0xca8>
08600f70 +0x0b0:  mov    %eax,-0x88(%ebp)
08600f76 +0x0b6:  mov    -0x88(%ebp),%eax
08600f7c +0x0bc:  add    $0x1,%eax
08600f7f +0x0bf:  mov    %eax,0x8(%esp)
08600f83 +0x0c3:  mov    0x14(%ebp),%eax
08600f86 +0x0c6:  mov    %eax,0x4(%esp)
08600f8a +0x0ca:  lea    -0x8c(%ebp),%eax
08600f90 +0x0d0:  add    $0x8,%eax
08600f93 +0x0d3:  mov    %eax,(%esp)
08600f96 +0x0d6:  call   0807d8d0 <_init+0x1c8>
08600f9b +0x0db:  mov    0x1c(%ebp),%eax
08600f9e +0x0de:  mov    %eax,-0x38(%ebp)
08600fa1 +0x0e1:  mov    0x8(%ebp),%eax
08600fa4 +0x0e4:  lea    0xc(%eax),%edx
08600fa7 +0x0e7:  lea    -0x8c(%ebp),%eax
08600fad +0x0ed:  mov    %eax,0x4(%esp)
08600fb1 +0x0f1:  mov    %edx,(%esp)
08600fb4 +0x0f4:  call   08601ad4 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x120>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x120
08600fb9 +0x0f9:  mov    0x8(%ebp),%eax
08600fbc +0x0fc:  movzbl 0x8(%eax),%eax
08600fc0 +0x100:  lea    0x1(%eax),%edx
08600fc3 +0x103:  mov    0x8(%ebp),%eax
08600fc6 +0x106:  mov    %dl,0x8(%eax)
08600fc9 +0x109:  lea    -0x8c(%ebp),%eax
08600fcf +0x10f:  mov    %eax,-0x1c(%ebp)
08600fd2 +0x112:  jmp    08601081 <+0x1c1>
08600fd7 +0x117:  movl   $0x0,0xc(%esp)
08600fdf +0x11f:  movl   $0x126,0x8(%esp)
08600fe7 +0x127:  movl   $&_ZZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_iE19__PRETTY_FUNCTION__,0x4(%esp)
08600fef +0x12f:  lea    -0x2c(%ebp),%eax
08600ff2 +0x132:  mov    %eax,(%esp)
08600ff5 +0x135:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08600ffa +0x13a:  movl   $"SERVER_MESSAGE : NOT EXIST INDEX and NOT EXIST DATA",0x4(%esp)
08601002 +0x142:  lea    -0x2c(%ebp),%eax
08601005 +0x145:  mov    %eax,(%esp)
08601008 +0x148:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0860100d +0x14d:  jmp    0860146c <+0x5ac>
08601012 +0x152:  mov    0x14(%ebp),%eax
08601015 +0x155:  mov    %eax,(%esp)
08601018 +0x158:  call   0807e3b0 <_init+0xca8>
0860101d +0x15d:  mov    -0x1c(%ebp),%edx
08601020 +0x160:  mov    %eax,0x4(%edx)
08601023 +0x163:  mov    -0x1c(%ebp),%eax
08601026 +0x166:  mov    0x4(%eax),%eax
08601029 +0x169:  add    $0x1,%eax
0860102c +0x16c:  mov    -0x1c(%ebp),%edx
0860102f +0x16f:  add    $0x8,%edx
08601032 +0x172:  mov    %eax,0x8(%esp)
08601036 +0x176:  mov    0x14(%ebp),%eax
08601039 +0x179:  mov    %eax,0x4(%esp)
0860103d +0x17d:  mov    %edx,(%esp)
08601040 +0x180:  call   0807d8d0 <_init+0x1c8>
08601045 +0x185:  mov    0x18(%ebp),%eax
08601048 +0x188:  mov    %eax,(%esp)
0860104b +0x18b:  call   0807e3b0 <_init+0xca8>
08601050 +0x190:  mov    -0x1c(%ebp),%edx
08601053 +0x193:  mov    %eax,0x3c(%edx)
08601056 +0x196:  mov    -0x1c(%ebp),%eax
08601059 +0x199:  mov    0x3c(%eax),%eax
0860105c +0x19c:  add    $0x1,%eax
0860105f +0x19f:  mov    -0x1c(%ebp),%edx
08601062 +0x1a2:  add    $0x40,%edx
08601065 +0x1a5:  mov    %eax,0x8(%esp)
08601069 +0x1a9:  mov    0x18(%ebp),%eax
0860106c +0x1ac:  mov    %eax,0x4(%esp)
08601070 +0x1b0:  mov    %edx,(%esp)
08601073 +0x1b3:  call   0807d8d0 <_init+0x1c8>
08601078 +0x1b8:  mov    -0x1c(%ebp),%eax
0860107b +0x1bb:  mov    0x1c(%ebp),%edx
0860107e +0x1be:  mov    %edx,0x54(%eax)
08601081 +0x1c1:  mov    0x8(%ebp),%eax
08601084 +0x1c4:  mov    %eax,(%esp)
08601087 +0x1c7:  call   084ed182 <_GLOBAL__I__Z7getUserj+0x4134>  ; global constructors keyed to getUser(unsigned int)+0x4134
0860108c +0x1cc:  xor    $0x1,%eax
0860108f +0x1cf:  test   %al,%al
08601091 +0x1d1:  je     0860109e <+0x1de>
08601093 +0x1d3:  mov    0x8(%ebp),%eax
08601096 +0x1d6:  mov    %eax,(%esp)
08601099 +0x1d9:  call   08601a0e <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x5a>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x5a
0860109e +0x1de:  mov    -0x1c(%ebp),%eax
086010a1 +0x1e1:  movzbl 0x1(%eax),%eax
086010a5 +0x1e5:  movzbl %al,%edx
086010a8 +0x1e8:  mov    0x8(%ebp),%eax
086010ab +0x1eb:  mov    %edx,0x4(%esp)
086010af +0x1ef:  mov    %eax,(%esp)
086010b2 +0x1f2:  call   08601640 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID(int)
086010b7 +0x1f7:  mov    %eax,-0x18(%ebp)
086010ba +0x1fa:  movl   $0x0,-0x14(%ebp)
086010c1 +0x201:  mov    -0x18(%ebp),%eax
086010c4 +0x204:  cmp    $0x2,%eax
086010c7 +0x207:  je     0860121d <+0x35d>
086010cd +0x20d:  cmp    $0x3,%eax
086010d0 +0x210:  je     086010df <+0x21f>
086010d2 +0x212:  test   %eax,%eax
086010d4 +0x214:  je     0860117e <+0x2be>
086010da +0x21a:  jmp    086012bd <+0x3fd>
086010df +0x21f:  mov    0xc(%ebp),%eax
086010e2 +0x222:  mov    %eax,(%esp)
086010e5 +0x225:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086010ea +0x22a:  movl   $0x28d3aa,0x4(%esp)
086010f2 +0x232:  mov    %eax,(%esp)
086010f5 +0x235:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
086010fa +0x23a:  mov    %eax,-0x14(%ebp)
086010fd +0x23d:  cmpl   $0xffffffff,-0x14(%ebp)
08601101 +0x241:  je     08601459 <+0x599>
08601107 +0x247:  mov    0xc(%ebp),%eax
0860110a +0x24a:  mov    %eax,(%esp)
0860110d +0x24d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08601112 +0x252:  movl   $0x1,0x14(%esp)
0860111a +0x25a:  movl   $0x3,0x10(%esp)
08601122 +0x262:  movl   $0x1,0xc(%esp)
0860112a +0x26a:  mov    -0x14(%ebp),%edx
0860112d +0x26d:  mov    %edx,0x8(%esp)
08601131 +0x271:  movl   $0x1,0x4(%esp)
08601139 +0x279:  mov    %eax,(%esp)
0860113c +0x27c:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08601141 +0x281:  xor    $0x1,%eax
08601144 +0x284:  test   %al,%al
08601146 +0x286:  jne    0860145c <+0x59c>
0860114c +0x28c:  mov    -0x14(%ebp),%eax
0860114f +0x28f:  mov    %eax,0xc(%esp)
08601153 +0x293:  movl   $0x0,0x8(%esp)
0860115b +0x29b:  movl   $0x1,0x4(%esp)
08601163 +0x2a3:  mov    0xc(%ebp),%eax
08601166 +0x2a6:  mov    %eax,(%esp)
08601169 +0x2a9:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0860116e +0x2ae:  xor    $0x1,%eax
08601171 +0x2b1:  test   %al,%al
08601173 +0x2b3:  je     086012b9 <+0x3f9>
08601179 +0x2b9:  jmp    0860146c <+0x5ac>
0860117e +0x2be:  mov    0xc(%ebp),%eax
08601181 +0x2c1:  mov    %eax,(%esp)
08601184 +0x2c4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08601189 +0x2c9:  movl   $0x28d3aa,0x4(%esp)
08601191 +0x2d1:  mov    %eax,(%esp)
08601194 +0x2d4:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08601199 +0x2d9:  mov    %eax,-0x14(%ebp)
0860119c +0x2dc:  cmpl   $0xffffffff,-0x14(%ebp)
086011a0 +0x2e0:  je     0860145f <+0x59f>
086011a6 +0x2e6:  mov    0xc(%ebp),%eax
086011a9 +0x2e9:  mov    %eax,(%esp)
086011ac +0x2ec:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086011b1 +0x2f1:  movl   $0x1,0x14(%esp)
086011b9 +0x2f9:  movl   $0x1d,0x10(%esp)
086011c1 +0x301:  movl   $0x1,0xc(%esp)
086011c9 +0x309:  mov    -0x14(%ebp),%edx
086011cc +0x30c:  mov    %edx,0x8(%esp)
086011d0 +0x310:  movl   $0x1,0x4(%esp)
086011d8 +0x318:  mov    %eax,(%esp)
086011db +0x31b:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
086011e0 +0x320:  xor    $0x1,%eax
086011e3 +0x323:  test   %al,%al
086011e5 +0x325:  jne    08601462 <+0x5a2>
086011eb +0x32b:  mov    -0x14(%ebp),%eax
086011ee +0x32e:  mov    %eax,0xc(%esp)
086011f2 +0x332:  movl   $0x0,0x8(%esp)
086011fa +0x33a:  movl   $0x1,0x4(%esp)
08601202 +0x342:  mov    0xc(%ebp),%eax
08601205 +0x345:  mov    %eax,(%esp)
08601208 +0x348:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0860120d +0x34d:  xor    $0x1,%eax
08601210 +0x350:  test   %al,%al
08601212 +0x352:  je     086012bc <+0x3fc>
08601218 +0x358:  jmp    0860146c <+0x5ac>
0860121d +0x35d:  mov    0xc(%ebp),%eax
08601220 +0x360:  mov    %eax,(%esp)
08601223 +0x363:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08601228 +0x368:  movl   $0x1d9d,0x4(%esp)
08601230 +0x370:  mov    %eax,(%esp)
08601233 +0x373:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08601238 +0x378:  mov    %eax,-0x14(%ebp)
0860123b +0x37b:  cmpl   $0xffffffff,-0x14(%ebp)
0860123f +0x37f:  je     08601465 <+0x5a5>
08601245 +0x385:  mov    0xc(%ebp),%eax
08601248 +0x388:  mov    %eax,(%esp)
0860124b +0x38b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08601250 +0x390:  movl   $0x1,0x14(%esp)
08601258 +0x398:  movl   $0x3,0x10(%esp)
08601260 +0x3a0:  movl   $0x1,0xc(%esp)
08601268 +0x3a8:  mov    -0x14(%ebp),%edx
0860126b +0x3ab:  mov    %edx,0x8(%esp)
0860126f +0x3af:  movl   $0x1,0x4(%esp)
08601277 +0x3b7:  mov    %eax,(%esp)
0860127a +0x3ba:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0860127f +0x3bf:  xor    $0x1,%eax
08601282 +0x3c2:  test   %al,%al
08601284 +0x3c4:  jne    08601468 <+0x5a8>
0860128a +0x3ca:  mov    -0x14(%ebp),%eax
0860128d +0x3cd:  mov    %eax,0xc(%esp)
08601291 +0x3d1:  movl   $0x0,0x8(%esp)
08601299 +0x3d9:  movl   $0x1,0x4(%esp)
086012a1 +0x3e1:  mov    0xc(%ebp),%eax
086012a4 +0x3e4:  mov    %eax,(%esp)
086012a7 +0x3e7:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
086012ac +0x3ec:  xor    $0x1,%eax
086012af +0x3ef:  test   %al,%al
086012b1 +0x3f1:  jne    0860146b <+0x5ab>
086012b7 +0x3f7:  jmp    086012bd <+0x3fd>
086012b9 +0x3f9:  nop
086012ba +0x3fa:  jmp    086012bd <+0x3fd>
086012bc +0x3fc:  nop
086012bd +0x3fd:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086012c2 +0x402:  movl   $0x16c,0x8(%esp)
086012ca +0x40a:  movl   $"SharedServerMessageManager.cpp",0x4(%esp)
086012d2 +0x412:  mov    %eax,(%esp)
086012d5 +0x415:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086012da +0x41a:  movl   $0x1,0x8(%esp)
086012e2 +0x422:  mov    %eax,0x4(%esp)
086012e6 +0x426:  lea    -0x34(%ebp),%eax
086012e9 +0x429:  mov    %eax,(%esp)
086012ec +0x42c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086012f1 +0x431:  lea    -0x34(%ebp),%eax
086012f4 +0x434:  mov    %eax,(%esp)
086012f7 +0x437:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086012fc +0x43c:  movl   $0x16c,0x4(%esp)
08601304 +0x444:  mov    %eax,(%esp)
08601307 +0x447:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860130c +0x44c:  mov    0xc(%ebp),%eax
0860130f +0x44f:  mov    %eax,(%esp)
08601312 +0x452:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08601317 +0x457:  mov    %eax,%ebx
08601319 +0x459:  lea    -0x34(%ebp),%eax
0860131c +0x45c:  mov    %eax,(%esp)
0860131f +0x45f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08601324 +0x464:  mov    %ebx,0x4(%esp)
08601328 +0x468:  mov    %eax,(%esp)
0860132b +0x46b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08601330 +0x470:  lea    -0x34(%ebp),%eax
08601333 +0x473:  mov    %eax,(%esp)
08601336 +0x476:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0860133b +0x47b:  mov    %eax,(%esp)
0860133e +0x47e:  call   084531b2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5dc8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5dc8
08601343 +0x483:  mov    %eax,-0xc(%ebp)
08601346 +0x486:  mov    -0x1c(%ebp),%eax
08601349 +0x489:  movzbl 0x1(%eax),%edx
0860134d +0x48d:  mov    -0xc(%ebp),%eax
08601350 +0x490:  mov    %dl,0x9(%eax)
08601353 +0x493:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08601358 +0x498:  mov    0x378(%eax),%edx
0860135e +0x49e:  mov    -0xc(%ebp),%eax
08601361 +0x4a1:  mov    %edx,(%eax)
08601363 +0x4a3:  mov    -0x1c(%ebp),%eax
08601366 +0x4a6:  movzbl (%eax),%eax
08601369 +0x4a9:  test   %al,%al
0860136b +0x4ab:  jne    08601382 <+0x4c2>
0860136d +0x4ad:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08601372 +0x4b2:  mov    %eax,(%esp)
08601375 +0x4b5:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0860137a +0x4ba:  mov    -0xc(%ebp),%edx
0860137d +0x4bd:  mov    %eax,0x4(%edx)
08601380 +0x4c0:  jmp    08601396 <+0x4d6>
08601382 +0x4c2:  mov    -0x1c(%ebp),%eax
08601385 +0x4c5:  movzbl (%eax),%eax
08601388 +0x4c8:  cmp    $0x1,%al
0860138a +0x4ca:  jne    08601396 <+0x4d6>
0860138c +0x4cc:  mov    -0xc(%ebp),%eax
0860138f +0x4cf:  movl   $0x0,0x4(%eax)
08601396 +0x4d6:  mov    -0x1c(%ebp),%eax
08601399 +0x4d9:  movzbl (%eax),%edx
0860139c +0x4dc:  mov    -0xc(%ebp),%eax
0860139f +0x4df:  mov    %dl,0x8(%eax)
086013a2 +0x4e2:  mov    -0x1c(%ebp),%eax
086013a5 +0x4e5:  mov    0x3c(%eax),%edx
086013a8 +0x4e8:  mov    -0xc(%ebp),%eax
086013ab +0x4eb:  mov    %edx,0x44(%eax)
086013ae +0x4ee:  mov    -0x1c(%ebp),%eax
086013b1 +0x4f1:  mov    0x4(%eax),%edx
086013b4 +0x4f4:  mov    -0xc(%ebp),%eax
086013b7 +0x4f7:  mov    %edx,0xc(%eax)
086013ba +0x4fa:  mov    -0xc(%ebp),%eax
086013bd +0x4fd:  mov    0xc(%eax),%eax
086013c0 +0x500:  lea    0x1(%eax),%ecx
086013c3 +0x503:  mov    -0x1c(%ebp),%eax
086013c6 +0x506:  lea    0x8(%eax),%edx
086013c9 +0x509:  mov    -0xc(%ebp),%eax
086013cc +0x50c:  add    $0x10,%eax
086013cf +0x50f:  mov    %ecx,0x8(%esp)
086013d3 +0x513:  mov    %edx,0x4(%esp)
086013d7 +0x517:  mov    %eax,(%esp)
086013da +0x51a:  call   0807d8d0 <_init+0x1c8>
086013df +0x51f:  mov    -0xc(%ebp),%eax
086013e2 +0x522:  mov    0x44(%eax),%eax
086013e5 +0x525:  lea    0x1(%eax),%ecx
086013e8 +0x528:  mov    -0x1c(%ebp),%eax
086013eb +0x52b:  lea    0x40(%eax),%edx
086013ee +0x52e:  mov    -0xc(%ebp),%eax
086013f1 +0x531:  add    $0x48,%eax
086013f4 +0x534:  mov    %ecx,0x8(%esp)
086013f8 +0x538:  mov    %edx,0x4(%esp)
086013fc +0x53c:  mov    %eax,(%esp)
086013ff +0x53f:  call   0807d8d0 <_init+0x1c8>
08601404 +0x544:  mov    -0x1c(%ebp),%eax
08601407 +0x547:  mov    0x54(%eax),%edx
0860140a +0x54a:  mov    -0xc(%ebp),%eax
0860140d +0x54d:  mov    %edx,0x5c(%eax)
08601410 +0x550:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08601415 +0x555:  lea    -0x34(%ebp),%edx
08601418 +0x558:  mov    %edx,0x8(%esp)
0860141c +0x55c:  movl   $0x2,0x4(%esp)
08601424 +0x564:  mov    %eax,(%esp)
08601427 +0x567:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860142c +0x56c:  jmp    08601449 <+0x589>
0860142e +0x56e:  mov    %edx,%ebx
08601430 +0x570:  mov    %eax,%esi
08601432 +0x572:  lea    -0x34(%ebp),%eax
08601435 +0x575:  mov    %eax,(%esp)
08601438 +0x578:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860143d +0x57d:  mov    %esi,%eax
0860143f +0x57f:  mov    %ebx,%edx
08601441 +0x581:  mov    %eax,(%esp)
08601444 +0x584:  call   08ae3750 <_Unwind_Resume>
08601449 +0x589:  lea    -0x34(%ebp),%eax
0860144c +0x58c:  mov    %eax,(%esp)
0860144f +0x58f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08601454 +0x594:  jmp    0860146c <+0x5ac>
08601456 +0x596:  nop
08601457 +0x597:  jmp    0860146c <+0x5ac>
08601459 +0x599:  nop
0860145a +0x59a:  jmp    0860146c <+0x5ac>
0860145c +0x59c:  nop
0860145d +0x59d:  jmp    0860146c <+0x5ac>
0860145f +0x59f:  nop
08601460 +0x5a0:  jmp    0860146c <+0x5ac>
08601462 +0x5a2:  nop
08601463 +0x5a3:  jmp    0860146c <+0x5ac>
08601465 +0x5a5:  nop
08601466 +0x5a6:  jmp    0860146c <+0x5ac>
08601468 +0x5a8:  nop
08601469 +0x5a9:  jmp    0860146c <+0x5ac>
0860146b +0x5ab:  nop
0860146c +0x5ac:  add    $0xb0,%esp
08601472 +0x5b2:  pop    %ebx
08601473 +0x5b3:  pop    %esi
08601474 +0x5b4:  pop    %ebp
08601475 +0x5b5:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::UpdateServerMessage @ 0x8600ec0

/* CSharedServerMessageManager::UpdateServerMessage(CUser*, int, char*, char*, int) */

void __thiscall
CSharedServerMessageManager::UpdateServerMessage
          (CSharedServerMessageManager *this,CUser *param_1,int param_2,char *param_3,char *param_4,
          int param_5)

{
  char cVar1;
  size_t sVar2;
  CInventory *pCVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  stSERVER_MESSAGE local_90;
  undefined1 local_8f;
  size_t local_8c;
  char local_88 [52];
  size_t local_54;
  char local_50 [20];
  int local_3c;
  CStreamGuard local_38 [8];
  cMyTrace local_30 [16];
  SIG_UPDATE_SERVER_MESSAGE *local_20;
  int local_1c;
  int local_18;
  int local_14;
  SIG_UPDATE_SERVER_MESSAGE *local_10;
  
  local_20 = (SIG_UPDATE_SERVER_MESSAGE *)getCurMessage(this,param_2);
  if (local_20 == (SIG_UPDATE_SERVER_MESSAGE *)0x0) {
    cVar1 = CSharedServerMessageAdapter::IsOnIndex((CSharedServerMessageAdapter *)this,param_2);
    if (cVar1 == '\0') {
      cMyTrace::cMyTrace(local_30,
                         "void CSharedServerMessageManager::UpdateServerMessage(CUser*, int, char*, char*, int)"
                         ,0x126,0);
      cMyTrace::operator()(local_30,"SERVER_MESSAGE : NOT EXIST INDEX and NOT EXIST DATA");
      return;
    }
    local_14 = CSharedServerMessageAdapter::GetShareKindWithIndex
                         ((CSharedServerMessageAdapter *)this,param_2);
    if (local_14 == -1) {
      return;
    }
    local_90 = SUB41(local_14,0);
    local_8f = (undefined1)param_2;
    local_54 = strlen(param_4);
    strncpy(local_50,param_4,local_54 + 1);
    local_8c = strlen(param_3);
    strncpy(local_88,param_3,local_8c + 1);
    local_3c = param_5;
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
              ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc),&local_90);
    this[8] = (CSharedServerMessageManager)((char)this[8] + '\x01');
    local_20 = (SIG_UPDATE_SERVER_MESSAGE *)&local_90;
  }
  else {
    sVar2 = strlen(param_3);
    *(size_t *)(local_20 + 4) = sVar2;
    strncpy((char *)(local_20 + 8),param_3,*(int *)(local_20 + 4) + 1);
    sVar2 = strlen(param_4);
    *(size_t *)(local_20 + 0x3c) = sVar2;
    strncpy((char *)(local_20 + 0x40),param_4,*(int *)(local_20 + 0x3c) + 1);
    *(int *)(local_20 + 0x54) = param_5;
  }
  cVar1 = IsSetServerMessage(this);
  if (cVar1 != '\x01') {
    setLoadingComplete(this);
  }
  local_1c = CSharedServerMessageAdapter::GetMappedEventID
                       ((CSharedServerMessageAdapter *)this,(uint)(byte)local_20[1]);
  local_18 = 0;
  if (local_1c == 2) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_18 = CInventory::check_item_exist(pCVar3,0x1d9d);
    if (local_18 == -1) {
      return;
    }
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar3,1,local_18,1,3,1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = CUser::SendUpdateItem(param_1,1,0,local_18);
  }
  else if (local_1c == 3) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_18 = CInventory::check_item_exist(pCVar3,0x28d3aa);
    if (local_18 == -1) {
      return;
    }
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar3,1,local_18,1,3,1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = CUser::SendUpdateItem(param_1,1,0,local_18);
  }
  else {
    if (local_1c != 0) goto LAB_086012bd;
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_18 = CInventory::check_item_exist(pCVar3,0x28d3aa);
    if (local_18 == -1) {
      return;
    }
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar3,1,local_18,1,0x1d,1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = CUser::SendUpdateItem(param_1,1,0,local_18);
  }
  if (cVar1 != '\x01') {
    return;
  }
LAB_086012bd:
  pSVar4 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"SharedServerMessageManager.cpp",0x16c);
  CStreamGuard::CStreamGuard(local_38,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08601307 to 0860142b has its CatchHandler @ 0860142e */
  CStreamGuard::operator<<(pCVar5,0x16c);
  iVar6 = CUser::GetUID(param_1);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar5,iVar6);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_SERVER_MESSAGE>(pCVar5);
  local_10[9] = local_20[1];
  iVar6 = G_CEnvironment();
  *(undefined4 *)local_10 = *(undefined4 *)(iVar6 + 0x378);
  if (*local_20 == (SIG_UPDATE_SERVER_MESSAGE)0x0) {
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this_00);
    *(undefined4 *)(local_10 + 4) = uVar7;
  }
  else if (*local_20 == (SIG_UPDATE_SERVER_MESSAGE)0x1) {
    *(undefined4 *)(local_10 + 4) = 0;
  }
  local_10[8] = *local_20;
  *(undefined4 *)(local_10 + 0x44) = *(undefined4 *)(local_20 + 0x3c);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(local_20 + 4);
  strncpy((char *)(local_10 + 0x10),(char *)(local_20 + 8),*(int *)(local_10 + 0xc) + 1);
  strncpy((char *)(local_10 + 0x48),(char *)(local_20 + 0x40),*(int *)(local_10 + 0x44) + 1);
  *(undefined4 *)(local_10 + 0x5c) = *(undefined4 *)(local_20 + 0x54);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_38);
  CStreamGuard::~CStreamGuard(local_38);
  return;
}
```
