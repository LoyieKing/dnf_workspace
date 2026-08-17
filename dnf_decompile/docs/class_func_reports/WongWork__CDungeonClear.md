# WongWork__CDungeonClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## AradfromString

```asm
// === 08483fae WongWork::CDungeonClear::AradfromString  [0x08483fae-0x84843f9] ===
 8483fae:	55                   	push   %ebp
 8483faf:	89 e5                	mov    %esp,%ebp
 8483fb1:	56                   	push   %esi
 8483fb2:	53                   	push   %ebx
 8483fb3:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 8483fb9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8483fc0:	00 
 8483fc1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8483fc8:	00 
 8483fc9:	c7 44 24 04 20 38 c7 	movl   $0x8c73820,0x4(%esp)
 8483fd0:	08 
 8483fd1:	8d 45 90             	lea    -0x70(%ebp),%eax
 8483fd4:	89 04 24             	mov    %eax,(%esp)
 8483fd7:	e8 d2 c2 c4 ff       	call   80d02ae <_ZN5boost14char_separatorIcSt11char_traitsIcEEC1EPKcS5_NS_18empty_token_policyE>
 8483fdc:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8483fdf:	89 04 24             	mov    %eax,(%esp)
 8483fe2:	e8 e9 c0 25 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8483fe7:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8483fea:	89 44 24 08          	mov    %eax,0x8(%esp)
 8483fee:	8b 45 10             	mov    0x10(%ebp),%eax
 8483ff1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483ff5:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8483ff8:	89 04 24             	mov    %eax,(%esp)
 8483ffb:	e8 30 36 28 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8484000:	eb 18                	jmp    848401a <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x6c>
 8484002:	89 d3                	mov    %edx,%ebx
 8484004:	89 c6                	mov    %eax,%esi
 8484006:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8484009:	89 04 24             	mov    %eax,(%esp)
 848400c:	e8 df c0 25 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8484011:	89 f0                	mov    %esi,%eax
 8484013:	89 da                	mov    %ebx,%edx
 8484015:	e9 ae 03 00 00       	jmp    84843c8 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x41a>
 848401a:	8d 45 a7             	lea    -0x59(%ebp),%eax
 848401d:	89 04 24             	mov    %eax,(%esp)
 8484020:	e8 cb c0 25 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8484025:	8d 45 90             	lea    -0x70(%ebp),%eax
 8484028:	89 44 24 08          	mov    %eax,0x8(%esp)
 848402c:	8d 45 8c             	lea    -0x74(%ebp),%eax
 848402f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484033:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8484039:	89 04 24             	mov    %eax,(%esp)
 848403c:	e8 39 c3 c4 ff       	call   80d037a <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEC1ISsEERKT_RKS4_>
 8484041:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8484047:	89 04 24             	mov    %eax,(%esp)
 848404a:	e8 11 8f c4 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 848404f:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8484055:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 848405b:	89 54 24 04          	mov    %edx,0x4(%esp)
 848405f:	89 04 24             	mov    %eax,(%esp)
 8484062:	e8 5d c3 c4 ff       	call   80d03c4 <_ZNK5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsE5beginEv>
 8484067:	83 ec 04             	sub    $0x4,%esp
 848406a:	e9 61 02 00 00       	jmp    84842d0 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x322>
 848406f:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 8484072:	89 04 24             	mov    %eax,(%esp)
 8484075:	e8 56 c0 25 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 848407a:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 848407d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8484081:	c7 44 24 04 22 38 c7 	movl   $0x8c73822,0x4(%esp)
 8484088:	08 
 8484089:	8d 45 cc             	lea    -0x34(%ebp),%eax
 848408c:	89 04 24             	mov    %eax,(%esp)
 848408f:	e8 9c 35 28 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8484094:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 848409a:	89 04 24             	mov    %eax,(%esp)
 848409d:	e8 5e c4 c4 ff       	call   80d0500 <_ZNK5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEdeEv>
 84840a2:	8d 55 cc             	lea    -0x34(%ebp),%edx
 84840a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84840a9:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 84840af:	89 54 24 04          	mov    %edx,0x4(%esp)
 84840b3:	89 04 24             	mov    %eax,(%esp)
 84840b6:	e8 dd fd ff ff       	call   8483e98 <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_>
 84840bb:	eb 15                	jmp    84840d2 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x124>
 84840bd:	89 d3                	mov    %edx,%ebx
 84840bf:	89 c6                	mov    %eax,%esi
 84840c1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84840c4:	89 04 24             	mov    %eax,(%esp)
 84840c7:	e8 14 3b 28 00       	call   8707be0 <_ZNSsD1Ev>
 84840cc:	89 f0                	mov    %esi,%eax
 84840ce:	89 da                	mov    %ebx,%edx
 84840d0:	eb 0d                	jmp    84840df <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x131>
 84840d2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84840d5:	89 04 24             	mov    %eax,(%esp)
 84840d8:	e8 03 3b 28 00       	call   8707be0 <_ZNSsD1Ev>
 84840dd:	eb 18                	jmp    84840f7 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x149>
 84840df:	89 d3                	mov    %edx,%ebx
 84840e1:	89 c6                	mov    %eax,%esi
 84840e3:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 84840e6:	89 04 24             	mov    %eax,(%esp)
 84840e9:	e8 02 c0 25 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84840ee:	89 f0                	mov    %esi,%eax
 84840f0:	89 da                	mov    %ebx,%edx
 84840f2:	e9 34 02 00 00       	jmp    848432b <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x37d>
 84840f7:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 84840fa:	89 04 24             	mov    %eax,(%esp)
 84840fd:	e8 ee bf 25 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8484102:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8484109:	00 
 848410a:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8484110:	89 04 24             	mov    %eax,(%esp)
 8484113:	e8 b6 39 db ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8484118:	89 04 24             	mov    %eax,(%esp)
 848411b:	e8 d0 23 28 00       	call   87064f0 <_ZNKSs5c_strEv>
 8484120:	89 04 24             	mov    %eax,(%esp)
 8484123:	e8 c8 a5 bf ff       	call   807e6f0 <atoi@plt>
 8484128:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 848412e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8484135:	00 
 8484136:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 848413c:	89 04 24             	mov    %eax,(%esp)
 848413f:	e8 8a 39 db ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8484144:	89 04 24             	mov    %eax,(%esp)
 8484147:	e8 a4 23 28 00       	call   87064f0 <_ZNKSs5c_strEv>
 848414c:	89 04 24             	mov    %eax,(%esp)
 848414f:	e8 9c a5 bf ff       	call   807e6f0 <atoi@plt>
 8484154:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 848415a:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8484160:	83 f8 04             	cmp    $0x4,%eax
 8484163:	75 0a                	jne    848416f <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x1c1>
 8484165:	c7 85 5c ff ff ff 03 	movl   $0x3,-0xa4(%ebp)
 848416c:	00 00 00 
 848416f:	8b 9d 60 ff ff ff    	mov    -0xa0(%ebp),%ebx
 8484175:	e8 21 80 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 848417a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 848417e:	89 04 24             	mov    %eax,(%esp)
 8484181:	e8 72 b8 ed ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 8484186:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8484189:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 848418d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8484194:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8484198:	74 0e                	je     84841a8 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x1fa>
 848419a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 848419d:	89 04 24             	mov    %eax,(%esp)
 84841a0:	e8 af 06 00 00       	call   8484854 <_ZNK8CDungeon22getHeroesRequiredQuestEv>
 84841a5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84841a8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84841ac:	74 30                	je     84841de <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x230>
 84841ae:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84841b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84841b4:	89 04 24             	mov    %eax,(%esp)
 84841b7:	e8 ea 66 d1 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84841bc:	83 c0 04             	add    $0x4,%eax
 84841bf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84841c3:	89 04 24             	mov    %eax,(%esp)
 84841c6:	e8 15 79 c0 ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 84841cb:	88 45 f3             	mov    %al,-0xd(%ebp)
 84841ce:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 84841d2:	74 0a                	je     84841de <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x230>
 84841d4:	c7 85 5c ff ff ff 03 	movl   $0x3,-0xa4(%ebp)
 84841db:	00 00 00 
 84841de:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 84841e4:	66 89 45 d2          	mov    %ax,-0x2e(%ebp)
 84841e8:	8b 55 08             	mov    0x8(%ebp),%edx
 84841eb:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84841f1:	8d 4d d2             	lea    -0x2e(%ebp),%ecx
 84841f4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84841f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84841fc:	89 04 24             	mov    %eax,(%esp)
 84841ff:	e8 aa 3a f0 ff       	call   8387cae <_ZNSt3mapIscSt4lessIsESaISt4pairIKscEEE4findERS3_>
 8484204:	83 ec 04             	sub    $0x4,%esp
 8484207:	8b 55 08             	mov    0x8(%ebp),%edx
 848420a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 848420d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484211:	89 04 24             	mov    %eax,(%esp)
 8484214:	e8 c1 3a f0 ff       	call   8387cda <_ZNSt3mapIscSt4lessIsESaISt4pairIKscEEE3endEv>
 8484219:	83 ec 04             	sub    $0x4,%esp
 848421c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 848421f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484223:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8484229:	89 04 24             	mov    %eax,(%esp)
 848422c:	e8 cf 3a f0 ff       	call   8387d00 <_ZNKSt17_Rb_tree_iteratorISt4pairIKscEEeqERKS3_>
 8484231:	84 c0                	test   %al,%al
 8484233:	74 52                	je     8484287 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x2d9>
 8484235:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8484238:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 848423e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8484242:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 8484248:	89 54 24 04          	mov    %edx,0x4(%esp)
 848424c:	89 04 24             	mov    %eax,(%esp)
 848424f:	e8 5e d0 c8 ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8484254:	83 ec 04             	sub    $0x4,%esp
 8484257:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 848425a:	89 44 24 04          	mov    %eax,0x4(%esp)
 848425e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8484261:	89 04 24             	mov    %eax,(%esp)
 8484264:	e8 2b 06 00 00       	call   8484894 <_ZNSt4pairIKscEC1IiiEEOS_IT_T0_E>
 8484269:	8b 55 08             	mov    0x8(%ebp),%edx
 848426c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 848426f:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 8484272:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484276:	89 54 24 04          	mov    %edx,0x4(%esp)
 848427a:	89 04 24             	mov    %eax,(%esp)
 848427d:	e8 04 3b f0 ff       	call   8387d86 <_ZNSt3mapIscSt4lessIsESaISt4pairIKscEEE6insertERKS4_>
 8484282:	83 ec 04             	sub    $0x4,%esp
 8484285:	eb 3b                	jmp    84842c2 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x314>
 8484287:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 848428d:	89 04 24             	mov    %eax,(%esp)
 8484290:	e8 1d 3b f0 ff       	call   8387db2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKscEEptEv>
 8484295:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8484299:	0f be d0             	movsbl %al,%edx
 848429c:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 84842a2:	39 c2                	cmp    %eax,%edx
 84842a4:	0f 9c c0             	setl   %al
 84842a7:	84 c0                	test   %al,%al
 84842a9:	74 17                	je     84842c2 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x314>
 84842ab:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84842b1:	89 04 24             	mov    %eax,(%esp)
 84842b4:	e8 f9 3a f0 ff       	call   8387db2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKscEEptEv>
 84842b9:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 84842bf:	88 50 02             	mov    %dl,0x2(%eax)
 84842c2:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84842c8:	89 04 24             	mov    %eax,(%esp)
 84842cb:	e8 0a c2 c4 ff       	call   80d04da <_ZN5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEppEv>
 84842d0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84842d3:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84842d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84842dd:	89 04 24             	mov    %eax,(%esp)
 84842e0:	e8 59 c1 c4 ff       	call   80d043e <_ZNK5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsE3endEv>
 84842e5:	83 ec 04             	sub    $0x4,%esp
 84842e8:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84842eb:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84842f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84842f5:	89 04 24             	mov    %eax,(%esp)
 84842f8:	e8 bb c1 c4 ff       	call   80d04b8 <_ZN5boostneINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiSB_SsSC_SE_iEENS_6detail23enable_if_interoperableIT_T4_NS_3mpl6apply2INSF_12always_bool2ESH_SI_E4typeEE4typeERKNS_15iterator_facadeISH_T0_T1_T2_T3_EERKNSQ_ISI_T5_T6_T7_T8_EE>
 84842fd:	89 c3                	mov    %eax,%ebx
 84842ff:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8484302:	89 04 24             	mov    %eax,(%esp)
 8484305:	e8 b0 9d c4 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 848430a:	eb 15                	jmp    8484321 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x373>
 848430c:	89 d3                	mov    %edx,%ebx
 848430e:	89 c6                	mov    %eax,%esi
 8484310:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8484313:	89 04 24             	mov    %eax,(%esp)
 8484316:	e8 9f 9d c4 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 848431b:	89 f0                	mov    %esi,%eax
 848431d:	89 da                	mov    %ebx,%edx
 848431f:	eb 0a                	jmp    848432b <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x37d>
 8484321:	84 db                	test   %bl,%bl
 8484323:	0f 85 46 fd ff ff    	jne    848406f <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0xc1>
 8484329:	eb 18                	jmp    8484343 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x395>
 848432b:	89 d3                	mov    %edx,%ebx
 848432d:	89 c6                	mov    %eax,%esi
 848432f:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8484335:	89 04 24             	mov    %eax,(%esp)
 8484338:	e8 7d 9d c4 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 848433d:	89 f0                	mov    %esi,%eax
 848433f:	89 da                	mov    %ebx,%edx
 8484341:	eb 23                	jmp    8484366 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x3b8>
 8484343:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8484349:	89 04 24             	mov    %eax,(%esp)
 848434c:	e8 69 9d c4 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8484351:	bb 01 00 00 00       	mov    $0x1,%ebx
 8484356:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 848435c:	89 04 24             	mov    %eax,(%esp)
 848435f:	e8 10 8c c4 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8484364:	eb 30                	jmp    8484396 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x3e8>
 8484366:	89 d3                	mov    %edx,%ebx
 8484368:	89 c6                	mov    %eax,%esi
 848436a:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8484370:	89 04 24             	mov    %eax,(%esp)
 8484373:	e8 fc 8b c4 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8484378:	89 f0                	mov    %esi,%eax
 848437a:	89 da                	mov    %ebx,%edx
 848437c:	eb 00                	jmp    848437e <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x3d0>
 848437e:	89 d3                	mov    %edx,%ebx
 8484380:	89 c6                	mov    %eax,%esi
 8484382:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8484388:	89 04 24             	mov    %eax,(%esp)
 848438b:	e8 14 9d c4 ff       	call   80ce0a4 <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8484390:	89 f0                	mov    %esi,%eax
 8484392:	89 da                	mov    %ebx,%edx
 8484394:	eb 10                	jmp    84843a6 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x3f8>
 8484396:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 848439c:	89 04 24             	mov    %eax,(%esp)
 848439f:	e8 00 9d c4 ff       	call   80ce0a4 <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 84843a4:	eb 15                	jmp    84843bb <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x40d>
 84843a6:	89 d3                	mov    %edx,%ebx
 84843a8:	89 c6                	mov    %eax,%esi
 84843aa:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84843ad:	89 04 24             	mov    %eax,(%esp)
 84843b0:	e8 2b 38 28 00       	call   8707be0 <_ZNSsD1Ev>
 84843b5:	89 f0                	mov    %esi,%eax
 84843b7:	89 da                	mov    %ebx,%edx
 84843b9:	eb 0d                	jmp    84843c8 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x41a>
 84843bb:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84843be:	89 04 24             	mov    %eax,(%esp)
 84843c1:	e8 1a 38 28 00       	call   8707be0 <_ZNSsD1Ev>
 84843c6:	eb 1b                	jmp    84843e3 <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc+0x435>
 84843c8:	89 d3                	mov    %edx,%ebx
 84843ca:	89 c6                	mov    %eax,%esi
 84843cc:	8d 45 90             	lea    -0x70(%ebp),%eax
 84843cf:	89 04 24             	mov    %eax,(%esp)
 84843d2:	e8 87 9c c4 ff       	call   80ce05e <_ZN5boost14char_separatorIcSt11char_traitsIcEED1Ev>
 84843d7:	89 f0                	mov    %esi,%eax
 84843d9:	89 da                	mov    %ebx,%edx
 84843db:	89 04 24             	mov    %eax,(%esp)
 84843de:	e8 6d f3 65 00       	call   8ae3750 <_Unwind_Resume>
 84843e3:	8d 45 90             	lea    -0x70(%ebp),%eax
 84843e6:	89 04 24             	mov    %eax,(%esp)
 84843e9:	e8 70 9c c4 ff       	call   80ce05e <_ZN5boost14char_separatorIcSt11char_traitsIcEED1Ev>
 84843ee:	89 d8                	mov    %ebx,%eax
 84843f0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84843f3:	83 c4 00             	add    $0x0,%esp
 84843f6:	5b                   	pop    %ebx
 84843f7:	5e                   	pop    %esi
 84843f8:	5d                   	pop    %ebp
 84843f9:	c3                   	ret

```

