# CLevelDungeonPlayStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## IncreaseLevelDungeonPlay

```asm
// === 0860ecc6 CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay  [0x0860ecc6-0x860edf3] ===
 860ecc6:	55                   	push   %ebp
 860ecc7:	89 e5                	mov    %esp,%ebp
 860ecc9:	53                   	push   %ebx
 860ecca:	83 ec 64             	sub    $0x64,%esp
 860eccd:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ecd0:	85 c0                	test   %eax,%eax
 860ecd2:	7e 0a                	jle    860ecde <_ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii+0x18>
 860ecd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ecd7:	3d c8 00 00 00       	cmp    $0xc8,%eax
 860ecdc:	7e 42                	jle    860ed20 <_ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii+0x5a>
 860ecde:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 860ece1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 860ece8:	00 
 860ece9:	c7 44 24 08 50 05 00 	movl   $0x550,0x8(%esp)
 860ecf0:	00 
 860ecf1:	c7 44 24 04 a0 11 ce 	movl   $0x8ce11a0,0x4(%esp)
 860ecf8:	08 
 860ecf9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860ecfc:	89 04 24             	mov    %eax,(%esp)
 860ecff:	e8 14 0a f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 860ed04:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860ed08:	c7 44 24 04 38 03 ce 	movl   $0x8ce0338,0x4(%esp)
 860ed0f:	08 
 860ed10:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860ed13:	89 04 24             	mov    %eax,(%esp)
 860ed16:	e8 6d 0a f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 860ed1b:	e9 cf 00 00 00       	jmp    860edef <_ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii+0x129>
 860ed20:	8b 55 08             	mov    0x8(%ebp),%edx
 860ed23:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860ed26:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 860ed29:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860ed2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ed31:	89 04 24             	mov    %eax,(%esp)
 860ed34:	e8 ef 29 00 00       	call   8611728 <_ZNSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 860ed39:	83 ec 04             	sub    $0x4,%esp
 860ed3c:	8b 55 08             	mov    0x8(%ebp),%edx
 860ed3f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860ed42:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ed46:	89 04 24             	mov    %eax,(%esp)
 860ed49:	e8 06 2a 00 00       	call   8611754 <_ZNSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 860ed4e:	83 ec 04             	sub    $0x4,%esp
 860ed51:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860ed54:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ed58:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860ed5b:	89 04 24             	mov    %eax,(%esp)
 860ed5e:	e8 17 2a 00 00       	call   861177a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEEeqERKS5_>
 860ed63:	84 c0                	test   %al,%al
 860ed65:	74 59                	je     860edc0 <_ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii+0xfa>
 860ed67:	8b 45 10             	mov    0x10(%ebp),%eax
 860ed6a:	89 45 b8             	mov    %eax,-0x48(%ebp)
 860ed6d:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 860ed74:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860ed77:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 860ed7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 860ed7e:	8d 55 0c             	lea    0xc(%ebp),%edx
 860ed81:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ed85:	89 04 24             	mov    %eax,(%esp)
 860ed88:	e8 01 2a 00 00       	call   861178e <_ZSt9make_pairIRiRN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 860ed8d:	83 ec 04             	sub    $0x4,%esp
 860ed90:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860ed93:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ed97:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860ed9a:	89 04 24             	mov    %eax,(%esp)
 860ed9d:	e8 2a 2a 00 00       	call   86117cc <_ZNSt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEC1IiS2_EEOS_IT_T0_E>
 860eda2:	8b 55 08             	mov    0x8(%ebp),%edx
 860eda5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860eda8:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 860edab:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860edaf:	89 54 24 04          	mov    %edx,0x4(%esp)
 860edb3:	89 04 24             	mov    %eax,(%esp)
 860edb6:	e8 47 2a 00 00       	call   8611802 <_ZNSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 860edbb:	83 ec 04             	sub    $0x4,%esp
 860edbe:	eb 2f                	jmp    860edef <_ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii+0x129>
 860edc0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860edc3:	89 04 24             	mov    %eax,(%esp)
 860edc6:	e8 63 2a 00 00       	call   861182e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEEptEv>
 860edcb:	83 c0 04             	add    $0x4,%eax
 860edce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860edd1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860edd4:	8b 40 04             	mov    0x4(%eax),%eax
 860edd7:	89 c2                	mov    %eax,%edx
 860edd9:	03 55 10             	add    0x10(%ebp),%edx
 860eddc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860eddf:	89 50 04             	mov    %edx,0x4(%eax)
 860ede2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860ede5:	8b 00                	mov    (%eax),%eax
 860ede7:	8d 50 01             	lea    0x1(%eax),%edx
 860edea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860eded:	89 10                	mov    %edx,(%eax)
 860edef:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 860edf2:	c9                   	leave
 860edf3:	c3                   	ret

```

