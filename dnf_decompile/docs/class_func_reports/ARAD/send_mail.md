# send_mail

`_ZN4ARAD9send_mailERN10ARAD_DATAS12AradMailInfoE`

`ARAD::send_mail(ARAD_DATAS::AradMailInfo&)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x08196b03` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196b03  _ZN4ARAD9send_mailERN10ARAD_DATAS12AradMailInfoE
#           ARAD::send_mail(ARAD_DATAS::AradMailInfo&)
# range [0x08196b03, 0x08196d15]
08196b03 +0x000:  push   %ebp
08196b04 +0x001:  mov    %esp,%ebp
08196b06 +0x003:  push   %esi
08196b07 +0x004:  push   %ebx
08196b08 +0x005:  sub    $0x30,%esp
08196b0b +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08196b10 +0x00d:  movl   $0x3a,0x8(%esp)
08196b18 +0x015:  movl   $"localjapan/Arad_Function_Set.cpp",0x4(%esp)
08196b20 +0x01d:  mov    %eax,(%esp)
08196b23 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08196b28 +0x025:  movl   $0x1,0x8(%esp)
08196b30 +0x02d:  mov    %eax,0x4(%esp)
08196b34 +0x031:  lea    -0x1c(%ebp),%eax
08196b37 +0x034:  mov    %eax,(%esp)
08196b3a +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08196b3f +0x03c:  lea    -0x1c(%ebp),%eax
08196b42 +0x03f:  mov    %eax,(%esp)
08196b45 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08196b4a +0x047:  movl   $0x80,0x4(%esp)
08196b52 +0x04f:  mov    %eax,(%esp)
08196b55 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08196b5a +0x057:  lea    -0x1c(%ebp),%eax
08196b5d +0x05a:  mov    %eax,(%esp)
08196b60 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08196b65 +0x062:  movl   $0xffffffff,0x4(%esp)
08196b6d +0x06a:  mov    %eax,(%esp)
08196b70 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08196b75 +0x072:  lea    -0x1c(%ebp),%eax
08196b78 +0x075:  mov    %eax,(%esp)
08196b7b +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08196b80 +0x07d:  mov    %eax,(%esp)
08196b83 +0x080:  call   08197f8e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x199>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x199
08196b88 +0x085:  mov    %eax,-0x14(%ebp)
08196b8b +0x088:  mov    0x8(%ebp),%eax
08196b8e +0x08b:  mov    0xc(%eax),%edx
08196b91 +0x08e:  mov    -0x14(%ebp),%eax
08196b94 +0x091:  mov    %edx,0x22(%eax)
08196b97 +0x094:  mov    0x8(%ebp),%eax
08196b9a +0x097:  mov    0x10(%eax),%edx
08196b9d +0x09a:  mov    -0x14(%ebp),%eax
08196ba0 +0x09d:  mov    %edx,0x1e(%eax)
08196ba3 +0x0a0:  mov    0x8(%ebp),%eax
08196ba6 +0x0a3:  movzbl (%eax),%eax
08196ba9 +0x0a6:  movzbl %al,%edx
08196bac +0x0a9:  mov    -0x14(%ebp),%eax
08196baf +0x0ac:  mov    %edx,0x15f(%eax)
08196bb5 +0x0b2:  mov    0x8(%ebp),%eax
08196bb8 +0x0b5:  mov    0x8(%eax),%edx
08196bbb +0x0b8:  mov    -0x14(%ebp),%eax
08196bbe +0x0bb:  mov    %edx,0x15b(%eax)
08196bc4 +0x0c1:  mov    0x8(%ebp),%eax
08196bc7 +0x0c4:  mov    0x4(%eax),%edx
08196bca +0x0c7:  mov    -0x14(%ebp),%eax
08196bcd +0x0ca:  mov    %edx,0x26(%eax)
08196bd0 +0x0cd:  mov    0x8(%ebp),%eax
08196bd3 +0x0d0:  mov    0x14(%eax),%eax
08196bd6 +0x0d3:  mov    %eax,%edx
08196bd8 +0x0d5:  mov    -0x14(%ebp),%eax
08196bdb +0x0d8:  mov    %dx,0x59(%eax)
08196bdf +0x0dc:  mov    -0x14(%ebp),%eax
08196be2 +0x0df:  add    $0x5b,%eax
08196be5 +0x0e2:  movl   $0x100,0x8(%esp)
08196bed +0x0ea:  movl   $0x0,0x4(%esp)
08196bf5 +0x0f2:  mov    %eax,(%esp)
08196bf8 +0x0f5:  call   0807dcc0 <_init+0x5b8>
08196bfd +0x0fa:  mov    0x8(%ebp),%eax
08196c00 +0x0fd:  mov    0x1c(%eax),%edx
08196c03 +0x100:  mov    -0x14(%ebp),%eax
08196c06 +0x103:  movl   $0x1d,0x8(%esp)
08196c0e +0x10b:  mov    %edx,0x4(%esp)
08196c12 +0x10f:  mov    %eax,(%esp)
08196c15 +0x112:  call   0807d8d0 <_init+0x1c8>
08196c1a +0x117:  mov    0x8(%ebp),%eax
08196c1d +0x11a:  mov    0x18(%eax),%eax
08196c20 +0x11d:  test   %eax,%eax
08196c22 +0x11f:  je     08196c54 <+0x151>
08196c24 +0x121:  mov    0x8(%ebp),%eax
08196c27 +0x124:  mov    0x18(%eax),%eax
08196c2a +0x127:  mov    %eax,(%esp)
08196c2d +0x12a:  call   0807e3b0 <_init+0xca8>
08196c32 +0x12f:  mov    %eax,-0xc(%ebp)
08196c35 +0x132:  mov    -0xc(%ebp),%edx
08196c38 +0x135:  mov    0x8(%ebp),%eax
08196c3b +0x138:  mov    0x18(%eax),%eax
08196c3e +0x13b:  mov    -0x14(%ebp),%ecx
08196c41 +0x13e:  add    $0x5b,%ecx
08196c44 +0x141:  mov    %edx,0x8(%esp)
08196c48 +0x145:  mov    %eax,0x4(%esp)
08196c4c +0x149:  mov    %ecx,(%esp)
08196c4f +0x14c:  call   0807d8d0 <_init+0x1c8>
08196c54 +0x151:  mov    0x8(%ebp),%eax
08196c57 +0x154:  add    $0x20,%eax
08196c5a +0x157:  mov    %eax,-0x10(%ebp)
08196c5d +0x15a:  mov    -0x10(%ebp),%eax
08196c60 +0x15d:  movzbl (%eax),%edx
08196c63 +0x160:  mov    -0x14(%ebp),%eax
08196c66 +0x163:  mov    %dl,0x2a(%eax)
08196c69 +0x166:  mov    -0x10(%ebp),%eax
08196c6c +0x169:  mov    0xc(%eax),%edx
08196c6f +0x16c:  mov    -0x14(%ebp),%eax
08196c72 +0x16f:  mov    %edx,0x2b(%eax)
08196c75 +0x172:  mov    -0x10(%ebp),%eax
08196c78 +0x175:  mov    0x4(%eax),%edx
08196c7b +0x178:  mov    -0x14(%ebp),%eax
08196c7e +0x17b:  mov    %edx,0x2f(%eax)
08196c81 +0x17e:  mov    -0x10(%ebp),%eax
08196c84 +0x181:  movzwl 0xa(%eax),%edx
08196c88 +0x185:  mov    -0x14(%ebp),%eax
08196c8b +0x188:  mov    %dx,0x34(%eax)
08196c8f +0x18c:  mov    -0x10(%ebp),%eax
08196c92 +0x18f:  mov    %eax,(%esp)
08196c95 +0x192:  call   08197e12 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x1d>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x1d
08196c9a +0x197:  mov    -0x14(%ebp),%edx
08196c9d +0x19a:  mov    %al,0x33(%edx)
08196ca0 +0x19d:  mov    -0x10(%ebp),%eax
08196ca3 +0x1a0:  mov    0x10(%eax),%edx
08196ca6 +0x1a3:  mov    -0x14(%ebp),%eax
08196ca9 +0x1a6:  mov    %edx,0x36(%eax)
08196cac +0x1a9:  mov    -0x14(%ebp),%eax
08196caf +0x1ac:  movb   $0x0,0x44(%eax)
08196cb3 +0x1b0:  mov    -0x14(%ebp),%eax
08196cb6 +0x1b3:  movw   $0x0,0x45(%eax)
08196cbc +0x1b9:  mov    -0x14(%ebp),%eax
08196cbf +0x1bc:  movb   $0x0,0x58(%eax)
08196cc3 +0x1c0:  mov    -0x14(%ebp),%eax
08196cc6 +0x1c3:  movb   $0x0,0x56(%eax)
08196cca +0x1c7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08196ccf +0x1cc:  lea    -0x1c(%ebp),%edx
08196cd2 +0x1cf:  mov    %edx,0x8(%esp)
08196cd6 +0x1d3:  movl   $0x2,0x4(%esp)
08196cde +0x1db:  mov    %eax,(%esp)
08196ce1 +0x1de:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08196ce6 +0x1e3:  mov    $0x1,%ebx
08196ceb +0x1e8:  lea    -0x1c(%ebp),%eax
08196cee +0x1eb:  mov    %eax,(%esp)
08196cf1 +0x1ee:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08196cf6 +0x1f3:  mov    %ebx,%eax
08196cf8 +0x1f5:  add    $0x30,%esp
08196cfb +0x1f8:  pop    %ebx
08196cfc +0x1f9:  pop    %esi
08196cfd +0x1fa:  pop    %ebp
08196cfe +0x1fb:  ret
08196cff +0x1fc:  mov    %edx,%ebx
08196d01 +0x1fe:  mov    %eax,%esi
08196d03 +0x200:  lea    -0x1c(%ebp),%eax
08196d06 +0x203:  mov    %eax,(%esp)
08196d09 +0x206:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08196d0e +0x20b:  mov    %esi,%eax
08196d10 +0x20d:  mov    %ebx,%edx
08196d12 +0x20f:  mov    %eax,(%esp)
08196d15 +0x212:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ARAD::send_mail @ 0x8196b03

