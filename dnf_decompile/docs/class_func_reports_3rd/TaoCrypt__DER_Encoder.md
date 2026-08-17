# TaoCrypt__DER_Encoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SetAlgoID

```asm
// === 08754700 TaoCrypt::DER_Encoder::SetAlgoID  [0x08754700-0x875482f] ===
 8754700:	55                   	push   %ebp
 8754701:	89 e5                	mov    %esp,%ebp
 8754703:	83 ec 48             	sub    $0x48,%esp
 8754706:	8b 45 0c             	mov    0xc(%ebp),%eax
 8754709:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875470c:	e8 e7 e6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8754711:	81 c3 87 84 c1 00    	add    $0xc18487,%ebx
 8754717:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875471a:	3d 86 02 00 00       	cmp    $0x286,%eax
 875471f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8754722:	0f 84 f0 00 00 00    	je     8754818 <_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh+0x118>
 8754728:	3d 89 02 00 00       	cmp    $0x289,%eax
 875472d:	0f 84 cd 00 00 00    	je     8754800 <_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh+0x100>
 8754733:	83 f8 58             	cmp    $0x58,%eax
 8754736:	74 20                	je     8754758 <_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh+0x58>
 8754738:	8b 45 08             	mov    0x8(%ebp),%eax
 875473b:	c7 40 04 0a 04 00 00 	movl   $0x40a,0x4(%eax)
 8754742:	31 c0                	xor    %eax,%eax
 8754744:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8754747:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875474a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875474d:	89 ec                	mov    %ebp,%esp
 875474f:	5d                   	pop    %ebp
 8754750:	c3                   	ret
 8754751:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8754758:	8d 93 52 86 99 ff    	lea    -0x6679ae(%ebx),%edx
 875475e:	be 07 00 00 00       	mov    $0x7,%esi
 8754763:	b8 05 00 00 00       	mov    $0x5,%eax
 8754768:	89 55 d0             	mov    %edx,-0x30(%ebp)
 875476b:	8d 4d e3             	lea    -0x1d(%ebp),%ecx
 875476e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8754772:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 8754775:	89 04 24             	mov    %eax,(%esp)
 8754778:	e8 63 fd ff ff       	call   87544e0 <_ZN8TaoCrypt9SetLengthEjPh>
 875477d:	8d 55 dd             	lea    -0x23(%ebp),%edx
 8754780:	89 54 24 04          	mov    %edx,0x4(%esp)
 8754784:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8754787:	89 c7                	mov    %eax,%edi
 8754789:	8d 44 06 01          	lea    0x1(%esi,%eax,1),%eax
 875478d:	89 04 24             	mov    %eax,(%esp)
 8754790:	e8 db fd ff ff       	call   8754570 <_ZN8TaoCrypt11SetSequenceEjPh>
 8754795:	c6 44 05 dd 06       	movb   $0x6,-0x23(%ebp,%eax,1)
 875479a:	83 c0 01             	add    $0x1,%eax
 875479d:	8b 55 c8             	mov    -0x38(%ebp),%edx
 87547a0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87547a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 87547a7:	8b 45 10             	mov    0x10(%ebp),%eax
 87547aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 87547ae:	89 04 24             	mov    %eax,(%esp)
 87547b1:	e8 ea 90 92 ff       	call   807d8a0 <memcpy@plt>
 87547b6:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87547b9:	8b 45 10             	mov    0x10(%ebp),%eax
 87547bc:	03 45 d4             	add    -0x2c(%ebp),%eax
 87547bf:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87547c3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87547c7:	89 04 24             	mov    %eax,(%esp)
 87547ca:	e8 d1 90 92 ff       	call   807d8a0 <memcpy@plt>
 87547cf:	8b 45 10             	mov    0x10(%ebp),%eax
 87547d2:	03 7d d4             	add    -0x2c(%ebp),%edi
 87547d5:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87547d8:	89 74 24 08          	mov    %esi,0x8(%esp)
 87547dc:	01 f8                	add    %edi,%eax
 87547de:	89 04 24             	mov    %eax,(%esp)
 87547e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 87547e5:	e8 b6 90 92 ff       	call   807d8a0 <memcpy@plt>
 87547ea:	8d 04 37             	lea    (%edi,%esi,1),%eax
 87547ed:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87547f0:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87547f3:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87547f6:	89 ec                	mov    %ebp,%esp
 87547f8:	5d                   	pop    %ebp
 87547f9:	c3                   	ret
 87547fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8754800:	8d 93 48 86 99 ff    	lea    -0x6679b8(%ebx),%edx
 8754806:	be 0a 00 00 00       	mov    $0xa,%esi
 875480b:	b8 08 00 00 00       	mov    $0x8,%eax
 8754810:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8754813:	e9 53 ff ff ff       	jmp    875476b <_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh+0x6b>
 8754818:	8d 93 3e 86 99 ff    	lea    -0x6679c2(%ebx),%edx
 875481e:	be 0a 00 00 00       	mov    $0xa,%esi
 8754823:	b8 08 00 00 00       	mov    $0x8,%eax
 8754828:	89 55 d0             	mov    %edx,-0x30(%ebp)
 875482b:	e9 3b ff ff ff       	jmp    875476b <_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh+0x6b>

```

```c
// TaoCrypt::DER_Encoder::SetAlgoID @ 0x8754700

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DER_Encoder::SetAlgoID(TaoCrypt::HashType, unsigned char*) */

int __thiscall TaoCrypt::DER_Encoder::SetAlgoID(DER_Encoder *this,int param_2,void *param_3)

{
  uint uVar1;
  size_t __n;
  int iVar2;
  size_t __n_00;
  size_t __n_01;
  undefined7 *local_34;
  uchar local_27 [6];
  uchar local_21 [17];
  
  if (param_2 == 0x286) {
    __n_01 = 10;
    uVar1 = 8;
    local_34 = (undefined7 *)SetAlgoID(TaoCrypt::HashType,unsigned_char*)::md2AlgoID;
  }
  else if (param_2 == 0x289) {
    local_34 = (undefined7 *)SetAlgoID(TaoCrypt::HashType,unsigned_char*)::md5AlgoID;
    __n_01 = 10;
    uVar1 = 8;
  }
  else {
    if (param_2 != 0x58) {
      *(undefined4 *)(this + 4) = 0x40a;
      return 0;
    }
    local_34 = &SetAlgoID(TaoCrypt::HashType,unsigned_char*)::shaAlgoID;
    __n_01 = 7;
    uVar1 = 5;
  }
  __n = SetLength(uVar1,local_21);
  iVar2 = SetSequence(__n_01 + 1 + __n,local_27);
  local_27[iVar2] = '\x06';
  __n_00 = iVar2 + 1;
  memcpy(param_3,local_27,__n_00);
  memcpy((void *)((int)param_3 + __n_00),local_21,__n);
  memcpy((void *)((int)param_3 + __n + __n_00),local_34,__n_01);
  return __n + __n_00 + __n_01;
}

```

