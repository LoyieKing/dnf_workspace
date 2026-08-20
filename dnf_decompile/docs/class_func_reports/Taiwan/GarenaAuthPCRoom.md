# GarenaAuthPCRoom

`_ZN6Taiwan16GarenaAuthPCRoomEP5CUser`

`Taiwan::GarenaAuthPCRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `Taiwan` | `0x08471c74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471c74  _ZN6Taiwan16GarenaAuthPCRoomEP5CUser
#           Taiwan::GarenaAuthPCRoom(CUser*)
# range [0x08471c74, 0x08471dab]
08471c74 +0x000:  push   %ebp
08471c75 +0x001:  mov    %esp,%ebp
08471c77 +0x003:  push   %esi
08471c78 +0x004:  push   %ebx
08471c79 +0x005:  sub    $0x40,%esp
08471c7c +0x008:  cmpl   $0x0,0x8(%ebp)
08471c80 +0x00c:  je     08471da4 <+0x130>
08471c86 +0x012:  lea    -0x27(%ebp),%eax
08471c89 +0x015:  mov    %eax,(%esp)
08471c8c +0x018:  call   0822be14 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x14be>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x14be
08471c91 +0x01d:  movl   $0x1,-0x15(%ebp)
08471c98 +0x024:  movb   $0x1,-0xd(%ebp)
08471c9c +0x028:  movb   $0xb,-0xc(%ebp)
08471ca0 +0x02c:  movl   $0x0,(%esp)
08471ca7 +0x033:  call   0807d750 <_init+0x48>
08471cac +0x038:  add    $0x93a80,%eax
08471cb1 +0x03d:  mov    %eax,-0x11(%ebp)
08471cb4 +0x040:  mov    0x8(%ebp),%eax
08471cb7 +0x043:  mov    %eax,(%esp)
08471cba +0x046:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08471cbf +0x04b:  mov    %eax,-0x1d(%ebp)
08471cc2 +0x04e:  mov    0x8(%ebp),%eax
08471cc5 +0x051:  mov    %eax,(%esp)
08471cc8 +0x054:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08471ccd +0x059:  mov    %eax,-0x19(%ebp)
08471cd0 +0x05c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08471cd5 +0x061:  movl   $0x1ab,0x8(%esp)
08471cdd +0x069:  movl   $"DF_PCRoomServerProxy.cpp",0x4(%esp)
08471ce5 +0x071:  mov    %eax,(%esp)
08471ce8 +0x074:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08471ced +0x079:  movl   $0x1,0x8(%esp)
08471cf5 +0x081:  mov    %eax,0x4(%esp)
08471cf9 +0x085:  lea    -0x30(%ebp),%eax
08471cfc +0x088:  mov    %eax,(%esp)
08471cff +0x08b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08471d04 +0x090:  lea    -0x30(%ebp),%eax
08471d07 +0x093:  mov    %eax,(%esp)
08471d0a +0x096:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08471d0f +0x09b:  movl   $0x17e,0x4(%esp)
08471d17 +0x0a3:  mov    %eax,(%esp)
08471d1a +0x0a6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08471d1f +0x0ab:  mov    -0x1d(%ebp),%ebx
08471d22 +0x0ae:  lea    -0x30(%ebp),%eax
08471d25 +0x0b1:  mov    %eax,(%esp)
08471d28 +0x0b4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08471d2d +0x0b9:  mov    %ebx,0x4(%esp)
08471d31 +0x0bd:  mov    %eax,(%esp)
08471d34 +0x0c0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08471d39 +0x0c5:  movzwl -0x25(%ebp),%eax
08471d3d +0x0c9:  movzwl %ax,%ebx
08471d40 +0x0cc:  lea    -0x30(%ebp),%eax
08471d43 +0x0cf:  mov    %eax,(%esp)
08471d46 +0x0d2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08471d4b +0x0d7:  mov    %ebx,0x8(%esp)
08471d4f +0x0db:  lea    -0x27(%ebp),%edx
08471d52 +0x0de:  mov    %edx,0x4(%esp)
08471d56 +0x0e2:  mov    %eax,(%esp)
08471d59 +0x0e5:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08471d5e +0x0ea:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08471d63 +0x0ef:  lea    -0x30(%ebp),%edx
08471d66 +0x0f2:  mov    %edx,0x8(%esp)
08471d6a +0x0f6:  movl   $0x1,0x4(%esp)
08471d72 +0x0fe:  mov    %eax,(%esp)
08471d75 +0x101:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08471d7a +0x106:  jmp    08471d97 <+0x123>
08471d7c +0x108:  mov    %edx,%ebx
08471d7e +0x10a:  mov    %eax,%esi
08471d80 +0x10c:  lea    -0x30(%ebp),%eax
08471d83 +0x10f:  mov    %eax,(%esp)
08471d86 +0x112:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08471d8b +0x117:  mov    %esi,%eax
08471d8d +0x119:  mov    %ebx,%edx
08471d8f +0x11b:  mov    %eax,(%esp)
08471d92 +0x11e:  call   08ae3750 <_Unwind_Resume>
08471d97 +0x123:  lea    -0x30(%ebp),%eax
08471d9a +0x126:  mov    %eax,(%esp)
08471d9d +0x129:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08471da2 +0x12e:  jmp    08471da5 <+0x131>
08471da4 +0x130:  nop
08471da5 +0x131:  add    $0x40,%esp
08471da8 +0x134:  pop    %ebx
08471da9 +0x135:  pop    %esi
08471daa +0x136:  pop    %ebp
08471dab +0x137:  ret
```

## 反编译 C

```c
// Taiwan::GarenaAuthPCRoom @ 0x8471c74

/* Taiwan::GarenaAuthPCRoom(CUser*) */

void Taiwan::GarenaAuthPCRoom(CUser *param_1)

{
  int iVar1;
  time_t tVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_34 [9];
  Packet_Pcroom_Response local_2b [2];
  ushort local_29;
  int local_21;
  undefined4 local_1d;
  undefined4 local_19;
  int local_15;
  undefined1 local_11;
  undefined1 local_10;
  
  if (param_1 != (CUser *)0x0) {
    Packet_Pcroom_Response::Packet_Pcroom_Response(local_2b);
    local_19 = 1;
    local_11 = 1;
    local_10 = 0xb;
    tVar2 = time((time_t *)0x0);
    local_15 = tVar2 + 0x93a80;
    local_21 = CUser::GetUID(param_1);
    local_1d = CUser::get_acc_id(param_1);
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"DF_PCRoomServerProxy.cpp",0x1ab);
    CStreamGuard::CStreamGuard(local_34,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 08471d1a to 08471d79 has its CatchHandler @ 08471d7c */
    CStreamGuard::operator<<(pCVar4,0x17e);
    iVar1 = local_21;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar4,iVar1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    CStreamGuard::put_binary(pCVar4,local_2b,(uint)local_29);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  return;
}
```
