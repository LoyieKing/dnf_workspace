# CCubeStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## collectCubeStatistics

```asm
// === 0860dfb8 CCubeStatistic::collectCubeStatistics  [0x0860dfb8-0x860e079] ===
 860dfb8:	55                   	push   %ebp
 860dfb9:	89 e5                	mov    %esp,%ebp
 860dfbb:	53                   	push   %ebx
 860dfbc:	83 ec 34             	sub    $0x34,%esp
 860dfbf:	e8 d7 e1 ab ff       	call   80cc19b <_Z14G_CDataManagerv>
 860dfc4:	8b 55 0c             	mov    0xc(%ebp),%edx
 860dfc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 860dfcb:	89 04 24             	mov    %eax,(%esp)
 860dfce:	e8 5f 1a d5 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 860dfd3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860dfd6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860dfda:	0f 84 92 00 00 00    	je     860e072 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD+0xba>
 860dfe0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860dfe3:	89 04 24             	mov    %eax,(%esp)
 860dfe6:	e8 27 33 ae ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 860dfeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 860dfef:	8b 45 08             	mov    0x8(%ebp),%eax
 860dff2:	89 04 24             	mov    %eax,(%esp)
 860dff5:	e8 9c fe ff ff       	call   860de96 <_ZN14CCubeStatistic13findCubeStuffEi>
 860dffa:	84 c0                	test   %al,%al
 860dffc:	74 27                	je     860e025 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD+0x6d>
 860dffe:	8b 45 18             	mov    0x18(%ebp),%eax
 860e001:	89 44 24 10          	mov    %eax,0x10(%esp)
 860e005:	8b 45 14             	mov    0x14(%ebp),%eax
 860e008:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860e00c:	8b 45 10             	mov    0x10(%ebp),%eax
 860e00f:	89 44 24 08          	mov    %eax,0x8(%esp)
 860e013:	8b 45 0c             	mov    0xc(%ebp),%eax
 860e016:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e01a:	8b 45 08             	mov    0x8(%ebp),%eax
 860e01d:	89 04 24             	mov    %eax,(%esp)
 860e020:	e8 b3 00 00 00       	call   860e0d8 <_ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD>
 860e025:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860e028:	89 04 24             	mov    %eax,(%esp)
 860e02b:	e8 e2 32 ae ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 860e030:	89 c3                	mov    %eax,%ebx
 860e032:	e8 19 fe ff ff       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 860e037:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e03b:	89 04 24             	mov    %eax,(%esp)
 860e03e:	e8 53 fe ff ff       	call   860de96 <_ZN14CCubeStatistic13findCubeStuffEi>
 860e043:	84 c0                	test   %al,%al
 860e045:	74 2c                	je     860e073 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD+0xbb>
 860e047:	e8 04 fe ff ff       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 860e04c:	8b 55 18             	mov    0x18(%ebp),%edx
 860e04f:	89 54 24 10          	mov    %edx,0x10(%esp)
 860e053:	8b 55 14             	mov    0x14(%ebp),%edx
 860e056:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860e05a:	8b 55 10             	mov    0x10(%ebp),%edx
 860e05d:	89 54 24 08          	mov    %edx,0x8(%esp)
 860e061:	8b 55 0c             	mov    0xc(%ebp),%edx
 860e064:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e068:	89 04 24             	mov    %eax,(%esp)
 860e06b:	e8 68 00 00 00       	call   860e0d8 <_ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD>
 860e070:	eb 01                	jmp    860e073 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD+0xbb>
 860e072:	90                   	nop
 860e073:	83 c4 34             	add    $0x34,%esp
 860e076:	5b                   	pop    %ebx
 860e077:	5d                   	pop    %ebp
 860e078:	c3                   	ret
 860e079:	90                   	nop

```

```c
// CCubeStatistic::collectCubeStatistics @ 0x860dfb8

/* CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD) */

void __thiscall
CCubeStatistic::collectCubeStatistics
          (CCubeStatistic *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_5
          )

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  int iVar2;
  CCubeStatistic *pCVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 != (CItem *)0x0) {
    iVar2 = CItem::getItemGroupName(this_01);
    cVar1 = findCubeStuff(this,iVar2);
    if (cVar1 != '\0') {
      sendCubeStatistic(this,param_1,param_2,param_3,param_5);
    }
    iVar2 = CItem::getItemGroupName(this_01);
    pCVar3 = (CCubeStatistic *)GetInstanceCubeStatistic();
    cVar1 = findCubeStuff(pCVar3,iVar2);
    if (cVar1 != '\0') {
      pCVar3 = (CCubeStatistic *)GetInstanceCubeStatistic();
      sendCubeStatistic(pCVar3,param_1,param_2,param_3,param_5);
    }
  }
  return;
}

```

