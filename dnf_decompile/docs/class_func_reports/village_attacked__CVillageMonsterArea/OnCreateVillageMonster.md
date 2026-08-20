# OnCreateVillageMonster

`_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv`

`village_attacked::CVillageMonsterArea::OnCreateVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3bd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3bd4  _ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv
#           village_attacked::CVillageMonsterArea::OnCreateVillageMonster()
# range [0x086b3bd4, 0x086b3edf]
086b3bd4 +0x000:  push   %ebp
086b3bd5 +0x001:  mov    %esp,%ebp
086b3bd7 +0x003:  push   %edi
086b3bd8 +0x004:  push   %esi
086b3bd9 +0x005:  push   %ebx
086b3bda +0x006:  sub    $0xcc,%esp
086b3be0 +0x00c:  mov    0x8(%ebp),%eax
086b3be3 +0x00f:  mov    0x34(%eax),%ebx
086b3be6 +0x012:  mov    0x8(%ebp),%eax
086b3be9 +0x015:  mov    %eax,(%esp)
086b3bec +0x018:  call   086b515c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x686>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x686
086b3bf1 +0x01d:  cmp    %eax,%ebx
086b3bf3 +0x01f:  setbe  %al
086b3bf6 +0x022:  test   %al,%al
086b3bf8 +0x024:  je     086b3c04 <+0x30>
086b3bfa +0x026:  mov    $0x0,%ebx
086b3bff +0x02b:  jmp    086b3ed3 <+0x2ff>
086b3c04 +0x030:  movl   $0x2710,(%esp)
086b3c0b +0x037:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086b3c10 +0x03c:  mov    %eax,-0x20(%ebp)
086b3c13 +0x03f:  mov    -0x20(%ebp),%eax
086b3c16 +0x042:  mov    %eax,0x4(%esp)
086b3c1a +0x046:  mov    0x8(%ebp),%eax
086b3c1d +0x049:  mov    %eax,(%esp)
086b3c20 +0x04c:  call   086b3aea <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi>  ; village_attacked::CVillageMonsterArea::GetAttackedMonster(int)
086b3c25 +0x051:  mov    %eax,-0x1c(%ebp)
086b3c28 +0x054:  cmpl   $0x0,-0x1c(%ebp)
086b3c2c +0x058:  jne    086b3c38 <+0x64>
086b3c2e +0x05a:  mov    $0x0,%ebx
086b3c33 +0x05f:  jmp    086b3ed3 <+0x2ff>
086b3c38 +0x064:  mov    -0x1c(%ebp),%eax
086b3c3b +0x067:  mov    0x18(%eax),%edi
086b3c3e +0x06a:  mov    -0x1c(%ebp),%eax
086b3c41 +0x06d:  mov    0x14(%eax),%esi
086b3c44 +0x070:  mov    0x8(%ebp),%eax
086b3c47 +0x073:  mov    %eax,(%esp)
086b3c4a +0x076:  call   086b515c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x686>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x686
086b3c4f +0x07b:  mov    %eax,%ecx
086b3c51 +0x07d:  mov    $0xaaaaaaab,%edx
086b3c56 +0x082:  mov    %ecx,%eax
086b3c58 +0x084:  mul    %edx
086b3c5a +0x086:  shr    %edx
086b3c5c +0x088:  mov    %edx,%eax
086b3c5e +0x08a:  add    %eax,%eax
086b3c60 +0x08c:  add    %edx,%eax
086b3c62 +0x08e:  mov    %ecx,%edx
086b3c64 +0x090:  sub    %eax,%edx
086b3c66 +0x092:  mov    %edx,%ebx
086b3c68 +0x094:  mov    -0x1c(%ebp),%eax
086b3c6b +0x097:  mov    0x8(%eax),%ecx
086b3c6e +0x09a:  mov    -0x1c(%ebp),%eax
086b3c71 +0x09d:  mov    0x4(%eax),%edx
086b3c74 +0x0a0:  mov    -0x1c(%ebp),%eax
086b3c77 +0x0a3:  mov    (%eax),%eax
086b3c79 +0x0a5:  movzwl %ax,%eax
086b3c7c +0x0a8:  mov    %edi,0x1c(%esp)
086b3c80 +0x0ac:  mov    %esi,0x18(%esp)
086b3c84 +0x0b0:  mov    0x8(%ebp),%esi
086b3c87 +0x0b3:  mov    %esi,0x14(%esp)
086b3c8b +0x0b7:  mov    %ebx,0x10(%esp)
086b3c8f +0x0bb:  mov    %ecx,0xc(%esp)
086b3c93 +0x0bf:  mov    %edx,0x8(%esp)
086b3c97 +0x0c3:  mov    %eax,0x4(%esp)
086b3c9b +0x0c7:  lea    -0xb8(%ebp),%eax
086b3ca1 +0x0cd:  mov    %eax,(%esp)
086b3ca4 +0x0d0:  call   086b3004 <_ZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEii>  ; village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)
086b3ca9 +0x0d5:  lea    -0xb8(%ebp),%eax
086b3caf +0x0db:  mov    %eax,(%esp)
086b3cb2 +0x0de:  call   086b4b64 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x8e>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x8e
086b3cb7 +0x0e3:  mov    %ax,-0x22(%ebp)
086b3cbb +0x0e7:  lea    -0x50(%ebp),%eax
086b3cbe +0x0ea:  lea    -0xb8(%ebp),%edx
086b3cc4 +0x0f0:  mov    %edx,0x8(%esp)
086b3cc8 +0x0f4:  lea    -0x22(%ebp),%edx
086b3ccb +0x0f7:  mov    %edx,0x4(%esp)
086b3ccf +0x0fb:  mov    %eax,(%esp)
086b3cd2 +0x0fe:  call   086b516f <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x699>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x699
086b3cd7 +0x103:  sub    $0x4,%esp
086b3cda +0x106:  lea    -0x50(%ebp),%eax
086b3cdd +0x109:  mov    %eax,0x4(%esp)
086b3ce1 +0x10d:  lea    -0x7c(%ebp),%eax
086b3ce4 +0x110:  mov    %eax,(%esp)
086b3ce7 +0x113:  call   086b51be <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x6e8>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x6e8
086b3cec +0x118:  mov    0x8(%ebp),%edx
086b3cef +0x11b:  lea    -0x84(%ebp),%eax
086b3cf5 +0x121:  lea    -0x7c(%ebp),%ecx
086b3cf8 +0x124:  mov    %ecx,0x8(%esp)
086b3cfc +0x128:  mov    %edx,0x4(%esp)
086b3d00 +0x12c:  mov    %eax,(%esp)
086b3d03 +0x12f:  call   086b5226 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x750>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x750
086b3d08 +0x134:  sub    $0x4,%esp
086b3d0b +0x137:  lea    -0x7c(%ebp),%eax
086b3d0e +0x13a:  mov    %eax,(%esp)
086b3d11 +0x13d:  call   086b4c2e <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x158>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x158
086b3d16 +0x142:  lea    -0x50(%ebp),%eax
086b3d19 +0x145:  mov    %eax,(%esp)
086b3d1c +0x148:  call   086b4c18 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x142>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x142
086b3d21 +0x14d:  lea    -0x90(%ebp),%eax
086b3d27 +0x153:  mov    %eax,(%esp)
086b3d2a +0x156:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b3d2f +0x15b:  jmp    086b3d5e <+0x18a>
086b3d31 +0x15d:  mov    %edx,%ebx
086b3d33 +0x15f:  mov    %eax,%esi
086b3d35 +0x161:  lea    -0x7c(%ebp),%eax
086b3d38 +0x164:  mov    %eax,(%esp)
086b3d3b +0x167:  call   086b4c2e <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x158>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x158
086b3d40 +0x16c:  mov    %esi,%eax
086b3d42 +0x16e:  mov    %ebx,%edx
086b3d44 +0x170:  jmp    086b3d46 <+0x172>
086b3d46 +0x172:  mov    %edx,%ebx
086b3d48 +0x174:  mov    %eax,%esi
086b3d4a +0x176:  lea    -0x50(%ebp),%eax
086b3d4d +0x179:  mov    %eax,(%esp)
086b3d50 +0x17c:  call   086b4c18 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x142>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x142
086b3d55 +0x181:  mov    %esi,%eax
086b3d57 +0x183:  mov    %ebx,%edx
086b3d59 +0x185:  jmp    086b3ea7 <+0x2d3>
086b3d5e +0x18a:  lea    -0x90(%ebp),%eax
086b3d64 +0x190:  mov    %eax,(%esp)
086b3d67 +0x193:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b3d6c +0x198:  movl   $0xf6,0x8(%esp)
086b3d74 +0x1a0:  movl   $0x0,0x4(%esp)
086b3d7c +0x1a8:  lea    -0x90(%ebp),%eax
086b3d82 +0x1ae:  mov    %eax,(%esp)
086b3d85 +0x1b1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b3d8a +0x1b6:  lea    -0xb8(%ebp),%eax
086b3d90 +0x1bc:  mov    %eax,(%esp)
086b3d93 +0x1bf:  call   086b4b64 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x8e>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x8e
086b3d98 +0x1c4:  movzwl %ax,%eax
086b3d9b +0x1c7:  mov    %eax,0x4(%esp)
086b3d9f +0x1cb:  lea    -0x90(%ebp),%eax
086b3da5 +0x1d1:  mov    %eax,(%esp)
086b3da8 +0x1d4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b3dad +0x1d9:  mov    -0x1c(%ebp),%eax
086b3db0 +0x1dc:  mov    (%eax),%eax
086b3db2 +0x1de:  mov    %eax,0x4(%esp)
086b3db6 +0x1e2:  lea    -0x90(%ebp),%eax
086b3dbc +0x1e8:  mov    %eax,(%esp)
086b3dbf +0x1eb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b3dc4 +0x1f0:  movl   $0x0,0x4(%esp)
086b3dcc +0x1f8:  lea    -0x90(%ebp),%eax
086b3dd2 +0x1fe:  mov    %eax,(%esp)
086b3dd5 +0x201:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b3dda +0x206:  mov    -0x1c(%ebp),%eax
086b3ddd +0x209:  mov    0x4(%eax),%eax
086b3de0 +0x20c:  mov    %eax,0x4(%esp)
086b3de4 +0x210:  lea    -0x90(%ebp),%eax
086b3dea +0x216:  mov    %eax,(%esp)
086b3ded +0x219:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b3df2 +0x21e:  mov    -0x1c(%ebp),%eax
086b3df5 +0x221:  mov    0x8(%eax),%eax
086b3df8 +0x224:  mov    %eax,0x4(%esp)
086b3dfc +0x228:  lea    -0x90(%ebp),%eax
086b3e02 +0x22e:  mov    %eax,(%esp)
086b3e05 +0x231:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b3e0a +0x236:  movl   $0x1,0x4(%esp)
086b3e12 +0x23e:  lea    -0x90(%ebp),%eax
086b3e18 +0x244:  mov    %eax,(%esp)
086b3e1b +0x247:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b3e20 +0x24c:  lea    -0x90(%ebp),%eax
086b3e26 +0x252:  mov    %eax,0x4(%esp)
086b3e2a +0x256:  mov    0x8(%ebp),%eax
086b3e2d +0x259:  mov    %eax,(%esp)
086b3e30 +0x25c:  call   086b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>  ; village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&)
086b3e35 +0x261:  mov    0x8(%ebp),%eax
086b3e38 +0x264:  mov    0x2c(%eax),%eax
086b3e3b +0x267:  mov    %eax,%edi
086b3e3d +0x269:  mov    0x8(%ebp),%eax
086b3e40 +0x26c:  mov    0x28(%eax),%esi
086b3e43 +0x26f:  mov    0x8(%ebp),%eax
086b3e46 +0x272:  mov    0x38(%eax),%ebx
086b3e49 +0x275:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b3e4e +0x27a:  mov    %edi,0x18(%esp)
086b3e52 +0x27e:  mov    %esi,0x14(%esp)
086b3e56 +0x282:  mov    %ebx,0x10(%esp)
086b3e5a +0x286:  movl   $0x86,0xc(%esp)
086b3e62 +0x28e:  movl   $0x0,0x8(%esp)
086b3e6a +0x296:  movl   $0x2,0x4(%esp)
086b3e72 +0x29e:  mov    %eax,(%esp)
086b3e75 +0x2a1:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b3e7a +0x2a6:  mov    $0x1,%ebx
086b3e7f +0x2ab:  lea    -0x90(%ebp),%eax
086b3e85 +0x2b1:  mov    %eax,(%esp)
086b3e88 +0x2b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3e8d +0x2b9:  jmp    086b3ec5 <+0x2f1>
086b3e8f +0x2bb:  mov    %edx,%ebx
086b3e91 +0x2bd:  mov    %eax,%esi
086b3e93 +0x2bf:  lea    -0x90(%ebp),%eax
086b3e99 +0x2c5:  mov    %eax,(%esp)
086b3e9c +0x2c8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3ea1 +0x2cd:  mov    %esi,%eax
086b3ea3 +0x2cf:  mov    %ebx,%edx
086b3ea5 +0x2d1:  jmp    086b3ea7 <+0x2d3>
086b3ea7 +0x2d3:  mov    %edx,%ebx
086b3ea9 +0x2d5:  mov    %eax,%esi
086b3eab +0x2d7:  lea    -0xb8(%ebp),%eax
086b3eb1 +0x2dd:  mov    %eax,(%esp)
086b3eb4 +0x2e0:  call   086b3106 <_ZN16village_attacked15CVillageMonsterD1Ev>  ; village_attacked::CVillageMonster::~CVillageMonster()
086b3eb9 +0x2e5:  mov    %esi,%eax
086b3ebb +0x2e7:  mov    %ebx,%edx
086b3ebd +0x2e9:  mov    %eax,(%esp)
086b3ec0 +0x2ec:  call   08ae3750 <_Unwind_Resume>
086b3ec5 +0x2f1:  lea    -0xb8(%ebp),%eax
086b3ecb +0x2f7:  mov    %eax,(%esp)
086b3ece +0x2fa:  call   086b3106 <_ZN16village_attacked15CVillageMonsterD1Ev>  ; village_attacked::CVillageMonster::~CVillageMonster()
086b3ed3 +0x2ff:  mov    %ebx,%eax
086b3ed5 +0x301:  lea    -0xc(%ebp),%esp
086b3ed8 +0x304:  add    $0x0,%esp
086b3edb +0x307:  pop    %ebx
086b3edc +0x308:  pop    %esi
086b3edd +0x309:  pop    %edi
086b3ede +0x30a:  pop    %ebp
086b3edf +0x30b:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::OnCreateVillageMonster @ 0x86b3bd4

/* village_attacked::CVillageMonsterArea::OnCreateVillageMonster() */

undefined4 __thiscall
village_attacked::CVillageMonsterArea::OnCreateVillageMonster(CVillageMonsterArea *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  TimerQueue *pTVar7;
  undefined4 uVar8;
  CVillageMonster local_bc [40];
  PacketGuard local_94 [12];
  pair local_88 [8];
  pair<unsigned_short_const,village_attacked::CVillageMonster> local_80 [44];
  pair<unsigned_short,village_attacked::CVillageMonster> local_54 [46];
  undefined2 local_26;
  int local_24;
  int *local_20;
  
  uVar6 = *(uint *)(this + 0x34);
  uVar5 = std::
          map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
          ::size((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
                  *)this);
  if (uVar5 < uVar6) {
    local_24 = get_rand_int(10000);
    local_20 = (int *)GetAttackedMonster(this,local_24);
    if (local_20 == (int *)0x0) {
      uVar8 = 0;
    }
    else {
      iVar1 = local_20[6];
      iVar2 = local_20[5];
      uVar6 = std::
              map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
              ::size((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
                      *)this);
      CVillageMonster::CVillageMonster
                (local_bc,(ushort)*local_20,local_20[1],local_20[2],uVar6 % 3,this,iVar2,iVar1);
      local_26 = CVillageMonster::GetUID(local_bc);
                    /* try { // try from 086b3cd2 to 086b3cd6 has its CatchHandler @ 086b3ea7 */
      std::make_pair<unsigned_short,village_attacked::CVillageMonster&>
                ((ushort *)local_54,(CVillageMonster *)&local_26);
                    /* try { // try from 086b3ce7 to 086b3ceb has its CatchHandler @ 086b3d46 */
      std::pair<unsigned_short_const,village_attacked::CVillageMonster>::
      pair<unsigned_short,village_attacked::CVillageMonster>(local_80,local_54);
                    /* try { // try from 086b3d03 to 086b3d07 has its CatchHandler @ 086b3d31 */
      std::
      map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
      ::insert(local_88);
      std::pair<unsigned_short_const,village_attacked::CVillageMonster>::~pair(local_80);
      std::pair<unsigned_short,village_attacked::CVillageMonster>::~pair(local_54);
                    /* try { // try from 086b3d2a to 086b3d2e has its CatchHandler @ 086b3ea7 */
      PacketGuard::PacketGuard(local_94);
                    /* try { // try from 086b3d67 to 086b3e79 has its CatchHandler @ 086b3e8f */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xf6);
      uVar6 = CVillageMonster::GetUID(local_bc);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar6 & 0xffff);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,*local_20);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_20[1]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_20[2]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
      SendPacket(this,local_94);
      uVar8 = *(undefined4 *)(this + 0x2c);
      uVar3 = *(undefined4 *)(this + 0x28);
      uVar4 = *(undefined4 *)(this + 0x38);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,2,0,0x86,uVar4,uVar3,uVar8);
      uVar8 = 1;
                    /* try { // try from 086b3e88 to 086b3e8c has its CatchHandler @ 086b3ea7 */
      PacketGuard::~PacketGuard(local_94);
      CVillageMonster::~CVillageMonster(local_bc);
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}
```
