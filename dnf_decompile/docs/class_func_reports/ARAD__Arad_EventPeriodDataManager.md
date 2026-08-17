# ARAD__Arad_EventPeriodDataManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## Arad_EventPeriodDataManager

```asm
// === 081953fa ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager  [0x081953fa-0x8195535] ===
 81953fa:	55                   	push   %ebp
 81953fb:	89 e5                	mov    %esp,%ebp
 81953fd:	56                   	push   %esi
 81953fe:	53                   	push   %ebx
 81953ff:	83 ec 20             	sub    $0x20,%esp
 8195402:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8195405:	89 04 24             	mov    %eax,(%esp)
 8195408:	e8 c3 ac 54 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 819540d:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8195410:	89 44 24 08          	mov    %eax,0x8(%esp)
 8195414:	c7 44 24 04 a4 bc b9 	movl   $0x8b9bca4,0x4(%esp)
 819541b:	08 
 819541c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 819541f:	89 04 24             	mov    %eax,(%esp)
 8195422:	e8 09 22 57 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8195427:	8b 45 08             	mov    0x8(%ebp),%eax
 819542a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 819542d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195431:	89 04 24             	mov    %eax,(%esp)
 8195434:	e8 23 08 00 00       	call   8195c5c <_ZN4ARAD24Arad_InterfaceGameScriptC1ESs>
 8195439:	eb 15                	jmp    8195450 <_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev+0x56>
 819543b:	89 d3                	mov    %edx,%ebx
 819543d:	89 c6                	mov    %eax,%esi
 819543f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8195442:	89 04 24             	mov    %eax,(%esp)
 8195445:	e8 96 27 57 00       	call   8707be0 <_ZNSsD1Ev>
 819544a:	89 f0                	mov    %esi,%eax
 819544c:	89 da                	mov    %ebx,%edx
 819544e:	eb 0d                	jmp    819545d <_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev+0x63>
 8195450:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8195453:	89 04 24             	mov    %eax,(%esp)
 8195456:	e8 85 27 57 00       	call   8707be0 <_ZNSsD1Ev>
 819545b:	eb 1b                	jmp    8195478 <_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev+0x7e>
 819545d:	89 d3                	mov    %edx,%ebx
 819545f:	89 c6                	mov    %eax,%esi
 8195461:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8195464:	89 04 24             	mov    %eax,(%esp)
 8195467:	e8 84 ac 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 819546c:	89 f0                	mov    %esi,%eax
 819546e:	89 da                	mov    %ebx,%edx
 8195470:	89 04 24             	mov    %eax,(%esp)
 8195473:	e8 d8 e2 94 00       	call   8ae3750 <_Unwind_Resume>
 8195478:	8d 45 f7             	lea    -0x9(%ebp),%eax
 819547b:	89 04 24             	mov    %eax,(%esp)
 819547e:	e8 6d ac 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8195483:	8b 45 08             	mov    0x8(%ebp),%eax
 8195486:	c7 00 40 ca b9 08    	movl   $0x8b9ca40,(%eax)
 819548c:	8b 45 08             	mov    0x8(%ebp),%eax
 819548f:	83 c0 0c             	add    $0xc,%eax
 8195492:	89 04 24             	mov    %eax,(%esp)
 8195495:	e8 6e 09 00 00       	call   8195e08 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EEC1Ev>
 819549a:	8b 45 08             	mov    0x8(%ebp),%eax
 819549d:	83 c0 18             	add    $0x18,%eax
 81954a0:	89 04 24             	mov    %eax,(%esp)
 81954a3:	e8 d2 09 00 00       	call   8195e7a <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EEC1Ev>
 81954a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81954ab:	83 c0 24             	add    $0x24,%eax
 81954ae:	89 04 24             	mov    %eax,(%esp)
 81954b1:	e8 5c 5f f3 ff       	call   80cb412 <_ZN5MutexC1Ev>
 81954b6:	8b 45 08             	mov    0x8(%ebp),%eax
 81954b9:	83 c0 3c             	add    $0x3c,%eax
 81954bc:	89 04 24             	mov    %eax,(%esp)
 81954bf:	e8 28 0a 00 00       	call   8195eec <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EEC1Ev>
 81954c4:	8b 45 08             	mov    0x8(%ebp),%eax
 81954c7:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 81954ce:	83 c4 20             	add    $0x20,%esp
 81954d1:	5b                   	pop    %ebx
 81954d2:	5e                   	pop    %esi
 81954d3:	5d                   	pop    %ebp
 81954d4:	c3                   	ret
 81954d5:	89 d3                	mov    %edx,%ebx
 81954d7:	89 c6                	mov    %eax,%esi
 81954d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81954dc:	83 c0 24             	add    $0x24,%eax
 81954df:	89 04 24             	mov    %eax,(%esp)
 81954e2:	e8 47 5f f3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 81954e7:	89 f0                	mov    %esi,%eax
 81954e9:	89 da                	mov    %ebx,%edx
 81954eb:	89 d3                	mov    %edx,%ebx
 81954ed:	89 c6                	mov    %eax,%esi
 81954ef:	8b 45 08             	mov    0x8(%ebp),%eax
 81954f2:	83 c0 18             	add    $0x18,%eax
 81954f5:	89 04 24             	mov    %eax,(%esp)
 81954f8:	e8 91 09 00 00       	call   8195e8e <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EED1Ev>
 81954fd:	89 f0                	mov    %esi,%eax
 81954ff:	89 da                	mov    %ebx,%edx
 8195501:	eb 00                	jmp    8195503 <_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev+0x109>
 8195503:	89 d3                	mov    %edx,%ebx
 8195505:	89 c6                	mov    %eax,%esi
 8195507:	8b 45 08             	mov    0x8(%ebp),%eax
 819550a:	83 c0 0c             	add    $0xc,%eax
 819550d:	89 04 24             	mov    %eax,(%esp)
 8195510:	e8 07 09 00 00       	call   8195e1c <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EED1Ev>
 8195515:	89 f0                	mov    %esi,%eax
 8195517:	89 da                	mov    %ebx,%edx
 8195519:	eb 00                	jmp    819551b <_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev+0x121>
 819551b:	89 d3                	mov    %edx,%ebx
 819551d:	89 c6                	mov    %eax,%esi
 819551f:	8b 45 08             	mov    0x8(%ebp),%eax
 8195522:	89 04 24             	mov    %eax,(%esp)
 8195525:	e8 58 07 00 00       	call   8195c82 <_ZN4ARAD24Arad_InterfaceGameScriptD1Ev>
 819552a:	89 f0                	mov    %esi,%eax
 819552c:	89 da                	mov    %ebx,%edx
 819552e:	89 04 24             	mov    %eax,(%esp)
 8195531:	e8 1a e2 94 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager @ 0x81953fa

/* ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager(Arad_EventPeriodDataManager *this)

{
  string local_14 [7];
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 08195422 to 08195426 has its CatchHandler @ 0819545d */
  std::string::string(local_14,"Arad_EventPeriodDataManager",(allocator *)&local_d);
                    /* try { // try from 08195434 to 08195438 has its CatchHandler @ 0819543b */
  Arad_InterfaceGameScript::Arad_InterfaceGameScript
            ((Arad_InterfaceGameScript *)this,(string)local_14);
                    /* try { // try from 08195456 to 0819545a has its CatchHandler @ 0819545d */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  *(undefined ***)this = &PTR__Arad_EventPeriodDataManager_08b9ca40;
                    /* try { // try from 08195495 to 08195499 has its CatchHandler @ 0819551b */
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::vector
            ((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
              *)(this + 0xc));
                    /* try { // try from 081954a3 to 081954a7 has its CatchHandler @ 08195503 */
  std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>::
  vector((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>> *)
         (this + 0x18));
  Mutex::Mutex((Mutex *)(this + 0x24));
                    /* try { // try from 081954bf to 081954c3 has its CatchHandler @ 081954d5 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::list
            ((list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>> *)
             (this + 0x3c));
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## addUserRewardData

```asm
// === 08195994 ARAD::Arad_EventPeriodDataManager::addUserRewardData  [0x08195994-0x8195aa3] ===
 8195994:	55                   	push   %ebp
 8195995:	89 e5                	mov    %esp,%ebp
 8195997:	56                   	push   %esi
 8195998:	53                   	push   %ebx
 8195999:	83 ec 30             	sub    $0x30,%esp
 819599c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81959a3:	e9 de 00 00 00       	jmp    8195a86 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE+0xf2>
 81959a8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81959ab:	8b 45 10             	mov    0x10(%ebp),%eax
 81959ae:	83 c2 08             	add    $0x8,%edx
 81959b1:	8b 5c 90 0e          	mov    0xe(%eax,%edx,4),%ebx
 81959b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81959b8:	89 04 24             	mov    %eax,(%esp)
 81959bb:	e8 ae 49 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81959c0:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81959c3:	8b 55 10             	mov    0x10(%ebp),%edx
 81959c6:	8b 54 8a 06          	mov    0x6(%edx,%ecx,4),%edx
 81959ca:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81959ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 81959d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81959d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81959d9:	89 04 24             	mov    %eax,(%esp)
 81959dc:	e8 b3 03 00 00       	call   8195d94 <_ZN4ARAD19EventRewardItemAradC1Eijj>
 81959e1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81959e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81959e8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81959eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81959ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81959f2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81959f6:	8b 45 08             	mov    0x8(%ebp),%eax
 81959f9:	89 04 24             	mov    %eax,(%esp)
 81959fc:	e8 b5 fe ff ff       	call   81958b6 <_ZN4ARAD27Arad_EventPeriodDataManager10isRewardedENS_19EventRewardItemAradE>
 8195a01:	84 c0                	test   %al,%al
 8195a03:	74 64                	je     8195a69 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE+0xd5>
 8195a05:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8195a08:	8b 45 10             	mov    0x10(%ebp),%eax
 8195a0b:	8b 74 90 06          	mov    0x6(%eax,%edx,4),%esi
 8195a0f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8195a16:	ff 
 8195a17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8195a1a:	89 04 24             	mov    %eax,(%esp)
 8195a1d:	e8 7e 85 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8195a22:	89 c3                	mov    %eax,%ebx
 8195a24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8195a27:	89 04 24             	mov    %eax,(%esp)
 8195a2a:	e8 3f 49 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8195a2f:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8195a33:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8195a37:	89 44 24 14          	mov    %eax,0x14(%esp)
 8195a3b:	c7 44 24 10 c0 bc b9 	movl   $0x8b9bcc0,0x10(%esp)
 8195a42:	08 
 8195a43:	c7 44 24 0c e3 00 00 	movl   $0xe3,0xc(%esp)
 8195a4a:	00 
 8195a4b:	c7 44 24 08 00 c9 b9 	movl   $0x8b9c900,0x8(%esp)
 8195a52:	08 
 8195a53:	c7 44 24 04 a4 bb b9 	movl   $0x8b9bba4,0x4(%esp)
 8195a5a:	08 
 8195a5b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8195a62:	e8 a3 e1 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8195a67:	eb 19                	jmp    8195a82 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE+0xee>
 8195a69:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195a6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8195a70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8195a73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195a77:	8b 45 08             	mov    0x8(%ebp),%eax
 8195a7a:	89 04 24             	mov    %eax,(%esp)
 8195a7d:	e8 22 00 00 00       	call   8195aa4 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRNS_19EventRewardItemAradE>
 8195a82:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8195a86:	8b 45 10             	mov    0x10(%ebp),%eax
 8195a89:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8195a8d:	98                   	cwtl
 8195a8e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8195a91:	0f 9f c0             	setg   %al
 8195a94:	84 c0                	test   %al,%al
 8195a96:	0f 85 0c ff ff ff    	jne    81959a8 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE+0x14>
 8195a9c:	83 c4 30             	add    $0x30,%esp
 8195a9f:	5b                   	pop    %ebx
 8195aa0:	5e                   	pop    %esi
 8195aa1:	5d                   	pop    %ebp
 8195aa2:	c3                   	ret
 8195aa3:	90                   	nop

