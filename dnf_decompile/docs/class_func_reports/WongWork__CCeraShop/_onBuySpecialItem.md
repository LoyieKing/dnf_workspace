# _onBuySpecialItem

`_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm`

`WongWork::CCeraShop::_onBuySpecialItem(CUser*, ENUM_CERA_SPECIALITEM, unsigned long)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327454` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327454  _ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm
#           WongWork::CCeraShop::_onBuySpecialItem(CUser*, ENUM_CERA_SPECIALITEM, unsigned long)
# range [0x08327454, 0x083275bd]
08327454 +0x000:  push   %ebp
08327455 +0x001:  mov    %esp,%ebp
08327457 +0x003:  push   %esi
08327458 +0x004:  push   %ebx
08327459 +0x005:  sub    $0x20,%esp
0832745c +0x008:  mov    0x14(%ebp),%eax
0832745f +0x00b:  sub    $0x3f,%eax
08327462 +0x00e:  cmp    $0xa,%eax
08327465 +0x011:  ja     0832758e <+0x13a>
0832746b +0x017:  mov    $0x1,%edx
08327470 +0x01c:  mov    %edx,%ebx
08327472 +0x01e:  mov    %eax,%ecx
08327474 +0x020:  shl    %cl,%ebx
08327476 +0x022:  mov    %ebx,%eax
08327478 +0x024:  and    $0x7df,%eax
0832747d +0x029:  test   %eax,%eax
0832747f +0x02b:  je     0832758e <+0x13a>
08327485 +0x031:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0832748a +0x036:  movl   $0x1971,0x8(%esp)
08327492 +0x03e:  movl   $"CeraShop.cpp",0x4(%esp)
0832749a +0x046:  mov    %eax,(%esp)
0832749d +0x049:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
083274a2 +0x04e:  movl   $0x1,0x8(%esp)
083274aa +0x056:  mov    %eax,0x4(%esp)
083274ae +0x05a:  lea    -0x14(%ebp),%eax
083274b1 +0x05d:  mov    %eax,(%esp)
083274b4 +0x060:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
083274b9 +0x065:  lea    -0x14(%ebp),%eax
083274bc +0x068:  mov    %eax,(%esp)
083274bf +0x06b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
083274c4 +0x070:  movl   $0xb4,0x4(%esp)
083274cc +0x078:  mov    %eax,(%esp)
083274cf +0x07b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
083274d4 +0x080:  lea    -0x14(%ebp),%eax
083274d7 +0x083:  mov    %eax,(%esp)
083274da +0x086:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
083274df +0x08b:  movl   $0xffffffff,0x4(%esp)
083274e7 +0x093:  mov    %eax,(%esp)
083274ea +0x096:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
083274ef +0x09b:  lea    -0x14(%ebp),%eax
083274f2 +0x09e:  mov    %eax,(%esp)
083274f5 +0x0a1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
083274fa +0x0a6:  mov    %eax,(%esp)
083274fd +0x0a9:  call   0827dfa2 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0xc4>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0xc4
08327502 +0x0ae:  mov    %eax,-0xc(%ebp)
08327505 +0x0b1:  mov    -0xc(%ebp),%eax
08327508 +0x0b4:  movl   $0x5,0x8(%esp)
08327510 +0x0bc:  movl   $"0707",0x4(%esp)
08327518 +0x0c4:  mov    %eax,(%esp)
0832751b +0x0c7:  call   0807d8a0 <_init+0x198>
08327520 +0x0cc:  mov    0xc(%ebp),%eax
08327523 +0x0cf:  mov    %eax,(%esp)
08327526 +0x0d2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0832752b +0x0d7:  mov    -0xc(%ebp),%edx
0832752e +0x0da:  mov    %eax,0x5(%edx)
08327531 +0x0dd:  movl   $0xffffffff,0x4(%esp)
08327539 +0x0e5:  mov    0xc(%ebp),%eax
0832753c +0x0e8:  mov    %eax,(%esp)
0832753f +0x0eb:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08327544 +0x0f0:  mov    -0xc(%ebp),%edx
08327547 +0x0f3:  mov    %eax,0x9(%edx)
0832754a +0x0f6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0832754f +0x0fb:  lea    -0x14(%ebp),%edx
08327552 +0x0fe:  mov    %edx,0x8(%esp)
08327556 +0x102:  movl   $0x4,0x4(%esp)
0832755e +0x10a:  mov    %eax,(%esp)
08327561 +0x10d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08327566 +0x112:  jmp    08327583 <+0x12f>
08327568 +0x114:  mov    %edx,%ebx
0832756a +0x116:  mov    %eax,%esi
0832756c +0x118:  lea    -0x14(%ebp),%eax
0832756f +0x11b:  mov    %eax,(%esp)
08327572 +0x11e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08327577 +0x123:  mov    %esi,%eax
08327579 +0x125:  mov    %ebx,%edx
0832757b +0x127:  mov    %eax,(%esp)
0832757e +0x12a:  call   08ae3750 <_Unwind_Resume>
08327583 +0x12f:  lea    -0x14(%ebp),%eax
08327586 +0x132:  mov    %eax,(%esp)
08327589 +0x135:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0832758e +0x13a:  mov    0x14(%ebp),%eax
08327591 +0x13d:  mov    %eax,0x4(%esp)
08327595 +0x141:  mov    0x8(%ebp),%eax
08327598 +0x144:  mov    %eax,(%esp)
0832759b +0x147:  call   083280dc <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x35>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x35
083275a0 +0x14c:  test   %al,%al
083275a2 +0x14e:  je     083275b7 <+0x163>
083275a4 +0x150:  mov    0xc(%ebp),%eax
083275a7 +0x153:  mov    %eax,(%esp)
083275aa +0x156:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
083275af +0x15b:  mov    %eax,(%esp)
083275b2 +0x15e:  call   0843c8b6 <_ZN31DB_UpdateChuseokPackagePurchase11makeRequestEj>  ; DB_UpdateChuseokPackagePurchase::makeRequest(unsigned int)
083275b7 +0x163:  add    $0x20,%esp
083275ba +0x166:  pop    %ebx
083275bb +0x167:  pop    %esi
083275bc +0x168:  pop    %ebp
083275bd +0x169:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_onBuySpecialItem @ 0x8327454

/* WongWork::CCeraShop::_onBuySpecialItem(CUser*, ENUM_CERA_SPECIALITEM, unsigned long) */

void __thiscall
WongWork::CCeraShop::_onBuySpecialItem
          (CCeraShop *this,CUser *param_1,undefined4 param_3,uint param_4)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  CStreamGuard local_18 [8];
  SIG_SAVE_CRAZY_LEVELUP_EVENT *local_10;
  
  if ((param_4 - 0x3f < 0xb) && ((1 << ((byte)(param_4 - 0x3f) & 0x1f) & 0x7dfU) != 0)) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x1971);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 083274cf to 08327565 has its CatchHandler @ 08327568 */
    CStreamGuard::operator<<(pCVar3,0xb4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CRAZY_LEVELUP_EVENT>(pCVar3);
    memcpy(local_10,&DAT_08c25e65,5);
    uVar4 = CUser::get_acc_id(param_1);
    *(undefined4 *)(local_10 + 5) = uVar4;
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 9) = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  cVar1 = Is2010ChuseokPacket(this,param_4);
  if (cVar1 != '\0') {
    uVar5 = CUser::get_acc_id(param_1);
    DB_UpdateChuseokPackagePurchase::makeRequest(uVar5);
  }
  return;
}
```
