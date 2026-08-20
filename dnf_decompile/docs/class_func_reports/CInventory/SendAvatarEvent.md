# SendAvatarEvent

`_ZNK10CInventory15SendAvatarEventEiiiii`

`CInventory::SendAvatarEvent(int, int, int, int, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08508c2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08508c2e  _ZNK10CInventory15SendAvatarEventEiiiii
#           CInventory::SendAvatarEvent(int, int, int, int, int) const
# range [0x08508c2e, 0x08508fcf]
08508c2e +0x000:  push   %ebp
08508c2f +0x001:  mov    %esp,%ebp
08508c31 +0x003:  push   %esi
08508c32 +0x004:  push   %ebx
08508c33 +0x005:  sub    $0x770,%esp
08508c39 +0x00b:  mov    0x8(%ebp),%eax
08508c3c +0x00e:  mov    (%eax),%eax
08508c3e +0x010:  test   %eax,%eax
08508c40 +0x012:  jne    08508c7d <+0x4f>
08508c42 +0x014:  movl   $0x5,0xc(%esp)
08508c4a +0x01c:  movl   $0x212a,0x8(%esp)
08508c52 +0x024:  movl   $&_ZZNK10CInventory15SendAvatarEventEiiiiiE19__PRETTY_FUNCTION__,0x4(%esp)
08508c5a +0x02c:  lea    -0x28(%ebp),%eax
08508c5d +0x02f:  mov    %eax,(%esp)
08508c60 +0x032:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08508c65 +0x037:  movl   $"CInventory::SendAvatarEven ERROR, m_pParent NULL ",0x4(%esp)
08508c6d +0x03f:  lea    -0x28(%ebp),%eax
08508c70 +0x042:  mov    %eax,(%esp)
08508c73 +0x045:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08508c78 +0x04a:  jmp    08508fc6 <+0x398>
08508c7d +0x04f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08508c82 +0x054:  movl   $0x212f,0x8(%esp)
08508c8a +0x05c:  movl   $"inventory.cpp",0x4(%esp)
08508c92 +0x064:  mov    %eax,(%esp)
08508c95 +0x067:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08508c9a +0x06c:  movl   $0x1,0x8(%esp)
08508ca2 +0x074:  mov    %eax,0x4(%esp)
08508ca6 +0x078:  lea    -0x30(%ebp),%eax
08508ca9 +0x07b:  mov    %eax,(%esp)
08508cac +0x07e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08508cb1 +0x083:  mov    0x8(%ebp),%eax
08508cb4 +0x086:  mov    (%eax),%eax
08508cb6 +0x088:  movl   $0xffffffff,0x4(%esp)
08508cbe +0x090:  mov    %eax,(%esp)
08508cc1 +0x093:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08508cc6 +0x098:  mov    %eax,-0x18(%ebp)
08508cc9 +0x09b:  lea    -0x30(%ebp),%eax
08508ccc +0x09e:  mov    %eax,(%esp)
08508ccf +0x0a1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08508cd4 +0x0a6:  mov    0xc(%ebp),%edx
08508cd7 +0x0a9:  mov    %edx,0x4(%esp)
08508cdb +0x0ad:  mov    %eax,(%esp)
08508cde +0x0b0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08508ce3 +0x0b5:  mov    0x8(%ebp),%eax
08508ce6 +0x0b8:  mov    (%eax),%eax
08508ce8 +0x0ba:  mov    %eax,(%esp)
08508ceb +0x0bd:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08508cf0 +0x0c2:  mov    %eax,%ebx
08508cf2 +0x0c4:  lea    -0x30(%ebp),%eax
08508cf5 +0x0c7:  mov    %eax,(%esp)
08508cf8 +0x0ca:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08508cfd +0x0cf:  mov    %ebx,0x4(%esp)
08508d01 +0x0d3:  mov    %eax,(%esp)
08508d04 +0x0d6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08508d09 +0x0db:  mov    0xc(%ebp),%eax
08508d0c +0x0de:  cmp    $0x34,%eax
08508d0f +0x0e1:  je     08508e98 <+0x26a>
08508d15 +0x0e7:  cmp    $0x34,%eax
08508d18 +0x0ea:  jg     08508d36 <+0x108>
08508d1a +0x0ec:  cmp    $0x32,%eax
08508d1d +0x0ef:  je     08508db1 <+0x183>
08508d23 +0x0f5:  cmp    $0x32,%eax
08508d26 +0x0f8:  jg     08508e52 <+0x224>
08508d2c +0x0fe:  cmp    $0x31,%eax
08508d2f +0x101:  je     08508d5a <+0x12c>
08508d31 +0x103:  jmp    08508f82 <+0x354>
08508d36 +0x108:  cmp    $0x2c3,%eax
08508d3b +0x10d:  je     08508f0f <+0x2e1>
08508d41 +0x113:  cmp    $0x31a,%eax
08508d46 +0x118:  je     08508f43 <+0x315>
08508d4c +0x11e:  cmp    $0x36,%eax
08508d4f +0x121:  je     08508ed2 <+0x2a4>
08508d55 +0x127:  jmp    08508f82 <+0x354>
08508d5a +0x12c:  mov    -0x18(%ebp),%eax
08508d5d +0x12f:  mov    %eax,-0x759(%ebp)
08508d63 +0x135:  mov    0x10(%ebp),%eax
08508d66 +0x138:  mov    %eax,-0x755(%ebp)
08508d6c +0x13e:  mov    0x14(%ebp),%eax
08508d6f +0x141:  mov    %al,-0x751(%ebp)
08508d75 +0x147:  mov    0x18(%ebp),%eax
08508d78 +0x14a:  mov    %eax,-0x74f(%ebp)
08508d7e +0x150:  mov    0x1c(%ebp),%eax
08508d81 +0x153:  mov    %al,-0x74b(%ebp)
08508d87 +0x159:  lea    -0x30(%ebp),%eax
08508d8a +0x15c:  mov    %eax,(%esp)
08508d8d +0x15f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08508d92 +0x164:  movl   $0x53,0x8(%esp)
08508d9a +0x16c:  lea    -0x759(%ebp),%edx
08508da0 +0x172:  mov    %edx,0x4(%esp)
08508da4 +0x176:  mov    %eax,(%esp)
08508da7 +0x179:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08508dac +0x17e:  jmp    08508f82 <+0x354>
08508db1 +0x183:  mov    -0x18(%ebp),%eax
08508db4 +0x186:  mov    %eax,-0x46(%ebp)
08508db7 +0x189:  mov    0x18(%ebp),%eax
08508dba +0x18c:  mov    %eax,-0x42(%ebp)
08508dbd +0x18f:  mov    0x1c(%ebp),%eax
08508dc0 +0x192:  mov    %eax,-0x3e(%ebp)
08508dc3 +0x195:  mov    0x10(%ebp),%eax
08508dc6 +0x198:  mov    %al,-0x3a(%ebp)
08508dc9 +0x19b:  mov    0x14(%ebp),%eax
08508dcc +0x19e:  mov    %al,-0x39(%ebp)
08508dcf +0x1a1:  movzbl -0x3a(%ebp),%eax
08508dd3 +0x1a5:  movzbl %al,%eax
08508dd6 +0x1a8:  mov    %eax,0x4(%esp)
08508dda +0x1ac:  mov    0x8(%ebp),%eax
08508ddd +0x1af:  mov    %eax,(%esp)
08508de0 +0x1b2:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
08508de5 +0x1b7:  test   %eax,%eax
08508de7 +0x1b9:  setne  %al
08508dea +0x1bc:  test   %al,%al
08508dec +0x1be:  je     08508df6 <+0x1c8>
08508dee +0x1c0:  mov    -0x42(%ebp),%eax
08508df1 +0x1c3:  mov    %eax,-0x34(%ebp)
08508df4 +0x1c6:  jmp    08508dfd <+0x1cf>
08508df6 +0x1c8:  movl   $0x0,-0x34(%ebp)
08508dfd +0x1cf:  movzbl -0x39(%ebp),%eax
08508e01 +0x1d3:  movzbl %al,%eax
08508e04 +0x1d6:  mov    %eax,0x4(%esp)
08508e08 +0x1da:  mov    0x8(%ebp),%eax
08508e0b +0x1dd:  mov    %eax,(%esp)
08508e0e +0x1e0:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
08508e13 +0x1e5:  test   %eax,%eax
08508e15 +0x1e7:  setne  %al
08508e18 +0x1ea:  test   %al,%al
08508e1a +0x1ec:  je     08508e24 <+0x1f6>
08508e1c +0x1ee:  mov    -0x3e(%ebp),%eax
08508e1f +0x1f1:  mov    %eax,-0x38(%ebp)
08508e22 +0x1f4:  jmp    08508e2b <+0x1fd>
08508e24 +0x1f6:  movl   $0x0,-0x38(%ebp)
08508e2b +0x1fd:  lea    -0x30(%ebp),%eax
08508e2e +0x200:  mov    %eax,(%esp)
08508e31 +0x203:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08508e36 +0x208:  movl   $0x16,0x8(%esp)
08508e3e +0x210:  lea    -0x46(%ebp),%edx
08508e41 +0x213:  mov    %edx,0x4(%esp)
08508e45 +0x217:  mov    %eax,(%esp)
08508e48 +0x21a:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08508e4d +0x21f:  jmp    08508f82 <+0x354>
08508e52 +0x224:  movl   $0x1,-0x759(%ebp)
08508e5c +0x22e:  mov    -0x18(%ebp),%eax
08508e5f +0x231:  mov    %eax,-0x755(%ebp)
08508e65 +0x237:  mov    0x10(%ebp),%eax
08508e68 +0x23a:  mov    %al,-0x1b5(%ebp)
08508e6e +0x240:  lea    -0x30(%ebp),%eax
08508e71 +0x243:  mov    %eax,(%esp)
08508e74 +0x246:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08508e79 +0x24b:  movl   $0x70c,0x8(%esp)
08508e81 +0x253:  lea    -0x759(%ebp),%edx
08508e87 +0x259:  mov    %edx,0x4(%esp)
08508e8b +0x25d:  mov    %eax,(%esp)
08508e8e +0x260:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08508e93 +0x265:  jmp    08508f82 <+0x354>
08508e98 +0x26a:  mov    -0x18(%ebp),%eax
08508e9b +0x26d:  mov    %eax,-0x4d(%ebp)
08508e9e +0x270:  mov    0x10(%ebp),%eax
08508ea1 +0x273:  mov    %al,-0x49(%ebp)
08508ea4 +0x276:  mov    0x14(%ebp),%eax
08508ea7 +0x279:  mov    %ax,-0x48(%ebp)
08508eab +0x27d:  lea    -0x30(%ebp),%eax
08508eae +0x280:  mov    %eax,(%esp)
08508eb1 +0x283:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08508eb6 +0x288:  movl   $0x7,0x8(%esp)
08508ebe +0x290:  lea    -0x4d(%ebp),%edx
08508ec1 +0x293:  mov    %edx,0x4(%esp)
08508ec5 +0x297:  mov    %eax,(%esp)
08508ec8 +0x29a:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08508ecd +0x29f:  jmp    08508f82 <+0x354>
08508ed2 +0x2a4:  lea    -0x30(%ebp),%eax
08508ed5 +0x2a7:  mov    %eax,(%esp)
08508ed8 +0x2aa:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08508edd +0x2af:  mov    %eax,(%esp)
08508ee0 +0x2b2:  call   084504d6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x30ec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x30ec
08508ee5 +0x2b7:  mov    %eax,-0x14(%ebp)
08508ee8 +0x2ba:  mov    0x10(%ebp),%edx
08508eeb +0x2bd:  mov    -0x14(%ebp),%eax
08508eee +0x2c0:  mov    %edx,(%eax)
08508ef0 +0x2c2:  mov    0x14(%ebp),%edx
08508ef3 +0x2c5:  mov    -0x14(%ebp),%eax
08508ef6 +0x2c8:  mov    %edx,0x4(%eax)
08508ef9 +0x2cb:  mov    0x18(%ebp),%eax
08508efc +0x2ce:  mov    %eax,%edx
08508efe +0x2d0:  mov    -0x14(%ebp),%eax
08508f01 +0x2d3:  mov    %dl,0x8(%eax)
08508f04 +0x2d6:  mov    -0x14(%ebp),%eax
08508f07 +0x2d9:  mov    -0x18(%ebp),%edx
08508f0a +0x2dc:  mov    %edx,0x9(%eax)
08508f0d +0x2df:  jmp    08508f82 <+0x354>
08508f0f +0x2e1:  lea    -0x30(%ebp),%eax
08508f12 +0x2e4:  mov    %eax,(%esp)
08508f15 +0x2e7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08508f1a +0x2ec:  mov    %eax,(%esp)
08508f1d +0x2ef:  call   0850d5b2 <_GLOBAL__I_g_emptySlot+0x4e7>  ; global constructors keyed to g_emptySlot+0x4e7
08508f22 +0x2f4:  mov    %eax,-0x10(%ebp)
08508f25 +0x2f7:  mov    -0x10(%ebp),%eax
08508f28 +0x2fa:  mov    -0x18(%ebp),%edx
08508f2b +0x2fd:  mov    %edx,0x8(%eax)
08508f2e +0x300:  mov    0x10(%ebp),%edx
08508f31 +0x303:  mov    -0x10(%ebp),%eax
08508f34 +0x306:  mov    %edx,(%eax)
08508f36 +0x308:  mov    0x14(%ebp),%eax
08508f39 +0x30b:  mov    %eax,%edx
08508f3b +0x30d:  mov    -0x10(%ebp),%eax
08508f3e +0x310:  mov    %dl,0x4(%eax)
08508f41 +0x313:  jmp    08508f82 <+0x354>
08508f43 +0x315:  lea    -0x30(%ebp),%eax
08508f46 +0x318:  mov    %eax,(%esp)
08508f49 +0x31b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08508f4e +0x320:  mov    %eax,(%esp)
08508f51 +0x323:  call   0850d5c8 <_GLOBAL__I_g_emptySlot+0x4fd>  ; global constructors keyed to g_emptySlot+0x4fd
08508f56 +0x328:  mov    %eax,-0xc(%ebp)
08508f59 +0x32b:  mov    -0xc(%ebp),%eax
08508f5c +0x32e:  mov    -0x18(%ebp),%edx
08508f5f +0x331:  mov    %edx,(%eax)
08508f61 +0x333:  mov    0x10(%ebp),%edx
08508f64 +0x336:  mov    -0xc(%ebp),%eax
08508f67 +0x339:  mov    %edx,0x4(%eax)
08508f6a +0x33c:  mov    0x14(%ebp),%eax
08508f6d +0x33f:  mov    %eax,%edx
08508f6f +0x341:  mov    -0xc(%ebp),%eax
08508f72 +0x344:  mov    %dx,0x8(%eax)
08508f76 +0x348:  mov    0x18(%ebp),%eax
08508f79 +0x34b:  mov    %eax,%edx
08508f7b +0x34d:  mov    -0xc(%ebp),%eax
08508f7e +0x350:  mov    %dx,0xa(%eax)
08508f82 +0x354:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08508f87 +0x359:  lea    -0x30(%ebp),%edx
08508f8a +0x35c:  mov    %edx,0x8(%esp)
08508f8e +0x360:  movl   $0x2,0x4(%esp)
08508f96 +0x368:  mov    %eax,(%esp)
08508f99 +0x36b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08508f9e +0x370:  jmp    08508fbb <+0x38d>
08508fa0 +0x372:  mov    %edx,%ebx
08508fa2 +0x374:  mov    %eax,%esi
08508fa4 +0x376:  lea    -0x30(%ebp),%eax
08508fa7 +0x379:  mov    %eax,(%esp)
08508faa +0x37c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08508faf +0x381:  mov    %esi,%eax
08508fb1 +0x383:  mov    %ebx,%edx
08508fb3 +0x385:  mov    %eax,(%esp)
08508fb6 +0x388:  call   08ae3750 <_Unwind_Resume>
08508fbb +0x38d:  lea    -0x30(%ebp),%eax
08508fbe +0x390:  mov    %eax,(%esp)
08508fc1 +0x393:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08508fc6 +0x398:  add    $0x770,%esp
08508fcc +0x39e:  pop    %ebx
08508fcd +0x39f:  pop    %esi
08508fce +0x3a0:  pop    %ebp
08508fcf +0x3a1:  ret
```

