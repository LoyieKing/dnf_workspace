# LogError

`_ZNK8WongWork9CCeraShop8LogErrorERKNS0_17stErrorLogInput_tE`

`WongWork::CCeraShop::LogError(WongWork::CCeraShop::stErrorLogInput_t const&) const`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x0832033a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832033a  _ZNK8WongWork9CCeraShop8LogErrorERKNS0_17stErrorLogInput_tE
#           WongWork::CCeraShop::LogError(WongWork::CCeraShop::stErrorLogInput_t const&) const
# range [0x0832033a, 0x08320479]
0832033a +0x000:  push   %ebp
0832033b +0x001:  mov    %esp,%ebp
0832033d +0x003:  push   %esi
0832033e +0x004:  push   %ebx
0832033f +0x005:  sub    $0x40,%esp
08320342 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08320347 +0x00d:  movl   $0x7a,0x8(%esp)
0832034f +0x015:  movl   $"CeraShop.cpp",0x4(%esp)
08320357 +0x01d:  mov    %eax,(%esp)
0832035a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0832035f +0x025:  movl   $0x1,0x8(%esp)
08320367 +0x02d:  mov    %eax,0x4(%esp)
0832036b +0x031:  lea    -0x10(%ebp),%eax
0832036e +0x034:  mov    %eax,(%esp)
08320371 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08320376 +0x03c:  lea    -0x10(%ebp),%eax
08320379 +0x03f:  mov    %eax,(%esp)
0832037c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08320381 +0x047:  movl   $0x32e,0x4(%esp)
08320389 +0x04f:  mov    %eax,(%esp)
0832038c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08320391 +0x057:  mov    0xc(%ebp),%eax
08320394 +0x05a:  mov    (%eax),%ebx
08320396 +0x05c:  lea    -0x10(%ebp),%eax
08320399 +0x05f:  mov    %eax,(%esp)
0832039c +0x062:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
083203a1 +0x067:  mov    %ebx,0x4(%esp)
083203a5 +0x06b:  mov    %eax,(%esp)
083203a8 +0x06e:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
083203ad +0x073:  lea    -0x2c(%ebp),%eax
083203b0 +0x076:  mov    %eax,(%esp)
083203b3 +0x079:  call   08328110 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x69>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x69
083203b8 +0x07e:  mov    0xc(%ebp),%eax
083203bb +0x081:  mov    (%eax),%eax
083203bd +0x083:  mov    %eax,-0x2c(%ebp)
083203c0 +0x086:  mov    0xc(%ebp),%eax
083203c3 +0x089:  mov    0x4(%eax),%eax
083203c6 +0x08c:  mov    %eax,-0x28(%ebp)
083203c9 +0x08f:  mov    0xc(%ebp),%eax
083203cc +0x092:  mov    0x8(%eax),%eax
083203cf +0x095:  mov    %eax,-0x18(%ebp)
083203d2 +0x098:  mov    0xc(%ebp),%eax
083203d5 +0x09b:  movzwl 0x10(%eax),%eax
083203d9 +0x09f:  mov    %ax,-0x1c(%ebp)
083203dd +0x0a3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
083203e2 +0x0a8:  mov    0x378(%eax),%eax
083203e8 +0x0ae:  movzbl %al,%eax
083203eb +0x0b1:  mov    %eax,-0x24(%ebp)
083203ee +0x0b4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
083203f3 +0x0b9:  mov    %eax,(%esp)
083203f6 +0x0bc:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
083203fb +0x0c1:  mov    %eax,-0x20(%ebp)
083203fe +0x0c4:  mov    0xc(%ebp),%eax
08320401 +0x0c7:  mov    0xc(%eax),%eax
08320404 +0x0ca:  mov    %eax,-0x14(%ebp)
08320407 +0x0cd:  lea    -0x10(%ebp),%eax
0832040a +0x0d0:  mov    %eax,(%esp)
0832040d +0x0d3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08320412 +0x0d8:  movl   $0x1c,0x8(%esp)
0832041a +0x0e0:  lea    -0x2c(%ebp),%edx
0832041d +0x0e3:  mov    %edx,0x4(%esp)
08320421 +0x0e7:  mov    %eax,(%esp)
08320424 +0x0ea:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08320429 +0x0ef:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0832042e +0x0f4:  lea    -0x10(%ebp),%edx
08320431 +0x0f7:  mov    %edx,0x8(%esp)
08320435 +0x0fb:  movl   $0x2,0x4(%esp)
0832043d +0x103:  mov    %eax,(%esp)
08320440 +0x106:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08320445 +0x10b:  mov    $0x1,%ebx
0832044a +0x110:  lea    -0x10(%ebp),%eax
0832044d +0x113:  mov    %eax,(%esp)
08320450 +0x116:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08320455 +0x11b:  mov    %ebx,%eax
08320457 +0x11d:  add    $0x40,%esp
0832045a +0x120:  pop    %ebx
0832045b +0x121:  pop    %esi
0832045c +0x122:  pop    %ebp
0832045d +0x123:  ret
0832045e +0x124:  mov    %edx,%ebx
08320460 +0x126:  mov    %eax,%esi
08320462 +0x128:  lea    -0x10(%ebp),%eax
08320465 +0x12b:  mov    %eax,(%esp)
08320468 +0x12e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0832046d +0x133:  mov    %esi,%eax
0832046f +0x135:  mov    %ebx,%edx
08320471 +0x137:  mov    %eax,(%esp)
08320474 +0x13a:  call   08ae3750 <_Unwind_Resume>
08320479 +0x13f:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::LogError @ 0x832033a

/* WongWork::CCeraShop::LogError(WongWork::CCeraShop::stErrorLogInput_t const&) const */

undefined4 __thiscall WongWork::CCeraShop::LogError(CCeraShop *this,stErrorLogInput_t *param_1)

{
  uint uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  CEnvironment *this_00;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CStreamGuard local_14 [8];
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x7a);
  CStreamGuard::CStreamGuard(local_14,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0832038c to 08320444 has its CatchHandler @ 0832045e */
  CStreamGuard::operator<<(pCVar3,0x32e);
  uVar1 = *(uint *)param_1;
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,uVar1);
  SIG_CERASHOP_ERROR_LOG::SIG_CERASHOP_ERROR_LOG((SIG_CERASHOP_ERROR_LOG *)&local_30);
  local_30 = *(undefined4 *)param_1;
  local_2c = *(undefined4 *)(param_1 + 4);
  local_1c = *(undefined4 *)(param_1 + 8);
  local_20 = *(undefined2 *)(param_1 + 0x10);
  iVar4 = G_CEnvironment();
  local_28 = *(uint *)(iVar4 + 0x378) & 0xff;
  this_00 = (CEnvironment *)G_CEnvironment();
  local_24 = CEnvironment::get_channel_no(this_00);
  local_18 = *(undefined4 *)(param_1 + 0xc);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar3,&local_30,0x1c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
