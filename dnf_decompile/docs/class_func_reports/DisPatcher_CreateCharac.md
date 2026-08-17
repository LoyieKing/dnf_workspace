# DisPatcher_CreateCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081c0830 DisPatcher_CreateCharac::check_error  [0x081c0830-0x81c0a19] ===
 81c0830:	55                   	push   %ebp
 81c0831:	89 e5                	mov    %esp,%ebp
 81c0833:	53                   	push   %ebx
 81c0834:	83 ec 44             	sub    $0x44,%esp
 81c0837:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c083a:	89 04 24             	mov    %eax,(%esp)
 81c083d:	e8 4a 9b f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c0842:	83 f8 02             	cmp    $0x2,%eax
 81c0845:	0f 95 c0             	setne  %al
 81c0848:	84 c0                	test   %al,%al
 81c084a:	74 0a                	je     81c0856 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x26>
 81c084c:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c0851:	e9 bd 01 00 00       	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c0856:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0859:	89 04 24             	mov    %eax,(%esp)
 81c085c:	e8 17 a2 48 00       	call   864aa78 <_ZN5CUser20isLockedDeleteCharacEv>
 81c0861:	84 c0                	test   %al,%al
 81c0863:	74 0a                	je     81c086f <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x3f>
 81c0865:	b8 13 00 00 00       	mov    $0x13,%eax
 81c086a:	e9 a4 01 00 00       	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c086f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0872:	89 04 24             	mov    %eax,(%esp)
 81c0875:	e8 90 a1 48 00       	call   864aa0a <_ZN5CUser17isLocked4DataLoadEv>
 81c087a:	84 c0                	test   %al,%al
 81c087c:	74 0a                	je     81c0888 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x58>
 81c087e:	b8 13 00 00 00       	mov    $0x13,%eax
 81c0883:	e9 8b 01 00 00       	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c0888:	e8 59 1d fa ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81c088d:	c7 44 24 0c 20 00 00 	movl   $0x20,0xc(%esp)
 81c0894:	00 
 81c0895:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c089c:	00 
 81c089d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c08a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c08a4:	89 04 24             	mov    %eax,(%esp)
 81c08a7:	e8 0c de fa ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81c08ac:	84 c0                	test   %al,%al
 81c08ae:	74 0a                	je     81c08ba <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x8a>
 81c08b0:	b8 d1 00 00 00       	mov    $0xd1,%eax
 81c08b5:	e9 59 01 00 00       	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c08ba:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81c08bf:	c7 44 24 04 31 00 00 	movl   $0x31,0x4(%esp)
 81c08c6:	00 
 81c08c7:	89 04 24             	mov    %eax,(%esp)
 81c08ca:	e8 c9 50 f5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81c08cf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c08d2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c08d6:	74 25                	je     81c08fd <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0xcd>
 81c08d8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c08db:	8b 00                	mov    (%eax),%eax
 81c08dd:	83 c0 34             	add    $0x34,%eax
 81c08e0:	8b 10                	mov    (%eax),%edx
 81c08e2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c08e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c08ec:	00 
 81c08ed:	89 04 24             	mov    %eax,(%esp)
 81c08f0:	ff d2                	call   *%edx
 81c08f2:	84 c0                	test   %al,%al
 81c08f4:	74 07                	je     81c08fd <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0xcd>
 81c08f6:	b8 01 00 00 00       	mov    $0x1,%eax
 81c08fb:	eb 05                	jmp    81c0902 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0xd2>
 81c08fd:	b8 00 00 00 00       	mov    $0x0,%eax
 81c0902:	84 c0                	test   %al,%al
 81c0904:	74 2b                	je     81c0931 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x101>
 81c0906:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0909:	89 04 24             	mov    %eax,(%esp)
 81c090c:	e8 d7 f7 06 00       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 81c0911:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0915:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c0918:	89 04 24             	mov    %eax,(%esp)
 81c091b:	e8 9a 34 0b 00       	call   8273dba <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi>
 81c0920:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c0923:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c0927:	74 08                	je     81c0931 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x101>
 81c0929:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c092c:	e9 e2 00 00 00       	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c0931:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0934:	89 04 24             	mov    %eax,(%esp)
 81c0937:	e8 ac f7 06 00       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 81c093c:	89 c3                	mov    %eax,%ebx
 81c093e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0941:	89 04 24             	mov    %eax,(%esp)
 81c0944:	e8 17 ff 06 00       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 81c0949:	0f b6 c0             	movzbl %al,%eax
 81c094c:	39 c3                	cmp    %eax,%ebx
 81c094e:	0f 9d c0             	setge  %al
 81c0951:	84 c0                	test   %al,%al
 81c0953:	74 0a                	je     81c095f <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x12f>
 81c0955:	b8 04 00 00 00       	mov    $0x4,%eax
 81c095a:	e9 b4 00 00 00       	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c095f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0962:	89 04 24             	mov    %eax,(%esp)
 81c0965:	e8 7e f7 06 00       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 81c096a:	83 f8 24             	cmp    $0x24,%eax
 81c096d:	0f 94 c0             	sete   %al
 81c0970:	84 c0                	test   %al,%al
 81c0972:	74 3d                	je     81c09b1 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x181>
 81c0974:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81c097b:	00 
 81c097c:	c7 44 24 08 a0 08 00 	movl   $0x8a0,0x8(%esp)
 81c0983:	00 
 81c0984:	c7 44 24 04 a0 60 bd 	movl   $0x8bd60a0,0x4(%esp)
 81c098b:	08 
 81c098c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c098f:	89 04 24             	mov    %eax,(%esp)
 81c0992:	e8 81 ed 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c0997:	c7 44 24 04 80 14 bc 	movl   $0x8bc1480,0x4(%esp)
 81c099e:	08 
 81c099f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c09a2:	89 04 24             	mov    %eax,(%esp)
 81c09a5:	e8 de ed 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c09aa:	b8 04 00 00 00       	mov    $0x4,%eax
 81c09af:	eb 62                	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c09b1:	8b 45 10             	mov    0x10(%ebp),%eax
 81c09b4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c09b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c09ba:	83 c0 12             	add    $0x12,%eax
 81c09bd:	89 04 24             	mov    %eax,(%esp)
 81c09c0:	e8 a7 23 90 00       	call   8ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>
 81c09c5:	83 f0 01             	xor    $0x1,%eax
 81c09c8:	84 c0                	test   %al,%al
 81c09ca:	74 07                	je     81c09d3 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1a3>
 81c09cc:	b8 9f 00 00 00       	mov    $0x9f,%eax
 81c09d1:	eb 40                	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c09d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c09d6:	83 c0 12             	add    $0x12,%eax
 81c09d9:	89 04 24             	mov    %eax,(%esp)
 81c09dc:	e8 cd e5 0d 00       	call   829efae <_Z16checkSpecialCharPc>
 81c09e1:	84 c0                	test   %al,%al
 81c09e3:	75 12                	jne    81c09f7 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1c7>
 81c09e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c09e8:	83 c0 12             	add    $0x12,%eax
 81c09eb:	89 04 24             	mov    %eax,(%esp)
 81c09ee:	e8 2c e6 0d 00       	call   829f01f <_Z20checkSpecialCharNamePc>
 81c09f3:	84 c0                	test   %al,%al
 81c09f5:	74 07                	je     81c09fe <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1ce>
 81c09f7:	b8 01 00 00 00       	mov    $0x1,%eax
 81c09fc:	eb 05                	jmp    81c0a03 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1d3>
 81c09fe:	b8 00 00 00 00       	mov    $0x0,%eax
 81c0a03:	84 c0                	test   %al,%al
 81c0a05:	74 07                	je     81c0a0e <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1de>
 81c0a07:	b8 9f 00 00 00       	mov    $0x9f,%eax
 81c0a0c:	eb 05                	jmp    81c0a13 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE+0x1e3>
 81c0a0e:	b8 00 00 00 00       	mov    $0x0,%eax
 81c0a13:	83 c4 44             	add    $0x44,%esp
 81c0a16:	5b                   	pop    %ebx
 81c0a17:	5d                   	pop    %ebp
 81c0a18:	c3                   	ret
 81c0a19:	90                   	nop

