# operator()

`_ZN4ARAD17FnRewardInterfaceclEimsj`

`ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)`

| 类 | 地址 |
|---|---|
| `ARAD::FnRewardInterface` | `0x08194ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08194ac8  _ZN4ARAD17FnRewardInterfaceclEimsj
#           ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)
# range [0x08194ac8, 0x08194e57]
08194ac8 +0x000:  push   %ebp
08194ac9 +0x001:  mov    %esp,%ebp
08194acb +0x003:  push   %edi
08194acc +0x004:  push   %esi
08194acd +0x005:  push   %ebx
08194ace +0x006:  sub    $0x1dc,%esp
08194ad4 +0x00c:  mov    0x14(%ebp),%eax
08194ad7 +0x00f:  mov    %ax,-0x1ac(%ebp)
08194ade +0x016:  mov    0x8(%ebp),%eax
08194ae1 +0x019:  mov    0x4(%eax),%eax
08194ae4 +0x01c:  test   %eax,%eax
08194ae6 +0x01e:  je     08194b02 <+0x3a>
08194ae8 +0x020:  mov    0x8(%ebp),%eax
08194aeb +0x023:  mov    0x4(%eax),%eax
08194aee +0x026:  movl   $0xffffffff,0x4(%esp)
08194af6 +0x02e:  mov    %eax,(%esp)
08194af9 +0x031:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08194afe +0x036:  test   %eax,%eax
08194b00 +0x038:  jne    08194b09 <+0x41>
08194b02 +0x03a:  mov    $0x1,%eax
08194b07 +0x03f:  jmp    08194b0e <+0x46>
08194b09 +0x041:  mov    $0x0,%eax
08194b0e +0x046:  test   %al,%al
08194b10 +0x048:  je     08194b1c <+0x54>
08194b12 +0x04a:  mov    $0x0,%ebx
08194b17 +0x04f:  jmp    08194e4b <+0x383>
08194b1c +0x054:  lea    -0x9d(%ebp),%eax
08194b22 +0x05a:  mov    %eax,(%esp)
08194b25 +0x05d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08194b2a +0x062:  movswl -0x1ac(%ebp),%eax
08194b31 +0x069:  lea    -0x9d(%ebp),%edx
08194b37 +0x06f:  mov    %edx,0x8(%esp)
08194b3b +0x073:  mov    %eax,0x4(%esp)
08194b3f +0x077:  mov    0x10(%ebp),%eax
08194b42 +0x07a:  mov    %eax,(%esp)
08194b45 +0x07d:  call   08197375 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item>  ; ARAD::ARAD_ITEM::arad_make_item(unsigned long, int, Inven_Item&)
08194b4a +0x082:  xor    $0x1,%eax
08194b4d +0x085:  test   %al,%al
08194b4f +0x087:  je     08194b5b <+0x93>
08194b51 +0x089:  mov    $0x0,%ebx
08194b56 +0x08e:  jmp    08194e4b <+0x383>
08194b5b +0x093:  lea    -0x19d(%ebp),%edx
08194b61 +0x099:  mov    $0x100,%ebx
08194b66 +0x09e:  mov    $0x0,%eax
08194b6b +0x0a3:  mov    %edx,%ecx
08194b6d +0x0a5:  and    $0x1,%ecx
08194b70 +0x0a8:  test   %ecx,%ecx
08194b72 +0x0aa:  je     08194b7c <+0xb4>
08194b74 +0x0ac:  mov    %al,(%edx)
08194b76 +0x0ae:  add    $0x1,%edx
08194b79 +0x0b1:  sub    $0x1,%ebx
08194b7c +0x0b4:  mov    %edx,%ecx
08194b7e +0x0b6:  and    $0x2,%ecx
08194b81 +0x0b9:  test   %ecx,%ecx
08194b83 +0x0bb:  je     08194b8e <+0xc6>
08194b85 +0x0bd:  mov    %ax,(%edx)
08194b88 +0x0c0:  add    $0x2,%edx
08194b8b +0x0c3:  sub    $0x2,%ebx
08194b8e +0x0c6:  mov    %ebx,%ecx
08194b90 +0x0c8:  shr    $0x2,%ecx
08194b93 +0x0cb:  mov    %edx,%edi
08194b95 +0x0cd:  rep stos %eax,%es:(%edi)
08194b97 +0x0cf:  mov    %edi,%edx
08194b99 +0x0d1:  mov    %ebx,%ecx
08194b9b +0x0d3:  and    $0x2,%ecx
08194b9e +0x0d6:  test   %ecx,%ecx
08194ba0 +0x0d8:  je     08194ba8 <+0xe0>
08194ba2 +0x0da:  mov    %ax,(%edx)
08194ba5 +0x0dd:  add    $0x2,%edx
08194ba8 +0x0e0:  mov    %ebx,%ecx
08194baa +0x0e2:  and    $0x1,%ecx
08194bad +0x0e5:  test   %ecx,%ecx
08194baf +0x0e7:  je     08194bb6 <+0xee>
08194bb1 +0x0e9:  mov    %al,(%edx)
08194bb3 +0x0eb:  add    $0x1,%edx
08194bb6 +0x0ee:  lea    -0x31(%ebp),%eax
08194bb9 +0x0f1:  mov    $0x15,%edx
08194bbe +0x0f6:  mov    $0x0,%ecx
08194bc3 +0x0fb:  mov    %eax,%ebx
08194bc5 +0x0fd:  and    $0x1,%ebx
08194bc8 +0x100:  test   %ebx,%ebx
08194bca +0x102:  je     08194bd4 <+0x10c>
08194bcc +0x104:  mov    %cl,(%eax)
08194bce +0x106:  add    $0x1,%eax
08194bd1 +0x109:  sub    $0x1,%edx
08194bd4 +0x10c:  mov    %eax,%ebx
08194bd6 +0x10e:  and    $0x2,%ebx
08194bd9 +0x111:  test   %ebx,%ebx
08194bdb +0x113:  je     08194be6 <+0x11e>
08194bdd +0x115:  mov    %cx,(%eax)
08194be0 +0x118:  add    $0x2,%eax
08194be3 +0x11b:  sub    $0x2,%edx
08194be6 +0x11e:  mov    %edx,%esi
08194be8 +0x120:  and    $0xfffffffc,%esi
08194beb +0x123:  mov    $0x0,%ebx
08194bf0 +0x128:  mov    %ecx,(%eax,%ebx,1)
08194bf3 +0x12b:  add    $0x4,%ebx
08194bf6 +0x12e:  cmp    %esi,%ebx
08194bf8 +0x130:  jb     08194bf0 <+0x128>
08194bfa +0x132:  add    %ebx,%eax
08194bfc +0x134:  mov    %edx,%ebx
08194bfe +0x136:  and    $0x2,%ebx
08194c01 +0x139:  test   %ebx,%ebx
08194c03 +0x13b:  je     08194c0b <+0x143>
08194c05 +0x13d:  mov    %cx,(%eax)
08194c08 +0x140:  add    $0x2,%eax
08194c0b +0x143:  and    $0x1,%edx
08194c0e +0x146:  test   %edx,%edx
08194c10 +0x148:  je     08194c17 <+0x14f>
08194c12 +0x14a:  mov    %cl,(%eax)
08194c14 +0x14c:  add    $0x1,%eax
08194c17 +0x14f:  mov    0x8(%ebp),%eax
08194c1a +0x152:  mov    (%eax),%eax
08194c1c +0x154:  mov    (%eax),%edx
08194c1e +0x156:  lea    -0x31(%ebp),%eax
08194c21 +0x159:  mov    %eax,0x8(%esp)
08194c25 +0x15d:  lea    -0x19d(%ebp),%eax
08194c2b +0x163:  mov    %eax,0x4(%esp)
08194c2f +0x167:  mov    0x8(%ebp),%eax
08194c32 +0x16a:  mov    %eax,(%esp)
08194c35 +0x16d:  call   *%edx
08194c37 +0x16f:  mov    0x8(%ebp),%eax
08194c3a +0x172:  mov    0x4(%eax),%eax
08194c3d +0x175:  mov    %eax,(%esp)
08194c40 +0x178:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08194c45 +0x17d:  mov    %eax,%ebx
08194c47 +0x17f:  lea    -0x19d(%ebp),%eax
08194c4d +0x185:  mov    %eax,(%esp)
08194c50 +0x188:  call   0807e3b0 <_init+0xca8>
08194c55 +0x18d:  mov    %eax,%esi
08194c57 +0x18f:  mov    0x8(%ebp),%eax
08194c5a +0x192:  mov    0x4(%eax),%eax
08194c5d +0x195:  movl   $0xffffffff,0x4(%esp)
08194c65 +0x19d:  mov    %eax,(%esp)
08194c68 +0x1a0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08194c6d +0x1a5:  movl   $0x0,0x24(%esp)
08194c75 +0x1ad:  movl   $0x0,0x20(%esp)
08194c7d +0x1b5:  mov    %ebx,0x1c(%esp)
08194c81 +0x1b9:  movl   $0xc,0x18(%esp)
08194c89 +0x1c1:  mov    %esi,0x14(%esp)
08194c8d +0x1c5:  lea    -0x19d(%ebp),%edx
08194c93 +0x1cb:  mov    %edx,0x10(%esp)
08194c97 +0x1cf:  mov    %eax,0xc(%esp)
08194c9b +0x1d3:  movl   $0x0,0x8(%esp)
08194ca3 +0x1db:  lea    -0x9d(%ebp),%eax
08194ca9 +0x1e1:  mov    %eax,0x4(%esp)
08194cad +0x1e5:  lea    -0x31(%ebp),%eax
08194cb0 +0x1e8:  mov    %eax,(%esp)
08194cb3 +0x1eb:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08194cb8 +0x1f0:  mov    %eax,-0x1c(%ebp)
08194cbb +0x1f3:  cmpl   $0x0,-0x1c(%ebp)
08194cbf +0x1f7:  je     08194d2a <+0x262>
08194cc1 +0x1f9:  movswl -0x1ac(%ebp),%ebx
08194cc8 +0x200:  mov    0x8(%ebp),%eax
08194ccb +0x203:  mov    0x4(%eax),%eax
08194cce +0x206:  movl   $0xffffffff,0x4(%esp)
08194cd6 +0x20e:  mov    %eax,(%esp)
08194cd9 +0x211:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08194cde +0x216:  mov    %ebx,0x20(%esp)
08194ce2 +0x21a:  mov    0x10(%ebp),%edx
08194ce5 +0x21d:  mov    %edx,0x1c(%esp)
08194ce9 +0x221:  mov    %eax,0x18(%esp)
08194ced +0x225:  mov    0xc(%ebp),%eax
08194cf0 +0x228:  mov    %eax,0x14(%esp)
08194cf4 +0x22c:  movl   $"[FnReward] send mail fail. (code:%u, charac:%u, item:%u, cnt:%d)",0x10(%esp)
08194cfc +0x234:  movl   $0x2f,0xc(%esp)
08194d04 +0x23c:  movl   $&_ZZN4ARAD17FnRewardInterfaceclEimsjE19__PRETTY_FUNCTION__,0x8(%esp)
08194d0c +0x244:  movl   $"localjapan/Arad_EventPeriodDataManager.cpp",0x4(%esp)
08194d14 +0x24c:  movl   $0x1,(%esp)
08194d1b +0x253:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08194d20 +0x258:  mov    $0x0,%ebx
08194d25 +0x25d:  jmp    08194e4b <+0x383>
08194d2a +0x262:  lea    -0x40(%ebp),%eax
08194d2d +0x265:  mov    0xc(%ebp),%edx
08194d30 +0x268:  mov    %edx,0x8(%esp)
08194d34 +0x26c:  mov    0x8(%ebp),%edx
08194d37 +0x26f:  mov    %edx,0x4(%esp)
08194d3b +0x273:  mov    %eax,(%esp)
08194d3e +0x276:  call   08194e58 <_ZN4ARAD17FnRewardInterface9make_dataEi>  ; ARAD::FnRewardInterface::make_data(int)
08194d43 +0x27b:  sub    $0x4,%esp
08194d46 +0x27e:  lea    -0x56(%ebp),%eax
08194d49 +0x281:  mov    %eax,(%esp)
08194d4c +0x284:  call   08195cd4 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x94>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x94
08194d51 +0x289:  movswl -0x1ac(%ebp),%ecx
08194d58 +0x290:  mov    -0x38(%ebp),%edx
08194d5b +0x293:  mov    -0x3c(%ebp),%eax
08194d5e +0x296:  mov    0x18(%ebp),%ebx
08194d61 +0x299:  mov    %ebx,0x18(%esp)
08194d65 +0x29d:  mov    %ecx,0x14(%esp)
08194d69 +0x2a1:  mov    0x10(%ebp),%ecx
08194d6c +0x2a4:  mov    %ecx,0x10(%esp)
08194d70 +0x2a8:  mov    %edx,0xc(%esp)
08194d74 +0x2ac:  mov    %eax,0x8(%esp)
08194d78 +0x2b0:  mov    0xc(%ebp),%eax
08194d7b +0x2b3:  mov    %eax,0x4(%esp)
08194d7f +0x2b7:  lea    -0x56(%ebp),%eax
08194d82 +0x2ba:  mov    %eax,(%esp)
08194d85 +0x2bd:  call   08195d2c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0xec>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0xec
08194d8a +0x2c2:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08194d8f +0x2c7:  movl   $0x36,0x8(%esp)
08194d97 +0x2cf:  movl   $"localjapan/Arad_EventPeriodDataManager.cpp",0x4(%esp)
08194d9f +0x2d7:  mov    %eax,(%esp)
08194da2 +0x2da:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08194da7 +0x2df:  movl   $0x1,0x8(%esp)
08194daf +0x2e7:  mov    %eax,0x4(%esp)
08194db3 +0x2eb:  lea    -0x60(%ebp),%eax
08194db6 +0x2ee:  mov    %eax,(%esp)
08194db9 +0x2f1:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08194dbe +0x2f6:  mov    0x8(%ebp),%eax
08194dc1 +0x2f9:  mov    0x4(%eax),%eax
08194dc4 +0x2fc:  mov    %eax,(%esp)
08194dc7 +0x2ff:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08194dcc +0x304:  mov    %eax,0x8(%esp)
08194dd0 +0x308:  movl   $0x27,0x4(%esp)
08194dd8 +0x310:  lea    -0x60(%ebp),%eax
08194ddb +0x313:  mov    %eax,(%esp)
08194dde +0x316:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08194de3 +0x31b:  lea    -0x60(%ebp),%eax
08194de6 +0x31e:  mov    %eax,(%esp)
08194de9 +0x321:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08194dee +0x326:  movl   $0x16,0x8(%esp)
08194df6 +0x32e:  lea    -0x56(%ebp),%edx
08194df9 +0x331:  mov    %edx,0x4(%esp)
08194dfd +0x335:  mov    %eax,(%esp)
08194e00 +0x338:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08194e05 +0x33d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08194e0a +0x342:  lea    -0x60(%ebp),%edx
08194e0d +0x345:  mov    %edx,0x8(%esp)
08194e11 +0x349:  movl   $0x2,0x4(%esp)
08194e19 +0x351:  mov    %eax,(%esp)
08194e1c +0x354:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08194e21 +0x359:  mov    %eax,%ebx
08194e23 +0x35b:  lea    -0x60(%ebp),%eax
08194e26 +0x35e:  mov    %eax,(%esp)
08194e29 +0x361:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08194e2e +0x366:  jmp    08194e4b <+0x383>
08194e30 +0x368:  mov    %edx,%ebx
08194e32 +0x36a:  mov    %eax,%esi
08194e34 +0x36c:  lea    -0x60(%ebp),%eax
08194e37 +0x36f:  mov    %eax,(%esp)
08194e3a +0x372:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08194e3f +0x377:  mov    %esi,%eax
08194e41 +0x379:  mov    %ebx,%edx
08194e43 +0x37b:  mov    %eax,(%esp)
08194e46 +0x37e:  call   08ae3750 <_Unwind_Resume>
08194e4b +0x383:  mov    %ebx,%eax
08194e4d +0x385:  lea    -0xc(%ebp),%esp
08194e50 +0x388:  add    $0x0,%esp
08194e53 +0x38b:  pop    %ebx
08194e54 +0x38c:  pop    %esi
08194e55 +0x38d:  pop    %edi
08194e56 +0x38e:  pop    %ebp
08194e57 +0x38f:  ret
```