```c
// WongWork::CDungeonClear::AradfromString @ 0x8483fae

/* WongWork::CDungeonClear::AradfromString(CUser*, char const*) */

undefined4 __thiscall
WongWork::CDungeonClear::AradfromString(CDungeonClear *this,CUser *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  string *psVar3;
  string *psVar4;
  char *pcVar5;
  int iVar6;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  local_d0 [36];
  _Rb_tree_iterator<std::pair<short_const,char>> local_ac [4];
  int local_a8;
  int local_a4;
  vector<std::string,std::allocator<std::string>> local_a0 [12];
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  local_94 [28];
  string local_78;
  char_separator<char,std::char_traits<char>> local_74 [23];
  allocator<char> local_5d;
  iterator_facade local_5c [36];
  string local_38;
  allocator<char> local_33;
  undefined2 local_32;
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_30 [4];
  pair local_2c [8];
  pair<short_const,char> local_24 [4];
  int local_20 [2];
  CDungeon *local_18;
  char local_11;
  uint local_10;
  
  boost::char_separator<char,std::char_traits<char>>::char_separator(local_74,&DAT_08c73820,0,0);
  std::allocator<char>::allocator();
                    /* try { // try from 08483ffb to 08483fff has its CatchHandler @ 08484002 */
  std::string::string((string *)&local_78,param_2,(allocator *)&local_5d);
  std::allocator<char>::~allocator(&local_5d);
                    /* try { // try from 0848403c to 08484040 has its CatchHandler @ 084843a6 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::tokenizer<std::string>(local_94,&local_78,(char_separator *)local_74);
                    /* try { // try from 0848404a to 0848404e has its CatchHandler @ 0848437e */
  std::vector<std::string,std::allocator<std::string>>::vector(local_a0);
                    /* try { // try from 08484062 to 08484066 has its CatchHandler @ 08484366 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::begin();
  while( true ) {
    boost::
    tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
    ::end();
                    /* try { // try from 084842f8 to 084842fc has its CatchHandler @ 0848430c */
    cVar2 = boost::operator!=((iterator_facade *)local_d0,local_5c);
                    /* try { // try from 08484305 to 08484309 has its CatchHandler @ 0848432b */
    boost::
    token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
    ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                       *)local_5c);
    if (cVar2 == '\0') break;
    std::allocator<char>::allocator();
                    /* try { // try from 0848408f to 08484093 has its CatchHandler @ 084840df */
    std::string::string((string *)&local_38,"|",(allocator *)&local_33);
                    /* try { // try from 0848409d to 084840ba has its CatchHandler @ 084840bd */
    psVar3 = (string *)
             boost::
             iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
             ::operator*(local_d0);
    arad_parsing(psVar3,(vector *)local_a0,&local_38);
                    /* try { // try from 084840d8 to 084840dc has its CatchHandler @ 084840df */
    std::string::~string((string *)&local_38);
    std::allocator<char>::~allocator(&local_33);
    psVar4 = (string *)std::vector<std::string,std::allocator<std::string>>::operator[](local_a0,0);
                    /* try { // try from 0848411b to 084842e4 has its CatchHandler @ 0848432b */
    pcVar5 = (char *)std::string::c_str(psVar4);
    local_a4 = atoi(pcVar5);
    psVar4 = (string *)std::vector<std::string,std::allocator<std::string>>::operator[](local_a0,1);
    pcVar5 = (char *)std::string::c_str(psVar4);
    local_a8 = atoi(pcVar5);
    if (local_a8 == 4) {
      local_a8 = 3;
    }
    iVar6 = G_CDataManager();
    local_18 = (CDungeon *)CDataManager::find_dungeon(iVar6);
    local_11 = '\0';
    local_10 = 0;
    if (local_18 != (CDungeon *)0x0) {
      local_10 = CDungeon::getHeroesRequiredQuest(local_18);
    }
    uVar1 = local_10;
    if (local_10 != 0) {
      iVar6 = CUser::getCurCharacQuestR(param_1);
      local_11 = CQuestClear::isClearedQuest((CQuestClear *)(iVar6 + 4),uVar1);
      if (local_11 != '\0') {
        local_a8 = 3;
      }
    }
    local_32 = (undefined2)local_a4;
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::find
              ((short *)local_ac);
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::end(local_30)
    ;
    cVar2 = std::_Rb_tree_iterator<std::pair<short_const,char>>::operator==
                      (local_ac,(_Rb_tree_iterator *)local_30);
    if (cVar2 == '\0') {
      iVar6 = std::_Rb_tree_iterator<std::pair<short_const,char>>::operator->(local_ac);
      if (*(char *)(iVar6 + 2) < local_a8) {
        iVar6 = std::_Rb_tree_iterator<std::pair<short_const,char>>::operator->(local_ac);
        *(char *)(iVar6 + 2) = (char)local_a8;
      }
    }
    else {
      std::make_pair<int&,int&>(local_20,&local_a4);
      std::pair<short_const,char>::pair<int,int>(local_24,(pair *)local_20);
      std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::insert
                (local_2c);
    }
    boost::
    iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
    ::operator++(local_d0);
  }
                    /* try { // try from 0848434c to 08484350 has its CatchHandler @ 08484366 */
  boost::
  token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                     *)local_d0);
                    /* try { // try from 0848435f to 08484363 has its CatchHandler @ 0848437e */
  std::vector<std::string,std::allocator<std::string>>::~vector(local_a0);
                    /* try { // try from 0848439f to 084843a3 has its CatchHandler @ 084843a6 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~tokenizer(local_94);
                    /* try { // try from 084843c1 to 084843c5 has its CatchHandler @ 084843c8 */
  std::string::~string((string *)&local_78);
  boost::char_separator<char,std::char_traits<char>>::~char_separator(local_74);
  return 1;
}

```