## 反编译 C

```c
// CInventory::SendAvatarEvent @ 0x8508c2e

/* CInventory::SendAvatarEvent(int, int, int, int, int) const */

void __thiscall
CInventory::SendAvatarEvent
          (CInventory *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  SIG_AVATAR_OPTION_CHANGE SVar5;
  int local_75d;
  int local_759;
  SIG_AVATAR_OPTION_CHANGE local_755;
  int local_753;
  undefined1 local_74f;
  undefined1 local_1b9;
  int local_51;
  undefined1 local_4d;
  undefined2 local_4c;
  int local_4a;
  int local_46;
  int local_42;
  undefined1 local_3e;
  SIG_AVATAR_OPTION_CHANGE local_3d;
  int local_3c;
  int local_38;
  CStreamGuard local_34 [8];
  cMyTrace local_2c [16];
  int local_1c;
  SIG_AVATAR_CHANGE_STAT *local_18;
  SIG_AVATAR_OPTION_CHANGE *local_14;
  SIG_AVATAR_COLOR_CHANGE *local_10;
  
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_2c,"void CInventory::SendAvatarEvent(int, int, int, int, int) const",
                       0x212a,5);
    cMyTrace::operator()(local_2c,"CInventory::SendAvatarEven ERROR, m_pParent NULL ");
  }
  else {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"inventory.cpp",0x212f);
    CStreamGuard::CStreamGuard(local_34,pSVar2,true);
                    /* try { // try from 08508cc1 to 08508f9d has its CatchHandler @ 08508fa0 */
    local_1c = CUser::get_charac_no(*(CUser **)this,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar3,param_1);
    iVar4 = CUser::GetUID(*(CUser **)this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar3,iVar4);
    uVar1 = (undefined1)param_2;
    if (param_1 == 0x34) {
      local_51 = local_1c;
      local_4d = uVar1;
      local_4c = (short)param_3;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
      CStreamGuard::put_binary(pCVar3,&local_51,7);
    }
    else {
      SVar5 = SUB41(param_3,0);
      if (param_1 < 0x35) {
        if (param_1 == 0x32) {
          local_4a = local_1c;
          local_46 = param_4;
          local_42 = param_5;
          local_3e = uVar1;
          local_3d = SVar5;
          iVar4 = GetClearAvatar(this,param_2 & 0xff);
          if (iVar4 == 0) {
            local_38 = 0;
          }
          else {
            local_38 = local_46;
          }
          iVar4 = GetClearAvatar(this,(uint)(byte)local_3d);
          if (iVar4 == 0) {
            local_3c = 0;
          }
          else {
            local_3c = local_42;
          }
          pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
          CStreamGuard::put_binary(pCVar3,&local_4a,0x16);
        }
        else if (param_1 < 0x33) {
          if (param_1 == 0x31) {
            local_75d = local_1c;
            local_759 = param_2;
            local_753 = param_4;
            local_74f = (undefined1)param_5;
            local_755 = SVar5;
            pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
            CStreamGuard::put_binary(pCVar3,&local_75d,0x53);
          }
        }
        else {
          local_75d = 1;
          local_759 = local_1c;
          local_1b9 = uVar1;
          pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
          CStreamGuard::put_binary(pCVar3,&local_75d,0x70c);
        }
      }
      else if (param_1 == 0x2c3) {
        pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
        local_14 = CStreamGuard::GetInBuffer<SIG_AVATAR_OPTION_CHANGE>(pCVar3);
        *(int *)(local_14 + 8) = local_1c;
        *(int *)local_14 = param_2;
        local_14[4] = SVar5;
      }
      else if (param_1 == 0x31a) {
        pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
        local_10 = CStreamGuard::GetInBuffer<SIG_AVATAR_COLOR_CHANGE>(pCVar3);
        *(int *)local_10 = local_1c;
        *(int *)(local_10 + 4) = param_2;
        *(short *)(local_10 + 8) = (short)param_3;
        *(short *)(local_10 + 10) = (short)param_4;
      }
      else if (param_1 == 0x36) {
        pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
        local_18 = CStreamGuard::GetInBuffer<SIG_AVATAR_CHANGE_STAT>(pCVar3);
        *(int *)local_18 = param_2;
        *(int *)(local_18 + 4) = param_3;
        local_18[8] = SUB41(param_4,0);
        *(int *)(local_18 + 9) = local_1c;
      }
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  return;
}
```
