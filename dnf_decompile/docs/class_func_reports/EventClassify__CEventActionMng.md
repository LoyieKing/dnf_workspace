# EventClassify__CEventActionMng

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## getResultItemFromLottery

```asm
// === 0810dc5a EventClassify::CEventActionMng::getResultItemFromLottery  [0x0810dc5a-0x810debd] ===
 810dc5a:	55                   	push   %ebp
 810dc5b:	89 e5                	mov    %esp,%ebp
 810dc5d:	56                   	push   %esi
 810dc5e:	53                   	push   %ebx
 810dc5f:	81 ec 90 00 00 00    	sub    $0x90,%esp
 810dc65:	8b 75 0c             	mov    0xc(%ebp),%esi
 810dc68:	e8 2e e5 fb ff       	call   80cc19b <_Z14G_CDataManagerv>
 810dc6d:	89 74 24 04          	mov    %esi,0x4(%esp)
 810dc71:	89 04 24             	mov    %eax,(%esp)
 810dc74:	e8 b9 1d 25 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 810dc79:	89 45 f0             	mov    %eax,-0x10(%ebp)
 810dc7c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 810dc80:	75 0a                	jne    810dc8c <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x32>
 810dc82:	bb 11 00 00 00       	mov    $0x11,%ebx
 810dc87:	e9 26 02 00 00       	jmp    810deb2 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x258>
 810dc8c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810dc8f:	8b 00                	mov    (%eax),%eax
 810dc91:	83 c0 0c             	add    $0xc,%eax
 810dc94:	8b 10                	mov    (%eax),%edx
 810dc96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810dc99:	89 04 24             	mov    %eax,(%esp)
 810dc9c:	ff d2                	call   *%edx
 810dc9e:	83 f8 06             	cmp    $0x6,%eax
 810dca1:	74 0e                	je     810dcb1 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x57>
 810dca3:	83 f8 10             	cmp    $0x10,%eax
 810dca6:	0f 84 ae 00 00 00    	je     810dd5a <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x100>
 810dcac:	e9 f5 01 00 00       	jmp    810dea6 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x24c>
 810dcb1:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 810dcb7:	89 04 24             	mov    %eax,(%esp)
 810dcba:	e8 95 db fb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 810dcbf:	8d b5 7b ff ff ff    	lea    -0x85(%ebp),%esi
 810dcc5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810dcc8:	89 04 24             	mov    %eax,(%esp)
 810dccb:	e8 78 2f 00 00       	call   8110c48 <_ZNK5CItem9get_indexEv>
 810dcd0:	89 c3                	mov    %eax,%ebx
 810dcd2:	e8 c4 e4 fb ff       	call   80cc19b <_Z14G_CDataManagerv>
 810dcd7:	8b 40 0c             	mov    0xc(%eax),%eax
 810dcda:	89 74 24 08          	mov    %esi,0x8(%esp)
 810dcde:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810dce2:	89 04 24             	mov    %eax,(%esp)
 810dce5:	e8 46 45 40 00       	call   8512230 <_ZN9CItemList14get_lotto_itemEiPc>
 810dcea:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 810dcf0:	85 c0                	test   %eax,%eax
 810dcf2:	74 0b                	je     810dcff <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0xa5>
 810dcf4:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 810dcfa:	83 f8 ff             	cmp    $0xffffffff,%eax
 810dcfd:	75 0a                	jne    810dd09 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0xaf>
 810dcff:	bb 11 00 00 00       	mov    $0x11,%ebx
 810dd04:	e9 a9 01 00 00       	jmp    810deb2 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x258>
 810dd09:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810dd0c:	8d 95 7b ff ff ff    	lea    -0x85(%ebp),%edx
 810dd12:	83 c2 07             	add    $0x7,%edx
 810dd15:	89 54 24 08          	mov    %edx,0x8(%esp)
 810dd19:	8d 95 7b ff ff ff    	lea    -0x85(%ebp),%edx
 810dd1f:	83 c2 02             	add    $0x2,%edx
 810dd22:	89 54 24 04          	mov    %edx,0x4(%esp)
 810dd26:	89 04 24             	mov    %eax,(%esp)
 810dd29:	e8 09 3d 00 00       	call   8111a37 <_ZSt9make_pairIRmRiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 810dd2e:	83 ec 04             	sub    $0x4,%esp
 810dd31:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810dd34:	89 44 24 04          	mov    %eax,0x4(%esp)
 810dd38:	8d 45 c8             	lea    -0x38(%ebp),%eax
 810dd3b:	89 04 24             	mov    %eax,(%esp)
 810dd3e:	e8 33 3d 00 00       	call   8111a76 <_ZNSt4pairIiiEC1ImiEEOS_IT_T0_E>
 810dd43:	8d 45 c8             	lea    -0x38(%ebp),%eax
 810dd46:	89 44 24 04          	mov    %eax,0x4(%esp)
 810dd4a:	8b 45 10             	mov    0x10(%ebp),%eax
 810dd4d:	89 04 24             	mov    %eax,(%esp)
 810dd50:	e8 b1 f8 fc ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 810dd55:	e9 53 01 00 00       	jmp    810dead <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x253>
 810dd5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810dd5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810dd60:	8d 45 bc             	lea    -0x44(%ebp),%eax
 810dd63:	89 04 24             	mov    %eax,(%esp)
 810dd66:	e8 3d 3d 00 00       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 810dd6b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 810dd6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810dd72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810dd75:	89 04 24             	mov    %eax,(%esp)
 810dd78:	e8 e1 19 40 00       	call   850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>
 810dd7d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810dd80:	8d 55 bc             	lea    -0x44(%ebp),%edx
 810dd83:	89 54 24 04          	mov    %edx,0x4(%esp)
 810dd87:	89 04 24             	mov    %eax,(%esp)
 810dd8a:	e8 8b 3d 00 00       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 810dd8f:	83 ec 04             	sub    $0x4,%esp
 810dd92:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810dd95:	89 44 24 04          	mov    %eax,0x4(%esp)
 810dd99:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810dd9c:	89 04 24             	mov    %eax,(%esp)
 810dd9f:	e8 9a 3d 00 00       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 810dda4:	e9 9b 00 00 00       	jmp    810de44 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x1ea>
 810dda9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810ddac:	89 04 24             	mov    %eax,(%esp)
 810ddaf:	e8 0c 3e 00 00       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 810ddb4:	8b 00                	mov    (%eax),%eax
 810ddb6:	85 c0                	test   %eax,%eax
 810ddb8:	74 12                	je     810ddcc <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x172>
 810ddba:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810ddbd:	89 04 24             	mov    %eax,(%esp)
 810ddc0:	e8 fb 3d 00 00       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 810ddc5:	b8 00 00 00 00       	mov    $0x0,%eax
 810ddca:	eb 05                	jmp    810ddd1 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x177>
 810ddcc:	b8 01 00 00 00       	mov    $0x1,%eax
 810ddd1:	84 c0                	test   %al,%al
 810ddd3:	74 0f                	je     810dde4 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x18a>
 810ddd5:	bb 11 00 00 00       	mov    $0x11,%ebx
 810ddda:	be 00 00 00 00       	mov    $0x0,%esi
 810dddf:	e9 b1 00 00 00       	jmp    810de95 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x23b>
 810dde4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810dde7:	89 04 24             	mov    %eax,(%esp)
 810ddea:	e8 d1 3d 00 00       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 810ddef:	8d 70 08             	lea    0x8(%eax),%esi
 810ddf2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810ddf5:	89 04 24             	mov    %eax,(%esp)
 810ddf8:	e8 c3 3d 00 00       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 810ddfd:	89 c2                	mov    %eax,%edx
 810ddff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810de02:	89 74 24 08          	mov    %esi,0x8(%esp)
 810de06:	89 54 24 04          	mov    %edx,0x4(%esp)
 810de0a:	89 04 24             	mov    %eax,(%esp)
 810de0d:	e8 b8 3d 00 00       	call   8111bca <_ZSt9make_pairIRKjRKtESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 810de12:	83 ec 04             	sub    $0x4,%esp
 810de15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810de18:	89 44 24 04          	mov    %eax,0x4(%esp)
 810de1c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810de1f:	89 04 24             	mov    %eax,(%esp)
 810de22:	e8 e1 3d 00 00       	call   8111c08 <_ZNSt4pairIiiEC1IjtEEOS_IT_T0_E>
 810de27:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810de2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810de2e:	8b 45 10             	mov    0x10(%ebp),%eax
 810de31:	89 04 24             	mov    %eax,(%esp)
 810de34:	e8 cd f7 fc ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 810de39:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810de3c:	89 04 24             	mov    %eax,(%esp)
 810de3f:	e8 66 3d 00 00       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 810de44:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810de47:	8d 55 bc             	lea    -0x44(%ebp),%edx
 810de4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810de4e:	89 04 24             	mov    %eax,(%esp)
 810de51:	e8 02 3d 00 00       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 810de56:	83 ec 04             	sub    $0x4,%esp
 810de59:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810de5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810de60:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810de63:	89 04 24             	mov    %eax,(%esp)
 810de66:	e8 13 3d 00 00       	call   8111b7e <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 810de6b:	84 c0                	test   %al,%al
 810de6d:	0f 85 36 ff ff ff    	jne    810dda9 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x14f>
 810de73:	be 01 00 00 00       	mov    $0x1,%esi
 810de78:	eb 1b                	jmp    810de95 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x23b>
 810de7a:	89 d3                	mov    %edx,%ebx
 810de7c:	89 c6                	mov    %eax,%esi
 810de7e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 810de81:	89 04 24             	mov    %eax,(%esp)
 810de84:	e8 33 3c 00 00       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 810de89:	89 f0                	mov    %esi,%eax
 810de8b:	89 da                	mov    %ebx,%edx
 810de8d:	89 04 24             	mov    %eax,(%esp)
 810de90:	e8 bb 58 9d 00       	call   8ae3750 <_Unwind_Resume>
 810de95:	8d 45 bc             	lea    -0x44(%ebp),%eax
 810de98:	89 04 24             	mov    %eax,(%esp)
 810de9b:	e8 1c 3c 00 00       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 810dea0:	85 f6                	test   %esi,%esi
 810dea2:	74 0e                	je     810deb2 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x258>
 810dea4:	eb 07                	jmp    810dead <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x253>
 810dea6:	bb 17 00 00 00       	mov    $0x17,%ebx
 810deab:	eb 05                	jmp    810deb2 <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE+0x258>
 810dead:	bb 00 00 00 00       	mov    $0x0,%ebx
 810deb2:	89 d8                	mov    %ebx,%eax
 810deb4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 810deb7:	83 c4 00             	add    $0x0,%esp
 810deba:	5b                   	pop    %ebx
 810debb:	5e                   	pop    %esi
 810debc:	5d                   	pop    %ebp
 810debd:	c3                   	ret

```