---

## enumDungeonClear

```asm
// === 084846e2 WongWork::CDungeonClear::enumDungeonClear  [0x084846e2-0x84847f6] ===
 84846e2:	55                   	push   %ebp
 84846e3:	89 e5                	mov    %esp,%ebp
 84846e5:	53                   	push   %ebx
 84846e6:	83 ec 34             	sub    $0x34,%esp
 84846e9:	8d 45 14             	lea    0x14(%ebp),%eax
 84846ec:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84846ef:	8b 55 08             	mov    0x8(%ebp),%edx
 84846f2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84846f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84846f9:	89 04 24             	mov    %eax,(%esp)
 84846fc:	e8 dd 01 00 00       	call   84848de <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE5beginEv>
 8484701:	83 ec 04             	sub    $0x4,%esp
 8484704:	8b 55 08             	mov    0x8(%ebp),%edx
 8484707:	8d 45 d8             	lea    -0x28(%ebp),%eax
 848470a:	89 54 24 04          	mov    %edx,0x4(%esp)
 848470e:	89 04 24             	mov    %eax,(%esp)
 8484711:	e8 4a 01 00 00       	call   8484860 <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE3endEv>
 8484716:	83 ec 04             	sub    $0x4,%esp
 8484719:	e9 b7 00 00 00       	jmp    84847d5 <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz+0xf3>
 848471e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8484721:	89 04 24             	mov    %eax,(%esp)
 8484724:	e8 5d 01 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 8484729:	0f b7 00             	movzwl (%eax),%eax
 848472c:	98                   	cwtl
 848472d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8484730:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8484733:	89 04 24             	mov    %eax,(%esp)
 8484736:	e8 4b 01 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 848473b:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 848473f:	88 45 eb             	mov    %al,-0x15(%ebp)
 8484742:	e8 54 7a c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8484747:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 848474a:	89 54 24 04          	mov    %edx,0x4(%esp)
 848474e:	89 04 24             	mov    %eax,(%esp)
 8484751:	e8 a2 b2 ed ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 8484756:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8484759:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 848475d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8484764:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8484768:	74 0e                	je     8484778 <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz+0x96>
 848476a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 848476d:	89 04 24             	mov    %eax,(%esp)
 8484770:	e8 df 00 00 00       	call   8484854 <_ZNK8CDungeon22getHeroesRequiredQuestEv>
 8484775:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8484778:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 848477c:	74 2a                	je     84847a8 <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz+0xc6>
 848477e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8484781:	8b 45 0c             	mov    0xc(%ebp),%eax
 8484784:	89 04 24             	mov    %eax,(%esp)
 8484787:	e8 1a 61 d1 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 848478c:	83 c0 04             	add    $0x4,%eax
 848478f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8484793:	89 04 24             	mov    %eax,(%esp)
 8484796:	e8 45 73 c0 ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 848479b:	88 45 f3             	mov    %al,-0xd(%ebp)
 848479e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 84847a2:	74 04                	je     84847a8 <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz+0xc6>
 84847a4:	c6 45 eb 04          	movb   $0x4,-0x15(%ebp)
 84847a8:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84847ab:	0f be 55 eb          	movsbl -0x15(%ebp),%edx
 84847af:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84847b2:	98                   	cwtl
 84847b3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84847b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84847bb:	89 04 24             	mov    %eax,(%esp)
 84847be:	8b 45 10             	mov    0x10(%ebp),%eax
 84847c1:	ff d0                	call   *%eax
 84847c3:	83 f0 01             	xor    $0x1,%eax
 84847c6:	84 c0                	test   %al,%al
 84847c8:	75 27                	jne    84847f1 <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz+0x10f>
 84847ca:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84847cd:	89 04 24             	mov    %eax,(%esp)
 84847d0:	e8 2f 01 00 00       	call   8484904 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKscEEppEv>
 84847d5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84847d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84847dc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84847df:	89 04 24             	mov    %eax,(%esp)
 84847e2:	e8 3b 01 00 00       	call   8484922 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEneERKS3_>
 84847e7:	84 c0                	test   %al,%al
 84847e9:	0f 85 2f ff ff ff    	jne    848471e <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz+0x3c>
 84847ef:	eb 01                	jmp    84847f2 <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz+0x110>
 84847f1:	90                   	nop
 84847f2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84847f5:	c9                   	leave
 84847f6:	c3                   	ret

```

