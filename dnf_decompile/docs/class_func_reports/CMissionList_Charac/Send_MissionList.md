# Send_MissionList

`_ZN19CMissionList_Charac16Send_MissionListER5CUser`

`CMissionList_Charac::Send_MissionList(CUser&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e52a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e52a8  _ZN19CMissionList_Charac16Send_MissionListER5CUser
#           CMissionList_Charac::Send_MissionList(CUser&)
# range [0x085e52a8, 0x085e5513]
085e52a8 +0x000:  push   %ebp
085e52a9 +0x001:  mov    %esp,%ebp
085e52ab +0x003:  push   %esi
085e52ac +0x004:  push   %ebx
085e52ad +0x005:  sub    $0x60,%esp
085e52b0 +0x008:  lea    -0x2c(%ebp),%eax
085e52b3 +0x00b:  mov    %eax,(%esp)
085e52b6 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085e52bb +0x013:  movl   $0x140,0x8(%esp)
085e52c3 +0x01b:  movl   $0x0,0x4(%esp)
085e52cb +0x023:  lea    -0x2c(%ebp),%eax
085e52ce +0x026:  mov    %eax,(%esp)
085e52d1 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085e52d6 +0x02e:  lea    -0x2c(%ebp),%eax
085e52d9 +0x031:  mov    %eax,(%esp)
085e52dc +0x034:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085e52e1 +0x039:  mov    %eax,-0x30(%ebp)
085e52e4 +0x03c:  movl   $0x0,0x4(%esp)
085e52ec +0x044:  lea    -0x2c(%ebp),%eax
085e52ef +0x047:  mov    %eax,(%esp)
085e52f2 +0x04a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085e52f7 +0x04f:  movl   $0x0,-0x20(%ebp)
085e52fe +0x056:  movl   $0x1,-0x1c(%ebp)
085e5305 +0x05d:  jmp    085e5448 <+0x1a0>
085e530a +0x062:  mov    -0x1c(%ebp),%edx
085e530d +0x065:  mov    0x8(%ebp),%eax
085e5310 +0x068:  movzwl 0x7(%eax,%edx,8),%eax
085e5315 +0x06d:  test   %ax,%ax
085e5318 +0x070:  je     085e5444 <+0x19c>
085e531e +0x076:  mov    -0x1c(%ebp),%edx
085e5321 +0x079:  mov    0x8(%ebp),%eax
085e5324 +0x07c:  movzwl 0x7(%eax,%edx,8),%eax
085e5329 +0x081:  cwtl
085e532a +0x082:  mov    %eax,0x4(%esp)
085e532e +0x086:  lea    -0x2c(%ebp),%eax
085e5331 +0x089:  mov    %eax,(%esp)
085e5334 +0x08c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085e5339 +0x091:  cmpl   $0x1b,-0x1c(%ebp)
085e533d +0x095:  jne    085e5397 <+0xef>
085e533f +0x097:  movw   $0x0,-0x12(%ebp)
085e5345 +0x09d:  movl   $0x0,-0x10(%ebp)
085e534c +0x0a4:  jmp    085e5377 <+0xcf>
085e534e +0x0a6:  mov    -0x1c(%ebp),%edx
085e5351 +0x0a9:  mov    0x8(%ebp),%eax
085e5354 +0x0ac:  movzwl 0x9(%eax,%edx,8),%eax
085e5359 +0x0b1:  movswl %ax,%edx
085e535c +0x0b4:  mov    -0x10(%ebp),%eax
085e535f +0x0b7:  mov    %edx,%ebx
085e5361 +0x0b9:  mov    %eax,%ecx
085e5363 +0x0bb:  sar    %cl,%ebx
085e5365 +0x0bd:  mov    %ebx,%eax
085e5367 +0x0bf:  and    $0x1,%eax
085e536a +0x0c2:  test   %al,%al
085e536c +0x0c4:  je     085e5373 <+0xcb>
085e536e +0x0c6:  addw   $0x1,-0x12(%ebp)
085e5373 +0x0cb:  addl   $0x1,-0x10(%ebp)
085e5377 +0x0cf:  cmpl   $0x4,-0x10(%ebp)
085e537b +0x0d3:  setle  %al
085e537e +0x0d6:  test   %al,%al
085e5380 +0x0d8:  jne    085e534e <+0xa6>
085e5382 +0x0da:  movswl -0x12(%ebp),%eax
085e5386 +0x0de:  mov    %eax,0x4(%esp)
085e538a +0x0e2:  lea    -0x2c(%ebp),%eax
085e538d +0x0e5:  mov    %eax,(%esp)
085e5390 +0x0e8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085e5395 +0x0ed:  jmp    085e53b2 <+0x10a>
085e5397 +0x0ef:  mov    -0x1c(%ebp),%edx
085e539a +0x0f2:  mov    0x8(%ebp),%eax
085e539d +0x0f5:  movzwl 0x9(%eax,%edx,8),%eax
085e53a2 +0x0fa:  cwtl
085e53a3 +0x0fb:  mov    %eax,0x4(%esp)
085e53a7 +0x0ff:  lea    -0x2c(%ebp),%eax
085e53aa +0x102:  mov    %eax,(%esp)
085e53ad +0x105:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085e53b2 +0x10a:  mov    -0x1c(%ebp),%edx
085e53b5 +0x10d:  mov    0x8(%ebp),%eax
085e53b8 +0x110:  movzwl 0x7(%eax,%edx,8),%eax
085e53bd +0x115:  movswl %ax,%ebx
085e53c0 +0x118:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e53c5 +0x11d:  mov    %ebx,0x4(%esp)
085e53c9 +0x121:  mov    %eax,(%esp)
085e53cc +0x124:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e53d1 +0x129:  mov    %eax,-0x18(%ebp)
085e53d4 +0x12c:  cmpl   $0x0,-0x18(%ebp)
085e53d8 +0x130:  jne    085e53f0 <+0x148>
085e53da +0x132:  mov    -0x1c(%ebp),%eax
085e53dd +0x135:  shl    $0x3,%eax
085e53e0 +0x138:  add    0x8(%ebp),%eax
085e53e3 +0x13b:  add    $0x5,%eax
085e53e6 +0x13e:  mov    %eax,(%esp)
085e53e9 +0x141:  call   085e68b6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x3e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x3e
085e53ee +0x146:  jmp    085e5444 <+0x19c>
085e53f0 +0x148:  cmpl   $0x1b,-0x1c(%ebp)
085e53f4 +0x14c:  je     085e5402 <+0x15a>
085e53f6 +0x14e:  cmpl   $0x1f,-0x1c(%ebp)
085e53fa +0x152:  je     085e5402 <+0x15a>
085e53fc +0x154:  cmpl   $0x20,-0x1c(%ebp)
085e5400 +0x158:  jne    085e541f <+0x177>
085e5402 +0x15a:  mov    -0x1c(%ebp),%edx
085e5405 +0x15d:  mov    0x8(%ebp),%eax
085e5408 +0x160:  movzwl 0xb(%eax,%edx,8),%eax
085e540d +0x165:  cwtl
085e540e +0x166:  mov    %eax,0x4(%esp)
085e5412 +0x16a:  lea    -0x2c(%ebp),%eax
085e5415 +0x16d:  mov    %eax,(%esp)
085e5418 +0x170:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085e541d +0x175:  jmp    085e5440 <+0x198>
085e541f +0x177:  mov    -0x18(%ebp),%eax
085e5422 +0x17a:  mov    (%eax),%eax
085e5424 +0x17c:  add    $0x28,%eax
085e5427 +0x17f:  mov    (%eax),%edx
085e5429 +0x181:  mov    -0x18(%ebp),%eax
085e542c +0x184:  mov    %eax,(%esp)
085e542f +0x187:  call   *%edx
085e5431 +0x189:  mov    %eax,0x4(%esp)
085e5435 +0x18d:  lea    -0x2c(%ebp),%eax
085e5438 +0x190:  mov    %eax,(%esp)
085e543b +0x193:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085e5440 +0x198:  addl   $0x1,-0x20(%ebp)
085e5444 +0x19c:  addl   $0x1,-0x1c(%ebp)
085e5448 +0x1a0:  cmpl   $0x23,-0x1c(%ebp)
085e544c +0x1a4:  setle  %al
085e544f +0x1a7:  test   %al,%al
085e5451 +0x1a9:  jne    085e530a <+0x62>
085e5457 +0x1af:  mov    -0x20(%ebp),%eax
085e545a +0x1b2:  mov    %eax,0x8(%esp)
085e545e +0x1b6:  lea    -0x30(%ebp),%eax
085e5461 +0x1b9:  mov    %eax,0x4(%esp)
085e5465 +0x1bd:  lea    -0x2c(%ebp),%eax
085e5468 +0x1c0:  mov    %eax,(%esp)
085e546b +0x1c3:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
085e5470 +0x1c8:  mov    0x8(%ebp),%eax
085e5473 +0x1cb:  lea    0x128(%eax),%edx
085e5479 +0x1d1:  lea    -0x50(%ebp),%eax
085e547c +0x1d4:  mov    %eax,0x4(%esp)
085e5480 +0x1d8:  mov    %edx,(%esp)
085e5483 +0x1db:  call   08a5a90a <_Z11BitsetToStrRKSt6bitsetILj256EEPh>  ; BitsetToStr(std::bitset<256u> const&, unsigned char*)
085e5488 +0x1e0:  movl   $0x0,-0xc(%ebp)
085e548f +0x1e7:  jmp    085e54af <+0x207>
085e5491 +0x1e9:  mov    -0xc(%ebp),%eax
085e5494 +0x1ec:  movzbl -0x50(%ebp,%eax,1),%eax
085e5499 +0x1f1:  movzbl %al,%eax
085e549c +0x1f4:  mov    %eax,0x4(%esp)
085e54a0 +0x1f8:  lea    -0x2c(%ebp),%eax
085e54a3 +0x1fb:  mov    %eax,(%esp)
085e54a6 +0x1fe:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085e54ab +0x203:  addl   $0x1,-0xc(%ebp)
085e54af +0x207:  cmpl   $0x1f,-0xc(%ebp)
085e54b3 +0x20b:  setle  %al
085e54b6 +0x20e:  test   %al,%al
085e54b8 +0x210:  jne    085e5491 <+0x1e9>
085e54ba +0x212:  movl   $0x1,0x4(%esp)
085e54c2 +0x21a:  lea    -0x2c(%ebp),%eax
085e54c5 +0x21d:  mov    %eax,(%esp)
085e54c8 +0x220:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085e54cd +0x225:  lea    -0x2c(%ebp),%eax
085e54d0 +0x228:  mov    %eax,0x4(%esp)
085e54d4 +0x22c:  mov    0xc(%ebp),%eax
085e54d7 +0x22f:  mov    %eax,(%esp)
085e54da +0x232:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085e54df +0x237:  mov    $0x1,%ebx
085e54e4 +0x23c:  lea    -0x2c(%ebp),%eax
085e54e7 +0x23f:  mov    %eax,(%esp)
085e54ea +0x242:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085e54ef +0x247:  mov    %ebx,%eax
085e54f1 +0x249:  add    $0x60,%esp
085e54f4 +0x24c:  pop    %ebx
085e54f5 +0x24d:  pop    %esi
085e54f6 +0x24e:  pop    %ebp
085e54f7 +0x24f:  ret
085e54f8 +0x250:  mov    %edx,%ebx
085e54fa +0x252:  mov    %eax,%esi
085e54fc +0x254:  lea    -0x2c(%ebp),%eax
085e54ff +0x257:  mov    %eax,(%esp)
085e5502 +0x25a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085e5507 +0x25f:  mov    %esi,%eax
085e5509 +0x261:  mov    %ebx,%edx
085e550b +0x263:  mov    %eax,(%esp)
085e550e +0x266:  call   08ae3750 <_Unwind_Resume>
085e5513 +0x26b:  nop
```

