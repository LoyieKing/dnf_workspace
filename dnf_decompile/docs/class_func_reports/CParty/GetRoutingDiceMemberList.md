# GetRoutingDiceMemberList

`_ZN6CParty24GetRoutingDiceMemberListERSt6vectorISt4pairIiiESaIS2_EEP5CItem`

`CParty::GetRoutingDiceMemberList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, CItem*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba294` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba294  _ZN6CParty24GetRoutingDiceMemberListERSt6vectorISt4pairIiiESaIS2_EEP5CItem
#           CParty::GetRoutingDiceMemberList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, CItem*)
# range [0x085ba294, 0x085ba573]
085ba294 +0x000:  push   %ebp
085ba295 +0x001:  mov    %esp,%ebp
085ba297 +0x003:  push   %ebx
085ba298 +0x004:  sub    $0x44,%esp
085ba29b +0x007:  mov    0x10(%ebp),%eax
085ba29e +0x00a:  mov    %eax,(%esp)
085ba2a1 +0x00d:  call   08150f18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x84d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x84d
085ba2a6 +0x012:  test   %al,%al
085ba2a8 +0x014:  je     085ba3b5 <+0x121>
085ba2ae +0x01a:  movl   $0x0,-0x30(%ebp)
085ba2b5 +0x021:  jmp    085ba3a4 <+0x110>
085ba2ba +0x026:  mov    -0x30(%ebp),%eax
085ba2bd +0x029:  mov    %eax,0x4(%esp)
085ba2c1 +0x02d:  mov    0x8(%ebp),%eax
085ba2c4 +0x030:  mov    %eax,(%esp)
085ba2c7 +0x033:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba2cc +0x038:  test   %al,%al
085ba2ce +0x03a:  je     085ba345 <+0xb1>
085ba2d0 +0x03c:  mov    -0x30(%ebp),%edx
085ba2d3 +0x03f:  mov    0x8(%ebp),%eax
085ba2d6 +0x042:  mov    %edx,0x4(%esp)
085ba2da +0x046:  mov    %eax,(%esp)
085ba2dd +0x049:  call   085bf694 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbf2>  ; global constructors keyed to CParty::cMember::cMember()+0xbf2
085ba2e2 +0x04e:  cmp    $0x1,%al
085ba2e4 +0x050:  jne    085ba345 <+0xb1>
085ba2e6 +0x052:  mov    -0x30(%ebp),%edx
085ba2e9 +0x055:  mov    0x8(%ebp),%ecx
085ba2ec +0x058:  mov    %edx,%eax
085ba2ee +0x05a:  add    %eax,%eax
085ba2f0 +0x05c:  add    %edx,%eax
085ba2f2 +0x05e:  shl    $0x3,%eax
085ba2f5 +0x061:  lea    (%ecx,%eax,1),%eax
085ba2f8 +0x064:  add    $0x78,%eax
085ba2fb +0x067:  mov    (%eax),%eax
085ba2fd +0x069:  mov    %eax,(%esp)
085ba300 +0x06c:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
085ba305 +0x071:  movsbl %al,%ebx
085ba308 +0x074:  mov    -0x30(%ebp),%edx
085ba30b +0x077:  mov    0x8(%ebp),%ecx
085ba30e +0x07a:  mov    %edx,%eax
085ba310 +0x07c:  add    %eax,%eax
085ba312 +0x07e:  add    %edx,%eax
085ba314 +0x080:  shl    $0x3,%eax
085ba317 +0x083:  lea    (%ecx,%eax,1),%eax
085ba31a +0x086:  add    $0x78,%eax
085ba31d +0x089:  mov    (%eax),%eax
085ba31f +0x08b:  mov    %eax,(%esp)
085ba322 +0x08e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085ba327 +0x093:  mov    %ebx,0x8(%esp)
085ba32b +0x097:  mov    %eax,0x4(%esp)
085ba32f +0x09b:  mov    0x10(%ebp),%eax
085ba332 +0x09e:  mov    %eax,(%esp)
085ba335 +0x0a1:  call   085beec8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x426>  ; global constructors keyed to CParty::cMember::cMember()+0x426
085ba33a +0x0a6:  test   %al,%al
085ba33c +0x0a8:  je     085ba345 <+0xb1>
085ba33e +0x0aa:  mov    $0x1,%eax
085ba343 +0x0af:  jmp    085ba34a <+0xb6>
085ba345 +0x0b1:  mov    $0x0,%eax
085ba34a +0x0b6:  test   %al,%al
085ba34c +0x0b8:  je     085ba39b <+0x107>
085ba34e +0x0ba:  mov    -0x30(%ebp),%edx
085ba351 +0x0bd:  mov    0x8(%ebp),%ecx
085ba354 +0x0c0:  mov    %edx,%eax
085ba356 +0x0c2:  add    %eax,%eax
085ba358 +0x0c4:  add    %edx,%eax
085ba35a +0x0c6:  shl    $0x3,%eax
085ba35d +0x0c9:  lea    (%ecx,%eax,1),%eax
085ba360 +0x0cc:  add    $0x78,%eax
085ba363 +0x0cf:  mov    (%eax),%eax
085ba365 +0x0d1:  mov    %eax,(%esp)
085ba368 +0x0d4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085ba36d +0x0d9:  mov    %eax,-0x24(%ebp)
085ba370 +0x0dc:  lea    -0x24(%ebp),%eax
085ba373 +0x0df:  mov    %eax,0x8(%esp)
085ba377 +0x0e3:  lea    -0x30(%ebp),%eax
085ba37a +0x0e6:  mov    %eax,0x4(%esp)
085ba37e +0x0ea:  lea    -0x2c(%ebp),%eax
085ba381 +0x0ed:  mov    %eax,(%esp)
085ba384 +0x0f0:  call   085c04cc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1a2a>  ; global constructors keyed to CParty::cMember::cMember()+0x1a2a
085ba389 +0x0f5:  lea    -0x2c(%ebp),%eax
085ba38c +0x0f8:  mov    %eax,0x4(%esp)
085ba390 +0x0fc:  mov    0xc(%ebp),%eax
085ba393 +0x0ff:  mov    %eax,(%esp)
085ba396 +0x102:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
085ba39b +0x107:  mov    -0x30(%ebp),%eax
085ba39e +0x10a:  add    $0x1,%eax
085ba3a1 +0x10d:  mov    %eax,-0x30(%ebp)
085ba3a4 +0x110:  mov    -0x30(%ebp),%eax
085ba3a7 +0x113:  cmp    $0x3,%eax
085ba3aa +0x116:  setle  %al
085ba3ad +0x119:  test   %al,%al
085ba3af +0x11b:  jne    085ba2ba <+0x26>
085ba3b5 +0x121:  mov    0xc(%ebp),%eax
085ba3b8 +0x124:  mov    %eax,(%esp)
085ba3bb +0x127:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
085ba3c0 +0x12c:  test   %al,%al
085ba3c2 +0x12e:  je     085ba4ac <+0x218>
085ba3c8 +0x134:  movl   $0x0,-0x34(%ebp)
085ba3cf +0x13b:  jmp    085ba49b <+0x207>
085ba3d4 +0x140:  mov    -0x34(%ebp),%eax
085ba3d7 +0x143:  mov    %eax,0x4(%esp)
085ba3db +0x147:  mov    0x8(%ebp),%eax
085ba3de +0x14a:  mov    %eax,(%esp)
085ba3e1 +0x14d:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba3e6 +0x152:  test   %al,%al
085ba3e8 +0x154:  je     085ba43c <+0x1a8>
085ba3ea +0x156:  mov    -0x34(%ebp),%edx
085ba3ed +0x159:  mov    0x8(%ebp),%eax
085ba3f0 +0x15c:  mov    %edx,0x4(%esp)
085ba3f4 +0x160:  mov    %eax,(%esp)
085ba3f7 +0x163:  call   085bf694 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbf2>  ; global constructors keyed to CParty::cMember::cMember()+0xbf2
085ba3fc +0x168:  cmp    $0x1,%al
085ba3fe +0x16a:  jne    085ba43c <+0x1a8>
085ba400 +0x16c:  mov    -0x34(%ebp),%edx
085ba403 +0x16f:  mov    0x8(%ebp),%ecx
085ba406 +0x172:  mov    %edx,%eax
085ba408 +0x174:  add    %eax,%eax
085ba40a +0x176:  add    %edx,%eax
085ba40c +0x178:  shl    $0x3,%eax
085ba40f +0x17b:  lea    (%ecx,%eax,1),%eax
085ba412 +0x17e:  add    $0x78,%eax
085ba415 +0x181:  mov    (%eax),%eax
085ba417 +0x183:  mov    %eax,(%esp)
085ba41a +0x186:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085ba41f +0x18b:  movsbl %al,%eax
085ba422 +0x18e:  mov    %eax,0x4(%esp)
085ba426 +0x192:  mov    0x10(%ebp),%eax
085ba429 +0x195:  mov    %eax,(%esp)
085ba42c +0x198:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
085ba431 +0x19d:  test   %al,%al
085ba433 +0x19f:  je     085ba43c <+0x1a8>
085ba435 +0x1a1:  mov    $0x1,%eax
085ba43a +0x1a6:  jmp    085ba441 <+0x1ad>
085ba43c +0x1a8:  mov    $0x0,%eax
085ba441 +0x1ad:  test   %al,%al
085ba443 +0x1af:  je     085ba492 <+0x1fe>
085ba445 +0x1b1:  mov    -0x34(%ebp),%edx
085ba448 +0x1b4:  mov    0x8(%ebp),%ecx
085ba44b +0x1b7:  mov    %edx,%eax
085ba44d +0x1b9:  add    %eax,%eax
085ba44f +0x1bb:  add    %edx,%eax
085ba451 +0x1bd:  shl    $0x3,%eax
085ba454 +0x1c0:  lea    (%ecx,%eax,1),%eax
085ba457 +0x1c3:  add    $0x78,%eax
085ba45a +0x1c6:  mov    (%eax),%eax
085ba45c +0x1c8:  mov    %eax,(%esp)
085ba45f +0x1cb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085ba464 +0x1d0:  mov    %eax,-0x18(%ebp)
085ba467 +0x1d3:  lea    -0x18(%ebp),%eax
085ba46a +0x1d6:  mov    %eax,0x8(%esp)
085ba46e +0x1da:  lea    -0x34(%ebp),%eax
085ba471 +0x1dd:  mov    %eax,0x4(%esp)
085ba475 +0x1e1:  lea    -0x20(%ebp),%eax
085ba478 +0x1e4:  mov    %eax,(%esp)
085ba47b +0x1e7:  call   085c04cc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1a2a>  ; global constructors keyed to CParty::cMember::cMember()+0x1a2a
085ba480 +0x1ec:  lea    -0x20(%ebp),%eax
085ba483 +0x1ef:  mov    %eax,0x4(%esp)
085ba487 +0x1f3:  mov    0xc(%ebp),%eax
085ba48a +0x1f6:  mov    %eax,(%esp)
085ba48d +0x1f9:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
085ba492 +0x1fe:  mov    -0x34(%ebp),%eax
085ba495 +0x201:  add    $0x1,%eax
085ba498 +0x204:  mov    %eax,-0x34(%ebp)
085ba49b +0x207:  mov    -0x34(%ebp),%eax
085ba49e +0x20a:  cmp    $0x3,%eax
085ba4a1 +0x20d:  setle  %al
085ba4a4 +0x210:  test   %al,%al
085ba4a6 +0x212:  jne    085ba3d4 <+0x140>
085ba4ac +0x218:  mov    0xc(%ebp),%eax
085ba4af +0x21b:  mov    %eax,(%esp)
085ba4b2 +0x21e:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
085ba4b7 +0x223:  test   %al,%al
085ba4b9 +0x225:  je     085ba56e <+0x2da>
085ba4bf +0x22b:  movl   $0x0,-0x38(%ebp)
085ba4c6 +0x232:  jmp    085ba55d <+0x2c9>
085ba4cb +0x237:  mov    -0x38(%ebp),%eax
085ba4ce +0x23a:  mov    %eax,0x4(%esp)
085ba4d2 +0x23e:  mov    0x8(%ebp),%eax
085ba4d5 +0x241:  mov    %eax,(%esp)
085ba4d8 +0x244:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba4dd +0x249:  test   %al,%al
085ba4df +0x24b:  je     085ba4fe <+0x26a>
085ba4e1 +0x24d:  mov    -0x38(%ebp),%edx
085ba4e4 +0x250:  mov    0x8(%ebp),%eax
085ba4e7 +0x253:  mov    %edx,0x4(%esp)
085ba4eb +0x257:  mov    %eax,(%esp)
085ba4ee +0x25a:  call   085bf694 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbf2>  ; global constructors keyed to CParty::cMember::cMember()+0xbf2
085ba4f3 +0x25f:  cmp    $0x1,%al
085ba4f5 +0x261:  jne    085ba4fe <+0x26a>
085ba4f7 +0x263:  mov    $0x1,%eax
085ba4fc +0x268:  jmp    085ba503 <+0x26f>
085ba4fe +0x26a:  mov    $0x0,%eax
085ba503 +0x26f:  test   %al,%al
085ba505 +0x271:  je     085ba554 <+0x2c0>
085ba507 +0x273:  mov    -0x38(%ebp),%edx
085ba50a +0x276:  mov    0x8(%ebp),%ecx
085ba50d +0x279:  mov    %edx,%eax
085ba50f +0x27b:  add    %eax,%eax
085ba511 +0x27d:  add    %edx,%eax
085ba513 +0x27f:  shl    $0x3,%eax
085ba516 +0x282:  lea    (%ecx,%eax,1),%eax
085ba519 +0x285:  add    $0x78,%eax
085ba51c +0x288:  mov    (%eax),%eax
085ba51e +0x28a:  mov    %eax,(%esp)
085ba521 +0x28d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085ba526 +0x292:  mov    %eax,-0xc(%ebp)
085ba529 +0x295:  lea    -0xc(%ebp),%eax
085ba52c +0x298:  mov    %eax,0x8(%esp)
085ba530 +0x29c:  lea    -0x38(%ebp),%eax
085ba533 +0x29f:  mov    %eax,0x4(%esp)
085ba537 +0x2a3:  lea    -0x14(%ebp),%eax
085ba53a +0x2a6:  mov    %eax,(%esp)
085ba53d +0x2a9:  call   085c04cc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1a2a>  ; global constructors keyed to CParty::cMember::cMember()+0x1a2a
085ba542 +0x2ae:  lea    -0x14(%ebp),%eax
085ba545 +0x2b1:  mov    %eax,0x4(%esp)
085ba549 +0x2b5:  mov    0xc(%ebp),%eax
085ba54c +0x2b8:  mov    %eax,(%esp)
085ba54f +0x2bb:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
085ba554 +0x2c0:  mov    -0x38(%ebp),%eax
085ba557 +0x2c3:  add    $0x1,%eax
085ba55a +0x2c6:  mov    %eax,-0x38(%ebp)
085ba55d +0x2c9:  mov    -0x38(%ebp),%eax
085ba560 +0x2cc:  cmp    $0x3,%eax
085ba563 +0x2cf:  setle  %al
085ba566 +0x2d2:  test   %al,%al
085ba568 +0x2d4:  jne    085ba4cb <+0x237>
085ba56e +0x2da:  add    $0x44,%esp
085ba571 +0x2dd:  pop    %ebx
085ba572 +0x2de:  pop    %ebp
085ba573 +0x2df:  ret
```

## 反编译 C

```c
// CParty::GetRoutingDiceMemberList @ 0x85ba294

