# SendingAPC_Info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Send_APC_Info

```asm
// === 085febca SendingAPC_Info::Send_APC_Info  [0x085febca-0x85fed2d] ===
 85febca:	55                   	push   %ebp
 85febcb:	89 e5                	mov    %esp,%ebp
 85febcd:	57                   	push   %edi
 85febce:	56                   	push   %esi
 85febcf:	53                   	push   %ebx
 85febd0:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 85febd6:	8b 45 08             	mov    0x8(%ebp),%eax
 85febd9:	05 38 73 01 00       	add    $0x17338,%eax
 85febde:	89 44 24 08          	mov    %eax,0x8(%esp)
 85febe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85febe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85febe9:	8b 45 08             	mov    0x8(%ebp),%eax
 85febec:	89 04 24             	mov    %eax,(%esp)
 85febef:	e8 12 fd ff ff       	call   85fe906 <_ZN15SendingAPC_Info12Set_APC_InfoERK9TOD_LayerRK8_APCInfo>
 85febf4:	8b 45 08             	mov    0x8(%ebp),%eax
 85febf7:	83 c0 04             	add    $0x4,%eax
 85febfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85febfe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fec01:	89 04 24             	mov    %eax,(%esp)
 85fec04:	e8 41 f2 f8 ff       	call   858de4a <_ZN11PacketGuardC1EP9PacketBuf>
 85fec09:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fec0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fec10:	8b 45 10             	mov    0x10(%ebp),%eax
 85fec13:	89 04 24             	mov    %eax,(%esp)
 85fec16:	e8 9f 99 04 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85fec1b:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec1e:	8b 98 ec 73 01 00    	mov    0x173ec(%eax),%ebx
 85fec24:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec27:	05 dc 73 01 00       	add    $0x173dc,%eax
 85fec2c:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 85fec32:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec35:	8b 80 80 73 01 00    	mov    0x17380(%eax),%eax
 85fec3b:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 85fec41:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec44:	05 68 73 01 00       	add    $0x17368,%eax
 85fec49:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 85fec4f:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec52:	8b 80 64 73 01 00    	mov    0x17364(%eax),%eax
 85fec58:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 85fec5e:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec61:	8b 80 60 73 01 00    	mov    0x17360(%eax),%eax
 85fec67:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 85fec6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec70:	8b b8 5c 73 01 00    	mov    0x1735c(%eax),%edi
 85fec76:	8b 45 08             	mov    0x8(%ebp),%eax
 85fec79:	8d b0 3c 73 01 00    	lea    0x1733c(%eax),%esi
 85fec7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fec82:	89 04 24             	mov    %eax,(%esp)
 85fec85:	e8 b6 ff c2 ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 85fec8a:	0f b7 c0             	movzwl %ax,%eax
 85fec8d:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 85fec91:	8b 95 c4 fe ff ff    	mov    -0x13c(%ebp),%edx
 85fec97:	89 54 24 24          	mov    %edx,0x24(%esp)
 85fec9b:	8b 95 c8 fe ff ff    	mov    -0x138(%ebp),%edx
 85feca1:	89 54 24 20          	mov    %edx,0x20(%esp)
 85feca5:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 85fecab:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85fecaf:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 85fecb5:	89 54 24 18          	mov    %edx,0x18(%esp)
 85fecb9:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 85fecbf:	89 54 24 14          	mov    %edx,0x14(%esp)
 85fecc3:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85fecc7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85feccb:	89 44 24 08          	mov    %eax,0x8(%esp)
 85feccf:	c7 44 24 04 84 69 cd 	movl   $0x8cd6984,0x4(%esp)
 85fecd6:	08 
 85fecd7:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85fecdd:	89 04 24             	mov    %eax,(%esp)
 85fece0:	e8 5b f7 a7 ff       	call   807e440 <sprintf@plt>
 85fece5:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85feceb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fecef:	8b 45 10             	mov    0x10(%ebp),%eax
 85fecf2:	89 04 24             	mov    %eax,(%esp)
 85fecf5:	e8 6c 56 04 00       	call   8644366 <_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc>
 85fecfa:	eb 1b                	jmp    85fed17 <_ZN15SendingAPC_Info13Send_APC_InfoERK9TOD_LayerP5CUser+0x14d>
 85fecfc:	89 d3                	mov    %edx,%ebx
 85fecfe:	89 c6                	mov    %eax,%esi
 85fed00:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fed03:	89 04 24             	mov    %eax,(%esp)
 85fed06:	e8 75 f1 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fed0b:	89 f0                	mov    %esi,%eax
 85fed0d:	89 da                	mov    %ebx,%edx
 85fed0f:	89 04 24             	mov    %eax,(%esp)
 85fed12:	e8 39 4a 4e 00       	call   8ae3750 <_Unwind_Resume>
 85fed17:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fed1a:	89 04 24             	mov    %eax,(%esp)
 85fed1d:	e8 5e f1 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fed22:	81 c4 6c 01 00 00    	add    $0x16c,%esp
 85fed28:	5b                   	pop    %ebx
 85fed29:	5e                   	pop    %esi
 85fed2a:	5f                   	pop    %edi
 85fed2b:	5d                   	pop    %ebp
 85fed2c:	c3                   	ret
 85fed2d:	90                   	nop

```

