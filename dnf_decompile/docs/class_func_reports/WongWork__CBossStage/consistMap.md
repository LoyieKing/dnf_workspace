# consistMap

`_ZN8WongWork10CBossStage10consistMapEPK4CMap`

`WongWork::CBossStage::consistMap(CMap const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814bef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814bef4  _ZN8WongWork10CBossStage10consistMapEPK4CMap
#           WongWork::CBossStage::consistMap(CMap const*)
# range [0x0814bef4, 0x0814ce11]
0814bef4 +0x000:  push   %ebp
0814bef5 +0x001:  mov    %esp,%ebp
0814bef7 +0x003:  push   %edi
0814bef8 +0x004:  push   %esi
0814bef9 +0x005:  push   %ebx
0814befa +0x006:  sub    $0xfbc,%esp
0814bf00 +0x00c:  mov    0xc(%ebp),%eax
0814bf03 +0x00f:  mov    %eax,(%esp)
0814bf06 +0x012:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0814bf0b +0x017:  mov    0x8(%ebp),%edx
0814bf0e +0x01a:  mov    %eax,0x9f8(%edx)
0814bf14 +0x020:  lea    -0xa80(%ebp),%eax
0814bf1a +0x026:  mov    %eax,(%esp)
0814bf1d +0x029:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
0814bf22 +0x02e:  lea    -0xa98(%ebp),%eax
0814bf28 +0x034:  mov    %eax,(%esp)
0814bf2b +0x037:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0814bf30 +0x03c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814bf35 +0x041:  mov    0x869c(%eax),%eax
0814bf3b +0x047:  mov    %eax,(%esp)
0814bf3e +0x04a:  call   08150880 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1b5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1b5
0814bf43 +0x04f:  mov    %eax,0x4(%esp)
0814bf47 +0x053:  lea    -0xa98(%ebp),%eax
0814bf4d +0x059:  mov    %eax,(%esp)
0814bf50 +0x05c:  call   081526c0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1ff5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1ff5
0814bf55 +0x061:  movl   $0x0,-0x3c(%ebp)
0814bf5c +0x068:  lea    -0xf50(%ebp),%eax
0814bf62 +0x06e:  mov    %eax,(%esp)
0814bf65 +0x071:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
0814bf6a +0x076:  mov    0xc(%ebp),%eax
0814bf6d +0x079:  mov    %eax,(%esp)
0814bf70 +0x07c:  call   081508fc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x231>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x231
0814bf75 +0x081:  mov    %eax,-0x38(%ebp)
0814bf78 +0x084:  mov    -0x38(%ebp),%eax
0814bf7b +0x087:  mov    %eax,(%esp)
0814bf7e +0x08a:  call   081526de <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2013>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2013
0814bf83 +0x08f:  xor    $0x1,%eax
0814bf86 +0x092:  test   %al,%al
0814bf88 +0x094:  je     0814c21a <+0x326>
0814bf8e +0x09a:  movl   $0x0,-0x3c(%ebp)
0814bf95 +0x0a1:  lea    -0xad4(%ebp),%eax
0814bf9b +0x0a7:  mov    -0x38(%ebp),%edx
0814bf9e +0x0aa:  mov    %edx,0x4(%esp)
0814bfa2 +0x0ae:  mov    %eax,(%esp)
0814bfa5 +0x0b1:  call   08152722 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2057>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2057
0814bfaa +0x0b6:  sub    $0x4,%esp
0814bfad +0x0b9:  lea    -0xad8(%ebp),%eax
0814bfb3 +0x0bf:  mov    -0x38(%ebp),%edx
0814bfb6 +0x0c2:  mov    %edx,0x4(%esp)
0814bfba +0x0c6:  mov    %eax,(%esp)
0814bfbd +0x0c9:  call   0815274e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2083>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2083
0814bfc2 +0x0ce:  sub    $0x4,%esp
0814bfc5 +0x0d1:  jmp    0814c1fa <+0x306>
0814bfca +0x0d6:  lea    -0xad4(%ebp),%eax
0814bfd0 +0x0dc:  mov    %eax,(%esp)
0814bfd3 +0x0df:  call   081527bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20f1
0814bfd8 +0x0e4:  mov    %eax,-0x30(%ebp)
0814bfdb +0x0e7:  mov    -0x30(%ebp),%eax
0814bfde +0x0ea:  mov    (%eax),%eax
0814bfe0 +0x0ec:  mov    %eax,%ebx
0814bfe2 +0x0ee:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814bfe7 +0x0f3:  mov    0x869c(%eax),%eax
0814bfed +0x0f9:  mov    %ebx,0x4(%esp)
0814bff1 +0x0fd:  mov    %eax,(%esp)
0814bff4 +0x100:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
0814bff9 +0x105:  mov    %eax,-0x2c(%ebp)
0814bffc +0x108:  cmpl   $0x0,-0x2c(%ebp)
0814c000 +0x10c:  jne    0814c00c <+0x118>
0814c002 +0x10e:  mov    $0x0,%ebx
0814c007 +0x113:  jmp    0814cda1 <+0xead>
0814c00c +0x118:  mov    -0x2c(%ebp),%eax
0814c00f +0x11b:  mov    %eax,(%esp)
0814c012 +0x11e:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
0814c017 +0x123:  mov    %eax,-0xa74(%ebp)
0814c01d +0x129:  lea    -0xa74(%ebp),%eax
0814c023 +0x12f:  mov    %eax,0x4(%esp)
0814c027 +0x133:  lea    -0xa80(%ebp),%eax
0814c02d +0x139:  mov    %eax,(%esp)
0814c030 +0x13c:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
0814c035 +0x141:  mov    -0x2c(%ebp),%eax
0814c038 +0x144:  mov    %eax,(%esp)
0814c03b +0x147:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0814c040 +0x14c:  test   %eax,%eax
0814c042 +0x14e:  setne  %al
0814c045 +0x151:  test   %al,%al
0814c047 +0x153:  je     0814c10b <+0x217>
0814c04d +0x159:  mov    -0x2c(%ebp),%eax
0814c050 +0x15c:  mov    %eax,(%esp)
0814c053 +0x15f:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0814c058 +0x164:  mov    %eax,-0xa70(%ebp)
0814c05e +0x16a:  lea    -0xadc(%ebp),%eax
0814c064 +0x170:  lea    -0xa70(%ebp),%edx
0814c06a +0x176:  mov    %edx,0x8(%esp)
0814c06e +0x17a:  lea    -0xa98(%ebp),%edx
0814c074 +0x180:  mov    %edx,0x4(%esp)
0814c078 +0x184:  mov    %eax,(%esp)
0814c07b +0x187:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0814c080 +0x18c:  sub    $0x4,%esp
0814c083 +0x18f:  lea    -0xa6c(%ebp),%eax
0814c089 +0x195:  lea    -0xa98(%ebp),%edx
0814c08f +0x19b:  mov    %edx,0x4(%esp)
0814c093 +0x19f:  mov    %eax,(%esp)
0814c096 +0x1a2:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0814c09b +0x1a7:  sub    $0x4,%esp
0814c09e +0x1aa:  lea    -0xa6c(%ebp),%eax
0814c0a4 +0x1b0:  mov    %eax,0x4(%esp)
0814c0a8 +0x1b4:  lea    -0xadc(%ebp),%eax
0814c0ae +0x1ba:  mov    %eax,(%esp)
0814c0b1 +0x1bd:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0814c0b6 +0x1c2:  test   %al,%al
0814c0b8 +0x1c4:  je     0814c10b <+0x217>
0814c0ba +0x1c6:  lea    -0xadc(%ebp),%eax
0814c0c0 +0x1cc:  mov    %eax,(%esp)
0814c0c3 +0x1cf:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0814c0c8 +0x1d4:  mov    %eax,%ebx
0814c0ca +0x1d6:  lea    -0xadc(%ebp),%eax
0814c0d0 +0x1dc:  mov    %eax,(%esp)
0814c0d3 +0x1df:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0814c0d8 +0x1e4:  mov    0x4(%eax),%eax
0814c0db +0x1e7:  sub    $0x1,%eax
0814c0de +0x1ea:  mov    %eax,-0xa68(%ebp)
0814c0e4 +0x1f0:  movl   $0x0,-0xa64(%ebp)
0814c0ee +0x1fa:  lea    -0xa68(%ebp),%eax
0814c0f4 +0x200:  mov    %eax,0x4(%esp)
0814c0f8 +0x204:  lea    -0xa64(%ebp),%eax
0814c0fe +0x20a:  mov    %eax,(%esp)
0814c101 +0x20d:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0814c106 +0x212:  mov    (%eax),%eax
0814c108 +0x214:  mov    %eax,0x4(%ebx)
0814c10b +0x217:  movl   $0x34c,0x8(%esp)
0814c113 +0x21f:  movl   $0x0,0x4(%esp)
0814c11b +0x227:  lea    -0xf50(%ebp),%eax
0814c121 +0x22d:  mov    %eax,(%esp)
0814c124 +0x230:  call   0807dcc0 <_init+0x5b8>
0814c129 +0x235:  mov    -0x3c(%ebp),%eax
0814c12c +0x238:  mov    %eax,-0xf50(%ebp)
0814c132 +0x23e:  mov    -0x30(%ebp),%eax
0814c135 +0x241:  mov    (%eax),%eax
0814c137 +0x243:  mov    %eax,-0xf44(%ebp)
0814c13d +0x249:  mov    0x8(%ebp),%eax
0814c140 +0x24c:  mov    0xa30(%eax),%eax
0814c146 +0x252:  mov    %eax,-0xf4c(%ebp)
0814c14c +0x258:  lea    0x1(%eax),%edx
0814c14f +0x25b:  mov    0x8(%ebp),%eax
0814c152 +0x25e:  mov    %edx,0xa30(%eax)
0814c158 +0x264:  movb   $0x5,-0xf48(%ebp)
0814c15f +0x26b:  mov    -0x2c(%ebp),%eax
0814c162 +0x26e:  mov    %eax,(%esp)
0814c165 +0x271:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
0814c16a +0x276:  mov    %al,-0xf40(%ebp)
0814c170 +0x27c:  mov    -0x30(%ebp),%eax
0814c173 +0x27f:  mov    0x10(%eax),%eax
0814c176 +0x282:  mov    %eax,-0xf24(%ebp)
0814c17c +0x288:  movb   $0x0,-0xf3f(%ebp)
0814c183 +0x28f:  movb   $0x0,-0xf3e(%ebp)
0814c18a +0x296:  lea    -0xf50(%ebp),%eax
0814c190 +0x29c:  mov    %eax,0x4(%esp)
0814c194 +0x2a0:  lea    -0xa60(%ebp),%eax
0814c19a +0x2a6:  mov    %eax,(%esp)
0814c19d +0x2a9:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
0814c1a2 +0x2ae:  mov    0x8(%ebp),%eax
0814c1a5 +0x2b1:  lea    0x9f4(%eax),%edx
0814c1ab +0x2b7:  lea    -0xa60(%ebp),%eax
0814c1b1 +0x2bd:  mov    %eax,0x4(%esp)
0814c1b5 +0x2c1:  mov    %edx,(%esp)
0814c1b8 +0x2c4:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
0814c1bd +0x2c9:  jmp    0814c1da <+0x2e6>
0814c1bf +0x2cb:  mov    %edx,%ebx
0814c1c1 +0x2cd:  mov    %eax,%esi
0814c1c3 +0x2cf:  lea    -0xa60(%ebp),%eax
0814c1c9 +0x2d5:  mov    %eax,(%esp)
0814c1cc +0x2d8:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814c1d1 +0x2dd:  mov    %esi,%eax
0814c1d3 +0x2df:  mov    %ebx,%edx
0814c1d5 +0x2e1:  jmp    0814cd89 <+0xe95>
0814c1da +0x2e6:  lea    -0xa60(%ebp),%eax
0814c1e0 +0x2ec:  mov    %eax,(%esp)
0814c1e3 +0x2ef:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814c1e8 +0x2f4:  addl   $0x1,-0x3c(%ebp)
0814c1ec +0x2f8:  lea    -0xad4(%ebp),%eax
0814c1f2 +0x2fe:  mov    %eax,(%esp)
0814c1f5 +0x301:  call   081527a6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20db>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20db
0814c1fa +0x306:  lea    -0xad8(%ebp),%eax
0814c200 +0x30c:  mov    %eax,0x4(%esp)
0814c204 +0x310:  lea    -0xad4(%ebp),%eax
0814c20a +0x316:  mov    %eax,(%esp)
0814c20d +0x319:  call   0815277a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20af
0814c212 +0x31e:  test   %al,%al
0814c214 +0x320:  jne    0814bfca <+0xd6>
0814c21a +0x326:  mov    0xc(%ebp),%eax
0814c21d +0x329:  mov    %eax,(%esp)
0814c220 +0x32c:  call   081508f0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x225>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x225
0814c225 +0x331:  mov    %eax,-0xa9c(%ebp)
0814c22b +0x337:  mov    -0xa9c(%ebp),%eax
0814c231 +0x33d:  test   %eax,%eax
0814c233 +0x33f:  je     0814c60b <+0x717>
0814c239 +0x345:  movl   $0x40,-0x3c(%ebp)
0814c240 +0x34c:  jmp    0814c5e5 <+0x6f1>
0814c245 +0x351:  mov    -0xa9c(%ebp),%eax
0814c24b +0x357:  mov    %eax,(%esp)
0814c24e +0x35a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814c253 +0x35f:  add    $0x1,%eax
0814c256 +0x362:  mov    %eax,%ebx
0814c258 +0x364:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814c25d +0x369:  mov    0x869c(%eax),%eax
0814c263 +0x36f:  mov    %ebx,0x4(%esp)
0814c267 +0x373:  mov    %eax,(%esp)
0814c26a +0x376:  call   0834aaf4 <_ZN16CAICharacterList7getByAPEj>  ; CAICharacterList::getByAP(unsigned int)
0814c26f +0x37b:  mov    %eax,-0x28(%ebp)
0814c272 +0x37e:  cmpl   $0x0,-0x28(%ebp)
0814c276 +0x382:  jne    0814c282 <+0x38e>
0814c278 +0x384:  mov    $0x0,%ebx
0814c27d +0x389:  jmp    0814cda1 <+0xead>
0814c282 +0x38e:  lea    -0x714(%ebp),%eax
0814c288 +0x394:  lea    -0xa80(%ebp),%edx
0814c28e +0x39a:  mov    %edx,0x4(%esp)
0814c292 +0x39e:  mov    %eax,(%esp)
0814c295 +0x3a1:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
0814c29a +0x3a6:  sub    $0x4,%esp
0814c29d +0x3a9:  mov    -0x28(%ebp),%eax
0814c2a0 +0x3ac:  mov    %eax,(%esp)
0814c2a3 +0x3af:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
0814c2a8 +0x3b4:  mov    %eax,-0x70c(%ebp)
0814c2ae +0x3ba:  lea    -0x708(%ebp),%eax
0814c2b4 +0x3c0:  lea    -0xa80(%ebp),%edx
0814c2ba +0x3c6:  mov    %edx,0x4(%esp)
0814c2be +0x3ca:  mov    %eax,(%esp)
0814c2c1 +0x3cd:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
0814c2c6 +0x3d2:  sub    $0x4,%esp
0814c2c9 +0x3d5:  lea    -0x704(%ebp),%eax
0814c2cf +0x3db:  lea    -0xa80(%ebp),%edx
0814c2d5 +0x3e1:  mov    %edx,0x4(%esp)
0814c2d9 +0x3e5:  mov    %eax,(%esp)
0814c2dc +0x3e8:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
0814c2e1 +0x3ed:  sub    $0x4,%esp
0814c2e4 +0x3f0:  lea    -0x710(%ebp),%eax
0814c2ea +0x3f6:  lea    -0x70c(%ebp),%edx
0814c2f0 +0x3fc:  mov    %edx,0xc(%esp)
0814c2f4 +0x400:  mov    -0x708(%ebp),%edx
0814c2fa +0x406:  mov    %edx,0x8(%esp)
0814c2fe +0x40a:  mov    -0x704(%ebp),%edx
0814c304 +0x410:  mov    %edx,0x4(%esp)
0814c308 +0x414:  mov    %eax,(%esp)
0814c30b +0x417:  call   0815266b <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fa0>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fa0
0814c310 +0x41c:  sub    $0x4,%esp
0814c313 +0x41f:  lea    -0x714(%ebp),%eax
0814c319 +0x425:  mov    %eax,0x4(%esp)
0814c31d +0x429:  lea    -0x710(%ebp),%eax
0814c323 +0x42f:  mov    %eax,(%esp)
0814c326 +0x432:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
0814c32b +0x437:  test   %al,%al
0814c32d +0x439:  je     0814c3f9 <+0x505>
0814c333 +0x43f:  lea    -0x700(%ebp),%eax
0814c339 +0x445:  lea    -0xa98(%ebp),%edx
0814c33f +0x44b:  mov    %edx,0x4(%esp)
0814c343 +0x44f:  mov    %eax,(%esp)
0814c346 +0x452:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0814c34b +0x457:  sub    $0x4,%esp
0814c34e +0x45a:  lea    -0x700(%ebp),%eax
0814c354 +0x460:  mov    %eax,0x4(%esp)
0814c358 +0x464:  lea    -0xae4(%ebp),%eax
0814c35e +0x46a:  mov    %eax,(%esp)
0814c361 +0x46d:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
0814c366 +0x472:  lea    -0x6fc(%ebp),%eax
0814c36c +0x478:  lea    -0xa9c(%ebp),%edx
0814c372 +0x47e:  mov    %edx,0x8(%esp)
0814c376 +0x482:  lea    -0xa98(%ebp),%edx
0814c37c +0x488:  mov    %edx,0x4(%esp)
0814c380 +0x48c:  mov    %eax,(%esp)
0814c383 +0x48f:  call   081527f0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2125>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2125
0814c388 +0x494:  sub    $0x4,%esp
0814c38b +0x497:  lea    -0x6fc(%ebp),%eax
0814c391 +0x49d:  mov    %eax,0x4(%esp)
0814c395 +0x4a1:  lea    -0xae8(%ebp),%eax
0814c39b +0x4a7:  mov    %eax,(%esp)
0814c39e +0x4aa:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
0814c3a3 +0x4af:  movl   $0x0,-0x24(%ebp)
0814c3aa +0x4b6:  jmp    0814c3ce <+0x4da>
0814c3ac +0x4b8:  lea    -0xae4(%ebp),%eax
0814c3b2 +0x4be:  mov    %eax,(%esp)
0814c3b5 +0x4c1:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0814c3ba +0x4c6:  mov    0x4(%eax),%eax
0814c3bd +0x4c9:  add    %eax,-0x24(%ebp)
0814c3c0 +0x4cc:  lea    -0xae4(%ebp),%eax
0814c3c6 +0x4d2:  mov    %eax,(%esp)
0814c3c9 +0x4d5:  call   08151f82 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18b7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18b7
0814c3ce +0x4da:  lea    -0xae8(%ebp),%eax
0814c3d4 +0x4e0:  mov    %eax,0x4(%esp)
0814c3d8 +0x4e4:  lea    -0xae4(%ebp),%eax
0814c3de +0x4ea:  mov    %eax,(%esp)
0814c3e1 +0x4ed:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
0814c3e6 +0x4f2:  test   %al,%al
0814c3e8 +0x4f4:  jne    0814c3ac <+0x4b8>
0814c3ea +0x4f6:  cmpl   $0x0,-0x24(%ebp)
0814c3ee +0x4fa:  jne    0814c5e4 <+0x6f0>
0814c3f4 +0x500:  jmp    0814c60b <+0x717>
0814c3f9 +0x505:  mov    -0x28(%ebp),%eax
0814c3fc +0x508:  mov    %eax,(%esp)
0814c3ff +0x50b:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
0814c404 +0x510:  mov    %eax,-0x6f8(%ebp)
0814c40a +0x516:  lea    -0x6f8(%ebp),%eax
0814c410 +0x51c:  mov    %eax,0x4(%esp)
0814c414 +0x520:  lea    -0xa80(%ebp),%eax
0814c41a +0x526:  mov    %eax,(%esp)
0814c41d +0x529:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
0814c422 +0x52e:  mov    -0x28(%ebp),%eax
0814c425 +0x531:  mov    %eax,(%esp)
0814c428 +0x534:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0814c42d +0x539:  mov    %eax,-0x6f4(%ebp)
0814c433 +0x53f:  lea    -0xae0(%ebp),%eax
0814c439 +0x545:  lea    -0x6f4(%ebp),%edx
0814c43f +0x54b:  mov    %edx,0x8(%esp)
0814c443 +0x54f:  lea    -0xa98(%ebp),%edx
0814c449 +0x555:  mov    %edx,0x4(%esp)
0814c44d +0x559:  mov    %eax,(%esp)
0814c450 +0x55c:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0814c455 +0x561:  sub    $0x4,%esp
0814c458 +0x564:  lea    -0x6f0(%ebp),%eax
0814c45e +0x56a:  lea    -0xa98(%ebp),%edx
0814c464 +0x570:  mov    %edx,0x4(%esp)
0814c468 +0x574:  mov    %eax,(%esp)
0814c46b +0x577:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0814c470 +0x57c:  sub    $0x4,%esp
0814c473 +0x57f:  lea    -0x6f0(%ebp),%eax
0814c479 +0x585:  mov    %eax,0x4(%esp)
0814c47d +0x589:  lea    -0xae0(%ebp),%eax
0814c483 +0x58f:  mov    %eax,(%esp)
0814c486 +0x592:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0814c48b +0x597:  test   %al,%al
0814c48d +0x599:  je     0814c4e0 <+0x5ec>
0814c48f +0x59b:  lea    -0xae0(%ebp),%eax
0814c495 +0x5a1:  mov    %eax,(%esp)
0814c498 +0x5a4:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0814c49d +0x5a9:  mov    %eax,%ebx
0814c49f +0x5ab:  lea    -0xae0(%ebp),%eax
0814c4a5 +0x5b1:  mov    %eax,(%esp)
0814c4a8 +0x5b4:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0814c4ad +0x5b9:  mov    0x4(%eax),%eax
0814c4b0 +0x5bc:  sub    $0x1,%eax
0814c4b3 +0x5bf:  mov    %eax,-0x6ec(%ebp)
0814c4b9 +0x5c5:  movl   $0x0,-0x6e8(%ebp)
0814c4c3 +0x5cf:  lea    -0x6ec(%ebp),%eax
0814c4c9 +0x5d5:  mov    %eax,0x4(%esp)
0814c4cd +0x5d9:  lea    -0x6e8(%ebp),%eax
0814c4d3 +0x5df:  mov    %eax,(%esp)
0814c4d6 +0x5e2:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0814c4db +0x5e7:  mov    (%eax),%eax
0814c4dd +0x5e9:  mov    %eax,0x4(%ebx)
0814c4e0 +0x5ec:  mov    -0xa9c(%ebp),%ebx
0814c4e6 +0x5f2:  mov    -0x28(%ebp),%eax
0814c4e9 +0x5f5:  mov    %eax,(%esp)
0814c4ec +0x5f8:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0814c4f1 +0x5fd:  mov    %ebx,%edx
0814c4f3 +0x5ff:  sub    %eax,%edx
0814c4f5 +0x601:  mov    %edx,%eax
0814c4f7 +0x603:  mov    %eax,-0xa9c(%ebp)
0814c4fd +0x609:  movl   $0x34c,0x8(%esp)
0814c505 +0x611:  movl   $0x0,0x4(%esp)
0814c50d +0x619:  lea    -0xf50(%ebp),%eax
0814c513 +0x61f:  mov    %eax,(%esp)
0814c516 +0x622:  call   0807dcc0 <_init+0x5b8>
0814c51b +0x627:  mov    -0x3c(%ebp),%eax
0814c51e +0x62a:  mov    %eax,-0xf50(%ebp)
0814c524 +0x630:  mov    -0x28(%ebp),%eax
0814c527 +0x633:  mov    %eax,(%esp)
0814c52a +0x636:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
0814c52f +0x63b:  mov    %eax,-0xf44(%ebp)
0814c535 +0x641:  mov    0x8(%ebp),%eax
0814c538 +0x644:  mov    0xa30(%eax),%eax
0814c53e +0x64a:  mov    %eax,-0xf4c(%ebp)
0814c544 +0x650:  lea    0x1(%eax),%edx
0814c547 +0x653:  mov    0x8(%ebp),%eax
0814c54a +0x656:  mov    %edx,0xa30(%eax)
0814c550 +0x65c:  movb   $0x5,-0xf48(%ebp)
0814c557 +0x663:  mov    -0x28(%ebp),%eax
0814c55a +0x666:  mov    %eax,(%esp)
0814c55d +0x669:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
0814c562 +0x66e:  mov    %al,-0xf40(%ebp)
0814c568 +0x674:  movl   $0x64,-0xf24(%ebp)
0814c572 +0x67e:  movb   $0x0,-0xf3f(%ebp)
0814c579 +0x685:  movb   $0x0,-0xf3e(%ebp)
0814c580 +0x68c:  lea    -0xf50(%ebp),%eax
0814c586 +0x692:  mov    %eax,0x4(%esp)
0814c58a +0x696:  lea    -0x6e4(%ebp),%eax
0814c590 +0x69c:  mov    %eax,(%esp)
0814c593 +0x69f:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
0814c598 +0x6a4:  mov    0x8(%ebp),%eax
0814c59b +0x6a7:  lea    0x9f4(%eax),%edx
0814c5a1 +0x6ad:  lea    -0x6e4(%ebp),%eax
0814c5a7 +0x6b3:  mov    %eax,0x4(%esp)
0814c5ab +0x6b7:  mov    %edx,(%esp)
0814c5ae +0x6ba:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
0814c5b3 +0x6bf:  jmp    0814c5d0 <+0x6dc>
0814c5b5 +0x6c1:  mov    %edx,%ebx
0814c5b7 +0x6c3:  mov    %eax,%esi
0814c5b9 +0x6c5:  lea    -0x6e4(%ebp),%eax
0814c5bf +0x6cb:  mov    %eax,(%esp)
0814c5c2 +0x6ce:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814c5c7 +0x6d3:  mov    %esi,%eax
0814c5c9 +0x6d5:  mov    %ebx,%edx
0814c5cb +0x6d7:  jmp    0814cd89 <+0xe95>
0814c5d0 +0x6dc:  lea    -0x6e4(%ebp),%eax
0814c5d6 +0x6e2:  mov    %eax,(%esp)
0814c5d9 +0x6e5:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814c5de +0x6ea:  addl   $0x1,-0x3c(%ebp)
0814c5e2 +0x6ee:  jmp    0814c5e5 <+0x6f1>
0814c5e4 +0x6f0:  nop
0814c5e5 +0x6f1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814c5ea +0x6f6:  mov    0x869c(%eax),%eax
0814c5f0 +0x6fc:  mov    %eax,(%esp)
0814c5f3 +0x6ff:  call   08150872 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1a7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1a7
0814c5f8 +0x704:  mov    -0xa9c(%ebp),%edx
0814c5fe +0x70a:  cmp    %edx,%eax
0814c600 +0x70c:  setle  %al
0814c603 +0x70f:  test   %al,%al
0814c605 +0x711:  jne    0814c245 <+0x351>
0814c60b +0x717:  movl   $0x0,(%esp)
0814c612 +0x71e:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814c617 +0x723:  mov    0x8(%ebp),%edx
0814c61a +0x726:  mov    %eax,0xa3c(%edx)
0814c620 +0x72c:  mov    0x8(%ebp),%eax
0814c623 +0x72f:  mov    0xa3c(%eax),%eax
0814c629 +0x735:  mov    %eax,%edx
0814c62b +0x737:  and    $0xfffbffff,%edx
0814c631 +0x73d:  mov    0x8(%ebp),%eax
0814c634 +0x740:  mov    %edx,0xa3c(%eax)
0814c63a +0x746:  movl   $0x0,-0x3c(%ebp)
0814c641 +0x74d:  lea    -0xaa8(%ebp),%eax
0814c647 +0x753:  mov    %eax,(%esp)
0814c64a +0x756:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0814c64f +0x75b:  lea    -0xab0(%ebp),%eax
0814c655 +0x761:  mov    0xc(%ebp),%edx
0814c658 +0x764:  mov    %edx,0x4(%esp)
0814c65c +0x768:  mov    %eax,(%esp)
0814c65f +0x76b:  call   08134796 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x39d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x39d
0814c664 +0x770:  sub    $0x4,%esp
0814c667 +0x773:  lea    -0x398(%ebp),%eax
0814c66d +0x779:  lea    -0xab0(%ebp),%edx
0814c673 +0x77f:  mov    %edx,0x4(%esp)
0814c677 +0x783:  mov    %eax,(%esp)
0814c67a +0x786:  call   0815281c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2151>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2151
0814c67f +0x78b:  sub    $0x4,%esp
0814c682 +0x78e:  lea    -0x398(%ebp),%eax
0814c688 +0x794:  mov    %eax,0x4(%esp)
0814c68c +0x798:  lea    -0xab4(%ebp),%eax
0814c692 +0x79e:  mov    %eax,(%esp)
0814c695 +0x7a1:  call   08152842 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2177>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2177
0814c69a +0x7a6:  jmp    0814c8a2 <+0x9ae>
0814c69f +0x7ab:  lea    -0xab4(%ebp),%eax
0814c6a5 +0x7b1:  mov    %eax,(%esp)
0814c6a8 +0x7b4:  call   08139874 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x547b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x547b
0814c6ad +0x7b9:  mov    %eax,-0x20(%ebp)
0814c6b0 +0x7bc:  movl   $0x34c,0x8(%esp)
0814c6b8 +0x7c4:  movl   $0x0,0x4(%esp)
0814c6c0 +0x7cc:  lea    -0xf50(%ebp),%eax
0814c6c6 +0x7d2:  mov    %eax,(%esp)
0814c6c9 +0x7d5:  call   0807dcc0 <_init+0x5b8>
0814c6ce +0x7da:  mov    -0x3c(%ebp),%eax
0814c6d1 +0x7dd:  mov    %eax,-0xf50(%ebp)
0814c6d7 +0x7e3:  mov    -0x20(%ebp),%eax
0814c6da +0x7e6:  movzbl 0x4(%eax),%eax
0814c6de +0x7ea:  test   %al,%al
0814c6e0 +0x7ec:  je     0814c73c <+0x848>
0814c6e2 +0x7ee:  mov    0x8(%ebp),%eax
0814c6e5 +0x7f1:  mov    0x9f0(%eax),%eax
0814c6eb +0x7f7:  mov    %eax,(%esp)
0814c6ee +0x7fa:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0814c6f3 +0x7ff:  mov    %eax,%edx
0814c6f5 +0x801:  mov    -0x20(%ebp),%eax
0814c6f8 +0x804:  mov    0x8(%eax),%eax
0814c6fb +0x807:  lea    (%edx,%eax,1),%eax
0814c6fe +0x80a:  mov    %al,-0xf40(%ebp)
0814c704 +0x810:  movzbl -0xf40(%ebp),%eax
0814c70b +0x817:  cmp    $0x62,%al
0814c70d +0x819:  ja     0814c71d <+0x829>
0814c70f +0x81b:  movzbl -0xf40(%ebp),%eax
0814c716 +0x822:  movzbl %al,%eax
0814c719 +0x825:  test   %eax,%eax
0814c71b +0x827:  jle    0814c72f <+0x83b>
0814c71d +0x829:  movzbl -0xf40(%ebp),%eax
0814c724 +0x830:  cmp    $0x63,%al
0814c726 +0x832:  jbe    0814c734 <+0x840>
0814c728 +0x834:  mov    $0x63,%eax
0814c72d +0x839:  jmp    0814c734 <+0x840>
0814c72f +0x83b:  mov    $0x1,%eax
0814c734 +0x840:  mov    %al,-0xf40(%ebp)
0814c73a +0x846:  jmp    0814c748 <+0x854>
0814c73c +0x848:  mov    -0x20(%ebp),%eax
0814c73f +0x84b:  mov    0x8(%eax),%eax
0814c742 +0x84e:  mov    %al,-0xf40(%ebp)
0814c748 +0x854:  mov    -0x20(%ebp),%eax
0814c74b +0x857:  mov    (%eax),%eax
0814c74d +0x859:  cmp    $0xffffffff,%eax
0814c750 +0x85c:  jne    0814c778 <+0x884>
0814c752 +0x85e:  movzbl -0xf40(%ebp),%eax
0814c759 +0x865:  movzbl %al,%ebx
0814c75c +0x868:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814c761 +0x86d:  mov    0x8(%eax),%eax
0814c764 +0x870:  mov    %ebx,0x4(%esp)
0814c768 +0x874:  mov    %eax,(%esp)
0814c76b +0x877:  call   0834ff20 <_ZN15CMonsterManager19get_levelrandom_mobEi>  ; CMonsterManager::get_levelrandom_mob(int)
0814c770 +0x87c:  mov    %eax,-0xf44(%ebp)
0814c776 +0x882:  jmp    0814c783 <+0x88f>
0814c778 +0x884:  mov    -0x20(%ebp),%eax
0814c77b +0x887:  mov    (%eax),%eax
0814c77d +0x889:  mov    %eax,-0xf44(%ebp)
0814c783 +0x88f:  mov    -0x20(%ebp),%eax
0814c786 +0x892:  mov    0x10(%eax),%eax
0814c789 +0x895:  mov    %al,-0xf3f(%ebp)
0814c78f +0x89b:  mov    -0x20(%ebp),%eax
0814c792 +0x89e:  mov    0x14(%eax),%eax
0814c795 +0x8a1:  mov    %al,-0xf3e(%ebp)
0814c79b +0x8a7:  mov    -0x20(%ebp),%eax
0814c79e +0x8aa:  mov    0x18(%eax),%eax
0814c7a1 +0x8ad:  mov    %al,-0xf48(%ebp)
0814c7a7 +0x8b3:  mov    0x8(%ebp),%eax
0814c7aa +0x8b6:  mov    0xa30(%eax),%eax
0814c7b0 +0x8bc:  mov    %eax,-0xf4c(%ebp)
0814c7b6 +0x8c2:  lea    0x1(%eax),%edx
0814c7b9 +0x8c5:  mov    0x8(%ebp),%eax
0814c7bc +0x8c8:  mov    %edx,0xa30(%eax)
0814c7c2 +0x8ce:  movzbl -0xf48(%ebp),%eax
0814c7c9 +0x8d5:  test   %al,%al
0814c7cb +0x8d7:  jne    0814c7e9 <+0x8f5>
0814c7cd +0x8d9:  lea    -0xf50(%ebp),%eax
0814c7d3 +0x8df:  mov    %eax,(%esp)
0814c7d6 +0x8e2:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
0814c7db +0x8e7:  xor    $0x1,%eax
0814c7de +0x8ea:  test   %al,%al
0814c7e0 +0x8ec:  je     0814c7e9 <+0x8f5>
0814c7e2 +0x8ee:  mov    $0x1,%eax
0814c7e7 +0x8f3:  jmp    0814c7ee <+0x8fa>
0814c7e9 +0x8f5:  mov    $0x0,%eax
0814c7ee +0x8fa:  test   %al,%al
0814c7f0 +0x8fc:  je     0814c80d <+0x919>
0814c7f2 +0x8fe:  lea    -0xf50(%ebp),%eax
0814c7f8 +0x904:  add    $0x4,%eax
0814c7fb +0x907:  mov    %eax,0x4(%esp)
0814c7ff +0x90b:  lea    -0xaa8(%ebp),%eax
0814c805 +0x911:  mov    %eax,(%esp)
0814c808 +0x914:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0814c80d +0x919:  mov    -0x20(%ebp),%eax
0814c810 +0x91c:  movzbl 0x1c(%eax),%eax
0814c814 +0x920:  mov    %al,-0xf3d(%ebp)
0814c81a +0x926:  mov    -0x20(%ebp),%eax
0814c81d +0x929:  mov    0x20(%eax),%eax
0814c820 +0x92c:  mov    %al,-0xf3c(%ebp)
0814c826 +0x932:  mov    -0x20(%ebp),%eax
0814c829 +0x935:  mov    0x28(%eax),%eax
0814c82c +0x938:  mov    %eax,-0xf24(%ebp)
0814c832 +0x93e:  lea    -0xf50(%ebp),%eax
0814c838 +0x944:  mov    %eax,0x4(%esp)
0814c83c +0x948:  lea    -0x38c(%ebp),%eax
0814c842 +0x94e:  mov    %eax,(%esp)
0814c845 +0x951:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
0814c84a +0x956:  mov    0x8(%ebp),%eax
0814c84d +0x959:  lea    0x9f4(%eax),%edx
0814c853 +0x95f:  lea    -0x38c(%ebp),%eax
0814c859 +0x965:  mov    %eax,0x4(%esp)
0814c85d +0x969:  mov    %edx,(%esp)
0814c860 +0x96c:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
0814c865 +0x971:  jmp    0814c882 <+0x98e>
0814c867 +0x973:  mov    %edx,%ebx
0814c869 +0x975:  mov    %eax,%esi
0814c86b +0x977:  lea    -0x38c(%ebp),%eax
0814c871 +0x97d:  mov    %eax,(%esp)
0814c874 +0x980:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814c879 +0x985:  mov    %esi,%eax
0814c87b +0x987:  mov    %ebx,%edx
0814c87d +0x989:  jmp    0814cd39 <+0xe45>
0814c882 +0x98e:  lea    -0x38c(%ebp),%eax
0814c888 +0x994:  mov    %eax,(%esp)
0814c88b +0x997:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814c890 +0x99c:  lea    -0xab4(%ebp),%eax
0814c896 +0x9a2:  mov    %eax,(%esp)
0814c899 +0x9a5:  call   08139860 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5467>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5467
0814c89e +0x9aa:  addl   $0x1,-0x3c(%ebp)
0814c8a2 +0x9ae:  lea    -0x390(%ebp),%eax
0814c8a8 +0x9b4:  lea    -0xab0(%ebp),%edx
0814c8ae +0x9ba:  mov    %edx,0x4(%esp)
0814c8b2 +0x9be:  mov    %eax,(%esp)
0814c8b5 +0x9c1:  call   0813ba0c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7613>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7613
0814c8ba +0x9c6:  sub    $0x4,%esp
0814c8bd +0x9c9:  lea    -0x390(%ebp),%eax
0814c8c3 +0x9cf:  mov    %eax,0x4(%esp)
0814c8c7 +0x9d3:  lea    -0x394(%ebp),%eax
0814c8cd +0x9d9:  mov    %eax,(%esp)
0814c8d0 +0x9dc:  call   08152842 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2177>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2177
0814c8d5 +0x9e1:  lea    -0x394(%ebp),%eax
0814c8db +0x9e7:  mov    %eax,0x4(%esp)
0814c8df +0x9eb:  lea    -0xab4(%ebp),%eax
0814c8e5 +0x9f1:  mov    %eax,(%esp)
0814c8e8 +0x9f4:  call   08135dd2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19d9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19d9
0814c8ed +0x9f9:  test   %al,%al
0814c8ef +0x9fb:  jne    0814c69f <+0x7ab>
0814c8f5 +0xa01:  lea    -0xac4(%ebp),%eax
0814c8fb +0xa07:  mov    %eax,(%esp)
0814c8fe +0xa0a:  call   0815088e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c3
0814c903 +0xa0f:  mov    0x8(%ebp),%eax
0814c906 +0xa12:  mov    0x9f0(%eax),%eax
0814c90c +0xa18:  mov    %eax,(%esp)
0814c90f +0xa1b:  call   08150914 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x249>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x249
0814c914 +0xa20:  mov    %eax,-0x34(%ebp)
0814c917 +0xa23:  lea    -0xb68(%ebp),%eax
0814c91d +0xa29:  mov    %eax,(%esp)
0814c920 +0xa2c:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
0814c925 +0xa31:  lea    -0xbb0(%ebp),%eax
0814c92b +0xa37:  mov    %eax,(%esp)
0814c92e +0xa3a:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
0814c933 +0xa3f:  mov    0x8(%ebp),%eax
0814c936 +0xa42:  mov    0x9f0(%eax),%eax
0814c93c +0xa48:  mov    %eax,(%esp)
0814c93f +0xa4b:  call   08150908 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23d
0814c944 +0xa50:  mov    %eax,-0xb7c(%ebp)
0814c94a +0xa56:  lea    -0xacc(%ebp),%eax
0814c950 +0xa5c:  mov    0xc(%ebp),%edx
0814c953 +0xa5f:  mov    %edx,0x4(%esp)
0814c957 +0xa63:  mov    %eax,(%esp)
0814c95a +0xa66:  call   081508c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fb
0814c95f +0xa6b:  sub    $0x4,%esp
0814c962 +0xa6e:  lea    -0xad0(%ebp),%eax
0814c968 +0xa74:  lea    -0xacc(%ebp),%edx
0814c96e +0xa7a:  mov    %edx,0x4(%esp)
0814c972 +0xa7e:  mov    %eax,(%esp)
0814c975 +0xa81:  call   08152852 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2187>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2187
0814c97a +0xa86:  sub    $0x4,%esp
0814c97d +0xa89:  jmp    0814cc87 <+0xd93>
0814c982 +0xa8e:  lea    -0xad0(%ebp),%eax
0814c988 +0xa94:  mov    %eax,(%esp)
0814c98b +0xa97:  call   081528b0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21e5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21e5
0814c990 +0xa9c:  mov    (%eax),%edx
0814c992 +0xa9e:  mov    %edx,-0xac4(%ebp)
0814c998 +0xaa4:  mov    0x4(%eax),%edx
0814c99b +0xaa7:  mov    %edx,-0xac0(%ebp)
0814c9a1 +0xaad:  mov    0x8(%eax),%edx
0814c9a4 +0xab0:  mov    %edx,-0xabc(%ebp)
0814c9aa +0xab6:  mov    0xc(%eax),%eax
0814c9ad +0xab9:  mov    %eax,-0xab8(%ebp)
0814c9b3 +0xabf:  mov    -0xac4(%ebp),%eax
0814c9b9 +0xac5:  mov    %eax,0x4(%esp)
0814c9bd +0xac9:  mov    -0x34(%ebp),%eax
0814c9c0 +0xacc:  mov    %eax,(%esp)
0814c9c3 +0xacf:  call   081528be <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21f3
0814c9c8 +0xad4:  mov    %eax,-0x1c(%ebp)
0814c9cb +0xad7:  mov    -0x1c(%ebp),%eax
0814c9ce +0xada:  mov    (%eax),%eax
0814c9d0 +0xadc:  cmp    $0xffffffff,%eax
0814c9d3 +0xadf:  je     0814c9e2 <+0xaee>
0814c9d5 +0xae1:  mov    -0x1c(%ebp),%eax
0814c9d8 +0xae4:  mov    (%eax),%eax
0814c9da +0xae6:  mov    %al,-0xb30(%ebp)
0814c9e0 +0xaec:  jmp    0814ca3a <+0xb46>
0814c9e2 +0xaee:  mov    0x8(%ebp),%eax
0814c9e5 +0xaf1:  mov    0x9f0(%eax),%eax
0814c9eb +0xaf7:  mov    %eax,(%esp)
0814c9ee +0xafa:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0814c9f3 +0xaff:  test   %eax,%eax
0814c9f5 +0xb01:  jle    0814ca0f <+0xb1b>
0814c9f7 +0xb03:  mov    0x8(%ebp),%eax
0814c9fa +0xb06:  mov    0x9f0(%eax),%eax
0814ca00 +0xb0c:  mov    %eax,(%esp)
0814ca03 +0xb0f:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0814ca08 +0xb14:  cmp    $0xc8,%eax
0814ca0d +0xb19:  jle    0814ca16 <+0xb22>
0814ca0f +0xb1b:  mov    $0x1,%eax
0814ca14 +0xb20:  jmp    0814ca1b <+0xb27>
0814ca16 +0xb22:  mov    $0x0,%eax
0814ca1b +0xb27:  test   %al,%al
0814ca1d +0xb29:  jne    0814cc86 <+0xd92>
0814ca23 +0xb2f:  mov    0x8(%ebp),%eax
0814ca26 +0xb32:  mov    0x9f0(%eax),%eax
0814ca2c +0xb38:  mov    %eax,(%esp)
0814ca2f +0xb3b:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0814ca34 +0xb40:  mov    %al,-0xb30(%ebp)
0814ca3a +0xb46:  lea    -0xb20(%ebp),%eax
0814ca40 +0xb4c:  mov    %eax,(%esp)
0814ca43 +0xb4f:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
0814ca48 +0xb54:  mov    -0xac0(%ebp),%eax
0814ca4e +0xb5a:  mov    %al,-0xb2f(%ebp)
0814ca54 +0xb60:  mov    -0x1c(%ebp),%eax
0814ca57 +0xb63:  add    $0x4,%eax
0814ca5a +0xb66:  mov    %eax,-0xb34(%ebp)
0814ca60 +0xb6c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814ca65 +0xb71:  mov    %eax,(%esp)
0814ca68 +0xb74:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0814ca6d +0xb79:  movl   $0x1,0x4(%esp)
0814ca75 +0xb81:  mov    %eax,(%esp)
0814ca78 +0xb84:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0814ca7d +0xb89:  mov    (%eax),%edx
0814ca7f +0xb8b:  add    $0xc,%edx
0814ca82 +0xb8e:  mov    (%edx),%ecx
0814ca84 +0xb90:  lea    -0xb20(%ebp),%edx
0814ca8a +0xb96:  mov    %edx,0x8(%esp)
0814ca8e +0xb9a:  lea    -0xb68(%ebp),%edx
0814ca94 +0xba0:  mov    %edx,0x4(%esp)
0814ca98 +0xba4:  mov    %eax,(%esp)
0814ca9b +0xba7:  call   *%ecx
0814ca9d +0xba9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814caa2 +0xbae:  mov    %eax,(%esp)
0814caa5 +0xbb1:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0814caaa +0xbb6:  movl   $0x4,0x4(%esp)
0814cab2 +0xbbe:  mov    %eax,(%esp)
0814cab5 +0xbc1:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0814caba +0xbc6:  mov    (%eax),%edx
0814cabc +0xbc8:  add    $0xc,%edx
0814cabf +0xbcb:  mov    (%edx),%ecx
0814cac1 +0xbcd:  lea    -0xb20(%ebp),%edx
0814cac7 +0xbd3:  mov    %edx,0x8(%esp)
0814cacb +0xbd7:  lea    -0xbb0(%ebp),%edx
0814cad1 +0xbdd:  mov    %edx,0x4(%esp)
0814cad5 +0xbe1:  mov    %eax,(%esp)
0814cad8 +0xbe4:  call   *%ecx
0814cada +0xbe6:  lea    -0xaec(%ebp),%eax
0814cae0 +0xbec:  lea    -0xb20(%ebp),%edx
0814cae6 +0xbf2:  mov    %edx,0x4(%esp)
0814caea +0xbf6:  mov    %eax,(%esp)
0814caed +0xbf9:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0814caf2 +0xbfe:  sub    $0x4,%esp
0814caf5 +0xc01:  lea    -0xaf0(%ebp),%eax
0814cafb +0xc07:  lea    -0xb20(%ebp),%edx
0814cb01 +0xc0d:  mov    %edx,0x4(%esp)
0814cb05 +0xc11:  mov    %eax,(%esp)
0814cb08 +0xc14:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0814cb0d +0xc19:  sub    $0x4,%esp
0814cb10 +0xc1c:  jmp    0814cc30 <+0xd3c>
0814cb15 +0xc21:  lea    -0xc04(%ebp),%eax
0814cb1b +0xc27:  mov    %eax,(%esp)
0814cb1e +0xc2a:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
0814cb23 +0xc2f:  movb   $0x1,-0xc04(%ebp)
0814cb2a +0xc36:  mov    0x8(%ebp),%eax
0814cb2d +0xc39:  mov    0xa34(%eax),%eax
0814cb33 +0xc3f:  mov    %eax,-0xc00(%ebp)
0814cb39 +0xc45:  lea    0x1(%eax),%edx
0814cb3c +0xc48:  mov    0x8(%ebp),%eax
0814cb3f +0xc4b:  mov    %edx,0xa34(%eax)
0814cb45 +0xc51:  mov    -0xab8(%ebp),%eax
0814cb4b +0xc57:  mov    %al,-0xc03(%ebp)
0814cb51 +0xc5d:  lea    -0xaec(%ebp),%eax
0814cb57 +0xc63:  mov    %eax,(%esp)
0814cb5a +0xc66:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0814cb5f +0xc6b:  mov    (%eax),%edx
0814cb61 +0xc6d:  mov    %edx,-0xbf4(%ebp)
0814cb67 +0xc73:  mov    0x4(%eax),%edx
0814cb6a +0xc76:  mov    %edx,-0xbf0(%ebp)
0814cb70 +0xc7c:  mov    0x8(%eax),%edx
0814cb73 +0xc7f:  mov    %edx,-0xbec(%ebp)
0814cb79 +0xc85:  mov    0xc(%eax),%edx
0814cb7c +0xc88:  mov    %edx,-0xbe8(%ebp)
0814cb82 +0xc8e:  mov    0x10(%eax),%edx
0814cb85 +0xc91:  mov    %edx,-0xbe4(%ebp)
0814cb8b +0xc97:  mov    0x14(%eax),%edx
0814cb8e +0xc9a:  mov    %edx,-0xbe0(%ebp)
0814cb94 +0xca0:  mov    0x18(%eax),%edx
0814cb97 +0xca3:  mov    %edx,-0xbdc(%ebp)
0814cb9d +0xca9:  mov    0x1c(%eax),%edx
0814cba0 +0xcac:  mov    %edx,-0xbd8(%ebp)
0814cba6 +0xcb2:  mov    0x20(%eax),%edx
0814cba9 +0xcb5:  mov    %edx,-0xbd4(%ebp)
0814cbaf +0xcbb:  mov    0x24(%eax),%edx
0814cbb2 +0xcbe:  mov    %edx,-0xbd0(%ebp)
0814cbb8 +0xcc4:  mov    0x28(%eax),%edx
0814cbbb +0xcc7:  mov    %edx,-0xbcc(%ebp)
0814cbc1 +0xccd:  mov    0x2c(%eax),%edx
0814cbc4 +0xcd0:  mov    %edx,-0xbc8(%ebp)
0814cbca +0xcd6:  mov    0x30(%eax),%edx
0814cbcd +0xcd9:  mov    %edx,-0xbc4(%ebp)
0814cbd3 +0xcdf:  mov    0x34(%eax),%edx
0814cbd6 +0xce2:  mov    %edx,-0xbc0(%ebp)
0814cbdc +0xce8:  mov    0x38(%eax),%edx
0814cbdf +0xceb:  mov    %edx,-0xbbc(%ebp)
0814cbe5 +0xcf1:  movzbl 0x3c(%eax),%eax
0814cbe9 +0xcf5:  mov    %al,-0xbb8(%ebp)
0814cbef +0xcfb:  mov    0x8(%ebp),%eax
0814cbf2 +0xcfe:  add    $0x9f4,%eax
0814cbf7 +0xd03:  mov    %eax,-0xf5c(%ebp)
0814cbfd +0xd09:  lea    0x4(%esp),%edx
0814cc01 +0xd0d:  lea    -0xc04(%ebp),%ebx
0814cc07 +0xd13:  mov    $0x15,%eax
0814cc0c +0xd18:  mov    %edx,%edi
0814cc0e +0xd1a:  mov    %ebx,%esi
0814cc10 +0xd1c:  mov    %eax,%ecx
0814cc12 +0xd1e:  rep movsl %ds:(%esi),%es:(%edi)
0814cc14 +0xd20:  mov    -0xf5c(%ebp),%eax
0814cc1a +0xd26:  mov    %eax,(%esp)
0814cc1d +0xd29:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
0814cc22 +0xd2e:  lea    -0xaec(%ebp),%eax
0814cc28 +0xd34:  mov    %eax,(%esp)
0814cc2b +0xd37:  call   0815293c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2271>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2271
0814cc30 +0xd3c:  lea    -0xaf0(%ebp),%eax
0814cc36 +0xd42:  mov    %eax,0x4(%esp)
0814cc3a +0xd46:  lea    -0xaec(%ebp),%eax
0814cc40 +0xd4c:  mov    %eax,(%esp)
0814cc43 +0xd4f:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
0814cc48 +0xd54:  test   %al,%al
0814cc4a +0xd56:  jne    0814cb15 <+0xc21>
0814cc50 +0xd5c:  lea    -0xad0(%ebp),%eax
0814cc56 +0xd62:  mov    %eax,(%esp)
0814cc59 +0xd65:  call   08152952 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2287>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2287
0814cc5e +0xd6a:  lea    -0xb20(%ebp),%eax
0814cc64 +0xd70:  mov    %eax,(%esp)
0814cc67 +0xd73:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
0814cc6c +0xd78:  jmp    0814cc87 <+0xd93>
0814cc6e +0xd7a:  mov    %edx,%ebx
0814cc70 +0xd7c:  mov    %eax,%esi
0814cc72 +0xd7e:  lea    -0xb20(%ebp),%eax
0814cc78 +0xd84:  mov    %eax,(%esp)
0814cc7b +0xd87:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
0814cc80 +0xd8c:  mov    %esi,%eax
0814cc82 +0xd8e:  mov    %ebx,%edx
0814cc84 +0xd90:  jmp    0814ccd1 <+0xddd>
0814cc86 +0xd92:  nop
0814cc87 +0xd93:  lea    -0x40(%ebp),%eax
0814cc8a +0xd96:  lea    -0xacc(%ebp),%edx
0814cc90 +0xd9c:  mov    %edx,0x4(%esp)
0814cc94 +0xda0:  mov    %eax,(%esp)
0814cc97 +0xda3:  call   08152878 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21ad>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21ad
0814cc9c +0xda8:  sub    $0x4,%esp
0814cc9f +0xdab:  lea    -0x40(%ebp),%eax
0814cca2 +0xdae:  mov    %eax,0x4(%esp)
0814cca6 +0xdb2:  lea    -0xad0(%ebp),%eax
0814ccac +0xdb8:  mov    %eax,(%esp)
0814ccaf +0xdbb:  call   0815289c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21d1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21d1
0814ccb4 +0xdc0:  test   %al,%al
0814ccb6 +0xdc2:  jne    0814c982 <+0xa8e>
0814ccbc +0xdc8:  mov    $0x1,%ebx
0814ccc1 +0xdcd:  lea    -0xacc(%ebp),%eax
0814ccc7 +0xdd3:  mov    %eax,(%esp)
0814ccca +0xdd6:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
0814cccf +0xddb:  jmp    0814cd01 <+0xe0d>
0814ccd1 +0xddd:  mov    %edx,%ebx
0814ccd3 +0xddf:  mov    %eax,%esi
0814ccd5 +0xde1:  lea    -0xacc(%ebp),%eax
0814ccdb +0xde7:  mov    %eax,(%esp)
0814ccde +0xdea:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
0814cce3 +0xdef:  mov    %esi,%eax
0814cce5 +0xdf1:  mov    %ebx,%edx
0814cce7 +0xdf3:  jmp    0814cce9 <+0xdf5>
0814cce9 +0xdf5:  mov    %edx,%ebx
0814cceb +0xdf7:  mov    %eax,%esi
0814cced +0xdf9:  lea    -0xbb0(%ebp),%eax
0814ccf3 +0xdff:  mov    %eax,(%esp)
0814ccf6 +0xe02:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814ccfb +0xe07:  mov    %esi,%eax
0814ccfd +0xe09:  mov    %ebx,%edx
0814ccff +0xe0b:  jmp    0814cd11 <+0xe1d>
0814cd01 +0xe0d:  lea    -0xbb0(%ebp),%eax
0814cd07 +0xe13:  mov    %eax,(%esp)
0814cd0a +0xe16:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814cd0f +0xe1b:  jmp    0814cd29 <+0xe35>
0814cd11 +0xe1d:  mov    %edx,%ebx
0814cd13 +0xe1f:  mov    %eax,%esi
0814cd15 +0xe21:  lea    -0xb68(%ebp),%eax
0814cd1b +0xe27:  mov    %eax,(%esp)
0814cd1e +0xe2a:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814cd23 +0xe2f:  mov    %esi,%eax
0814cd25 +0xe31:  mov    %ebx,%edx
0814cd27 +0xe33:  jmp    0814cd39 <+0xe45>
0814cd29 +0xe35:  lea    -0xb68(%ebp),%eax
0814cd2f +0xe3b:  mov    %eax,(%esp)
0814cd32 +0xe3e:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0814cd37 +0xe43:  jmp    0814cd51 <+0xe5d>
0814cd39 +0xe45:  mov    %edx,%ebx
0814cd3b +0xe47:  mov    %eax,%esi
0814cd3d +0xe49:  lea    -0xab0(%ebp),%eax
0814cd43 +0xe4f:  mov    %eax,(%esp)
0814cd46 +0xe52:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0814cd4b +0xe57:  mov    %esi,%eax
0814cd4d +0xe59:  mov    %ebx,%edx
0814cd4f +0xe5b:  jmp    0814cd61 <+0xe6d>
0814cd51 +0xe5d:  lea    -0xab0(%ebp),%eax
0814cd57 +0xe63:  mov    %eax,(%esp)
0814cd5a +0xe66:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0814cd5f +0xe6b:  jmp    0814cd79 <+0xe85>
0814cd61 +0xe6d:  mov    %edx,%ebx
0814cd63 +0xe6f:  mov    %eax,%esi
0814cd65 +0xe71:  lea    -0xaa8(%ebp),%eax
0814cd6b +0xe77:  mov    %eax,(%esp)
0814cd6e +0xe7a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0814cd73 +0xe7f:  mov    %esi,%eax
0814cd75 +0xe81:  mov    %ebx,%edx
0814cd77 +0xe83:  jmp    0814cd89 <+0xe95>
0814cd79 +0xe85:  lea    -0xaa8(%ebp),%eax
0814cd7f +0xe8b:  mov    %eax,(%esp)
0814cd82 +0xe8e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0814cd87 +0xe93:  jmp    0814cda1 <+0xead>
0814cd89 +0xe95:  mov    %edx,%ebx
0814cd8b +0xe97:  mov    %eax,%esi
0814cd8d +0xe99:  lea    -0xf50(%ebp),%eax
0814cd93 +0xe9f:  mov    %eax,(%esp)
0814cd96 +0xea2:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814cd9b +0xea7:  mov    %esi,%eax
0814cd9d +0xea9:  mov    %ebx,%edx
0814cd9f +0xeab:  jmp    0814cdb1 <+0xebd>
0814cda1 +0xead:  lea    -0xf50(%ebp),%eax
0814cda7 +0xeb3:  mov    %eax,(%esp)
0814cdaa +0xeb6:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814cdaf +0xebb:  jmp    0814cdc9 <+0xed5>
0814cdb1 +0xebd:  mov    %edx,%ebx
0814cdb3 +0xebf:  mov    %eax,%esi
0814cdb5 +0xec1:  lea    -0xa98(%ebp),%eax
0814cdbb +0xec7:  mov    %eax,(%esp)
0814cdbe +0xeca:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0814cdc3 +0xecf:  mov    %esi,%eax
0814cdc5 +0xed1:  mov    %ebx,%edx
0814cdc7 +0xed3:  jmp    0814cdd9 <+0xee5>
0814cdc9 +0xed5:  lea    -0xa98(%ebp),%eax
0814cdcf +0xedb:  mov    %eax,(%esp)
0814cdd2 +0xede:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0814cdd7 +0xee3:  jmp    0814cdf7 <+0xf03>
0814cdd9 +0xee5:  mov    %edx,%ebx
0814cddb +0xee7:  mov    %eax,%esi
0814cddd +0xee9:  lea    -0xa80(%ebp),%eax
0814cde3 +0xeef:  mov    %eax,(%esp)
0814cde6 +0xef2:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
0814cdeb +0xef7:  mov    %esi,%eax
0814cded +0xef9:  mov    %ebx,%edx
0814cdef +0xefb:  mov    %eax,(%esp)
0814cdf2 +0xefe:  call   08ae3750 <_Unwind_Resume>
0814cdf7 +0xf03:  lea    -0xa80(%ebp),%eax
0814cdfd +0xf09:  mov    %eax,(%esp)
0814ce00 +0xf0c:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
0814ce05 +0xf11:  mov    %ebx,%eax
0814ce07 +0xf13:  lea    -0xc(%ebp),%esp
0814ce0a +0xf16:  add    $0x0,%esp
0814ce0d +0xf19:  pop    %ebx
0814ce0e +0xf1a:  pop    %esi
0814ce0f +0xf1b:  pop    %edi
0814ce10 +0xf1c:  pop    %ebp
0814ce11 +0xf1d:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::consistMap @ 0x814bef4

/* WARNING: Type propagation algorithm not settling */
/* WongWork::CBossStage::consistMap(CMap const*) */

undefined4 __thiscall WongWork::CBossStage::consistMap(CBossStage *this,CMap *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  map *pmVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int local_fd4 [2];
  int aiStack_fc0 [27];
  int local_f54;
  int local_f50;
  char local_f4c;
  uint local_f48;
  byte local_f44;
  undefined1 local_f43;
  undefined1 local_f42;
  undefined1 local_f41;
  undefined1 local_f40;
  uint local_f28;
  undefined4 local_c08;
  int local_c04;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined4 local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined4 local_bd0;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4 [52];
  undefined4 local_b80;
  undefined1 local_b6c [52];
  int *local_b38;
  undefined1 local_b34;
  undefined1 local_b33;
  undefined1 local_b24 [48];
  undefined1 local_af4 [4];
  undefined1 local_af0 [4];
  undefined1 local_aec [4];
  undefined1 local_ae8 [4];
  undefined1 local_ae4 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_ae0 [4];
  __normal_iterator local_adc [4];
  __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
  local_ad8 [4];
  undefined1 local_ad4 [4];
  undefined1 local_ad0 [8];
  int local_ac8;
  int local_ac4;
  int local_ac0;
  int local_abc;
  undefined1 local_ab8 [4];
  undefined1 local_ab4 [8];
  undefined1 local_aac [12];
  int local_aa0;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a9c [24];
  vector<unsigned_int,std::allocator<unsigned_int>> local_a84 [12];
  uint local_a78;
  undefined4 local_a74;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a70 [4];
  int local_a6c [2];
  map_monster local_a64 [844];
  undefined1 local_718 [4];
  undefined1 local_714 [4];
  undefined4 local_710;
  int local_70c;
  undefined4 local_708;
  undefined1 local_704 [4];
  undefined1 local_700 [4];
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined1 local_6f4 [4];
  int local_6f0 [2];
  undefined1 local_6e8 [844];
  undefined1 local_39c [4];
  undefined1 local_398 [4];
  undefined1 local_394 [4];
  undefined1 local_390 [844];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  CAICharacter *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  
  bVar14 = 0;
  piVar12 = (int *)&stack0xfffff034;
  uVar4 = CMap::get_index(param_1);
  *(undefined4 *)(this + 0x9f8) = uVar4;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_a84);
                    /* try { // try from 0814bf2b to 0814bf2f has its CatchHandler @ 0814cdd9 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_a9c);
                    /* try { // try from 0814bf30 to 0814bf69 has its CatchHandler @ 0814cdb1 */
  iVar5 = G_CDataManager();
  pmVar6 = (map *)CAICharacterList::getAPCount(*(CAICharacterList **)(iVar5 + 0x869c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
            (local_a9c,pmVar6);
  local_40 = 0;
  map_monster::map_monster((map_monster *)&local_f54);
  local_3c = CMap::getAICharacters(param_1);
                    /* try { // try from 0814bf7e to 0814c1a1 has its CatchHandler @ 0814cd89 */
  cVar2 = std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
          empty();
  if (cVar2 != '\x01') {
    local_40 = 0;
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::begin();
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::end();
    while (bVar3 = __gnu_cxx::operator!=(local_ad8,local_adc), bVar3) {
      local_34 = (uint *)__gnu_cxx::
                         __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                         ::operator*(local_ad8);
      uVar10 = *local_34;
      iVar5 = G_CDataManager();
      local_30 = (CAICharacter *)
                 CAICharacterList::get(*(CAICharacterList **)(iVar5 + 0x869c),uVar10);
      if (local_30 == (CAICharacter *)0x0) {
        uVar4 = 0;
        goto LAB_0814cda1;
      }
      local_a78 = CAICharacter::getIdx(local_30);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(local_a84,&local_a78);
      iVar5 = CAICharacter::getAppearancePoint(local_30);
      if (iVar5 != 0) {
        local_a74 = CAICharacter::getAppearancePoint(local_30);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_ae0);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_a70);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_ae0,(_Rb_tree_iterator *)local_a70);
        if (cVar2 != '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          local_a6c[0] = *(int *)(iVar7 + 4) + -1;
          local_a6c[1] = 0;
          piVar8 = std::max<int>(local_a6c + 1,local_a6c);
          *(int *)(iVar5 + 4) = *piVar8;
        }
      }
      memset(&local_f54,0,0x34c);
      local_f54 = local_40;
      local_f48 = *local_34;
      local_f50 = *(int *)(this + 0xa30);
      *(int *)(this + 0xa30) = local_f50 + 1;
      local_f4c = '\x05';
      local_f44 = CAICharacter::getLevel(local_30);
      local_f28 = local_34[4];
      local_f43 = 0;
      local_f42 = 0;
      map_monster::map_monster(local_a64,(map_monster *)&local_f54);
                    /* try { // try from 0814c1b8 to 0814c1bc has its CatchHandler @ 0814c1bf */
      MapInfo::Add_Mob();
                    /* try { // try from 0814c1e3 to 0814c597 has its CatchHandler @ 0814cd89 */
      map_monster::~map_monster(local_a64);
      local_40 = local_40 + 1;
      __gnu_cxx::
      __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
      ::operator++(local_ad8);
    }
  }
  local_aa0 = CMap::getAPCRandomPoint(param_1);
  piVar8 = (int *)&stack0xfffff034;
  if (local_aa0 != 0) {
    local_40 = 0x40;
    piVar12 = (int *)&stack0xfffff034;
    do {
      while( true ) {
        piVar12[-1] = 0x814c5ea;
        iVar5 = G_CDataManager();
        *piVar12 = *(undefined4 *)(iVar5 + 0x869c);
        piVar12[-1] = 0x814c5f8;
        iVar5 = CAICharacterList::getMinAP((CAICharacterList *)*piVar12);
        piVar8 = piVar12;
        if (local_aa0 < iVar5) goto LAB_0814c60b;
        *piVar12 = local_aa0;
        piVar12[-1] = 0x814c253;
        iVar5 = get_rand_int(*piVar12);
        piVar12[-1] = 0x814c25d;
        iVar7 = G_CDataManager();
        uVar4 = *(undefined4 *)(iVar7 + 0x869c);
        piVar12[1] = iVar5 + 1;
        *piVar12 = uVar4;
        piVar12[-1] = 0x814c26f;
        local_2c = CAICharacterList::getByAP((CAICharacterList *)*piVar12,piVar12[1]);
        if (local_2c == 0) {
          uVar4 = 0;
          goto LAB_0814cda1;
        }
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)local_718;
        piVar12[-1] = 0x814c29a;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        *piVar12 = local_2c;
        piVar12[-1] = 0x814c2a8;
        local_710 = CAICharacter::getIdx((CAICharacter *)*piVar12);
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_70c;
        piVar12[-1] = 0x814c2c6;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_708;
        piVar12[-1] = 0x814c2e1;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
        piVar12[3] = (int)&local_710;
        piVar12[2] = local_70c;
        piVar12[1] = local_708;
        *piVar12 = (int)local_714;
        piVar12[-1] = 0x814c310;
        std::
        find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                  ();
        piVar11 = piVar12 + -1;
        *piVar12 = (int)local_718;
        piVar12[-1] = (int)local_714;
        piVar12[-2] = 0x814c32b;
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)piVar12[-1],(__normal_iterator *)*piVar12);
        if (bVar3) break;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c404;
        local_6fc = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        *piVar12 = (int)&local_6fc;
        piVar12[-1] = (int)local_a84;
        piVar12[-2] = 0x814c422;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)piVar12[-1],(uint *)*piVar12
                  );
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c42d;
        local_6f8 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        piVar12[1] = (int)&local_6f8;
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x814c455;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)piVar12[-1]);
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_6f4;
        piVar12[-2] = 0x814c470;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                  ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                   piVar12[-1]);
        *piVar12 = (int)local_6f4;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x814c48b;
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_iterator *)*piVar12);
        if (cVar2 != '\0') {
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x814c49d;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x814c4ad;
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          local_6f0[0] = *(int *)(iVar7 + 4) + -1;
          local_6f0[1] = 0;
          *piVar12 = (int)local_6f0;
          piVar12[-1] = (int)(local_6f0 + 1);
          piVar12[-2] = 0x814c4db;
          piVar8 = std::max<int>((int *)piVar12[-1],(int *)*piVar12);
          *(int *)(iVar5 + 4) = *piVar8;
        }
        iVar5 = local_aa0;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c4f1;
        iVar7 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        local_aa0 = iVar5 - iVar7;
        piVar12[1] = 0x34c;
        *piVar12 = 0;
        piVar12[-1] = (int)&local_f54;
        piVar12[-2] = 0x814c51b;
        memset((void *)piVar12[-1],*piVar12,piVar12[1]);
        local_f54 = local_40;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c52f;
        local_f48 = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        local_f50 = *(int *)(this + 0xa30);
        *(int *)(this + 0xa30) = *(int *)(this + 0xa30) + 1;
        local_f4c = '\x05';
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c562;
        local_f44 = CAICharacter::getLevel((CAICharacter *)piVar12[-1]);
        local_f28 = 100;
        local_f43 = 0;
        local_f42 = 0;
        *piVar12 = (int)&local_f54;
        piVar12[-1] = (int)local_6e8;
        piVar12[-2] = 0x814c598;
        map_monster::map_monster((map_monster *)piVar12[-1],(map_monster *)*piVar12);
        *piVar12 = (int)local_6e8;
        piVar12[-1] = (int)(this + 0x9f4);
                    /* try { // try from 0814c5ae to 0814c5b2 has its CatchHandler @ 0814c5b5 */
        piVar12[-2] = 0x814c5b3;
        MapInfo::Add_Mob();
        piVar12[-1] = (int)local_6e8;
                    /* try { // try from 0814c5d9 to 0814c64e has its CatchHandler @ 0814cd89 */
        piVar12[-2] = 0x814c5de;
        map_monster::~map_monster((map_monster *)piVar12[-1]);
        local_40 = local_40 + 1;
        piVar12 = piVar12 + -1;
      }
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_704;
      piVar12[-2] = 0x814c34b;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                );
      *piVar12 = (int)local_704;
      piVar12[-1] = (int)local_ae8;
      piVar12[-2] = 0x814c366;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      piVar12[1] = (int)&local_aa0;
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_700;
      piVar12[-2] = 0x814c388;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                 ,(int *)*piVar12);
      *piVar12 = (int)local_700;
      piVar12[-1] = (int)local_aec;
      piVar12[-2] = 0x814c3a3;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      local_28 = 0;
      while( true ) {
        *piVar12 = (int)local_aec;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x814c3e6;
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_const_iterator *)*piVar12);
        if (cVar2 == '\0') break;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x814c3ba;
        iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
        local_28 = local_28 + *(int *)(iVar5 + 4);
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x814c3ce;
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
      }
      piVar12 = piVar12 + -1;
      piVar8 = piVar11;
    } while (local_28 != 0);
  }
LAB_0814c60b:
  piVar12 = piVar8;
  *piVar12 = 0;
  piVar12[-1] = 0x814c617;
  uVar4 = get_rand_int(*piVar12);
  *(undefined4 *)(this + 0xa3c) = uVar4;
  *(uint *)(this + 0xa3c) = *(uint *)(this + 0xa3c) & 0xfffbffff;
  local_40 = 0;
  *piVar12 = (int)local_aac;
  piVar12[-1] = 0x814c64f;
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)*piVar12);
  piVar12[1] = (int)param_1;
  *piVar12 = (int)local_ab4;
                    /* try { // try from 0814c65f to 0814c663 has its CatchHandler @ 0814cd61 */
  piVar12[-1] = 0x814c664;
  CMap::get_monster_list();
  piVar12[1] = (int)local_ab4;
  *piVar12 = (int)local_39c;
                    /* try { // try from 0814c67a to 0814c849 has its CatchHandler @ 0814cd39 */
  piVar12[-1] = 0x814c67f;
  std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
  piVar12[1] = (int)local_39c;
  *piVar12 = (int)local_ab8;
  piVar12[-1] = 0x814c69a;
  std::_List_const_iterator<_mapMonster>::_List_const_iterator
            ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
  while( true ) {
    piVar12[1] = (int)local_ab4;
    *piVar12 = (int)local_394;
    piVar12[-1] = 0x814c8ba;
    std::list<_mapMonster,std::allocator<_mapMonster>>::end();
    piVar12[1] = (int)local_394;
    *piVar12 = (int)local_398;
    piVar12[-1] = 0x814c8d5;
    std::_List_const_iterator<_mapMonster>::_List_const_iterator
              ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
    piVar12[1] = (int)local_398;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x814c8ed;
    cVar2 = std::_List_const_iterator<_mapMonster>::operator!=
                      ((_List_const_iterator<_mapMonster> *)*piVar12,
                       (_List_const_iterator *)piVar12[1]);
    if (cVar2 == '\0') break;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x814c6ad;
    local_24 = (uint *)std::_List_const_iterator<_mapMonster>::operator*
                                 ((_List_const_iterator<_mapMonster> *)*piVar12);
    piVar12[2] = 0x34c;
    piVar12[1] = 0;
    *piVar12 = (int)&local_f54;
    piVar12[-1] = 0x814c6ce;
    memset((void *)*piVar12,piVar12[1],piVar12[2]);
    local_f54 = local_40;
    if ((char)local_24[1] == '\0') {
      local_f44 = (byte)local_24[2];
    }
    else {
      *piVar12 = *(undefined4 *)(this + 0x9f0);
      piVar12[-1] = 0x814c6f3;
      cVar2 = CDungeon::get_standard_level((CDungeon *)*piVar12);
      local_f44 = cVar2 + (char)local_24[2];
      if ((local_f44 < 99) && (local_f44 == 0)) {
        local_f44 = 1;
      }
      else if (99 < local_f44) {
        local_f44 = 99;
      }
    }
    if (*local_24 == 0xffffffff) {
      uVar10 = (uint)local_f44;
      piVar12[-1] = 0x814c761;
      iVar5 = G_CDataManager();
      uVar4 = *(undefined4 *)(iVar5 + 8);
      piVar12[1] = uVar10;
      *piVar12 = uVar4;
      piVar12[-1] = 0x814c770;
      local_f48 = CMonsterManager::get_levelrandom_mob(*piVar12);
    }
    else {
      local_f48 = *local_24;
    }
    local_f43 = (char)local_24[4];
    local_f42 = (char)local_24[5];
    uVar10 = local_24[6];
    local_f4c = (char)uVar10;
    local_f50 = *(int *)(this + 0xa30);
    *(int *)(this + 0xa30) = *(int *)(this + 0xa30) + 1;
    if ((char)uVar10 == '\0') {
      *piVar12 = (int)&local_f54;
      piVar12[-1] = 0x814c7db;
      cVar2 = map_monster::isNamedMonster((map_monster *)*piVar12);
      if (cVar2 == '\x01') goto LAB_0814c7e9;
      bVar3 = true;
    }
    else {
LAB_0814c7e9:
      bVar3 = false;
    }
    if (bVar3) {
      piVar12[1] = (int)&local_f50;
      *piVar12 = (int)local_aac;
      piVar12[-1] = 0x814c80d;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)*piVar12,(int *)piVar12[1]);
    }
    local_f41 = (char)local_24[7];
    local_f40 = (char)local_24[8];
    local_f28 = local_24[10];
    piVar12[1] = (int)&local_f54;
    *piVar12 = (int)local_390;
    piVar12[-1] = 0x814c84a;
    map_monster::map_monster((map_monster *)*piVar12,(map_monster *)piVar12[1]);
    piVar12[1] = (int)local_390;
    *piVar12 = (int)(this + 0x9f4);
                    /* try { // try from 0814c860 to 0814c864 has its CatchHandler @ 0814c867 */
    piVar12[-1] = 0x814c865;
    MapInfo::Add_Mob();
    *piVar12 = (int)local_390;
                    /* try { // try from 0814c88b to 0814c924 has its CatchHandler @ 0814cd39 */
    piVar12[-1] = 0x814c890;
    map_monster::~map_monster((map_monster *)*piVar12);
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x814c89e;
    std::_List_const_iterator<_mapMonster>::operator++
              ((_List_const_iterator<_mapMonster> *)*piVar12);
    local_40 = local_40 + 1;
  }
  *piVar12 = (int)&local_ac8;
  piVar12[-1] = 0x814c903;
  _mapItem::_mapItem((_mapItem *)*piVar12);
  *piVar12 = *(undefined4 *)(this + 0x9f0);
  piVar12[-1] = 0x814c914;
  local_38 = CDungeon::getSpecialPassiveObjectItems((CDungeon *)*piVar12);
  *piVar12 = (int)local_b6c;
  piVar12[-1] = 0x814c925;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = (int)local_bb4;
                    /* try { // try from 0814c92e to 0814c932 has its CatchHandler @ 0814cd11 */
  piVar12[-1] = 0x814c933;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = *(undefined4 *)(this + 0x9f0);
  piVar12[-1] = 0x814c944;
  local_b80 = CDungeon::getObjectDropItems((CDungeon *)*piVar12);
  piVar12[1] = (int)param_1;
  *piVar12 = (int)local_ad0;
                    /* try { // try from 0814c95a to 0814c95e has its CatchHandler @ 0814cce9 */
  piVar12[-1] = 0x814c95f;
  CMap::get_item_list();
  piVar12[1] = (int)local_ad0;
  *piVar12 = (int)local_ad4;
                    /* try { // try from 0814c975 to 0814ca47 has its CatchHandler @ 0814ccd1 */
  piVar12[-1] = 0x814c97a;
  std::list<_mapItem,std::allocator<_mapItem>>::begin();
  do {
    piVar12[1] = (int)local_ad0;
    *piVar12 = (int)local_44;
                    /* try { // try from 0814cc97 to 0814cc9b has its CatchHandler @ 0814ccd1 */
    piVar12[-1] = 0x814cc9c;
    std::list<_mapItem,std::allocator<_mapItem>>::end();
    piVar12[1] = (int)local_44;
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x814ccb4;
    cVar2 = std::_List_iterator<_mapItem>::operator!=
                      ((_List_iterator<_mapItem> *)*piVar12,(_List_iterator *)piVar12[1]);
    if (cVar2 == '\0') {
      uVar4 = 1;
      *piVar12 = (int)local_ad0;
                    /* try { // try from 0814ccca to 0814ccce has its CatchHandler @ 0814cce9 */
      piVar12[-1] = 0x814cccf;
      std::list<_mapItem,std::allocator<_mapItem>>::~list
                ((list<_mapItem,std::allocator<_mapItem>> *)*piVar12);
      *piVar12 = (int)local_bb4;
                    /* try { // try from 0814cd0a to 0814cd0e has its CatchHandler @ 0814cd11 */
      piVar12[-1] = 0x814cd0f;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_b6c;
                    /* try { // try from 0814cd32 to 0814cd36 has its CatchHandler @ 0814cd39 */
      piVar12[-1] = 0x814cd37;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_ab4;
                    /* try { // try from 0814cd5a to 0814cd5e has its CatchHandler @ 0814cd61 */
      piVar12[-1] = 0x814cd5f;
      std::list<_mapMonster,std::allocator<_mapMonster>>::~list
                ((list<_mapMonster,std::allocator<_mapMonster>> *)*piVar12);
      *piVar12 = (int)local_aac;
                    /* try { // try from 0814cd82 to 0814cd86 has its CatchHandler @ 0814cd89 */
      piVar12[-1] = 0x814cd87;
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)*piVar12);
LAB_0814cda1:
      *piVar12 = (int)&local_f54;
                    /* try { // try from 0814cdaa to 0814cdae has its CatchHandler @ 0814cdb1 */
      piVar12[-1] = 0x814cdaf;
      map_monster::~map_monster((map_monster *)*piVar12);
      *piVar12 = (int)local_a9c;
                    /* try { // try from 0814cdd2 to 0814cdd6 has its CatchHandler @ 0814cdd9 */
      piVar12[-1] = 0x814cdd7;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)*piVar12);
      *piVar12 = (int)local_a84;
      piVar12[-1] = 0x814ce05;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)*piVar12);
      return uVar4;
    }
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x814c990;
    piVar8 = (int *)std::_List_iterator<_mapItem>::operator*((_List_iterator<_mapItem> *)*piVar12);
    local_ac8 = *piVar8;
    local_ac4 = piVar8[1];
    local_ac0 = piVar8[2];
    local_abc = piVar8[3];
    piVar12[1] = *piVar8;
    *piVar12 = local_38;
    piVar12[-1] = 0x814c9c8;
    local_20 = (int *)std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::at
                                ((vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>
                                  *)*piVar12,piVar12[1]);
    if (*local_20 != -1) {
      local_b34 = (char)*local_20;
      goto LAB_0814ca3a;
    }
    *piVar12 = *(undefined4 *)(this + 0x9f0);
    piVar12[-1] = 0x814c9f3;
    iVar5 = CDungeon::get_standard_level((CDungeon *)*piVar12);
    if (iVar5 < 1) {
LAB_0814ca0f:
      bVar3 = true;
    }
    else {
      *piVar12 = *(undefined4 *)(this + 0x9f0);
      piVar12[-1] = 0x814ca08;
      iVar5 = CDungeon::get_standard_level((CDungeon *)*piVar12);
      if (200 < iVar5) goto LAB_0814ca0f;
      bVar3 = false;
    }
    if (!bVar3) {
      *piVar12 = *(undefined4 *)(this + 0x9f0);
      piVar12[-1] = 0x814ca34;
      local_b34 = CDungeon::get_standard_level((CDungeon *)*piVar12);
LAB_0814ca3a:
      *piVar12 = (int)local_b24;
      piVar12[-1] = 0x814ca48;
      stGenerateResult_t::stGenerateResult_t((stGenerateResult_t *)*piVar12);
      local_b33 = (undefined1)local_ac4;
      local_b38 = local_20 + 1;
                    /* try { // try from 0814ca60 to 0814cc47 has its CatchHandler @ 0814cc6e */
      piVar12[-1] = 0x814ca65;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x814ca6d;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 1;
      *piVar12 = uVar4;
      piVar12[-1] = 0x814ca7d;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_b6c;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x814ca9d;
      (*pcVar1)();
      piVar12[-1] = 0x814caa2;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x814caaa;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 4;
      *piVar12 = uVar4;
      piVar12[-1] = 0x814caba;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_bb4;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x814cada;
      (*pcVar1)();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af0;
      piVar12[-1] = 0x814caf2;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af4;
      piVar12[-1] = 0x814cb0d;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      while( true ) {
        piVar12[1] = (int)local_af4;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x814cc48;
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar12,(__normal_iterator *)piVar12[1])
        ;
        if (!bVar3) break;
        *piVar12 = (int)&local_c08;
        piVar12[-1] = 0x814cb23;
        map_item::map_item((map_item *)*piVar12);
        local_c08._0_1_ = 1;
        local_c04 = *(int *)(this + 0xa34);
        *(int *)(this + 0xa34) = *(int *)(this + 0xa34) + 1;
        local_c08._1_1_ = (char)local_abc;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x814cb5f;
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                            *)*piVar12);
        local_bf8 = *puVar9;
        local_bf4 = puVar9[1];
        local_bf0 = puVar9[2];
        local_bec = puVar9[3];
        local_be8 = puVar9[4];
        local_be4 = puVar9[5];
        local_be0 = puVar9[6];
        local_bdc = puVar9[7];
        local_bd8 = puVar9[8];
        local_bd4 = puVar9[9];
        local_bd0 = puVar9[10];
        local_bcc = puVar9[0xb];
        local_bc8 = puVar9[0xc];
        local_bc4 = puVar9[0xd];
        local_bc0 = puVar9[0xe];
        local_bbc = *(undefined1 *)(puVar9 + 0xf);
        piVar8 = &local_c08;
        piVar13 = piVar12 + 1;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar13 = *piVar8;
          piVar8 = piVar8 + (uint)bVar14 * -2 + 1;
          piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
        }
        *piVar12 = (int)(this + 0x9f4);
        piVar12[-1] = 0x814cc22;
        MapInfo::Add_Item();
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x814cc30;
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                      *)*piVar12);
      }
      *piVar12 = (int)local_ad4;
      piVar12[-1] = 0x814cc5e;
      std::_List_iterator<_mapItem>::operator++((_List_iterator<_mapItem> *)*piVar12);
      *piVar12 = (int)local_b24;
                    /* try { // try from 0814cc67 to 0814cc6b has its CatchHandler @ 0814ccd1 */
      piVar12[-1] = 0x814cc6c;
      stGenerateResult_t::~stGenerateResult_t((stGenerateResult_t *)*piVar12);
    }
  } while( true );
}
```