```

```c
// DisPatcher_CreateCharac::check_error @ 0x81c0830

/* DisPatcher_CreateCharac::check_error(CUser*, MSG_BASE&) */

int __thiscall
DisPatcher_CreateCharac::check_error(DisPatcher_CreateCharac *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ServiceRestrictManager *pSVar4;
  uint uVar5;
  cMyTrace local_38 [32];
  CRestrictCharacCreationEvent *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 2) {
    cVar2 = CUser::isLockedDeleteCharac(param_1);
    if (cVar2 == '\0') {
      cVar2 = CUser::isLocked4DataLoad(param_1);
      if (cVar2 == '\0') {
        pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
        cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,0x20);
        if (cVar2 == '\0') {
          local_18 = (CRestrictCharacCreationEvent *)
                     CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x31);
          if ((local_18 == (CRestrictCharacCreationEvent *)0x0) ||
             (cVar2 = (**(code **)(*(int *)local_18 + 0x34))(local_18,0), cVar2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            iVar3 = CUser::get_charac_count(param_1);
            local_10 = CRestrictCharacCreationEvent::getLimitCreateCharacter(local_18,iVar3);
            if (local_10 != 0) {
              return local_10;
            }
          }
          iVar3 = CUser::get_charac_count(param_1);
          uVar5 = CUser::getCharacSlotLimit(param_1);
          if (iVar3 < (int)(uVar5 & 0xff)) {
            iVar3 = CUser::get_charac_count(param_1);
            if (iVar3 == 0x24) {
              cMyTrace::cMyTrace(local_38,
                                 "int DisPatcher_CreateCharac::check_error(CUser*, MSG_BASE&)",0x8a0
                                 ,5);
              cMyTrace::operator()
                        (local_38,
                         "DisPatcher_CreateCharac pUser->get_charac_count() == MAX_CHARAC_SLOT false"
                        );
              iVar3 = 4;
            }
            else {
              local_14 = param_2;
              cVar2 = restrict_inputting_name::isUtf8StrInUnicodeRange((char *)(param_2 + 0x12));
              if (cVar2 == '\x01') {
                cVar2 = checkSpecialChar((char *)(local_14 + 0x12));
                if ((cVar2 == '\0') &&
                   (cVar2 = checkSpecialCharName((char *)(local_14 + 0x12)), cVar2 == '\0')) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  iVar3 = 0x9f;
                }
                else {
                  iVar3 = 0;
                }
              }
              else {
                iVar3 = 0x9f;
              }
            }
          }
          else {
            iVar3 = 4;
          }
        }
        else {
          iVar3 = 0xd1;
        }
      }
      else {
        iVar3 = 0x13;
      }
    }
    else {
      iVar3 = 0x13;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}