```c
// SendingAPC_Info::Send_APC_Info @ 0x85febca

/* SendingAPC_Info::Send_APC_Info(TOD_Layer const&, CUser*) */

void __thiscall
SendingAPC_Info::Send_APC_Info(SendingAPC_Info *this,TOD_Layer *param_1,CUser *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char local_128 [256];
  PacketGuard local_28 [24];
  
  Set_APC_Info(this,param_1,(_APCInfo *)(this + 0x17338));
  PacketGuard::PacketGuard(local_28,(PacketBuf *)(this + 4));
                    /* try { // try from 085fec16 to 085fecf9 has its CatchHandler @ 085fecfc */
  CUser::Send(param_2,local_28);
  uVar1 = *(undefined4 *)(this + 0x173ec);
  uVar2 = *(undefined4 *)(this + 0x17380);
  uVar3 = *(undefined4 *)(this + 0x17364);
  uVar4 = *(undefined4 *)(this + 0x17360);
  uVar5 = *(undefined4 *)(this + 0x1735c);
  uVar6 = TOD_Layer::GetLayer(param_1);
  sprintf(local_128,
          "TOD : setting layer:%d, name:%s, lv:%d, job:%d, grow_type:%d, guild_name:%s, pvp_grade:%d, creature_name:%s, creature_id:%d"
          ,uVar6 & 0xffff,this + 0x1733c,uVar5,uVar4,uVar3,this + 0x17368,uVar2,this + 0x173dc,uVar1
         );
  TowerOfDespairMgr::SendMessageToCUser(param_2,local_128);
  PacketGuard::~PacketGuard(local_28);
  return;
}

```

---

## SendingAPC_Info

