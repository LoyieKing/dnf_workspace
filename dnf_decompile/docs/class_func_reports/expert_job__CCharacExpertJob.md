# expert_job__CCharacExpertJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## InitScript

```asm
// === 0832b36c expert_job::CCharacExpertJob::InitScript  [0x0832b36c-0x832b3bf] ===
 832b36c:	55                   	push   %ebp
 832b36d:	89 e5                	mov    %esp,%ebp
 832b36f:	83 ec 28             	sub    $0x28,%esp
 832b372:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b375:	8b 90 74 02 00 00    	mov    0x274(%eax),%edx
 832b37b:	8b 45 08             	mov    0x8(%ebp),%eax
 832b37e:	89 50 08             	mov    %edx,0x8(%eax)
 832b381:	8b 45 08             	mov    0x8(%ebp),%eax
 832b384:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 832b38b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832b392:	eb 0f                	jmp    832b3a3 <_ZN10expert_job16CCharacExpertJob10InitScriptEP17STExpertJobScript+0x37>
 832b394:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b397:	8b 55 08             	mov    0x8(%ebp),%edx
 832b39a:	c6 44 02 10 00       	movb   $0x0,0x10(%edx,%eax,1)
 832b39f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832b3a3:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 832b3a7:	0f 9e c0             	setle  %al
 832b3aa:	84 c0                	test   %al,%al
 832b3ac:	75 e6                	jne    832b394 <_ZN10expert_job16CCharacExpertJob10InitScriptEP17STExpertJobScript+0x28>
 832b3ae:	8b 45 08             	mov    0x8(%ebp),%eax
 832b3b1:	89 04 24             	mov    %eax,(%esp)
 832b3b4:	e8 0b d8 d9 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 832b3b9:	b8 01 00 00 00       	mov    $0x1,%eax
 832b3be:	c9                   	leave
 832b3bf:	c3                   	ret

```

```c
// expert_job::CCharacExpertJob::InitScript @ 0x832b36c

/* expert_job::CCharacExpertJob::InitScript(STExpertJobScript*) */

undefined4 __thiscall
expert_job::CCharacExpertJob::InitScript(CCharacExpertJob *this,STExpertJobScript *param_1)

{
  int local_10;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(this + 0xc) = 0;
  for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
    this[local_10 + 0x10] = (CCharacExpertJob)0x0;
  }
  charac_expand::CData::alter((CData *)this);
  return 1;
}

```

---

## SendExpertJobInfo