```c
// EventClassify::CEventActionMng::getResultItemFromLottery @ 0x810dc5a

/* EventClassify::CEventActionMng::getResultItemFromLottery(unsigned int, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
EventClassify::CEventActionMng::getResultItemFromLottery
          (CEventActionMng *this,uint param_1,vector *param_2)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  undefined4 unaff_EBX;
  Inven_Item local_89 [2];
  int local_87 [14];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_4c [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_48 [12];
  pair<int,int> local_3c [8];
  ulong local_34 [2];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  pair<int,int> local_24 [8];
  uint local_1c [2];
  CItem *local_14;
  CItem *local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (local_14 == (CItem *)0x0) {
    return 0x11;
  }
  iVar2 = (**(code **)(*(int *)local_14 + 0xc))(local_14);
  if (iVar2 == 6) {
    Inven_Item::Inven_Item(local_89);
    iVar2 = CItem::get_index(local_14);
    iVar3 = G_CDataManager();
    CItemList::get_lotto_item(*(CItemList **)(iVar3 + 0xc),iVar2,(char *)local_89);
    if ((local_87[0] == 0) || (local_87[0] == -1)) {
      return 0x11;
    }
    std::make_pair<unsigned_long&,int&>(local_34,local_87);
    std::pair<int,int>::pair<unsigned_long,int>(local_3c,(pair *)local_34);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_3c);
  }
  else {
    if (iVar2 != 0x10) {
      return 0x17;
    }
    local_10 = local_14;
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
              (local_48);
                    /* try { // try from 0810dd78 to 0810de6a has its CatchHandler @ 0810de7a */
    CStackableItem::getBoosterItem((CStackableItem *)local_10,(vector *)local_48);
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin();
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_4c,local_2c);
    while( true ) {
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      bVar1 = __gnu_cxx::operator!=(local_4c,local_28);
      if (!bVar1) break;
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_4c);
      if (*piVar4 == 0) {
        unaff_EBX = 0x11;
        bVar1 = false;
        goto LAB_0810de95;
      }
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator->(local_4c);
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator->(local_4c);
      puVar5 = (ushort *)
               __gnu_cxx::
               __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
               ::operator->(local_4c);
      std::make_pair<unsigned_int_const&,unsigned_short_const&>(local_1c,puVar5);
      std::pair<int,int>::pair<unsigned_int,unsigned_short>(local_24,(pair *)local_1c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_24);
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator++(local_4c);
    }
    bVar1 = true;
LAB_0810de95:
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
              (local_48);
    if (!bVar1) {
      return unaff_EBX;
    }
  }
  return 0;
}

```

---

## process_action_send_mail