```c
// WongWork::CDungeonClear::enumDungeonClear @ 0x84846e2

/* WongWork::CDungeonClear::enumDungeonClear(CUser*, bool (*)(short, char, char*), ...) const */

void __thiscall
WongWork::CDungeonClear::enumDungeonClear
          (CDungeonClear *this,CUser *param_1,_func_bool_short_char_char_ptr *param_2,...)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  short *psVar4;
  int iVar5;
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_2c [4];
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_28 [4];
  char *local_24;
  int local_20;
  char local_19;
  CDungeon *local_18;
  char local_11;
  uint local_10;
  
  local_24 = &stack0x00000010;
  std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::begin(local_28)
  ;
  std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::end(local_2c);
  while( true ) {
    cVar3 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28,
                       (_Rb_tree_const_iterator *)local_2c);
    if (cVar3 == '\0') {
      return;
    }
    psVar4 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28);
    local_20 = (int)*psVar4;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28);
    local_19 = *(char *)(iVar5 + 2);
    iVar5 = G_CDataManager();
    local_18 = (CDungeon *)CDataManager::find_dungeon(iVar5);
    local_11 = '\0';
    local_10 = 0;
    if (local_18 != (CDungeon *)0x0) {
      local_10 = CDungeon::getHeroesRequiredQuest(local_18);
    }
    uVar1 = local_10;
    if (local_10 != 0) {
      iVar5 = CUser::getCurCharacQuestR(param_1);
      local_11 = CQuestClear::isClearedQuest((CQuestClear *)(iVar5 + 4),uVar1);
      if (local_11 != '\0') {
        local_19 = '\x04';
      }
    }
    bVar2 = (*param_2)((short)local_20,local_19,local_24);
    if (!bVar2) break;
    std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
              ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_28);
  }
  return;
}

```

