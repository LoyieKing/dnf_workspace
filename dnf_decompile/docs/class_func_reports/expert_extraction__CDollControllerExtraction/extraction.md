# extraction

`_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE`

`expert_extraction::CDollControllerExtraction::extraction(CUser*, short, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CDollControllerExtraction` | `0x084a3dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3dce  _ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE
#           expert_extraction::CDollControllerExtraction::extraction(CUser*, short, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x084a3dce, 0x084a41a7]
084a3dce +0x000:  push   %ebp
084a3dcf +0x001:  mov    %esp,%ebp
084a3dd1 +0x003:  push   %ebx
084a3dd2 +0x004:  sub    $0x114,%esp
084a3dd8 +0x00a:  mov    0x10(%ebp),%eax
084a3ddb +0x00d:  mov    %ax,-0xbc(%ebp)
084a3de2 +0x014:  mov    0xc(%ebp),%eax
084a3de5 +0x017:  mov    %eax,(%esp)
084a3de8 +0x01a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a3ded +0x01f:  mov    %eax,-0x30(%ebp)
084a3df0 +0x022:  movswl -0xbc(%ebp),%edx
084a3df7 +0x029:  lea    -0xad(%ebp),%eax
084a3dfd +0x02f:  mov    %edx,0xc(%esp)
084a3e01 +0x033:  movl   $0x1,0x8(%esp)
084a3e09 +0x03b:  mov    -0x30(%ebp),%edx
084a3e0c +0x03e:  mov    %edx,0x4(%esp)
084a3e10 +0x042:  mov    %eax,(%esp)
084a3e13 +0x045:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a3e18 +0x04a:  sub    $0x4,%esp
084a3e1b +0x04d:  mov    -0xab(%ebp),%eax
084a3e21 +0x053:  mov    %eax,%ebx
084a3e23 +0x055:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3e28 +0x05a:  mov    %ebx,0x4(%esp)
084a3e2c +0x05e:  mov    %eax,(%esp)
084a3e2f +0x061:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a3e34 +0x066:  mov    %eax,-0x2c(%ebp)
084a3e37 +0x069:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3e3c +0x06e:  movl   $0x4,0x4(%esp)
084a3e44 +0x076:  mov    %eax,(%esp)
084a3e47 +0x079:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
084a3e4c +0x07e:  mov    %eax,-0x28(%ebp)
084a3e4f +0x081:  mov    -0x28(%ebp),%eax
084a3e52 +0x084:  mov    %eax,(%esp)
084a3e55 +0x087:  call   084a4620 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x187>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x187
084a3e5a +0x08c:  mov    %eax,-0x24(%ebp)
084a3e5d +0x08f:  mov    -0x2c(%ebp),%eax
084a3e60 +0x092:  mov    %eax,0x4(%esp)
084a3e64 +0x096:  mov    0x8(%ebp),%eax
084a3e67 +0x099:  mov    %eax,(%esp)
084a3e6a +0x09c:  call   084a3d66 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem>  ; expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type(CEquipItem const*)
084a3e6f +0x0a1:  mov    %eax,-0x20(%ebp)
084a3e72 +0x0a4:  cmpl   $0x3,-0x20(%ebp)
084a3e76 +0x0a8:  jne    084a3eb5 <+0xe7>
084a3e78 +0x0aa:  mov    -0x20(%ebp),%eax
084a3e7b +0x0ad:  mov    %eax,0x14(%esp)
084a3e7f +0x0b1:  movl   $"CDollControllerExtraction::extraction ERROR : result_type(%d)",0x10(%esp)
084a3e87 +0x0b9:  movl   $0x1d0,0xc(%esp)
084a3e8f +0x0c1:  movl   $&_ZZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EEE19__PRETTY_FUNCTION__,0x8(%esp)
084a3e97 +0x0c9:  movl   $"Extraction.cpp",0x4(%esp)
084a3e9f +0x0d1:  movl   $0x1,(%esp)
084a3ea6 +0x0d8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084a3eab +0x0dd:  mov    $0x0,%eax
084a3eb0 +0x0e2:  jmp    084a41a2 <+0x3d4>
084a3eb5 +0x0e7:  mov    -0x20(%ebp),%edx
084a3eb8 +0x0ea:  mov    -0x24(%ebp),%eax
084a3ebb +0x0ed:  mov    (%eax,%edx,4),%eax
084a3ebe +0x0f0:  mov    %eax,-0x1c(%ebp)
084a3ec1 +0x0f3:  mov    -0x1c(%ebp),%eax
084a3ec4 +0x0f6:  sub    $0x1,%eax
084a3ec7 +0x0f9:  mov    %eax,-0x70(%ebp)
084a3eca +0x0fc:  mov    0x8(%ebp),%eax
084a3ecd +0x0ff:  mov    0x4(%eax),%eax
084a3ed0 +0x102:  lea    -0x70(%ebp),%edx
084a3ed3 +0x105:  mov    %edx,0x4(%esp)
084a3ed7 +0x109:  mov    %eax,(%esp)
084a3eda +0x10c:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
084a3edf +0x111:  mov    %eax,-0x18(%ebp)
084a3ee2 +0x114:  addl   $0x1,-0x18(%ebp)
084a3ee6 +0x118:  mov    -0x20(%ebp),%edx
084a3ee9 +0x11b:  mov    %edx,%eax
084a3eeb +0x11d:  add    %eax,%eax
084a3eed +0x11f:  add    %edx,%eax
084a3eef +0x121:  shl    $0x2,%eax
084a3ef2 +0x124:  add    -0x24(%ebp),%eax
084a3ef5 +0x127:  add    $0xc,%eax
084a3ef8 +0x12a:  mov    %eax,-0x14(%ebp)
084a3efb +0x12d:  mov    -0x14(%ebp),%eax
084a3efe +0x130:  mov    %eax,(%esp)
084a3f01 +0x133:  call   084a46a2 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x209>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x209
084a3f06 +0x138:  test   %eax,%eax
084a3f08 +0x13a:  sete   %al
084a3f0b +0x13d:  test   %al,%al
084a3f0d +0x13f:  je     084a3f60 <+0x192>
084a3f0f +0x141:  mov    -0x14(%ebp),%eax
084a3f12 +0x144:  mov    %eax,(%esp)
084a3f15 +0x147:  call   084a46a2 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x209>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x209
084a3f1a +0x14c:  mov    %eax,%ebx
084a3f1c +0x14e:  movl   $0x5,0xc(%esp)
084a3f24 +0x156:  movl   $0x1dc,0x8(%esp)
084a3f2c +0x15e:  movl   $&_ZZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EEE19__PRETTY_FUNCTION__,0x4(%esp)
084a3f34 +0x166:  lea    -0x6c(%ebp),%eax
084a3f37 +0x169:  mov    %eax,(%esp)
084a3f3a +0x16c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a3f3f +0x171:  mov    %ebx,0x8(%esp)
084a3f43 +0x175:  movl   $"CDollControllerExtraction::extraction ERROR : size(%d)",0x4(%esp)
084a3f4b +0x17d:  lea    -0x6c(%ebp),%eax
084a3f4e +0x180:  mov    %eax,(%esp)
084a3f51 +0x183:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a3f56 +0x188:  mov    $0x0,%eax
084a3f5b +0x18d:  jmp    084a41a2 <+0x3d4>
084a3f60 +0x192:  mov    -0x14(%ebp),%eax
084a3f63 +0x195:  mov    %eax,(%esp)
084a3f66 +0x198:  call   084a46a2 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x209>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x209
084a3f6b +0x19d:  test   %eax,%eax
084a3f6d +0x19f:  je     084a3f7c <+0x1ae>
084a3f6f +0x1a1:  cmpl   $0x0,-0x1c(%ebp)
084a3f73 +0x1a5:  jne    084a3f7c <+0x1ae>
084a3f75 +0x1a7:  mov    $0x1,%eax
084a3f7a +0x1ac:  jmp    084a3f81 <+0x1b3>
084a3f7c +0x1ae:  mov    $0x0,%eax
084a3f81 +0x1b3:  test   %al,%al
084a3f83 +0x1b5:  je     084a3fdd <+0x20f>
084a3f85 +0x1b7:  mov    -0x14(%ebp),%eax
084a3f88 +0x1ba:  mov    %eax,(%esp)
084a3f8b +0x1bd:  call   084a46a2 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x209>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x209
084a3f90 +0x1c2:  mov    %eax,%ebx
084a3f92 +0x1c4:  movl   $0x5,0xc(%esp)
084a3f9a +0x1cc:  movl   $0x1e1,0x8(%esp)
084a3fa2 +0x1d4:  movl   $&_ZZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EEE19__PRETTY_FUNCTION__,0x4(%esp)
084a3faa +0x1dc:  lea    -0x5c(%ebp),%eax
084a3fad +0x1df:  mov    %eax,(%esp)
084a3fb0 +0x1e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a3fb5 +0x1e7:  mov    -0x1c(%ebp),%eax
084a3fb8 +0x1ea:  mov    %eax,0xc(%esp)
084a3fbc +0x1ee:  mov    %ebx,0x8(%esp)
084a3fc0 +0x1f2:  movl   $"CDollControllerExtraction::extraction ERROR : size(%d), sum(%d)",0x4(%esp)
084a3fc8 +0x1fa:  lea    -0x5c(%ebp),%eax
084a3fcb +0x1fd:  mov    %eax,(%esp)
084a3fce +0x200:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a3fd3 +0x205:  mov    $0x0,%eax
084a3fd8 +0x20a:  jmp    084a41a2 <+0x3d4>
084a3fdd +0x20f:  movl   $0x0,-0x10(%ebp)
084a3fe4 +0x216:  movl   $0x0,-0xc(%ebp)
084a3feb +0x21d:  jmp    084a4138 <+0x36a>
084a3ff0 +0x222:  mov    -0x10(%ebp),%eax
084a3ff3 +0x225:  cmp    -0x18(%ebp),%eax
084a3ff6 +0x228:  jge    084a4020 <+0x252>
084a3ff8 +0x22a:  mov    -0xc(%ebp),%eax
084a3ffb +0x22d:  mov    %eax,0x4(%esp)
084a3fff +0x231:  mov    -0x14(%ebp),%eax
084a4002 +0x234:  mov    %eax,(%esp)
084a4005 +0x237:  call   084a46c4 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x22b>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x22b
084a400a +0x23c:  movzwl 0x8(%eax),%eax
084a400e +0x240:  movzwl %ax,%eax
084a4011 +0x243:  add    -0x10(%ebp),%eax
084a4014 +0x246:  cmp    -0x18(%ebp),%eax
084a4017 +0x249:  jl     084a4020 <+0x252>
084a4019 +0x24b:  mov    $0x1,%eax
084a401e +0x250:  jmp    084a4025 <+0x257>
084a4020 +0x252:  mov    $0x0,%eax
084a4025 +0x257:  test   %al,%al
084a4027 +0x259:  je     084a4118 <+0x34a>
084a402d +0x25f:  mov    0x8(%ebp),%eax
084a4030 +0x262:  mov    (%eax),%eax
084a4032 +0x264:  add    $0x18,%eax
084a4035 +0x267:  mov    (%eax),%edx
084a4037 +0x269:  mov    -0xad(%ebp),%eax
084a403d +0x26f:  mov    %eax,0x4(%esp)
084a4041 +0x273:  mov    -0xa9(%ebp),%eax
084a4047 +0x279:  mov    %eax,0x8(%esp)
084a404b +0x27d:  mov    -0xa5(%ebp),%eax
084a4051 +0x283:  mov    %eax,0xc(%esp)
084a4055 +0x287:  mov    -0xa1(%ebp),%eax
084a405b +0x28d:  mov    %eax,0x10(%esp)
084a405f +0x291:  mov    -0x9d(%ebp),%eax
084a4065 +0x297:  mov    %eax,0x14(%esp)
084a4069 +0x29b:  mov    -0x99(%ebp),%eax
084a406f +0x2a1:  mov    %eax,0x18(%esp)
084a4073 +0x2a5:  mov    -0x95(%ebp),%eax
084a4079 +0x2ab:  mov    %eax,0x1c(%esp)
084a407d +0x2af:  mov    -0x91(%ebp),%eax
084a4083 +0x2b5:  mov    %eax,0x20(%esp)
084a4087 +0x2b9:  mov    -0x8d(%ebp),%eax
084a408d +0x2bf:  mov    %eax,0x24(%esp)
084a4091 +0x2c3:  mov    -0x89(%ebp),%eax
084a4097 +0x2c9:  mov    %eax,0x28(%esp)
084a409b +0x2cd:  mov    -0x85(%ebp),%eax
084a40a1 +0x2d3:  mov    %eax,0x2c(%esp)
084a40a5 +0x2d7:  mov    -0x81(%ebp),%eax
084a40ab +0x2dd:  mov    %eax,0x30(%esp)
084a40af +0x2e1:  mov    -0x7d(%ebp),%eax
084a40b2 +0x2e4:  mov    %eax,0x34(%esp)
084a40b6 +0x2e8:  mov    -0x79(%ebp),%eax
084a40b9 +0x2eb:  mov    %eax,0x38(%esp)
084a40bd +0x2ef:  mov    -0x75(%ebp),%eax
084a40c0 +0x2f2:  mov    %eax,0x3c(%esp)
084a40c4 +0x2f6:  movzbl -0x71(%ebp),%eax
084a40c8 +0x2fa:  mov    %al,0x40(%esp)
084a40cc +0x2fe:  mov    0x8(%ebp),%eax
084a40cf +0x301:  mov    %eax,(%esp)
084a40d2 +0x304:  call   *%edx
084a40d4 +0x306:  mov    %eax,-0x44(%ebp)
084a40d7 +0x309:  mov    -0xc(%ebp),%eax
084a40da +0x30c:  mov    %eax,0x4(%esp)
084a40de +0x310:  mov    -0x14(%ebp),%eax
084a40e1 +0x313:  mov    %eax,(%esp)
084a40e4 +0x316:  call   084a46c4 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x22b>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x22b
084a40e9 +0x31b:  mov    %eax,%edx
084a40eb +0x31d:  lea    -0x4c(%ebp),%eax
084a40ee +0x320:  lea    -0x44(%ebp),%ecx
084a40f1 +0x323:  mov    %ecx,0x8(%esp)
084a40f5 +0x327:  mov    %edx,0x4(%esp)
084a40f9 +0x32b:  mov    %eax,(%esp)
084a40fc +0x32e:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
084a4101 +0x333:  sub    $0x4,%esp
084a4104 +0x336:  lea    -0x4c(%ebp),%eax
084a4107 +0x339:  mov    %eax,0x4(%esp)
084a410b +0x33d:  mov    0x14(%ebp),%eax
084a410e +0x340:  mov    %eax,(%esp)
084a4111 +0x343:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
084a4116 +0x348:  jmp    084a4151 <+0x383>
084a4118 +0x34a:  mov    -0xc(%ebp),%eax
084a411b +0x34d:  mov    %eax,0x4(%esp)
084a411f +0x351:  mov    -0x14(%ebp),%eax
084a4122 +0x354:  mov    %eax,(%esp)
084a4125 +0x357:  call   084a46c4 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x22b>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x22b
084a412a +0x35c:  movzwl 0x8(%eax),%eax
084a412e +0x360:  movzwl %ax,%eax
084a4131 +0x363:  add    %eax,-0x10(%ebp)
084a4134 +0x366:  addl   $0x1,-0xc(%ebp)
084a4138 +0x36a:  mov    -0x14(%ebp),%eax
084a413b +0x36d:  mov    %eax,(%esp)
084a413e +0x370:  call   084a46a2 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x209>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x209
084a4143 +0x375:  cmp    -0xc(%ebp),%eax
084a4146 +0x378:  seta   %al
084a4149 +0x37b:  test   %al,%al
084a414b +0x37d:  jne    084a3ff0 <+0x222>
084a4151 +0x383:  mov    0x14(%ebp),%eax
084a4154 +0x386:  mov    %eax,(%esp)
084a4157 +0x389:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
084a415c +0x38e:  test   %al,%al
084a415e +0x390:  je     084a419d <+0x3cf>
084a4160 +0x392:  movl   $0x5,0xc(%esp)
084a4168 +0x39a:  movl   $0x1f2,0x8(%esp)
084a4170 +0x3a2:  movl   $&_ZZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EEE19__PRETTY_FUNCTION__,0x4(%esp)
084a4178 +0x3aa:  lea    -0x40(%ebp),%eax
084a417b +0x3ad:  mov    %eax,(%esp)
084a417e +0x3b0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a4183 +0x3b5:  movl   $"CDollControllerExtraction::extraction ERROR : result is empty",0x4(%esp)
084a418b +0x3bd:  lea    -0x40(%ebp),%eax
084a418e +0x3c0:  mov    %eax,(%esp)
084a4191 +0x3c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a4196 +0x3c8:  mov    $0x0,%eax
084a419b +0x3cd:  jmp    084a41a2 <+0x3d4>
084a419d +0x3cf:  mov    $0x1,%eax
084a41a2 +0x3d4:  mov    -0x4(%ebp),%ebx
084a41a5 +0x3d7:  leave
084a41a6 +0x3d8:  ret
084a41a7 +0x3d9:  nop
```

