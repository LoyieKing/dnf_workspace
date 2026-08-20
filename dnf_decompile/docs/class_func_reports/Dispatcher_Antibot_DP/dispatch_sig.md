# dispatch_sig

`_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Antibot_DP` | `0x0820b322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820b322  _ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820b322, 0x0820b50b]
0820b322 +0x000:  push   %ebp
0820b323 +0x001:  mov    %esp,%ebp
0820b325 +0x003:  push   %edi
0820b326 +0x004:  push   %esi
0820b327 +0x005:  push   %ebx
0820b328 +0x006:  sub    $0xb5c,%esp
0820b32e +0x00c:  lea    -0x3c(%ebp),%eax
0820b331 +0x00f:  mov    %eax,0x4(%esp)
0820b335 +0x013:  mov    0x10(%ebp),%eax
0820b338 +0x016:  mov    %eax,(%esp)
0820b33b +0x019:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0820b340 +0x01e:  xor    $0x1,%eax
0820b343 +0x021:  test   %al,%al
0820b345 +0x023:  je     0820b370 <+0x4e>
0820b347 +0x025:  movl   $0x0,0xc(%esp)
0820b34f +0x02d:  movl   $0x0,0x8(%esp)
0820b357 +0x035:  movl   $&_ZZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b35f +0x03d:  movl   $0xa795,(%esp)
0820b366 +0x044:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b36b +0x049:  jmp    0820b500 <+0x1de>
0820b370 +0x04e:  mov    0x10(%ebp),%eax
0820b373 +0x051:  mov    %eax,(%esp)
0820b376 +0x054:  call   08110b1c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2e
0820b37b +0x059:  mov    %eax,0x4(%esp)
0820b37f +0x05d:  mov    0x10(%ebp),%eax
0820b382 +0x060:  mov    %eax,(%esp)
0820b385 +0x063:  call   0858da38 <_ZN9PacketBuf11get_buf_ptrEi>  ; PacketBuf::get_buf_ptr(int)
0820b38a +0x068:  mov    %eax,-0x28(%ebp)
0820b38d +0x06b:  movl   $0xd,-0x24(%ebp)
0820b394 +0x072:  mov    -0x3c(%ebp),%eax
0820b397 +0x075:  cmp    $0x567,%eax
0820b39c +0x07a:  jbe    0820b3c7 <+0xa5>
0820b39e +0x07c:  movl   $0x0,0xc(%esp)
0820b3a6 +0x084:  movl   $0x0,0x8(%esp)
0820b3ae +0x08c:  movl   $&_ZZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b3b6 +0x094:  movl   $0xa7a3,(%esp)
0820b3bd +0x09b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b3c2 +0x0a0:  jmp    0820b500 <+0x1de>
0820b3c7 +0x0a5:  movw   $0xaf0,-0x3e(%ebp)
0820b3cd +0x0ab:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0820b3d2 +0x0b0:  mov    (%eax),%eax
0820b3d4 +0x0b2:  add    $0x2c,%eax
0820b3d7 +0x0b5:  mov    (%eax),%esi
0820b3d9 +0x0b7:  mov    -0x3c(%ebp),%eax
0820b3dc +0x0ba:  movzwl %ax,%ebx
0820b3df +0x0bd:  mov    0xc(%ebp),%eax
0820b3e2 +0x0c0:  mov    %eax,(%esp)
0820b3e5 +0x0c3:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
0820b3ea +0x0c8:  mov    %eax,%edx
0820b3ec +0x0ca:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0820b3f1 +0x0cf:  lea    -0x3e(%ebp),%ecx
0820b3f4 +0x0d2:  mov    %ecx,0x14(%esp)
0820b3f8 +0x0d6:  lea    -0xb2e(%ebp),%ecx
0820b3fe +0x0dc:  mov    %ecx,0x10(%esp)
0820b402 +0x0e0:  mov    %ebx,0xc(%esp)
0820b406 +0x0e4:  mov    -0x28(%ebp),%ecx
0820b409 +0x0e7:  mov    %ecx,0x8(%esp)
0820b40d +0x0eb:  mov    %edx,0x4(%esp)
0820b411 +0x0ef:  mov    %eax,(%esp)
0820b414 +0x0f2:  call   *%esi
0820b416 +0x0f4:  mov    %eax,-0x20(%ebp)
0820b419 +0x0f7:  cmpl   $0x0,-0x20(%ebp)
0820b41d +0x0fb:  je     0820b482 <+0x160>
0820b41f +0x0fd:  mov    -0x3c(%ebp),%esi
0820b422 +0x100:  mov    0xc(%ebp),%eax
0820b425 +0x103:  mov    %eax,(%esp)
0820b428 +0x106:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
0820b42d +0x10b:  mov    %eax,%ebx
0820b42f +0x10d:  movl   $0x0,0xc(%esp)
0820b437 +0x115:  movl   $0xa7af,0x8(%esp)
0820b43f +0x11d:  movl   $&_ZZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b447 +0x125:  lea    -0x38(%ebp),%eax
0820b44a +0x128:  mov    %eax,(%esp)
0820b44d +0x12b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0820b452 +0x130:  mov    -0x20(%ebp),%eax
0820b455 +0x133:  mov    %eax,0x14(%esp)
0820b459 +0x137:  mov    %esi,0x10(%esp)
0820b45d +0x13b:  mov    -0x28(%ebp),%eax
0820b460 +0x13e:  mov    %eax,0xc(%esp)
0820b464 +0x142:  mov    %ebx,0x8(%esp)
0820b468 +0x146:  movl   $"[Dispatcher_Antibot_DP] Key : %d, nestedPacket : %x, binarySize : %d, return : %d",0x4(%esp)
0820b470 +0x14e:  lea    -0x38(%ebp),%eax
0820b473 +0x151:  mov    %eax,(%esp)
0820b476 +0x154:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0820b47b +0x159:  mov    $0x0,%eax
0820b480 +0x15e:  jmp    0820b500 <+0x1de>
0820b482 +0x160:  lea    -0xb2e(%ebp),%eax
0820b488 +0x166:  add    $0x1,%eax
0820b48b +0x169:  movzwl (%eax),%eax
0820b48e +0x16c:  mov    %ax,-0x1a(%ebp)
0820b492 +0x170:  movzwl -0x3e(%ebp),%eax
0820b496 +0x174:  movzwl %ax,%eax
0820b499 +0x177:  mov    %eax,-0xb3c(%ebp)
0820b49f +0x17d:  lea    -0xb2e(%ebp),%edi
0820b4a5 +0x183:  movzwl -0x1a(%ebp),%esi
0820b4a9 +0x187:  movzbl -0xb2e(%ebp),%eax
0820b4b0 +0x18e:  movzbl %al,%ebx
0820b4b3 +0x191:  call   0823453e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9be8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9be8
0820b4b8 +0x196:  movl   $0x25c,0x1c(%esp)
0820b4c0 +0x19e:  movl   $0x1,0x18(%esp)
0820b4c8 +0x1a6:  mov    -0xb3c(%ebp),%edx
0820b4ce +0x1ac:  mov    %edx,0x14(%esp)
0820b4d2 +0x1b0:  mov    %edi,0x10(%esp)
0820b4d6 +0x1b4:  mov    %esi,0xc(%esp)
0820b4da +0x1b8:  mov    %ebx,0x8(%esp)
0820b4de +0x1bc:  mov    0xc(%ebp),%edx
0820b4e1 +0x1bf:  mov    %edx,0x4(%esp)
0820b4e5 +0x1c3:  mov    %eax,(%esp)
0820b4e8 +0x1c6:  call   08594922 <_ZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_t>  ; PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int, ENUM_PACKETCLASS, unsigned short)
0820b4ed +0x1cb:  xor    $0x1,%eax
0820b4f0 +0x1ce:  test   %al,%al
0820b4f2 +0x1d0:  je     0820b4fb <+0x1d9>
0820b4f4 +0x1d2:  mov    $0x0,%eax
0820b4f9 +0x1d7:  jmp    0820b500 <+0x1de>
0820b4fb +0x1d9:  mov    $0x0,%eax
0820b500 +0x1de:  add    $0xb5c,%esp
0820b506 +0x1e4:  pop    %ebx
0820b507 +0x1e5:  pop    %esi
0820b508 +0x1e6:  pop    %edi
0820b509 +0x1e7:  pop    %ebp
0820b50a +0x1e8:  ret
0820b50b +0x1e9:  nop
```

