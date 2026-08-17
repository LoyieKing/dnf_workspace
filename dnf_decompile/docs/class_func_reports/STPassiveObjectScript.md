# STPassiveObjectScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## STPassiveObjectScript

```asm
// === 08a3a538 STPassiveObjectScript::STPassiveObjectScript  [0x08a3a538-0x8a3a9e5] ===
 8a3a538:	55                   	push   %ebp
 8a3a539:	89 e5                	mov    %esp,%ebp
 8a3a53b:	56                   	push   %esi
 8a3a53c:	53                   	push   %ebx
 8a3a53d:	83 ec 10             	sub    $0x10,%esp
 8a3a540:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a543:	83 c0 04             	add    $0x4,%eax
 8a3a546:	89 04 24             	mov    %eax,(%esp)
 8a3a549:	e8 82 c0 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a54e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a551:	83 c0 08             	add    $0x8,%eax
 8a3a554:	89 04 24             	mov    %eax,(%esp)
 8a3a557:	e8 74 c0 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a55c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a55f:	83 c0 28             	add    $0x28,%eax
 8a3a562:	89 04 24             	mov    %eax,(%esp)
 8a3a565:	e8 42 3c 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a3a56a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a56d:	83 c0 34             	add    $0x34,%eax
 8a3a570:	89 04 24             	mov    %eax,(%esp)
 8a3a573:	e8 58 c0 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a578:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a57b:	83 c0 38             	add    $0x38,%eax
 8a3a57e:	89 04 24             	mov    %eax,(%esp)
 8a3a581:	e8 da 29 69 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 8a3a586:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a589:	83 c0 44             	add    $0x44,%eax
 8a3a58c:	89 04 24             	mov    %eax,(%esp)
 8a3a58f:	e8 3c c0 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a594:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a597:	83 c0 48             	add    $0x48,%eax
 8a3a59a:	89 04 24             	mov    %eax,(%esp)
 8a3a59d:	e8 be 29 69 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 8a3a5a2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a5a5:	83 c0 54             	add    $0x54,%eax
 8a3a5a8:	89 04 24             	mov    %eax,(%esp)
 8a3a5ab:	e8 20 c0 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a5b0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a5b3:	83 c0 64             	add    $0x64,%eax
 8a3a5b6:	89 04 24             	mov    %eax,(%esp)
 8a3a5b9:	e8 12 c0 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a5be:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a5c1:	83 c0 68             	add    $0x68,%eax
 8a3a5c4:	89 04 24             	mov    %eax,(%esp)
 8a3a5c7:	e8 04 c0 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a5cc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a5cf:	83 c0 6c             	add    $0x6c,%eax
 8a3a5d2:	89 04 24             	mov    %eax,(%esp)
 8a3a5d5:	e8 86 29 69 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 8a3a5da:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a5dd:	83 c0 78             	add    $0x78,%eax
 8a3a5e0:	89 04 24             	mov    %eax,(%esp)
 8a3a5e3:	e8 c4 3b 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a3a5e8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a5eb:	05 84 00 00 00       	add    $0x84,%eax
 8a3a5f0:	89 04 24             	mov    %eax,(%esp)
 8a3a5f3:	e8 68 29 69 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 8a3a5f8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a5fb:	05 90 00 00 00       	add    $0x90,%eax
 8a3a600:	89 04 24             	mov    %eax,(%esp)
 8a3a603:	e8 c8 bf cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a608:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a60b:	05 d8 00 00 00       	add    $0xd8,%eax
 8a3a610:	89 04 24             	mov    %eax,(%esp)
 8a3a613:	e8 0e 33 00 00       	call   8a3d926 <_ZN22STPassiveObjectDestroyC1Ev>
 8a3a618:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a61b:	05 28 01 00 00       	add    $0x128,%eax
 8a3a620:	89 04 24             	mov    %eax,(%esp)
 8a3a623:	e8 e4 33 00 00       	call   8a3da0c <_ZN24STPassiveObjectAddEffectC1Ev>
 8a3a628:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a62b:	05 40 01 00 00       	add    $0x140,%eax
 8a3a630:	89 04 24             	mov    %eax,(%esp)
 8a3a633:	e8 74 6a 00 00       	call   8a410ac <_ZNSt6vectorIP37STPassiveObjectAdditionalParticleInfoSaIS1_EEC1Ev>
 8a3a638:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a63b:	05 54 01 00 00       	add    $0x154,%eax
 8a3a640:	89 04 24             	mov    %eax,(%esp)
 8a3a643:	e8 88 bf cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a648:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a64b:	05 60 01 00 00       	add    $0x160,%eax
 8a3a650:	89 04 24             	mov    %eax,(%esp)
 8a3a653:	e8 54 3b 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a3a658:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a65b:	05 7c 01 00 00       	add    $0x17c,%eax
 8a3a660:	89 04 24             	mov    %eax,(%esp)
 8a3a663:	e8 68 bf cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a668:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a66b:	05 80 01 00 00       	add    $0x180,%eax
 8a3a670:	89 04 24             	mov    %eax,(%esp)
 8a3a673:	e8 48 6a 00 00       	call   8a410c0 <_ZNSt6vectorI23SpeedCtrlPassiveObjInfoSaIS0_EEC1Ev>
 8a3a678:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a67b:	05 8c 01 00 00       	add    $0x18c,%eax
 8a3a680:	89 04 24             	mov    %eax,(%esp)
 8a3a683:	e8 4c 6a 00 00       	call   8a410d4 <_ZNSt6vectorI26PassiveObjGeneratorPatternSaIS0_EEC1Ev>
 8a3a688:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a68b:	05 98 01 00 00       	add    $0x198,%eax
 8a3a690:	89 04 24             	mov    %eax,(%esp)
 8a3a693:	e8 50 6a 00 00       	call   8a410e8 <_ZNSt6vectorI27PassiveObjGeneratorSequenceSaIS0_EEC1Ev>
 8a3a698:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a69b:	05 a4 01 00 00       	add    $0x1a4,%eax
 8a3a6a0:	89 04 24             	mov    %eax,(%esp)
 8a3a6a3:	e8 54 6a 00 00       	call   8a410fc <_ZNSt6vectorI25PassiveObjGeneratorObjectSaIS0_EEC1Ev>
 8a3a6a8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a6ab:	05 b0 01 00 00       	add    $0x1b0,%eax
 8a3a6b0:	89 04 24             	mov    %eax,(%esp)
 8a3a6b3:	e8 f6 41 00 00       	call   8a3e8ae <_ZN23PassiveObjGeneratorInfoC1Ev>
 8a3a6b8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a6bb:	05 d4 01 00 00       	add    $0x1d4,%eax
 8a3a6c0:	89 04 24             	mov    %eax,(%esp)
 8a3a6c3:	e8 02 08 00 00       	call   8a3aeca <_ZN15WarningDistanceC1Ev>
 8a3a6c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a6cb:	05 e0 01 00 00       	add    $0x1e0,%eax
 8a3a6d0:	89 04 24             	mov    %eax,(%esp)
 8a3a6d3:	e8 f2 07 00 00       	call   8a3aeca <_ZN15WarningDistanceC1Ev>
 8a3a6d8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a6db:	05 ec 01 00 00       	add    $0x1ec,%eax
 8a3a6e0:	89 04 24             	mov    %eax,(%esp)
 8a3a6e3:	e8 24 08 00 00       	call   8a3af0c <_ZN21PassiveIObjSniperInfoC1Ev>
 8a3a6e8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a6eb:	05 74 02 00 00       	add    $0x274,%eax
 8a3a6f0:	89 04 24             	mov    %eax,(%esp)
 8a3a6f3:	e8 18 6a 00 00       	call   8a41110 <_ZNSt6vectorI15RandomItemFairySaIS0_EEC1Ev>
 8a3a6f8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a6fb:	05 84 02 00 00       	add    $0x284,%eax
 8a3a700:	89 04 24             	mov    %eax,(%esp)
 8a3a703:	e8 c8 be cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3a708:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a70b:	89 04 24             	mov    %eax,(%esp)
 8a3a70e:	e8 d3 02 00 00       	call   8a3a9e6 <_ZN21STPassiveObjectScript5clearEv>
 8a3a713:	e9 c6 02 00 00       	jmp    8a3a9de <_ZN21STPassiveObjectScriptC1Ev+0x4a6>
 8a3a718:	89 d3                	mov    %edx,%ebx
 8a3a71a:	89 c6                	mov    %eax,%esi
 8a3a71c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a71f:	05 84 02 00 00       	add    $0x284,%eax
 8a3a724:	89 04 24             	mov    %eax,(%esp)
 8a3a727:	e8 b4 d4 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a72c:	89 f0                	mov    %esi,%eax
 8a3a72e:	89 da                	mov    %ebx,%edx
 8a3a730:	eb 00                	jmp    8a3a732 <_ZN21STPassiveObjectScriptC1Ev+0x1fa>
 8a3a732:	89 d3                	mov    %edx,%ebx
 8a3a734:	89 c6                	mov    %eax,%esi
 8a3a736:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a739:	05 74 02 00 00       	add    $0x274,%eax
 8a3a73e:	89 04 24             	mov    %eax,(%esp)
 8a3a741:	e8 c8 5c 00 00       	call   8a4040e <_ZNSt6vectorI15RandomItemFairySaIS0_EED1Ev>
 8a3a746:	89 f0                	mov    %esi,%eax
 8a3a748:	89 da                	mov    %ebx,%edx
 8a3a74a:	eb 00                	jmp    8a3a74c <_ZN21STPassiveObjectScriptC1Ev+0x214>
 8a3a74c:	89 d3                	mov    %edx,%ebx
 8a3a74e:	89 c6                	mov    %eax,%esi
 8a3a750:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a753:	05 ec 01 00 00       	add    $0x1ec,%eax
 8a3a758:	89 04 24             	mov    %eax,(%esp)
 8a3a75b:	e8 64 3a 00 00       	call   8a3e1c4 <_ZN21PassiveIObjSniperInfoD1Ev>
 8a3a760:	89 f0                	mov    %esi,%eax
 8a3a762:	89 da                	mov    %ebx,%edx
 8a3a764:	eb 00                	jmp    8a3a766 <_ZN21STPassiveObjectScriptC1Ev+0x22e>
 8a3a766:	89 d3                	mov    %edx,%ebx
 8a3a768:	89 c6                	mov    %eax,%esi
 8a3a76a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a76d:	05 b0 01 00 00       	add    $0x1b0,%eax
 8a3a772:	89 04 24             	mov    %eax,(%esp)
 8a3a775:	e8 dc 39 00 00       	call   8a3e156 <_ZN23PassiveObjGeneratorInfoD1Ev>
 8a3a77a:	89 f0                	mov    %esi,%eax
 8a3a77c:	89 da                	mov    %ebx,%edx
 8a3a77e:	eb 00                	jmp    8a3a780 <_ZN21STPassiveObjectScriptC1Ev+0x248>
 8a3a780:	89 d3                	mov    %edx,%ebx
 8a3a782:	89 c6                	mov    %eax,%esi
 8a3a784:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a787:	05 a4 01 00 00       	add    $0x1a4,%eax
 8a3a78c:	89 04 24             	mov    %eax,(%esp)
 8a3a78f:	e8 1c 5c 00 00       	call   8a403b0 <_ZNSt6vectorI25PassiveObjGeneratorObjectSaIS0_EED1Ev>
 8a3a794:	89 f0                	mov    %esi,%eax
 8a3a796:	89 da                	mov    %ebx,%edx
 8a3a798:	eb 00                	jmp    8a3a79a <_ZN21STPassiveObjectScriptC1Ev+0x262>
 8a3a79a:	89 d3                	mov    %edx,%ebx
 8a3a79c:	89 c6                	mov    %eax,%esi
 8a3a79e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a7a1:	05 98 01 00 00       	add    $0x198,%eax
 8a3a7a6:	89 04 24             	mov    %eax,(%esp)
 8a3a7a9:	e8 a4 5b 00 00       	call   8a40352 <_ZNSt6vectorI27PassiveObjGeneratorSequenceSaIS0_EED1Ev>
 8a3a7ae:	89 f0                	mov    %esi,%eax
 8a3a7b0:	89 da                	mov    %ebx,%edx
 8a3a7b2:	eb 00                	jmp    8a3a7b4 <_ZN21STPassiveObjectScriptC1Ev+0x27c>
 8a3a7b4:	89 d3                	mov    %edx,%ebx
 8a3a7b6:	89 c6                	mov    %eax,%esi
 8a3a7b8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a7bb:	05 8c 01 00 00       	add    $0x18c,%eax
 8a3a7c0:	89 04 24             	mov    %eax,(%esp)
 8a3a7c3:	e8 2c 5b 00 00       	call   8a402f4 <_ZNSt6vectorI26PassiveObjGeneratorPatternSaIS0_EED1Ev>
 8a3a7c8:	89 f0                	mov    %esi,%eax
 8a3a7ca:	89 da                	mov    %ebx,%edx
 8a3a7cc:	eb 00                	jmp    8a3a7ce <_ZN21STPassiveObjectScriptC1Ev+0x296>
 8a3a7ce:	89 d3                	mov    %edx,%ebx
 8a3a7d0:	89 c6                	mov    %eax,%esi
 8a3a7d2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a7d5:	05 80 01 00 00       	add    $0x180,%eax
 8a3a7da:	89 04 24             	mov    %eax,(%esp)
 8a3a7dd:	e8 b4 5a 00 00       	call   8a40296 <_ZNSt6vectorI23SpeedCtrlPassiveObjInfoSaIS0_EED1Ev>
 8a3a7e2:	89 f0                	mov    %esi,%eax
 8a3a7e4:	89 da                	mov    %ebx,%edx
 8a3a7e6:	eb 00                	jmp    8a3a7e8 <_ZN21STPassiveObjectScriptC1Ev+0x2b0>
 8a3a7e8:	89 d3                	mov    %edx,%ebx
 8a3a7ea:	89 c6                	mov    %eax,%esi
 8a3a7ec:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a7ef:	05 7c 01 00 00       	add    $0x17c,%eax
 8a3a7f4:	89 04 24             	mov    %eax,(%esp)
 8a3a7f7:	e8 e4 d3 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a7fc:	89 f0                	mov    %esi,%eax
 8a3a7fe:	89 da                	mov    %ebx,%edx
 8a3a800:	eb 00                	jmp    8a3a802 <_ZN21STPassiveObjectScriptC1Ev+0x2ca>
 8a3a802:	89 d3                	mov    %edx,%ebx
 8a3a804:	89 c6                	mov    %eax,%esi
 8a3a806:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a809:	05 60 01 00 00       	add    $0x160,%eax
 8a3a80e:	89 04 24             	mov    %eax,(%esp)
 8a3a811:	e8 c4 95 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a3a816:	89 f0                	mov    %esi,%eax
 8a3a818:	89 da                	mov    %ebx,%edx
 8a3a81a:	eb 00                	jmp    8a3a81c <_ZN21STPassiveObjectScriptC1Ev+0x2e4>
 8a3a81c:	89 d3                	mov    %edx,%ebx
 8a3a81e:	89 c6                	mov    %eax,%esi
 8a3a820:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a823:	05 54 01 00 00       	add    $0x154,%eax
 8a3a828:	89 04 24             	mov    %eax,(%esp)
 8a3a82b:	e8 b0 d3 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a830:	89 f0                	mov    %esi,%eax
 8a3a832:	89 da                	mov    %ebx,%edx
 8a3a834:	eb 00                	jmp    8a3a836 <_ZN21STPassiveObjectScriptC1Ev+0x2fe>
 8a3a836:	89 d3                	mov    %edx,%ebx
 8a3a838:	89 c6                	mov    %eax,%esi
 8a3a83a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a83d:	05 40 01 00 00       	add    $0x140,%eax
 8a3a842:	89 04 24             	mov    %eax,(%esp)
 8a3a845:	e8 ee 59 00 00       	call   8a40238 <_ZNSt6vectorIP37STPassiveObjectAdditionalParticleInfoSaIS1_EED1Ev>
 8a3a84a:	89 f0                	mov    %esi,%eax
 8a3a84c:	89 da                	mov    %ebx,%edx
 8a3a84e:	eb 00                	jmp    8a3a850 <_ZN21STPassiveObjectScriptC1Ev+0x318>
 8a3a850:	89 d3                	mov    %edx,%ebx
 8a3a852:	89 c6                	mov    %eax,%esi
 8a3a854:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a857:	05 28 01 00 00       	add    $0x128,%eax
 8a3a85c:	89 04 24             	mov    %eax,(%esp)
 8a3a85f:	e8 ac 38 00 00       	call   8a3e110 <_ZN24STPassiveObjectAddEffectD1Ev>
 8a3a864:	89 f0                	mov    %esi,%eax
 8a3a866:	89 da                	mov    %ebx,%edx
 8a3a868:	eb 00                	jmp    8a3a86a <_ZN21STPassiveObjectScriptC1Ev+0x332>
 8a3a86a:	89 d3                	mov    %edx,%ebx
 8a3a86c:	89 c6                	mov    %eax,%esi
 8a3a86e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a871:	05 d8 00 00 00       	add    $0xd8,%eax
 8a3a876:	89 04 24             	mov    %eax,(%esp)
 8a3a879:	e8 ce 37 00 00       	call   8a3e04c <_ZN22STPassiveObjectDestroyD1Ev>
 8a3a87e:	89 f0                	mov    %esi,%eax
 8a3a880:	89 da                	mov    %ebx,%edx
 8a3a882:	eb 00                	jmp    8a3a884 <_ZN21STPassiveObjectScriptC1Ev+0x34c>
 8a3a884:	89 d3                	mov    %edx,%ebx
 8a3a886:	89 c6                	mov    %eax,%esi
 8a3a888:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a88b:	05 90 00 00 00       	add    $0x90,%eax
 8a3a890:	89 04 24             	mov    %eax,(%esp)
 8a3a893:	e8 48 d3 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a898:	89 f0                	mov    %esi,%eax
 8a3a89a:	89 da                	mov    %ebx,%edx
 8a3a89c:	eb 00                	jmp    8a3a89e <_ZN21STPassiveObjectScriptC1Ev+0x366>
 8a3a89e:	89 d3                	mov    %edx,%ebx
 8a3a8a0:	89 c6                	mov    %eax,%esi
 8a3a8a2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a8a5:	05 84 00 00 00       	add    $0x84,%eax
 8a3a8aa:	89 04 24             	mov    %eax,(%esp)
 8a3a8ad:	e8 c2 26 69 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8a3a8b2:	89 f0                	mov    %esi,%eax
 8a3a8b4:	89 da                	mov    %ebx,%edx
 8a3a8b6:	eb 00                	jmp    8a3a8b8 <_ZN21STPassiveObjectScriptC1Ev+0x380>
 8a3a8b8:	89 d3                	mov    %edx,%ebx
 8a3a8ba:	89 c6                	mov    %eax,%esi
 8a3a8bc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a8bf:	83 c0 78             	add    $0x78,%eax
 8a3a8c2:	89 04 24             	mov    %eax,(%esp)
 8a3a8c5:	e8 10 95 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a3a8ca:	89 f0                	mov    %esi,%eax
 8a3a8cc:	89 da                	mov    %ebx,%edx
 8a3a8ce:	eb 00                	jmp    8a3a8d0 <_ZN21STPassiveObjectScriptC1Ev+0x398>
 8a3a8d0:	89 d3                	mov    %edx,%ebx
 8a3a8d2:	89 c6                	mov    %eax,%esi
 8a3a8d4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a8d7:	83 c0 6c             	add    $0x6c,%eax
 8a3a8da:	89 04 24             	mov    %eax,(%esp)
 8a3a8dd:	e8 92 26 69 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8a3a8e2:	89 f0                	mov    %esi,%eax
 8a3a8e4:	89 da                	mov    %ebx,%edx
 8a3a8e6:	eb 00                	jmp    8a3a8e8 <_ZN21STPassiveObjectScriptC1Ev+0x3b0>
 8a3a8e8:	89 d3                	mov    %edx,%ebx
 8a3a8ea:	89 c6                	mov    %eax,%esi
 8a3a8ec:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a8ef:	83 c0 68             	add    $0x68,%eax
 8a3a8f2:	89 04 24             	mov    %eax,(%esp)
 8a3a8f5:	e8 e6 d2 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a8fa:	89 f0                	mov    %esi,%eax
 8a3a8fc:	89 da                	mov    %ebx,%edx
 8a3a8fe:	eb 00                	jmp    8a3a900 <_ZN21STPassiveObjectScriptC1Ev+0x3c8>
 8a3a900:	89 d3                	mov    %edx,%ebx
 8a3a902:	89 c6                	mov    %eax,%esi
 8a3a904:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a907:	83 c0 64             	add    $0x64,%eax
 8a3a90a:	89 04 24             	mov    %eax,(%esp)
 8a3a90d:	e8 ce d2 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a912:	89 f0                	mov    %esi,%eax
 8a3a914:	89 da                	mov    %ebx,%edx
 8a3a916:	eb 00                	jmp    8a3a918 <_ZN21STPassiveObjectScriptC1Ev+0x3e0>
 8a3a918:	89 d3                	mov    %edx,%ebx
 8a3a91a:	89 c6                	mov    %eax,%esi
 8a3a91c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a91f:	83 c0 54             	add    $0x54,%eax
 8a3a922:	89 04 24             	mov    %eax,(%esp)
 8a3a925:	e8 b6 d2 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a92a:	89 f0                	mov    %esi,%eax
 8a3a92c:	89 da                	mov    %ebx,%edx
 8a3a92e:	eb 00                	jmp    8a3a930 <_ZN21STPassiveObjectScriptC1Ev+0x3f8>
 8a3a930:	89 d3                	mov    %edx,%ebx
 8a3a932:	89 c6                	mov    %eax,%esi
 8a3a934:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a937:	83 c0 48             	add    $0x48,%eax
 8a3a93a:	89 04 24             	mov    %eax,(%esp)
 8a3a93d:	e8 32 26 69 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8a3a942:	89 f0                	mov    %esi,%eax
 8a3a944:	89 da                	mov    %ebx,%edx
 8a3a946:	eb 00                	jmp    8a3a948 <_ZN21STPassiveObjectScriptC1Ev+0x410>
 8a3a948:	89 d3                	mov    %edx,%ebx
 8a3a94a:	89 c6                	mov    %eax,%esi
 8a3a94c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a94f:	83 c0 44             	add    $0x44,%eax
 8a3a952:	89 04 24             	mov    %eax,(%esp)
 8a3a955:	e8 86 d2 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a95a:	89 f0                	mov    %esi,%eax
 8a3a95c:	89 da                	mov    %ebx,%edx
 8a3a95e:	eb 00                	jmp    8a3a960 <_ZN21STPassiveObjectScriptC1Ev+0x428>
 8a3a960:	89 d3                	mov    %edx,%ebx
 8a3a962:	89 c6                	mov    %eax,%esi
 8a3a964:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a967:	83 c0 38             	add    $0x38,%eax
 8a3a96a:	89 04 24             	mov    %eax,(%esp)
 8a3a96d:	e8 02 26 69 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8a3a972:	89 f0                	mov    %esi,%eax
 8a3a974:	89 da                	mov    %ebx,%edx
 8a3a976:	eb 00                	jmp    8a3a978 <_ZN21STPassiveObjectScriptC1Ev+0x440>
 8a3a978:	89 d3                	mov    %edx,%ebx
 8a3a97a:	89 c6                	mov    %eax,%esi
 8a3a97c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a97f:	83 c0 34             	add    $0x34,%eax
 8a3a982:	89 04 24             	mov    %eax,(%esp)
 8a3a985:	e8 56 d2 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a98a:	89 f0                	mov    %esi,%eax
 8a3a98c:	89 da                	mov    %ebx,%edx
 8a3a98e:	eb 00                	jmp    8a3a990 <_ZN21STPassiveObjectScriptC1Ev+0x458>
 8a3a990:	89 d3                	mov    %edx,%ebx
 8a3a992:	89 c6                	mov    %eax,%esi
 8a3a994:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a997:	83 c0 28             	add    $0x28,%eax
 8a3a99a:	89 04 24             	mov    %eax,(%esp)
 8a3a99d:	e8 38 94 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a3a9a2:	89 f0                	mov    %esi,%eax
 8a3a9a4:	89 da                	mov    %ebx,%edx
 8a3a9a6:	eb 00                	jmp    8a3a9a8 <_ZN21STPassiveObjectScriptC1Ev+0x470>
 8a3a9a8:	89 d3                	mov    %edx,%ebx
 8a3a9aa:	89 c6                	mov    %eax,%esi
 8a3a9ac:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a9af:	83 c0 08             	add    $0x8,%eax
 8a3a9b2:	89 04 24             	mov    %eax,(%esp)
 8a3a9b5:	e8 26 d2 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a9ba:	89 f0                	mov    %esi,%eax
 8a3a9bc:	89 da                	mov    %ebx,%edx
 8a3a9be:	eb 00                	jmp    8a3a9c0 <_ZN21STPassiveObjectScriptC1Ev+0x488>
 8a3a9c0:	89 d3                	mov    %edx,%ebx
 8a3a9c2:	89 c6                	mov    %eax,%esi
 8a3a9c4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a9c7:	83 c0 04             	add    $0x4,%eax
 8a3a9ca:	89 04 24             	mov    %eax,(%esp)
 8a3a9cd:	e8 0e d2 cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3a9d2:	89 f0                	mov    %esi,%eax
 8a3a9d4:	89 da                	mov    %ebx,%edx
 8a3a9d6:	89 04 24             	mov    %eax,(%esp)
 8a3a9d9:	e8 72 8d 0a 00       	call   8ae3750 <_Unwind_Resume>
 8a3a9de:	83 c4 10             	add    $0x10,%esp
 8a3a9e1:	5b                   	pop    %ebx
 8a3a9e2:	5e                   	pop    %esi
 8a3a9e3:	5d                   	pop    %ebp
 8a3a9e4:	c3                   	ret
 8a3a9e5:	90                   	nop

```

