# CInGameAdvertisementManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CheckFailMultiBoxLottery

```asm
// === 080fcb3e CInGameAdvertisementManager::CheckFailMultiBoxLottery  [0x080fcb3e-0x80fcd2d] ===
 80fcb3e:	55                   	push   %ebp
 80fcb3f:	89 e5                	mov    %esp,%ebp
 80fcb41:	56                   	push   %esi
 80fcb42:	53                   	push   %ebx
 80fcb43:	83 ec 70             	sub    $0x70,%esp
 80fcb46:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80fcb4a:	0f 84 cf 01 00 00    	je     80fcd1f <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1e1>
 80fcb50:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcb53:	89 04 24             	mov    %eax,(%esp)
 80fcb56:	e8 a1 16 00 00       	call   80fe1fc <_ZNKSt6vectorISt4pairI10Inven_ItembESaIS2_EE5emptyEv>
 80fcb5b:	84 c0                	test   %al,%al
 80fcb5d:	0f 85 bf 01 00 00    	jne    80fcd22 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1e4>
 80fcb63:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 80fcb67:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80fcb6a:	8b 55 10             	mov    0x10(%ebp),%edx
 80fcb6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fcb71:	89 04 24             	mov    %eax,(%esp)
 80fcb74:	e8 c7 16 00 00       	call   80fe240 <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EE5beginEv>
 80fcb79:	83 ec 04             	sub    $0x4,%esp
 80fcb7c:	e9 b4 00 00 00       	jmp    80fcc35 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xf7>
 80fcb81:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80fcb84:	89 04 24             	mov    %eax,(%esp)
 80fcb87:	e8 2a 17 00 00       	call   80fe2b6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairI10Inven_ItembESt6vectorIS3_SaIS3_EEEdeEv>
 80fcb8c:	8b 10                	mov    (%eax),%edx
 80fcb8e:	89 55 9a             	mov    %edx,-0x66(%ebp)
 80fcb91:	8b 50 04             	mov    0x4(%eax),%edx
 80fcb94:	89 55 9e             	mov    %edx,-0x62(%ebp)
 80fcb97:	8b 50 08             	mov    0x8(%eax),%edx
 80fcb9a:	89 55 a2             	mov    %edx,-0x5e(%ebp)
 80fcb9d:	8b 50 0c             	mov    0xc(%eax),%edx
 80fcba0:	89 55 a6             	mov    %edx,-0x5a(%ebp)
 80fcba3:	8b 50 10             	mov    0x10(%eax),%edx
 80fcba6:	89 55 aa             	mov    %edx,-0x56(%ebp)
 80fcba9:	8b 50 14             	mov    0x14(%eax),%edx
 80fcbac:	89 55 ae             	mov    %edx,-0x52(%ebp)
 80fcbaf:	8b 50 18             	mov    0x18(%eax),%edx
 80fcbb2:	89 55 b2             	mov    %edx,-0x4e(%ebp)
 80fcbb5:	8b 50 1c             	mov    0x1c(%eax),%edx
 80fcbb8:	89 55 b6             	mov    %edx,-0x4a(%ebp)
 80fcbbb:	8b 50 20             	mov    0x20(%eax),%edx
 80fcbbe:	89 55 ba             	mov    %edx,-0x46(%ebp)
 80fcbc1:	8b 50 24             	mov    0x24(%eax),%edx
 80fcbc4:	89 55 be             	mov    %edx,-0x42(%ebp)
 80fcbc7:	8b 50 28             	mov    0x28(%eax),%edx
 80fcbca:	89 55 c2             	mov    %edx,-0x3e(%ebp)
 80fcbcd:	8b 50 2c             	mov    0x2c(%eax),%edx
 80fcbd0:	89 55 c6             	mov    %edx,-0x3a(%ebp)
 80fcbd3:	8b 50 30             	mov    0x30(%eax),%edx
 80fcbd6:	89 55 ca             	mov    %edx,-0x36(%ebp)
 80fcbd9:	8b 50 34             	mov    0x34(%eax),%edx
 80fcbdc:	89 55 ce             	mov    %edx,-0x32(%ebp)
 80fcbdf:	8b 50 38             	mov    0x38(%eax),%edx
 80fcbe2:	89 55 d2             	mov    %edx,-0x2e(%ebp)
 80fcbe5:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
 80fcbe9:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 80fcbed:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80fcbf0:	3d 3c 1e 00 00       	cmp    $0x1e3c,%eax
 80fcbf5:	74 14                	je     80fcc0b <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xcd>
 80fcbf7:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80fcbfa:	3d 3d 1e 00 00       	cmp    $0x1e3d,%eax
 80fcbff:	74 0a                	je     80fcc0b <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xcd>
 80fcc01:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80fcc04:	3d 3e 1e 00 00       	cmp    $0x1e3e,%eax
 80fcc09:	75 24                	jne    80fcc2f <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xf1>
 80fcc0b:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 80fcc0f:	90                   	nop
 80fcc10:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fcc13:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80fcc1a:	00 
 80fcc1b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80fcc1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fcc22:	89 04 24             	mov    %eax,(%esp)
 80fcc25:	e8 96 16 00 00       	call   80fe2c0 <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairI10Inven_ItembESt6vectorIS3_SaIS3_EEEppEi>
 80fcc2a:	83 ec 04             	sub    $0x4,%esp
 80fcc2d:	eb 06                	jmp    80fcc35 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xf7>
 80fcc2f:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 80fcc33:	eb 2f                	jmp    80fcc64 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x126>
 80fcc35:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fcc38:	8b 55 10             	mov    0x10(%ebp),%edx
 80fcc3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fcc3f:	89 04 24             	mov    %eax,(%esp)
 80fcc42:	e8 1d 16 00 00       	call   80fe264 <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EE3endEv>
 80fcc47:	83 ec 04             	sub    $0x4,%esp
 80fcc4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fcc4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fcc51:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80fcc54:	89 04 24             	mov    %eax,(%esp)
 80fcc57:	e8 2e 16 00 00       	call   80fe28a <_ZN9__gnu_cxxneIPSt4pairI10Inven_ItembESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 80fcc5c:	84 c0                	test   %al,%al
 80fcc5e:	0f 85 1d ff ff ff    	jne    80fcb81 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x43>
 80fcc64:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 80fcc68:	83 f0 01             	xor    $0x1,%eax
 80fcc6b:	84 c0                	test   %al,%al
 80fcc6d:	74 18                	je     80fcc87 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x149>
 80fcc6f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80fcc76:	00 
 80fcc77:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcc7a:	89 04 24             	mov    %eax,(%esp)
 80fcc7d:	e8 c2 12 00 00       	call   80fdf44 <_ZN5CUser30set_multiboxLotteryItemFailCntEi>
 80fcc82:	e9 9c 00 00 00       	jmp    80fcd23 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1e5>
 80fcc87:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcc8a:	89 04 24             	mov    %eax,(%esp)
 80fcc8d:	e8 c4 12 00 00       	call   80fdf56 <_ZN5CUser30inc_multiboxLotteryItemFailCntEv>
 80fcc92:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80fcc95:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 80fcc99:	0f 8e 84 00 00 00    	jle    80fcd23 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1e5>
 80fcc9f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fcca2:	89 04 24             	mov    %eax,(%esp)
 80fcca5:	e8 a2 10 49 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80fccaa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fccad:	89 04 24             	mov    %eax,(%esp)
 80fccb0:	e8 31 ec fc ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 80fccb5:	c7 44 24 08 c6 01 00 	movl   $0x1c6,0x8(%esp)
 80fccbc:	00 
 80fccbd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80fccc4:	00 
 80fccc5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fccc8:	89 04 24             	mov    %eax,(%esp)
 80fcccb:	e8 2c ec fc ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80fccd0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80fccd7:	00 
 80fccd8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fccdb:	89 04 24             	mov    %eax,(%esp)
 80fccde:	e8 75 ec fc ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80fcce3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fcce6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fccea:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcced:	89 04 24             	mov    %eax,(%esp)
 80fccf0:	e8 c5 b8 54 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80fccf5:	eb 1b                	jmp    80fcd12 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1d4>
 80fccf7:	89 d3                	mov    %edx,%ebx
 80fccf9:	89 c6                	mov    %eax,%esi
 80fccfb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fccfe:	89 04 24             	mov    %eax,(%esp)
 80fcd01:	e8 7a 11 49 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80fcd06:	89 f0                	mov    %esi,%eax
 80fcd08:	89 da                	mov    %ebx,%edx
 80fcd0a:	89 04 24             	mov    %eax,(%esp)
 80fcd0d:	e8 3e 6a 9e 00       	call   8ae3750 <_Unwind_Resume>
 80fcd12:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fcd15:	89 04 24             	mov    %eax,(%esp)
 80fcd18:	e8 63 11 49 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80fcd1d:	eb 04                	jmp    80fcd23 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1e5>
 80fcd1f:	90                   	nop
 80fcd20:	eb 01                	jmp    80fcd23 <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1e5>
 80fcd22:	90                   	nop
 80fcd23:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80fcd26:	83 c4 00             	add    $0x0,%esp
 80fcd29:	5b                   	pop    %ebx
 80fcd2a:	5e                   	pop    %esi
 80fcd2b:	5d                   	pop    %ebp
 80fcd2c:	c3                   	ret
 80fcd2d:	90                   	nop

```

```c
// CInGameAdvertisementManager::CheckFailMultiBoxLottery @ 0x80fcb3e

/* CInGameAdvertisementManager::CheckFailMultiBoxLottery(CUser*, std::vector<std::pair<Inven_Item,
   bool>, std::allocator<std::pair<Inven_Item, bool> > >&) */

void CInGameAdvertisementManager::CheckFailMultiBoxLottery(CUser *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined2 uStack_68;
  undefined2 local_66;
  PacketGuard local_2c [12];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_18 [7];
  char local_11;
  int local_10;
  
  if ((param_2 != (vector *)0x0) &&
     (cVar1 = std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
              empty(), cVar1 == '\0')) {
    local_11 = '\0';
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
    while( true ) {
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
               ::operator*(local_20);
      uStack_68 = (undefined2)((uint)*puVar3 >> 0x10);
      local_66 = (undefined2)puVar3[1];
      if (((CONCAT22(local_66,uStack_68) != 0x1e3c) && (CONCAT22(local_66,uStack_68) != 0x1e3d)) &&
         (CONCAT22(local_66,uStack_68) != 0x1e3e)) {
        local_11 = '\0';
        break;
      }
      local_11 = '\x01';
      __gnu_cxx::
      __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
      ::operator++(local_18,(int)local_20);
    }
    if (local_11 == '\x01') {
      local_10 = CUser::inc_multiboxLotteryItemFailCnt((CUser *)param_2);
      if (2 < local_10) {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 080fccb0 to 080fccf4 has its CatchHandler @ 080fccf7 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x1c6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send((CUser *)param_2,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
    }
    else {
      CUser::set_multiboxLotteryItemFailCnt((CUser *)param_2,0);
    }
  }
  return;
}

```

