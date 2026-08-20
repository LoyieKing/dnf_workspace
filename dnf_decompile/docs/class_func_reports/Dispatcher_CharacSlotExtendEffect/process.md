# process

`_ZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CharacSlotExtendEffect::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CharacSlotExtendEffect` | `0x081d7fb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7fb6  _ZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CharacSlotExtendEffect::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d7fb6, 0x081d81e5]
081d7fb6 +0x000:  push   %ebp
081d7fb7 +0x001:  mov    %esp,%ebp
081d7fb9 +0x003:  push   %edi
081d7fba +0x004:  push   %esi
081d7fbb +0x005:  push   %ebx
081d7fbc +0x006:  sub    $0x4c,%esp
081d7fbf +0x009:  mov    0x14(%ebp),%eax
081d7fc2 +0x00c:  mov    %eax,-0x20(%ebp)
081d7fc5 +0x00f:  mov    0xc(%ebp),%eax
081d7fc8 +0x012:  mov    %eax,(%esp)
081d7fcb +0x015:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d7fd0 +0x01a:  cmp    $0x2,%eax
081d7fd3 +0x01d:  setne  %al
081d7fd6 +0x020:  test   %al,%al
081d7fd8 +0x022:  je     081d7fee <+0x38>
081d7fda +0x024:  mov    -0x20(%ebp),%eax
081d7fdd +0x027:  movl   $0x7,0x4(%eax)
081d7fe4 +0x02e:  mov    $0x0,%ebx
081d7fe9 +0x033:  jmp    081d81dc <+0x226>
081d7fee +0x038:  mov    0xc(%ebp),%eax
081d7ff1 +0x03b:  mov    %eax,(%esp)
081d7ff4 +0x03e:  call   08230870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f1a
081d7ff9 +0x043:  mov    %eax,%ebx
081d7ffb +0x045:  mov    0xc(%ebp),%eax
081d7ffe +0x048:  mov    %eax,(%esp)
081d8001 +0x04b:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
081d8006 +0x050:  cmp    %al,%bl
081d8008 +0x052:  setae  %al
081d800b +0x055:  test   %al,%al
081d800d +0x057:  je     081d80a2 <+0xec>
081d8013 +0x05d:  mov    0xc(%ebp),%eax
081d8016 +0x060:  mov    %eax,(%esp)
081d8019 +0x063:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
081d801e +0x068:  movzbl %al,%edi
081d8021 +0x06b:  mov    0xc(%ebp),%eax
081d8024 +0x06e:  mov    %eax,(%esp)
081d8027 +0x071:  call   08230870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f1a
081d802c +0x076:  movzbl %al,%esi
081d802f +0x079:  mov    0xc(%ebp),%eax
081d8032 +0x07c:  mov    %eax,(%esp)
081d8035 +0x07f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d803a +0x084:  movl   $0x0,0x4(%esp)
081d8042 +0x08c:  mov    %eax,(%esp)
081d8045 +0x08f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081d804a +0x094:  mov    %eax,%ebx
081d804c +0x096:  movl   $0x0,0xc(%esp)
081d8054 +0x09e:  movl   $0x4291,0x8(%esp)
081d805c +0x0a6:  movl   $&_ZZN33Dispatcher_CharacSlotExtendEffect7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d8064 +0x0ae:  lea    -0x30(%ebp),%eax
081d8067 +0x0b1:  mov    %eax,(%esp)
081d806a +0x0b4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081d806f +0x0b9:  mov    %edi,0x10(%esp)
081d8073 +0x0bd:  mov    %esi,0xc(%esp)
081d8077 +0x0c1:  mov    %ebx,0x8(%esp)
081d807b +0x0c5:  movl   $"CharacSlotExtendEffect m_id(%s), SlotEffectCount(%u), CharacSlotLimit(%u)",0x4(%esp)
081d8083 +0x0cd:  lea    -0x30(%ebp),%eax
081d8086 +0x0d0:  mov    %eax,(%esp)
081d8089 +0x0d3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081d808e +0x0d8:  mov    -0x20(%ebp),%eax
081d8091 +0x0db:  movl   $0x12,0x4(%eax)
081d8098 +0x0e2:  mov    $0x0,%ebx
081d809d +0x0e7:  jmp    081d81dc <+0x226>
081d80a2 +0x0ec:  mov    0xc(%ebp),%eax
081d80a5 +0x0ef:  mov    %eax,(%esp)
081d80a8 +0x0f2:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
081d80ad +0x0f7:  movzbl %al,%eax
081d80b0 +0x0fa:  mov    %eax,0x4(%esp)
081d80b4 +0x0fe:  mov    0xc(%ebp),%eax
081d80b7 +0x101:  mov    %eax,(%esp)
081d80ba +0x104:  call   08230880 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f2a
081d80bf +0x109:  mov    0xc(%ebp),%eax
081d80c2 +0x10c:  mov    %eax,(%esp)
081d80c5 +0x10f:  call   08230870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f1a
081d80ca +0x114:  mov    -0x20(%ebp),%edx
081d80cd +0x117:  mov    %al,0x8(%edx)
081d80d0 +0x11a:  mov    0xc(%ebp),%eax
081d80d3 +0x11d:  mov    %eax,(%esp)
081d80d6 +0x120:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
081d80db +0x125:  mov    -0x20(%ebp),%edx
081d80de +0x128:  mov    %al,0x9(%edx)
081d80e1 +0x12b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081d80e6 +0x130:  movl   $0x429a,0x8(%esp)
081d80ee +0x138:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081d80f6 +0x140:  mov    %eax,(%esp)
081d80f9 +0x143:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081d80fe +0x148:  movl   $0x1,0x8(%esp)
081d8106 +0x150:  mov    %eax,0x4(%esp)
081d810a +0x154:  lea    -0x38(%ebp),%eax
081d810d +0x157:  mov    %eax,(%esp)
081d8110 +0x15a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081d8115 +0x15f:  lea    -0x38(%ebp),%eax
081d8118 +0x162:  mov    %eax,(%esp)
081d811b +0x165:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081d8120 +0x16a:  movl   $0x28a,0x4(%esp)
081d8128 +0x172:  mov    %eax,(%esp)
081d812b +0x175:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081d8130 +0x17a:  lea    -0x38(%ebp),%eax
081d8133 +0x17d:  mov    %eax,(%esp)
081d8136 +0x180:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081d813b +0x185:  movl   $0xffffffff,0x4(%esp)
081d8143 +0x18d:  mov    %eax,(%esp)
081d8146 +0x190:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081d814b +0x195:  lea    -0x38(%ebp),%eax
081d814e +0x198:  mov    %eax,(%esp)
081d8151 +0x19b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081d8156 +0x1a0:  mov    %eax,(%esp)
081d8159 +0x1a3:  call   082370a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc74a
081d815e +0x1a8:  mov    %eax,-0x1c(%ebp)
081d8161 +0x1ab:  mov    0xc(%ebp),%eax
081d8164 +0x1ae:  mov    %eax,(%esp)
081d8167 +0x1b1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d816c +0x1b6:  mov    -0x1c(%ebp),%edx
081d816f +0x1b9:  mov    %eax,(%edx)
081d8171 +0x1bb:  mov    0xc(%ebp),%eax
081d8174 +0x1be:  mov    %eax,(%esp)
081d8177 +0x1c1:  call   08230870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f1a
081d817c +0x1c6:  mov    -0x1c(%ebp),%edx
081d817f +0x1c9:  mov    %al,0x4(%edx)
081d8182 +0x1cc:  mov    0xc(%ebp),%eax
081d8185 +0x1cf:  mov    %eax,(%esp)
081d8188 +0x1d2:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
081d818d +0x1d7:  mov    -0x1c(%ebp),%edx
081d8190 +0x1da:  mov    %al,0x5(%edx)
081d8193 +0x1dd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081d8198 +0x1e2:  lea    -0x38(%ebp),%edx
081d819b +0x1e5:  mov    %edx,0x8(%esp)
081d819f +0x1e9:  movl   $0x2,0x4(%esp)
081d81a7 +0x1f1:  mov    %eax,(%esp)
081d81aa +0x1f4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081d81af +0x1f9:  mov    $0x0,%ebx
081d81b4 +0x1fe:  lea    -0x38(%ebp),%eax
081d81b7 +0x201:  mov    %eax,(%esp)
081d81ba +0x204:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081d81bf +0x209:  jmp    081d81dc <+0x226>
081d81c1 +0x20b:  mov    %edx,%ebx
081d81c3 +0x20d:  mov    %eax,%esi
081d81c5 +0x20f:  lea    -0x38(%ebp),%eax
081d81c8 +0x212:  mov    %eax,(%esp)
081d81cb +0x215:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081d81d0 +0x21a:  mov    %esi,%eax
081d81d2 +0x21c:  mov    %ebx,%edx
081d81d4 +0x21e:  mov    %eax,(%esp)
081d81d7 +0x221:  call   08ae3750 <_Unwind_Resume>
081d81dc +0x226:  mov    %ebx,%eax
081d81de +0x228:  add    $0x4c,%esp
081d81e1 +0x22b:  pop    %ebx
081d81e2 +0x22c:  pop    %esi
081d81e3 +0x22d:  pop    %edi
081d81e4 +0x22e:  pop    %ebp
081d81e5 +0x22f:  ret
```

