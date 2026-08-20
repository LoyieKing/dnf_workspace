# process

`_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_BuySkill::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081befe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081befe8  _ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_BuySkill::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081befe8, 0x081bf467]
081befe8 +0x000:  push   %ebp
081befe9 +0x001:  mov    %esp,%ebp
081befeb +0x003:  push   %ebx
081befec +0x004:  sub    $0x34,%esp
081befef +0x007:  mov    0x10(%ebp),%eax
081beff2 +0x00a:  mov    %eax,0x8(%esp)
081beff6 +0x00e:  mov    0xc(%ebp),%eax
081beff9 +0x011:  mov    %eax,0x4(%esp)
081beffd +0x015:  mov    0x8(%ebp),%eax
081bf000 +0x018:  mov    %eax,(%esp)
081bf003 +0x01b:  call   081bf8be <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_BuySkill::check_error(CUser*, MSG_BASE&)
081bf008 +0x020:  mov    %eax,-0x1c(%ebp)
081bf00b +0x023:  cmpl   $0x0,-0x1c(%ebp)
081bf00f +0x027:  jle    081bf038 <+0x50>
081bf011 +0x029:  mov    -0x1c(%ebp),%eax
081bf014 +0x02c:  movzbl %al,%eax
081bf017 +0x02f:  mov    %eax,0x8(%esp)
081bf01b +0x033:  movl   $0x1f,0x4(%esp)
081bf023 +0x03b:  mov    0xc(%ebp),%eax
081bf026 +0x03e:  mov    %eax,(%esp)
081bf029 +0x041:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bf02e +0x046:  mov    $0xffffffff,%eax
081bf033 +0x04b:  jmp    081bf462 <+0x47a>
081bf038 +0x050:  cmpl   $0x0,-0x1c(%ebp)
081bf03c +0x054:  jns    081bf06d <+0x85>
081bf03e +0x056:  mov    0xc(%ebp),%eax
081bf041 +0x059:  mov    %eax,(%esp)
081bf044 +0x05c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081bf049 +0x061:  mov    %eax,0xc(%esp)
081bf04d +0x065:  mov    -0x1c(%ebp),%eax
081bf050 +0x068:  mov    %eax,0x8(%esp)
081bf054 +0x06c:  movl   $&_ZZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081bf05c +0x074:  movl   $0x3ef,(%esp)
081bf063 +0x07b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bf068 +0x080:  jmp    081bf462 <+0x47a>
081bf06d +0x085:  mov    0x14(%ebp),%eax
081bf070 +0x088:  mov    %eax,-0x18(%ebp)
081bf073 +0x08b:  mov    0x10(%ebp),%eax
081bf076 +0x08e:  mov    %eax,-0x14(%ebp)
081bf079 +0x091:  mov    -0x14(%ebp),%eax
081bf07c +0x094:  movzbl 0xe(%eax),%edx
081bf080 +0x098:  mov    -0x18(%ebp),%eax
081bf083 +0x09b:  mov    %dl,0x355(%eax)
081bf089 +0x0a1:  mov    -0x14(%ebp),%eax
081bf08c +0x0a4:  movzbl 0xe(%eax),%eax
081bf090 +0x0a8:  cmp    $0x1,%al
081bf092 +0x0aa:  jne    081bf137 <+0x14f>
081bf098 +0x0b0:  mov    -0x14(%ebp),%eax
081bf09b +0x0b3:  movzbl 0xf(%eax),%edx
081bf09f +0x0b7:  mov    -0x18(%ebp),%eax
081bf0a2 +0x0ba:  mov    %dl,0x8(%eax)
081bf0a5 +0x0bd:  mov    -0x14(%ebp),%eax
081bf0a8 +0x0c0:  movzbl 0x10(%eax),%edx
081bf0ac +0x0c4:  mov    -0x18(%ebp),%eax
081bf0af +0x0c7:  mov    %dl,0x9(%eax)
081bf0b2 +0x0ca:  mov    -0x14(%ebp),%eax
081bf0b5 +0x0cd:  movzbl 0x11(%eax),%eax
081bf0b9 +0x0d1:  test   %al,%al
081bf0bb +0x0d3:  jne    081bf0e9 <+0x101>
081bf0bd +0x0d5:  mov    -0x18(%ebp),%eax
081bf0c0 +0x0d8:  lea    0x8(%eax),%edx
081bf0c3 +0x0db:  mov    -0x14(%ebp),%eax
081bf0c6 +0x0de:  movzbl 0xd(%eax),%eax
081bf0ca +0x0e2:  movsbl %al,%eax
081bf0cd +0x0e5:  mov    %edx,0xc(%esp)
081bf0d1 +0x0e9:  mov    %eax,0x8(%esp)
081bf0d5 +0x0ed:  mov    0xc(%ebp),%eax
081bf0d8 +0x0f0:  mov    %eax,0x4(%esp)
081bf0dc +0x0f4:  mov    0x8(%ebp),%eax
081bf0df +0x0f7:  mov    %eax,(%esp)
081bf0e2 +0x0fa:  call   081bf952 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo>  ; DisPatcher_BuySkill::master_new_skill_process(CUser*, char, buySkillInfo&)
081bf0e7 +0x0ff:  jmp    081bf113 <+0x12b>
081bf0e9 +0x101:  mov    -0x18(%ebp),%eax
081bf0ec +0x104:  lea    0x8(%eax),%edx
081bf0ef +0x107:  mov    -0x14(%ebp),%eax
081bf0f2 +0x10a:  movzbl 0xd(%eax),%eax
081bf0f6 +0x10e:  movsbl %al,%eax
081bf0f9 +0x111:  mov    %edx,0xc(%esp)
081bf0fd +0x115:  mov    %eax,0x8(%esp)
081bf101 +0x119:  mov    0xc(%ebp),%eax
081bf104 +0x11c:  mov    %eax,0x4(%esp)
081bf108 +0x120:  mov    0x8(%ebp),%eax
081bf10b +0x123:  mov    %eax,(%esp)
081bf10e +0x126:  call   081bfc5c <_ZN19DisPatcher_BuySkill20refund_skill_processEP5CUsercR12buySkillInfo>  ; DisPatcher_BuySkill::refund_skill_process(CUser*, char, buySkillInfo&)
081bf113 +0x12b:  mov    -0x18(%ebp),%eax
081bf116 +0x12e:  movzbl 0x8(%eax),%edx
081bf11a +0x132:  mov    -0x18(%ebp),%eax
081bf11d +0x135:  mov    %dl,0x354(%eax)
081bf123 +0x13b:  mov    -0x18(%ebp),%eax
081bf126 +0x13e:  mov    0xc(%eax),%edx
081bf129 +0x141:  mov    -0x18(%ebp),%eax
081bf12c +0x144:  mov    %edx,0x350(%eax)
081bf132 +0x14a:  jmp    081bf45f <+0x477>
081bf137 +0x14f:  mov    0xc(%ebp),%eax
081bf13a +0x152:  mov    %eax,(%esp)
081bf13d +0x155:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081bf142 +0x15a:  mov    0xc(%ebp),%edx
081bf145 +0x15d:  mov    %edx,0x4(%esp)
081bf149 +0x161:  mov    %eax,(%esp)
081bf14c +0x164:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
081bf151 +0x169:  mov    -0x14(%ebp),%eax
081bf154 +0x16c:  movzbl 0xd(%eax),%eax
081bf158 +0x170:  movsbl %al,%ebx
081bf15b +0x173:  mov    0xc(%ebp),%eax
081bf15e +0x176:  mov    %eax,(%esp)
081bf161 +0x179:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081bf166 +0x17e:  mov    %ebx,0x4(%esp)
081bf16a +0x182:  mov    %eax,(%esp)
081bf16d +0x185:  call   08607f58 <_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::backupSkill(ENUM_SKILL_TREE_KIND)
081bf172 +0x18a:  xor    $0x1,%eax
081bf175 +0x18d:  test   %al,%al
081bf177 +0x18f:  je     081bf1a0 <+0x1b8>
081bf179 +0x191:  mov    -0x18(%ebp),%eax
081bf17c +0x194:  movl   $0xffffffff,0x350(%eax)
081bf186 +0x19e:  mov    -0x18(%ebp),%eax
081bf189 +0x1a1:  movzbl 0x8(%eax),%edx
081bf18d +0x1a5:  mov    -0x18(%ebp),%eax
081bf190 +0x1a8:  mov    %dl,0x354(%eax)
081bf196 +0x1ae:  mov    $0x0,%eax
081bf19b +0x1b3:  jmp    081bf462 <+0x47a>
081bf1a0 +0x1b8:  movl   $0x0,-0x10(%ebp)
081bf1a7 +0x1bf:  jmp    081bf2e9 <+0x301>
081bf1ac +0x1c4:  mov    -0x10(%ebp),%edx
081bf1af +0x1c7:  mov    -0x10(%ebp),%ecx
081bf1b2 +0x1ca:  mov    -0x14(%ebp),%ebx
081bf1b5 +0x1cd:  mov    %ecx,%eax
081bf1b7 +0x1cf:  add    %eax,%eax
081bf1b9 +0x1d1:  add    %ecx,%eax
081bf1bb +0x1d3:  lea    (%ebx,%eax,1),%eax
081bf1be +0x1d6:  add    $0xf,%eax
081bf1c1 +0x1d9:  movzbl (%eax),%ebx
081bf1c4 +0x1dc:  mov    -0x18(%ebp),%ecx
081bf1c7 +0x1df:  mov    %edx,%eax
081bf1c9 +0x1e1:  add    %eax,%eax
081bf1cb +0x1e3:  add    %edx,%eax
081bf1cd +0x1e5:  shl    $0x2,%eax
081bf1d0 +0x1e8:  mov    %bl,0x8(%eax,%ecx,1)
081bf1d4 +0x1ec:  mov    -0x10(%ebp),%edx
081bf1d7 +0x1ef:  mov    -0x10(%ebp),%ecx
081bf1da +0x1f2:  mov    -0x14(%ebp),%ebx
081bf1dd +0x1f5:  mov    %ecx,%eax
081bf1df +0x1f7:  add    %eax,%eax
081bf1e1 +0x1f9:  add    %ecx,%eax
081bf1e3 +0x1fb:  lea    (%ebx,%eax,1),%eax
081bf1e6 +0x1fe:  add    $0x10,%eax
081bf1e9 +0x201:  movzbl (%eax),%ebx
081bf1ec +0x204:  mov    -0x18(%ebp),%ecx
081bf1ef +0x207:  mov    %edx,%eax
081bf1f1 +0x209:  add    %eax,%eax
081bf1f3 +0x20b:  add    %edx,%eax
081bf1f5 +0x20d:  shl    $0x2,%eax
081bf1f8 +0x210:  mov    %bl,0x9(%eax,%ecx,1)
081bf1fc +0x214:  mov    -0x10(%ebp),%edx
081bf1ff +0x217:  mov    -0x14(%ebp),%ecx
081bf202 +0x21a:  mov    %edx,%eax
081bf204 +0x21c:  add    %eax,%eax
081bf206 +0x21e:  add    %edx,%eax
081bf208 +0x220:  lea    (%ecx,%eax,1),%eax
081bf20b +0x223:  add    $0x11,%eax
081bf20e +0x226:  movzbl (%eax),%eax
081bf211 +0x229:  test   %al,%al
081bf213 +0x22b:  jne    081bf24d <+0x265>
081bf215 +0x22d:  mov    -0x10(%ebp),%edx
081bf218 +0x230:  mov    %edx,%eax
081bf21a +0x232:  add    %eax,%eax
081bf21c +0x234:  add    %edx,%eax
081bf21e +0x236:  shl    $0x2,%eax
081bf221 +0x239:  add    -0x18(%ebp),%eax
081bf224 +0x23c:  lea    0x8(%eax),%edx
081bf227 +0x23f:  mov    -0x14(%ebp),%eax
081bf22a +0x242:  movzbl 0xd(%eax),%eax
081bf22e +0x246:  movsbl %al,%eax
081bf231 +0x249:  mov    %edx,0xc(%esp)
081bf235 +0x24d:  mov    %eax,0x8(%esp)
081bf239 +0x251:  mov    0xc(%ebp),%eax
081bf23c +0x254:  mov    %eax,0x4(%esp)
081bf240 +0x258:  mov    0x8(%ebp),%eax
081bf243 +0x25b:  mov    %eax,(%esp)
081bf246 +0x25e:  call   081bfdf0 <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo>  ; DisPatcher_BuySkill::try_master_new_skills_process(CUser*, char, buySkillInfo&)
081bf24b +0x263:  jmp    081bf283 <+0x29b>
081bf24d +0x265:  mov    -0x10(%ebp),%edx
081bf250 +0x268:  mov    %edx,%eax
081bf252 +0x26a:  add    %eax,%eax
081bf254 +0x26c:  add    %edx,%eax
081bf256 +0x26e:  shl    $0x2,%eax
081bf259 +0x271:  add    -0x18(%ebp),%eax
081bf25c +0x274:  lea    0x8(%eax),%edx
081bf25f +0x277:  mov    -0x14(%ebp),%eax
081bf262 +0x27a:  movzbl 0xd(%eax),%eax
081bf266 +0x27e:  movsbl %al,%eax
081bf269 +0x281:  mov    %edx,0xc(%esp)
081bf26d +0x285:  mov    %eax,0x8(%esp)
081bf271 +0x289:  mov    0xc(%ebp),%eax
081bf274 +0x28c:  mov    %eax,0x4(%esp)
081bf278 +0x290:  mov    0x8(%ebp),%eax
081bf27b +0x293:  mov    %eax,(%esp)
081bf27e +0x296:  call   081bfd3c <_ZN19DisPatcher_BuySkill25try_refund_skills_processEP5CUsercR12buySkillInfo>  ; DisPatcher_BuySkill::try_refund_skills_process(CUser*, char, buySkillInfo&)
081bf283 +0x29b:  mov    -0x10(%ebp),%edx
081bf286 +0x29e:  mov    -0x18(%ebp),%ecx
081bf289 +0x2a1:  mov    %edx,%eax
081bf28b +0x2a3:  add    %eax,%eax
081bf28d +0x2a5:  add    %edx,%eax
081bf28f +0x2a7:  shl    $0x2,%eax
081bf292 +0x2aa:  movzbl 0x8(%eax,%ecx,1),%edx
081bf297 +0x2af:  mov    -0x18(%ebp),%eax
081bf29a +0x2b2:  mov    %dl,0x354(%eax)
081bf2a0 +0x2b8:  mov    -0x10(%ebp),%edx
081bf2a3 +0x2bb:  mov    -0x18(%ebp),%ecx
081bf2a6 +0x2be:  mov    %edx,%eax
081bf2a8 +0x2c0:  add    %eax,%eax
081bf2aa +0x2c2:  add    %edx,%eax
081bf2ac +0x2c4:  shl    $0x2,%eax
081bf2af +0x2c7:  lea    (%ecx,%eax,1),%eax
081bf2b2 +0x2ca:  add    $0xc,%eax
081bf2b5 +0x2cd:  mov    (%eax),%edx
081bf2b7 +0x2cf:  mov    -0x18(%ebp),%eax
081bf2ba +0x2d2:  mov    %edx,0x350(%eax)
081bf2c0 +0x2d8:  mov    -0x10(%ebp),%edx
081bf2c3 +0x2db:  mov    -0x18(%ebp),%ecx
081bf2c6 +0x2de:  mov    %edx,%eax
081bf2c8 +0x2e0:  add    %eax,%eax
081bf2ca +0x2e2:  add    %edx,%eax
081bf2cc +0x2e4:  shl    $0x2,%eax
081bf2cf +0x2e7:  lea    (%ecx,%eax,1),%eax
081bf2d2 +0x2ea:  add    $0xc,%eax
081bf2d5 +0x2ed:  mov    (%eax),%eax
081bf2d7 +0x2ef:  test   %eax,%eax
081bf2d9 +0x2f1:  jns    081bf2e5 <+0x2fd>
081bf2db +0x2f3:  mov    $0x0,%eax
081bf2e0 +0x2f8:  jmp    081bf462 <+0x47a>
081bf2e5 +0x2fd:  addl   $0x1,-0x10(%ebp)
081bf2e9 +0x301:  mov    -0x14(%ebp),%eax
081bf2ec +0x304:  movzbl 0xe(%eax),%eax
081bf2f0 +0x308:  movsbl %al,%eax
081bf2f3 +0x30b:  cmp    -0x10(%ebp),%eax
081bf2f6 +0x30e:  setg   %al
081bf2f9 +0x311:  test   %al,%al
081bf2fb +0x313:  jne    081bf1ac <+0x1c4>
081bf301 +0x319:  movl   $0x0,-0xc(%ebp)
081bf308 +0x320:  jmp    081bf447 <+0x45f>
081bf30d +0x325:  mov    -0xc(%ebp),%edx
081bf310 +0x328:  mov    -0xc(%ebp),%ecx
081bf313 +0x32b:  mov    -0x14(%ebp),%ebx
081bf316 +0x32e:  mov    %ecx,%eax
081bf318 +0x330:  add    %eax,%eax
081bf31a +0x332:  add    %ecx,%eax
081bf31c +0x334:  lea    (%ebx,%eax,1),%eax
081bf31f +0x337:  add    $0xf,%eax
081bf322 +0x33a:  movzbl (%eax),%ebx
081bf325 +0x33d:  mov    -0x18(%ebp),%ecx
081bf328 +0x340:  mov    %edx,%eax
081bf32a +0x342:  add    %eax,%eax
081bf32c +0x344:  add    %edx,%eax
081bf32e +0x346:  shl    $0x2,%eax
081bf331 +0x349:  mov    %bl,0x8(%eax,%ecx,1)
081bf335 +0x34d:  mov    -0xc(%ebp),%edx
081bf338 +0x350:  mov    -0xc(%ebp),%ecx
081bf33b +0x353:  mov    -0x14(%ebp),%ebx
081bf33e +0x356:  mov    %ecx,%eax
081bf340 +0x358:  add    %eax,%eax
081bf342 +0x35a:  add    %ecx,%eax
081bf344 +0x35c:  lea    (%ebx,%eax,1),%eax
081bf347 +0x35f:  add    $0x10,%eax
081bf34a +0x362:  movzbl (%eax),%ebx
081bf34d +0x365:  mov    -0x18(%ebp),%ecx
081bf350 +0x368:  mov    %edx,%eax
081bf352 +0x36a:  add    %eax,%eax
081bf354 +0x36c:  add    %edx,%eax
081bf356 +0x36e:  shl    $0x2,%eax
081bf359 +0x371:  mov    %bl,0x9(%eax,%ecx,1)
081bf35d +0x375:  mov    -0xc(%ebp),%edx
081bf360 +0x378:  mov    -0x14(%ebp),%ecx
081bf363 +0x37b:  mov    %edx,%eax
081bf365 +0x37d:  add    %eax,%eax
081bf367 +0x37f:  add    %edx,%eax
081bf369 +0x381:  lea    (%ecx,%eax,1),%eax
081bf36c +0x384:  add    $0x11,%eax
081bf36f +0x387:  movzbl (%eax),%eax
081bf372 +0x38a:  test   %al,%al
081bf374 +0x38c:  jne    081bf3ae <+0x3c6>
081bf376 +0x38e:  mov    -0xc(%ebp),%edx
081bf379 +0x391:  mov    %edx,%eax
081bf37b +0x393:  add    %eax,%eax
081bf37d +0x395:  add    %edx,%eax
081bf37f +0x397:  shl    $0x2,%eax
081bf382 +0x39a:  add    -0x18(%ebp),%eax
081bf385 +0x39d:  lea    0x8(%eax),%edx
081bf388 +0x3a0:  mov    -0x14(%ebp),%eax
081bf38b +0x3a3:  movzbl 0xd(%eax),%eax
081bf38f +0x3a7:  movsbl %al,%eax
081bf392 +0x3aa:  mov    %edx,0xc(%esp)
081bf396 +0x3ae:  mov    %eax,0x8(%esp)
081bf39a +0x3b2:  mov    0xc(%ebp),%eax
081bf39d +0x3b5:  mov    %eax,0x4(%esp)
081bf3a1 +0x3b9:  mov    0x8(%ebp),%eax
081bf3a4 +0x3bc:  mov    %eax,(%esp)
081bf3a7 +0x3bf:  call   081bf952 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo>  ; DisPatcher_BuySkill::master_new_skill_process(CUser*, char, buySkillInfo&)
081bf3ac +0x3c4:  jmp    081bf3e4 <+0x3fc>
081bf3ae +0x3c6:  mov    -0xc(%ebp),%edx
081bf3b1 +0x3c9:  mov    %edx,%eax
081bf3b3 +0x3cb:  add    %eax,%eax
081bf3b5 +0x3cd:  add    %edx,%eax
081bf3b7 +0x3cf:  shl    $0x2,%eax
081bf3ba +0x3d2:  add    -0x18(%ebp),%eax
081bf3bd +0x3d5:  lea    0x8(%eax),%edx
081bf3c0 +0x3d8:  mov    -0x14(%ebp),%eax
081bf3c3 +0x3db:  movzbl 0xd(%eax),%eax
081bf3c7 +0x3df:  movsbl %al,%eax
081bf3ca +0x3e2:  mov    %edx,0xc(%esp)
081bf3ce +0x3e6:  mov    %eax,0x8(%esp)
081bf3d2 +0x3ea:  mov    0xc(%ebp),%eax
081bf3d5 +0x3ed:  mov    %eax,0x4(%esp)
081bf3d9 +0x3f1:  mov    0x8(%ebp),%eax
081bf3dc +0x3f4:  mov    %eax,(%esp)
081bf3df +0x3f7:  call   081bfc5c <_ZN19DisPatcher_BuySkill20refund_skill_processEP5CUsercR12buySkillInfo>  ; DisPatcher_BuySkill::refund_skill_process(CUser*, char, buySkillInfo&)
081bf3e4 +0x3fc:  mov    -0xc(%ebp),%edx
081bf3e7 +0x3ff:  mov    -0x18(%ebp),%ecx
081bf3ea +0x402:  mov    %edx,%eax
081bf3ec +0x404:  add    %eax,%eax
081bf3ee +0x406:  add    %edx,%eax
081bf3f0 +0x408:  shl    $0x2,%eax
081bf3f3 +0x40b:  movzbl 0x8(%eax,%ecx,1),%edx
081bf3f8 +0x410:  mov    -0x18(%ebp),%eax
081bf3fb +0x413:  mov    %dl,0x354(%eax)
081bf401 +0x419:  mov    -0xc(%ebp),%edx
081bf404 +0x41c:  mov    -0x18(%ebp),%ecx
081bf407 +0x41f:  mov    %edx,%eax
081bf409 +0x421:  add    %eax,%eax
081bf40b +0x423:  add    %edx,%eax
081bf40d +0x425:  shl    $0x2,%eax
081bf410 +0x428:  lea    (%ecx,%eax,1),%eax
081bf413 +0x42b:  add    $0xc,%eax
081bf416 +0x42e:  mov    (%eax),%edx
081bf418 +0x430:  mov    -0x18(%ebp),%eax
081bf41b +0x433:  mov    %edx,0x350(%eax)
081bf421 +0x439:  mov    -0xc(%ebp),%edx
081bf424 +0x43c:  mov    -0x18(%ebp),%ecx
081bf427 +0x43f:  mov    %edx,%eax
081bf429 +0x441:  add    %eax,%eax
081bf42b +0x443:  add    %edx,%eax
081bf42d +0x445:  shl    $0x2,%eax
081bf430 +0x448:  lea    (%ecx,%eax,1),%eax
081bf433 +0x44b:  add    $0xc,%eax
081bf436 +0x44e:  mov    (%eax),%eax
081bf438 +0x450:  test   %eax,%eax
081bf43a +0x452:  jns    081bf443 <+0x45b>
081bf43c +0x454:  mov    $0x0,%eax
081bf441 +0x459:  jmp    081bf462 <+0x47a>
081bf443 +0x45b:  addl   $0x1,-0xc(%ebp)
081bf447 +0x45f:  mov    -0x14(%ebp),%eax
081bf44a +0x462:  movzbl 0xe(%eax),%eax
081bf44e +0x466:  movsbl %al,%eax
081bf451 +0x469:  cmp    -0xc(%ebp),%eax
081bf454 +0x46c:  setg   %al
081bf457 +0x46f:  test   %al,%al
081bf459 +0x471:  jne    081bf30d <+0x325>
081bf45f +0x477:  mov    -0x1c(%ebp),%eax
081bf462 +0x47a:  add    $0x34,%esp
081bf465 +0x47d:  pop    %ebx
081bf466 +0x47e:  pop    %ebp
081bf467 +0x47f:  ret
```