---

## CheckIngameAdvertisementCondition

```asm
// === 080fcfa8 CInGameAdvertisementManager::CheckIngameAdvertisementCondition  [0x080fcfa8-0x80fd121] ===
 80fcfa8:	55                   	push   %ebp
 80fcfa9:	89 e5                	mov    %esp,%ebp
 80fcfab:	57                   	push   %edi
 80fcfac:	56                   	push   %esi
 80fcfad:	53                   	push   %ebx
 80fcfae:	81 ec 7c 06 00 00    	sub    $0x67c,%esp
 80fcfb4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fcfb7:	89 04 24             	mov    %eax,(%esp)
 80fcfba:	e8 35 13 00 00       	call   80fe2f4 <_ZNSt6vectorI20stNotifyIngameADInfoSaIS0_EEC1Ev>
 80fcfbf:	8b 45 14             	mov    0x14(%ebp),%eax
 80fcfc2:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 80fcfc6:	8b 55 08             	mov    0x8(%ebp),%edx
 80fcfc9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80fcfcc:	8d 4d d6             	lea    -0x2a(%ebp),%ecx
 80fcfcf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80fcfd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fcfd7:	89 04 24             	mov    %eax,(%esp)
 80fcfda:	e8 87 13 00 00       	call   80fe366 <_ZNSt8multimapIsP24CAdvertisementExposeInfoSt4lessIsESaISt4pairIKsS1_EEE11lower_boundERS5_>
 80fcfdf:	83 ec 04             	sub    $0x4,%esp
 80fcfe2:	eb 78                	jmp    80fd05c <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi+0xb4>
 80fcfe4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80fcfe7:	89 04 24             	mov    %eax,(%esp)
 80fcfea:	e8 01 14 00 00       	call   80fe3f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsP24CAdvertisementExposeInfoEEptEv>
 80fcfef:	8b 40 04             	mov    0x4(%eax),%eax
 80fcff2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80fcff5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fcff8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fcffc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcfff:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd003:	8b 45 08             	mov    0x8(%ebp),%eax
 80fd006:	89 04 24             	mov    %eax,(%esp)
 80fd009:	e8 20 fd ff ff       	call   80fcd2e <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo>
 80fd00e:	84 c0                	test   %al,%al
 80fd010:	74 3f                	je     80fd051 <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi+0xa9>
 80fd012:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fd015:	89 04 24             	mov    %eax,(%esp)
 80fd018:	e8 0f 0d 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fd01d:	05 10 02 00 00       	add    $0x210,%eax
 80fd022:	c7 44 24 08 3c 06 00 	movl   $0x63c,0x8(%esp)
 80fd029:	00 
 80fd02a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd02e:	8d 85 88 f9 ff ff    	lea    -0x678(%ebp),%eax
 80fd034:	89 04 24             	mov    %eax,(%esp)
 80fd037:	e8 64 08 f8 ff       	call   807d8a0 <memcpy@plt>
 80fd03c:	8d 85 88 f9 ff ff    	lea    -0x678(%ebp),%eax
 80fd042:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd046:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fd049:	89 04 24             	mov    %eax,(%esp)
 80fd04c:	e8 ad 13 00 00       	call   80fe3fe <_ZNSt6vectorI20stNotifyIngameADInfoSaIS0_EE9push_backERKS0_>
 80fd051:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80fd054:	89 04 24             	mov    %eax,(%esp)
 80fd057:	e8 76 13 00 00       	call   80fe3d2 <_ZNSt17_Rb_tree_iteratorISt4pairIKsP24CAdvertisementExposeInfoEEppEv>
 80fd05c:	8b 45 14             	mov    0x14(%ebp),%eax
 80fd05f:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 80fd063:	8b 55 08             	mov    0x8(%ebp),%edx
 80fd066:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fd069:	8d 4d de             	lea    -0x22(%ebp),%ecx
 80fd06c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80fd070:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fd074:	89 04 24             	mov    %eax,(%esp)
 80fd077:	e8 16 13 00 00       	call   80fe392 <_ZNSt8multimapIsP24CAdvertisementExposeInfoSt4lessIsESaISt4pairIKsS1_EEE11upper_boundERS5_>
 80fd07c:	83 ec 04             	sub    $0x4,%esp
 80fd07f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fd082:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd086:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80fd089:	89 04 24             	mov    %eax,(%esp)
 80fd08c:	e8 2d 13 00 00       	call   80fe3be <_ZNKSt17_Rb_tree_iteratorISt4pairIKsP24CAdvertisementExposeInfoEEneERKS5_>
 80fd091:	84 c0                	test   %al,%al
 80fd093:	0f 85 4b ff ff ff    	jne    80fcfe4 <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi+0x3c>
 80fd099:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fd09c:	89 04 24             	mov    %eax,(%esp)
 80fd09f:	e8 d0 13 00 00       	call   80fe474 <_ZNKSt6vectorI20stNotifyIngameADInfoSaIS0_EE4sizeEv>
 80fd0a4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80fd0a7:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 80fd0ab:	75 07                	jne    80fd0b4 <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi+0x10c>
 80fd0ad:	bb 00 00 00 00       	mov    $0x0,%ebx
 80fd0b2:	eb 55                	jmp    80fd109 <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi+0x161>
 80fd0b4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80fd0b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd0bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80fd0be:	89 04 24             	mov    %eax,(%esp)
 80fd0c1:	e8 6e 0c 00 00       	call   80fdd34 <_ZN27CInGameAdvertisementManager7RandNumEi>
 80fd0c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd0ca:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fd0cd:	89 04 24             	mov    %eax,(%esp)
 80fd0d0:	e8 c1 13 00 00       	call   80fe496 <_ZNSt6vectorI20stNotifyIngameADInfoSaIS0_EE2atEj>
 80fd0d5:	8b 55 10             	mov    0x10(%ebp),%edx
 80fd0d8:	89 c3                	mov    %eax,%ebx
 80fd0da:	b8 8f 01 00 00       	mov    $0x18f,%eax
 80fd0df:	89 d7                	mov    %edx,%edi
 80fd0e1:	89 de                	mov    %ebx,%esi
 80fd0e3:	89 c1                	mov    %eax,%ecx
 80fd0e5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 80fd0e7:	bb 01 00 00 00       	mov    $0x1,%ebx
 80fd0ec:	eb 1b                	jmp    80fd109 <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi+0x161>
 80fd0ee:	89 d3                	mov    %edx,%ebx
 80fd0f0:	89 c6                	mov    %eax,%esi
 80fd0f2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fd0f5:	89 04 24             	mov    %eax,(%esp)
 80fd0f8:	e8 0b 12 00 00       	call   80fe308 <_ZNSt6vectorI20stNotifyIngameADInfoSaIS0_EED1Ev>
 80fd0fd:	89 f0                	mov    %esi,%eax
 80fd0ff:	89 da                	mov    %ebx,%edx
 80fd101:	89 04 24             	mov    %eax,(%esp)
 80fd104:	e8 47 66 9e 00       	call   8ae3750 <_Unwind_Resume>
 80fd109:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fd10c:	89 04 24             	mov    %eax,(%esp)
 80fd10f:	e8 f4 11 00 00       	call   80fe308 <_ZNSt6vectorI20stNotifyIngameADInfoSaIS0_EED1Ev>
 80fd114:	89 d8                	mov    %ebx,%eax
 80fd116:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80fd119:	83 c4 00             	add    $0x0,%esp
 80fd11c:	5b                   	pop    %ebx
 80fd11d:	5e                   	pop    %esi
 80fd11e:	5f                   	pop    %edi
 80fd11f:	5d                   	pop    %ebp
 80fd120:	c3                   	ret
 80fd121:	90                   	nop

```

```c
// CInGameAdvertisementManager::CheckIngameAdvertisementCondition @ 0x80fcfa8

/* CInGameAdvertisementManager::CheckIngameAdvertisementCondition(CUser*, stNotifyIngameADInfo&,
   int) */

undefined4 __thiscall
CInGameAdvertisementManager::CheckIngameAdvertisementCondition
          (CInGameAdvertisementManager *this,CUser *param_1,stNotifyIngameADInfo *param_2,
          int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  stNotifyIngameADInfo local_67c [1596];
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_40 [4];
  vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>> local_3c [14];
  undefined2 local_2e;
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_2c [6];
  undefined2 local_26;
  int local_24;
  CAdvertisementExposeInfo *local_20;
  
  bVar6 = 0;
  std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::vector(local_3c);
  local_2e = (short)param_3;
                    /* try { // try from 080fcfda to 080fd0d4 has its CatchHandler @ 080fd0ee */
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::lower_bound(local_40,(short *)this);
  while( true ) {
    local_26 = (short)param_3;
    std::
    multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
    ::upper_bound(local_2c,(short *)this);
    cVar1 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_40,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar4 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_40);
    local_20 = *(CAdvertisementExposeInfo **)(iVar4 + 4);
    cVar1 = checkCondition(this,param_1,local_20);
    if (cVar1 != '\0') {
      iVar4 = CAdvertisementExposeInfo::getExposeCondition(local_20);
      memcpy(local_67c,(void *)(iVar4 + 0x210),0x63c);
      std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::push_back
                (local_3c,local_67c);
    }
    std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)local_40);
  }
  local_24 = std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::size(local_3c);
  if (local_24 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = RandNum(this,local_24);
    puVar3 = (undefined4 *)
             std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::at
                       (local_3c,uVar2);
    for (iVar4 = 399; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    uVar5 = 1;
  }
  std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::~vector(local_3c);
  return uVar5;
}

```

---

## InitADExposeInfo

