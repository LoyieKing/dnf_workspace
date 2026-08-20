# _checkValidUser

`_ZN6CParty15_checkValidUserEi`

`CParty::_checkValidUser(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b4d12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b4d12  _ZN6CParty15_checkValidUserEi
#           CParty::_checkValidUser(int)
# range [0x085b4d12, 0x085b5097]
085b4d12 +0x000:  push   %ebp
085b4d13 +0x001:  mov    %esp,%ebp
085b4d15 +0x003:  push   %edi
085b4d16 +0x004:  push   %esi
085b4d17 +0x005:  push   %ebx
085b4d18 +0x006:  sub    $0x8c,%esp
085b4d1e +0x00c:  mov    0xc(%ebp),%edx
085b4d21 +0x00f:  mov    0x8(%ebp),%ecx
085b4d24 +0x012:  mov    %edx,%eax
085b4d26 +0x014:  add    %eax,%eax
085b4d28 +0x016:  add    %edx,%eax
085b4d2a +0x018:  shl    $0x3,%eax
085b4d2d +0x01b:  lea    (%ecx,%eax,1),%eax
085b4d30 +0x01e:  add    $0x78,%eax
085b4d33 +0x021:  mov    (%eax),%eax
085b4d35 +0x023:  test   %eax,%eax
085b4d37 +0x025:  je     085b5087 <+0x375>
085b4d3d +0x02b:  mov    0xc(%ebp),%edx
085b4d40 +0x02e:  mov    0x8(%ebp),%ecx
085b4d43 +0x031:  mov    %edx,%eax
085b4d45 +0x033:  add    %eax,%eax
085b4d47 +0x035:  add    %edx,%eax
085b4d49 +0x037:  shl    $0x3,%eax
085b4d4c +0x03a:  lea    (%ecx,%eax,1),%eax
085b4d4f +0x03d:  add    $0x78,%eax
085b4d52 +0x040:  mov    (%eax),%eax
085b4d54 +0x042:  mov    %eax,(%esp)
085b4d57 +0x045:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085b4d5c +0x04a:  mov    %eax,%ecx
085b4d5e +0x04c:  mov    0xc(%ebp),%edx
085b4d61 +0x04f:  mov    0x8(%ebp),%ebx
085b4d64 +0x052:  mov    %edx,%eax
085b4d66 +0x054:  add    %eax,%eax
085b4d68 +0x056:  add    %edx,%eax
085b4d6a +0x058:  shl    $0x3,%eax
085b4d6d +0x05b:  lea    (%ebx,%eax,1),%eax
085b4d70 +0x05e:  sub    $0xffffff80,%eax
085b4d73 +0x061:  mov    (%eax),%eax
085b4d75 +0x063:  cmp    %eax,%ecx
085b4d77 +0x065:  sete   %al
085b4d7a +0x068:  test   %al,%al
085b4d7c +0x06a:  je     085b4db0 <+0x9e>
085b4d7e +0x06c:  mov    0xc(%ebp),%edx
085b4d81 +0x06f:  mov    0x8(%ebp),%ecx
085b4d84 +0x072:  mov    %edx,%eax
085b4d86 +0x074:  add    %eax,%eax
085b4d88 +0x076:  add    %edx,%eax
085b4d8a +0x078:  shl    $0x3,%eax
085b4d8d +0x07b:  lea    (%ecx,%eax,1),%eax
085b4d90 +0x07e:  add    $0x78,%eax
085b4d93 +0x081:  mov    (%eax),%eax
085b4d95 +0x083:  mov    %eax,(%esp)
085b4d98 +0x086:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085b4d9d +0x08b:  test   %eax,%eax
085b4d9f +0x08d:  setne  %al
085b4da2 +0x090:  test   %al,%al
085b4da4 +0x092:  je     085b4db0 <+0x9e>
085b4da6 +0x094:  mov    $0x1,%eax
085b4dab +0x099:  jmp    085b508c <+0x37a>
085b4db0 +0x09e:  mov    0x8(%ebp),%eax
085b4db3 +0x0a1:  movzbl 0x6a(%eax),%eax
085b4db7 +0x0a5:  movsbl %al,%eax
085b4dba +0x0a8:  mov    %eax,-0x74(%ebp)
085b4dbd +0x0ab:  mov    0x8(%ebp),%eax
085b4dc0 +0x0ae:  mov    0x64(%eax),%edi
085b4dc3 +0x0b1:  mov    0x8(%ebp),%eax
085b4dc6 +0x0b4:  movzwl 0x13e(%eax),%eax
085b4dcd +0x0bb:  movzwl %ax,%esi
085b4dd0 +0x0be:  mov    0x8(%ebp),%eax
085b4dd3 +0x0c1:  mov    0x74(%eax),%ebx
085b4dd6 +0x0c4:  movl   $0x5,0xc(%esp)
085b4dde +0x0cc:  movl   $0x37cf,0x8(%esp)
085b4de6 +0x0d4:  movl   $&_ZZN6CParty15_checkValidUserEiE19__PRETTY_FUNCTION__,0x4(%esp)
085b4dee +0x0dc:  lea    -0x5c(%ebp),%eax
085b4df1 +0x0df:  mov    %eax,(%esp)
085b4df4 +0x0e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b4df9 +0x0e7:  mov    -0x74(%ebp),%eax
085b4dfc +0x0ea:  mov    %eax,0x14(%esp)
085b4e00 +0x0ee:  mov    %edi,0x10(%esp)
085b4e04 +0x0f2:  mov    %esi,0xc(%esp)
085b4e08 +0x0f6:  mov    %ebx,0x8(%esp)
085b4e0c +0x0fa:  movl   $"[PARTYPOOL] m_pManager : %x, dungeon_idx : %u, m_iIndex : %u, cState : %d",0x4(%esp)
085b4e14 +0x102:  lea    -0x5c(%ebp),%eax
085b4e17 +0x105:  mov    %eax,(%esp)
085b4e1a +0x108:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b4e1f +0x10d:  movl   $0x0,-0x1c(%ebp)
085b4e26 +0x114:  jmp    085b4f94 <+0x282>
085b4e2b +0x119:  mov    -0x1c(%ebp),%edx
085b4e2e +0x11c:  mov    0x8(%ebp),%ecx
085b4e31 +0x11f:  mov    %edx,%eax
085b4e33 +0x121:  add    %eax,%eax
085b4e35 +0x123:  add    %edx,%eax
085b4e37 +0x125:  shl    $0x3,%eax
085b4e3a +0x128:  lea    (%ecx,%eax,1),%eax
085b4e3d +0x12b:  add    $0x78,%eax
085b4e40 +0x12e:  mov    (%eax),%eax
085b4e42 +0x130:  test   %eax,%eax
085b4e44 +0x132:  je     085b4f38 <+0x226>
085b4e4a +0x138:  mov    -0x1c(%ebp),%edx
085b4e4d +0x13b:  mov    0x8(%ebp),%ecx
085b4e50 +0x13e:  mov    %edx,%eax
085b4e52 +0x140:  add    %eax,%eax
085b4e54 +0x142:  add    %edx,%eax
085b4e56 +0x144:  shl    $0x3,%eax
085b4e59 +0x147:  lea    (%ecx,%eax,1),%eax
085b4e5c +0x14a:  add    $0x78,%eax
085b4e5f +0x14d:  mov    (%eax),%eax
085b4e61 +0x14f:  mov    %eax,(%esp)
085b4e64 +0x152:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085b4e69 +0x157:  mov    %eax,%edi
085b4e6b +0x159:  mov    -0x1c(%ebp),%edx
085b4e6e +0x15c:  mov    0x8(%ebp),%ecx
085b4e71 +0x15f:  mov    %edx,%eax
085b4e73 +0x161:  add    %eax,%eax
085b4e75 +0x163:  add    %edx,%eax
085b4e77 +0x165:  shl    $0x3,%eax
085b4e7a +0x168:  lea    (%ecx,%eax,1),%eax
085b4e7d +0x16b:  sub    $0xffffff80,%eax
085b4e80 +0x16e:  mov    (%eax),%eax
085b4e82 +0x170:  mov    %eax,-0x70(%ebp)
085b4e85 +0x173:  mov    -0x1c(%ebp),%edx
085b4e88 +0x176:  mov    0x8(%ebp),%ecx
085b4e8b +0x179:  mov    %edx,%eax
085b4e8d +0x17b:  add    %eax,%eax
085b4e8f +0x17d:  add    %edx,%eax
085b4e91 +0x17f:  shl    $0x3,%eax
085b4e94 +0x182:  lea    (%ecx,%eax,1),%eax
085b4e97 +0x185:  add    $0x78,%eax
085b4e9a +0x188:  mov    (%eax),%eax
085b4e9c +0x18a:  mov    %eax,(%esp)
085b4e9f +0x18d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085b4ea4 +0x192:  mov    %eax,%esi
085b4ea6 +0x194:  mov    -0x1c(%ebp),%edx
085b4ea9 +0x197:  mov    0x8(%ebp),%ecx
085b4eac +0x19a:  mov    %edx,%eax
085b4eae +0x19c:  add    %eax,%eax
085b4eb0 +0x19e:  add    %edx,%eax
085b4eb2 +0x1a0:  shl    $0x3,%eax
085b4eb5 +0x1a3:  lea    (%ecx,%eax,1),%eax
085b4eb8 +0x1a6:  add    $0x78,%eax
085b4ebb +0x1a9:  mov    (%eax),%eax
085b4ebd +0x1ab:  mov    %eax,(%esp)
085b4ec0 +0x1ae:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085b4ec5 +0x1b3:  mov    %eax,-0x6c(%ebp)
085b4ec8 +0x1b6:  mov    -0x1c(%ebp),%edx
085b4ecb +0x1b9:  mov    0x8(%ebp),%ecx
085b4ece +0x1bc:  mov    %edx,%eax
085b4ed0 +0x1be:  add    %eax,%eax
085b4ed2 +0x1c0:  add    %edx,%eax
085b4ed4 +0x1c2:  shl    $0x3,%eax
085b4ed7 +0x1c5:  lea    (%ecx,%eax,1),%eax
085b4eda +0x1c8:  add    $0x78,%eax
085b4edd +0x1cb:  mov    (%eax),%ebx
085b4edf +0x1cd:  movl   $0x5,0xc(%esp)
085b4ee7 +0x1d5:  movl   $0x37da,0x8(%esp)
085b4eef +0x1dd:  movl   $&_ZZN6CParty15_checkValidUserEiE19__PRETTY_FUNCTION__,0x4(%esp)
085b4ef7 +0x1e5:  lea    -0x4c(%ebp),%eax
085b4efa +0x1e8:  mov    %eax,(%esp)
085b4efd +0x1eb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b4f02 +0x1f0:  mov    %edi,0x1c(%esp)
085b4f06 +0x1f4:  mov    -0x70(%ebp),%eax
085b4f09 +0x1f7:  mov    %eax,0x18(%esp)
085b4f0d +0x1fb:  mov    %esi,0x14(%esp)
085b4f11 +0x1ff:  mov    -0x6c(%ebp),%eax
085b4f14 +0x202:  mov    %eax,0x10(%esp)
085b4f18 +0x206:  mov    %ebx,0xc(%esp)
085b4f1c +0x20a:  mov    -0x1c(%ebp),%eax
085b4f1f +0x20d:  mov    %eax,0x8(%esp)
085b4f23 +0x211:  movl   $"User[%d] %x, ch_state %d, uid : %d / %d, charac_no : %u",0x4(%esp)
085b4f2b +0x219:  lea    -0x4c(%ebp),%eax
085b4f2e +0x21c:  mov    %eax,(%esp)
085b4f31 +0x21f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b4f36 +0x224:  jmp    085b4f90 <+0x27e>
085b4f38 +0x226:  mov    -0x1c(%ebp),%edx
085b4f3b +0x229:  mov    0x8(%ebp),%ecx
085b4f3e +0x22c:  mov    %edx,%eax
085b4f40 +0x22e:  add    %eax,%eax
085b4f42 +0x230:  add    %edx,%eax
085b4f44 +0x232:  shl    $0x3,%eax
085b4f47 +0x235:  lea    (%ecx,%eax,1),%eax
085b4f4a +0x238:  sub    $0xffffff80,%eax
085b4f4d +0x23b:  mov    (%eax),%ebx
085b4f4f +0x23d:  movl   $0x5,0xc(%esp)
085b4f57 +0x245:  movl   $0x37e5,0x8(%esp)
085b4f5f +0x24d:  movl   $&_ZZN6CParty15_checkValidUserEiE19__PRETTY_FUNCTION__,0x4(%esp)
085b4f67 +0x255:  lea    -0x3c(%ebp),%eax
085b4f6a +0x258:  mov    %eax,(%esp)
085b4f6d +0x25b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b4f72 +0x260:  mov    %ebx,0xc(%esp)
085b4f76 +0x264:  mov    -0x1c(%ebp),%eax
085b4f79 +0x267:  mov    %eax,0x8(%esp)
085b4f7d +0x26b:  movl   $"User[%d] NULL uid : %d",0x4(%esp)
085b4f85 +0x273:  lea    -0x3c(%ebp),%eax
085b4f88 +0x276:  mov    %eax,(%esp)
085b4f8b +0x279:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b4f90 +0x27e:  addl   $0x1,-0x1c(%ebp)
085b4f94 +0x282:  cmpl   $0x3,-0x1c(%ebp)
085b4f98 +0x286:  setle  %al
085b4f9b +0x289:  test   %al,%al
085b4f9d +0x28b:  jne    085b4e2b <+0x119>
085b4fa3 +0x291:  mov    0xc(%ebp),%edx
085b4fa6 +0x294:  mov    0x8(%ebp),%ecx
085b4fa9 +0x297:  mov    %edx,%eax
085b4fab +0x299:  add    %eax,%eax
085b4fad +0x29b:  add    %edx,%eax
085b4faf +0x29d:  shl    $0x3,%eax
085b4fb2 +0x2a0:  lea    (%ecx,%eax,1),%eax
085b4fb5 +0x2a3:  add    $0x78,%eax
085b4fb8 +0x2a6:  mov    (%eax),%eax
085b4fba +0x2a8:  mov    %eax,(%esp)
085b4fbd +0x2ab:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085b4fc2 +0x2b0:  mov    %eax,%esi
085b4fc4 +0x2b2:  mov    0xc(%ebp),%edx
085b4fc7 +0x2b5:  mov    0x8(%ebp),%ecx
085b4fca +0x2b8:  mov    %edx,%eax
085b4fcc +0x2ba:  add    %eax,%eax
085b4fce +0x2bc:  add    %edx,%eax
085b4fd0 +0x2be:  shl    $0x3,%eax
085b4fd3 +0x2c1:  lea    (%ecx,%eax,1),%eax
085b4fd6 +0x2c4:  add    $0x78,%eax
085b4fd9 +0x2c7:  mov    (%eax),%eax
085b4fdb +0x2c9:  mov    %eax,(%esp)
085b4fde +0x2cc:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085b4fe3 +0x2d1:  movl   $0x0,0x4(%esp)
085b4feb +0x2d9:  mov    %eax,(%esp)
085b4fee +0x2dc:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085b4ff3 +0x2e1:  mov    %eax,%ebx
085b4ff5 +0x2e3:  movl   $0x5,0xc(%esp)
085b4ffd +0x2eb:  movl   $0x37ed,0x8(%esp)
085b5005 +0x2f3:  movl   $&_ZZN6CParty15_checkValidUserEiE19__PRETTY_FUNCTION__,0x4(%esp)
085b500d +0x2fb:  lea    -0x2c(%ebp),%eax
085b5010 +0x2fe:  mov    %eax,(%esp)
085b5013 +0x301:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b5018 +0x306:  mov    %esi,0xc(%esp)
085b501c +0x30a:  mov    %ebx,0x8(%esp)
085b5020 +0x30e:  movl   $"User missmatched in party (m_id: %s)(uid: %d)",0x4(%esp)
085b5028 +0x316:  lea    -0x2c(%ebp),%eax
085b502b +0x319:  mov    %eax,(%esp)
085b502e +0x31c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b5033 +0x321:  mov    0xc(%ebp),%edx
085b5036 +0x324:  mov    0x8(%ebp),%ecx
085b5039 +0x327:  mov    %edx,%eax
085b503b +0x329:  add    %eax,%eax
085b503d +0x32b:  add    %edx,%eax
085b503f +0x32d:  shl    $0x3,%eax
085b5042 +0x330:  lea    (%ecx,%eax,1),%eax
085b5045 +0x333:  add    $0x78,%eax
085b5048 +0x336:  mov    (%eax),%eax
085b504a +0x338:  movl   $0x0,0xc(%esp)
085b5052 +0x340:  movl   $0x0,0x8(%esp)
085b505a +0x348:  movl   $0x17,0x4(%esp)
085b5062 +0x350:  mov    %eax,(%esp)
085b5065 +0x353:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
085b506a +0x358:  mov    0xc(%ebp),%edx
085b506d +0x35b:  mov    %edx,%eax
085b506f +0x35d:  add    %eax,%eax
085b5071 +0x35f:  add    %edx,%eax
085b5073 +0x361:  shl    $0x3,%eax
085b5076 +0x364:  add    $0x70,%eax
085b5079 +0x367:  add    0x8(%ebp),%eax
085b507c +0x36a:  add    $0x8,%eax
085b507f +0x36d:  mov    %eax,(%esp)
085b5082 +0x370:  call   08599a28 <_ZN6CParty7cMember4InitEv>  ; CParty::cMember::Init()
085b5087 +0x375:  mov    $0x0,%eax
085b508c +0x37a:  add    $0x8c,%esp
085b5092 +0x380:  pop    %ebx
085b5093 +0x381:  pop    %esi
085b5094 +0x382:  pop    %edi
085b5095 +0x383:  pop    %ebp
085b5096 +0x384:  ret
085b5097 +0x385:  nop
```

