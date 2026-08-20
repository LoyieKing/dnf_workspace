# OnSetPVPSeatState

`_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE`

`PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dd070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dd070  _ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE
#           PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
# range [0x085dd070, 0x085dd3f7]
085dd070 +0x000:  push   %ebp
085dd071 +0x001:  mov    %esp,%ebp
085dd073 +0x003:  push   %esi
085dd074 +0x004:  push   %ebx
085dd075 +0x005:  sub    $0x40,%esp
085dd078 +0x008:  cmpl   $0x0,0xc(%ebp)
085dd07c +0x00c:  jne    085dd088 <+0x18>
085dd07e +0x00e:  mov    $0x1,%ebx
085dd083 +0x013:  jmp    085dd3ef <+0x37f>
085dd088 +0x018:  lea    -0x1c(%ebp),%eax
085dd08b +0x01b:  mov    %eax,(%esp)
085dd08e +0x01e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085dd093 +0x023:  movl   $0x0,-0x10(%ebp)
085dd09a +0x02a:  mov    0x10(%ebp),%eax
085dd09d +0x02d:  mov    %eax,0x8(%esp)
085dd0a1 +0x031:  mov    0xc(%ebp),%eax
085dd0a4 +0x034:  mov    %eax,0x4(%esp)
085dd0a8 +0x038:  mov    0x8(%ebp),%eax
085dd0ab +0x03b:  mov    %eax,(%esp)
085dd0ae +0x03e:  call   085d65b4 <_ZN8PvP_Room15check_authorityEP5CUseri>  ; PvP_Room::check_authority(CUser*, int)
085dd0b3 +0x043:  xor    $0x1,%eax
085dd0b6 +0x046:  test   %al,%al
085dd0b8 +0x048:  je     085dd0c6 <+0x56>
085dd0ba +0x04a:  movl   $0x8,-0x10(%ebp)
085dd0c1 +0x051:  jmp    085dd357 <+0x2e7>
085dd0c6 +0x056:  mov    0x8(%ebp),%eax
085dd0c9 +0x059:  mov    0x6e4(%eax),%eax
085dd0cf +0x05f:  mov    (%eax),%eax
085dd0d1 +0x061:  add    $0x74,%eax
085dd0d4 +0x064:  mov    (%eax),%ecx
085dd0d6 +0x066:  mov    0x14(%ebp),%edx
085dd0d9 +0x069:  mov    0x8(%ebp),%eax
085dd0dc +0x06c:  mov    0x6e4(%eax),%eax
085dd0e2 +0x072:  mov    %edx,0x4(%esp)
085dd0e6 +0x076:  mov    %eax,(%esp)
085dd0e9 +0x079:  call   *%ecx
085dd0eb +0x07b:  xor    $0x1,%eax
085dd0ee +0x07e:  test   %al,%al
085dd0f0 +0x080:  je     085dd0fe <+0x8e>
085dd0f2 +0x082:  movl   $0x8,-0x10(%ebp)
085dd0f9 +0x089:  jmp    085dd357 <+0x2e7>
085dd0fe +0x08e:  mov    0x8(%ebp),%eax
085dd101 +0x091:  mov    0xb8(%eax),%eax
085dd107 +0x097:  cmp    $0x2,%eax
085dd10a +0x09a:  jne    085dd118 <+0xa8>
085dd10c +0x09c:  movl   $0x13,-0x10(%ebp)
085dd113 +0x0a3:  jmp    085dd357 <+0x2e7>
085dd118 +0x0a8:  movl   $0x0,-0x20(%ebp)
085dd11f +0x0af:  movb   $0x0,-0x21(%ebp)
085dd123 +0x0b3:  movb   $0x0,-0x22(%ebp)
085dd127 +0x0b7:  movb   $0x0,-0x23(%ebp)
085dd12b +0x0bb:  mov    0x10(%ebp),%eax
085dd12e +0x0be:  mov    %eax,0x4(%esp)
085dd132 +0x0c2:  mov    0x8(%ebp),%eax
085dd135 +0x0c5:  mov    %eax,(%esp)
085dd138 +0x0c8:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085dd13d +0x0cd:  mov    %eax,-0xc(%ebp)
085dd140 +0x0d0:  cmpl   $0xfe,0x14(%ebp)
085dd147 +0x0d7:  jne    085dd1af <+0x13f>
085dd149 +0x0d9:  cmpl   $0x3,0x18(%ebp)
085dd14d +0x0dd:  jne    085dd16a <+0xfa>
085dd14f +0x0df:  mov    0x18(%ebp),%eax
085dd152 +0x0e2:  mov    %eax,0x8(%esp)
085dd156 +0x0e6:  mov    0x10(%ebp),%eax
085dd159 +0x0e9:  mov    %eax,0x4(%esp)
085dd15d +0x0ed:  mov    0x8(%ebp),%eax
085dd160 +0x0f0:  mov    %eax,(%esp)
085dd163 +0x0f3:  call   085dd3f8 <_ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE>  ; PvP_Room::SendWalkOut(int, ENUM_WALKOUT_TYPE)
085dd168 +0x0f8:  jmp    085dd1af <+0x13f>
085dd16a +0x0fa:  mov    0x8(%ebp),%eax
085dd16d +0x0fd:  mov    0x28(%eax),%eax
085dd170 +0x100:  cmp    0xc(%ebp),%eax
085dd173 +0x103:  jne    085dd1af <+0x13f>
085dd175 +0x105:  mov    0x10(%ebp),%edx
085dd178 +0x108:  mov    0x8(%ebp),%eax
085dd17b +0x10b:  add    $0xc,%edx
085dd17e +0x10e:  mov    (%eax,%edx,4),%eax
085dd181 +0x111:  test   %eax,%eax
085dd183 +0x113:  je     085dd1af <+0x13f>
085dd185 +0x115:  mov    0x10(%ebp),%edx
085dd188 +0x118:  mov    0x8(%ebp),%eax
085dd18b +0x11b:  add    $0xc,%edx
085dd18e +0x11e:  mov    (%eax,%edx,4),%eax
085dd191 +0x121:  cmp    0xc(%ebp),%eax
085dd194 +0x124:  je     085dd1af <+0x13f>
085dd196 +0x126:  mov    0x18(%ebp),%eax
085dd199 +0x129:  mov    %eax,0x8(%esp)
085dd19d +0x12d:  mov    0x10(%ebp),%eax
085dd1a0 +0x130:  mov    %eax,0x4(%esp)
085dd1a4 +0x134:  mov    0x8(%ebp),%eax
085dd1a7 +0x137:  mov    %eax,(%esp)
085dd1aa +0x13a:  call   085dd3f8 <_ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE>  ; PvP_Room::SendWalkOut(int, ENUM_WALKOUT_TYPE)
085dd1af +0x13f:  lea    -0x23(%ebp),%eax
085dd1b2 +0x142:  mov    %eax,0x1c(%esp)
085dd1b6 +0x146:  lea    -0x22(%ebp),%eax
085dd1b9 +0x149:  mov    %eax,0x18(%esp)
085dd1bd +0x14d:  lea    -0x21(%ebp),%eax
085dd1c0 +0x150:  mov    %eax,0x14(%esp)
085dd1c4 +0x154:  lea    -0x20(%ebp),%eax
085dd1c7 +0x157:  mov    %eax,0x10(%esp)
085dd1cb +0x15b:  mov    0x14(%ebp),%eax
085dd1ce +0x15e:  mov    %eax,0xc(%esp)
085dd1d2 +0x162:  mov    0x10(%ebp),%eax
085dd1d5 +0x165:  mov    %eax,0x8(%esp)
085dd1d9 +0x169:  mov    0xc(%ebp),%eax
085dd1dc +0x16c:  mov    %eax,0x4(%esp)
085dd1e0 +0x170:  mov    0x8(%ebp),%eax
085dd1e3 +0x173:  mov    %eax,(%esp)
085dd1e6 +0x176:  call   085d77c0 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_>  ; PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)
085dd1eb +0x17b:  mov    %eax,-0x10(%ebp)
085dd1ee +0x17e:  mov    0x8(%ebp),%eax
085dd1f1 +0x181:  mov    %eax,(%esp)
085dd1f4 +0x184:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085dd1f9 +0x189:  test   %eax,%eax
085dd1fb +0x18b:  jne    085dd20f <+0x19f>
085dd1fd +0x18d:  movzbl -0x23(%ebp),%eax
085dd201 +0x191:  xor    $0x1,%eax
085dd204 +0x194:  test   %al,%al
085dd206 +0x196:  je     085dd20f <+0x19f>
085dd208 +0x198:  mov    $0x1,%eax
085dd20d +0x19d:  jmp    085dd214 <+0x1a4>
085dd20f +0x19f:  mov    $0x0,%eax
085dd214 +0x1a4:  test   %al,%al
085dd216 +0x1a6:  je     085dd253 <+0x1e3>
085dd218 +0x1a8:  mov    0x8(%ebp),%eax
085dd21b +0x1ab:  mov    %eax,(%esp)
085dd21e +0x1ae:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085dd223 +0x1b3:  mov    %eax,0x14(%esp)
085dd227 +0x1b7:  movl   $"방없어져야하는데 안없어짐 ID[%d]",0x10(%esp)
085dd22f +0x1bf:  movl   $0x11be,0xc(%esp)
085dd237 +0x1c7:  movl   $&_ZZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
085dd23f +0x1cf:  movl   $"pvp.cpp",0x4(%esp)
085dd247 +0x1d7:  movl   $0x1,(%esp)
085dd24e +0x1de:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085dd253 +0x1e3:  cmpl   $0x0,-0x10(%ebp)
085dd257 +0x1e7:  jne    085dd357 <+0x2e7>
085dd25d +0x1ed:  mov    -0x20(%ebp),%eax
085dd260 +0x1f0:  test   %eax,%eax
085dd262 +0x1f2:  je     085dd2cc <+0x25c>
085dd264 +0x1f4:  mov    0x8(%ebp),%eax
085dd267 +0x1f7:  mov    0x6e4(%eax),%eax
085dd26d +0x1fd:  mov    (%eax),%eax
085dd26f +0x1ff:  add    $0x2c,%eax
085dd272 +0x202:  mov    (%eax),%ebx
085dd274 +0x204:  mov    -0x20(%ebp),%edx
085dd277 +0x207:  mov    0x8(%ebp),%eax
085dd27a +0x20a:  mov    0x6e4(%eax),%eax
085dd280 +0x210:  mov    0x10(%ebp),%ecx
085dd283 +0x213:  mov    %ecx,0x10(%esp)
085dd287 +0x217:  mov    -0xc(%ebp),%ecx
085dd28a +0x21a:  mov    %ecx,0xc(%esp)
085dd28e +0x21e:  mov    0x8(%ebp),%ecx
085dd291 +0x221:  mov    %ecx,0x8(%esp)
085dd295 +0x225:  mov    %edx,0x4(%esp)
085dd299 +0x229:  mov    %eax,(%esp)
085dd29c +0x22c:  call   *%ebx
085dd29e +0x22e:  mov    -0x20(%ebp),%ebx
085dd2a1 +0x231:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dd2a6 +0x236:  mov    %ebx,0x4(%esp)
085dd2aa +0x23a:  mov    %eax,(%esp)
085dd2ad +0x23d:  call   086c6fae <_ZN9GameWorld12out_from_pvpEP5CUser>  ; GameWorld::out_from_pvp(CUser*)
085dd2b2 +0x242:  mov    0xc(%ebp),%eax
085dd2b5 +0x245:  mov    %eax,(%esp)
085dd2b8 +0x248:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085dd2bd +0x24d:  mov    -0x20(%ebp),%edx
085dd2c0 +0x250:  mov    %eax,0x4(%esp)
085dd2c4 +0x254:  mov    %edx,(%esp)
085dd2c7 +0x257:  call   0865cf42 <_ZN5CUser33insert_pvp_masterid_walkingout_meEj>  ; CUser::insert_pvp_masterid_walkingout_me(unsigned int)
085dd2cc +0x25c:  movzbl -0x21(%ebp),%eax
085dd2d0 +0x260:  test   %al,%al
085dd2d2 +0x262:  je     085dd30c <+0x29c>
085dd2d4 +0x264:  lea    -0x1c(%ebp),%eax
085dd2d7 +0x267:  mov    %eax,(%esp)
085dd2da +0x26a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085dd2df +0x26f:  lea    -0x1c(%ebp),%eax
085dd2e2 +0x272:  mov    0x10(%ebp),%edx
085dd2e5 +0x275:  mov    %edx,0x8(%esp)
085dd2e9 +0x279:  mov    %eax,0x4(%esp)
085dd2ed +0x27d:  mov    0x8(%ebp),%eax
085dd2f0 +0x280:  mov    %eax,(%esp)
085dd2f3 +0x283:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
085dd2f8 +0x288:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dd2fd +0x28d:  lea    -0x1c(%ebp),%edx
085dd300 +0x290:  mov    %edx,0x4(%esp)
085dd304 +0x294:  mov    %eax,(%esp)
085dd307 +0x297:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085dd30c +0x29c:  movzbl -0x22(%ebp),%eax
085dd310 +0x2a0:  test   %al,%al
085dd312 +0x2a2:  je     085dd345 <+0x2d5>
085dd314 +0x2a4:  lea    -0x1c(%ebp),%eax
085dd317 +0x2a7:  mov    %eax,(%esp)
085dd31a +0x2aa:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085dd31f +0x2af:  lea    -0x1c(%ebp),%eax
085dd322 +0x2b2:  mov    %eax,0x4(%esp)
085dd326 +0x2b6:  mov    0x8(%ebp),%eax
085dd329 +0x2b9:  mov    %eax,(%esp)
085dd32c +0x2bc:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
085dd331 +0x2c1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dd336 +0x2c6:  lea    -0x1c(%ebp),%edx
085dd339 +0x2c9:  mov    %edx,0x4(%esp)
085dd33d +0x2cd:  mov    %eax,(%esp)
085dd340 +0x2d0:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085dd345 +0x2d5:  movzbl -0x23(%ebp),%eax
085dd349 +0x2d9:  test   %al,%al
085dd34b +0x2db:  je     085dd357 <+0x2e7>
085dd34d +0x2dd:  mov    $0x0,%ebx
085dd352 +0x2e2:  jmp    085dd3e4 <+0x374>
085dd357 +0x2e7:  cmpl   $0x0,-0x10(%ebp)
085dd35b +0x2eb:  jle    085dd3c2 <+0x352>
085dd35d +0x2ed:  movl   $0x37,0x8(%esp)
085dd365 +0x2f5:  movl   $0x1,0x4(%esp)
085dd36d +0x2fd:  lea    -0x1c(%ebp),%eax
085dd370 +0x300:  mov    %eax,(%esp)
085dd373 +0x303:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085dd378 +0x308:  movl   $0x0,0x4(%esp)
085dd380 +0x310:  lea    -0x1c(%ebp),%eax
085dd383 +0x313:  mov    %eax,(%esp)
085dd386 +0x316:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dd38b +0x31b:  mov    -0x10(%ebp),%eax
085dd38e +0x31e:  mov    %eax,0x4(%esp)
085dd392 +0x322:  lea    -0x1c(%ebp),%eax
085dd395 +0x325:  mov    %eax,(%esp)
085dd398 +0x328:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dd39d +0x32d:  movl   $0x1,0x4(%esp)
085dd3a5 +0x335:  lea    -0x1c(%ebp),%eax
085dd3a8 +0x338:  mov    %eax,(%esp)
085dd3ab +0x33b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dd3b0 +0x340:  lea    -0x1c(%ebp),%eax
085dd3b3 +0x343:  mov    %eax,0x4(%esp)
085dd3b7 +0x347:  mov    0xc(%ebp),%eax
085dd3ba +0x34a:  mov    %eax,(%esp)
085dd3bd +0x34d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085dd3c2 +0x352:  mov    $0x1,%ebx
085dd3c7 +0x357:  jmp    085dd3e4 <+0x374>
085dd3c9 +0x359:  mov    %edx,%ebx
085dd3cb +0x35b:  mov    %eax,%esi
085dd3cd +0x35d:  lea    -0x1c(%ebp),%eax
085dd3d0 +0x360:  mov    %eax,(%esp)
085dd3d3 +0x363:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd3d8 +0x368:  mov    %esi,%eax
085dd3da +0x36a:  mov    %ebx,%edx
085dd3dc +0x36c:  mov    %eax,(%esp)
085dd3df +0x36f:  call   08ae3750 <_Unwind_Resume>
085dd3e4 +0x374:  lea    -0x1c(%ebp),%eax
085dd3e7 +0x377:  mov    %eax,(%esp)
085dd3ea +0x37a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd3ef +0x37f:  mov    %ebx,%eax
085dd3f1 +0x381:  add    $0x40,%esp
085dd3f4 +0x384:  pop    %ebx
085dd3f5 +0x385:  pop    %esi
085dd3f6 +0x386:  pop    %ebp
085dd3f7 +0x387:  ret
```

