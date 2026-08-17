# advancealtar__StageTimeLineParameter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## StageTimeLineParameter

```asm
// === 08899e1c advancealtar::StageTimeLineParameter::StageTimeLineParameter  [0x08899e1c-0x8899e87] ===
 8899e1c:	55                   	push   %ebp
 8899e1d:	89 e5                	mov    %esp,%ebp
 8899e1f:	56                   	push   %esi
 8899e20:	53                   	push   %ebx
 8899e21:	83 ec 10             	sub    $0x10,%esp
 8899e24:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e27:	89 04 24             	mov    %eax,(%esp)
 8899e2a:	e8 93 1f 00 00       	call   889bdc2 <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 8899e2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e32:	83 c0 18             	add    $0x18,%eax
 8899e35:	89 04 24             	mov    %eax,(%esp)
 8899e38:	e8 ff 1f 00 00       	call   889be3c <_ZNSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 8899e3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e40:	83 c0 30             	add    $0x30,%eax
 8899e43:	89 04 24             	mov    %eax,(%esp)
 8899e46:	e8 23 ff ff ff       	call   8899d6e <_ZN12advancealtar8TimeLineC1Ev>
 8899e4b:	eb 33                	jmp    8899e80 <_ZN12advancealtar22StageTimeLineParameterC1Ev+0x64>
 8899e4d:	89 d3                	mov    %edx,%ebx
 8899e4f:	89 c6                	mov    %eax,%esi
 8899e51:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e54:	83 c0 18             	add    $0x18,%eax
 8899e57:	89 04 24             	mov    %eax,(%esp)
 8899e5a:	e8 99 1b 00 00       	call   889b9f8 <_ZNSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899e5f:	89 f0                	mov    %esi,%eax
 8899e61:	89 da                	mov    %ebx,%edx
 8899e63:	eb 00                	jmp    8899e65 <_ZN12advancealtar22StageTimeLineParameterC1Ev+0x49>
 8899e65:	89 d3                	mov    %edx,%ebx
 8899e67:	89 c6                	mov    %eax,%esi
 8899e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e6c:	89 04 24             	mov    %eax,(%esp)
 8899e6f:	e8 70 1b 00 00       	call   889b9e4 <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899e74:	89 f0                	mov    %esi,%eax
 8899e76:	89 da                	mov    %ebx,%edx
 8899e78:	89 04 24             	mov    %eax,(%esp)
 8899e7b:	e8 d0 98 24 00       	call   8ae3750 <_Unwind_Resume>
 8899e80:	83 c4 10             	add    $0x10,%esp
 8899e83:	5b                   	pop    %ebx
 8899e84:	5e                   	pop    %esi
 8899e85:	5d                   	pop    %ebp
 8899e86:	c3                   	ret
 8899e87:	90                   	nop

```

```c
// advancealtar::StageTimeLineParameter::StageTimeLineParameter @ 0x8899e1c

/* advancealtar::StageTimeLineParameter::StageTimeLineParameter() */

void __thiscall
advancealtar::StageTimeLineParameter::StageTimeLineParameter(StageTimeLineParameter *this)

{
  std::
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  ::map((map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
         *)this);
                    /* try { // try from 08899e38 to 08899e3c has its CatchHandler @ 08899e65 */
  std::
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  ::map((map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
         *)(this + 0x18));
                    /* try { // try from 08899e46 to 08899e4a has its CatchHandler @ 08899e4d */
  TimeLine::TimeLine((TimeLine *)(this + 0x30));
  return;
}

```

---

## checkAndSetActionDefine

```asm
// === 0889a032 advancealtar::StageTimeLineParameter::checkAndSetActionDefine  [0x0889a032-0x889a21d] ===
 889a032:	55                   	push   %ebp
 889a033:	89 e5                	mov    %esp,%ebp
 889a035:	53                   	push   %ebx
 889a036:	83 ec 54             	sub    $0x54,%esp
 889a039:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 889a040:	8b 55 08             	mov    0x8(%ebp),%edx
 889a043:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889a046:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a04a:	89 04 24             	mov    %eax,(%esp)
 889a04d:	e8 52 d7 b0 ff       	call   83a77a4 <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EE5beginEv>
 889a052:	83 ec 04             	sub    $0x4,%esp
 889a055:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 889a05c:	e9 7b 01 00 00       	jmp    889a1dc <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE+0x1aa>
 889a061:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889a064:	89 04 24             	mov    %eax,(%esp)
 889a067:	e8 a6 1e 00 00       	call   889bf12 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar5PhaseESt6vectorIS2_SaIS2_EEEptEv>
 889a06c:	83 c0 08             	add    $0x8,%eax
 889a06f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 889a072:	8d 45 d0             	lea    -0x30(%ebp),%eax
 889a075:	8b 55 f4             	mov    -0xc(%ebp),%edx
 889a078:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a07c:	89 04 24             	mov    %eax,(%esp)
 889a07f:	e8 10 42 b5 ff       	call   83ee294 <_ZNSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE5beginEv>
 889a084:	83 ec 04             	sub    $0x4,%esp
 889a087:	e9 b3 00 00 00       	jmp    889a13f <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE+0x10d>
 889a08c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 889a08f:	89 04 24             	mov    %eax,(%esp)
 889a092:	e8 e5 1e 00 00       	call   889bf7c <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 889a097:	89 c2                	mov    %eax,%edx
 889a099:	8d 45 c0             	lea    -0x40(%ebp),%eax
 889a09c:	89 54 24 08          	mov    %edx,0x8(%esp)
 889a0a0:	8b 55 0c             	mov    0xc(%ebp),%edx
 889a0a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a0a7:	89 04 24             	mov    %eax,(%esp)
 889a0aa:	e8 d7 1e 00 00       	call   889bf86 <_ZNKSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 889a0af:	83 ec 04             	sub    $0x4,%esp
 889a0b2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 889a0b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 889a0b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a0bc:	89 04 24             	mov    %eax,(%esp)
 889a0bf:	e8 ee 1e 00 00       	call   889bfb2 <_ZNKSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 889a0c4:	83 ec 04             	sub    $0x4,%esp
 889a0c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 889a0ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a0ce:	8d 45 c0             	lea    -0x40(%ebp),%eax
 889a0d1:	89 04 24             	mov    %eax,(%esp)
 889a0d4:	e8 ff 1e 00 00       	call   889bfd8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar12ActionDefineEEEeqERKS5_>
 889a0d9:	84 c0                	test   %al,%al
 889a0db:	74 27                	je     889a104 <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE+0xd2>
 889a0dd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 889a0e0:	89 04 24             	mov    %eax,(%esp)
 889a0e3:	e8 94 1e 00 00       	call   889bf7c <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 889a0e8:	8b 00                	mov    (%eax),%eax
 889a0ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a0ee:	c7 04 24 e4 52 e0 08 	movl   $0x8e052e4,(%esp)
 889a0f5:	e8 66 3a 7e ff       	call   807db60 <printf@plt>
 889a0fa:	b8 00 00 00 00       	mov    $0x0,%eax
 889a0ff:	e9 15 01 00 00       	jmp    889a219 <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE+0x1e7>
 889a104:	8d 45 d0             	lea    -0x30(%ebp),%eax
 889a107:	89 04 24             	mov    %eax,(%esp)
 889a10a:	e8 6d 1e 00 00       	call   889bf7c <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 889a10f:	89 c3                	mov    %eax,%ebx
 889a111:	8d 45 c0             	lea    -0x40(%ebp),%eax
 889a114:	89 04 24             	mov    %eax,(%esp)
 889a117:	e8 d0 1e 00 00       	call   889bfec <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar12ActionDefineEEEptEv>
 889a11c:	83 c0 04             	add    $0x4,%eax
 889a11f:	89 43 04             	mov    %eax,0x4(%ebx)
 889a122:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 889a125:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 889a12c:	00 
 889a12d:	8d 55 d0             	lea    -0x30(%ebp),%edx
 889a130:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a134:	89 04 24             	mov    %eax,(%esp)
 889a137:	e8 0c 1e 00 00       	call   889bf48 <_ZN9__gnu_cxx17__normal_iteratorIPN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEppEi>
 889a13c:	83 ec 04             	sub    $0x4,%esp
 889a13f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 889a142:	8b 55 f4             	mov    -0xc(%ebp),%edx
 889a145:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a149:	89 04 24             	mov    %eax,(%esp)
 889a14c:	e8 c3 41 b5 ff       	call   83ee314 <_ZNSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE3endEv>
 889a151:	83 ec 04             	sub    $0x4,%esp
 889a154:	8d 45 dc             	lea    -0x24(%ebp),%eax
 889a157:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a15b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 889a15e:	89 04 24             	mov    %eax,(%esp)
 889a161:	e8 b6 1d 00 00       	call   889bf1c <_ZN9__gnu_cxxneIPN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 889a166:	84 c0                	test   %al,%al
 889a168:	0f 85 1e ff ff ff    	jne    889a08c <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE+0x5a>
 889a16e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 889a171:	89 04 24             	mov    %eax,(%esp)
 889a174:	e8 db 17 00 00       	call   889b954 <_ZN12advancealtar13_PhaseSummaryC1Ev>
 889a179:	8b 45 ec             	mov    -0x14(%ebp),%eax
 889a17c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 889a17f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 889a182:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 889a185:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889a188:	89 04 24             	mov    %eax,(%esp)
 889a18b:	e8 82 1d 00 00       	call   889bf12 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar5PhaseESt6vectorIS2_SaIS2_EEEptEv>
 889a190:	8b 40 04             	mov    0x4(%eax),%eax
 889a193:	89 45 cc             	mov    %eax,-0x34(%ebp)
 889a196:	8b 45 08             	mov    0x8(%ebp),%eax
 889a199:	8d 50 10             	lea    0x10(%eax),%edx
 889a19c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 889a19f:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a1a3:	89 14 24             	mov    %edx,(%esp)
 889a1a6:	e8 4f 1e 00 00       	call   889bffa <_ZNSt6vectorIN12advancealtar13_PhaseSummaryESaIS1_EE9push_backERKS1_>
 889a1ab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889a1ae:	89 04 24             	mov    %eax,(%esp)
 889a1b1:	e8 5c 1d 00 00       	call   889bf12 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar5PhaseESt6vectorIS2_SaIS2_EEEptEv>
 889a1b6:	8b 00                	mov    (%eax),%eax
 889a1b8:	01 45 ec             	add    %eax,-0x14(%ebp)
 889a1bb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 889a1be:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 889a1c5:	00 
 889a1c6:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 889a1c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a1cd:	89 04 24             	mov    %eax,(%esp)
 889a1d0:	e8 09 1d 00 00       	call   889bede <_ZN9__gnu_cxx17__normal_iteratorIPN12advancealtar5PhaseESt6vectorIS2_SaIS2_EEEppEi>
 889a1d5:	83 ec 04             	sub    $0x4,%esp
 889a1d8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 889a1dc:	8b 55 08             	mov    0x8(%ebp),%edx
 889a1df:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889a1e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a1e6:	89 04 24             	mov    %eax,(%esp)
 889a1e9:	e8 36 d6 b0 ff       	call   83a7824 <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EE3endEv>
 889a1ee:	83 ec 04             	sub    $0x4,%esp
 889a1f1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889a1f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a1f8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889a1fb:	89 04 24             	mov    %eax,(%esp)
 889a1fe:	e8 c2 69 b4 ff       	call   83e0bc5 <_ZN9__gnu_cxxneIPN12advancealtar5PhaseESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 889a203:	84 c0                	test   %al,%al
 889a205:	0f 85 56 fe ff ff    	jne    889a061 <_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE+0x2f>
 889a20b:	8b 45 08             	mov    0x8(%ebp),%eax
 889a20e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 889a211:	89 50 0c             	mov    %edx,0xc(%eax)
 889a214:	b8 01 00 00 00       	mov    $0x1,%eax
 889a219:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 889a21c:	c9                   	leave
 889a21d:	c3                   	ret

```