```asm
// === 0810cf32 EventClassify::CEventActionMng::process_action_send_mail  [0x0810cf32-0x810d4ad] ===
 810cf32:	55                   	push   %ebp
 810cf33:	89 e5                	mov    %esp,%ebp
 810cf35:	56                   	push   %esi
 810cf36:	53                   	push   %ebx
 810cf37:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 810cf3d:	8b 45 14             	mov    0x14(%ebp),%eax
 810cf40:	88 85 74 ff ff ff    	mov    %al,-0x8c(%ebp)
 810cf46:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810cf4a:	75 0a                	jne    810cf56 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x24>
 810cf4c:	bb 03 00 00 00       	mov    $0x3,%ebx
 810cf51:	e9 4b 05 00 00       	jmp    810d4a1 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x56f>
 810cf56:	8b 45 10             	mov    0x10(%ebp),%eax
 810cf59:	8b 40 28             	mov    0x28(%eax),%eax
 810cf5c:	85 c0                	test   %eax,%eax
 810cf5e:	7e 23                	jle    810cf83 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x51>
 810cf60:	8b 45 10             	mov    0x10(%ebp),%eax
 810cf63:	89 44 24 08          	mov    %eax,0x8(%esp)
 810cf67:	8b 45 0c             	mov    0xc(%ebp),%eax
 810cf6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cf6e:	8b 45 08             	mov    0x8(%ebp),%eax
 810cf71:	89 04 24             	mov    %eax,(%esp)
 810cf74:	e8 c3 08 00 00       	call   810d83c <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail>
 810cf79:	bb 00 00 00 00       	mov    $0x0,%ebx
 810cf7e:	e9 1e 05 00 00       	jmp    810d4a1 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x56f>
 810cf83:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 810cf89:	89 04 24             	mov    %eax,(%esp)
 810cf8c:	e8 c3 e8 fb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 810cf91:	8b 45 10             	mov    0x10(%ebp),%eax
 810cf94:	8b 40 20             	mov    0x20(%eax),%eax
 810cf97:	89 45 e8             	mov    %eax,-0x18(%ebp)
 810cf9a:	8b 45 10             	mov    0x10(%ebp),%eax
 810cf9d:	8b 40 24             	mov    0x24(%eax),%eax
 810cfa0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 810cfa3:	8b 45 10             	mov    0x10(%ebp),%eax
 810cfa6:	89 04 24             	mov    %eax,(%esp)
 810cfa9:	e8 22 4a 00 00       	call   81119d0 <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4sizeEv>
 810cfae:	85 c0                	test   %eax,%eax
 810cfb0:	0f 95 c0             	setne  %al
 810cfb3:	84 c0                	test   %al,%al
 810cfb5:	0f 84 9b 00 00 00    	je     810d056 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x124>
 810cfbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 810cfbe:	89 04 24             	mov    %eax,(%esp)
 810cfc1:	e8 5a 0f ff ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 810cfc6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 810cfc9:	8b 55 10             	mov    0x10(%ebp),%edx
 810cfcc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810cfcf:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 810cfd2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 810cfd6:	89 54 24 04          	mov    %edx,0x4(%esp)
 810cfda:	89 04 24             	mov    %eax,(%esp)
 810cfdd:	e8 b8 18 fc ff       	call   80ce89a <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4findERS4_>
 810cfe2:	83 ec 04             	sub    $0x4,%esp
 810cfe5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810cfe8:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cfec:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 810cfef:	89 04 24             	mov    %eax,(%esp)
 810cff2:	e8 31 4a 00 00       	call   8111a28 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 810cff7:	8b 55 10             	mov    0x10(%ebp),%edx
 810cffa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810cffd:	89 54 24 04          	mov    %edx,0x4(%esp)
 810d001:	89 04 24             	mov    %eax,(%esp)
 810d004:	e8 bf 02 fc ff       	call   80cd2c8 <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 810d009:	83 ec 04             	sub    $0x4,%esp
 810d00c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810d00f:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d013:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 810d016:	89 04 24             	mov    %eax,(%esp)
 810d019:	e8 0a 4a 00 00       	call   8111a28 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 810d01e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 810d021:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d025:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 810d028:	89 04 24             	mov    %eax,(%esp)
 810d02b:	e8 60 49 00 00       	call   8111990 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEneERKS4_>
 810d030:	84 c0                	test   %al,%al
 810d032:	74 22                	je     810d056 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x124>
 810d034:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 810d037:	89 04 24             	mov    %eax,(%esp)
 810d03a:	e8 65 49 00 00       	call   81119a4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEptEv>
 810d03f:	8b 40 04             	mov    0x4(%eax),%eax
 810d042:	89 45 e8             	mov    %eax,-0x18(%ebp)
 810d045:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 810d048:	89 04 24             	mov    %eax,(%esp)
 810d04b:	e8 54 49 00 00       	call   81119a4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEptEv>
 810d050:	8b 40 08             	mov    0x8(%eax),%eax
 810d053:	89 45 ec             	mov    %eax,-0x14(%ebp)
 810d056:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 810d05a:	75 07                	jne    810d063 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x131>
 810d05c:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 810d063:	c7 45 c8 ff ff ff ff 	movl   $0xffffffff,-0x38(%ebp)
 810d06a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 810d06d:	89 85 7d ff ff ff    	mov    %eax,-0x83(%ebp)
 810d073:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810d076:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d07a:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 810d080:	89 04 24             	mov    %eax,(%esp)
 810d083:	e8 fc e7 fb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 810d088:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 810d08e:	83 f8 01             	cmp    $0x1,%eax
 810d091:	75 28                	jne    810d0bb <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x189>
 810d093:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 810d099:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810d09d:	8b 45 10             	mov    0x10(%ebp),%eax
 810d0a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 810d0a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d0a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d0ab:	8b 45 08             	mov    0x8(%ebp),%eax
 810d0ae:	89 04 24             	mov    %eax,(%esp)
 810d0b1:	e8 f8 03 00 00       	call   810d4ae <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item>
 810d0b6:	e9 24 03 00 00       	jmp    810d3df <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x4ad>
 810d0bb:	e8 db f0 fb ff       	call   80cc19b <_Z14G_CDataManagerv>
 810d0c0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 810d0c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 810d0c7:	89 04 24             	mov    %eax,(%esp)
 810d0ca:	e8 63 29 25 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 810d0cf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 810d0d2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 810d0d6:	75 0a                	jne    810d0e2 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x1b0>
 810d0d8:	bb 11 00 00 00       	mov    $0x11,%ebx
 810d0dd:	e9 bf 03 00 00       	jmp    810d4a1 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x56f>
 810d0e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d0e5:	8b 00                	mov    (%eax),%eax
 810d0e7:	83 c0 08             	add    $0x8,%eax
 810d0ea:	8b 10                	mov    (%eax),%edx
 810d0ec:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 810d0f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d0f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d0f9:	89 04 24             	mov    %eax,(%esp)
 810d0fc:	ff d2                	call   *%edx
 810d0fe:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 810d102:	8b 45 10             	mov    0x10(%ebp),%eax
 810d105:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 810d109:	84 c0                	test   %al,%al
 810d10b:	0f 84 93 02 00 00    	je     810d3a4 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x472>
 810d111:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d114:	89 04 24             	mov    %eax,(%esp)
 810d117:	e8 e2 d1 fc ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 810d11c:	84 c0                	test   %al,%al
 810d11e:	74 09                	je     810d129 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x1f7>
 810d120:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 810d124:	e9 7b 02 00 00       	jmp    810d3a4 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x472>
 810d129:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d12c:	8b 00                	mov    (%eax),%eax
 810d12e:	83 c0 10             	add    $0x10,%eax
 810d131:	8b 10                	mov    (%eax),%edx
 810d133:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d136:	89 04 24             	mov    %eax,(%esp)
 810d139:	ff d2                	call   *%edx
 810d13b:	84 c0                	test   %al,%al
 810d13d:	74 3b                	je     810d17a <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x248>
 810d13f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d142:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810d146:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 810d14c:	89 44 24 08          	mov    %eax,0x8(%esp)
 810d150:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d153:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d157:	8b 45 08             	mov    0x8(%ebp),%eax
 810d15a:	89 04 24             	mov    %eax,(%esp)
 810d15d:	e8 aa 05 00 00       	call   810d70c <_ZN13EventClassify15CEventActionMng19process_avatar_sendEP5CUserR10Inven_ItemPK5CItem>
 810d162:	89 45 c8             	mov    %eax,-0x38(%ebp)
 810d165:	8b 45 c8             	mov    -0x38(%ebp),%eax
 810d168:	83 f8 ff             	cmp    $0xffffffff,%eax
 810d16b:	0f 85 ba 00 00 00    	jne    810d22b <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x2f9>
 810d171:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 810d175:	e9 b1 00 00 00       	jmp    810d22b <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x2f9>
 810d17a:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d17d:	89 04 24             	mov    %eax,(%esp)
 810d180:	e8 09 d1 fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810d185:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 810d18c:	00 
 810d18d:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 810d194:	00 
 810d195:	c7 44 24 44 0d 00 00 	movl   $0xd,0x44(%esp)
 810d19c:	00 
 810d19d:	8b 95 7b ff ff ff    	mov    -0x85(%ebp),%edx
 810d1a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 810d1a7:	8b 95 7f ff ff ff    	mov    -0x81(%ebp),%edx
 810d1ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 810d1b1:	8b 55 83             	mov    -0x7d(%ebp),%edx
 810d1b4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 810d1b8:	8b 55 87             	mov    -0x79(%ebp),%edx
 810d1bb:	89 54 24 10          	mov    %edx,0x10(%esp)
 810d1bf:	8b 55 8b             	mov    -0x75(%ebp),%edx
 810d1c2:	89 54 24 14          	mov    %edx,0x14(%esp)
 810d1c6:	8b 55 8f             	mov    -0x71(%ebp),%edx
 810d1c9:	89 54 24 18          	mov    %edx,0x18(%esp)
 810d1cd:	8b 55 93             	mov    -0x6d(%ebp),%edx
 810d1d0:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 810d1d4:	8b 55 97             	mov    -0x69(%ebp),%edx
 810d1d7:	89 54 24 20          	mov    %edx,0x20(%esp)
 810d1db:	8b 55 9b             	mov    -0x65(%ebp),%edx
 810d1de:	89 54 24 24          	mov    %edx,0x24(%esp)
 810d1e2:	8b 55 9f             	mov    -0x61(%ebp),%edx
 810d1e5:	89 54 24 28          	mov    %edx,0x28(%esp)
 810d1e9:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 810d1ec:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 810d1f0:	8b 55 a7             	mov    -0x59(%ebp),%edx
 810d1f3:	89 54 24 30          	mov    %edx,0x30(%esp)
 810d1f7:	8b 55 ab             	mov    -0x55(%ebp),%edx
 810d1fa:	89 54 24 34          	mov    %edx,0x34(%esp)
 810d1fe:	8b 55 af             	mov    -0x51(%ebp),%edx
 810d201:	89 54 24 38          	mov    %edx,0x38(%esp)
 810d205:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 810d208:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 810d20c:	0f b6 55 b7          	movzbl -0x49(%ebp),%edx
 810d210:	88 54 24 40          	mov    %dl,0x40(%esp)
 810d214:	89 04 24             	mov    %eax,(%esp)
 810d217:	e8 6a 5b 3f 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 810d21c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 810d21f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 810d222:	83 f8 ff             	cmp    $0xffffffff,%eax
 810d225:	75 04                	jne    810d22b <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x2f9>
 810d227:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 810d22b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 810d22f:	83 f0 01             	xor    $0x1,%eax
 810d232:	84 c0                	test   %al,%al
 810d234:	0f 84 6a 01 00 00    	je     810d3a4 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x472>
 810d23a:	80 bd 74 ff ff ff 00 	cmpb   $0x0,-0x8c(%ebp)
 810d241:	0f 84 5d 01 00 00    	je     810d3a4 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x472>
 810d247:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d24a:	89 04 24             	mov    %eax,(%esp)
 810d24d:	e8 fa 0a 48 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 810d252:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 810d259:	00 
 810d25a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810d261:	00 
 810d262:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d265:	89 04 24             	mov    %eax,(%esp)
 810d268:	e8 8f e6 fb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 810d26d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d270:	8b 00                	mov    (%eax),%eax
 810d272:	83 c0 10             	add    $0x10,%eax
 810d275:	8b 10                	mov    (%eax),%edx
 810d277:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d27a:	89 04 24             	mov    %eax,(%esp)
 810d27d:	ff d2                	call   *%edx
 810d27f:	84 c0                	test   %al,%al
 810d281:	74 65                	je     810d2e8 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x3b6>
 810d283:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810d28a:	00 
 810d28b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d28e:	89 04 24             	mov    %eax,(%esp)
 810d291:	e8 8a e6 fb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 810d296:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810d29d:	00 
 810d29e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d2a1:	89 04 24             	mov    %eax,(%esp)
 810d2a4:	e8 fb cb fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 810d2a9:	8b 75 c8             	mov    -0x38(%ebp),%esi
 810d2ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d2af:	89 04 24             	mov    %eax,(%esp)
 810d2b2:	e8 c7 cf fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810d2b7:	8d 55 b8             	lea    -0x48(%ebp),%edx
 810d2ba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 810d2be:	89 74 24 08          	mov    %esi,0x8(%esp)
 810d2c2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 810d2c9:	00 
 810d2ca:	89 04 24             	mov    %eax,(%esp)
 810d2cd:	e8 ea f3 3e 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 810d2d2:	83 f0 01             	xor    $0x1,%eax
 810d2d5:	84 c0                	test   %al,%al
 810d2d7:	74 71                	je     810d34a <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x418>
 810d2d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 810d2de:	be 00 00 00 00       	mov    $0x0,%esi
 810d2e3:	e9 a9 00 00 00       	jmp    810d391 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x45f>
 810d2e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810d2ef:	00 
 810d2f0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d2f3:	89 04 24             	mov    %eax,(%esp)
 810d2f6:	e8 25 e6 fb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 810d2fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810d302:	00 
 810d303:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d306:	89 04 24             	mov    %eax,(%esp)
 810d309:	e8 96 cb fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 810d30e:	8b 75 c8             	mov    -0x38(%ebp),%esi
 810d311:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d314:	89 04 24             	mov    %eax,(%esp)
 810d317:	e8 62 cf fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810d31c:	8d 55 b8             	lea    -0x48(%ebp),%edx
 810d31f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 810d323:	89 74 24 08          	mov    %esi,0x8(%esp)
 810d327:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810d32e:	00 
 810d32f:	89 04 24             	mov    %eax,(%esp)
 810d332:	e8 85 f3 3e 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 810d337:	83 f0 01             	xor    $0x1,%eax
 810d33a:	84 c0                	test   %al,%al
 810d33c:	74 0c                	je     810d34a <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x418>
 810d33e:	bb 00 00 00 00       	mov    $0x0,%ebx
 810d343:	be 00 00 00 00       	mov    $0x0,%esi
 810d348:	eb 47                	jmp    810d391 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x45f>
 810d34a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810d351:	00 
 810d352:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d355:	89 04 24             	mov    %eax,(%esp)
 810d358:	e8 fb e5 fb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 810d35d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d360:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d364:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d367:	89 04 24             	mov    %eax,(%esp)
 810d36a:	e8 4b b2 53 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 810d36f:	be 01 00 00 00       	mov    $0x1,%esi
 810d374:	eb 1b                	jmp    810d391 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x45f>
 810d376:	89 d3                	mov    %edx,%ebx
 810d378:	89 c6                	mov    %eax,%esi
 810d37a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d37d:	89 04 24             	mov    %eax,(%esp)
 810d380:	e8 fb 0a 48 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 810d385:	89 f0                	mov    %esi,%eax
 810d387:	89 da                	mov    %ebx,%edx
 810d389:	89 04 24             	mov    %eax,(%esp)
 810d38c:	e8 bf 63 9d 00       	call   8ae3750 <_Unwind_Resume>
 810d391:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810d394:	89 04 24             	mov    %eax,(%esp)
 810d397:	e8 e4 0a 48 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 810d39c:	85 f6                	test   %esi,%esi
 810d39e:	0f 84 fd 00 00 00    	je     810d4a1 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x56f>
 810d3a4:	8b 45 10             	mov    0x10(%ebp),%eax
 810d3a7:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 810d3ab:	84 c0                	test   %al,%al
 810d3ad:	74 06                	je     810d3b5 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x483>
 810d3af:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 810d3b3:	74 2a                	je     810d3df <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x4ad>
 810d3b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810d3b8:	89 44 24 10          	mov    %eax,0x10(%esp)
 810d3bc:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 810d3c2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810d3c6:	8b 45 10             	mov    0x10(%ebp),%eax
 810d3c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 810d3cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d3d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d3d4:	8b 45 08             	mov    0x8(%ebp),%eax
 810d3d7:	89 04 24             	mov    %eax,(%esp)
 810d3da:	e8 3d 06 00 00       	call   810da1c <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem>
 810d3df:	8b 45 10             	mov    0x10(%ebp),%eax
 810d3e2:	8d 50 38             	lea    0x38(%eax),%edx
 810d3e5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 810d3e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d3ec:	89 14 24             	mov    %edx,(%esp)
 810d3ef:	e8 32 3d 00 00       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 810d3f4:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 810d3fa:	89 45 dc             	mov    %eax,-0x24(%ebp)
 810d3fd:	8b 45 10             	mov    0x10(%ebp),%eax
 810d400:	8d 50 38             	lea    0x38(%eax),%edx
 810d403:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810d406:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d40a:	89 14 24             	mov    %edx,(%esp)
 810d40d:	e8 dc 0d f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810d412:	8b 45 10             	mov    0x10(%ebp),%eax
 810d415:	83 c0 38             	add    $0x38,%eax
 810d418:	8d 95 7b ff ff ff    	lea    -0x85(%ebp),%edx
 810d41e:	83 c2 07             	add    $0x7,%edx
 810d421:	89 54 24 04          	mov    %edx,0x4(%esp)
 810d425:	89 04 24             	mov    %eax,(%esp)
 810d428:	e8 f9 3c 00 00       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 810d42d:	0f b6 85 7c ff ff ff 	movzbl -0x84(%ebp),%eax
 810d434:	3c 02                	cmp    $0x2,%al
 810d436:	74 0b                	je     810d443 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x511>
 810d438:	0f b6 85 7c ff ff ff 	movzbl -0x84(%ebp),%eax
 810d43f:	3c 03                	cmp    $0x3,%al
 810d441:	75 21                	jne    810d464 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x532>
 810d443:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 810d447:	0f b7 c0             	movzwl %ax,%eax
 810d44a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 810d44d:	8b 45 10             	mov    0x10(%ebp),%eax
 810d450:	8d 50 38             	lea    0x38(%eax),%edx
 810d453:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810d456:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d45a:	89 14 24             	mov    %edx,(%esp)
 810d45d:	e8 8c 0d f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810d462:	eb 1c                	jmp    810d480 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb+0x54e>
 810d464:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 810d46b:	8b 45 10             	mov    0x10(%ebp),%eax
 810d46e:	8d 50 38             	lea    0x38(%eax),%edx
 810d471:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810d474:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d478:	89 14 24             	mov    %edx,(%esp)
 810d47b:	e8 6e 0d f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810d480:	8b 55 82             	mov    -0x7e(%ebp),%edx
 810d483:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 810d489:	89 54 24 08          	mov    %edx,0x8(%esp)
 810d48d:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d491:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d494:	89 04 24             	mov    %eax,(%esp)
 810d497:	e8 e8 56 58 00       	call   8692b84 <_ZN5CUser20SendAradEventItemLogEmi>
 810d49c:	bb 00 00 00 00       	mov    $0x0,%ebx
 810d4a1:	89 d8                	mov    %ebx,%eax
 810d4a3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 810d4a6:	83 c4 00             	add    $0x0,%esp
 810d4a9:	5b                   	pop    %ebx
 810d4aa:	5e                   	pop    %esi
 810d4ab:	5d                   	pop    %ebp
 810d4ac:	c3                   	ret
 810d4ad:	90                   	nop

```