```c
// STPassiveObjectScript::STPassiveObjectScript @ 0x8a3a538

/* STPassiveObjectScript::STPassiveObjectScript() */

void __thiscall STPassiveObjectScript::STPassiveObjectScript(STPassiveObjectScript *this)

{
  std::string::string((string *)(this + 4));
                    /* try { // try from 08a3a557 to 08a3a55b has its CatchHandler @ 08a3a9c0 */
  std::string::string((string *)(this + 8));
                    /* try { // try from 08a3a565 to 08a3a569 has its CatchHandler @ 08a3a9a8 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x28));
                    /* try { // try from 08a3a573 to 08a3a577 has its CatchHandler @ 08a3a990 */
  std::string::string((string *)(this + 0x34));
                    /* try { // try from 08a3a581 to 08a3a585 has its CatchHandler @ 08a3a978 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
                    /* try { // try from 08a3a58f to 08a3a593 has its CatchHandler @ 08a3a960 */
  std::string::string((string *)(this + 0x44));
                    /* try { // try from 08a3a59d to 08a3a5a1 has its CatchHandler @ 08a3a948 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
                    /* try { // try from 08a3a5ab to 08a3a5af has its CatchHandler @ 08a3a930 */
  std::string::string((string *)(this + 0x54));
                    /* try { // try from 08a3a5b9 to 08a3a5bd has its CatchHandler @ 08a3a918 */
  std::string::string((string *)(this + 100));
                    /* try { // try from 08a3a5c7 to 08a3a5cb has its CatchHandler @ 08a3a900 */
  std::string::string((string *)(this + 0x68));
                    /* try { // try from 08a3a5d5 to 08a3a5d9 has its CatchHandler @ 08a3a8e8 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6c));
                    /* try { // try from 08a3a5e3 to 08a3a5e7 has its CatchHandler @ 08a3a8d0 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x78));
                    /* try { // try from 08a3a5f3 to 08a3a5f7 has its CatchHandler @ 08a3a8b8 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x84));
                    /* try { // try from 08a3a603 to 08a3a607 has its CatchHandler @ 08a3a89e */
  std::string::string((string *)(this + 0x90));
                    /* try { // try from 08a3a613 to 08a3a617 has its CatchHandler @ 08a3a884 */
  STPassiveObjectDestroy::STPassiveObjectDestroy((STPassiveObjectDestroy *)(this + 0xd8));
                    /* try { // try from 08a3a623 to 08a3a627 has its CatchHandler @ 08a3a86a */
  STPassiveObjectAddEffect::STPassiveObjectAddEffect((STPassiveObjectAddEffect *)(this + 0x128));
                    /* try { // try from 08a3a633 to 08a3a637 has its CatchHandler @ 08a3a850 */
  std::
  vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
  ::vector((vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
            *)(this + 0x140));
                    /* try { // try from 08a3a643 to 08a3a647 has its CatchHandler @ 08a3a836 */
  std::string::string((string *)(this + 0x154));
                    /* try { // try from 08a3a653 to 08a3a657 has its CatchHandler @ 08a3a81c */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x160));
                    /* try { // try from 08a3a663 to 08a3a667 has its CatchHandler @ 08a3a802 */
  std::string::string((string *)(this + 0x17c));
                    /* try { // try from 08a3a673 to 08a3a677 has its CatchHandler @ 08a3a7e8 */
  std::vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>>::vector
            ((vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>> *)
             (this + 0x180));
                    /* try { // try from 08a3a683 to 08a3a687 has its CatchHandler @ 08a3a7ce */
  std::vector<PassiveObjGeneratorPattern,std::allocator<PassiveObjGeneratorPattern>>::vector
            ((vector<PassiveObjGeneratorPattern,std::allocator<PassiveObjGeneratorPattern>> *)
             (this + 0x18c));
                    /* try { // try from 08a3a693 to 08a3a697 has its CatchHandler @ 08a3a7b4 */
  std::vector<PassiveObjGeneratorSequence,std::allocator<PassiveObjGeneratorSequence>>::vector
            ((vector<PassiveObjGeneratorSequence,std::allocator<PassiveObjGeneratorSequence>> *)
             (this + 0x198));
                    /* try { // try from 08a3a6a3 to 08a3a6a7 has its CatchHandler @ 08a3a79a */
  std::vector<PassiveObjGeneratorObject,std::allocator<PassiveObjGeneratorObject>>::vector
            ((vector<PassiveObjGeneratorObject,std::allocator<PassiveObjGeneratorObject>> *)
             (this + 0x1a4));
                    /* try { // try from 08a3a6b3 to 08a3a6b7 has its CatchHandler @ 08a3a780 */
  PassiveObjGeneratorInfo::PassiveObjGeneratorInfo((PassiveObjGeneratorInfo *)(this + 0x1b0));
  WarningDistance::WarningDistance((WarningDistance *)(this + 0x1d4));
  WarningDistance::WarningDistance((WarningDistance *)(this + 0x1e0));
                    /* try { // try from 08a3a6e3 to 08a3a6e7 has its CatchHandler @ 08a3a766 */
  PassiveIObjSniperInfo::PassiveIObjSniperInfo((PassiveIObjSniperInfo *)(this + 0x1ec));
                    /* try { // try from 08a3a6f3 to 08a3a6f7 has its CatchHandler @ 08a3a74c */
  std::vector<RandomItemFairy,std::allocator<RandomItemFairy>>::vector
            ((vector<RandomItemFairy,std::allocator<RandomItemFairy>> *)(this + 0x274));
                    /* try { // try from 08a3a703 to 08a3a707 has its CatchHandler @ 08a3a732 */
  std::string::string((string *)(this + 0x284));
                    /* try { // try from 08a3a70e to 08a3a712 has its CatchHandler @ 08a3a718 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 08a3a9e6 STPassiveObjectScript::clear  [0x08a3a9e6-0x8a3ad59] ===
 8a3a9e6:	55                   	push   %ebp
 8a3a9e7:	89 e5                	mov    %esp,%ebp
 8a3a9e9:	83 ec 18             	sub    $0x18,%esp
 8a3a9ec:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a9ef:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a3a9f5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3a9f8:	83 c0 04             	add    $0x4,%eax
 8a3a9fb:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3aa02:	08 
 8a3aa03:	89 04 24             	mov    %eax,(%esp)
 8a3aa06:	e8 15 dd cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3aa0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa0e:	83 c0 08             	add    $0x8,%eax
 8a3aa11:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3aa18:	08 
 8a3aa19:	89 04 24             	mov    %eax,(%esp)
 8a3aa1c:	e8 ff dc cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3aa21:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa24:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a3aa2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa2e:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8a3aa35:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa38:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8a3aa3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa42:	c7 40 18 01 00 00 00 	movl   $0x1,0x18(%eax)
 8a3aa49:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa4c:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8a3aa53:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa56:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8a3aa5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa60:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8a3aa67:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa6a:	83 c0 28             	add    $0x28,%eax
 8a3aa6d:	89 04 24             	mov    %eax,(%esp)
 8a3aa70:	e8 f9 c0 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3aa75:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa78:	83 c0 34             	add    $0x34,%eax
 8a3aa7b:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3aa82:	08 
 8a3aa83:	89 04 24             	mov    %eax,(%esp)
 8a3aa86:	e8 95 dc cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3aa8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa8e:	83 c0 38             	add    $0x38,%eax
 8a3aa91:	89 04 24             	mov    %eax,(%esp)
 8a3aa94:	e8 2f 6c 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a3aa99:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aa9c:	83 c0 64             	add    $0x64,%eax
 8a3aa9f:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3aaa6:	08 
 8a3aaa7:	89 04 24             	mov    %eax,(%esp)
 8a3aaaa:	e8 71 dc cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3aaaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aab2:	83 c0 68             	add    $0x68,%eax
 8a3aab5:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3aabc:	08 
 8a3aabd:	89 04 24             	mov    %eax,(%esp)
 8a3aac0:	e8 5b dc cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3aac5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aac8:	83 c0 6c             	add    $0x6c,%eax
 8a3aacb:	89 04 24             	mov    %eax,(%esp)
 8a3aace:	e8 f5 6b 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a3aad3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aad6:	83 c0 44             	add    $0x44,%eax
 8a3aad9:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3aae0:	08 
 8a3aae1:	89 04 24             	mov    %eax,(%esp)
 8a3aae4:	e8 37 dc cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3aae9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aaec:	83 c0 48             	add    $0x48,%eax
 8a3aaef:	89 04 24             	mov    %eax,(%esp)
 8a3aaf2:	e8 d1 6b 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a3aaf7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aafa:	83 c0 54             	add    $0x54,%eax
 8a3aafd:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3ab04:	08 
 8a3ab05:	89 04 24             	mov    %eax,(%esp)
 8a3ab08:	e8 13 dc cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3ab0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab10:	c6 40 58 00          	movb   $0x0,0x58(%eax)
 8a3ab14:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab17:	c6 40 59 00          	movb   $0x0,0x59(%eax)
 8a3ab1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab1e:	c6 40 5a 00          	movb   $0x0,0x5a(%eax)
 8a3ab22:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab25:	c7 40 5c ff ff ff ff 	movl   $0xffffffff,0x5c(%eax)
 8a3ab2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab2f:	c6 40 61 00          	movb   $0x0,0x61(%eax)
 8a3ab33:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab36:	c6 40 60 00          	movb   $0x0,0x60(%eax)
 8a3ab3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab3d:	c6 40 62 00          	movb   $0x0,0x62(%eax)
 8a3ab41:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab44:	83 c0 78             	add    $0x78,%eax
 8a3ab47:	89 04 24             	mov    %eax,(%esp)
 8a3ab4a:	e8 1f c0 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3ab4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab52:	05 84 00 00 00       	add    $0x84,%eax
 8a3ab57:	89 04 24             	mov    %eax,(%esp)
 8a3ab5a:	e8 69 6b 90 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8a3ab5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab62:	05 90 00 00 00       	add    $0x90,%eax
 8a3ab67:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3ab6e:	08 
 8a3ab6f:	89 04 24             	mov    %eax,(%esp)
 8a3ab72:	e8 a9 db cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3ab77:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab7a:	c7 80 94 00 00 00 ff 	movl   $0xffffffff,0x94(%eax)
 8a3ab81:	ff ff ff 
 8a3ab84:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab87:	c7 80 98 00 00 00 00 	movl   $0x0,0x98(%eax)
 8a3ab8e:	00 00 00 
 8a3ab91:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ab94:	05 40 01 00 00       	add    $0x140,%eax
 8a3ab99:	89 04 24             	mov    %eax,(%esp)
 8a3ab9c:	e8 83 65 00 00       	call   8a41124 <_ZNSt6vectorIP37STPassiveObjectAdditionalParticleInfoSaIS1_EE5clearEv>
 8a3aba1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aba4:	c6 80 9c 00 00 00 00 	movb   $0x0,0x9c(%eax)
 8a3abab:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3abae:	c7 80 a0 00 00 00 01 	movl   $0x1,0xa0(%eax)
 8a3abb5:	00 00 00 
 8a3abb8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3abbb:	c7 80 a4 00 00 00 00 	movl   $0x0,0xa4(%eax)
 8a3abc2:	00 00 00 
 8a3abc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3abc8:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3abcd:	89 90 a8 00 00 00    	mov    %edx,0xa8(%eax)
 8a3abd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3abd6:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3abdb:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 8a3abe1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3abe4:	c7 80 b0 00 00 00 f4 	movl   $0x1f4,0xb0(%eax)
 8a3abeb:	01 00 00 
 8a3abee:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3abf1:	c6 80 b4 00 00 00 00 	movb   $0x0,0xb4(%eax)
 8a3abf8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3abfb:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3ac00:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 8a3ac06:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac09:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3ac0e:	89 90 bc 00 00 00    	mov    %edx,0xbc(%eax)
 8a3ac14:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac17:	ba 00 00 34 43       	mov    $0x43340000,%edx
 8a3ac1c:	89 90 c0 00 00 00    	mov    %edx,0xc0(%eax)
 8a3ac22:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac25:	c7 80 c4 00 00 00 00 	movl   $0x0,0xc4(%eax)
 8a3ac2c:	00 00 00 
 8a3ac2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac32:	c7 80 c8 00 00 00 00 	movl   $0x0,0xc8(%eax)
 8a3ac39:	00 00 00 
 8a3ac3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac3f:	c7 80 cc 00 00 00 ff 	movl   $0xffffffff,0xcc(%eax)
 8a3ac46:	ff ff ff 
 8a3ac49:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac4c:	c7 80 d0 00 00 00 00 	movl   $0x0,0xd0(%eax)
 8a3ac53:	00 00 00 
 8a3ac56:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac59:	c6 80 d4 00 00 00 00 	movb   $0x0,0xd4(%eax)
 8a3ac60:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac63:	c6 80 d5 00 00 00 00 	movb   $0x0,0xd5(%eax)
 8a3ac6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac6d:	c6 80 4c 01 00 00 00 	movb   $0x0,0x14c(%eax)
 8a3ac74:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac77:	c6 80 4d 01 00 00 00 	movb   $0x0,0x14d(%eax)
 8a3ac7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac81:	c6 80 4e 01 00 00 00 	movb   $0x0,0x14e(%eax)
 8a3ac88:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac8b:	c6 80 4f 01 00 00 ff 	movb   $0xff,0x14f(%eax)
 8a3ac92:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ac95:	66 c7 80 50 01 00 00 	movw   $0xffff,0x150(%eax)
 8a3ac9c:	ff ff 
 8a3ac9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aca1:	05 54 01 00 00       	add    $0x154,%eax
 8a3aca6:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3acad:	08 
 8a3acae:	89 04 24             	mov    %eax,(%esp)
 8a3acb1:	e8 6a da cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3acb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3acb9:	c7 80 5c 01 00 00 00 	movl   $0x0,0x15c(%eax)
 8a3acc0:	00 00 00 
 8a3acc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3acc6:	c6 80 58 01 00 00 00 	movb   $0x0,0x158(%eax)
 8a3accd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3acd0:	c6 80 59 01 00 00 00 	movb   $0x0,0x159(%eax)
 8a3acd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3acda:	05 60 01 00 00       	add    $0x160,%eax
 8a3acdf:	89 04 24             	mov    %eax,(%esp)
 8a3ace2:	e8 87 be 65 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a3ace7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3acea:	c6 80 6c 01 00 00 00 	movb   $0x0,0x16c(%eax)
 8a3acf1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3acf4:	ba 00 00 80 bf       	mov    $0xbf800000,%edx
 8a3acf9:	89 90 70 01 00 00    	mov    %edx,0x170(%eax)
 8a3acff:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad02:	c7 80 74 01 00 00 00 	movl   $0x0,0x174(%eax)
 8a3ad09:	00 00 00 
 8a3ad0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad0f:	c7 80 78 01 00 00 00 	movl   $0x0,0x178(%eax)
 8a3ad16:	00 00 00 
 8a3ad19:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad1c:	05 7c 01 00 00       	add    $0x17c,%eax
 8a3ad21:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3ad28:	08 
 8a3ad29:	89 04 24             	mov    %eax,(%esp)
 8a3ad2c:	e8 ef d9 cc ff       	call   8708720 <_ZNSsaSEPKc>
 8a3ad31:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad34:	05 80 01 00 00       	add    $0x180,%eax
 8a3ad39:	89 04 24             	mov    %eax,(%esp)
 8a3ad3c:	e8 81 5a 00 00       	call   8a407c2 <_ZNSt6vectorI23SpeedCtrlPassiveObjInfoSaIS0_EE5clearEv>
 8a3ad41:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad44:	c7 80 70 02 00 00 02 	movl   $0x2,0x270(%eax)
 8a3ad4b:	00 00 00 
 8a3ad4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad51:	c6 80 80 02 00 00 00 	movb   $0x0,0x280(%eax)
 8a3ad58:	c9                   	leave
 8a3ad59:	c3                   	ret

```