```c
// advancealtar::StageTimeLineParameter::checkAndSetActionDefine @ 0x889a032

/* advancealtar::StageTimeLineParameter::checkAndSetActionDefine(advancealtar::TimeLine&,
   std::map<int, advancealtar::ActionDefine, std::less<int>, std::allocator<std::pair<int const,
   advancealtar::ActionDefine> > > const&) */

undefined4
advancealtar::StageTimeLineParameter::checkAndSetActionDefine(TimeLine *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::ActionDefine>> local_44 [4];
  int local_40;
  int local_3c;
  undefined4 local_38;
  __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
  local_34 [4];
  __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  local_24 [4];
  __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
  local_20 [4];
  __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::begin();
  local_14 = 0;
  do {
    std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::end();
    bVar2 = __gnu_cxx::operator!=(local_30,local_2c);
    if (!bVar2) {
      *(int *)(param_1 + 0xc) = local_18;
      return 1;
    }
    local_10 = __gnu_cxx::
               __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
               ::operator->(local_30);
    local_10 = local_10 + 8;
    std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::begin();
    while( true ) {
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      bVar2 = __gnu_cxx::operator!=(local_34,local_28);
      if (!bVar2) break;
      uVar3 = __gnu_cxx::
              __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
              ::operator->(local_34);
      std::
      map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
      ::find((int *)local_44);
      std::
      map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
      ::end(local_24);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::ActionDefine>>::
              operator==(local_44,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 != '\0') {
        puVar4 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                 ::operator->(local_34);
        printf("advancealtar : not found ActionDefine Id = %d\n",*puVar4,uVar3);
        return 0;
      }
      iVar6 = __gnu_cxx::
              __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
              ::operator->(local_34);
      iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::ActionDefine>>::
              operator->(local_44);
      *(int *)(iVar6 + 4) = iVar5 + 4;
      __gnu_cxx::
      __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
      ::operator++(local_20,(int)local_34);
    }
    _PhaseSummary::_PhaseSummary((_PhaseSummary *)&local_40);
    local_3c = local_18;
    local_40 = local_14;
    iVar6 = __gnu_cxx::
            __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
            ::operator->(local_30);
    local_38 = *(undefined4 *)(iVar6 + 4);
    std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::push_back
              ((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>> *)
               (param_1 + 0x10),(_PhaseSummary *)&local_40);
    piVar7 = (int *)__gnu_cxx::
                    __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
                    ::operator->(local_30);
    local_18 = local_18 + *piVar7;
    __gnu_cxx::
    __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
    ::operator++(local_1c,(int)local_30);
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## debugLog

```asm
// === 0889a02c advancealtar::StageTimeLineParameter::debugLog  [0x0889a02c-0x889a031] ===
 889a02c:	55                   	push   %ebp
 889a02d:	89 e5                	mov    %esp,%ebp
 889a02f:	5d                   	pop    %ebp
 889a030:	c3                   	ret
 889a031:	90                   	nop

```

```c
// advancealtar::StageTimeLineParameter::debugLog @ 0x889a02c

/* advancealtar::StageTimeLineParameter::debugLog() */

void advancealtar::StageTimeLineParameter::debugLog(void)

{
  return;
}