```c
// EventClassify::CEventActionMng::process_action_send_mail @ 0x810cf32

/* EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_action_send_mail
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  CInventory *pCVar5;
  undefined4 unaff_EBX;
  Inven_Item local_89;
  char cStack_88;
  undefined2 uStack_87;
  undefined2 uStack_85;
  undefined1 uStack_83;
  int iStack_82;
  undefined1 local_7e;
  undefined4 uStack_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined1 local_4d;
  PacketGuard local_4c [12];
  _Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> local_40 [4];
  int local_3c;
  _Rb_tree_iterator local_38 [4];
  undefined4 local_34;
  _Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> local_30 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_2c [4];
  int local_28;
  uint local_24 [3];
  int local_18;
  CItem *local_14;
  char local_d;
  
  if (param_1 == (CUser *)0x0) {
    return 3;
  }
  if (0 < *(int *)(param_2 + 0x28)) {
    process_gold_mail_send(this,param_1,param_2);
    return 0;
  }
  Inven_Item::Inven_Item(&local_89);
  local_24[2] = *(uint *)(param_2 + 0x20);
  local_18 = *(int *)(param_2 + 0x24);
  iVar3 = std::
          map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          ::size((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                  *)param_2);
  if (iVar3 != 0) {
    local_34 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::find((int *)local_38);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::_Rb_tree_const_iterator
              (local_40,local_38);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::end(local_2c);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::_Rb_tree_const_iterator
              (local_30,(_Rb_tree_iterator *)local_2c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                      (local_40,(_Rb_tree_const_iterator *)local_30);
    if (cVar2 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                        (local_40);
      local_24[2] = *(int *)(iVar3 + 4);
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                        (local_40);
      local_18 = *(int *)(iVar3 + 8);
    }
  }
  if (local_18 == 0) {
    local_18 = 1;
  }
  local_3c = -1;
  uStack_87 = (undefined2)local_24[2];
  uStack_85 = (undefined2)(local_24[2] >> 0x10);
  Inven_Item::set_add_info(&local_89,local_18);
  if (CONCAT22(uStack_85,uStack_87) == 1) {
    process_coin_send(this,param_1,param_2,&local_89);
    goto LAB_0810d3df;
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,local_24[2]);
  if (local_14 == (CItem *)0x0) {
    return 0x11;
  }
  (**(code **)(*(int *)local_14 + 8))(local_14,&local_89);
  local_d = '\0';
  if (param_2[0x1c] != (Action_SendMail)0x0) {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
      if (cVar2 == '\0') {
        uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_3c = CInventory::insertItemIntoInventory
                             (uVar4,CONCAT22(uStack_87,CONCAT11(cStack_88,local_89)),
                              CONCAT13((undefined1)iStack_82,CONCAT12(uStack_83,uStack_85)),
                              CONCAT13(local_7e,iStack_82._1_3_),uStack_7d,local_79,local_75,
                              local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                              local_55,local_51,local_4d,0xd,1,1);
        if (local_3c == -1) {
          local_d = '\x01';
        }
      }
      else {
        local_3c = process_avatar_send(this,param_1,&local_89,local_14);
        if (local_3c == -1) {
          local_d = '\x01';
        }
      }
      if ((local_d != '\x01') && (param_3)) {
        PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 0810d268 to 0810d36e has its CatchHandler @ 0810d376 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0xe);
        cVar2 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,1);
          iVar3 = local_3c;
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar2 = CInventory::MakeItemPacket(pCVar5,1,iVar3,local_4c);
          if (cVar2 == '\x01') goto LAB_0810d34a;
          unaff_EBX = 0;
          bVar1 = false;
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,1);
          iVar3 = local_3c;
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar2 = CInventory::MakeItemPacket(pCVar5,2,iVar3,local_4c);
          if (cVar2 == '\x01') {
LAB_0810d34a:
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
            CUser::Send(param_1,local_4c);
            bVar1 = true;
          }
          else {
            unaff_EBX = 0;
            bVar1 = false;
          }
        }
        PacketGuard::~PacketGuard(local_4c);
        if (!bVar1) {
          return unaff_EBX;
        }
      }
    }
    else {
      local_d = '\x01';
    }
  }
  if ((param_2[0x1c] == (Action_SendMail)0x0) || (local_d != '\0')) {
    process_mail_send(this,param_1,param_2,&local_89,local_14);
  }
LAB_0810d3df:
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(param_2 + 0x38),&local_3c);
  local_28 = CONCAT22(uStack_85,uStack_87);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(param_2 + 0x38),&local_28);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(param_2 + 0x38),&iStack_82);
  if ((cStack_88 == '\x02') || (cStack_88 == '\x03')) {
    local_24[0] = (uint)CONCAT11((undefined1)uStack_7d,local_7e);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(param_2 + 0x38),(int *)local_24);
  }
  else {
    local_24[1] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(param_2 + 0x38),(int *)(local_24 + 1));
  }
  CUser::SendAradEventItemLog(param_1,CONCAT22(uStack_85,uStack_87),iStack_82);
  return 0;
}

```

---

## process_avatar_send

```asm
// === 0810d70c EventClassify::CEventActionMng::process_avatar_send  [0x0810d70c-0x810d83b] ===
 810d70c:	55                   	push   %ebp
 810d70d:	89 e5                	mov    %esp,%ebp
 810d70f:	57                   	push   %edi
 810d710:	56                   	push   %esi
 810d711:	53                   	push   %ebx
 810d712:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 810d718:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 810d71f:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d722:	89 04 24             	mov    %eax,(%esp)
 810d725:	e8 24 e5 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810d72a:	8d 55 8b             	lea    -0x75(%ebp),%edx
 810d72d:	89 54 24 08          	mov    %edx,0x8(%esp)
 810d731:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d735:	c7 04 24 07 00 00 00 	movl   $0x7,(%esp)
 810d73c:	e8 0f a0 3a 00       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 810d741:	89 c6                	mov    %eax,%esi
 810d743:	8b 45 14             	mov    0x14(%ebp),%eax
 810d746:	89 04 24             	mov    %eax,(%esp)
 810d749:	e8 12 35 00 00       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 810d74e:	89 c3                	mov    %eax,%ebx
 810d750:	8b 45 10             	mov    0x10(%ebp),%eax
 810d753:	8b 40 02             	mov    0x2(%eax),%eax
 810d756:	89 c7                	mov    %eax,%edi
 810d758:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d75b:	89 04 24             	mov    %eax,(%esp)
 810d75e:	e8 2b cb fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810d763:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 810d76a:	00 
 810d76b:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 810d772:	00 
 810d773:	c7 44 24 1c 02 00 00 	movl   $0x2,0x1c(%esp)
 810d77a:	00 
 810d77b:	89 74 24 18          	mov    %esi,0x18(%esp)
 810d77f:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 810d786:	ff 
 810d787:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 810d78e:	00 
 810d78f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810d796:	00 
 810d797:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810d79b:	89 7c 24 04          	mov    %edi,0x4(%esp)
 810d79f:	89 04 24             	mov    %eax,(%esp)
 810d7a2:	e8 f7 c3 3f 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 810d7a7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 810d7aa:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
 810d7ae:	74 7d                	je     810d82d <_ZN13EventClassify15CEventActionMng19process_avatar_sendEP5CUserR10Inven_ItemPK5CItem+0x121>
 810d7b0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 810d7b7:	e8 e2 e4 fb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 810d7bc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810d7bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d7c2:	89 04 24             	mov    %eax,(%esp)
 810d7c5:	e8 b4 ca fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810d7ca:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 810d7cd:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 810d7d0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 810d7d4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 810d7db:	00 
 810d7dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d7e0:	89 14 24             	mov    %edx,(%esp)
 810d7e3:	e8 30 e1 3e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 810d7e8:	83 ec 04             	sub    $0x4,%esp
 810d7eb:	8b 5d aa             	mov    -0x56(%ebp),%ebx
 810d7ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d7f1:	89 04 24             	mov    %eax,(%esp)
 810d7f4:	e8 85 ca fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810d7f9:	89 04 24             	mov    %eax,(%esp)
 810d7fc:	e8 75 fd fc ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 810d801:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 810d804:	89 54 24 08          	mov    %edx,0x8(%esp)
 810d808:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810d80c:	89 04 24             	mov    %eax,(%esp)
 810d80f:	e8 3c c0 1e 00       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 810d814:	8b 55 10             	mov    0x10(%ebp),%edx
 810d817:	89 42 07             	mov    %eax,0x7(%edx)
 810d81a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810d821:	00 
 810d822:	8b 45 10             	mov    0x10(%ebp),%eax
 810d825:	89 04 24             	mov    %eax,(%esp)
 810d828:	e8 cf 37 fe ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 810d82d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 810d830:	8d 65 f4             	lea    -0xc(%ebp),%esp
 810d833:	83 c4 00             	add    $0x0,%esp
 810d836:	5b                   	pop    %ebx
 810d837:	5e                   	pop    %esi
 810d838:	5f                   	pop    %edi
 810d839:	5d                   	pop    %ebp
 810d83a:	c3                   	ret
 810d83b:	90                   	nop

```

