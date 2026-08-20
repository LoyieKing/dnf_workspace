# _saveData

`_ZN11Redeem_Item11CRedeemItem9_saveDataEP5CUser`

`Redeem_Item::CRedeemItem::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f7998` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f7998  _ZN11Redeem_Item11CRedeemItem9_saveDataEP5CUser
#           Redeem_Item::CRedeemItem::_saveData(CUser*)
# range [0x085f7998, 0x085f7b6d]
085f7998 +0x000:  push   %ebp
085f7999 +0x001:  mov    %esp,%ebp
085f799b +0x003:  push   %edi
085f799c +0x004:  push   %esi
085f799d +0x005:  push   %ebx
085f799e +0x006:  sub    $0x3c,%esp
085f79a1 +0x009:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085f79a6 +0x00e:  movl   $0x108,0x8(%esp)
085f79ae +0x016:  movl   $"RedeemItem.cpp",0x4(%esp)
085f79b6 +0x01e:  mov    %eax,(%esp)
085f79b9 +0x021:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085f79be +0x026:  movl   $0x1,0x8(%esp)
085f79c6 +0x02e:  mov    %eax,0x4(%esp)
085f79ca +0x032:  lea    -0x2c(%ebp),%eax
085f79cd +0x035:  mov    %eax,(%esp)
085f79d0 +0x038:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085f79d5 +0x03d:  lea    -0x2c(%ebp),%eax
085f79d8 +0x040:  mov    %eax,(%esp)
085f79db +0x043:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085f79e0 +0x048:  movl   $0x1f4,0x4(%esp)
085f79e8 +0x050:  mov    %eax,(%esp)
085f79eb +0x053:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085f79f0 +0x058:  mov    0xc(%ebp),%eax
085f79f3 +0x05b:  mov    %eax,(%esp)
085f79f6 +0x05e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085f79fb +0x063:  mov    %eax,%ebx
085f79fd +0x065:  lea    -0x2c(%ebp),%eax
085f7a00 +0x068:  mov    %eax,(%esp)
085f7a03 +0x06b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085f7a08 +0x070:  mov    %ebx,0x4(%esp)
085f7a0c +0x074:  mov    %eax,(%esp)
085f7a0f +0x077:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085f7a14 +0x07c:  lea    -0x2c(%ebp),%eax
085f7a17 +0x07f:  mov    %eax,(%esp)
085f7a1a +0x082:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085f7a1f +0x087:  mov    %eax,(%esp)
085f7a22 +0x08a:  call   085f7f7e <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x3ba>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x3ba
085f7a27 +0x08f:  mov    %eax,-0x20(%ebp)
085f7a2a +0x092:  cmpl   $0x0,-0x20(%ebp)
085f7a2e +0x096:  jne    085f7a3a <+0xa2>
085f7a30 +0x098:  mov    $0x0,%ebx
085f7a35 +0x09d:  jmp    085f7b55 <+0x1bd>
085f7a3a +0x0a2:  movl   $0x59c,0x8(%esp)
085f7a42 +0x0aa:  movl   $0x0,0x4(%esp)
085f7a4a +0x0b2:  mov    -0x20(%ebp),%eax
085f7a4d +0x0b5:  mov    %eax,(%esp)
085f7a50 +0x0b8:  call   0807dcc0 <_init+0x5b8>
085f7a55 +0x0bd:  movl   $0xffffffff,0x4(%esp)
085f7a5d +0x0c5:  mov    0xc(%ebp),%eax
085f7a60 +0x0c8:  mov    %eax,(%esp)
085f7a63 +0x0cb:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085f7a68 +0x0d0:  mov    %eax,%edx
085f7a6a +0x0d2:  mov    -0x20(%ebp),%eax
085f7a6d +0x0d5:  mov    %edx,(%eax)
085f7a6f +0x0d7:  mov    0x8(%ebp),%eax
085f7a72 +0x0da:  add    $0x8,%eax
085f7a75 +0x0dd:  mov    %eax,(%esp)
085f7a78 +0x0e0:  call   085f7cac <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0xe8>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0xe8
085f7a7d +0x0e5:  mov    -0x20(%ebp),%edx
085f7a80 +0x0e8:  mov    %eax,0x4(%edx)
085f7a83 +0x0eb:  movl   $0x0,-0x1c(%ebp)
085f7a8a +0x0f2:  mov    0x8(%ebp),%eax
085f7a8d +0x0f5:  lea    0x8(%eax),%edx
085f7a90 +0x0f8:  lea    -0x30(%ebp),%eax
085f7a93 +0x0fb:  mov    %edx,0x4(%esp)
085f7a97 +0x0ff:  mov    %eax,(%esp)
085f7a9a +0x102:  call   085f7ddc <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x218>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x218
085f7a9f +0x107:  sub    $0x4,%esp
085f7aa2 +0x10a:  jmp    085f7ae9 <+0x151>
085f7aa4 +0x10c:  mov    -0x1c(%ebp),%eax
085f7aa7 +0x10f:  mov    %eax,%ebx
085f7aa9 +0x111:  lea    -0x30(%ebp),%eax
085f7aac +0x114:  mov    %eax,(%esp)
085f7aaf +0x117:  call   085f7ebe <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2fa>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2fa
085f7ab4 +0x11c:  mov    %eax,%edx
085f7ab6 +0x11e:  mov    -0x20(%ebp),%ecx
085f7ab9 +0x121:  mov    %ebx,%eax
085f7abb +0x123:  shl    $0x2,%eax
085f7abe +0x126:  mov    %eax,%ebx
085f7ac0 +0x128:  shl    $0x4,%ebx
085f7ac3 +0x12b:  add    %ebx,%eax
085f7ac5 +0x12d:  lea    (%ecx,%eax,1),%eax
085f7ac8 +0x130:  add    $0x8,%eax
085f7acb +0x133:  mov    %edx,%ebx
085f7acd +0x135:  mov    $0x11,%edx
085f7ad2 +0x13a:  mov    %eax,%edi
085f7ad4 +0x13c:  mov    %ebx,%esi
085f7ad6 +0x13e:  mov    %edx,%ecx
085f7ad8 +0x140:  rep movsl %ds:(%esi),%es:(%edi)
085f7ada +0x142:  addl   $0x1,-0x1c(%ebp)
085f7ade +0x146:  lea    -0x30(%ebp),%eax
085f7ae1 +0x149:  mov    %eax,(%esp)
085f7ae4 +0x14c:  call   085f7f26 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x362>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x362
085f7ae9 +0x151:  mov    0x8(%ebp),%eax
085f7aec +0x154:  lea    0x8(%eax),%edx
085f7aef +0x157:  lea    -0x24(%ebp),%eax
085f7af2 +0x15a:  mov    %edx,0x4(%esp)
085f7af6 +0x15e:  mov    %eax,(%esp)
085f7af9 +0x161:  call   085f7e86 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2c2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2c2
085f7afe +0x166:  sub    $0x4,%esp
085f7b01 +0x169:  lea    -0x24(%ebp),%eax
085f7b04 +0x16c:  mov    %eax,0x4(%esp)
085f7b08 +0x170:  lea    -0x30(%ebp),%eax
085f7b0b +0x173:  mov    %eax,(%esp)
085f7b0e +0x176:  call   085f7eaa <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2e6>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2e6
085f7b13 +0x17b:  test   %al,%al
085f7b15 +0x17d:  jne    085f7aa4 <+0x10c>
085f7b17 +0x17f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085f7b1c +0x184:  lea    -0x2c(%ebp),%edx
085f7b1f +0x187:  mov    %edx,0x8(%esp)
085f7b23 +0x18b:  movl   $0x2,0x4(%esp)
085f7b2b +0x193:  mov    %eax,(%esp)
085f7b2e +0x196:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085f7b33 +0x19b:  mov    $0x1,%ebx
085f7b38 +0x1a0:  jmp    085f7b55 <+0x1bd>
085f7b3a +0x1a2:  mov    %edx,%ebx
085f7b3c +0x1a4:  mov    %eax,%esi
085f7b3e +0x1a6:  lea    -0x2c(%ebp),%eax
085f7b41 +0x1a9:  mov    %eax,(%esp)
085f7b44 +0x1ac:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085f7b49 +0x1b1:  mov    %esi,%eax
085f7b4b +0x1b3:  mov    %ebx,%edx
085f7b4d +0x1b5:  mov    %eax,(%esp)
085f7b50 +0x1b8:  call   08ae3750 <_Unwind_Resume>
085f7b55 +0x1bd:  lea    -0x2c(%ebp),%eax
085f7b58 +0x1c0:  mov    %eax,(%esp)
085f7b5b +0x1c3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085f7b60 +0x1c8:  mov    %ebx,%eax
085f7b62 +0x1ca:  lea    -0xc(%ebp),%esp
085f7b65 +0x1cd:  add    $0x0,%esp
085f7b68 +0x1d0:  pop    %ebx
085f7b69 +0x1d1:  pop    %esi
085f7b6a +0x1d2:  pop    %edi
085f7b6b +0x1d3:  pop    %ebp
085f7b6c +0x1d4:  ret
085f7b6d +0x1d5:  nop
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::_saveData @ 0x85f7998

