# WongWork__CHandlePremium

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## handleNotifyPremiumInfo

```asm
// === 086af8b4 WongWork::CHandlePremium::handleNotifyPremiumInfo  [0x086af8b4-0x86af96d] ===
 86af8b4:	55                   	push   %ebp
 86af8b5:	89 e5                	mov    %esp,%ebp
 86af8b7:	56                   	push   %esi
 86af8b8:	53                   	push   %ebx
 86af8b9:	83 ec 20             	sub    $0x20,%esp
 86af8bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af8bf:	89 04 24             	mov    %eax,(%esp)
 86af8c2:	e8 85 e4 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86af8c7:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 86af8ce:	00 
 86af8cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86af8d6:	00 
 86af8d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af8da:	89 04 24             	mov    %eax,(%esp)
 86af8dd:	e8 1a c0 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86af8e2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86af8e9:	00 
 86af8ea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af8ed:	89 04 24             	mov    %eax,(%esp)
 86af8f0:	e8 af a5 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86af8f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86af8f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af8fc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af8ff:	89 04 24             	mov    %eax,(%esp)
 86af902:	e8 19 c0 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86af907:	8b 45 10             	mov    0x10(%ebp),%eax
 86af90a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af90e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af911:	89 04 24             	mov    %eax,(%esp)
 86af914:	e8 23 c0 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86af919:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86af920:	00 
 86af921:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af924:	89 04 24             	mov    %eax,(%esp)
 86af927:	e8 2c c0 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86af92c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af92f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af933:	8b 45 08             	mov    0x8(%ebp),%eax
 86af936:	89 04 24             	mov    %eax,(%esp)
 86af939:	e8 7c 8c f9 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86af93e:	eb 1b                	jmp    86af95b <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii+0xa7>
 86af940:	89 d3                	mov    %edx,%ebx
 86af942:	89 c6                	mov    %eax,%esi
 86af944:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af947:	89 04 24             	mov    %eax,(%esp)
 86af94a:	e8 31 e5 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86af94f:	89 f0                	mov    %esi,%eax
 86af951:	89 da                	mov    %ebx,%edx
 86af953:	89 04 24             	mov    %eax,(%esp)
 86af956:	e8 f5 3d 43 00       	call   8ae3750 <_Unwind_Resume>
 86af95b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86af95e:	89 04 24             	mov    %eax,(%esp)
 86af961:	e8 1a e5 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86af966:	83 c4 20             	add    $0x20,%esp
 86af969:	5b                   	pop    %ebx
 86af96a:	5e                   	pop    %esi
 86af96b:	5d                   	pop    %ebp
 86af96c:	c3                   	ret
 86af96d:	90                   	nop

```