```

```c
// ARAD::Arad_EventPeriodDataManager::addUserRewardData @ 0x8195994

/* ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, arad::SigLoadRewardEventItem&) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::addUserRewardData
          (Arad_EventPeriodDataManager *this,CUser *param_1,SigLoadRewardEventItem *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < *(short *)(param_2 + 4); local_10 = local_10 + 1) {
    uVar1 = *(uint *)(param_2 + (local_10 + 8) * 4 + 0xe);
    uVar4 = CUser::get_acc_id(param_1);
    EventRewardItemArad::EventRewardItemArad
              ((EventRewardItemArad *)&local_1c,*(int *)(param_2 + local_10 * 4 + 6),uVar4,uVar1);
    cVar3 = isRewarded(this,local_1c,local_18,local_14);
    if (cVar3 == '\0') {
      addUserRewardData(this,param_1,(EventRewardItemArad *)&local_1c);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + local_10 * 4 + 6);
      uVar5 = CUser::get_charac_no(param_1,-1);
      uVar6 = CUser::get_acc_id(param_1);
      LogManager::logFormat
                (1,"localjapan/Arad_EventPeriodDataManager.cpp",
                 "void ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, arad::SigLoadRewardEventItem&)"
                 ,0xe3,"[FnReward] already reward item. (mid:%u, charac:%u, event:%d)",uVar6,uVar5,
                 uVar2);
    }
  }
  return;
}

```

---

## addUserRewardData_08195aa4

```asm
// === 08195aa4 ARAD::Arad_EventPeriodDataManager::addUserRewardData  [0x08195aa4-0x8195b05] ===
 8195aa4:	55                   	push   %ebp
 8195aa5:	89 e5                	mov    %esp,%ebp
 8195aa7:	56                   	push   %esi
 8195aa8:	53                   	push   %ebx
 8195aa9:	83 ec 20             	sub    $0x20,%esp
 8195aac:	8b 45 08             	mov    0x8(%ebp),%eax
 8195aaf:	83 c0 24             	add    $0x24,%eax
 8195ab2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195ab6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8195ab9:	89 04 24             	mov    %eax,(%esp)
 8195abc:	e8 8b f9 f6 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8195ac1:	8b 45 08             	mov    0x8(%ebp),%eax
 8195ac4:	8d 50 3c             	lea    0x3c(%eax),%edx
 8195ac7:	8b 45 10             	mov    0x10(%ebp),%eax
 8195aca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195ace:	89 14 24             	mov    %edx,(%esp)
 8195ad1:	e8 22 06 00 00       	call   81960f8 <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EE9push_backERKS1_>
 8195ad6:	eb 1b                	jmp    8195af3 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRNS_19EventRewardItemAradE+0x4f>
 8195ad8:	89 d3                	mov    %edx,%ebx
 8195ada:	89 c6                	mov    %eax,%esi
 8195adc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8195adf:	89 04 24             	mov    %eax,(%esp)
 8195ae2:	e8 81 f9 f6 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8195ae7:	89 f0                	mov    %esi,%eax
 8195ae9:	89 da                	mov    %ebx,%edx
 8195aeb:	89 04 24             	mov    %eax,(%esp)
 8195aee:	e8 5d dc 94 00       	call   8ae3750 <_Unwind_Resume>
 8195af3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8195af6:	89 04 24             	mov    %eax,(%esp)
 8195af9:	e8 6a f9 f6 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8195afe:	83 c4 20             	add    $0x20,%esp
 8195b01:	5b                   	pop    %ebx
 8195b02:	5e                   	pop    %esi
 8195b03:	5d                   	pop    %ebp
 8195b04:	c3                   	ret
 8195b05:	90                   	nop

```

```c
// ARAD::Arad_EventPeriodDataManager::addUserRewardData @ 0x8195aa4

/* ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, ARAD::EventRewardItemArad&) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::addUserRewardData
          (Arad_EventPeriodDataManager *this,CUser *param_1,EventRewardItemArad *param_2)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0x24));
                    /* try { // try from 08195ad1 to 08195ad5 has its CatchHandler @ 08195ad8 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::push_back
            ((list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>> *)
             (this + 0x3c),param_2);
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## checkCreateTime

```asm
// === 08195794 ARAD::Arad_EventPeriodDataManager::checkCreateTime  [0x08195794-0x819589d] ===
 8195794:	55                   	push   %ebp
 8195795:	89 e5                	mov    %esp,%ebp
 8195797:	83 ec 38             	sub    $0x38,%esp
 819579a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819579d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81957a1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81957a4:	89 04 24             	mov    %eax,(%esp)
 81957a7:	e8 c6 05 00 00       	call   8195d72 <_ZN4ARAD17SearchEventPeriodC1E22ENUM_REPEAT_EVENT_CODE>
 81957ac:	8b 45 08             	mov    0x8(%ebp),%eax
 81957af:	8d 50 0c             	lea    0xc(%eax),%edx
 81957b2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81957b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81957b9:	89 04 24             	mov    %eax,(%esp)
 81957bc:	e8 d5 07 00 00       	call   8195f96 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE3endEv>
 81957c1:	83 ec 04             	sub    $0x4,%esp
 81957c4:	8b 45 08             	mov    0x8(%ebp),%eax
 81957c7:	8d 50 0c             	lea    0xc(%eax),%edx
 81957ca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81957cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81957d1:	89 04 24             	mov    %eax,(%esp)
 81957d4:	e8 99 07 00 00       	call   8195f72 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE5beginEv>
 81957d9:	83 ec 04             	sub    $0x4,%esp
 81957dc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81957df:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81957e2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81957e6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81957e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81957ed:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81957f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81957f4:	89 04 24             	mov    %eax,(%esp)
 81957f7:	e8 c0 07 00 00       	call   8195fbc <_ZSt7find_ifIN9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS4_SaIS4_EEEENS2_17SearchEventPeriodEET_SB_SB_T0_>
 81957fc:	83 ec 04             	sub    $0x4,%esp
 81957ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8195802:	8d 50 0c             	lea    0xc(%eax),%edx
 8195805:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195808:	89 54 24 04          	mov    %edx,0x4(%esp)
 819580c:	89 04 24             	mov    %eax,(%esp)
 819580f:	e8 82 07 00 00       	call   8195f96 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE3endEv>
 8195814:	83 ec 04             	sub    $0x4,%esp
 8195817:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819581a:	89 44 24 04          	mov    %eax,0x4(%esp)
 819581e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8195821:	89 04 24             	mov    %eax,(%esp)
 8195824:	e8 e7 07 00 00       	call   8196010 <_ZN9__gnu_cxxneIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8195829:	84 c0                	test   %al,%al
 819582b:	74 69                	je     8195896 <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj+0x102>
 819582d:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8195831:	a1 10 f7 41 09       	mov    0x941f710,%eax
 8195836:	8b 55 14             	mov    0x14(%ebp),%edx
 8195839:	89 54 24 04          	mov    %edx,0x4(%esp)
 819583d:	89 04 24             	mov    %eax,(%esp)
 8195840:	e8 01 3b f7 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 8195845:	84 c0                	test   %al,%al
 8195847:	74 04                	je     819584d <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj+0xb9>
 8195849:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 819584d:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8195851:	74 13                	je     8195866 <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj+0xd2>
 8195853:	8b 45 08             	mov    0x8(%ebp),%eax
 8195856:	8b 40 08             	mov    0x8(%eax),%eax
 8195859:	69 c0 80 ae fe ff    	imul   $0xfffeae80,%eax,%eax
 819585f:	05 50 d2 05 50       	add    $0x5005d250,%eax
 8195864:	eb 05                	jmp    819586b <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj+0xd7>
 8195866:	b8 50 d2 05 50       	mov    $0x5005d250,%eax
 819586b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819586e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8195871:	89 04 24             	mov    %eax,(%esp)
 8195874:	e8 c3 07 00 00       	call   819603c <_ZNK9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS3_SaIS3_EEEptEv>
 8195879:	8b 40 08             	mov    0x8(%eax),%eax
 819587c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819587f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8195882:	3b 45 10             	cmp    0x10(%ebp),%eax
 8195885:	77 0f                	ja     8195896 <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj+0x102>
 8195887:	8b 45 10             	mov    0x10(%ebp),%eax
 819588a:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 819588d:	73 07                	jae    8195896 <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj+0x102>
 819588f:	b8 01 00 00 00       	mov    $0x1,%eax
 8195894:	eb 05                	jmp    819589b <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj+0x107>
 8195896:	b8 00 00 00 00       	mov    $0x0,%eax
 819589b:	c9                   	leave
 819589c:	c3                   	ret
 819589d:	90                   	nop

```

```c
// ARAD::Arad_EventPeriodDataManager::checkCreateTime @ 0x8195794

/* ARAD::Arad_EventPeriodDataManager::checkCreateTime(ENUM_REPEAT_EVENT_CODE, unsigned int, unsigned
   int) */