/* Redeem_Item::CRedeemItem::_saveData(CUser*) */

undefined4 __thiscall Redeem_Item::CRedeemItem::_saveData(CRedeemItem *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  SIG_REDEEMINFO_LIST_TO_DB *pSVar8;
  byte bVar9;
  _List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_34 [4];
  CStreamGuard local_30 [8];
  _List_iterator local_28 [4];
  SIG_REDEEMINFO_LIST_TO_DB *local_24;
  int local_20;
  
  bVar9 = 0;
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"RedeemItem.cpp",0x108);
  CStreamGuard::CStreamGuard(local_30,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 085f79eb to 085f7b32 has its CatchHandler @ 085f7b3a */
  CStreamGuard::operator<<(pCVar3,500);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
  local_24 = CStreamGuard::GetInBuffer<SIG_REDEEMINFO_LIST_TO_DB>(pCVar3);
  if (local_24 == (SIG_REDEEMINFO_LIST_TO_DB *)0x0) {
    uVar7 = 0;
  }
  else {
    memset(local_24,0,0x59c);
    uVar7 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_24 = uVar7;
    uVar7 = std::
            list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
            ::size();
    *(undefined4 *)(local_24 + 4) = uVar7;
    local_20 = 0;
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::begin();
    while( true ) {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::end();
      cVar1 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                        (local_34,local_28);
      iVar4 = local_20;
      if (cVar1 == '\0') break;
      puVar5 = (undefined4 *)
               std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*(local_34);
      pSVar8 = local_24 + iVar4 * 0x44 + 8;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pSVar8 = *puVar5;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
        pSVar8 = pSVar8 + (uint)bVar9 * -8 + 4;
      }
      local_20 = local_20 + 1;
      std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++(local_34);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
    uVar7 = 1;
  }
  CStreamGuard::~CStreamGuard(local_30);
  return uVar7;
}
```
