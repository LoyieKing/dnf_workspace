# dropItem

`_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item`

`WongWork::CBossStage::dropItem(CUser*, char, int, int, map_item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814de1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814de1a  _ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item
#           WongWork::CBossStage::dropItem(CUser*, char, int, int, map_item&)
# range [0x0814de1a, 0x0814e579]
0814de1a +0x000:  push   %ebp
0814de1b +0x001:  mov    %esp,%ebp
0814de1d +0x003:  push   %ebx
0814de1e +0x004:  sub    $0xd4,%esp
0814de24 +0x00a:  mov    0x10(%ebp),%eax
0814de27 +0x00d:  mov    %al,-0x6c(%ebp)
0814de2a +0x010:  lea    -0x59(%ebp),%eax
0814de2d +0x013:  mov    %eax,(%esp)
0814de30 +0x016:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0814de35 +0x01b:  movsbl -0x6c(%ebp),%eax
0814de39 +0x01f:  cmp    $0x2,%eax
0814de3c +0x022:  je     0814df74 <+0x15a>
0814de42 +0x028:  cmp    $0x2,%eax
0814de45 +0x02b:  jg     0814de50 <+0x36>
0814de47 +0x02d:  test   %eax,%eax
0814de49 +0x02f:  je     0814de67 <+0x4d>
0814de4b +0x031:  jmp    0814e1b6 <+0x39c>
0814de50 +0x036:  cmp    $0x3,%eax
0814de53 +0x039:  je     0814e02b <+0x211>
0814de59 +0x03f:  cmp    $0x7,%eax
0814de5c +0x042:  je     0814e0ea <+0x2d0>
0814de62 +0x048:  jmp    0814e1b6 <+0x39c>
0814de67 +0x04d:  cmpl   $0x0,0x14(%ebp)
0814de6b +0x051:  jne    0814deb5 <+0x9b>
0814de6d +0x053:  mov    0x1c(%ebp),%eax
0814de70 +0x056:  movb   $0x0,(%eax)
0814de73 +0x059:  mov    0x1c(%ebp),%eax
0814de76 +0x05c:  movb   $0x2,0x11(%eax)
0814de7a +0x060:  mov    0x1c(%ebp),%eax
0814de7d +0x063:  movl   $0x0,0x12(%eax)
0814de84 +0x06a:  mov    0x1c(%ebp),%eax
0814de87 +0x06d:  movw   $0x0,0x1b(%eax)
0814de8d +0x073:  mov    0x1c(%ebp),%eax
0814de90 +0x076:  lea    0x10(%eax),%edx
0814de93 +0x079:  mov    0x18(%ebp),%eax
0814de96 +0x07c:  mov    %eax,0x4(%esp)
0814de9a +0x080:  mov    %edx,(%esp)
0814de9d +0x083:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0814dea2 +0x088:  mov    0x1c(%ebp),%eax
0814dea5 +0x08b:  add    $0x10,%eax
0814dea8 +0x08e:  mov    %eax,(%esp)
0814deab +0x091:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0814deb0 +0x096:  jmp    0814e1c1 <+0x3a7>
0814deb5 +0x09b:  mov    0xc(%ebp),%eax
0814deb8 +0x09e:  mov    %eax,(%esp)
0814debb +0x0a1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0814dec0 +0x0a6:  lea    -0xb8(%ebp),%edx
0814dec6 +0x0ac:  mov    0x14(%ebp),%ecx
0814dec9 +0x0af:  mov    %ecx,0xc(%esp)
0814decd +0x0b3:  movl   $0x1,0x8(%esp)
0814ded5 +0x0bb:  mov    %eax,0x4(%esp)
0814ded9 +0x0bf:  mov    %edx,(%esp)
0814dedc +0x0c2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0814dee1 +0x0c7:  sub    $0x4,%esp
0814dee4 +0x0ca:  mov    -0xb8(%ebp),%eax
0814deea +0x0d0:  mov    %eax,-0x59(%ebp)
0814deed +0x0d3:  mov    -0xb4(%ebp),%eax
0814def3 +0x0d9:  mov    %eax,-0x55(%ebp)
0814def6 +0x0dc:  mov    -0xb0(%ebp),%eax
0814defc +0x0e2:  mov    %eax,-0x51(%ebp)
0814deff +0x0e5:  mov    -0xac(%ebp),%eax
0814df05 +0x0eb:  mov    %eax,-0x4d(%ebp)
0814df08 +0x0ee:  mov    -0xa8(%ebp),%eax
0814df0e +0x0f4:  mov    %eax,-0x49(%ebp)
0814df11 +0x0f7:  mov    -0xa4(%ebp),%eax
0814df17 +0x0fd:  mov    %eax,-0x45(%ebp)
0814df1a +0x100:  mov    -0xa0(%ebp),%eax
0814df20 +0x106:  mov    %eax,-0x41(%ebp)
0814df23 +0x109:  mov    -0x9c(%ebp),%eax
0814df29 +0x10f:  mov    %eax,-0x3d(%ebp)
0814df2c +0x112:  mov    -0x98(%ebp),%eax
0814df32 +0x118:  mov    %eax,-0x39(%ebp)
0814df35 +0x11b:  mov    -0x94(%ebp),%eax
0814df3b +0x121:  mov    %eax,-0x35(%ebp)
0814df3e +0x124:  mov    -0x90(%ebp),%eax
0814df44 +0x12a:  mov    %eax,-0x31(%ebp)
0814df47 +0x12d:  mov    -0x8c(%ebp),%eax
0814df4d +0x133:  mov    %eax,-0x2d(%ebp)
0814df50 +0x136:  mov    -0x88(%ebp),%eax
0814df56 +0x13c:  mov    %eax,-0x29(%ebp)
0814df59 +0x13f:  mov    -0x84(%ebp),%eax
0814df5f +0x145:  mov    %eax,-0x25(%ebp)
0814df62 +0x148:  mov    -0x80(%ebp),%eax
0814df65 +0x14b:  mov    %eax,-0x21(%ebp)
0814df68 +0x14e:  movzbl -0x7c(%ebp),%eax
0814df6c +0x152:  mov    %al,-0x1d(%ebp)
0814df6f +0x155:  jmp    0814e1c1 <+0x3a7>
0814df74 +0x15a:  mov    0xc(%ebp),%eax
0814df77 +0x15d:  mov    %eax,(%esp)
0814df7a +0x160:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0814df7f +0x165:  lea    -0xb8(%ebp),%edx
0814df85 +0x16b:  mov    0x14(%ebp),%ecx
0814df88 +0x16e:  mov    %ecx,0x8(%esp)
0814df8c +0x172:  mov    %eax,0x4(%esp)
0814df90 +0x176:  mov    %edx,(%esp)
0814df93 +0x179:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
0814df98 +0x17e:  sub    $0x4,%esp
0814df9b +0x181:  mov    -0xb8(%ebp),%eax
0814dfa1 +0x187:  mov    %eax,-0x59(%ebp)
0814dfa4 +0x18a:  mov    -0xb4(%ebp),%eax
0814dfaa +0x190:  mov    %eax,-0x55(%ebp)
0814dfad +0x193:  mov    -0xb0(%ebp),%eax
0814dfb3 +0x199:  mov    %eax,-0x51(%ebp)
0814dfb6 +0x19c:  mov    -0xac(%ebp),%eax
0814dfbc +0x1a2:  mov    %eax,-0x4d(%ebp)
0814dfbf +0x1a5:  mov    -0xa8(%ebp),%eax
0814dfc5 +0x1ab:  mov    %eax,-0x49(%ebp)
0814dfc8 +0x1ae:  mov    -0xa4(%ebp),%eax
0814dfce +0x1b4:  mov    %eax,-0x45(%ebp)
0814dfd1 +0x1b7:  mov    -0xa0(%ebp),%eax
0814dfd7 +0x1bd:  mov    %eax,-0x41(%ebp)
0814dfda +0x1c0:  mov    -0x9c(%ebp),%eax
0814dfe0 +0x1c6:  mov    %eax,-0x3d(%ebp)
0814dfe3 +0x1c9:  mov    -0x98(%ebp),%eax
0814dfe9 +0x1cf:  mov    %eax,-0x39(%ebp)
0814dfec +0x1d2:  mov    -0x94(%ebp),%eax
0814dff2 +0x1d8:  mov    %eax,-0x35(%ebp)
0814dff5 +0x1db:  mov    -0x90(%ebp),%eax
0814dffb +0x1e1:  mov    %eax,-0x31(%ebp)
0814dffe +0x1e4:  mov    -0x8c(%ebp),%eax
0814e004 +0x1ea:  mov    %eax,-0x2d(%ebp)
0814e007 +0x1ed:  mov    -0x88(%ebp),%eax
0814e00d +0x1f3:  mov    %eax,-0x29(%ebp)
0814e010 +0x1f6:  mov    -0x84(%ebp),%eax
0814e016 +0x1fc:  mov    %eax,-0x25(%ebp)
0814e019 +0x1ff:  mov    -0x80(%ebp),%eax
0814e01c +0x202:  mov    %eax,-0x21(%ebp)
0814e01f +0x205:  movzbl -0x7c(%ebp),%eax
0814e023 +0x209:  mov    %al,-0x1d(%ebp)
0814e026 +0x20c:  jmp    0814e1c1 <+0x3a7>
0814e02b +0x211:  mov    0xc(%ebp),%eax
0814e02e +0x214:  mov    %eax,(%esp)
0814e031 +0x217:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0814e036 +0x21c:  lea    -0xb8(%ebp),%edx
0814e03c +0x222:  mov    0x14(%ebp),%ecx
0814e03f +0x225:  mov    %ecx,0xc(%esp)
0814e043 +0x229:  movl   $0x0,0x8(%esp)
0814e04b +0x231:  mov    %eax,0x4(%esp)
0814e04f +0x235:  mov    %edx,(%esp)
0814e052 +0x238:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0814e057 +0x23d:  sub    $0x4,%esp
0814e05a +0x240:  mov    -0xb8(%ebp),%eax
0814e060 +0x246:  mov    %eax,-0x59(%ebp)
0814e063 +0x249:  mov    -0xb4(%ebp),%eax
0814e069 +0x24f:  mov    %eax,-0x55(%ebp)
0814e06c +0x252:  mov    -0xb0(%ebp),%eax
0814e072 +0x258:  mov    %eax,-0x51(%ebp)
0814e075 +0x25b:  mov    -0xac(%ebp),%eax
0814e07b +0x261:  mov    %eax,-0x4d(%ebp)
0814e07e +0x264:  mov    -0xa8(%ebp),%eax
0814e084 +0x26a:  mov    %eax,-0x49(%ebp)
0814e087 +0x26d:  mov    -0xa4(%ebp),%eax
0814e08d +0x273:  mov    %eax,-0x45(%ebp)
0814e090 +0x276:  mov    -0xa0(%ebp),%eax
0814e096 +0x27c:  mov    %eax,-0x41(%ebp)
0814e099 +0x27f:  mov    -0x9c(%ebp),%eax
0814e09f +0x285:  mov    %eax,-0x3d(%ebp)
0814e0a2 +0x288:  mov    -0x98(%ebp),%eax
0814e0a8 +0x28e:  mov    %eax,-0x39(%ebp)
0814e0ab +0x291:  mov    -0x94(%ebp),%eax
0814e0b1 +0x297:  mov    %eax,-0x35(%ebp)
0814e0b4 +0x29a:  mov    -0x90(%ebp),%eax
0814e0ba +0x2a0:  mov    %eax,-0x31(%ebp)
0814e0bd +0x2a3:  mov    -0x8c(%ebp),%eax
0814e0c3 +0x2a9:  mov    %eax,-0x2d(%ebp)
0814e0c6 +0x2ac:  mov    -0x88(%ebp),%eax
0814e0cc +0x2b2:  mov    %eax,-0x29(%ebp)
0814e0cf +0x2b5:  mov    -0x84(%ebp),%eax
0814e0d5 +0x2bb:  mov    %eax,-0x25(%ebp)
0814e0d8 +0x2be:  mov    -0x80(%ebp),%eax
0814e0db +0x2c1:  mov    %eax,-0x21(%ebp)
0814e0de +0x2c4:  movzbl -0x7c(%ebp),%eax
0814e0e2 +0x2c8:  mov    %al,-0x1d(%ebp)
0814e0e5 +0x2cb:  jmp    0814e1c1 <+0x3a7>
0814e0ea +0x2d0:  mov    0xc(%ebp),%eax
0814e0ed +0x2d3:  mov    %eax,(%esp)
0814e0f0 +0x2d6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0814e0f5 +0x2db:  lea    -0xb8(%ebp),%edx
0814e0fb +0x2e1:  mov    0x14(%ebp),%ecx
0814e0fe +0x2e4:  mov    %ecx,0xc(%esp)
0814e102 +0x2e8:  movl   $0x3,0x8(%esp)
0814e10a +0x2f0:  mov    %eax,0x4(%esp)
0814e10e +0x2f4:  mov    %edx,(%esp)
0814e111 +0x2f7:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0814e116 +0x2fc:  sub    $0x4,%esp
0814e119 +0x2ff:  mov    -0xb8(%ebp),%eax
0814e11f +0x305:  mov    %eax,-0x59(%ebp)
0814e122 +0x308:  mov    -0xb4(%ebp),%eax
0814e128 +0x30e:  mov    %eax,-0x55(%ebp)
0814e12b +0x311:  mov    -0xb0(%ebp),%eax
0814e131 +0x317:  mov    %eax,-0x51(%ebp)
0814e134 +0x31a:  mov    -0xac(%ebp),%eax
0814e13a +0x320:  mov    %eax,-0x4d(%ebp)
0814e13d +0x323:  mov    -0xa8(%ebp),%eax
0814e143 +0x329:  mov    %eax,-0x49(%ebp)
0814e146 +0x32c:  mov    -0xa4(%ebp),%eax
0814e14c +0x332:  mov    %eax,-0x45(%ebp)
0814e14f +0x335:  mov    -0xa0(%ebp),%eax
0814e155 +0x33b:  mov    %eax,-0x41(%ebp)
0814e158 +0x33e:  mov    -0x9c(%ebp),%eax
0814e15e +0x344:  mov    %eax,-0x3d(%ebp)
0814e161 +0x347:  mov    -0x98(%ebp),%eax
0814e167 +0x34d:  mov    %eax,-0x39(%ebp)
0814e16a +0x350:  mov    -0x94(%ebp),%eax
0814e170 +0x356:  mov    %eax,-0x35(%ebp)
0814e173 +0x359:  mov    -0x90(%ebp),%eax
0814e179 +0x35f:  mov    %eax,-0x31(%ebp)
0814e17c +0x362:  mov    -0x8c(%ebp),%eax
0814e182 +0x368:  mov    %eax,-0x2d(%ebp)
0814e185 +0x36b:  mov    -0x88(%ebp),%eax
0814e18b +0x371:  mov    %eax,-0x29(%ebp)
0814e18e +0x374:  mov    -0x84(%ebp),%eax
0814e194 +0x37a:  mov    %eax,-0x25(%ebp)
0814e197 +0x37d:  mov    -0x80(%ebp),%eax
0814e19a +0x380:  mov    %eax,-0x21(%ebp)
0814e19d +0x383:  movzbl -0x7c(%ebp),%eax
0814e1a1 +0x387:  mov    %al,-0x1d(%ebp)
0814e1a4 +0x38a:  movzbl -0x58(%ebp),%eax
0814e1a8 +0x38e:  cmp    $0x5,%al
0814e1aa +0x390:  jne    0814e1c0 <+0x3a6>
0814e1ac +0x392:  mov    $0x0,%eax
0814e1b1 +0x397:  jmp    0814e575 <+0x75b>
0814e1b6 +0x39c:  mov    $0x0,%eax
0814e1bb +0x3a1:  jmp    0814e575 <+0x75b>
0814e1c0 +0x3a6:  nop
0814e1c1 +0x3a7:  movl   $0x0,-0x1c(%ebp)
0814e1c8 +0x3ae:  mov    -0x57(%ebp),%eax
0814e1cb +0x3b1:  test   %eax,%eax
0814e1cd +0x3b3:  je     0814e360 <+0x546>
0814e1d3 +0x3b9:  mov    -0x57(%ebp),%eax
0814e1d6 +0x3bc:  mov    %eax,%ebx
0814e1d8 +0x3be:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814e1dd +0x3c3:  mov    %ebx,0x4(%esp)
0814e1e1 +0x3c7:  mov    %eax,(%esp)
0814e1e4 +0x3ca:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0814e1e9 +0x3cf:  mov    %eax,-0x14(%ebp)
0814e1ec +0x3d2:  cmpl   $0x0,-0x14(%ebp)
0814e1f0 +0x3d6:  jne    0814e1fc <+0x3e2>
0814e1f2 +0x3d8:  mov    $0x0,%eax
0814e1f7 +0x3dd:  jmp    0814e575 <+0x75b>
0814e1fc +0x3e2:  mov    -0x14(%ebp),%eax
0814e1ff +0x3e5:  mov    %eax,(%esp)
0814e202 +0x3e8:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
0814e207 +0x3ed:  mov    %eax,-0x10(%ebp)
0814e20a +0x3f0:  mov    -0x10(%ebp),%eax
0814e20d +0x3f3:  cmp    $0x5,%eax
0814e210 +0x3f6:  ja     0814e23a <+0x420>
0814e212 +0x3f8:  mov    &data#b558cfaa(.rodata)(,%eax,4),%eax
0814e219 +0x3ff:  jmp    *%eax
0814e21b +0x401:  mov    $0x0,%eax
0814e220 +0x406:  jmp    0814e575 <+0x75b>
0814e225 +0x40b:  movzbl -0x59(%ebp),%eax
0814e229 +0x40f:  xor    $0x1,%eax
0814e22c +0x412:  test   %al,%al
0814e22e +0x414:  je     0814e23a <+0x420>
0814e230 +0x416:  mov    $0x0,%eax
0814e235 +0x41b:  jmp    0814e575 <+0x75b>
0814e23a +0x420:  lea    -0x59(%ebp),%eax
0814e23d +0x423:  mov    %eax,(%esp)
0814e240 +0x426:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0814e245 +0x42b:  test   %al,%al
0814e247 +0x42d:  je     0814e275 <+0x45b>
0814e249 +0x42f:  mov    -0x14(%ebp),%eax
0814e24c +0x432:  mov    %eax,-0xc(%ebp)
0814e24f +0x435:  mov    -0xc(%ebp),%eax
0814e252 +0x438:  mov    0x234(%eax),%eax
0814e258 +0x43e:  cmp    $0xb,%eax
0814e25b +0x441:  je     0814e26b <+0x451>
0814e25d +0x443:  mov    -0xc(%ebp),%eax
0814e260 +0x446:  mov    0x234(%eax),%eax
0814e266 +0x44c:  cmp    $0x9,%eax
0814e269 +0x44f:  jg     0814e275 <+0x45b>
0814e26b +0x451:  mov    $0x0,%eax
0814e270 +0x456:  jmp    0814e575 <+0x75b>
0814e275 +0x45b:  mov    0x1c(%ebp),%eax
0814e278 +0x45e:  movb   $0x0,(%eax)
0814e27b +0x461:  movzbl -0x58(%ebp),%edx
0814e27f +0x465:  mov    0x1c(%ebp),%eax
0814e282 +0x468:  mov    %dl,0x11(%eax)
0814e285 +0x46b:  mov    -0x57(%ebp),%edx
0814e288 +0x46e:  mov    0x1c(%ebp),%eax
0814e28b +0x471:  mov    %edx,0x12(%eax)
0814e28e +0x474:  mov    -0x4c(%ebp),%edx
0814e291 +0x477:  mov    0x1c(%ebp),%eax
0814e294 +0x47a:  mov    %edx,0x1d(%eax)
0814e297 +0x47d:  mov    0x1c(%ebp),%eax
0814e29a +0x480:  mov    -0x44(%ebp),%edx
0814e29d +0x483:  mov    %edx,0x25(%eax)
0814e2a0 +0x486:  mov    -0x40(%ebp),%edx
0814e2a3 +0x489:  mov    %edx,0x29(%eax)
0814e2a6 +0x48c:  movzwl -0x3c(%ebp),%edx
0814e2aa +0x490:  mov    %dx,0x2d(%eax)
0814e2ae +0x494:  mov    0x1c(%ebp),%eax
0814e2b1 +0x497:  mov    -0x48(%ebp),%edx
0814e2b4 +0x49a:  mov    %edx,0x21(%eax)
0814e2b7 +0x49d:  lea    -0x59(%ebp),%eax
0814e2ba +0x4a0:  mov    %eax,(%esp)
0814e2bd +0x4a3:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0814e2c2 +0x4a8:  xor    $0x1,%eax
0814e2c5 +0x4ab:  test   %al,%al
0814e2c7 +0x4ad:  je     0814e2e0 <+0x4c6>
0814e2c9 +0x4af:  mov    0x1c(%ebp),%eax
0814e2cc +0x4b2:  lea    0x10(%eax),%edx
0814e2cf +0x4b5:  mov    0x18(%ebp),%eax
0814e2d2 +0x4b8:  mov    %eax,0x4(%esp)
0814e2d6 +0x4bc:  mov    %edx,(%esp)
0814e2d9 +0x4bf:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0814e2de +0x4c4:  jmp    0814e2f5 <+0x4db>
0814e2e0 +0x4c6:  mov    -0x52(%ebp),%eax
0814e2e3 +0x4c9:  mov    0x1c(%ebp),%edx
0814e2e6 +0x4cc:  add    $0x10,%edx
0814e2e9 +0x4cf:  mov    %eax,0x4(%esp)
0814e2ed +0x4d3:  mov    %edx,(%esp)
0814e2f0 +0x4d6:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0814e2f5 +0x4db:  lea    -0x59(%ebp),%eax
0814e2f8 +0x4de:  mov    %eax,(%esp)
0814e2fb +0x4e1:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0814e300 +0x4e6:  movzbl %al,%eax
0814e303 +0x4e9:  mov    0x1c(%ebp),%edx
0814e306 +0x4ec:  add    $0x10,%edx
0814e309 +0x4ef:  mov    %eax,0x4(%esp)
0814e30d +0x4f3:  mov    %edx,(%esp)
0814e310 +0x4f6:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
0814e315 +0x4fb:  movzwl -0x4e(%ebp),%edx
0814e319 +0x4ff:  mov    0x1c(%ebp),%eax
0814e31c +0x502:  mov    %dx,0x1b(%eax)
0814e320 +0x506:  movzbl -0x59(%ebp),%edx
0814e324 +0x50a:  mov    0x1c(%ebp),%eax
0814e327 +0x50d:  mov    %dl,0x10(%eax)
0814e32a +0x510:  mov    0x18(%ebp),%eax
0814e32d +0x513:  movswl %ax,%ebx
0814e330 +0x516:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
0814e335 +0x51b:  lea    -0x1c(%ebp),%edx
0814e338 +0x51e:  mov    %edx,0x14(%esp)
0814e33c +0x522:  movl   $0x0,0x10(%esp)
0814e344 +0x52a:  mov    %ebx,0xc(%esp)
0814e348 +0x52e:  mov    -0x14(%ebp),%edx
0814e34b +0x531:  mov    %edx,0x8(%esp)
0814e34f +0x535:  lea    -0x59(%ebp),%edx
0814e352 +0x538:  mov    %edx,0x4(%esp)
0814e356 +0x53c:  mov    %eax,(%esp)
0814e359 +0x53f:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
0814e35e +0x544:  jmp    0814e3a3 <+0x589>
0814e360 +0x546:  mov    0x1c(%ebp),%eax
0814e363 +0x549:  movb   $0x0,(%eax)
0814e366 +0x54c:  mov    0x1c(%ebp),%eax
0814e369 +0x54f:  movb   $0x2,0x11(%eax)
0814e36d +0x553:  mov    0x1c(%ebp),%eax
0814e370 +0x556:  movl   $0x0,0x12(%eax)
0814e377 +0x55d:  mov    0x1c(%ebp),%eax
0814e37a +0x560:  movw   $0x0,0x1b(%eax)
0814e380 +0x566:  mov    0x1c(%ebp),%eax
0814e383 +0x569:  lea    0x10(%eax),%edx
0814e386 +0x56c:  mov    0x18(%ebp),%eax
0814e389 +0x56f:  mov    %eax,0x4(%esp)
0814e38d +0x573:  mov    %edx,(%esp)
0814e390 +0x576:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0814e395 +0x57b:  mov    0x1c(%ebp),%eax
0814e398 +0x57e:  add    $0x10,%eax
0814e39b +0x581:  mov    %eax,(%esp)
0814e39e +0x584:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0814e3a3 +0x589:  movb   $0x0,-0x15(%ebp)
0814e3a7 +0x58d:  movsbl -0x6c(%ebp),%eax
0814e3ab +0x591:  cmp    $0x2,%eax
0814e3ae +0x594:  je     0814e452 <+0x638>
0814e3b4 +0x59a:  cmp    $0x2,%eax
0814e3b7 +0x59d:  jg     0814e3c2 <+0x5a8>
0814e3b9 +0x59f:  test   %eax,%eax
0814e3bb +0x5a1:  je     0814e3d9 <+0x5bf>
0814e3bd +0x5a3:  jmp    0814e501 <+0x6e7>
0814e3c2 +0x5a8:  cmp    $0x3,%eax
0814e3c5 +0x5ab:  je     0814e483 <+0x669>
0814e3cb +0x5b1:  cmp    $0x7,%eax
0814e3ce +0x5b4:  je     0814e4c2 <+0x6a8>
0814e3d4 +0x5ba:  jmp    0814e501 <+0x6e7>
0814e3d9 +0x5bf:  cmpl   $0x0,0x14(%ebp)
0814e3dd +0x5c3:  jne    0814e411 <+0x5f7>
0814e3df +0x5c5:  mov    0xc(%ebp),%eax
0814e3e2 +0x5c8:  mov    %eax,(%esp)
0814e3e5 +0x5cb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0814e3ea +0x5d0:  movl   $0x1,0xc(%esp)
0814e3f2 +0x5d8:  movl   $0x6,0x8(%esp)
0814e3fa +0x5e0:  mov    0x18(%ebp),%edx
0814e3fd +0x5e3:  mov    %edx,0x4(%esp)
0814e401 +0x5e7:  mov    %eax,(%esp)
0814e404 +0x5ea:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0814e409 +0x5ef:  mov    %al,-0x15(%ebp)
0814e40c +0x5f2:  jmp    0814e508 <+0x6ee>
0814e411 +0x5f7:  mov    0xc(%ebp),%eax
0814e414 +0x5fa:  mov    %eax,(%esp)
0814e417 +0x5fd:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0814e41c +0x602:  movl   $0x1,0x14(%esp)
0814e424 +0x60a:  movl   $0x6,0x10(%esp)
0814e42c +0x612:  mov    0x18(%ebp),%edx
0814e42f +0x615:  mov    %edx,0xc(%esp)
0814e433 +0x619:  mov    0x14(%ebp),%edx
0814e436 +0x61c:  mov    %edx,0x8(%esp)
0814e43a +0x620:  movl   $0x1,0x4(%esp)
0814e442 +0x628:  mov    %eax,(%esp)
0814e445 +0x62b:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0814e44a +0x630:  mov    %al,-0x15(%ebp)
0814e44d +0x633:  jmp    0814e508 <+0x6ee>
0814e452 +0x638:  mov    0xc(%ebp),%eax
0814e455 +0x63b:  mov    %eax,(%esp)
0814e458 +0x63e:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0814e45d +0x643:  movl   $0x10,0xc(%esp)
0814e465 +0x64b:  mov    0x18(%ebp),%edx
0814e468 +0x64e:  mov    %edx,0x8(%esp)
0814e46c +0x652:  mov    0x14(%ebp),%edx
0814e46f +0x655:  mov    %edx,0x4(%esp)
0814e473 +0x659:  mov    %eax,(%esp)
0814e476 +0x65c:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
0814e47b +0x661:  mov    %al,-0x15(%ebp)
0814e47e +0x664:  jmp    0814e508 <+0x6ee>
0814e483 +0x669:  mov    0xc(%ebp),%eax
0814e486 +0x66c:  mov    %eax,(%esp)
0814e489 +0x66f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0814e48e +0x674:  movl   $0x1,0x14(%esp)
0814e496 +0x67c:  movl   $0x6,0x10(%esp)
0814e49e +0x684:  movl   $0x1,0xc(%esp)
0814e4a6 +0x68c:  mov    0x14(%ebp),%edx
0814e4a9 +0x68f:  mov    %edx,0x8(%esp)
0814e4ad +0x693:  movl   $0x0,0x4(%esp)
0814e4b5 +0x69b:  mov    %eax,(%esp)
0814e4b8 +0x69e:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0814e4bd +0x6a3:  mov    %al,-0x15(%ebp)
0814e4c0 +0x6a6:  jmp    0814e508 <+0x6ee>
0814e4c2 +0x6a8:  mov    0xc(%ebp),%eax
0814e4c5 +0x6ab:  mov    %eax,(%esp)
0814e4c8 +0x6ae:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0814e4cd +0x6b3:  movl   $0x1,0x14(%esp)
0814e4d5 +0x6bb:  movl   $0x6,0x10(%esp)
0814e4dd +0x6c3:  movl   $0x1,0xc(%esp)
0814e4e5 +0x6cb:  mov    0x14(%ebp),%edx
0814e4e8 +0x6ce:  mov    %edx,0x8(%esp)
0814e4ec +0x6d2:  movl   $0x3,0x4(%esp)
0814e4f4 +0x6da:  mov    %eax,(%esp)
0814e4f7 +0x6dd:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0814e4fc +0x6e2:  mov    %al,-0x15(%ebp)
0814e4ff +0x6e5:  jmp    0814e508 <+0x6ee>
0814e501 +0x6e7:  mov    $0x0,%eax
0814e506 +0x6ec:  jmp    0814e575 <+0x75b>
0814e508 +0x6ee:  movzbl -0x15(%ebp),%eax
0814e50c +0x6f2:  xor    $0x1,%eax
0814e50f +0x6f5:  test   %al,%al
0814e511 +0x6f7:  je     0814e51a <+0x700>
0814e513 +0x6f9:  mov    $0x0,%eax
0814e518 +0x6fe:  jmp    0814e575 <+0x75b>
0814e51a +0x700:  cmpb   $0x0,-0x6c(%ebp)
0814e51e +0x704:  jne    0814e54b <+0x731>
0814e520 +0x706:  cmpl   $0x0,0x14(%ebp)
0814e524 +0x70a:  jne    0814e54b <+0x731>
0814e526 +0x70c:  mov    0x18(%ebp),%ebx
0814e529 +0x70f:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0814e52e +0x714:  mov    %ebx,0xc(%esp)
0814e532 +0x718:  mov    0xc(%ebp),%edx
0814e535 +0x71b:  mov    %edx,0x8(%esp)
0814e539 +0x71f:  movl   $0x17,0x4(%esp)
0814e541 +0x727:  mov    %eax,(%esp)
0814e544 +0x72a:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
0814e549 +0x72f:  jmp    0814e570 <+0x756>
0814e54b +0x731:  mov    -0x1c(%ebp),%eax
0814e54e +0x734:  mov    %eax,%ebx
0814e550 +0x736:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0814e555 +0x73b:  mov    %ebx,0xc(%esp)
0814e559 +0x73f:  mov    0xc(%ebp),%edx
0814e55c +0x742:  mov    %edx,0x8(%esp)
0814e560 +0x746:  movl   $0x16,0x4(%esp)
0814e568 +0x74e:  mov    %eax,(%esp)
0814e56b +0x751:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
0814e570 +0x756:  mov    $0x1,%eax
0814e575 +0x75b:  mov    -0x4(%ebp),%ebx
0814e578 +0x75e:  leave
0814e579 +0x75f:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::dropItem @ 0x814de1a

/* WongWork::CBossStage::dropItem(CUser*, char, int, int, map_item&) */

undefined4 __thiscall
WongWork::CBossStage::dropItem
          (CBossStage *this,CUser *param_1,char param_2,int param_3,int param_4,map_item *param_5)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  CDataManager *this_00;
  Store *this_01;
  CInventory *pCVar4;
  CCargo *pCVar5;
  undefined4 uVar6;
  CValueStatistic *pCVar7;
  undefined1 local_bc [12];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  char local_70;
  map_item local_5d;
  map_item mStack_5c;
  undefined2 uStack_5b;
  undefined2 uStack_59;
  undefined1 uStack_57;
  int iStack_56;
  undefined1 local_52;
  undefined4 uStack_51;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined1 uStack_41;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  int local_20;
  char local_19;
  CItem *local_18;
  undefined4 local_14;
  CItem *local_10;
  
  local_70 = param_2;
  Inven_Item::Inven_Item((Inven_Item *)&local_5d);
  if (local_70 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_bc);
    local_5d = SUB41(local_bc._0_4_,0);
    mStack_5c = SUB41(local_bc._0_4_,1);
    uStack_5b = SUB42(local_bc._0_4_,2);
    uStack_59 = (undefined2)local_bc._4_4_;
    uStack_57 = SUB41(local_bc._4_4_,2);
    iStack_56._1_3_ = (undefined3)local_bc._8_4_;
    iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
    local_52 = SUB41(local_bc._8_4_,3);
    uStack_51 = local_b0;
    uStack_4d = local_ac;
    uStack_49 = local_a8;
    uStack_45 = local_a4;
    uStack_41 = (undefined1)local_a0;
    local_40 = (undefined2)((uint)local_a0 >> 8);
    uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
  }
  else if (local_70 < '\x03') {
    if (local_70 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      *param_5 = (map_item)0x0;
      param_5[0x11] = (map_item)0x2;
      *(undefined4 *)(param_5 + 0x12) = 0;
      *(undefined2 *)(param_5 + 0x1b) = 0;
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
      Inven_Item::ResetItemAttr((Inven_Item *)(param_5 + 0x10));
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_bc,iVar3);
      local_5d = SUB41(local_bc._0_4_,0);
      mStack_5c = SUB41(local_bc._0_4_,1);
      uStack_5b = SUB42(local_bc._0_4_,2);
      uStack_59 = (undefined2)local_bc._4_4_;
      uStack_57 = SUB41(local_bc._4_4_,2);
      iStack_56._1_3_ = (undefined3)local_bc._8_4_;
      iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
      local_52 = SUB41(local_bc._8_4_,3);
      uStack_51 = local_b0;
      uStack_4d = local_ac;
      uStack_49 = local_a8;
      uStack_45 = local_a4;
      uStack_41 = (undefined1)local_a0;
      local_40 = (undefined2)((uint)local_a0 >> 8);
      uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
      local_3d = local_9c;
      local_39 = local_98;
      local_35 = local_94;
      local_31 = local_90;
      local_2d = local_8c;
      local_29 = local_88;
      local_25 = local_84;
      local_21 = local_80;
    }
  }
  else if (local_70 == '\x03') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_bc,iVar3);
    local_5d = SUB41(local_bc._0_4_,0);
    mStack_5c = SUB41(local_bc._0_4_,1);
    uStack_5b = SUB42(local_bc._0_4_,2);
    uStack_59 = (undefined2)local_bc._4_4_;
    uStack_57 = SUB41(local_bc._4_4_,2);
    iStack_56._1_3_ = (undefined3)local_bc._8_4_;
    iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
    local_52 = SUB41(local_bc._8_4_,3);
    uStack_51 = local_b0;
    uStack_4d = local_ac;
    uStack_49 = local_a8;
    uStack_45 = local_a4;
    uStack_41 = (undefined1)local_a0;
    local_40 = (undefined2)((uint)local_a0 >> 8);
    uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
  }
  else {
    if (local_70 != '\a') {
      return 0;
    }
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_bc,iVar3);
    local_5d = SUB41(local_bc._0_4_,0);
    mStack_5c = SUB41(local_bc._0_4_,1);
    uStack_5b = SUB42(local_bc._0_4_,2);
    uStack_59 = (undefined2)local_bc._4_4_;
    uStack_57 = SUB41(local_bc._4_4_,2);
    iStack_56._1_3_ = (undefined3)local_bc._8_4_;
    iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
    local_52 = SUB41(local_bc._8_4_,3);
    uStack_51 = local_b0;
    uStack_4d = local_ac;
    uStack_49 = local_a8;
    uStack_45 = local_a4;
    uStack_41 = (undefined1)local_a0;
    local_40 = (undefined2)((uint)local_a0 >> 8);
    uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    if (mStack_5c == (map_item)0x5) {
      return 0;
    }
  }
  local_20 = 0;
  if (CONCAT22(uStack_59,uStack_5b) == 0) {
    *param_5 = (map_item)0x0;
    param_5[0x11] = (map_item)0x2;
    *(undefined4 *)(param_5 + 0x12) = 0;
    *(undefined2 *)(param_5 + 0x1b) = 0;
    Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
    Inven_Item::ResetItemAttr((Inven_Item *)(param_5 + 0x10));
  }
  else {
    iVar3 = CONCAT22(uStack_59,uStack_5b);
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_18 == (CItem *)0x0) {
      return 0;
    }
    local_14 = CItem::GetAttachType(local_18);
    switch(local_14) {
    case 1:
    case 2:
    case 5:
      return 0;
    case 3:
      if (local_5d != (map_item)0x1) {
        return 0;
      }
    }
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_5d);
    if ((cVar1 != '\0') &&
       ((local_10 = local_18, *(int *)(local_18 + 0x234) == 0xb || (*(int *)(local_18 + 0x234) < 10)
        ))) {
      return 0;
    }
    *param_5 = (map_item)0x0;
    param_5[0x11] = mStack_5c;
    *(uint *)(param_5 + 0x12) = CONCAT22(uStack_59,uStack_5b);
    *(uint *)(param_5 + 0x1d) = CONCAT13((undefined1)uStack_4d,uStack_51._1_3_);
    *(uint *)(param_5 + 0x25) = CONCAT13((undefined1)uStack_45,uStack_49._1_3_);
    *(uint *)(param_5 + 0x29) = CONCAT13(uStack_41,uStack_45._1_3_);
    *(undefined2 *)(param_5 + 0x2d) = local_40;
    *(uint *)(param_5 + 0x21) = CONCAT13((undefined1)uStack_49,uStack_4d._1_3_);
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_5d);
    if (cVar1 == '\x01') {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),iStack_56);
    }
    else {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
    }
    uVar2 = Inven_Item::GetItemAttr((Inven_Item *)&local_5d);
    Inven_Item::SetItemAttr((Inven_Item *)(param_5 + 0x10),uVar2);
    *(ushort *)(param_5 + 0x1b) = CONCAT11((undefined1)uStack_51,local_52);
    param_5[0x10] = local_5d;
    this_01 = (Store *)G_Store();
    Store::GetSellItemPrice(this_01,(Inven_Item *)&local_5d,local_18,(short)param_4,false,&local_20)
    ;
  }
  local_19 = 0;
  if (local_70 == '\x02') {
    pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
    local_19 = CCargo::delete_item(pCVar5,param_3,param_4,0x10);
  }
  else if (local_70 < '\x03') {
    if (local_70 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_19 = CInventory::use_money(pCVar4,param_4,6,1);
    }
    else {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_19 = CInventory::delete_item(pCVar4,1,param_3,param_4,6,1);
    }
  }
  else if (local_70 == '\x03') {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_19 = CInventory::delete_item(pCVar4,0,param_3,1,6,1);
  }
  else {
    if (local_70 != '\a') {
      return 0;
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_19 = CInventory::delete_item(pCVar4,3,param_3,1,6,1);
  }
  iVar3 = local_20;
  if (local_19 == '\x01') {
    if ((local_70 == '\0') && (param_3 == 0)) {
      pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar7,0x17,param_1,param_4);
    }
    else {
      pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar7,0x16,param_1,iVar3);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