## 反编译 C

```c
// expert_extraction::CDollControllerExtraction::extraction @ 0x84a3dce

/* expert_extraction::CDollControllerExtraction::extraction(CUser*, short,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
expert_extraction::CDollControllerExtraction::extraction
          (CDollControllerExtraction *this,CUser *param_1,short param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 local_b1;
  undefined2 uStack_af;
  undefined2 uStack_ad;
  undefined2 uStack_ab;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined1 local_75;
  ulong local_74;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  int local_50 [2];
  undefined4 local_48;
  cMyTrace local_44 [16];
  int local_34;
  CEquipItem *local_30;
  STExpertJobScript *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
  *local_18;
  int local_14;
  uint local_10;
  
  local_34 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_b1,local_34);
  iVar3 = CONCAT22(uStack_ad,uStack_af);
  this_00 = (CDataManager *)G_CDataManager();
  local_30 = (CEquipItem *)CDataManager::find_item(this_00,iVar3);
  iVar3 = G_CDataManager();
  local_2c = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
  local_28 = STExpertJobScript::GetDollControllerExtractionResultInfo(local_2c);
  local_24 = get_doll_controller_extraction_type(this,local_30);
  if (local_24 == 3) {
    LogManager::logFormat
              (1,"Extraction.cpp",
               "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
               ,0x1d0,"CDollControllerExtraction::extraction ERROR : result_type(%d)",3);
    uVar4 = 0;
  }
  else {
    local_20 = *(int *)(local_28 + local_24 * 4);
    local_74 = local_20 - 1;
    local_1c = CMTRand::randInt(*(CMTRand **)(this + 4),&local_74);
    local_1c = local_1c + 1;
    local_18 = (vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                *)(local_24 * 0xc + local_28 + 0xc);
    iVar3 = std::
            vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
            ::size(local_18);
    if (iVar3 == 0) {
      uVar4 = std::
              vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
              ::size(local_18);
      cMyTrace::cMyTrace(local_70,
                         "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
                         ,0x1dc,5);
      cMyTrace::operator()(local_70,"CDollControllerExtraction::extraction ERROR : size(%d)",uVar4);
      uVar4 = 0;
    }
    else {
      iVar3 = std::
              vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
              ::size(local_18);
      if ((iVar3 == 0) || (local_20 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = std::
                vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                ::size(local_18);
        cMyTrace::cMyTrace(local_60,
                           "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
                           ,0x1e1,5);
        cMyTrace::operator()
                  (local_60,"CDollControllerExtraction::extraction ERROR : size(%d), sum(%d)",uVar4,
                   local_20);
        uVar4 = 0;
      }
      else {
        local_14 = 0;
        local_10 = 0;
        while( true ) {
          uVar6 = std::
                  vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                  ::size(local_18);
          if (uVar6 <= local_10) break;
          if (local_14 < local_1c) {
            iVar3 = std::
                    vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                    ::operator[](local_18,local_10);
            if ((int)((uint)*(ushort *)(iVar3 + 8) + local_14) < local_1c) goto LAB_084a4020;
            bVar1 = true;
          }
          else {
LAB_084a4020:
            bVar1 = false;
          }
          if (bVar1) {
            local_48 = (**(code **)(*(int *)this + 0x18))
                                 (this,CONCAT22(uStack_af,local_b1),CONCAT22(uStack_ab,uStack_ad),
                                  local_a9,local_a5,local_a1,local_9d,local_99,local_95,local_91,
                                  local_8d,local_89,local_85,local_81,local_7d,local_79,local_75);
            piVar5 = (int *)std::
                            vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                            ::operator[](local_18,local_10);
            std::make_pair<int&,int>(local_50,piVar5);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                       (pair *)local_50);
            break;
          }
          iVar3 = std::
                  vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                  ::operator[](local_18,local_10);
          local_14 = local_14 + (uint)*(ushort *)(iVar3 + 8);
          local_10 = local_10 + 1;
        }
        cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
        if (cVar2 == '\0') {
          uVar4 = 1;
        }
        else {
          cMyTrace::cMyTrace(local_44,
                             "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
                             ,0x1f2,5);
          cMyTrace::operator()
                    (local_44,"CDollControllerExtraction::extraction ERROR : result is empty");
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}
```
