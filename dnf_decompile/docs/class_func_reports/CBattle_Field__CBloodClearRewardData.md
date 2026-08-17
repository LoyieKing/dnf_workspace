# CBattle_Field__CBloodClearRewardData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## getUltimateRewardItem

```asm
// === 083070ca CBattle_Field::CBloodClearRewardData::getUltimateRewardItem  [0x083070ca-0x83071a5] ===
 83070ca:	55                   	push   %ebp
 83070cb:	89 e5                	mov    %esp,%ebp
 83070cd:	83 ec 38             	sub    $0x38,%esp
 83070d0:	8b 45 08             	mov    0x8(%ebp),%eax
 83070d3:	89 04 24             	mov    %eax,(%esp)
 83070d6:	e8 b9 7b 00 00       	call   830ec94 <_ZN13CBattle_Field21CBloodClearRewardData26getUltimateRoundClearPointEv>
 83070db:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83070de:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83070e5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83070ec:	e8 aa 50 dc ff       	call   80cc19b <_Z14G_CDataManagerv>
 83070f1:	8d 90 88 61 00 00    	lea    0x6188(%eax),%edx
 83070f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83070fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 83070fe:	89 04 24             	mov    %eax,(%esp)
 8307101:	e8 04 a9 00 00       	call   8311a0a <_ZNSt3mapIi20STUltimateRewardProbSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8307106:	83 ec 04             	sub    $0x4,%esp
 8307109:	e8 8d 50 dc ff       	call   80cc19b <_Z14G_CDataManagerv>
 830710e:	8d 88 88 61 00 00    	lea    0x6188(%eax),%ecx
 8307114:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8307117:	8d 55 e8             	lea    -0x18(%ebp),%edx
 830711a:	89 54 24 08          	mov    %edx,0x8(%esp)
 830711e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8307122:	89 04 24             	mov    %eax,(%esp)
 8307125:	e8 06 a9 00 00       	call   8311a30 <_ZNSt3mapIi20STUltimateRewardProbSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 830712a:	83 ec 04             	sub    $0x4,%esp
 830712d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8307130:	89 44 24 04          	mov    %eax,0x4(%esp)
 8307134:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8307137:	89 04 24             	mov    %eax,(%esp)
 830713a:	e8 1d a9 00 00       	call   8311a5c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20STUltimateRewardProbEEeqERKS4_>
 830713f:	84 c0                	test   %al,%al
 8307141:	74 07                	je     830714a <_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv+0x80>
 8307143:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8307148:	eb 5a                	jmp    83071a4 <_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv+0xda>
 830714a:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 8307151:	e8 31 aa 3a 00       	call   86b1b87 <_Z12get_rand_inti>
 8307156:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8307159:	8d 45 e0             	lea    -0x20(%ebp),%eax
 830715c:	89 04 24             	mov    %eax,(%esp)
 830715f:	e8 0c a9 00 00       	call   8311a70 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20STUltimateRewardProbEEptEv>
 8307164:	8b 40 04             	mov    0x4(%eax),%eax
 8307167:	89 45 ec             	mov    %eax,-0x14(%ebp)
 830716a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 830716d:	89 04 24             	mov    %eax,(%esp)
 8307170:	e8 fb a8 00 00       	call   8311a70 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20STUltimateRewardProbEEptEv>
 8307175:	8b 40 08             	mov    0x8(%eax),%eax
 8307178:	89 45 f0             	mov    %eax,-0x10(%ebp)
 830717b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 830717e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8307181:	7f 07                	jg     830718a <_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv+0xc0>
 8307183:	b8 e4 04 00 00       	mov    $0x4e4,%eax
 8307188:	eb 1a                	jmp    83071a4 <_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv+0xda>
 830718a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 830718d:	01 45 ec             	add    %eax,-0x14(%ebp)
 8307190:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8307193:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8307196:	7f 07                	jg     830719f <_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv+0xd5>
 8307198:	b8 e3 04 00 00       	mov    $0x4e3,%eax
 830719d:	eb 05                	jmp    83071a4 <_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv+0xda>
 830719f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83071a4:	c9                   	leave
 83071a5:	c3                   	ret

```

