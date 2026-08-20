# arad_secret_shop_event_buff

`_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_buffEP5CUserm`

`ARAD::ARAD_ITEM::arad_secret_shop_event_buff(CUser*, unsigned long)`

| 类 | 地址 |
|---|---|
| `ARAD::ARAD_ITEM` | `0x08196dd3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196dd3  _ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_buffEP5CUserm
#           ARAD::ARAD_ITEM::arad_secret_shop_event_buff(CUser*, unsigned long)
# range [0x08196dd3, 0x08196ed6]
08196dd3 +0x000:  push   %ebp
08196dd4 +0x001:  mov    %esp,%ebp
08196dd6 +0x003:  push   %esi
08196dd7 +0x004:  push   %ebx
08196dd8 +0x005:  sub    $0x20,%esp
08196ddb +0x008:  lea    -0x14(%ebp),%eax
08196dde +0x00b:  mov    %eax,(%esp)
08196de1 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08196de6 +0x013:  lea    -0x14(%ebp),%eax
08196de9 +0x016:  mov    %eax,(%esp)
08196dec +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08196df1 +0x01e:  movl   $0x100,0x8(%esp)
08196df9 +0x026:  movl   $0x0,0x4(%esp)
08196e01 +0x02e:  lea    -0x14(%ebp),%eax
08196e04 +0x031:  mov    %eax,(%esp)
08196e07 +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08196e0c +0x039:  movl   $0x1,0x4(%esp)
08196e14 +0x041:  lea    -0x14(%ebp),%eax
08196e17 +0x044:  mov    %eax,(%esp)
08196e1a +0x047:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08196e1f +0x04c:  mov    0xc(%ebp),%eax
08196e22 +0x04f:  mov    %eax,0x4(%esp)
08196e26 +0x053:  lea    -0x14(%ebp),%eax
08196e29 +0x056:  mov    %eax,(%esp)
08196e2c +0x059:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08196e31 +0x05e:  movl   $0x708,0x4(%esp)
08196e39 +0x066:  lea    -0x14(%ebp),%eax
08196e3c +0x069:  mov    %eax,(%esp)
08196e3f +0x06c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08196e44 +0x071:  movl   $0x1,0x4(%esp)
08196e4c +0x079:  lea    -0x14(%ebp),%eax
08196e4f +0x07c:  mov    %eax,(%esp)
08196e52 +0x07f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08196e57 +0x084:  lea    -0x14(%ebp),%eax
08196e5a +0x087:  mov    %eax,0x4(%esp)
08196e5e +0x08b:  mov    0x8(%ebp),%eax
08196e61 +0x08e:  mov    %eax,(%esp)
08196e64 +0x091:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08196e69 +0x096:  movl   $0x0,0x4(%esp)
08196e71 +0x09e:  mov    0x8(%ebp),%eax
08196e74 +0x0a1:  mov    %eax,(%esp)
08196e77 +0x0a4:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08196e7c +0x0a9:  mov    %eax,%ebx
08196e7e +0x0ab:  mov    0x8(%ebp),%eax
08196e81 +0x0ae:  mov    %eax,(%esp)
08196e84 +0x0b1:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08196e89 +0x0b6:  movsbl %al,%esi
08196e8c +0x0b9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08196e91 +0x0be:  lea    -0x14(%ebp),%edx
08196e94 +0x0c1:  mov    %edx,0xc(%esp)
08196e98 +0x0c5:  mov    %ebx,0x8(%esp)
08196e9c +0x0c9:  mov    %esi,0x4(%esp)
08196ea0 +0x0cd:  mov    %eax,(%esp)
08196ea3 +0x0d0:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
08196ea8 +0x0d5:  jmp    08196ec5 <+0xf2>
08196eaa +0x0d7:  mov    %edx,%ebx
08196eac +0x0d9:  mov    %eax,%esi
08196eae +0x0db:  lea    -0x14(%ebp),%eax
08196eb1 +0x0de:  mov    %eax,(%esp)
08196eb4 +0x0e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08196eb9 +0x0e6:  mov    %esi,%eax
08196ebb +0x0e8:  mov    %ebx,%edx
08196ebd +0x0ea:  mov    %eax,(%esp)
08196ec0 +0x0ed:  call   08ae3750 <_Unwind_Resume>
08196ec5 +0x0f2:  lea    -0x14(%ebp),%eax
08196ec8 +0x0f5:  mov    %eax,(%esp)
08196ecb +0x0f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08196ed0 +0x0fd:  add    $0x20,%esp
08196ed3 +0x100:  pop    %ebx
08196ed4 +0x101:  pop    %esi
08196ed5 +0x102:  pop    %ebp
08196ed6 +0x103:  ret
```

## 反编译 C

```c
// ARAD::ARAD_ITEM::arad_secret_shop_event_buff @ 0x8196dd3

/* ARAD::ARAD_ITEM::arad_secret_shop_event_buff(CUser*, unsigned long) */

void ARAD::ARAD_ITEM::arad_secret_shop_event_buff(CUser *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08196dec to 08196ea7 has its CatchHandler @ 08196eaa */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x100);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0x708);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  iVar2 = CUser::get_area(param_1,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this,(int)cVar1,iVar2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