```c
// WongWork::CHandlePremium::handleNotifyPremiumInfo @ 0x86af8b4

/* WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int) */

void WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086af8dd to 086af93d has its CatchHandler @ 086af940 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## handlePremiumEffect

```asm
// === 086afc32 WongWork::CHandlePremium::handlePremiumEffect  [0x086afc32-0x86b02fd] ===
 86afc32:	55                   	push   %ebp
 86afc33:	89 e5                	mov    %esp,%ebp
 86afc35:	57                   	push   %edi
 86afc36:	56                   	push   %esi
 86afc37:	53                   	push   %ebx
 86afc38:	81 ec ec 00 00 00    	sub    $0xec,%esp
 86afc3e:	8b 45 08             	mov    0x8(%ebp),%eax
 86afc41:	89 04 24             	mov    %eax,(%esp)
 86afc44:	e8 4b c2 f8 ff       	call   863be94 <_ZN5CUser15GetPremiumInfoWEv>
 86afc49:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86afc4c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86afc53:	e8 46 c0 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86afc58:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86afc5b:	8b 45 08             	mov    0x8(%ebp),%eax
 86afc5e:	89 04 24             	mov    %eax,(%esp)
 86afc61:	e8 3c c2 f8 ff       	call   863bea2 <_ZNK5CUser13IsPremiumUserEv>
 86afc66:	84 c0                	test   %al,%al
 86afc68:	0f 84 85 06 00 00    	je     86b02f3 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x6c1>
 86afc6e:	8b 55 0c             	mov    0xc(%ebp),%edx
 86afc71:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86afc74:	89 54 24 08          	mov    %edx,0x8(%esp)
 86afc78:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 86afc7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86afc7f:	89 04 24             	mov    %eax,(%esp)
 86afc82:	e8 15 e2 ff ff       	call   86ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>
 86afc87:	83 ec 04             	sub    $0x4,%esp
 86afc8a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 86afc91:	e9 83 05 00 00       	jmp    86b0219 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x5e7>
 86afc96:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86afc99:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afc9d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86afca0:	89 04 24             	mov    %eax,(%esp)
 86afca3:	e8 92 a1 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86afca8:	8b 40 04             	mov    0x4(%eax),%eax
 86afcab:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 86afcae:	0f 9f c0             	setg   %al
 86afcb1:	84 c0                	test   %al,%al
 86afcb3:	0f 84 86 00 00 00    	je     86afd3f <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x10d>
 86afcb9:	8b 45 08             	mov    0x8(%ebp),%eax
 86afcbc:	89 04 24             	mov    %eax,(%esp)
 86afcbf:	e8 aa a6 a2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86afcc4:	89 c6                	mov    %eax,%esi
 86afcc6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86afcc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afccd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86afcd0:	89 04 24             	mov    %eax,(%esp)
 86afcd3:	e8 62 a1 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86afcd8:	8b 00                	mov    (%eax),%eax
 86afcda:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 86afce0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86afce3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afce7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86afcea:	89 04 24             	mov    %eax,(%esp)
 86afced:	e8 48 a1 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86afcf2:	8b 40 04             	mov    0x4(%eax),%eax
 86afcf5:	89 c7                	mov    %eax,%edi
 86afcf7:	2b 7d c8             	sub    -0x38(%ebp),%edi
 86afcfa:	8b 45 08             	mov    0x8(%ebp),%eax
 86afcfd:	89 04 24             	mov    %eax,(%esp)
 86afd00:	e8 91 8f a1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86afd05:	89 c3                	mov    %eax,%ebx
 86afd07:	e8 70 67 a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86afd0c:	89 74 24 18          	mov    %esi,0x18(%esp)
 86afd10:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86afd16:	89 54 24 14          	mov    %edx,0x14(%esp)
 86afd1a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86afd1e:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 86afd25:	00 
 86afd26:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86afd2a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86afd31:	00 
 86afd32:	89 04 24             	mov    %eax,(%esp)
 86afd35:	e8 dc 10 f8 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86afd3a:	e9 d6 04 00 00       	jmp    86b0215 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x5e3>
 86afd3f:	8b 45 08             	mov    0x8(%ebp),%eax
 86afd42:	89 04 24             	mov    %eax,(%esp)
 86afd45:	e8 60 69 bf ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 86afd4a:	89 c3                	mov    %eax,%ebx
 86afd4c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86afd4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afd53:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86afd56:	89 04 24             	mov    %eax,(%esp)
 86afd59:	e8 dc a0 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86afd5e:	8b 40 04             	mov    0x4(%eax),%eax
 86afd61:	39 c3                	cmp    %eax,%ebx
 86afd63:	0f 9e c0             	setle  %al
 86afd66:	84 c0                	test   %al,%al
 86afd68:	0f 84 f3 02 00 00    	je     86b0061 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x42f>
 86afd6e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86afd71:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afd75:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86afd78:	89 04 24             	mov    %eax,(%esp)
 86afd7b:	e8 ba a0 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86afd80:	8b 10                	mov    (%eax),%edx
 86afd82:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86afd85:	89 54 24 08          	mov    %edx,0x8(%esp)
 86afd89:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 86afd8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86afd90:	89 04 24             	mov    %eax,(%esp)
 86afd93:	e8 e4 e1 ff ff       	call   86adf7c <_ZN8WongWork12CUserPremium16GetAdvantageItemEi>
 86afd98:	83 ec 04             	sub    $0x4,%esp
 86afd9b:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86afda2:	e9 c3 01 00 00       	jmp    86aff6a <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x338>
 86afda7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86afdaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afdae:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86afdb1:	89 04 24             	mov    %eax,(%esp)
 86afdb4:	e8 eb aa a3 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 86afdb9:	8b 00                	mov    (%eax),%eax
 86afdbb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86afdbe:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86afdc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afdc5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86afdc8:	89 04 24             	mov    %eax,(%esp)
 86afdcb:	e8 d4 aa a3 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 86afdd0:	8b 40 04             	mov    0x4(%eax),%eax
 86afdd3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86afdd6:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86afddc:	89 04 24             	mov    %eax,(%esp)
 86afddf:	e8 70 ba a1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 86afde4:	e8 b2 c3 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86afde9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86afdec:	89 54 24 04          	mov    %edx,0x4(%esp)
 86afdf0:	89 04 24             	mov    %eax,(%esp)
 86afdf3:	e8 3a fc ca ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 86afdf8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86afdfb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86afdfe:	8b 00                	mov    (%eax),%eax
 86afe00:	83 c0 08             	add    $0x8,%eax
 86afe03:	8b 10                	mov    (%eax),%edx
 86afe05:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86afe0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afe0f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86afe12:	89 04 24             	mov    %eax,(%esp)
 86afe15:	ff d2                	call   *%edx
 86afe17:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86afe1a:	89 85 6a ff ff ff    	mov    %eax,-0x96(%ebp)
 86afe20:	0f b6 85 69 ff ff ff 	movzbl -0x97(%ebp),%eax
 86afe27:	3c 01                	cmp    $0x1,%al
 86afe29:	74 0b                	je     86afe36 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x204>
 86afe2b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86afe2e:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 86afe34:	eb 11                	jmp    86afe47 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x215>
 86afe36:	8b 45 08             	mov    0x8(%ebp),%eax
 86afe39:	89 04 24             	mov    %eax,(%esp)
 86afe3c:	e8 b3 ff b7 ff       	call   822fdf4 <_ZN5CUser15GetSeedFromDateEv>
 86afe41:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 86afe47:	8b 45 08             	mov    0x8(%ebp),%eax
 86afe4a:	89 04 24             	mov    %eax,(%esp)
 86afe4d:	e8 3c a4 a2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86afe52:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 86afe59:	00 
 86afe5a:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 86afe61:	00 
 86afe62:	c7 44 24 44 0e 00 00 	movl   $0xe,0x44(%esp)
 86afe69:	00 
 86afe6a:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 86afe70:	89 54 24 04          	mov    %edx,0x4(%esp)
 86afe74:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 86afe7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 86afe7e:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 86afe84:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86afe88:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 86afe8e:	89 54 24 10          	mov    %edx,0x10(%esp)
 86afe92:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 86afe98:	89 54 24 14          	mov    %edx,0x14(%esp)
 86afe9c:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 86afea2:	89 54 24 18          	mov    %edx,0x18(%esp)
 86afea6:	8b 55 80             	mov    -0x80(%ebp),%edx
 86afea9:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 86afead:	8b 55 84             	mov    -0x7c(%ebp),%edx
 86afeb0:	89 54 24 20          	mov    %edx,0x20(%esp)
 86afeb4:	8b 55 88             	mov    -0x78(%ebp),%edx
 86afeb7:	89 54 24 24          	mov    %edx,0x24(%esp)
 86afebb:	8b 55 8c             	mov    -0x74(%ebp),%edx
 86afebe:	89 54 24 28          	mov    %edx,0x28(%esp)
 86afec2:	8b 55 90             	mov    -0x70(%ebp),%edx
 86afec5:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 86afec9:	8b 55 94             	mov    -0x6c(%ebp),%edx
 86afecc:	89 54 24 30          	mov    %edx,0x30(%esp)
 86afed0:	8b 55 98             	mov    -0x68(%ebp),%edx
 86afed3:	89 54 24 34          	mov    %edx,0x34(%esp)
 86afed7:	8b 55 9c             	mov    -0x64(%ebp),%edx
 86afeda:	89 54 24 38          	mov    %edx,0x38(%esp)
 86afede:	8b 55 a0             	mov    -0x60(%ebp),%edx
 86afee1:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 86afee5:	0f b6 55 a4          	movzbl -0x5c(%ebp),%edx
 86afee9:	88 54 24 40          	mov    %dl,0x40(%esp)
 86afeed:	89 04 24             	mov    %eax,(%esp)
 86afef0:	e8 91 2e e5 ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 86afef5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86afef8:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86afefc:	78 24                	js     86aff22 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x2f0>
 86afefe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86aff01:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86aff05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86aff0c:	00 
 86aff0d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86aff14:	00 
 86aff15:	8b 45 08             	mov    0x8(%ebp),%eax
 86aff18:	89 04 24             	mov    %eax,(%esp)
 86aff1b:	e8 3a c7 fc ff       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 86aff20:	eb 44                	jmp    86aff66 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x334>
 86aff22:	8b 45 08             	mov    0x8(%ebp),%eax
 86aff25:	89 04 24             	mov    %eax,(%esp)
 86aff28:	e8 21 bd a1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86aff2d:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86aff34:	00 
 86aff35:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86aff3c:	00 
 86aff3d:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86aff44:	00 
 86aff45:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86aff49:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86aff50:	00 
 86aff51:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86aff57:	89 44 24 04          	mov    %eax,0x4(%esp)
 86aff5b:	8b 45 08             	mov    0x8(%ebp),%eax
 86aff5e:	89 04 24             	mov    %eax,(%esp)
 86aff61:	e8 62 5b ea ff       	call   8555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>
 86aff66:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 86aff6a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86aff6d:	89 04 24             	mov    %eax,(%esp)
 86aff70:	e8 9f d8 a2 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 86aff75:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 86aff78:	0f 97 c0             	seta   %al
 86aff7b:	84 c0                	test   %al,%al
 86aff7d:	0f 85 24 fe ff ff    	jne    86afda7 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x175>
 86aff83:	81 7d 0c 0f 27 00 00 	cmpl   $0x270f,0xc(%ebp)
 86aff8a:	0f 84 c6 00 00 00    	je     86b0056 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x424>
 86aff90:	8b 45 08             	mov    0x8(%ebp),%eax
 86aff93:	89 04 24             	mov    %eax,(%esp)
 86aff96:	e8 e3 a2 a2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86aff9b:	89 04 24             	mov    %eax,(%esp)
 86aff9e:	e8 e7 d6 b7 ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 86affa3:	89 c3                	mov    %eax,%ebx
 86affa5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86affa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86affac:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86affaf:	89 04 24             	mov    %eax,(%esp)
 86affb2:	e8 83 9e db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86affb7:	8b 10                	mov    (%eax),%edx
 86affb9:	89 d0                	mov    %edx,%eax
 86affbb:	c1 e0 03             	shl    $0x3,%eax
 86affbe:	01 d0                	add    %edx,%eax
 86affc0:	c1 e0 05             	shl    $0x5,%eax
 86affc3:	8b 80 78 3a 48 09    	mov    0x9483a78(%eax),%eax
 86affc9:	01 c3                	add    %eax,%ebx
 86affcb:	8b 45 08             	mov    0x8(%ebp),%eax
 86affce:	89 04 24             	mov    %eax,(%esp)
 86affd1:	e8 b8 a2 a2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86affd6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86affda:	89 04 24             	mov    %eax,(%esp)
 86affdd:	e8 9a d6 b7 ff       	call   822d67c <_ZN10CInventory7SetCoinEj>
 86affe2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86affe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86affe9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86affec:	89 04 24             	mov    %eax,(%esp)
 86affef:	e8 46 9e db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86afff4:	8b 10                	mov    (%eax),%edx
 86afff6:	89 d0                	mov    %edx,%eax
 86afff8:	c1 e0 03             	shl    $0x3,%eax
 86afffb:	01 d0                	add    %edx,%eax
 86afffd:	c1 e0 05             	shl    $0x5,%eax
 86b0000:	8b 80 78 3a 48 09    	mov    0x9483a78(%eax),%eax
 86b0006:	89 c3                	mov    %eax,%ebx
 86b0008:	8b 45 08             	mov    0x8(%ebp),%eax
 86b000b:	89 04 24             	mov    %eax,(%esp)
 86b000e:	e8 6b a2 a2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86b0013:	89 04 24             	mov    %eax,(%esp)
 86b0016:	e8 6f d6 b7 ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 86b001b:	8b 55 08             	mov    0x8(%ebp),%edx
 86b001e:	81 c2 00 97 07 00    	add    $0x79700,%edx
 86b0024:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 86b002b:	00 
 86b002c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b0030:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b0034:	89 14 24             	mov    %edx,(%esp)
 86b0037:	e8 54 3b fd ff       	call   8683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>
 86b003c:	eb 18                	jmp    86b0056 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x424>
 86b003e:	89 d3                	mov    %edx,%ebx
 86b0040:	89 c6                	mov    %eax,%esi
 86b0042:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86b0045:	89 04 24             	mov    %eax,(%esp)
 86b0048:	e8 9d 49 a8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86b004d:	89 f0                	mov    %esi,%eax
 86b004f:	89 da                	mov    %ebx,%edx
 86b0051:	e9 77 02 00 00       	jmp    86b02cd <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x69b>
 86b0056:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86b0059:	89 04 24             	mov    %eax,(%esp)
 86b005c:	e8 89 49 a8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86b0061:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b0064:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b0068:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b006b:	89 04 24             	mov    %eax,(%esp)
 86b006e:	e8 c7 9d db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86b0073:	8b 10                	mov    (%eax),%edx
 86b0075:	89 d0                	mov    %edx,%eax
 86b0077:	c1 e0 03             	shl    $0x3,%eax
 86b007a:	01 d0                	add    %edx,%eax
 86b007c:	c1 e0 05             	shl    $0x5,%eax
 86b007f:	8b 80 44 3a 48 09    	mov    0x9483a44(%eax),%eax
 86b0085:	85 c0                	test   %eax,%eax
 86b0087:	74 21                	je     86b00aa <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x478>
 86b0089:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b008c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b0090:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b0093:	89 04 24             	mov    %eax,(%esp)
 86b0096:	e8 9f 9d db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86b009b:	8b 40 08             	mov    0x8(%eax),%eax
 86b009e:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 86b00a1:	7e 07                	jle    86b00aa <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x478>
 86b00a3:	b8 01 00 00 00       	mov    $0x1,%eax
 86b00a8:	eb 05                	jmp    86b00af <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x47d>
 86b00aa:	b8 00 00 00 00       	mov    $0x0,%eax
 86b00af:	84 c0                	test   %al,%al
 86b00b1:	0f 84 81 00 00 00    	je     86b0138 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x506>
 86b00b7:	8b 45 08             	mov    0x8(%ebp),%eax
 86b00ba:	89 04 24             	mov    %eax,(%esp)
 86b00bd:	e8 ac a2 a2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86b00c2:	89 c6                	mov    %eax,%esi
 86b00c4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b00c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b00cb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b00ce:	89 04 24             	mov    %eax,(%esp)
 86b00d1:	e8 64 9d db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86b00d6:	8b 00                	mov    (%eax),%eax
 86b00d8:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 86b00de:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b00e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b00e5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b00e8:	89 04 24             	mov    %eax,(%esp)
 86b00eb:	e8 4a 9d db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86b00f0:	8b 40 08             	mov    0x8(%eax),%eax
 86b00f3:	89 c7                	mov    %eax,%edi
 86b00f5:	2b 7d c8             	sub    -0x38(%ebp),%edi
 86b00f8:	8b 45 08             	mov    0x8(%ebp),%eax
 86b00fb:	89 04 24             	mov    %eax,(%esp)
 86b00fe:	e8 93 8b a1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86b0103:	89 c3                	mov    %eax,%ebx
 86b0105:	e8 72 63 a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b010a:	89 74 24 18          	mov    %esi,0x18(%esp)
 86b010e:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 86b0114:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86b0118:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86b011c:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 86b0123:	00 
 86b0124:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b0128:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b012f:	00 
 86b0130:	89 04 24             	mov    %eax,(%esp)
 86b0133:	e8 de 0c f8 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b0138:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86b013b:	89 04 24             	mov    %eax,(%esp)
 86b013e:	e8 29 07 00 00       	call   86b086c <_ZN8WongWork12CUserPremium19IsNeedCheckEverydayEv>
 86b0143:	84 c0                	test   %al,%al
 86b0145:	0f 84 ca 00 00 00    	je     86b0215 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x5e3>
 86b014b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b014e:	89 45 a8             	mov    %eax,-0x58(%ebp)
 86b0151:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86b0157:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b015b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86b015e:	89 04 24             	mov    %eax,(%esp)
 86b0161:	e8 fa e1 9c ff       	call   807e360 <localtime_r@plt>
 86b0166:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86b016c:	83 c0 01             	add    $0x1,%eax
 86b016f:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 86b0175:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%ebp)
 86b017c:	00 00 00 
 86b017f:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 86b0186:	00 00 00 
 86b0189:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 86b0190:	00 00 00 
 86b0193:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86b0199:	89 04 24             	mov    %eax,(%esp)
 86b019c:	e8 7f e6 9c ff       	call   807e820 <mktime@plt>
 86b01a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86b01a4:	8b 45 08             	mov    0x8(%ebp),%eax
 86b01a7:	89 04 24             	mov    %eax,(%esp)
 86b01aa:	e8 bf a1 a2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86b01af:	89 c6                	mov    %eax,%esi
 86b01b1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b01b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b01b8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b01bb:	89 04 24             	mov    %eax,(%esp)
 86b01be:	e8 77 9c db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86b01c3:	8b 38                	mov    (%eax),%edi
 86b01c5:	8b 45 a8             	mov    -0x58(%ebp),%eax
 86b01c8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86b01cb:	89 d1                	mov    %edx,%ecx
 86b01cd:	29 c1                	sub    %eax,%ecx
 86b01cf:	89 8d 64 ff ff ff    	mov    %ecx,-0x9c(%ebp)
 86b01d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86b01d8:	89 04 24             	mov    %eax,(%esp)
 86b01db:	e8 b6 8a a1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86b01e0:	89 c3                	mov    %eax,%ebx
 86b01e2:	e8 95 62 a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b01e7:	89 74 24 18          	mov    %esi,0x18(%esp)
 86b01eb:	89 7c 24 14          	mov    %edi,0x14(%esp)
 86b01ef:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 86b01f5:	89 54 24 10          	mov    %edx,0x10(%esp)
 86b01f9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86b0200:	00 
 86b0201:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b0205:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b020c:	00 
 86b020d:	89 04 24             	mov    %eax,(%esp)
 86b0210:	e8 01 0c f8 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b0215:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 86b0219:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b021c:	89 04 24             	mov    %eax,(%esp)
 86b021f:	e8 f8 98 c7 ff       	call   8329b1c <_ZNKSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE4sizeEv>
 86b0224:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 86b0227:	0f 97 c0             	seta   %al
 86b022a:	84 c0                	test   %al,%al
 86b022c:	0f 85 64 fa ff ff    	jne    86afc96 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x64>
 86b0232:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0235:	89 04 24             	mov    %eax,(%esp)
 86b0238:	e8 f9 cb a7 ff       	call   812ce36 <_ZNK5CUser22IsHavePremiumAdvantageEv>
 86b023d:	84 c0                	test   %al,%al
 86b023f:	74 10                	je     86b0251 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x61f>
 86b0241:	81 7d 0c 0f 27 00 00 	cmpl   $0x270f,0xc(%ebp)
 86b0248:	74 07                	je     86b0251 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x61f>
 86b024a:	b8 01 00 00 00       	mov    $0x1,%eax
 86b024f:	eb 05                	jmp    86b0256 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x624>
 86b0251:	b8 00 00 00 00       	mov    $0x0,%eax
 86b0256:	84 c0                	test   %al,%al
 86b0258:	74 35                	je     86b028f <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x65d>
 86b025a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b025d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b0261:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86b0264:	89 04 24             	mov    %eax,(%esp)
 86b0267:	e8 5a e6 ff ff       	call   86ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>
 86b026c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86b0273:	00 
 86b0274:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86b027b:	00 
 86b027c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b0283:	00 
 86b0284:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0287:	89 04 24             	mov    %eax,(%esp)
 86b028a:	e8 cd b7 fc ff       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 86b028f:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0292:	89 04 24             	mov    %eax,(%esp)
 86b0295:	e8 4a c9 fc ff       	call   867cbe4 <_ZN5CUser18ProcPremiumFatigueEv>
 86b029a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b029d:	89 04 24             	mov    %eax,(%esp)
 86b02a0:	e8 9b 62 fa ff       	call   8656540 <_ZN5CUser11SendFatigueEv>
 86b02a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86b02a8:	89 04 24             	mov    %eax,(%esp)
 86b02ab:	e8 58 65 fa ff       	call   8656808 <_ZN5CUser8SendCoinEv>
 86b02b0:	81 7d 0c 0f 27 00 00 	cmpl   $0x270f,0xc(%ebp)
 86b02b7:	75 2f                	jne    86b02e8 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x6b6>
 86b02b9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b02bc:	8b 55 c8             	mov    -0x38(%ebp),%edx
 86b02bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b02c3:	89 04 24             	mov    %eax,(%esp)
 86b02c6:	e8 2b 5e fe ff       	call   86960f6 <_ZN15CUserCharacInfo24setCurCharacLastPlayTickEl>
 86b02cb:	eb 1b                	jmp    86b02e8 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE+0x6b6>
 86b02cd:	89 d3                	mov    %edx,%ebx
 86b02cf:	89 c6                	mov    %eax,%esi
 86b02d1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b02d4:	89 04 24             	mov    %eax,(%esp)
 86b02d7:	e8 2e 82 c7 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 86b02dc:	89 f0                	mov    %esi,%eax
 86b02de:	89 da                	mov    %ebx,%edx
 86b02e0:	89 04 24             	mov    %eax,(%esp)
 86b02e3:	e8 68 34 43 00       	call   8ae3750 <_Unwind_Resume>
 86b02e8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b02eb:	89 04 24             	mov    %eax,(%esp)
 86b02ee:	e8 17 82 c7 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 86b02f3:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86b02f6:	83 c4 00             	add    $0x0,%esp
 86b02f9:	5b                   	pop    %ebx
 86b02fa:	5e                   	pop    %esi
 86b02fb:	5f                   	pop    %edi
 86b02fc:	5d                   	pop    %ebp
 86b02fd:	c3                   	ret