```asm
// === 0832b454 expert_job::CCharacExpertJob::SendExpertJobInfo  [0x0832b454-0x832b659] ===
 832b454:	55                   	push   %ebp
 832b455:	89 e5                	mov    %esp,%ebp
 832b457:	56                   	push   %esi
 832b458:	53                   	push   %ebx
 832b459:	83 ec 30             	sub    $0x30,%esp
 832b45c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b45f:	89 04 24             	mov    %eax,(%esp)
 832b462:	e8 e5 28 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 832b467:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 832b46e:	00 
 832b46f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 832b476:	00 
 832b477:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b47a:	89 04 24             	mov    %eax,(%esp)
 832b47d:	e8 7a 04 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 832b482:	8b 45 08             	mov    0x8(%ebp),%eax
 832b485:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 832b489:	0f b7 c0             	movzwl %ax,%eax
 832b48c:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b490:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b493:	89 04 24             	mov    %eax,(%esp)
 832b496:	e8 85 04 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 832b49b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b49e:	89 04 24             	mov    %eax,(%esp)
 832b4a1:	e8 ee 43 f0 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 832b4a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b4aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b4ad:	89 04 24             	mov    %eax,(%esp)
 832b4b0:	e8 6b 04 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 832b4b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b4b8:	89 04 24             	mov    %eax,(%esp)
 832b4bb:	e8 d4 43 f0 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 832b4c0:	83 f8 03             	cmp    $0x3,%eax
 832b4c3:	0f 84 0b 01 00 00    	je     832b5d4 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x180>
 832b4c9:	83 f8 03             	cmp    $0x3,%eax
 832b4cc:	7f 0b                	jg     832b4d9 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x85>
 832b4ce:	83 f8 01             	cmp    $0x1,%eax
 832b4d1:	0f 8c 2a 01 00 00    	jl     832b601 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x1ad>
 832b4d7:	eb 09                	jmp    832b4e2 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x8e>
 832b4d9:	83 f8 04             	cmp    $0x4,%eax
 832b4dc:	0f 85 1f 01 00 00    	jne    832b601 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x1ad>
 832b4e2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 832b4e9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b4ec:	89 04 24             	mov    %eax,(%esp)
 832b4ef:	e8 58 56 de ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 832b4f4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 832b4f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 832b4fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b4fe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b501:	89 04 24             	mov    %eax,(%esp)
 832b504:	e8 17 04 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 832b509:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b50c:	89 04 24             	mov    %eax,(%esp)
 832b50f:	e8 80 43 f0 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 832b514:	89 c3                	mov    %eax,%ebx
 832b516:	e8 80 0c da ff       	call   80cc19b <_Z14G_CDataManagerv>
 832b51b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832b51f:	89 04 24             	mov    %eax,(%esp)
 832b522:	e8 cb 00 f0 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 832b527:	89 45 ec             	mov    %eax,-0x14(%ebp)
 832b52a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 832b52e:	0f 84 85 00 00 00    	je     832b5b9 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x165>
 832b534:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 832b53b:	eb 6e                	jmp    832b5ab <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x157>
 832b53d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832b540:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b544:	8b 45 08             	mov    0x8(%ebp),%eax
 832b547:	89 04 24             	mov    %eax,(%esp)
 832b54a:	e8 b7 fd ff ff       	call   832b306 <_ZNK10expert_job16CCharacExpertJob10get_recipeEi>
 832b54f:	83 f0 01             	xor    $0x1,%eax
 832b552:	84 c0                	test   %al,%al
 832b554:	75 4a                	jne    832b5a0 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x14c>
 832b556:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832b55d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832b560:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b564:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832b567:	89 04 24             	mov    %eax,(%esp)
 832b56a:	e8 47 01 00 00       	call   832b6b6 <_ZN17STExpertJobScript13GetRecipeInfoEi>
 832b56f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832b572:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 832b576:	0f 94 c0             	sete   %al
 832b579:	84 c0                	test   %al,%al
 832b57b:	75 26                	jne    832b5a3 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x14f>
 832b57d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b580:	8b 00                	mov    (%eax),%eax
 832b582:	85 c0                	test   %eax,%eax
 832b584:	74 20                	je     832b5a6 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x152>
 832b586:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b589:	8b 00                	mov    (%eax),%eax
 832b58b:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b58f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b592:	89 04 24             	mov    %eax,(%esp)
 832b595:	e8 a2 03 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 832b59a:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 832b59e:	eb 07                	jmp    832b5a7 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x153>
 832b5a0:	90                   	nop
 832b5a1:	eb 04                	jmp    832b5a7 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x153>
 832b5a3:	90                   	nop
 832b5a4:	eb 01                	jmp    832b5a7 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x153>
 832b5a6:	90                   	nop
 832b5a7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 832b5ab:	81 7d f0 ef 00 00 00 	cmpl   $0xef,-0x10(%ebp)
 832b5b2:	0f 9e c0             	setle  %al
 832b5b5:	84 c0                	test   %al,%al
 832b5b7:	75 84                	jne    832b53d <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0xe9>
 832b5b9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 832b5bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 832b5c0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 832b5c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b5c7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b5ca:	89 04 24             	mov    %eax,(%esp)
 832b5cd:	e8 56 55 de ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 832b5d2:	eb 2d                	jmp    832b601 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser+0x1ad>
 832b5d4:	8b 45 08             	mov    0x8(%ebp),%eax
 832b5d7:	8b 40 0c             	mov    0xc(%eax),%eax
 832b5da:	83 c0 01             	add    $0x1,%eax
 832b5dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b5e1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b5e4:	89 04 24             	mov    %eax,(%esp)
 832b5e7:	e8 50 03 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 832b5ec:	8b 45 08             	mov    0x8(%ebp),%eax
 832b5ef:	8b 40 08             	mov    0x8(%eax),%eax
 832b5f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b5f6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b5f9:	89 04 24             	mov    %eax,(%esp)
 832b5fc:	e8 3b 03 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 832b601:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 832b608:	00 
 832b609:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b60c:	89 04 24             	mov    %eax,(%esp)
 832b60f:	e8 44 03 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 832b614:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b617:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b61b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b61e:	89 04 24             	mov    %eax,(%esp)
 832b621:	e8 94 cf 31 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 832b626:	bb 01 00 00 00       	mov    $0x1,%ebx
 832b62b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b62e:	89 04 24             	mov    %eax,(%esp)
 832b631:	e8 4a 28 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 832b636:	89 d8                	mov    %ebx,%eax
 832b638:	83 c4 30             	add    $0x30,%esp
 832b63b:	5b                   	pop    %ebx
 832b63c:	5e                   	pop    %esi
 832b63d:	5d                   	pop    %ebp
 832b63e:	c3                   	ret
 832b63f:	89 d3                	mov    %edx,%ebx
 832b641:	89 c6                	mov    %eax,%esi
 832b643:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832b646:	89 04 24             	mov    %eax,(%esp)
 832b649:	e8 32 28 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 832b64e:	89 f0                	mov    %esi,%eax
 832b650:	89 da                	mov    %ebx,%edx
 832b652:	89 04 24             	mov    %eax,(%esp)
 832b655:	e8 f6 80 7b 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// expert_job::CCharacExpertJob::SendExpertJobInfo @ 0x832b454

/* expert_job::CCharacExpertJob::SendExpertJobInfo(CUser*) */

undefined4 __thiscall
expert_job::CCharacExpertJob::SendExpertJobInfo(CCharacExpertJob *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int local_2c;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0832b47d to 0832b625 has its CatchHandler @ 0832b63f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xcd);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(ushort *)(this + 6));
  iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar2);
  iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  if (iVar2 == 3) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(this + 0xc) + 1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(this + 8));
  }
  else {
    if (iVar2 < 4) {
      if (iVar2 < 1) goto LAB_0832b601;
    }
    else if (iVar2 != 4) goto LAB_0832b601;
    local_1c = 0;
    local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_1c);
    CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    iVar2 = G_CDataManager();
    local_18 = CDataManager::GetExpertJobScript(iVar2);
    if (local_18 != 0) {
      for (local_14 = 0; local_14 < 0xf0; local_14 = local_14 + 1) {
        cVar1 = get_recipe(this,local_14);
        if (cVar1 == '\x01') {
          local_10 = (int *)0x0;
          local_10 = (int *)STExpertJobScript::GetRecipeInfo(local_18);
          if ((local_10 != (int *)0x0) && (*local_10 != 0)) {
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*local_10);
            local_1c = local_1c + 1;
          }
        }
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_1c);
  }
LAB_0832b601:
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  PacketGuard::~PacketGuard(local_28);
  return 1;
}

```

