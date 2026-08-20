# SendMapInfoPacket

`_ZN8WongWork10CBossStage17SendMapInfoPacketEv`

`WongWork::CBossStage::SendMapInfoPacket()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814ce12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814ce12  _ZN8WongWork10CBossStage17SendMapInfoPacketEv
#           WongWork::CBossStage::SendMapInfoPacket()
# range [0x0814ce12, 0x0814d1b1]
0814ce12 +0x000:  push   %ebp
0814ce13 +0x001:  mov    %esp,%ebp
0814ce15 +0x003:  push   %edi
0814ce16 +0x004:  push   %esi
0814ce17 +0x005:  push   %ebx
0814ce18 +0x006:  sub    $0x3dc,%esp
0814ce1e +0x00c:  lea    -0x2c(%ebp),%eax
0814ce21 +0x00f:  mov    %eax,(%esp)
0814ce24 +0x012:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814ce29 +0x017:  movl   $0x1e2,0x8(%esp)
0814ce31 +0x01f:  movl   $0x0,0x4(%esp)
0814ce39 +0x027:  lea    -0x2c(%ebp),%eax
0814ce3c +0x02a:  mov    %eax,(%esp)
0814ce3f +0x02d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814ce44 +0x032:  mov    0x8(%ebp),%eax
0814ce47 +0x035:  mov    0xae0(%eax),%eax
0814ce4d +0x03b:  mov    %eax,0x4(%esp)
0814ce51 +0x03f:  lea    -0x2c(%ebp),%eax
0814ce54 +0x042:  mov    %eax,(%esp)
0814ce57 +0x045:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814ce5c +0x04a:  mov    0x8(%ebp),%eax
0814ce5f +0x04d:  mov    0xa3c(%eax),%eax
0814ce65 +0x053:  mov    %eax,0x4(%esp)
0814ce69 +0x057:  lea    -0x2c(%ebp),%eax
0814ce6c +0x05a:  mov    %eax,(%esp)
0814ce6f +0x05d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814ce74 +0x062:  mov    0x8(%ebp),%eax
0814ce77 +0x065:  mov    0x9f8(%eax),%eax
0814ce7d +0x06b:  mov    %eax,0x4(%esp)
0814ce81 +0x06f:  lea    -0x2c(%ebp),%eax
0814ce84 +0x072:  mov    %eax,(%esp)
0814ce87 +0x075:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814ce8c +0x07a:  mov    0x8(%ebp),%eax
0814ce8f +0x07d:  add    $0xa00,%eax
0814ce94 +0x082:  mov    %eax,(%esp)
0814ce97 +0x085:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
0814ce9c +0x08a:  mov    %eax,0x4(%esp)
0814cea0 +0x08e:  lea    -0x2c(%ebp),%eax
0814cea3 +0x091:  mov    %eax,(%esp)
0814cea6 +0x094:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ceab +0x099:  mov    0x8(%ebp),%eax
0814ceae +0x09c:  lea    0xa00(%eax),%edx
0814ceb4 +0x0a2:  lea    -0x30(%ebp),%eax
0814ceb7 +0x0a5:  mov    %edx,0x4(%esp)
0814cebb +0x0a9:  mov    %eax,(%esp)
0814cebe +0x0ac:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
0814cec3 +0x0b1:  sub    $0x4,%esp
0814cec6 +0x0b4:  jmp    0814cfc5 <+0x1b3>
0814cecb +0x0b9:  lea    -0x30(%ebp),%eax
0814cece +0x0bc:  mov    %eax,(%esp)
0814ced1 +0x0bf:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0814ced6 +0x0c4:  add    $0x4,%eax
0814ced9 +0x0c7:  mov    %eax,0x4(%esp)
0814cedd +0x0cb:  lea    -0x3d4(%ebp),%eax
0814cee3 +0x0d1:  mov    %eax,(%esp)
0814cee6 +0x0d4:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
0814ceeb +0x0d9:  mov    -0x3d4(%ebp),%eax
0814cef1 +0x0df:  mov    %eax,0x4(%esp)
0814cef5 +0x0e3:  lea    -0x2c(%ebp),%eax
0814cef8 +0x0e6:  mov    %eax,(%esp)
0814cefb +0x0e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814cf00 +0x0ee:  mov    -0x3d0(%ebp),%eax
0814cf06 +0x0f4:  cwtl
0814cf07 +0x0f5:  mov    %eax,0x4(%esp)
0814cf0b +0x0f9:  lea    -0x2c(%ebp),%eax
0814cf0e +0x0fc:  mov    %eax,(%esp)
0814cf11 +0x0ff:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814cf16 +0x104:  mov    -0x3c8(%ebp),%eax
0814cf1c +0x10a:  mov    %eax,0x4(%esp)
0814cf20 +0x10e:  lea    -0x2c(%ebp),%eax
0814cf23 +0x111:  mov    %eax,(%esp)
0814cf26 +0x114:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814cf2b +0x119:  movzbl -0x3c4(%ebp),%eax
0814cf32 +0x120:  movzbl %al,%eax
0814cf35 +0x123:  mov    %eax,0x4(%esp)
0814cf39 +0x127:  lea    -0x2c(%ebp),%eax
0814cf3c +0x12a:  mov    %eax,(%esp)
0814cf3f +0x12d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814cf44 +0x132:  movzbl -0x3cc(%ebp),%eax
0814cf4b +0x139:  movsbl %al,%eax
0814cf4e +0x13c:  mov    %eax,0x4(%esp)
0814cf52 +0x140:  lea    -0x2c(%ebp),%eax
0814cf55 +0x143:  mov    %eax,(%esp)
0814cf58 +0x146:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814cf5d +0x14b:  movzbl -0x3c1(%ebp),%eax
0814cf64 +0x152:  movzbl %al,%eax
0814cf67 +0x155:  mov    %eax,0x4(%esp)
0814cf6b +0x159:  lea    -0x2c(%ebp),%eax
0814cf6e +0x15c:  mov    %eax,(%esp)
0814cf71 +0x15f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814cf76 +0x164:  movzbl -0x3c0(%ebp),%eax
0814cf7d +0x16b:  movzbl %al,%eax
0814cf80 +0x16e:  mov    %eax,0x4(%esp)
0814cf84 +0x172:  lea    -0x2c(%ebp),%eax
0814cf87 +0x175:  mov    %eax,(%esp)
0814cf8a +0x178:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814cf8f +0x17d:  lea    -0x30(%ebp),%eax
0814cf92 +0x180:  mov    %eax,(%esp)
0814cf95 +0x183:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
0814cf9a +0x188:  jmp    0814cfb7 <+0x1a5>
0814cf9c +0x18a:  mov    %edx,%ebx
0814cf9e +0x18c:  mov    %eax,%esi
0814cfa0 +0x18e:  lea    -0x3d4(%ebp),%eax
0814cfa6 +0x194:  mov    %eax,(%esp)
0814cfa9 +0x197:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814cfae +0x19c:  mov    %esi,%eax
0814cfb0 +0x19e:  mov    %ebx,%edx
0814cfb2 +0x1a0:  jmp    0814d19b <+0x389>
0814cfb7 +0x1a5:  lea    -0x3d4(%ebp),%eax
0814cfbd +0x1ab:  mov    %eax,(%esp)
0814cfc0 +0x1ae:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0814cfc5 +0x1b3:  mov    0x8(%ebp),%eax
0814cfc8 +0x1b6:  lea    0xa00(%eax),%edx
0814cfce +0x1bc:  lea    -0x20(%ebp),%eax
0814cfd1 +0x1bf:  mov    %edx,0x4(%esp)
0814cfd5 +0x1c3:  mov    %eax,(%esp)
0814cfd8 +0x1c6:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0814cfdd +0x1cb:  sub    $0x4,%esp
0814cfe0 +0x1ce:  lea    -0x20(%ebp),%eax
0814cfe3 +0x1d1:  mov    %eax,0x4(%esp)
0814cfe7 +0x1d5:  lea    -0x30(%ebp),%eax
0814cfea +0x1d8:  mov    %eax,(%esp)
0814cfed +0x1db:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
0814cff2 +0x1e0:  test   %al,%al
0814cff4 +0x1e2:  jne    0814cecb <+0xb9>
0814cffa +0x1e8:  mov    0x8(%ebp),%eax
0814cffd +0x1eb:  add    $0xa18,%eax
0814d002 +0x1f0:  mov    %eax,(%esp)
0814d005 +0x1f3:  call   0815297a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22af
0814d00a +0x1f8:  mov    %eax,0x4(%esp)
0814d00e +0x1fc:  lea    -0x2c(%ebp),%eax
0814d011 +0x1ff:  mov    %eax,(%esp)
0814d014 +0x202:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814d019 +0x207:  mov    0x8(%ebp),%eax
0814d01c +0x20a:  lea    0xa18(%eax),%edx
0814d022 +0x210:  lea    -0x34(%ebp),%eax
0814d025 +0x213:  mov    %edx,0x4(%esp)
0814d029 +0x217:  mov    %eax,(%esp)
0814d02c +0x21a:  call   0815298e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22c3
0814d031 +0x21f:  sub    $0x4,%esp
0814d034 +0x222:  jmp    0814d121 <+0x30f>
0814d039 +0x227:  lea    -0x34(%ebp),%eax
0814d03c +0x22a:  mov    %eax,(%esp)
0814d03f +0x22d:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
0814d044 +0x232:  lea    -0x88(%ebp),%edx
0814d04a +0x238:  lea    0x4(%eax),%ebx
0814d04d +0x23b:  mov    $0x15,%eax
0814d052 +0x240:  mov    %edx,%edi
0814d054 +0x242:  mov    %ebx,%esi
0814d056 +0x244:  mov    %eax,%ecx
0814d058 +0x246:  rep movsl %ds:(%esi),%es:(%edi)
0814d05a +0x248:  movzbl -0x87(%ebp),%eax
0814d061 +0x24f:  movsbl %al,%eax
0814d064 +0x252:  mov    %eax,0x4(%esp)
0814d068 +0x256:  lea    -0x2c(%ebp),%eax
0814d06b +0x259:  mov    %eax,(%esp)
0814d06e +0x25c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814d073 +0x261:  mov    -0x84(%ebp),%eax
0814d079 +0x267:  mov    %eax,0x4(%esp)
0814d07d +0x26b:  lea    -0x2c(%ebp),%eax
0814d080 +0x26e:  mov    %eax,(%esp)
0814d083 +0x271:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814d088 +0x276:  mov    -0x76(%ebp),%eax
0814d08b +0x279:  mov    %eax,0x4(%esp)
0814d08f +0x27d:  lea    -0x2c(%ebp),%eax
0814d092 +0x280:  mov    %eax,(%esp)
0814d095 +0x283:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814d09a +0x288:  lea    -0x88(%ebp),%eax
0814d0a0 +0x28e:  add    $0x10,%eax
0814d0a3 +0x291:  mov    %eax,(%esp)
0814d0a6 +0x294:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0814d0ab +0x299:  mov    %eax,0x4(%esp)
0814d0af +0x29d:  lea    -0x2c(%ebp),%eax
0814d0b2 +0x2a0:  mov    %eax,(%esp)
0814d0b5 +0x2a3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814d0ba +0x2a8:  movzwl -0x6d(%ebp),%eax
0814d0be +0x2ac:  movzwl %ax,%eax
0814d0c1 +0x2af:  mov    %eax,0x4(%esp)
0814d0c5 +0x2b3:  lea    -0x2c(%ebp),%eax
0814d0c8 +0x2b6:  mov    %eax,(%esp)
0814d0cb +0x2b9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814d0d0 +0x2be:  lea    -0x88(%ebp),%eax
0814d0d6 +0x2c4:  add    $0x21,%eax
0814d0d9 +0x2c7:  mov    %eax,(%esp)
0814d0dc +0x2ca:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0814d0e1 +0x2cf:  movzbl %al,%eax
0814d0e4 +0x2d2:  mov    %eax,0x4(%esp)
0814d0e8 +0x2d6:  lea    -0x2c(%ebp),%eax
0814d0eb +0x2d9:  mov    %eax,(%esp)
0814d0ee +0x2dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814d0f3 +0x2e1:  lea    -0x88(%ebp),%eax
0814d0f9 +0x2e7:  add    $0x21,%eax
0814d0fc +0x2ea:  mov    %eax,(%esp)
0814d0ff +0x2ed:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0814d104 +0x2f2:  movzwl %ax,%eax
0814d107 +0x2f5:  mov    %eax,0x4(%esp)
0814d10b +0x2f9:  lea    -0x2c(%ebp),%eax
0814d10e +0x2fc:  mov    %eax,(%esp)
0814d111 +0x2ff:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814d116 +0x304:  lea    -0x34(%ebp),%eax
0814d119 +0x307:  mov    %eax,(%esp)
0814d11c +0x30a:  call   081529c2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22f7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22f7
0814d121 +0x30f:  mov    0x8(%ebp),%eax
0814d124 +0x312:  lea    0xa18(%eax),%edx
0814d12a +0x318:  lea    -0x1c(%ebp),%eax
0814d12d +0x31b:  mov    %edx,0x4(%esp)
0814d131 +0x31f:  mov    %eax,(%esp)
0814d134 +0x322:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
0814d139 +0x327:  sub    $0x4,%esp
0814d13c +0x32a:  lea    -0x1c(%ebp),%eax
0814d13f +0x32d:  mov    %eax,0x4(%esp)
0814d143 +0x331:  lea    -0x34(%ebp),%eax
0814d146 +0x334:  mov    %eax,(%esp)
0814d149 +0x337:  call   08152584 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1eb9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1eb9
0814d14e +0x33c:  test   %al,%al
0814d150 +0x33e:  jne    0814d039 <+0x227>
0814d156 +0x344:  movl   $0x1,0x4(%esp)
0814d15e +0x34c:  lea    -0x2c(%ebp),%eax
0814d161 +0x34f:  mov    %eax,(%esp)
0814d164 +0x352:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814d169 +0x357:  mov    0x8(%ebp),%eax
0814d16c +0x35a:  mov    0x4(%eax),%eax
0814d16f +0x35d:  lea    -0x2c(%ebp),%edx
0814d172 +0x360:  mov    %edx,0x4(%esp)
0814d176 +0x364:  mov    %eax,(%esp)
0814d179 +0x367:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0814d17e +0x36c:  mov    $0x1,%ebx
0814d183 +0x371:  lea    -0x2c(%ebp),%eax
0814d186 +0x374:  mov    %eax,(%esp)
0814d189 +0x377:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814d18e +0x37c:  mov    %ebx,%eax
0814d190 +0x37e:  lea    -0xc(%ebp),%esp
0814d193 +0x381:  add    $0x0,%esp
0814d196 +0x384:  pop    %ebx
0814d197 +0x385:  pop    %esi
0814d198 +0x386:  pop    %edi
0814d199 +0x387:  pop    %ebp
0814d19a +0x388:  ret
0814d19b +0x389:  mov    %edx,%ebx
0814d19d +0x38b:  mov    %eax,%esi
0814d19f +0x38d:  lea    -0x2c(%ebp),%eax
0814d1a2 +0x390:  mov    %eax,(%esp)
0814d1a5 +0x393:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814d1aa +0x398:  mov    %esi,%eax
0814d1ac +0x39a:  mov    %ebx,%edx
0814d1ae +0x39c:  mov    %eax,(%esp)
0814d1b1 +0x39f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// WongWork::CBossStage::SendMapInfoPacket @ 0x814ce12

/* WongWork::CBossStage::SendMapInfoPacket() */

undefined4 __thiscall WongWork::CBossStage::SendMapInfoPacket(CBossStage *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_3d8 [2];
  char local_3d0;
  int local_3cc;
  byte local_3c8;
  byte local_3c5;
  byte local_3c4;
  undefined4 local_8c;
  int local_88;
  Inven_Item aIStack_7c [2];
  int local_7a;
  ushort local_71;
  stAmplifyOption_t asStack_6b [51];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_38 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_34 [4];
  PacketGuard local_30 [12];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_24 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar7 = 0;
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0814ce3f to 0814ceea has its CatchHandler @ 0814d19b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1e2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,*(int *)(this + 0xae0));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(this + 0xa3c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,*(int *)(this + 0x9f8));
  iVar2 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0xa00));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,iVar2);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_34);
  while( true ) {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34,
                       (_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34);
    map_monster::map_monster((map_monster *)local_3d8,(map_monster *)(iVar2 + 4));
                    /* try { // try from 0814cefb to 0814cf99 has its CatchHandler @ 0814cf9c */
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_3d8[0]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(int)(short)local_3d8[1]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,local_3cc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_3c8);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_3d0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_3c5);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_3c4);
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34);
                    /* try { // try from 0814cfc0 to 0814d17d has its CatchHandler @ 0814d19b */
    map_monster::~map_monster((map_monster *)local_3d8);
  }
  iVar2 = std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::size
                    ((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>
                      *)(this + 0xa18));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,iVar2);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::begin
            (local_38);
  while( true ) {
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_38,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_38);
    puVar5 = (undefined4 *)(iVar2 + 4);
    puVar6 = &local_8c;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_8c._1_1_);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,local_88);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_7a);
    iVar2 = Inven_Item::get_add_info(aIStack_7c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,iVar2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)local_71);
    uVar3 = stAmplifyOption_t::getAbilityType(asStack_6b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar3 & 0xff);
    uVar3 = stAmplifyOption_t::getAbilityValue(asStack_6b);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,uVar3 & 0xffff);
    std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_38);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CParty::send_to_party(*(CParty **)(this + 4),local_30);
  PacketGuard::~PacketGuard(local_30);
  return 1;
}
```