```

```c
// WongWork::CHandlePremium::handlePremiumEffect @ 0x86afc32

/* WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE) */

void WongWork::CHandlePremium::handlePremiumEffect(CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  int iVar8;
  CDataManager *this;
  undefined4 uVar9;
  CInventory *pCVar10;
  int *piVar11;
  uint uVar12;
  tm local_9c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  int local_5c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_58 [12];
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_4c [12];
  CUserPremium *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  time_t local_20;
  
  local_40 = (CUserPremium *)CUser::GetPremiumInfoW(param_1);
  local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar2 = CUser::IsPremiumUser(param_1);
  if (cVar2 != '\0') {
    CUserPremium::GetPremiumInfoList((int)local_4c);
    local_38 = 0;
    while( true ) {
      uVar12 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
               size(local_4c);
      if (uVar12 <= local_38) break;
      iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
              operator[](local_4c,local_38);
      if (local_3c < *(int *)(iVar3 + 4)) {
        uVar4 = CUser::get_acc_id(param_1);
        puVar5 = (undefined4 *)
                 std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                 ::operator[](local_4c,local_38);
        uVar9 = *puVar5;
        iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                operator[](local_4c,local_38);
        iVar3 = *(int *)(iVar3 + 4) - local_3c;
        uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 086afd07 to 086afd97 has its CatchHandler @ 086b02cd */
        pTVar7 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar7,0,uVar6,6,iVar3,uVar9,uVar4);
      }
      else {
        iVar3 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
        iVar8 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                operator[](local_4c,local_38);
        if (iVar3 <= *(int *)(iVar8 + 4)) {
          std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
          operator[](local_4c,local_38);
          CUserPremium::GetAdvantageItem((int)local_58);
          local_34 = 0;
          while( true ) {
            uVar12 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               (local_58);
            if (uVar12 <= local_34) break;
            piVar11 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                             operator[](local_58,local_34);
            local_30 = *piVar11;
            iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_58,local_34);
            local_2c = *(undefined4 *)(iVar3 + 4);
            Inven_Item::Inven_Item((Inven_Item *)&local_9c);
                    /* try { // try from 086afde4 to 086b003b has its CatchHandler @ 086b003e */
            this = (CDataManager *)G_CDataManager();
            local_28 = (int *)CDataManager::find_item(this,local_30);
            (**(code **)(*local_28 + 8))(local_28,&local_9c);
            local_9c.tm_sec._2_2_ = (undefined2)local_30;
            local_9c.tm_min._0_2_ = (undefined2)((uint)local_30 >> 0x10);
            if (local_9c.tm_sec._1_1_ == '\x01') {
              local_9c._7_4_ = CUser::GetSeedFromDate(param_1);
            }
            else {
              local_9c._7_4_ = local_2c;
            }
            uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_24 = CInventory::insertItemIntoInventory
                                 (uVar9,CONCAT22(local_9c.tm_sec._2_2_,
                                                 CONCAT11(local_9c.tm_sec._1_1_,
                                                          (undefined1)local_9c.tm_sec)),
                                  CONCAT13(local_9c.tm_min._3_1_,
                                           CONCAT12(local_9c.tm_min._2_1_,
                                                    (undefined2)local_9c.tm_min)),
                                  CONCAT13(local_9c.tm_hour._3_1_,(undefined3)local_9c.tm_hour),
                                  local_9c.tm_mday,local_9c.tm_mon,local_9c.tm_year,local_9c.tm_wday
                                  ,local_9c.tm_yday,local_9c.tm_isdst,local_9c.tm_gmtoff,
                                  local_9c.tm_zone,local_70,local_6c,local_68,local_64,local_60,0xe,
                                  1,1);
            if (local_24 < 0) {
              uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              CMailBoxHelper::ReqDBSendNewMail
                        (param_1,(Inven_Item *)&local_9c,0,uVar12,true,(char *)0x0,0);
            }
            else {
              CUser::SendUpdateItemList(param_1,1,0,local_24);
            }
            local_34 = local_34 + 1;
          }
          if (param_2 != 9999) {
            pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar8 = CInventory::GetCoin(pCVar10);
            piVar11 = (int *)std::
                             vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                             ::operator[](local_4c,local_38);
            iVar3 = *(int *)(g_SPremiumInfo + *piVar11 * 0x120 + 0x38);
            pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::SetCoin(pCVar10,iVar8 + iVar3);
            piVar11 = (int *)std::
                             vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                             ::operator[](local_4c,local_38);
            uVar9 = *(undefined4 *)(g_SPremiumInfo + *piVar11 * 0x120 + 0x38);
            pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            uVar4 = CInventory::GetCoin(pCVar10);
            cUserHistoryLog::CoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar4,uVar9,4);
          }
                    /* try { // try from 086b005c to 086b02af has its CatchHandler @ 086b02cd */
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_58);
        }
        piVar11 = (int *)std::
                         vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                         ::operator[](local_4c,local_38);
        if (*(int *)(g_SPremiumInfo + *piVar11 * 0x120 + 4) == 0) {
LAB_086b00aa:
          bVar1 = false;
        }
        else {
          iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                  ::operator[](local_4c,local_38);
          if (*(int *)(iVar3 + 8) <= local_3c) goto LAB_086b00aa;
          bVar1 = true;
        }
        if (bVar1) {
          uVar4 = CUser::get_acc_id(param_1);
          puVar5 = (undefined4 *)
                   std::
                   vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                   operator[](local_4c,local_38);
          uVar9 = *puVar5;
          iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                  ::operator[](local_4c,local_38);
          iVar3 = *(int *)(iVar3 + 8) - local_3c;
          uVar6 = CUser::GetUID(param_1);
          pTVar7 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar7,0,uVar6,4,iVar3,uVar9,uVar4);
        }
        cVar2 = CUserPremium::IsNeedCheckEveryday(local_40);
        if (cVar2 != '\0') {
          local_5c = local_3c;
          localtime_r(&local_5c,&local_9c);
          local_9c.tm_mday = local_9c.tm_mday + 1;
          local_9c.tm_hour._3_1_ = 0;
          local_9c.tm_min._0_2_ = 0;
          local_9c.tm_min._2_1_ = 0;
          local_9c._7_4_ = 0;
          local_9c.tm_sec._0_1_ = 0;
          local_9c.tm_sec._1_1_ = '\0';
          local_9c.tm_sec._2_2_ = 0;
          local_20 = mktime(&local_9c);
          uVar4 = CUser::get_acc_id(param_1);
          puVar5 = (undefined4 *)
                   std::
                   vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                   operator[](local_4c,local_38);
          uVar9 = *puVar5;
          iVar3 = local_20 - local_5c;
          uVar6 = CUser::GetUID(param_1);
          pTVar7 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar7,0,uVar6,5,iVar3,uVar9,uVar4);
        }
      }
      local_38 = local_38 + 1;
    }
    cVar2 = CUser::IsHavePremiumAdvantage(param_1);
    if ((cVar2 == '\0') || (param_2 == 9999)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUserPremium::RecalcAdditionalInfo(local_40,param_1);
      CUser::SendNotiPacket(param_1,1,2,1);
    }
    CUser::ProcPremiumFatigue(param_1);
    CUser::SendFatigue(param_1);
    CUser::SendCoin(param_1);
    if (param_2 == 9999) {
      CUserCharacInfo::setCurCharacLastPlayTick((CUserCharacInfo *)param_1,local_3c);
    }
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
              (local_4c);
  }
  return;
}