```

---

## makeGift

```asm
// === 081c0a1a DisPatcher_CreateCharac::makeGift  [0x081c0a1a-0x81c0df9] ===
 81c0a1a:	55                   	push   %ebp
 81c0a1b:	89 e5                	mov    %esp,%ebp
 81c0a1d:	53                   	push   %ebx
 81c0a1e:	81 ec e4 00 00 00    	sub    $0xe4,%esp
 81c0a24:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0a27:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c0a2b:	0f be c0             	movsbl %al,%eax
 81c0a2e:	8b 1c c5 80 01 37 09 	mov    0x9370180(,%eax,8),%ebx
 81c0a35:	e8 61 b7 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c0a3a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c0a3e:	89 04 24             	mov    %eax,(%esp)
 81c0a41:	e8 ec ef 19 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81c0a46:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c0a49:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0a4c:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c0a50:	0f be c0             	movsbl %al,%eax
 81c0a53:	01 c0                	add    %eax,%eax
 81c0a55:	83 c0 01             	add    $0x1,%eax
 81c0a58:	8b 1c 85 80 01 37 09 	mov    0x9370180(,%eax,4),%ebx
 81c0a5f:	e8 37 b7 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c0a64:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c0a68:	89 04 24             	mov    %eax,(%esp)
 81c0a6b:	e8 c2 ef 19 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81c0a70:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c0a73:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c0a77:	74 06                	je     81c0a7f <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x65>
 81c0a79:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c0a7d:	75 0f                	jne    81c0a8e <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x74>
 81c0a7f:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0a82:	c6 80 40 53 00 00 00 	movb   $0x0,0x5340(%eax)
 81c0a89:	e9 bf 01 00 00       	jmp    81c0c4d <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x233>
 81c0a8e:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0a91:	c6 80 40 53 00 00 01 	movb   $0x1,0x5340(%eax)
 81c0a98:	8d 45 ab             	lea    -0x55(%ebp),%eax
 81c0a9b:	89 04 24             	mov    %eax,(%esp)
 81c0a9e:	e8 b1 ad f0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81c0aa3:	8d 85 6e ff ff ff    	lea    -0x92(%ebp),%eax
 81c0aa9:	89 04 24             	mov    %eax,(%esp)
 81c0aac:	e8 a3 ad f0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81c0ab1:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0ab4:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c0ab8:	0f be c0             	movsbl %al,%eax
 81c0abb:	8b 04 c5 80 01 37 09 	mov    0x9370180(,%eax,8),%eax
 81c0ac2:	89 45 ad             	mov    %eax,-0x53(%ebp)
 81c0ac5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c0ac8:	8b 00                	mov    (%eax),%eax
 81c0aca:	83 c0 08             	add    $0x8,%eax
 81c0acd:	8b 10                	mov    (%eax),%edx
 81c0acf:	8d 45 ab             	lea    -0x55(%ebp),%eax
 81c0ad2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0ad6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c0ad9:	89 04 24             	mov    %eax,(%esp)
 81c0adc:	ff d2                	call   *%edx
 81c0ade:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0ae1:	8b 55 ab             	mov    -0x55(%ebp),%edx
 81c0ae4:	89 90 7b 4e 00 00    	mov    %edx,0x4e7b(%eax)
 81c0aea:	8b 55 af             	mov    -0x51(%ebp),%edx
 81c0aed:	89 90 7f 4e 00 00    	mov    %edx,0x4e7f(%eax)
 81c0af3:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 81c0af6:	89 90 83 4e 00 00    	mov    %edx,0x4e83(%eax)
 81c0afc:	8b 55 b7             	mov    -0x49(%ebp),%edx
 81c0aff:	89 90 87 4e 00 00    	mov    %edx,0x4e87(%eax)
 81c0b05:	8b 55 bb             	mov    -0x45(%ebp),%edx
 81c0b08:	89 90 8b 4e 00 00    	mov    %edx,0x4e8b(%eax)
 81c0b0e:	8b 55 bf             	mov    -0x41(%ebp),%edx
 81c0b11:	89 90 8f 4e 00 00    	mov    %edx,0x4e8f(%eax)
 81c0b17:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 81c0b1a:	89 90 93 4e 00 00    	mov    %edx,0x4e93(%eax)
 81c0b20:	8b 55 c7             	mov    -0x39(%ebp),%edx
 81c0b23:	89 90 97 4e 00 00    	mov    %edx,0x4e97(%eax)
 81c0b29:	8b 55 cb             	mov    -0x35(%ebp),%edx
 81c0b2c:	89 90 9b 4e 00 00    	mov    %edx,0x4e9b(%eax)
 81c0b32:	8b 55 cf             	mov    -0x31(%ebp),%edx
 81c0b35:	89 90 9f 4e 00 00    	mov    %edx,0x4e9f(%eax)
 81c0b3b:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 81c0b3e:	89 90 a3 4e 00 00    	mov    %edx,0x4ea3(%eax)
 81c0b44:	8b 55 d7             	mov    -0x29(%ebp),%edx
 81c0b47:	89 90 a7 4e 00 00    	mov    %edx,0x4ea7(%eax)
 81c0b4d:	8b 55 db             	mov    -0x25(%ebp),%edx
 81c0b50:	89 90 ab 4e 00 00    	mov    %edx,0x4eab(%eax)
 81c0b56:	8b 55 df             	mov    -0x21(%ebp),%edx
 81c0b59:	89 90 af 4e 00 00    	mov    %edx,0x4eaf(%eax)
 81c0b5f:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 81c0b62:	89 90 b3 4e 00 00    	mov    %edx,0x4eb3(%eax)
 81c0b68:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 81c0b6c:	88 90 b7 4e 00 00    	mov    %dl,0x4eb7(%eax)
 81c0b72:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0b75:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c0b79:	0f be c0             	movsbl %al,%eax
 81c0b7c:	01 c0                	add    %eax,%eax
 81c0b7e:	83 c0 01             	add    $0x1,%eax
 81c0b81:	8b 04 85 80 01 37 09 	mov    0x9370180(,%eax,4),%eax
 81c0b88:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 81c0b8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c0b91:	8b 00                	mov    (%eax),%eax
 81c0b93:	83 c0 08             	add    $0x8,%eax
 81c0b96:	8b 10                	mov    (%eax),%edx
 81c0b98:	8d 85 6e ff ff ff    	lea    -0x92(%ebp),%eax
 81c0b9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0ba2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c0ba5:	89 04 24             	mov    %eax,(%esp)
 81c0ba8:	ff d2                	call   *%edx
 81c0baa:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0bad:	8b 95 6e ff ff ff    	mov    -0x92(%ebp),%edx
 81c0bb3:	89 90 f5 4e 00 00    	mov    %edx,0x4ef5(%eax)
 81c0bb9:	8b 95 72 ff ff ff    	mov    -0x8e(%ebp),%edx
 81c0bbf:	89 90 f9 4e 00 00    	mov    %edx,0x4ef9(%eax)
 81c0bc5:	8b 95 76 ff ff ff    	mov    -0x8a(%ebp),%edx
 81c0bcb:	89 90 fd 4e 00 00    	mov    %edx,0x4efd(%eax)
 81c0bd1:	8b 95 7a ff ff ff    	mov    -0x86(%ebp),%edx
 81c0bd7:	89 90 01 4f 00 00    	mov    %edx,0x4f01(%eax)
 81c0bdd:	8b 95 7e ff ff ff    	mov    -0x82(%ebp),%edx
 81c0be3:	89 90 05 4f 00 00    	mov    %edx,0x4f05(%eax)
 81c0be9:	8b 55 82             	mov    -0x7e(%ebp),%edx
 81c0bec:	89 90 09 4f 00 00    	mov    %edx,0x4f09(%eax)
 81c0bf2:	8b 55 86             	mov    -0x7a(%ebp),%edx
 81c0bf5:	89 90 0d 4f 00 00    	mov    %edx,0x4f0d(%eax)
 81c0bfb:	8b 55 8a             	mov    -0x76(%ebp),%edx
 81c0bfe:	89 90 11 4f 00 00    	mov    %edx,0x4f11(%eax)
 81c0c04:	8b 55 8e             	mov    -0x72(%ebp),%edx
 81c0c07:	89 90 15 4f 00 00    	mov    %edx,0x4f15(%eax)
 81c0c0d:	8b 55 92             	mov    -0x6e(%ebp),%edx
 81c0c10:	89 90 19 4f 00 00    	mov    %edx,0x4f19(%eax)
 81c0c16:	8b 55 96             	mov    -0x6a(%ebp),%edx
 81c0c19:	89 90 1d 4f 00 00    	mov    %edx,0x4f1d(%eax)
 81c0c1f:	8b 55 9a             	mov    -0x66(%ebp),%edx
 81c0c22:	89 90 21 4f 00 00    	mov    %edx,0x4f21(%eax)
 81c0c28:	8b 55 9e             	mov    -0x62(%ebp),%edx
 81c0c2b:	89 90 25 4f 00 00    	mov    %edx,0x4f25(%eax)
 81c0c31:	8b 55 a2             	mov    -0x5e(%ebp),%edx
 81c0c34:	89 90 29 4f 00 00    	mov    %edx,0x4f29(%eax)
 81c0c3a:	8b 55 a6             	mov    -0x5a(%ebp),%edx
 81c0c3d:	89 90 2d 4f 00 00    	mov    %edx,0x4f2d(%eax)
 81c0c43:	0f b6 55 aa          	movzbl -0x56(%ebp),%edx
 81c0c47:	88 90 31 4f 00 00    	mov    %dl,0x4f31(%eax)
 81c0c4d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81c0c54:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0c57:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c0c5b:	0f be c0             	movsbl %al,%eax
 81c0c5e:	83 f8 0a             	cmp    $0xa,%eax
 81c0c61:	0f 87 88 01 00 00    	ja     81c0def <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x3d5>
 81c0c67:	8b 04 85 cc 14 bc 08 	mov    0x8bc14cc(,%eax,4),%eax
 81c0c6e:	ff e0                	jmp    *%eax
 81c0c70:	c7 45 f0 d0 6b 00 00 	movl   $0x6bd0,-0x10(%ebp)
 81c0c77:	eb 47                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0c79:	c7 45 f0 cc 74 00 00 	movl   $0x74cc,-0x10(%ebp)
 81c0c80:	eb 3e                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0c82:	c7 45 f0 44 7a 00 00 	movl   $0x7a44,-0x10(%ebp)
 81c0c89:	eb 35                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0c8b:	c7 45 f0 40 83 00 00 	movl   $0x8340,-0x10(%ebp)
 81c0c92:	eb 2c                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0c94:	c7 45 f0 b9 88 00 00 	movl   $0x88b9,-0x10(%ebp)
 81c0c9b:	eb 23                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0c9d:	c7 45 f0 8a 90 00 00 	movl   $0x908a,-0x10(%ebp)
 81c0ca4:	eb 1a                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0ca6:	c7 45 f0 40 83 00 00 	movl   $0x8340,-0x10(%ebp)
 81c0cad:	eb 11                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0caf:	c7 45 f0 d0 6b 00 00 	movl   $0x6bd0,-0x10(%ebp)
 81c0cb6:	eb 08                	jmp    81c0cc0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2a6>
 81c0cb8:	c7 45 f0 ea 0a 52 06 	movl   $0x6520aea,-0x10(%ebp)
 81c0cbf:	90                   	nop
 81c0cc0:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 81c0cc3:	e8 d3 b4 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c0cc8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c0ccc:	89 04 24             	mov    %eax,(%esp)
 81c0ccf:	e8 5e ed 19 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81c0cd4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c0cd7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c0cdb:	75 0f                	jne    81c0cec <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x2d2>
 81c0cdd:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0ce0:	c6 80 3f 53 00 00 00 	movb   $0x0,0x533f(%eax)
 81c0ce7:	e9 04 01 00 00       	jmp    81c0df0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x3d6>
 81c0cec:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0cef:	c6 80 3f 53 00 00 01 	movb   $0x1,0x533f(%eax)
 81c0cf6:	8d 85 31 ff ff ff    	lea    -0xcf(%ebp),%eax
 81c0cfc:	89 04 24             	mov    %eax,(%esp)
 81c0cff:	e8 50 ab f0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81c0d04:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c0d07:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 81c0d0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0d10:	8b 00                	mov    (%eax),%eax
 81c0d12:	83 c0 08             	add    $0x8,%eax
 81c0d15:	8b 10                	mov    (%eax),%edx
 81c0d17:	8d 85 31 ff ff ff    	lea    -0xcf(%ebp),%eax
 81c0d1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0d21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0d24:	89 04 24             	mov    %eax,(%esp)
 81c0d27:	ff d2                	call   *%edx
 81c0d29:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0d2c:	8b 95 31 ff ff ff    	mov    -0xcf(%ebp),%edx
 81c0d32:	89 90 01 4e 00 00    	mov    %edx,0x4e01(%eax)
 81c0d38:	8b 95 35 ff ff ff    	mov    -0xcb(%ebp),%edx
 81c0d3e:	89 90 05 4e 00 00    	mov    %edx,0x4e05(%eax)
 81c0d44:	8b 95 39 ff ff ff    	mov    -0xc7(%ebp),%edx
 81c0d4a:	89 90 09 4e 00 00    	mov    %edx,0x4e09(%eax)
 81c0d50:	8b 95 3d ff ff ff    	mov    -0xc3(%ebp),%edx
 81c0d56:	89 90 0d 4e 00 00    	mov    %edx,0x4e0d(%eax)
 81c0d5c:	8b 95 41 ff ff ff    	mov    -0xbf(%ebp),%edx
 81c0d62:	89 90 11 4e 00 00    	mov    %edx,0x4e11(%eax)
 81c0d68:	8b 95 45 ff ff ff    	mov    -0xbb(%ebp),%edx
 81c0d6e:	89 90 15 4e 00 00    	mov    %edx,0x4e15(%eax)
 81c0d74:	8b 95 49 ff ff ff    	mov    -0xb7(%ebp),%edx
 81c0d7a:	89 90 19 4e 00 00    	mov    %edx,0x4e19(%eax)
 81c0d80:	8b 95 4d ff ff ff    	mov    -0xb3(%ebp),%edx
 81c0d86:	89 90 1d 4e 00 00    	mov    %edx,0x4e1d(%eax)
 81c0d8c:	8b 95 51 ff ff ff    	mov    -0xaf(%ebp),%edx
 81c0d92:	89 90 21 4e 00 00    	mov    %edx,0x4e21(%eax)
 81c0d98:	8b 95 55 ff ff ff    	mov    -0xab(%ebp),%edx
 81c0d9e:	89 90 25 4e 00 00    	mov    %edx,0x4e25(%eax)
 81c0da4:	8b 95 59 ff ff ff    	mov    -0xa7(%ebp),%edx
 81c0daa:	89 90 29 4e 00 00    	mov    %edx,0x4e29(%eax)
 81c0db0:	8b 95 5d ff ff ff    	mov    -0xa3(%ebp),%edx
 81c0db6:	89 90 2d 4e 00 00    	mov    %edx,0x4e2d(%eax)
 81c0dbc:	8b 95 61 ff ff ff    	mov    -0x9f(%ebp),%edx
 81c0dc2:	89 90 31 4e 00 00    	mov    %edx,0x4e31(%eax)
 81c0dc8:	8b 95 65 ff ff ff    	mov    -0x9b(%ebp),%edx
 81c0dce:	89 90 35 4e 00 00    	mov    %edx,0x4e35(%eax)
 81c0dd4:	8b 95 69 ff ff ff    	mov    -0x97(%ebp),%edx
 81c0dda:	89 90 39 4e 00 00    	mov    %edx,0x4e39(%eax)
 81c0de0:	0f b6 95 6d ff ff ff 	movzbl -0x93(%ebp),%edx
 81c0de7:	88 90 3d 4e 00 00    	mov    %dl,0x4e3d(%eax)
 81c0ded:	eb 01                	jmp    81c0df0 <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC+0x3d6>
 81c0def:	90                   	nop
 81c0df0:	81 c4 e4 00 00 00    	add    $0xe4,%esp
 81c0df6:	5b                   	pop    %ebx
 81c0df7:	5d                   	pop    %ebp
 81c0df8:	c3                   	ret
 81c0df9:	90                   	nop

