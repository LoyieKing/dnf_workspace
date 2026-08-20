# dispatch

`_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream`

`DB_LoadAccountCargo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadAccountCargo` | `0x0843b3b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843b3b6  _ZN19DB_LoadAccountCargo8dispatchEiiP6Stream
#           DB_LoadAccountCargo::dispatch(int, int, Stream*)
# range [0x0843b3b6, 0x0843b6eb]
0843b3b6 +0x000:  push   %ebp
0843b3b7 +0x001:  mov    %esp,%ebp
0843b3b9 +0x003:  push   %edi
0843b3ba +0x004:  push   %esi
0843b3bb +0x005:  push   %ebx
0843b3bc +0x006:  sub    $0x105c,%esp
0843b3c2 +0x00c:  movl   $0x0,-0x28(%ebp)
0843b3c9 +0x013:  lea    -0x28(%ebp),%eax
0843b3cc +0x016:  mov    %eax,0x4(%esp)
0843b3d0 +0x01a:  mov    0x14(%ebp),%eax
0843b3d3 +0x01d:  mov    %eax,(%esp)
0843b3d6 +0x020:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843b3db +0x025:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843b3e0 +0x02a:  movl   $0x0,0x8(%esp)
0843b3e8 +0x032:  movl   $0x2,0x4(%esp)
0843b3f0 +0x03a:  mov    %eax,(%esp)
0843b3f3 +0x03d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843b3f8 +0x042:  mov    %eax,-0x24(%ebp)
0843b3fb +0x045:  mov    -0x28(%ebp),%eax
0843b3fe +0x048:  movl   $0x0,0x4(%esp)
0843b406 +0x050:  mov    %eax,(%esp)
0843b409 +0x053:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843b40e +0x058:  mov    %eax,0x8(%esp)
0843b412 +0x05c:  movl   $"seLect capacity, money, cargo from account_cargo where m_id = %s",0x4(%esp)
0843b41a +0x064:  mov    -0x24(%ebp),%eax
0843b41d +0x067:  mov    %eax,(%esp)
0843b420 +0x06a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843b425 +0x06f:  movl   $0x1,0x4(%esp)
0843b42d +0x077:  mov    -0x24(%ebp),%eax
0843b430 +0x07a:  mov    %eax,(%esp)
0843b433 +0x07d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843b438 +0x082:  xor    $0x1,%eax
0843b43b +0x085:  test   %al,%al
0843b43d +0x087:  je     0843b449 <+0x93>
0843b43f +0x089:  mov    $0x0,%ebx
0843b444 +0x08e:  jmp    0843b6de <+0x328>
0843b449 +0x093:  mov    -0x24(%ebp),%eax
0843b44c +0x096:  mov    %eax,(%esp)
0843b44f +0x099:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843b454 +0x09e:  test   %eax,%eax
0843b456 +0x0a0:  sete   %al
0843b459 +0x0a3:  test   %al,%al
0843b45b +0x0a5:  je     0843b467 <+0xb1>
0843b45d +0x0a7:  mov    $0x1,%ebx
0843b462 +0x0ac:  jmp    0843b6de <+0x328>
0843b467 +0x0b1:  mov    -0x24(%ebp),%eax
0843b46a +0x0b4:  mov    %eax,(%esp)
0843b46d +0x0b7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843b472 +0x0bc:  xor    $0x1,%eax
0843b475 +0x0bf:  test   %al,%al
0843b477 +0x0c1:  je     0843b483 <+0xcd>
0843b479 +0x0c3:  mov    $0x0,%ebx
0843b47e +0x0c8:  jmp    0843b6de <+0x328>
0843b483 +0x0cd:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843b488 +0x0d2:  movl   $0x8c53,0x8(%esp)
0843b490 +0x0da:  movl   $"DBThread.cpp",0x4(%esp)
0843b498 +0x0e2:  mov    %eax,(%esp)
0843b49b +0x0e5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843b4a0 +0x0ea:  movl   $0x1,0x8(%esp)
0843b4a8 +0x0f2:  mov    %eax,0x4(%esp)
0843b4ac +0x0f6:  lea    -0x30(%ebp),%eax
0843b4af +0x0f9:  mov    %eax,(%esp)
0843b4b2 +0x0fc:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843b4b7 +0x101:  lea    -0x30(%ebp),%eax
0843b4ba +0x104:  mov    %eax,(%esp)
0843b4bd +0x107:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b4c2 +0x10c:  mov    0xc(%ebp),%edx
0843b4c5 +0x10f:  mov    %edx,0x4(%esp)
0843b4c9 +0x113:  mov    %eax,(%esp)
0843b4cc +0x116:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b4d1 +0x11b:  lea    -0x30(%ebp),%eax
0843b4d4 +0x11e:  mov    %eax,(%esp)
0843b4d7 +0x121:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b4dc +0x126:  mov    0x10(%ebp),%edx
0843b4df +0x129:  mov    %edx,0x4(%esp)
0843b4e3 +0x12d:  mov    %eax,(%esp)
0843b4e6 +0x130:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b4eb +0x135:  lea    -0x30(%ebp),%eax
0843b4ee +0x138:  mov    %eax,(%esp)
0843b4f1 +0x13b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843b4f6 +0x140:  mov    %eax,(%esp)
0843b4f9 +0x143:  call   08453a10 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6626>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6626
0843b4fe +0x148:  mov    %eax,-0x20(%ebp)
0843b501 +0x14b:  movl   $0xd60,0x8(%esp)
0843b509 +0x153:  movl   $0x0,0x4(%esp)
0843b511 +0x15b:  mov    -0x20(%ebp),%eax
0843b514 +0x15e:  mov    %eax,(%esp)
0843b517 +0x161:  call   0807dcc0 <_init+0x5b8>
0843b51c +0x166:  mov    -0x20(%ebp),%eax
0843b51f +0x169:  mov    %eax,0x8(%esp)
0843b523 +0x16d:  movl   $0x0,0x4(%esp)
0843b52b +0x175:  mov    -0x24(%ebp),%eax
0843b52e +0x178:  mov    %eax,(%esp)
0843b531 +0x17b:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843b536 +0x180:  xor    $0x1,%eax
0843b539 +0x183:  test   %al,%al
0843b53b +0x185:  je     0843b547 <+0x191>
0843b53d +0x187:  mov    $0x0,%ebx
0843b542 +0x18c:  jmp    0843b6d3 <+0x31d>
0843b547 +0x191:  mov    -0x20(%ebp),%eax
0843b54a +0x194:  add    $0x4,%eax
0843b54d +0x197:  mov    %eax,0x8(%esp)
0843b551 +0x19b:  movl   $0x1,0x4(%esp)
0843b559 +0x1a3:  mov    -0x24(%ebp),%eax
0843b55c +0x1a6:  mov    %eax,(%esp)
0843b55f +0x1a9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843b564 +0x1ae:  xor    $0x1,%eax
0843b567 +0x1b1:  test   %al,%al
0843b569 +0x1b3:  je     0843b575 <+0x1bf>
0843b56b +0x1b5:  mov    $0x0,%ebx
0843b570 +0x1ba:  jmp    0843b6d3 <+0x31d>
0843b575 +0x1bf:  lea    -0x1043(%ebp),%edx
0843b57b +0x1c5:  mov    $0x100f,%ebx
0843b580 +0x1ca:  mov    $0x0,%eax
0843b585 +0x1cf:  mov    %edx,%ecx
0843b587 +0x1d1:  and    $0x1,%ecx
0843b58a +0x1d4:  test   %ecx,%ecx
0843b58c +0x1d6:  je     0843b596 <+0x1e0>
0843b58e +0x1d8:  mov    %al,(%edx)
0843b590 +0x1da:  add    $0x1,%edx
0843b593 +0x1dd:  sub    $0x1,%ebx
0843b596 +0x1e0:  mov    %edx,%ecx
0843b598 +0x1e2:  and    $0x2,%ecx
0843b59b +0x1e5:  test   %ecx,%ecx
0843b59d +0x1e7:  je     0843b5a8 <+0x1f2>
0843b59f +0x1e9:  mov    %ax,(%edx)
0843b5a2 +0x1ec:  add    $0x2,%edx
0843b5a5 +0x1ef:  sub    $0x2,%ebx
0843b5a8 +0x1f2:  mov    %ebx,%ecx
0843b5aa +0x1f4:  shr    $0x2,%ecx
0843b5ad +0x1f7:  mov    %edx,%edi
0843b5af +0x1f9:  rep stos %eax,%es:(%edi)
0843b5b1 +0x1fb:  mov    %edi,%edx
0843b5b3 +0x1fd:  mov    %ebx,%ecx
0843b5b5 +0x1ff:  and    $0x2,%ecx
0843b5b8 +0x202:  test   %ecx,%ecx
0843b5ba +0x204:  je     0843b5c2 <+0x20c>
0843b5bc +0x206:  mov    %ax,(%edx)
0843b5bf +0x209:  add    $0x2,%edx
0843b5c2 +0x20c:  mov    %ebx,%ecx
0843b5c4 +0x20e:  and    $0x1,%ecx
0843b5c7 +0x211:  test   %ecx,%ecx
0843b5c9 +0x213:  je     0843b5d0 <+0x21a>
0843b5cb +0x215:  mov    %al,(%edx)
0843b5cd +0x217:  add    $0x1,%edx
0843b5d0 +0x21a:  movl   $0x100f,0xc(%esp)
0843b5d8 +0x222:  lea    -0x1043(%ebp),%eax
0843b5de +0x228:  mov    %eax,0x8(%esp)
0843b5e2 +0x22c:  movl   $0x2,0x4(%esp)
0843b5ea +0x234:  mov    -0x24(%ebp),%eax
0843b5ed +0x237:  mov    %eax,(%esp)
0843b5f0 +0x23a:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0843b5f5 +0x23f:  xor    $0x1,%eax
0843b5f8 +0x242:  test   %al,%al
0843b5fa +0x244:  je     0843b606 <+0x250>
0843b5fc +0x246:  mov    $0x0,%ebx
0843b601 +0x24b:  jmp    0843b6d3 <+0x31d>
0843b606 +0x250:  movl   $0x2,0x4(%esp)
0843b60e +0x258:  mov    -0x24(%ebp),%eax
0843b611 +0x25b:  mov    %eax,(%esp)
0843b614 +0x25e:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0843b619 +0x263:  mov    %eax,-0x1c(%ebp)
0843b61c +0x266:  movl   $0xd58,-0x34(%ebp)
0843b623 +0x26d:  mov    -0x20(%ebp),%eax
0843b626 +0x270:  add    $0x8,%eax
0843b629 +0x273:  mov    -0x1c(%ebp),%edx
0843b62c +0x276:  mov    %edx,0xc(%esp)
0843b630 +0x27a:  lea    -0x1043(%ebp),%edx
0843b636 +0x280:  mov    %edx,0x8(%esp)
0843b63a +0x284:  lea    -0x34(%ebp),%edx
0843b63d +0x287:  mov    %edx,0x4(%esp)
0843b641 +0x28b:  mov    %eax,(%esp)
0843b644 +0x28e:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0843b649 +0x293:  xor    $0x1,%eax
0843b64c +0x296:  test   %al,%al
0843b64e +0x298:  je     0843b657 <+0x2a1>
0843b650 +0x29a:  mov    $0x0,%ebx
0843b655 +0x29f:  jmp    0843b6d3 <+0x31d>
0843b657 +0x2a1:  mov    -0x34(%ebp),%eax
0843b65a +0x2a4:  test   %eax,%eax
0843b65c +0x2a6:  je     0843b695 <+0x2df>
0843b65e +0x2a8:  mov    -0x34(%ebp),%ecx
0843b661 +0x2ab:  mov    %ecx,%eax
0843b663 +0x2ad:  shr    $0x3,%eax
0843b666 +0x2b0:  mov    %eax,-0x104c(%ebp)
0843b66c +0x2b6:  mov    $0x997ae77,%edx
0843b671 +0x2bb:  mov    -0x104c(%ebp),%eax
0843b677 +0x2c1:  mul    %edx
0843b679 +0x2c3:  mov    %edx,%eax
0843b67b +0x2c5:  shr    $0x4,%eax
0843b67e +0x2c8:  imul   $0xd58,%eax,%eax
0843b684 +0x2ce:  mov    %ecx,%edx
0843b686 +0x2d0:  sub    %eax,%edx
0843b688 +0x2d2:  mov    %edx,%eax
0843b68a +0x2d4:  test   %eax,%eax
0843b68c +0x2d6:  je     0843b695 <+0x2df>
0843b68e +0x2d8:  mov    $0x0,%ebx
0843b693 +0x2dd:  jmp    0843b6d3 <+0x31d>
0843b695 +0x2df:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843b69a +0x2e4:  lea    -0x30(%ebp),%edx
0843b69d +0x2e7:  mov    %edx,0x8(%esp)
0843b6a1 +0x2eb:  movl   $0x1,0x4(%esp)
0843b6a9 +0x2f3:  mov    %eax,(%esp)
0843b6ac +0x2f6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843b6b1 +0x2fb:  mov    $0x1,%ebx
0843b6b6 +0x300:  jmp    0843b6d3 <+0x31d>
0843b6b8 +0x302:  mov    %edx,%ebx
0843b6ba +0x304:  mov    %eax,%esi
0843b6bc +0x306:  lea    -0x30(%ebp),%eax
0843b6bf +0x309:  mov    %eax,(%esp)
0843b6c2 +0x30c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b6c7 +0x311:  mov    %esi,%eax
0843b6c9 +0x313:  mov    %ebx,%edx
0843b6cb +0x315:  mov    %eax,(%esp)
0843b6ce +0x318:  call   08ae3750 <_Unwind_Resume>
0843b6d3 +0x31d:  lea    -0x30(%ebp),%eax
0843b6d6 +0x320:  mov    %eax,(%esp)
0843b6d9 +0x323:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b6de +0x328:  mov    %ebx,%eax
0843b6e0 +0x32a:  add    $0x105c,%esp
0843b6e6 +0x330:  pop    %ebx
0843b6e7 +0x331:  pop    %esi
0843b6e8 +0x332:  pop    %edi
0843b6e9 +0x333:  pop    %ebp
0843b6ea +0x334:  ret
0843b6eb +0x335:  nop
```

