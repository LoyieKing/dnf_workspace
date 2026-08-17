# Inter_ChangeLetterStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d18ac Inter_ChangeLetterStat::dispatch_sig  [0x084d18ac-0x84d1ab5] ===
 84d18ac:	55                   	push   %ebp
 84d18ad:	89 e5                	mov    %esp,%ebp
 84d18af:	56                   	push   %esi
 84d18b0:	53                   	push   %ebx
 84d18b1:	83 ec 20             	sub    $0x20,%esp
 84d18b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d18b7:	89 04 24             	mov    %eax,(%esp)
 84d18ba:	e8 cd 8a c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d18bf:	83 f8 02             	cmp    $0x2,%eax
 84d18c2:	0f 9e c0             	setle  %al
 84d18c5:	84 c0                	test   %al,%al
 84d18c7:	74 0a                	je     84d18d3 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x27>
 84d18c9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d18ce:	e9 da 01 00 00       	jmp    84d1aad <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x201>
 84d18d3:	8b 45 10             	mov    0x10(%ebp),%eax
 84d18d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d18d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d18dc:	89 04 24             	mov    %eax,(%esp)
 84d18df:	e8 4e eb c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d18e4:	85 c0                	test   %eax,%eax
 84d18e6:	74 14                	je     84d18fc <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x50>
 84d18e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d18eb:	89 04 24             	mov    %eax,(%esp)
 84d18ee:	e8 5b a3 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d18f3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d18f6:	8b 12                	mov    (%edx),%edx
 84d18f8:	39 d0                	cmp    %edx,%eax
 84d18fa:	74 07                	je     84d1903 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x57>
 84d18fc:	b8 01 00 00 00       	mov    $0x1,%eax
 84d1901:	eb 05                	jmp    84d1908 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x5c>
 84d1903:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1908:	84 c0                	test   %al,%al
 84d190a:	74 0a                	je     84d1916 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x6a>
 84d190c:	bb a2 30 00 00       	mov    $0x30a2,%ebx
 84d1911:	e9 97 01 00 00       	jmp    84d1aad <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x201>
 84d1916:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1919:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84d191d:	66 83 f8 03          	cmp    $0x3,%ax
 84d1921:	75 4a                	jne    84d196d <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0xc1>
 84d1923:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1926:	89 04 24             	mov    %eax,(%esp)
 84d1929:	e8 de e8 d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d192e:	85 c0                	test   %eax,%eax
 84d1930:	0f 95 c0             	setne  %al
 84d1933:	84 c0                	test   %al,%al
 84d1935:	0f 84 89 00 00 00    	je     84d19c4 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x118>
 84d193b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d193e:	8b 58 04             	mov    0x4(%eax),%ebx
 84d1941:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1944:	89 04 24             	mov    %eax,(%esp)
 84d1947:	e8 c0 e8 d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d194c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d1950:	89 04 24             	mov    %eax,(%esp)
 84d1953:	e8 ca b8 01 00       	call   84ed222 <_ZN8WongWork8CMailBox21InsertLetterKeepCountEj>
 84d1958:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d195b:	89 04 24             	mov    %eax,(%esp)
 84d195e:	e8 a9 e8 d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d1963:	89 04 24             	mov    %eax,(%esp)
 84d1966:	e8 91 b9 01 00       	call   84ed2fc <_ZN8WongWork8CMailBox20DecLoadedLetterCountEv>
 84d196b:	eb 57                	jmp    84d19c4 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x118>
 84d196d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1970:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84d1974:	66 85 c0             	test   %ax,%ax
 84d1977:	75 4b                	jne    84d19c4 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x118>
 84d1979:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d197c:	89 04 24             	mov    %eax,(%esp)
 84d197f:	e8 88 e8 d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d1984:	85 c0                	test   %eax,%eax
 84d1986:	0f 95 c0             	setne  %al
 84d1989:	84 c0                	test   %al,%al
 84d198b:	74 37                	je     84d19c4 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x118>
 84d198d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1990:	8b 58 04             	mov    0x4(%eax),%ebx
 84d1993:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1996:	89 04 24             	mov    %eax,(%esp)
 84d1999:	e8 6e e8 d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d199e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d19a2:	89 04 24             	mov    %eax,(%esp)
 84d19a5:	e8 d6 b8 01 00       	call   84ed280 <_ZN8WongWork8CMailBox21DeleteLetterKeepCountEj>
 84d19aa:	83 f0 01             	xor    $0x1,%eax
 84d19ad:	84 c0                	test   %al,%al
 84d19af:	74 13                	je     84d19c4 <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x118>
 84d19b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d19b4:	89 04 24             	mov    %eax,(%esp)
 84d19b7:	e8 50 e8 d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d19bc:	89 04 24             	mov    %eax,(%esp)
 84d19bf:	e8 38 b9 01 00       	call   84ed2fc <_ZN8WongWork8CMailBox20DecLoadedLetterCountEv>
 84d19c4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d19c7:	89 04 24             	mov    %eax,(%esp)
 84d19ca:	e8 7d c3 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d19cf:	c7 44 24 08 89 00 00 	movl   $0x89,0x8(%esp)
 84d19d6:	00 
 84d19d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d19de:	00 
 84d19df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d19e2:	89 04 24             	mov    %eax,(%esp)
 84d19e5:	e8 12 9f bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d19ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d19ed:	8b 40 04             	mov    0x4(%eax),%eax
 84d19f0:	85 c0                	test   %eax,%eax
 84d19f2:	75 28                	jne    84d1a1c <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x170>
 84d19f4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d19fb:	00 
 84d19fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d19ff:	89 04 24             	mov    %eax,(%esp)
 84d1a02:	e8 19 9f bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1a07:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d1a0e:	00 
 84d1a0f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a12:	89 04 24             	mov    %eax,(%esp)
 84d1a15:	e8 06 9f bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1a1a:	eb 3f                	jmp    84d1a5b <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x1af>
 84d1a1c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1a23:	00 
 84d1a24:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a27:	89 04 24             	mov    %eax,(%esp)
 84d1a2a:	e8 f1 9e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1a2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1a32:	8b 40 04             	mov    0x4(%eax),%eax
 84d1a35:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1a39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a3c:	89 04 24             	mov    %eax,(%esp)
 84d1a3f:	e8 f8 9e bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d1a44:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1a47:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84d1a4b:	98                   	cwtl
 84d1a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1a50:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a53:	89 04 24             	mov    %eax,(%esp)
 84d1a56:	e8 49 84 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d1a5b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1a62:	00 
 84d1a63:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a66:	89 04 24             	mov    %eax,(%esp)
 84d1a69:	e8 ea 9e bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d1a6e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a71:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1a75:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1a78:	89 04 24             	mov    %eax,(%esp)
 84d1a7b:	e8 3a 6b 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d1a80:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d1a85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a88:	89 04 24             	mov    %eax,(%esp)
 84d1a8b:	e8 f0 c3 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1a90:	eb 1b                	jmp    84d1aad <_ZN22Inter_ChangeLetterStat12dispatch_sigEP5CUserPci+0x201>
 84d1a92:	89 d3                	mov    %edx,%ebx
 84d1a94:	89 c6                	mov    %eax,%esi
 84d1a96:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1a99:	89 04 24             	mov    %eax,(%esp)
 84d1a9c:	e8 df c3 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1aa1:	89 f0                	mov    %esi,%eax
 84d1aa3:	89 da                	mov    %ebx,%edx
 84d1aa5:	89 04 24             	mov    %eax,(%esp)
 84d1aa8:	e8 a3 1c 61 00       	call   8ae3750 <_Unwind_Resume>
 84d1aad:	89 d8                	mov    %ebx,%eax
 84d1aaf:	83 c4 20             	add    $0x20,%esp
 84d1ab2:	5b                   	pop    %ebx
 84d1ab3:	5e                   	pop    %esi
 84d1ab4:	5d                   	pop    %ebp
 84d1ab5:	c3                   	ret