```

```c
// DisPatcher_CreateCharac::makeGift @ 0x81c0a1a

/* DisPatcher_CreateCharac::makeGift(CUser*, SIG_CREATE_CHARAC*) */

void __thiscall
DisPatcher_CreateCharac::makeGift
          (DisPatcher_CreateCharac *this,CUser *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  CDataManager *pCVar2;
  undefined2 local_d3;
  undefined2 uStack_d1;
  undefined2 uStack_cf;
  undefined2 uStack_cd;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined4 local_af;
  undefined4 local_ab;
  undefined4 local_a7;
  undefined4 local_a3;
  undefined4 local_9f;
  undefined4 local_9b;
  SIG_CREATE_CHARAC local_97;
  undefined2 local_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  SIG_CREATE_CHARAC local_5a;
  undefined2 local_59;
  undefined2 uStack_57;
  undefined2 uStack_55;
  undefined2 uStack_53;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  SIG_CREATE_CHARAC local_1d;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  
  iVar1 = *(int *)(CREATECHARACTEREQUIP + (char)param_2[0x22] * 8);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_1c = (int *)CDataManager::find_item(pCVar2,iVar1);
  iVar1 = *(int *)(CREATECHARACTEREQUIP + ((char)param_2[0x22] * 2 + 1) * 4);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_18 = (int *)CDataManager::find_item(pCVar2,iVar1);
  if ((local_1c == (int *)0x0) || (local_18 == (int *)0x0)) {
    param_2[0x5340] = (SIG_CREATE_CHARAC)0x0;
  }
  else {
    param_2[0x5340] = (SIG_CREATE_CHARAC)0x1;
    Inven_Item::Inven_Item((Inven_Item *)&local_59);
    Inven_Item::Inven_Item((Inven_Item *)&local_96);
    uStack_57 = (undefined2)*(undefined4 *)(CREATECHARACTEREQUIP + (char)param_2[0x22] * 8);
    uStack_55 = (undefined2)
                ((uint)*(undefined4 *)(CREATECHARACTEREQUIP + (char)param_2[0x22] * 8) >> 0x10);
    (**(code **)(*local_1c + 8))(local_1c,&local_59);
    *(uint *)(param_2 + 0x4e7b) = CONCAT22(uStack_57,local_59);
    *(uint *)(param_2 + 0x4e7f) = CONCAT22(uStack_53,uStack_55);
    *(undefined4 *)(param_2 + 0x4e83) = local_51;
    *(undefined4 *)(param_2 + 0x4e87) = local_4d;
    *(undefined4 *)(param_2 + 0x4e8b) = local_49;
    *(undefined4 *)(param_2 + 0x4e8f) = local_45;
    *(undefined4 *)(param_2 + 0x4e93) = local_41;
    *(undefined4 *)(param_2 + 0x4e97) = local_3d;
    *(undefined4 *)(param_2 + 0x4e9b) = local_39;
    *(undefined4 *)(param_2 + 0x4e9f) = local_35;
    *(undefined4 *)(param_2 + 0x4ea3) = local_31;
    *(undefined4 *)(param_2 + 0x4ea7) = local_2d;
    *(undefined4 *)(param_2 + 0x4eab) = local_29;
    *(undefined4 *)(param_2 + 0x4eaf) = local_25;
    *(undefined4 *)(param_2 + 0x4eb3) = local_21;
    param_2[0x4eb7] = local_1d;
    uStack_94 = (undefined2)
                *(undefined4 *)(CREATECHARACTEREQUIP + ((char)param_2[0x22] * 2 + 1) * 4);
    uStack_92 = (undefined2)
                ((uint)*(undefined4 *)(CREATECHARACTEREQUIP + ((char)param_2[0x22] * 2 + 1) * 4) >>
                0x10);
    (**(code **)(*local_18 + 8))(local_18,&local_96);
    *(uint *)(param_2 + 0x4ef5) = CONCAT22(uStack_94,local_96);
    *(uint *)(param_2 + 0x4ef9) = CONCAT22(uStack_90,uStack_92);
    *(undefined4 *)(param_2 + 0x4efd) = local_8e;
    *(undefined4 *)(param_2 + 0x4f01) = local_8a;
    *(undefined4 *)(param_2 + 0x4f05) = local_86;
    *(undefined4 *)(param_2 + 0x4f09) = local_82;
    *(undefined4 *)(param_2 + 0x4f0d) = local_7e;
    *(undefined4 *)(param_2 + 0x4f11) = local_7a;
    *(undefined4 *)(param_2 + 0x4f15) = local_76;
    *(undefined4 *)(param_2 + 0x4f19) = local_72;
    *(undefined4 *)(param_2 + 0x4f1d) = local_6e;
    *(undefined4 *)(param_2 + 0x4f21) = local_6a;
    *(undefined4 *)(param_2 + 0x4f25) = local_66;
    *(undefined4 *)(param_2 + 0x4f29) = local_62;
    *(undefined4 *)(param_2 + 0x4f2d) = local_5e;
    param_2[0x4f31] = local_5a;
  }
  switch(param_2[0x22]) {
  case (SIG_CREATE_CHARAC)0x0:
    local_14 = 0x6bd0;
    break;
  case (SIG_CREATE_CHARAC)0x1:
  case (SIG_CREATE_CHARAC)0x7:
    local_14 = 0x74cc;
    break;
  case (SIG_CREATE_CHARAC)0x2:
  case (SIG_CREATE_CHARAC)0x5:
    local_14 = 0x7a44;
    break;
  case (SIG_CREATE_CHARAC)0x3:
    local_14 = 0x8340;
    break;
  case (SIG_CREATE_CHARAC)0x4:
    local_14 = 0x88b9;
    break;
  case (SIG_CREATE_CHARAC)0x6:
    local_14 = 0x908a;
    break;
  case (SIG_CREATE_CHARAC)0x8:
    local_14 = 0x8340;
    break;
  case (SIG_CREATE_CHARAC)0x9:
    local_14 = 0x6bd0;
    break;
  case (SIG_CREATE_CHARAC)0xa:
    local_14 = 0x6520aea;
    break;
  default:
    goto switchD_081c0c6e_default;
  }
  iVar1 = local_14;
  pCVar2 = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(pCVar2,iVar1);
  if (local_10 == (int *)0x0) {
    param_2[0x533f] = (SIG_CREATE_CHARAC)0x0;
  }
  else {
    param_2[0x533f] = (SIG_CREATE_CHARAC)0x1;
    Inven_Item::Inven_Item((Inven_Item *)&local_d3);
    uStack_d1 = (undefined2)local_14;
    uStack_cf = (undefined2)((uint)local_14 >> 0x10);
    (**(code **)(*local_10 + 8))(local_10,&local_d3);
    *(uint *)(param_2 + 0x4e01) = CONCAT22(uStack_d1,local_d3);
    *(uint *)(param_2 + 0x4e05) = CONCAT22(uStack_cd,uStack_cf);
    *(undefined4 *)(param_2 + 0x4e09) = local_cb;
    *(undefined4 *)(param_2 + 0x4e0d) = local_c7;
    *(undefined4 *)(param_2 + 0x4e11) = local_c3;
    *(undefined4 *)(param_2 + 0x4e15) = local_bf;
    *(undefined4 *)(param_2 + 0x4e19) = local_bb;
    *(undefined4 *)(param_2 + 0x4e1d) = local_b7;
    *(undefined4 *)(param_2 + 0x4e21) = local_b3;
    *(undefined4 *)(param_2 + 0x4e25) = local_af;
    *(undefined4 *)(param_2 + 0x4e29) = local_ab;
    *(undefined4 *)(param_2 + 0x4e2d) = local_a7;
    *(undefined4 *)(param_2 + 0x4e31) = local_a3;
    *(undefined4 *)(param_2 + 0x4e35) = local_9f;
    *(undefined4 *)(param_2 + 0x4e39) = local_9b;
    param_2[0x4e3d] = local_97;
  }
switchD_081c0c6e_default:
  return;
}