undefined4 __thiscall
ARAD::Arad_EventPeriodDataManager::checkCreateTime
          (Arad_EventPeriodDataManager *this,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
  local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  __normal_iterator local_1c [7];
  char local_15;
  uint local_14;
  
  SearchEventPeriod::SearchEventPeriod((SearchEventPeriod *)&local_28,param_2);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::begin
            ();
  std::
  find_if<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>,ARAD::SearchEventPeriod>
            (local_2c,local_20,local_24,local_28);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  bVar1 = __gnu_cxx::operator!=(local_2c,local_1c);
  if (bVar1) {
    local_15 = '\0';
    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,param_4);
    if (cVar2 != '\0') {
      local_15 = '\x01';
    }
    if (local_15 == '\0') {
      local_14 = 0x5005d250;
    }
    else {
      local_14 = *(int *)(this + 8) * -0x15180 + 0x5005d250;
    }
    iVar3 = __gnu_cxx::
            __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
            ::operator->(local_2c);
    if ((local_14 <= param_3) && (param_3 < *(uint *)(iVar3 + 8))) {
      return 1;
    }
  }
  return 0;
}

```

---

## clearScriptData

```asm
// === 08195670 ARAD::Arad_EventPeriodDataManager::clearScriptData  [0x08195670-0x8195685] ===
 8195670:	55                   	push   %ebp
 8195671:	89 e5                	mov    %esp,%ebp
 8195673:	83 ec 18             	sub    $0x18,%esp
 8195676:	8b 45 08             	mov    0x8(%ebp),%eax
 8195679:	83 c0 0c             	add    $0xc,%eax
 819567c:	89 04 24             	mov    %eax,(%esp)
 819567f:	e8 d2 08 00 00       	call   8195f56 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE5clearEv>
 8195684:	c9                   	leave
 8195685:	c3                   	ret

