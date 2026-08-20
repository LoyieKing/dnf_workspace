# _sendComplete

`_ZN12CAchievement13_sendCompleteEji24ENUM_TITLE_BOOK_CATEGORYi`

`CAchievement::_sendComplete(unsigned int, int, ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c3a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c3a4  _ZN12CAchievement13_sendCompleteEji24ENUM_TITLE_BOOK_CATEGORYi
#           CAchievement::_sendComplete(unsigned int, int, ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x0828c3a4, 0x0828c4dd]
0828c3a4 +0x000:  push   %ebp
0828c3a5 +0x001:  mov    %esp,%ebp
0828c3a7 +0x003:  push   %esi
0828c3a8 +0x004:  push   %ebx
0828c3a9 +0x005:  sub    $0x70,%esp
0828c3ac +0x008:  lea    -0x14(%ebp),%eax
0828c3af +0x00b:  mov    0xc(%ebp),%edx
0828c3b2 +0x00e:  mov    %edx,0x8(%esp)
0828c3b6 +0x012:  mov    0x8(%ebp),%edx
0828c3b9 +0x015:  mov    %edx,0x4(%esp)
0828c3bd +0x019:  mov    %eax,(%esp)
0828c3c0 +0x01c:  call   0828bb14 <_ZN12CAchievement11_getTriggerEj>  ; CAchievement::_getTrigger(unsigned int)
0828c3c5 +0x021:  sub    $0x4,%esp
0828c3c8 +0x024:  lea    -0x20(%ebp),%eax
0828c3cb +0x027:  mov    %eax,(%esp)
0828c3ce +0x02a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0828c3d3 +0x02f:  movl   $0x167,0x8(%esp)
0828c3db +0x037:  movl   $0x0,0x4(%esp)
0828c3e3 +0x03f:  lea    -0x20(%ebp),%eax
0828c3e6 +0x042:  mov    %eax,(%esp)
0828c3e9 +0x045:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0828c3ee +0x04a:  mov    -0x14(%ebp),%eax
0828c3f1 +0x04d:  mov    %eax,0x4(%esp)
0828c3f5 +0x051:  lea    -0x20(%ebp),%eax
0828c3f8 +0x054:  mov    %eax,(%esp)
0828c3fb +0x057:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c400 +0x05c:  mov    0x14(%ebp),%eax
0828c403 +0x05f:  mov    %eax,0x4(%esp)
0828c407 +0x063:  lea    -0x20(%ebp),%eax
0828c40a +0x066:  mov    %eax,(%esp)
0828c40d +0x069:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c412 +0x06e:  mov    0x18(%ebp),%eax
0828c415 +0x071:  mov    %eax,0x4(%esp)
0828c419 +0x075:  lea    -0x20(%ebp),%eax
0828c41c +0x078:  mov    %eax,(%esp)
0828c41f +0x07b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c424 +0x080:  mov    0x10(%ebp),%eax
0828c427 +0x083:  mov    %eax,0x4(%esp)
0828c42b +0x087:  lea    -0x20(%ebp),%eax
0828c42e +0x08a:  mov    %eax,(%esp)
0828c431 +0x08d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828c436 +0x092:  mov    0x8(%ebp),%eax
0828c439 +0x095:  mov    0x8(%eax),%eax
0828c43c +0x098:  movl   $0xe,0x4(%esp)
0828c444 +0x0a0:  mov    %eax,(%esp)
0828c447 +0x0a3:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0828c44c +0x0a8:  mov    %eax,%edx
0828c44e +0x0aa:  lea    -0x5d(%ebp),%eax
0828c451 +0x0ad:  mov    0x18(%ebp),%ecx
0828c454 +0x0b0:  mov    %ecx,0xc(%esp)
0828c458 +0x0b4:  mov    0x14(%ebp),%ecx
0828c45b +0x0b7:  mov    %ecx,0x8(%esp)
0828c45f +0x0bb:  mov    %edx,0x4(%esp)
0828c463 +0x0bf:  mov    %eax,(%esp)
0828c466 +0x0c2:  call   086416a4 <_ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::getTitleSlotR(ENUM_TITLE_BOOK_CATEGORY, int)
0828c46b +0x0c7:  sub    $0x4,%esp
0828c46e +0x0ca:  movzwl -0x52(%ebp),%eax
0828c472 +0x0ce:  movzwl %ax,%eax
0828c475 +0x0d1:  mov    %eax,0x4(%esp)
0828c479 +0x0d5:  lea    -0x20(%ebp),%eax
0828c47c +0x0d8:  mov    %eax,(%esp)
0828c47f +0x0db:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828c484 +0x0e0:  movl   $0x1,0x4(%esp)
0828c48c +0x0e8:  lea    -0x20(%ebp),%eax
0828c48f +0x0eb:  mov    %eax,(%esp)
0828c492 +0x0ee:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0828c497 +0x0f3:  mov    0x8(%ebp),%eax
0828c49a +0x0f6:  mov    0x8(%eax),%eax
0828c49d +0x0f9:  lea    -0x20(%ebp),%edx
0828c4a0 +0x0fc:  mov    %edx,0x4(%esp)
0828c4a4 +0x100:  mov    %eax,(%esp)
0828c4a7 +0x103:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0828c4ac +0x108:  jmp    0828c4c9 <+0x125>
0828c4ae +0x10a:  mov    %edx,%ebx
0828c4b0 +0x10c:  mov    %eax,%esi
0828c4b2 +0x10e:  lea    -0x20(%ebp),%eax
0828c4b5 +0x111:  mov    %eax,(%esp)
0828c4b8 +0x114:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828c4bd +0x119:  mov    %esi,%eax
0828c4bf +0x11b:  mov    %ebx,%edx
0828c4c1 +0x11d:  mov    %eax,(%esp)
0828c4c4 +0x120:  call   08ae3750 <_Unwind_Resume>
0828c4c9 +0x125:  lea    -0x20(%ebp),%eax
0828c4cc +0x128:  mov    %eax,(%esp)
0828c4cf +0x12b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828c4d4 +0x130:  lea    -0x8(%ebp),%esp
0828c4d7 +0x133:  add    $0x0,%esp
0828c4da +0x136:  pop    %ebx
0828c4db +0x137:  pop    %esi
0828c4dc +0x138:  pop    %ebp
0828c4dd +0x139:  ret
```

## 反编译 C

```c
// CAchievement::_sendComplete @ 0x828c3a4

/* CAchievement::_sendComplete(unsigned int, int, ENUM_TITLE_BOOK_CATEGORY, int) */

void __thiscall
CAchievement::_sendComplete
          (CAchievement *this,undefined4 param_1,int param_2,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 local_61 [11];
  ushort local_56;
  PacketGuard local_24 [12];
  int local_18 [3];
  
  _getTrigger((uint)local_18);
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0828c3e9 to 0828c4ab has its CatchHandler @ 0828c4ae */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x167);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_18[0]);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,param_2);
  uVar1 = CUser::GetCharacExpandData(*(CUser **)(this + 8),0xe);
  CTitleBook::getTitleSlotR(local_61,uVar1,param_4,param_5);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_56);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(*(CUser **)(this + 8),local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