```asm
// === 085fe860 SendingAPC_Info::SendingAPC_Info  [0x085fe860-0x85fe8c9] ===
 85fe860:	55                   	push   %ebp
 85fe861:	89 e5                	mov    %esp,%ebp
 85fe863:	56                   	push   %esi
 85fe864:	53                   	push   %ebx
 85fe865:	83 ec 10             	sub    $0x10,%esp
 85fe868:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe86b:	83 c0 04             	add    $0x4,%eax
 85fe86e:	89 04 24             	mov    %eax,(%esp)
 85fe871:	e8 4a e0 f8 ff       	call   858c8c0 <_ZN9PacketBufC1Ev>
 85fe876:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe879:	83 c0 04             	add    $0x4,%eax
 85fe87c:	89 04 24             	mov    %eax,(%esp)
 85fe87f:	e8 5e e0 f8 ff       	call   858c8e2 <_ZN9PacketBuf5clearEv>
 85fe884:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe887:	05 38 73 01 00       	add    $0x17338,%eax
 85fe88c:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 85fe893:	00 
 85fe894:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fe89b:	00 
 85fe89c:	89 04 24             	mov    %eax,(%esp)
 85fe89f:	e8 1c f4 a7 ff       	call   807dcc0 <memset@plt>
 85fe8a4:	83 c4 10             	add    $0x10,%esp
 85fe8a7:	5b                   	pop    %ebx
 85fe8a8:	5e                   	pop    %esi
 85fe8a9:	5d                   	pop    %ebp
 85fe8aa:	c3                   	ret
 85fe8ab:	89 d3                	mov    %edx,%ebx
 85fe8ad:	89 c6                	mov    %eax,%esi
 85fe8af:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe8b2:	83 c0 04             	add    $0x4,%eax
 85fe8b5:	89 04 24             	mov    %eax,(%esp)
 85fe8b8:	e8 1f e0 f8 ff       	call   858c8dc <_ZN9PacketBufD1Ev>
 85fe8bd:	89 f0                	mov    %esi,%eax
 85fe8bf:	89 da                	mov    %ebx,%edx
 85fe8c1:	89 04 24             	mov    %eax,(%esp)
 85fe8c4:	e8 87 4e 4e 00       	call   8ae3750 <_Unwind_Resume>
 85fe8c9:	90                   	nop

```

```c
// SendingAPC_Info::SendingAPC_Info @ 0x85fe860

/* SendingAPC_Info::SendingAPC_Info() */

void __thiscall SendingAPC_Info::SendingAPC_Info(SendingAPC_Info *this)

{
  PacketBuf::PacketBuf((PacketBuf *)(this + 4));
                    /* try { // try from 085fe87f to 085fe883 has its CatchHandler @ 085fe8ab */
  PacketBuf::clear((PacketBuf *)(this + 4));
  memset(this + 0x17338,0,0xbc);
  return;
}

```

---

## Set_APC_Info

