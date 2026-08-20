# send_broadcast_lottery_gold_message

`_ZN5CUser35send_broadcast_lottery_gold_messageEmi`

`CUser::send_broadcast_lottery_gold_message(unsigned long, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d1ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d1ec  _ZN5CUser35send_broadcast_lottery_gold_messageEmi
#           CUser::send_broadcast_lottery_gold_message(unsigned long, int)
# range [0x0868d1ec, 0x0868d329]
0868d1ec +0x000:  push   %ebp
0868d1ed +0x001:  mov    %esp,%ebp
0868d1ef +0x003:  push   %esi
0868d1f0 +0x004:  push   %ebx
0868d1f1 +0x005:  sub    $0x30,%esp
0868d1f4 +0x008:  mov    0xc(%ebp),%ebx
0868d1f7 +0x00b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868d1fc +0x010:  mov    %ebx,0x4(%esp)
0868d200 +0x014:  mov    %eax,(%esp)
0868d203 +0x017:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868d208 +0x01c:  mov    %eax,-0x10(%ebp)
0868d20b +0x01f:  cmpl   $0x0,-0x10(%ebp)
0868d20f +0x023:  je     0868d31f <+0x133>
0868d215 +0x029:  mov    -0x10(%ebp),%eax
0868d218 +0x02c:  mov    %eax,(%esp)
0868d21b +0x02f:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0868d220 +0x034:  xor    $0x1,%eax
0868d223 +0x037:  test   %al,%al
0868d225 +0x039:  jne    0868d322 <+0x136>
0868d22b +0x03f:  mov    -0x10(%ebp),%eax
0868d22e +0x042:  mov    %eax,-0xc(%ebp)
0868d231 +0x045:  mov    -0xc(%ebp),%eax
0868d234 +0x048:  mov    0x340(%eax),%eax
0868d23a +0x04e:  test   %eax,%eax
0868d23c +0x050:  jle    0868d323 <+0x137>
0868d242 +0x056:  mov    -0xc(%ebp),%eax
0868d245 +0x059:  mov    0x340(%eax),%eax
0868d24b +0x05f:  cmp    0x10(%ebp),%eax
0868d24e +0x062:  jg     0868d323 <+0x137>
0868d254 +0x068:  lea    -0x1c(%ebp),%eax
0868d257 +0x06b:  mov    %eax,(%esp)
0868d25a +0x06e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868d25f +0x073:  movl   $0x56,0x8(%esp)
0868d267 +0x07b:  movl   $0x0,0x4(%esp)
0868d26f +0x083:  lea    -0x1c(%ebp),%eax
0868d272 +0x086:  mov    %eax,(%esp)
0868d275 +0x089:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868d27a +0x08e:  movl   $0x9,0x4(%esp)
0868d282 +0x096:  lea    -0x1c(%ebp),%eax
0868d285 +0x099:  mov    %eax,(%esp)
0868d288 +0x09c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868d28d +0x0a1:  mov    0x8(%ebp),%eax
0868d290 +0x0a4:  mov    %eax,(%esp)
0868d293 +0x0a7:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0868d298 +0x0ac:  movzwl %ax,%eax
0868d29b +0x0af:  mov    %eax,0x4(%esp)
0868d29f +0x0b3:  lea    -0x1c(%ebp),%eax
0868d2a2 +0x0b6:  mov    %eax,(%esp)
0868d2a5 +0x0b9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868d2aa +0x0be:  mov    0xc(%ebp),%eax
0868d2ad +0x0c1:  mov    %eax,0x4(%esp)
0868d2b1 +0x0c5:  lea    -0x1c(%ebp),%eax
0868d2b4 +0x0c8:  mov    %eax,(%esp)
0868d2b7 +0x0cb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868d2bc +0x0d0:  mov    0x10(%ebp),%eax
0868d2bf +0x0d3:  mov    %eax,0x4(%esp)
0868d2c3 +0x0d7:  lea    -0x1c(%ebp),%eax
0868d2c6 +0x0da:  mov    %eax,(%esp)
0868d2c9 +0x0dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868d2ce +0x0e2:  movl   $0x1,0x4(%esp)
0868d2d6 +0x0ea:  lea    -0x1c(%ebp),%eax
0868d2d9 +0x0ed:  mov    %eax,(%esp)
0868d2dc +0x0f0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868d2e1 +0x0f5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868d2e6 +0x0fa:  lea    -0x1c(%ebp),%edx
0868d2e9 +0x0fd:  mov    %edx,0x4(%esp)
0868d2ed +0x101:  mov    %eax,(%esp)
0868d2f0 +0x104:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0868d2f5 +0x109:  jmp    0868d312 <+0x126>
0868d2f7 +0x10b:  mov    %edx,%ebx
0868d2f9 +0x10d:  mov    %eax,%esi
0868d2fb +0x10f:  lea    -0x1c(%ebp),%eax
0868d2fe +0x112:  mov    %eax,(%esp)
0868d301 +0x115:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868d306 +0x11a:  mov    %esi,%eax
0868d308 +0x11c:  mov    %ebx,%edx
0868d30a +0x11e:  mov    %eax,(%esp)
0868d30d +0x121:  call   08ae3750 <_Unwind_Resume>
0868d312 +0x126:  lea    -0x1c(%ebp),%eax
0868d315 +0x129:  mov    %eax,(%esp)
0868d318 +0x12c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868d31d +0x131:  jmp    0868d323 <+0x137>
0868d31f +0x133:  nop
0868d320 +0x134:  jmp    0868d323 <+0x137>
0868d322 +0x136:  nop
0868d323 +0x137:  add    $0x30,%esp
0868d326 +0x13a:  pop    %ebx
0868d327 +0x13b:  pop    %esi
0868d328 +0x13c:  pop    %ebp
0868d329 +0x13d:  ret
```

## 反编译 C

```c
// CUser::send_broadcast_lottery_gold_message @ 0x868d1ec

/* CUser::send_broadcast_lottery_gold_message(unsigned long, int) */

void __thiscall CUser::send_broadcast_lottery_gold_message(CUser *this,ulong param_1,int param_2)

{
  char cVar1;
  CDataManager *this_00;
  uint uVar2;
  GameWorld *this_01;
  PacketGuard local_20 [12];
  CItem *local_14;
  CItem *local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,param_1);
  if ((((local_14 != (CItem *)0x0) && (cVar1 = CItem::is_stackable(local_14), cVar1 == '\x01')) &&
      (local_10 = local_14, 0 < *(int *)(local_14 + 0x340))) &&
     (*(int *)(local_14 + 0x340) <= param_2)) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0868d275 to 0868d2f4 has its CatchHandler @ 0868d2f7 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x56);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,9);
    uVar2 = get_unique_id(this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar2 & 0xffff);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    this_01 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_01,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}
```
