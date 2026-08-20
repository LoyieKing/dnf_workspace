# dispatch

`_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream`

`DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCeraShopPurchaseCount` | `0x0844b0cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844b0cc  _ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream
#           DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)
# range [0x0844b0cc, 0x0844b31b]
0844b0cc +0x000:  push   %ebp
0844b0cd +0x001:  mov    %esp,%ebp
0844b0cf +0x003:  push   %esi
0844b0d0 +0x004:  push   %ebx
0844b0d1 +0x005:  sub    $0x50,%esp
0844b0d4 +0x008:  mov    0x14(%ebp),%eax
0844b0d7 +0x00b:  mov    %eax,(%esp)
0844b0da +0x00e:  call   084547a2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x73b8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x73b8
0844b0df +0x013:  mov    %eax,-0x10(%ebp)
0844b0e2 +0x016:  cmpl   $0x0,-0x10(%ebp)
0844b0e6 +0x01a:  jne    0844b128 <+0x5c>
0844b0e8 +0x01c:  movl   $0x5,0xc(%esp)
0844b0f0 +0x024:  movl   $0xbbac,0x8(%esp)
0844b0f8 +0x02c:  movl   $&_ZZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844b100 +0x034:  lea    -0x40(%ebp),%eax
0844b103 +0x037:  mov    %eax,(%esp)
0844b106 +0x03a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844b10b +0x03f:  movl   $"[PURCAHSE BONUS] ptrData is null.",0x4(%esp)
0844b113 +0x047:  lea    -0x40(%ebp),%eax
0844b116 +0x04a:  mov    %eax,(%esp)
0844b119 +0x04d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844b11e +0x052:  mov    $0x0,%ebx
0844b123 +0x057:  jmp    0844b312 <+0x246>
0844b128 +0x05c:  mov    -0x10(%ebp),%eax
0844b12b +0x05f:  lea    0x8(%eax),%edx
0844b12e +0x062:  mov    -0x10(%ebp),%eax
0844b131 +0x065:  mov    (%eax),%eax
0844b133 +0x067:  mov    %edx,0x8(%esp)
0844b137 +0x06b:  mov    %eax,0x4(%esp)
0844b13b +0x06f:  mov    0x8(%ebp),%eax
0844b13e +0x072:  mov    %eax,(%esp)
0844b141 +0x075:  call   0844b450 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt>  ; DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount(unsigned int, unsigned short&)
0844b146 +0x07a:  xor    $0x1,%eax
0844b149 +0x07d:  test   %al,%al
0844b14b +0x07f:  je     0844b18d <+0xc1>
0844b14d +0x081:  movl   $0x5,0xc(%esp)
0844b155 +0x089:  movl   $0xbbb2,0x8(%esp)
0844b15d +0x091:  movl   $&_ZZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844b165 +0x099:  lea    -0x30(%ebp),%eax
0844b168 +0x09c:  mov    %eax,(%esp)
0844b16b +0x09f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844b170 +0x0a4:  movl   $"[PURCAHSE BONUS] select query fail.",0x4(%esp)
0844b178 +0x0ac:  lea    -0x30(%ebp),%eax
0844b17b +0x0af:  mov    %eax,(%esp)
0844b17e +0x0b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844b183 +0x0b7:  mov    $0x0,%ebx
0844b188 +0x0bc:  jmp    0844b312 <+0x246>
0844b18d +0x0c1:  mov    -0x10(%ebp),%eax
0844b190 +0x0c4:  movzwl 0x8(%eax),%eax
0844b194 +0x0c8:  test   %ax,%ax
0844b197 +0x0cb:  jne    0844b1b8 <+0xec>
0844b199 +0x0cd:  mov    -0x10(%ebp),%eax
0844b19c +0x0d0:  movw   $0x1,0x8(%eax)
0844b1a2 +0x0d6:  mov    -0x10(%ebp),%eax
0844b1a5 +0x0d9:  mov    (%eax),%eax
0844b1a7 +0x0db:  mov    %eax,0x4(%esp)
0844b1ab +0x0df:  mov    0x8(%ebp),%eax
0844b1ae +0x0e2:  mov    %eax,(%esp)
0844b1b1 +0x0e5:  call   0844b808 <_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj>  ; DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount(unsigned int)
0844b1b6 +0x0ea:  jmp    0844b1eb <+0x11f>
0844b1b8 +0x0ec:  mov    -0x10(%ebp),%eax
0844b1bb +0x0ef:  movzwl 0x8(%eax),%eax
0844b1bf +0x0f3:  lea    0x1(%eax),%edx
0844b1c2 +0x0f6:  mov    -0x10(%ebp),%eax
0844b1c5 +0x0f9:  mov    %dx,0x8(%eax)
0844b1c9 +0x0fd:  mov    -0x10(%ebp),%eax
0844b1cc +0x100:  movzwl 0x8(%eax),%eax
0844b1d0 +0x104:  movzwl %ax,%edx
0844b1d3 +0x107:  mov    -0x10(%ebp),%eax
0844b1d6 +0x10a:  mov    (%eax),%eax
0844b1d8 +0x10c:  mov    %edx,0x8(%esp)
0844b1dc +0x110:  mov    %eax,0x4(%esp)
0844b1e0 +0x114:  mov    0x8(%ebp),%eax
0844b1e3 +0x117:  mov    %eax,(%esp)
0844b1e6 +0x11a:  call   0844b680 <_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt>  ; DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount(unsigned int, unsigned short)
0844b1eb +0x11f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844b1f0 +0x124:  movl   $0xbbc1,0x8(%esp)
0844b1f8 +0x12c:  movl   $"DBThread.cpp",0x4(%esp)
0844b200 +0x134:  mov    %eax,(%esp)
0844b203 +0x137:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844b208 +0x13c:  movl   $0x1,0x8(%esp)
0844b210 +0x144:  mov    %eax,0x4(%esp)
0844b214 +0x148:  lea    -0x48(%ebp),%eax
0844b217 +0x14b:  mov    %eax,(%esp)
0844b21a +0x14e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844b21f +0x153:  lea    -0x48(%ebp),%eax
0844b222 +0x156:  mov    %eax,(%esp)
0844b225 +0x159:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b22a +0x15e:  movl   $0x2d9,0x4(%esp)
0844b232 +0x166:  mov    %eax,(%esp)
0844b235 +0x169:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844b23a +0x16e:  lea    -0x48(%ebp),%eax
0844b23d +0x171:  mov    %eax,(%esp)
0844b240 +0x174:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b245 +0x179:  mov    0x10(%ebp),%edx
0844b248 +0x17c:  mov    %edx,0x4(%esp)
0844b24c +0x180:  mov    %eax,(%esp)
0844b24f +0x183:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844b254 +0x188:  lea    -0x48(%ebp),%eax
0844b257 +0x18b:  mov    %eax,(%esp)
0844b25a +0x18e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844b25f +0x193:  mov    %eax,(%esp)
0844b262 +0x196:  call   084547f6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x740c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x740c
0844b267 +0x19b:  mov    %eax,-0xc(%ebp)
0844b26a +0x19e:  cmpl   $0x0,-0xc(%ebp)
0844b26e +0x1a2:  jne    0844b2ad <+0x1e1>
0844b270 +0x1a4:  movl   $0x5,0xc(%esp)
0844b278 +0x1ac:  movl   $0xbbc9,0x8(%esp)
0844b280 +0x1b4:  movl   $&_ZZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844b288 +0x1bc:  lea    -0x20(%ebp),%eax
0844b28b +0x1bf:  mov    %eax,(%esp)
0844b28e +0x1c2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844b293 +0x1c7:  movl   $"[PURCAHSE BONUS] ptrData is null",0x4(%esp)
0844b29b +0x1cf:  lea    -0x20(%ebp),%eax
0844b29e +0x1d2:  mov    %eax,(%esp)
0844b2a1 +0x1d5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844b2a6 +0x1da:  mov    $0x0,%ebx
0844b2ab +0x1df:  jmp    0844b307 <+0x23b>
0844b2ad +0x1e1:  mov    -0xc(%ebp),%eax
0844b2b0 +0x1e4:  mov    -0x10(%ebp),%edx
0844b2b3 +0x1e7:  mov    (%edx),%ecx
0844b2b5 +0x1e9:  mov    %ecx,(%eax)
0844b2b7 +0x1eb:  mov    0x4(%edx),%ecx
0844b2ba +0x1ee:  mov    %ecx,0x4(%eax)
0844b2bd +0x1f1:  mov    0x8(%edx),%ecx
0844b2c0 +0x1f4:  mov    %ecx,0x8(%eax)
0844b2c3 +0x1f7:  mov    0xc(%edx),%edx
0844b2c6 +0x1fa:  mov    %edx,0xc(%eax)
0844b2c9 +0x1fd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844b2ce +0x202:  lea    -0x48(%ebp),%edx
0844b2d1 +0x205:  mov    %edx,0x8(%esp)
0844b2d5 +0x209:  movl   $0x1,0x4(%esp)
0844b2dd +0x211:  mov    %eax,(%esp)
0844b2e0 +0x214:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844b2e5 +0x219:  mov    $0x1,%ebx
0844b2ea +0x21e:  jmp    0844b307 <+0x23b>
0844b2ec +0x220:  mov    %edx,%ebx
0844b2ee +0x222:  mov    %eax,%esi
0844b2f0 +0x224:  lea    -0x48(%ebp),%eax
0844b2f3 +0x227:  mov    %eax,(%esp)
0844b2f6 +0x22a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844b2fb +0x22f:  mov    %esi,%eax
0844b2fd +0x231:  mov    %ebx,%edx
0844b2ff +0x233:  mov    %eax,(%esp)
0844b302 +0x236:  call   08ae3750 <_Unwind_Resume>
0844b307 +0x23b:  lea    -0x48(%ebp),%eax
0844b30a +0x23e:  mov    %eax,(%esp)
0844b30d +0x241:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844b312 +0x246:  mov    %ebx,%eax
0844b314 +0x248:  add    $0x50,%esp
0844b317 +0x24b:  pop    %ebx
0844b318 +0x24c:  pop    %esi
0844b319 +0x24d:  pop    %ebp
0844b31a +0x24e:  ret
0844b31b +0x24f:  nop
```