```asm
// === 080fd122 CInGameAdvertisementManager::InitADExposeInfo  [0x080fd122-0x80fd19d] ===
 80fd122:	55                   	push   %ebp
 80fd123:	89 e5                	mov    %esp,%ebp
 80fd125:	83 ec 28             	sub    $0x28,%esp
 80fd128:	8b 55 08             	mov    0x8(%ebp),%edx
 80fd12b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd12e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fd132:	89 04 24             	mov    %eax,(%esp)
 80fd135:	e8 88 13 00 00       	call   80fe4c2 <_ZNSt8multimapIsP24CAdvertisementExposeInfoSt4lessIsESaISt4pairIKsS1_EEE5beginEv>
 80fd13a:	83 ec 04             	sub    $0x4,%esp
 80fd13d:	eb 27                	jmp    80fd166 <_ZN27CInGameAdvertisementManager16InitADExposeInfoEv+0x44>
 80fd13f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd142:	89 04 24             	mov    %eax,(%esp)
 80fd145:	e8 a6 12 00 00       	call   80fe3f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsP24CAdvertisementExposeInfoEEptEv>
 80fd14a:	8b 40 04             	mov    0x4(%eax),%eax
 80fd14d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80fd150:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd153:	89 04 24             	mov    %eax,(%esp)
 80fd156:	e8 73 f8 ff ff       	call   80fc9ce <_ZN24CAdvertisementExposeInfodlEPv>
 80fd15b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd15e:	89 04 24             	mov    %eax,(%esp)
 80fd161:	e8 6c 12 00 00       	call   80fe3d2 <_ZNSt17_Rb_tree_iteratorISt4pairIKsP24CAdvertisementExposeInfoEEppEv>
 80fd166:	8b 55 08             	mov    0x8(%ebp),%edx
 80fd169:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80fd16c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fd170:	89 04 24             	mov    %eax,(%esp)
 80fd173:	e8 70 13 00 00       	call   80fe4e8 <_ZNSt8multimapIsP24CAdvertisementExposeInfoSt4lessIsESaISt4pairIKsS1_EEE3endEv>
 80fd178:	83 ec 04             	sub    $0x4,%esp
 80fd17b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80fd17e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd182:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd185:	89 04 24             	mov    %eax,(%esp)
 80fd188:	e8 31 12 00 00       	call   80fe3be <_ZNKSt17_Rb_tree_iteratorISt4pairIKsP24CAdvertisementExposeInfoEEneERKS5_>
 80fd18d:	84 c0                	test   %al,%al
 80fd18f:	75 ae                	jne    80fd13f <_ZN27CInGameAdvertisementManager16InitADExposeInfoEv+0x1d>
 80fd191:	8b 45 08             	mov    0x8(%ebp),%eax
 80fd194:	89 04 24             	mov    %eax,(%esp)
 80fd197:	e8 72 13 00 00       	call   80fe50e <_ZNSt8multimapIsP24CAdvertisementExposeInfoSt4lessIsESaISt4pairIKsS1_EEE5clearEv>
 80fd19c:	c9                   	leave
 80fd19d:	c3                   	ret

```

```c
// CInGameAdvertisementManager::InitADExposeInfo @ 0x80fd122

/* CInGameAdvertisementManager::InitADExposeInfo() */

void __thiscall CInGameAdvertisementManager::InitADExposeInfo(CInGameAdvertisementManager *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_18 [4];
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_14 [4];
  CAdvertisementExposeInfo *local_10;
  
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::begin(local_18);
  while( true ) {
    std::
    multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
    ::end(local_14);
    p_Var3 = (_Rb_tree_iterator *)local_14;
    cVar1 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_18,p_Var3);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_18);
    local_10 = *(CAdvertisementExposeInfo **)(iVar2 + 4);
    CAdvertisementExposeInfo::operator_delete(local_10,p_Var3);
    std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)local_18);
  }
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::clear((multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
           *)this);
  return;
}

```

---

## InsertADExposeInfo

```asm
// === 080fd8e4 CInGameAdvertisementManager::InsertADExposeInfo  [0x080fd8e4-0x80fd95d] ===
 80fd8e4:	55                   	push   %ebp
 80fd8e5:	89 e5                	mov    %esp,%ebp
 80fd8e7:	83 ec 38             	sub    $0x38,%esp
 80fd8ea:	c7 04 24 50 08 00 00 	movl   $0x850,(%esp)
 80fd8f1:	e8 a2 f0 ff ff       	call   80fc998 <_ZN24CAdvertisementExposeInfonwEj>
 80fd8f6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80fd8f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80fd8fc:	8b 55 0c             	mov    0xc(%ebp),%edx
 80fd8ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fd903:	89 04 24             	mov    %eax,(%esp)
 80fd906:	e8 ff 03 00 00       	call   80fdd0a <_ZN24CAdvertisementExposeInfo26SetAdvertisementExposeInfoER25stInGameADExposeCondition>
 80fd90b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fd90e:	8d 88 04 02 00 00    	lea    0x204(%eax),%ecx
 80fd914:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80fd917:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80fd91a:	89 54 24 08          	mov    %edx,0x8(%esp)
 80fd91e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80fd922:	89 04 24             	mov    %eax,(%esp)
 80fd925:	e8 f7 0b 00 00       	call   80fe521 <_ZSt9make_pairIRsRP24CAdvertisementExposeInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 80fd92a:	83 ec 04             	sub    $0x4,%esp
 80fd92d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80fd930:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd934:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fd937:	89 04 24             	mov    %eax,(%esp)
 80fd93a:	e8 21 0c 00 00       	call   80fe560 <_ZNSt4pairIKsP24CAdvertisementExposeInfoEC1IsS2_EEOS_IT_T0_E>
 80fd93f:	8b 55 08             	mov    0x8(%ebp),%edx
 80fd942:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80fd945:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 80fd948:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80fd94c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fd950:	89 04 24             	mov    %eax,(%esp)
 80fd953:	e8 3a 0c 00 00       	call   80fe592 <_ZNSt8multimapIsP24CAdvertisementExposeInfoSt4lessIsESaISt4pairIKsS1_EEE6insertERKS6_>
 80fd958:	83 ec 04             	sub    $0x4,%esp
 80fd95b:	c9                   	leave
 80fd95c:	c3                   	ret
 80fd95d:	90                   	nop

```

```c
// CInGameAdvertisementManager::InsertADExposeInfo @ 0x80fd8e4

/* CInGameAdvertisementManager::InsertADExposeInfo(stInGameADExposeCondition&) */

void __thiscall
CInGameAdvertisementManager::InsertADExposeInfo
          (CInGameAdvertisementManager *this,stInGameADExposeCondition *param_1)

{
  CAdvertisementExposeInfo *this_00;
  uint in_stack_ffffffc8;
  pair local_20 [4];
  pair<short_const,CAdvertisementExposeInfo*> local_1c [8];
  short local_14 [8];
  
  this_00 = CAdvertisementExposeInfo::operator_new
                      ((CAdvertisementExposeInfo *)0x850,in_stack_ffffffc8);
  CAdvertisementExposeInfo::SetAdvertisementExposeInfo(this_00,param_1);
  std::make_pair<short&,CAdvertisementExposeInfo*&>
            (local_14,(CAdvertisementExposeInfo **)(param_1 + 0x204));
  std::pair<short_const,CAdvertisementExposeInfo*>::pair<short,CAdvertisementExposeInfo*>
            (local_1c,(pair *)local_14);
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::insert(local_20);
  return;
}

```

---

## LoadADExposeInfoAtApp

```asm
// === 080fd83c CInGameAdvertisementManager::LoadADExposeInfoAtApp  [0x080fd83c-0x80fd8e3] ===
 80fd83c:	55                   	push   %ebp
 80fd83d:	89 e5                	mov    %esp,%ebp
 80fd83f:	81 ec 88 7b 06 00    	sub    $0x67b88,%esp
 80fd845:	c7 44 24 08 60 7b 06 	movl   $0x67b60,0x8(%esp)
 80fd84c:	00 
 80fd84d:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 80fd854:	00 
 80fd855:	8d 85 94 84 f9 ff    	lea    -0x67b6c(%ebp),%eax
 80fd85b:	89 04 24             	mov    %eax,(%esp)
 80fd85e:	e8 5d 04 f8 ff       	call   807dcc0 <memset@plt>
 80fd863:	8d 85 94 84 f9 ff    	lea    -0x67b6c(%ebp),%eax
 80fd869:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd86d:	8b 45 08             	mov    0x8(%ebp),%eax
 80fd870:	89 04 24             	mov    %eax,(%esp)
 80fd873:	e8 26 f9 ff ff       	call   80fd19e <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition>
 80fd878:	84 c0                	test   %al,%al
 80fd87a:	74 61                	je     80fd8dd <_ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv+0xa1>
 80fd87c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80fd883:	eb 40                	jmp    80fd8c5 <_ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv+0x89>
 80fd885:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd888:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd88e:	8d 55 f8             	lea    -0x8(%ebp),%edx
 80fd891:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80fd894:	2d 54 79 06 00       	sub    $0x67954,%eax
 80fd899:	8b 00                	mov    (%eax),%eax
 80fd89b:	83 f8 ff             	cmp    $0xffffffff,%eax
 80fd89e:	74 35                	je     80fd8d5 <_ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv+0x99>
 80fd8a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd8a3:	8d 95 94 84 f9 ff    	lea    -0x67b6c(%ebp),%edx
 80fd8a9:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd8af:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80fd8b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd8b6:	8b 45 08             	mov    0x8(%ebp),%eax
 80fd8b9:	89 04 24             	mov    %eax,(%esp)
 80fd8bc:	e8 23 00 00 00       	call   80fd8e4 <_ZN27CInGameAdvertisementManager18InsertADExposeInfoER25stInGameADExposeCondition>
 80fd8c1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80fd8c5:	81 7d f4 c7 00 00 00 	cmpl   $0xc7,-0xc(%ebp)
 80fd8cc:	0f 9e c0             	setle  %al
 80fd8cf:	84 c0                	test   %al,%al
 80fd8d1:	75 b2                	jne    80fd885 <_ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv+0x49>
 80fd8d3:	eb 01                	jmp    80fd8d6 <_ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv+0x9a>
 80fd8d5:	90                   	nop
 80fd8d6:	b8 01 00 00 00       	mov    $0x1,%eax
 80fd8db:	eb 05                	jmp    80fd8e2 <_ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv+0xa6>
 80fd8dd:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd8e2:	c9                   	leave
 80fd8e3:	c3                   	ret

```