```

---

## handlePremiumTimeout

```asm
// === 086afa7c WongWork::CHandlePremium::handlePremiumTimeout  [0x086afa7c-0x86afc31] ===
 86afa7c:	55                   	push   %ebp
 86afa7d:	89 e5                	mov    %esp,%ebp
 86afa7f:	53                   	push   %ebx
 86afa80:	83 ec 44             	sub    $0x44,%esp
 86afa83:	8b 45 08             	mov    0x8(%ebp),%eax
 86afa86:	89 04 24             	mov    %eax,(%esp)
 86afa89:	e8 9a d3 a7 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 86afa8e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86afa91:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afa95:	89 14 24             	mov    %edx,(%esp)
 86afa98:	e8 ff e2 ff ff       	call   86add9c <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv>
 86afa9d:	83 ec 04             	sub    $0x4,%esp
 86afaa0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86afaa3:	83 f8 0c             	cmp    $0xc,%eax
 86afaa6:	75 43                	jne    86afaeb <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x6f>
 86afaa8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86afaab:	89 c3                	mov    %eax,%ebx
 86afaad:	8b 45 08             	mov    0x8(%ebp),%eax
 86afab0:	89 04 24             	mov    %eax,(%esp)
 86afab3:	e8 dc c3 f8 ff       	call   863be94 <_ZN5CUser15GetPremiumInfoWEv>
 86afab8:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 86afabf:	00 
 86afac0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86afac4:	89 04 24             	mov    %eax,(%esp)
 86afac7:	e8 80 0d 00 00       	call   86b084c <_ZN8WongWork12CUserPremium15setPremiumStateE17ENUM_PREMIUM_TYPENS_18ENUM_PREMIUM_STATEE>
 86afacc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86afacf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86afad6:	00 
 86afad7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afadb:	8b 45 08             	mov    0x8(%ebp),%eax
 86afade:	89 04 24             	mov    %eax,(%esp)
 86afae1:	e8 ce fd ff ff       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 86afae6:	e9 42 01 00 00       	jmp    86afc2d <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x1b1>
 86afaeb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86afaee:	85 c0                	test   %eax,%eax
 86afaf0:	0f 84 37 01 00 00    	je     86afc2d <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x1b1>
 86afaf6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86afaf9:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86afb00:	00 
 86afb01:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86afb08:	00 
 86afb09:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86afb10:	00 
 86afb11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86afb18:	00 
 86afb19:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afb1d:	8b 45 08             	mov    0x8(%ebp),%eax
 86afb20:	89 04 24             	mov    %eax,(%esp)
 86afb23:	e8 c0 fc ff ff       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 86afb28:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86afb2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afb2f:	8b 45 08             	mov    0x8(%ebp),%eax
 86afb32:	89 04 24             	mov    %eax,(%esp)
 86afb35:	e8 d0 dd f9 ff       	call   864d90a <_ZN5CUser21RemoveRestrictedGoodsEi>
 86afb3a:	8b 45 08             	mov    0x8(%ebp),%eax
 86afb3d:	89 04 24             	mov    %eax,(%esp)
 86afb40:	e8 ed 08 a7 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86afb45:	85 c0                	test   %eax,%eax
 86afb47:	0f 95 c0             	setne  %al
 86afb4a:	84 c0                	test   %al,%al
 86afb4c:	0f 84 c1 00 00 00    	je     86afc13 <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x197>
 86afb52:	8b 45 08             	mov    0x8(%ebp),%eax
 86afb55:	89 04 24             	mov    %eax,(%esp)
 86afb58:	e8 87 d0 fc ff       	call   867cbe4 <_ZN5CUser18ProcPremiumFatigueEv>
 86afb5d:	8b 45 08             	mov    0x8(%ebp),%eax
 86afb60:	89 04 24             	mov    %eax,(%esp)
 86afb63:	e8 d8 69 fa ff       	call   8656540 <_ZN5CUser11SendFatigueEv>
 86afb68:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86afb6b:	89 d0                	mov    %edx,%eax
 86afb6d:	c1 e0 03             	shl    $0x3,%eax
 86afb70:	01 d0                	add    %edx,%eax
 86afb72:	c1 e0 05             	shl    $0x5,%eax
 86afb75:	8b 80 40 3a 48 09    	mov    0x9483a40(%eax),%eax
 86afb7b:	83 f8 01             	cmp    $0x1,%eax
 86afb7e:	75 45                	jne    86afbc5 <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x149>
 86afb80:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86afb83:	89 d0                	mov    %edx,%eax
 86afb85:	c1 e0 03             	shl    $0x3,%eax
 86afb88:	01 d0                	add    %edx,%eax
 86afb8a:	c1 e0 05             	shl    $0x5,%eax
 86afb8d:	8b 80 a4 3a 48 09    	mov    0x9483aa4(%eax),%eax
 86afb93:	85 c0                	test   %eax,%eax
 86afb95:	7e 0b                	jle    86afba2 <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x126>
 86afb97:	8b 45 08             	mov    0x8(%ebp),%eax
 86afb9a:	89 04 24             	mov    %eax,(%esp)
 86afb9d:	e8 0c d3 fc ff       	call   867ceae <_ZN5CUser25SetNeedCheckOverEquipItemEv>
 86afba2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86afba9:	00 
 86afbaa:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86afbb1:	00 
 86afbb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86afbb9:	00 
 86afbba:	8b 45 08             	mov    0x8(%ebp),%eax
 86afbbd:	89 04 24             	mov    %eax,(%esp)
 86afbc0:	e8 97 be fc ff       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 86afbc5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86afbc8:	83 f8 53             	cmp    $0x53,%eax
 86afbcb:	74 30                	je     86afbfd <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x181>
 86afbcd:	83 f8 57             	cmp    $0x57,%eax
 86afbd0:	74 2b                	je     86afbfd <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x181>
 86afbd2:	83 f8 21             	cmp    $0x21,%eax
 86afbd5:	75 3c                	jne    86afc13 <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x197>
 86afbd7:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 86afbde:	0f b6 d0             	movzbl %al,%edx
 86afbe1:	8b 45 08             	mov    0x8(%ebp),%eax
 86afbe4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86afbe8:	89 04 24             	mov    %eax,(%esp)
 86afbeb:	e8 3a c7 e3 ff       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 86afbf0:	8b 45 08             	mov    0x8(%ebp),%eax
 86afbf3:	89 04 24             	mov    %eax,(%esp)
 86afbf6:	e8 81 0c 00 00       	call   86b087c <_ZN15CUserCharacInfo20SetIsEndLetheAtLoginEv>
 86afbfb:	eb 16                	jmp    86afc13 <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser+0x197>
 86afbfd:	8b 45 08             	mov    0x8(%ebp),%eax
 86afc00:	89 04 24             	mov    %eax,(%esp)
 86afc03:	e8 1a 9e fd ff       	call   8689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>
 86afc08:	8b 45 08             	mov    0x8(%ebp),%eax
 86afc0b:	89 04 24             	mov    %eax,(%esp)
 86afc0e:	e8 7d 9f fd ff       	call   8689b90 <_ZN5CUser20SendChattingEmoticonEv>
 86afc13:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86afc16:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86afc1d:	00 
 86afc1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afc22:	8b 45 08             	mov    0x8(%ebp),%eax
 86afc25:	89 04 24             	mov    %eax,(%esp)
 86afc28:	e8 87 fc ff ff       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 86afc2d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86afc30:	c9                   	leave
 86afc31:	c3                   	ret

