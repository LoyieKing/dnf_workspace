# dispatch_sig

`_ZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPci`

`Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticePCRoomPlayerLoginOut` | `0x084da1fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084da1fa  _ZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPci
#           Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser*, char*, int)
# range [0x084da1fa, 0x084da393]
084da1fa +0x000:  push   %ebp
084da1fb +0x001:  mov    %esp,%ebp
084da1fd +0x003:  push   %esi
084da1fe +0x004:  push   %ebx
084da1ff +0x005:  sub    $0x40,%esp
084da202 +0x008:  mov    0xc(%ebp),%eax
084da205 +0x00b:  mov    %eax,(%esp)
084da208 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084da20d +0x013:  cmp    $0x2,%eax
084da210 +0x016:  setle  %al
084da213 +0x019:  test   %al,%al
084da215 +0x01b:  je     084da221 <+0x27>
084da217 +0x01d:  mov    $0x0,%ebx
084da21c +0x022:  jmp    084da38b <+0x191>
084da221 +0x027:  mov    0x10(%ebp),%eax
084da224 +0x02a:  mov    %eax,-0x10(%ebp)
084da227 +0x02d:  movl   $0xffffffff,0x4(%esp)
084da22f +0x035:  mov    0xc(%ebp),%eax
084da232 +0x038:  mov    %eax,(%esp)
084da235 +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084da23a +0x040:  mov    %eax,%edx
084da23c +0x042:  mov    -0x10(%ebp),%eax
084da23f +0x045:  mov    0xf(%eax),%eax
084da242 +0x048:  cmp    %eax,%edx
084da244 +0x04a:  setne  %al
084da247 +0x04d:  test   %al,%al
084da249 +0x04f:  je     084da2a2 <+0xa8>
084da24b +0x051:  mov    -0x10(%ebp),%eax
084da24e +0x054:  mov    0xf(%eax),%ebx
084da251 +0x057:  movl   $0xffffffff,0x4(%esp)
084da259 +0x05f:  mov    0xc(%ebp),%eax
084da25c +0x062:  mov    %eax,(%esp)
084da25f +0x065:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084da264 +0x06a:  mov    %ebx,0x18(%esp)
084da268 +0x06e:  mov    %eax,0x14(%esp)
084da26c +0x072:  movl   $"PCRoom : Inter_NoticePCRoomPlayerLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084da274 +0x07a:  movl   $0x41eb,0xc(%esp)
084da27c +0x082:  movl   $&_ZZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084da284 +0x08a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084da28c +0x092:  movl   $0x1,(%esp)
084da293 +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084da298 +0x09e:  mov    $0x0,%ebx
084da29d +0x0a3:  jmp    084da38b <+0x191>
084da2a2 +0x0a8:  lea    -0x1c(%ebp),%eax
084da2a5 +0x0ab:  mov    %eax,(%esp)
084da2a8 +0x0ae:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084da2ad +0x0b3:  movl   $0xba,0x8(%esp)
084da2b5 +0x0bb:  movl   $0x0,0x4(%esp)
084da2bd +0x0c3:  lea    -0x1c(%ebp),%eax
084da2c0 +0x0c6:  mov    %eax,(%esp)
084da2c3 +0x0c9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084da2c8 +0x0ce:  mov    -0x10(%ebp),%eax
084da2cb +0x0d1:  movzbl 0xa(%eax),%eax
084da2cf +0x0d5:  movsbl %al,%eax
084da2d2 +0x0d8:  mov    %eax,0x4(%esp)
084da2d6 +0x0dc:  lea    -0x1c(%ebp),%eax
084da2d9 +0x0df:  mov    %eax,(%esp)
084da2dc +0x0e2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da2e1 +0x0e7:  mov    -0x10(%ebp),%eax
084da2e4 +0x0ea:  movzbl 0x13(%eax),%eax
084da2e8 +0x0ee:  movzbl %al,%eax
084da2eb +0x0f1:  mov    %eax,0x4(%esp)
084da2ef +0x0f5:  lea    -0x1c(%ebp),%eax
084da2f2 +0x0f8:  mov    %eax,(%esp)
084da2f5 +0x0fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da2fa +0x100:  mov    -0x10(%ebp),%eax
084da2fd +0x103:  add    $0x14,%eax
084da300 +0x106:  mov    %eax,(%esp)
084da303 +0x109:  call   0807e3b0 <_init+0xca8>
084da308 +0x10e:  mov    %eax,-0xc(%ebp)
084da30b +0x111:  mov    -0xc(%ebp),%eax
084da30e +0x114:  mov    %eax,0x4(%esp)
084da312 +0x118:  lea    -0x1c(%ebp),%eax
084da315 +0x11b:  mov    %eax,(%esp)
084da318 +0x11e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084da31d +0x123:  mov    -0x10(%ebp),%eax
084da320 +0x126:  lea    0x14(%eax),%edx
084da323 +0x129:  mov    -0xc(%ebp),%eax
084da326 +0x12c:  mov    %eax,0x8(%esp)
084da32a +0x130:  mov    %edx,0x4(%esp)
084da32e +0x134:  lea    -0x1c(%ebp),%eax
084da331 +0x137:  mov    %eax,(%esp)
084da334 +0x13a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084da339 +0x13f:  movl   $0x1,0x4(%esp)
084da341 +0x147:  lea    -0x1c(%ebp),%eax
084da344 +0x14a:  mov    %eax,(%esp)
084da347 +0x14d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084da34c +0x152:  lea    -0x1c(%ebp),%eax
084da34f +0x155:  mov    %eax,0x4(%esp)
084da353 +0x159:  mov    0xc(%ebp),%eax
084da356 +0x15c:  mov    %eax,(%esp)
084da359 +0x15f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084da35e +0x164:  mov    $0x0,%ebx
084da363 +0x169:  lea    -0x1c(%ebp),%eax
084da366 +0x16c:  mov    %eax,(%esp)
084da369 +0x16f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da36e +0x174:  jmp    084da38b <+0x191>
084da370 +0x176:  mov    %edx,%ebx
084da372 +0x178:  mov    %eax,%esi
084da374 +0x17a:  lea    -0x1c(%ebp),%eax
084da377 +0x17d:  mov    %eax,(%esp)
084da37a +0x180:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da37f +0x185:  mov    %esi,%eax
084da381 +0x187:  mov    %ebx,%edx
084da383 +0x189:  mov    %eax,(%esp)
084da386 +0x18c:  call   08ae3750 <_Unwind_Resume>
084da38b +0x191:  mov    %ebx,%eax
084da38d +0x193:  add    $0x40,%esp
084da390 +0x196:  pop    %ebx
084da391 +0x197:  pop    %esi
084da392 +0x198:  pop    %ebp
084da393 +0x199:  ret
```

## 反编译 C

```c
// Inter_NoticePCRoomPlayerLoginOut::dispatch_sig @ 0x84da1fa

/* Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xf)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084da2c3 to 084da35d has its CatchHandler @ 084da370 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xba);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
      local_10 = strlen((char *)(local_14 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x14),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xf);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser*, char*, int)",
                 0x41eb,
                 "PCRoom : Inter_NoticePCRoomPlayerLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```