---

## _reset

```asm
// === 0832b064 expert_job::CCharacExpertJob::_reset  [0x0832b064-0x832b0ab] ===
 832b064:	55                   	push   %ebp
 832b065:	89 e5                	mov    %esp,%ebp
 832b067:	83 ec 10             	sub    $0x10,%esp
 832b06a:	8b 45 08             	mov    0x8(%ebp),%eax
 832b06d:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 832b073:	8b 45 08             	mov    0x8(%ebp),%eax
 832b076:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 832b07d:	8b 45 08             	mov    0x8(%ebp),%eax
 832b080:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 832b087:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 832b08e:	eb 0f                	jmp    832b09f <_ZN10expert_job16CCharacExpertJob6_resetEv+0x3b>
 832b090:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832b093:	8b 55 08             	mov    0x8(%ebp),%edx
 832b096:	c6 44 02 10 00       	movb   $0x0,0x10(%edx,%eax,1)
 832b09b:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 832b09f:	83 7d fc 1d          	cmpl   $0x1d,-0x4(%ebp)
 832b0a3:	0f 9e c0             	setle  %al
 832b0a6:	84 c0                	test   %al,%al
 832b0a8:	75 e6                	jne    832b090 <_ZN10expert_job16CCharacExpertJob6_resetEv+0x2c>
 832b0aa:	c9                   	leave
 832b0ab:	c3                   	ret

```