```

```c
// WongWork::CHandlePremium::handlePremiumTimeout @ 0x86afa7c

/* WongWork::CHandlePremium::handlePremiumTimeout(CUser*) */

void WongWork::CHandlePremium::handlePremiumTimeout(CUser *param_1)

{
  CUserPremium *pCVar1;
  int iVar2;
  int local_20;
  
  CUser::GetPremiumInfo(param_1);
  CUserPremium::CheckPremiumTimeout();
  if (local_20 == 0xc) {
    pCVar1 = (CUserPremium *)CUser::GetPremiumInfoW(param_1);
    CUserPremium::setPremiumState(pCVar1,0xc,3);
    handleNotifyPremiumInfo(param_1,0xc,0);
  }
  else if (local_20 != 0) {
    handleSetUserPremium(param_1,local_20,0,0,0,1);
    CUser::RemoveRestrictedGoods((int)param_1);
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      CUser::ProcPremiumFatigue(param_1);
      CUser::SendFatigue(param_1);
      if (*(int *)(g_SPremiumInfo + local_20 * 0x120) == 1) {
        if (0 < *(int *)(g_SPremiumInfo + local_20 * 0x120 + 100)) {
          CUser::SetNeedCheckOverEquipItem(param_1);
        }
        CUser::SendNotiPacket(param_1,1,2,1);
      }
      if ((local_20 == 0x53) || (local_20 == 0x57)) {
        CUser::ReCalcChattingEmoticon(param_1);
        CUser::SendChattingEmoticon(param_1);
      }
      else if (local_20 == 0x21) {
        CUserCharacInfo::SetOneDayLetheFlag
                  ((CUserCharacInfo *)param_1,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        CUserCharacInfo::SetIsEndLetheAtLogin((CUserCharacInfo *)param_1);
      }
    }
    handleNotifyPremiumInfo(param_1,local_20,0);
  }
  return;
}