## 反编译 C

```c
// Dispatcher_CharacSlotExtendEffect::process @ 0x81d7fb6

/* Dispatcher_CharacSlotExtendEffect::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CharacSlotExtendEffect::process
          (Dispatcher_CharacSlotExtendEffect *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  ParamBase PVar4;
  SIG_EXTEND_CHARAC_SLOT SVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  Stream *pSVar11;
  CStreamGuard *pCVar12;
  CStreamGuard local_3c [8];
  cMyTrace local_34 [16];
  ParamBase *local_24;
  SIG_EXTEND_CHARAC_SLOT *local_20;
  
  local_24 = param_3;
  iVar6 = CUser::get_state(param_1);
  if (iVar6 == 2) {
    bVar1 = CUser::getSlotEffectCount(param_1);
    bVar2 = CUser::getCharacSlotLimit(param_1);
    if (bVar1 < bVar2) {
      uVar3 = CUser::getCharacSlotLimit(param_1);
      CUser::setSlotEffectCount(param_1,uVar3);
      PVar4 = (ParamBase)CUser::getSlotEffectCount(param_1);
      local_24[8] = PVar4;
      PVar4 = (ParamBase)CUser::getCharacSlotLimit(param_1);
      local_24[9] = PVar4;
      pSVar11 = (Stream *)
                StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x429a);
      CStreamGuard::CStreamGuard(local_3c,pSVar11,true);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 081d812b to 081d81ae has its CatchHandler @ 081d81c1 */
      CStreamGuard::operator<<(pCVar12,0x28a);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
      CStreamGuard::operator<<(pCVar12,-1);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
      local_20 = CStreamGuard::GetInBuffer<SIG_EXTEND_CHARAC_SLOT>(pCVar12);
      uVar10 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_20 = uVar10;
      SVar5 = (SIG_EXTEND_CHARAC_SLOT)CUser::getSlotEffectCount(param_1);
      local_20[4] = SVar5;
      SVar5 = (SIG_EXTEND_CHARAC_SLOT)CUser::getCharacSlotLimit(param_1);
      local_20[5] = SVar5;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_3c);
      CStreamGuard::~CStreamGuard(local_3c);
    }
    else {
      uVar7 = CUser::getCharacSlotLimit(param_1);
      uVar8 = CUser::getSlotEffectCount(param_1);
      uVar9 = CUser::get_acc_id(param_1);
      uVar10 = NumberToString(uVar9,0);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Dispatcher_CharacSlotExtendEffect::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x4291,0);
      cMyTrace::operator()
                (local_34,
                 "CharacSlotExtendEffect m_id(%s), SlotEffectCount(%u), CharacSlotLimit(%u)",uVar10,
                 uVar8 & 0xff,uVar7 & 0xff);
      *(undefined4 *)(local_24 + 4) = 0x12;
    }
  }
  else {
    *(undefined4 *)(local_24 + 4) = 7;
  }
  return 0;
}
```