```c
// EventClassify::CEventActionMng::process_avatar_send @ 0x810d70c

/* EventClassify::CEventActionMng::process_avatar_send(CUser*, Inven_Item&, CItem const*) */

int __thiscall
EventClassify::CEventActionMng::process_avatar_send
          (CEventActionMng *this,CUser *param_1,Inven_Item *param_2,CItem *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  int iVar5;
  CAvatarItemMgr *this_00;
  undefined1 local_79 [24];
  undefined1 local_61 [7];
  int local_5a;
  int local_24;
  int local_20;
  
  local_24 = 0xffffffff;
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar2 = WongWork::CGenUniqueNo::genIPGNo(7,uVar1,local_79);
  uVar3 = CItem::getUsablePeriod(param_3);
  uVar1 = *(undefined4 *)(param_2 + 2);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_24 = CInventory::AddAvatarItem(pCVar4,uVar1,uVar3,0,0,0xffffffff,uVar2,2,0,0);
  if (local_24 != -1) {
    local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_61,iVar5);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
    uVar1 = WongWork::CAvatarItemMgr::GetRemainDate(this_00,local_5a,local_20);
    *(undefined4 *)(param_2 + 7) = uVar1;
    Inven_Item::SetUpgrade(param_2,'\0');
  }
  return local_24;
}

```

---

## process_coin_send

```asm
// === 0810d4ae EventClassify::CEventActionMng::process_coin_send  [0x0810d4ae-0x810d70b] ===
 810d4ae:	55                   	push   %ebp
 810d4af:	89 e5                	mov    %esp,%ebp
 810d4b1:	57                   	push   %edi
 810d4b2:	56                   	push   %esi
 810d4b3:	53                   	push   %ebx
 810d4b4:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 810d4ba:	8b 45 10             	mov    0x10(%ebp),%eax
 810d4bd:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 810d4c1:	84 c0                	test   %al,%al
 810d4c3:	0f 84 88 00 00 00    	je     810d551 <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0xa3>
 810d4c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d4cc:	89 04 24             	mov    %eax,(%esp)
 810d4cf:	e8 aa cd fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810d4d4:	89 04 24             	mov    %eax,(%esp)
 810d4d7:	e8 9e 37 00 00       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 810d4dc:	8b 55 14             	mov    0x14(%ebp),%edx
 810d4df:	8b 52 07             	mov    0x7(%edx),%edx
 810d4e2:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 810d4e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d4e8:	89 04 24             	mov    %eax,(%esp)
 810d4eb:	e8 9e cd fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810d4f0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810d4f4:	89 04 24             	mov    %eax,(%esp)
 810d4f7:	e8 8a 37 00 00       	call   8110c86 <_ZN10CInventory12SetEventCoinEj>
 810d4fc:	8b 45 14             	mov    0x14(%ebp),%eax
 810d4ff:	8b 58 07             	mov    0x7(%eax),%ebx
 810d502:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d505:	89 04 24             	mov    %eax,(%esp)
 810d508:	e8 71 cd fc ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 810d50d:	89 04 24             	mov    %eax,(%esp)
 810d510:	e8 65 37 00 00       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 810d515:	8b 55 0c             	mov    0xc(%ebp),%edx
 810d518:	81 c2 00 97 07 00    	add    $0x79700,%edx
 810d51e:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 810d525:	00 
 810d526:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810d52a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d52e:	89 14 24             	mov    %edx,(%esp)
 810d531:	e8 22 67 57 00       	call   8683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>
 810d536:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d539:	89 04 24             	mov    %eax,(%esp)
 810d53c:	e8 97 2f 54 00       	call   86504d8 <_ZN5CUser13SaveMoneyCoinEv>
 810d541:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d544:	89 04 24             	mov    %eax,(%esp)
 810d547:	e8 bc 92 54 00       	call   8656808 <_ZN5CUser8SendCoinEv>
 810d54c:	e9 aa 01 00 00       	jmp    810d6fb <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0x24d>
 810d551:	8b 45 14             	mov    0x14(%ebp),%eax
 810d554:	66 c7 40 0b 01 00    	movw   $0x1,0xb(%eax)
 810d55a:	8d 95 ca fe ff ff    	lea    -0x136(%ebp),%edx
 810d560:	bb 00 01 00 00       	mov    $0x100,%ebx
 810d565:	b8 00 00 00 00       	mov    $0x0,%eax
 810d56a:	89 d1                	mov    %edx,%ecx
 810d56c:	83 e1 02             	and    $0x2,%ecx
 810d56f:	85 c9                	test   %ecx,%ecx
 810d571:	74 09                	je     810d57c <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0xce>
 810d573:	66 89 02             	mov    %ax,(%edx)
 810d576:	83 c2 02             	add    $0x2,%edx
 810d579:	83 eb 02             	sub    $0x2,%ebx
 810d57c:	89 d9                	mov    %ebx,%ecx
 810d57e:	c1 e9 02             	shr    $0x2,%ecx
 810d581:	89 d7                	mov    %edx,%edi
 810d583:	f3 ab                	rep stos %eax,%es:(%edi)
 810d585:	89 fa                	mov    %edi,%edx
 810d587:	89 d9                	mov    %ebx,%ecx
 810d589:	83 e1 02             	and    $0x2,%ecx
 810d58c:	85 c9                	test   %ecx,%ecx
 810d58e:	74 06                	je     810d596 <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0xe8>
 810d590:	66 89 02             	mov    %ax,(%edx)
 810d593:	83 c2 02             	add    $0x2,%edx
 810d596:	89 d9                	mov    %ebx,%ecx
 810d598:	83 e1 01             	and    $0x1,%ecx
 810d59b:	85 c9                	test   %ecx,%ecx
 810d59d:	74 05                	je     810d5a4 <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0xf6>
 810d59f:	88 02                	mov    %al,(%edx)
 810d5a1:	83 c2 01             	add    $0x1,%edx
 810d5a4:	8d 45 ca             	lea    -0x36(%ebp),%eax
 810d5a7:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 810d5ac:	ba 00 00 00 00       	mov    $0x0,%edx
 810d5b1:	89 c1                	mov    %eax,%ecx
 810d5b3:	83 e1 02             	and    $0x2,%ecx
 810d5b6:	85 c9                	test   %ecx,%ecx
 810d5b8:	74 09                	je     810d5c3 <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0x115>
 810d5ba:	66 89 10             	mov    %dx,(%eax)
 810d5bd:	83 c0 02             	add    $0x2,%eax
 810d5c0:	83 eb 02             	sub    $0x2,%ebx
 810d5c3:	89 de                	mov    %ebx,%esi
 810d5c5:	83 e6 fc             	and    $0xfffffffc,%esi
 810d5c8:	b9 00 00 00 00       	mov    $0x0,%ecx
 810d5cd:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 810d5d0:	83 c1 04             	add    $0x4,%ecx
 810d5d3:	39 f1                	cmp    %esi,%ecx
 810d5d5:	72 f6                	jb     810d5cd <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0x11f>
 810d5d7:	01 c8                	add    %ecx,%eax
 810d5d9:	89 d9                	mov    %ebx,%ecx
 810d5db:	83 e1 02             	and    $0x2,%ecx
 810d5de:	85 c9                	test   %ecx,%ecx
 810d5e0:	74 06                	je     810d5e8 <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0x13a>
 810d5e2:	66 89 10             	mov    %dx,(%eax)
 810d5e5:	83 c0 02             	add    $0x2,%eax
 810d5e8:	89 d9                	mov    %ebx,%ecx
 810d5ea:	83 e1 01             	and    $0x1,%ecx
 810d5ed:	85 c9                	test   %ecx,%ecx
 810d5ef:	74 05                	je     810d5f6 <_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item+0x148>
 810d5f1:	88 10                	mov    %dl,(%eax)
 810d5f3:	83 c0 01             	add    $0x1,%eax
 810d5f6:	8b 45 10             	mov    0x10(%ebp),%eax
 810d5f9:	83 c0 30             	add    $0x30,%eax
 810d5fc:	89 04 24             	mov    %eax,(%esp)
 810d5ff:	e8 ac 14 9d 00       	call   8adeab0 <_Z9toTStringRKSs>
 810d604:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810d60b:	00 
 810d60c:	89 44 24 08          	mov    %eax,0x8(%esp)
 810d610:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 810d617:	00 
 810d618:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 810d61f:	e8 da 81 99 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 810d624:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 810d62b:	00 
 810d62c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d630:	8d 45 ca             	lea    -0x36(%ebp),%eax
 810d633:	89 04 24             	mov    %eax,(%esp)
 810d636:	e8 95 02 f7 ff       	call   807d8d0 <strncpy@plt>
 810d63b:	8b 45 10             	mov    0x10(%ebp),%eax
 810d63e:	83 c0 34             	add    $0x34,%eax
 810d641:	89 04 24             	mov    %eax,(%esp)
 810d644:	e8 67 14 9d 00       	call   8adeab0 <_Z9toTStringRKSs>
 810d649:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810d650:	00 
 810d651:	89 44 24 08          	mov    %eax,0x8(%esp)
 810d655:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 810d65c:	00 
 810d65d:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 810d664:	e8 95 81 99 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 810d669:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 810d670:	00 
 810d671:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d675:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 810d67b:	89 04 24             	mov    %eax,(%esp)
 810d67e:	e8 4d 02 f7 ff       	call   807d8d0 <strncpy@plt>
 810d683:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d686:	89 04 24             	mov    %eax,(%esp)
 810d689:	e8 02 e6 fb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 810d68e:	89 c3                	mov    %eax,%ebx
 810d690:	8b 45 10             	mov    0x10(%ebp),%eax
 810d693:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 810d697:	0f be f8             	movsbl %al,%edi
 810d69a:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 810d6a0:	89 04 24             	mov    %eax,(%esp)
 810d6a3:	e8 08 0d f7 ff       	call   807e3b0 <strlen@plt>
 810d6a8:	89 c6                	mov    %eax,%esi
 810d6aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d6ad:	89 04 24             	mov    %eax,(%esp)
 810d6b0:	e8 99 e5 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810d6b5:	8b 55 10             	mov    0x10(%ebp),%edx
 810d6b8:	8b 52 28             	mov    0x28(%edx),%edx
 810d6bb:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 810d6c2:	00 
 810d6c3:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 810d6ca:	00 
 810d6cb:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 810d6cf:	89 7c 24 18          	mov    %edi,0x18(%esp)
 810d6d3:	89 74 24 14          	mov    %esi,0x14(%esp)
 810d6d7:	8d 8d ca fe ff ff    	lea    -0x136(%ebp),%ecx
 810d6dd:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 810d6e1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810d6e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 810d6e9:	8b 45 14             	mov    0x14(%ebp),%eax
 810d6ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d6f0:	8d 45 ca             	lea    -0x36(%ebp),%eax
 810d6f3:	89 04 24             	mov    %eax,(%esp)
 810d6f6:	e8 ed 7e 44 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 810d6fb:	b8 00 00 00 00       	mov    $0x0,%eax
 810d700:	81 c4 5c 01 00 00    	add    $0x15c,%esp
 810d706:	5b                   	pop    %ebx
 810d707:	5e                   	pop    %esi
 810d708:	5f                   	pop    %edi
 810d709:	5d                   	pop    %ebp
 810d70a:	c3                   	ret
 810d70b:	90                   	nop

```