```asm
// === 085fe906 SendingAPC_Info::Set_APC_Info  [0x085fe906-0x85febc9] ===
 85fe906:	55                   	push   %ebp
 85fe907:	89 e5                	mov    %esp,%ebp
 85fe909:	57                   	push   %edi
 85fe90a:	56                   	push   %esi
 85fe90b:	53                   	push   %ebx
 85fe90c:	83 ec 7c             	sub    $0x7c,%esp
 85fe90f:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe912:	83 c0 04             	add    $0x4,%eax
 85fe915:	89 04 24             	mov    %eax,(%esp)
 85fe918:	e8 c5 df f8 ff       	call   858c8e2 <_ZN9PacketBuf5clearEv>
 85fe91d:	8b 45 10             	mov    0x10(%ebp),%eax
 85fe920:	8b 10                	mov    (%eax),%edx
 85fe922:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe925:	89 10                	mov    %edx,(%eax)
 85fe927:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe92a:	83 c0 04             	add    $0x4,%eax
 85fe92d:	c7 44 24 08 5a 01 00 	movl   $0x15a,0x8(%esp)
 85fe934:	00 
 85fe935:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fe93c:	00 
 85fe93d:	89 04 24             	mov    %eax,(%esp)
 85fe940:	e8 05 e0 f8 ff       	call   858c94a <_ZN9PacketBuf10put_headerEii>
 85fe945:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe948:	89 04 24             	mov    %eax,(%esp)
 85fe94b:	e8 f0 02 c3 ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 85fe950:	0f b7 c0             	movzwl %ax,%eax
 85fe953:	8b 55 08             	mov    0x8(%ebp),%edx
 85fe956:	83 c2 04             	add    $0x4,%edx
 85fe959:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe95d:	89 14 24             	mov    %edx,(%esp)
 85fe960:	e8 39 cf ac ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 85fe965:	8b 45 10             	mov    0x10(%ebp),%eax
 85fe968:	83 c0 04             	add    $0x4,%eax
 85fe96b:	89 04 24             	mov    %eax,(%esp)
 85fe96e:	e8 3d fa a7 ff       	call   807e3b0 <strlen@plt>
 85fe973:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85fe976:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe979:	8d 50 04             	lea    0x4(%eax),%edx
 85fe97c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85fe97f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe983:	89 14 24             	mov    %edx,(%esp)
 85fe986:	e8 37 cf ac ff       	call   80cb8c2 <_ZN9PacketBuf7put_intEi>
 85fe98b:	8b 45 10             	mov    0x10(%ebp),%eax
 85fe98e:	8d 48 04             	lea    0x4(%eax),%ecx
 85fe991:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe994:	8d 50 04             	lea    0x4(%eax),%edx
 85fe997:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85fe99a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fe99e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85fe9a2:	89 14 24             	mov    %edx,(%esp)
 85fe9a5:	e8 da cc c2 ff       	call   822b684 <_ZN9PacketBuf7put_strEPKci>
 85fe9aa:	8b 45 10             	mov    0x10(%ebp),%eax
 85fe9ad:	8b 40 24             	mov    0x24(%eax),%eax
 85fe9b0:	8b 55 08             	mov    0x8(%ebp),%edx
 85fe9b3:	83 c2 04             	add    $0x4,%edx
 85fe9b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe9ba:	89 14 24             	mov    %edx,(%esp)
 85fe9bd:	e8 dc ce ac ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 85fe9c2:	8b 45 10             	mov    0x10(%ebp),%eax
 85fe9c5:	8b 40 28             	mov    0x28(%eax),%eax
 85fe9c8:	8b 55 08             	mov    0x8(%ebp),%edx
 85fe9cb:	83 c2 04             	add    $0x4,%edx
 85fe9ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe9d2:	89 14 24             	mov    %edx,(%esp)
 85fe9d5:	e8 c4 ce ac ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 85fe9da:	8b 45 10             	mov    0x10(%ebp),%eax
 85fe9dd:	8b 40 2c             	mov    0x2c(%eax),%eax
 85fe9e0:	8b 55 08             	mov    0x8(%ebp),%edx
 85fe9e3:	83 c2 04             	add    $0x4,%edx
 85fe9e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe9ea:	89 14 24             	mov    %edx,(%esp)
 85fe9ed:	e8 ac ce ac ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 85fe9f2:	8b 45 10             	mov    0x10(%ebp),%eax
 85fe9f5:	83 c0 30             	add    $0x30,%eax
 85fe9f8:	89 04 24             	mov    %eax,(%esp)
 85fe9fb:	e8 b0 f9 a7 ff       	call   807e3b0 <strlen@plt>
 85fea00:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85fea03:	8b 45 08             	mov    0x8(%ebp),%eax
 85fea06:	8d 50 04             	lea    0x4(%eax),%edx
 85fea09:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85fea0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fea10:	89 14 24             	mov    %edx,(%esp)
 85fea13:	e8 aa ce ac ff       	call   80cb8c2 <_ZN9PacketBuf7put_intEi>
 85fea18:	8b 45 10             	mov    0x10(%ebp),%eax
 85fea1b:	8d 48 30             	lea    0x30(%eax),%ecx
 85fea1e:	8b 45 08             	mov    0x8(%ebp),%eax
 85fea21:	8d 50 04             	lea    0x4(%eax),%edx
 85fea24:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85fea27:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fea2b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85fea2f:	89 14 24             	mov    %edx,(%esp)
 85fea32:	e8 4d cc c2 ff       	call   822b684 <_ZN9PacketBuf7put_strEPKci>
 85fea37:	8b 45 10             	mov    0x10(%ebp),%eax
 85fea3a:	8b 40 48             	mov    0x48(%eax),%eax
 85fea3d:	8b 55 08             	mov    0x8(%ebp),%edx
 85fea40:	83 c2 04             	add    $0x4,%edx
 85fea43:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fea47:	89 14 24             	mov    %edx,(%esp)
 85fea4a:	e8 73 ce ac ff       	call   80cb8c2 <_ZN9PacketBuf7put_intEi>
 85fea4f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85fea56:	eb 23                	jmp    85fea7b <_ZN15SendingAPC_Info12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x175>
 85fea58:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85fea5b:	8b 45 10             	mov    0x10(%ebp),%eax
 85fea5e:	83 c2 10             	add    $0x10,%edx
 85fea61:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 85fea65:	8b 55 08             	mov    0x8(%ebp),%edx
 85fea68:	83 c2 04             	add    $0x4,%edx
 85fea6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fea6f:	89 14 24             	mov    %edx,(%esp)
 85fea72:	e8 4b ce ac ff       	call   80cb8c2 <_ZN9PacketBuf7put_intEi>
 85fea77:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85fea7b:	83 7d e4 15          	cmpl   $0x15,-0x1c(%ebp)
 85fea7f:	0f 9e c0             	setle  %al
 85fea82:	84 c0                	test   %al,%al
 85fea84:	75 d2                	jne    85fea58 <_ZN15SendingAPC_Info12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x152>
 85fea86:	8b 45 10             	mov    0x10(%ebp),%eax
 85fea89:	05 a4 00 00 00       	add    $0xa4,%eax
 85fea8e:	89 04 24             	mov    %eax,(%esp)
 85fea91:	e8 1a f9 a7 ff       	call   807e3b0 <strlen@plt>
 85fea96:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85fea99:	8b 45 08             	mov    0x8(%ebp),%eax
 85fea9c:	8d 50 04             	lea    0x4(%eax),%edx
 85fea9f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85feaa2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85feaa6:	89 14 24             	mov    %edx,(%esp)
 85feaa9:	e8 14 ce ac ff       	call   80cb8c2 <_ZN9PacketBuf7put_intEi>
 85feaae:	8b 45 10             	mov    0x10(%ebp),%eax
 85feab1:	8d 88 a4 00 00 00    	lea    0xa4(%eax),%ecx
 85feab7:	8b 45 08             	mov    0x8(%ebp),%eax
 85feaba:	8d 50 04             	lea    0x4(%eax),%edx
 85feabd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85feac0:	89 44 24 08          	mov    %eax,0x8(%esp)
 85feac4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85feac8:	89 14 24             	mov    %edx,(%esp)
 85feacb:	e8 b4 cb c2 ff       	call   822b684 <_ZN9PacketBuf7put_strEPKci>
 85fead0:	8b 45 10             	mov    0x10(%ebp),%eax
 85fead3:	8b 80 b4 00 00 00    	mov    0xb4(%eax),%eax
 85fead9:	8b 55 08             	mov    0x8(%ebp),%edx
 85feadc:	83 c2 04             	add    $0x4,%edx
 85feadf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85feae3:	89 14 24             	mov    %edx,(%esp)
 85feae6:	e8 d7 cd ac ff       	call   80cb8c2 <_ZN9PacketBuf7put_intEi>
 85feaeb:	8b 45 08             	mov    0x8(%ebp),%eax
 85feaee:	83 c0 04             	add    $0x4,%eax
 85feaf1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85feaf8:	00 
 85feaf9:	89 04 24             	mov    %eax,(%esp)
 85feafc:	e8 47 ea f8 ff       	call   858d548 <_ZN9PacketBuf8finalizeEb>
 85feb01:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb04:	8b b0 b4 00 00 00    	mov    0xb4(%eax),%esi
 85feb0a:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb0d:	05 a4 00 00 00       	add    $0xa4,%eax
 85feb12:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85feb15:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb18:	8b 40 48             	mov    0x48(%eax),%eax
 85feb1b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85feb1e:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb21:	83 c0 30             	add    $0x30,%eax
 85feb24:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85feb27:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb2a:	8b 40 2c             	mov    0x2c(%eax),%eax
 85feb2d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85feb30:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb33:	8b 40 28             	mov    0x28(%eax),%eax
 85feb36:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85feb39:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb3c:	8b 40 24             	mov    0x24(%eax),%eax
 85feb3f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85feb42:	8b 45 10             	mov    0x10(%ebp),%eax
 85feb45:	8d 78 04             	lea    0x4(%eax),%edi
 85feb48:	8b 45 0c             	mov    0xc(%ebp),%eax
 85feb4b:	89 04 24             	mov    %eax,(%esp)
 85feb4e:	e8 ed 00 c3 ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 85feb53:	0f b7 d8             	movzwl %ax,%ebx
 85feb56:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85feb5d:	00 
 85feb5e:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 85feb65:	00 
 85feb66:	c7 44 24 04 c0 76 cd 	movl   $0x8cd76c0,0x4(%esp)
 85feb6d:	08 
 85feb6e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85feb71:	89 04 24             	mov    %eax,(%esp)
 85feb74:	e8 9f 0b f5 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85feb79:	89 74 24 28          	mov    %esi,0x28(%esp)
 85feb7d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85feb80:	89 44 24 24          	mov    %eax,0x24(%esp)
 85feb84:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85feb87:	89 44 24 20          	mov    %eax,0x20(%esp)
 85feb8b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85feb8e:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85feb92:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85feb95:	89 44 24 18          	mov    %eax,0x18(%esp)
 85feb99:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85feb9c:	89 44 24 14          	mov    %eax,0x14(%esp)
 85feba0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85feba3:	89 44 24 10          	mov    %eax,0x10(%esp)
 85feba7:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85febab:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85febaf:	c7 44 24 04 04 69 cd 	movl   $0x8cd6904,0x4(%esp)
 85febb6:	08 
 85febb7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85febba:	89 04 24             	mov    %eax,(%esp)
 85febbd:	e8 c6 0b f5 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85febc2:	83 c4 7c             	add    $0x7c,%esp
 85febc5:	5b                   	pop    %ebx
 85febc6:	5e                   	pop    %esi
 85febc7:	5f                   	pop    %edi
 85febc8:	5d                   	pop    %ebp
 85febc9:	c3                   	ret

```

