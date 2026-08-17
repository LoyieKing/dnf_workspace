# Dispatcher_Debug_Clear_Quest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081df91c Dispatcher_Debug_Clear_Quest::process  [0x081df91c-0x81dfb3f] ===
 81df91c:	55                   	push   %ebp
 81df91d:	89 e5                	mov    %esp,%ebp
 81df91f:	53                   	push   %ebx
 81df920:	83 ec 54             	sub    $0x54,%esp
 81df923:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df926:	89 04 24             	mov    %eax,(%esp)
 81df929:	e8 6e 5f f6 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 81df92e:	83 f0 01             	xor    $0x1,%eax
 81df931:	84 c0                	test   %al,%al
 81df933:	74 29                	je     81df95e <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81df935:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81df93c:	00 
 81df93d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81df944:	00 
 81df945:	c7 44 24 04 80 1b bd 	movl   $0x8bd1b80,0x4(%esp)
 81df94c:	08 
 81df94d:	c7 04 24 f3 51 00 00 	movl   $0x51f3,(%esp)
 81df954:	e8 7e 0f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81df959:	e9 dc 01 00 00       	jmp    81dfb3a <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x21e>
 81df95e:	8b 45 10             	mov    0x10(%ebp),%eax
 81df961:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81df964:	8b 45 14             	mov    0x14(%ebp),%eax
 81df967:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81df96a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81df96d:	8d 50 04             	lea    0x4(%eax),%edx
 81df970:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81df973:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df977:	89 14 24             	mov    %edx,(%esp)
 81df97a:	e8 e7 58 05 00       	call   8235266 <_ZN18MsgClearQuestIndexaSERKS_>
 81df97f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81df986:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81df98d:	e9 70 01 00 00       	jmp    81dfb02 <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1e6>
 81df992:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81df995:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81df998:	83 c2 14             	add    $0x14,%edx
 81df99b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df99f:	89 14 24             	mov    %edx,(%esp)
 81df9a2:	e8 35 e8 ea ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81df9a7:	8b 18                	mov    (%eax),%ebx
 81df9a9:	e8 ed c7 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81df9ae:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81df9b2:	89 04 24             	mov    %eax,(%esp)
 81df9b5:	e8 0c 04 18 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 81df9ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81df9bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81df9c1:	75 0a                	jne    81df9cd <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0xb1>
 81df9c3:	b8 01 00 00 00       	mov    $0x1,%eax
 81df9c8:	e9 6d 01 00 00       	jmp    81dfb3a <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x21e>
 81df9cd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81df9d1:	0f 84 20 01 00 00    	je     81dfaf7 <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1db>
 81df9d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df9da:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df9de:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81df9e1:	89 04 24             	mov    %eax,(%esp)
 81df9e4:	e8 cb 86 16 00       	call   83480b4 <_ZN18stSelectQuestParamC1EP5CUser>
 81df9e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df9ec:	89 04 24             	mov    %eax,(%esp)
 81df9ef:	e8 ee bb 04 00       	call   822b5e2 <_ZNK5Quest11exposeQuestEv>
 81df9f4:	83 f0 01             	xor    $0x1,%eax
 81df9f7:	84 c0                	test   %al,%al
 81df9f9:	0f 85 fb 00 00 00    	jne    81dfafa <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1de>
 81df9ff:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81dfa02:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfa06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfa09:	89 04 24             	mov    %eax,(%esp)
 81dfa0c:	e8 75 33 17 00       	call   8352d86 <_ZNK5Quest14check_possibleERK18stSelectQuestParam>
 81dfa11:	83 f0 01             	xor    $0x1,%eax
 81dfa14:	84 c0                	test   %al,%al
 81dfa16:	0f 85 e1 00 00 00    	jne    81dfafd <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1e1>
 81dfa1c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81dfa20:	0f 84 d8 00 00 00    	je     81dfafe <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81dfa26:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfa29:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81dfa2c:	83 c2 14             	add    $0x14,%edx
 81dfa2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfa33:	89 14 24             	mov    %edx,(%esp)
 81dfa36:	e8 a1 e7 ea ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81dfa3b:	8b 00                	mov    (%eax),%eax
 81dfa3d:	89 c3                	mov    %eax,%ebx
 81dfa3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfa42:	89 04 24             	mov    %eax,(%esp)
 81dfa45:	e8 14 b0 f6 ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81dfa4a:	83 c0 04             	add    $0x4,%eax
 81dfa4d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dfa51:	89 04 24             	mov    %eax,(%esp)
 81dfa54:	e8 1f c0 ea ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 81dfa59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfa5c:	0f b7 80 38 01 00 00 	movzwl 0x138(%eax),%eax
 81dfa63:	66 85 c0             	test   %ax,%ax
 81dfa66:	7e 3d                	jle    81dfaa5 <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x189>
 81dfa68:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfa6b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81dfa6e:	83 c2 14             	add    $0x14,%edx
 81dfa71:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfa75:	89 14 24             	mov    %edx,(%esp)
 81dfa78:	e8 5f e7 ea ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81dfa7d:	8b 10                	mov    (%eax),%edx
 81dfa7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfa82:	0f b7 80 38 01 00 00 	movzwl 0x138(%eax),%eax
 81dfa89:	98                   	cwtl
 81dfa8a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81dfa91:	00 
 81dfa92:	89 54 24 08          	mov    %edx,0x8(%esp)
 81dfa96:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfa9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfa9d:	89 04 24             	mov    %eax,(%esp)
 81dfaa0:	e8 c1 b1 4a 00       	call   868ac66 <_ZN5CUser13incQuestPointEiib>
 81dfaa5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfaa8:	0f b7 80 3a 01 00 00 	movzwl 0x13a(%eax),%eax
 81dfaaf:	66 85 c0             	test   %ax,%ax
 81dfab2:	7e 3d                	jle    81dfaf1 <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1d5>
 81dfab4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfab7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81dfaba:	83 c2 14             	add    $0x14,%edx
 81dfabd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfac1:	89 14 24             	mov    %edx,(%esp)
 81dfac4:	e8 13 e7 ea ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81dfac9:	8b 10                	mov    (%eax),%edx
 81dfacb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dface:	0f b7 80 3a 01 00 00 	movzwl 0x13a(%eax),%eax
 81dfad5:	98                   	cwtl
 81dfad6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81dfadd:	00 
 81dfade:	89 54 24 08          	mov    %edx,0x8(%esp)
 81dfae2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfae6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfae9:	89 04 24             	mov    %eax,(%esp)
 81dfaec:	e8 75 b4 4a 00       	call   868af66 <_ZN5CUser13incQuestPieceEiib>
 81dfaf1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81dfaf5:	eb 07                	jmp    81dfafe <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81dfaf7:	90                   	nop
 81dfaf8:	eb 04                	jmp    81dfafe <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81dfafa:	90                   	nop
 81dfafb:	eb 01                	jmp    81dfafe <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81dfafd:	90                   	nop
 81dfafe:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81dfb02:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81dfb05:	8b 40 10             	mov    0x10(%eax),%eax
 81dfb08:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81dfb0b:	0f 9f c0             	setg   %al
 81dfb0e:	84 c0                	test   %al,%al
 81dfb10:	0f 85 7c fe ff ff    	jne    81df992 <_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x76>
 81dfb16:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81dfb19:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81dfb1c:	89 50 14             	mov    %edx,0x14(%eax)
 81dfb1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfb22:	89 04 24             	mov    %eax,(%esp)
 81dfb25:	e8 fa b0 4a 00       	call   868ac24 <_ZN5CUser12sendCharacQpEv>
 81dfb2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfb2d:	89 04 24             	mov    %eax,(%esp)
 81dfb30:	e8 f7 b3 4a 00       	call   868af2c <_ZN5CUser20sendCharacQuestPieceEv>
 81dfb35:	b8 00 00 00 00       	mov    $0x0,%eax
 81dfb3a:	83 c4 54             	add    $0x54,%esp
 81dfb3d:	5b                   	pop    %ebx
 81dfb3e:	5d                   	pop    %ebp
 81dfb3f:	c3                   	ret

