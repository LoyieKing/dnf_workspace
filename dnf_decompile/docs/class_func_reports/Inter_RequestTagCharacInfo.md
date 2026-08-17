# Inter_RequestTagCharacInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e79f2 Inter_RequestTagCharacInfo::dispatch_sig  [0x084e79f2-0x84e7b83] ===
 84e79f2:	55                   	push   %ebp
 84e79f3:	89 e5                	mov    %esp,%ebp
 84e79f5:	83 ec 28             	sub    $0x28,%esp
 84e79f8:	8b 45 10             	mov    0x10(%ebp),%eax
 84e79fb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e79fe:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e7a02:	75 0a                	jne    84e7a0e <_ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci+0x1c>
 84e7a04:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7a09:	e9 74 01 00 00       	jmp    84e7b82 <_ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci+0x190>
 84e7a0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7a11:	89 04 24             	mov    %eax,(%esp)
 84e7a14:	e8 73 29 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e7a19:	83 f8 02             	cmp    $0x2,%eax
 84e7a1c:	0f 9e c0             	setle  %al
 84e7a1f:	84 c0                	test   %al,%al
 84e7a21:	74 0a                	je     84e7a2d <_ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci+0x3b>
 84e7a23:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7a28:	e9 55 01 00 00       	jmp    84e7b82 <_ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci+0x190>
 84e7a2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7a30:	8b 00                	mov    (%eax),%eax
 84e7a32:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7a36:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7a39:	89 04 24             	mov    %eax,(%esp)
 84e7a3c:	e8 d1 64 16 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84e7a41:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e7a44:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 84e7a48:	75 0a                	jne    84e7a54 <_ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci+0x62>
 84e7a4a:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7a4f:	e9 2e 01 00 00       	jmp    84e7b82 <_ZN26Inter_RequestTagCharacInfo12dispatch_sigEP5CUserPci+0x190>
 84e7a54:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7a57:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e7a5a:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e7a60:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7a64:	89 14 24             	mov    %edx,(%esp)
 84e7a67:	e8 4c 91 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e7a6c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e7a6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7a73:	89 14 24             	mov    %edx,(%esp)
 84e7a76:	e8 13 68 16 00       	call   864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>
 84e7a7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7a7e:	89 04 24             	mov    %eax,(%esp)
 84e7a81:	e8 8a 76 d4 ff       	call   822f110 <_ZNK15CUserCharacInfo18getTagCharacInvenREv>
 84e7a86:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e7a89:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7a8d:	89 04 24             	mov    %eax,(%esp)
 84e7a90:	e8 31 5c d4 ff       	call   822d6c6 <_ZN10CInventory10set_parentEP5CUser>
 84e7a95:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7a98:	89 04 24             	mov    %eax,(%esp)
 84e7a9b:	e8 80 76 d4 ff       	call   822f120 <_ZNK15CUserCharacInfo18getTagCharacSkillREv>
 84e7aa0:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e7aa3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7aa7:	89 04 24             	mov    %eax,(%esp)
 84e7aaa:	e8 7f 73 d4 ff       	call   822ee2e <_ZN9SkillSlot10set_parentEP5CUser>
 84e7aaf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7ab2:	8d 50 05             	lea    0x5(%eax),%edx
 84e7ab5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7ab8:	8b 00                	mov    (%eax),%eax
 84e7aba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e7abe:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e7ac2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7ac5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7ac9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7acc:	89 04 24             	mov    %eax,(%esp)
 84e7acf:	e8 c4 85 1a 00       	call   8690098 <_ZN5CUser16setTagCharacInfoEijP15TAG_CHARAC_DATA>
 84e7ad4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7ad7:	83 c0 7d             	add    $0x7d,%eax
 84e7ada:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7ade:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7ae1:	89 04 24             	mov    %eax,(%esp)
 84e7ae4:	e8 3d 87 1a 00       	call   8690226 <_ZN5CUser17setTagCharacInvenEP21TAG_CHARAC_INVEN_DATA>
 84e7ae9:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84e7af0:	00 
 84e7af1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7af4:	89 04 24             	mov    %eax,(%esp)
 84e7af7:	e8 88 5a bf ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84e7afc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e7aff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7b02:	05 a1 40 00 00       	add    $0x40a1,%eax
 84e7b07:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7b0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7b0e:	89 04 24             	mov    %eax,(%esp)
 84e7b11:	e8 aa 82 10 00       	call   85efdc0 <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA>
 84e7b16:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7b19:	8b 10                	mov    (%eax),%edx
 84e7b1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7b1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7b22:	89 04 24             	mov    %eax,(%esp)
 84e7b25:	e8 ba 75 d4 ff       	call   822f0e4 <_ZN15CUserCharacInfo23setCurCharacTagCharacNoEj>
 84e7b2a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7b2d:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84e7b31:	0f b6 d0             	movzbl %al,%edx
 84e7b34:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7b37:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7b3b:	89 04 24             	mov    %eax,(%esp)
 84e7b3e:	e8 6d 75 d4 ff       	call   822f0b0 <_ZN15CUserCharacInfo29setCurCharacStrikerSkillIndexEh>
 84e7b43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7b46:	05 f4 96 07 00       	add    $0x796f4,%eax
 84e7b4b:	89 04 24             	mov    %eax,(%esp)
 84e7b4e:	e8 87 80 d4 ff       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 84e7b53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7b56:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e7b59:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e7b5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7b63:	89 14 24             	mov    %edx,(%esp)
 84e7b66:	e8 4d 90 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e7b6b:	c6 80 bc 14 00 00 01 	movb   $0x1,0x14bc(%eax)
 84e7b72:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7b75:	89 04 24             	mov    %eax,(%esp)
 84e7b78:	e8 7b 88 1a 00       	call   86903f8 <_ZN5CUser17SendTagCharacInfoEv>
 84e7b7d:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7b82:	c9                   	leave
 84e7b83:	c3                   	ret