```c
// SendingAPC_Info::Set_APC_Info @ 0x85fe906

/* SendingAPC_Info::Set_APC_Info(TOD_Layer const&, _APCInfo const&) */

void __thiscall
SendingAPC_Info::Set_APC_Info(SendingAPC_Info *this,TOD_Layer *param_1,_APCInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  cMyTrace local_3c [16];
  size_t local_2c;
  size_t local_28;
  size_t local_24;
  int local_20;
  
  PacketBuf::clear((PacketBuf *)(this + 4));
  *(undefined4 *)this = *(undefined4 *)param_2;
  PacketBuf::put_header((PacketBuf *)(this + 4),0,0x15a);
  uVar6 = TOD_Layer::GetLayer(param_1);
  PacketBuf::put_byte((PacketBuf *)(this + 4),uVar6 & 0xffff);
  local_2c = strlen((char *)(param_2 + 4));
  PacketBuf::put_int((PacketBuf *)(this + 4),local_2c);
  PacketBuf::put_str((PacketBuf *)(this + 4),(char *)(param_2 + 4),local_2c);
  PacketBuf::put_byte((PacketBuf *)(this + 4),*(int *)(param_2 + 0x24));
  PacketBuf::put_byte((PacketBuf *)(this + 4),*(int *)(param_2 + 0x28));
  PacketBuf::put_byte((PacketBuf *)(this + 4),*(int *)(param_2 + 0x2c));
  local_28 = strlen((char *)(param_2 + 0x30));
  PacketBuf::put_int((PacketBuf *)(this + 4),local_28);
  PacketBuf::put_str((PacketBuf *)(this + 4),(char *)(param_2 + 0x30),local_28);
  PacketBuf::put_int((PacketBuf *)(this + 4),*(int *)(param_2 + 0x48));
  for (local_20 = 0; local_20 < 0x16; local_20 = local_20 + 1) {
    PacketBuf::put_int((PacketBuf *)(this + 4),*(int *)(param_2 + (local_20 + 0x10) * 4 + 0xc));
  }
  local_24 = strlen((char *)(param_2 + 0xa4));
  PacketBuf::put_int((PacketBuf *)(this + 4),local_24);
  PacketBuf::put_str((PacketBuf *)(this + 4),(char *)(param_2 + 0xa4),local_24);
  PacketBuf::put_int((PacketBuf *)(this + 4),*(int *)(param_2 + 0xb4));
  PacketBuf::finalize((PacketBuf *)(this + 4),true);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = TOD_Layer::GetLayer(param_1);
  cMyTrace::cMyTrace(local_3c,
                     "void SendingAPC_Info::Set_APC_Info(const TOD_Layer&, const _APCInfo&)",0x68,5)
  ;
  cMyTrace::operator()
            (local_3c,
             "@TOD : setting layer:%d, name:%s, lv:%d, job:%d, grow_type:%d, guild_name:%s, pvp_grade:%d, creature_name:%s, creature_id:%d"
             ,uVar6 & 0xffff,param_2 + 4,uVar5,uVar4,uVar3,param_2 + 0x30,uVar2,param_2 + 0xa4,uVar1
            );
  return;
}

```