## 反编译 C

```c
// CMissionList_Charac::Send_MissionList @ 0x85e52a8

/* CMissionList_Charac::Send_MissionList(CUser&) */

undefined4 __thiscall
CMissionList_Charac::Send_MissionList(CMissionList_Charac *this,CUser *param_1)

{
  int iVar1;
  int iVar2;
  byte local_54 [32];
  int local_34;
  PacketGuard local_30 [12];
  int local_24;
  int local_20;
  int *local_1c;
  short local_16;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 085e52d1 to 085e54de has its CatchHandler @ 085e54f8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x140);
  local_34 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_30);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  local_24 = 0;
  for (local_20 = 1; local_20 < 0x24; local_20 = local_20 + 1) {
    if (*(short *)(this + local_20 * 8 + 7) != 0) {
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_30,(int)*(short *)(this + local_20 * 8 + 7));
      if (local_20 == 0x1b) {
        local_16 = 0;
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          if (((int)*(short *)(this + 0xe1) >> ((byte)local_14 & 0x1f) & 1U) != 0) {
            local_16 = local_16 + 1;
          }
        }
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(int)local_16);
      }
      else {
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_30,(int)*(short *)(this + local_20 * 8 + 9));
      }
      iVar2 = (int)*(short *)(this + local_20 * 8 + 7);
      iVar1 = G_CDataManager();
      local_1c = (int *)CDataManager::find_mission(iVar1);
      if (local_1c == (int *)0x0) {
        MissionInfo::clear((MissionInfo *)(this + local_20 * 8 + 5));
      }
      else {
        if (((local_20 == 0x1b) || (local_20 == 0x1f)) || (local_20 == 0x20)) {
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_30,(int)*(short *)(this + local_20 * 8 + 0xb));
        }
        else {
          iVar1 = (**(code **)(*local_1c + 0x28))(local_1c,iVar2);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,iVar1);
        }
        local_24 = local_24 + 1;
      }
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,&local_34,local_24);
  BitsetToStr((bitset *)(this + 0x128),local_54);
  for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_54[local_10]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return 1;
}
```