## 反编译 C

```c
// DisPatcher_BuySkill::process @ 0x81befe8

/* DisPatcher_BuySkill::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_BuySkill::process
          (DisPatcher_BuySkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  SkillSlot *pSVar5;
  int local_14;
  int local_10;
  
  uVar3 = check_error(this,param_1,param_2);
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x3ef,
                       "virtual int DisPatcher_BuySkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       uVar3,uVar4);
    }
    else {
      *(MSG_BASE *)(param_3 + 0x355) = param_2[0xe];
      if (param_2[0xe] == (MSG_BASE)0x1) {
        *(MSG_BASE *)(param_3 + 8) = param_2[0xf];
        *(MSG_BASE *)(param_3 + 9) = param_2[0x10];
        if (param_2[0x11] == (MSG_BASE)0x0) {
          master_new_skill_process(this,param_1,(char)param_2[0xd],(buySkillInfo *)(param_3 + 8));
        }
        else {
          refund_skill_process(this,param_1,(char)param_2[0xd],(buySkillInfo *)(param_3 + 8));
        }
        param_3[0x354] = param_3[8];
        *(undefined4 *)(param_3 + 0x350) = *(undefined4 *)(param_3 + 0xc);
      }
      else {
        pSVar5 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::set_parent(pSVar5,param_1);
        MVar1 = param_2[0xd];
        pSVar5 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        cVar2 = SkillSlot::backupSkill(pSVar5,(int)(char)MVar1);
        if (cVar2 == '\x01') {
          for (local_14 = 0; local_14 < (char)param_2[0xe]; local_14 = local_14 + 1) {
            *(MSG_BASE *)(param_3 + local_14 * 0xc + 8) = param_2[local_14 * 3 + 0xf];
            *(MSG_BASE *)(param_3 + local_14 * 0xc + 9) = param_2[local_14 * 3 + 0x10];
            if (param_2[local_14 * 3 + 0x11] == (MSG_BASE)0x0) {
              try_master_new_skills_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_14 * 0xc + 8));
            }
            else {
              try_refund_skills_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_14 * 0xc + 8));
            }
            param_3[0x354] = param_3[local_14 * 0xc + 8];
            *(undefined4 *)(param_3 + 0x350) = *(undefined4 *)(param_3 + local_14 * 0xc + 0xc);
            if (*(int *)(param_3 + local_14 * 0xc + 0xc) < 0) {
              return 0;
            }
          }
          for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
            *(MSG_BASE *)(param_3 + local_10 * 0xc + 8) = param_2[local_10 * 3 + 0xf];
            *(MSG_BASE *)(param_3 + local_10 * 0xc + 9) = param_2[local_10 * 3 + 0x10];
            if (param_2[local_10 * 3 + 0x11] == (MSG_BASE)0x0) {
              master_new_skill_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_10 * 0xc + 8));
            }
            else {
              refund_skill_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_10 * 0xc + 8));
            }
            param_3[0x354] = param_3[local_10 * 0xc + 8];
            *(undefined4 *)(param_3 + 0x350) = *(undefined4 *)(param_3 + local_10 * 0xc + 0xc);
            if (*(int *)(param_3 + local_10 * 0xc + 0xc) < 0) {
              return 0;
            }
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x350) = 0xffffffff;
          param_3[0x354] = param_3[8];
          uVar3 = 0;
        }
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f,uVar3 & 0xff);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
