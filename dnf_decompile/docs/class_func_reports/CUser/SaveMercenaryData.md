# SaveMercenaryData

`_ZN5CUser17SaveMercenaryDataEv`

`CUser::SaveMercenaryData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e36a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e36a  _ZN5CUser17SaveMercenaryDataEv
#           CUser::SaveMercenaryData()
# range [0x0868e36a, 0x0868e543]
0868e36a +0x000:  push   %ebp
0868e36b +0x001:  mov    %esp,%ebp
0868e36d +0x003:  push   %edi
0868e36e +0x004:  push   %esi
0868e36f +0x005:  push   %ebx
0868e370 +0x006:  sub    $0x3c,%esp
0868e373 +0x009:  mov    0x8(%ebp),%eax
0868e376 +0x00c:  add    $0x6ef6c,%eax
0868e37b +0x011:  mov    %eax,(%esp)
0868e37e +0x014:  call   081b4b5a <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ce>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ce
0868e383 +0x019:  test   %al,%al
0868e385 +0x01b:  je     0868e391 <+0x27>
0868e387 +0x01d:  mov    $0x1,%ebx
0868e38c +0x022:  jmp    0868e539 <+0x1cf>
0868e391 +0x027:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0868e396 +0x02c:  movl   $0xab3b,0x8(%esp)
0868e39e +0x034:  movl   $"user.cpp",0x4(%esp)
0868e3a6 +0x03c:  mov    %eax,(%esp)
0868e3a9 +0x03f:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0868e3ae +0x044:  movl   $0x1,0x8(%esp)
0868e3b6 +0x04c:  mov    %eax,0x4(%esp)
0868e3ba +0x050:  lea    -0x28(%ebp),%eax
0868e3bd +0x053:  mov    %eax,(%esp)
0868e3c0 +0x056:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0868e3c5 +0x05b:  lea    -0x28(%ebp),%eax
0868e3c8 +0x05e:  mov    %eax,(%esp)
0868e3cb +0x061:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0868e3d0 +0x066:  movl   $0x2b3,0x4(%esp)
0868e3d8 +0x06e:  mov    %eax,(%esp)
0868e3db +0x071:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0868e3e0 +0x076:  mov    0x8(%ebp),%eax
0868e3e3 +0x079:  mov    %eax,(%esp)
0868e3e6 +0x07c:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0868e3eb +0x081:  mov    %eax,%ebx
0868e3ed +0x083:  lea    -0x28(%ebp),%eax
0868e3f0 +0x086:  mov    %eax,(%esp)
0868e3f3 +0x089:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0868e3f8 +0x08e:  mov    %ebx,0x4(%esp)
0868e3fc +0x092:  mov    %eax,(%esp)
0868e3ff +0x095:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0868e404 +0x09a:  lea    -0x28(%ebp),%eax
0868e407 +0x09d:  mov    %eax,(%esp)
0868e40a +0x0a0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0868e40f +0x0a5:  mov    %eax,(%esp)
0868e412 +0x0a8:  call   0869cb8a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x93df>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x93df
0868e417 +0x0ad:  mov    %eax,-0x20(%ebp)
0868e41a +0x0b0:  movl   $0xbd4,0x8(%esp)
0868e422 +0x0b8:  movl   $0x0,0x4(%esp)
0868e42a +0x0c0:  mov    -0x20(%ebp),%eax
0868e42d +0x0c3:  mov    %eax,(%esp)
0868e430 +0x0c6:  call   0807dcc0 <_init+0x5b8>
0868e435 +0x0cb:  movl   $0x0,-0x1c(%ebp)
0868e43c +0x0d2:  jmp    0868e4d2 <+0x168>
0868e441 +0x0d7:  mov    0x8(%ebp),%eax
0868e444 +0x0da:  lea    0x6ef6c(%eax),%edx
0868e44a +0x0e0:  mov    -0x1c(%ebp),%eax
0868e44d +0x0e3:  mov    %eax,0x4(%esp)
0868e451 +0x0e7:  mov    %edx,(%esp)
0868e454 +0x0ea:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e459 +0x0ef:  movzbl 0x24(%eax),%eax
0868e45d +0x0f3:  test   %al,%al
0868e45f +0x0f5:  je     0868e4ce <+0x164>
0868e461 +0x0f7:  mov    -0x20(%ebp),%eax
0868e464 +0x0fa:  mov    (%eax),%eax
0868e466 +0x0fc:  mov    %eax,-0x2c(%ebp)
0868e469 +0x0ff:  mov    -0x2c(%ebp),%eax
0868e46c +0x102:  mov    %eax,%ebx
0868e46e +0x104:  mov    0x8(%ebp),%eax
0868e471 +0x107:  lea    0x6ef6c(%eax),%edx
0868e477 +0x10d:  mov    -0x1c(%ebp),%eax
0868e47a +0x110:  mov    %eax,0x4(%esp)
0868e47e +0x114:  mov    %edx,(%esp)
0868e481 +0x117:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e486 +0x11c:  mov    %eax,%edx
0868e488 +0x11e:  mov    -0x20(%ebp),%ecx
0868e48b +0x121:  imul   $0x54,%ebx,%eax
0868e48e +0x124:  lea    (%ecx,%eax,1),%eax
0868e491 +0x127:  add    $0x4,%eax
0868e494 +0x12a:  mov    %edx,%ebx
0868e496 +0x12c:  mov    $0x15,%edx
0868e49b +0x131:  mov    %eax,%edi
0868e49d +0x133:  mov    %ebx,%esi
0868e49f +0x135:  mov    %edx,%ecx
0868e4a1 +0x137:  rep movsl %ds:(%esi),%es:(%edi)
0868e4a3 +0x139:  mov    -0x2c(%ebp),%edx
0868e4a6 +0x13c:  add    $0x1,%edx
0868e4a9 +0x13f:  mov    -0x20(%ebp),%eax
0868e4ac +0x142:  mov    %edx,(%eax)
0868e4ae +0x144:  mov    0x8(%ebp),%eax
0868e4b1 +0x147:  lea    0x6ef6c(%eax),%edx
0868e4b7 +0x14d:  mov    -0x1c(%ebp),%eax
0868e4ba +0x150:  mov    %eax,0x4(%esp)
0868e4be +0x154:  mov    %edx,(%esp)
0868e4c1 +0x157:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e4c6 +0x15c:  mov    %eax,(%esp)
0868e4c9 +0x15f:  call   08694c8e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x14e3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x14e3
0868e4ce +0x164:  addl   $0x1,-0x1c(%ebp)
0868e4d2 +0x168:  mov    0x8(%ebp),%eax
0868e4d5 +0x16b:  add    $0x6ef6c,%eax
0868e4da +0x170:  mov    %eax,(%esp)
0868e4dd +0x173:  call   081b4b24 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x398>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x398
0868e4e2 +0x178:  cmp    -0x1c(%ebp),%eax
0868e4e5 +0x17b:  seta   %al
0868e4e8 +0x17e:  test   %al,%al
0868e4ea +0x180:  jne    0868e441 <+0xd7>
0868e4f0 +0x186:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0868e4f5 +0x18b:  lea    -0x28(%ebp),%edx
0868e4f8 +0x18e:  mov    %edx,0x8(%esp)
0868e4fc +0x192:  movl   $0x2,0x4(%esp)
0868e504 +0x19a:  mov    %eax,(%esp)
0868e507 +0x19d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0868e50c +0x1a2:  mov    $0x1,%ebx
0868e511 +0x1a7:  lea    -0x28(%ebp),%eax
0868e514 +0x1aa:  mov    %eax,(%esp)
0868e517 +0x1ad:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0868e51c +0x1b2:  jmp    0868e539 <+0x1cf>
0868e51e +0x1b4:  mov    %edx,%ebx
0868e520 +0x1b6:  mov    %eax,%esi
0868e522 +0x1b8:  lea    -0x28(%ebp),%eax
0868e525 +0x1bb:  mov    %eax,(%esp)
0868e528 +0x1be:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0868e52d +0x1c3:  mov    %esi,%eax
0868e52f +0x1c5:  mov    %ebx,%edx
0868e531 +0x1c7:  mov    %eax,(%esp)
0868e534 +0x1ca:  call   08ae3750 <_Unwind_Resume>
0868e539 +0x1cf:  mov    %ebx,%eax
0868e53b +0x1d1:  add    $0x3c,%esp
0868e53e +0x1d4:  pop    %ebx
0868e53f +0x1d5:  pop    %esi
0868e540 +0x1d6:  pop    %edi
0868e541 +0x1d7:  pop    %ebp
0868e542 +0x1d8:  ret
0868e543 +0x1d9:  nop
```