```

---

## process

```asm
// === 081c041e DisPatcher_CreateCharac::process  [0x081c041e-0x81c07e7] ===
 81c041e:	55                   	push   %ebp
 81c041f:	89 e5                	mov    %esp,%ebp
 81c0421:	57                   	push   %edi
 81c0422:	56                   	push   %esi
 81c0423:	53                   	push   %ebx
 81c0424:	83 ec 3c             	sub    $0x3c,%esp
 81c0427:	8b 45 14             	mov    0x14(%ebp),%eax
 81c042a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81c042d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0430:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c0434:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0437:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c043b:	8b 45 08             	mov    0x8(%ebp),%eax
 81c043e:	89 04 24             	mov    %eax,(%esp)
 81c0441:	e8 ea 03 00 00       	call   81c0830 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE>
 81c0446:	89 c2                	mov    %eax,%edx
 81c0448:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c044b:	89 50 04             	mov    %edx,0x4(%eax)
 81c044e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c0451:	8b 40 04             	mov    0x4(%eax),%eax
 81c0454:	85 c0                	test   %eax,%eax
 81c0456:	7e 0a                	jle    81c0462 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 81c0458:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c045d:	e9 7c 03 00 00       	jmp    81c07de <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x3c0>
 81c0462:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c0465:	8b 40 04             	mov    0x4(%eax),%eax
 81c0468:	85 c0                	test   %eax,%eax
 81c046a:	79 34                	jns    81c04a0 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x82>
 81c046c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c046f:	89 04 24             	mov    %eax,(%esp)
 81c0472:	e8 f7 9e f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c0477:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c047a:	8b 52 04             	mov    0x4(%edx),%edx
 81c047d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c0481:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c0485:	c7 44 24 04 e0 60 bd 	movl   $0x8bd60e0,0x4(%esp)
 81c048c:	08 
 81c048d:	c7 04 24 9c 07 00 00 	movl   $0x79c,(%esp)
 81c0494:	e8 3e 04 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c0499:	89 c3                	mov    %eax,%ebx
 81c049b:	e9 3e 03 00 00       	jmp    81c07de <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x3c0>
 81c04a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c04a3:	89 04 24             	mov    %eax,(%esp)
 81c04a6:	e8 c3 9e f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c04ab:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81c04b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c04b5:	89 14 24             	mov    %edx,(%esp)
 81c04b8:	e8 89 8e f4 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81c04bd:	0f b6 d8             	movzbl %al,%ebx
 81c04c0:	e8 d6 bc f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c04c5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c04c9:	89 04 24             	mov    %eax,(%esp)
 81c04cc:	e8 97 b1 06 00       	call   822b668 <_ZN12CDataManager23setCharacNameFilterPassEb>
 81c04d1:	8b 45 10             	mov    0x10(%ebp),%eax
 81c04d4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c04d7:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 81c04dc:	c7 44 24 08 ab 07 00 	movl   $0x7ab,0x8(%esp)
 81c04e3:	00 
 81c04e4:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c04eb:	08 
 81c04ec:	89 04 24             	mov    %eax,(%esp)
 81c04ef:	e8 6e fd 0c 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 81c04f4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c04fb:	00 
 81c04fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0500:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c0503:	89 04 24             	mov    %eax,(%esp)
 81c0506:	e8 1b 87 f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c050b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c050e:	89 04 24             	mov    %eax,(%esp)
 81c0511:	e8 30 87 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c0516:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81c051d:	00 
 81c051e:	89 04 24             	mov    %eax,(%esp)
 81c0521:	e8 30 87 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c0526:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0529:	89 04 24             	mov    %eax,(%esp)
 81c052c:	e8 65 87 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c0531:	89 c3                	mov    %eax,%ebx
 81c0533:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c0536:	89 04 24             	mov    %eax,(%esp)
 81c0539:	e8 08 87 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c053e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c0542:	89 04 24             	mov    %eax,(%esp)
 81c0545:	e8 0c 87 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c054a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c054d:	89 04 24             	mov    %eax,(%esp)
 81c0550:	e8 f9 86 f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c0555:	89 04 24             	mov    %eax,(%esp)
 81c0558:	e8 6f 67 07 00       	call   8236ccc <_ZN12CStreamGuard11GetInBufferI17SIG_CREATE_CHARACEEPT_v>
 81c055d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c0560:	c7 44 24 08 54 53 00 	movl   $0x5354,0x8(%esp)
 81c0567:	00 
 81c0568:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c056f:	00 
 81c0570:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0573:	89 04 24             	mov    %eax,(%esp)
 81c0576:	e8 45 d7 eb ff       	call   807dcc0 <memset@plt>
 81c057b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c057e:	89 04 24             	mov    %eax,(%esp)
 81c0581:	e8 e8 9d f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c0586:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81c0589:	89 02                	mov    %eax,(%edx)
 81c058b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c058e:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c0592:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0595:	88 50 22             	mov    %dl,0x22(%eax)
 81c0598:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c059b:	8d 50 12             	lea    0x12(%eax),%edx
 81c059e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c05a1:	83 c0 04             	add    $0x4,%eax
 81c05a4:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81c05ab:	00 
 81c05ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c05b0:	89 04 24             	mov    %eax,(%esp)
 81c05b3:	e8 18 d3 eb ff       	call   807d8d0 <strncpy@plt>
 81c05b8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c05bb:	0f b6 50 2f          	movzbl 0x2f(%eax),%edx
 81c05bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c05c2:	88 50 23             	mov    %dl,0x23(%eax)
 81c05c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c05c8:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 81c05cc:	84 c0                	test   %al,%al
 81c05ce:	74 16                	je     81c05e6 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1c8>
 81c05d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c05d3:	89 04 24             	mov    %eax,(%esp)
 81c05d6:	e8 1d ed 06 00       	call   822f2f8 <_ZN15CUserCharacInfo25getUserEventCharacterFlagEv>
 81c05db:	84 c0                	test   %al,%al
 81c05dd:	74 07                	je     81c05e6 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1c8>
 81c05df:	b8 01 00 00 00       	mov    $0x1,%eax
 81c05e4:	eb 05                	jmp    81c05eb <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1cd>
 81c05e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81c05eb:	84 c0                	test   %al,%al
 81c05ed:	74 14                	je     81c0603 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1e5>
 81c05ef:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c05f2:	c7 40 04 14 00 00 00 	movl   $0x14,0x4(%eax)
 81c05f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c05fe:	e9 d0 01 00 00       	jmp    81c07d3 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x3b5>
 81c0603:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0606:	89 04 24             	mov    %eax,(%esp)
 81c0609:	e8 ea ec 06 00       	call   822f2f8 <_ZN15CUserCharacInfo25getUserEventCharacterFlagEv>
 81c060e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81c0611:	88 42 24             	mov    %al,0x24(%edx)
 81c0614:	e8 82 bb f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c0619:	8b 48 14             	mov    0x14(%eax),%ecx
 81c061c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c061f:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c0623:	0f be d0             	movsbl %al,%edx
 81c0626:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0629:	69 d2 dc 07 00 00    	imul   $0x7dc,%edx,%edx
 81c062f:	83 c0 26             	add    $0x26,%eax
 81c0632:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81c0635:	0f b7 0a             	movzwl (%edx),%ecx
 81c0638:	66 89 08             	mov    %cx,(%eax)
 81c063b:	83 c0 02             	add    $0x2,%eax
 81c063e:	83 c2 02             	add    $0x2,%edx
 81c0641:	b9 14 00 00 00       	mov    $0x14,%ecx
 81c0646:	89 c7                	mov    %eax,%edi
 81c0648:	89 d6                	mov    %edx,%esi
 81c064a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 81c064c:	e8 4a bb f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c0651:	8b 50 14             	mov    0x14(%eax),%edx
 81c0654:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c0657:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c065b:	0f be c0             	movsbl %al,%eax
 81c065e:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 81c0664:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81c0667:	05 d0 07 00 00       	add    $0x7d0,%eax
 81c066c:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 81c0670:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0673:	88 50 78             	mov    %dl,0x78(%eax)
 81c0676:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0679:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c067d:	0f be c0             	movsbl %al,%eax
 81c0680:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81c0683:	83 c2 79             	add    $0x79,%edx
 81c0686:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c068a:	89 14 24             	mov    %edx,(%esp)
 81c068d:	e8 50 49 44 00       	call   8604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>
 81c0692:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0695:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c0699:	0f be c0             	movsbl %al,%eax
 81c069c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81c069f:	81 c2 11 02 00 00    	add    $0x211,%edx
 81c06a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c06a9:	89 14 24             	mov    %edx,(%esp)
 81c06ac:	e8 31 49 44 00       	call   8604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>
 81c06b1:	e8 e5 ba f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c06b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c06bd:	00 
 81c06be:	89 04 24             	mov    %eax,(%esp)
 81c06c1:	e8 f2 05 1a 00       	call   8360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>
 81c06c6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81c06c9:	89 82 50 53 00 00    	mov    %eax,0x5350(%edx)
 81c06cf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c06d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c06d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c06d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c06dd:	8b 45 08             	mov    0x8(%ebp),%eax
 81c06e0:	89 04 24             	mov    %eax,(%esp)
 81c06e3:	e8 32 03 00 00       	call   81c0a1a <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC>
 81c06e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c06eb:	89 04 24             	mov    %eax,(%esp)
 81c06ee:	e8 63 09 f4 ff       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 81c06f3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c06f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c06f9:	89 04 24             	mov    %eax,(%esp)
 81c06fc:	e8 af dc eb ff       	call   807e3b0 <strlen@plt>
 81c0701:	83 f8 0c             	cmp    $0xc,%eax
 81c0704:	76 26                	jbe    81c072c <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81c0706:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c0709:	83 c0 06             	add    $0x6,%eax
 81c070c:	0f b6 00             	movzbl (%eax),%eax
 81c070f:	3c 32                	cmp    $0x32,%al
 81c0711:	74 0d                	je     81c0720 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x302>
 81c0713:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c0716:	83 c0 06             	add    $0x6,%eax
 81c0719:	0f b6 00             	movzbl (%eax),%eax
 81c071c:	3c 34                	cmp    $0x34,%al
 81c071e:	75 0c                	jne    81c072c <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81c0720:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0723:	c6 80 4c 53 00 00 00 	movb   $0x0,0x534c(%eax)
 81c072a:	eb 0a                	jmp    81c0736 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x318>
 81c072c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c072f:	c6 80 4c 53 00 00 01 	movb   $0x1,0x534c(%eax)
 81c0736:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0739:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 81c073d:	3c 09                	cmp    $0x9,%al
 81c073f:	75 13                	jne    81c0754 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x336>
 81c0741:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c0748:	00 
 81c0749:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c074c:	89 04 24             	mov    %eax,(%esp)
 81c074f:	e8 b6 27 4d 00       	call   8692f0a <_ZN5CUser16setComboSkillSetEb>
 81c0754:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0757:	89 04 24             	mov    %eax,(%esp)
 81c075a:	e8 29 a3 48 00       	call   864aa88 <_ZN5CUser16lockCreateCharacEv>
 81c075f:	83 f0 01             	xor    $0x1,%eax
 81c0762:	84 c0                	test   %al,%al
 81c0764:	74 2f                	je     81c0795 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x377>
 81c0766:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0769:	89 04 24             	mov    %eax,(%esp)
 81c076c:	e8 fd 9b f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c0771:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c0775:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c077c:	00 
 81c077d:	c7 44 24 04 e0 60 bd 	movl   $0x8bd60e0,0x4(%esp)
 81c0784:	08 
 81c0785:	c7 04 24 1f 08 00 00 	movl   $0x81f,(%esp)
 81c078c:	e8 46 01 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c0791:	89 c3                	mov    %eax,%ebx
 81c0793:	eb 3e                	jmp    81c07d3 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x3b5>
 81c0795:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c079a:	8d 55 d0             	lea    -0x30(%ebp),%edx
 81c079d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c07a1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c07a8:	00 
 81c07a9:	89 04 24             	mov    %eax,(%esp)
 81c07ac:	e8 2d 08 3b 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c07b1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c07b6:	eb 1b                	jmp    81c07d3 <_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase+0x3b5>
 81c07b8:	89 d3                	mov    %edx,%ebx
 81c07ba:	89 c6                	mov    %eax,%esi
 81c07bc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c07bf:	89 04 24             	mov    %eax,(%esp)
 81c07c2:	e8 0b c1 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c07c7:	89 f0                	mov    %esi,%eax
 81c07c9:	89 da                	mov    %ebx,%edx
 81c07cb:	89 04 24             	mov    %eax,(%esp)
 81c07ce:	e8 7d 2f 92 00       	call   8ae3750 <_Unwind_Resume>
 81c07d3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c07d6:	89 04 24             	mov    %eax,(%esp)
 81c07d9:	e8 f4 c0 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c07de:	89 d8                	mov    %ebx,%eax
 81c07e0:	83 c4 3c             	add    $0x3c,%esp
 81c07e3:	5b                   	pop    %ebx
 81c07e4:	5e                   	pop    %esi
 81c07e5:	5f                   	pop    %edi
 81c07e6:	5d                   	pop    %ebp
 81c07e7:	c3                   	ret