## 反编译 C

```c
// DB_UpdateCeraShopPurchaseCount::dispatch @ 0x844b0cc

/* DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*) */

bool __thiscall
DB_UpdateCeraShopPurchaseCount::dispatch
          (DB_UpdateCeraShopPurchaseCount *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  bool bVar4;
  CStreamGuard local_4c [8];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  SIG_CERASHOP_PURCHASE_COUNT *local_14;
  SIG_CERASHOP_PURCHASE_COUNT *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_CERASHOP_PURCHASE_COUNT>(param_3);
  if (local_14 == (SIG_CERASHOP_PURCHASE_COUNT *)0x0) {
    cMyTrace::cMyTrace(local_44,
                       "virtual bool DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)",
                       0xbbac,5);
    cMyTrace::operator()(local_44,"[PURCAHSE BONUS] ptrData is null.");
    bVar4 = false;
  }
  else {
    cVar1 = _selectPurchaseCount(this,*(uint *)local_14,(ushort *)(local_14 + 8));
    if (cVar1 == '\x01') {
      if (*(short *)(local_14 + 8) == 0) {
        *(undefined2 *)(local_14 + 8) = 1;
        _insertPurchaseCount(this,*(uint *)local_14);
      }
      else {
        *(short *)(local_14 + 8) = *(short *)(local_14 + 8) + 1;
        _updatePurchaseCount(this,*(uint *)local_14,*(ushort *)(local_14 + 8));
      }
      pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbbc1);
      CStreamGuard::CStreamGuard(local_4c,pSVar2,true);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 0844b235 to 0844b2e4 has its CatchHandler @ 0844b2ec */
      CStreamGuard::operator<<(pCVar3,0x2d9);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
      CStreamGuard::operator<<(pCVar3,param_2);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
      local_10 = CStreamGuard::GetInBuffer<SIG_CERASHOP_PURCHASE_COUNT>(pCVar3);
      bVar4 = local_10 != (SIG_CERASHOP_PURCHASE_COUNT *)0x0;
      if (bVar4) {
        *(uint *)local_10 = *(uint *)local_14;
        *(uint *)(local_10 + 4) = *(uint *)(local_14 + 4);
        *(uint *)(local_10 + 8) = *(uint *)(local_14 + 8);
        *(uint *)(local_10 + 0xc) = *(uint *)(local_14 + 0xc);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
      }
      else {
        cMyTrace::cMyTrace(local_24,
                           "virtual bool DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)"
                           ,0xbbc9,5);
        cMyTrace::operator()(local_24,"[PURCAHSE BONUS] ptrData is null");
      }
      CStreamGuard::~CStreamGuard(local_4c);
    }
    else {
      cMyTrace::cMyTrace(local_34,
                         "virtual bool DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)",
                         0xbbb2,5);
      cMyTrace::operator()(local_34,"[PURCAHSE BONUS] select query fail.");
      bVar4 = false;
    }
  }
  return bVar4;
}
```