## 反编译 C

```c
// DB_LoadAccountCargo::dispatch @ 0x843b3b6

/* DB_LoadAccountCargo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadAccountCargo::dispatch(DB_LoadAccountCargo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_1047;
  char local_1046 [4110];
  uint local_38;
  CStreamGuard local_34 [8];
  uint local_2c;
  MySQL *local_28;
  SIG_ACCOUNT_CARGO_DATA *local_24;
  uint local_20;
  
  bVar10 = 0;
  local_2c = 0;
  Stream::operator>>(param_3,&local_2c);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(local_2c,0);
  MySQL::set_query(local_28,"seLect capacity, money, cargo from account_cargo where m_id = %s",uVar2
                  );
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_28);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_28);
      if (cVar1 == '\x01') {
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c53);
        CStreamGuard::CStreamGuard(local_34,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843b4cc to 0843b6b0 has its CatchHandler @ 0843b6b8 */
        CStreamGuard::operator<<(pCVar5,param_1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
        CStreamGuard::operator<<(pCVar5,param_2);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
        local_24 = CStreamGuard::GetInBuffer<SIG_ACCOUNT_CARGO_DATA>(pCVar5);
        memset(local_24,0,0xd60);
        cVar1 = MySQL::get_uint(local_28,0,(uint *)local_24);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_uint(local_28,1,(uint *)(local_24 + 4));
          if (cVar1 == '\x01') {
            pcVar7 = &local_1047;
            uVar8 = 0x100f;
            bVar9 = ((uint)pcVar7 & 1) != 0;
            if (bVar9) {
              local_1047 = '\0';
              pcVar7 = local_1046;
              uVar8 = 0x100e;
            }
            if (((uint)pcVar7 & 2) != 0) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7 = pcVar7 + 2;
              uVar8 = uVar8 - 2;
            }
            for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7[2] = '\0';
              pcVar7[3] = '\0';
              pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
            }
            if ((uVar8 & 2) != 0) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7 = pcVar7 + 2;
            }
            if (!bVar9) {
              *pcVar7 = '\0';
            }
            cVar1 = MySQL::get_binary(local_28,2,&local_1047,0x100f);
            if (cVar1 == '\x01') {
              local_20 = MySQL::get_binary_length(local_28,2);
              local_38 = 0xd58;
              cVar1 = uncompress_zip((char *)(local_24 + 8),&local_38,&local_1047,local_20);
              if (cVar1 == '\x01') {
                if ((local_38 == 0) || (local_38 == (local_38 / 0xd58) * 0xd58)) {
                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                  uVar2 = 1;
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
        CStreamGuard::~CStreamGuard(local_34);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