```c
// CBattle_Field::CBloodClearRewardData::getUltimateRewardItem @ 0x83070ca

/* CBattle_Field::CBloodClearRewardData::getUltimateRewardItem() */

undefined4 __thiscall
CBattle_Field::CBloodClearRewardData::getUltimateRewardItem(CBloodClearRewardData *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>> local_24 [4];
  map<int,STUltimateRewardProb,std::less<int>,std::allocator<std::pair<int_const,STUltimateRewardProb>>>
  local_20 [4];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_1c = getUltimateRoundClearPoint(this);
  local_18 = 0;
  local_14 = 0;
  G_CDataManager();
  std::
  map<int,STUltimateRewardProb,std::less<int>,std::allocator<std::pair<int_const,STUltimateRewardProb>>>
  ::end(local_20);
  G_CDataManager();
  std::
  map<int,STUltimateRewardProb,std::less<int>,std::allocator<std::pair<int_const,STUltimateRewardProb>>>
  ::find((int *)local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>>::operator==
                    (local_24,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    local_10 = get_rand_int(100);
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>>::operator->(local_24);
    local_18 = *(int *)(iVar3 + 4);
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>>::operator->(local_24);
    if (*(int *)(iVar3 + 8) < local_10) {
      if (local_18 + *(int *)(iVar3 + 8) < local_10) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0x4e3;
      }
    }
    else {
      uVar2 = 0x4e4;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## incUltimateRoundClearPoint

```asm
// === 08307096 CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint  [0x08307096-0x83070c9] ===
 8307096:	55                   	push   %ebp
 8307097:	89 e5                	mov    %esp,%ebp
 8307099:	53                   	push   %ebx
 830709a:	83 ec 04             	sub    $0x4,%esp
 830709d:	8b 45 08             	mov    0x8(%ebp),%eax
 83070a0:	8b 98 c8 09 00 00    	mov    0x9c8(%eax),%ebx
 83070a6:	e8 f0 50 dc ff       	call   80cc19b <_Z14G_CDataManagerv>
 83070ab:	8b 55 0c             	mov    0xc(%ebp),%edx
 83070ae:	81 c2 5c 18 00 00    	add    $0x185c,%edx
 83070b4:	8b 04 90             	mov    (%eax,%edx,4),%eax
 83070b7:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 83070ba:	8b 45 08             	mov    0x8(%ebp),%eax
 83070bd:	89 90 c8 09 00 00    	mov    %edx,0x9c8(%eax)
 83070c3:	83 c4 04             	add    $0x4,%esp
 83070c6:	5b                   	pop    %ebx
 83070c7:	5d                   	pop    %ebp
 83070c8:	c3                   	ret
 83070c9:	90                   	nop

```

```c
// CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint @ 0x8307096

/* CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint(int) */

void __thiscall
CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint
          (CBloodClearRewardData *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x9c8);
  iVar2 = G_CDataManager();
  *(int *)(this + 0x9c8) = iVar1 + *(int *)(iVar2 + (param_1 + 0x185c) * 4);
  return;
}

