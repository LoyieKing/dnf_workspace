# SendRewardPacket

`_ZN8WongWork10CBossTower16SendRewardPacketEv`

`WongWork::CBossTower::SendRewardPacket()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x0814432a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814432a  _ZN8WongWork10CBossTower16SendRewardPacketEv
#           WongWork::CBossTower::SendRewardPacket()
# range [0x0814432a, 0x08144507]
0814432a +0x000:  push   %ebp
0814432b +0x001:  mov    %esp,%ebp
0814432d +0x003:  push   %esi
0814432e +0x004:  push   %ebx
0814432f +0x005:  sub    $0x30,%esp
08144332 +0x008:  movl   $0x0,-0x18(%ebp)
08144339 +0x00f:  jmp    081444ed <+0x1c3>
0814433e +0x014:  mov    0x8(%ebp),%eax
08144341 +0x017:  mov    0x4(%eax),%eax
08144344 +0x01a:  mov    -0x18(%ebp),%edx
08144347 +0x01d:  mov    %edx,0x4(%esp)
0814434b +0x021:  mov    %eax,(%esp)
0814434e +0x024:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08144353 +0x029:  mov    %eax,-0x14(%ebp)
08144356 +0x02c:  cmpl   $0x0,-0x14(%ebp)
0814435a +0x030:  je     08144378 <+0x4e>
0814435c +0x032:  mov    0x8(%ebp),%eax
0814435f +0x035:  mov    0x4(%eax),%eax
08144362 +0x038:  mov    -0x18(%ebp),%edx
08144365 +0x03b:  mov    %edx,0x4(%esp)
08144369 +0x03f:  mov    %eax,(%esp)
0814436c +0x042:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08144371 +0x047:  xor    $0x1,%eax
08144374 +0x04a:  test   %al,%al
08144376 +0x04c:  je     0814437f <+0x55>
08144378 +0x04e:  mov    $0x1,%eax
0814437d +0x053:  jmp    08144384 <+0x5a>
0814437f +0x055:  mov    $0x0,%eax
08144384 +0x05a:  test   %al,%al
08144386 +0x05c:  jne    081444e8 <+0x1be>
0814438c +0x062:  lea    -0x24(%ebp),%eax
0814438f +0x065:  mov    %eax,(%esp)
08144392 +0x068:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08144397 +0x06d:  movl   $0x1e3,0x8(%esp)
0814439f +0x075:  movl   $0x0,0x4(%esp)
081443a7 +0x07d:  lea    -0x24(%ebp),%eax
081443aa +0x080:  mov    %eax,(%esp)
081443ad +0x083:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081443b2 +0x088:  mov    -0x18(%ebp),%edx
081443b5 +0x08b:  mov    0x8(%ebp),%eax
081443b8 +0x08e:  add    $0x4,%edx
081443bb +0x091:  mov    0x8(%eax,%edx,4),%eax
081443bf +0x095:  mov    %eax,0x4(%esp)
081443c3 +0x099:  lea    -0x24(%ebp),%eax
081443c6 +0x09c:  mov    %eax,(%esp)
081443c9 +0x09f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081443ce +0x0a4:  movl   $0x0,-0x10(%ebp)
081443d5 +0x0ab:  jmp    0814448a <+0x160>
081443da +0x0b0:  mov    -0x10(%ebp),%eax
081443dd +0x0b3:  mov    0x8(%ebp),%edx
081443e0 +0x0b6:  imul   $0x268,%eax,%eax
081443e6 +0x0bc:  lea    (%edx,%eax,1),%eax
081443e9 +0x0bf:  add    $0x28,%eax
081443ec +0x0c2:  mov    (%eax),%eax
081443ee +0x0c4:  mov    %eax,0x4(%esp)
081443f2 +0x0c8:  lea    -0x24(%ebp),%eax
081443f5 +0x0cb:  mov    %eax,(%esp)
081443f8 +0x0ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081443fd +0x0d3:  movl   $0x0,-0xc(%ebp)
08144404 +0x0da:  jmp    08144468 <+0x13e>
08144406 +0x0dc:  mov    -0x10(%ebp),%edx
08144409 +0x0df:  mov    -0xc(%ebp),%ecx
0814440c +0x0e2:  mov    0x8(%ebp),%eax
0814440f +0x0e5:  imul   $0x3d,%ecx,%ecx
08144412 +0x0e8:  imul   $0x268,%edx,%edx
08144418 +0x0ee:  lea    (%ecx,%edx,1),%edx
0814441b +0x0f1:  add    %edx,%eax
0814441d +0x0f3:  add    $0x20,%eax
08144420 +0x0f6:  mov    0xe(%eax),%eax
08144423 +0x0f9:  mov    %eax,0x4(%esp)
08144427 +0x0fd:  lea    -0x24(%ebp),%eax
0814442a +0x100:  mov    %eax,(%esp)
0814442d +0x103:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08144432 +0x108:  mov    -0x10(%ebp),%eax
08144435 +0x10b:  mov    -0xc(%ebp),%edx
08144438 +0x10e:  imul   $0x3d,%edx,%edx
0814443b +0x111:  imul   $0x268,%eax,%eax
08144441 +0x117:  lea    (%edx,%eax,1),%eax
08144444 +0x11a:  add    $0x20,%eax
08144447 +0x11d:  add    0x8(%ebp),%eax
0814444a +0x120:  add    $0xc,%eax
0814444d +0x123:  mov    %eax,(%esp)
08144450 +0x126:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08144455 +0x12b:  mov    %eax,0x4(%esp)
08144459 +0x12f:  lea    -0x24(%ebp),%eax
0814445c +0x132:  mov    %eax,(%esp)
0814445f +0x135:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08144464 +0x13a:  addl   $0x1,-0xc(%ebp)
08144468 +0x13e:  mov    -0x10(%ebp),%eax
0814446b +0x141:  mov    0x8(%ebp),%edx
0814446e +0x144:  imul   $0x268,%eax,%eax
08144474 +0x14a:  lea    (%edx,%eax,1),%eax
08144477 +0x14d:  add    $0x28,%eax
0814447a +0x150:  mov    (%eax),%eax
0814447c +0x152:  cmp    -0xc(%ebp),%eax
0814447f +0x155:  setg   %al
08144482 +0x158:  test   %al,%al
08144484 +0x15a:  jne    08144406 <+0xdc>
08144486 +0x15c:  addl   $0x1,-0x10(%ebp)
0814448a +0x160:  cmpl   $0x3,-0x10(%ebp)
0814448e +0x164:  setle  %al
08144491 +0x167:  test   %al,%al
08144493 +0x169:  jne    081443da <+0xb0>
08144499 +0x16f:  movl   $0x1,0x4(%esp)
081444a1 +0x177:  lea    -0x24(%ebp),%eax
081444a4 +0x17a:  mov    %eax,(%esp)
081444a7 +0x17d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081444ac +0x182:  lea    -0x24(%ebp),%eax
081444af +0x185:  mov    %eax,0x4(%esp)
081444b3 +0x189:  mov    -0x14(%ebp),%eax
081444b6 +0x18c:  mov    %eax,(%esp)
081444b9 +0x18f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081444be +0x194:  jmp    081444db <+0x1b1>
081444c0 +0x196:  mov    %edx,%ebx
081444c2 +0x198:  mov    %eax,%esi
081444c4 +0x19a:  lea    -0x24(%ebp),%eax
081444c7 +0x19d:  mov    %eax,(%esp)
081444ca +0x1a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081444cf +0x1a5:  mov    %esi,%eax
081444d1 +0x1a7:  mov    %ebx,%edx
081444d3 +0x1a9:  mov    %eax,(%esp)
081444d6 +0x1ac:  call   08ae3750 <_Unwind_Resume>
081444db +0x1b1:  lea    -0x24(%ebp),%eax
081444de +0x1b4:  mov    %eax,(%esp)
081444e1 +0x1b7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081444e6 +0x1bc:  jmp    081444e9 <+0x1bf>
081444e8 +0x1be:  nop
081444e9 +0x1bf:  addl   $0x1,-0x18(%ebp)
081444ed +0x1c3:  cmpl   $0x3,-0x18(%ebp)
081444f1 +0x1c7:  setle  %al
081444f4 +0x1ca:  test   %al,%al
081444f6 +0x1cc:  jne    0814433e <+0x14>
081444fc +0x1d2:  mov    $0x1,%eax
08144501 +0x1d7:  add    $0x30,%esp
08144504 +0x1da:  pop    %ebx
08144505 +0x1db:  pop    %esi
08144506 +0x1dc:  pop    %ebp
08144507 +0x1dd:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::SendRewardPacket @ 0x814432a

/* WongWork::CBossTower::SendRewardPacket() */

undefined4 __thiscall WongWork::CBossTower::SendRewardPacket(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_28 [12];
  int local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  do {
    if (3 < local_1c) {
      return 1;
    }
    local_18 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_1c);
    if (local_18 == (CUser *)0x0) {
LAB_08144378:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_1c);
      if (cVar2 != '\x01') goto LAB_08144378;
      bVar1 = false;
    }
    if (!bVar1) {
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081443ad to 081444bd has its CatchHandler @ 081444c0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x1e3);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_28,*(int *)(this + (local_1c + 4) * 4 + 8));
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_28,*(int *)(this + local_14 * 0x268 + 0x28));
        for (local_10 = 0; local_10 < *(int *)(this + local_14 * 0x268 + 0x28);
            local_10 = local_10 + 1) {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_28,
                     *(int *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2e));
          iVar3 = Inven_Item::get_add_info
                            ((Inven_Item *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2c));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar3);
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(local_18,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    local_1c = local_1c + 1;
  } while( true );
}
```