## 反编译 C

```c
// ARAD::FnRewardInterface::operator @ 0x8194ac8

/* ARAD::FnRewardInterface::TEMPNAMEPLACEHOLDERVALUE(int, unsigned long, short, unsigned int) */

undefined4 __thiscall
ARAD::FnRewardInterface::operator()
          (FnRewardInterface *this,int param_1,ulong param_2,short param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  size_t sVar4;
  undefined4 uVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_1a1;
  char local_1a0 [255];
  Inven_Item local_a1 [61];
  CStreamGuard local_64 [10];
  SigSaveRewardEventItem local_5a [22];
  undefined1 local_44 [4];
  uint local_40;
  uint local_3c;
  undefined1 local_35 [21];
  int local_20;
  
  bVar12 = 0;
  if (*(int *)(this + 4) != 0) {
    iVar2 = CUser::get_charac_no(*(CUser **)(this + 4),-1);
    if (iVar2 != 0) {
      bVar11 = false;
      goto LAB_08194b0e;
    }
  }
  bVar11 = true;
LAB_08194b0e:
  if (bVar11) {
    uVar9 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_a1);
    cVar1 = ARAD_ITEM::arad_make_item(param_2,(int)param_3,local_a1);
    if (cVar1 == '\x01') {
      pcVar8 = &local_1a1;
      uVar10 = 0x100;
      bVar11 = ((uint)pcVar8 & 1) != 0;
      if (bVar11) {
        local_1a1 = '\0';
        pcVar8 = local_1a0;
        uVar10 = 0xff;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar10 = uVar10 - 2;
      }
      for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if ((uVar10 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (bVar11) {
        *pcVar8 = '\0';
      }
      puVar3 = (undefined2 *)local_35;
      uVar10 = 0x15;
      bVar11 = ((uint)puVar3 & 1) != 0;
      if (bVar11) {
        local_35[0] = 0;
        puVar3 = (undefined2 *)(local_35 + 1);
        uVar10 = 0x14;
      }
      if (((uint)puVar3 & 2) != 0) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        uVar10 = uVar10 - 2;
      }
      uVar7 = 0;
      do {
        *(undefined4 *)((int)puVar3 + uVar7) = 0;
        uVar7 = uVar7 + 4;
      } while (uVar7 < (uVar10 & 0xfffffffc));
      puVar3 = (undefined2 *)((int)puVar3 + uVar7);
      if ((uVar10 & 2) != 0) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      if (!bVar11) {
        *(undefined1 *)puVar3 = 0;
      }
      (*(code *)**(undefined4 **)this)(this,&local_1a1,local_35);
      uVar9 = CUser::GetServerGroup(*(CUser **)(this + 4));
      sVar4 = strlen(&local_1a1);
      uVar5 = CUser::get_charac_no(*(CUser **)(this + 4),-1);
      local_20 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                           (local_35,local_a1,0,uVar5,&local_1a1,sVar4,0xc,uVar9,0,0);
      if (local_20 == 0) {
        make_data((int)local_44);
        arad::SigSaveRewardEventItem::SigSaveRewardEventItem(local_5a);
        arad::SigSaveRewardEventItem::set
                  (local_5a,param_1,local_40,local_3c,param_2,param_3,param_4);
        pSVar6 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,
                                     "localjapan/Arad_EventPeriodDataManager.cpp",0x36);
        CStreamGuard::CStreamGuard(local_64,pSVar6,true);
        uVar9 = CUser::GetUID(*(CUser **)(this + 4));
                    /* try { // try from 08194dde to 08194e20 has its CatchHandler @ 08194e30 */
        DISPATCHER::make_internal_stream_jpn(local_64,0x27,uVar9);
        this_00 = (CStreamGuard *)CStreamGuard::operator->(local_64);
        CStreamGuard::put_binary(this_00,local_5a,0x16);
        uVar9 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_64);
        CStreamGuard::~CStreamGuard(local_64);
      }
      else {
        uVar9 = CUser::get_charac_no(*(CUser **)(this + 4),-1);
        LogManager::logFormat
                  (1,"localjapan/Arad_EventPeriodDataManager.cpp",
                   "bool ARAD::FnRewardInterface::operator()(int, itemindex_t, short int, arad_uint32)"
                   ,0x2f,"[FnReward] send mail fail. (code:%u, charac:%u, item:%u, cnt:%d)",param_1,
                   uVar9,param_2,(int)param_3);
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}
```