---

## fromString

```asm
// === 084843fa WongWork::CDungeonClear::fromString  [0x084843fa-0x848441b] ===
 84843fa:	55                   	push   %ebp
 84843fb:	89 e5                	mov    %esp,%ebp
 84843fd:	83 ec 38             	sub    $0x38,%esp
 8484400:	8b 45 10             	mov    0x10(%ebp),%eax
 8484403:	89 44 24 08          	mov    %eax,0x8(%esp)
 8484407:	8b 45 0c             	mov    0xc(%ebp),%eax
 848440a:	89 44 24 04          	mov    %eax,0x4(%esp)
 848440e:	8b 45 08             	mov    0x8(%ebp),%eax
 8484411:	89 04 24             	mov    %eax,(%esp)
 8484414:	e8 95 fb ff ff       	call   8483fae <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc>
 8484419:	c9                   	leave
 848441a:	c3                   	ret
 848441b:	90                   	nop

```

```c
// WongWork::CDungeonClear::fromString @ 0x84843fa

/* WongWork::CDungeonClear::fromString(CUser*, char*) */

void __thiscall
WongWork::CDungeonClear::fromString(CDungeonClear *this,CUser *param_1,char *param_2)

{
  AradfromString(this,param_1,param_2);
  return;
}

```

---

