# CDungeonExpStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## IncreaseDungeonExp

```asm
// === 0860efca CDungeonExpStatistic::IncreaseDungeonExp  [0x0860efca-0x860f10f] ===
 860efca:	55                   	push   %ebp
 860efcb:	89 e5                	mov    %esp,%ebp
 860efcd:	53                   	push   %ebx
 860efce:	83 ec 64             	sub    $0x64,%esp
 860efd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 860efd4:	85 c0                	test   %eax,%eax
 860efd6:	7e 0a                	jle    860efe2 <_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii+0x18>
 860efd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 860efdb:	3d c8 00 00 00       	cmp    $0xc8,%eax
 860efe0:	7e 42                	jle    860f024 <_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii+0x5a>
 860efe2:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 860efe5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 860efec:	00 
 860efed:	c7 44 24 08 81 05 00 	movl   $0x581,0x8(%esp)
 860eff4:	00 
 860eff5:	c7 44 24 04 60 11 ce 	movl   $0x8ce1160,0x4(%esp)
 860effc:	08 
 860effd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 860f000:	89 04 24             	mov    %eax,(%esp)
 860f003:	e8 10 07 f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 860f008:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860f00c:	c7 44 24 04 68 03 ce 	movl   $0x8ce0368,0x4(%esp)
 860f013:	08 
 860f014:	8d 45 b8             	lea    -0x48(%ebp),%eax
 860f017:	89 04 24             	mov    %eax,(%esp)
 860f01a:	e8 69 07 f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 860f01f:	e9 e6 00 00 00       	jmp    860f10a <_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii+0x140>
 860f024:	8b 55 08             	mov    0x8(%ebp),%edx
 860f027:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860f02a:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 860f02d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860f031:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f035:	89 04 24             	mov    %eax,(%esp)
 860f038:	e8 7f 28 00 00       	call   86118bc <_ZNSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 860f03d:	83 ec 04             	sub    $0x4,%esp
 860f040:	8b 55 08             	mov    0x8(%ebp),%edx
 860f043:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f046:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f04a:	89 04 24             	mov    %eax,(%esp)
 860f04d:	e8 96 28 00 00       	call   86118e8 <_ZNSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 860f052:	83 ec 04             	sub    $0x4,%esp
 860f055:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860f058:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f05c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f05f:	89 04 24             	mov    %eax,(%esp)
 860f062:	e8 a7 28 00 00       	call   861190e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEeqERKS5_>
 860f067:	84 c0                	test   %al,%al
 860f069:	74 5f                	je     860f0ca <_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii+0x100>
 860f06b:	8b 45 10             	mov    0x10(%ebp),%eax
 860f06e:	89 45 a8             	mov    %eax,-0x58(%ebp)
 860f071:	8b 45 14             	mov    0x14(%ebp),%eax
 860f074:	89 45 ac             	mov    %eax,-0x54(%ebp)
 860f077:	c7 45 b0 01 00 00 00 	movl   $0x1,-0x50(%ebp)
 860f07e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860f081:	8d 55 a8             	lea    -0x58(%ebp),%edx
 860f084:	89 54 24 08          	mov    %edx,0x8(%esp)
 860f088:	8d 55 0c             	lea    0xc(%ebp),%edx
 860f08b:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f08f:	89 04 24             	mov    %eax,(%esp)
 860f092:	e8 8b 28 00 00       	call   8611922 <_ZSt9make_pairIRiRN20CDungeonExpStatistic12stDungeonExpEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 860f097:	83 ec 04             	sub    $0x4,%esp
 860f09a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860f09d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f0a1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860f0a4:	89 04 24             	mov    %eax,(%esp)
 860f0a7:	e8 b4 28 00 00       	call   8611960 <_ZNSt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEC1IiS2_EEOS_IT_T0_E>
 860f0ac:	8b 55 08             	mov    0x8(%ebp),%edx
 860f0af:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f0b2:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 860f0b5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860f0b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f0bd:	89 04 24             	mov    %eax,(%esp)
 860f0c0:	e8 d7 28 00 00       	call   861199c <_ZNSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 860f0c5:	83 ec 04             	sub    $0x4,%esp
 860f0c8:	eb 40                	jmp    860f10a <_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii+0x140>
 860f0ca:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860f0cd:	89 04 24             	mov    %eax,(%esp)
 860f0d0:	e8 f3 28 00 00       	call   86119c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEptEv>
 860f0d5:	83 c0 04             	add    $0x4,%eax
 860f0d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860f0db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860f0de:	8b 00                	mov    (%eax),%eax
 860f0e0:	89 c2                	mov    %eax,%edx
 860f0e2:	03 55 10             	add    0x10(%ebp),%edx
 860f0e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860f0e8:	89 10                	mov    %edx,(%eax)
 860f0ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860f0ed:	8b 40 04             	mov    0x4(%eax),%eax
 860f0f0:	89 c2                	mov    %eax,%edx
 860f0f2:	03 55 14             	add    0x14(%ebp),%edx
 860f0f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860f0f8:	89 50 04             	mov    %edx,0x4(%eax)
 860f0fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860f0fe:	8b 40 08             	mov    0x8(%eax),%eax
 860f101:	8d 50 01             	lea    0x1(%eax),%edx
 860f104:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860f107:	89 50 08             	mov    %edx,0x8(%eax)
 860f10a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 860f10d:	c9                   	leave
 860f10e:	c3                   	ret
 860f10f:	90                   	nop

```