```

---

## importActionDefine

```asm
// === 0889a56e advancealtar::StageTimeLineParameter::importActionDefine  [0x0889a56e-0x889a92f] ===
 889a56e:	55                   	push   %ebp
 889a56f:	89 e5                	mov    %esp,%ebp
 889a571:	56                   	push   %esi
 889a572:	53                   	push   %ebx
 889a573:	83 c4 80             	add    $0xffffff80,%esp
 889a576:	c6 45 bf 00          	movb   $0x0,-0x41(%ebp)
 889a57a:	eb 01                	jmp    889a57d <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0xf>
 889a57c:	90                   	nop
 889a57d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 889a580:	89 04 24             	mov    %eax,(%esp)
 889a583:	e8 da f6 ff ff       	call   8899c62 <_ZN12advancealtar12ActionDefineC1Ev>
 889a588:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a58b:	89 04 24             	mov    %eax,(%esp)
 889a58e:	e8 3d c0 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889a593:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 889a59a:	00 
 889a59b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a59e:	89 04 24             	mov    %eax,(%esp)
 889a5a1:	e8 b9 22 02 00       	call   88bc85f <_Z8ScanTypeRSsb>
 889a5a6:	83 f0 01             	xor    $0x1,%eax
 889a5a9:	84 c0                	test   %al,%al
 889a5ab:	74 0f                	je     889a5bc <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x4e>
 889a5ad:	be 53 02 00 00       	mov    $0x253,%esi
 889a5b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a5b7:	e9 04 03 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a5bc:	c7 44 24 04 91 53 e0 	movl   $0x8e05391,0x4(%esp)
 889a5c3:	08 
 889a5c4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a5c7:	89 04 24             	mov    %eax,(%esp)
 889a5ca:	e8 d2 63 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a5cf:	84 c0                	test   %al,%al
 889a5d1:	74 0a                	je     889a5dd <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x6f>
 889a5d3:	bb 01 00 00 00       	mov    $0x1,%ebx
 889a5d8:	e9 e3 02 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a5dd:	c7 44 24 04 a2 53 e0 	movl   $0x8e053a2,0x4(%esp)
 889a5e4:	08 
 889a5e5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a5e8:	89 04 24             	mov    %eax,(%esp)
 889a5eb:	e8 b1 63 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a5f0:	84 c0                	test   %al,%al
 889a5f2:	75 58                	jne    889a64c <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0xde>
 889a5f4:	c7 44 24 04 ab 53 e0 	movl   $0x8e053ab,0x4(%esp)
 889a5fb:	08 
 889a5fc:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a5ff:	89 04 24             	mov    %eax,(%esp)
 889a602:	e8 9a 63 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a607:	84 c0                	test   %al,%al
 889a609:	75 41                	jne    889a64c <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0xde>
 889a60b:	c7 44 24 04 b3 53 e0 	movl   $0x8e053b3,0x4(%esp)
 889a612:	08 
 889a613:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a616:	89 04 24             	mov    %eax,(%esp)
 889a619:	e8 83 63 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a61e:	84 c0                	test   %al,%al
 889a620:	75 2a                	jne    889a64c <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0xde>
 889a622:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a625:	89 04 24             	mov    %eax,(%esp)
 889a628:	e8 c3 be e6 ff       	call   87064f0 <_ZNKSs5c_strEv>
 889a62d:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a631:	c7 04 24 bc 53 e0 08 	movl   $0x8e053bc,(%esp)
 889a638:	e8 23 35 7e ff       	call   807db60 <printf@plt>
 889a63d:	be 67 02 00 00       	mov    $0x267,%esi
 889a642:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a647:	e9 74 02 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a64c:	8d 45 bf             	lea    -0x41(%ebp),%eax
 889a64f:	89 04 24             	mov    %eax,(%esp)
 889a652:	e8 24 1d 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a657:	89 45 ac             	mov    %eax,-0x54(%ebp)
 889a65a:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 889a65e:	83 f0 01             	xor    $0x1,%eax
 889a661:	84 c0                	test   %al,%al
 889a663:	74 0f                	je     889a674 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x106>
 889a665:	be 6b 02 00 00       	mov    $0x26b,%esi
 889a66a:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a66f:	e9 4c 02 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a674:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a677:	89 04 24             	mov    %eax,(%esp)
 889a67a:	e8 f9 12 00 00       	call   889b978 <_ZN12advancealtar7_ActionC1Ev>
 889a67f:	8d 45 bf             	lea    -0x41(%ebp),%eax
 889a682:	89 04 24             	mov    %eax,(%esp)
 889a685:	e8 f1 1c 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a68a:	89 45 94             	mov    %eax,-0x6c(%ebp)
 889a68d:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 889a691:	83 f0 01             	xor    $0x1,%eax
 889a694:	84 c0                	test   %al,%al
 889a696:	0f 85 78 01 00 00    	jne    889a814 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x2a6>
 889a69c:	8b 55 08             	mov    0x8(%ebp),%edx
 889a69f:	8d 45 90             	lea    -0x70(%ebp),%eax
 889a6a2:	8d 4d 94             	lea    -0x6c(%ebp),%ecx
 889a6a5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 889a6a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a6ad:	89 04 24             	mov    %eax,(%esp)
 889a6b0:	e8 83 1a 00 00       	call   889c138 <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 889a6b5:	83 ec 04             	sub    $0x4,%esp
 889a6b8:	8b 55 08             	mov    0x8(%ebp),%edx
 889a6bb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 889a6be:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a6c2:	89 04 24             	mov    %eax,(%esp)
 889a6c5:	e8 9a 1a 00 00       	call   889c164 <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 889a6ca:	83 ec 04             	sub    $0x4,%esp
 889a6cd:	8d 45 c0             	lea    -0x40(%ebp),%eax
 889a6d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a6d4:	8d 45 90             	lea    -0x70(%ebp),%eax
 889a6d7:	89 04 24             	mov    %eax,(%esp)
 889a6da:	e8 ab 1a 00 00       	call   889c18a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar13_SummonObjectEEEeqERKS5_>
 889a6df:	84 c0                	test   %al,%al
 889a6e1:	74 22                	je     889a705 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x197>
 889a6e3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 889a6e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a6ea:	c7 04 24 f0 53 e0 08 	movl   $0x8e053f0,(%esp)
 889a6f1:	e8 6a 34 7e ff       	call   807db60 <printf@plt>
 889a6f6:	be 7a 02 00 00       	mov    $0x27a,%esi
 889a6fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a700:	e9 bb 01 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a705:	8d 45 90             	lea    -0x70(%ebp),%eax
 889a708:	89 04 24             	mov    %eax,(%esp)
 889a70b:	e8 8e 1a 00 00       	call   889c19e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar13_SummonObjectEEEptEv>
 889a710:	83 c0 04             	add    $0x4,%eax
 889a713:	89 45 98             	mov    %eax,-0x68(%ebp)
 889a716:	8d 45 bf             	lea    -0x41(%ebp),%eax
 889a719:	89 04 24             	mov    %eax,(%esp)
 889a71c:	e8 5a 1c 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a721:	89 45 9c             	mov    %eax,-0x64(%ebp)
 889a724:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 889a728:	83 f0 01             	xor    $0x1,%eax
 889a72b:	84 c0                	test   %al,%al
 889a72d:	74 0f                	je     889a73e <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x1d0>
 889a72f:	be 7f 02 00 00       	mov    $0x27f,%esi
 889a734:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a739:	e9 82 01 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a73e:	8b 45 9c             	mov    -0x64(%ebp),%eax
 889a741:	85 c0                	test   %eax,%eax
 889a743:	79 22                	jns    889a767 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x1f9>
 889a745:	8b 45 9c             	mov    -0x64(%ebp),%eax
 889a748:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a74c:	c7 04 24 20 54 e0 08 	movl   $0x8e05420,(%esp)
 889a753:	e8 08 34 7e ff       	call   807db60 <printf@plt>
 889a758:	be 85 02 00 00       	mov    $0x285,%esi
 889a75d:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a762:	e9 59 01 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a767:	8d 45 bf             	lea    -0x41(%ebp),%eax
 889a76a:	89 04 24             	mov    %eax,(%esp)
 889a76d:	e8 09 1c 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a772:	89 45 a0             	mov    %eax,-0x60(%ebp)
 889a775:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 889a779:	83 f0 01             	xor    $0x1,%eax
 889a77c:	84 c0                	test   %al,%al
 889a77e:	74 0f                	je     889a78f <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x221>
 889a780:	be 89 02 00 00       	mov    $0x289,%esi
 889a785:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a78a:	e9 31 01 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a78f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 889a792:	3d f3 01 00 00       	cmp    $0x1f3,%eax
 889a797:	7f 22                	jg     889a7bb <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x24d>
 889a799:	8b 45 a0             	mov    -0x60(%ebp),%eax
 889a79c:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a7a0:	c7 04 24 4c 54 e0 08 	movl   $0x8e0544c,(%esp)
 889a7a7:	e8 b4 33 7e ff       	call   807db60 <printf@plt>
 889a7ac:	be 90 02 00 00       	mov    $0x290,%esi
 889a7b1:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a7b6:	e9 05 01 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a7bb:	8d 45 bf             	lea    -0x41(%ebp),%eax
 889a7be:	89 04 24             	mov    %eax,(%esp)
 889a7c1:	e8 b5 1b 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a7c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 889a7c9:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 889a7cd:	83 f0 01             	xor    $0x1,%eax
 889a7d0:	84 c0                	test   %al,%al
 889a7d2:	74 0f                	je     889a7e3 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x275>
 889a7d4:	be 94 02 00 00       	mov    $0x294,%esi
 889a7d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a7de:	e9 dd 00 00 00       	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a7e3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 889a7e7:	75 06                	jne    889a7ef <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x281>
 889a7e9:	c6 45 a4 00          	movb   $0x0,-0x5c(%ebp)
 889a7ed:	eb 0b                	jmp    889a7fa <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x28c>
 889a7ef:	c6 45 a4 01          	movb   $0x1,-0x5c(%ebp)
 889a7f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 889a7f6:	66 89 45 a6          	mov    %ax,-0x5a(%ebp)
 889a7fa:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a7fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a801:	8d 45 ac             	lea    -0x54(%ebp),%eax
 889a804:	83 c0 04             	add    $0x4,%eax
 889a807:	89 04 24             	mov    %eax,(%esp)
 889a80a:	e8 9d 19 00 00       	call   889c1ac <_ZNSt6vectorIN12advancealtar7_ActionESaIS1_EE9push_backERKS1_>
 889a80f:	e9 60 fe ff ff       	jmp    889a674 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x106>
 889a814:	90                   	nop
 889a815:	8d 45 e0             	lea    -0x20(%ebp),%eax
 889a818:	8d 55 ac             	lea    -0x54(%ebp),%edx
 889a81b:	89 54 24 08          	mov    %edx,0x8(%esp)
 889a81f:	8d 55 ac             	lea    -0x54(%ebp),%edx
 889a822:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a826:	89 04 24             	mov    %eax,(%esp)
 889a829:	e8 f1 19 00 00       	call   889c21f <_ZSt9make_pairIRiRN12advancealtar12ActionDefineEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 889a82e:	83 ec 04             	sub    $0x4,%esp
 889a831:	8d 45 e0             	lea    -0x20(%ebp),%eax
 889a834:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a838:	8d 45 cc             	lea    -0x34(%ebp),%eax
 889a83b:	89 04 24             	mov    %eax,(%esp)
 889a83e:	e8 4b 1a 00 00       	call   889c28e <_ZNSt4pairIKiN12advancealtar12ActionDefineEEC1IiS2_EEOS_IT_T0_E>
 889a843:	8b 45 08             	mov    0x8(%ebp),%eax
 889a846:	8d 48 18             	lea    0x18(%eax),%ecx
 889a849:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 889a84c:	8d 55 cc             	lea    -0x34(%ebp),%edx
 889a84f:	89 54 24 08          	mov    %edx,0x8(%esp)
 889a853:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 889a857:	89 04 24             	mov    %eax,(%esp)
 889a85a:	e8 69 1a 00 00       	call   889c2c8 <_ZNSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 889a85f:	83 ec 04             	sub    $0x4,%esp
 889a862:	8d 45 cc             	lea    -0x34(%ebp),%eax
 889a865:	89 04 24             	mov    %eax,(%esp)
 889a868:	e8 b5 11 00 00       	call   889ba22 <_ZNSt4pairIKiN12advancealtar12ActionDefineEED1Ev>
 889a86d:	eb 2a                	jmp    889a899 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x32b>
 889a86f:	89 d3                	mov    %edx,%ebx
 889a871:	89 c6                	mov    %eax,%esi
 889a873:	8d 45 cc             	lea    -0x34(%ebp),%eax
 889a876:	89 04 24             	mov    %eax,(%esp)
 889a879:	e8 a4 11 00 00       	call   889ba22 <_ZNSt4pairIKiN12advancealtar12ActionDefineEED1Ev>
 889a87e:	89 f0                	mov    %esi,%eax
 889a880:	89 da                	mov    %ebx,%edx
 889a882:	eb 00                	jmp    889a884 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x316>
 889a884:	89 d3                	mov    %edx,%ebx
 889a886:	89 c6                	mov    %eax,%esi
 889a888:	8d 45 e0             	lea    -0x20(%ebp),%eax
 889a88b:	89 04 24             	mov    %eax,(%esp)
 889a88e:	e8 79 11 00 00       	call   889ba0c <_ZNSt4pairIiN12advancealtar12ActionDefineEED1Ev>
 889a893:	89 f0                	mov    %esi,%eax
 889a895:	89 da                	mov    %ebx,%edx
 889a897:	eb 12                	jmp    889a8ab <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x33d>
 889a899:	8d 45 e0             	lea    -0x20(%ebp),%eax
 889a89c:	89 04 24             	mov    %eax,(%esp)
 889a89f:	e8 68 11 00 00       	call   889ba0c <_ZNSt4pairIiN12advancealtar12ActionDefineEED1Ev>
 889a8a4:	bb 02 00 00 00       	mov    $0x2,%ebx
 889a8a9:	eb 15                	jmp    889a8c0 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x352>
 889a8ab:	89 d3                	mov    %edx,%ebx
 889a8ad:	89 c6                	mov    %eax,%esi
 889a8af:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a8b2:	89 04 24             	mov    %eax,(%esp)
 889a8b5:	e8 26 d3 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a8ba:	89 f0                	mov    %esi,%eax
 889a8bc:	89 da                	mov    %ebx,%edx
 889a8be:	eb 2b                	jmp    889a8eb <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x37d>
 889a8c0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a8c3:	89 04 24             	mov    %eax,(%esp)
 889a8c6:	e8 15 d3 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a8cb:	85 db                	test   %ebx,%ebx
 889a8cd:	74 07                	je     889a8d6 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x368>
 889a8cf:	83 fb 01             	cmp    $0x1,%ebx
 889a8d2:	74 09                	je     889a8dd <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x36f>
 889a8d4:	eb 0e                	jmp    889a8e4 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x376>
 889a8d6:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a8db:	eb 29                	jmp    889a906 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x398>
 889a8dd:	bb 01 00 00 00       	mov    $0x1,%ebx
 889a8e2:	eb 22                	jmp    889a906 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x398>
 889a8e4:	bb 02 00 00 00       	mov    $0x2,%ebx
 889a8e9:	eb 1b                	jmp    889a906 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x398>
 889a8eb:	89 d3                	mov    %edx,%ebx
 889a8ed:	89 c6                	mov    %eax,%esi
 889a8ef:	8d 45 ac             	lea    -0x54(%ebp),%eax
 889a8f2:	89 04 24             	mov    %eax,(%esp)
 889a8f5:	e8 88 f3 ff ff       	call   8899c82 <_ZN12advancealtar12ActionDefineD1Ev>
 889a8fa:	89 f0                	mov    %esi,%eax
 889a8fc:	89 da                	mov    %ebx,%edx
 889a8fe:	89 04 24             	mov    %eax,(%esp)
 889a901:	e8 4a 8e 24 00       	call   8ae3750 <_Unwind_Resume>
 889a906:	8d 45 ac             	lea    -0x54(%ebp),%eax
 889a909:	89 04 24             	mov    %eax,(%esp)
 889a90c:	e8 71 f3 ff ff       	call   8899c82 <_ZN12advancealtar12ActionDefineD1Ev>
 889a911:	85 db                	test   %ebx,%ebx
 889a913:	74 0e                	je     889a923 <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0x3b5>
 889a915:	83 fb 01             	cmp    $0x1,%ebx
 889a918:	0f 85 5e fc ff ff    	jne    889a57c <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv+0xe>
 889a91e:	be 00 00 00 00       	mov    $0x0,%esi
 889a923:	89 f0                	mov    %esi,%eax
 889a925:	8d 65 f8             	lea    -0x8(%ebp),%esp
 889a928:	83 c4 00             	add    $0x0,%esp
 889a92b:	5b                   	pop    %ebx
 889a92c:	5e                   	pop    %esi
 889a92d:	5d                   	pop    %ebp
 889a92e:	c3                   	ret
 889a92f:	90                   	nop

```

```c
// advancealtar::StageTimeLineParameter::importActionDefine @ 0x889a56e

/* advancealtar::StageTimeLineParameter::importActionDefine() */