## toString

```asm
// === 0848441c WongWork::CDungeonClear::toString  [0x0848441c-0x8484557] ===
 848441c:	55                   	push   %ebp
 848441d:	89 e5                	mov    %esp,%ebp
 848441f:	53                   	push   %ebx
 8484420:	83 ec 34             	sub    $0x34,%esp
 8484423:	8b 45 08             	mov    0x8(%ebp),%eax
 8484426:	89 04 24             	mov    %eax,(%esp)
 8484429:	e8 9c 04 00 00       	call   84848ca <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE5emptyEv>
 848442e:	84 c0                	test   %al,%al
 8484430:	74 0a                	je     848443c <_ZNK8WongWork13CDungeonClear8toStringEPcj+0x20>
 8484432:	b8 00 00 00 00       	mov    $0x0,%eax
 8484437:	e9 16 01 00 00       	jmp    8484552 <_ZNK8WongWork13CDungeonClear8toStringEPcj+0x136>
 848443c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8484443:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 848444a:	8b 55 08             	mov    0x8(%ebp),%edx
 848444d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484450:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484454:	89 04 24             	mov    %eax,(%esp)
 8484457:	e8 82 04 00 00       	call   84848de <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE5beginEv>
 848445c:	83 ec 04             	sub    $0x4,%esp
 848445f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484462:	89 04 24             	mov    %eax,(%esp)
 8484465:	e8 1c 04 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 848446a:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 848446e:	0f be d8             	movsbl %al,%ebx
 8484471:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484474:	89 04 24             	mov    %eax,(%esp)
 8484477:	e8 0a 04 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 848447c:	0f b7 00             	movzwl (%eax),%eax
 848447f:	98                   	cwtl
 8484480:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8484484:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8484488:	c7 44 24 08 24 38 c7 	movl   $0x8c73824,0x8(%esp)
 848448f:	08 
 8484490:	8b 45 10             	mov    0x10(%ebp),%eax
 8484493:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484497:	8b 45 0c             	mov    0xc(%ebp),%eax
 848449a:	89 04 24             	mov    %eax,(%esp)
 848449d:	e8 7a 83 10 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84844a2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84844a5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84844a8:	89 04 24             	mov    %eax,(%esp)
 84844ab:	e8 54 04 00 00       	call   8484904 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKscEEppEv>
 84844b0:	8b 55 08             	mov    0x8(%ebp),%edx
 84844b3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84844b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84844ba:	89 04 24             	mov    %eax,(%esp)
 84844bd:	e8 9e 03 00 00       	call   8484860 <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE3endEv>
 84844c2:	83 ec 04             	sub    $0x4,%esp
 84844c5:	eb 6e                	jmp    8484535 <_ZNK8WongWork13CDungeonClear8toStringEPcj+0x119>
 84844c7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84844ca:	89 04 24             	mov    %eax,(%esp)
 84844cd:	e8 b4 03 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 84844d2:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 84844d6:	0f be d8             	movsbl %al,%ebx
 84844d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84844dc:	89 04 24             	mov    %eax,(%esp)
 84844df:	e8 a2 03 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 84844e4:	0f b7 00             	movzwl (%eax),%eax
 84844e7:	0f bf d0             	movswl %ax,%edx
 84844ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84844ed:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84844f0:	29 c1                	sub    %eax,%ecx
 84844f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84844f5:	03 45 0c             	add    0xc(%ebp),%eax
 84844f8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84844fc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8484500:	c7 44 24 08 2a 38 c7 	movl   $0x8c7382a,0x8(%esp)
 8484507:	08 
 8484508:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 848450c:	89 04 24             	mov    %eax,(%esp)
 848450f:	e8 08 83 10 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8484514:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8484517:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 848451b:	79 07                	jns    8484524 <_ZNK8WongWork13CDungeonClear8toStringEPcj+0x108>
 848451d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8484522:	eb 2e                	jmp    8484552 <_ZNK8WongWork13CDungeonClear8toStringEPcj+0x136>
 8484524:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8484527:	01 45 f0             	add    %eax,-0x10(%ebp)
 848452a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848452d:	89 04 24             	mov    %eax,(%esp)
 8484530:	e8 cf 03 00 00       	call   8484904 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKscEEppEv>
 8484535:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8484538:	89 44 24 04          	mov    %eax,0x4(%esp)
 848453c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848453f:	89 04 24             	mov    %eax,(%esp)
 8484542:	e8 db 03 00 00       	call   8484922 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEneERKS3_>
 8484547:	84 c0                	test   %al,%al
 8484549:	0f 85 78 ff ff ff    	jne    84844c7 <_ZNK8WongWork13CDungeonClear8toStringEPcj+0xab>
 848454f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8484552:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8484555:	c9                   	leave
 8484556:	c3                   	ret
 8484557:	90                   	nop

```