```c
// CInGameAdvertisementManager::LoadADExposeInfoAtApp @ 0x80fd83c

/* CInGameAdvertisementManager::LoadADExposeInfoAtApp() */

undefined4 __thiscall
CInGameAdvertisementManager::LoadADExposeInfoAtApp(CInGameAdvertisementManager *this)

{
  char cVar1;
  undefined4 uVar2;
  stInGameADExposeCondition asStack_67b70 [528];
  int aiStack_67960 [106068];
  int local_10;
  
  memset(asStack_67b70,0xff,0x67b60);
  cVar1 = queryADExposeInfo(this,asStack_67b70);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    for (local_10 = 0; (local_10 < 200 && (aiStack_67960[local_10 * 0x213] != -1));
        local_10 = local_10 + 1) {
      InsertADExposeInfo(this,asStack_67b70 + local_10 * 0x84c);
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## ReloadADExposeInfo

```asm
// === 080fd95e CInGameAdvertisementManager::ReloadADExposeInfo  [0x080fd95e-0x80fda55] ===
 80fd95e:	55                   	push   %ebp
 80fd95f:	89 e5                	mov    %esp,%ebp
 80fd961:	56                   	push   %esi
 80fd962:	53                   	push   %ebx
 80fd963:	83 ec 20             	sub    $0x20,%esp
 80fd966:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80fd96b:	c7 44 24 08 50 01 00 	movl   $0x150,0x8(%esp)
 80fd972:	00 
 80fd973:	c7 44 24 04 18 07 b4 	movl   $0x8b40718,0x4(%esp)
 80fd97a:	08 
 80fd97b:	89 04 24             	mov    %eax,(%esp)
 80fd97e:	e8 03 21 19 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80fd983:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80fd98a:	00 
 80fd98b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd98f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd992:	89 04 24             	mov    %eax,(%esp)
 80fd995:	e8 8c b2 fc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80fd99a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd99d:	89 04 24             	mov    %eax,(%esp)
 80fd9a0:	e8 a1 b2 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80fd9a5:	c7 44 24 04 f9 02 00 	movl   $0x2f9,0x4(%esp)
 80fd9ac:	00 
 80fd9ad:	89 04 24             	mov    %eax,(%esp)
 80fd9b0:	e8 a1 b2 fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80fd9b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd9b8:	89 04 24             	mov    %eax,(%esp)
 80fd9bb:	e8 86 b2 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80fd9c0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80fd9c7:	ff 
 80fd9c8:	89 04 24             	mov    %eax,(%esp)
 80fd9cb:	e8 86 b2 fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80fd9d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fd9d3:	89 04 24             	mov    %eax,(%esp)
 80fd9d6:	e8 73 b2 fc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80fd9db:	89 04 24             	mov    %eax,(%esp)
 80fd9de:	e8 db 0b 00 00       	call   80fe5be <_ZN12CStreamGuard11GetInBufferI32SIG_RELOAD_IN_GAME_ADVERTISEMENTEEPT_v>
 80fd9e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80fd9e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd9e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fd9ed:	8b 45 08             	mov    0x8(%ebp),%eax
 80fd9f0:	89 04 24             	mov    %eax,(%esp)
 80fd9f3:	e8 a6 f7 ff ff       	call   80fd19e <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition>
 80fd9f8:	84 c0                	test   %al,%al
 80fd9fa:	74 23                	je     80fda1f <_ZN27CInGameAdvertisementManager18ReloadADExposeInfoEv+0xc1>
 80fd9fc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80fda01:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80fda04:	89 54 24 08          	mov    %edx,0x8(%esp)
 80fda08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80fda0f:	00 
 80fda10:	89 04 24             	mov    %eax,(%esp)
 80fda13:	e8 c6 35 47 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80fda18:	bb 01 00 00 00       	mov    $0x1,%ebx
 80fda1d:	eb 22                	jmp    80fda41 <_ZN27CInGameAdvertisementManager18ReloadADExposeInfoEv+0xe3>
 80fda1f:	bb 00 00 00 00       	mov    $0x0,%ebx
 80fda24:	eb 1b                	jmp    80fda41 <_ZN27CInGameAdvertisementManager18ReloadADExposeInfoEv+0xe3>
 80fda26:	89 d3                	mov    %edx,%ebx
 80fda28:	89 c6                	mov    %eax,%esi
 80fda2a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fda2d:	89 04 24             	mov    %eax,(%esp)
 80fda30:	e8 9d ee 51 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80fda35:	89 f0                	mov    %esi,%eax
 80fda37:	89 da                	mov    %ebx,%edx
 80fda39:	89 04 24             	mov    %eax,(%esp)
 80fda3c:	e8 0f 5d 9e 00       	call   8ae3750 <_Unwind_Resume>
 80fda41:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80fda44:	89 04 24             	mov    %eax,(%esp)
 80fda47:	e8 86 ee 51 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80fda4c:	89 d8                	mov    %ebx,%eax
 80fda4e:	83 c4 20             	add    $0x20,%esp
 80fda51:	5b                   	pop    %ebx
 80fda52:	5e                   	pop    %esi
 80fda53:	5d                   	pop    %ebp
 80fda54:	c3                   	ret
 80fda55:	90                   	nop

```

```c
// CInGameAdvertisementManager::ReloadADExposeInfo @ 0x80fd95e

/* CInGameAdvertisementManager::ReloadADExposeInfo() */

bool __thiscall CInGameAdvertisementManager::ReloadADExposeInfo(CInGameAdvertisementManager *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_18 [8];
  SIG_RELOAD_IN_GAME_ADVERTISEMENT *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"InGameAdvertisementManager.cpp",0x150);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080fd9b0 to 080fda17 has its CatchHandler @ 080fda26 */
  CStreamGuard::operator<<(pCVar3,0x2f9);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_RELOAD_IN_GAME_ADVERTISEMENT>(pCVar3);
  cVar1 = queryADExposeInfo(this,(stInGameADExposeCondition *)local_10);
  if (cVar1 != '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return cVar1 != '\0';
}

```

---

## WriteLog

```asm
// === 080fda56 CInGameAdvertisementManager::WriteLog  [0x080fda56-0x80fdc62] ===
 80fda56:	55                   	push   %ebp
 80fda57:	89 e5                	mov    %esp,%ebp
 80fda59:	56                   	push   %esi
 80fda5a:	53                   	push   %ebx
 80fda5b:	83 ec 50             	sub    $0x50,%esp
 80fda5e:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80fda61:	8b 55 14             	mov    0x14(%ebp),%edx
 80fda64:	8b 45 18             	mov    0x18(%ebp),%eax
 80fda67:	88 4d c4             	mov    %cl,-0x3c(%ebp)
 80fda6a:	66 89 55 c0          	mov    %dx,-0x40(%ebp)
 80fda6e:	88 45 bc             	mov    %al,-0x44(%ebp)
 80fda71:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80fda75:	0f 84 e0 01 00 00    	je     80fdc5b <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0x205>
 80fda7b:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 80fda82:	c7 45 dc ff ff ff ff 	movl   $0xffffffff,-0x24(%ebp)
 80fda89:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 80fda90:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fda93:	89 04 24             	mov    %eax,(%esp)
 80fda96:	e8 f1 c8 fd ff       	call   80da38c <_ZN5CUser9get_stateEv>
 80fda9b:	83 f8 05             	cmp    $0x5,%eax
 80fda9e:	0f 94 c0             	sete   %al
 80fdaa1:	84 c0                	test   %al,%al
 80fdaa3:	74 3d                	je     80fdae2 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0x8c>
 80fdaa5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fdaa8:	89 04 24             	mov    %eax,(%esp)
 80fdaab:	e8 9c 76 55 00       	call   865514c <_ZN5CUser8GetPartyEv>
 80fdab0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80fdab3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80fdab7:	74 65                	je     80fdb1e <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0xc8>
 80fdab9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80fdabc:	05 24 0b 00 00       	add    $0xb24,%eax
 80fdac1:	89 04 24             	mov    %eax,(%esp)
 80fdac4:	e8 33 02 00 00       	call   80fdcfc <_ZN13CBattle_Field10GetDungeonEv>
 80fdac9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80fdacc:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 80fdad0:	74 4c                	je     80fdb1e <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0xc8>
 80fdad2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fdad5:	89 04 24             	mov    %eax,(%esp)
 80fdad8:	e8 13 02 00 00       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 80fdadd:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80fdae0:	eb 3c                	jmp    80fdb1e <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0xc8>
 80fdae2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fdae5:	89 04 24             	mov    %eax,(%esp)
 80fdae8:	e8 9f c8 fd ff       	call   80da38c <_ZN5CUser9get_stateEv>
 80fdaed:	83 f8 03             	cmp    $0x3,%eax
 80fdaf0:	0f 94 c0             	sete   %al
 80fdaf3:	84 c0                	test   %al,%al
 80fdaf5:	74 27                	je     80fdb1e <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0xc8>
 80fdaf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fdafa:	89 04 24             	mov    %eax,(%esp)
 80fdafd:	e8 62 7a 54 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 80fdb02:	0f be c0             	movsbl %al,%eax
 80fdb05:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80fdb08:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80fdb0f:	00 
 80fdb10:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fdb13:	89 04 24             	mov    %eax,(%esp)
 80fdb16:	e8 a3 38 58 00       	call   86813be <_ZN5CUser8get_areaEb>
 80fdb1b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80fdb1e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80fdb23:	c7 44 24 08 7a 01 00 	movl   $0x17a,0x8(%esp)
 80fdb2a:	00 
 80fdb2b:	c7 44 24 04 18 07 b4 	movl   $0x8b40718,0x4(%esp)
 80fdb32:	08 
 80fdb33:	89 04 24             	mov    %eax,(%esp)
 80fdb36:	e8 4b 1f 19 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80fdb3b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80fdb42:	00 
 80fdb43:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fdb47:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80fdb4a:	89 04 24             	mov    %eax,(%esp)
 80fdb4d:	e8 d4 b0 fc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80fdb52:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80fdb55:	89 04 24             	mov    %eax,(%esp)
 80fdb58:	e8 e9 b0 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80fdb5d:	c7 44 24 04 2c 03 00 	movl   $0x32c,0x4(%esp)
 80fdb64:	00 
 80fdb65:	89 04 24             	mov    %eax,(%esp)
 80fdb68:	e8 e9 b0 fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80fdb6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fdb70:	89 04 24             	mov    %eax,(%esp)
 80fdb73:	e8 1e b1 fc ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 80fdb78:	89 c3                	mov    %eax,%ebx
 80fdb7a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80fdb7d:	89 04 24             	mov    %eax,(%esp)
 80fdb80:	e8 c1 b0 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80fdb85:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80fdb89:	89 04 24             	mov    %eax,(%esp)
 80fdb8c:	e8 c5 b0 fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80fdb91:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80fdb94:	89 04 24             	mov    %eax,(%esp)
 80fdb97:	e8 b2 b0 fc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80fdb9c:	89 04 24             	mov    %eax,(%esp)
 80fdb9f:	e8 30 0a 00 00       	call   80fe5d4 <_ZN12CStreamGuard11GetInBufferI29SIG_IN_GAME_ADVERTISEMENT_LOGEEPT_v>
 80fdba4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80fdba7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fdbaa:	89 04 24             	mov    %eax,(%esp)
 80fdbad:	e8 bc c7 fd ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80fdbb2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80fdbb5:	89 02                	mov    %eax,(%edx)
 80fdbb7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80fdbbe:	ff 
 80fdbbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fdbc2:	89 04 24             	mov    %eax,(%esp)
 80fdbc5:	e8 d6 03 55 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80fdbca:	89 c2                	mov    %eax,%edx
 80fdbcc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdbcf:	89 50 04             	mov    %edx,0x4(%eax)
 80fdbd2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdbd5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80fdbd8:	89 50 1c             	mov    %edx,0x1c(%eax)
 80fdbdb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdbde:	0f b7 55 c0          	movzwl -0x40(%ebp),%edx
 80fdbe2:	66 89 50 0a          	mov    %dx,0xa(%eax)
 80fdbe6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdbe9:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 80fdbed:	88 50 08             	mov    %dl,0x8(%eax)
 80fdbf0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdbf3:	0f b6 55 bc          	movzbl -0x44(%ebp),%edx
 80fdbf7:	88 50 0c             	mov    %dl,0xc(%eax)
 80fdbfa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdbfd:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80fdc00:	89 50 10             	mov    %edx,0x10(%eax)
 80fdc03:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdc06:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80fdc09:	89 50 14             	mov    %edx,0x14(%eax)
 80fdc0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80fdc0f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 80fdc12:	89 50 18             	mov    %edx,0x18(%eax)
 80fdc15:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80fdc1a:	8d 55 d0             	lea    -0x30(%ebp),%edx
 80fdc1d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80fdc21:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80fdc28:	00 
 80fdc29:	89 04 24             	mov    %eax,(%esp)
 80fdc2c:	e8 ad 33 47 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80fdc31:	eb 1b                	jmp    80fdc4e <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0x1f8>
 80fdc33:	89 d3                	mov    %edx,%ebx
 80fdc35:	89 c6                	mov    %eax,%esi
 80fdc37:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80fdc3a:	89 04 24             	mov    %eax,(%esp)
 80fdc3d:	e8 90 ec 51 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80fdc42:	89 f0                	mov    %esi,%eax
 80fdc44:	89 da                	mov    %ebx,%edx
 80fdc46:	89 04 24             	mov    %eax,(%esp)
 80fdc49:	e8 02 5b 9e 00       	call   8ae3750 <_Unwind_Resume>
 80fdc4e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80fdc51:	89 04 24             	mov    %eax,(%esp)
 80fdc54:	e8 79 ec 51 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80fdc59:	eb 01                	jmp    80fdc5c <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj+0x206>
 80fdc5b:	90                   	nop
 80fdc5c:	83 c4 50             	add    $0x50,%esp
 80fdc5f:	5b                   	pop    %ebx
 80fdc60:	5e                   	pop    %esi
 80fdc61:	5d                   	pop    %ebp
 80fdc62:	c3                   	ret

