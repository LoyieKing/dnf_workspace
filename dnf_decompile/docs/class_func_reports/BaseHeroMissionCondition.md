# BaseHeroMissionCondition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## BaseHeroMissionCondition

```asm
// === 08164f12 BaseHeroMissionCondition::BaseHeroMissionCondition  [0x08164f12-0x8164f39] ===
 8164f12:	55                   	push   %ebp
 8164f13:	89 e5                	mov    %esp,%ebp
 8164f15:	83 ec 18             	sub    $0x18,%esp
 8164f18:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f1b:	c7 00 d8 f0 b7 08    	movl   $0x8b7f0d8,(%eax)
 8164f21:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f24:	8b 55 0c             	mov    0xc(%ebp),%edx
 8164f27:	89 50 04             	mov    %edx,0x4(%eax)
 8164f2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f2d:	83 c0 08             	add    $0x8,%eax
 8164f30:	89 04 24             	mov    %eax,(%esp)
 8164f33:	e8 90 32 00 00       	call   81681c8 <_ZN20HeroMissionConditionC1Ev>
 8164f38:	c9                   	leave
 8164f39:	c3                   	ret

```

```c
// BaseHeroMissionCondition::BaseHeroMissionCondition @ 0x8164f12

/* BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T) */

void __thiscall
BaseHeroMissionCondition::BaseHeroMissionCondition
          (BaseHeroMissionCondition *this,undefined4 param_2)

{
  *(undefined ***)this = &PTR__BaseHeroMissionCondition_08b7f0d8;
  *(undefined4 *)(this + 4) = param_2;
  HeroMissionCondition::HeroMissionCondition((HeroMissionCondition *)(this + 8));
  return;
}

```

---

## getMailContent

```asm
// === 08165004 BaseHeroMissionCondition::getMailContent  [0x08165004-0x816502d] ===
 8165004:	55                   	push   %ebp
 8165005:	89 e5                	mov    %esp,%ebp
 8165007:	53                   	push   %ebx
 8165008:	83 ec 14             	sub    $0x14,%esp
 816500b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 816500e:	89 d8                	mov    %ebx,%eax
 8165010:	8b 55 0c             	mov    0xc(%ebp),%edx
 8165013:	83 c2 18             	add    $0x18,%edx
 8165016:	89 54 24 04          	mov    %edx,0x4(%esp)
 816501a:	89 04 24             	mov    %eax,(%esp)
 816501d:	e8 8e 29 5a 00       	call   87079b0 <_ZNSsC1ERKSs>
 8165022:	89 d8                	mov    %ebx,%eax
 8165024:	89 d8                	mov    %ebx,%eax
 8165026:	83 c4 14             	add    $0x14,%esp
 8165029:	5b                   	pop    %ebx
 816502a:	5d                   	pop    %ebp
 816502b:	c2 04 00             	ret    $0x4

```

```c
// BaseHeroMissionCondition::getMailContent @ 0x8165004

/* BaseHeroMissionCondition::getMailContent() */

string * BaseHeroMissionCondition::getMailContent(void)

{
  string *in_stack_00000004;
  int in_stack_00000008;
  
  std::string::string(in_stack_00000004,(string *)(in_stack_00000008 + 0x18));
  return in_stack_00000004;
}

```

---

## getMailTitle

```asm
// === 08164fda BaseHeroMissionCondition::getMailTitle  [0x08164fda-0x8165003] ===
 8164fda:	55                   	push   %ebp
 8164fdb:	89 e5                	mov    %esp,%ebp
 8164fdd:	53                   	push   %ebx
 8164fde:	83 ec 14             	sub    $0x14,%esp
 8164fe1:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8164fe4:	89 d8                	mov    %ebx,%eax
 8164fe6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8164fe9:	83 c2 14             	add    $0x14,%edx
 8164fec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8164ff0:	89 04 24             	mov    %eax,(%esp)
 8164ff3:	e8 b8 29 5a 00       	call   87079b0 <_ZNSsC1ERKSs>
 8164ff8:	89 d8                	mov    %ebx,%eax
 8164ffa:	89 d8                	mov    %ebx,%eax
 8164ffc:	83 c4 14             	add    $0x14,%esp
 8164fff:	5b                   	pop    %ebx
 8165000:	5d                   	pop    %ebp
 8165001:	c2 04 00             	ret    $0x4

```