undefined4 advancealtar::StageTimeLineParameter::importActionDefine(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_SummonObject>> local_74 [4];
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60;
  undefined2 local_5e;
  string local_5c;
  undefined4 local_58;
  vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> avStack_54 [15];
  bool local_45;
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  local_44 [4];
  pair local_40 [8];
  pair<int_const,advancealtar::ActionDefine> local_38 [20];
  pair<int,advancealtar::ActionDefine> local_24 [20];
  int local_10;
  
  local_45 = false;
  do {
    ActionDefine::ActionDefine((ActionDefine *)&local_58);
                    /* try { // try from 0889a58e to 0889a592 has its CatchHandler @ 0889a8eb */
    std::string::string((string *)&local_5c);
                    /* try { // try from 0889a5a1 to 0889a82d has its CatchHandler @ 0889a8ab */
    cVar1 = ScanType((string *)&local_5c,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_5c,"[/action define]");
      if (bVar2) {
        iVar4 = 1;
      }
      else {
        bVar2 = std::operator==(&local_5c,"[normal]");
        if (((bVar2) || (bVar2 = std::operator==(&local_5c,"[named]"), bVar2)) ||
           (bVar2 = std::operator==(&local_5c,"[boss]"), bVar2)) {
          local_58 = ScanInt(&local_45);
          if (local_45 == true) {
            while( true ) {
              _Action::_Action((_Action *)&local_70);
              local_70 = ScanInt(&local_45);
              if (local_45 != true) break;
              puVar5 = &local_70;
              std::
              map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
              ::find((int *)local_74);
              std::
              map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
              ::end(local_44);
              cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_SummonObject>>::
                      operator==(local_74,(_Rb_tree_iterator *)local_44);
              if (cVar1 != '\0') {
                printf("advancealtar : not found SummonObject Id = %d\n",local_70,puVar5);
                unaff_ESI = 0x27a;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_6c = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_SummonObject>>::
                         operator->(local_74);
              local_6c = local_6c + 4;
              local_68 = ScanInt(&local_45);
              if (local_45 != true) {
                unaff_ESI = 0x27f;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              if (local_68 < 0) {
                printf("advancealtar :  action.firstDelayMs %d < 0\n",local_68);
                unaff_ESI = 0x285;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_64 = ScanInt(&local_45);
              if (local_45 != true) {
                unaff_ESI = 0x289;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              if (local_64 < 500) {
                printf("advancealtar :  action.nextDelayMs %d < 500\n",local_64);
                unaff_ESI = 0x290;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_10 = ScanInt(&local_45);
              if (local_45 != true) {
                unaff_ESI = 0x294;
                iVar4 = 0;
                goto LAB_0889a8c0;
              }
              local_60 = local_10 != 0;
              if ((bool)local_60) {
                local_5e = (undefined2)local_10;
              }
              std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::push_back
                        (avStack_54,(_Action *)&local_70);
            }
            std::make_pair<int&,advancealtar::ActionDefine&>
                      ((int *)local_24,(ActionDefine *)&local_58);
                    /* try { // try from 0889a83e to 0889a842 has its CatchHandler @ 0889a884 */
            std::pair<int_const,advancealtar::ActionDefine>::pair<int,advancealtar::ActionDefine>
                      (local_38,local_24);
                    /* try { // try from 0889a85a to 0889a85e has its CatchHandler @ 0889a86f */
            std::
            map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
            ::insert(local_40);
                    /* try { // try from 0889a868 to 0889a86c has its CatchHandler @ 0889a884 */
            std::pair<int_const,advancealtar::ActionDefine>::~pair(local_38);
                    /* try { // try from 0889a89f to 0889a8a3 has its CatchHandler @ 0889a8ab */
            std::pair<int,advancealtar::ActionDefine>::~pair(local_24);
            iVar4 = 2;
          }
          else {
            unaff_ESI = 0x26b;
            iVar4 = 0;
          }
        }
        else {
          uVar3 = std::string::c_str((string *)&local_5c);
          printf("advancealtar : ActionDefine.Type undefined=\'%s\'\n",uVar3);
          unaff_ESI = 0x267;
          iVar4 = 0;
        }
      }
    }
    else {
      unaff_ESI = 0x253;
      iVar4 = 0;
    }
LAB_0889a8c0:
                    /* try { // try from 0889a8c6 to 0889a8ca has its CatchHandler @ 0889a8eb */
    std::string::~string((string *)&local_5c);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else if (iVar4 == 1) {
      iVar4 = 1;
    }
    else {
      iVar4 = 2;
    }
    ActionDefine::~ActionDefine((ActionDefine *)&local_58);
    if (iVar4 == 0) {
      return unaff_ESI;
    }
    if (iVar4 == 1) {
      return 0;
    }
  } while( true );
}

```

---

## importPhase

```asm
// === 0889a930 advancealtar::StageTimeLineParameter::importPhase  [0x0889a930-0x889aca9] ===
 889a930:	55                   	push   %ebp
 889a931:	89 e5                	mov    %esp,%ebp
 889a933:	56                   	push   %esi
 889a934:	53                   	push   %ebx
 889a935:	83 ec 50             	sub    $0x50,%esp
 889a938:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 889a93c:	eb 01                	jmp    889a93f <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0xf>
 889a93e:	90                   	nop
 889a93f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889a942:	89 04 24             	mov    %eax,(%esp)
 889a945:	e8 86 bc e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889a94a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 889a951:	00 
 889a952:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889a955:	89 04 24             	mov    %eax,(%esp)
 889a958:	e8 02 1f 02 00       	call   88bc85f <_Z8ScanTypeRSsb>
 889a95d:	83 f0 01             	xor    $0x1,%eax
 889a960:	84 c0                	test   %al,%al
 889a962:	74 0f                	je     889a973 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x43>
 889a964:	bb b1 02 00 00       	mov    $0x2b1,%ebx
 889a969:	be 00 00 00 00       	mov    $0x0,%esi
 889a96e:	e9 1b 03 00 00       	jmp    889ac8e <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x35e>
 889a973:	c7 44 24 04 79 54 e0 	movl   $0x8e05479,0x4(%esp)
 889a97a:	08 
 889a97b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889a97e:	89 04 24             	mov    %eax,(%esp)
 889a981:	e8 1b 60 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a986:	84 c0                	test   %al,%al
 889a988:	74 0f                	je     889a999 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x69>
 889a98a:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a98f:	be 00 00 00 00       	mov    $0x0,%esi
 889a994:	e9 f5 02 00 00       	jmp    889ac8e <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x35e>
 889a999:	c7 44 24 04 86 54 e0 	movl   $0x8e05486,0x4(%esp)
 889a9a0:	08 
 889a9a1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889a9a4:	89 04 24             	mov    %eax,(%esp)
 889a9a7:	e8 f5 5f 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a9ac:	84 c0                	test   %al,%al
 889a9ae:	0f 84 b8 02 00 00    	je     889ac6c <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x33c>
 889a9b4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 889a9b7:	89 04 24             	mov    %eax,(%esp)
 889a9ba:	e8 f9 f2 ff ff       	call   8899cb8 <_ZN12advancealtar5PhaseC1Ev>
 889a9bf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889a9c2:	89 04 24             	mov    %eax,(%esp)
 889a9c5:	e8 06 bc e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889a9ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 889a9d1:	00 
 889a9d2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889a9d5:	89 04 24             	mov    %eax,(%esp)
 889a9d8:	e8 82 1e 02 00       	call   88bc85f <_Z8ScanTypeRSsb>
 889a9dd:	83 f0 01             	xor    $0x1,%eax
 889a9e0:	84 c0                	test   %al,%al
 889a9e2:	74 0f                	je     889a9f3 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0xc3>
 889a9e4:	bb be 02 00 00       	mov    $0x2be,%ebx
 889a9e9:	be 00 00 00 00       	mov    $0x0,%esi
 889a9ee:	e9 15 02 00 00       	jmp    889ac08 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2d8>
 889a9f3:	c7 44 24 04 8e 54 e0 	movl   $0x8e0548e,0x4(%esp)
 889a9fa:	08 
 889a9fb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889a9fe:	89 04 24             	mov    %eax,(%esp)
 889aa01:	e8 9b 5f 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889aa06:	84 c0                	test   %al,%al
 889aa08:	74 0a                	je     889aa14 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0xe4>
 889aa0a:	be 01 00 00 00       	mov    $0x1,%esi
 889aa0f:	e9 f4 01 00 00       	jmp    889ac08 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2d8>
 889aa14:	c7 44 24 04 97 54 e0 	movl   $0x8e05497,0x4(%esp)
 889aa1b:	08 
 889aa1c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889aa1f:	89 04 24             	mov    %eax,(%esp)
 889aa22:	e8 7a 5f 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889aa27:	84 c0                	test   %al,%al
 889aa29:	74 2c                	je     889aa57 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x127>
 889aa2b:	8d 45 f7             	lea    -0x9(%ebp),%eax
 889aa2e:	89 04 24             	mov    %eax,(%esp)
 889aa31:	e8 45 19 02 00       	call   88bc37b <_Z7ScanIntPb>
 889aa36:	89 45 dc             	mov    %eax,-0x24(%ebp)
 889aa39:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 889aa3d:	83 f0 01             	xor    $0x1,%eax
 889aa40:	84 c0                	test   %al,%al
 889aa42:	0f 84 a4 01 00 00    	je     889abec <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2bc>
 889aa48:	bb c6 02 00 00       	mov    $0x2c6,%ebx
 889aa4d:	be 00 00 00 00       	mov    $0x0,%esi
 889aa52:	e9 b1 01 00 00       	jmp    889ac08 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2d8>
 889aa57:	c7 44 24 04 a2 54 e0 	movl   $0x8e054a2,0x4(%esp)
 889aa5e:	08 
 889aa5f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889aa62:	89 04 24             	mov    %eax,(%esp)
 889aa65:	e8 37 5f 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889aa6a:	84 c0                	test   %al,%al
 889aa6c:	0f 84 d4 00 00 00    	je     889ab46 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x216>
 889aa72:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889aa75:	89 04 24             	mov    %eax,(%esp)
 889aa78:	e8 53 bb e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889aa7d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889aa80:	89 04 24             	mov    %eax,(%esp)
 889aa83:	e8 1a 1d 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889aa88:	83 f0 01             	xor    $0x1,%eax
 889aa8b:	84 c0                	test   %al,%al
 889aa8d:	74 0f                	je     889aa9e <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x16e>
 889aa8f:	bb cc 02 00 00       	mov    $0x2cc,%ebx
 889aa94:	be 00 00 00 00       	mov    $0x0,%esi
 889aa99:	e9 8b 00 00 00       	jmp    889ab29 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1f9>
 889aa9e:	c7 44 24 04 b1 52 e0 	movl   $0x8e052b1,0x4(%esp)
 889aaa5:	08 
 889aaa6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889aaa9:	89 04 24             	mov    %eax,(%esp)
 889aaac:	e8 f0 5e 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889aab1:	84 c0                	test   %al,%al
 889aab3:	74 09                	je     889aabe <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x18e>
 889aab5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 889aabc:	eb 4c                	jmp    889ab0a <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1da>
 889aabe:	c7 44 24 04 54 53 e0 	movl   $0x8e05354,0x4(%esp)
 889aac5:	08 
 889aac6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889aac9:	89 04 24             	mov    %eax,(%esp)
 889aacc:	e8 d0 5e 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889aad1:	84 c0                	test   %al,%al
 889aad3:	74 09                	je     889aade <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1ae>
 889aad5:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 889aadc:	eb 2c                	jmp    889ab0a <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1da>
 889aade:	c7 44 24 04 5a 53 e0 	movl   $0x8e0535a,0x4(%esp)
 889aae5:	08 
 889aae6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889aae9:	89 04 24             	mov    %eax,(%esp)
 889aaec:	e8 b0 5e 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889aaf1:	84 c0                	test   %al,%al
 889aaf3:	74 09                	je     889aafe <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1ce>
 889aaf5:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 889aafc:	eb 0c                	jmp    889ab0a <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1da>
 889aafe:	bb dc 02 00 00       	mov    $0x2dc,%ebx
 889ab03:	be 00 00 00 00       	mov    $0x0,%esi
 889ab08:	eb 1f                	jmp    889ab29 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1f9>
 889ab0a:	be 01 00 00 00       	mov    $0x1,%esi
 889ab0f:	eb 18                	jmp    889ab29 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x1f9>
 889ab11:	89 d3                	mov    %edx,%ebx
 889ab13:	89 c6                	mov    %eax,%esi
 889ab15:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889ab18:	89 04 24             	mov    %eax,(%esp)
 889ab1b:	e8 c0 d0 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ab20:	89 f0                	mov    %esi,%eax
 889ab22:	89 da                	mov    %ebx,%edx
 889ab24:	e9 ca 00 00 00       	jmp    889abf3 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2c3>
 889ab29:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 889ab2c:	89 04 24             	mov    %eax,(%esp)
 889ab2f:	e8 ac d0 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ab34:	85 f6                	test   %esi,%esi
 889ab36:	0f 85 b0 00 00 00    	jne    889abec <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2bc>
 889ab3c:	be 00 00 00 00       	mov    $0x0,%esi
 889ab41:	e9 c2 00 00 00       	jmp    889ac08 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2d8>
 889ab46:	c7 44 24 04 a9 54 e0 	movl   $0x8e054a9,0x4(%esp)
 889ab4d:	08 
 889ab4e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889ab51:	89 04 24             	mov    %eax,(%esp)
 889ab54:	e8 48 5e 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889ab59:	84 c0                	test   %al,%al
 889ab5b:	0f 84 8b 00 00 00    	je     889abec <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2bc>
 889ab61:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 889ab64:	89 04 24             	mov    %eax,(%esp)
 889ab67:	e8 30 0e 00 00       	call   889b99c <_ZN12advancealtar13_ActionAssignC1Ev>
 889ab6c:	8d 45 f7             	lea    -0x9(%ebp),%eax
 889ab6f:	89 04 24             	mov    %eax,(%esp)
 889ab72:	e8 04 18 02 00       	call   88bc37b <_Z7ScanIntPb>
 889ab77:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 889ab7a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 889ab7e:	83 f0 01             	xor    $0x1,%eax
 889ab81:	84 c0                	test   %al,%al
 889ab83:	75 66                	jne    889abeb <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2bb>
 889ab85:	8d 45 f7             	lea    -0x9(%ebp),%eax
 889ab88:	89 04 24             	mov    %eax,(%esp)
 889ab8b:	e8 eb 17 02 00       	call   88bc37b <_Z7ScanIntPb>
 889ab90:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 889ab94:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 889ab98:	83 f0 01             	xor    $0x1,%eax
 889ab9b:	84 c0                	test   %al,%al
 889ab9d:	74 0c                	je     889abab <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x27b>
 889ab9f:	bb ed 02 00 00       	mov    $0x2ed,%ebx
 889aba4:	be 00 00 00 00       	mov    $0x0,%esi
 889aba9:	eb 5d                	jmp    889ac08 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2d8>
 889abab:	8d 45 f7             	lea    -0x9(%ebp),%eax
 889abae:	89 04 24             	mov    %eax,(%esp)
 889abb1:	e8 c5 17 02 00       	call   88bc37b <_Z7ScanIntPb>
 889abb6:	66 89 45 ce          	mov    %ax,-0x32(%ebp)
 889abba:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 889abbe:	83 f0 01             	xor    $0x1,%eax
 889abc1:	84 c0                	test   %al,%al
 889abc3:	74 0c                	je     889abd1 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2a1>
 889abc5:	bb f0 02 00 00       	mov    $0x2f0,%ebx
 889abca:	be 00 00 00 00       	mov    $0x0,%esi
 889abcf:	eb 37                	jmp    889ac08 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2d8>
 889abd1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 889abd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 889abd8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 889abdb:	83 c0 08             	add    $0x8,%eax
 889abde:	89 04 24             	mov    %eax,(%esp)
 889abe1:	e8 0e 17 00 00       	call   889c2f4 <_ZNSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE9push_backERKS1_>
 889abe6:	e9 76 ff ff ff       	jmp    889ab61 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x231>
 889abeb:	90                   	nop
 889abec:	be 02 00 00 00       	mov    $0x2,%esi
 889abf1:	eb 15                	jmp    889ac08 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2d8>
 889abf3:	89 d3                	mov    %edx,%ebx
 889abf5:	89 c6                	mov    %eax,%esi
 889abf7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889abfa:	89 04 24             	mov    %eax,(%esp)
 889abfd:	e8 de cf e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ac02:	89 f0                	mov    %esi,%eax
 889ac04:	89 da                	mov    %ebx,%edx
 889ac06:	eb 39                	jmp    889ac41 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x311>
 889ac08:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889ac0b:	89 04 24             	mov    %eax,(%esp)
 889ac0e:	e8 cd cf e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ac13:	85 f6                	test   %esi,%esi
 889ac15:	74 0a                	je     889ac21 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2f1>
 889ac17:	83 fe 01             	cmp    $0x1,%esi
 889ac1a:	74 0c                	je     889ac28 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x2f8>
 889ac1c:	e9 9e fd ff ff       	jmp    889a9bf <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x8f>
 889ac21:	be 00 00 00 00       	mov    $0x0,%esi
 889ac26:	eb 2e                	jmp    889ac56 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x326>
 889ac28:	8b 45 08             	mov    0x8(%ebp),%eax
 889ac2b:	8d 55 dc             	lea    -0x24(%ebp),%edx
 889ac2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 889ac32:	89 04 24             	mov    %eax,(%esp)
 889ac35:	e8 2e 17 00 00       	call   889c368 <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EE9push_backERKS1_>
 889ac3a:	be 01 00 00 00       	mov    $0x1,%esi
 889ac3f:	eb 15                	jmp    889ac56 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x326>
 889ac41:	89 d3                	mov    %edx,%ebx
 889ac43:	89 c6                	mov    %eax,%esi
 889ac45:	8d 45 dc             	lea    -0x24(%ebp),%eax
 889ac48:	89 04 24             	mov    %eax,(%esp)
 889ac4b:	e8 92 f0 ff ff       	call   8899ce2 <_ZN12advancealtar5PhaseD1Ev>
 889ac50:	89 f0                	mov    %esi,%eax
 889ac52:	89 da                	mov    %ebx,%edx
 889ac54:	eb 1d                	jmp    889ac73 <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x343>
 889ac56:	8d 45 dc             	lea    -0x24(%ebp),%eax
 889ac59:	89 04 24             	mov    %eax,(%esp)
 889ac5c:	e8 81 f0 ff ff       	call   8899ce2 <_ZN12advancealtar5PhaseD1Ev>
 889ac61:	85 f6                	test   %esi,%esi
 889ac63:	75 07                	jne    889ac6c <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x33c>
 889ac65:	be 00 00 00 00       	mov    $0x0,%esi
 889ac6a:	eb 22                	jmp    889ac8e <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x35e>
 889ac6c:	be 01 00 00 00       	mov    $0x1,%esi
 889ac71:	eb 1b                	jmp    889ac8e <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0x35e>
 889ac73:	89 d3                	mov    %edx,%ebx
 889ac75:	89 c6                	mov    %eax,%esi
 889ac77:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889ac7a:	89 04 24             	mov    %eax,(%esp)
 889ac7d:	e8 5e cf e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ac82:	89 f0                	mov    %esi,%eax
 889ac84:	89 da                	mov    %ebx,%edx
 889ac86:	89 04 24             	mov    %eax,(%esp)
 889ac89:	e8 c2 8a 24 00       	call   8ae3750 <_Unwind_Resume>
 889ac8e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889ac91:	89 04 24             	mov    %eax,(%esp)
 889ac94:	e8 47 cf e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ac99:	85 f6                	test   %esi,%esi
 889ac9b:	0f 85 9d fc ff ff    	jne    889a93e <_ZN12advancealtar22StageTimeLineParameter11importPhaseERNS_8TimeLineE+0xe>
 889aca1:	89 d8                	mov    %ebx,%eax
 889aca3:	83 c4 50             	add    $0x50,%esp
 889aca6:	5b                   	pop    %ebx
 889aca7:	5e                   	pop    %esi
 889aca8:	5d                   	pop    %ebp
 889aca9:	c3                   	ret

```

```c
// advancealtar::StageTimeLineParameter::importPhase @ 0x889a930

/* advancealtar::StageTimeLineParameter::importPhase(advancealtar::TimeLine&) */

undefined4 advancealtar::StageTimeLineParameter::importPhase(TimeLine *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  int iVar3;
  undefined4 local_40 [2];
  undefined2 local_38;
  undefined2 local_36;
  string local_30;
  string local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> avStack_20 [12];
  string local_14;
  bool local_d;
  
  local_d = false;
  do {
    std::string::string((string *)&local_14);
                    /* try { // try from 0889a958 to 0889a9be has its CatchHandler @ 0889ac73 */
    cVar1 = ScanType((string *)&local_14,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[/time line]");
      if (bVar2) {
        unaff_EBX = 0;
        bVar2 = false;
      }
      else {
        bVar2 = std::operator==(&local_14,"[phase]");
        if (bVar2) {
          Phase::Phase((Phase *)&local_28);
          do {
                    /* try { // try from 0889a9c5 to 0889a9c9 has its CatchHandler @ 0889ac41 */
            std::string::string((string *)&local_2c);
                    /* try { // try from 0889a9d8 to 0889aa7c has its CatchHandler @ 0889abf3 */
            cVar1 = ScanType((string *)&local_2c,true);
            if (cVar1 == '\x01') {
              bVar2 = std::operator==(&local_2c,"[/phase]");
              if (bVar2) {
                iVar3 = 1;
              }
              else {
                bVar2 = std::operator==(&local_2c,"[duration]");
                if (bVar2) {
                  local_28 = ScanInt(&local_d);
                  if (local_d != true) {
                    unaff_EBX = 0x2c6;
                    iVar3 = 0;
                    goto LAB_0889ac08;
                  }
                }
                else {
                  bVar2 = std::operator==(&local_2c,"[type]");
                  if (bVar2) {
                    std::string::string((string *)&local_30);
                    /* try { // try from 0889aa83 to 0889aaf0 has its CatchHandler @ 0889ab11 */
                    cVar1 = ScanStr((string *)&local_30);
                    if (cVar1 == '\x01') {
                      bVar2 = std::operator==(&local_30,"normal");
                      if (bVar2) {
                        local_24 = 0;
                      }
                      else {
                        bVar2 = std::operator==(&local_30,"named");
                        if (bVar2) {
                          local_24 = 1;
                        }
                        else {
                          bVar2 = std::operator==(&local_30,"boss");
                          if (!bVar2) {
                            unaff_EBX = 0x2dc;
                            bVar2 = false;
                            goto LAB_0889ab29;
                          }
                          local_24 = 2;
                        }
                      }
                      bVar2 = true;
                    }
                    else {
                      unaff_EBX = 0x2cc;
                      bVar2 = false;
                    }
LAB_0889ab29:
                    /* try { // try from 0889ab2f to 0889abe5 has its CatchHandler @ 0889abf3 */
                    std::string::~string((string *)&local_30);
                    if (!bVar2) {
                      iVar3 = 0;
                      goto LAB_0889ac08;
                    }
                  }
                  else {
                    bVar2 = std::operator==(&local_2c,"[action assign]");
                    if (bVar2) {
                      while( true ) {
                        _ActionAssign::_ActionAssign((_ActionAssign *)local_40);
                        local_40[0] = ScanInt(&local_d);
                        if (local_d != true) break;
                        local_38 = ScanInt(&local_d);
                        if (local_d != true) {
                          unaff_EBX = 0x2ed;
                          iVar3 = 0;
                          goto LAB_0889ac08;
                        }
                        local_36 = ScanInt(&local_d);
                        if (local_d != true) {
                          unaff_EBX = 0x2f0;
                          iVar3 = 0;
                          goto LAB_0889ac08;
                        }
                        std::
                        vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>
                        ::push_back(avStack_20,(_ActionAssign *)local_40);
                      }
                    }
                  }
                }
                iVar3 = 2;
              }
            }
            else {
              unaff_EBX = 0x2be;
              iVar3 = 0;
            }
LAB_0889ac08:
                    /* try { // try from 0889ac0e to 0889ac39 has its CatchHandler @ 0889ac41 */
            std::string::~string((string *)&local_2c);
            if (iVar3 == 0) {
              bVar2 = false;
              goto LAB_0889ac56;
            }
          } while (iVar3 != 1);
          std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::push_back
                    ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)param_1,
                     (Phase *)&local_28);
          bVar2 = true;
LAB_0889ac56:
                    /* try { // try from 0889ac5c to 0889ac60 has its CatchHandler @ 0889ac73 */
          Phase::~Phase((Phase *)&local_28);
          if (!bVar2) {
            bVar2 = false;
            goto LAB_0889ac8e;
          }
        }
        bVar2 = true;
      }
    }
    else {
      unaff_EBX = 0x2b1;
      bVar2 = false;
    }
LAB_0889ac8e:
    std::string::~string((string *)&local_14);
    if (!bVar2) {
      return unaff_EBX;
    }
  } while( true );
}

```

---

## importStageTimeLineParameter

```asm
// === 08899f26 advancealtar::StageTimeLineParameter::importStageTimeLineParameter  [0x08899f26-0x889a02b] ===
 8899f26:	55                   	push   %ebp
 8899f27:	89 e5                	mov    %esp,%ebp
 8899f29:	56                   	push   %esi
 8899f2a:	53                   	push   %ebx
 8899f2b:	83 ec 30             	sub    $0x30,%esp
 8899f2e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899f31:	89 04 24             	mov    %eax,(%esp)
 8899f34:	e8 97 c6 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 8899f39:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8899f40:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8899f44:	8b 45 08             	mov    0x8(%ebp),%eax
 8899f47:	89 04 24             	mov    %eax,(%esp)
 8899f4a:	e8 a7 ff ff ff       	call   8899ef6 <_ZN12advancealtar22StageTimeLineParameter5resetEv>
 8899f4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899f52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8899f56:	c7 04 24 c1 52 e0 08 	movl   $0x8e052c1,(%esp)
 8899f5d:	e8 c7 1d 02 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8899f62:	83 f0 01             	xor    $0x1,%eax
 8899f65:	84 c0                	test   %al,%al
 8899f67:	74 11                	je     8899f7a <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0x54>
 8899f69:	bb 00 00 00 00       	mov    $0x0,%ebx
 8899f6e:	e9 a4 00 00 00       	jmp    889a017 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0xf1>
 8899f73:	90                   	nop
 8899f74:	eb 04                	jmp    8899f7a <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0x54>
 8899f76:	90                   	nop
 8899f77:	eb 01                	jmp    8899f7a <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0x54>
 8899f79:	90                   	nop
 8899f7a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8899f81:	00 
 8899f82:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899f85:	89 04 24             	mov    %eax,(%esp)
 8899f88:	e8 d2 28 02 00       	call   88bc85f <_Z8ScanTypeRSsb>
 8899f8d:	83 f0 01             	xor    $0x1,%eax
 8899f90:	84 c0                	test   %al,%al
 8899f92:	75 60                	jne    8899ff4 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0xce>
 8899f94:	c7 44 24 04 c2 52 e0 	movl   $0x8e052c2,0x4(%esp)
 8899f9b:	08 
 8899f9c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899f9f:	89 04 24             	mov    %eax,(%esp)
 8899fa2:	e8 fa 69 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8899fa7:	84 c0                	test   %al,%al
 8899fa9:	74 19                	je     8899fc4 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0x9e>
 8899fab:	8b 45 08             	mov    0x8(%ebp),%eax
 8899fae:	89 04 24             	mov    %eax,(%esp)
 8899fb1:	e8 68 02 00 00       	call   889a21e <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv>
 8899fb6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8899fb9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8899fbd:	74 b4                	je     8899f73 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0x4d>
 8899fbf:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8899fc2:	eb 53                	jmp    889a017 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0xf1>
 8899fc4:	c7 44 24 04 d2 52 e0 	movl   $0x8e052d2,0x4(%esp)
 8899fcb:	08 
 8899fcc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8899fcf:	89 04 24             	mov    %eax,(%esp)
 8899fd2:	e8 ca 69 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8899fd7:	84 c0                	test   %al,%al
 8899fd9:	74 9b                	je     8899f76 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0x50>
 8899fdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8899fde:	89 04 24             	mov    %eax,(%esp)
 8899fe1:	e8 88 05 00 00       	call   889a56e <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv>
 8899fe6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8899fe9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8899fed:	74 8a                	je     8899f79 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0x53>
 8899fef:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8899ff2:	eb 23                	jmp    889a017 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0xf1>
 8899ff4:	90                   	nop
 8899ff5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8899ffa:	eb 1b                	jmp    889a017 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc+0xf1>
 8899ffc:	89 d3                	mov    %edx,%ebx
 8899ffe:	89 c6                	mov    %eax,%esi
 889a000:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 889a003:	89 04 24             	mov    %eax,(%esp)
 889a006:	e8 d5 db e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a00b:	89 f0                	mov    %esi,%eax
 889a00d:	89 da                	mov    %ebx,%edx
 889a00f:	89 04 24             	mov    %eax,(%esp)
 889a012:	e8 39 97 24 00       	call   8ae3750 <_Unwind_Resume>
 889a017:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 889a01a:	89 04 24             	mov    %eax,(%esp)
 889a01d:	e8 be db e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a022:	89 d8                	mov    %ebx,%eax
 889a024:	83 c4 30             	add    $0x30,%esp
 889a027:	5b                   	pop    %ebx
 889a028:	5e                   	pop    %esi
 889a029:	5d                   	pop    %ebp
 889a02a:	c3                   	ret
 889a02b:	90                   	nop

```

```c
// advancealtar::StageTimeLineParameter::importStageTimeLineParameter @ 0x8899f26

/* advancealtar::StageTimeLineParameter::importStageTimeLineParameter(char const*) */

int __thiscall
advancealtar::StageTimeLineParameter::importStageTimeLineParameter
          (StageTimeLineParameter *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  string local_20;
  undefined4 local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  
  std::string::string((string *)&local_20);
  local_1c = 0;
  local_15 = 0;
                    /* try { // try from 08899f4a to 08899fe5 has its CatchHandler @ 08899ffc */
  reset(this);
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    do {
      while( true ) {
        cVar1 = ScanType((string *)&local_20,true);
        if (cVar1 != '\x01') {
          iVar3 = 0;
          goto LAB_0889a017;
        }
        bVar2 = std::operator==(&local_20,"[summon object]");
        if (!bVar2) break;
        iVar3 = importSummonObject();
        local_14 = iVar3;
        if (iVar3 != 0) goto LAB_0889a017;
      }
      bVar2 = std::operator==(&local_20,"[action define]");
    } while ((!bVar2) || (iVar3 = importActionDefine(), local_10 = iVar3, iVar3 == 0));
  }
  else {
    iVar3 = 0;
  }
LAB_0889a017:
  std::string::~string((string *)&local_20);
  return iVar3;
}

```

---

## importSummonObject

```asm
// === 0889a21e advancealtar::StageTimeLineParameter::importSummonObject  [0x0889a21e-0x889a56d] ===
 889a21e:	55                   	push   %ebp
 889a21f:	89 e5                	mov    %esp,%ebp
 889a221:	56                   	push   %esi
 889a222:	53                   	push   %ebx
 889a223:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 889a229:	c6 45 9f 00          	movb   $0x0,-0x61(%ebp)
 889a22d:	eb 01                	jmp    889a230 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x12>
 889a22f:	90                   	nop
 889a230:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 889a236:	89 04 24             	mov    %eax,(%esp)
 889a239:	e8 12 a4 89 ff       	call   8134650 <_ZN12advancealtar13_SummonObjectC1Ev>
 889a23e:	8d 45 9f             	lea    -0x61(%ebp),%eax
 889a241:	89 04 24             	mov    %eax,(%esp)
 889a244:	e8 32 21 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a249:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 889a24f:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 889a253:	83 f0 01             	xor    $0x1,%eax
 889a256:	84 c0                	test   %al,%al
 889a258:	74 0a                	je     889a264 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x46>
 889a25a:	bb 00 00 00 00       	mov    $0x0,%ebx
 889a25f:	e9 fd 02 00 00       	jmp    889a561 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x343>
 889a264:	8d 45 98             	lea    -0x68(%ebp),%eax
 889a267:	89 04 24             	mov    %eax,(%esp)
 889a26a:	e8 61 c3 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889a26f:	8d 45 98             	lea    -0x68(%ebp),%eax
 889a272:	89 04 24             	mov    %eax,(%esp)
 889a275:	e8 28 25 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889a27a:	83 f0 01             	xor    $0x1,%eax
 889a27d:	84 c0                	test   %al,%al
 889a27f:	74 0f                	je     889a290 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x72>
 889a281:	bb 0b 02 00 00       	mov    $0x20b,%ebx
 889a286:	be 00 00 00 00       	mov    $0x0,%esi
 889a28b:	e9 be 02 00 00       	jmp    889a54e <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x330>
 889a290:	c7 44 24 04 13 53 e0 	movl   $0x8e05313,0x4(%esp)
 889a297:	08 
 889a298:	8d 45 98             	lea    -0x68(%ebp),%eax
 889a29b:	89 04 24             	mov    %eax,(%esp)
 889a29e:	e8 fe 66 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a2a3:	84 c0                	test   %al,%al
 889a2a5:	74 09                	je     889a2b0 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x92>
 889a2a7:	c6 85 74 ff ff ff 01 	movb   $0x1,-0x8c(%ebp)
 889a2ae:	eb 4a                	jmp    889a2fa <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0xdc>
 889a2b0:	c7 44 24 04 19 53 e0 	movl   $0x8e05319,0x4(%esp)
 889a2b7:	08 
 889a2b8:	8d 45 98             	lea    -0x68(%ebp),%eax
 889a2bb:	89 04 24             	mov    %eax,(%esp)
 889a2be:	e8 de 66 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a2c3:	84 c0                	test   %al,%al
 889a2c5:	74 09                	je     889a2d0 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0xb2>
 889a2c7:	c6 85 74 ff ff ff 00 	movb   $0x0,-0x8c(%ebp)
 889a2ce:	eb 2a                	jmp    889a2fa <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0xdc>
 889a2d0:	8d 45 98             	lea    -0x68(%ebp),%eax
 889a2d3:	89 04 24             	mov    %eax,(%esp)
 889a2d6:	e8 15 c2 e6 ff       	call   87064f0 <_ZNKSs5c_strEv>
 889a2db:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a2df:	c7 04 24 20 53 e0 08 	movl   $0x8e05320,(%esp)
 889a2e6:	e8 75 38 7e ff       	call   807db60 <printf@plt>
 889a2eb:	bb 18 02 00 00       	mov    $0x218,%ebx
 889a2f0:	be 00 00 00 00       	mov    $0x0,%esi
 889a2f5:	e9 54 02 00 00       	jmp    889a54e <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x330>
 889a2fa:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a2fd:	89 04 24             	mov    %eax,(%esp)
 889a300:	e8 cb c2 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889a305:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a308:	89 04 24             	mov    %eax,(%esp)
 889a30b:	e8 92 24 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889a310:	83 f0 01             	xor    $0x1,%eax
 889a313:	84 c0                	test   %al,%al
 889a315:	74 0f                	je     889a326 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x108>
 889a317:	bb 1d 02 00 00       	mov    $0x21d,%ebx
 889a31c:	be 00 00 00 00       	mov    $0x0,%esi
 889a321:	e9 f0 01 00 00       	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a326:	c7 44 24 04 b1 52 e0 	movl   $0x8e052b1,0x4(%esp)
 889a32d:	08 
 889a32e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a331:	89 04 24             	mov    %eax,(%esp)
 889a334:	e8 68 66 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a339:	84 c0                	test   %al,%al
 889a33b:	74 0c                	je     889a349 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x12b>
 889a33d:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
 889a344:	00 00 00 
 889a347:	eb 70                	jmp    889a3b9 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x19b>
 889a349:	c7 44 24 04 54 53 e0 	movl   $0x8e05354,0x4(%esp)
 889a350:	08 
 889a351:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a354:	89 04 24             	mov    %eax,(%esp)
 889a357:	e8 45 66 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a35c:	84 c0                	test   %al,%al
 889a35e:	74 0c                	je     889a36c <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x14e>
 889a360:	c7 85 78 ff ff ff 01 	movl   $0x1,-0x88(%ebp)
 889a367:	00 00 00 
 889a36a:	eb 4d                	jmp    889a3b9 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x19b>
 889a36c:	c7 44 24 04 5a 53 e0 	movl   $0x8e0535a,0x4(%esp)
 889a373:	08 
 889a374:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a377:	89 04 24             	mov    %eax,(%esp)
 889a37a:	e8 22 66 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889a37f:	84 c0                	test   %al,%al
 889a381:	74 0c                	je     889a38f <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x171>
 889a383:	c7 85 78 ff ff ff 02 	movl   $0x2,-0x88(%ebp)
 889a38a:	00 00 00 
 889a38d:	eb 2a                	jmp    889a3b9 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x19b>
 889a38f:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a392:	89 04 24             	mov    %eax,(%esp)
 889a395:	e8 56 c1 e6 ff       	call   87064f0 <_ZNKSs5c_strEv>
 889a39a:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a39e:	c7 04 24 60 53 e0 08 	movl   $0x8e05360,(%esp)
 889a3a5:	e8 b6 37 7e ff       	call   807db60 <printf@plt>
 889a3aa:	bb 2e 02 00 00       	mov    $0x22e,%ebx
 889a3af:	be 00 00 00 00       	mov    $0x0,%esi
 889a3b4:	e9 5d 01 00 00       	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a3b9:	8d 45 9f             	lea    -0x61(%ebp),%eax
 889a3bc:	89 04 24             	mov    %eax,(%esp)
 889a3bf:	e8 b7 1f 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a3c4:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 889a3ca:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 889a3ce:	83 f0 01             	xor    $0x1,%eax
 889a3d1:	84 c0                	test   %al,%al
 889a3d3:	74 0f                	je     889a3e4 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x1c6>
 889a3d5:	bb 32 02 00 00       	mov    $0x232,%ebx
 889a3da:	be 00 00 00 00       	mov    $0x0,%esi
 889a3df:	e9 32 01 00 00       	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a3e4:	8d 45 9f             	lea    -0x61(%ebp),%eax
 889a3e7:	89 04 24             	mov    %eax,(%esp)
 889a3ea:	e8 8c 1f 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a3ef:	66 89 45 80          	mov    %ax,-0x80(%ebp)
 889a3f3:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 889a3f7:	83 f0 01             	xor    $0x1,%eax
 889a3fa:	84 c0                	test   %al,%al
 889a3fc:	74 0f                	je     889a40d <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x1ef>
 889a3fe:	bb 35 02 00 00       	mov    $0x235,%ebx
 889a403:	be 00 00 00 00       	mov    $0x0,%esi
 889a408:	e9 09 01 00 00       	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a40d:	8d 45 9f             	lea    -0x61(%ebp),%eax
 889a410:	89 04 24             	mov    %eax,(%esp)
 889a413:	e8 63 1f 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a418:	89 45 84             	mov    %eax,-0x7c(%ebp)
 889a41b:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 889a41f:	83 f0 01             	xor    $0x1,%eax
 889a422:	84 c0                	test   %al,%al
 889a424:	74 0f                	je     889a435 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x217>
 889a426:	bb 38 02 00 00       	mov    $0x238,%ebx
 889a42b:	be 00 00 00 00       	mov    $0x0,%esi
 889a430:	e9 e1 00 00 00       	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a435:	8d 45 9f             	lea    -0x61(%ebp),%eax
 889a438:	89 04 24             	mov    %eax,(%esp)
 889a43b:	e8 3b 1f 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a440:	89 45 88             	mov    %eax,-0x78(%ebp)
 889a443:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 889a447:	83 f0 01             	xor    $0x1,%eax
 889a44a:	84 c0                	test   %al,%al
 889a44c:	74 0f                	je     889a45d <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x23f>
 889a44e:	bb 3b 02 00 00       	mov    $0x23b,%ebx
 889a453:	be 00 00 00 00       	mov    $0x0,%esi
 889a458:	e9 b9 00 00 00       	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a45d:	8d 45 9f             	lea    -0x61(%ebp),%eax
 889a460:	89 04 24             	mov    %eax,(%esp)
 889a463:	e8 13 1f 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a468:	89 45 8c             	mov    %eax,-0x74(%ebp)
 889a46b:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 889a46f:	83 f0 01             	xor    $0x1,%eax
 889a472:	84 c0                	test   %al,%al
 889a474:	74 0f                	je     889a485 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x267>
 889a476:	bb 3e 02 00 00       	mov    $0x23e,%ebx
 889a47b:	be 00 00 00 00       	mov    $0x0,%esi
 889a480:	e9 91 00 00 00       	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a485:	8d 45 9f             	lea    -0x61(%ebp),%eax
 889a488:	89 04 24             	mov    %eax,(%esp)
 889a48b:	e8 eb 1e 02 00       	call   88bc37b <_Z7ScanIntPb>
 889a490:	89 45 90             	mov    %eax,-0x70(%ebp)
 889a493:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 889a497:	83 f0 01             	xor    $0x1,%eax
 889a49a:	84 c0                	test   %al,%al
 889a49c:	74 0c                	je     889a4aa <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x28c>
 889a49e:	bb 41 02 00 00       	mov    $0x241,%ebx
 889a4a3:	be 00 00 00 00       	mov    $0x0,%esi
 889a4a8:	eb 6c                	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a4aa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 889a4ad:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 889a4b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 889a4b7:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 889a4bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a4c1:	89 04 24             	mov    %eax,(%esp)
 889a4c4:	e8 a4 1b 00 00       	call   889c06d <_ZSt9make_pairIRiRN12advancealtar13_SummonObjectEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 889a4c9:	83 ec 04             	sub    $0x4,%esp
 889a4cc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 889a4cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 889a4d3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 889a4d6:	89 04 24             	mov    %eax,(%esp)
 889a4d9:	e8 ce 1b 00 00       	call   889c0ac <_ZNSt4pairIKiN12advancealtar13_SummonObjectEEC1IiS2_EEOS_IT_T0_E>
 889a4de:	8b 55 08             	mov    0x8(%ebp),%edx
 889a4e1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 889a4e4:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 889a4e7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 889a4eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 889a4ef:	89 04 24             	mov    %eax,(%esp)
 889a4f2:	e8 15 1c 00 00       	call   889c10c <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 889a4f7:	83 ec 04             	sub    $0x4,%esp
 889a4fa:	be 01 00 00 00       	mov    $0x1,%esi
 889a4ff:	eb 15                	jmp    889a516 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x2f8>
 889a501:	89 d3                	mov    %edx,%ebx
 889a503:	89 c6                	mov    %eax,%esi
 889a505:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a508:	89 04 24             	mov    %eax,(%esp)
 889a50b:	e8 d0 d6 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a510:	89 f0                	mov    %esi,%eax
 889a512:	89 da                	mov    %ebx,%edx
 889a514:	eb 1d                	jmp    889a533 <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x315>
 889a516:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889a519:	89 04 24             	mov    %eax,(%esp)
 889a51c:	e8 bf d6 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a521:	85 f6                	test   %esi,%esi
 889a523:	75 07                	jne    889a52c <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x30e>
 889a525:	be 00 00 00 00       	mov    $0x0,%esi
 889a52a:	eb 22                	jmp    889a54e <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x330>
 889a52c:	be 01 00 00 00       	mov    $0x1,%esi
 889a531:	eb 1b                	jmp    889a54e <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x330>
 889a533:	89 d3                	mov    %edx,%ebx
 889a535:	89 c6                	mov    %eax,%esi
 889a537:	8d 45 98             	lea    -0x68(%ebp),%eax
 889a53a:	89 04 24             	mov    %eax,(%esp)
 889a53d:	e8 9e d6 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a542:	89 f0                	mov    %esi,%eax
 889a544:	89 da                	mov    %ebx,%edx
 889a546:	89 04 24             	mov    %eax,(%esp)
 889a549:	e8 02 92 24 00       	call   8ae3750 <_Unwind_Resume>
 889a54e:	8d 45 98             	lea    -0x68(%ebp),%eax
 889a551:	89 04 24             	mov    %eax,(%esp)
 889a554:	e8 87 d6 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889a559:	85 f6                	test   %esi,%esi
 889a55b:	0f 85 ce fc ff ff    	jne    889a22f <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv+0x11>
 889a561:	89 d8                	mov    %ebx,%eax
 889a563:	8d 65 f8             	lea    -0x8(%ebp),%esp
 889a566:	83 c4 00             	add    $0x0,%esp
 889a569:	5b                   	pop    %ebx
 889a56a:	5e                   	pop    %esi
 889a56b:	5d                   	pop    %ebp
 889a56c:	c3                   	ret
 889a56d:	90                   	nop

```

```c
// advancealtar::StageTimeLineParameter::importSummonObject @ 0x889a21e

/* advancealtar::StageTimeLineParameter::importSummonObject() */

undefined4 advancealtar::StageTimeLineParameter::importSummonObject(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  string local_70;
  string local_6c;
  bool local_65;
  pair local_64 [8];
  pair<int_const,advancealtar::_SummonObject> local_5c [40];
  int local_34 [10];
  
  local_65 = false;
  do {
    _SummonObject::_SummonObject((_SummonObject *)&local_94);
    local_94 = ScanInt(&local_65);
    if (local_65 != true) {
      return 0;
    }
    std::string::string((string *)&local_6c);
                    /* try { // try from 0889a275 to 0889a304 has its CatchHandler @ 0889a533 */
    cVar1 = ScanStr((string *)&local_6c);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_6c,"enemy");
      if (bVar2) {
        local_90 = 1;
      }
      else {
        bVar2 = std::operator==(&local_6c,"friend");
        if (!bVar2) {
          uVar3 = std::string::c_str((string *)&local_6c);
          printf("advancealtar : SummonObject.isEnemy undefined=\'%s\'\n",uVar3);
          unaff_EBX = 0x218;
          bVar2 = false;
          goto LAB_0889a54e;
        }
        local_90 = 0;
      }
      std::string::string((string *)&local_70);
                    /* try { // try from 0889a30b to 0889a4f6 has its CatchHandler @ 0889a501 */
      cVar1 = ScanStr((string *)&local_70);
      if (cVar1 == '\x01') {
        bVar2 = std::operator==(&local_70,"normal");
        if (bVar2) {
          local_8c = 0;
        }
        else {
          bVar2 = std::operator==(&local_70,"named");
          if (bVar2) {
            local_8c = 1;
          }
          else {
            bVar2 = std::operator==(&local_70,"boss");
            if (!bVar2) {
              uVar3 = std::string::c_str((string *)&local_70);
              printf("advancealtar : SummonObject.Type undefined=\'%s\'\n",uVar3);
              unaff_EBX = 0x22e;
              bVar2 = false;
              goto LAB_0889a516;
            }
            local_8c = 2;
          }
        }
        local_88 = ScanInt(&local_65);
        if (local_65 == true) {
          local_84 = ScanInt(&local_65);
          if (local_65 == true) {
            local_80 = ScanInt(&local_65);
            if (local_65 == true) {
              local_7c = ScanInt(&local_65);
              if (local_65 == true) {
                local_78 = ScanInt(&local_65);
                if (local_65 == true) {
                  local_74 = ScanInt(&local_65);
                  if (local_65 == true) {
                    std::make_pair<int&,advancealtar::_SummonObject&>
                              (local_34,(_SummonObject *)&local_94);
                    std::pair<int_const,advancealtar::_SummonObject>::
                    pair<int,advancealtar::_SummonObject>(local_5c,(pair *)local_34);
                    std::
                    map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
                    ::insert(local_64);
                    bVar2 = true;
                  }
                  else {
                    unaff_EBX = 0x241;
                    bVar2 = false;
                  }
                }
                else {
                  unaff_EBX = 0x23e;
                  bVar2 = false;
                }
              }
              else {
                unaff_EBX = 0x23b;
                bVar2 = false;
              }
            }
            else {
              unaff_EBX = 0x238;
              bVar2 = false;
            }
          }
          else {
            unaff_EBX = 0x235;
            bVar2 = false;
          }
        }
        else {
          unaff_EBX = 0x232;
          bVar2 = false;
        }
      }
      else {
        unaff_EBX = 0x21d;
        bVar2 = false;
      }
LAB_0889a516:
                    /* try { // try from 0889a51c to 0889a520 has its CatchHandler @ 0889a533 */
      std::string::~string((string *)&local_70);
      if (bVar2) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      unaff_EBX = 0x20b;
      bVar2 = false;
    }
LAB_0889a54e:
    std::string::~string((string *)&local_6c);
    if (!bVar2) {
      return unaff_EBX;
    }
  } while( true );
}