## 反编译 C

```c
// CParty::_checkValidUser @ 0x85b4d12

/* CParty::_checkValidUser(int) */

undefined4 __thiscall CParty::_checkValidUser(CParty *this,int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  if (*(int *)(this + param_1 * 0x18 + 0x78) != 0) {
    iVar3 = CUser::GetUID(*(CUser **)(this + param_1 * 0x18 + 0x78));
    if ((iVar3 == *(int *)(this + param_1 * 0x18 + 0x80)) &&
       (iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + param_1 * 0x18 + 0x78)),
       iVar3 != 0)) {
      return 1;
    }
    iVar3 = (int)(char)this[0x6a];
    uVar5 = *(undefined4 *)(this + 100);
    uVar1 = *(ushort *)(this + 0x13e);
    uVar7 = *(undefined4 *)(this + 0x74);
    cMyTrace::cMyTrace(local_60,"bool CParty::_checkValidUser(int)",0x37cf,5);
    cMyTrace::operator()
              (local_60,"[PARTYPOOL] m_pManager : %x, dungeon_idx : %u, m_iIndex : %u, cState : %d",
               uVar7,(uint)uVar1,uVar5,iVar3);
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      if (*(int *)(this + local_20 * 0x18 + 0x78) == 0) {
        uVar7 = *(undefined4 *)(this + local_20 * 0x18 + 0x80);
        cMyTrace::cMyTrace(local_40,"bool CParty::_checkValidUser(int)",0x37e5,5);
        cMyTrace::operator()(local_40,"User[%d] NULL uid : %d",local_20,uVar7,uVar5,iVar3);
      }
      else {
        uVar4 = CUserCharacInfo::getCurCharacNo
                          (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78));
        uVar7 = *(undefined4 *)(this + local_20 * 0x18 + 0x80);
        iVar3 = CUser::GetUID(*(CUser **)(this + local_20 * 0x18 + 0x78));
        uVar5 = CUser::get_state(*(CUser **)(this + local_20 * 0x18 + 0x78));
        uVar2 = *(undefined4 *)(this + local_20 * 0x18 + 0x78);
        cMyTrace::cMyTrace(local_50,"bool CParty::_checkValidUser(int)",0x37da,5);
        cMyTrace::operator()
                  (local_50,"User[%d] %x, ch_state %d, uid : %d / %d, charac_no : %u",local_20,uVar2
                   ,uVar5,iVar3,uVar7,uVar4);
      }
    }
    uVar5 = CUser::GetUID(*(CUser **)(this + param_1 * 0x18 + 0x78));
    uVar6 = CUser::get_acc_id(*(CUser **)(this + param_1 * 0x18 + 0x78));
    uVar7 = NumberToString(uVar6,0);
    cMyTrace::cMyTrace(local_30,"bool CParty::_checkValidUser(int)",0x37ed,5);
    cMyTrace::operator()(local_30,"User missmatched in party (m_id: %s)(uid: %d)",uVar7,uVar5);
    CUser::DisConnSig(*(CUser **)(this + param_1 * 0x18 + 0x78),0x17,0,0);
    cMember::Init((cMember *)(this + param_1 * 0x18 + 0x78));
  }
  return 0;
}
```