```c
// CDungeonExpStatistic::IncreaseDungeonExp @ 0x860efca

/* CDungeonExpStatistic::IncreaseDungeonExp(int, int, int) */

void __thiscall
CDungeonExpStatistic::IncreaseDungeonExp
          (CDungeonExpStatistic *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator local_50 [4];
  cMyTrace local_4c [16];
  map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
  local_3c [4];
  pair local_38 [8];
  pair<int_const,CDungeonExpStatistic::stDungeonExp> local_30 [16];
  int local_20 [6];
  
  iVar2 = param_1;
  if ((param_1 < 1) || (200 < param_1)) {
    cMyTrace::cMyTrace(local_4c,"void CDungeonExpStatistic::IncreaseDungeonExp(int, int, int)",0x581
                       ,0);
    cMyTrace::operator()(local_4c,"DUNGEON_EXP_STATISTIC wrong level(%d)",iVar2);
  }
  else {
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::find((int *)local_50);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::end(local_3c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
            operator==((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>> *
                       )local_3c,local_50);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_50);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_2;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_3;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    }
    else {
      std::make_pair<int&,CDungeonExpStatistic::stDungeonExp&>(local_20,(stDungeonExp *)&param_1);
      std::pair<int_const,CDungeonExpStatistic::stDungeonExp>::
      pair<int,CDungeonExpStatistic::stDungeonExp>(local_30,(pair *)local_20);
      std::
      map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
      ::insert(local_38);
    }
  }
  return;
}

```

---

## InsertDatabase