```

```c
// CInGameAdvertisementManager::WriteLog @ 0x80fda56

/* CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int) */

void __thiscall
CInGameAdvertisementManager::WriteLog
          (CInGameAdvertisementManager *this,CUser *param_1,char param_2,short param_3,char param_4,
          uint param_5)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  SIG_IN_GAME_ADVERTISEMENT_LOG *local_20;
  int local_1c;
  CDungeon *local_18;
  int local_14;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_2c = 0xffffffff;
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
    iVar2 = CUser::get_state(param_1);
    if (iVar2 == 5) {
      local_1c = CUser::GetParty(param_1);
      if (local_1c != 0) {
        local_18 = (CDungeon *)CBattle_Field::GetDungeon((CBattle_Field *)(local_1c + 0xb24));
        if (local_18 != (CDungeon *)0x0) {
          local_2c = CDungeon::get_index(local_18);
        }
      }
    }
    else {
      iVar2 = CUser::get_state(param_1);
      if (iVar2 == 3) {
        cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        local_14 = (int)cVar1;
        local_10 = CUser::get_area(param_1,false);
      }
    }
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"InGameAdvertisementManager.cpp",0x17a);
    CStreamGuard::CStreamGuard(local_34,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 080fdb68 to 080fdc30 has its CatchHandler @ 080fdc33 */
    CStreamGuard::operator<<(pCVar4,0x32c);
    iVar2 = CUser::GetUID(param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar4,iVar2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_20 = CStreamGuard::GetInBuffer<SIG_IN_GAME_ADVERTISEMENT_LOG>(pCVar4);
    uVar5 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_20 = uVar5;
    uVar5 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_20 + 4) = uVar5;
    *(undefined4 *)(local_20 + 0x1c) = local_24;
    *(short *)(local_20 + 10) = param_3;
    local_20[8] = (SIG_IN_GAME_ADVERTISEMENT_LOG)param_2;
    local_20[0xc] = (SIG_IN_GAME_ADVERTISEMENT_LOG)param_4;
    *(uint *)(local_20 + 0x10) = param_5;
    *(undefined4 *)(local_20 + 0x14) = local_2c;
    *(undefined4 *)(local_20 + 0x18) = local_28;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  return;
}

```

---

## checkCondition

```asm
// === 080fcd2e CInGameAdvertisementManager::checkCondition  [0x080fcd2e-0x80fcfa7] ===
 80fcd2e:	55                   	push   %ebp
 80fcd2f:	89 e5                	mov    %esp,%ebp
 80fcd31:	53                   	push   %ebx
 80fcd32:	83 ec 24             	sub    $0x24,%esp
 80fcd35:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80fcd39:	75 0a                	jne    80fcd45 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x17>
 80fcd3b:	b8 00 00 00 00       	mov    $0x0,%eax
 80fcd40:	e9 5d 02 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fcd45:	e8 51 f4 fc ff       	call   80cc19b <_Z14G_CDataManagerv>
 80fcd4a:	05 5c 4a 00 00       	add    $0x4a5c,%eax
 80fcd4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80fcd52:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcd55:	89 04 24             	mov    %eax,(%esp)
 80fcd58:	e8 cf 0f 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcd5d:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 80fcd61:	3c ff                	cmp    $0xff,%al
 80fcd63:	0f 95 c0             	setne  %al
 80fcd66:	84 c0                	test   %al,%al
 80fcd68:	74 62                	je     80fcdcc <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x9e>
 80fcd6a:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcd6d:	89 04 24             	mov    %eax,(%esp)
 80fcd70:	e8 b7 0f 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcd75:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 80fcd79:	84 c0                	test   %al,%al
 80fcd7b:	0f 94 c0             	sete   %al
 80fcd7e:	84 c0                	test   %al,%al
 80fcd80:	74 25                	je     80fcda7 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x79>
 80fcd82:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcd85:	89 04 24             	mov    %eax,(%esp)
 80fcd88:	e8 fb 11 00 00       	call   80fdf88 <_ZN5CUser6GetAgeEv>
 80fcd8d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80fcd90:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 80fcd94:	3c 01                	cmp    $0x1,%al
 80fcd96:	0f 94 c0             	sete   %al
 80fcd99:	84 c0                	test   %al,%al
 80fcd9b:	74 2f                	je     80fcdcc <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x9e>
 80fcd9d:	b8 00 00 00 00       	mov    $0x0,%eax
 80fcda2:	e9 fb 01 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fcda7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcdaa:	89 04 24             	mov    %eax,(%esp)
 80fcdad:	e8 d6 11 00 00       	call   80fdf88 <_ZN5CUser6GetAgeEv>
 80fcdb2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80fcdb5:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 80fcdb9:	84 c0                	test   %al,%al
 80fcdbb:	0f 94 c0             	sete   %al
 80fcdbe:	84 c0                	test   %al,%al
 80fcdc0:	74 0a                	je     80fcdcc <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x9e>
 80fcdc2:	b8 00 00 00 00       	mov    $0x0,%eax
 80fcdc7:	e9 d6 01 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fcdcc:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcdcf:	89 04 24             	mov    %eax,(%esp)
 80fcdd2:	e8 55 0f 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcdd7:	0f b6 00             	movzbl (%eax),%eax
 80fcdda:	3c ff                	cmp    $0xff,%al
 80fcddc:	0f 95 c0             	setne  %al
 80fcddf:	84 c0                	test   %al,%al
 80fcde1:	74 54                	je     80fce37 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x109>
 80fcde3:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcde6:	89 04 24             	mov    %eax,(%esp)
 80fcde9:	e8 3e 0f 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcdee:	0f b6 00             	movzbl (%eax),%eax
 80fcdf1:	3c 01                	cmp    $0x1,%al
 80fcdf3:	0f 94 c0             	sete   %al
 80fcdf6:	84 c0                	test   %al,%al
 80fcdf8:	74 1e                	je     80fce18 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0xea>
 80fcdfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcdfd:	89 04 24             	mov    %eax,(%esp)
 80fce00:	e8 0d 1e 58 00       	call   867ec12 <_ZN5CUser6getSexEv>
 80fce05:	85 c0                	test   %eax,%eax
 80fce07:	0f 94 c0             	sete   %al
 80fce0a:	84 c0                	test   %al,%al
 80fce0c:	74 29                	je     80fce37 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x109>
 80fce0e:	b8 00 00 00 00       	mov    $0x0,%eax
 80fce13:	e9 8a 01 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fce18:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fce1b:	89 04 24             	mov    %eax,(%esp)
 80fce1e:	e8 ef 1d 58 00       	call   867ec12 <_ZN5CUser6getSexEv>
 80fce23:	83 f8 01             	cmp    $0x1,%eax
 80fce26:	0f 94 c0             	sete   %al
 80fce29:	84 c0                	test   %al,%al
 80fce2b:	74 0a                	je     80fce37 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x109>
 80fce2d:	b8 00 00 00 00       	mov    $0x0,%eax
 80fce32:	e9 6b 01 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fce37:	8b 45 10             	mov    0x10(%ebp),%eax
 80fce3a:	89 04 24             	mov    %eax,(%esp)
 80fce3d:	e8 ea 0e 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fce42:	83 c0 03             	add    $0x3,%eax
 80fce45:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fce49:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fce4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fce50:	8b 45 08             	mov    0x8(%ebp),%eax
 80fce53:	89 04 24             	mov    %eax,(%esp)
 80fce56:	e8 43 fc ff ff       	call   80fca9e <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc>
 80fce5b:	83 f0 01             	xor    $0x1,%eax
 80fce5e:	84 c0                	test   %al,%al
 80fce60:	74 0a                	je     80fce6c <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x13e>
 80fce62:	b8 00 00 00 00       	mov    $0x0,%eax
 80fce67:	e9 36 01 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fce6c:	8b 45 10             	mov    0x10(%ebp),%eax
 80fce6f:	89 04 24             	mov    %eax,(%esp)
 80fce72:	e8 b5 0e 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fce77:	8b 98 08 02 00 00    	mov    0x208(%eax),%ebx
 80fce7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fce80:	89 04 24             	mov    %eax,(%esp)
 80fce83:	e8 f2 10 00 00       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 80fce88:	39 c3                	cmp    %eax,%ebx
 80fce8a:	77 22                	ja     80fceae <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x180>
 80fce8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fce8f:	89 04 24             	mov    %eax,(%esp)
 80fce92:	e8 e3 10 00 00       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 80fce97:	89 c3                	mov    %eax,%ebx
 80fce99:	8b 45 10             	mov    0x10(%ebp),%eax
 80fce9c:	89 04 24             	mov    %eax,(%esp)
 80fce9f:	e8 88 0e 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcea4:	8b 80 0c 02 00 00    	mov    0x20c(%eax),%eax
 80fceaa:	39 c3                	cmp    %eax,%ebx
 80fceac:	72 07                	jb     80fceb5 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x187>
 80fceae:	b8 01 00 00 00       	mov    $0x1,%eax
 80fceb3:	eb 05                	jmp    80fceba <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x18c>
 80fceb5:	b8 00 00 00 00       	mov    $0x0,%eax
 80fceba:	84 c0                	test   %al,%al
 80fcebc:	74 0a                	je     80fcec8 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x19a>
 80fcebe:	b8 00 00 00 00       	mov    $0x0,%eax
 80fcec3:	e9 da 00 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fcec8:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcecb:	89 04 24             	mov    %eax,(%esp)
 80fcece:	e8 59 0e 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fced3:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 80fced7:	3c ff                	cmp    $0xff,%al
 80fced9:	0f 95 c0             	setne  %al
 80fcedc:	84 c0                	test   %al,%al
 80fcede:	74 32                	je     80fcf12 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x1e4>
 80fcee0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcee3:	89 04 24             	mov    %eax,(%esp)
 80fcee6:	e8 35 10 00 00       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 80fceeb:	89 c3                	mov    %eax,%ebx
 80fceed:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcef0:	89 04 24             	mov    %eax,(%esp)
 80fcef3:	e8 34 0e 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcef8:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 80fcefc:	0f be c0             	movsbl %al,%eax
 80fceff:	39 c3                	cmp    %eax,%ebx
 80fcf01:	0f 95 c0             	setne  %al
 80fcf04:	84 c0                	test   %al,%al
 80fcf06:	74 0a                	je     80fcf12 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x1e4>
 80fcf08:	b8 00 00 00 00       	mov    $0x0,%eax
 80fcf0d:	e9 90 00 00 00       	jmp    80fcfa2 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x274>
 80fcf12:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcf15:	89 04 24             	mov    %eax,(%esp)
 80fcf18:	e8 0f 0e 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcf1d:	0f b6 80 03 02 00 00 	movzbl 0x203(%eax),%eax
 80fcf24:	84 c0                	test   %al,%al
 80fcf26:	0f 95 c0             	setne  %al
 80fcf29:	84 c0                	test   %al,%al
 80fcf2b:	74 5e                	je     80fcf8b <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x25d>
 80fcf2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcf30:	89 04 24             	mov    %eax,(%esp)
 80fcf33:	e8 36 d4 fd ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80fcf38:	89 c3                	mov    %eax,%ebx
 80fcf3a:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcf3d:	89 04 24             	mov    %eax,(%esp)
 80fcf40:	e8 e7 0d 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcf45:	0f b6 80 03 02 00 00 	movzbl 0x203(%eax),%eax
 80fcf4c:	0f b6 c8             	movzbl %al,%ecx
 80fcf4f:	89 d8                	mov    %ebx,%eax
 80fcf51:	ba 00 00 00 00       	mov    $0x0,%edx
 80fcf56:	f7 f1                	div    %ecx
 80fcf58:	89 d0                	mov    %edx,%eax
 80fcf5a:	85 c0                	test   %eax,%eax
 80fcf5c:	0f 94 c0             	sete   %al
 80fcf5f:	84 c0                	test   %al,%al
 80fcf61:	74 14                	je     80fcf77 <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x249>
 80fcf63:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcf66:	89 04 24             	mov    %eax,(%esp)
 80fcf69:	e8 be 0d 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcf6e:	c6 80 49 05 00 00 00 	movb   $0x0,0x549(%eax)
 80fcf75:	eb 26                	jmp    80fcf9d <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x26f>
 80fcf77:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcf7a:	89 04 24             	mov    %eax,(%esp)
 80fcf7d:	e8 aa 0d 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcf82:	c6 80 49 05 00 00 01 	movb   $0x1,0x549(%eax)
 80fcf89:	eb 12                	jmp    80fcf9d <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo+0x26f>
 80fcf8b:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcf8e:	89 04 24             	mov    %eax,(%esp)
 80fcf91:	e8 96 0d 00 00       	call   80fdd2c <_ZN24CAdvertisementExposeInfo18getExposeConditionEv>
 80fcf96:	c6 80 49 05 00 00 01 	movb   $0x1,0x549(%eax)
 80fcf9d:	b8 01 00 00 00       	mov    $0x1,%eax
 80fcfa2:	83 c4 24             	add    $0x24,%esp
 80fcfa5:	5b                   	pop    %ebx
 80fcfa6:	5d                   	pop    %ebp
 80fcfa7:	c3                   	ret

