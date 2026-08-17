# game_master__CGrowhWeaponEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b293c game_master::CGrowhWeaponEvent::execute  [0x084b293c-0x84b2a01] ===
 84b293c:	55                   	push   %ebp
 84b293d:	89 e5                	mov    %esp,%ebp
 84b293f:	53                   	push   %ebx
 84b2940:	83 ec 24             	sub    $0x24,%esp
 84b2943:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2946:	89 04 24             	mov    %eax,(%esp)
 84b2949:	e8 6c 16 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b294e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b2951:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84b2955:	0f 84 9f 00 00 00    	je     84b29fa <_ZN11game_master17CGrowhWeaponEvent7executeEv+0xbe>
 84b295b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b295e:	89 04 24             	mov    %eax,(%esp)
 84b2961:	e8 6a f3 1d 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 84b2966:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b2969:	8b 45 08             	mov    0x8(%ebp),%eax
 84b296c:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b2970:	84 c0                	test   %al,%al
 84b2972:	74 42                	je     84b29b6 <_ZN11game_master17CGrowhWeaponEvent7executeEv+0x7a>
 84b2974:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2977:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 84b297e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2981:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84b2988:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b298b:	c6 00 00             	movb   $0x0,(%eax)
 84b298e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2991:	66 c7 40 10 00 00    	movw   $0x0,0x10(%eax)
 84b2997:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b299a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 84b29a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b29a4:	89 04 24             	mov    %eax,(%esp)
 84b29a7:	e8 c2 79 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b29ac:	89 04 24             	mov    %eax,(%esp)
 84b29af:	e8 cc 6f f9 ff       	call   8449980 <_ZN25DB_EventGrowthWeaponReset11makeRequestEj>
 84b29b4:	eb 45                	jmp    84b29fb <_ZN11game_master17CGrowhWeaponEvent7executeEv+0xbf>
 84b29b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b29b9:	8b 40 0c             	mov    0xc(%eax),%eax
 84b29bc:	89 c2                	mov    %eax,%edx
 84b29be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b29c1:	66 89 50 10          	mov    %dx,0x10(%eax)
 84b29c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b29c8:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 84b29cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b29d2:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84b29d6:	0f bf d8             	movswl %ax,%ebx
 84b29d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b29dc:	89 04 24             	mov    %eax,(%esp)
 84b29df:	e8 8a 79 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b29e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b29eb:	00 
 84b29ec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b29f0:	89 04 24             	mov    %eax,(%esp)
 84b29f3:	e8 f2 6d f9 ff       	call   84497ea <_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi>
 84b29f8:	eb 01                	jmp    84b29fb <_ZN11game_master17CGrowhWeaponEvent7executeEv+0xbf>
 84b29fa:	90                   	nop
 84b29fb:	83 c4 24             	add    $0x24,%esp
 84b29fe:	5b                   	pop    %ebx
 84b29ff:	5d                   	pop    %ebp
 84b2a00:	c3                   	ret
 84b2a01:	90                   	nop

```

```c
// game_master::CGrowhWeaponEvent::execute @ 0x84b293c

/* game_master::CGrowhWeaponEvent::execute() */

void __thiscall game_master::CGrowhWeaponEvent::execute(CGrowhWeaponEvent *this)

{
  short sVar1;
  CUser *this_00;
  undefined1 *puVar2;
  uint uVar3;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUser *)0x0) {
    puVar2 = (undefined1 *)CUser::getGrowthWeaponEventdata(this_00);
    if (this[8] == (CGrowhWeaponEvent)0x0) {
      *(short *)(puVar2 + 0x10) = (short)*(undefined4 *)(this + 0xc);
      *(undefined4 *)(puVar2 + 0xc) = 0;
      sVar1 = *(short *)(puVar2 + 0x10);
      uVar3 = CUser::get_acc_id(this_00);
      DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uVar3,sVar1,0);
    }
    else {
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      uVar3 = CUser::get_acc_id(this_00);
      DB_EventGrowthWeaponReset::makeRequest(uVar3);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084b28d6 game_master::CGrowhWeaponEvent::parse  [0x084b28d6-0x84b293b] ===
 84b28d6:	55                   	push   %ebp
 84b28d7:	89 e5                	mov    %esp,%ebp
 84b28d9:	83 ec 18             	sub    $0x18,%esp
 84b28dc:	8b 45 08             	mov    0x8(%ebp),%eax
 84b28df:	8b 40 04             	mov    0x4(%eax),%eax
 84b28e2:	83 c0 0c             	add    $0xc,%eax
 84b28e5:	89 04 24             	mov    %eax,(%esp)
 84b28e8:	e8 7b c7 de ff       	call   829f068 <_Z4trimRSs>
 84b28ed:	8b 45 08             	mov    0x8(%ebp),%eax
 84b28f0:	8b 40 04             	mov    0x4(%eax),%eax
 84b28f3:	83 c0 0c             	add    $0xc,%eax
 84b28f6:	c7 44 24 04 da 03 c8 	movl   $0x8c803da,0x4(%esp)
 84b28fd:	08 
 84b28fe:	89 04 24             	mov    %eax,(%esp)
 84b2901:	e8 9b e0 bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b2906:	84 c0                	test   %al,%al
 84b2908:	74 09                	je     84b2913 <_ZN11game_master17CGrowhWeaponEvent5parseEv+0x3d>
 84b290a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b290d:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 84b2911:	eb 26                	jmp    84b2939 <_ZN11game_master17CGrowhWeaponEvent5parseEv+0x63>
 84b2913:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2916:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 84b291a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b291d:	8b 40 04             	mov    0x4(%eax),%eax
 84b2920:	83 c0 0c             	add    $0xc,%eax
 84b2923:	89 04 24             	mov    %eax,(%esp)
 84b2926:	e8 c5 3b 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b292b:	89 04 24             	mov    %eax,(%esp)
 84b292e:	e8 bd bd bc ff       	call   807e6f0 <atoi@plt>
 84b2933:	8b 55 08             	mov    0x8(%ebp),%edx
 84b2936:	89 42 0c             	mov    %eax,0xc(%edx)
 84b2939:	c9                   	leave
 84b293a:	c3                   	ret
 84b293b:	90                   	nop

```

```c
// game_master::CGrowhWeaponEvent::parse @ 0x84b28d6

/* game_master::CGrowhWeaponEvent::parse() */

void __thiscall game_master::CGrowhWeaponEvent::parse(CGrowhWeaponEvent *this)

{
  bool bVar1;
  char *__nptr;
  int iVar2;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  bVar1 = std::operator==((string *)(*(int *)(this + 4) + 0xc),"gw");
  if (bVar1) {
    this[8] = (CGrowhWeaponEvent)0x1;
  }
  else {
    this[8] = (CGrowhWeaponEvent)0x0;
    __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
    iVar2 = atoi(__nptr);
    *(int *)(this + 0xc) = iVar2;
  }
  return;
}

```