```asm
// === 0860f110 CDungeonExpStatistic::InsertDatabase  [0x0860f110-0x860f336] ===
 860f110:	55                   	push   %ebp
 860f111:	89 e5                	mov    %esp,%ebp
 860f113:	56                   	push   %esi
 860f114:	53                   	push   %ebx
 860f115:	83 ec 50             	sub    $0x50,%esp
 860f118:	8b 45 08             	mov    0x8(%ebp),%eax
 860f11b:	89 04 24             	mov    %eax,(%esp)
 860f11e:	e8 b3 28 00 00       	call   86119d6 <_ZNKSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 860f123:	85 c0                	test   %eax,%eax
 860f125:	0f 94 c0             	sete   %al
 860f128:	84 c0                	test   %al,%al
 860f12a:	0f 85 fc 01 00 00    	jne    860f32c <_ZN20CDungeonExpStatistic14InsertDatabaseEv+0x21c>
 860f130:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860f135:	c7 44 24 08 9c 05 00 	movl   $0x59c,0x8(%esp)
 860f13c:	00 
 860f13d:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860f144:	08 
 860f145:	89 04 24             	mov    %eax,(%esp)
 860f148:	e8 39 09 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860f14d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860f154:	00 
 860f155:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f159:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f15c:	89 04 24             	mov    %eax,(%esp)
 860f15f:	e8 c2 9a ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860f164:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f167:	89 04 24             	mov    %eax,(%esp)
 860f16a:	e8 d7 9a ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f16f:	c7 44 24 04 16 01 00 	movl   $0x116,0x4(%esp)
 860f176:	00 
 860f177:	89 04 24             	mov    %eax,(%esp)
 860f17a:	e8 d7 9a ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f17f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f182:	89 04 24             	mov    %eax,(%esp)
 860f185:	e8 bc 9a ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f18a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860f191:	ff 
 860f192:	89 04 24             	mov    %eax,(%esp)
 860f195:	e8 bc 9a ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f19a:	8b 45 08             	mov    0x8(%ebp),%eax
 860f19d:	89 04 24             	mov    %eax,(%esp)
 860f1a0:	e8 31 28 00 00       	call   86119d6 <_ZNKSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 860f1a5:	89 c3                	mov    %eax,%ebx
 860f1a7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f1aa:	89 04 24             	mov    %eax,(%esp)
 860f1ad:	e8 94 9a ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f1b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f1b6:	89 04 24             	mov    %eax,(%esp)
 860f1b9:	e8 98 9a ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f1be:	8b 55 08             	mov    0x8(%ebp),%edx
 860f1c1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f1c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f1c8:	89 04 24             	mov    %eax,(%esp)
 860f1cb:	e8 1a 28 00 00       	call   86119ea <_ZNSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 860f1d0:	83 ec 04             	sub    $0x4,%esp
 860f1d3:	8b 55 08             	mov    0x8(%ebp),%edx
 860f1d6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860f1d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f1dd:	89 04 24             	mov    %eax,(%esp)
 860f1e0:	e8 03 27 00 00       	call   86118e8 <_ZNSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 860f1e5:	83 ec 04             	sub    $0x4,%esp
 860f1e8:	e9 d4 00 00 00       	jmp    860f2c1 <_ZN20CDungeonExpStatistic14InsertDatabaseEv+0x1b1>
 860f1ed:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f1f0:	89 04 24             	mov    %eax,(%esp)
 860f1f3:	e8 d0 27 00 00       	call   86119c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEptEv>
 860f1f8:	8b 18                	mov    (%eax),%ebx
 860f1fa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f1fd:	89 04 24             	mov    %eax,(%esp)
 860f200:	e8 41 9a ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f205:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f209:	89 04 24             	mov    %eax,(%esp)
 860f20c:	e8 45 9a ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f211:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f214:	89 04 24             	mov    %eax,(%esp)
 860f217:	e8 ac 27 00 00       	call   86119c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEptEv>
 860f21c:	8b 50 04             	mov    0x4(%eax),%edx
 860f21f:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 860f222:	8b 50 08             	mov    0x8(%eax),%edx
 860f225:	89 55 d8             	mov    %edx,-0x28(%ebp)
 860f228:	8b 40 0c             	mov    0xc(%eax),%eax
 860f22b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 860f22e:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 860f231:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f234:	89 04 24             	mov    %eax,(%esp)
 860f237:	e8 0a 9a ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f23c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f240:	89 04 24             	mov    %eax,(%esp)
 860f243:	e8 0e 9a ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f248:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f24b:	89 04 24             	mov    %eax,(%esp)
 860f24e:	e8 75 27 00 00       	call   86119c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEptEv>
 860f253:	8b 50 04             	mov    0x4(%eax),%edx
 860f256:	89 55 e0             	mov    %edx,-0x20(%ebp)
 860f259:	8b 50 08             	mov    0x8(%eax),%edx
 860f25c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 860f25f:	8b 40 0c             	mov    0xc(%eax),%eax
 860f262:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860f265:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 860f268:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f26b:	89 04 24             	mov    %eax,(%esp)
 860f26e:	e8 d3 99 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f273:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f277:	89 04 24             	mov    %eax,(%esp)
 860f27a:	e8 d7 99 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f27f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f282:	89 04 24             	mov    %eax,(%esp)
 860f285:	e8 3e 27 00 00       	call   86119c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEptEv>
 860f28a:	8b 50 04             	mov    0x4(%eax),%edx
 860f28d:	89 55 ec             	mov    %edx,-0x14(%ebp)
 860f290:	8b 50 08             	mov    0x8(%eax),%edx
 860f293:	89 55 f0             	mov    %edx,-0x10(%ebp)
 860f296:	8b 40 0c             	mov    0xc(%eax),%eax
 860f299:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860f29c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 860f29f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f2a2:	89 04 24             	mov    %eax,(%esp)
 860f2a5:	e8 9c 99 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f2aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f2ae:	89 04 24             	mov    %eax,(%esp)
 860f2b1:	e8 a0 99 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f2b6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f2b9:	89 04 24             	mov    %eax,(%esp)
 860f2bc:	e8 63 27 00 00       	call   8611a24 <_ZNSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEppEv>
 860f2c1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860f2c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f2c8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f2cb:	89 04 24             	mov    %eax,(%esp)
 860f2ce:	e8 3d 27 00 00       	call   8611a10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN20CDungeonExpStatistic12stDungeonExpEEEneERKS5_>
 860f2d3:	84 c0                	test   %al,%al
 860f2d5:	0f 85 12 ff ff ff    	jne    860f1ed <_ZN20CDungeonExpStatistic14InsertDatabaseEv+0xdd>
 860f2db:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860f2e0:	8d 55 cc             	lea    -0x34(%ebp),%edx
 860f2e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 860f2e7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860f2ee:	00 
 860f2ef:	89 04 24             	mov    %eax,(%esp)
 860f2f2:	e8 e7 1c f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860f2f7:	8b 45 08             	mov    0x8(%ebp),%eax
 860f2fa:	89 04 24             	mov    %eax,(%esp)
 860f2fd:	e8 40 27 00 00       	call   8611a42 <_ZNSt3mapIiN20CDungeonExpStatistic12stDungeonExpESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 860f302:	eb 1b                	jmp    860f31f <_ZN20CDungeonExpStatistic14InsertDatabaseEv+0x20f>
 860f304:	89 d3                	mov    %edx,%ebx
 860f306:	89 c6                	mov    %eax,%esi
 860f308:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f30b:	89 04 24             	mov    %eax,(%esp)
 860f30e:	e8 bf d5 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860f313:	89 f0                	mov    %esi,%eax
 860f315:	89 da                	mov    %ebx,%edx
 860f317:	89 04 24             	mov    %eax,(%esp)
 860f31a:	e8 31 44 4d 00       	call   8ae3750 <_Unwind_Resume>
 860f31f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f322:	89 04 24             	mov    %eax,(%esp)
 860f325:	e8 a8 d5 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860f32a:	eb 01                	jmp    860f32d <_ZN20CDungeonExpStatistic14InsertDatabaseEv+0x21d>
 860f32c:	90                   	nop
 860f32d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860f330:	83 c4 00             	add    $0x0,%esp
 860f333:	5b                   	pop    %ebx
 860f334:	5e                   	pop    %esi
 860f335:	5d                   	pop    %ebp
 860f336:	c3                   	ret

```