```

---

## handleRemoveOneDayLethePremium

```asm
// === 086b0594 WongWork::CHandlePremium::handleRemoveOneDayLethePremium  [0x086b0594-0x86b068c] ===
 86b0594:	55                   	push   %ebp
 86b0595:	89 e5                	mov    %esp,%ebp
 86b0597:	53                   	push   %ebx
 86b0598:	83 ec 34             	sub    $0x34,%esp
 86b059b:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 86b05a2:	00 
 86b05a3:	8b 45 08             	mov    0x8(%ebp),%eax
 86b05a6:	89 04 24             	mov    %eax,(%esp)
 86b05a9:	e8 60 5a a3 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 86b05ae:	84 c0                	test   %al,%al
 86b05b0:	74 75                	je     86b0627 <_ZN8WongWork14CHandlePremium30handleRemoveOneDayLethePremiumEP5CUser+0x93>
 86b05b2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86b05b9:	00 
 86b05ba:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86b05c1:	00 
 86b05c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86b05c9:	00 
 86b05ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b05d1:	00 
 86b05d2:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 86b05d9:	00 
 86b05da:	8b 45 08             	mov    0x8(%ebp),%eax
 86b05dd:	89 04 24             	mov    %eax,(%esp)
 86b05e0:	e8 03 f2 ff ff       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 86b05e5:	e8 b1 bb a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b05ea:	8b 40 0c             	mov    0xc(%eax),%eax
 86b05ed:	c7 44 24 04 c5 00 00 	movl   $0xc5,0x4(%esp)
 86b05f4:	00 
 86b05f5:	89 04 24             	mov    %eax,(%esp)
 86b05f8:	e8 0f 9b ac ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 86b05fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b0601:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0604:	89 04 24             	mov    %eax,(%esp)
 86b0607:	e8 fe d2 f9 ff       	call   864d90a <_ZN5CUser21RemoveRestrictedGoodsEi>
 86b060c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b0613:	00 
 86b0614:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 86b061b:	00 
 86b061c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b061f:	89 04 24             	mov    %eax,(%esp)
 86b0622:	e8 8d f2 ff ff       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 86b0627:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 86b062e:	0f b6 d0             	movzbl %al,%edx
 86b0631:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0634:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b0638:	89 04 24             	mov    %eax,(%esp)
 86b063b:	e8 ea bc e3 ff       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 86b0640:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0643:	89 04 24             	mov    %eax,(%esp)
 86b0646:	e8 dd 09 a5 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 86b064b:	89 c3                	mov    %eax,%ebx
 86b064d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86b0654:	00 
 86b0655:	c7 44 24 08 b4 03 00 	movl   $0x3b4,0x8(%esp)
 86b065c:	00 
 86b065d:	c7 44 24 04 c0 59 cf 	movl   $0x8cf59c0,0x4(%esp)
 86b0664:	08 
 86b0665:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b0668:	89 04 24             	mov    %eax,(%esp)
 86b066b:	e8 a8 f0 e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86b0670:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b0674:	c7 44 24 04 84 4d cf 	movl   $0x8cf4d84,0x4(%esp)
 86b067b:	08 
 86b067c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b067f:	89 04 24             	mov    %eax,(%esp)
 86b0682:	e8 01 f1 e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86b0687:	83 c4 34             	add    $0x34,%esp
 86b068a:	5b                   	pop    %ebx
 86b068b:	5d                   	pop    %ebp
 86b068c:	c3                   	ret

```

```c
// WongWork::CHandlePremium::handleRemoveOneDayLethePremium @ 0x86b0594

/* WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser*) */

void WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_1c [20];
  
  cVar1 = CUser::isAffectedPremium(param_1,0x21);
  if (cVar1 != '\0') {
    handleSetUserPremium(param_1,0x21,0,0,0,1);
    iVar2 = G_CDataManager();
    CItemList::GetRestrictCode(*(CItemList **)(iVar2 + 0xc),0xc5);
    CUser::RemoveRestrictedGoods((int)param_1);
    handleNotifyPremiumInfo(param_1,0x21,0);
  }
  CUserCharacInfo::SetOneDayLetheFlag
            ((CUserCharacInfo *)param_1,CPremiumLetheManager::NOT_USE_LETHE_STATE);
  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  cMyTrace::cMyTrace(local_1c,
                     "static void WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser*)",
                     0x3b4,0);
  cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : PREMIUM_END, char(%s)",uVar3);
  return;
}

```

---

## handleReturn2CharacView

```asm
// === 086af96e WongWork::CHandlePremium::handleReturn2CharacView  [0x086af96e-0x86afa7b] ===
 86af96e:	55                   	push   %ebp
 86af96f:	89 e5                	mov    %esp,%ebp
 86af971:	56                   	push   %esi
 86af972:	53                   	push   %ebx
 86af973:	83 ec 30             	sub    $0x30,%esp
 86af976:	8b 45 08             	mov    0x8(%ebp),%eax
 86af979:	89 04 24             	mov    %eax,(%esp)
 86af97c:	e8 a7 d4 a7 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 86af981:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86af984:	c7 44 24 08 0f 27 00 	movl   $0x270f,0x8(%esp)
 86af98b:	00 
 86af98c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af990:	89 14 24             	mov    %edx,(%esp)
 86af993:	e8 04 e5 ff ff       	call   86ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>
 86af998:	83 ec 04             	sub    $0x4,%esp
 86af99b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86af9a2:	e9 89 00 00 00       	jmp    86afa30 <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser+0xc2>
 86af9a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86af9aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af9ae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86af9b1:	89 04 24             	mov    %eax,(%esp)
 86af9b4:	e8 81 a4 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86af9b9:	8b 00                	mov    (%eax),%eax
 86af9bb:	85 c0                	test   %eax,%eax
 86af9bd:	74 21                	je     86af9e0 <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser+0x72>
 86af9bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86af9c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af9c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86af9c9:	89 04 24             	mov    %eax,(%esp)
 86af9cc:	e8 69 a4 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86af9d1:	8b 40 10             	mov    0x10(%eax),%eax
 86af9d4:	83 f8 03             	cmp    $0x3,%eax
 86af9d7:	75 07                	jne    86af9e0 <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser+0x72>
 86af9d9:	b8 01 00 00 00       	mov    $0x1,%eax
 86af9de:	eb 05                	jmp    86af9e5 <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser+0x77>
 86af9e0:	b8 00 00 00 00       	mov    $0x0,%eax
 86af9e5:	84 c0                	test   %al,%al
 86af9e7:	74 43                	je     86afa2c <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser+0xbe>
 86af9e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86af9ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af9f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86af9f3:	89 04 24             	mov    %eax,(%esp)
 86af9f6:	e8 3f a4 db ff       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 86af9fb:	8b 00                	mov    (%eax),%eax
 86af9fd:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86afa04:	00 
 86afa05:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86afa0c:	00 
 86afa0d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86afa14:	00 
 86afa15:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86afa1c:	00 
 86afa1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86afa21:	8b 45 08             	mov    0x8(%ebp),%eax
 86afa24:	89 04 24             	mov    %eax,(%esp)
 86afa27:	e8 bc fd ff ff       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 86afa2c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86afa30:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86afa33:	89 04 24             	mov    %eax,(%esp)
 86afa36:	e8 e1 a0 c7 ff       	call   8329b1c <_ZNKSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE4sizeEv>
 86afa3b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86afa3e:	0f 97 c0             	seta   %al
 86afa41:	84 c0                	test   %al,%al
 86afa43:	0f 85 5e ff ff ff    	jne    86af9a7 <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser+0x39>
 86afa49:	eb 1b                	jmp    86afa66 <_ZN8WongWork14CHandlePremium23handleReturn2CharacViewEP5CUser+0xf8>
 86afa4b:	89 d3                	mov    %edx,%ebx
 86afa4d:	89 c6                	mov    %eax,%esi
 86afa4f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86afa52:	89 04 24             	mov    %eax,(%esp)
 86afa55:	e8 b0 8a c7 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 86afa5a:	89 f0                	mov    %esi,%eax
 86afa5c:	89 da                	mov    %ebx,%edx
 86afa5e:	89 04 24             	mov    %eax,(%esp)
 86afa61:	e8 ea 3c 43 00       	call   8ae3750 <_Unwind_Resume>
 86afa66:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86afa69:	89 04 24             	mov    %eax,(%esp)
 86afa6c:	e8 99 8a c7 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 86afa71:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86afa74:	83 c4 00             	add    $0x0,%esp
 86afa77:	5b                   	pop    %ebx
 86afa78:	5e                   	pop    %esi
 86afa79:	5d                   	pop    %ebp
 86afa7a:	c3                   	ret
 86afa7b:	90                   	nop