```

```c
// ARAD::Arad_EventPeriodDataManager::clearScriptData @ 0x8195670

/* ARAD::Arad_EventPeriodDataManager::clearScriptData() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::clearScriptData(Arad_EventPeriodDataManager *this)

{
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::clear
            ((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
              *)(this + 0xc));
  return;
}

```

---

## delUserRewardData

```asm
// === 08195b06 ARAD::Arad_EventPeriodDataManager::delUserRewardData  [0x08195b06-0x8195bff] ===
 8195b06:	55                   	push   %ebp
 8195b07:	89 e5                	mov    %esp,%ebp
 8195b09:	56                   	push   %esi
 8195b0a:	53                   	push   %ebx
 8195b0b:	83 ec 30             	sub    $0x30,%esp
 8195b0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8195b11:	83 c0 24             	add    $0x24,%eax
 8195b14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195b18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8195b1b:	89 04 24             	mov    %eax,(%esp)
 8195b1e:	e8 29 f9 f6 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8195b23:	8b 45 08             	mov    0x8(%ebp),%eax
 8195b26:	8d 50 3c             	lea    0x3c(%eax),%edx
 8195b29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195b2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195b30:	89 04 24             	mov    %eax,(%esp)
 8195b33:	e8 0e 05 00 00       	call   8196046 <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EE5beginEv>
 8195b38:	83 ec 04             	sub    $0x4,%esp
 8195b3b:	eb 5f                	jmp    8195b9c <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser+0x96>
 8195b3d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195b40:	89 04 24             	mov    %eax,(%esp)
 8195b43:	e8 e6 05 00 00       	call   819612e <_ZNKSt14_List_iteratorIN4ARAD19EventRewardItemAradEEptEv>
 8195b48:	8b 58 04             	mov    0x4(%eax),%ebx
 8195b4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8195b4e:	89 04 24             	mov    %eax,(%esp)
 8195b51:	e8 18 48 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8195b56:	39 c3                	cmp    %eax,%ebx
 8195b58:	0f 94 c0             	sete   %al
 8195b5b:	84 c0                	test   %al,%al
 8195b5d:	74 32                	je     8195b91 <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser+0x8b>
 8195b5f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8195b62:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8195b65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195b68:	89 04 24             	mov    %eax,(%esp)
 8195b6b:	e8 cc 05 00 00       	call   819613c <_ZNSt14_List_iteratorIN4ARAD19EventRewardItemAradEEppEv>
 8195b70:	8b 45 08             	mov    0x8(%ebp),%eax
 8195b73:	8d 48 3c             	lea    0x3c(%eax),%ecx
 8195b76:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8195b79:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8195b7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8195b80:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8195b84:	89 04 24             	mov    %eax,(%esp)
 8195b87:	e8 c4 05 00 00       	call   8196150 <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EE5eraseESt14_List_iteratorIS1_E>
 8195b8c:	83 ec 04             	sub    $0x4,%esp
 8195b8f:	eb 0b                	jmp    8195b9c <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser+0x96>
 8195b91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195b94:	89 04 24             	mov    %eax,(%esp)
 8195b97:	e8 a0 05 00 00       	call   819613c <_ZNSt14_List_iteratorIN4ARAD19EventRewardItemAradEEppEv>
 8195b9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8195b9f:	8d 50 3c             	lea    0x3c(%eax),%edx
 8195ba2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8195ba5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195ba9:	89 04 24             	mov    %eax,(%esp)
 8195bac:	e8 bb 04 00 00       	call   819606c <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EE3endEv>
 8195bb1:	83 ec 04             	sub    $0x4,%esp
 8195bb4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8195bb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195bbb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195bbe:	89 04 24             	mov    %eax,(%esp)
 8195bc1:	e8 1e 05 00 00       	call   81960e4 <_ZNKSt14_List_iteratorIN4ARAD19EventRewardItemAradEEneERKS2_>
 8195bc6:	84 c0                	test   %al,%al
 8195bc8:	0f 85 6f ff ff ff    	jne    8195b3d <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser+0x37>
 8195bce:	eb 1b                	jmp    8195beb <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser+0xe5>
 8195bd0:	89 d3                	mov    %edx,%ebx
 8195bd2:	89 c6                	mov    %eax,%esi
 8195bd4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8195bd7:	89 04 24             	mov    %eax,(%esp)
 8195bda:	e8 89 f8 f6 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8195bdf:	89 f0                	mov    %esi,%eax
 8195be1:	89 da                	mov    %ebx,%edx
 8195be3:	89 04 24             	mov    %eax,(%esp)
 8195be6:	e8 65 db 94 00       	call   8ae3750 <_Unwind_Resume>
 8195beb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8195bee:	89 04 24             	mov    %eax,(%esp)
 8195bf1:	e8 72 f8 f6 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8195bf6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8195bf9:	83 c4 00             	add    $0x0,%esp
 8195bfc:	5b                   	pop    %ebx
 8195bfd:	5e                   	pop    %esi
 8195bfe:	5d                   	pop    %ebp
 8195bff:	c3                   	ret

```

```c
// ARAD::Arad_EventPeriodDataManager::delUserRewardData @ 0x8195b06

/* ARAD::Arad_EventPeriodDataManager::delUserRewardData(CUser*) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::delUserRewardData
          (Arad_EventPeriodDataManager *this,CUser *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c;
  Guard<Mutex> local_18 [4];
  _List_iterator local_14 [4];
  undefined1 local_10 [4];
  
  Guard<Mutex>::Guard(local_18,(Mutex *)(this + 0x24));
                    /* try { // try from 08195b33 to 08195bb0 has its CatchHandler @ 08195bd0 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::begin();
  while( true ) {
    std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::end();
    cVar2 = std::_List_iterator<ARAD::EventRewardItemArad>::operator!=
                      ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c,local_14);
    if (cVar2 == '\0') break;
    iVar3 = std::_List_iterator<ARAD::EventRewardItemArad>::operator->
                      ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c);
    iVar3 = *(int *)(iVar3 + 4);
    iVar4 = CUser::get_acc_id(param_1);
    uVar1 = local_1c;
    if (iVar3 == iVar4) {
      std::_List_iterator<ARAD::EventRewardItemArad>::operator++
                ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c);
      std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::erase
                (local_10,this + 0x3c,uVar1);
    }
    else {
      std::_List_iterator<ARAD::EventRewardItemArad>::operator++
                ((_List_iterator<ARAD::EventRewardItemArad> *)&local_1c);
    }
  }
  Guard<Mutex>::~Guard(local_18);
  return;
}

```

---

## isApplied

```asm
// === 081956b0 ARAD::Arad_EventPeriodDataManager::isApplied  [0x081956b0-0x8195793] ===
 81956b0:	55                   	push   %ebp
 81956b1:	89 e5                	mov    %esp,%ebp
 81956b3:	83 ec 38             	sub    $0x38,%esp
 81956b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81956b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81956bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81956c0:	89 04 24             	mov    %eax,(%esp)
 81956c3:	e8 aa 06 00 00       	call   8195d72 <_ZN4ARAD17SearchEventPeriodC1E22ENUM_REPEAT_EVENT_CODE>
 81956c8:	8b 45 08             	mov    0x8(%ebp),%eax
 81956cb:	8d 50 0c             	lea    0xc(%eax),%edx
 81956ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81956d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81956d5:	89 04 24             	mov    %eax,(%esp)
 81956d8:	e8 b9 08 00 00       	call   8195f96 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE3endEv>
 81956dd:	83 ec 04             	sub    $0x4,%esp
 81956e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81956e3:	8d 50 0c             	lea    0xc(%eax),%edx
 81956e6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81956e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81956ed:	89 04 24             	mov    %eax,(%esp)
 81956f0:	e8 7d 08 00 00       	call   8195f72 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE5beginEv>
 81956f5:	83 ec 04             	sub    $0x4,%esp
 81956f8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81956fb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81956fe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8195702:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8195705:	89 54 24 08          	mov    %edx,0x8(%esp)
 8195709:	8b 55 ec             	mov    -0x14(%ebp),%edx
 819570c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195710:	89 04 24             	mov    %eax,(%esp)
 8195713:	e8 a4 08 00 00       	call   8195fbc <_ZSt7find_ifIN9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS4_SaIS4_EEEENS2_17SearchEventPeriodEET_SB_SB_T0_>
 8195718:	83 ec 04             	sub    $0x4,%esp
 819571b:	8b 45 08             	mov    0x8(%ebp),%eax
 819571e:	8d 50 0c             	lea    0xc(%eax),%edx
 8195721:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8195724:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195728:	89 04 24             	mov    %eax,(%esp)
 819572b:	e8 66 08 00 00       	call   8195f96 <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EE3endEv>
 8195730:	83 ec 04             	sub    $0x4,%esp
 8195733:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8195736:	89 44 24 04          	mov    %eax,0x4(%esp)
 819573a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819573d:	89 04 24             	mov    %eax,(%esp)
 8195740:	e8 cb 08 00 00       	call   8196010 <_ZN9__gnu_cxxneIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8195745:	84 c0                	test   %al,%al
 8195747:	74 43                	je     819578c <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj+0xdc>
 8195749:	8b 45 10             	mov    0x10(%ebp),%eax
 819574c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819574f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8195752:	89 04 24             	mov    %eax,(%esp)
 8195755:	e8 e2 08 00 00       	call   819603c <_ZNK9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS3_SaIS3_EEEptEv>
 819575a:	8b 40 04             	mov    0x4(%eax),%eax
 819575d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8195760:	77 1a                	ja     819577c <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj+0xcc>
 8195762:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8195765:	89 04 24             	mov    %eax,(%esp)
 8195768:	e8 cf 08 00 00       	call   819603c <_ZNK9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT16SEventPeriodDataESt6vectorIS3_SaIS3_EEEptEv>
 819576d:	8b 40 08             	mov    0x8(%eax),%eax
 8195770:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8195773:	76 07                	jbe    819577c <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj+0xcc>
 8195775:	b8 01 00 00 00       	mov    $0x1,%eax
 819577a:	eb 05                	jmp    8195781 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj+0xd1>
 819577c:	b8 00 00 00 00       	mov    $0x0,%eax
 8195781:	84 c0                	test   %al,%al
 8195783:	74 07                	je     819578c <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj+0xdc>
 8195785:	b8 01 00 00 00       	mov    $0x1,%eax
 819578a:	eb 05                	jmp    8195791 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj+0xe1>
 819578c:	b8 00 00 00 00       	mov    $0x0,%eax
 8195791:	c9                   	leave
 8195792:	c3                   	ret
 8195793:	90                   	nop

```

```c
// ARAD::Arad_EventPeriodDataManager::isApplied @ 0x81956b0

/* ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int) */