```

---

## reset

```asm
// === 08899ef6 advancealtar::StageTimeLineParameter::reset  [0x08899ef6-0x8899f25] ===
 8899ef6:	55                   	push   %ebp
 8899ef7:	89 e5                	mov    %esp,%ebp
 8899ef9:	83 ec 18             	sub    $0x18,%esp
 8899efc:	8b 45 08             	mov    0x8(%ebp),%eax
 8899eff:	89 04 24             	mov    %eax,(%esp)
 8899f02:	e8 af 1f 00 00       	call   889beb6 <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 8899f07:	8b 45 08             	mov    0x8(%ebp),%eax
 8899f0a:	83 c0 18             	add    $0x18,%eax
 8899f0d:	89 04 24             	mov    %eax,(%esp)
 8899f10:	e8 b5 1f 00 00       	call   889beca <_ZNSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 8899f15:	8b 45 08             	mov    0x8(%ebp),%eax
 8899f18:	83 c0 30             	add    $0x30,%eax
 8899f1b:	89 04 24             	mov    %eax,(%esp)
 8899f1e:	e8 d7 fe ff ff       	call   8899dfa <_ZN12advancealtar8TimeLine5resetEv>
 8899f23:	c9                   	leave
 8899f24:	c3                   	ret
 8899f25:	90                   	nop

