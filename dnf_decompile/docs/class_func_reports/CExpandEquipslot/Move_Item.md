# Move_Item

`_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii`

`CExpandEquipslot::Move_Item(CUser*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x08499f84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08499f84  _ZN16CExpandEquipslot9Move_ItemEP5CUseriiii
#           CExpandEquipslot::Move_Item(CUser*, int, int, int, int)
# range [0x08499f84, 0x0849a2c9]
08499f84 +0x000:  push   %ebp
08499f85 +0x001:  mov    %esp,%ebp
08499f87 +0x003:  push   %ebx
08499f88 +0x004:  sub    $0x84,%esp
08499f8e +0x00a:  cmpl   $0x0,0xc(%ebp)
08499f92 +0x00e:  jne    08499fca <+0x46>
08499f94 +0x010:  movl   $"Fail Move_Item : pUser is NULL",0x10(%esp)
08499f9c +0x018:  movl   $0x17c,0xc(%esp)
08499fa4 +0x020:  movl   $&_ZZN16CExpandEquipslot9Move_ItemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08499fac +0x028:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
08499fb4 +0x030:  movl   $0x1,(%esp)
08499fbb +0x037:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08499fc0 +0x03c:  mov    $0x11,%eax
08499fc5 +0x041:  jmp    0849a2c1 <+0x33d>
08499fca +0x046:  mov    0xc(%ebp),%eax
08499fcd +0x049:  mov    %eax,(%esp)
08499fd0 +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08499fd5 +0x051:  cmp    $0x2,%eax
08499fd8 +0x054:  setle  %al
08499fdb +0x057:  test   %al,%al
08499fdd +0x059:  je     0849a015 <+0x91>
08499fdf +0x05b:  movl   $"Fail Move_Item : pUser is not valid state",0x10(%esp)
08499fe7 +0x063:  movl   $0x182,0xc(%esp)
08499fef +0x06b:  movl   $&_ZZN16CExpandEquipslot9Move_ItemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08499ff7 +0x073:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
08499fff +0x07b:  movl   $0x1,(%esp)
0849a006 +0x082:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0849a00b +0x087:  mov    $0x11,%eax
0849a010 +0x08c:  jmp    0849a2c1 <+0x33d>
0849a015 +0x091:  mov    0xc(%ebp),%eax
0849a018 +0x094:  mov    %eax,(%esp)
0849a01b +0x097:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849a020 +0x09c:  mov    %eax,-0x18(%ebp)
0849a023 +0x09f:  mov    0x10(%ebp),%eax
0849a026 +0x0a2:  test   %eax,%eax
0849a028 +0x0a4:  jne    0849a2bc <+0x338>
0849a02e +0x0aa:  mov    0x18(%ebp),%eax
0849a031 +0x0ad:  cmp    $0x12,%eax
0849a034 +0x0b0:  jne    0849a2b5 <+0x331>
0849a03a +0x0b6:  mov    0x1c(%ebp),%eax
0849a03d +0x0b9:  imul   $0x3d,%eax,%eax
0849a040 +0x0bc:  add    0x8(%ebp),%eax
0849a043 +0x0bf:  lea    0x5(%eax),%edx
0849a046 +0x0c2:  mov    -0x18(%ebp),%eax
0849a049 +0x0c5:  mov    0x650(%eax),%ecx
0849a04f +0x0cb:  mov    0x14(%ebp),%eax
0849a052 +0x0ce:  imul   $0x3d,%eax,%eax
0849a055 +0x0d1:  lea    (%ecx,%eax,1),%eax
0849a058 +0x0d4:  mov    %edx,0x4(%esp)
0849a05c +0x0d8:  mov    %eax,(%esp)
0849a05f +0x0db:  call   085002e0 <_Z14CheckEquipableRK10Inven_ItemS1_>  ; CheckEquipable(Inven_Item const&, Inven_Item const&)
0849a064 +0x0e0:  xor    $0x1,%eax
0849a067 +0x0e3:  test   %al,%al
0849a069 +0x0e5:  je     0849a075 <+0xf1>
0849a06b +0x0e7:  mov    $0x11,%eax
0849a070 +0x0ec:  jmp    0849a2c1 <+0x33d>
0849a075 +0x0f1:  mov    -0x18(%ebp),%eax
0849a078 +0x0f4:  mov    0x650(%eax),%edx
0849a07e +0x0fa:  mov    0x14(%ebp),%eax
0849a081 +0x0fd:  imul   $0x3d,%eax,%eax
0849a084 +0x100:  lea    (%edx,%eax,1),%eax
0849a087 +0x103:  add    $0x11,%eax
0849a08a +0x106:  mov    %eax,(%esp)
0849a08d +0x109:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
0849a092 +0x10e:  xor    $0x1,%eax
0849a095 +0x111:  test   %al,%al
0849a097 +0x113:  jne    0849a0b7 <+0x133>
0849a099 +0x115:  mov    0x1c(%ebp),%eax
0849a09c +0x118:  imul   $0x3d,%eax,%eax
0849a09f +0x11b:  add    $0x10,%eax
0849a0a2 +0x11e:  add    0x8(%ebp),%eax
0849a0a5 +0x121:  add    $0x6,%eax
0849a0a8 +0x124:  mov    %eax,(%esp)
0849a0ab +0x127:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
0849a0b0 +0x12c:  xor    $0x1,%eax
0849a0b3 +0x12f:  test   %al,%al
0849a0b5 +0x131:  je     0849a0be <+0x13a>
0849a0b7 +0x133:  mov    $0x1,%eax
0849a0bc +0x138:  jmp    0849a0c3 <+0x13f>
0849a0be +0x13a:  mov    $0x0,%eax
0849a0c3 +0x13f:  test   %al,%al
0849a0c5 +0x141:  je     0849a0d1 <+0x14d>
0849a0c7 +0x143:  mov    $0x11,%eax
0849a0cc +0x148:  jmp    0849a2c1 <+0x33d>
0849a0d1 +0x14d:  lea    -0x65(%ebp),%eax
0849a0d4 +0x150:  mov    %eax,(%esp)
0849a0d7 +0x153:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0849a0dc +0x158:  mov    -0x18(%ebp),%eax
0849a0df +0x15b:  mov    0x650(%eax),%edx
0849a0e5 +0x161:  mov    0x14(%ebp),%eax
0849a0e8 +0x164:  imul   $0x3d,%eax,%eax
0849a0eb +0x167:  lea    (%edx,%eax,1),%eax
0849a0ee +0x16a:  mov    %eax,0x4(%esp)
0849a0f2 +0x16e:  lea    -0x65(%ebp),%eax
0849a0f5 +0x171:  mov    %eax,(%esp)
0849a0f8 +0x174:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a0fd +0x179:  mov    -0x63(%ebp),%eax
0849a100 +0x17c:  test   %eax,%eax
0849a102 +0x17e:  je     0849a263 <+0x2df>
0849a108 +0x184:  mov    -0x63(%ebp),%eax
0849a10b +0x187:  mov    %eax,%ebx
0849a10d +0x189:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849a112 +0x18e:  mov    %ebx,0x4(%esp)
0849a116 +0x192:  mov    %eax,(%esp)
0849a119 +0x195:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849a11e +0x19a:  mov    %eax,-0x14(%ebp)
0849a121 +0x19d:  cmpl   $0x0,-0x14(%ebp)
0849a125 +0x1a1:  je     0849a12d <+0x1a9>
0849a127 +0x1a3:  cmpl   $0x0,0xc(%ebp)
0849a12b +0x1a7:  jne    0849a174 <+0x1f0>
0849a12d +0x1a9:  mov    -0x63(%ebp),%ebx
0849a130 +0x1ac:  movl   $0x5,0xc(%esp)
0849a138 +0x1b4:  movl   $0x1a0,0x8(%esp)
0849a140 +0x1bc:  movl   $&_ZZN16CExpandEquipslot9Move_ItemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0849a148 +0x1c4:  lea    -0x28(%ebp),%eax
0849a14b +0x1c7:  mov    %eax,(%esp)
0849a14e +0x1ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849a153 +0x1cf:  mov    %ebx,0x8(%esp)
0849a157 +0x1d3:  movl   $"CExpandEquipslot::Move_Item Move_Item return false (%d)",0x4(%esp)
0849a15f +0x1db:  lea    -0x28(%ebp),%eax
0849a162 +0x1de:  mov    %eax,(%esp)
0849a165 +0x1e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849a16a +0x1e6:  mov    $0x11,%eax
0849a16f +0x1eb:  jmp    0849a2c1 <+0x33d>
0849a174 +0x1f0:  mov    -0x14(%ebp),%eax
0849a177 +0x1f3:  mov    (%eax),%eax
0849a179 +0x1f5:  add    $0x10,%eax
0849a17c +0x1f8:  mov    (%eax),%edx
0849a17e +0x1fa:  mov    -0x14(%ebp),%eax
0849a181 +0x1fd:  mov    %eax,(%esp)
0849a184 +0x200:  call   *%edx
0849a186 +0x202:  test   %al,%al
0849a188 +0x204:  je     0849a194 <+0x210>
0849a18a +0x206:  mov    $0x11,%eax
0849a18f +0x20b:  jmp    0849a2c1 <+0x33d>
0849a194 +0x210:  mov    -0x14(%ebp),%eax
0849a197 +0x213:  mov    (%eax),%eax
0849a199 +0x215:  add    $0x14,%eax
0849a19c +0x218:  mov    (%eax),%edx
0849a19e +0x21a:  mov    -0x14(%ebp),%eax
0849a1a1 +0x21d:  mov    %eax,(%esp)
0849a1a4 +0x220:  call   *%edx
0849a1a6 +0x222:  test   %al,%al
0849a1a8 +0x224:  je     0849a1b4 <+0x230>
0849a1aa +0x226:  mov    $0x11,%eax
0849a1af +0x22b:  jmp    0849a2c1 <+0x33d>
0849a1b4 +0x230:  movl   $0x0,-0x10(%ebp)
0849a1bb +0x237:  mov    0x1c(%ebp),%eax
0849a1be +0x23a:  add    $0xa,%eax
0849a1c1 +0x23d:  mov    %eax,0x8(%esp)
0849a1c5 +0x241:  mov    -0x14(%ebp),%eax
0849a1c8 +0x244:  mov    %eax,0x4(%esp)
0849a1cc +0x248:  mov    0xc(%ebp),%eax
0849a1cf +0x24b:  mov    %eax,(%esp)
0849a1d2 +0x24e:  call   085003be <_Z11IsEquipableP5CUserPK5CItemi>  ; IsEquipable(CUser*, CItem const*, int)
0849a1d7 +0x253:  mov    %eax,-0x10(%ebp)
0849a1da +0x256:  cmpl   $0x0,-0x10(%ebp)
0849a1de +0x25a:  setne  %al
0849a1e1 +0x25d:  test   %al,%al
0849a1e3 +0x25f:  je     0849a1ed <+0x269>
0849a1e5 +0x261:  mov    -0x10(%ebp),%eax
0849a1e8 +0x264:  jmp    0849a2c1 <+0x33d>
0849a1ed +0x269:  mov    -0x14(%ebp),%eax
0849a1f0 +0x26c:  mov    (%eax),%eax
0849a1f2 +0x26e:  add    $0x48,%eax
0849a1f5 +0x271:  mov    (%eax),%edx
0849a1f7 +0x273:  mov    -0x14(%ebp),%eax
0849a1fa +0x276:  mov    %eax,(%esp)
0849a1fd +0x279:  call   *%edx
0849a1ff +0x27b:  test   %eax,%eax
0849a201 +0x27d:  setne  %al
0849a204 +0x280:  test   %al,%al
0849a206 +0x282:  je     0849a263 <+0x2df>
0849a208 +0x284:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0849a20f +0x28b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0849a214 +0x290:  mov    %eax,%ebx
0849a216 +0x292:  mov    -0x14(%ebp),%eax
0849a219 +0x295:  mov    (%eax),%eax
0849a21b +0x297:  add    $0x48,%eax
0849a21e +0x29a:  mov    (%eax),%edx
0849a220 +0x29c:  mov    -0x14(%ebp),%eax
0849a223 +0x29f:  mov    %eax,(%esp)
0849a226 +0x2a2:  call   *%edx
0849a228 +0x2a4:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0849a22e +0x2aa:  lea    (%ebx,%eax,1),%eax
0849a231 +0x2ad:  mov    %eax,-0xc(%ebp)
0849a234 +0x2b0:  cmpl   $0x0,-0xc(%ebp)
0849a238 +0x2b4:  je     0849a263 <+0x2df>
0849a23a +0x2b6:  mov    -0xc(%ebp),%eax
0849a23d +0x2b9:  lea    -0x44a54a80(%eax),%ecx
0849a243 +0x2bf:  mov    $0xc22e4507,%edx
0849a248 +0x2c4:  mov    %ecx,%eax
0849a24a +0x2c6:  imul   %edx
0849a24c +0x2c8:  lea    (%edx,%ecx,1),%eax
0849a24f +0x2cb:  mov    %eax,%edx
0849a251 +0x2cd:  sar    $0x10,%edx
0849a254 +0x2d0:  mov    %ecx,%eax
0849a256 +0x2d2:  sar    $0x1f,%eax
0849a259 +0x2d5:  mov    %edx,%ecx
0849a25b +0x2d7:  sub    %eax,%ecx
0849a25d +0x2d9:  mov    %ecx,%eax
0849a25f +0x2db:  mov    %ax,-0x5a(%ebp)
0849a263 +0x2df:  mov    0x1c(%ebp),%eax
0849a266 +0x2e2:  imul   $0x3d,%eax,%eax
0849a269 +0x2e5:  add    0x8(%ebp),%eax
0849a26c +0x2e8:  lea    0x5(%eax),%edx
0849a26f +0x2eb:  mov    -0x18(%ebp),%eax
0849a272 +0x2ee:  mov    0x650(%eax),%ecx
0849a278 +0x2f4:  mov    0x14(%ebp),%eax
0849a27b +0x2f7:  imul   $0x3d,%eax,%eax
0849a27e +0x2fa:  lea    (%ecx,%eax,1),%eax
0849a281 +0x2fd:  mov    %edx,0x4(%esp)
0849a285 +0x301:  mov    %eax,(%esp)
0849a288 +0x304:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a28d +0x309:  movb   $0x0,-0x65(%ebp)
0849a291 +0x30d:  mov    0x1c(%ebp),%eax
0849a294 +0x310:  imul   $0x3d,%eax,%eax
0849a297 +0x313:  add    0x8(%ebp),%eax
0849a29a +0x316:  lea    0x5(%eax),%edx
0849a29d +0x319:  lea    -0x65(%ebp),%eax
0849a2a0 +0x31c:  mov    %eax,0x4(%esp)
0849a2a4 +0x320:  mov    %edx,(%esp)
0849a2a7 +0x323:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a2ac +0x328:  nop
0849a2ad +0x329:  nop
0849a2ae +0x32a:  mov    $0x0,%eax
0849a2b3 +0x32f:  jmp    0849a2c1 <+0x33d>
0849a2b5 +0x331:  mov    $0x11,%eax
0849a2ba +0x336:  jmp    0849a2c1 <+0x33d>
0849a2bc +0x338:  mov    $0x11,%eax
0849a2c1 +0x33d:  add    $0x84,%esp
0849a2c7 +0x343:  pop    %ebx
0849a2c8 +0x344:  pop    %ebp
0849a2c9 +0x345:  ret
```