## 反编译 C

```c
// Dispatcher_Antibot_DP::dispatch_sig @ 0x820b322

/* Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Antibot_DP::dispatch_sig(Dispatcher_Antibot_DP *this,CUser *param_1,PacketBuf *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  PacketDispatcher *pPVar6;
  uint uVar7;
  undefined1 local_b32;
  undefined2 local_b31;
  undefined2 local_42;
  uint local_40;
  cMyTrace local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined2 local_1e;
  
  cVar3 = PacketBuf::get_int(param_2,&local_40);
  if (cVar3 == '\x01') {
    iVar5 = PacketBuf::get_index(param_2);
    local_2c = PacketBuf::get_buf_ptr(param_2,iVar5);
    local_28 = 0xd;
    if (local_40 < 0x568) {
      local_42 = 0xaf0;
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x2c);
      uVar7 = local_40 & 0xffff;
      uVar4 = CUser::getAntibotKey(param_1);
      local_24 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar4,local_2c,uVar7,&local_b32,&local_42);
      uVar2 = local_42;
      if (local_24 == 0) {
        local_1e = local_b31;
        pPVar6 = (PacketDispatcher *)G_PacketDispatcher();
        cVar3 = PacketDispatcher::doDispatch
                          (pPVar6,param_1,local_b32,local_b31,&local_b32,uVar2,1,0x25c);
        if (cVar3 == '\x01') {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = CUser::getAntibotKey(param_1);
        cMyTrace::cMyTrace(local_3c,
                           "virtual int Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)",
                           0xa7af,0);
        cMyTrace::operator()
                  (local_3c,
                   "[Dispatcher_Antibot_DP] Key : %d, nestedPacket : %x, binarySize : %d, return : %d"
                   ,uVar4,local_2c,local_40,local_24);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = LineFunc(0xa7a3,"virtual int Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  else {
    uVar4 = LineFunc(0xa795,"virtual int Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar4;
}
```