```

---

## onFinishBloodRound

```asm
// === 08306fc4 CBattle_Field::CBloodClearRewardData::onFinishBloodRound  [0x08306fc4-0x8307095] ===
 8306fc4:	55                   	push   %ebp
 8306fc5:	89 e5                	mov    %esp,%ebp
 8306fc7:	56                   	push   %esi
 8306fc8:	53                   	push   %ebx
 8306fc9:	83 ec 40             	sub    $0x40,%esp
 8306fcc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8306fcf:	8b 45 10             	mov    0x10(%ebp),%eax
 8306fd2:	88 55 f4             	mov    %dl,-0xc(%ebp)
 8306fd5:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 8306fd9:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8306fdd:	74 13                	je     8306ff2 <_ZN13CBattle_Field21CBloodClearRewardData18onFinishBloodRoundEbsP6CPartyPK8CDungeon+0x2e>
 8306fdf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8306fe6:	00 
 8306fe7:	8b 45 08             	mov    0x8(%ebp),%eax
 8306fea:	89 04 24             	mov    %eax,(%esp)
 8306fed:	e8 8a 7c 00 00       	call   830ec7c <_ZN13CBattle_Field21CBloodClearRewardData13setBloodClearEb>
 8306ff2:	0f bf 55 f0          	movswl -0x10(%ebp),%edx
 8306ff6:	8b 45 08             	mov    0x8(%ebp),%eax
 8306ff9:	89 50 08             	mov    %edx,0x8(%eax)
 8306ffc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8307003:	e8 a4 e8 e3 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8307008:	8b 55 08             	mov    0x8(%ebp),%edx
 830700b:	89 42 10             	mov    %eax,0x10(%edx)
 830700e:	8b 45 08             	mov    0x8(%ebp),%eax
 8307011:	89 04 24             	mov    %eax,(%esp)
 8307014:	e8 4b 7c 00 00       	call   830ec64 <_ZN13CBattle_Field21CBloodClearRewardData22getBloodRoundClearTimeEv>
 8307019:	89 44 24 04          	mov    %eax,0x4(%esp)
 830701d:	8b 45 08             	mov    0x8(%ebp),%eax
 8307020:	89 04 24             	mov    %eax,(%esp)
 8307023:	e8 12 7c 00 00       	call   830ec3a <_ZN13CBattle_Field21CBloodClearRewardData11addPlayTimeEj>
 8307028:	8b 45 18             	mov    0x18(%ebp),%eax
 830702b:	89 04 24             	mov    %eax,(%esp)
 830702e:	e8 73 e5 e3 ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 8307033:	89 c3                	mov    %eax,%ebx
 8307035:	8b 45 08             	mov    0x8(%ebp),%eax
 8307038:	89 04 24             	mov    %eax,(%esp)
 830703b:	e8 1a 7c 00 00       	call   830ec5a <_ZN13CBattle_Field21CBloodClearRewardData11getPlayTimeEv>
 8307040:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8307043:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8307048:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 830704b:	f7 e2                	mul    %edx
 830704d:	89 d6                	mov    %edx,%esi
 830704f:	c1 ee 06             	shr    $0x6,%esi
 8307052:	8b 45 08             	mov    0x8(%ebp),%eax
 8307055:	89 04 24             	mov    %eax,(%esp)
 8307058:	e8 07 7c 00 00       	call   830ec64 <_ZN13CBattle_Field21CBloodClearRewardData22getBloodRoundClearTimeEv>
 830705d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8307060:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8307065:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8307068:	f7 e2                	mul    %edx
 830706a:	c1 ea 06             	shr    $0x6,%edx
 830706d:	8b 45 08             	mov    0x8(%ebp),%eax
 8307070:	8b 40 08             	mov    0x8(%eax),%eax
 8307073:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8307077:	89 74 24 0c          	mov    %esi,0xc(%esp)
 830707b:	89 54 24 08          	mov    %edx,0x8(%esp)
 830707f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8307083:	8b 45 14             	mov    0x14(%ebp),%eax
 8307086:	89 04 24             	mov    %eax,(%esp)
 8307089:	e8 28 0d 2b 00       	call   85b7db6 <_ZN6CParty22historyBloodRoundClearEijjPKc>
 830708e:	83 c4 40             	add    $0x40,%esp
 8307091:	5b                   	pop    %ebx
 8307092:	5e                   	pop    %esi
 8307093:	5d                   	pop    %ebp
 8307094:	c3                   	ret
 8307095:	90                   	nop

```

```c
// CBattle_Field::CBloodClearRewardData::onFinishBloodRound @ 0x8306fc4

/* CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)
    */