```

```c
// Inter_ChangeLetterStat::dispatch_sig @ 0x84d18ac

/* Inter_ChangeLetterStat::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ChangeLetterStat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CMailBox *pCVar5;
  undefined4 uVar6;
  PacketGuard local_1c [12];
  int *local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    local_10 = (int *)param_3;
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if ((iVar3 == 0) ||
       (iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar3 != *local_10)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = 0x30a2;
    }
    else {
      if ((short)local_10[2] == 3) {
        iVar3 = CUser::GetMailBox((CUser *)param_2);
        if (iVar3 != 0) {
          uVar4 = CUser::GetMailBox((CUser *)param_2);
          WongWork::CMailBox::InsertLetterKeepCount(uVar4);
          pCVar5 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
          WongWork::CMailBox::DecLoadedLetterCount(pCVar5);
        }
      }
      else if (((short)local_10[2] == 0) &&
              (iVar3 = CUser::GetMailBox((CUser *)param_2), iVar3 != 0)) {
        uVar4 = local_10[1];
        pCVar5 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
        cVar2 = WongWork::CMailBox::DeleteLetterKeepCount(pCVar5,uVar4);
        if (cVar2 != '\x01') {
          pCVar5 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
          WongWork::CMailBox::DecLoadedLetterCount(pCVar5);
        }
      }
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d19e5 to 084d1a7f has its CatchHandler @ 084d1a92 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x89);
      if (local_10[1] == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_10[1]);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)(short)local_10[2]);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      uVar6 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
    return uVar6;
  }
  return 0;
}

```