```

```c
// CInGameAdvertisementManager::checkCondition @ 0x80fcd2e

/* CInGameAdvertisementManager::checkCondition(CUser*, CAdvertisementExposeInfo*) */

undefined4 __thiscall
CInGameAdvertisementManager::checkCondition
          (CInGameAdvertisementManager *this,CUser *param_1,CAdvertisementExposeInfo *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_2 == (CAdvertisementExposeInfo *)0x0) {
    return 0;
  }
  iVar3 = G_CDataManager();
  iVar4 = CAdvertisementExposeInfo::getExposeCondition(param_2);
  if (*(char *)(iVar4 + 1) != -1) {
    iVar4 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*(char *)(iVar4 + 1) == '\0') {
      iVar4 = CUser::GetAge(param_1);
      if (*(char *)(iVar3 + 0x4a5c + iVar4) == '\x01') {
        return 0;
      }
    }
    else {
      iVar4 = CUser::GetAge(param_1);
      if (*(char *)(iVar3 + 0x4a5c + iVar4) == '\0') {
        return 0;
      }
    }
  }
  pcVar5 = (char *)CAdvertisementExposeInfo::getExposeCondition(param_2);
  if (*pcVar5 != -1) {
    pcVar5 = (char *)CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*pcVar5 == '\x01') {
      iVar3 = CUser::getSex(param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      iVar3 = CUser::getSex(param_1);
      if (iVar3 == 1) {
        return 0;
      }
    }
  }
  iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
  cVar2 = checkLevel(this,param_1,(char *)(iVar3 + 3));
  if (cVar2 != '\x01') {
    return 0;
  }
  iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
  uVar7 = *(uint *)(iVar3 + 0x208);
  uVar6 = CUser::GetCera(param_1);
  if (uVar7 <= uVar6) {
    uVar7 = CUser::GetCera(param_1);
    iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (uVar7 < *(uint *)(iVar3 + 0x20c)) {
      bVar1 = false;
      goto LAB_080fceba;
    }
  }
  bVar1 = true;
LAB_080fceba:
  if (bVar1) {
    uVar8 = 0;
  }
  else {
    iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*(char *)(iVar3 + 2) != -1) {
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar4 = CAdvertisementExposeInfo::getExposeCondition(param_2);
      if (iVar3 != *(char *)(iVar4 + 2)) {
        return 0;
      }
    }
    iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*(char *)(iVar3 + 0x203) == '\0') {
      iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
      *(undefined1 *)(iVar3 + 0x549) = 1;
    }
    else {
      uVar7 = CUser::get_acc_id(param_1);
      iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
      if (uVar7 % (uint)*(byte *)(iVar3 + 0x203) == 0) {
        iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
        *(undefined1 *)(iVar3 + 0x549) = 0;
      }
      else {
        iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
        *(undefined1 *)(iVar3 + 0x549) = 1;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}

```

---

## checkLevel

```asm
// === 080fca9e CInGameAdvertisementManager::checkLevel  [0x080fca9e-0x80fcb3d] ===
 80fca9e:	55                   	push   %ebp
 80fca9f:	89 e5                	mov    %esp,%ebp
 80fcaa1:	81 ec 08 02 00 00    	sub    $0x208,%esp
 80fcaa7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80fcaab:	75 0a                	jne    80fcab7 <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x19>
 80fcaad:	b8 00 00 00 00       	mov    $0x0,%eax
 80fcab2:	e9 85 00 00 00       	jmp    80fcb3c <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x9e>
 80fcab7:	c7 44 24 0c 78 00 00 	movl   $0x78,0xc(%esp)
 80fcabe:	00 
 80fcabf:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
 80fcac5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fcac9:	c7 44 24 04 80 06 b4 	movl   $0x8b40680,0x4(%esp)
 80fcad0:	08 
 80fcad1:	8b 45 10             	mov    0x10(%ebp),%eax
 80fcad4:	89 04 24             	mov    %eax,(%esp)
 80fcad7:	e8 ec be 00 00       	call   81089c8 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 80fcadc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80fcadf:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80fcae6:	eb 42                	jmp    80fcb2a <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x8c>
 80fcae8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80fcaeb:	8b 84 85 08 fe ff ff 	mov    -0x1f8(%ebp,%eax,4),%eax
 80fcaf2:	89 04 24             	mov    %eax,(%esp)
 80fcaf5:	e8 f6 1b f8 ff       	call   807e6f0 <atoi@plt>
 80fcafa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80fcafd:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80fcb01:	75 07                	jne    80fcb0a <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x6c>
 80fcb03:	b8 01 00 00 00       	mov    $0x1,%eax
 80fcb08:	eb 32                	jmp    80fcb3c <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x9e>
 80fcb0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fcb0d:	89 04 24             	mov    %eax,(%esp)
 80fcb10:	e8 a3 d7 fd ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80fcb15:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80fcb18:	0f 94 c0             	sete   %al
 80fcb1b:	84 c0                	test   %al,%al
 80fcb1d:	74 07                	je     80fcb26 <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x88>
 80fcb1f:	b8 01 00 00 00       	mov    $0x1,%eax
 80fcb24:	eb 16                	jmp    80fcb3c <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x9e>
 80fcb26:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80fcb2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80fcb2d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80fcb30:	0f 9c c0             	setl   %al
 80fcb33:	84 c0                	test   %al,%al
 80fcb35:	75 b1                	jne    80fcae8 <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc+0x4a>
 80fcb37:	b8 00 00 00 00       	mov    $0x0,%eax
 80fcb3c:	c9                   	leave
 80fcb3d:	c3                   	ret

```

```c
// CInGameAdvertisementManager::checkLevel @ 0x80fca9e

/* CInGameAdvertisementManager::checkLevel(CUser*, char*) */

undefined4 __thiscall
CInGameAdvertisementManager::checkLevel
          (CInGameAdvertisementManager *this,CUser *param_1,char *param_2)

{
  int iVar1;
  char *local_1fc [121];
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_18 = DNFFLib::ExplodeString(param_2,",",local_1fc,0x78);
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      local_10 = atoi(local_1fc[local_14]);
      if (local_10 == -1) {
        return 1;
      }
      iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if (iVar1 == local_10) {
        return 1;
      }
    }
  }
  return 0;
}