```c
// expert_job::CCharacExpertJob::_reset @ 0x832b064

/* expert_job::CCharacExpertJob::_reset() */

void __thiscall expert_job::CCharacExpertJob::_reset(CCharacExpertJob *this)

{
  int local_8;
  
  *(undefined2 *)(this + 6) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    this[local_8 + 0x10] = (CCharacExpertJob)0x0;
  }
  return;
}

```

---

## _saveData

```asm
// === 0832b0ac expert_job::CCharacExpertJob::_saveData  [0x0832b0ac-0x832b1fd] ===
 832b0ac:	55                   	push   %ebp
 832b0ad:	89 e5                	mov    %esp,%ebp
 832b0af:	56                   	push   %esi
 832b0b0:	53                   	push   %ebx
 832b0b1:	83 ec 20             	sub    $0x20,%esp
 832b0b4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 832b0b9:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 832b0c0:	00 
 832b0c1:	c7 44 24 04 80 85 c2 	movl   $0x8c28580,0x4(%esp)
 832b0c8:	08 
 832b0c9:	89 04 24             	mov    %eax,(%esp)
 832b0cc:	e8 b5 49 f6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 832b0d1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 832b0d8:	00 
 832b0d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b0dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832b0e0:	89 04 24             	mov    %eax,(%esp)
 832b0e3:	e8 3e db d9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 832b0e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832b0eb:	89 04 24             	mov    %eax,(%esp)
 832b0ee:	e8 53 db d9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 832b0f3:	c7 44 24 04 81 01 00 	movl   $0x181,0x4(%esp)
 832b0fa:	00 
 832b0fb:	89 04 24             	mov    %eax,(%esp)
 832b0fe:	e8 53 db d9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 832b103:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b106:	89 04 24             	mov    %eax,(%esp)
 832b109:	e8 88 db d9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 832b10e:	89 c3                	mov    %eax,%ebx
 832b110:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832b113:	89 04 24             	mov    %eax,(%esp)
 832b116:	e8 2b db d9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 832b11b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832b11f:	89 04 24             	mov    %eax,(%esp)
 832b122:	e8 2f db d9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 832b127:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832b12a:	89 04 24             	mov    %eax,(%esp)
 832b12d:	e8 1c db d9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 832b132:	89 04 24             	mov    %eax,(%esp)
 832b135:	e8 44 07 00 00       	call   832b87e <_ZN12CStreamGuard11GetInBufferI14SIG_EXPERT_JOBEEPT_v>
 832b13a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832b13d:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 832b144:	00 
 832b145:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 832b14c:	00 
 832b14d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b150:	89 04 24             	mov    %eax,(%esp)
 832b153:	e8 68 2b d5 ff       	call   807dcc0 <memset@plt>
 832b158:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b15b:	89 04 24             	mov    %eax,(%esp)
 832b15e:	e8 eb 0a da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 832b163:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832b166:	89 02                	mov    %eax,(%edx)
 832b168:	8b 45 08             	mov    0x8(%ebp),%eax
 832b16b:	0f b7 50 06          	movzwl 0x6(%eax),%edx
 832b16f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b172:	66 89 50 04          	mov    %dx,0x4(%eax)
 832b176:	8b 45 08             	mov    0x8(%ebp),%eax
 832b179:	8b 50 08             	mov    0x8(%eax),%edx
 832b17c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b17f:	89 50 08             	mov    %edx,0x8(%eax)
 832b182:	8b 45 08             	mov    0x8(%ebp),%eax
 832b185:	8b 50 0c             	mov    0xc(%eax),%edx
 832b188:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b18b:	89 50 0c             	mov    %edx,0xc(%eax)
 832b18e:	8b 45 08             	mov    0x8(%ebp),%eax
 832b191:	8d 50 10             	lea    0x10(%eax),%edx
 832b194:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b197:	83 c0 10             	add    $0x10,%eax
 832b19a:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 832b1a1:	00 
 832b1a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 832b1a6:	89 04 24             	mov    %eax,(%esp)
 832b1a9:	e8 f2 26 d5 ff       	call   807d8a0 <memcpy@plt>
 832b1ae:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 832b1b3:	8d 55 ec             	lea    -0x14(%ebp),%edx
 832b1b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 832b1ba:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 832b1c1:	00 
 832b1c2:	89 04 24             	mov    %eax,(%esp)
 832b1c5:	e8 14 5e 24 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 832b1ca:	bb 01 00 00 00       	mov    $0x1,%ebx
 832b1cf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832b1d2:	89 04 24             	mov    %eax,(%esp)
 832b1d5:	e8 f8 16 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 832b1da:	89 d8                	mov    %ebx,%eax
 832b1dc:	83 c4 20             	add    $0x20,%esp
 832b1df:	5b                   	pop    %ebx
 832b1e0:	5e                   	pop    %esi
 832b1e1:	5d                   	pop    %ebp
 832b1e2:	c3                   	ret
 832b1e3:	89 d3                	mov    %edx,%ebx
 832b1e5:	89 c6                	mov    %eax,%esi
 832b1e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832b1ea:	89 04 24             	mov    %eax,(%esp)
 832b1ed:	e8 e0 16 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 832b1f2:	89 f0                	mov    %esi,%eax
 832b1f4:	89 da                	mov    %ebx,%edx
 832b1f6:	89 04 24             	mov    %eax,(%esp)
 832b1f9:	e8 52 85 7b 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// expert_job::CCharacExpertJob::_saveData @ 0x832b0ac

/* expert_job::CCharacExpertJob::_saveData(CUser*) */

undefined4 __thiscall expert_job::CCharacExpertJob::_saveData(CCharacExpertJob *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_EXPERT_JOB *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CharacExpertJob.cpp",0x16);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0832b0fe to 0832b1c9 has its CatchHandler @ 0832b1e3 */
  CStreamGuard::operator<<(pCVar2,0x181);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_EXPERT_JOB>(pCVar2);
  memset(local_10,0,0x30);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)local_10 = uVar4;
  *(undefined2 *)(local_10 + 4) = *(undefined2 *)(this + 6);
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(this + 0xc);
  memcpy(local_10 + 0x10,this + 0x10,0x1e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## get_recipe

```asm
// === 0832b306 expert_job::CCharacExpertJob::get_recipe  [0x0832b306-0x832b36b] ===
 832b306:	55                   	push   %ebp
 832b307:	89 e5                	mov    %esp,%ebp
 832b309:	53                   	push   %ebx
 832b30a:	83 ec 10             	sub    $0x10,%esp
 832b30d:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b310:	89 c2                	mov    %eax,%edx
 832b312:	c1 fa 1f             	sar    $0x1f,%edx
 832b315:	c1 ea 1d             	shr    $0x1d,%edx
 832b318:	8d 04 02             	lea    (%edx,%eax,1),%eax
 832b31b:	c1 f8 03             	sar    $0x3,%eax
 832b31e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832b321:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b324:	89 c2                	mov    %eax,%edx
 832b326:	c1 fa 1f             	sar    $0x1f,%edx
 832b329:	c1 ea 1d             	shr    $0x1d,%edx
 832b32c:	01 d0                	add    %edx,%eax
 832b32e:	83 e0 07             	and    $0x7,%eax
 832b331:	29 d0                	sub    %edx,%eax
 832b333:	89 45 f8             	mov    %eax,-0x8(%ebp)
 832b336:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 832b33a:	78 06                	js     832b342 <_ZNK10expert_job16CCharacExpertJob10get_recipeEi+0x3c>
 832b33c:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 832b340:	7e 07                	jle    832b349 <_ZNK10expert_job16CCharacExpertJob10get_recipeEi+0x43>
 832b342:	b8 00 00 00 00       	mov    $0x0,%eax
 832b347:	eb 1c                	jmp    832b365 <_ZNK10expert_job16CCharacExpertJob10get_recipeEi+0x5f>
 832b349:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b34c:	8b 55 08             	mov    0x8(%ebp),%edx
 832b34f:	0f b6 44 02 10       	movzbl 0x10(%edx,%eax,1),%eax
 832b354:	0f be d0             	movsbl %al,%edx
 832b357:	8b 45 f8             	mov    -0x8(%ebp),%eax
 832b35a:	89 d3                	mov    %edx,%ebx
 832b35c:	89 c1                	mov    %eax,%ecx
 832b35e:	d3 fb                	sar    %cl,%ebx
 832b360:	89 d8                	mov    %ebx,%eax
 832b362:	83 e0 01             	and    $0x1,%eax
 832b365:	83 c4 10             	add    $0x10,%esp
 832b368:	5b                   	pop    %ebx
 832b369:	5d                   	pop    %ebp
 832b36a:	c3                   	ret
 832b36b:	90                   	nop