```

```c
// Inter_RequestTagCharacInfo::dispatch_sig @ 0x84e79f2

/* Inter_RequestTagCharacInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RequestTagCharacInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  _Charac_info *p_Var3;
  CInventory *this;
  SkillSlot *this_00;
  CQuestShop *this_01;
  
  if (((param_2 != (char *)0x0) && (iVar1 = CUser::get_state((CUser *)param_2), 2 < iVar1)) &&
     (uVar2 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3), uVar2 != 0xffffffff)) {
    p_Var3 = (_Charac_info *)
             std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                       ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                        uVar2);
    CUserCharacInfo::setTagCharac((CUserCharacInfo *)param_2,p_Var3);
    this = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)param_2);
    CInventory::set_parent(this,(CUser *)param_2);
    this_00 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillR((CUserCharacInfo *)param_2);
    SkillSlot::set_parent(this_00,(CUser *)param_2);
    CUser::setTagCharacInfo
              ((CUser *)param_2,uVar2,*(uint *)param_3,(TAG_CHARAC_DATA *)(param_3 + 5));
    CUser::setTagCharacInven((CUser *)param_2,(TAG_CHARAC_INVEN_DATA *)(param_3 + 0x7d));
    this_01 = (CQuestShop *)CUser::GetCharacExpandData((CUser *)param_2,0xb);
    CQuestShop::SetTagCharacQuestShopData(this_01,(CHARAC_QUEST_SHOP_DATA *)(param_3 + 0x40a1));
    CUserCharacInfo::setCurCharacTagCharacNo((CUserCharacInfo *)param_2,*(uint *)param_3);
    CUserCharacInfo::setCurCharacStrikerSkillIndex
              ((CUserCharacInfo *)param_2,*(uchar *)(param_3 + 4));
    CCharacterView::enableSaveCharacView((CCharacterView *)(param_2 + 0x796f4));
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar2);
    *(undefined1 *)(iVar1 + 0x14bc) = 1;
    CUser::SendTagCharacInfo((CUser *)param_2);
  }
  return 0;
}

```