```

```c
// DisPatcher_CreateCharac::process @ 0x81c041e

/* DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_CreateCharac::process
          (DisPatcher_CreateCharac *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 *puVar1;
  bool bVar2;
  char cVar3;
  SIG_CREATE_CHARAC SVar4;
  undefined4 uVar5;
  uint uVar6;
  CDataManager *pCVar7;
  Stream *pSVar8;
  CStreamGuard *pCVar9;
  int iVar10;
  size_t sVar11;
  undefined4 *puVar12;
  SIG_CREATE_CHARAC *pSVar13;
  byte bVar14;
  CStreamGuard local_34 [8];
  ParamBase *local_2c;
  MSG_BASE *local_28;
  SIG_CREATE_CHARAC *local_24;
  char *local_20;
  
  bVar14 = 0;
  local_2c = param_3;
  uVar5 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_2c + 4) = uVar5;
  if (0 < *(int *)(local_2c + 4)) {
    return 0;
  }
  if (-1 < *(int *)(local_2c + 4)) {
    uVar6 = CUser::get_acc_id(param_1);
    bVar2 = (bool)WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
    pCVar7 = (CDataManager *)G_CDataManager();
    CDataManager::setCharacNameFilterPass(pCVar7,bVar2);
    local_28 = param_2;
    pSVar8 = (Stream *)
             BigStreamPool::Acquire
                       (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x7ab);
    CStreamGuard::CStreamGuard(local_34,pSVar8,true);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 081c0521 to 081c07b0 has its CatchHandler @ 081c07b8 */
    CStreamGuard::operator<<(pCVar9,4);
    iVar10 = CUser::GetUID(param_1);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar9,iVar10);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_24 = CStreamGuard::GetInBuffer<SIG_CREATE_CHARAC>(pCVar9);
    memset(local_24,0,0x5354);
    uVar5 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_24 = uVar5;
    local_24[0x22] = *(SIG_CREATE_CHARAC *)(local_28 + 0xd);
    strncpy((char *)(local_24 + 4),(char *)(local_28 + 0x12),0x1e);
    local_24[0x23] = *(SIG_CREATE_CHARAC *)(local_28 + 0x2f);
    if ((local_24[0x23] == (SIG_CREATE_CHARAC)0x0) ||
       (cVar3 = CUserCharacInfo::getUserEventCharacterFlag((CUserCharacInfo *)param_1),
       cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined4 *)(local_2c + 4) = 0x14;
      uVar5 = 0;
    }
    else {
      SVar4 = (SIG_CREATE_CHARAC)
              CUserCharacInfo::getUserEventCharacterFlag((CUserCharacInfo *)param_1);
      local_24[0x24] = SVar4;
      iVar10 = G_CDataManager();
      puVar1 = (undefined2 *)(*(int *)(iVar10 + 0x14) + (char)local_28[0xd] * 0x7dc);
      *(undefined2 *)(local_24 + 0x26) = *puVar1;
      puVar12 = (undefined4 *)(puVar1 + 1);
      pSVar13 = local_24 + 0x28;
      for (iVar10 = 0x14; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined4 *)pSVar13 = *puVar12;
        puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        pSVar13 = pSVar13 + (uint)bVar14 * -8 + 4;
      }
      iVar10 = G_CDataManager();
      local_24[0x78] =
           *(SIG_CREATE_CHARAC *)(*(int *)(iVar10 + 0x14) + (char)local_28[0xd] * 0x7dc + 0x7d4);
      addSkillOnCreateCharacter((_Mastered_skill *)(local_24 + 0x79),(int)(char)local_24[0x22]);
      addSkillOnCreateCharacter((_Mastered_skill *)(local_24 + 0x211),(int)(char)local_24[0x22]);
      pCVar7 = (CDataManager *)G_CDataManager();
      uVar5 = CDataManager::GetSpAtLevelUp(pCVar7,1);
      *(undefined4 *)(local_24 + 0x5350) = uVar5;
      makeGift(this,param_1,local_24);
      local_20 = (char *)CUser::GetSsnString(param_1);
      sVar11 = strlen(local_20);
      if ((sVar11 < 0xd) || ((local_20[6] != '2' && (local_20[6] != '4')))) {
        local_24[0x534c] = (SIG_CREATE_CHARAC)0x1;
      }
      else {
        local_24[0x534c] = (SIG_CREATE_CHARAC)0x0;
      }
      if (local_24[0x22] == (SIG_CREATE_CHARAC)0x9) {
        CUser::setComboSkillSet(param_1,true);
      }
      cVar3 = CUser::lockCreateCharac(param_1);
      if (cVar3 == '\x01') {
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_34);
        uVar5 = 0;
      }
      else {
        uVar6 = CUser::get_acc_id(param_1);
        uVar5 = LineFunc(0x81f,
                         "virtual int DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar6);
      }
    }
    CStreamGuard::~CStreamGuard(local_34);
    return uVar5;
  }
  uVar6 = CUser::get_acc_id(param_1);
  uVar5 = LineFunc(0x79c,
                   "virtual int DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&)",
                   *(int *)(local_2c + 4),uVar6);
  return uVar5;
}