/* CParty::GetRoutingDiceMemberList(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&, CItem*) */

void __thiscall CParty::GetRoutingDiceMemberList(CParty *this,vector *param_1,CItem *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_3c;
  int local_38;
  int local_34;
  pair<int,int> local_30 [8];
  uint local_28;
  pair<int,int> local_24 [8];
  uint local_1c;
  pair<int,int> local_18 [8];
  uint local_10 [2];
  
  cVar2 = CItem::IsRoutingItem(param_2);
  if (cVar2 != '\0') {
    for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
      cVar2 = _checkValidUser(this,local_34);
      if (cVar2 == '\0') {
LAB_085ba345:
        bVar1 = false;
      }
      else {
        cVar2 = CItemRoutingData::GetMemberRoutingState((CItemRoutingData *)this,local_34);
        if (cVar2 != '\x01') goto LAB_085ba345;
        cVar2 = CUserCharacInfo::getCurCharacGrowType
                          (*(CUserCharacInfo **)(this + local_34 * 0x18 + 0x78));
        iVar3 = CUserCharacInfo::get_charac_job
                          (*(CUserCharacInfo **)(this + local_34 * 0x18 + 0x78));
        cVar2 = CItem::IsPriorityJob(param_2,iVar3,(int)cVar2);
        if (cVar2 == '\0') goto LAB_085ba345;
        bVar1 = true;
      }
      if (bVar1) {
        local_28 = CUserCharacInfo::getCurCharacNo
                             (*(CUserCharacInfo **)(this + local_34 * 0x18 + 0x78));
        std::pair<int,int>::pair<int&,unsigned_int>(local_30,&local_34,&local_28);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,local_30
                  );
      }
    }
  }
  cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar2 != '\0') {
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      cVar2 = _checkValidUser(this,local_38);
      if (cVar2 == '\0') {
LAB_085ba43c:
        bVar1 = false;
      }
      else {
        cVar2 = CItemRoutingData::GetMemberRoutingState((CItemRoutingData *)this,local_38);
        if (cVar2 != '\x01') goto LAB_085ba43c;
        cVar2 = CUserCharacInfo::get_charac_job
                          (*(CUserCharacInfo **)(this + local_38 * 0x18 + 0x78));
        cVar2 = CItem::check_job_type(param_2,cVar2);
        if (cVar2 == '\0') goto LAB_085ba43c;
        bVar1 = true;
      }
      if (bVar1) {
        local_1c = CUserCharacInfo::getCurCharacNo
                             (*(CUserCharacInfo **)(this + local_38 * 0x18 + 0x78));
        std::pair<int,int>::pair<int&,unsigned_int>(local_24,&local_38,&local_1c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,local_24
                  );
      }
    }
  }
  cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar2 != '\0') {
    for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
      cVar2 = _checkValidUser(this,local_3c);
      if (cVar2 == '\0') {
LAB_085ba4fe:
        bVar1 = false;
      }
      else {
        cVar2 = CItemRoutingData::GetMemberRoutingState((CItemRoutingData *)this,local_3c);
        if (cVar2 != '\x01') goto LAB_085ba4fe;
        bVar1 = true;
      }
      if (bVar1) {
        local_10[0] = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + local_3c * 0x18 + 0x78));
        std::pair<int,int>::pair<int&,unsigned_int>(local_18,&local_3c,local_10);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,local_18
                  );
      }
    }
  }
  return;
}
```