```c
// EventClassify::CEventActionMng::process_coin_send @ 0x810d4ae

/* WARNING: Removing unreachable block (ram,0x0810d59f) */
/* WARNING: Removing unreachable block (ram,0x0810d5f1) */
/* EventClassify::CEventActionMng::process_coin_send(CUser*, Action_SendMail&, Inven_Item&) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_coin_send
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2,Inven_Item *param_3)

{
  char *pcVar1;
  Action_SendMail AVar2;
  int iVar3;
  CInventory *pCVar4;
  int iVar5;
  undefined4 uVar6;
  TCHAR *pTVar7;
  char *pcVar8;
  undefined4 uVar9;
  size_t sVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char local_13a [256];
  char local_3a [42];
  
  if (param_2[0x1c] == (Action_SendMail)0x0) {
    *(undefined2 *)(param_3 + 0xb) = 1;
    pcVar8 = local_13a;
    uVar12 = 0x100;
    bVar13 = ((uint)pcVar8 & 2) != 0;
    if (bVar13) {
      local_13a[0] = '\0';
      local_13a[1] = '\0';
      pcVar8 = local_13a + 2;
      uVar12 = 0xfe;
    }
    for (uVar12 = uVar12 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    if (bVar13) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
    }
    pcVar8 = local_3a;
    uVar12 = 0x1e;
    bVar13 = ((uint)pcVar8 & 2) != 0;
    if (bVar13) {
      local_3a[0] = '\0';
      local_3a[1] = '\0';
      pcVar8 = local_3a + 2;
      uVar12 = 0x1c;
    }
    uVar11 = 0;
    do {
      pcVar1 = pcVar8 + uVar11;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar11 = uVar11 + 4;
    } while (uVar11 < (uVar12 & 0xfffffffc));
    if (!bVar13) {
      (pcVar8 + uVar11)[0] = '\0';
      (pcVar8 + uVar11)[1] = '\0';
    }
    pTVar7 = toTString((string *)(param_2 + 0x30));
    pcVar8 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar7,
                                (bool *)0x0);
    strncpy(local_3a,pcVar8,0x1d);
    pTVar7 = toTString((string *)(param_2 + 0x34));
    pcVar8 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar7,
                                (bool *)0x0);
    strncpy(local_13a,pcVar8,0xff);
    uVar9 = CUser::GetServerGroup(param_1);
    AVar2 = param_2[0x2c];
    sVar10 = strlen(local_13a);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_3a,param_3,*(undefined4 *)(param_2 + 0x28),uVar6,local_13a,sVar10,
               (int)(char)AVar2,uVar9,0,0);
  }
  else {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = CInventory::GetEventCoin(pCVar4);
    iVar3 = *(int *)(param_3 + 7);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetEventCoin(pCVar4,iVar5 + iVar3);
    uVar9 = *(undefined4 *)(param_3 + 7);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar6 = CInventory::GetEventCoin(pCVar4);
    cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar6,uVar9,2);
    CUser::SaveMoneyCoin(param_1);
    CUser::SendCoin(param_1);
  }
  return 0;
}

```

---

## process_gold_mail_send

```asm
// === 0810d83c EventClassify::CEventActionMng::process_gold_mail_send  [0x0810d83c-0x810da1b] ===
 810d83c:	55                   	push   %ebp
 810d83d:	89 e5                	mov    %esp,%ebp
 810d83f:	57                   	push   %edi
 810d840:	56                   	push   %esi
 810d841:	53                   	push   %ebx
 810d842:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 810d848:	8d 45 8d             	lea    -0x73(%ebp),%eax
 810d84b:	89 04 24             	mov    %eax,(%esp)
 810d84e:	e8 01 e0 fb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 810d853:	c7 45 8f ff ff ff ff 	movl   $0xffffffff,-0x71(%ebp)
 810d85a:	8d 95 8d fe ff ff    	lea    -0x173(%ebp),%edx
 810d860:	bb 00 01 00 00       	mov    $0x100,%ebx
 810d865:	b8 00 00 00 00       	mov    $0x0,%eax
 810d86a:	89 d1                	mov    %edx,%ecx
 810d86c:	83 e1 01             	and    $0x1,%ecx
 810d86f:	85 c9                	test   %ecx,%ecx
 810d871:	74 08                	je     810d87b <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0x3f>
 810d873:	88 02                	mov    %al,(%edx)
 810d875:	83 c2 01             	add    $0x1,%edx
 810d878:	83 eb 01             	sub    $0x1,%ebx
 810d87b:	89 d1                	mov    %edx,%ecx
 810d87d:	83 e1 02             	and    $0x2,%ecx
 810d880:	85 c9                	test   %ecx,%ecx
 810d882:	74 09                	je     810d88d <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0x51>
 810d884:	66 89 02             	mov    %ax,(%edx)
 810d887:	83 c2 02             	add    $0x2,%edx
 810d88a:	83 eb 02             	sub    $0x2,%ebx
 810d88d:	89 d9                	mov    %ebx,%ecx
 810d88f:	c1 e9 02             	shr    $0x2,%ecx
 810d892:	89 d7                	mov    %edx,%edi
 810d894:	f3 ab                	rep stos %eax,%es:(%edi)
 810d896:	89 fa                	mov    %edi,%edx
 810d898:	89 d9                	mov    %ebx,%ecx
 810d89a:	83 e1 02             	and    $0x2,%ecx
 810d89d:	85 c9                	test   %ecx,%ecx
 810d89f:	74 06                	je     810d8a7 <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0x6b>
 810d8a1:	66 89 02             	mov    %ax,(%edx)
 810d8a4:	83 c2 02             	add    $0x2,%edx
 810d8a7:	89 d9                	mov    %ebx,%ecx
 810d8a9:	83 e1 01             	and    $0x1,%ecx
 810d8ac:	85 c9                	test   %ecx,%ecx
 810d8ae:	74 05                	je     810d8b5 <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0x79>
 810d8b0:	88 02                	mov    %al,(%edx)
 810d8b2:	83 c2 01             	add    $0x1,%edx
 810d8b5:	8d 45 ca             	lea    -0x36(%ebp),%eax
 810d8b8:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 810d8bd:	ba 00 00 00 00       	mov    $0x0,%edx
 810d8c2:	89 c1                	mov    %eax,%ecx
 810d8c4:	83 e1 02             	and    $0x2,%ecx
 810d8c7:	85 c9                	test   %ecx,%ecx
 810d8c9:	74 09                	je     810d8d4 <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0x98>
 810d8cb:	66 89 10             	mov    %dx,(%eax)
 810d8ce:	83 c0 02             	add    $0x2,%eax
 810d8d1:	83 eb 02             	sub    $0x2,%ebx
 810d8d4:	89 de                	mov    %ebx,%esi
 810d8d6:	83 e6 fc             	and    $0xfffffffc,%esi
 810d8d9:	b9 00 00 00 00       	mov    $0x0,%ecx
 810d8de:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 810d8e1:	83 c1 04             	add    $0x4,%ecx
 810d8e4:	39 f1                	cmp    %esi,%ecx
 810d8e6:	72 f6                	jb     810d8de <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0xa2>
 810d8e8:	01 c8                	add    %ecx,%eax
 810d8ea:	89 d9                	mov    %ebx,%ecx
 810d8ec:	83 e1 02             	and    $0x2,%ecx
 810d8ef:	85 c9                	test   %ecx,%ecx
 810d8f1:	74 06                	je     810d8f9 <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0xbd>
 810d8f3:	66 89 10             	mov    %dx,(%eax)
 810d8f6:	83 c0 02             	add    $0x2,%eax
 810d8f9:	89 d9                	mov    %ebx,%ecx
 810d8fb:	83 e1 01             	and    $0x1,%ecx
 810d8fe:	85 c9                	test   %ecx,%ecx
 810d900:	74 05                	je     810d907 <_ZN13EventClassify15CEventActionMng22process_gold_mail_sendEP5CUserR15Action_SendMail+0xcb>
 810d902:	88 10                	mov    %dl,(%eax)
 810d904:	83 c0 01             	add    $0x1,%eax
 810d907:	8b 45 10             	mov    0x10(%ebp),%eax
 810d90a:	83 c0 30             	add    $0x30,%eax
 810d90d:	89 04 24             	mov    %eax,(%esp)
 810d910:	e8 9b 11 9d 00       	call   8adeab0 <_Z9toTStringRKSs>
 810d915:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810d91c:	00 
 810d91d:	89 44 24 08          	mov    %eax,0x8(%esp)
 810d921:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 810d928:	00 
 810d929:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 810d930:	e8 c9 7e 99 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 810d935:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 810d93c:	00 
 810d93d:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d941:	8d 45 ca             	lea    -0x36(%ebp),%eax
 810d944:	89 04 24             	mov    %eax,(%esp)
 810d947:	e8 84 ff f6 ff       	call   807d8d0 <strncpy@plt>
 810d94c:	8b 45 10             	mov    0x10(%ebp),%eax
 810d94f:	83 c0 34             	add    $0x34,%eax
 810d952:	89 04 24             	mov    %eax,(%esp)
 810d955:	e8 56 11 9d 00       	call   8adeab0 <_Z9toTStringRKSs>
 810d95a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810d961:	00 
 810d962:	89 44 24 08          	mov    %eax,0x8(%esp)
 810d966:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 810d96d:	00 
 810d96e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 810d975:	e8 84 7e 99 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 810d97a:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 810d981:	00 
 810d982:	89 44 24 04          	mov    %eax,0x4(%esp)
 810d986:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 810d98c:	89 04 24             	mov    %eax,(%esp)
 810d98f:	e8 3c ff f6 ff       	call   807d8d0 <strncpy@plt>
 810d994:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d997:	89 04 24             	mov    %eax,(%esp)
 810d99a:	e8 f1 e2 fb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 810d99f:	89 c3                	mov    %eax,%ebx
 810d9a1:	8b 45 10             	mov    0x10(%ebp),%eax
 810d9a4:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 810d9a8:	0f be f8             	movsbl %al,%edi
 810d9ab:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 810d9b1:	89 04 24             	mov    %eax,(%esp)
 810d9b4:	e8 f7 09 f7 ff       	call   807e3b0 <strlen@plt>
 810d9b9:	89 c6                	mov    %eax,%esi
 810d9bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 810d9be:	89 04 24             	mov    %eax,(%esp)
 810d9c1:	e8 88 e2 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810d9c6:	8b 55 10             	mov    0x10(%ebp),%edx
 810d9c9:	8b 52 28             	mov    0x28(%edx),%edx
 810d9cc:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 810d9d3:	00 
 810d9d4:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 810d9db:	00 
 810d9dc:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 810d9e0:	89 7c 24 18          	mov    %edi,0x18(%esp)
 810d9e4:	89 74 24 14          	mov    %esi,0x14(%esp)
 810d9e8:	8d 8d 8d fe ff ff    	lea    -0x173(%ebp),%ecx
 810d9ee:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 810d9f2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810d9f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 810d9fa:	8d 45 8d             	lea    -0x73(%ebp),%eax
 810d9fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 810da01:	8d 45 ca             	lea    -0x36(%ebp),%eax
 810da04:	89 04 24             	mov    %eax,(%esp)
 810da07:	e8 dc 7b 44 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 810da0c:	b8 00 00 00 00       	mov    $0x0,%eax
 810da11:	81 c4 9c 01 00 00    	add    $0x19c,%esp
 810da17:	5b                   	pop    %ebx
 810da18:	5e                   	pop    %esi
 810da19:	5f                   	pop    %edi
 810da1a:	5d                   	pop    %ebp
 810da1b:	c3                   	ret

```