```c
// BaseHeroMissionCondition::getMailTitle @ 0x8164fda

/* BaseHeroMissionCondition::getMailTitle() */

string * BaseHeroMissionCondition::getMailTitle(void)

{
  string *in_stack_00000004;
  int in_stack_00000008;
  
  std::string::string(in_stack_00000004,(string *)(in_stack_00000008 + 0x14));
  return in_stack_00000004;
}

```

---

## getMissionCode

```asm
// === 08164faa BaseHeroMissionCondition::getMissionCode  [0x08164faa-0x8164fb5] ===
 8164faa:	55                   	push   %ebp
 8164fab:	89 e5                	mov    %esp,%ebp
 8164fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8164fb0:	8b 40 04             	mov    0x4(%eax),%eax
 8164fb3:	5d                   	pop    %ebp
 8164fb4:	c3                   	ret
 8164fb5:	90                   	nop

```

```c
// BaseHeroMissionCondition::getMissionCode @ 0x8164faa

/* BaseHeroMissionCondition::getMissionCode() */

undefined4 __thiscall BaseHeroMissionCondition::getMissionCode(BaseHeroMissionCondition *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## getMissionType

```asm
// === 08164fb6 BaseHeroMissionCondition::getMissionType  [0x08164fb6-0x8164fc1] ===
 8164fb6:	55                   	push   %ebp
 8164fb7:	89 e5                	mov    %esp,%ebp
 8164fb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8164fbc:	8b 40 0c             	mov    0xc(%eax),%eax
 8164fbf:	5d                   	pop    %ebp
 8164fc0:	c3                   	ret
 8164fc1:	90                   	nop

```

```c
// BaseHeroMissionCondition::getMissionType @ 0x8164fb6

/* BaseHeroMissionCondition::getMissionType() */