## 反编译 C

```c
// CExpandEquipslot::Move_Item @ 0x8499f84

/* CExpandEquipslot::Move_Item(CUser*, int, int, int, int) */

int __thiscall
CExpandEquipslot::Move_Item
          (CExpandEquipslot *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  Inven_Item local_69 [2];
  int local_67;
  undefined2 local_5e;
  cMyTrace local_2c [16];
  int local_1c;
  CItem *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Move_Item(CUser*, int, int, int, int)"
               ,0x17c,"Fail Move_Item : pUser is NULL");
    iVar3 = 0x11;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp",
                 "int CExpandEquipslot::Move_Item(CUser*, int, int, int, int)",0x182,
                 "Fail Move_Item : pUser is not valid state");
      iVar3 = 0x11;
    }
    else {
      local_1c = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      if (param_2 == 0) {
        if (param_4 == 0x12) {
          cVar2 = CheckEquipable((Inven_Item *)(*(int *)(local_1c + 0x650) + param_3 * 0x3d),
                                 (Inven_Item *)(this + param_5 * 0x3d + 5));
          if (cVar2 == '\x01') {
            cVar2 = stAmplifyOption_t::isIdentified
                              ((stAmplifyOption_t *)
                               (*(int *)(local_1c + 0x650) + param_3 * 0x3d + 0x11));
            if ((cVar2 == '\x01') &&
               (cVar2 = stAmplifyOption_t::isIdentified
                                  ((stAmplifyOption_t *)(this + param_5 * 0x3d + 0x16)),
               cVar2 == '\x01')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              iVar3 = 0x11;
            }
            else {
              Inven_Item::Inven_Item(local_69);
              Inven_Item::setCopy(local_69,(Inven_Item *)
                                           (*(int *)(local_1c + 0x650) + param_3 * 0x3d));
              iVar3 = local_67;
              if (local_67 != 0) {
                this_00 = (CDataManager *)G_CDataManager();
                local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
                if ((local_18 == (CItem *)0x0) || (param_1 == (CUser *)0x0)) {
                  cMyTrace::cMyTrace(local_2c,
                                     "int CExpandEquipslot::Move_Item(CUser*, int, int, int, int)",
                                     0x1a0,5);
                  cMyTrace::operator()
                            (local_2c,"CExpandEquipslot::Move_Item Move_Item return false (%d)",
                             local_67);
                  return 0x11;
                }
                cVar2 = (**(code **)(*(int *)local_18 + 0x10))(local_18);
                if (cVar2 != '\0') {
                  return 0x11;
                }
                cVar2 = (**(code **)(*(int *)local_18 + 0x14))(local_18);
                if (cVar2 != '\0') {
                  return 0x11;
                }
                local_14 = 0;
                local_14 = IsEquipable(param_1,local_18,param_5 + 10);
                if (local_14 != 0) {
                  return local_14;
                }
                iVar3 = (**(code **)(*(int *)local_18 + 0x48))(local_18);
                if (iVar3 != 0) {
                  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                  iVar4 = (**(code **)(*(int *)local_18 + 0x48))(local_18);
                  local_10 = iVar3 + iVar4 * 0x15180;
                  if (local_10 != 0) {
                    local_5e = (undefined2)((local_10 + -0x44a54a80) / 0x15180);
                  }
                }
              }
              Inven_Item::setCopy((Inven_Item *)(*(int *)(local_1c + 0x650) + param_3 * 0x3d),
                                  (Inven_Item *)(this + param_5 * 0x3d + 5));
              local_69[0] = (Inven_Item)0x0;
              Inven_Item::setCopy((Inven_Item *)(this + param_5 * 0x3d + 5),local_69);
              iVar3 = 0;
            }
          }
          else {
            iVar3 = 0x11;
          }
        }
        else {
          iVar3 = 0x11;
        }
      }
      else {
        iVar3 = 0x11;
      }
    }
  }
  return iVar3;
}
```