```

---

## queryADExposeInfo

```asm
// === 080fd19e CInGameAdvertisementManager::queryADExposeInfo  [0x080fd19e-0x80fd83b] ===
 80fd19e:	55                   	push   %ebp
 80fd19f:	89 e5                	mov    %esp,%ebp
 80fd1a1:	83 ec 58             	sub    $0x58,%esp
 80fd1a4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 80fd1a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80fd1b0:	00 
 80fd1b1:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 80fd1b8:	00 
 80fd1b9:	89 04 24             	mov    %eax,(%esp)
 80fd1bc:	e8 7d 80 2f 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 80fd1c1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80fd1c4:	c7 44 24 04 84 06 b4 	movl   $0x8b40684,0x4(%esp)
 80fd1cb:	08 
 80fd1cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd1cf:	89 04 24             	mov    %eax,(%esp)
 80fd1d2:	e8 e9 6f 2f 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80fd1d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80fd1de:	00 
 80fd1df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd1e2:	89 04 24             	mov    %eax,(%esp)
 80fd1e5:	e8 3c 71 2f 00       	call   83f4326 <_ZN5MySQL4execEb>
 80fd1ea:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd1ed:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd1f1:	83 f0 01             	xor    $0x1,%eax
 80fd1f4:	84 c0                	test   %al,%al
 80fd1f6:	74 0a                	je     80fd202 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x64>
 80fd1f8:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd1fd:	e9 37 06 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd202:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd205:	89 04 24             	mov    %eax,(%esp)
 80fd208:	e8 5f 51 fe ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 80fd20d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80fd210:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80fd217:	e9 a1 05 00 00       	jmp    80fd7bd <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x61f>
 80fd21c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd21f:	89 04 24             	mov    %eax,(%esp)
 80fd222:	e8 95 72 2f 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 80fd227:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd22a:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd22e:	83 f0 01             	xor    $0x1,%eax
 80fd231:	84 c0                	test   %al,%al
 80fd233:	0f 85 97 05 00 00    	jne    80fd7d0 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x632>
 80fd239:	81 7d f4 c7 00 00 00 	cmpl   $0xc7,-0xc(%ebp)
 80fd240:	7e 42                	jle    80fd284 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0xe6>
 80fd242:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 80fd249:	00 
 80fd24a:	c7 44 24 08 eb 00 00 	movl   $0xeb,0x8(%esp)
 80fd251:	00 
 80fd252:	c7 44 24 04 a0 13 b4 	movl   $0x8b413a0,0x4(%esp)
 80fd259:	08 
 80fd25a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fd25d:	89 04 24             	mov    %eax,(%esp)
 80fd260:	e8 b3 24 45 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80fd265:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80fd268:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd26c:	c7 44 24 04 b0 06 b4 	movl   $0x8b406b0,0x4(%esp)
 80fd273:	08 
 80fd274:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80fd277:	89 04 24             	mov    %eax,(%esp)
 80fd27a:	e8 09 25 45 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80fd27f:	e9 4d 05 00 00       	jmp    80fd7d1 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x633>
 80fd284:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd287:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd28d:	03 45 0c             	add    0xc(%ebp),%eax
 80fd290:	05 10 02 00 00       	add    $0x210,%eax
 80fd295:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd299:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80fd2a0:	00 
 80fd2a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd2a4:	89 04 24             	mov    %eax,(%esp)
 80fd2a7:	e8 46 50 fe ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 80fd2ac:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd2af:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd2b3:	83 f0 01             	xor    $0x1,%eax
 80fd2b6:	84 c0                	test   %al,%al
 80fd2b8:	74 0a                	je     80fd2c4 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x126>
 80fd2ba:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd2bf:	e9 75 05 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd2c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd2c7:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd2cd:	03 45 0c             	add    0xc(%ebp),%eax
 80fd2d0:	05 14 02 00 00       	add    $0x214,%eax
 80fd2d5:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 80fd2dc:	00 
 80fd2dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd2e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80fd2e8:	00 
 80fd2e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd2ec:	89 04 24             	mov    %eax,(%esp)
 80fd2ef:	e8 f6 fa fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd2f4:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd2f7:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd2fb:	83 f0 01             	xor    $0x1,%eax
 80fd2fe:	84 c0                	test   %al,%al
 80fd300:	74 0a                	je     80fd30c <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x16e>
 80fd302:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd307:	e9 2d 05 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd30c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd30f:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd315:	03 45 0c             	add    0xc(%ebp),%eax
 80fd318:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd31c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80fd323:	00 
 80fd324:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd327:	89 04 24             	mov    %eax,(%esp)
 80fd32a:	e8 25 0b 00 00       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 80fd32f:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd332:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd336:	83 f0 01             	xor    $0x1,%eax
 80fd339:	84 c0                	test   %al,%al
 80fd33b:	74 0a                	je     80fd347 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x1a9>
 80fd33d:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd342:	e9 f2 04 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd347:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd34a:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd350:	03 45 0c             	add    0xc(%ebp),%eax
 80fd353:	83 c0 01             	add    $0x1,%eax
 80fd356:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd35a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 80fd361:	00 
 80fd362:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd365:	89 04 24             	mov    %eax,(%esp)
 80fd368:	e8 e7 0a 00 00       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 80fd36d:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd370:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd374:	83 f0 01             	xor    $0x1,%eax
 80fd377:	84 c0                	test   %al,%al
 80fd379:	74 0a                	je     80fd385 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x1e7>
 80fd37b:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd380:	e9 b4 04 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd385:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd388:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd38e:	03 45 0c             	add    0xc(%ebp),%eax
 80fd391:	83 c0 02             	add    $0x2,%eax
 80fd394:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd398:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80fd39f:	00 
 80fd3a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd3a3:	89 04 24             	mov    %eax,(%esp)
 80fd3a6:	e8 a9 0a 00 00       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 80fd3ab:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd3ae:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd3b2:	83 f0 01             	xor    $0x1,%eax
 80fd3b5:	84 c0                	test   %al,%al
 80fd3b7:	74 0a                	je     80fd3c3 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x225>
 80fd3b9:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd3be:	e9 76 04 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd3c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd3c6:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd3cc:	03 45 0c             	add    0xc(%ebp),%eax
 80fd3cf:	83 c0 03             	add    $0x3,%eax
 80fd3d2:	c7 44 24 0c 00 02 00 	movl   $0x200,0xc(%esp)
 80fd3d9:	00 
 80fd3da:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd3de:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 80fd3e5:	00 
 80fd3e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd3e9:	89 04 24             	mov    %eax,(%esp)
 80fd3ec:	e8 f9 f9 fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd3f1:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd3f4:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd3f8:	83 f0 01             	xor    $0x1,%eax
 80fd3fb:	84 c0                	test   %al,%al
 80fd3fd:	74 0a                	je     80fd409 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x26b>
 80fd3ff:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd404:	e9 30 04 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd409:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd40c:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd412:	03 45 0c             	add    0xc(%ebp),%eax
 80fd415:	05 46 02 00 00       	add    $0x246,%eax
 80fd41a:	c7 44 24 0c ff 00 00 	movl   $0xff,0xc(%esp)
 80fd421:	00 
 80fd422:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd426:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 80fd42d:	00 
 80fd42e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd431:	89 04 24             	mov    %eax,(%esp)
 80fd434:	e8 b1 f9 fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd439:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd43c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd440:	83 f0 01             	xor    $0x1,%eax
 80fd443:	84 c0                	test   %al,%al
 80fd445:	74 0a                	je     80fd451 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x2b3>
 80fd447:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd44c:	e9 e8 03 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd451:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd454:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd45a:	03 45 0c             	add    0xc(%ebp),%eax
 80fd45d:	05 44 04 00 00       	add    $0x444,%eax
 80fd462:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd466:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 80fd46d:	00 
 80fd46e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd471:	89 04 24             	mov    %eax,(%esp)
 80fd474:	e8 79 4e fe ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 80fd479:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd47c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd480:	83 f0 01             	xor    $0x1,%eax
 80fd483:	84 c0                	test   %al,%al
 80fd485:	74 0a                	je     80fd491 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x2f3>
 80fd487:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd48c:	e9 a8 03 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd491:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd494:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd49a:	03 45 0c             	add    0xc(%ebp),%eax
 80fd49d:	05 45 03 00 00       	add    $0x345,%eax
 80fd4a2:	c7 44 24 0c ff 00 00 	movl   $0xff,0xc(%esp)
 80fd4a9:	00 
 80fd4aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd4ae:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 80fd4b5:	00 
 80fd4b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd4b9:	89 04 24             	mov    %eax,(%esp)
 80fd4bc:	e8 29 f9 fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd4c1:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd4c4:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd4c8:	83 f0 01             	xor    $0x1,%eax
 80fd4cb:	84 c0                	test   %al,%al
 80fd4cd:	74 0a                	je     80fd4d9 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x33b>
 80fd4cf:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd4d4:	e9 60 03 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd4d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd4dc:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd4e2:	03 45 0c             	add    0xc(%ebp),%eax
 80fd4e5:	05 4a 05 00 00       	add    $0x54a,%eax
 80fd4ea:	c7 44 24 0c ff 00 00 	movl   $0xff,0xc(%esp)
 80fd4f1:	00 
 80fd4f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd4f6:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 80fd4fd:	00 
 80fd4fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd501:	89 04 24             	mov    %eax,(%esp)
 80fd504:	e8 e1 f8 fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd509:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd50c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd510:	83 f0 01             	xor    $0x1,%eax
 80fd513:	84 c0                	test   %al,%al
 80fd515:	74 0a                	je     80fd521 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x383>
 80fd517:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd51c:	e9 18 03 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd521:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd524:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd52a:	03 45 0c             	add    0xc(%ebp),%eax
 80fd52d:	05 49 06 00 00       	add    $0x649,%eax
 80fd532:	c7 44 24 0c ff 00 00 	movl   $0xff,0xc(%esp)
 80fd539:	00 
 80fd53a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd53e:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 80fd545:	00 
 80fd546:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd549:	89 04 24             	mov    %eax,(%esp)
 80fd54c:	e8 99 f8 fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd551:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd554:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd558:	83 f0 01             	xor    $0x1,%eax
 80fd55b:	84 c0                	test   %al,%al
 80fd55d:	74 0a                	je     80fd569 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x3cb>
 80fd55f:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd564:	e9 d0 02 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd569:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd56c:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd572:	03 45 0c             	add    0xc(%ebp),%eax
 80fd575:	05 48 07 00 00       	add    $0x748,%eax
 80fd57a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd57e:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 80fd585:	00 
 80fd586:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd589:	89 04 24             	mov    %eax,(%esp)
 80fd58c:	e8 61 4d fe ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 80fd591:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd594:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd598:	83 f0 01             	xor    $0x1,%eax
 80fd59b:	84 c0                	test   %al,%al
 80fd59d:	74 0a                	je     80fd5a9 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x40b>
 80fd59f:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd5a4:	e9 90 02 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd5a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd5ac:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd5b2:	03 45 0c             	add    0xc(%ebp),%eax
 80fd5b5:	05 4c 07 00 00       	add    $0x74c,%eax
 80fd5ba:	c7 44 24 0c ff 00 00 	movl   $0xff,0xc(%esp)
 80fd5c1:	00 
 80fd5c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd5c6:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 80fd5cd:	00 
 80fd5ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd5d1:	89 04 24             	mov    %eax,(%esp)
 80fd5d4:	e8 11 f8 fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd5d9:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd5dc:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd5e0:	83 f0 01             	xor    $0x1,%eax
 80fd5e3:	84 c0                	test   %al,%al
 80fd5e5:	74 0a                	je     80fd5f1 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x453>
 80fd5e7:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd5ec:	e9 48 02 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd5f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd5f4:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd5fa:	03 45 0c             	add    0xc(%ebp),%eax
 80fd5fd:	05 08 02 00 00       	add    $0x208,%eax
 80fd602:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd606:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 80fd60d:	00 
 80fd60e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd611:	89 04 24             	mov    %eax,(%esp)
 80fd614:	e8 d9 4c fe ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 80fd619:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd61c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd620:	83 f0 01             	xor    $0x1,%eax
 80fd623:	84 c0                	test   %al,%al
 80fd625:	74 0a                	je     80fd631 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x493>
 80fd627:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd62c:	e9 08 02 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd631:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd634:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd63a:	03 45 0c             	add    0xc(%ebp),%eax
 80fd63d:	05 0c 02 00 00       	add    $0x20c,%eax
 80fd642:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd646:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 80fd64d:	00 
 80fd64e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd651:	89 04 24             	mov    %eax,(%esp)
 80fd654:	e8 99 4c fe ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 80fd659:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd65c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd660:	83 f0 01             	xor    $0x1,%eax
 80fd663:	84 c0                	test   %al,%al
 80fd665:	74 0a                	je     80fd671 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x4d3>
 80fd667:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd66c:	e9 c8 01 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd671:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd674:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd67a:	03 45 0c             	add    0xc(%ebp),%eax
 80fd67d:	05 47 05 00 00       	add    $0x547,%eax
 80fd682:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd686:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 80fd68d:	00 
 80fd68e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd691:	89 04 24             	mov    %eax,(%esp)
 80fd694:	e8 bb 07 00 00       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 80fd699:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd69c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd6a0:	83 f0 01             	xor    $0x1,%eax
 80fd6a3:	84 c0                	test   %al,%al
 80fd6a5:	74 0a                	je     80fd6b1 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x513>
 80fd6a7:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd6ac:	e9 88 01 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd6b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd6b4:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd6ba:	03 45 0c             	add    0xc(%ebp),%eax
 80fd6bd:	05 03 02 00 00       	add    $0x203,%eax
 80fd6c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd6c6:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 80fd6cd:	00 
 80fd6ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd6d1:	89 04 24             	mov    %eax,(%esp)
 80fd6d4:	e8 e1 07 00 00       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 80fd6d9:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd6dc:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd6e0:	83 f0 01             	xor    $0x1,%eax
 80fd6e3:	84 c0                	test   %al,%al
 80fd6e5:	74 0a                	je     80fd6f1 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x553>
 80fd6e7:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd6ec:	e9 48 01 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd6f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd6f4:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd6fa:	03 45 0c             	add    0xc(%ebp),%eax
 80fd6fd:	05 04 02 00 00       	add    $0x204,%eax
 80fd702:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd706:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 80fd70d:	00 
 80fd70e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd711:	89 04 24             	mov    %eax,(%esp)
 80fd714:	e8 d3 06 00 00       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 80fd719:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd71c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd720:	83 f0 01             	xor    $0x1,%eax
 80fd723:	84 c0                	test   %al,%al
 80fd725:	74 0a                	je     80fd731 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x593>
 80fd727:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd72c:	e9 08 01 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd731:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd734:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd73a:	03 45 0c             	add    0xc(%ebp),%eax
 80fd73d:	05 48 04 00 00       	add    $0x448,%eax
 80fd742:	c7 44 24 0c ff 00 00 	movl   $0xff,0xc(%esp)
 80fd749:	00 
 80fd74a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd74e:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 80fd755:	00 
 80fd756:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd759:	89 04 24             	mov    %eax,(%esp)
 80fd75c:	e8 89 f6 fe ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80fd761:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd764:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd768:	83 f0 01             	xor    $0x1,%eax
 80fd76b:	84 c0                	test   %al,%al
 80fd76d:	74 0a                	je     80fd779 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x5db>
 80fd76f:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd774:	e9 c0 00 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd779:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd77c:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd782:	03 45 0c             	add    0xc(%ebp),%eax
 80fd785:	05 48 05 00 00       	add    $0x548,%eax
 80fd78a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd78e:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 80fd795:	00 
 80fd796:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80fd799:	89 04 24             	mov    %eax,(%esp)
 80fd79c:	e8 b3 06 00 00       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 80fd7a1:	88 45 eb             	mov    %al,-0x15(%ebp)
 80fd7a4:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 80fd7a8:	83 f0 01             	xor    $0x1,%eax
 80fd7ab:	84 c0                	test   %al,%al
 80fd7ad:	74 0a                	je     80fd7b9 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x61b>
 80fd7af:	b8 00 00 00 00       	mov    $0x0,%eax
 80fd7b4:	e9 80 00 00 00       	jmp    80fd839 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x69b>
 80fd7b9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80fd7bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd7c0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80fd7c3:	0f 9c c0             	setl   %al
 80fd7c6:	84 c0                	test   %al,%al
 80fd7c8:	0f 85 4e fa ff ff    	jne    80fd21c <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x7e>
 80fd7ce:	eb 01                	jmp    80fd7d1 <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition+0x633>
 80fd7d0:	90                   	nop
 80fd7d1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 80fd7d8:	00 
 80fd7d9:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 80fd7e0:	00 
 80fd7e1:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 80fd7e8:	00 
 80fd7e9:	c7 44 24 08 2c 01 00 	movl   $0x12c,0x8(%esp)
 80fd7f0:	00 
 80fd7f1:	c7 44 24 04 a0 13 b4 	movl   $0x8b413a0,0x4(%esp)
 80fd7f8:	08 
 80fd7f9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fd7fc:	89 04 24             	mov    %eax,(%esp)
 80fd7ff:	e8 42 1f 45 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 80fd804:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80fd807:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fd80b:	c7 44 24 04 d8 06 b4 	movl   $0x8b406d8,0x4(%esp)
 80fd812:	08 
 80fd813:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80fd816:	89 04 24             	mov    %eax,(%esp)
 80fd819:	e8 6a 1f 45 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80fd81e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fd821:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 80fd827:	03 45 0c             	add    0xc(%ebp),%eax
 80fd82a:	c7 80 10 02 00 00 ff 	movl   $0xffffffff,0x210(%eax)
 80fd831:	ff ff ff 
 80fd834:	b8 01 00 00 00       	mov    $0x1,%eax
 80fd839:	c9                   	leave
 80fd83a:	c3                   	ret
 80fd83b:	90                   	nop