```c
// STPassiveObjectScript::clear @ 0x8a3a9e6

/* STPassiveObjectScript::clear() */

void __thiscall STPassiveObjectScript::clear(STPassiveObjectScript *this)

{
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x28));
  std::string::operator=((string *)(this + 0x34),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::string::operator=((string *)(this + 100),"");
  std::string::operator=((string *)(this + 0x68),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6c));
  std::string::operator=((string *)(this + 0x44),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  std::string::operator=((string *)(this + 0x54),"");
  this[0x58] = (STPassiveObjectScript)0x0;
  this[0x59] = (STPassiveObjectScript)0x0;
  this[0x5a] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0x5c) = 0xffffffff;
  this[0x61] = (STPassiveObjectScript)0x0;
  this[0x60] = (STPassiveObjectScript)0x0;
  this[0x62] = (STPassiveObjectScript)0x0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x84));
  std::string::operator=((string *)(this + 0x90),"");
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0;
  std::
  vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
  ::clear((vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
           *)(this + 0x140));
  this[0x9c] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 500;
  this[0xb4] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x43340000;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  *(undefined4 *)(this + 0xd0) = 0;
  this[0xd4] = (STPassiveObjectScript)0x0;
  this[0xd5] = (STPassiveObjectScript)0x0;
  this[0x14c] = (STPassiveObjectScript)0x0;
  this[0x14d] = (STPassiveObjectScript)0x0;
  this[0x14e] = (STPassiveObjectScript)0x0;
  this[0x14f] = (STPassiveObjectScript)0xff;
  *(undefined2 *)(this + 0x150) = 0xffff;
  std::string::operator=((string *)(this + 0x154),"");
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x158] = (STPassiveObjectScript)0x0;
  this[0x159] = (STPassiveObjectScript)0x0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x160));
  this[0x16c] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0x170) = 0xbf800000;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  std::string::operator=((string *)(this + 0x17c),"");
  std::vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>>::clear
            ((vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>> *)
             (this + 0x180));
  *(undefined4 *)(this + 0x270) = 2;
  this[0x280] = (STPassiveObjectScript)0x0;
  return;
}

```