```

```c
// WongWork::CHandlePremium::handleReturn2CharacView @ 0x86af96e

/* WongWork::CHandlePremium::handleReturn2CharacView(CUser*) */

void WongWork::CHandlePremium::handleReturn2CharacView(CUser *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_1c [12];
  uint local_10;
  
  CUser::GetPremiumInfo(param_1);
  CUserPremium::GetPremiumInfoList((int)local_1c);
  local_10 = 0;
  do {
    uVar5 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::size
                      (local_1c);
    if (uVar5 <= local_10) {
      std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
                (local_1c);
      return;
    }
    piVar2 = (int *)std::
                    vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                    operator[](local_1c,local_10);
    if (*piVar2 == 0) {
LAB_086af9e0:
      bVar1 = false;
    }
    else {
      iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
              operator[](local_1c,local_10);
      if (*(int *)(iVar3 + 0x10) != 3) goto LAB_086af9e0;
      bVar1 = true;
    }
    if (bVar1) {
      puVar4 = (undefined4 *)
               std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
               operator[](local_1c,local_10);
                    /* try { // try from 086afa27 to 086afa2b has its CatchHandler @ 086afa4b */
      handleSetUserPremium(param_1,*puVar4,0,0,0,1);
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## handleSetUserPCRoom

```asm
// === 086b02fe WongWork::CHandlePremium::handleSetUserPCRoom  [0x086b02fe-0x86b0593] ===
 86b02fe:	55                   	push   %ebp
 86b02ff:	89 e5                	mov    %esp,%ebp
 86b0301:	57                   	push   %edi
 86b0302:	56                   	push   %esi
 86b0303:	53                   	push   %ebx
 86b0304:	83 ec 4c             	sub    $0x4c,%esp
 86b0307:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 86b030e:	00 
 86b030f:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0312:	89 04 24             	mov    %eax,(%esp)
 86b0315:	e8 f4 5c a3 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 86b031a:	88 45 e3             	mov    %al,-0x1d(%ebp)
 86b031d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86b0324:	00 
 86b0325:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86b032c:	00 
 86b032d:	8b 45 10             	mov    0x10(%ebp),%eax
 86b0330:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86b0334:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b0337:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b033b:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 86b0342:	00 
 86b0343:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0346:	89 04 24             	mov    %eax,(%esp)
 86b0349:	e8 9a f4 ff ff       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 86b034e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86b0355:	e8 44 b9 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86b035a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86b035d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b0360:	8b 55 10             	mov    0x10(%ebp),%edx
 86b0363:	89 d1                	mov    %edx,%ecx
 86b0365:	29 c1                	sub    %eax,%ecx
 86b0367:	89 c8                	mov    %ecx,%eax
 86b0369:	3d 7f 3a 09 00       	cmp    $0x93a7f,%eax
 86b036e:	7f 70                	jg     86b03e0 <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0xe2>
 86b0370:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b0373:	8b 55 10             	mov    0x10(%ebp),%edx
 86b0376:	89 d1                	mov    %edx,%ecx
 86b0378:	29 c1                	sub    %eax,%ecx
 86b037a:	89 c8                	mov    %ecx,%eax
 86b037c:	3d 58 02 00 00       	cmp    $0x258,%eax
 86b0381:	7e 5d                	jle    86b03e0 <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0xe2>
 86b0383:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0386:	89 04 24             	mov    %eax,(%esp)
 86b0389:	e8 e0 9f a2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86b038e:	89 c6                	mov    %eax,%esi
 86b0390:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b0393:	8b 55 10             	mov    0x10(%ebp),%edx
 86b0396:	89 d1                	mov    %edx,%ecx
 86b0398:	29 c1                	sub    %eax,%ecx
 86b039a:	89 c8                	mov    %ecx,%eax
 86b039c:	8d b8 a8 fd ff ff    	lea    -0x258(%eax),%edi
 86b03a2:	8b 45 08             	mov    0x8(%ebp),%eax
 86b03a5:	89 04 24             	mov    %eax,(%esp)
 86b03a8:	e8 e9 88 a1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86b03ad:	89 c3                	mov    %eax,%ebx
 86b03af:	e8 c8 60 a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b03b4:	89 74 24 18          	mov    %esi,0x18(%esp)
 86b03b8:	c7 44 24 14 0c 00 00 	movl   $0xc,0x14(%esp)
 86b03bf:	00 
 86b03c0:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86b03c4:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 86b03cb:	00 
 86b03cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b03d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b03d7:	00 
 86b03d8:	89 04 24             	mov    %eax,(%esp)
 86b03db:	e8 36 0a f8 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b03e0:	8b 45 08             	mov    0x8(%ebp),%eax
 86b03e3:	89 04 24             	mov    %eax,(%esp)
 86b03e6:	e8 a1 9f a2 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86b03eb:	83 f8 02             	cmp    $0x2,%eax
 86b03ee:	0f 9f c0             	setg   %al
 86b03f1:	84 c0                	test   %al,%al
 86b03f3:	0f 84 e1 00 00 00    	je     86b04da <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x1dc>
 86b03f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b03fc:	8b 55 10             	mov    0x10(%ebp),%edx
 86b03ff:	89 d1                	mov    %edx,%ecx
 86b0401:	29 c1                	sub    %eax,%ecx
 86b0403:	89 c8                	mov    %ecx,%eax
 86b0405:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b0409:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 86b0410:	00 
 86b0411:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0414:	89 04 24             	mov    %eax,(%esp)
 86b0417:	e8 98 f4 ff ff       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 86b041c:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 86b0420:	83 f0 01             	xor    $0x1,%eax
 86b0423:	84 c0                	test   %al,%al
 86b0425:	74 38                	je     86b045f <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x161>
 86b0427:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 86b042e:	00 
 86b042f:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0432:	89 04 24             	mov    %eax,(%esp)
 86b0435:	e8 f8 f7 ff ff       	call   86afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>
 86b043a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86b0441:	00 
 86b0442:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86b0449:	00 
 86b044a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b0451:	00 
 86b0452:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0455:	89 04 24             	mov    %eax,(%esp)
 86b0458:	e8 ff b5 fc ff       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 86b045d:	eb 7b                	jmp    86b04da <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x1dc>
 86b045f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b0462:	8b 55 10             	mov    0x10(%ebp),%edx
 86b0465:	89 d1                	mov    %edx,%ecx
 86b0467:	29 c1                	sub    %eax,%ecx
 86b0469:	89 c8                	mov    %ecx,%eax
 86b046b:	3d 7f 3a 09 00       	cmp    $0x93a7f,%eax
 86b0470:	7f 68                	jg     86b04da <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x1dc>
 86b0472:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b0475:	8b 55 10             	mov    0x10(%ebp),%edx
 86b0478:	89 d1                	mov    %edx,%ecx
 86b047a:	29 c1                	sub    %eax,%ecx
 86b047c:	89 c8                	mov    %ecx,%eax
 86b047e:	3d 58 02 00 00       	cmp    $0x258,%eax
 86b0483:	7e 55                	jle    86b04da <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x1dc>
 86b0485:	8b 45 08             	mov    0x8(%ebp),%eax
 86b0488:	89 04 24             	mov    %eax,(%esp)
 86b048b:	e8 de 9e a2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86b0490:	89 c6                	mov    %eax,%esi
 86b0492:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b0495:	8b 55 10             	mov    0x10(%ebp),%edx
 86b0498:	89 d7                	mov    %edx,%edi
 86b049a:	29 c7                	sub    %eax,%edi
 86b049c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b049f:	89 04 24             	mov    %eax,(%esp)
 86b04a2:	e8 ef 87 a1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86b04a7:	89 c3                	mov    %eax,%ebx
 86b04a9:	e8 ce 5f a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b04ae:	89 74 24 18          	mov    %esi,0x18(%esp)
 86b04b2:	c7 44 24 14 0c 00 00 	movl   $0xc,0x14(%esp)
 86b04b9:	00 
 86b04ba:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86b04be:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 86b04c5:	00 
 86b04c6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b04ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b04d1:	00 
 86b04d2:	89 04 24             	mov    %eax,(%esp)
 86b04d5:	e8 3c 09 f8 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b04da:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b04dd:	89 04 24             	mov    %eax,(%esp)
 86b04e0:	e8 67 d8 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b04e5:	c7 44 24 08 aa 01 00 	movl   $0x1aa,0x8(%esp)
 86b04ec:	00 
 86b04ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b04f4:	00 
 86b04f5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b04f8:	89 04 24             	mov    %eax,(%esp)
 86b04fb:	e8 fc b3 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b0500:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b0507:	00 
 86b0508:	8b 45 08             	mov    0x8(%ebp),%eax
 86b050b:	89 04 24             	mov    %eax,(%esp)
 86b050e:	e8 bf 6d fc ff       	call   86772d2 <_ZNK5CUser22HasCurCharacRentalItemEi>
 86b0513:	84 c0                	test   %al,%al
 86b0515:	74 15                	je     86b052c <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x22e>
 86b0517:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b051e:	00 
 86b051f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b0522:	89 04 24             	mov    %eax,(%esp)
 86b0525:	e8 f6 b3 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b052a:	eb 13                	jmp    86b053f <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x241>
 86b052c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b0533:	00 
 86b0534:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b0537:	89 04 24             	mov    %eax,(%esp)
 86b053a:	e8 e1 b3 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b053f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b0546:	00 
 86b0547:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b054a:	89 04 24             	mov    %eax,(%esp)
 86b054d:	e8 06 b4 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b0552:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b0555:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b0559:	8b 45 08             	mov    0x8(%ebp),%eax
 86b055c:	89 04 24             	mov    %eax,(%esp)
 86b055f:	e8 56 80 f9 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86b0564:	eb 1b                	jmp    86b0581 <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll+0x283>
 86b0566:	89 d3                	mov    %edx,%ebx
 86b0568:	89 c6                	mov    %eax,%esi
 86b056a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b056d:	89 04 24             	mov    %eax,(%esp)
 86b0570:	e8 0b d9 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b0575:	89 f0                	mov    %esi,%eax
 86b0577:	89 da                	mov    %ebx,%edx
 86b0579:	89 04 24             	mov    %eax,(%esp)
 86b057c:	e8 cf 31 43 00       	call   8ae3750 <_Unwind_Resume>
 86b0581:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b0584:	89 04 24             	mov    %eax,(%esp)
 86b0587:	e8 f4 d8 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b058c:	83 c4 4c             	add    $0x4c,%esp
 86b058f:	5b                   	pop    %ebx
 86b0590:	5e                   	pop    %esi
 86b0591:	5f                   	pop    %edi
 86b0592:	5d                   	pop    %ebp
 86b0593:	c3                   	ret

```

```c
// WongWork::CHandlePremium::handleSetUserPCRoom @ 0x86b02fe

/* WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long) */

void WongWork::CHandlePremium::handleSetUserPCRoom(CUser *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  int iVar5;
  PacketGuard local_30 [15];
  char local_21;
  int local_20;
  
  local_21 = CUser::isAffectedPremium(param_1,0xc);
  handleSetUserPremium(param_1,0xc,param_2,param_3,0,1);
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if ((param_3 - local_20 < 0x93a80) && (600 < param_3 - local_20)) {
    uVar2 = CUser::get_acc_id(param_1);
    iVar5 = param_3 - local_20;
    uVar3 = CUser::GetUID(param_1);
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,0,uVar3,7,iVar5 + -600,0xc,uVar2);
  }
  iVar5 = CUser::get_state(param_1);
  if (2 < iVar5) {
    handleNotifyPremiumInfo(param_1,0xc,param_3 - local_20);
    if (local_21 == '\x01') {
      if ((param_3 - local_20 < 0x93a80) && (600 < param_3 - local_20)) {
        uVar2 = CUser::get_acc_id(param_1);
        iVar5 = param_3 - local_20;
        uVar3 = CUser::GetUID(param_1);
        pTVar4 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar4,0,uVar3,4,iVar5,0xc,uVar2);
      }
    }
    else {
      handlePremiumEffect(param_1,0xc);
      CUser::SendNotiPacket(param_1,0,2,0);
    }
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 086b04fb to 086b0563 has its CatchHandler @ 086b0566 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1aa);
  cVar1 = CUser::HasCurCharacRentalItem(param_1,1);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}

```

---

## handleSetUserPremium

```asm
// === 086af7e8 WongWork::CHandlePremium::handleSetUserPremium  [0x086af7e8-0x86af8b3] ===
 86af7e8:	55                   	push   %ebp
 86af7e9:	89 e5                	mov    %esp,%ebp
 86af7eb:	83 ec 48             	sub    $0x48,%esp
 86af7ee:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86af7f1:	88 45 e4             	mov    %al,-0x1c(%ebp)
 86af7f4:	8b 45 08             	mov    0x8(%ebp),%eax
 86af7f7:	89 04 24             	mov    %eax,(%esp)
 86af7fa:	e8 95 c6 f8 ff       	call   863be94 <_ZN5CUser15GetPremiumInfoWEv>
 86af7ff:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86af802:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 86af806:	75 29                	jne    86af831 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib+0x49>
 86af808:	8b 45 0c             	mov    0xc(%ebp),%eax
 86af80b:	8b 55 18             	mov    0x18(%ebp),%edx
 86af80e:	89 54 24 10          	mov    %edx,0x10(%esp)
 86af812:	8b 55 14             	mov    0x14(%ebp),%edx
 86af815:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86af819:	8b 55 10             	mov    0x10(%ebp),%edx
 86af81c:	89 54 24 08          	mov    %edx,0x8(%esp)
 86af820:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af824:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86af827:	89 04 24             	mov    %eax,(%esp)
 86af82a:	e8 a3 e2 ff ff       	call   86adad2 <_ZN8WongWork12CUserPremium10AddPremiumEiiii>
 86af82f:	eb 5e                	jmp    86af88f <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib+0xa7>
 86af831:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 86af835:	74 06                	je     86af83d <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib+0x55>
 86af837:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 86af83b:	75 14                	jne    86af851 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib+0x69>
 86af83d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86af840:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af844:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86af847:	89 04 24             	mov    %eax,(%esp)
 86af84a:	e8 57 e3 ff ff       	call   86adba6 <_ZN8WongWork12CUserPremium13RemovePremiumEi>
 86af84f:	eb 3e                	jmp    86af88f <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib+0xa7>
 86af851:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86af858:	e8 41 c4 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86af85d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86af860:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86af863:	3b 45 14             	cmp    0x14(%ebp),%eax
 86af866:	7d 27                	jge    86af88f <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib+0xa7>
 86af868:	8b 45 0c             	mov    0xc(%ebp),%eax
 86af86b:	8b 55 18             	mov    0x18(%ebp),%edx
 86af86e:	89 54 24 10          	mov    %edx,0x10(%esp)
 86af872:	8b 55 14             	mov    0x14(%ebp),%edx
 86af875:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86af879:	8b 55 10             	mov    0x10(%ebp),%edx
 86af87c:	89 54 24 08          	mov    %edx,0x8(%esp)
 86af880:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af884:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86af887:	89 04 24             	mov    %eax,(%esp)
 86af88a:	e8 43 e2 ff ff       	call   86adad2 <_ZN8WongWork12CUserPremium10AddPremiumEiiii>
 86af88f:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 86af893:	74 1d                	je     86af8b2 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib+0xca>
 86af895:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86af898:	89 04 24             	mov    %eax,(%esp)
 86af89b:	e8 6e e8 ff ff       	call   86ae10e <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv>
 86af8a0:	8b 45 08             	mov    0x8(%ebp),%eax
 86af8a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af8a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86af8aa:	89 04 24             	mov    %eax,(%esp)
 86af8ad:	e8 14 f0 ff ff       	call   86ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>
 86af8b2:	c9                   	leave
 86af8b3:	c3                   	ret

```

```c
// WongWork::CHandlePremium::handleSetUserPremium @ 0x86af7e8

/* WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
    */

void WongWork::CHandlePremium::handleSetUserPremium
               (CUser *param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  CUserPremium *this;
  int iVar1;
  
  this = (CUserPremium *)CUser::GetPremiumInfoW(param_1);
  if (param_2 == 5) {
    CUserPremium::AddPremium(this,5,param_3,param_4,param_5);
  }
  else if ((param_3 == 0) || (param_4 == 0)) {
    CUserPremium::RemovePremium(this,param_2);
  }
  else {
    iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar1 < param_4) {
      CUserPremium::AddPremium(this,param_2,param_3,param_4,param_5);
    }
  }
  if (param_6 != '\0') {
    CUserPremium::ReCalcAdvantage(this);
    CUserPremium::RecalcAdditionalInfo(this,param_1);
  }
  return;
}

```