```c
// WongWork::CDungeonClear::toString @ 0x848441c

/* WongWork::CDungeonClear::toString(char*, unsigned int) const */

int __thiscall WongWork::CDungeonClear::toString(CDungeonClear *this,char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_1c [4];
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_18 [4];
  int local_14;
  int local_10;
  
  cVar1 = std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::empty
                    ((map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> *
                     )this);
  if (cVar1 == '\0') {
    local_14 = 0;
    local_10 = 0;
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::begin
              (local_18);
    iVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    cVar1 = *(char *)(iVar2 + 2);
    psVar3 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    local_14 = OS_API::snprintf(param_1,param_2,"%d|%d",(int)*psVar3,(int)cVar1);
    std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
              ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::end(local_1c)
    ;
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18,
                              (_Rb_tree_const_iterator *)local_1c), cVar1 != '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
      cVar1 = *(char *)(iVar2 + 2);
      psVar3 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                  ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18)
      ;
      local_10 = OS_API::snprintf(param_1 + local_14,param_2 - local_14,",%d|%d",(int)*psVar3,
                                  (int)cVar1);
      if (local_10 < 0) {
        return -1;
      }
      local_14 = local_14 + local_10;
      std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

```

---

## toString_08484558

```asm
// === 08484558 WongWork::CDungeonClear::toString  [0x08484558-0x84846e1] ===
 8484558:	55                   	push   %ebp
 8484559:	89 e5                	mov    %esp,%ebp
 848455b:	57                   	push   %edi
 848455c:	56                   	push   %esi
 848455d:	53                   	push   %ebx
 848455e:	83 ec 4c             	sub    $0x4c,%esp
 8484561:	8b 45 08             	mov    0x8(%ebp),%eax
 8484564:	89 04 24             	mov    %eax,(%esp)
 8484567:	e8 5e 03 00 00       	call   84848ca <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE5emptyEv>
 848456c:	84 c0                	test   %al,%al
 848456e:	74 0a                	je     848457a <_ZNK8WongWork13CDungeonClear8toStringERSsi+0x22>
 8484570:	b8 00 00 00 00       	mov    $0x0,%eax
 8484575:	e9 5d 01 00 00       	jmp    84846d7 <_ZNK8WongWork13CDungeonClear8toStringERSsi+0x17f>
 848457a:	8b 45 10             	mov    0x10(%ebp),%eax
 848457d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8484580:	8b 45 10             	mov    0x10(%ebp),%eax
 8484583:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484587:	8b 45 0c             	mov    0xc(%ebp),%eax
 848458a:	89 04 24             	mov    %eax,(%esp)
 848458d:	e8 de 4a 28 00       	call   8709070 <_ZNSs6resizeEj>
 8484592:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8484599:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84845a0:	8b 55 08             	mov    0x8(%ebp),%edx
 84845a3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84845a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84845aa:	89 04 24             	mov    %eax,(%esp)
 84845ad:	e8 2c 03 00 00       	call   84848de <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE5beginEv>
 84845b2:	83 ec 04             	sub    $0x4,%esp
 84845b5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84845b8:	89 04 24             	mov    %eax,(%esp)
 84845bb:	e8 c6 02 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 84845c0:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 84845c4:	0f be f0             	movsbl %al,%esi
 84845c7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84845ca:	89 04 24             	mov    %eax,(%esp)
 84845cd:	e8 b4 02 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 84845d2:	0f b7 00             	movzwl (%eax),%eax
 84845d5:	0f bf d8             	movswl %ax,%ebx
 84845d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84845db:	89 04 24             	mov    %eax,(%esp)
 84845de:	e8 0d 1f 28 00       	call   87064f0 <_ZNKSs5c_strEv>
 84845e3:	89 74 24 10          	mov    %esi,0x10(%esp)
 84845e7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84845eb:	c7 44 24 08 24 38 c7 	movl   $0x8c73824,0x8(%esp)
 84845f2:	08 
 84845f3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84845f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84845fa:	89 04 24             	mov    %eax,(%esp)
 84845fd:	e8 1a 82 10 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8484602:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8484605:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8484608:	89 04 24             	mov    %eax,(%esp)
 848460b:	e8 f4 02 00 00       	call   8484904 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKscEEppEv>
 8484610:	8b 55 08             	mov    0x8(%ebp),%edx
 8484613:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8484616:	89 54 24 04          	mov    %edx,0x4(%esp)
 848461a:	89 04 24             	mov    %eax,(%esp)
 848461d:	e8 3e 02 00 00       	call   8484860 <_ZNKSt3mapIscSt4lessIsESaISt4pairIKscEEE3endEv>
 8484622:	83 ec 04             	sub    $0x4,%esp
 8484625:	e9 90 00 00 00       	jmp    84846ba <_ZNK8WongWork13CDungeonClear8toStringERSsi+0x162>
 848462a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 848462d:	89 04 24             	mov    %eax,(%esp)
 8484630:	e8 51 02 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 8484635:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8484639:	0f be f0             	movsbl %al,%esi
 848463c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 848463f:	89 04 24             	mov    %eax,(%esp)
 8484642:	e8 3f 02 00 00       	call   8484886 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEptEv>
 8484647:	0f b7 00             	movzwl (%eax),%eax
 848464a:	0f bf d8             	movswl %ax,%ebx
 848464d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8484650:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8484653:	89 d7                	mov    %edx,%edi
 8484655:	29 c7                	sub    %eax,%edi
 8484657:	8b 45 0c             	mov    0xc(%ebp),%eax
 848465a:	89 04 24             	mov    %eax,(%esp)
 848465d:	e8 8e 1e 28 00       	call   87064f0 <_ZNKSs5c_strEv>
 8484662:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8484665:	01 d0                	add    %edx,%eax
 8484667:	89 74 24 10          	mov    %esi,0x10(%esp)
 848466b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 848466f:	c7 44 24 08 2a 38 c7 	movl   $0x8c7382a,0x8(%esp)
 8484676:	08 
 8484677:	89 7c 24 04          	mov    %edi,0x4(%esp)
 848467b:	89 04 24             	mov    %eax,(%esp)
 848467e:	e8 99 81 10 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8484683:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8484686:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 848468a:	79 1d                	jns    84846a9 <_ZNK8WongWork13CDungeonClear8toStringERSsi+0x151>
 848468c:	8b 45 10             	mov    0x10(%ebp),%eax
 848468f:	03 45 dc             	add    -0x24(%ebp),%eax
 8484692:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484696:	8b 45 0c             	mov    0xc(%ebp),%eax
 8484699:	89 04 24             	mov    %eax,(%esp)
 848469c:	e8 cf 49 28 00       	call   8709070 <_ZNSs6resizeEj>
 84846a1:	8b 45 10             	mov    0x10(%ebp),%eax
 84846a4:	01 45 dc             	add    %eax,-0x24(%ebp)
 84846a7:	eb 81                	jmp    848462a <_ZNK8WongWork13CDungeonClear8toStringERSsi+0xd2>
 84846a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84846ac:	01 45 e0             	add    %eax,-0x20(%ebp)
 84846af:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84846b2:	89 04 24             	mov    %eax,(%esp)
 84846b5:	e8 4a 02 00 00       	call   8484904 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKscEEppEv>
 84846ba:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84846bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84846c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84846c4:	89 04 24             	mov    %eax,(%esp)
 84846c7:	e8 56 02 00 00       	call   8484922 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKscEEneERKS3_>
 84846cc:	84 c0                	test   %al,%al
 84846ce:	0f 85 56 ff ff ff    	jne    848462a <_ZNK8WongWork13CDungeonClear8toStringERSsi+0xd2>
 84846d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84846d7:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84846da:	83 c4 00             	add    $0x0,%esp
 84846dd:	5b                   	pop    %ebx
 84846de:	5e                   	pop    %esi
 84846df:	5f                   	pop    %edi
 84846e0:	5d                   	pop    %ebp
 84846e1:	c3                   	ret

```