---

## set_data

```asm
// === 085fe8e0 SendingAPC_Info::set_data  [0x085fe8e0-0x85fe905] ===
 85fe8e0:	55                   	push   %ebp
 85fe8e1:	89 e5                	mov    %esp,%ebp
 85fe8e3:	57                   	push   %edi
 85fe8e4:	56                   	push   %esi
 85fe8e5:	53                   	push   %ebx
 85fe8e6:	8b 55 08             	mov    0x8(%ebp),%edx
 85fe8e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe8ec:	8d 9a 38 73 01 00    	lea    0x17338(%edx),%ebx
 85fe8f2:	89 c2                	mov    %eax,%edx
 85fe8f4:	b8 2f 00 00 00       	mov    $0x2f,%eax
 85fe8f9:	89 df                	mov    %ebx,%edi
 85fe8fb:	89 d6                	mov    %edx,%esi
 85fe8fd:	89 c1                	mov    %eax,%ecx
 85fe8ff:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85fe901:	5b                   	pop    %ebx
 85fe902:	5e                   	pop    %esi
 85fe903:	5f                   	pop    %edi
 85fe904:	5d                   	pop    %ebp
 85fe905:	c3                   	ret

```

```c
// SendingAPC_Info::set_data @ 0x85fe8e0

/* SendingAPC_Info::set_data(_APCInfo const&) */

void __thiscall SendingAPC_Info::set_data(SendingAPC_Info *this,_APCInfo *param_1)

{
  int iVar1;
  SendingAPC_Info *pSVar2;
  
  pSVar2 = this + 0x17338;
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pSVar2 = pSVar2 + 4;
  }
  return;
}

```

---

## ~SendingAPC_Info

```asm
// === 085fe8ca SendingAPC_Info::~SendingAPC_Info  [0x085fe8ca-0x85fe8df] ===
 85fe8ca:	55                   	push   %ebp
 85fe8cb:	89 e5                	mov    %esp,%ebp
 85fe8cd:	83 ec 18             	sub    $0x18,%esp
 85fe8d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe8d3:	83 c0 04             	add    $0x4,%eax
 85fe8d6:	89 04 24             	mov    %eax,(%esp)
 85fe8d9:	e8 fe df f8 ff       	call   858c8dc <_ZN9PacketBufD1Ev>
 85fe8de:	c9                   	leave
 85fe8df:	c3                   	ret

```

```c
// SendingAPC_Info::~SendingAPC_Info @ 0x85fe8ca

/* SendingAPC_Info::~SendingAPC_Info() */

void __thiscall SendingAPC_Info::~SendingAPC_Info(SendingAPC_Info *this)

{
  PacketBuf::~PacketBuf((PacketBuf *)(this + 4));
  return;
}

```