```c
// EventClassify::CEventActionMng::process_gold_mail_send @ 0x810d83c

/* WARNING: Removing unreachable block (ram,0x0810d902) */
/* EventClassify::CEventActionMng::process_gold_mail_send(CUser*, Action_SendMail&) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_gold_mail_send
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2)

{
  char *pcVar1;
  Action_SendMail AVar2;
  TCHAR *pTVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_177;
  char local_176 [255];
  Inven_Item local_77 [2];
  undefined4 local_75;
  char local_3a [42];
  
  bVar11 = 0;
  Inven_Item::Inven_Item(local_77);
  local_75 = 0xffffffff;
  pcVar8 = &local_177;
  uVar9 = 0x100;
  bVar10 = ((uint)pcVar8 & 1) != 0;
  if (bVar10) {
    local_177 = '\0';
    pcVar8 = local_176;
    uVar9 = 0xff;
  }
  if (((uint)pcVar8 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
    uVar9 = uVar9 - 2;
  }
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
  }
  if ((uVar9 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
  }
  if (bVar10) {
    *pcVar8 = '\0';
  }
  pcVar8 = local_3a;
  uVar9 = 0x1e;
  bVar10 = ((uint)pcVar8 & 2) != 0;
  if (bVar10) {
    local_3a[0] = '\0';
    local_3a[1] = '\0';
    pcVar8 = local_3a + 2;
    uVar9 = 0x1c;
  }
  uVar7 = 0;
  do {
    pcVar1 = pcVar8 + uVar7;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar7 = uVar7 + 4;
  } while (uVar7 < (uVar9 & 0xfffffffc));
  if (!bVar10) {
    (pcVar8 + uVar7)[0] = '\0';
    (pcVar8 + uVar7)[1] = '\0';
  }
  pTVar3 = toTString((string *)(param_2 + 0x30));
  pcVar8 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar3,(bool *)0x0
                             );
  strncpy(local_3a,pcVar8,0x1d);
  pTVar3 = toTString((string *)(param_2 + 0x34));
  pcVar8 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar3,(bool *)0x0
                             );
  strncpy(&local_177,pcVar8,0xff);
  uVar4 = CUser::GetServerGroup(param_1);
  AVar2 = param_2[0x2c];
  sVar5 = strlen(&local_177);
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
            (local_3a,local_77,*(undefined4 *)(param_2 + 0x28),uVar6,&local_177,sVar5,
             (int)(char)AVar2,uVar4,0,0);
  return 0;
}

```

---

## process_mail_send