```c
// WongWork::CDungeonClear::toString @ 0x8484558

/* WongWork::CDungeonClear::toString(std::string&, int) const */

int __thiscall WongWork::CDungeonClear::toString(CDungeonClear *this,string *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  char *pcVar5;
  uint uVar6;
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_30 [4];
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_2c [4];
  uint local_28;
  int local_24;
  int local_20;
  
  cVar2 = std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::empty
                    ((map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> *
                     )this);
  if (cVar2 == '\0') {
    local_28 = param_2;
    std::string::resize((string *)param_1,param_2);
    local_24 = 0;
    local_20 = 0;
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::begin
              (local_2c);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_2c);
    cVar2 = *(char *)(iVar3 + 2);
    psVar4 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_2c);
    sVar1 = *psVar4;
    pcVar5 = (char *)std::string::c_str((string *)param_1);
    local_24 = OS_API::snprintf(pcVar5,local_28,"%d|%d",(int)sVar1,(int)cVar2);
    std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
              ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_2c);
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::end(local_30)
    ;
    while (cVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_2c,
                              (_Rb_tree_const_iterator *)local_30), cVar2 != '\0') {
      while( true ) {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_2c);
        cVar2 = *(char *)(iVar3 + 2);
        psVar4 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                    ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)
                                     local_2c);
        sVar1 = *psVar4;
        uVar6 = local_28 - local_24;
        iVar3 = std::string::c_str((string *)param_1);
        local_20 = OS_API::snprintf((char *)(iVar3 + local_24),uVar6,",%d|%d",(int)sVar1,(int)cVar2)
        ;
        if (-1 < local_20) break;
        std::string::resize((string *)param_1,param_2 + local_28);
        local_28 = local_28 + param_2;
      }
      local_24 = local_24 + local_20;
      std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_2c);
    }
  }
  else {
    local_24 = 0;
  }
  return local_24;
}

```

