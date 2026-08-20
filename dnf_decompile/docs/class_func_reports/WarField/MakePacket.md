# MakePacket

`_ZN8WarField10MakePacketEiPv`

`WarField::MakePacket(int, void*)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086b92e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b92e2  _ZN8WarField10MakePacketEiPv
#           WarField::MakePacket(int, void*)
# range [0x086b92e2, 0x086b954b]
086b92e2 +0x000:  push   %ebp
086b92e3 +0x001:  mov    %esp,%ebp
086b92e5 +0x003:  push   %esi
086b92e6 +0x004:  push   %ebx
086b92e7 +0x005:  sub    $0x370,%esp
086b92ed +0x00b:  mov    0x10(%ebp),%eax
086b92f0 +0x00e:  mov    %eax,-0xc(%ebp)
086b92f3 +0x011:  mov    0xc(%ebp),%eax
086b92f6 +0x014:  cmp    $0x1d,%eax
086b92f9 +0x017:  jne    086b9542 <+0x260>
086b92ff +0x01d:  mov    -0xc(%ebp),%eax
086b9302 +0x020:  movl   $0x1d,0x8(%esp)
086b930a +0x028:  movl   $0x0,0x4(%esp)
086b9312 +0x030:  mov    %eax,(%esp)
086b9315 +0x033:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b931a +0x038:  call   0807dca0 <_init+0x598>
086b931f +0x03d:  mov    -0xc(%ebp),%edx
086b9322 +0x040:  mov    %eax,0x4(%esp)
086b9326 +0x044:  mov    %edx,(%esp)
086b9329 +0x047:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b932e +0x04c:  mov    -0xc(%ebp),%eax
086b9331 +0x04f:  movl   $0x0,0x4(%esp)
086b9339 +0x057:  mov    %eax,(%esp)
086b933c +0x05a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9341 +0x05f:  mov    -0xc(%ebp),%eax
086b9344 +0x062:  movl   $0x0,0x4(%esp)
086b934c +0x06a:  mov    %eax,(%esp)
086b934f +0x06d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9354 +0x072:  mov    -0xc(%ebp),%eax
086b9357 +0x075:  movl   $0x1,0x4(%esp)
086b935f +0x07d:  mov    %eax,(%esp)
086b9362 +0x080:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9367 +0x085:  mov    0x8(%ebp),%eax
086b936a +0x088:  mov    0xc(%eax),%edx
086b936d +0x08b:  mov    -0xc(%ebp),%eax
086b9370 +0x08e:  mov    %edx,0x4(%esp)
086b9374 +0x092:  mov    %eax,(%esp)
086b9377 +0x095:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b937c +0x09a:  mov    0x8(%ebp),%eax
086b937f +0x09d:  add    $0x14,%eax
086b9382 +0x0a0:  mov    %eax,(%esp)
086b9385 +0x0a3:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
086b938a +0x0a8:  mov    %eax,%edx
086b938c +0x0aa:  mov    -0xc(%ebp),%eax
086b938f +0x0ad:  mov    %edx,0x4(%esp)
086b9393 +0x0b1:  mov    %eax,(%esp)
086b9396 +0x0b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b939b +0x0b9:  lea    -0x364(%ebp),%eax
086b93a1 +0x0bf:  mov    %eax,(%esp)
086b93a4 +0x0c2:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
086b93a9 +0x0c7:  mov    0x8(%ebp),%eax
086b93ac +0x0ca:  lea    0x14(%eax),%edx
086b93af +0x0cd:  lea    -0x18(%ebp),%eax
086b93b2 +0x0d0:  mov    %edx,0x4(%esp)
086b93b6 +0x0d4:  mov    %eax,(%esp)
086b93b9 +0x0d7:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
086b93be +0x0dc:  sub    $0x4,%esp
086b93c1 +0x0df:  jmp    086b94bc <+0x1da>
086b93c6 +0x0e4:  lea    -0x18(%ebp),%eax
086b93c9 +0x0e7:  mov    %eax,(%esp)
086b93cc +0x0ea:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
086b93d1 +0x0ef:  add    $0x4,%eax
086b93d4 +0x0f2:  mov    %eax,0x4(%esp)
086b93d8 +0x0f6:  lea    -0x364(%ebp),%eax
086b93de +0x0fc:  mov    %eax,(%esp)
086b93e1 +0x0ff:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
086b93e6 +0x104:  mov    -0xc(%ebp),%eax
086b93e9 +0x107:  movl   $0x0,0x4(%esp)
086b93f1 +0x10f:  mov    %eax,(%esp)
086b93f4 +0x112:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b93f9 +0x117:  mov    -0x364(%ebp),%edx
086b93ff +0x11d:  mov    -0xc(%ebp),%eax
086b9402 +0x120:  mov    %edx,0x4(%esp)
086b9406 +0x124:  mov    %eax,(%esp)
086b9409 +0x127:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b940e +0x12c:  mov    -0x360(%ebp),%eax
086b9414 +0x132:  movswl %ax,%edx
086b9417 +0x135:  mov    -0xc(%ebp),%eax
086b941a +0x138:  mov    %edx,0x4(%esp)
086b941e +0x13c:  mov    %eax,(%esp)
086b9421 +0x13f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b9426 +0x144:  mov    -0x358(%ebp),%edx
086b942c +0x14a:  mov    -0xc(%ebp),%eax
086b942f +0x14d:  mov    %edx,0x4(%esp)
086b9433 +0x151:  mov    %eax,(%esp)
086b9436 +0x154:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b943b +0x159:  movzbl -0x354(%ebp),%eax
086b9442 +0x160:  movzbl %al,%edx
086b9445 +0x163:  mov    -0xc(%ebp),%eax
086b9448 +0x166:  mov    %edx,0x4(%esp)
086b944c +0x16a:  mov    %eax,(%esp)
086b944f +0x16d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9454 +0x172:  movzbl -0x35c(%ebp),%eax
086b945b +0x179:  movsbl %al,%edx
086b945e +0x17c:  mov    -0xc(%ebp),%eax
086b9461 +0x17f:  mov    %edx,0x4(%esp)
086b9465 +0x183:  mov    %eax,(%esp)
086b9468 +0x186:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b946d +0x18b:  movzbl -0x351(%ebp),%eax
086b9474 +0x192:  movzbl %al,%edx
086b9477 +0x195:  mov    -0xc(%ebp),%eax
086b947a +0x198:  mov    %edx,0x4(%esp)
086b947e +0x19c:  mov    %eax,(%esp)
086b9481 +0x19f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9486 +0x1a4:  movzbl -0x350(%ebp),%eax
086b948d +0x1ab:  movzbl %al,%edx
086b9490 +0x1ae:  mov    -0xc(%ebp),%eax
086b9493 +0x1b1:  mov    %edx,0x4(%esp)
086b9497 +0x1b5:  mov    %eax,(%esp)
086b949a +0x1b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b949f +0x1bd:  lea    -0x10(%ebp),%eax
086b94a2 +0x1c0:  movl   $0x0,0x8(%esp)
086b94aa +0x1c8:  lea    -0x18(%ebp),%edx
086b94ad +0x1cb:  mov    %edx,0x4(%esp)
086b94b1 +0x1cf:  mov    %eax,(%esp)
086b94b4 +0x1d2:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
086b94b9 +0x1d7:  sub    $0x4,%esp
086b94bc +0x1da:  mov    0x8(%ebp),%eax
086b94bf +0x1dd:  lea    0x14(%eax),%edx
086b94c2 +0x1e0:  lea    -0x14(%ebp),%eax
086b94c5 +0x1e3:  mov    %edx,0x4(%esp)
086b94c9 +0x1e7:  mov    %eax,(%esp)
086b94cc +0x1ea:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
086b94d1 +0x1ef:  sub    $0x4,%esp
086b94d4 +0x1f2:  lea    -0x14(%ebp),%eax
086b94d7 +0x1f5:  mov    %eax,0x4(%esp)
086b94db +0x1f9:  lea    -0x18(%ebp),%eax
086b94de +0x1fc:  mov    %eax,(%esp)
086b94e1 +0x1ff:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
086b94e6 +0x204:  test   %al,%al
086b94e8 +0x206:  jne    086b93c6 <+0xe4>
086b94ee +0x20c:  mov    -0xc(%ebp),%eax
086b94f1 +0x20f:  movl   $0x0,0x4(%esp)
086b94f9 +0x217:  mov    %eax,(%esp)
086b94fc +0x21a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9501 +0x21f:  mov    -0xc(%ebp),%eax
086b9504 +0x222:  movl   $0x1,0x4(%esp)
086b950c +0x22a:  mov    %eax,(%esp)
086b950f +0x22d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b9514 +0x232:  jmp    086b9534 <+0x252>
086b9516 +0x234:  mov    %edx,%ebx
086b9518 +0x236:  mov    %eax,%esi
086b951a +0x238:  lea    -0x364(%ebp),%eax
086b9520 +0x23e:  mov    %eax,(%esp)
086b9523 +0x241:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b9528 +0x246:  mov    %esi,%eax
086b952a +0x248:  mov    %ebx,%edx
086b952c +0x24a:  mov    %eax,(%esp)
086b952f +0x24d:  call   08ae3750 <_Unwind_Resume>
086b9534 +0x252:  lea    -0x364(%ebp),%eax
086b953a +0x258:  mov    %eax,(%esp)
086b953d +0x25b:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b9542 +0x260:  lea    -0x8(%ebp),%esp
086b9545 +0x263:  add    $0x0,%esp
086b9548 +0x266:  pop    %ebx
086b9549 +0x267:  pop    %esi
086b954a +0x268:  pop    %ebp
086b954b +0x269:  ret
```