## 反编译 C

```c
// PvP_Room::OnSetPVPSeatState @ 0x85dd070

/* PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall
PvP_Room::OnSetPVPSeatState
          (PvP_Room *this,CUserCharacInfo *param_1,int param_2,int param_4,int param_5)

{
  bool bVar1;
  CUser *pCVar2;
  char cVar3;
  int iVar4;
  GameWorld *pGVar5;
  undefined4 uVar6;
  char local_27;
  char local_26;
  char local_25;
  CUser *local_24;
  PacketGuard local_20 [12];
  int local_14;
  undefined4 local_10;
  
  if (param_1 == (CUserCharacInfo *)0x0) {
    return 1;
  }
  PacketGuard::PacketGuard(local_20);
  local_14 = 0;
  cVar3 = check_authority(this,(CUser *)param_1,param_2);
  if (cVar3 == '\x01') {
                    /* try { // try from 085dd0e9 to 085dd3c1 has its CatchHandler @ 085dd3c9 */
    cVar3 = (**(code **)(**(int **)(this + 0x6e4) + 0x74))(*(undefined4 *)(this + 0x6e4),param_4);
    if (cVar3 == '\x01') {
      if (*(int *)(this + 0xb8) == 2) {
        local_14 = 0x13;
      }
      else {
        local_24 = (CUser *)0x0;
        local_25 = '\0';
        local_26 = '\0';
        local_27 = '\0';
        local_10 = get_team(this,param_2);
        if (param_4 == 0xfe) {
          if (param_5 == 3) {
            SendWalkOut(this,param_2,3);
          }
          else if (((*(CUserCharacInfo **)(this + 0x28) == param_1) &&
                   (*(int *)(this + (param_2 + 0xc) * 4) != 0)) &&
                  (*(CUserCharacInfo **)(this + (param_2 + 0xc) * 4) != param_1)) {
            SendWalkOut(this,param_2,param_5);
          }
        }
        local_14 = set_seat_state(this,param_1,param_2,param_4,&local_24,&local_25,&local_26,
                                  &local_27);
        iVar4 = get_waiter_count(this);
        if ((iVar4 == 0) && (local_27 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar6 = get_index(this);
          LogManager::logFormat
                    (1,"pvp.cpp",
                     "bool PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)"
                     ,0x11be,&DAT_08cc12fc,uVar6);
        }
        if (local_14 == 0) {
          if (local_24 != (CUser *)0x0) {
            (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                      (*(undefined4 *)(this + 0x6e4),local_24,this,local_10,param_2);
            pCVar2 = local_24;
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::out_from_pvp(pGVar5,pCVar2);
            CUserCharacInfo::getCurCharacNo(param_1);
            CUser::insert_pvp_masterid_walkingout_me((uint)local_24);
          }
          if (local_25 != '\0') {
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
            make_seat_info(this,(char *)local_20,param_2);
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar5,local_20);
          }
          if (local_26 != '\0') {
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
            make_state_info(this,(char *)local_20);
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar5,local_20);
          }
          if (local_27 != '\0') {
            uVar6 = 0;
            goto LAB_085dd3e4;
          }
        }
      }
    }
    else {
      local_14 = 8;
    }
  }
  else {
    local_14 = 8;
  }
  if (0 < local_14) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x37);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_1,local_20);
  }
  uVar6 = 1;
LAB_085dd3e4:
  PacketGuard::~PacketGuard(local_20);
  return uVar6;
}
```
