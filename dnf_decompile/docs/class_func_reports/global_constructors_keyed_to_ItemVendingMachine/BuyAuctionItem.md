# BuyAuctionItem

`_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi`

`global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ItemVendingMachine` | `0x08179f82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08179f82  _GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi
#           global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)
# range [0x08179f82, 0x0817b45f]
08179f82 +0x0000:  push   %ebp
08179f83 +0x0001:  mov    %esp,%ebp
08179f85 +0x0003:  sub    $0x18,%esp
08179f88 +0x0006:  movl   $0xffff,0x4(%esp)
08179f90 +0x000e:  movl   $0x1,(%esp)
08179f97 +0x0015:  call   08179f42 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08179f9c +0x001a:  leave
08179f9d +0x001b:  ret
08179f9e +0x001c:  push   %ebp
08179f9f +0x001d:  mov    %esp,%ebp
08179fa1 +0x001f:  mov    0xc(%ebp),%eax
08179fa4 +0x0022:  pop    %ebp
08179fa5 +0x0023:  ret
08179fa6 +0x0024:  push   %ebp
08179fa7 +0x0025:  mov    %esp,%ebp
08179fa9 +0x0027:  mov    0x8(%ebp),%eax
08179fac +0x002a:  mov    0x4d40(%eax),%eax
08179fb2 +0x0030:  pop    %ebp
08179fb3 +0x0031:  ret
08179fb4 +0x0032:  push   %ebp
08179fb5 +0x0033:  mov    %esp,%ebp
08179fb7 +0x0035:  sub    $0x18,%esp
08179fba +0x0038:  mov    0x8(%ebp),%eax
08179fbd +0x003b:  mov    (%eax),%eax
08179fbf +0x003d:  add    $0xc,%eax
08179fc2 +0x0040:  mov    (%eax),%edx
08179fc4 +0x0042:  mov    0x8(%ebp),%eax
08179fc7 +0x0045:  mov    %eax,(%esp)
08179fca +0x0048:  call   *%edx
08179fcc +0x004a:  cmp    $0xe,%eax
08179fcf +0x004d:  je     08179fe8 <+0x66>
08179fd1 +0x004f:  mov    0x8(%ebp),%eax
08179fd4 +0x0052:  mov    (%eax),%eax
08179fd6 +0x0054:  add    $0xc,%eax
08179fd9 +0x0057:  mov    (%eax),%edx
08179fdb +0x0059:  mov    0x8(%ebp),%eax
08179fde +0x005c:  mov    %eax,(%esp)
08179fe1 +0x005f:  call   *%edx
08179fe3 +0x0061:  cmp    $0xf,%eax
08179fe6 +0x0064:  jne    08179fef <+0x6d>
08179fe8 +0x0066:  mov    $0x1,%eax
08179fed +0x006b:  jmp    08179ff4 <+0x72>
08179fef +0x006d:  mov    $0x0,%eax
08179ff4 +0x0072:  leave
08179ff5 +0x0073:  ret
08179ff6 +0x0074:  push   %ebp
08179ff7 +0x0075:  mov    %esp,%ebp
08179ff9 +0x0077:  mov    0x8(%ebp),%eax
08179ffc +0x007a:  mov    (%eax),%eax
08179ffe +0x007c:  pop    %ebp
08179fff +0x007d:  ret
0817a000 +0x007e:  push   %ebp
0817a001 +0x007f:  mov    %esp,%ebp
0817a003 +0x0081:  mov    0x8(%ebp),%eax
0817a006 +0x0084:  mov    0x4(%eax),%eax
0817a009 +0x0087:  pop    %ebp
0817a00a +0x0088:  ret
0817a00b +0x0089:  nop
0817a00c +0x008a:  push   %ebp
0817a00d +0x008b:  mov    %esp,%ebp
0817a00f +0x008d:  mov    0x8(%ebp),%eax
0817a012 +0x0090:  mov    0x8(%eax),%eax
0817a015 +0x0093:  pop    %ebp
0817a016 +0x0094:  ret
0817a017 +0x0095:  nop
0817a018 +0x0096:  push   %ebp
0817a019 +0x0097:  mov    %esp,%ebp
0817a01b +0x0099:  mov    0x8(%ebp),%eax
0817a01e +0x009c:  mov    0xc(%eax),%eax
0817a021 +0x009f:  pop    %ebp
0817a022 +0x00a0:  ret
0817a023 +0x00a1:  nop
0817a024 +0x00a2:  push   %ebp
0817a025 +0x00a3:  mov    %esp,%ebp
0817a027 +0x00a5:  mov    0x8(%ebp),%eax
0817a02a +0x00a8:  mov    0x10(%eax),%eax
0817a02d +0x00ab:  pop    %ebp
0817a02e +0x00ac:  ret
0817a02f +0x00ad:  nop
0817a030 +0x00ae:  push   %ebp
0817a031 +0x00af:  mov    %esp,%ebp
0817a033 +0x00b1:  mov    0x8(%ebp),%eax
0817a036 +0x00b4:  mov    0x14(%eax),%eax
0817a039 +0x00b7:  pop    %ebp
0817a03a +0x00b8:  ret
0817a03b +0x00b9:  nop
0817a03c +0x00ba:  push   %ebp
0817a03d +0x00bb:  mov    %esp,%ebp
0817a03f +0x00bd:  mov    0x8(%ebp),%eax
0817a042 +0x00c0:  mov    0x18(%eax),%eax
0817a045 +0x00c3:  pop    %ebp
0817a046 +0x00c4:  ret
0817a047 +0x00c5:  nop
0817a048 +0x00c6:  push   %ebp
0817a049 +0x00c7:  mov    %esp,%ebp
0817a04b +0x00c9:  mov    0x8(%ebp),%eax
0817a04e +0x00cc:  mov    0x1c(%eax),%eax
0817a051 +0x00cf:  pop    %ebp
0817a052 +0x00d0:  ret
0817a053 +0x00d1:  nop
0817a054 +0x00d2:  push   %ebp
0817a055 +0x00d3:  mov    %esp,%ebp
0817a057 +0x00d5:  mov    0x8(%ebp),%eax
0817a05a +0x00d8:  mov    0x20(%eax),%eax
0817a05d +0x00db:  pop    %ebp
0817a05e +0x00dc:  ret
0817a05f +0x00dd:  nop
0817a060 +0x00de:  push   %ebp
0817a061 +0x00df:  mov    %esp,%ebp
0817a063 +0x00e1:  mov    0x8(%ebp),%eax
0817a066 +0x00e4:  mov    0x24(%eax),%eax
0817a069 +0x00e7:  pop    %ebp
0817a06a +0x00e8:  ret
0817a06b +0x00e9:  nop
0817a06c +0x00ea:  push   %ebp
0817a06d +0x00eb:  mov    %esp,%ebp
0817a06f +0x00ed:  mov    0x8(%ebp),%eax
0817a072 +0x00f0:  mov    0x38(%eax),%eax
0817a075 +0x00f3:  pop    %ebp
0817a076 +0x00f4:  ret
0817a077 +0x00f5:  nop
0817a078 +0x00f6:  push   %ebp
0817a079 +0x00f7:  mov    %esp,%ebp
0817a07b +0x00f9:  mov    0x8(%ebp),%eax
0817a07e +0x00fc:  movzbl 0x34(%eax),%eax
0817a082 +0x0100:  pop    %ebp
0817a083 +0x0101:  ret
0817a084 +0x0102:  push   %ebp
0817a085 +0x0103:  mov    %esp,%ebp
0817a087 +0x0105:  mov    0x8(%ebp),%eax
0817a08a +0x0108:  movzbl 0x35(%eax),%eax
0817a08e +0x010c:  pop    %ebp
0817a08f +0x010d:  ret
0817a090 +0x010e:  push   %ebp
0817a091 +0x010f:  mov    %esp,%ebp
0817a093 +0x0111:  mov    0x8(%ebp),%eax
0817a096 +0x0114:  mov    0x4(%eax),%eax
0817a099 +0x0117:  pop    %ebp
0817a09a +0x0118:  ret
0817a09b +0x0119:  nop
0817a09c +0x011a:  push   %ebp
0817a09d +0x011b:  mov    %esp,%ebp
0817a09f +0x011d:  mov    0x8(%ebp),%eax
0817a0a2 +0x0120:  mov    0x20(%eax),%eax
0817a0a5 +0x0123:  pop    %ebp
0817a0a6 +0x0124:  ret
0817a0a7 +0x0125:  nop
0817a0a8 +0x0126:  push   %ebp
0817a0a9 +0x0127:  mov    %esp,%ebp
0817a0ab +0x0129:  sub    $0x28,%esp
0817a0ae +0x012c:  mov    0x8(%ebp),%edx
0817a0b1 +0x012f:  lea    -0x18(%ebp),%eax
0817a0b4 +0x0132:  lea    0xc(%ebp),%ecx
0817a0b7 +0x0135:  mov    %ecx,0x8(%esp)
0817a0bb +0x0139:  mov    %edx,0x4(%esp)
0817a0bf +0x013d:  mov    %eax,(%esp)
0817a0c2 +0x0140:  call   0817a372 <+0x3f0>
0817a0c7 +0x0145:  sub    $0x4,%esp
0817a0ca +0x0148:  mov    0x8(%ebp),%edx
0817a0cd +0x014b:  lea    -0x10(%ebp),%eax
0817a0d0 +0x014e:  mov    %edx,0x4(%esp)
0817a0d4 +0x0152:  mov    %eax,(%esp)
0817a0d7 +0x0155:  call   0817a39e <+0x41c>
0817a0dc +0x015a:  sub    $0x4,%esp
0817a0df +0x015d:  lea    -0x10(%ebp),%eax
0817a0e2 +0x0160:  mov    %eax,0x4(%esp)
0817a0e6 +0x0164:  lea    -0x18(%ebp),%eax
0817a0e9 +0x0167:  mov    %eax,(%esp)
0817a0ec +0x016a:  call   0817a3c4 <+0x442>
0817a0f1 +0x016f:  test   %al,%al
0817a0f3 +0x0171:  je     0817a0fc <+0x17a>
0817a0f5 +0x0173:  mov    $0x0,%eax
0817a0fa +0x0178:  jmp    0817a10a <+0x188>
0817a0fc +0x017a:  lea    -0x18(%ebp),%eax
0817a0ff +0x017d:  mov    %eax,(%esp)
0817a102 +0x0180:  call   0817a35e <+0x3dc>
0817a107 +0x0185:  mov    0x4(%eax),%eax
0817a10a +0x0188:  leave
0817a10b +0x0189:  ret
0817a10c +0x018a:  push   %ebp
0817a10d +0x018b:  mov    %esp,%ebp
0817a10f +0x018d:  sub    $0x38,%esp
0817a112 +0x0190:  mov    0xc(%ebp),%eax
0817a115 +0x0193:  mov    %eax,-0x14(%ebp)
0817a118 +0x0196:  mov    0x8(%ebp),%eax
0817a11b +0x0199:  lea    0x2c(%eax),%ecx
0817a11e +0x019c:  lea    -0x1c(%ebp),%eax
0817a121 +0x019f:  lea    -0x14(%ebp),%edx
0817a124 +0x01a2:  mov    %edx,0x8(%esp)
0817a128 +0x01a6:  mov    %ecx,0x4(%esp)
0817a12c +0x01aa:  mov    %eax,(%esp)
0817a12f +0x01ad:  call   0817a3d8 <+0x456>
0817a134 +0x01b2:  sub    $0x4,%esp
0817a137 +0x01b5:  mov    0x8(%ebp),%eax
0817a13a +0x01b8:  lea    0x2c(%eax),%edx
0817a13d +0x01bb:  lea    -0x10(%ebp),%eax
0817a140 +0x01be:  mov    %edx,0x4(%esp)
0817a144 +0x01c2:  mov    %eax,(%esp)
0817a147 +0x01c5:  call   0817a404 <+0x482>
0817a14c +0x01ca:  sub    $0x4,%esp
0817a14f +0x01cd:  lea    -0x10(%ebp),%eax
0817a152 +0x01d0:  mov    %eax,0x4(%esp)
0817a156 +0x01d4:  lea    -0x1c(%ebp),%eax
0817a159 +0x01d7:  mov    %eax,(%esp)
0817a15c +0x01da:  call   0817a42a <+0x4a8>
0817a161 +0x01df:  test   %al,%al
0817a163 +0x01e1:  je     0817a16c <+0x1ea>
0817a165 +0x01e3:  mov    $0x0,%eax
0817a16a +0x01e8:  jmp    0817a17a <+0x1f8>
0817a16c +0x01ea:  lea    -0x1c(%ebp),%eax
0817a16f +0x01ed:  mov    %eax,(%esp)
0817a172 +0x01f0:  call   0817a43e <+0x4bc>
0817a177 +0x01f5:  mov    0x4(%eax),%eax
0817a17a +0x01f8:  leave
0817a17b +0x01f9:  ret
0817a17c +0x01fa:  push   %ebp
0817a17d +0x01fb:  mov    %esp,%ebp
0817a17f +0x01fd:  mov    0x8(%ebp),%eax
0817a182 +0x0200:  mov    0x70(%eax),%eax
0817a185 +0x0203:  pop    %ebp
0817a186 +0x0204:  ret
0817a187 +0x0205:  nop
0817a188 +0x0206:  push   %ebp
0817a189 +0x0207:  mov    %esp,%ebp
0817a18b +0x0209:  sub    $0x18,%esp
0817a18e +0x020c:  mov    0x8(%ebp),%eax
0817a191 +0x020f:  mov    0x10(%eax),%eax
0817a194 +0x0212:  test   %eax,%eax
0817a196 +0x0214:  je     0817a1ad <+0x22b>
0817a198 +0x0216:  mov    0x8(%ebp),%eax
0817a19b +0x0219:  mov    %eax,(%esp)
0817a19e +0x021c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0817a1a3 +0x0221:  mov    %eax,(%esp)
0817a1a6 +0x0224:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0817a1ab +0x0229:  jmp    0817a1b2 <+0x230>
0817a1ad +0x022b:  mov    $0x0,%eax
0817a1b2 +0x0230:  leave
0817a1b3 +0x0231:  ret
0817a1b4 +0x0232:  push   %ebp
0817a1b5 +0x0233:  mov    %esp,%ebp
0817a1b7 +0x0235:  mov    0x8(%ebp),%eax
0817a1ba +0x0238:  mov    0xc(%ebp),%edx
0817a1bd +0x023b:  mov    %edx,0x8d01c(%eax)
0817a1c3 +0x0241:  pop    %ebp
0817a1c4 +0x0242:  ret
0817a1c5 +0x0243:  nop
0817a1c6 +0x0244:  push   %ebp
0817a1c7 +0x0245:  mov    %esp,%ebp
0817a1c9 +0x0247:  mov    0x8(%ebp),%eax
0817a1cc +0x024a:  mov    0x8d01c(%eax),%eax
0817a1d2 +0x0250:  cmp    0xc(%ebp),%eax
0817a1d5 +0x0253:  jb     0817a1f0 <+0x26e>
0817a1d7 +0x0255:  mov    0x8(%ebp),%eax
0817a1da +0x0258:  mov    0x8d01c(%eax),%eax
0817a1e0 +0x025e:  mov    %eax,%edx
0817a1e2 +0x0260:  sub    0xc(%ebp),%edx
0817a1e5 +0x0263:  mov    0x8(%ebp),%eax
0817a1e8 +0x0266:  mov    %edx,0x8d01c(%eax)
0817a1ee +0x026c:  jmp    0817a1fd <+0x27b>
0817a1f0 +0x026e:  mov    0x8(%ebp),%eax
0817a1f3 +0x0271:  movl   $0x0,0x8d01c(%eax)
0817a1fd +0x027b:  mov    0x8(%ebp),%eax
0817a200 +0x027e:  mov    0x8d01c(%eax),%eax
0817a206 +0x0284:  pop    %ebp
0817a207 +0x0285:  ret
0817a208 +0x0286:  push   %ebp
0817a209 +0x0287:  mov    %esp,%ebp
0817a20b +0x0289:  mov    0x8(%ebp),%eax
0817a20e +0x028c:  movl   $0x0,0x8d0e0(%eax)
0817a218 +0x0296:  pop    %ebp
0817a219 +0x0297:  ret
0817a21a +0x0298:  push   %ebp
0817a21b +0x0299:  mov    %esp,%ebp
0817a21d +0x029b:  mov    0x8(%ebp),%eax
0817a220 +0x029e:  mov    0x8d0e0(%eax),%eax
0817a226 +0x02a4:  mov    %eax,%edx
0817a228 +0x02a6:  add    0xc(%ebp),%edx
0817a22b +0x02a9:  mov    0x8(%ebp),%eax
0817a22e +0x02ac:  mov    %edx,0x8d0e0(%eax)
0817a234 +0x02b2:  pop    %ebp
0817a235 +0x02b3:  ret
0817a236 +0x02b4:  push   %ebp
0817a237 +0x02b5:  mov    %esp,%ebp
0817a239 +0x02b7:  mov    0x8(%ebp),%eax
0817a23c +0x02ba:  mov    0x8d0e0(%eax),%eax
0817a242 +0x02c0:  pop    %ebp
0817a243 +0x02c1:  ret
0817a244 +0x02c2:  push   %ebp
0817a245 +0x02c3:  mov    %esp,%ebp
0817a247 +0x02c5:  push   %esi
0817a248 +0x02c6:  push   %ebx
0817a249 +0x02c7:  sub    $0x10,%esp
0817a24c +0x02ca:  mov    0x8(%ebp),%eax
0817a24f +0x02cd:  mov    %eax,(%esp)
0817a252 +0x02d0:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0817a257 +0x02d5:  mov    0x8(%ebp),%eax
0817a25a +0x02d8:  add    $0xc,%eax
0817a25d +0x02db:  mov    %eax,(%esp)
0817a260 +0x02de:  call   0817a452 <+0x4d0>
0817a265 +0x02e3:  mov    0x8(%ebp),%eax
0817a268 +0x02e6:  mov    %eax,(%esp)
0817a26b +0x02e9:  call   0817a342 <+0x3c0>
0817a270 +0x02ee:  mov    0x8(%ebp),%eax
0817a273 +0x02f1:  add    $0xc,%eax
0817a276 +0x02f4:  mov    %eax,(%esp)
0817a279 +0x02f7:  call   0817a4c4 <+0x542>
0817a27e +0x02fc:  jmp    0817a2b3 <+0x331>
0817a280 +0x02fe:  mov    %edx,%ebx
0817a282 +0x0300:  mov    %eax,%esi
0817a284 +0x0302:  mov    0x8(%ebp),%eax
0817a287 +0x0305:  add    $0xc,%eax
0817a28a +0x0308:  mov    %eax,(%esp)
0817a28d +0x030b:  call   0817a466 <+0x4e4>
0817a292 +0x0310:  mov    %esi,%eax
0817a294 +0x0312:  mov    %ebx,%edx
0817a296 +0x0314:  jmp    0817a298 <+0x316>
0817a298 +0x0316:  mov    %edx,%ebx
0817a29a +0x0318:  mov    %eax,%esi
0817a29c +0x031a:  mov    0x8(%ebp),%eax
0817a29f +0x031d:  mov    %eax,(%esp)
0817a2a2 +0x0320:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0817a2a7 +0x0325:  mov    %esi,%eax
0817a2a9 +0x0327:  mov    %ebx,%edx
0817a2ab +0x0329:  mov    %eax,(%esp)
0817a2ae +0x032c:  call   08ae3750 <_Unwind_Resume>
0817a2b3 +0x0331:  add    $0x10,%esp
0817a2b6 +0x0334:  pop    %ebx
0817a2b7 +0x0335:  pop    %esi
0817a2b8 +0x0336:  pop    %ebp
0817a2b9 +0x0337:  ret
0817a2ba +0x0338:  push   %ebp
0817a2bb +0x0339:  mov    %esp,%ebp
0817a2bd +0x033b:  mov    0x8(%ebp),%eax
0817a2c0 +0x033e:  mov    0xc(%ebp),%edx
0817a2c3 +0x0341:  mov    %edx,(%eax)
0817a2c5 +0x0343:  pop    %ebp
0817a2c6 +0x0344:  ret
0817a2c7 +0x0345:  nop
0817a2c8 +0x0346:  push   %ebp
0817a2c9 +0x0347:  mov    %esp,%ebp
0817a2cb +0x0349:  pop    %ebp
0817a2cc +0x034a:  ret
0817a2cd +0x034b:  nop
0817a2ce +0x034c:  push   %ebp
0817a2cf +0x034d:  mov    %esp,%ebp
0817a2d1 +0x034f:  mov    0x8(%ebp),%eax
0817a2d4 +0x0352:  mov    0xc(%ebp),%edx
0817a2d7 +0x0355:  mov    %edx,(%eax)
0817a2d9 +0x0357:  pop    %ebp
0817a2da +0x0358:  ret
0817a2db +0x0359:  nop
0817a2dc +0x035a:  push   %ebp
0817a2dd +0x035b:  mov    %esp,%ebp
0817a2df +0x035d:  pop    %ebp
0817a2e0 +0x035e:  ret
0817a2e1 +0x035f:  nop
0817a2e2 +0x0360:  push   %ebp
0817a2e3 +0x0361:  mov    %esp,%ebp
0817a2e5 +0x0363:  mov    0x8(%ebp),%eax
0817a2e8 +0x0366:  mov    0xc(%eax),%eax
0817a2eb +0x0369:  pop    %ebp
0817a2ec +0x036a:  ret
0817a2ed +0x036b:  nop
0817a2ee +0x036c:  push   %ebp
0817a2ef +0x036d:  mov    %esp,%ebp
0817a2f1 +0x036f:  mov    0x8(%ebp),%eax
0817a2f4 +0x0372:  mov    0xec(%eax),%eax
0817a2fa +0x0378:  pop    %ebp
0817a2fb +0x0379:  ret
0817a2fc +0x037a:  push   %ebp
0817a2fd +0x037b:  mov    %esp,%ebp
0817a2ff +0x037d:  push   %esi
0817a300 +0x037e:  push   %ebx
0817a301 +0x037f:  sub    $0x10,%esp
0817a304 +0x0382:  mov    0x8(%ebp),%eax
0817a307 +0x0385:  add    $0xc,%eax
0817a30a +0x0388:  mov    %eax,(%esp)
0817a30d +0x038b:  call   0817a466 <+0x4e4>
0817a312 +0x0390:  jmp    0817a32f <+0x3ad>
0817a314 +0x0392:  mov    %edx,%ebx
0817a316 +0x0394:  mov    %eax,%esi
0817a318 +0x0396:  mov    0x8(%ebp),%eax
0817a31b +0x0399:  mov    %eax,(%esp)
0817a31e +0x039c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0817a323 +0x03a1:  mov    %esi,%eax
0817a325 +0x03a3:  mov    %ebx,%edx
0817a327 +0x03a5:  mov    %eax,(%esp)
0817a32a +0x03a8:  call   08ae3750 <_Unwind_Resume>
0817a32f +0x03ad:  mov    0x8(%ebp),%eax
0817a332 +0x03b0:  mov    %eax,(%esp)
0817a335 +0x03b3:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0817a33a +0x03b8:  add    $0x10,%esp
0817a33d +0x03bb:  pop    %ebx
0817a33e +0x03bc:  pop    %esi
0817a33f +0x03bd:  pop    %ebp
0817a340 +0x03be:  ret
0817a341 +0x03bf:  nop
0817a342 +0x03c0:  push   %ebp
0817a343 +0x03c1:  mov    %esp,%ebp
0817a345 +0x03c3:  sub    $0x18,%esp
0817a348 +0x03c6:  mov    0x8(%ebp),%eax
0817a34b +0x03c9:  mov    (%eax),%eax
0817a34d +0x03cb:  mov    %eax,0x4(%esp)
0817a351 +0x03cf:  mov    0x8(%ebp),%eax
0817a354 +0x03d2:  mov    %eax,(%esp)
0817a357 +0x03d5:  call   0817a686 <+0x704>
0817a35c +0x03da:  leave
0817a35d +0x03db:  ret
0817a35e +0x03dc:  push   %ebp
0817a35f +0x03dd:  mov    %esp,%ebp
0817a361 +0x03df:  sub    $0x18,%esp
0817a364 +0x03e2:  mov    0x8(%ebp),%eax
0817a367 +0x03e5:  mov    %eax,(%esp)
0817a36a +0x03e8:  call   0817a6ea <+0x768>
0817a36f +0x03ed:  leave
0817a370 +0x03ee:  ret
0817a371 +0x03ef:  nop
0817a372 +0x03f0:  push   %ebp
0817a373 +0x03f1:  mov    %esp,%ebp
0817a375 +0x03f3:  push   %ebx
0817a376 +0x03f4:  sub    $0x14,%esp
0817a379 +0x03f7:  mov    0x8(%ebp),%ebx
0817a37c +0x03fa:  mov    0xc(%ebp),%eax
0817a37f +0x03fd:  mov    0x10(%ebp),%edx
0817a382 +0x0400:  mov    %edx,0x8(%esp)
0817a386 +0x0404:  mov    %eax,0x4(%esp)
0817a38a +0x0408:  mov    %ebx,(%esp)
0817a38d +0x040b:  call   0817a6f8 <+0x776>
0817a392 +0x0410:  sub    $0x4,%esp
0817a395 +0x0413:  mov    %ebx,%eax
0817a397 +0x0415:  mov    -0x4(%ebp),%ebx
0817a39a +0x0418:  leave
0817a39b +0x0419:  ret    $0x4
0817a39e +0x041c:  push   %ebp
0817a39f +0x041d:  mov    %esp,%ebp
0817a3a1 +0x041f:  push   %ebx
0817a3a2 +0x0420:  sub    $0x14,%esp
0817a3a5 +0x0423:  mov    0x8(%ebp),%ebx
0817a3a8 +0x0426:  mov    0xc(%ebp),%eax
0817a3ab +0x0429:  mov    %eax,0x4(%esp)
0817a3af +0x042d:  mov    %ebx,(%esp)
0817a3b2 +0x0430:  call   0817a7aa <+0x828>
0817a3b7 +0x0435:  sub    $0x4,%esp
0817a3ba +0x0438:  mov    %ebx,%eax
0817a3bc +0x043a:  mov    -0x4(%ebp),%ebx
0817a3bf +0x043d:  leave
0817a3c0 +0x043e:  ret    $0x4
0817a3c3 +0x0441:  nop
0817a3c4 +0x0442:  push   %ebp
0817a3c5 +0x0443:  mov    %esp,%ebp
0817a3c7 +0x0445:  mov    0x8(%ebp),%eax
0817a3ca +0x0448:  mov    (%eax),%edx
0817a3cc +0x044a:  mov    0xc(%ebp),%eax
0817a3cf +0x044d:  mov    (%eax),%eax
0817a3d1 +0x044f:  cmp    %eax,%edx
0817a3d3 +0x0451:  sete   %al
0817a3d6 +0x0454:  pop    %ebp
0817a3d7 +0x0455:  ret
0817a3d8 +0x0456:  push   %ebp
0817a3d9 +0x0457:  mov    %esp,%ebp
0817a3db +0x0459:  push   %ebx
0817a3dc +0x045a:  sub    $0x14,%esp
0817a3df +0x045d:  mov    0x8(%ebp),%ebx
0817a3e2 +0x0460:  mov    0xc(%ebp),%eax
0817a3e5 +0x0463:  mov    0x10(%ebp),%edx
0817a3e8 +0x0466:  mov    %edx,0x8(%esp)
0817a3ec +0x046a:  mov    %eax,0x4(%esp)
0817a3f0 +0x046e:  mov    %ebx,(%esp)
0817a3f3 +0x0471:  call   0817a7d6 <+0x854>
0817a3f8 +0x0476:  sub    $0x4,%esp
0817a3fb +0x0479:  mov    %ebx,%eax
0817a3fd +0x047b:  mov    -0x4(%ebp),%ebx
0817a400 +0x047e:  leave
0817a401 +0x047f:  ret    $0x4
0817a404 +0x0482:  push   %ebp
0817a405 +0x0483:  mov    %esp,%ebp
0817a407 +0x0485:  push   %ebx
0817a408 +0x0486:  sub    $0x14,%esp
0817a40b +0x0489:  mov    0x8(%ebp),%ebx
0817a40e +0x048c:  mov    0xc(%ebp),%eax
0817a411 +0x048f:  mov    %eax,0x4(%esp)
0817a415 +0x0493:  mov    %ebx,(%esp)
0817a418 +0x0496:  call   0817a888 <+0x906>
0817a41d +0x049b:  sub    $0x4,%esp
0817a420 +0x049e:  mov    %ebx,%eax
0817a422 +0x04a0:  mov    -0x4(%ebp),%ebx
0817a425 +0x04a3:  leave
0817a426 +0x04a4:  ret    $0x4
0817a429 +0x04a7:  nop
0817a42a +0x04a8:  push   %ebp
0817a42b +0x04a9:  mov    %esp,%ebp
0817a42d +0x04ab:  mov    0x8(%ebp),%eax
0817a430 +0x04ae:  mov    (%eax),%edx
0817a432 +0x04b0:  mov    0xc(%ebp),%eax
0817a435 +0x04b3:  mov    (%eax),%eax
0817a437 +0x04b5:  cmp    %eax,%edx
0817a439 +0x04b7:  sete   %al
0817a43c +0x04ba:  pop    %ebp
0817a43d +0x04bb:  ret
0817a43e +0x04bc:  push   %ebp
0817a43f +0x04bd:  mov    %esp,%ebp
0817a441 +0x04bf:  sub    $0x18,%esp
0817a444 +0x04c2:  mov    0x8(%ebp),%eax
0817a447 +0x04c5:  mov    %eax,(%esp)
0817a44a +0x04c8:  call   0817a8b4 <+0x932>
0817a44f +0x04cd:  leave
0817a450 +0x04ce:  ret
0817a451 +0x04cf:  nop
0817a452 +0x04d0:  push   %ebp
0817a453 +0x04d1:  mov    %esp,%ebp
0817a455 +0x04d3:  sub    $0x18,%esp
0817a458 +0x04d6:  mov    0x8(%ebp),%eax
0817a45b +0x04d9:  mov    %eax,(%esp)
0817a45e +0x04dc:  call   0817a8d6 <+0x954>
0817a463 +0x04e1:  leave
0817a464 +0x04e2:  ret
0817a465 +0x04e3:  nop
0817a466 +0x04e4:  push   %ebp
0817a467 +0x04e5:  mov    %esp,%ebp
0817a469 +0x04e7:  push   %esi
0817a46a +0x04e8:  push   %ebx
0817a46b +0x04e9:  sub    $0x10,%esp
0817a46e +0x04ec:  mov    0x8(%ebp),%eax
0817a471 +0x04ef:  mov    %eax,(%esp)
0817a474 +0x04f2:  call   0817a952 <+0x9d0>
0817a479 +0x04f7:  mov    0x8(%ebp),%edx
0817a47c +0x04fa:  mov    0x4(%edx),%ecx
0817a47f +0x04fd:  mov    0x8(%ebp),%edx
0817a482 +0x0500:  mov    (%edx),%edx
0817a484 +0x0502:  mov    %eax,0x8(%esp)
0817a488 +0x0506:  mov    %ecx,0x4(%esp)
0817a48c +0x050a:  mov    %edx,(%esp)
0817a48f +0x050d:  call   0817a95a <+0x9d8>
0817a494 +0x0512:  jmp    0817a4b1 <+0x52f>
0817a496 +0x0514:  mov    %edx,%ebx
0817a498 +0x0516:  mov    %eax,%esi
0817a49a +0x0518:  mov    0x8(%ebp),%eax
0817a49d +0x051b:  mov    %eax,(%esp)
0817a4a0 +0x051e:  call   0817a8ea <+0x968>
0817a4a5 +0x0523:  mov    %esi,%eax
0817a4a7 +0x0525:  mov    %ebx,%edx
0817a4a9 +0x0527:  mov    %eax,(%esp)
0817a4ac +0x052a:  call   08ae3750 <_Unwind_Resume>
0817a4b1 +0x052f:  mov    0x8(%ebp),%eax
0817a4b4 +0x0532:  mov    %eax,(%esp)
0817a4b7 +0x0535:  call   0817a8ea <+0x968>
0817a4bc +0x053a:  add    $0x10,%esp
0817a4bf +0x053d:  pop    %ebx
0817a4c0 +0x053e:  pop    %esi
0817a4c1 +0x053f:  pop    %ebp
0817a4c2 +0x0540:  ret
0817a4c3 +0x0541:  nop
0817a4c4 +0x0542:  push   %ebp
0817a4c5 +0x0543:  mov    %esp,%ebp
0817a4c7 +0x0545:  sub    $0x18,%esp
0817a4ca +0x0548:  mov    0x8(%ebp),%eax
0817a4cd +0x054b:  mov    (%eax),%eax
0817a4cf +0x054d:  mov    %eax,0x4(%esp)
0817a4d3 +0x0551:  mov    0x8(%ebp),%eax
0817a4d6 +0x0554:  mov    %eax,(%esp)
0817a4d9 +0x0557:  call   0817a974 <+0x9f2>
0817a4de +0x055c:  leave
0817a4df +0x055d:  ret
0817a4e0 +0x055e:  push   %ebp
0817a4e1 +0x055f:  mov    %esp,%ebp
0817a4e3 +0x0561:  push   %ebx
0817a4e4 +0x0562:  mov    0x8(%ebp),%eax
0817a4e7 +0x0565:  mov    (%eax),%ecx
0817a4e9 +0x0567:  mov    0x4(%eax),%ebx
0817a4ec +0x056a:  mov    0xc(%ebp),%eax
0817a4ef +0x056d:  mov    0x4(%eax),%edx
0817a4f2 +0x0570:  mov    (%eax),%eax
0817a4f4 +0x0572:  cmp    %edx,%ebx
0817a4f6 +0x0574:  jg     0817a505 <+0x583>
0817a4f8 +0x0576:  cmp    %edx,%ebx
0817a4fa +0x0578:  jl     0817a500 <+0x57e>
0817a4fc +0x057a:  cmp    %eax,%ecx
0817a4fe +0x057c:  jae    0817a505 <+0x583>
0817a500 +0x057e:  mov    0xc(%ebp),%eax
0817a503 +0x0581:  jmp    0817a508 <+0x586>
0817a505 +0x0583:  mov    0x8(%ebp),%eax
0817a508 +0x0586:  pop    %ebx
0817a509 +0x0587:  pop    %ebp
0817a50a +0x0588:  ret
0817a50b +0x0589:  nop
0817a50c +0x058a:  push   %ebp
0817a50d +0x058b:  mov    %esp,%ebp
0817a50f +0x058d:  sub    $0x18,%esp
0817a512 +0x0590:  mov    0x8(%ebp),%eax
0817a515 +0x0593:  mov    (%eax),%eax
0817a517 +0x0595:  mov    %eax,(%esp)
0817a51a +0x0598:  call   0817a9aa <+0xa28>
0817a51f +0x059d:  leave
0817a520 +0x059e:  ret
0817a521 +0x059f:  nop
0817a522 +0x05a0:  push   %ebp
0817a523 +0x05a1:  mov    %esp,%ebp
0817a525 +0x05a3:  sub    $0x28,%esp
0817a528 +0x05a6:  movl   $0x27c,0x4(%esp)
0817a530 +0x05ae:  mov    0x8(%ebp),%eax
0817a533 +0x05b1:  mov    %eax,(%esp)
0817a536 +0x05b4:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0817a53b +0x05b9:  xor    $0x1,%eax
0817a53e +0x05bc:  test   %al,%al
0817a540 +0x05be:  je     0817a549 <+0x5c7>
0817a542 +0x05c0:  mov    $0x0,%eax
0817a547 +0x05c5:  jmp    0817a573 <+0x5f1>
0817a549 +0x05c7:  mov    0x8(%ebp),%eax
0817a54c +0x05ca:  mov    0x8(%eax),%eax
0817a54f +0x05cd:  mov    %eax,%edx
0817a551 +0x05cf:  mov    0x8(%ebp),%eax
0817a554 +0x05d2:  mov    0x10(%eax),%eax
0817a557 +0x05d5:  lea    (%edx,%eax,1),%eax
0817a55a +0x05d8:  mov    %eax,-0xc(%ebp)
0817a55d +0x05db:  movl   $0x27c,0x4(%esp)
0817a565 +0x05e3:  mov    0x8(%ebp),%eax
0817a568 +0x05e6:  mov    %eax,(%esp)
0817a56b +0x05e9:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0817a570 +0x05ee:  mov    -0xc(%ebp),%eax
0817a573 +0x05f1:  leave
0817a574 +0x05f2:  ret
0817a575 +0x05f3:  push   %ebp
0817a576 +0x05f4:  mov    %esp,%ebp
0817a578 +0x05f6:  push   %esi
0817a579 +0x05f7:  push   %ebx
0817a57a +0x05f8:  sub    $0x10,%esp
0817a57d +0x05fb:  mov    0x8(%ebp),%esi
0817a580 +0x05fe:  mov    0x10(%ebp),%eax
0817a583 +0x0601:  mov    %eax,(%esp)
0817a586 +0x0604:  call   08138740 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4347>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4347
0817a58b +0x0609:  mov    %eax,%ebx
0817a58d +0x060b:  mov    0xc(%ebp),%eax
0817a590 +0x060e:  mov    %eax,(%esp)
0817a593 +0x0611:  call   0811244a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x195c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x195c
0817a598 +0x0616:  mov    %ebx,0x8(%esp)
0817a59c +0x061a:  mov    %eax,0x4(%esp)
0817a5a0 +0x061e:  mov    %esi,(%esp)
0817a5a3 +0x0621:  call   0817aa14 <+0xa92>
0817a5a8 +0x0626:  mov    %esi,%eax
0817a5aa +0x0628:  add    $0x10,%esp
0817a5ad +0x062b:  pop    %ebx
0817a5ae +0x062c:  pop    %esi
0817a5af +0x062d:  pop    %ebp
0817a5b0 +0x062e:  ret    $0x4
0817a5b3 +0x0631:  nop
0817a5b4 +0x0632:  push   %ebp
0817a5b5 +0x0633:  mov    %esp,%ebp
0817a5b7 +0x0635:  sub    $0x18,%esp
0817a5ba +0x0638:  mov    0xc(%ebp),%eax
0817a5bd +0x063b:  mov    %eax,(%esp)
0817a5c0 +0x063e:  call   08080fec <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1012>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1012
0817a5c5 +0x0643:  mov    (%eax),%eax
0817a5c7 +0x0645:  mov    %eax,%edx
0817a5c9 +0x0647:  mov    0x8(%ebp),%eax
0817a5cc +0x064a:  mov    %edx,(%eax)
0817a5ce +0x064c:  mov    0xc(%ebp),%eax
0817a5d1 +0x064f:  add    $0x4,%eax
0817a5d4 +0x0652:  mov    %eax,(%esp)
0817a5d7 +0x0655:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
0817a5dc +0x065a:  movzbl (%eax),%eax
0817a5df +0x065d:  movzbl %al,%edx
0817a5e2 +0x0660:  mov    0x8(%ebp),%eax
0817a5e5 +0x0663:  mov    %edx,0x4(%eax)
0817a5e8 +0x0666:  leave
0817a5e9 +0x0667:  ret
0817a5ea +0x0668:  push   %ebp
0817a5eb +0x0669:  mov    %esp,%ebp
0817a5ed +0x066b:  sub    $0x28,%esp
0817a5f0 +0x066e:  mov    0x8(%ebp),%eax
0817a5f3 +0x0671:  mov    0x4(%eax),%edx
0817a5f6 +0x0674:  mov    0x8(%ebp),%eax
0817a5f9 +0x0677:  mov    0x8(%eax),%eax
0817a5fc +0x067a:  cmp    %eax,%edx
0817a5fe +0x067c:  je     0817a62d <+0x6ab>
0817a600 +0x067e:  mov    0x8(%ebp),%eax
0817a603 +0x0681:  mov    0x4(%eax),%edx
0817a606 +0x0684:  mov    0x8(%ebp),%eax
0817a609 +0x0687:  mov    0xc(%ebp),%ecx
0817a60c +0x068a:  mov    %ecx,0x8(%esp)
0817a610 +0x068e:  mov    %edx,0x4(%esp)
0817a614 +0x0692:  mov    %eax,(%esp)
0817a617 +0x0695:  call   0817aa42 <+0xac0>
0817a61c +0x069a:  mov    0x8(%ebp),%eax
0817a61f +0x069d:  mov    0x4(%eax),%eax
0817a622 +0x06a0:  lea    0x8(%eax),%edx
0817a625 +0x06a3:  mov    0x8(%ebp),%eax
0817a628 +0x06a6:  mov    %edx,0x4(%eax)
0817a62b +0x06a9:  jmp    0817a65b <+0x6d9>
0817a62d +0x06ab:  lea    -0xc(%ebp),%eax
0817a630 +0x06ae:  mov    0x8(%ebp),%edx
0817a633 +0x06b1:  mov    %edx,0x4(%esp)
0817a637 +0x06b5:  mov    %eax,(%esp)
0817a63a +0x06b8:  call   0817aa72 <+0xaf0>
0817a63f +0x06bd:  sub    $0x4,%esp
0817a642 +0x06c0:  mov    0xc(%ebp),%eax
0817a645 +0x06c3:  mov    %eax,0x8(%esp)
0817a649 +0x06c7:  mov    -0xc(%ebp),%eax
0817a64c +0x06ca:  mov    %eax,0x4(%esp)
0817a650 +0x06ce:  mov    0x8(%ebp),%eax
0817a653 +0x06d1:  mov    %eax,(%esp)
0817a656 +0x06d4:  call   0817aa98 <+0xb16>
0817a65b +0x06d9:  leave
0817a65c +0x06da:  ret
0817a65d +0x06db:  nop
0817a65e +0x06dc:  push   %ebp
0817a65f +0x06dd:  mov    %esp,%ebp
0817a661 +0x06df:  mov    0x8(%ebp),%eax
0817a664 +0x06e2:  mov    0x4(%eax),%eax
0817a667 +0x06e5:  mov    %eax,%edx
0817a669 +0x06e7:  mov    0x8(%ebp),%eax
0817a66c +0x06ea:  mov    (%eax),%eax
0817a66e +0x06ec:  mov    %edx,%ecx
0817a670 +0x06ee:  sub    %eax,%ecx
0817a672 +0x06f0:  mov    %ecx,%eax
0817a674 +0x06f2:  imul   $0xc10c9715,%eax,%eax
0817a67a +0x06f8:  pop    %ebp
0817a67b +0x06f9:  ret
0817a67c +0x06fa:  push   %ebp
0817a67d +0x06fb:  mov    %esp,%ebp
0817a67f +0x06fd:  mov    0x8(%ebp),%eax
0817a682 +0x0700:  mov    (%eax),%eax
0817a684 +0x0702:  pop    %ebp
0817a685 +0x0703:  ret
0817a686 +0x0704:  push   %ebp
0817a687 +0x0705:  mov    %esp,%ebp
0817a689 +0x0707:  sub    $0x18,%esp
0817a68c +0x070a:  mov    0x8(%ebp),%eax
0817a68f +0x070d:  mov    %eax,(%esp)
0817a692 +0x0710:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
0817a697 +0x0715:  mov    0x8(%ebp),%edx
0817a69a +0x0718:  mov    0x4(%edx),%edx
0817a69d +0x071b:  mov    %eax,0x8(%esp)
0817a6a1 +0x071f:  mov    %edx,0x4(%esp)
0817a6a5 +0x0723:  mov    0xc(%ebp),%eax
0817a6a8 +0x0726:  mov    %eax,(%esp)
0817a6ab +0x0729:  call   080dd7fa <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x343>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x343
0817a6b0 +0x072e:  mov    0x8(%ebp),%eax
0817a6b3 +0x0731:  mov    0xc(%ebp),%edx
0817a6b6 +0x0734:  mov    %edx,0x4(%eax)
0817a6b9 +0x0737:  leave
0817a6ba +0x0738:  ret
0817a6bb +0x0739:  nop
0817a6bc +0x073a:  push   %ebp
0817a6bd +0x073b:  mov    %esp,%ebp
0817a6bf +0x073d:  mov    0x8(%ebp),%eax
0817a6c2 +0x0740:  mov    0x4(%eax),%eax
0817a6c5 +0x0743:  mov    %eax,%edx
0817a6c7 +0x0745:  mov    0x8(%ebp),%eax
0817a6ca +0x0748:  mov    (%eax),%eax
0817a6cc +0x074a:  mov    %edx,%ecx
0817a6ce +0x074c:  sub    %eax,%ecx
0817a6d0 +0x074e:  mov    %ecx,%eax
0817a6d2 +0x0750:  sar    $0x2,%eax
0817a6d5 +0x0753:  pop    %ebp
0817a6d6 +0x0754:  ret
0817a6d7 +0x0755:  nop
0817a6d8 +0x0756:  push   %ebp
0817a6d9 +0x0757:  mov    %esp,%ebp
0817a6db +0x0759:  mov    0x8(%ebp),%eax
0817a6de +0x075c:  mov    (%eax),%eax
0817a6e0 +0x075e:  mov    0xc(%ebp),%edx
0817a6e3 +0x0761:  shl    $0x2,%edx
0817a6e6 +0x0764:  add    %edx,%eax
0817a6e8 +0x0766:  pop    %ebp
0817a6e9 +0x0767:  ret
0817a6ea +0x0768:  push   %ebp
0817a6eb +0x0769:  mov    %esp,%ebp
0817a6ed +0x076b:  mov    0x8(%ebp),%eax
0817a6f0 +0x076e:  mov    (%eax),%eax
0817a6f2 +0x0770:  add    $0x4,%eax
0817a6f5 +0x0773:  pop    %ebp
0817a6f6 +0x0774:  ret
0817a6f7 +0x0775:  nop
0817a6f8 +0x0776:  push   %ebp
0817a6f9 +0x0777:  mov    %esp,%ebp
0817a6fb +0x0779:  push   %ebx
0817a6fc +0x077a:  sub    $0x24,%esp
0817a6ff +0x077d:  mov    0x8(%ebp),%ebx
0817a702 +0x0780:  mov    0x10(%ebp),%eax
0817a705 +0x0783:  mov    %eax,0x4(%esp)
0817a709 +0x0787:  mov    0xc(%ebp),%eax
0817a70c +0x078a:  mov    %eax,(%esp)
0817a70f +0x078d:  call   0817ad50 <+0xdce>
0817a714 +0x0792:  mov    %eax,-0x10(%ebp)
0817a717 +0x0795:  mov    0xc(%ebp),%eax
0817a71a +0x0798:  lea    0x4(%eax),%edx
0817a71d +0x079b:  mov    -0x10(%ebp),%eax
0817a720 +0x079e:  mov    %eax,0x4(%esp)
0817a724 +0x07a2:  mov    %edx,(%esp)
0817a727 +0x07a5:  call   0817a6d8 <+0x756>
0817a72c +0x07aa:  mov    (%eax),%eax
0817a72e +0x07ac:  mov    %eax,-0xc(%ebp)
0817a731 +0x07af:  jmp    0817a73b <+0x7b9>
0817a733 +0x07b1:  mov    -0xc(%ebp),%eax
0817a736 +0x07b4:  mov    (%eax),%eax
0817a738 +0x07b6:  mov    %eax,-0xc(%ebp)
0817a73b +0x07b9:  cmpl   $0x0,-0xc(%ebp)
0817a73f +0x07bd:  je     0817a780 <+0x7fe>
0817a741 +0x07bf:  mov    -0xc(%ebp),%eax
0817a744 +0x07c2:  lea    0x4(%eax),%edx
0817a747 +0x07c5:  mov    0xc(%ebp),%eax
0817a74a +0x07c8:  add    $0x3,%eax
0817a74d +0x07cb:  mov    %edx,0x4(%esp)
0817a751 +0x07cf:  mov    %eax,(%esp)
0817a754 +0x07d2:  call   0817ad90 <+0xe0e>
0817a759 +0x07d7:  mov    0xc(%ebp),%edx
0817a75c +0x07da:  lea    0x2(%edx),%ecx
0817a75f +0x07dd:  mov    0x10(%ebp),%edx
0817a762 +0x07e0:  mov    %edx,0x8(%esp)
0817a766 +0x07e4:  mov    %eax,0x4(%esp)
0817a76a +0x07e8:  mov    %ecx,(%esp)
0817a76d +0x07eb:  call   0817ad7c <+0xdfa>
0817a772 +0x07f0:  xor    $0x1,%eax
0817a775 +0x07f3:  test   %al,%al
0817a777 +0x07f5:  je     0817a780 <+0x7fe>
0817a779 +0x07f7:  mov    $0x1,%eax
0817a77e +0x07fc:  jmp    0817a785 <+0x803>
0817a780 +0x07fe:  mov    $0x0,%eax
0817a785 +0x0803:  test   %al,%al
0817a787 +0x0805:  jne    0817a733 <+0x7b1>
0817a789 +0x0807:  mov    0xc(%ebp),%eax
0817a78c +0x080a:  mov    %eax,0x8(%esp)
0817a790 +0x080e:  mov    -0xc(%ebp),%eax
0817a793 +0x0811:  mov    %eax,0x4(%esp)
0817a797 +0x0815:  mov    %ebx,(%esp)
0817a79a +0x0818:  call   0817ad98 <+0xe16>
0817a79f +0x081d:  mov    %ebx,%eax
0817a7a1 +0x081f:  add    $0x24,%esp
0817a7a4 +0x0822:  pop    %ebx
0817a7a5 +0x0823:  pop    %ebp
0817a7a6 +0x0824:  ret    $0x4
0817a7a9 +0x0827:  nop
0817a7aa +0x0828:  push   %ebp
0817a7ab +0x0829:  mov    %esp,%ebp
0817a7ad +0x082b:  push   %ebx
0817a7ae +0x082c:  sub    $0x14,%esp
0817a7b1 +0x082f:  mov    0x8(%ebp),%ebx
0817a7b4 +0x0832:  mov    0xc(%ebp),%eax
0817a7b7 +0x0835:  mov    %eax,0x8(%esp)
0817a7bb +0x0839:  movl   $0x0,0x4(%esp)
0817a7c3 +0x0841:  mov    %ebx,(%esp)
0817a7c6 +0x0844:  call   0817ad98 <+0xe16>
0817a7cb +0x0849:  mov    %ebx,%eax
0817a7cd +0x084b:  add    $0x14,%esp
0817a7d0 +0x084e:  pop    %ebx
0817a7d1 +0x084f:  pop    %ebp
0817a7d2 +0x0850:  ret    $0x4
0817a7d5 +0x0853:  nop
0817a7d6 +0x0854:  push   %ebp
0817a7d7 +0x0855:  mov    %esp,%ebp
0817a7d9 +0x0857:  push   %ebx
0817a7da +0x0858:  sub    $0x24,%esp
0817a7dd +0x085b:  mov    0x8(%ebp),%ebx
0817a7e0 +0x085e:  mov    0x10(%ebp),%eax
0817a7e3 +0x0861:  mov    %eax,0x4(%esp)
0817a7e7 +0x0865:  mov    0xc(%ebp),%eax
0817a7ea +0x0868:  mov    %eax,(%esp)
0817a7ed +0x086b:  call   0817adae <+0xe2c>
0817a7f2 +0x0870:  mov    %eax,-0x10(%ebp)
0817a7f5 +0x0873:  mov    0xc(%ebp),%eax
0817a7f8 +0x0876:  lea    0x4(%eax),%edx
0817a7fb +0x0879:  mov    -0x10(%ebp),%eax
0817a7fe +0x087c:  mov    %eax,0x4(%esp)
0817a802 +0x0880:  mov    %edx,(%esp)
0817a805 +0x0883:  call   0817adda <+0xe58>
0817a80a +0x0888:  mov    (%eax),%eax
0817a80c +0x088a:  mov    %eax,-0xc(%ebp)
0817a80f +0x088d:  jmp    0817a819 <+0x897>
0817a811 +0x088f:  mov    -0xc(%ebp),%eax
0817a814 +0x0892:  mov    (%eax),%eax
0817a816 +0x0894:  mov    %eax,-0xc(%ebp)
0817a819 +0x0897:  cmpl   $0x0,-0xc(%ebp)
0817a81d +0x089b:  je     0817a85e <+0x8dc>
0817a81f +0x089d:  mov    -0xc(%ebp),%eax
0817a822 +0x08a0:  lea    0x4(%eax),%edx
0817a825 +0x08a3:  mov    0xc(%ebp),%eax
0817a828 +0x08a6:  add    $0x3,%eax
0817a82b +0x08a9:  mov    %edx,0x4(%esp)
0817a82f +0x08ad:  mov    %eax,(%esp)
0817a832 +0x08b0:  call   0817adec <+0xe6a>
0817a837 +0x08b5:  mov    0xc(%ebp),%edx
0817a83a +0x08b8:  lea    0x2(%edx),%ecx
0817a83d +0x08bb:  mov    0x10(%ebp),%edx
0817a840 +0x08be:  mov    %edx,0x8(%esp)
0817a844 +0x08c2:  mov    %eax,0x4(%esp)
0817a848 +0x08c6:  mov    %ecx,(%esp)
0817a84b +0x08c9:  call   0817ad7c <+0xdfa>
0817a850 +0x08ce:  xor    $0x1,%eax
0817a853 +0x08d1:  test   %al,%al
0817a855 +0x08d3:  je     0817a85e <+0x8dc>
0817a857 +0x08d5:  mov    $0x1,%eax
0817a85c +0x08da:  jmp    0817a863 <+0x8e1>
0817a85e +0x08dc:  mov    $0x0,%eax
0817a863 +0x08e1:  test   %al,%al
0817a865 +0x08e3:  jne    0817a811 <+0x88f>
0817a867 +0x08e5:  mov    0xc(%ebp),%eax
0817a86a +0x08e8:  mov    %eax,0x8(%esp)
0817a86e +0x08ec:  mov    -0xc(%ebp),%eax
0817a871 +0x08ef:  mov    %eax,0x4(%esp)
0817a875 +0x08f3:  mov    %ebx,(%esp)
0817a878 +0x08f6:  call   0817adf4 <+0xe72>
0817a87d +0x08fb:  mov    %ebx,%eax
0817a87f +0x08fd:  add    $0x24,%esp
0817a882 +0x0900:  pop    %ebx
0817a883 +0x0901:  pop    %ebp
0817a884 +0x0902:  ret    $0x4
0817a887 +0x0905:  nop
0817a888 +0x0906:  push   %ebp
0817a889 +0x0907:  mov    %esp,%ebp
0817a88b +0x0909:  push   %ebx
0817a88c +0x090a:  sub    $0x14,%esp
0817a88f +0x090d:  mov    0x8(%ebp),%ebx
0817a892 +0x0910:  mov    0xc(%ebp),%eax
0817a895 +0x0913:  mov    %eax,0x8(%esp)
0817a899 +0x0917:  movl   $0x0,0x4(%esp)
0817a8a1 +0x091f:  mov    %ebx,(%esp)
0817a8a4 +0x0922:  call   0817adf4 <+0xe72>
0817a8a9 +0x0927:  mov    %ebx,%eax
0817a8ab +0x0929:  add    $0x14,%esp
0817a8ae +0x092c:  pop    %ebx
0817a8af +0x092d:  pop    %ebp
0817a8b0 +0x092e:  ret    $0x4
0817a8b3 +0x0931:  nop
0817a8b4 +0x0932:  push   %ebp
0817a8b5 +0x0933:  mov    %esp,%ebp
0817a8b7 +0x0935:  mov    0x8(%ebp),%eax
0817a8ba +0x0938:  mov    (%eax),%eax
0817a8bc +0x093a:  add    $0x4,%eax
0817a8bf +0x093d:  pop    %ebp
0817a8c0 +0x093e:  ret
0817a8c1 +0x093f:  nop
0817a8c2 +0x0940:  push   %ebp
0817a8c3 +0x0941:  mov    %esp,%ebp
0817a8c5 +0x0943:  sub    $0x18,%esp
0817a8c8 +0x0946:  mov    0x8(%ebp),%eax
0817a8cb +0x0949:  mov    %eax,(%esp)
0817a8ce +0x094c:  call   0817ae3a <+0xeb8>
0817a8d3 +0x0951:  leave
0817a8d4 +0x0952:  ret
0817a8d5 +0x0953:  nop
0817a8d6 +0x0954:  push   %ebp
0817a8d7 +0x0955:  mov    %esp,%ebp
0817a8d9 +0x0957:  sub    $0x18,%esp
0817a8dc +0x095a:  mov    0x8(%ebp),%eax
0817a8df +0x095d:  mov    %eax,(%esp)
0817a8e2 +0x0960:  call   0817ae0a <+0xe88>
0817a8e7 +0x0965:  leave
0817a8e8 +0x0966:  ret
0817a8e9 +0x0967:  nop
0817a8ea +0x0968:  push   %ebp
0817a8eb +0x0969:  mov    %esp,%ebp
0817a8ed +0x096b:  push   %esi
0817a8ee +0x096c:  push   %ebx
0817a8ef +0x096d:  sub    $0x10,%esp
0817a8f2 +0x0970:  mov    0x8(%ebp),%eax
0817a8f5 +0x0973:  mov    0x8(%eax),%eax
0817a8f8 +0x0976:  mov    %eax,%edx
0817a8fa +0x0978:  mov    0x8(%ebp),%eax
0817a8fd +0x097b:  mov    (%eax),%eax
0817a8ff +0x097d:  mov    %edx,%ecx
0817a901 +0x097f:  sub    %eax,%ecx
0817a903 +0x0981:  mov    %ecx,%eax
0817a905 +0x0983:  sar    $0x3,%eax
0817a908 +0x0986:  mov    %eax,%edx
0817a90a +0x0988:  mov    0x8(%ebp),%eax
0817a90d +0x098b:  mov    (%eax),%eax
0817a90f +0x098d:  mov    %edx,0x8(%esp)
0817a913 +0x0991:  mov    %eax,0x4(%esp)
0817a917 +0x0995:  mov    0x8(%ebp),%eax
0817a91a +0x0998:  mov    %eax,(%esp)
0817a91d +0x099b:  call   0817ae4e <+0xecc>
0817a922 +0x09a0:  jmp    0817a93f <+0x9bd>
0817a924 +0x09a2:  mov    %edx,%ebx
0817a926 +0x09a4:  mov    %eax,%esi
0817a928 +0x09a6:  mov    0x8(%ebp),%eax
0817a92b +0x09a9:  mov    %eax,(%esp)
0817a92e +0x09ac:  call   0817a8c2 <+0x940>
0817a933 +0x09b1:  mov    %esi,%eax
0817a935 +0x09b3:  mov    %ebx,%edx
0817a937 +0x09b5:  mov    %eax,(%esp)
0817a93a +0x09b8:  call   08ae3750 <_Unwind_Resume>
0817a93f +0x09bd:  mov    0x8(%ebp),%eax
0817a942 +0x09c0:  mov    %eax,(%esp)
0817a945 +0x09c3:  call   0817a8c2 <+0x940>
0817a94a +0x09c8:  add    $0x10,%esp
0817a94d +0x09cb:  pop    %ebx
0817a94e +0x09cc:  pop    %esi
0817a94f +0x09cd:  pop    %ebp
0817a950 +0x09ce:  ret
0817a951 +0x09cf:  nop
0817a952 +0x09d0:  push   %ebp
0817a953 +0x09d1:  mov    %esp,%ebp
0817a955 +0x09d3:  mov    0x8(%ebp),%eax
0817a958 +0x09d6:  pop    %ebp
0817a959 +0x09d7:  ret
0817a95a +0x09d8:  push   %ebp
0817a95b +0x09d9:  mov    %esp,%ebp
0817a95d +0x09db:  sub    $0x18,%esp
0817a960 +0x09de:  mov    0xc(%ebp),%eax
0817a963 +0x09e1:  mov    %eax,0x4(%esp)
0817a967 +0x09e5:  mov    0x8(%ebp),%eax
0817a96a +0x09e8:  mov    %eax,(%esp)
0817a96d +0x09eb:  call   0817ae75 <+0xef3>
0817a972 +0x09f0:  leave
0817a973 +0x09f1:  ret
0817a974 +0x09f2:  push   %ebp
0817a975 +0x09f3:  mov    %esp,%ebp
0817a977 +0x09f5:  sub    $0x18,%esp
0817a97a +0x09f8:  mov    0x8(%ebp),%eax
0817a97d +0x09fb:  mov    %eax,(%esp)
0817a980 +0x09fe:  call   0817a952 <+0x9d0>
0817a985 +0x0a03:  mov    0x8(%ebp),%edx
0817a988 +0x0a06:  mov    0x4(%edx),%edx
0817a98b +0x0a09:  mov    %eax,0x8(%esp)
0817a98f +0x0a0d:  mov    %edx,0x4(%esp)
0817a993 +0x0a11:  mov    0xc(%ebp),%eax
0817a996 +0x0a14:  mov    %eax,(%esp)
0817a999 +0x0a17:  call   0817a95a <+0x9d8>
0817a99e +0x0a1c:  mov    0x8(%ebp),%eax
0817a9a1 +0x0a1f:  mov    0xc(%ebp),%edx
0817a9a4 +0x0a22:  mov    %edx,0x4(%eax)
0817a9a7 +0x0a25:  leave
0817a9a8 +0x0a26:  ret
0817a9a9 +0x0a27:  nop
0817a9aa +0x0a28:  push   %ebp
0817a9ab +0x0a29:  mov    %esp,%ebp
0817a9ad +0x0a2b:  sub    $0x28,%esp
0817a9b0 +0x0a2e:  jmp    0817a9ce <+0xa4c>
0817a9b2 +0x0a30:  mov    0x8(%ebp),%eax
0817a9b5 +0x0a33:  mov    %eax,(%esp)
0817a9b8 +0x0a36:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0817a9bd +0x0a3b:  add    %eax,%eax
0817a9bf +0x0a3d:  mov    %eax,0x4(%esp)
0817a9c3 +0x0a41:  mov    0x8(%ebp),%eax
0817a9c6 +0x0a44:  mov    %eax,(%esp)
0817a9c9 +0x0a47:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0817a9ce +0x0a4c:  movl   $0x27c,0x4(%esp)
0817a9d6 +0x0a54:  mov    0x8(%ebp),%eax
0817a9d9 +0x0a57:  mov    %eax,(%esp)
0817a9dc +0x0a5a:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0817a9e1 +0x0a5f:  xor    $0x1,%eax
0817a9e4 +0x0a62:  test   %al,%al
0817a9e6 +0x0a64:  jne    0817a9b2 <+0xa30>
0817a9e8 +0x0a66:  mov    0x8(%ebp),%eax
0817a9eb +0x0a69:  mov    0x8(%eax),%eax
0817a9ee +0x0a6c:  mov    %eax,%edx
0817a9f0 +0x0a6e:  mov    0x8(%ebp),%eax
0817a9f3 +0x0a71:  mov    0xc(%eax),%eax
0817a9f6 +0x0a74:  lea    (%edx,%eax,1),%eax
0817a9f9 +0x0a77:  mov    %eax,-0xc(%ebp)
0817a9fc +0x0a7a:  movl   $0x27c,0x4(%esp)
0817aa04 +0x0a82:  mov    0x8(%ebp),%eax
0817aa07 +0x0a85:  mov    %eax,(%esp)
0817aa0a +0x0a88:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0817aa0f +0x0a8d:  mov    -0xc(%ebp),%eax
0817aa12 +0x0a90:  leave
0817aa13 +0x0a91:  ret
0817aa14 +0x0a92:  push   %ebp
0817aa15 +0x0a93:  mov    %esp,%ebp
0817aa17 +0x0a95:  sub    $0x18,%esp
0817aa1a +0x0a98:  mov    0xc(%ebp),%eax
0817aa1d +0x0a9b:  mov    %eax,(%esp)
0817aa20 +0x0a9e:  call   0811244a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x195c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x195c
0817aa25 +0x0aa3:  mov    (%eax),%edx
0817aa27 +0x0aa5:  mov    0x8(%ebp),%eax
0817aa2a +0x0aa8:  mov    %edx,(%eax)
0817aa2c +0x0aaa:  mov    0x10(%ebp),%eax
0817aa2f +0x0aad:  mov    %eax,(%esp)
0817aa32 +0x0ab0:  call   08138740 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4347>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4347
0817aa37 +0x0ab5:  movzbl (%eax),%edx
0817aa3a +0x0ab8:  mov    0x8(%ebp),%eax
0817aa3d +0x0abb:  mov    %dl,0x4(%eax)
0817aa40 +0x0abe:  leave
0817aa41 +0x0abf:  ret
0817aa42 +0x0ac0:  push   %ebp
0817aa43 +0x0ac1:  mov    %esp,%ebp
0817aa45 +0x0ac3:  sub    $0x18,%esp
0817aa48 +0x0ac6:  mov    0xc(%ebp),%eax
0817aa4b +0x0ac9:  mov    %eax,0x4(%esp)
0817aa4f +0x0acd:  movl   $0x8,(%esp)
0817aa56 +0x0ad4:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0817aa5b +0x0ad9:  mov    %eax,%edx
0817aa5d +0x0adb:  test   %edx,%edx
0817aa5f +0x0add:  je     0817aa70 <+0xaee>
0817aa61 +0x0adf:  mov    %eax,%ecx
0817aa63 +0x0ae1:  mov    0x10(%ebp),%eax
0817aa66 +0x0ae4:  mov    0x4(%eax),%edx
0817aa69 +0x0ae7:  mov    (%eax),%eax
0817aa6b +0x0ae9:  mov    %eax,(%ecx)
0817aa6d +0x0aeb:  mov    %edx,0x4(%ecx)
0817aa70 +0x0aee:  leave
0817aa71 +0x0aef:  ret
0817aa72 +0x0af0:  push   %ebp
0817aa73 +0x0af1:  mov    %esp,%ebp
0817aa75 +0x0af3:  push   %ebx
0817aa76 +0x0af4:  sub    $0x14,%esp
0817aa79 +0x0af7:  mov    0x8(%ebp),%ebx
0817aa7c +0x0afa:  mov    0xc(%ebp),%eax
0817aa7f +0x0afd:  add    $0x4,%eax
0817aa82 +0x0b00:  mov    %eax,0x4(%esp)
0817aa86 +0x0b04:  mov    %ebx,(%esp)
0817aa89 +0x0b07:  call   0817ae90 <+0xf0e>
0817aa8e +0x0b0c:  mov    %ebx,%eax
0817aa90 +0x0b0e:  add    $0x14,%esp
0817aa93 +0x0b11:  pop    %ebx
0817aa94 +0x0b12:  pop    %ebp
0817aa95 +0x0b13:  ret    $0x4
0817aa98 +0x0b16:  push   %ebp
0817aa99 +0x0b17:  mov    %esp,%ebp
0817aa9b +0x0b19:  push   %esi
0817aa9c +0x0b1a:  push   %ebx
0817aa9d +0x0b1b:  sub    $0x30,%esp
0817aaa0 +0x0b1e:  mov    0x8(%ebp),%eax
0817aaa3 +0x0b21:  mov    0x4(%eax),%edx
0817aaa6 +0x0b24:  mov    0x8(%ebp),%eax
0817aaa9 +0x0b27:  mov    0x8(%eax),%eax
0817aaac +0x0b2a:  cmp    %eax,%edx
0817aaae +0x0b2c:  je     0817ab43 <+0xbc1>
0817aab4 +0x0b32:  mov    0x8(%ebp),%eax
0817aab7 +0x0b35:  mov    0x4(%eax),%eax
0817aaba +0x0b38:  sub    $0x8,%eax
0817aabd +0x0b3b:  mov    %eax,(%esp)
0817aac0 +0x0b3e:  call   0817ae9f <+0xf1d>
0817aac5 +0x0b43:  mov    0x8(%ebp),%edx
0817aac8 +0x0b46:  mov    0x4(%edx),%ecx
0817aacb +0x0b49:  mov    0x8(%ebp),%edx
0817aace +0x0b4c:  mov    %eax,0x8(%esp)
0817aad2 +0x0b50:  mov    %ecx,0x4(%esp)
0817aad6 +0x0b54:  mov    %edx,(%esp)
0817aad9 +0x0b57:  call   0817aea8 <+0xf26>
0817aade +0x0b5c:  mov    0x8(%ebp),%eax
0817aae1 +0x0b5f:  mov    0x4(%eax),%eax
0817aae4 +0x0b62:  lea    0x8(%eax),%edx
0817aae7 +0x0b65:  mov    0x8(%ebp),%eax
0817aaea +0x0b68:  mov    %edx,0x4(%eax)
0817aaed +0x0b6b:  mov    0x8(%ebp),%eax
0817aaf0 +0x0b6e:  mov    0x4(%eax),%eax
0817aaf3 +0x0b71:  lea    -0x8(%eax),%esi
0817aaf6 +0x0b74:  mov    0x8(%ebp),%eax
0817aaf9 +0x0b77:  mov    0x4(%eax),%eax
0817aafc +0x0b7a:  lea    -0x10(%eax),%ebx
0817aaff +0x0b7d:  lea    0xc(%ebp),%eax
0817ab02 +0x0b80:  mov    %eax,(%esp)
0817ab05 +0x0b83:  call   0817aee6 <+0xf64>
0817ab0a +0x0b88:  mov    (%eax),%eax
0817ab0c +0x0b8a:  mov    %esi,0x8(%esp)
0817ab10 +0x0b8e:  mov    %ebx,0x4(%esp)
0817ab14 +0x0b92:  mov    %eax,(%esp)
0817ab17 +0x0b95:  call   0817aeee <+0xf6c>
0817ab1c +0x0b9a:  lea    0xc(%ebp),%eax
0817ab1f +0x0b9d:  mov    %eax,(%esp)
0817ab22 +0x0ba0:  call   0817af2e <+0xfac>
0817ab27 +0x0ba5:  mov    %eax,%ebx
0817ab29 +0x0ba7:  mov    0x10(%ebp),%eax
0817ab2c +0x0baa:  mov    %eax,(%esp)
0817ab2f +0x0bad:  call   0817af26 <+0xfa4>
0817ab34 +0x0bb2:  mov    0x4(%eax),%edx
0817ab37 +0x0bb5:  mov    (%eax),%eax
0817ab39 +0x0bb7:  mov    %eax,(%ebx)
0817ab3b +0x0bb9:  mov    %edx,0x4(%ebx)
0817ab3e +0x0bbc:  jmp    0817ad45 <+0xdc3>
0817ab43 +0x0bc1:  movl   $"vector::_M_insert_aux",0x8(%esp)
0817ab4b +0x0bc9:  movl   $0x1,0x4(%esp)
0817ab53 +0x0bd1:  mov    0x8(%ebp),%eax
0817ab56 +0x0bd4:  mov    %eax,(%esp)
0817ab59 +0x0bd7:  call   0817af38 <+0xfb6>
0817ab5e +0x0bdc:  mov    %eax,-0x18(%ebp)
0817ab61 +0x0bdf:  lea    -0x1c(%ebp),%eax
0817ab64 +0x0be2:  mov    0x8(%ebp),%edx
0817ab67 +0x0be5:  mov    %edx,0x4(%esp)
0817ab6b +0x0be9:  mov    %eax,(%esp)
0817ab6e +0x0bec:  call   0817afde <+0x105c>
0817ab73 +0x0bf1:  sub    $0x4,%esp
0817ab76 +0x0bf4:  lea    -0x1c(%ebp),%eax
0817ab79 +0x0bf7:  mov    %eax,0x4(%esp)
0817ab7d +0x0bfb:  lea    0xc(%ebp),%eax
0817ab80 +0x0bfe:  mov    %eax,(%esp)
0817ab83 +0x0c01:  call   0817b001 <+0x107f>
0817ab88 +0x0c06:  mov    %eax,-0x14(%ebp)
0817ab8b +0x0c09:  mov    0x8(%ebp),%eax
0817ab8e +0x0c0c:  mov    -0x18(%ebp),%edx
0817ab91 +0x0c0f:  mov    %edx,0x4(%esp)
0817ab95 +0x0c13:  mov    %eax,(%esp)
0817ab98 +0x0c16:  call   0817b034 <+0x10b2>
0817ab9d +0x0c1b:  mov    %eax,-0x10(%ebp)
0817aba0 +0x0c1e:  mov    -0x10(%ebp),%eax
0817aba3 +0x0c21:  mov    %eax,-0xc(%ebp)
0817aba6 +0x0c24:  mov    0x10(%ebp),%eax
0817aba9 +0x0c27:  mov    %eax,(%esp)
0817abac +0x0c2a:  call   0817af26 <+0xfa4>
0817abb1 +0x0c2f:  mov    -0x14(%ebp),%edx
0817abb4 +0x0c32:  shl    $0x3,%edx
0817abb7 +0x0c35:  mov    %edx,%ecx
0817abb9 +0x0c37:  add    -0x10(%ebp),%ecx
0817abbc +0x0c3a:  mov    0x8(%ebp),%edx
0817abbf +0x0c3d:  mov    %eax,0x8(%esp)
0817abc3 +0x0c41:  mov    %ecx,0x4(%esp)
0817abc7 +0x0c45:  mov    %edx,(%esp)
0817abca +0x0c48:  call   0817aa42 <+0xac0>
0817abcf +0x0c4d:  movl   $0x0,-0xc(%ebp)
0817abd6 +0x0c54:  mov    0x8(%ebp),%eax
0817abd9 +0x0c57:  mov    %eax,(%esp)
0817abdc +0x0c5a:  call   0817a952 <+0x9d0>
0817abe1 +0x0c5f:  mov    %eax,%ebx
0817abe3 +0x0c61:  lea    0xc(%ebp),%eax
0817abe6 +0x0c64:  mov    %eax,(%esp)
0817abe9 +0x0c67:  call   0817aee6 <+0xf64>
0817abee +0x0c6c:  mov    (%eax),%edx
0817abf0 +0x0c6e:  mov    0x8(%ebp),%eax
0817abf3 +0x0c71:  mov    (%eax),%eax
0817abf5 +0x0c73:  mov    %ebx,0xc(%esp)
0817abf9 +0x0c77:  mov    -0x10(%ebp),%ecx
0817abfc +0x0c7a:  mov    %ecx,0x8(%esp)
0817ac00 +0x0c7e:  mov    %edx,0x4(%esp)
0817ac04 +0x0c82:  mov    %eax,(%esp)
0817ac07 +0x0c85:  call   0817b063 <+0x10e1>
0817ac0c +0x0c8a:  mov    %eax,-0xc(%ebp)
0817ac0f +0x0c8d:  addl   $0x8,-0xc(%ebp)
0817ac13 +0x0c91:  mov    0x8(%ebp),%eax
0817ac16 +0x0c94:  mov    %eax,(%esp)
0817ac19 +0x0c97:  call   0817a952 <+0x9d0>
0817ac1e +0x0c9c:  mov    %eax,%ebx
0817ac20 +0x0c9e:  mov    0x8(%ebp),%eax
0817ac23 +0x0ca1:  mov    0x4(%eax),%esi
0817ac26 +0x0ca4:  lea    0xc(%ebp),%eax
0817ac29 +0x0ca7:  mov    %eax,(%esp)
0817ac2c +0x0caa:  call   0817aee6 <+0xf64>
0817ac31 +0x0caf:  mov    (%eax),%eax
0817ac33 +0x0cb1:  mov    %ebx,0xc(%esp)
0817ac37 +0x0cb5:  mov    -0xc(%ebp),%edx
0817ac3a +0x0cb8:  mov    %edx,0x8(%esp)
0817ac3e +0x0cbc:  mov    %esi,0x4(%esp)
0817ac42 +0x0cc0:  mov    %eax,(%esp)
0817ac45 +0x0cc3:  call   0817b063 <+0x10e1>
0817ac4a +0x0cc8:  mov    %eax,-0xc(%ebp)
0817ac4d +0x0ccb:  mov    0x8(%ebp),%eax
0817ac50 +0x0cce:  mov    %eax,(%esp)
0817ac53 +0x0cd1:  call   0817a952 <+0x9d0>
0817ac58 +0x0cd6:  mov    0x8(%ebp),%edx
0817ac5b +0x0cd9:  mov    0x4(%edx),%ecx
0817ac5e +0x0cdc:  mov    0x8(%ebp),%edx
0817ac61 +0x0cdf:  mov    (%edx),%edx
0817ac63 +0x0ce1:  mov    %eax,0x8(%esp)
0817ac67 +0x0ce5:  mov    %ecx,0x4(%esp)
0817ac6b +0x0ce9:  mov    %edx,(%esp)
0817ac6e +0x0cec:  call   0817a95a <+0x9d8>
0817ac73 +0x0cf1:  mov    0x8(%ebp),%eax
0817ac76 +0x0cf4:  mov    0x8(%eax),%eax
0817ac79 +0x0cf7:  mov    %eax,%edx
0817ac7b +0x0cf9:  mov    0x8(%ebp),%eax
0817ac7e +0x0cfc:  mov    (%eax),%eax
0817ac80 +0x0cfe:  mov    %edx,%ecx
0817ac82 +0x0d00:  sub    %eax,%ecx
0817ac84 +0x0d02:  mov    %ecx,%eax
0817ac86 +0x0d04:  sar    $0x3,%eax
0817ac89 +0x0d07:  mov    %eax,%ecx
0817ac8b +0x0d09:  mov    0x8(%ebp),%eax
0817ac8e +0x0d0c:  mov    (%eax),%edx
0817ac90 +0x0d0e:  mov    0x8(%ebp),%eax
0817ac93 +0x0d11:  mov    %ecx,0x8(%esp)
0817ac97 +0x0d15:  mov    %edx,0x4(%esp)
0817ac9b +0x0d19:  mov    %eax,(%esp)
0817ac9e +0x0d1c:  call   0817ae4e <+0xecc>
0817aca3 +0x0d21:  mov    0x8(%ebp),%eax
0817aca6 +0x0d24:  mov    -0x10(%ebp),%edx
0817aca9 +0x0d27:  mov    %edx,(%eax)
0817acab +0x0d29:  mov    0x8(%ebp),%eax
0817acae +0x0d2c:  mov    -0xc(%ebp),%edx
0817acb1 +0x0d2f:  mov    %edx,0x4(%eax)
0817acb4 +0x0d32:  mov    -0x18(%ebp),%eax
0817acb7 +0x0d35:  shl    $0x3,%eax
0817acba +0x0d38:  mov    %eax,%edx
0817acbc +0x0d3a:  add    -0x10(%ebp),%edx
0817acbf +0x0d3d:  mov    0x8(%ebp),%eax
0817acc2 +0x0d40:  mov    %edx,0x8(%eax)
0817acc5 +0x0d43:  jmp    0817ad45 <+0xdc3>
0817acc7 +0x0d45:  mov    %eax,(%esp)
0817acca +0x0d48:  call   08725ce0 <__cxa_begin_catch>
0817accf +0x0d4d:  cmpl   $0x0,-0xc(%ebp)
0817acd3 +0x0d51:  jne    0817acf1 <+0xd6f>
0817acd5 +0x0d53:  mov    -0x14(%ebp),%eax
0817acd8 +0x0d56:  shl    $0x3,%eax
0817acdb +0x0d59:  mov    %eax,%edx
0817acdd +0x0d5b:  add    -0x10(%ebp),%edx
0817ace0 +0x0d5e:  mov    0x8(%ebp),%eax
0817ace3 +0x0d61:  mov    %edx,0x4(%esp)
0817ace7 +0x0d65:  mov    %eax,(%esp)
0817acea +0x0d68:  call   0817b0bc <+0x113a>
0817acef +0x0d6d:  jmp    0817ad12 <+0xd90>
0817acf1 +0x0d6f:  mov    0x8(%ebp),%eax
0817acf4 +0x0d72:  mov    %eax,(%esp)
0817acf7 +0x0d75:  call   0817a952 <+0x9d0>
0817acfc +0x0d7a:  mov    %eax,0x8(%esp)
0817ad00 +0x0d7e:  mov    -0xc(%ebp),%eax
0817ad03 +0x0d81:  mov    %eax,0x4(%esp)
0817ad07 +0x0d85:  mov    -0x10(%ebp),%eax
0817ad0a +0x0d88:  mov    %eax,(%esp)
0817ad0d +0x0d8b:  call   0817a95a <+0x9d8>
0817ad12 +0x0d90:  mov    0x8(%ebp),%eax
0817ad15 +0x0d93:  mov    -0x18(%ebp),%edx
0817ad18 +0x0d96:  mov    %edx,0x8(%esp)
0817ad1c +0x0d9a:  mov    -0x10(%ebp),%edx
0817ad1f +0x0d9d:  mov    %edx,0x4(%esp)
0817ad23 +0x0da1:  mov    %eax,(%esp)
0817ad26 +0x0da4:  call   0817ae4e <+0xecc>
0817ad2b +0x0da9:  call   08724be0 <__cxa_rethrow>
0817ad30 +0x0dae:  mov    %edx,%ebx
0817ad32 +0x0db0:  mov    %eax,%esi
0817ad34 +0x0db2:  call   08725c30 <__cxa_end_catch>
0817ad39 +0x0db7:  mov    %esi,%eax
0817ad3b +0x0db9:  mov    %ebx,%edx
0817ad3d +0x0dbb:  mov    %eax,(%esp)
0817ad40 +0x0dbe:  call   08ae3750 <_Unwind_Resume>
0817ad45 +0x0dc3:  lea    -0x8(%ebp),%esp
0817ad48 +0x0dc6:  add    $0x0,%esp
0817ad4b +0x0dc9:  pop    %ebx
0817ad4c +0x0dca:  pop    %esi
0817ad4d +0x0dcb:  pop    %ebp
0817ad4e +0x0dcc:  ret
0817ad4f +0x0dcd:  nop
0817ad50 +0x0dce:  push   %ebp
0817ad51 +0x0dcf:  mov    %esp,%ebp
0817ad53 +0x0dd1:  sub    $0x18,%esp
0817ad56 +0x0dd4:  mov    0x8(%ebp),%eax
0817ad59 +0x0dd7:  add    $0x4,%eax
0817ad5c +0x0dda:  mov    %eax,(%esp)
0817ad5f +0x0ddd:  call   0817a6bc <+0x73a>
0817ad64 +0x0de2:  mov    %eax,0x8(%esp)
0817ad68 +0x0de6:  mov    0xc(%ebp),%eax
0817ad6b +0x0de9:  mov    %eax,0x4(%esp)
0817ad6f +0x0ded:  mov    0x8(%ebp),%eax
0817ad72 +0x0df0:  mov    %eax,(%esp)
0817ad75 +0x0df3:  call   0817b0d0 <+0x114e>
0817ad7a +0x0df8:  leave
0817ad7b +0x0df9:  ret
0817ad7c +0x0dfa:  push   %ebp
0817ad7d +0x0dfb:  mov    %esp,%ebp
0817ad7f +0x0dfd:  mov    0xc(%ebp),%eax
0817ad82 +0x0e00:  mov    (%eax),%edx
0817ad84 +0x0e02:  mov    0x10(%ebp),%eax
0817ad87 +0x0e05:  mov    (%eax),%eax
0817ad89 +0x0e07:  cmp    %eax,%edx
0817ad8b +0x0e09:  sete   %al
0817ad8e +0x0e0c:  pop    %ebp
0817ad8f +0x0e0d:  ret
0817ad90 +0x0e0e:  push   %ebp
0817ad91 +0x0e0f:  mov    %esp,%ebp
0817ad93 +0x0e11:  mov    0xc(%ebp),%eax
0817ad96 +0x0e14:  pop    %ebp
0817ad97 +0x0e15:  ret
0817ad98 +0x0e16:  push   %ebp
0817ad99 +0x0e17:  mov    %esp,%ebp
0817ad9b +0x0e19:  mov    0x8(%ebp),%eax
0817ad9e +0x0e1c:  mov    0xc(%ebp),%edx
0817ada1 +0x0e1f:  mov    %edx,(%eax)
0817ada3 +0x0e21:  mov    0x8(%ebp),%eax
0817ada6 +0x0e24:  mov    0x10(%ebp),%edx
0817ada9 +0x0e27:  mov    %edx,0x4(%eax)
0817adac +0x0e2a:  pop    %ebp
0817adad +0x0e2b:  ret
0817adae +0x0e2c:  push   %ebp
0817adaf +0x0e2d:  mov    %esp,%ebp
0817adb1 +0x0e2f:  sub    $0x18,%esp
0817adb4 +0x0e32:  mov    0x8(%ebp),%eax
0817adb7 +0x0e35:  add    $0x4,%eax
0817adba +0x0e38:  mov    %eax,(%esp)
0817adbd +0x0e3b:  call   0817b0fa <+0x1178>
0817adc2 +0x0e40:  mov    %eax,0x8(%esp)
0817adc6 +0x0e44:  mov    0xc(%ebp),%eax
0817adc9 +0x0e47:  mov    %eax,0x4(%esp)
0817adcd +0x0e4b:  mov    0x8(%ebp),%eax
0817add0 +0x0e4e:  mov    %eax,(%esp)
0817add3 +0x0e51:  call   0817b116 <+0x1194>
0817add8 +0x0e56:  leave
0817add9 +0x0e57:  ret
0817adda +0x0e58:  push   %ebp
0817addb +0x0e59:  mov    %esp,%ebp
0817addd +0x0e5b:  mov    0x8(%ebp),%eax
0817ade0 +0x0e5e:  mov    (%eax),%eax
0817ade2 +0x0e60:  mov    0xc(%ebp),%edx
0817ade5 +0x0e63:  shl    $0x2,%edx
0817ade8 +0x0e66:  add    %edx,%eax
0817adea +0x0e68:  pop    %ebp
0817adeb +0x0e69:  ret
0817adec +0x0e6a:  push   %ebp
0817aded +0x0e6b:  mov    %esp,%ebp
0817adef +0x0e6d:  mov    0xc(%ebp),%eax
0817adf2 +0x0e70:  pop    %ebp
0817adf3 +0x0e71:  ret
0817adf4 +0x0e72:  push   %ebp
0817adf5 +0x0e73:  mov    %esp,%ebp
0817adf7 +0x0e75:  mov    0x8(%ebp),%eax
0817adfa +0x0e78:  mov    0xc(%ebp),%edx
0817adfd +0x0e7b:  mov    %edx,(%eax)
0817adff +0x0e7d:  mov    0x8(%ebp),%eax
0817ae02 +0x0e80:  mov    0x10(%ebp),%edx
0817ae05 +0x0e83:  mov    %edx,0x4(%eax)
0817ae08 +0x0e86:  pop    %ebp
0817ae09 +0x0e87:  ret
0817ae0a +0x0e88:  push   %ebp
0817ae0b +0x0e89:  mov    %esp,%ebp
0817ae0d +0x0e8b:  sub    $0x18,%esp
0817ae10 +0x0e8e:  mov    0x8(%ebp),%eax
0817ae13 +0x0e91:  mov    %eax,(%esp)
0817ae16 +0x0e94:  call   0817b140 <+0x11be>
0817ae1b +0x0e99:  mov    0x8(%ebp),%eax
0817ae1e +0x0e9c:  movl   $0x0,(%eax)
0817ae24 +0x0ea2:  mov    0x8(%ebp),%eax
0817ae27 +0x0ea5:  movl   $0x0,0x4(%eax)
0817ae2e +0x0eac:  mov    0x8(%ebp),%eax
0817ae31 +0x0eaf:  movl   $0x0,0x8(%eax)
0817ae38 +0x0eb6:  leave
0817ae39 +0x0eb7:  ret
0817ae3a +0x0eb8:  push   %ebp
0817ae3b +0x0eb9:  mov    %esp,%ebp
0817ae3d +0x0ebb:  sub    $0x18,%esp
0817ae40 +0x0ebe:  mov    0x8(%ebp),%eax
0817ae43 +0x0ec1:  mov    %eax,(%esp)
0817ae46 +0x0ec4:  call   0817b154 <+0x11d2>
0817ae4b +0x0ec9:  leave
0817ae4c +0x0eca:  ret
0817ae4d +0x0ecb:  nop
0817ae4e +0x0ecc:  push   %ebp
0817ae4f +0x0ecd:  mov    %esp,%ebp
0817ae51 +0x0ecf:  sub    $0x18,%esp
0817ae54 +0x0ed2:  cmpl   $0x0,0xc(%ebp)
0817ae58 +0x0ed6:  je     0817ae73 <+0xef1>
0817ae5a +0x0ed8:  mov    0x8(%ebp),%eax
0817ae5d +0x0edb:  mov    0x10(%ebp),%edx
0817ae60 +0x0ede:  mov    %edx,0x8(%esp)
0817ae64 +0x0ee2:  mov    0xc(%ebp),%edx
0817ae67 +0x0ee5:  mov    %edx,0x4(%esp)
0817ae6b +0x0ee9:  mov    %eax,(%esp)
0817ae6e +0x0eec:  call   0817b15a <+0x11d8>
0817ae73 +0x0ef1:  leave
0817ae74 +0x0ef2:  ret
0817ae75 +0x0ef3:  push   %ebp
0817ae76 +0x0ef4:  mov    %esp,%ebp
0817ae78 +0x0ef6:  sub    $0x18,%esp
0817ae7b +0x0ef9:  mov    0xc(%ebp),%eax
0817ae7e +0x0efc:  mov    %eax,0x4(%esp)
0817ae82 +0x0f00:  mov    0x8(%ebp),%eax
0817ae85 +0x0f03:  mov    %eax,(%esp)
0817ae88 +0x0f06:  call   0817b16d <+0x11eb>
0817ae8d +0x0f0b:  leave
0817ae8e +0x0f0c:  ret
0817ae8f +0x0f0d:  nop
0817ae90 +0x0f0e:  push   %ebp
0817ae91 +0x0f0f:  mov    %esp,%ebp
0817ae93 +0x0f11:  mov    0xc(%ebp),%eax
0817ae96 +0x0f14:  mov    (%eax),%edx
0817ae98 +0x0f16:  mov    0x8(%ebp),%eax
0817ae9b +0x0f19:  mov    %edx,(%eax)
0817ae9d +0x0f1b:  pop    %ebp
0817ae9e +0x0f1c:  ret
0817ae9f +0x0f1d:  push   %ebp
0817aea0 +0x0f1e:  mov    %esp,%ebp
0817aea2 +0x0f20:  mov    0x8(%ebp),%eax
0817aea5 +0x0f23:  pop    %ebp
0817aea6 +0x0f24:  ret
0817aea7 +0x0f25:  nop
0817aea8 +0x0f26:  push   %ebp
0817aea9 +0x0f27:  mov    %esp,%ebp
0817aeab +0x0f29:  push   %esi
0817aeac +0x0f2a:  push   %ebx
0817aead +0x0f2b:  sub    $0x10,%esp
0817aeb0 +0x0f2e:  mov    0x10(%ebp),%eax
0817aeb3 +0x0f31:  mov    %eax,(%esp)
0817aeb6 +0x0f34:  call   0817b172 <+0x11f0>
0817aebb +0x0f39:  mov    (%eax),%ebx
0817aebd +0x0f3b:  mov    0x4(%eax),%esi
0817aec0 +0x0f3e:  mov    0xc(%ebp),%eax
0817aec3 +0x0f41:  mov    %eax,0x4(%esp)
0817aec7 +0x0f45:  movl   $0x8,(%esp)
0817aece +0x0f4c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0817aed3 +0x0f51:  mov    %eax,%edx
0817aed5 +0x0f53:  test   %edx,%edx
0817aed7 +0x0f55:  je     0817aede <+0xf5c>
0817aed9 +0x0f57:  mov    %ebx,(%eax)
0817aedb +0x0f59:  mov    %esi,0x4(%eax)
0817aede +0x0f5c:  add    $0x10,%esp
0817aee1 +0x0f5f:  pop    %ebx
0817aee2 +0x0f60:  pop    %esi
0817aee3 +0x0f61:  pop    %ebp
0817aee4 +0x0f62:  ret
0817aee5 +0x0f63:  nop
0817aee6 +0x0f64:  push   %ebp
0817aee7 +0x0f65:  mov    %esp,%ebp
0817aee9 +0x0f67:  mov    0x8(%ebp),%eax
0817aeec +0x0f6a:  pop    %ebp
0817aeed +0x0f6b:  ret
0817aeee +0x0f6c:  push   %ebp
0817aeef +0x0f6d:  mov    %esp,%ebp
0817aef1 +0x0f6f:  push   %ebx
0817aef2 +0x0f70:  sub    $0x14,%esp
0817aef5 +0x0f73:  mov    0xc(%ebp),%eax
0817aef8 +0x0f76:  mov    %eax,(%esp)
0817aefb +0x0f79:  call   0817b17a <+0x11f8>
0817af00 +0x0f7e:  mov    %eax,%ebx
0817af02 +0x0f80:  mov    0x8(%ebp),%eax
0817af05 +0x0f83:  mov    %eax,(%esp)
0817af08 +0x0f86:  call   0817b17a <+0x11f8>
0817af0d +0x0f8b:  mov    0x10(%ebp),%edx
0817af10 +0x0f8e:  mov    %edx,0x8(%esp)
0817af14 +0x0f92:  mov    %ebx,0x4(%esp)
0817af18 +0x0f96:  mov    %eax,(%esp)
0817af1b +0x0f99:  call   0817b182 <+0x1200>
0817af20 +0x0f9e:  add    $0x14,%esp
0817af23 +0x0fa1:  pop    %ebx
0817af24 +0x0fa2:  pop    %ebp
0817af25 +0x0fa3:  ret
0817af26 +0x0fa4:  push   %ebp
0817af27 +0x0fa5:  mov    %esp,%ebp
0817af29 +0x0fa7:  mov    0x8(%ebp),%eax
0817af2c +0x0faa:  pop    %ebp
0817af2d +0x0fab:  ret
0817af2e +0x0fac:  push   %ebp
0817af2f +0x0fad:  mov    %esp,%ebp
0817af31 +0x0faf:  mov    0x8(%ebp),%eax
0817af34 +0x0fb2:  mov    (%eax),%eax
0817af36 +0x0fb4:  pop    %ebp
0817af37 +0x0fb5:  ret
0817af38 +0x0fb6:  push   %ebp
0817af39 +0x0fb7:  mov    %esp,%ebp
0817af3b +0x0fb9:  push   %ebx
0817af3c +0x0fba:  sub    $0x24,%esp
0817af3f +0x0fbd:  mov    0x8(%ebp),%eax
0817af42 +0x0fc0:  mov    %eax,(%esp)
0817af45 +0x0fc3:  call   0817b1e2 <+0x1260>
0817af4a +0x0fc8:  mov    %eax,%ebx
0817af4c +0x0fca:  mov    0x8(%ebp),%eax
0817af4f +0x0fcd:  mov    %eax,(%esp)
0817af52 +0x0fd0:  call   0817b1c6 <+0x1244>
0817af57 +0x0fd5:  mov    %ebx,%edx
0817af59 +0x0fd7:  sub    %eax,%edx
0817af5b +0x0fd9:  mov    0xc(%ebp),%eax
0817af5e +0x0fdc:  cmp    %eax,%edx
0817af60 +0x0fde:  setb   %al
0817af63 +0x0fe1:  test   %al,%al
0817af65 +0x0fe3:  je     0817af72 <+0xff0>
0817af67 +0x0fe5:  mov    0x10(%ebp),%eax
0817af6a +0x0fe8:  mov    %eax,(%esp)
0817af6d +0x0feb:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0817af72 +0x0ff0:  mov    0x8(%ebp),%eax
0817af75 +0x0ff3:  mov    %eax,(%esp)
0817af78 +0x0ff6:  call   0817b1c6 <+0x1244>
0817af7d +0x0ffb:  mov    %eax,%ebx
0817af7f +0x0ffd:  mov    0x8(%ebp),%eax
0817af82 +0x1000:  mov    %eax,(%esp)
0817af85 +0x1003:  call   0817b1c6 <+0x1244>
0817af8a +0x1008:  mov    %eax,-0x10(%ebp)
0817af8d +0x100b:  lea    0xc(%ebp),%eax
0817af90 +0x100e:  mov    %eax,0x4(%esp)
0817af94 +0x1012:  lea    -0x10(%ebp),%eax
0817af97 +0x1015:  mov    %eax,(%esp)
0817af9a +0x1018:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0817af9f +0x101d:  mov    (%eax),%eax
0817afa1 +0x101f:  lea    (%ebx,%eax,1),%eax
0817afa4 +0x1022:  mov    %eax,-0xc(%ebp)
0817afa7 +0x1025:  mov    0x8(%ebp),%eax
0817afaa +0x1028:  mov    %eax,(%esp)
0817afad +0x102b:  call   0817b1c6 <+0x1244>
0817afb2 +0x1030:  cmp    -0xc(%ebp),%eax
0817afb5 +0x1033:  ja     0817afc7 <+0x1045>
0817afb7 +0x1035:  mov    0x8(%ebp),%eax
0817afba +0x1038:  mov    %eax,(%esp)
0817afbd +0x103b:  call   0817b1e2 <+0x1260>
0817afc2 +0x1040:  cmp    -0xc(%ebp),%eax
0817afc5 +0x1043:  jae    0817afd4 <+0x1052>
0817afc7 +0x1045:  mov    0x8(%ebp),%eax
0817afca +0x1048:  mov    %eax,(%esp)
0817afcd +0x104b:  call   0817b1e2 <+0x1260>
0817afd2 +0x1050:  jmp    0817afd7 <+0x1055>
0817afd4 +0x1052:  mov    -0xc(%ebp),%eax
0817afd7 +0x1055:  add    $0x24,%esp
0817afda +0x1058:  pop    %ebx
0817afdb +0x1059:  pop    %ebp
0817afdc +0x105a:  ret
0817afdd +0x105b:  nop
0817afde +0x105c:  push   %ebp
0817afdf +0x105d:  mov    %esp,%ebp
0817afe1 +0x105f:  push   %ebx
0817afe2 +0x1060:  sub    $0x14,%esp
0817afe5 +0x1063:  mov    0x8(%ebp),%ebx
0817afe8 +0x1066:  mov    0xc(%ebp),%eax
0817afeb +0x1069:  mov    %eax,0x4(%esp)
0817afef +0x106d:  mov    %ebx,(%esp)
0817aff2 +0x1070:  call   0817ae90 <+0xf0e>
0817aff7 +0x1075:  mov    %ebx,%eax
0817aff9 +0x1077:  add    $0x14,%esp
0817affc +0x107a:  pop    %ebx
0817affd +0x107b:  pop    %ebp
0817affe +0x107c:  ret    $0x4
0817b001 +0x107f:  push   %ebp
0817b002 +0x1080:  mov    %esp,%ebp
0817b004 +0x1082:  push   %ebx
0817b005 +0x1083:  sub    $0x14,%esp
0817b008 +0x1086:  mov    0x8(%ebp),%eax
0817b00b +0x1089:  mov    %eax,(%esp)
0817b00e +0x108c:  call   0817aee6 <+0xf64>
0817b013 +0x1091:  mov    (%eax),%eax
0817b015 +0x1093:  mov    %eax,%ebx
0817b017 +0x1095:  mov    0xc(%ebp),%eax
0817b01a +0x1098:  mov    %eax,(%esp)
0817b01d +0x109b:  call   0817aee6 <+0xf64>
0817b022 +0x10a0:  mov    (%eax),%eax
0817b024 +0x10a2:  mov    %ebx,%edx
0817b026 +0x10a4:  sub    %eax,%edx
0817b028 +0x10a6:  mov    %edx,%eax
0817b02a +0x10a8:  sar    $0x3,%eax
0817b02d +0x10ab:  add    $0x14,%esp
0817b030 +0x10ae:  pop    %ebx
0817b031 +0x10af:  pop    %ebp
0817b032 +0x10b0:  ret
0817b033 +0x10b1:  nop
0817b034 +0x10b2:  push   %ebp
0817b035 +0x10b3:  mov    %esp,%ebp
0817b037 +0x10b5:  sub    $0x18,%esp
0817b03a +0x10b8:  cmpl   $0x0,0xc(%ebp)
0817b03e +0x10bc:  je     0817b05c <+0x10da>
0817b040 +0x10be:  mov    0x8(%ebp),%eax
0817b043 +0x10c1:  movl   $0x0,0x8(%esp)
0817b04b +0x10c9:  mov    0xc(%ebp),%edx
0817b04e +0x10cc:  mov    %edx,0x4(%esp)
0817b052 +0x10d0:  mov    %eax,(%esp)
0817b055 +0x10d3:  call   0817b1fe <+0x127c>
0817b05a +0x10d8:  jmp    0817b061 <+0x10df>
0817b05c +0x10da:  mov    $0x0,%eax
0817b061 +0x10df:  leave
0817b062 +0x10e0:  ret
0817b063 +0x10e1:  push   %ebp
0817b064 +0x10e2:  mov    %esp,%ebp
0817b066 +0x10e4:  sub    $0x28,%esp
0817b069 +0x10e7:  lea    -0x10(%ebp),%eax
0817b06c +0x10ea:  lea    0xc(%ebp),%edx
0817b06f +0x10ed:  mov    %edx,0x4(%esp)
0817b073 +0x10f1:  mov    %eax,(%esp)
0817b076 +0x10f4:  call   0817b236 <+0x12b4>
0817b07b +0x10f9:  sub    $0x4,%esp
0817b07e +0x10fc:  lea    -0xc(%ebp),%eax
0817b081 +0x10ff:  lea    0x8(%ebp),%edx
0817b084 +0x1102:  mov    %edx,0x4(%esp)
0817b088 +0x1106:  mov    %eax,(%esp)
0817b08b +0x1109:  call   0817b236 <+0x12b4>
0817b090 +0x110e:  sub    $0x4,%esp
0817b093 +0x1111:  mov    0x14(%ebp),%eax
0817b096 +0x1114:  mov    %eax,0xc(%esp)
0817b09a +0x1118:  mov    0x10(%ebp),%eax
0817b09d +0x111b:  mov    %eax,0x8(%esp)
0817b0a1 +0x111f:  mov    -0x10(%ebp),%eax
0817b0a4 +0x1122:  mov    %eax,0x4(%esp)
0817b0a8 +0x1126:  mov    -0xc(%ebp),%eax
0817b0ab +0x1129:  mov    %eax,(%esp)
0817b0ae +0x112c:  call   0817b25b <+0x12d9>
0817b0b3 +0x1131:  leave
0817b0b4 +0x1132:  ret
0817b0b5 +0x1133:  nop
0817b0b6 +0x1134:  push   %ebp
0817b0b7 +0x1135:  mov    %esp,%ebp
0817b0b9 +0x1137:  pop    %ebp
0817b0ba +0x1138:  ret
0817b0bb +0x1139:  nop
0817b0bc +0x113a:  push   %ebp
0817b0bd +0x113b:  mov    %esp,%ebp
0817b0bf +0x113d:  sub    $0x18,%esp
0817b0c2 +0x1140:  mov    0xc(%ebp),%eax
0817b0c5 +0x1143:  mov    %eax,(%esp)
0817b0c8 +0x1146:  call   0817b0b6 <+0x1134>
0817b0cd +0x114b:  leave
0817b0ce +0x114c:  ret
0817b0cf +0x114d:  nop
0817b0d0 +0x114e:  push   %ebp
0817b0d1 +0x114f:  mov    %esp,%ebp
0817b0d3 +0x1151:  sub    $0x18,%esp
0817b0d6 +0x1154:  mov    0xc(%ebp),%eax
0817b0d9 +0x1157:  mov    (%eax),%eax
0817b0db +0x1159:  mov    0x8(%ebp),%edx
0817b0de +0x115c:  add    $0x1,%edx
0817b0e1 +0x115f:  mov    %eax,0x4(%esp)
0817b0e5 +0x1163:  mov    %edx,(%esp)
0817b0e8 +0x1166:  call   08179f9e <+0x1c>
0817b0ed +0x116b:  mov    $0x0,%edx
0817b0f2 +0x1170:  divl   0x10(%ebp)
0817b0f5 +0x1173:  mov    %edx,%eax
0817b0f7 +0x1175:  leave
0817b0f8 +0x1176:  ret
0817b0f9 +0x1177:  nop
0817b0fa +0x1178:  push   %ebp
0817b0fb +0x1179:  mov    %esp,%ebp
0817b0fd +0x117b:  mov    0x8(%ebp),%eax
0817b100 +0x117e:  mov    0x4(%eax),%eax
0817b103 +0x1181:  mov    %eax,%edx
0817b105 +0x1183:  mov    0x8(%ebp),%eax
0817b108 +0x1186:  mov    (%eax),%eax
0817b10a +0x1188:  mov    %edx,%ecx
0817b10c +0x118a:  sub    %eax,%ecx
0817b10e +0x118c:  mov    %ecx,%eax
0817b110 +0x118e:  sar    $0x2,%eax
0817b113 +0x1191:  pop    %ebp
0817b114 +0x1192:  ret
0817b115 +0x1193:  nop
0817b116 +0x1194:  push   %ebp
0817b117 +0x1195:  mov    %esp,%ebp
0817b119 +0x1197:  sub    $0x18,%esp
0817b11c +0x119a:  mov    0xc(%ebp),%eax
0817b11f +0x119d:  mov    (%eax),%eax
0817b121 +0x119f:  mov    0x8(%ebp),%edx
0817b124 +0x11a2:  add    $0x1,%edx
0817b127 +0x11a5:  mov    %eax,0x4(%esp)
0817b12b +0x11a9:  mov    %edx,(%esp)
0817b12e +0x11ac:  call   08179f9e <+0x1c>
0817b133 +0x11b1:  mov    $0x0,%edx
0817b138 +0x11b6:  divl   0x10(%ebp)
0817b13b +0x11b9:  mov    %edx,%eax
0817b13d +0x11bb:  leave
0817b13e +0x11bc:  ret
0817b13f +0x11bd:  nop
0817b140 +0x11be:  push   %ebp
0817b141 +0x11bf:  mov    %esp,%ebp
0817b143 +0x11c1:  sub    $0x18,%esp
0817b146 +0x11c4:  mov    0x8(%ebp),%eax
0817b149 +0x11c7:  mov    %eax,(%esp)
0817b14c +0x11ca:  call   0817b27c <+0x12fa>
0817b151 +0x11cf:  leave
0817b152 +0x11d0:  ret
0817b153 +0x11d1:  nop
0817b154 +0x11d2:  push   %ebp
0817b155 +0x11d3:  mov    %esp,%ebp
0817b157 +0x11d5:  pop    %ebp
0817b158 +0x11d6:  ret
0817b159 +0x11d7:  nop
0817b15a +0x11d8:  push   %ebp
0817b15b +0x11d9:  mov    %esp,%ebp
0817b15d +0x11db:  sub    $0x18,%esp
0817b160 +0x11de:  mov    0xc(%ebp),%eax
0817b163 +0x11e1:  mov    %eax,(%esp)
0817b166 +0x11e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0817b16b +0x11e9:  leave
0817b16c +0x11ea:  ret
0817b16d +0x11eb:  push   %ebp
0817b16e +0x11ec:  mov    %esp,%ebp
0817b170 +0x11ee:  pop    %ebp
0817b171 +0x11ef:  ret
0817b172 +0x11f0:  push   %ebp
0817b173 +0x11f1:  mov    %esp,%ebp
0817b175 +0x11f3:  mov    0x8(%ebp),%eax
0817b178 +0x11f6:  pop    %ebp
0817b179 +0x11f7:  ret
0817b17a +0x11f8:  push   %ebp
0817b17b +0x11f9:  mov    %esp,%ebp
0817b17d +0x11fb:  mov    0x8(%ebp),%eax
0817b180 +0x11fe:  pop    %ebp
0817b181 +0x11ff:  ret
0817b182 +0x1200:  push   %ebp
0817b183 +0x1201:  mov    %esp,%ebp
0817b185 +0x1203:  push   %esi
0817b186 +0x1204:  push   %ebx
0817b187 +0x1205:  sub    $0x10,%esp
0817b18a +0x1208:  mov    0x10(%ebp),%eax
0817b18d +0x120b:  mov    %eax,(%esp)
0817b190 +0x120e:  call   0817b281 <+0x12ff>
0817b195 +0x1213:  mov    %eax,%esi
0817b197 +0x1215:  mov    0xc(%ebp),%eax
0817b19a +0x1218:  mov    %eax,(%esp)
0817b19d +0x121b:  call   0817b281 <+0x12ff>
0817b1a2 +0x1220:  mov    %eax,%ebx
0817b1a4 +0x1222:  mov    0x8(%ebp),%eax
0817b1a7 +0x1225:  mov    %eax,(%esp)
0817b1aa +0x1228:  call   0817b281 <+0x12ff>
0817b1af +0x122d:  mov    %esi,0x8(%esp)
0817b1b3 +0x1231:  mov    %ebx,0x4(%esp)
0817b1b7 +0x1235:  mov    %eax,(%esp)
0817b1ba +0x1238:  call   0817b289 <+0x1307>
0817b1bf +0x123d:  add    $0x10,%esp
0817b1c2 +0x1240:  pop    %ebx
0817b1c3 +0x1241:  pop    %esi
0817b1c4 +0x1242:  pop    %ebp
0817b1c5 +0x1243:  ret
0817b1c6 +0x1244:  push   %ebp
0817b1c7 +0x1245:  mov    %esp,%ebp
0817b1c9 +0x1247:  mov    0x8(%ebp),%eax
0817b1cc +0x124a:  mov    0x4(%eax),%eax
0817b1cf +0x124d:  mov    %eax,%edx
0817b1d1 +0x124f:  mov    0x8(%ebp),%eax
0817b1d4 +0x1252:  mov    (%eax),%eax
0817b1d6 +0x1254:  mov    %edx,%ecx
0817b1d8 +0x1256:  sub    %eax,%ecx
0817b1da +0x1258:  mov    %ecx,%eax
0817b1dc +0x125a:  sar    $0x3,%eax
0817b1df +0x125d:  pop    %ebp
0817b1e0 +0x125e:  ret
0817b1e1 +0x125f:  nop
0817b1e2 +0x1260:  push   %ebp
0817b1e3 +0x1261:  mov    %esp,%ebp
0817b1e5 +0x1263:  sub    $0x18,%esp
0817b1e8 +0x1266:  mov    0x8(%ebp),%eax
0817b1eb +0x1269:  mov    %eax,(%esp)
0817b1ee +0x126c:  call   0817b2ae <+0x132c>
0817b1f3 +0x1271:  mov    %eax,(%esp)
0817b1f6 +0x1274:  call   0817b2b6 <+0x1334>
0817b1fb +0x1279:  leave
0817b1fc +0x127a:  ret
0817b1fd +0x127b:  nop
0817b1fe +0x127c:  push   %ebp
0817b1ff +0x127d:  mov    %esp,%ebp
0817b201 +0x127f:  sub    $0x18,%esp
0817b204 +0x1282:  mov    0x8(%ebp),%eax
0817b207 +0x1285:  mov    %eax,(%esp)
0817b20a +0x1288:  call   0817b2b6 <+0x1334>
0817b20f +0x128d:  cmp    0xc(%ebp),%eax
0817b212 +0x1290:  setb   %al
0817b215 +0x1293:  movzbl %al,%eax
0817b218 +0x1296:  test   %eax,%eax
0817b21a +0x1298:  setne  %al
0817b21d +0x129b:  test   %al,%al
0817b21f +0x129d:  je     0817b226 <+0x12a4>
0817b221 +0x129f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0817b226 +0x12a4:  mov    0xc(%ebp),%eax
0817b229 +0x12a7:  shl    $0x3,%eax
0817b22c +0x12aa:  mov    %eax,(%esp)
0817b22f +0x12ad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0817b234 +0x12b2:  leave
0817b235 +0x12b3:  ret
0817b236 +0x12b4:  push   %ebp
0817b237 +0x12b5:  mov    %esp,%ebp
0817b239 +0x12b7:  push   %ebx
0817b23a +0x12b8:  sub    $0x14,%esp
0817b23d +0x12bb:  mov    0x8(%ebp),%ebx
0817b240 +0x12be:  mov    0xc(%ebp),%eax
0817b243 +0x12c1:  mov    (%eax),%eax
0817b245 +0x12c3:  mov    %eax,0x4(%esp)
0817b249 +0x12c7:  mov    %ebx,(%esp)
0817b24c +0x12ca:  call   0817b2c0 <+0x133e>
0817b251 +0x12cf:  mov    %ebx,%eax
0817b253 +0x12d1:  add    $0x14,%esp
0817b256 +0x12d4:  pop    %ebx
0817b257 +0x12d5:  pop    %ebp
0817b258 +0x12d6:  ret    $0x4
0817b25b +0x12d9:  push   %ebp
0817b25c +0x12da:  mov    %esp,%ebp
0817b25e +0x12dc:  sub    $0x18,%esp
0817b261 +0x12df:  mov    0x10(%ebp),%eax
0817b264 +0x12e2:  mov    %eax,0x8(%esp)
0817b268 +0x12e6:  mov    0xc(%ebp),%eax
0817b26b +0x12e9:  mov    %eax,0x4(%esp)
0817b26f +0x12ed:  mov    0x8(%ebp),%eax
0817b272 +0x12f0:  mov    %eax,(%esp)
0817b275 +0x12f3:  call   0817b2cd <+0x134b>
0817b27a +0x12f8:  leave
0817b27b +0x12f9:  ret
0817b27c +0x12fa:  push   %ebp
0817b27d +0x12fb:  mov    %esp,%ebp
0817b27f +0x12fd:  pop    %ebp
0817b280 +0x12fe:  ret
0817b281 +0x12ff:  push   %ebp
0817b282 +0x1300:  mov    %esp,%ebp
0817b284 +0x1302:  mov    0x8(%ebp),%eax
0817b287 +0x1305:  pop    %ebp
0817b288 +0x1306:  ret
0817b289 +0x1307:  push   %ebp
0817b28a +0x1308:  mov    %esp,%ebp
0817b28c +0x130a:  sub    $0x28,%esp
0817b28f +0x130d:  movb   $0x1,-0x9(%ebp)
0817b293 +0x1311:  mov    0x10(%ebp),%eax
0817b296 +0x1314:  mov    %eax,0x8(%esp)
0817b29a +0x1318:  mov    0xc(%ebp),%eax
0817b29d +0x131b:  mov    %eax,0x4(%esp)
0817b2a1 +0x131f:  mov    0x8(%ebp),%eax
0817b2a4 +0x1322:  mov    %eax,(%esp)
0817b2a7 +0x1325:  call   0817b2ee <+0x136c>
0817b2ac +0x132a:  leave
0817b2ad +0x132b:  ret
0817b2ae +0x132c:  push   %ebp
0817b2af +0x132d:  mov    %esp,%ebp
0817b2b1 +0x132f:  mov    0x8(%ebp),%eax
0817b2b4 +0x1332:  pop    %ebp
0817b2b5 +0x1333:  ret
0817b2b6 +0x1334:  push   %ebp
0817b2b7 +0x1335:  mov    %esp,%ebp
0817b2b9 +0x1337:  mov    $0x1fffffff,%eax
0817b2be +0x133c:  pop    %ebp
0817b2bf +0x133d:  ret
0817b2c0 +0x133e:  push   %ebp
0817b2c1 +0x133f:  mov    %esp,%ebp
0817b2c3 +0x1341:  mov    0x8(%ebp),%eax
0817b2c6 +0x1344:  mov    0xc(%ebp),%edx
0817b2c9 +0x1347:  mov    %edx,(%eax)
0817b2cb +0x1349:  pop    %ebp
0817b2cc +0x134a:  ret
0817b2cd +0x134b:  push   %ebp
0817b2ce +0x134c:  mov    %esp,%ebp
0817b2d0 +0x134e:  sub    $0x18,%esp
0817b2d3 +0x1351:  mov    0x10(%ebp),%eax
0817b2d6 +0x1354:  mov    %eax,0x8(%esp)
0817b2da +0x1358:  mov    0xc(%ebp),%eax
0817b2dd +0x135b:  mov    %eax,0x4(%esp)
0817b2e1 +0x135f:  mov    0x8(%ebp),%eax
0817b2e4 +0x1362:  mov    %eax,(%esp)
0817b2e7 +0x1365:  call   0817b33b <+0x13b9>
0817b2ec +0x136a:  leave
0817b2ed +0x136b:  ret
0817b2ee +0x136c:  push   %ebp
0817b2ef +0x136d:  mov    %esp,%ebp
0817b2f1 +0x136f:  sub    $0x28,%esp
0817b2f4 +0x1372:  mov    0xc(%ebp),%edx
0817b2f7 +0x1375:  mov    0x8(%ebp),%eax
0817b2fa +0x1378:  mov    %edx,%ecx
0817b2fc +0x137a:  sub    %eax,%ecx
0817b2fe +0x137c:  mov    %ecx,%eax
0817b300 +0x137e:  sar    $0x3,%eax
0817b303 +0x1381:  mov    %eax,-0xc(%ebp)
0817b306 +0x1384:  mov    -0xc(%ebp),%eax
0817b309 +0x1387:  lea    0x0(,%eax,8),%edx
0817b310 +0x138e:  mov    -0xc(%ebp),%eax
0817b313 +0x1391:  shl    $0x3,%eax
0817b316 +0x1394:  neg    %eax
0817b318 +0x1396:  add    0x10(%ebp),%eax
0817b31b +0x1399:  mov    %edx,0x8(%esp)
0817b31f +0x139d:  mov    0x8(%ebp),%edx
0817b322 +0x13a0:  mov    %edx,0x4(%esp)
0817b326 +0x13a4:  mov    %eax,(%esp)
0817b329 +0x13a7:  call   0807d880 <_init+0x178>
0817b32e +0x13ac:  mov    -0xc(%ebp),%eax
0817b331 +0x13af:  shl    $0x3,%eax
0817b334 +0x13b2:  neg    %eax
0817b336 +0x13b4:  add    0x10(%ebp),%eax
0817b339 +0x13b7:  leave
0817b33a +0x13b8:  ret
0817b33b +0x13b9:  push   %ebp
0817b33c +0x13ba:  mov    %esp,%ebp
0817b33e +0x13bc:  sub    $0x18,%esp
0817b341 +0x13bf:  mov    0x10(%ebp),%eax
0817b344 +0x13c2:  mov    %eax,0x8(%esp)
0817b348 +0x13c6:  mov    0xc(%ebp),%eax
0817b34b +0x13c9:  mov    %eax,0x4(%esp)
0817b34f +0x13cd:  mov    0x8(%ebp),%eax
0817b352 +0x13d0:  mov    %eax,(%esp)
0817b355 +0x13d3:  call   0817b35c <+0x13da>
0817b35a +0x13d8:  leave
0817b35b +0x13d9:  ret
0817b35c +0x13da:  push   %ebp
0817b35d +0x13db:  mov    %esp,%ebp
0817b35f +0x13dd:  push   %ebx
0817b360 +0x13de:  sub    $0x14,%esp
0817b363 +0x13e1:  mov    0xc(%ebp),%eax
0817b366 +0x13e4:  mov    %eax,(%esp)
0817b369 +0x13e7:  call   0817b394 <+0x1412>
0817b36e +0x13ec:  mov    %eax,%ebx
0817b370 +0x13ee:  mov    0x8(%ebp),%eax
0817b373 +0x13f1:  mov    %eax,(%esp)
0817b376 +0x13f4:  call   0817b394 <+0x1412>
0817b37b +0x13f9:  mov    0x10(%ebp),%edx
0817b37e +0x13fc:  mov    %edx,0x8(%esp)
0817b382 +0x1400:  mov    %ebx,0x4(%esp)
0817b386 +0x1404:  mov    %eax,(%esp)
0817b389 +0x1407:  call   0817b3a7 <+0x1425>
0817b38e +0x140c:  add    $0x14,%esp
0817b391 +0x140f:  pop    %ebx
0817b392 +0x1410:  pop    %ebp
0817b393 +0x1411:  ret
0817b394 +0x1412:  push   %ebp
0817b395 +0x1413:  mov    %esp,%ebp
0817b397 +0x1415:  sub    $0x18,%esp
0817b39a +0x1418:  lea    0x8(%ebp),%eax
0817b39d +0x141b:  mov    %eax,(%esp)
0817b3a0 +0x141e:  call   0817b3ec <+0x146a>
0817b3a5 +0x1423:  leave
0817b3a6 +0x1424:  ret
0817b3a7 +0x1425:  push   %ebp
0817b3a8 +0x1426:  mov    %esp,%ebp
0817b3aa +0x1428:  push   %esi
0817b3ab +0x1429:  push   %ebx
0817b3ac +0x142a:  sub    $0x10,%esp
0817b3af +0x142d:  mov    0x10(%ebp),%eax
0817b3b2 +0x1430:  mov    %eax,(%esp)
0817b3b5 +0x1433:  call   0817b281 <+0x12ff>
0817b3ba +0x1438:  mov    %eax,%esi
0817b3bc +0x143a:  mov    0xc(%ebp),%eax
0817b3bf +0x143d:  mov    %eax,(%esp)
0817b3c2 +0x1440:  call   0817b281 <+0x12ff>
0817b3c7 +0x1445:  mov    %eax,%ebx
0817b3c9 +0x1447:  mov    0x8(%ebp),%eax
0817b3cc +0x144a:  mov    %eax,(%esp)
0817b3cf +0x144d:  call   0817b281 <+0x12ff>
0817b3d4 +0x1452:  mov    %esi,0x8(%esp)
0817b3d8 +0x1456:  mov    %ebx,0x4(%esp)
0817b3dc +0x145a:  mov    %eax,(%esp)
0817b3df +0x145d:  call   0817b3f6 <+0x1474>
0817b3e4 +0x1462:  add    $0x10,%esp
0817b3e7 +0x1465:  pop    %ebx
0817b3e8 +0x1466:  pop    %esi
0817b3e9 +0x1467:  pop    %ebp
0817b3ea +0x1468:  ret
0817b3eb +0x1469:  nop
0817b3ec +0x146a:  push   %ebp
0817b3ed +0x146b:  mov    %esp,%ebp
0817b3ef +0x146d:  mov    0x8(%ebp),%eax
0817b3f2 +0x1470:  mov    (%eax),%eax
0817b3f4 +0x1472:  pop    %ebp
0817b3f5 +0x1473:  ret
0817b3f6 +0x1474:  push   %ebp
0817b3f7 +0x1475:  mov    %esp,%ebp
0817b3f9 +0x1477:  sub    $0x28,%esp
0817b3fc +0x147a:  movb   $0x1,-0x9(%ebp)
0817b400 +0x147e:  mov    0x10(%ebp),%eax
0817b403 +0x1481:  mov    %eax,0x8(%esp)
0817b407 +0x1485:  mov    0xc(%ebp),%eax
0817b40a +0x1488:  mov    %eax,0x4(%esp)
0817b40e +0x148c:  mov    0x8(%ebp),%eax
0817b411 +0x148f:  mov    %eax,(%esp)
0817b414 +0x1492:  call   0817b41b <+0x1499>
0817b419 +0x1497:  leave
0817b41a +0x1498:  ret
0817b41b +0x1499:  push   %ebp
0817b41c +0x149a:  mov    %esp,%ebp
0817b41e +0x149c:  sub    $0x18,%esp
0817b421 +0x149f:  mov    0xc(%ebp),%edx
0817b424 +0x14a2:  mov    0x8(%ebp),%eax
0817b427 +0x14a5:  mov    %edx,%ecx
0817b429 +0x14a7:  sub    %eax,%ecx
0817b42b +0x14a9:  mov    %ecx,%eax
0817b42d +0x14ab:  sar    $0x3,%eax
0817b430 +0x14ae:  shl    $0x3,%eax
0817b433 +0x14b1:  mov    %eax,0x8(%esp)
0817b437 +0x14b5:  mov    0x8(%ebp),%eax
0817b43a +0x14b8:  mov    %eax,0x4(%esp)
0817b43e +0x14bc:  mov    0x10(%ebp),%eax
0817b441 +0x14bf:  mov    %eax,(%esp)
0817b444 +0x14c2:  call   0807d880 <_init+0x178>
0817b449 +0x14c7:  mov    0xc(%ebp),%edx
0817b44c +0x14ca:  mov    0x8(%ebp),%eax
0817b44f +0x14cd:  mov    %edx,%ecx
0817b451 +0x14cf:  sub    %eax,%ecx
0817b453 +0x14d1:  mov    %ecx,%eax
0817b455 +0x14d3:  sar    $0x3,%eax
0817b458 +0x14d6:  shl    $0x3,%eax
0817b45b +0x14d9:  add    0x10(%ebp),%eax
0817b45e +0x14dc:  leave
0817b45f +0x14dd:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8179f82

/* ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)
    */

void ItemVendingMachine::_GLOBAL__I_BuyAuctionItem(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