## 反编译 C

```c
// CUser::SaveMercenaryData @ 0x868e36a

/* CUser::SaveMercenaryData() */

undefined4 __thiscall CUser::SaveMercenaryData(CUser *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  CHARAC_LOAD_MERCENARY *this_00;
  uint uVar6;
  int iVar7;
  SIG_MERCENARY_DB_DATA *pSVar8;
  byte bVar9;
  CStreamGuard local_2c [8];
  SIG_MERCENARY_DB_DATA *local_24;
  uint local_20;
  
  bVar9 = 0;
  cVar1 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::empty();
  if (cVar1 == '\0') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0xab3b);
    CStreamGuard::CStreamGuard(local_2c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 0868e3db to 0868e50b has its CatchHandler @ 0868e51e */
    CStreamGuard::operator<<(pCVar3,0x2b3);
    iVar4 = GetUID(this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
    CStreamGuard::operator<<(pCVar3,iVar4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    local_24 = CStreamGuard::GetInBuffer<SIG_MERCENARY_DB_DATA>(pCVar3);
    memset(local_24,0,0xbd4);
    local_20 = 0;
    while (uVar6 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                             ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *
                              )(this + 0x6ef6c)), local_20 < uVar6) {
      iVar4 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                         (this + 0x6ef6c),local_20);
      if (*(char *)(iVar4 + 0x24) != '\0') {
        iVar4 = *(int *)local_24;
        puVar5 = (undefined4 *)
                 std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                 operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                            (this + 0x6ef6c),local_20);
        pSVar8 = local_24 + iVar4 * 0x54 + 4;
        for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pSVar8 = *puVar5;
          puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
          pSVar8 = pSVar8 + (uint)bVar9 * -8 + 4;
        }
        *(int *)local_24 = iVar4 + 1;
        this_00 = (CHARAC_LOAD_MERCENARY *)
                  std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                  operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                             (this + 0x6ef6c),local_20);
        CHARAC_LOAD_MERCENARY::save_complete(this_00);
      }
      local_20 = local_20 + 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2c);
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return 1;
}
```