```c
// CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay @ 0x860ecc6

/* CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(int, int) */

void __thiscall
CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay
          (CLevelDungeonPlayStatistic *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator local_48 [4];
  cMyTrace local_44 [16];
  map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
  local_34 [4];
  pair local_30 [8];
  pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo> local_28 [12];
  int local_1c [5];
  
  iVar2 = param_1;
  if ((param_1 < 1) || (200 < param_1)) {
    cMyTrace::cMyTrace(local_44,
                       "void CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(int, int)",0x550,0
                      );
    cMyTrace::operator()(local_44,"LEVEL_DUNGEON_PLAY_STATISTIC wrong level(%d)",iVar2);
  }
  else {
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::find((int *)local_48);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::end(local_34);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>::
            operator==((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                        *)local_34,local_48);
    if (cVar1 == '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_48);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_2;
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    else {
      std::make_pair<int&,CLevelDungeonPlayStatistic::stDungeonPlayInfo&>
                (local_1c,(stDungeonPlayInfo *)&param_1);
      std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>::
      pair<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo>(local_28,(pair *)local_1c);
      std::
      map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
      ::insert(local_30);
    }
  }
  return;
}

```

---

## InsertDatabase

```asm
// === 0860edf4 CLevelDungeonPlayStatistic::InsertDatabase  [0x0860edf4-0x860efc9] ===
 860edf4:	55                   	push   %ebp
 860edf5:	89 e5                	mov    %esp,%ebp
 860edf7:	56                   	push   %esi
 860edf8:	53                   	push   %ebx
 860edf9:	83 ec 20             	sub    $0x20,%esp
 860edfc:	8b 45 08             	mov    0x8(%ebp),%eax
 860edff:	89 04 24             	mov    %eax,(%esp)
 860ee02:	e8 35 2a 00 00       	call   861183c <_ZNKSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 860ee07:	85 c0                	test   %eax,%eax
 860ee09:	0f 94 c0             	sete   %al
 860ee0c:	84 c0                	test   %al,%al
 860ee0e:	0f 85 ab 01 00 00    	jne    860efbf <_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv+0x1cb>
 860ee14:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860ee19:	c7 44 24 08 69 05 00 	movl   $0x569,0x8(%esp)
 860ee20:	00 
 860ee21:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860ee28:	08 
 860ee29:	89 04 24             	mov    %eax,(%esp)
 860ee2c:	e8 55 0c c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860ee31:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860ee38:	00 
 860ee39:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ee3d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ee40:	89 04 24             	mov    %eax,(%esp)
 860ee43:	e8 de 9d ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860ee48:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ee4b:	89 04 24             	mov    %eax,(%esp)
 860ee4e:	e8 f3 9d ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ee53:	c7 44 24 04 07 01 00 	movl   $0x107,0x4(%esp)
 860ee5a:	00 
 860ee5b:	89 04 24             	mov    %eax,(%esp)
 860ee5e:	e8 f3 9d ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ee63:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ee66:	89 04 24             	mov    %eax,(%esp)
 860ee69:	e8 d8 9d ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ee6e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860ee75:	ff 
 860ee76:	89 04 24             	mov    %eax,(%esp)
 860ee79:	e8 d8 9d ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ee7e:	8b 45 08             	mov    0x8(%ebp),%eax
 860ee81:	89 04 24             	mov    %eax,(%esp)
 860ee84:	e8 b3 29 00 00       	call   861183c <_ZNKSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 860ee89:	89 c3                	mov    %eax,%ebx
 860ee8b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ee8e:	89 04 24             	mov    %eax,(%esp)
 860ee91:	e8 b0 9d ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ee96:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ee9a:	89 04 24             	mov    %eax,(%esp)
 860ee9d:	e8 b4 9d ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860eea2:	8b 55 08             	mov    0x8(%ebp),%edx
 860eea5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860eea8:	89 54 24 04          	mov    %edx,0x4(%esp)
 860eeac:	89 04 24             	mov    %eax,(%esp)
 860eeaf:	e8 9c 29 00 00       	call   8611850 <_ZNSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 860eeb4:	83 ec 04             	sub    $0x4,%esp
 860eeb7:	8b 55 08             	mov    0x8(%ebp),%edx
 860eeba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860eebd:	89 54 24 04          	mov    %edx,0x4(%esp)
 860eec1:	89 04 24             	mov    %eax,(%esp)
 860eec4:	e8 8b 28 00 00       	call   8611754 <_ZNSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 860eec9:	83 ec 04             	sub    $0x4,%esp
 860eecc:	e9 83 00 00 00       	jmp    860ef54 <_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv+0x160>
 860eed1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860eed4:	89 04 24             	mov    %eax,(%esp)
 860eed7:	e8 52 29 00 00       	call   861182e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEEptEv>
 860eedc:	8b 18                	mov    (%eax),%ebx
 860eede:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860eee1:	89 04 24             	mov    %eax,(%esp)
 860eee4:	e8 5d 9d ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860eee9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860eeed:	89 04 24             	mov    %eax,(%esp)
 860eef0:	e8 61 9d ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860eef5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860eef8:	89 04 24             	mov    %eax,(%esp)
 860eefb:	e8 2e 29 00 00       	call   861182e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEEptEv>
 860ef00:	8b 50 08             	mov    0x8(%eax),%edx
 860ef03:	8b 40 04             	mov    0x4(%eax),%eax
 860ef06:	89 c3                	mov    %eax,%ebx
 860ef08:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ef0b:	89 04 24             	mov    %eax,(%esp)
 860ef0e:	e8 33 9d ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ef13:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ef17:	89 04 24             	mov    %eax,(%esp)
 860ef1a:	e8 37 9d ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ef1f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ef22:	89 04 24             	mov    %eax,(%esp)
 860ef25:	e8 04 29 00 00       	call   861182e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEEptEv>
 860ef2a:	8b 50 08             	mov    0x8(%eax),%edx
 860ef2d:	8b 40 04             	mov    0x4(%eax),%eax
 860ef30:	89 d3                	mov    %edx,%ebx
 860ef32:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ef35:	89 04 24             	mov    %eax,(%esp)
 860ef38:	e8 09 9d ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ef3d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ef41:	89 04 24             	mov    %eax,(%esp)
 860ef44:	e8 0d 9d ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ef49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ef4c:	89 04 24             	mov    %eax,(%esp)
 860ef4f:	e8 36 29 00 00       	call   861188a <_ZNSt17_Rb_tree_iteratorISt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEEppEv>
 860ef54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860ef57:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ef5b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860ef5e:	89 04 24             	mov    %eax,(%esp)
 860ef61:	e8 10 29 00 00       	call   8611876 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoEEEneERKS5_>
 860ef66:	84 c0                	test   %al,%al
 860ef68:	0f 85 63 ff ff ff    	jne    860eed1 <_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv+0xdd>
 860ef6e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860ef73:	8d 55 f0             	lea    -0x10(%ebp),%edx
 860ef76:	89 54 24 08          	mov    %edx,0x8(%esp)
 860ef7a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860ef81:	00 
 860ef82:	89 04 24             	mov    %eax,(%esp)
 860ef85:	e8 54 20 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860ef8a:	8b 45 08             	mov    0x8(%ebp),%eax
 860ef8d:	89 04 24             	mov    %eax,(%esp)
 860ef90:	e8 13 29 00 00       	call   86118a8 <_ZNSt3mapIiN26CLevelDungeonPlayStatistic17stDungeonPlayInfoESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 860ef95:	eb 1b                	jmp    860efb2 <_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv+0x1be>
 860ef97:	89 d3                	mov    %edx,%ebx
 860ef99:	89 c6                	mov    %eax,%esi
 860ef9b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860ef9e:	89 04 24             	mov    %eax,(%esp)
 860efa1:	e8 2c d9 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860efa6:	89 f0                	mov    %esi,%eax
 860efa8:	89 da                	mov    %ebx,%edx
 860efaa:	89 04 24             	mov    %eax,(%esp)
 860efad:	e8 9e 47 4d 00       	call   8ae3750 <_Unwind_Resume>
 860efb2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860efb5:	89 04 24             	mov    %eax,(%esp)
 860efb8:	e8 15 d9 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860efbd:	eb 01                	jmp    860efc0 <_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv+0x1cc>
 860efbf:	90                   	nop
 860efc0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860efc3:	83 c4 00             	add    $0x0,%esp
 860efc6:	5b                   	pop    %ebx
 860efc7:	5e                   	pop    %esi
 860efc8:	5d                   	pop    %ebp
 860efc9:	c3                   	ret

```

```c
// CLevelDungeonPlayStatistic::InsertDatabase @ 0x860edf4

/* CLevelDungeonPlayStatistic::InsertDatabase() */

void __thiscall CLevelDungeonPlayStatistic::InsertDatabase(CLevelDungeonPlayStatistic *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int *piVar5;
  map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
  local_1c [4];
  map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
  local_18 [4];
  CStreamGuard local_14 [8];
  
  iVar2 = std::
          map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
          ::size((map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
                  *)this);
  if (iVar2 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x569);
    CStreamGuard::CStreamGuard(local_14,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860ee5e to 0860ef94 has its CatchHandler @ 0860ef97 */
    CStreamGuard::operator<<(pCVar4,0x107);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar2 = std::
            map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
            ::size((map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
                    *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,iVar2);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::begin(local_18);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::end(local_1c);
    while( true ) {
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_18,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                                    *)local_18);
      iVar2 = *piVar5;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_18);
      iVar2 = *(int *)(iVar2 + 4);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_18);
      iVar2 = *(int *)(iVar2 + 8);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>::
      operator++((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                  *)local_18);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::clear((map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}

```