```

```c
// expert_job::CCharacExpertJob::get_recipe @ 0x832b306

/* expert_job::CCharacExpertJob::get_recipe(int) const */

uint __thiscall expert_job::CCharacExpertJob::get_recipe(CCharacExpertJob *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(((uint)(param_1 >> 0x1f) >> 0x1d) + param_1) >> 3;
  if ((iVar1 < 0) || (0x1d < iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(char)this[iVar1 + 0x10] >> ((byte)(param_1 % 8) & 0x1f) & 1;
  }
  return uVar2;
}

```

---

## learnRecipe

```asm
// === 0832b3c0 expert_job::CCharacExpertJob::learnRecipe  [0x0832b3c0-0x832b453] ===
 832b3c0:	55                   	push   %ebp
 832b3c1:	89 e5                	mov    %esp,%ebp
 832b3c3:	83 ec 28             	sub    $0x28,%esp
 832b3c6:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 832b3cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b3d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b3d4:	8b 45 10             	mov    0x10(%ebp),%eax
 832b3d7:	89 04 24             	mov    %eax,(%esp)
 832b3da:	e8 47 03 00 00       	call   832b726 <_ZN17STExpertJobScript18GetRecipeInfoIndexEm>
 832b3df:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832b3e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832b3e5:	c1 e8 1f             	shr    $0x1f,%eax
 832b3e8:	84 c0                	test   %al,%al
 832b3ea:	74 07                	je     832b3f3 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti+0x33>
 832b3ec:	b8 00 00 00 00       	mov    $0x0,%eax
 832b3f1:	eb 5f                	jmp    832b452 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti+0x92>
 832b3f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832b3f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b3fa:	8b 45 10             	mov    0x10(%ebp),%eax
 832b3fd:	89 04 24             	mov    %eax,(%esp)
 832b400:	e8 b1 02 00 00       	call   832b6b6 <_ZN17STExpertJobScript13GetRecipeInfoEi>
 832b405:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832b408:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 832b40c:	75 07                	jne    832b415 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti+0x55>
 832b40e:	b8 00 00 00 00       	mov    $0x0,%eax
 832b413:	eb 3d                	jmp    832b452 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti+0x92>
 832b415:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832b418:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 832b41c:	0f b7 c0             	movzwl %ax,%eax
 832b41f:	8b 55 14             	mov    0x14(%ebp),%edx
 832b422:	83 c2 02             	add    $0x2,%edx
 832b425:	39 d0                	cmp    %edx,%eax
 832b427:	7e 07                	jle    832b430 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti+0x70>
 832b429:	b8 00 00 00 00       	mov    $0x0,%eax
 832b42e:	eb 22                	jmp    832b452 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti+0x92>
 832b430:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832b433:	89 44 24 04          	mov    %eax,0x4(%esp)
 832b437:	8b 45 08             	mov    0x8(%ebp),%eax
 832b43a:	89 04 24             	mov    %eax,(%esp)
 832b43d:	e8 22 fe ff ff       	call   832b264 <_ZN10expert_job16CCharacExpertJob10set_recipeEi>
 832b442:	8b 45 08             	mov    0x8(%ebp),%eax
 832b445:	89 04 24             	mov    %eax,(%esp)
 832b448:	e8 77 d7 d9 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 832b44d:	b8 01 00 00 00       	mov    $0x1,%eax
 832b452:	c9                   	leave
 832b453:	c3                   	ret

```

```c
// expert_job::CCharacExpertJob::learnRecipe @ 0x832b3c0

/* expert_job::CCharacExpertJob::learnRecipe(unsigned long, STExpertJobScript*, int) */

undefined4 __thiscall
expert_job::CCharacExpertJob::learnRecipe
          (CCharacExpertJob *this,ulong param_1,STExpertJobScript *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = STExpertJobScript::GetRecipeInfoIndex((ulong)param_2);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = STExpertJobScript::GetRecipeInfo((int)param_2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if (param_3 + 2 < (int)(uint)*(ushort *)(iVar3 + 8)) {
      uVar2 = 0;
    }
    else {
      set_recipe(this,iVar1);
      charac_expand::CData::alter((CData *)this);
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## loadData

```asm
// === 0832b1fe expert_job::CCharacExpertJob::loadData  [0x0832b1fe-0x832b263] ===
 832b1fe:	55                   	push   %ebp
 832b1ff:	89 e5                	mov    %esp,%ebp
 832b201:	83 ec 10             	sub    $0x10,%esp
 832b204:	8b 45 10             	mov    0x10(%ebp),%eax
 832b207:	89 45 f8             	mov    %eax,-0x8(%ebp)
 832b20a:	8b 45 f8             	mov    -0x8(%ebp),%eax
 832b20d:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 832b211:	8b 45 08             	mov    0x8(%ebp),%eax
 832b214:	66 89 50 06          	mov    %dx,0x6(%eax)
 832b218:	8b 45 f8             	mov    -0x8(%ebp),%eax
 832b21b:	8b 50 08             	mov    0x8(%eax),%edx
 832b21e:	8b 45 08             	mov    0x8(%ebp),%eax
 832b221:	89 50 08             	mov    %edx,0x8(%eax)
 832b224:	8b 45 f8             	mov    -0x8(%ebp),%eax
 832b227:	8b 50 0c             	mov    0xc(%eax),%edx
 832b22a:	8b 45 08             	mov    0x8(%ebp),%eax
 832b22d:	89 50 0c             	mov    %edx,0xc(%eax)
 832b230:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 832b237:	eb 19                	jmp    832b252 <_ZN10expert_job16CCharacExpertJob8loadDataEP5CUserPc+0x54>
 832b239:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832b23c:	8b 55 fc             	mov    -0x4(%ebp),%edx
 832b23f:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 832b242:	0f b6 4c 11 10       	movzbl 0x10(%ecx,%edx,1),%ecx
 832b247:	8b 55 08             	mov    0x8(%ebp),%edx
 832b24a:	88 4c 02 10          	mov    %cl,0x10(%edx,%eax,1)
 832b24e:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 832b252:	83 7d fc 1d          	cmpl   $0x1d,-0x4(%ebp)
 832b256:	0f 9e c0             	setle  %al
 832b259:	84 c0                	test   %al,%al
 832b25b:	75 dc                	jne    832b239 <_ZN10expert_job16CCharacExpertJob8loadDataEP5CUserPc+0x3b>
 832b25d:	b8 01 00 00 00       	mov    $0x1,%eax
 832b262:	c9                   	leave
 832b263:	c3                   	ret

```

```c
// expert_job::CCharacExpertJob::loadData @ 0x832b1fe

/* expert_job::CCharacExpertJob::loadData(CUser*, char*) */

undefined4 __thiscall
expert_job::CCharacExpertJob::loadData(CCharacExpertJob *this,CUser *param_1,char *param_2)

{
  int local_8;
  
  *(undefined2 *)(this + 6) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 0xc);
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    this[local_8 + 0x10] = *(CCharacExpertJob *)(param_2 + local_8 + 0x10);
  }
  return 1;
}

```

---

## set_recipe

```asm
// === 0832b264 expert_job::CCharacExpertJob::set_recipe  [0x0832b264-0x832b305] ===
 832b264:	55                   	push   %ebp
 832b265:	89 e5                	mov    %esp,%ebp
 832b267:	57                   	push   %edi
 832b268:	56                   	push   %esi
 832b269:	53                   	push   %ebx
 832b26a:	83 ec 10             	sub    $0x10,%esp
 832b26d:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b270:	89 c2                	mov    %eax,%edx
 832b272:	c1 fa 1f             	sar    $0x1f,%edx
 832b275:	c1 ea 1d             	shr    $0x1d,%edx
 832b278:	8d 04 02             	lea    (%edx,%eax,1),%eax
 832b27b:	c1 f8 03             	sar    $0x3,%eax
 832b27e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 832b281:	8b 45 0c             	mov    0xc(%ebp),%eax
 832b284:	89 c2                	mov    %eax,%edx
 832b286:	c1 fa 1f             	sar    $0x1f,%edx
 832b289:	c1 ea 1d             	shr    $0x1d,%edx
 832b28c:	01 d0                	add    %edx,%eax
 832b28e:	83 e0 07             	and    $0x7,%eax
 832b291:	29 d0                	sub    %edx,%eax
 832b293:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832b296:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 832b29a:	78 06                	js     832b2a2 <_ZN10expert_job16CCharacExpertJob10set_recipeEi+0x3e>
 832b29c:	83 7d ec 1d          	cmpl   $0x1d,-0x14(%ebp)
 832b2a0:	7e 07                	jle    832b2a9 <_ZN10expert_job16CCharacExpertJob10set_recipeEi+0x45>
 832b2a2:	b8 00 00 00 00       	mov    $0x0,%eax
 832b2a7:	eb 55                	jmp    832b2fe <_ZN10expert_job16CCharacExpertJob10set_recipeEi+0x9a>
 832b2a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832b2ac:	8b 55 08             	mov    0x8(%ebp),%edx
 832b2af:	0f b6 44 02 10       	movzbl 0x10(%edx,%eax,1),%eax
 832b2b4:	0f be d0             	movsbl %al,%edx
 832b2b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832b2ba:	89 d3                	mov    %edx,%ebx
 832b2bc:	89 c1                	mov    %eax,%ecx
 832b2be:	d3 fb                	sar    %cl,%ebx
 832b2c0:	89 d8                	mov    %ebx,%eax
 832b2c2:	83 e0 01             	and    $0x1,%eax
 832b2c5:	84 c0                	test   %al,%al
 832b2c7:	74 07                	je     832b2d0 <_ZN10expert_job16CCharacExpertJob10set_recipeEi+0x6c>
 832b2c9:	b8 00 00 00 00       	mov    $0x0,%eax
 832b2ce:	eb 2e                	jmp    832b2fe <_ZN10expert_job16CCharacExpertJob10set_recipeEi+0x9a>
 832b2d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832b2d3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 832b2d6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 832b2d9:	0f b6 5c 11 10       	movzbl 0x10(%ecx,%edx,1),%ebx
 832b2de:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832b2e1:	be 01 00 00 00       	mov    $0x1,%esi
 832b2e6:	89 f7                	mov    %esi,%edi
 832b2e8:	89 d1                	mov    %edx,%ecx
 832b2ea:	d3 e7                	shl    %cl,%edi
 832b2ec:	89 fa                	mov    %edi,%edx
 832b2ee:	89 d9                	mov    %ebx,%ecx
 832b2f0:	09 d1                	or     %edx,%ecx
 832b2f2:	8b 55 08             	mov    0x8(%ebp),%edx
 832b2f5:	88 4c 02 10          	mov    %cl,0x10(%edx,%eax,1)
 832b2f9:	b8 01 00 00 00       	mov    $0x1,%eax
 832b2fe:	83 c4 10             	add    $0x10,%esp
 832b301:	5b                   	pop    %ebx
 832b302:	5e                   	pop    %esi
 832b303:	5f                   	pop    %edi
 832b304:	5d                   	pop    %ebp
 832b305:	c3                   	ret

```

```c
// expert_job::CCharacExpertJob::set_recipe @ 0x832b264

/* expert_job::CCharacExpertJob::set_recipe(int) */

undefined4 __thiscall expert_job::CCharacExpertJob::set_recipe(CCharacExpertJob *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  iVar1 = (int)(((uint)(param_1 >> 0x1f) >> 0x1d) + param_1) >> 3;
  if ((iVar1 < 0) || (0x1d < iVar1)) {
    uVar2 = 0;
  }
  else {
    bVar3 = (byte)(param_1 % 8);
    if (((int)(char)this[iVar1 + 0x10] >> (bVar3 & 0x1f) & 1U) == 0) {
      this[iVar1 + 0x10] =
           (CCharacExpertJob)((byte)this[iVar1 + 0x10] | (byte)(1 << (bVar3 & 0x1f)));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