```

```c
// CInGameAdvertisementManager::queryADExposeInfo @ 0x80fd19e

/* CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*) */

undefined4 __thiscall
CInGameAdvertisementManager::queryADExposeInfo
          (CInGameAdvertisementManager *this,stInGameADExposeCondition *param_1)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  MySQL::set_query(local_18,"seLect * from in_game_ad where visible = 1");
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    local_10 = 0;
    while( true ) {
      if ((local_14 <= local_10) || (local_19 = MySQL::fetch(local_18), local_19 != '\x01'))
      goto LAB_080fd7d1;
      if (199 < local_10) break;
      local_19 = MySQL::get_uint(local_18,0,(uint *)(param_1 + local_10 * 0x84c + 0x210));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,1,(char *)(param_1 + local_10 * 0x84c + 0x214),0x32);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,2,(char *)(param_1 + local_10 * 0x84c));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,3,(char *)(param_1 + local_10 * 0x84c + 1));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,4,(char *)(param_1 + local_10 * 0x84c + 2));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,5,(char *)(param_1 + local_10 * 0x84c + 3),0x200);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,6,(char *)(param_1 + local_10 * 0x84c + 0x246),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,7,(uint *)(param_1 + local_10 * 0x84c + 0x444));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,8,(char *)(param_1 + local_10 * 0x84c + 0x345),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,9,(char *)(param_1 + local_10 * 0x84c + 0x54a),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,10,(char *)(param_1 + local_10 * 0x84c + 0x649),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,0xb,(uint *)(param_1 + local_10 * 0x84c + 0x748));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,0xc,(char *)(param_1 + local_10 * 0x84c + 0x74c),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,0xd,(uint *)(param_1 + local_10 * 0x84c + 0x208));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,0xe,(uint *)(param_1 + local_10 * 0x84c + 0x20c));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,0xf,(char *)(param_1 + local_10 * 0x84c + 0x547));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,0x11,(uchar *)(param_1 + local_10 * 0x84c + 0x203));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_short(local_18,0x12,(short *)(param_1 + local_10 * 0x84c + 0x204));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,0x14,(char *)(param_1 + local_10 * 0x84c + 0x448),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_byte(local_18,0x15,(char *)(param_1 + local_10 * 0x84c + 0x548));
      if (cVar1 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      local_19 = '\x01';
    }
    cMyTrace::cMyTrace(local_3c,
                       "bool CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)"
                       ,0xeb,5);
    cMyTrace::operator()(local_3c,"[IN_GAME_ADVERTISEMENT_ERROR] count(%d)",local_14);
LAB_080fd7d1:
    cMyTrace::cMyTrace(local_2c,
                       "bool CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)"
                       ,300,9,true,true);
    cMyTrace::operator()
              (local_2c,"[!] Load In Game Advertisement Expose Info From DB(%d) Complete",local_14);
    *(undefined4 *)(param_1 + local_10 * 0x84c + 0x210) = 0xffffffff;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~CInGameAdvertisementManager

```asm
// === 080fca7c CInGameAdvertisementManager::~CInGameAdvertisementManager  [0x080fca7c-0x80fca9d] ===
 80fca7c:	55                   	push   %ebp
 80fca7d:	89 e5                	mov    %esp,%ebp
 80fca7f:	83 ec 18             	sub    $0x18,%esp
 80fca82:	8b 45 08             	mov    0x8(%ebp),%eax
 80fca85:	8b 40 18             	mov    0x18(%eax),%eax
 80fca88:	89 04 24             	mov    %eax,(%esp)
 80fca8b:	e8 60 7a 62 00       	call   87244f0 <_ZdlPv>
 80fca90:	8b 45 08             	mov    0x8(%ebp),%eax
 80fca93:	89 04 24             	mov    %eax,(%esp)
 80fca96:	e8 bb 12 00 00       	call   80fdd56 <_ZNSt8multimapIsP24CAdvertisementExposeInfoSt4lessIsESaISt4pairIKsS1_EEED1Ev>
 80fca9b:	c9                   	leave
 80fca9c:	c3                   	ret
 80fca9d:	90                   	nop

```

```c
// CInGameAdvertisementManager::~CInGameAdvertisementManager @ 0x80fca7c

/* CInGameAdvertisementManager::~CInGameAdvertisementManager() */

void __thiscall
CInGameAdvertisementManager::~CInGameAdvertisementManager(CInGameAdvertisementManager *this)

{
  operator_delete(*(void **)(this + 0x18));
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::~multimap((multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
               *)this);
  return;
}

```