```asm
// === 0810da1c EventClassify::CEventActionMng::process_mail_send  [0x0810da1c-0x810dc59] ===
 810da1c:	55                   	push   %ebp
 810da1d:	89 e5                	mov    %esp,%ebp
 810da1f:	57                   	push   %edi
 810da20:	56                   	push   %esi
 810da21:	53                   	push   %ebx
 810da22:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 810da28:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 810da2c:	75 0a                	jne    810da38 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x1c>
 810da2e:	b8 11 00 00 00       	mov    $0x11,%eax
 810da33:	e9 17 02 00 00       	jmp    810dc4f <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x233>
 810da38:	8d 95 ae fe ff ff    	lea    -0x152(%ebp),%edx
 810da3e:	bb 00 01 00 00       	mov    $0x100,%ebx
 810da43:	b8 00 00 00 00       	mov    $0x0,%eax
 810da48:	89 d1                	mov    %edx,%ecx
 810da4a:	83 e1 02             	and    $0x2,%ecx
 810da4d:	85 c9                	test   %ecx,%ecx
 810da4f:	74 09                	je     810da5a <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x3e>
 810da51:	66 89 02             	mov    %ax,(%edx)
 810da54:	83 c2 02             	add    $0x2,%edx
 810da57:	83 eb 02             	sub    $0x2,%ebx
 810da5a:	89 d9                	mov    %ebx,%ecx
 810da5c:	c1 e9 02             	shr    $0x2,%ecx
 810da5f:	89 d7                	mov    %edx,%edi
 810da61:	f3 ab                	rep stos %eax,%es:(%edi)
 810da63:	89 fa                	mov    %edi,%edx
 810da65:	89 d9                	mov    %ebx,%ecx
 810da67:	83 e1 02             	and    $0x2,%ecx
 810da6a:	85 c9                	test   %ecx,%ecx
 810da6c:	74 06                	je     810da74 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x58>
 810da6e:	66 89 02             	mov    %ax,(%edx)
 810da71:	83 c2 02             	add    $0x2,%edx
 810da74:	89 d9                	mov    %ebx,%ecx
 810da76:	83 e1 01             	and    $0x1,%ecx
 810da79:	85 c9                	test   %ecx,%ecx
 810da7b:	74 05                	je     810da82 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x66>
 810da7d:	88 02                	mov    %al,(%edx)
 810da7f:	83 c2 01             	add    $0x1,%edx
 810da82:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 810da85:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 810da8a:	ba 00 00 00 00       	mov    $0x0,%edx
 810da8f:	89 c1                	mov    %eax,%ecx
 810da91:	83 e1 02             	and    $0x2,%ecx
 810da94:	85 c9                	test   %ecx,%ecx
 810da96:	74 09                	je     810daa1 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x85>
 810da98:	66 89 10             	mov    %dx,(%eax)
 810da9b:	83 c0 02             	add    $0x2,%eax
 810da9e:	83 eb 02             	sub    $0x2,%ebx
 810daa1:	89 de                	mov    %ebx,%esi
 810daa3:	83 e6 fc             	and    $0xfffffffc,%esi
 810daa6:	b9 00 00 00 00       	mov    $0x0,%ecx
 810daab:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 810daae:	83 c1 04             	add    $0x4,%ecx
 810dab1:	39 f1                	cmp    %esi,%ecx
 810dab3:	72 f6                	jb     810daab <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x8f>
 810dab5:	01 c8                	add    %ecx,%eax
 810dab7:	89 d9                	mov    %ebx,%ecx
 810dab9:	83 e1 02             	and    $0x2,%ecx
 810dabc:	85 c9                	test   %ecx,%ecx
 810dabe:	74 06                	je     810dac6 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0xaa>
 810dac0:	66 89 10             	mov    %dx,(%eax)
 810dac3:	83 c0 02             	add    $0x2,%eax
 810dac6:	89 d9                	mov    %ebx,%ecx
 810dac8:	83 e1 01             	and    $0x1,%ecx
 810dacb:	85 c9                	test   %ecx,%ecx
 810dacd:	74 05                	je     810dad4 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0xb8>
 810dacf:	88 10                	mov    %dl,(%eax)
 810dad1:	83 c0 01             	add    $0x1,%eax
 810dad4:	8b 45 10             	mov    0x10(%ebp),%eax
 810dad7:	83 c0 30             	add    $0x30,%eax
 810dada:	89 04 24             	mov    %eax,(%esp)
 810dadd:	e8 ce 0f 9d 00       	call   8adeab0 <_Z9toTStringRKSs>
 810dae2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810dae9:	00 
 810daea:	89 44 24 08          	mov    %eax,0x8(%esp)
 810daee:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 810daf5:	00 
 810daf6:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 810dafd:	e8 fc 7c 99 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 810db02:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 810db09:	00 
 810db0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810db0e:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 810db11:	89 04 24             	mov    %eax,(%esp)
 810db14:	e8 b7 fd f6 ff       	call   807d8d0 <strncpy@plt>
 810db19:	8b 45 10             	mov    0x10(%ebp),%eax
 810db1c:	83 c0 34             	add    $0x34,%eax
 810db1f:	89 04 24             	mov    %eax,(%esp)
 810db22:	e8 89 0f 9d 00       	call   8adeab0 <_Z9toTStringRKSs>
 810db27:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810db2e:	00 
 810db2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 810db33:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 810db3a:	00 
 810db3b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 810db42:	e8 b7 7c 99 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 810db47:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 810db4e:	00 
 810db4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 810db53:	8d 85 ae fe ff ff    	lea    -0x152(%ebp),%eax
 810db59:	89 04 24             	mov    %eax,(%esp)
 810db5c:	e8 6f fd f6 ff       	call   807d8d0 <strncpy@plt>
 810db61:	8b 45 18             	mov    0x18(%ebp),%eax
 810db64:	8b 00                	mov    (%eax),%eax
 810db66:	83 c0 10             	add    $0x10,%eax
 810db69:	8b 10                	mov    (%eax),%edx
 810db6b:	8b 45 18             	mov    0x18(%ebp),%eax
 810db6e:	89 04 24             	mov    %eax,(%esp)
 810db71:	ff d2                	call   *%edx
 810db73:	84 c0                	test   %al,%al
 810db75:	74 5b                	je     810dbd2 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x1b6>
 810db77:	8d 45 ae             	lea    -0x52(%ebp),%eax
 810db7a:	bb 18 00 00 00       	mov    $0x18,%ebx
 810db7f:	ba 00 00 00 00       	mov    $0x0,%edx
 810db84:	89 c1                	mov    %eax,%ecx
 810db86:	83 e1 02             	and    $0x2,%ecx
 810db89:	85 c9                	test   %ecx,%ecx
 810db8b:	74 09                	je     810db96 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x17a>
 810db8d:	66 89 10             	mov    %dx,(%eax)
 810db90:	83 c0 02             	add    $0x2,%eax
 810db93:	83 eb 02             	sub    $0x2,%ebx
 810db96:	89 de                	mov    %ebx,%esi
 810db98:	83 e6 fc             	and    $0xfffffffc,%esi
 810db9b:	b9 00 00 00 00       	mov    $0x0,%ecx
 810dba0:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 810dba3:	83 c1 04             	add    $0x4,%ecx
 810dba6:	39 f1                	cmp    %esi,%ecx
 810dba8:	72 f6                	jb     810dba0 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x184>
 810dbaa:	01 c8                	add    %ecx,%eax
 810dbac:	89 d9                	mov    %ebx,%ecx
 810dbae:	83 e1 02             	and    $0x2,%ecx
 810dbb1:	85 c9                	test   %ecx,%ecx
 810dbb3:	74 06                	je     810dbbb <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x19f>
 810dbb5:	66 89 10             	mov    %dx,(%eax)
 810dbb8:	83 c0 02             	add    $0x2,%eax
 810dbbb:	89 d9                	mov    %ebx,%ecx
 810dbbd:	83 e1 01             	and    $0x1,%ecx
 810dbc0:	85 c9                	test   %ecx,%ecx
 810dbc2:	74 05                	je     810dbc9 <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x1ad>
 810dbc4:	88 10                	mov    %dl,(%eax)
 810dbc6:	83 c0 01             	add    $0x1,%eax
 810dbc9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 810dbd0:	eb 78                	jmp    810dc4a <_ZN13EventClassify15CEventActionMng17process_mail_sendEP5CUserR15Action_SendMailR10Inven_ItemPK5CItem+0x22e>
 810dbd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 810dbd5:	89 04 24             	mov    %eax,(%esp)
 810dbd8:	e8 b3 e0 fb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 810dbdd:	89 c3                	mov    %eax,%ebx
 810dbdf:	8b 45 10             	mov    0x10(%ebp),%eax
 810dbe2:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 810dbe6:	0f be f8             	movsbl %al,%edi
 810dbe9:	8d 85 ae fe ff ff    	lea    -0x152(%ebp),%eax
 810dbef:	89 04 24             	mov    %eax,(%esp)
 810dbf2:	e8 b9 07 f7 ff       	call   807e3b0 <strlen@plt>
 810dbf7:	89 c6                	mov    %eax,%esi
 810dbf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 810dbfc:	89 04 24             	mov    %eax,(%esp)
 810dbff:	e8 4a e0 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810dc04:	8b 55 10             	mov    0x10(%ebp),%edx
 810dc07:	8b 52 28             	mov    0x28(%edx),%edx
 810dc0a:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 810dc11:	00 
 810dc12:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 810dc19:	00 
 810dc1a:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 810dc1e:	89 7c 24 18          	mov    %edi,0x18(%esp)
 810dc22:	89 74 24 14          	mov    %esi,0x14(%esp)
 810dc26:	8d 8d ae fe ff ff    	lea    -0x152(%ebp),%ecx
 810dc2c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 810dc30:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810dc34:	89 54 24 08          	mov    %edx,0x8(%esp)
 810dc38:	8b 45 14             	mov    0x14(%ebp),%eax
 810dc3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 810dc3f:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 810dc42:	89 04 24             	mov    %eax,(%esp)
 810dc45:	e8 9e 79 44 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 810dc4a:	b8 00 00 00 00       	mov    $0x0,%eax
 810dc4f:	81 c4 7c 01 00 00    	add    $0x17c,%esp
 810dc55:	5b                   	pop    %ebx
 810dc56:	5e                   	pop    %esi
 810dc57:	5f                   	pop    %edi
 810dc58:	5d                   	pop    %ebp
 810dc59:	c3                   	ret

```

```c
// EventClassify::CEventActionMng::process_mail_send @ 0x810da1c

/* WARNING: Removing unreachable block (ram,0x0810dacf) */
/* WARNING: Removing unreachable block (ram,0x0810da7d) */
/* WARNING: Removing unreachable block (ram,0x0810dbc4) */
/* EventClassify::CEventActionMng::process_mail_send(CUser*, Action_SendMail&, Inven_Item&, CItem
   const*) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_mail_send
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2,Inven_Item *param_3,
          CItem *param_4)

{
  char *pcVar1;
  Action_SendMail AVar2;
  char cVar3;
  undefined4 uVar4;
  TCHAR *pTVar5;
  char *pcVar6;
  undefined1 *puVar7;
  size_t sVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  char local_156 [256];
  undefined1 local_56 [2];
  undefined1 local_54 [22];
  char local_3e [46];
  
  if (param_4 == (CItem *)0x0) {
    uVar4 = 0x11;
  }
  else {
    pcVar6 = local_156;
    uVar11 = 0x100;
    bVar12 = ((uint)pcVar6 & 2) != 0;
    if (bVar12) {
      local_156[0] = '\0';
      local_156[1] = '\0';
      pcVar6 = local_156 + 2;
      uVar11 = 0xfe;
    }
    for (uVar11 = uVar11 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    if (bVar12) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
    }
    pcVar6 = local_3e;
    uVar11 = 0x1e;
    bVar12 = ((uint)pcVar6 & 2) != 0;
    if (bVar12) {
      local_3e[0] = '\0';
      local_3e[1] = '\0';
      pcVar6 = local_3e + 2;
      uVar11 = 0x1c;
    }
    uVar10 = 0;
    do {
      pcVar1 = pcVar6 + uVar10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar10 = uVar10 + 4;
    } while (uVar10 < (uVar11 & 0xfffffffc));
    if (!bVar12) {
      (pcVar6 + uVar10)[0] = '\0';
      (pcVar6 + uVar10)[1] = '\0';
    }
    pTVar5 = toTString((string *)(param_2 + 0x30));
    pcVar6 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar5,
                                (bool *)0x0);
    strncpy(local_3e,pcVar6,0x1d);
    pTVar5 = toTString((string *)(param_2 + 0x34));
    pcVar6 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar5,
                                (bool *)0x0);
    strncpy(local_156,pcVar6,0xff);
    cVar3 = (**(code **)(*(int *)param_4 + 0x10))(param_4);
    if (cVar3 == '\0') {
      uVar4 = CUser::GetServerGroup(param_1);
      AVar2 = param_2[0x2c];
      sVar8 = strlen(local_156);
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_3e,param_3,*(undefined4 *)(param_2 + 0x28),uVar9,local_156,sVar8,
                 (int)(char)AVar2,uVar4,0,0);
    }
    else {
      puVar7 = local_56;
      uVar11 = 0x18;
      bVar12 = ((uint)puVar7 & 2) != 0;
      if (bVar12) {
        puVar7 = local_54;
        uVar11 = 0x16;
      }
      uVar10 = 0;
      do {
        *(undefined4 *)(puVar7 + uVar10) = 0;
        uVar10 = uVar10 + 4;
      } while (uVar10 < (uVar11 & 0xfffffffc));
      if (bVar12) {
        *(undefined2 *)(puVar7 + uVar10) = 0;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

```