---

## collectCubeStatistics_0860e07a

```asm
// === 0860e07a CCubeStatistic::collectCubeStatistics  [0x0860e07a-0x860e0d7] ===
 860e07a:	55                   	push   %ebp
 860e07b:	89 e5                	mov    %esp,%ebp
 860e07d:	83 ec 28             	sub    $0x28,%esp
 860e080:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 860e084:	74 4f                	je     860e0d5 <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD+0x5b>
 860e086:	8b 45 0c             	mov    0xc(%ebp),%eax
 860e089:	89 04 24             	mov    %eax,(%esp)
 860e08c:	e8 81 32 ae ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 860e091:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e095:	8b 45 08             	mov    0x8(%ebp),%eax
 860e098:	89 04 24             	mov    %eax,(%esp)
 860e09b:	e8 f6 fd ff ff       	call   860de96 <_ZN14CCubeStatistic13findCubeStuffEi>
 860e0a0:	84 c0                	test   %al,%al
 860e0a2:	74 32                	je     860e0d6 <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD+0x5c>
 860e0a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 860e0a7:	89 04 24             	mov    %eax,(%esp)
 860e0aa:	e8 99 2b b0 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 860e0af:	8b 55 18             	mov    0x18(%ebp),%edx
 860e0b2:	89 54 24 10          	mov    %edx,0x10(%esp)
 860e0b6:	8b 55 14             	mov    0x14(%ebp),%edx
 860e0b9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860e0bd:	8b 55 10             	mov    0x10(%ebp),%edx
 860e0c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 860e0c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e0c8:	8b 45 08             	mov    0x8(%ebp),%eax
 860e0cb:	89 04 24             	mov    %eax,(%esp)
 860e0ce:	e8 05 00 00 00       	call   860e0d8 <_ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD>
 860e0d3:	eb 01                	jmp    860e0d6 <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD+0x5c>
 860e0d5:	90                   	nop
 860e0d6:	c9                   	leave
 860e0d7:	c3                   	ret

```

```c
// CCubeStatistic::collectCubeStatistics @ 0x860e07a

/* CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD) */

void __thiscall
CCubeStatistic::collectCubeStatistics
          (CCubeStatistic *this,CItem *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != (CItem *)0x0) {
    iVar2 = CItem::getItemGroupName(param_1);
    cVar1 = findCubeStuff(this,iVar2);
    if (cVar1 != '\0') {
      uVar3 = CItem::get_index(param_1);
      sendCubeStatistic(this,uVar3,param_2,param_3,param_5);
    }
  }
  return;
}

```

---

## findCubeStuff

