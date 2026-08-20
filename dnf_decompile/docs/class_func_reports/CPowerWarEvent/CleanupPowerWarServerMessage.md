# CleanupPowerWarServerMessage

`_ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv`

`CPowerWarEvent::CleanupPowerWarServerMessage()`

| 类 | 地址 |
|---|---|
| `CPowerWarEvent` | `0x08268492` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268492  _ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv
#           CPowerWarEvent::CleanupPowerWarServerMessage()
# range [0x08268492, 0x0826862e]
08268492 +0x000:  push   %ebp
08268493 +0x001:  mov    %esp,%ebp
08268495 +0x003:  push   %esi
08268496 +0x004:  push   %ebx
08268497 +0x005:  sub    $0x30,%esp
0826849a +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826849f +0x00d:  mov    %eax,(%esp)
082684a2 +0x010:  call   08298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>  ; CGameManager::GetSharedServerMessageManager()
082684a7 +0x015:  mov    %eax,-0x18(%ebp)
082684aa +0x018:  cmpl   $0x0,-0x18(%ebp)
082684ae +0x01c:  je     08268628 <+0x196>
082684b4 +0x022:  movl   $0x1,0x4(%esp)
082684bc +0x02a:  mov    -0x18(%ebp),%eax
082684bf +0x02d:  mov    %eax,(%esp)
082684c2 +0x030:  call   08600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>  ; CSharedServerMessageManager::DeleteSpecificMessage(int)
082684c7 +0x035:  movl   $0x2,0x4(%esp)
082684cf +0x03d:  mov    -0x18(%ebp),%eax
082684d2 +0x040:  mov    %eax,(%esp)
082684d5 +0x043:  call   08600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>  ; CSharedServerMessageManager::DeleteSpecificMessage(int)
082684da +0x048:  movl   $0x3,0x4(%esp)
082684e2 +0x050:  mov    -0x18(%ebp),%eax
082684e5 +0x053:  mov    %eax,(%esp)
082684e8 +0x056:  call   08600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>  ; CSharedServerMessageManager::DeleteSpecificMessage(int)
082684ed +0x05b:  lea    -0x24(%ebp),%eax
082684f0 +0x05e:  mov    %eax,(%esp)
082684f3 +0x061:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082684f8 +0x066:  movl   $0xc0,0x8(%esp)
08268500 +0x06e:  movl   $0x0,0x4(%esp)
08268508 +0x076:  lea    -0x24(%ebp),%eax
0826850b +0x079:  mov    %eax,(%esp)
0826850e +0x07c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08268513 +0x081:  movl   $0x2,0x4(%esp)
0826851b +0x089:  lea    -0x24(%ebp),%eax
0826851e +0x08c:  mov    %eax,(%esp)
08268521 +0x08f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08268526 +0x094:  movl   $0x3,0x4(%esp)
0826852e +0x09c:  lea    -0x24(%ebp),%eax
08268531 +0x09f:  mov    %eax,(%esp)
08268534 +0x0a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08268539 +0x0a7:  movl   $"null string",-0x14(%ebp)
08268540 +0x0ae:  mov    -0x14(%ebp),%eax
08268543 +0x0b1:  mov    %eax,(%esp)
08268546 +0x0b4:  call   0807e3b0 <_init+0xca8>
0826854b +0x0b9:  mov    %eax,-0x10(%ebp)
0826854e +0x0bc:  movl   $0x0,-0xc(%ebp)
08268555 +0x0c3:  jmp    082685c6 <+0x134>
08268557 +0x0c5:  mov    -0xc(%ebp),%eax
0826855a +0x0c8:  add    $0x1,%eax
0826855d +0x0cb:  mov    %eax,0x4(%esp)
08268561 +0x0cf:  lea    -0x24(%ebp),%eax
08268564 +0x0d2:  mov    %eax,(%esp)
08268567 +0x0d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0826856c +0x0da:  mov    -0x10(%ebp),%eax
0826856f +0x0dd:  mov    %eax,0x4(%esp)
08268573 +0x0e1:  lea    -0x24(%ebp),%eax
08268576 +0x0e4:  mov    %eax,(%esp)
08268579 +0x0e7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0826857e +0x0ec:  mov    -0x10(%ebp),%eax
08268581 +0x0ef:  mov    %eax,0x8(%esp)
08268585 +0x0f3:  mov    -0x14(%ebp),%eax
08268588 +0x0f6:  mov    %eax,0x4(%esp)
0826858c +0x0fa:  lea    -0x24(%ebp),%eax
0826858f +0x0fd:  mov    %eax,(%esp)
08268592 +0x100:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08268597 +0x105:  mov    -0x10(%ebp),%eax
0826859a +0x108:  mov    %eax,0x4(%esp)
0826859e +0x10c:  lea    -0x24(%ebp),%eax
082685a1 +0x10f:  mov    %eax,(%esp)
082685a4 +0x112:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082685a9 +0x117:  mov    -0x10(%ebp),%eax
082685ac +0x11a:  mov    %eax,0x8(%esp)
082685b0 +0x11e:  mov    -0x14(%ebp),%eax
082685b3 +0x121:  mov    %eax,0x4(%esp)
082685b7 +0x125:  lea    -0x24(%ebp),%eax
082685ba +0x128:  mov    %eax,(%esp)
082685bd +0x12b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
082685c2 +0x130:  addl   $0x1,-0xc(%ebp)
082685c6 +0x134:  cmpl   $0x2,-0xc(%ebp)
082685ca +0x138:  setle  %al
082685cd +0x13b:  test   %al,%al
082685cf +0x13d:  jne    08268557 <+0xc5>
082685d1 +0x13f:  movl   $0x1,0x4(%esp)
082685d9 +0x147:  lea    -0x24(%ebp),%eax
082685dc +0x14a:  mov    %eax,(%esp)
082685df +0x14d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082685e4 +0x152:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082685e9 +0x157:  movl   $0x3,0x8(%esp)
082685f1 +0x15f:  lea    -0x24(%ebp),%edx
082685f4 +0x162:  mov    %edx,0x4(%esp)
082685f8 +0x166:  mov    %eax,(%esp)
082685fb +0x169:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
08268600 +0x16e:  jmp    0826861d <+0x18b>
08268602 +0x170:  mov    %edx,%ebx
08268604 +0x172:  mov    %eax,%esi
08268606 +0x174:  lea    -0x24(%ebp),%eax
08268609 +0x177:  mov    %eax,(%esp)
0826860c +0x17a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08268611 +0x17f:  mov    %esi,%eax
08268613 +0x181:  mov    %ebx,%edx
08268615 +0x183:  mov    %eax,(%esp)
08268618 +0x186:  call   08ae3750 <_Unwind_Resume>
0826861d +0x18b:  lea    -0x24(%ebp),%eax
08268620 +0x18e:  mov    %eax,(%esp)
08268623 +0x191:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08268628 +0x196:  add    $0x30,%esp
0826862b +0x199:  pop    %ebx
0826862c +0x19a:  pop    %esi
0826862d +0x19b:  pop    %ebp
0826862e +0x19c:  ret
```

## 反编译 C

```c
// CPowerWarEvent::CleanupPowerWarServerMessage @ 0x8268492

/* CPowerWarEvent::CleanupPowerWarServerMessage() */

void CPowerWarEvent::CleanupPowerWarServerMessage(void)

{
  CGameManager *this;
  GameWorld *this_00;
  PacketGuard local_28 [12];
  CSharedServerMessageManager *local_1c;
  char *local_18;
  size_t local_14;
  int local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_1c = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this);
  if (local_1c != (CSharedServerMessageManager *)0x0) {
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,1);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,2);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,3);
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0826850e to 082685ff has its CatchHandler @ 08268602 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xc0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,3);
    local_18 = "null string";
    local_14 = strlen("null string");
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10 + 1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_28,local_18,local_14);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_28,local_18,local_14);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this_00,local_28,3);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