void __thiscall
CBattle_Field::CBloodClearRewardData::onFinishBloodRound
          (CBloodClearRewardData *this,bool param_1,short param_2,CParty *param_3,CDungeon *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1) {
    setBloodClear(this,true);
  }
  *(int *)(this + 8) = (int)param_2;
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar2 = getBloodRoundClearTime(this);
  addPlayTime(this,uVar2);
  pcVar3 = (char *)CDungeon::GetDungeonName(param_4);
  uVar2 = getPlayTime(this);
  uVar4 = getBloodRoundClearTime(this);
  CParty::historyBloodRoundClear(param_3,*(int *)(this + 8),uVar4 / 1000,uVar2 / 1000,pcVar3);
  return;
}

```

---

## onStartBloodRound

```asm
// === 08306faa CBattle_Field::CBloodClearRewardData::onStartBloodRound  [0x08306faa-0x8306fc3] ===
 8306faa:	55                   	push   %ebp
 8306fab:	89 e5                	mov    %esp,%ebp
 8306fad:	83 ec 18             	sub    $0x18,%esp
 8306fb0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8306fb7:	e8 f0 e8 e3 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8306fbc:	8b 55 08             	mov    0x8(%ebp),%edx
 8306fbf:	89 42 0c             	mov    %eax,0xc(%edx)
 8306fc2:	c9                   	leave
 8306fc3:	c3                   	ret

```

```c
// CBattle_Field::CBloodClearRewardData::onStartBloodRound @ 0x8306faa

/* CBattle_Field::CBloodClearRewardData::onStartBloodRound() */

void __thiscall CBattle_Field::CBloodClearRewardData::onStartBloodRound(CBloodClearRewardData *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}

```

---

## reset

```asm
// === 08306ee0 CBattle_Field::CBloodClearRewardData::reset  [0x08306ee0-0x8306f5b] ===
 8306ee0:	55                   	push   %ebp
 8306ee1:	89 e5                	mov    %esp,%ebp
 8306ee3:	83 ec 28             	sub    $0x28,%esp
 8306ee6:	8b 45 08             	mov    0x8(%ebp),%eax
 8306ee9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8306ef0:	8b 45 08             	mov    0x8(%ebp),%eax
 8306ef3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8306ef9:	8b 45 08             	mov    0x8(%ebp),%eax
 8306efc:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8306f03:	8b 45 08             	mov    0x8(%ebp),%eax
 8306f06:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 8306f0a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8306f11:	eb 2f                	jmp    8306f42 <_ZN13CBattle_Field21CBloodClearRewardData5resetEv+0x62>
 8306f13:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8306f16:	8b 45 08             	mov    0x8(%ebp),%eax
 8306f19:	83 c2 04             	add    $0x4,%edx
 8306f1c:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8306f23:	00 
 8306f24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8306f27:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8306f2d:	83 c0 20             	add    $0x20,%eax
 8306f30:	03 45 08             	add    0x8(%ebp),%eax
 8306f33:	83 c0 08             	add    $0x8,%eax
 8306f36:	89 04 24             	mov    %eax,(%esp)
 8306f39:	e8 1e 00 00 00       	call   8306f5c <_ZN13CBattle_Field21CBloodClearRewardData14stRewardItem_t5resetEv>
 8306f3e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8306f42:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8306f46:	0f 9e c0             	setle  %al
 8306f49:	84 c0                	test   %al,%al
 8306f4b:	75 c6                	jne    8306f13 <_ZN13CBattle_Field21CBloodClearRewardData5resetEv+0x33>
 8306f4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8306f50:	c7 80 c8 09 00 00 00 	movl   $0x0,0x9c8(%eax)
 8306f57:	00 00 00 
 8306f5a:	c9                   	leave
 8306f5b:	c3                   	ret

```

```c
// CBattle_Field::CBloodClearRewardData::reset @ 0x8306ee0

/* CBattle_Field::CBloodClearRewardData::reset() */

void __thiscall CBattle_Field::CBloodClearRewardData::reset(CBloodClearRewardData *this)

{
  int local_10;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[0x14] = (CBloodClearRewardData)0x0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 4) * 4 + 8) = 0;
    stRewardItem_t::reset((stRewardItem_t *)(this + local_10 * 0x268 + 0x28));
  }
  *(undefined4 *)(this + 0x9c8) = 0;
  return;
}

```