```asm
// === 0860de96 CCubeStatistic::findCubeStuff  [0x0860de96-0x860dfb7] ===
 860de96:	55                   	push   %ebp
 860de97:	89 e5                	mov    %esp,%ebp
 860de99:	56                   	push   %esi
 860de9a:	53                   	push   %ebx
 860de9b:	83 ec 40             	sub    $0x40,%esp
 860de9e:	e8 66 25 2b 00       	call   88c0409 <_Z21getItemGroupNameTablev>
 860dea3:	89 44 24 04          	mov    %eax,0x4(%esp)
 860dea7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860deaa:	89 04 24             	mov    %eax,(%esp)
 860dead:	e8 d0 36 00 00       	call   8611582 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEC1ERKS6_>
 860deb2:	8d 45 f3             	lea    -0xd(%ebp),%eax
 860deb5:	89 04 24             	mov    %eax,(%esp)
 860deb8:	e8 13 22 0d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 860debd:	8d 45 f3             	lea    -0xd(%ebp),%eax
 860dec0:	89 44 24 08          	mov    %eax,0x8(%esp)
 860dec4:	c7 44 24 04 2a 03 ce 	movl   $0x8ce032a,0x4(%esp)
 860decb:	08 
 860decc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860decf:	89 04 24             	mov    %eax,(%esp)
 860ded2:	e8 59 97 0f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 860ded7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860deda:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860dedd:	89 54 24 08          	mov    %edx,0x8(%esp)
 860dee1:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 860dee4:	89 54 24 04          	mov    %edx,0x4(%esp)
 860dee8:	89 04 24             	mov    %eax,(%esp)
 860deeb:	e8 c0 ee b6 ff       	call   817cdb0 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE4findERS3_>
 860def0:	83 ec 04             	sub    $0x4,%esp
 860def3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860def6:	89 04 24             	mov    %eax,(%esp)
 860def9:	e8 e2 9c 0f 00       	call   8707be0 <_ZNSsD1Ev>
 860defe:	eb 2a                	jmp    860df2a <_ZN14CCubeStatistic13findCubeStuffEi+0x94>
 860df00:	89 d3                	mov    %edx,%ebx
 860df02:	89 c6                	mov    %eax,%esi
 860df04:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860df07:	89 04 24             	mov    %eax,(%esp)
 860df0a:	e8 d1 9c 0f 00       	call   8707be0 <_ZNSsD1Ev>
 860df0f:	89 f0                	mov    %esi,%eax
 860df11:	89 da                	mov    %ebx,%edx
 860df13:	eb 00                	jmp    860df15 <_ZN14CCubeStatistic13findCubeStuffEi+0x7f>
 860df15:	89 d3                	mov    %edx,%ebx
 860df17:	89 c6                	mov    %eax,%esi
 860df19:	8d 45 f3             	lea    -0xd(%ebp),%eax
 860df1c:	89 04 24             	mov    %eax,(%esp)
 860df1f:	e8 cc 21 0d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 860df24:	89 f0                	mov    %esi,%eax
 860df26:	89 da                	mov    %ebx,%edx
 860df28:	eb 5c                	jmp    860df86 <_ZN14CCubeStatistic13findCubeStuffEi+0xf0>
 860df2a:	8d 45 f3             	lea    -0xd(%ebp),%eax
 860df2d:	89 04 24             	mov    %eax,(%esp)
 860df30:	e8 bb 21 0d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 860df35:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860df38:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 860df3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 860df3f:	89 04 24             	mov    %eax,(%esp)
 860df42:	e8 95 ee b6 ff       	call   817cddc <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE3endEv>
 860df47:	83 ec 04             	sub    $0x4,%esp
 860df4a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860df4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860df51:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860df54:	89 04 24             	mov    %eax,(%esp)
 860df57:	e8 a6 ee b6 ff       	call   817ce02 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEneERKS3_>
 860df5c:	84 c0                	test   %al,%al
 860df5e:	74 1f                	je     860df7f <_ZN14CCubeStatistic13findCubeStuffEi+0xe9>
 860df60:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860df63:	89 04 24             	mov    %eax,(%esp)
 860df66:	e8 ab ee b6 ff       	call   817ce16 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEptEv>
 860df6b:	8b 40 04             	mov    0x4(%eax),%eax
 860df6e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 860df71:	0f 94 c0             	sete   %al
 860df74:	84 c0                	test   %al,%al
 860df76:	74 07                	je     860df7f <_ZN14CCubeStatistic13findCubeStuffEi+0xe9>
 860df78:	bb 01 00 00 00       	mov    $0x1,%ebx
 860df7d:	eb 22                	jmp    860dfa1 <_ZN14CCubeStatistic13findCubeStuffEi+0x10b>
 860df7f:	bb 00 00 00 00       	mov    $0x0,%ebx
 860df84:	eb 1b                	jmp    860dfa1 <_ZN14CCubeStatistic13findCubeStuffEi+0x10b>
 860df86:	89 d3                	mov    %edx,%ebx
 860df88:	89 c6                	mov    %eax,%esi
 860df8a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860df8d:	89 04 24             	mov    %eax,(%esp)
 860df90:	e8 41 ec b6 ff       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 860df95:	89 f0                	mov    %esi,%eax
 860df97:	89 da                	mov    %ebx,%edx
 860df99:	89 04 24             	mov    %eax,(%esp)
 860df9c:	e8 af 57 4d 00       	call   8ae3750 <_Unwind_Resume>
 860dfa1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860dfa4:	89 04 24             	mov    %eax,(%esp)
 860dfa7:	e8 2a ec b6 ff       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 860dfac:	89 d8                	mov    %ebx,%eax
 860dfae:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860dfb1:	83 c4 00             	add    $0x0,%esp
 860dfb4:	5b                   	pop    %ebx
 860dfb5:	5e                   	pop    %esi
 860dfb6:	5d                   	pop    %ebp
 860dfb7:	c3                   	ret

```

