# Inter_MouseRegister

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d07d2 Inter_MouseRegister::dispatch_sig  [0x084d07d2-0x84d09a9] ===
 84d07d2:	55                   	push   %ebp
 84d07d3:	89 e5                	mov    %esp,%ebp
 84d07d5:	56                   	push   %esi
 84d07d6:	53                   	push   %ebx
 84d07d7:	83 ec 20             	sub    $0x20,%esp
 84d07da:	8b 45 10             	mov    0x10(%ebp),%eax
 84d07dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d07e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d07e3:	8b 40 16             	mov    0x16(%eax),%eax
 84d07e6:	85 c0                	test   %eax,%eax
 84d07e8:	0f 85 8f 01 00 00    	jne    84d097d <_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci+0x1ab>
 84d07ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d07f1:	8b 40 04             	mov    0x4(%eax),%eax
 84d07f4:	83 f8 01             	cmp    $0x1,%eax
 84d07f7:	74 0f                	je     84d0808 <_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci+0x36>
 84d07f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d07fc:	8b 40 04             	mov    0x4(%eax),%eax
 84d07ff:	83 f8 02             	cmp    $0x2,%eax
 84d0802:	0f 85 8f 00 00 00    	jne    84d0897 <_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci+0xc5>
 84d0808:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d080b:	89 04 24             	mov    %eax,(%esp)
 84d080e:	e8 1b f5 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d0813:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d081a:	00 
 84d081b:	89 04 24             	mov    %eax,(%esp)
 84d081e:	e8 e5 b5 01 00       	call   84ebe08 <_ZN8Sanicova4CPad11setActivateEb>
 84d0823:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0826:	89 04 24             	mov    %eax,(%esp)
 84d0829:	e8 00 f5 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d082e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0835:	00 
 84d0836:	89 04 24             	mov    %eax,(%esp)
 84d0839:	e8 d0 4a d9 ff       	call   826530e <_ZN8Sanicova4CPad12setCertifiedEb>
 84d083e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0841:	8d 58 23             	lea    0x23(%eax),%ebx
 84d0844:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0847:	89 04 24             	mov    %eax,(%esp)
 84d084a:	e8 df f4 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d084f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d0853:	89 04 24             	mov    %eax,(%esp)
 84d0856:	e8 df 68 db ff       	call   828713a <_ZN8Sanicova4CPad11setPasswordEPc>
 84d085b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d085e:	8b 58 1b             	mov    0x1b(%eax),%ebx
 84d0861:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0864:	89 04 24             	mov    %eax,(%esp)
 84d0867:	e8 c2 f4 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d086c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d0870:	89 04 24             	mov    %eax,(%esp)
 84d0873:	e8 82 b5 01 00       	call   84ebdfa <_ZN8Sanicova4CPad12setCancelCntEi>
 84d0878:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d087b:	8b 58 1f             	mov    0x1f(%eax),%ebx
 84d087e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0881:	89 04 24             	mov    %eax,(%esp)
 84d0884:	e8 a5 f4 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d0889:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d088d:	89 04 24             	mov    %eax,(%esp)
 84d0890:	e8 97 68 db ff       	call   828712c <_ZN8Sanicova4CPad10setFailCntEi>
 84d0895:	eb 5e                	jmp    84d08f5 <_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci+0x123>
 84d0897:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d089a:	8b 40 04             	mov    0x4(%eax),%eax
 84d089d:	83 f8 03             	cmp    $0x3,%eax
 84d08a0:	75 53                	jne    84d08f5 <_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci+0x123>
 84d08a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d08a5:	89 04 24             	mov    %eax,(%esp)
 84d08a8:	e8 81 f4 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d08ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d08b4:	00 
 84d08b5:	89 04 24             	mov    %eax,(%esp)
 84d08b8:	e8 4b b5 01 00       	call   84ebe08 <_ZN8Sanicova4CPad11setActivateEb>
 84d08bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d08c0:	89 04 24             	mov    %eax,(%esp)
 84d08c3:	e8 66 f4 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d08c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d08cf:	00 
 84d08d0:	89 04 24             	mov    %eax,(%esp)
 84d08d3:	e8 36 4a d9 ff       	call   826530e <_ZN8Sanicova4CPad12setCertifiedEb>
 84d08d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d08db:	8d 58 23             	lea    0x23(%eax),%ebx
 84d08de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d08e1:	89 04 24             	mov    %eax,(%esp)
 84d08e4:	e8 45 f4 d5 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84d08e9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d08ed:	89 04 24             	mov    %eax,(%esp)
 84d08f0:	e8 45 68 db ff       	call   828713a <_ZN8Sanicova4CPad11setPasswordEPc>
 84d08f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d08f8:	89 04 24             	mov    %eax,(%esp)
 84d08fb:	e8 4c d4 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d0900:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 84d0907:	00 
 84d0908:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d090f:	00 
 84d0910:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0913:	89 04 24             	mov    %eax,(%esp)
 84d0916:	e8 e1 af bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d091b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0922:	00 
 84d0923:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0926:	89 04 24             	mov    %eax,(%esp)
 84d0929:	e8 f2 af bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d092e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0935:	00 
 84d0936:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0939:	89 04 24             	mov    %eax,(%esp)
 84d093c:	e8 17 b0 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d0941:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0944:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0948:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d094b:	89 04 24             	mov    %eax,(%esp)
 84d094e:	e8 67 7c 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d0953:	eb 1b                	jmp    84d0970 <_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci+0x19e>
 84d0955:	89 d3                	mov    %edx,%ebx
 84d0957:	89 c6                	mov    %eax,%esi
 84d0959:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d095c:	89 04 24             	mov    %eax,(%esp)
 84d095f:	e8 1c d5 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0964:	89 f0                	mov    %esi,%eax
 84d0966:	89 da                	mov    %ebx,%edx
 84d0968:	89 04 24             	mov    %eax,(%esp)
 84d096b:	e8 e0 2d 61 00       	call   8ae3750 <_Unwind_Resume>
 84d0970:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0973:	89 04 24             	mov    %eax,(%esp)
 84d0976:	e8 05 d5 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d097b:	eb 20                	jmp    84d099d <_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci+0x1cb>
 84d097d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0980:	8b 40 16             	mov    0x16(%eax),%eax
 84d0983:	0f b6 c0             	movzbl %al,%eax
 84d0986:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d098a:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 84d0991:	00 
 84d0992:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0995:	89 04 24             	mov    %eax,(%esp)
 84d0998:	e8 a5 b5 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d099d:	b8 00 00 00 00       	mov    $0x0,%eax
 84d09a2:	83 c4 20             	add    $0x20,%esp
 84d09a5:	5b                   	pop    %ebx
 84d09a6:	5e                   	pop    %esi
 84d09a7:	5d                   	pop    %ebp
 84d09a8:	c3                   	ret
 84d09a9:	90                   	nop

```

```c
// Inter_MouseRegister::dispatch_sig @ 0x84d07d2

/* Inter_MouseRegister::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MouseRegister::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  CPad *pCVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(int *)(param_3 + 0x16) == 0) {
    if ((*(int *)(param_3 + 4) == 1) || (*(int *)(param_3 + 4) == 2)) {
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setActivate(pCVar3,true);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCertified(pCVar3,true);
      pcVar1 = (char *)(local_10 + 0x23);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setPassword(pCVar3,pcVar1);
      iVar2 = *(int *)(local_10 + 0x1b);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCancelCnt(pCVar3,iVar2);
      iVar2 = *(int *)(local_10 + 0x1f);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setFailCnt(pCVar3,iVar2);
    }
    else if (*(int *)(param_3 + 4) == 3) {
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setActivate(pCVar3,false);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCertified(pCVar3,false);
      pcVar1 = (char *)(local_10 + 0x23);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setPassword(pCVar3,pcVar1);
    }
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d0916 to 084d0952 has its CatchHandler @ 084d0955 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x74);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x74,*(uint *)(param_3 + 0x16) & 0xff);
  }
  return 0;
}

```