```

---

## read

```asm
// === 081c01ec DisPatcher_CreateCharac::read  [0x081c01ec-0x81c041d] ===
 81c01ec:	55                   	push   %ebp
 81c01ed:	89 e5                	mov    %esp,%ebp
 81c01ef:	83 ec 28             	sub    $0x28,%esp
 81c01f2:	8b 45 10             	mov    0x10(%ebp),%eax
 81c01f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c01f8:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 81c01ff:	00 
 81c0200:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c0207:	00 
 81c0208:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c020b:	89 04 24             	mov    %eax,(%esp)
 81c020e:	e8 ad da eb ff       	call   807dcc0 <memset@plt>
 81c0213:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0216:	83 c0 0d             	add    $0xd,%eax
 81c0219:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c021d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0220:	89 04 24             	mov    %eax,(%esp)
 81c0223:	e8 fa cc 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c0228:	83 f0 01             	xor    $0x1,%eax
 81c022b:	84 c0                	test   %al,%al
 81c022d:	74 29                	je     81c0258 <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x6c>
 81c022f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c0236:	00 
 81c0237:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c023e:	00 
 81c023f:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c0246:	08 
 81c0247:	c7 04 24 49 07 00 00 	movl   $0x749,(%esp)
 81c024e:	e8 84 06 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c0253:	e9 c3 01 00 00       	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c0258:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c025b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c025f:	3c 0b                	cmp    $0xb,%al
 81c0261:	7f 0b                	jg     81c026e <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x82>
 81c0263:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0266:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c026a:	84 c0                	test   %al,%al
 81c026c:	79 29                	jns    81c0297 <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0xab>
 81c026e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c0275:	00 
 81c0276:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c027d:	00 
 81c027e:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c0285:	08 
 81c0286:	c7 04 24 4b 07 00 00 	movl   $0x74b,(%esp)
 81c028d:	e8 45 06 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c0292:	e9 84 01 00 00       	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c0297:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c029a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c029e:	3c 0b                	cmp    $0xb,%al
 81c02a0:	75 29                	jne    81c02cb <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0xdf>
 81c02a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c02a9:	00 
 81c02aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c02b1:	00 
 81c02b2:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c02b9:	08 
 81c02ba:	c7 04 24 63 07 00 00 	movl   $0x763,(%esp)
 81c02c1:	e8 11 06 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c02c6:	e9 50 01 00 00       	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c02cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c02ce:	83 c0 0e             	add    $0xe,%eax
 81c02d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c02d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c02d8:	89 04 24             	mov    %eax,(%esp)
 81c02db:	e8 10 ce 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c02e0:	83 f0 01             	xor    $0x1,%eax
 81c02e3:	84 c0                	test   %al,%al
 81c02e5:	74 29                	je     81c0310 <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x124>
 81c02e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c02ee:	00 
 81c02ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c02f6:	00 
 81c02f7:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c02fe:	08 
 81c02ff:	c7 04 24 66 07 00 00 	movl   $0x766,(%esp)
 81c0306:	e8 cc 05 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c030b:	e9 0b 01 00 00       	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c0310:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0313:	8b 40 0e             	mov    0xe(%eax),%eax
 81c0316:	83 f8 03             	cmp    $0x3,%eax
 81c0319:	7e 0b                	jle    81c0326 <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x13a>
 81c031b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c031e:	8b 40 0e             	mov    0xe(%eax),%eax
 81c0321:	83 f8 12             	cmp    $0x12,%eax
 81c0324:	7e 29                	jle    81c034f <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x163>
 81c0326:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c032d:	00 
 81c032e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c0335:	00 
 81c0336:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c033d:	08 
 81c033e:	c7 04 24 6a 07 00 00 	movl   $0x76a,(%esp)
 81c0345:	e8 8d 05 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c034a:	e9 cc 00 00 00       	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c034f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0352:	8b 40 0e             	mov    0xe(%eax),%eax
 81c0355:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c0358:	83 c2 12             	add    $0x12,%edx
 81c035b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c035f:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81c0366:	00 
 81c0367:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c036b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c036e:	89 04 24             	mov    %eax,(%esp)
 81c0371:	e8 46 cf 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81c0376:	83 f0 01             	xor    $0x1,%eax
 81c0379:	84 c0                	test   %al,%al
 81c037b:	74 26                	je     81c03a3 <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x1b7>
 81c037d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c0384:	00 
 81c0385:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c038c:	00 
 81c038d:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c0394:	08 
 81c0395:	c7 04 24 6e 07 00 00 	movl   $0x76e,(%esp)
 81c039c:	e8 36 05 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c03a1:	eb 78                	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c03a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c03a6:	83 c0 2f             	add    $0x2f,%eax
 81c03a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c03ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c03b0:	89 04 24             	mov    %eax,(%esp)
 81c03b3:	e8 6a cb 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c03b8:	83 f0 01             	xor    $0x1,%eax
 81c03bb:	84 c0                	test   %al,%al
 81c03bd:	74 26                	je     81c03e5 <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x1f9>
 81c03bf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c03c6:	00 
 81c03c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c03ce:	00 
 81c03cf:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c03d6:	08 
 81c03d7:	c7 04 24 80 07 00 00 	movl   $0x780,(%esp)
 81c03de:	e8 f4 04 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c03e3:	eb 36                	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c03e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c03e8:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 81c03ec:	84 c0                	test   %al,%al
 81c03ee:	79 26                	jns    81c0416 <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22a>
 81c03f0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c03f7:	00 
 81c03f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c03ff:	00 
 81c0400:	c7 44 24 04 40 61 bd 	movl   $0x8bd6140,0x4(%esp)
 81c0407:	08 
 81c0408:	c7 04 24 82 07 00 00 	movl   $0x782,(%esp)
 81c040f:	e8 c3 04 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c0414:	eb 05                	jmp    81c041b <_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE+0x22f>
 81c0416:	b8 00 00 00 00       	mov    $0x0,%eax
 81c041b:	c9                   	leave
 81c041c:	c3                   	ret
 81c041d:	90                   	nop

