# ARAD__DISPATCHER__Arad_INTER_kEmblemCompound

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0819a0c0 ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig  [0x0819a0c0-0x819a20d] ===
 819a0c0:	55                   	push   %ebp
 819a0c1:	89 e5                	mov    %esp,%ebp
 819a0c3:	57                   	push   %edi
 819a0c4:	56                   	push   %esi
 819a0c5:	53                   	push   %ebx
 819a0c6:	83 ec 5c             	sub    $0x5c,%esp
 819a0c9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819a0cd:	75 0a                	jne    819a0d9 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x19>
 819a0cf:	b8 b6 06 00 00       	mov    $0x6b6,%eax
 819a0d4:	e9 2c 01 00 00       	jmp    819a205 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x145>
 819a0d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 819a0dc:	89 04 24             	mov    %eax,(%esp)
 819a0df:	e8 4e 63 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 819a0e4:	85 c0                	test   %eax,%eax
 819a0e6:	0f 94 c0             	sete   %al
 819a0e9:	84 c0                	test   %al,%al
 819a0eb:	74 0a                	je     819a0f7 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x37>
 819a0ed:	b8 b9 06 00 00       	mov    $0x6b9,%eax
 819a0f2:	e9 0e 01 00 00       	jmp    819a205 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x145>
 819a0f7:	8b 45 10             	mov    0x10(%ebp),%eax
 819a0fa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 819a0fd:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 819a101:	75 36                	jne    819a139 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x79>
 819a103:	c7 44 24 10 44 1f ba 	movl   $0x8ba1f44,0x10(%esp)
 819a10a:	08 
 819a10b:	c7 44 24 0c be 06 00 	movl   $0x6be,0xc(%esp)
 819a112:	00 
 819a113:	c7 44 24 08 80 2c ba 	movl   $0x8ba2c80,0x8(%esp)
 819a11a:	08 
 819a11b:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 819a122:	08 
 819a123:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 819a12a:	e8 db 9a 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819a12f:	b8 bf 06 00 00       	mov    $0x6bf,%eax
 819a134:	e9 cc 00 00 00       	jmp    819a205 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x145>
 819a139:	e8 38 96 ff ff       	call   8193776 <_ZN4ARAD9SingletonI20EmblemCompoundServerE3GetEv>
 819a13e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 819a141:	89 54 24 08          	mov    %edx,0x8(%esp)
 819a145:	8b 55 0c             	mov    0xc(%ebp),%edx
 819a148:	89 54 24 04          	mov    %edx,0x4(%esp)
 819a14c:	89 04 24             	mov    %eax,(%esp)
 819a14f:	e8 e2 74 ff ff       	call   8191636 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE>
 819a154:	83 f0 01             	xor    $0x1,%eax
 819a157:	84 c0                	test   %al,%al
 819a159:	74 0a                	je     819a165 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0xa5>
 819a15b:	b8 00 00 00 00       	mov    $0x0,%eax
 819a160:	e9 a0 00 00 00       	jmp    819a205 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x145>
 819a165:	e8 0c 96 ff ff       	call   8193776 <_ZN4ARAD9SingletonI20EmblemCompoundServerE3GetEv>
 819a16a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 819a16d:	89 54 24 08          	mov    %edx,0x8(%esp)
 819a171:	8b 55 0c             	mov    0xc(%ebp),%edx
 819a174:	89 54 24 04          	mov    %edx,0x4(%esp)
 819a178:	89 04 24             	mov    %eax,(%esp)
 819a17b:	e8 7a 79 ff ff       	call   8191afa <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE>
 819a180:	83 f0 01             	xor    $0x1,%eax
 819a183:	84 c0                	test   %al,%al
 819a185:	74 07                	je     819a18e <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0xce>
 819a187:	b8 00 00 00 00       	mov    $0x0,%eax
 819a18c:	eb 77                	jmp    819a205 <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci+0x145>
 819a18e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819a191:	89 04 24             	mov    %eax,(%esp)
 819a194:	e8 b5 1a f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 819a199:	89 c3                	mov    %eax,%ebx
 819a19b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819a19e:	8b 40 10             	mov    0x10(%eax),%eax
 819a1a1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 819a1a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819a1a7:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 819a1ab:	0f b7 f8             	movzwl %ax,%edi
 819a1ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819a1b1:	0f b7 00             	movzwl (%eax),%eax
 819a1b4:	0f b7 f0             	movzwl %ax,%esi
 819a1b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819a1be:	00 
 819a1bf:	c7 44 24 08 cc 06 00 	movl   $0x6cc,0x8(%esp)
 819a1c6:	00 
 819a1c7:	c7 44 24 04 80 2c ba 	movl   $0x8ba2c80,0x4(%esp)
 819a1ce:	08 
 819a1cf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819a1d2:	89 04 24             	mov    %eax,(%esp)
 819a1d5:	e8 3e 55 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 819a1da:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 819a1de:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 819a1e1:	89 44 24 10          	mov    %eax,0x10(%esp)
 819a1e5:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 819a1e9:	89 74 24 08          	mov    %esi,0x8(%esp)
 819a1ed:	c7 44 24 04 78 1f ba 	movl   $0x8ba1f78,0x4(%esp)
 819a1f4:	08 
 819a1f5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819a1f8:	89 04 24             	mov    %eax,(%esp)
 819a1fb:	e8 88 55 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 819a200:	b8 00 00 00 00       	mov    $0x0,%eax
 819a205:	83 c4 5c             	add    $0x5c,%esp
 819a208:	5b                   	pop    %ebx
 819a209:	5e                   	pop    %esi
 819a20a:	5f                   	pop    %edi
 819a20b:	5d                   	pop    %ebp
 819a20c:	c3                   	ret
 819a20d:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig @ 0x819a0c0

/* ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  EmblemCompoundServer *pEVar6;
  undefined4 uVar7;
  cMyTrace local_30 [16];
  SigAradEmblemCompound *local_20;
  
  if (param_2 == (char *)0x0) {
    uVar4 = 0x6b6;
  }
  else {
    iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar5 == 0) {
      uVar4 = 0x6b9;
    }
    else {
      local_20 = (SigAradEmblemCompound *)param_3;
      if (param_3 == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_InterDispatcher.cpp",
                   "virtual int ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int)"
                   ,0x6be,"EMBLEM COMPOUND INTER_DSP(kEmblemCompound) null.");
        uVar4 = 0x6bf;
      }
      else {
        pEVar6 = (EmblemCompoundServer *)Singleton<EmblemCompoundServer>::Get();
        cVar3 = EmblemCompoundServer::CheckCondition(pEVar6,(CUser *)param_2,local_20);
        if (cVar3 == '\x01') {
          pEVar6 = (EmblemCompoundServer *)Singleton<EmblemCompoundServer>::Get();
          cVar3 = EmblemCompoundServer::Process(pEVar6,(CUser *)param_2,local_20);
          if (cVar3 == '\x01') {
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            uVar4 = *(undefined4 *)(local_20 + 0x10);
            uVar1 = *(ushort *)(local_20 + 8);
            uVar2 = *(ushort *)local_20;
            cMyTrace::cMyTrace(local_30,
                               "virtual int ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int)"
                               ,0x6cc,0);
            cMyTrace::operator()
                      (local_30,
                       "EMBLEM COMPOUND : success [slot1:%d] [slot2:%d] [selectNo:%d] [resultIdx:%d] [charac_no:%d]"
                       ,(uint)uVar2,(uint)uVar1,uVar4,uVar7);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}

```