/* ARAD::send_mail(ARAD_DATAS::AradMailInfo&) */

undefined4 ARAD::send_mail(AradMailInfo *param_1)

{
  SIG_MAILBOX_SEND_NEW_MAIL SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_20 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_18;
  AradMailItemInfo *local_14;
  size_t local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_Function_Set.cpp",0x3a);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08196b55 to 08196ce5 has its CatchHandler @ 08196cff */
  CStreamGuard::operator<<(pCVar3,0x80);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_18 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar3);
  *(undefined4 *)(local_18 + 0x22) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(local_18 + 0x1e) = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(local_18 + 0x15f) = (uint)(byte)*param_1;
  *(undefined4 *)(local_18 + 0x15b) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(local_18 + 0x26) = *(undefined4 *)(param_1 + 4);
  *(short *)(local_18 + 0x59) = (short)*(undefined4 *)(param_1 + 0x14);
  memset(local_18 + 0x5b,0,0x100);
  strncpy((char *)local_18,*(char **)(param_1 + 0x1c),0x1d);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_10 = strlen(*(char **)(param_1 + 0x18));
    strncpy((char *)(local_18 + 0x5b),*(char **)(param_1 + 0x18),local_10);
  }
  local_14 = (AradMailItemInfo *)(param_1 + 0x20);
  local_18[0x2a] = *(SIG_MAILBOX_SEND_NEW_MAIL *)local_14;
  *(undefined4 *)(local_18 + 0x2b) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(local_18 + 0x2f) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(local_18 + 0x34) = *(undefined2 *)(param_1 + 0x2a);
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)ARAD_DATAS::AradMailItemInfo::GetItemAttr(local_14);
  local_18[0x33] = SVar1;
  *(undefined4 *)(local_18 + 0x36) = *(undefined4 *)(local_14 + 0x10);
  local_18[0x44] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  *(undefined2 *)(local_18 + 0x45) = 0;
  local_18[0x58] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  local_18[0x56] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}
```