```

```c
// DisPatcher_CreateCharac::read @ 0x81c01ec

/* DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_CreateCharac::read(DisPatcher_CreateCharac *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  memset(param_2,0,0x30);
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if (((char)param_2[0xd] < '\f') && (-1 < (char)param_2[0xd])) {
      if (param_2[0xd] == (MSG_BASE)0xb) {
        uVar2 = LineFunc(0x763,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
      else {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xe));
        if (cVar1 == '\x01') {
          if ((*(int *)(param_2 + 0xe) < 4) || (0x12 < *(int *)(param_2 + 0xe))) {
            uVar2 = LineFunc(0x76a,
                             "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
          else {
            cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x12),0x1d,*(int *)(param_2 + 0xe)
                                      );
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x2f));
              if (cVar1 == '\x01') {
                if ((char)param_2[0x2f] < '\0') {
                  uVar2 = LineFunc(0x782,
                                   "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = LineFunc(0x780,
                                 "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",
                                 0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x76e,
                               "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,
                               0);
            }
          }
        }
        else {
          uVar2 = LineFunc(0x766,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
    }
    else {
      uVar2 = LineFunc(0x74b,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x749,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c07e8 DisPatcher_CreateCharac::send  [0x081c07e8-0x81c082f] ===
 81c07e8:	55                   	push   %ebp
 81c07e9:	89 e5                	mov    %esp,%ebp
 81c07eb:	83 ec 28             	sub    $0x28,%esp
 81c07ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81c07f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c07f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c07f7:	8b 40 04             	mov    0x4(%eax),%eax
 81c07fa:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c07ff:	74 2c                	je     81c082d <_ZN23DisPatcher_CreateCharac4sendEP5CUserR9ParamBase+0x45>
 81c0801:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0804:	8b 40 04             	mov    0x4(%eax),%eax
 81c0807:	85 c0                	test   %eax,%eax
 81c0809:	74 23                	je     81c082e <_ZN23DisPatcher_CreateCharac4sendEP5CUserR9ParamBase+0x46>
 81c080b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c080e:	8b 40 04             	mov    0x4(%eax),%eax
 81c0811:	0f b6 c0             	movzbl %al,%eax
 81c0814:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c0818:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c081f:	00 
 81c0820:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0823:	89 04 24             	mov    %eax,(%esp)
 81c0826:	e8 17 b7 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c082b:	eb 01                	jmp    81c082e <_ZN23DisPatcher_CreateCharac4sendEP5CUserR9ParamBase+0x46>
 81c082d:	90                   	nop
 81c082e:	c9                   	leave
 81c082f:	c3                   	ret

```

```c
// DisPatcher_CreateCharac::send @ 0x81c07e8

/* DisPatcher_CreateCharac::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_CreateCharac::send(DisPatcher_CreateCharac *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,5,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