```c
// CCubeStatistic::findCubeStuff @ 0x860de96

/* CCubeStatistic::findCubeStuff(int) */

undefined4 __thiscall CCubeStatistic::findCubeStuff(CCubeStatistic *this,int param_1)

{
  char cVar1;
  map *pmVar2;
  int iVar3;
  undefined4 uVar4;
  string local_34;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_30 [24];
  string local_18 [7];
  allocator<char> local_11;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_10 [4];
  
  pmVar2 = (map *)getItemGroupNameTable();
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map(local_30,pmVar2);
  std::allocator<char>::allocator();
                    /* try { // try from 0860ded2 to 0860ded6 has its CatchHandler @ 0860df15 */
  std::string::string(local_18,"cube stuff",(allocator *)&local_11);
                    /* try { // try from 0860deeb to 0860deef has its CatchHandler @ 0860df00 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_34);
                    /* try { // try from 0860def9 to 0860defd has its CatchHandler @ 0860df15 */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 0860df42 to 0860df46 has its CatchHandler @ 0860df86 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_34,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_34);
    if (*(int *)(iVar3 + 4) == param_1) {
      uVar4 = 1;
      goto LAB_0860dfa1;
    }
  }
  uVar4 = 0;
LAB_0860dfa1:
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map(local_30);
  return uVar4;
}

```

---

## sendCubeStatistic

```asm
// === 0860e0d8 CCubeStatistic::sendCubeStatistic  [0x0860e0d8-0x860e15a] ===
 860e0d8:	55                   	push   %ebp
 860e0d9:	89 e5                	mov    %esp,%ebp
 860e0db:	53                   	push   %ebx
 860e0dc:	83 ec 34             	sub    $0x34,%esp
 860e0df:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 860e0e2:	89 04 24             	mov    %eax,(%esp)
 860e0e5:	e8 44 1f 00 00       	call   861002e <_ZN21Packet_Cube_StatisticC1Ev>
 860e0ea:	e8 92 e0 ab ff       	call   80cc181 <_Z14G_CEnvironmentv>
 860e0ef:	89 04 24             	mov    %eax,(%esp)
 860e0f2:	e8 d3 c9 b3 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 860e0f7:	66 89 45 eb          	mov    %ax,-0x15(%ebp)
 860e0fb:	8b 45 14             	mov    0x14(%ebp),%eax
 860e0fe:	89 04 24             	mov    %eax,(%esp)
 860e101:	e8 b2 c1 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860e106:	66 89 45 ed          	mov    %ax,-0x13(%ebp)
 860e10a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860e10d:	89 45 ef             	mov    %eax,-0x11(%ebp)
 860e110:	8b 45 10             	mov    0x10(%ebp),%eax
 860e113:	89 45 f3             	mov    %eax,-0xd(%ebp)
 860e116:	8b 45 18             	mov    0x18(%ebp),%eax
 860e119:	88 45 f7             	mov    %al,-0x9(%ebp)
 860e11c:	8d 5d e1             	lea    -0x1f(%ebp),%ebx
 860e11f:	8b 45 14             	mov    0x14(%ebp),%eax
 860e122:	89 04 24             	mov    %eax,(%esp)
 860e125:	e8 66 db ab ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 860e12a:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 860e130:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e134:	89 14 24             	mov    %edx,(%esp)
 860e137:	e8 bc 3b b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860e13c:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 860e143:	00 
 860e144:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e148:	89 04 24             	mov    %eax,(%esp)
 860e14b:	e8 f4 3e e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860e150:	b8 01 00 00 00       	mov    $0x1,%eax
 860e155:	83 c4 34             	add    $0x34,%esp
 860e158:	5b                   	pop    %ebx
 860e159:	5d                   	pop    %ebp
 860e15a:	c3                   	ret

```

```c
// CCubeStatistic::sendCubeStatistic @ 0x860e0d8

/* CCubeStatistic::sendCubeStatistic(int, int, CUser*, CUBE_STATISTIC_FIELD) */

undefined4 __thiscall
CCubeStatistic::sendCubeStatistic
          (undefined4 this,undefined4 param_1,undefined4 param_2,CUserCharacInfo *param_3,
          undefined1 param_5)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  CStatisticServerProxy *this_01;
  Packet_Cube_Statistic local_23 [10];
  undefined2 local_19;
  undefined2 local_17;
  undefined4 local_15;
  undefined4 local_11;
  undefined1 local_d;
  
  Packet_Cube_Statistic::Packet_Cube_Statistic(local_23);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_19 = CEnvironment::get_channel_no(this_00);
  local_17 = CUserCharacInfo::get_charac_level(param_3);
  local_15 = param_1;
  local_11 = param_2;
  local_d = param_5;
  uVar1 = CUser::GetServerGroup((CUser *)param_3);
  this_01 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_01,(char *)local_23,0x17);
  return 1;
}

```