```

```c
// Dispatcher_Debug_Clear_Quest::process @ 0x81df91c

/* Dispatcher_Debug_Clear_Quest::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Debug_Clear_Quest::process
          (Dispatcher_Debug_Clear_Quest *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  stSelectQuestParam local_48 [40];
  MSG_BASE *local_20;
  ParamBase *local_1c;
  int local_18;
  uint local_14;
  Quest *local_10;
  
  cVar2 = CUser::isGMUser(param_1);
  if (cVar2 == '\x01') {
    local_20 = param_2;
    local_1c = param_3;
    MsgClearQuestIndex::operator=((MsgClearQuestIndex *)(param_3 + 4),(MsgClearQuestIndex *)param_2)
    ;
    local_18 = 0;
    for (local_14 = 0; (int)local_14 < *(int *)(local_20 + 0x10); local_14 = local_14 + 1) {
      std::vector<int,std::allocator<int>>::operator[]
                ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14);
      iVar4 = G_CDataManager();
      local_10 = (Quest *)CDataManager::find_quest(iVar4);
      if (local_10 == (Quest *)0x0) {
        return 1;
      }
      if (local_10 != (Quest *)0x0) {
        stSelectQuestParam::stSelectQuestParam(local_48,param_1);
        cVar2 = Quest::exposeQuest(local_10);
        if (((cVar2 == '\x01') &&
            (cVar2 = Quest::check_possible(local_10,local_48), cVar2 == '\x01')) &&
           (local_10 != (Quest *)0x0)) {
          puVar5 = (uint *)std::vector<int,std::allocator<int>>::operator[]
                                     ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14)
          ;
          uVar1 = *puVar5;
          iVar4 = CUser::getCurCharacQuestW(param_1);
          WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar4 + 4),uVar1);
          if (0 < *(short *)(local_10 + 0x138)) {
            piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                      ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14
                                      );
            CUser::incQuestPoint(param_1,(int)*(short *)(local_10 + 0x138),*piVar6,true);
          }
          if (0 < *(short *)(local_10 + 0x13a)) {
            piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                      ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14
                                      );
            CUser::incQuestPiece(param_1,(int)*(short *)(local_10 + 0x13a),*piVar6,true);
          }
          local_18 = local_18 + 1;
        }
      }
    }
    *(int *)(local_1c + 0x14) = local_18;
    CUser::sendCharacQp(param_1);
    CUser::sendCharacQuestPiece(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = LineFunc(0x51f3,
                     "virtual int Dispatcher_Debug_Clear_Quest::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0,0);
  }
  return uVar3;
}

```

---

## read

```asm
// === 081df840 Dispatcher_Debug_Clear_Quest::read  [0x081df840-0x81df91b] ===
 81df840:	55                   	push   %ebp
 81df841:	89 e5                	mov    %esp,%ebp
 81df843:	83 ec 28             	sub    $0x28,%esp
 81df846:	8b 45 10             	mov    0x10(%ebp),%eax
 81df849:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81df84c:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81df84f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df853:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df856:	89 04 24             	mov    %eax,(%esp)
 81df859:	e8 62 d7 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81df85e:	83 f0 01             	xor    $0x1,%eax
 81df861:	84 c0                	test   %al,%al
 81df863:	74 29                	je     81df88e <_ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE+0x4e>
 81df865:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81df86c:	00 
 81df86d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81df874:	00 
 81df875:	c7 44 24 04 e0 1b bd 	movl   $0x8bd1be0,0x4(%esp)
 81df87c:	08 
 81df87d:	c7 04 24 e1 51 00 00 	movl   $0x51e1,(%esp)
 81df884:	e8 4e 10 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81df889:	e9 8b 00 00 00       	jmp    81df919 <_ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE+0xd9>
 81df88e:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 81df892:	0f bf d0             	movswl %ax,%edx
 81df895:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81df898:	89 50 10             	mov    %edx,0x10(%eax)
 81df89b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81df8a2:	eb 60                	jmp    81df904 <_ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE+0xc4>
 81df8a4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df8a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df8ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df8ae:	89 04 24             	mov    %eax,(%esp)
 81df8b1:	e8 0a d7 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81df8b6:	83 f0 01             	xor    $0x1,%eax
 81df8b9:	84 c0                	test   %al,%al
 81df8bb:	74 26                	je     81df8e3 <_ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE+0xa3>
 81df8bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81df8c4:	00 
 81df8c5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81df8cc:	00 
 81df8cd:	c7 44 24 04 e0 1b bd 	movl   $0x8bd1be0,0x4(%esp)
 81df8d4:	08 
 81df8d5:	c7 04 24 e8 51 00 00 	movl   $0x51e8,(%esp)
 81df8dc:	e8 f6 0f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81df8e1:	eb 36                	jmp    81df919 <_ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE+0xd9>
 81df8e3:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 81df8e7:	98                   	cwtl
 81df8e8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81df8eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81df8ee:	8d 50 14             	lea    0x14(%eax),%edx
 81df8f1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81df8f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df8f8:	89 14 24             	mov    %edx,(%esp)
 81df8fb:	e8 ee e8 ea ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 81df900:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81df904:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81df907:	8b 40 10             	mov    0x10(%eax),%eax
 81df90a:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81df90d:	0f 9f c0             	setg   %al
 81df910:	84 c0                	test   %al,%al
 81df912:	75 90                	jne    81df8a4 <_ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE+0x64>
 81df914:	b8 00 00 00 00       	mov    $0x0,%eax
 81df919:	c9                   	leave
 81df91a:	c3                   	ret
 81df91b:	90                   	nop

```

```c
// Dispatcher_Debug_Clear_Quest::read @ 0x81df840

/* Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Debug_Clear_Quest::read
          (Dispatcher_Debug_Clear_Quest *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  short local_1c;
  short local_1a;
  int local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  cVar1 = PacketBuf::get_short(param_1,&local_1a);
  if (cVar1 == '\x01') {
    *(int *)(local_14 + 0x10) = (int)local_1a;
    for (local_10 = 0; local_10 < *(int *)(local_14 + 0x10); local_10 = local_10 + 1) {
      cVar1 = PacketBuf::get_short(param_1,&local_1c);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x51e8,
                         "virtual int Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&)",0,0
                        );
        return uVar2;
      }
      local_18 = (int)local_1c;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(local_14 + 0x14),&local_18);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x51e1,"virtual int Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081dfb40 Dispatcher_Debug_Clear_Quest::send  [0x081dfb40-0x81dfc97] ===
 81dfb40:	55                   	push   %ebp
 81dfb41:	89 e5                	mov    %esp,%ebp
 81dfb43:	56                   	push   %esi
 81dfb44:	53                   	push   %ebx
 81dfb45:	83 ec 30             	sub    $0x30,%esp
 81dfb48:	8b 45 10             	mov    0x10(%ebp),%eax
 81dfb4b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dfb4e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfb51:	89 04 24             	mov    %eax,(%esp)
 81dfb54:	e8 f3 e1 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dfb59:	c7 44 24 08 c9 01 00 	movl   $0x1c9,0x8(%esp)
 81dfb60:	00 
 81dfb61:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dfb68:	00 
 81dfb69:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfb6c:	89 04 24             	mov    %eax,(%esp)
 81dfb6f:	e8 88 bd ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dfb74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dfb7b:	00 
 81dfb7c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfb7f:	89 04 24             	mov    %eax,(%esp)
 81dfb82:	e8 99 bd ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dfb87:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfb8a:	8b 40 14             	mov    0x14(%eax),%eax
 81dfb8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfb91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfb94:	89 04 24             	mov    %eax,(%esp)
 81dfb97:	e8 08 a3 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81dfb9c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81dfba3:	eb 2a                	jmp    81dfbcf <_ZN28Dispatcher_Debug_Clear_Quest4sendEP5CUserR9ParamBase+0x8f>
 81dfba5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfba8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81dfbab:	83 c2 18             	add    $0x18,%edx
 81dfbae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfbb2:	89 14 24             	mov    %edx,(%esp)
 81dfbb5:	e8 22 e6 ea ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81dfbba:	8b 00                	mov    (%eax),%eax
 81dfbbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfbc0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfbc3:	89 04 24             	mov    %eax,(%esp)
 81dfbc6:	e8 d9 a2 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81dfbcb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81dfbcf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfbd2:	8b 40 14             	mov    0x14(%eax),%eax
 81dfbd5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81dfbd8:	0f 9f c0             	setg   %al
 81dfbdb:	84 c0                	test   %al,%al
 81dfbdd:	75 c6                	jne    81dfba5 <_ZN28Dispatcher_Debug_Clear_Quest4sendEP5CUserR9ParamBase+0x65>
 81dfbdf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dfbe6:	00 
 81dfbe7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfbea:	89 04 24             	mov    %eax,(%esp)
 81dfbed:	e8 66 bd ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81dfbf2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfbf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfbf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfbfc:	89 04 24             	mov    %eax,(%esp)
 81dfbff:	e8 b6 89 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81dfc04:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfc07:	89 04 24             	mov    %eax,(%esp)
 81dfc0a:	e8 35 b4 4a 00       	call   868b044 <_ZN5CUser21send_clear_quest_listEv>
 81dfc0f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81dfc12:	89 04 24             	mov    %eax,(%esp)
 81dfc15:	e8 32 e1 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dfc1a:	8d 5d d8             	lea    -0x28(%ebp),%ebx
 81dfc1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfc20:	89 04 24             	mov    %eax,(%esp)
 81dfc23:	e8 7e ac fb ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 81dfc28:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dfc2c:	89 04 24             	mov    %eax,(%esp)
 81dfc2f:	e8 74 bf 4c 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 81dfc34:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81dfc37:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfc3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfc3e:	89 04 24             	mov    %eax,(%esp)
 81dfc41:	e8 74 89 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81dfc46:	eb 15                	jmp    81dfc5d <_ZN28Dispatcher_Debug_Clear_Quest4sendEP5CUserR9ParamBase+0x11d>
 81dfc48:	89 d3                	mov    %edx,%ebx
 81dfc4a:	89 c6                	mov    %eax,%esi
 81dfc4c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81dfc4f:	89 04 24             	mov    %eax,(%esp)
 81dfc52:	e8 29 e2 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dfc57:	89 f0                	mov    %esi,%eax
 81dfc59:	89 da                	mov    %ebx,%edx
 81dfc5b:	eb 0d                	jmp    81dfc6a <_ZN28Dispatcher_Debug_Clear_Quest4sendEP5CUserR9ParamBase+0x12a>
 81dfc5d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81dfc60:	89 04 24             	mov    %eax,(%esp)
 81dfc63:	e8 18 e2 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dfc68:	eb 1b                	jmp    81dfc85 <_ZN28Dispatcher_Debug_Clear_Quest4sendEP5CUserR9ParamBase+0x145>
 81dfc6a:	89 d3                	mov    %edx,%ebx
 81dfc6c:	89 c6                	mov    %eax,%esi
 81dfc6e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfc71:	89 04 24             	mov    %eax,(%esp)
 81dfc74:	e8 07 e2 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dfc79:	89 f0                	mov    %esi,%eax
 81dfc7b:	89 da                	mov    %ebx,%edx
 81dfc7d:	89 04 24             	mov    %eax,(%esp)
 81dfc80:	e8 cb 3a 90 00       	call   8ae3750 <_Unwind_Resume>
 81dfc85:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dfc88:	89 04 24             	mov    %eax,(%esp)
 81dfc8b:	e8 f0 e1 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dfc90:	83 c4 30             	add    $0x30,%esp
 81dfc93:	5b                   	pop    %ebx
 81dfc94:	5e                   	pop    %esi
 81dfc95:	5d                   	pop    %ebp
 81dfc96:	c3                   	ret
 81dfc97:	90                   	nop

```

```c
// Dispatcher_Debug_Clear_Quest::send @ 0x81dfb40

/* Dispatcher_Debug_Clear_Quest::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Debug_Clear_Quest::send
          (Dispatcher_Debug_Clear_Quest *this,CUser *param_1,ParamBase *param_2)

{
  int *piVar1;
  UserQuest *this_00;
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  uint local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081dfb6f to 081dfc19 has its CatchHandler @ 081dfc6a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1c9);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x14));
  for (local_10 = 0; (int)local_10 < *(int *)(local_14 + 0x14); local_10 = local_10 + 1) {
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(local_14 + 0x18),local_10);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  CUser::send_clear_quest_list(param_1);
  PacketGuard::PacketGuard(local_2c);
  this_00 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 081dfc2f to 081dfc45 has its CatchHandler @ 081dfc48 */
  UserQuest::get_quest_info(this_00,(char *)local_2c);
  CUser::Send(param_1,local_2c);
                    /* try { // try from 081dfc63 to 081dfc67 has its CatchHandler @ 081dfc6a */
  PacketGuard::~PacketGuard(local_2c);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