undefined4 __thiscall
ARAD::Arad_EventPeriodDataManager::isApplied(undefined4 this,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  uint local_10;
  
  SearchEventPeriod::SearchEventPeriod((SearchEventPeriod *)&local_20,param_2);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::begin
            ();
  std::
  find_if<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>,ARAD::SearchEventPeriod>
            (local_24,local_18,local_1c,local_20);
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::end();
  bVar1 = __gnu_cxx::operator!=(local_24,local_14);
  if (bVar1) {
    local_10 = param_3;
    iVar2 = __gnu_cxx::
            __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
            ::operator->(local_24);
    if ((local_10 < *(uint *)(iVar2 + 4)) ||
       (iVar2 = __gnu_cxx::
                __normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>
                ::operator->(local_24), *(uint *)(iVar2 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

```

---

## isRewarded

```asm
// === 081958b6 ARAD::Arad_EventPeriodDataManager::isRewarded  [0x081958b6-0x8195993] ===
 81958b6:	55                   	push   %ebp
 81958b7:	89 e5                	mov    %esp,%ebp
 81958b9:	56                   	push   %esi
 81958ba:	53                   	push   %ebx
 81958bb:	83 ec 30             	sub    $0x30,%esp
 81958be:	8b 45 08             	mov    0x8(%ebp),%eax
 81958c1:	83 c0 24             	add    $0x24,%eax
 81958c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81958c8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81958cb:	89 04 24             	mov    %eax,(%esp)
 81958ce:	e8 79 fb f6 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 81958d3:	8b 45 08             	mov    0x8(%ebp),%eax
 81958d6:	8d 50 3c             	lea    0x3c(%eax),%edx
 81958d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81958dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81958e0:	89 04 24             	mov    %eax,(%esp)
 81958e3:	e8 84 07 00 00       	call   819606c <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EE3endEv>
 81958e8:	83 ec 04             	sub    $0x4,%esp
 81958eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81958ee:	8d 50 3c             	lea    0x3c(%eax),%edx
 81958f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81958f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81958f8:	89 04 24             	mov    %eax,(%esp)
 81958fb:	e8 46 07 00 00       	call   8196046 <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EE5beginEv>
 8195900:	83 ec 04             	sub    $0x4,%esp
 8195903:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8195906:	8d 55 0c             	lea    0xc(%ebp),%edx
 8195909:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819590d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8195910:	89 54 24 08          	mov    %edx,0x8(%esp)
 8195914:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8195917:	89 54 24 04          	mov    %edx,0x4(%esp)
 819591b:	89 04 24             	mov    %eax,(%esp)
 819591e:	e8 6c 07 00 00       	call   819608f <_ZSt4findISt14_List_iteratorIN4ARAD19EventRewardItemAradEES2_ET_S4_S4_RKT0_>
 8195923:	83 ec 04             	sub    $0x4,%esp
 8195926:	8b 45 08             	mov    0x8(%ebp),%eax
 8195929:	8d 50 3c             	lea    0x3c(%eax),%edx
 819592c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 819592f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195933:	89 04 24             	mov    %eax,(%esp)
 8195936:	e8 31 07 00 00       	call   819606c <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EE3endEv>
 819593b:	83 ec 04             	sub    $0x4,%esp
 819593e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8195941:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195945:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8195948:	89 04 24             	mov    %eax,(%esp)
 819594b:	e8 94 07 00 00       	call   81960e4 <_ZNKSt14_List_iteratorIN4ARAD19EventRewardItemAradEEneERKS2_>
 8195950:	84 c0                	test   %al,%al
 8195952:	74 07                	je     819595b <_ZN4ARAD27Arad_EventPeriodDataManager10isRewardedENS_19EventRewardItemAradE+0xa5>
 8195954:	bb 01 00 00 00       	mov    $0x1,%ebx
 8195959:	eb 22                	jmp    819597d <_ZN4ARAD27Arad_EventPeriodDataManager10isRewardedENS_19EventRewardItemAradE+0xc7>
 819595b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8195960:	eb 1b                	jmp    819597d <_ZN4ARAD27Arad_EventPeriodDataManager10isRewardedENS_19EventRewardItemAradE+0xc7>
 8195962:	89 d3                	mov    %edx,%ebx
 8195964:	89 c6                	mov    %eax,%esi
 8195966:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195969:	89 04 24             	mov    %eax,(%esp)
 819596c:	e8 f7 fa f6 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8195971:	89 f0                	mov    %esi,%eax
 8195973:	89 da                	mov    %ebx,%edx
 8195975:	89 04 24             	mov    %eax,(%esp)
 8195978:	e8 d3 dd 94 00       	call   8ae3750 <_Unwind_Resume>
 819597d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8195980:	89 04 24             	mov    %eax,(%esp)
 8195983:	e8 e0 fa f6 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8195988:	89 d8                	mov    %ebx,%eax
 819598a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 819598d:	83 c4 00             	add    $0x0,%esp
 8195990:	5b                   	pop    %ebx
 8195991:	5e                   	pop    %esi
 8195992:	5d                   	pop    %ebp
 8195993:	c3                   	ret

```

```c
// ARAD::Arad_EventPeriodDataManager::isRewarded @ 0x81958b6

/* ARAD::Arad_EventPeriodDataManager::isRewarded(ARAD::EventRewardItemArad) */

bool ARAD::Arad_EventPeriodDataManager::isRewarded(int param_1)

{
  char cVar1;
  _List_iterator local_20 [4];
  Guard<Mutex> local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  _List_iterator<ARAD::EventRewardItemArad> local_10 [4];
  
  Guard<Mutex>::Guard(local_1c,(Mutex *)(param_1 + 0x24));
                    /* try { // try from 081958e3 to 0819593a has its CatchHandler @ 08195962 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::end();
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::begin();
  std::find<std::_List_iterator<ARAD::EventRewardItemArad>,ARAD::EventRewardItemArad>
            (local_20,local_14,local_18,&stack0x00000008);
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::end();
  cVar1 = std::_List_iterator<ARAD::EventRewardItemArad>::operator!=(local_10,local_20);
  Guard<Mutex>::~Guard(local_1c);
  return cVar1 != '\0';
}

```

---

## isRunning

```asm
// === 08195686 ARAD::Arad_EventPeriodDataManager::isRunning  [0x08195686-0x81956af] ===
 8195686:	55                   	push   %ebp
 8195687:	89 e5                	mov    %esp,%ebp
 8195689:	83 ec 18             	sub    $0x18,%esp
 819568c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8195693:	e8 14 02 fb ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8195698:	89 44 24 08          	mov    %eax,0x8(%esp)
 819569c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819569f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81956a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81956a6:	89 04 24             	mov    %eax,(%esp)
 81956a9:	e8 02 00 00 00       	call   81956b0 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj>
 81956ae:	c9                   	leave
 81956af:	c3                   	ret

```

```c
// ARAD::Arad_EventPeriodDataManager::isRunning @ 0x8195686

/* ARAD::Arad_EventPeriodDataManager::isRunning(ENUM_REPEAT_EVENT_CODE) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::isRunning(Arad_EventPeriodDataManager *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  isApplied(this,param_2,uVar1);
  return;
}

```

---

## loadScriptData

```asm
// === 08195650 ARAD::Arad_EventPeriodDataManager::loadScriptData  [0x08195650-0x819566f] ===
 8195650:	55                   	push   %ebp
 8195651:	89 e5                	mov    %esp,%ebp
 8195653:	83 ec 18             	sub    $0x18,%esp
 8195656:	8b 45 08             	mov    0x8(%ebp),%eax
 8195659:	8d 50 18             	lea    0x18(%eax),%edx
 819565c:	8b 45 08             	mov    0x8(%ebp),%eax
 819565f:	83 c0 0c             	add    $0xc,%eax
 8195662:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195666:	89 04 24             	mov    %eax,(%esp)
 8195669:	e8 6a e5 71 00       	call   88b3bd8 <_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE>
 819566e:	c9                   	leave
 819566f:	c3                   	ret

```

```c
// ARAD::Arad_EventPeriodDataManager::loadScriptData @ 0x8195650

/* ARAD::Arad_EventPeriodDataManager::loadScriptData() */

void __thiscall ARAD::Arad_EventPeriodDataManager::loadScriptData(Arad_EventPeriodDataManager *this)

{
  SCRIPT::importAradEventScript((vector *)(this + 0xc),(vector *)(this + 0x18));
  return;
}

```

---

## setCreatePeriod_GM

```asm
// === 0819589e ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM  [0x0819589e-0x81958b5] ===
 819589e:	55                   	push   %ebp
 819589f:	89 e5                	mov    %esp,%ebp
 81958a1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81958a5:	78 0b                	js     81958b2 <_ZN4ARAD27Arad_EventPeriodDataManager18setCreatePeriod_GMEi+0x14>
 81958a7:	8b 45 08             	mov    0x8(%ebp),%eax
 81958aa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81958ad:	89 50 08             	mov    %edx,0x8(%eax)
 81958b0:	eb 01                	jmp    81958b3 <_ZN4ARAD27Arad_EventPeriodDataManager18setCreatePeriod_GMEi+0x15>
 81958b2:	90                   	nop
 81958b3:	5d                   	pop    %ebp
 81958b4:	c3                   	ret
 81958b5:	90                   	nop

```

```c
// ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM @ 0x819589e

/* ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM(int) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM(Arad_EventPeriodDataManager *this,int param_1)

{
  if (-1 < param_1) {
    *(int *)(this + 8) = param_1;
  }
  return;
}

```

---

## ~Arad_EventPeriodDataManager

```asm
// === 08195536 ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager  [0x08195536-0x8195631] ===
 8195536:	55                   	push   %ebp
 8195537:	89 e5                	mov    %esp,%ebp
 8195539:	56                   	push   %esi
 819553a:	53                   	push   %ebx
 819553b:	83 ec 10             	sub    $0x10,%esp
 819553e:	8b 45 08             	mov    0x8(%ebp),%eax
 8195541:	c7 00 40 ca b9 08    	movl   $0x8b9ca40,(%eax)
 8195547:	8b 45 08             	mov    0x8(%ebp),%eax
 819554a:	89 04 24             	mov    %eax,(%esp)
 819554d:	e8 1e 01 00 00       	call   8195670 <_ZN4ARAD27Arad_EventPeriodDataManager15clearScriptDataEv>
 8195552:	eb 18                	jmp    819556c <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0x36>
 8195554:	89 d3                	mov    %edx,%ebx
 8195556:	89 c6                	mov    %eax,%esi
 8195558:	8b 45 08             	mov    0x8(%ebp),%eax
 819555b:	83 c0 3c             	add    $0x3c,%eax
 819555e:	89 04 24             	mov    %eax,(%esp)
 8195561:	e8 8e 08 00 00       	call   8195df4 <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EED1Ev>
 8195566:	89 f0                	mov    %esi,%eax
 8195568:	89 da                	mov    %ebx,%edx
 819556a:	eb 10                	jmp    819557c <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0x46>
 819556c:	8b 45 08             	mov    0x8(%ebp),%eax
 819556f:	83 c0 3c             	add    $0x3c,%eax
 8195572:	89 04 24             	mov    %eax,(%esp)
 8195575:	e8 7a 08 00 00       	call   8195df4 <_ZNSt4listIN4ARAD19EventRewardItemAradESaIS1_EED1Ev>
 819557a:	eb 2e                	jmp    81955aa <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0x74>
 819557c:	89 d3                	mov    %edx,%ebx
 819557e:	89 c6                	mov    %eax,%esi
 8195580:	8b 45 08             	mov    0x8(%ebp),%eax
 8195583:	83 c0 24             	add    $0x24,%eax
 8195586:	89 04 24             	mov    %eax,(%esp)
 8195589:	e8 a0 5e f3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 819558e:	89 f0                	mov    %esi,%eax
 8195590:	89 da                	mov    %ebx,%edx
 8195592:	89 d3                	mov    %edx,%ebx
 8195594:	89 c6                	mov    %eax,%esi
 8195596:	8b 45 08             	mov    0x8(%ebp),%eax
 8195599:	83 c0 18             	add    $0x18,%eax
 819559c:	89 04 24             	mov    %eax,(%esp)
 819559f:	e8 ea 08 00 00       	call   8195e8e <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EED1Ev>
 81955a4:	89 f0                	mov    %esi,%eax
 81955a6:	89 da                	mov    %ebx,%edx
 81955a8:	eb 1e                	jmp    81955c8 <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0x92>
 81955aa:	8b 45 08             	mov    0x8(%ebp),%eax
 81955ad:	83 c0 24             	add    $0x24,%eax
 81955b0:	89 04 24             	mov    %eax,(%esp)
 81955b3:	e8 76 5e f3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 81955b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81955bb:	83 c0 18             	add    $0x18,%eax
 81955be:	89 04 24             	mov    %eax,(%esp)
 81955c1:	e8 c8 08 00 00       	call   8195e8e <_ZNSt6vectorIN4ARAD6SCRIPT17SRewardPeriodDataESaIS2_EED1Ev>
 81955c6:	eb 18                	jmp    81955e0 <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0xaa>
 81955c8:	89 d3                	mov    %edx,%ebx
 81955ca:	89 c6                	mov    %eax,%esi
 81955cc:	8b 45 08             	mov    0x8(%ebp),%eax
 81955cf:	83 c0 0c             	add    $0xc,%eax
 81955d2:	89 04 24             	mov    %eax,(%esp)
 81955d5:	e8 42 08 00 00       	call   8195e1c <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EED1Ev>
 81955da:	89 f0                	mov    %esi,%eax
 81955dc:	89 da                	mov    %ebx,%edx
 81955de:	eb 10                	jmp    81955f0 <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0xba>
 81955e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81955e3:	83 c0 0c             	add    $0xc,%eax
 81955e6:	89 04 24             	mov    %eax,(%esp)
 81955e9:	e8 2e 08 00 00       	call   8195e1c <_ZNSt6vectorIN4ARAD6SCRIPT16SEventPeriodDataESaIS2_EED1Ev>
 81955ee:	eb 1b                	jmp    819560b <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0xd5>
 81955f0:	89 d3                	mov    %edx,%ebx
 81955f2:	89 c6                	mov    %eax,%esi
 81955f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81955f7:	89 04 24             	mov    %eax,(%esp)
 81955fa:	e8 83 06 00 00       	call   8195c82 <_ZN4ARAD24Arad_InterfaceGameScriptD1Ev>
 81955ff:	89 f0                	mov    %esi,%eax
 8195601:	89 da                	mov    %ebx,%edx
 8195603:	89 04 24             	mov    %eax,(%esp)
 8195606:	e8 45 e1 94 00       	call   8ae3750 <_Unwind_Resume>
 819560b:	8b 45 08             	mov    0x8(%ebp),%eax
 819560e:	89 04 24             	mov    %eax,(%esp)
 8195611:	e8 6c 06 00 00       	call   8195c82 <_ZN4ARAD24Arad_InterfaceGameScriptD1Ev>
 8195616:	b8 00 00 00 00       	mov    $0x0,%eax
 819561b:	84 c0                	test   %al,%al
 819561d:	74 0b                	je     819562a <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev+0xf4>
 819561f:	8b 45 08             	mov    0x8(%ebp),%eax
 8195622:	89 04 24             	mov    %eax,(%esp)
 8195625:	e8 c6 ee 58 00       	call   87244f0 <_ZdlPv>
 819562a:	83 c4 10             	add    $0x10,%esp
 819562d:	5b                   	pop    %ebx
 819562e:	5e                   	pop    %esi
 819562f:	5d                   	pop    %ebp
 8195630:	c3                   	ret
 8195631:	90                   	nop

```

```c
// ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager @ 0x8195536

/* WARNING: Removing unreachable block (ram,0x0819561f) */
/* ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager(Arad_EventPeriodDataManager *this)

{
  *(undefined ***)this = &PTR__Arad_EventPeriodDataManager_08b9ca40;
                    /* try { // try from 0819554d to 08195551 has its CatchHandler @ 08195554 */
  clearScriptData(this);
                    /* try { // try from 08195575 to 08195579 has its CatchHandler @ 0819557c */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::~list
            ((list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>> *)
             (this + 0x3c));
  Mutex::~Mutex((Mutex *)(this + 0x24));
                    /* try { // try from 081955c1 to 081955c5 has its CatchHandler @ 081955c8 */
  std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>::
  ~vector((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>> *
          )(this + 0x18));
                    /* try { // try from 081955e9 to 081955ed has its CatchHandler @ 081955f0 */
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::
  ~vector((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>> *)
          (this + 0xc));
  Arad_InterfaceGameScript::~Arad_InterfaceGameScript((Arad_InterfaceGameScript *)this);
  return;
}

```

---

## ~Arad_EventPeriodDataManager_08195632

```asm
// === 08195632 ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager  [0x08195632-0x819564f] ===
 8195632:	55                   	push   %ebp
 8195633:	89 e5                	mov    %esp,%ebp
 8195635:	83 ec 18             	sub    $0x18,%esp
 8195638:	8b 45 08             	mov    0x8(%ebp),%eax
 819563b:	89 04 24             	mov    %eax,(%esp)
 819563e:	e8 f3 fe ff ff       	call   8195536 <_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev>
 8195643:	8b 45 08             	mov    0x8(%ebp),%eax
 8195646:	89 04 24             	mov    %eax,(%esp)
 8195649:	e8 a2 ee 58 00       	call   87244f0 <_ZdlPv>
 819564e:	c9                   	leave
 819564f:	c3                   	ret

```

```c
// ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager @ 0x8195632

/* ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager(Arad_EventPeriodDataManager *this)

{
  ~Arad_EventPeriodDataManager(this);
  operator_delete(this);
  return;
}

```

