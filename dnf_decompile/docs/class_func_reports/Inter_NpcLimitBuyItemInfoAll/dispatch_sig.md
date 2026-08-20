# dispatch_sig

`_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci`

`Inter_NpcLimitBuyItemInfoAll::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfoAll` | `0x084e6258` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6258  _ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci
#           Inter_NpcLimitBuyItemInfoAll::dispatch_sig(CUser*, char*, int)
# range [0x084e6258, 0x084e6447]
084e6258 +0x000:  push   %ebp
084e6259 +0x001:  mov    %esp,%ebp
084e625b +0x003:  push   %esi
084e625c +0x004:  push   %ebx
084e625d +0x005:  sub    $0x30,%esp
084e6260 +0x008:  cmpl   $0x0,0xc(%ebp)
084e6264 +0x00c:  jne    084e6270 <+0x18>
084e6266 +0x00e:  mov    $0x0,%ebx
084e626b +0x013:  jmp    084e643f <+0x1e7>
084e6270 +0x018:  mov    0xc(%ebp),%eax
084e6273 +0x01b:  mov    %eax,(%esp)
084e6276 +0x01e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e627b +0x023:  test   %eax,%eax
084e627d +0x025:  sete   %al
084e6280 +0x028:  test   %al,%al
084e6282 +0x02a:  je     084e628e <+0x36>
084e6284 +0x02c:  mov    $0x0,%ebx
084e6289 +0x031:  jmp    084e643f <+0x1e7>
084e628e +0x036:  mov    0x10(%ebp),%eax
084e6291 +0x039:  mov    %eax,-0x10(%ebp)
084e6294 +0x03c:  lea    -0x1c(%ebp),%eax
084e6297 +0x03f:  mov    %eax,(%esp)
084e629a +0x042:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e629f +0x047:  movl   $0x193,0x8(%esp)
084e62a7 +0x04f:  movl   $0x0,0x4(%esp)
084e62af +0x057:  lea    -0x1c(%ebp),%eax
084e62b2 +0x05a:  mov    %eax,(%esp)
084e62b5 +0x05d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e62ba +0x062:  mov    -0x10(%ebp),%eax
084e62bd +0x065:  mov    0x16(%eax),%eax
084e62c0 +0x068:  mov    %eax,0x4(%esp)
084e62c4 +0x06c:  lea    -0x1c(%ebp),%eax
084e62c7 +0x06f:  mov    %eax,(%esp)
084e62ca +0x072:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e62cf +0x077:  movl   $0x0,-0xc(%ebp)
084e62d6 +0x07e:  jmp    084e63c8 <+0x170>
084e62db +0x083:  mov    -0xc(%ebp),%edx
084e62de +0x086:  mov    -0x10(%ebp),%ecx
084e62e1 +0x089:  mov    %edx,%eax
084e62e3 +0x08b:  add    %eax,%eax
084e62e5 +0x08d:  add    %edx,%eax
084e62e7 +0x08f:  shl    $0x2,%eax
084e62ea +0x092:  lea    (%ecx,%eax,1),%eax
084e62ed +0x095:  add    $0x10,%eax
084e62f0 +0x098:  mov    0xa(%eax),%eax
084e62f3 +0x09b:  mov    %eax,0x4(%esp)
084e62f7 +0x09f:  lea    -0x1c(%ebp),%eax
084e62fa +0x0a2:  mov    %eax,(%esp)
084e62fd +0x0a5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6302 +0x0aa:  mov    -0xc(%ebp),%edx
084e6305 +0x0ad:  mov    -0x10(%ebp),%ecx
084e6308 +0x0b0:  mov    %edx,%eax
084e630a +0x0b2:  add    %eax,%eax
084e630c +0x0b4:  add    %edx,%eax
084e630e +0x0b6:  shl    $0x2,%eax
084e6311 +0x0b9:  lea    (%ecx,%eax,1),%eax
084e6314 +0x0bc:  add    $0x10,%eax
084e6317 +0x0bf:  mov    0xe(%eax),%eax
084e631a +0x0c2:  test   %eax,%eax
084e631c +0x0c4:  jne    084e6336 <+0xde>
084e631e +0x0c6:  movl   $0x0,0x4(%esp)
084e6326 +0x0ce:  lea    -0x1c(%ebp),%eax
084e6329 +0x0d1:  mov    %eax,(%esp)
084e632c +0x0d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6331 +0x0d9:  jmp    084e63c4 <+0x16c>
084e6336 +0x0de:  mov    -0xc(%ebp),%edx
084e6339 +0x0e1:  mov    -0x10(%ebp),%ecx
084e633c +0x0e4:  mov    %edx,%eax
084e633e +0x0e6:  add    %eax,%eax
084e6340 +0x0e8:  add    %edx,%eax
084e6342 +0x0ea:  shl    $0x2,%eax
084e6345 +0x0ed:  lea    (%ecx,%eax,1),%eax
084e6348 +0x0f0:  add    $0x10,%eax
084e634b +0x0f3:  mov    0x12(%eax),%ecx
084e634e +0x0f6:  mov    -0xc(%ebp),%edx
084e6351 +0x0f9:  mov    -0x10(%ebp),%ebx
084e6354 +0x0fc:  mov    %edx,%eax
084e6356 +0x0fe:  add    %eax,%eax
084e6358 +0x100:  add    %edx,%eax
084e635a +0x102:  shl    $0x2,%eax
084e635d +0x105:  lea    (%ebx,%eax,1),%eax
084e6360 +0x108:  add    $0x10,%eax
084e6363 +0x10b:  mov    0xe(%eax),%eax
084e6366 +0x10e:  cmp    %eax,%ecx
084e6368 +0x110:  jb     084e637f <+0x127>
084e636a +0x112:  movl   $0x0,0x4(%esp)
084e6372 +0x11a:  lea    -0x1c(%ebp),%eax
084e6375 +0x11d:  mov    %eax,(%esp)
084e6378 +0x120:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e637d +0x125:  jmp    084e63c4 <+0x16c>
084e637f +0x127:  mov    -0xc(%ebp),%edx
084e6382 +0x12a:  mov    -0x10(%ebp),%ecx
084e6385 +0x12d:  mov    %edx,%eax
084e6387 +0x12f:  add    %eax,%eax
084e6389 +0x131:  add    %edx,%eax
084e638b +0x133:  shl    $0x2,%eax
084e638e +0x136:  lea    (%ecx,%eax,1),%eax
084e6391 +0x139:  add    $0x10,%eax
084e6394 +0x13c:  mov    0xe(%eax),%ecx
084e6397 +0x13f:  mov    -0xc(%ebp),%edx
084e639a +0x142:  mov    -0x10(%ebp),%ebx
084e639d +0x145:  mov    %edx,%eax
084e639f +0x147:  add    %eax,%eax
084e63a1 +0x149:  add    %edx,%eax
084e63a3 +0x14b:  shl    $0x2,%eax
084e63a6 +0x14e:  lea    (%ebx,%eax,1),%eax
084e63a9 +0x151:  add    $0x10,%eax
084e63ac +0x154:  mov    0x12(%eax),%eax
084e63af +0x157:  mov    %ecx,%edx
084e63b1 +0x159:  sub    %eax,%edx
084e63b3 +0x15b:  mov    %edx,%eax
084e63b5 +0x15d:  mov    %eax,0x4(%esp)
084e63b9 +0x161:  lea    -0x1c(%ebp),%eax
084e63bc +0x164:  mov    %eax,(%esp)
084e63bf +0x167:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e63c4 +0x16c:  addl   $0x1,-0xc(%ebp)
084e63c8 +0x170:  mov    -0x10(%ebp),%eax
084e63cb +0x173:  mov    0x16(%eax),%eax
084e63ce +0x176:  cmp    -0xc(%ebp),%eax
084e63d1 +0x179:  jle    084e63e0 <+0x188>
084e63d3 +0x17b:  cmpl   $0x1d,-0xc(%ebp)
084e63d7 +0x17f:  jg     084e63e0 <+0x188>
084e63d9 +0x181:  mov    $0x1,%eax
084e63de +0x186:  jmp    084e63e5 <+0x18d>
084e63e0 +0x188:  mov    $0x0,%eax
084e63e5 +0x18d:  test   %al,%al
084e63e7 +0x18f:  jne    084e62db <+0x83>
084e63ed +0x195:  movl   $0x1,0x4(%esp)
084e63f5 +0x19d:  lea    -0x1c(%ebp),%eax
084e63f8 +0x1a0:  mov    %eax,(%esp)
084e63fb +0x1a3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e6400 +0x1a8:  lea    -0x1c(%ebp),%eax
084e6403 +0x1ab:  mov    %eax,0x4(%esp)
084e6407 +0x1af:  mov    0xc(%ebp),%eax
084e640a +0x1b2:  mov    %eax,(%esp)
084e640d +0x1b5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e6412 +0x1ba:  mov    $0x0,%ebx
084e6417 +0x1bf:  lea    -0x1c(%ebp),%eax
084e641a +0x1c2:  mov    %eax,(%esp)
084e641d +0x1c5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e6422 +0x1ca:  jmp    084e643f <+0x1e7>
084e6424 +0x1cc:  mov    %edx,%ebx
084e6426 +0x1ce:  mov    %eax,%esi
084e6428 +0x1d0:  lea    -0x1c(%ebp),%eax
084e642b +0x1d3:  mov    %eax,(%esp)
084e642e +0x1d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e6433 +0x1db:  mov    %esi,%eax
084e6435 +0x1dd:  mov    %ebx,%edx
084e6437 +0x1df:  mov    %eax,(%esp)
084e643a +0x1e2:  call   08ae3750 <_Unwind_Resume>
084e643f +0x1e7:  mov    %ebx,%eax
084e6441 +0x1e9:  add    $0x30,%esp
084e6444 +0x1ec:  pop    %ebx
084e6445 +0x1ed:  pop    %esi
084e6446 +0x1ee:  pop    %ebp
084e6447 +0x1ef:  ret
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfoAll::dispatch_sig @ 0x84e6258

/* Inter_NpcLimitBuyItemInfoAll::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemInfoAll::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if ((param_2 != (char *)0x0) && (iVar2 = CUser::get_state((CUser *)param_2), iVar2 != 0)) {
    local_14 = param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e62b5 to 084e6411 has its CatchHandler @ 084e6424 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x193);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x16));
    local_10 = 0;
    while( true ) {
      if ((local_10 < *(int *)(local_14 + 0x16)) && (local_10 < 0x1e)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_20,*(int *)(local_14 + local_10 * 0xc + 0x1a));
      if (*(int *)(local_14 + local_10 * 0xc + 0x1e) == 0) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
      }
      else if (*(uint *)(local_14 + local_10 * 0xc + 0x22) <
               *(uint *)(local_14 + local_10 * 0xc + 0x1e)) {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,
                   *(int *)(local_14 + local_10 * 0xc + 0x1e) -
                   *(int *)(local_14 + local_10 * 0xc + 0x22));
      }
      else {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
      }
      local_10 = local_10 + 1;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