```c
// CDungeonExpStatistic::InsertDatabase @ 0x860f110

/* CDungeonExpStatistic::InsertDatabase() */

void __thiscall CDungeonExpStatistic::InsertDatabase(CDungeonExpStatistic *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int *piVar5;
  int iVar6;
  map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
  local_40 [4];
  map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
  local_3c [4];
  CStreamGuard local_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  iVar2 = std::
          map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
          ::size((map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
                  *)this);
  if (iVar2 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x59c);
    CStreamGuard::CStreamGuard(local_38,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 0860f17a to 0860f301 has its CatchHandler @ 0860f304 */
    CStreamGuard::operator<<(pCVar4,0x116);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar2 = std::
            map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
            ::size((map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
                    *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar4,iVar2);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::begin(local_3c);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::end(local_40);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c,(_Rb_tree_iterator *)local_40);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
                      operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                                  *)local_3c);
      iVar2 = *piVar5;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar6 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c);
      iVar2 = *(int *)(iVar6 + 4);
      local_2c = *(undefined4 *)(iVar6 + 8);
      local_28 = *(undefined4 *)(iVar6 + 0xc);
      local_30 = iVar2;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar6 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c);
      local_24 = *(undefined4 *)(iVar6 + 4);
      iVar2 = *(int *)(iVar6 + 8);
      local_1c = *(undefined4 *)(iVar6 + 0xc);
      local_20 = iVar2;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_3c);
      local_18 = *(undefined4 *)(iVar2 + 4);
      local_14 = *(undefined4 *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 0xc);
      local_10 = iVar2;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar4,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>> *)
                 local_3c);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_38);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::clear((map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_38);
  }
  return;
}

```