```

```c
// advancealtar::StageTimeLineParameter::reset @ 0x8899ef6

/* advancealtar::StageTimeLineParameter::reset() */

void __thiscall advancealtar::StageTimeLineParameter::reset(StageTimeLineParameter *this)

{
  std::
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  ::clear((map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
           *)this);
  std::
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  ::clear((map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
           *)(this + 0x18));
  TimeLine::reset((TimeLine *)(this + 0x30));
  return;
}

```

---

## ~StageTimeLineParameter

```asm
// === 08899e88 advancealtar::StageTimeLineParameter::~StageTimeLineParameter  [0x08899e88-0x8899ef5] ===
 8899e88:	55                   	push   %ebp
 8899e89:	89 e5                	mov    %esp,%ebp
 8899e8b:	56                   	push   %esi
 8899e8c:	53                   	push   %ebx
 8899e8d:	83 ec 10             	sub    $0x10,%esp
 8899e90:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e93:	83 c0 30             	add    $0x30,%eax
 8899e96:	89 04 24             	mov    %eax,(%esp)
 8899e99:	e8 16 ff ff ff       	call   8899db4 <_ZN12advancealtar8TimeLineD1Ev>
 8899e9e:	eb 18                	jmp    8899eb8 <_ZN12advancealtar22StageTimeLineParameterD1Ev+0x30>
 8899ea0:	89 d3                	mov    %edx,%ebx
 8899ea2:	89 c6                	mov    %eax,%esi
 8899ea4:	8b 45 08             	mov    0x8(%ebp),%eax
 8899ea7:	83 c0 18             	add    $0x18,%eax
 8899eaa:	89 04 24             	mov    %eax,(%esp)
 8899ead:	e8 46 1b 00 00       	call   889b9f8 <_ZNSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899eb2:	89 f0                	mov    %esi,%eax
 8899eb4:	89 da                	mov    %ebx,%edx
 8899eb6:	eb 10                	jmp    8899ec8 <_ZN12advancealtar22StageTimeLineParameterD1Ev+0x40>
 8899eb8:	8b 45 08             	mov    0x8(%ebp),%eax
 8899ebb:	83 c0 18             	add    $0x18,%eax
 8899ebe:	89 04 24             	mov    %eax,(%esp)
 8899ec1:	e8 32 1b 00 00       	call   889b9f8 <_ZNSt3mapIiN12advancealtar12ActionDefineESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899ec6:	eb 1b                	jmp    8899ee3 <_ZN12advancealtar22StageTimeLineParameterD1Ev+0x5b>
 8899ec8:	89 d3                	mov    %edx,%ebx
 8899eca:	89 c6                	mov    %eax,%esi
 8899ecc:	8b 45 08             	mov    0x8(%ebp),%eax
 8899ecf:	89 04 24             	mov    %eax,(%esp)
 8899ed2:	e8 0d 1b 00 00       	call   889b9e4 <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899ed7:	89 f0                	mov    %esi,%eax
 8899ed9:	89 da                	mov    %ebx,%edx
 8899edb:	89 04 24             	mov    %eax,(%esp)
 8899ede:	e8 6d 98 24 00       	call   8ae3750 <_Unwind_Resume>
 8899ee3:	8b 45 08             	mov    0x8(%ebp),%eax
 8899ee6:	89 04 24             	mov    %eax,(%esp)
 8899ee9:	e8 f6 1a 00 00       	call   889b9e4 <_ZNSt3mapIiN12advancealtar13_SummonObjectESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8899eee:	83 c4 10             	add    $0x10,%esp
 8899ef1:	5b                   	pop    %ebx
 8899ef2:	5e                   	pop    %esi
 8899ef3:	5d                   	pop    %ebp
 8899ef4:	c3                   	ret
 8899ef5:	90                   	nop

```

```c
// advancealtar::StageTimeLineParameter::~StageTimeLineParameter @ 0x8899e88

/* advancealtar::StageTimeLineParameter::~StageTimeLineParameter() */

void __thiscall
advancealtar::StageTimeLineParameter::~StageTimeLineParameter(StageTimeLineParameter *this)

{
                    /* try { // try from 08899e99 to 08899e9d has its CatchHandler @ 08899ea0 */
  TimeLine::~TimeLine((TimeLine *)(this + 0x30));
                    /* try { // try from 08899ec1 to 08899ec5 has its CatchHandler @ 08899ec8 */
  std::
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  ::~map((map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
          *)(this + 0x18));
  std::
  map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
  ::~map((map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
          *)this);
  return;
}

```