undefined4 __thiscall BaseHeroMissionCondition::getMissionType(BaseHeroMissionCondition *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## isRepeatMission

```asm
// === 08164fc2 BaseHeroMissionCondition::isRepeatMission  [0x08164fc2-0x8164fcd] ===
 8164fc2:	55                   	push   %ebp
 8164fc3:	89 e5                	mov    %esp,%ebp
 8164fc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8164fc8:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8164fcc:	5d                   	pop    %ebp
 8164fcd:	c3                   	ret

```

```c
// BaseHeroMissionCondition::isRepeatMission @ 0x8164fc2

/* BaseHeroMissionCondition::isRepeatMission() */

BaseHeroMissionCondition __thiscall
BaseHeroMissionCondition::isRepeatMission(BaseHeroMissionCondition *this)

{
  return this[0x10];
}

```

---

## isResetState

```asm
// === 08164fce BaseHeroMissionCondition::isResetState  [0x08164fce-0x8164fd9] ===
 8164fce:	55                   	push   %ebp
 8164fcf:	89 e5                	mov    %esp,%ebp
 8164fd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8164fd4:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8164fd8:	5d                   	pop    %ebp
 8164fd9:	c3                   	ret

```

```c
// BaseHeroMissionCondition::isResetState @ 0x8164fce

/* BaseHeroMissionCondition::isResetState() */

BaseHeroMissionCondition __thiscall
BaseHeroMissionCondition::isResetState(BaseHeroMissionCondition *this)

{
  return this[0x11];
}

```

---

## rewardProcess

```asm
// === 0816502e BaseHeroMissionCondition::rewardProcess  [0x0816502e-0x8165341] ===
 816502e:	55                   	push   %ebp
 816502f:	89 e5                	mov    %esp,%ebp
 8165031:	57                   	push   %edi
 8165032:	56                   	push   %esi
 8165033:	53                   	push   %ebx
 8165034:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 816503a:	8b 45 08             	mov    0x8(%ebp),%eax
 816503d:	8d 50 1c             	lea    0x1c(%eax),%edx
 8165040:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8165043:	89 54 24 04          	mov    %edx,0x4(%esp)
 8165047:	89 04 24             	mov    %eax,(%esp)
 816504a:	e8 e5 33 00 00       	call   8168434 <_ZNSt6vectorIN20HeroMissionCondition10RewardDataESaIS1_EE5beginEv>
 816504f:	83 ec 04             	sub    $0x4,%esp
 8165052:	8b 45 08             	mov    0x8(%ebp),%eax
 8165055:	8d 50 1c             	lea    0x1c(%eax),%edx
 8165058:	8d 45 c0             	lea    -0x40(%ebp),%eax
 816505b:	89 54 24 04          	mov    %edx,0x4(%esp)
 816505f:	89 04 24             	mov    %eax,(%esp)
 8165062:	e8 f1 33 00 00       	call   8168458 <_ZNSt6vectorIN20HeroMissionCondition10RewardDataESaIS1_EE3endEv>
 8165067:	83 ec 04             	sub    $0x4,%esp
 816506a:	e9 a8 02 00 00       	jmp    8165317 <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser+0x2e9>
 816506f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8165072:	89 04 24             	mov    %eax,(%esp)
 8165075:	e8 46 34 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 816507a:	8b 00                	mov    (%eax),%eax
 816507c:	89 c3                	mov    %eax,%ebx
 816507e:	e8 18 71 f6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8165083:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8165087:	89 04 24             	mov    %eax,(%esp)
 816508a:	e8 a3 a9 1f 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 816508f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8165092:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8165096:	75 76                	jne    816510e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser+0xe0>
 8165098:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816509b:	89 04 24             	mov    %eax,(%esp)
 816509e:	e8 1d 34 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 81650a3:	8b 38                	mov    (%eax),%edi
 81650a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81650a8:	8b 40 04             	mov    0x4(%eax),%eax
 81650ab:	89 c6                	mov    %eax,%esi
 81650ad:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81650b4:	ff 
 81650b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81650b8:	89 04 24             	mov    %eax,(%esp)
 81650bb:	e8 e0 8e 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81650c0:	89 c3                	mov    %eax,%ebx
 81650c2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81650c9:	00 
 81650ca:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 81650d1:	00 
 81650d2:	c7 44 24 04 c0 ef b7 	movl   $0x8b7efc0,0x4(%esp)
 81650d9:	08 
 81650da:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81650dd:	89 04 24             	mov    %eax,(%esp)
 81650e0:	e8 33 a6 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81650e5:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81650e9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81650ed:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81650f1:	c7 44 24 04 e8 da b7 	movl   $0x8b7dae8,0x4(%esp)
 81650f8:	08 
 81650f9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81650fc:	89 04 24             	mov    %eax,(%esp)
 81650ff:	e8 84 a6 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8165104:	b8 00 00 00 00       	mov    $0x0,%eax
 8165109:	e9 28 02 00 00       	jmp    8165336 <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser+0x308>
 816510e:	8d 45 83             	lea    -0x7d(%ebp),%eax
 8165111:	89 04 24             	mov    %eax,(%esp)
 8165114:	e8 3b 67 f6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8165119:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816511c:	89 04 24             	mov    %eax,(%esp)
 816511f:	e8 9c 33 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 8165124:	8b 00                	mov    (%eax),%eax
 8165126:	89 45 85             	mov    %eax,-0x7b(%ebp)
 8165129:	8b 45 d8             	mov    -0x28(%ebp),%eax
 816512c:	8b 00                	mov    (%eax),%eax
 816512e:	83 c0 08             	add    $0x8,%eax
 8165131:	8b 10                	mov    (%eax),%edx
 8165133:	8d 45 83             	lea    -0x7d(%ebp),%eax
 8165136:	89 44 24 04          	mov    %eax,0x4(%esp)
 816513a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 816513d:	89 04 24             	mov    %eax,(%esp)
 8165140:	ff d2                	call   *%edx
 8165142:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8165145:	89 04 24             	mov    %eax,(%esp)
 8165148:	e8 73 33 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 816514d:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8165151:	0f b7 c0             	movzwl %ax,%eax
 8165154:	89 44 24 04          	mov    %eax,0x4(%esp)
 8165158:	8d 45 83             	lea    -0x7d(%ebp),%eax
 816515b:	89 04 24             	mov    %eax,(%esp)
 816515e:	e8 21 67 f6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8165163:	66 c7 45 de ff ff    	movw   $0xffff,-0x22(%ebp)
 8165169:	8b 45 0c             	mov    0xc(%ebp),%eax
 816516c:	89 04 24             	mov    %eax,(%esp)
 816516f:	e8 1a 51 f7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8165174:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 816517b:	00 
 816517c:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8165183:	00 
 8165184:	c7 44 24 44 0d 00 00 	movl   $0xd,0x44(%esp)
 816518b:	00 
 816518c:	8b 55 83             	mov    -0x7d(%ebp),%edx
 816518f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8165193:	8b 55 87             	mov    -0x79(%ebp),%edx
 8165196:	89 54 24 08          	mov    %edx,0x8(%esp)
 816519a:	8b 55 8b             	mov    -0x75(%ebp),%edx
 816519d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81651a1:	8b 55 8f             	mov    -0x71(%ebp),%edx
 81651a4:	89 54 24 10          	mov    %edx,0x10(%esp)
 81651a8:	8b 55 93             	mov    -0x6d(%ebp),%edx
 81651ab:	89 54 24 14          	mov    %edx,0x14(%esp)
 81651af:	8b 55 97             	mov    -0x69(%ebp),%edx
 81651b2:	89 54 24 18          	mov    %edx,0x18(%esp)
 81651b6:	8b 55 9b             	mov    -0x65(%ebp),%edx
 81651b9:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81651bd:	8b 55 9f             	mov    -0x61(%ebp),%edx
 81651c0:	89 54 24 20          	mov    %edx,0x20(%esp)
 81651c4:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 81651c7:	89 54 24 24          	mov    %edx,0x24(%esp)
 81651cb:	8b 55 a7             	mov    -0x59(%ebp),%edx
 81651ce:	89 54 24 28          	mov    %edx,0x28(%esp)
 81651d2:	8b 55 ab             	mov    -0x55(%ebp),%edx
 81651d5:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81651d9:	8b 55 af             	mov    -0x51(%ebp),%edx
 81651dc:	89 54 24 30          	mov    %edx,0x30(%esp)
 81651e0:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 81651e3:	89 54 24 34          	mov    %edx,0x34(%esp)
 81651e7:	8b 55 b7             	mov    -0x49(%ebp),%edx
 81651ea:	89 54 24 38          	mov    %edx,0x38(%esp)
 81651ee:	8b 55 bb             	mov    -0x45(%ebp),%edx
 81651f1:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81651f5:	0f b6 55 bf          	movzbl -0x41(%ebp),%edx
 81651f9:	88 54 24 40          	mov    %dl,0x40(%esp)
 81651fd:	89 04 24             	mov    %eax,(%esp)
 8165200:	e8 81 db 39 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8165205:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 8165209:	66 83 7d de 00       	cmpw   $0x0,-0x22(%ebp)
 816520e:	78 28                	js     8165238 <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser+0x20a>
 8165210:	0f bf 45 de          	movswl -0x22(%ebp),%eax
 8165214:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8165218:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 816521f:	00 
 8165220:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8165227:	00 
 8165228:	8b 45 0c             	mov    0xc(%ebp),%eax
 816522b:	89 04 24             	mov    %eax,(%esp)
 816522e:	e8 a5 70 51 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8165233:	e9 d4 00 00 00       	jmp    816530c <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser+0x2de>
 8165238:	8b 45 08             	mov    0x8(%ebp),%eax
 816523b:	83 c0 14             	add    $0x14,%eax
 816523e:	89 04 24             	mov    %eax,(%esp)
 8165241:	e8 aa 12 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8165246:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816524d:	00 
 816524e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8165252:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8165259:	00 
 816525a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8165261:	e8 98 05 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8165266:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8165269:	8b 45 08             	mov    0x8(%ebp),%eax
 816526c:	83 c0 18             	add    $0x18,%eax
 816526f:	89 04 24             	mov    %eax,(%esp)
 8165272:	e8 79 12 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8165277:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816527e:	00 
 816527f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8165283:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 816528a:	00 
 816528b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8165292:	e8 67 05 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8165297:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816529a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816529d:	89 04 24             	mov    %eax,(%esp)
 81652a0:	e8 eb 69 f6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81652a5:	89 c3                	mov    %eax,%ebx
 81652a7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81652aa:	89 04 24             	mov    %eax,(%esp)
 81652ad:	e8 fe 90 f1 ff       	call   807e3b0 <strlen@plt>
 81652b2:	89 c6                	mov    %eax,%esi
 81652b4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81652bb:	ff 
 81652bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81652bf:	89 04 24             	mov    %eax,(%esp)
 81652c2:	e8 d9 8c 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81652c7:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81652ce:	00 
 81652cf:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81652d6:	00 
 81652d7:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81652db:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81652e2:	00 
 81652e3:	89 74 24 14          	mov    %esi,0x14(%esp)
 81652e7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81652ea:	89 54 24 10          	mov    %edx,0x10(%esp)
 81652ee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81652f2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81652f9:	00 
 81652fa:	8d 45 83             	lea    -0x7d(%ebp),%eax
 81652fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8165301:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8165304:	89 04 24             	mov    %eax,(%esp)
 8165307:	e8 dc 02 3f 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 816530c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816530f:	89 04 24             	mov    %eax,(%esp)
 8165312:	e8 93 31 00 00       	call   81684aa <_ZN9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEppEv>
 8165317:	8d 45 c0             	lea    -0x40(%ebp),%eax
 816531a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816531e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8165321:	89 04 24             	mov    %eax,(%esp)
 8165324:	e8 55 31 00 00       	call   816847e <_ZN9__gnu_cxxneIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8165329:	84 c0                	test   %al,%al
 816532b:	0f 85 3e fd ff ff    	jne    816506f <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser+0x41>
 8165331:	b8 01 00 00 00       	mov    $0x1,%eax
 8165336:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8165339:	83 c4 00             	add    $0x0,%esp
 816533c:	5b                   	pop    %ebx
 816533d:	5e                   	pop    %esi
 816533e:	5f                   	pop    %edi
 816533f:	5d                   	pop    %ebp
 8165340:	c3                   	ret
 8165341:	90                   	nop

```

```c
// BaseHeroMissionCondition::rewardProcess @ 0x816502e

/* BaseHeroMissionCondition::rewardProcess(CUser*) */

undefined4 __thiscall
BaseHeroMissionCondition::rewardProcess(BaseHeroMissionCondition *this,CUser *param_1)

{
  bool bVar1;
  int *piVar2;
  CDataManager *this_00;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined2 local_81;
  undefined2 uStack_7f;
  undefined2 uStack_7d;
  undefined2 uStack_7b;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined1 local_45;
  __normal_iterator local_44 [4];
  __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
  local_40 [4];
  cMyTrace local_3c [16];
  int *local_2c;
  short local_26;
  undefined4 local_24;
  char *local_20;
  
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  begin();
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_40,local_44);
    if (!bVar1) {
      return 1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                    ::operator->(local_40);
    iVar5 = *piVar2;
    this_00 = (CDataManager *)G_CDataManager();
    local_2c = (int *)CDataManager::find_item(this_00,iVar5);
    if (local_2c == (int *)0x0) break;
    Inven_Item::Inven_Item((Inven_Item *)&local_81);
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
             ::operator->(local_40);
    uStack_7f = (undefined2)*puVar3;
    uStack_7d = (undefined2)((uint)*puVar3 >> 0x10);
    (**(code **)(*local_2c + 8))(local_2c,&local_81);
    iVar5 = __gnu_cxx::
            __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
            ::operator->(local_40);
    Inven_Item::set_add_info((Inven_Item *)&local_81,(uint)*(ushort *)(iVar5 + 4));
    local_26 = 0xffff;
    uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_26 = CInventory::insertItemIntoInventory
                         (uVar6,CONCAT22(uStack_7f,local_81),CONCAT22(uStack_7b,uStack_7d),local_79,
                          local_75,local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                          local_55,local_51,local_4d,local_49,local_45,0xd,1,1);
    if (local_26 < 0) {
      pcVar7 = (char *)std::string::c_str((string *)(this + 0x14));
      local_24 = RDARScriptStringManager::findString
                           ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,(bool *)0x0);
      pcVar7 = (char *)std::string::c_str((string *)(this + 0x18));
      local_20 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                    (bool *)0x0);
      uVar6 = CUser::GetServerGroup(param_1);
      sVar8 = strlen(local_20);
      uVar9 = CUser::get_charac_no(param_1,-1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_24,&local_81,0,uVar9,local_20,sVar8,0,uVar6,0,0);
    }
    else {
      CUser::SendUpdateItem(param_1,1,0,(int)local_26);
    }
    __gnu_cxx::
    __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
    ::operator++(local_40);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
           ::operator->(local_40);
  uVar6 = *puVar3;
  uVar9 = *(undefined4 *)(this + 4);
  uVar4 = CUser::get_charac_no(param_1,-1);
  cMyTrace::cMyTrace(local_3c,"bool BaseHeroMissionCondition::rewardProcess(CUser*)",0x6e,5);
  cMyTrace::operator()
            (local_3c,"[HeroMission] Invalid item. (charac:%u, mission:%d, item:%u)",uVar4,uVar9,
             uVar6);
  return 0;
}

```

---

## setConditionData

```asm
// === 08164f8c BaseHeroMissionCondition::setConditionData  [0x08164f8c-0x8164fa9] ===
 8164f8c:	55                   	push   %ebp
 8164f8d:	89 e5                	mov    %esp,%ebp
 8164f8f:	83 ec 18             	sub    $0x18,%esp
 8164f92:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f95:	8d 50 08             	lea    0x8(%eax),%edx
 8164f98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8164f9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164f9f:	89 14 24             	mov    %edx,(%esp)
 8164fa2:	e8 8d c2 7f 00       	call   8961234 <_ZN20HeroMissionConditionaSERKS_>
 8164fa7:	c9                   	leave
 8164fa8:	c3                   	ret
 8164fa9:	90                   	nop

```

```c
// BaseHeroMissionCondition::setConditionData @ 0x8164f8c

/* BaseHeroMissionCondition::setConditionData(HeroMissionCondition&) */

void __thiscall
BaseHeroMissionCondition::setConditionData
          (BaseHeroMissionCondition *this,HeroMissionCondition *param_1)

{
  HeroMissionCondition::operator=((HeroMissionCondition *)(this + 8),param_1);
  return;
}

```

---

## ~BaseHeroMissionCondition

```asm
// === 08164f3a BaseHeroMissionCondition::~BaseHeroMissionCondition  [0x08164f3a-0x8164f6d] ===
 8164f3a:	55                   	push   %ebp
 8164f3b:	89 e5                	mov    %esp,%ebp
 8164f3d:	83 ec 18             	sub    $0x18,%esp
 8164f40:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f43:	c7 00 d8 f0 b7 08    	movl   $0x8b7f0d8,(%eax)
 8164f49:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f4c:	83 c0 08             	add    $0x8,%eax
 8164f4f:	89 04 24             	mov    %eax,(%esp)
 8164f52:	e8 09 33 00 00       	call   8168260 <_ZN20HeroMissionConditionD1Ev>
 8164f57:	b8 00 00 00 00       	mov    $0x0,%eax
 8164f5c:	84 c0                	test   %al,%al
 8164f5e:	74 0b                	je     8164f6b <_ZN24BaseHeroMissionConditionD1Ev+0x31>
 8164f60:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f63:	89 04 24             	mov    %eax,(%esp)
 8164f66:	e8 85 f5 5b 00       	call   87244f0 <_ZdlPv>
 8164f6b:	c9                   	leave
 8164f6c:	c3                   	ret
 8164f6d:	90                   	nop

```

```c
// BaseHeroMissionCondition::~BaseHeroMissionCondition @ 0x8164f3a

/* WARNING: Removing unreachable block (ram,0x08164f60) */
/* BaseHeroMissionCondition::~BaseHeroMissionCondition() */

void __thiscall BaseHeroMissionCondition::~BaseHeroMissionCondition(BaseHeroMissionCondition *this)

{
  *(undefined ***)this = &PTR__BaseHeroMissionCondition_08b7f0d8;
  HeroMissionCondition::~HeroMissionCondition((HeroMissionCondition *)(this + 8));
  return;
}

```

---

## ~BaseHeroMissionCondition_08164f6e

```asm
// === 08164f6e BaseHeroMissionCondition::~BaseHeroMissionCondition  [0x08164f6e-0x8164f8b] ===
 8164f6e:	55                   	push   %ebp
 8164f6f:	89 e5                	mov    %esp,%ebp
 8164f71:	83 ec 18             	sub    $0x18,%esp
 8164f74:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f77:	89 04 24             	mov    %eax,(%esp)
 8164f7a:	e8 bb ff ff ff       	call   8164f3a <_ZN24BaseHeroMissionConditionD1Ev>
 8164f7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8164f82:	89 04 24             	mov    %eax,(%esp)
 8164f85:	e8 66 f5 5b 00       	call   87244f0 <_ZdlPv>
 8164f8a:	c9                   	leave
 8164f8b:	c3                   	ret

```

```c
// BaseHeroMissionCondition::~BaseHeroMissionCondition @ 0x8164f6e

/* BaseHeroMissionCondition::~BaseHeroMissionCondition() */

void __thiscall BaseHeroMissionCondition::~BaseHeroMissionCondition(BaseHeroMissionCondition *this)

{
  ~BaseHeroMissionCondition(this);
  operator_delete(this);
  return;
}

```