## 反编译 C

```c
// WarField::MakePacket @ 0x86b92e2

/* WarField::MakePacket(int, void*) */

void __thiscall WarField::MakePacket(WarField *this,int param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int local_368 [2];
  char local_360;
  int local_35c;
  byte local_358;
  byte local_355;
  byte local_354;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_1c [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_14 [4];
  InterfacePacketBuf *local_10;
  
  local_10 = param_2;
  if (param_1 == 0x1d) {
    InterfacePacketBuf::put_header(param_2,0,0x1d);
    iVar2 = rand();
    InterfacePacketBuf::put_int(local_10,iVar2);
    InterfacePacketBuf::put_byte(local_10,0);
    InterfacePacketBuf::put_byte(local_10,0);
    InterfacePacketBuf::put_byte(local_10,1);
    InterfacePacketBuf::put_short(local_10,*(int *)(this + 0xc));
    iVar2 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
    InterfacePacketBuf::put_byte(local_10,iVar2);
    map_monster::map_monster((map_monster *)local_368);
                    /* try { // try from 086b93b9 to 086b9513 has its CatchHandler @ 086b9516 */
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
              (local_1c);
    while( true ) {
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
                (local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c);
      map_monster::operator=((map_monster *)local_368,(map_monster *)(iVar2 + 4));
      InterfacePacketBuf::put_short(local_10,0);
      InterfacePacketBuf::put_int(local_10,local_368[0]);
      InterfacePacketBuf::put_short(local_10,(int)(short)local_368[1]);
      InterfacePacketBuf::put_int(local_10,local_35c);
      InterfacePacketBuf::put_byte(local_10,(uint)local_358);
      InterfacePacketBuf::put_byte(local_10,(int)local_360);
      InterfacePacketBuf::put_byte(local_10,(uint)local_355);
      InterfacePacketBuf::put_byte(local_10,(uint)local_354);
      std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_14,(int)local_1c);
    }
    InterfacePacketBuf::put_byte(local_10,0);
    InterfacePacketBuf::finalize(local_10,true);
    map_monster::~map_monster((map_monster *)local_368);
  }
  return;
}
```
