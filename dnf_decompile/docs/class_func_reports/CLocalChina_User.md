# CLocalChina_User

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SendFatigueEvent

```asm
// === 0812ca88 CLocalChina_User::SendFatigueEvent  [0x0812ca88-0x812cd43] ===
 812ca88:	55                   	push   %ebp
 812ca89:	89 e5                	mov    %esp,%ebp
 812ca8b:	56                   	push   %esi
 812ca8c:	53                   	push   %ebx
 812ca8d:	83 ec 30             	sub    $0x30,%esp
 812ca90:	a1 30 f7 41 09       	mov    0x941f730,%eax
 812ca95:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 812ca9c:	00 
 812ca9d:	89 04 24             	mov    %eax,(%esp)
 812caa0:	e8 f3 8e fe ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 812caa5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 812caa8:	e8 fa d8 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 812caad:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 812cab3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812cab6:	89 54 24 04          	mov    %edx,0x4(%esp)
 812caba:	89 04 24             	mov    %eax,(%esp)
 812cabd:	e8 e4 ad fc ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 812cac2:	83 ec 04             	sub    $0x4,%esp
 812cac5:	e9 39 02 00 00       	jmp    812cd03 <_ZN16CLocalChina_User16SendFatigueEventEv+0x27b>
 812caca:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812cacd:	89 04 24             	mov    %eax,(%esp)
 812cad0:	e8 6f ae fc ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 812cad5:	8b 40 04             	mov    0x4(%eax),%eax
 812cad8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 812cadb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cade:	89 04 24             	mov    %eax,(%esp)
 812cae1:	e8 a6 d8 fa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 812cae6:	83 f8 02             	cmp    $0x2,%eax
 812cae9:	0f 9f c0             	setg   %al
 812caec:	84 c0                	test   %al,%al
 812caee:	0f 84 f2 01 00 00    	je     812cce6 <_ZN16CLocalChina_User16SendFatigueEventEv+0x25e>
 812caf4:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 812caf8:	74 7c                	je     812cb76 <_ZN16CLocalChina_User16SendFatigueEventEv+0xee>
 812cafa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cafd:	89 04 24             	mov    %eax,(%esp)
 812cb00:	e8 b9 02 00 00       	call   812cdbe <_ZN15CUserCharacInfo13getCurCharacWEv>
 812cb05:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812cb08:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 812cb0c:	0f 84 d3 01 00 00    	je     812cce5 <_ZN16CLocalChina_User16SendFatigueEventEv+0x25d>
 812cb12:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812cb15:	8b 00                	mov    (%eax),%eax
 812cb17:	83 c0 34             	add    $0x34,%eax
 812cb1a:	8b 10                	mov    (%eax),%edx
 812cb1c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812cb1f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812cb26:	00 
 812cb27:	89 04 24             	mov    %eax,(%esp)
 812cb2a:	ff d2                	call   *%edx
 812cb2c:	84 c0                	test   %al,%al
 812cb2e:	74 38                	je     812cb68 <_ZN16CLocalChina_User16SendFatigueEventEv+0xe0>
 812cb30:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812cb33:	89 04 24             	mov    %eax,(%esp)
 812cb36:	e8 19 03 00 00       	call   812ce54 <_ZN22CMaxFatigueFactorEvent19GetMaxFatigueFactorEv>
 812cb3b:	8b 15 5c 0f 37 09    	mov    0x9370f5c,%edx
 812cb41:	89 c1                	mov    %eax,%ecx
 812cb43:	0f af ca             	imul   %edx,%ecx
 812cb46:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 812cb4b:	89 c8                	mov    %ecx,%eax
 812cb4d:	f7 ea                	imul   %edx
 812cb4f:	c1 fa 05             	sar    $0x5,%edx
 812cb52:	89 c8                	mov    %ecx,%eax
 812cb54:	c1 f8 1f             	sar    $0x1f,%eax
 812cb57:	89 d1                	mov    %edx,%ecx
 812cb59:	29 c1                	sub    %eax,%ecx
 812cb5b:	89 c8                	mov    %ecx,%eax
 812cb5d:	89 c2                	mov    %eax,%edx
 812cb5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812cb62:	66 89 50 35          	mov    %dx,0x35(%eax)
 812cb66:	eb 0e                	jmp    812cb76 <_ZN16CLocalChina_User16SendFatigueEventEv+0xee>
 812cb68:	a1 5c 0f 37 09       	mov    0x9370f5c,%eax
 812cb6d:	89 c2                	mov    %eax,%edx
 812cb6f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812cb72:	66 89 50 35          	mov    %dx,0x35(%eax)
 812cb76:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cb79:	89 04 24             	mov    %eax,(%esp)
 812cb7c:	e8 b5 02 00 00       	call   812ce36 <_ZNK5CUser22IsHavePremiumAdvantageEv>
 812cb81:	84 c0                	test   %al,%al
 812cb83:	0f 84 4f 01 00 00    	je     812ccd8 <_ZN16CLocalChina_User16SendFatigueEventEv+0x250>
 812cb89:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 812cb8d:	74 25                	je     812cbb4 <_ZN16CLocalChina_User16SendFatigueEventEv+0x12c>
 812cb8f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812cb92:	8b 00                	mov    (%eax),%eax
 812cb94:	83 c0 34             	add    $0x34,%eax
 812cb97:	8b 10                	mov    (%eax),%edx
 812cb99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812cb9c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812cba3:	00 
 812cba4:	89 04 24             	mov    %eax,(%esp)
 812cba7:	ff d2                	call   *%edx
 812cba9:	84 c0                	test   %al,%al
 812cbab:	74 07                	je     812cbb4 <_ZN16CLocalChina_User16SendFatigueEventEv+0x12c>
 812cbad:	b8 01 00 00 00       	mov    $0x1,%eax
 812cbb2:	eb 05                	jmp    812cbb9 <_ZN16CLocalChina_User16SendFatigueEventEv+0x131>
 812cbb4:	b8 00 00 00 00       	mov    $0x0,%eax
 812cbb9:	84 c0                	test   %al,%al
 812cbbb:	0f 84 c5 00 00 00    	je     812cc86 <_ZN16CLocalChina_User16SendFatigueEventEv+0x1fe>
 812cbc1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812cbc4:	89 04 24             	mov    %eax,(%esp)
 812cbc7:	e8 88 02 00 00       	call   812ce54 <_ZN22CMaxFatigueFactorEvent19GetMaxFatigueFactorEv>
 812cbcc:	8b 15 5c 0f 37 09    	mov    0x9370f5c,%edx
 812cbd2:	89 c1                	mov    %eax,%ecx
 812cbd4:	0f af ca             	imul   %edx,%ecx
 812cbd7:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 812cbdc:	89 c8                	mov    %ecx,%eax
 812cbde:	f7 ea                	imul   %edx
 812cbe0:	c1 fa 05             	sar    $0x5,%edx
 812cbe3:	89 c8                	mov    %ecx,%eax
 812cbe5:	c1 f8 1f             	sar    $0x1f,%eax
 812cbe8:	89 d1                	mov    %edx,%ecx
 812cbea:	29 c1                	sub    %eax,%ecx
 812cbec:	89 c8                	mov    %ecx,%eax
 812cbee:	89 c2                	mov    %eax,%edx
 812cbf0:	a1 5c 0f 37 09       	mov    0x9370f5c,%eax
 812cbf5:	89 d1                	mov    %edx,%ecx
 812cbf7:	66 29 c1             	sub    %ax,%cx
 812cbfa:	89 c8                	mov    %ecx,%eax
 812cbfc:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 812cc00:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cc03:	89 04 24             	mov    %eax,(%esp)
 812cc06:	e8 1d 02 00 00       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 812cc0b:	89 04 24             	mov    %eax,(%esp)
 812cc0e:	e8 9b 01 00 00       	call   812cdae <_ZNK8WongWork12CUserPremium23GetAdvantageFatigueRateEv>
 812cc13:	0f b7 d0             	movzwl %ax,%edx
 812cc16:	a1 5c 0f 37 09       	mov    0x9370f5c,%eax
 812cc1b:	89 d1                	mov    %edx,%ecx
 812cc1d:	0f af c8             	imul   %eax,%ecx
 812cc20:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 812cc25:	89 c8                	mov    %ecx,%eax
 812cc27:	f7 ea                	imul   %edx
 812cc29:	c1 fa 05             	sar    $0x5,%edx
 812cc2c:	89 c8                	mov    %ecx,%eax
 812cc2e:	c1 f8 1f             	sar    $0x1f,%eax
 812cc31:	89 d1                	mov    %edx,%ecx
 812cc33:	29 c1                	sub    %eax,%ecx
 812cc35:	89 c8                	mov    %ecx,%eax
 812cc37:	89 c3                	mov    %eax,%ebx
 812cc39:	0f b7 75 f6          	movzwl -0xa(%ebp),%esi
 812cc3d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cc40:	89 04 24             	mov    %eax,(%esp)
 812cc43:	e8 e0 01 00 00       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 812cc48:	89 04 24             	mov    %eax,(%esp)
 812cc4b:	e8 5e 01 00 00       	call   812cdae <_ZNK8WongWork12CUserPremium23GetAdvantageFatigueRateEv>
 812cc50:	0f b7 c0             	movzwl %ax,%eax
 812cc53:	89 f1                	mov    %esi,%ecx
 812cc55:	0f af c8             	imul   %eax,%ecx
 812cc58:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 812cc5d:	89 c8                	mov    %ecx,%eax
 812cc5f:	f7 ea                	imul   %edx
 812cc61:	c1 fa 05             	sar    $0x5,%edx
 812cc64:	89 c8                	mov    %ecx,%eax
 812cc66:	c1 f8 1f             	sar    $0x1f,%eax
 812cc69:	89 d1                	mov    %edx,%ecx
 812cc6b:	29 c1                	sub    %eax,%ecx
 812cc6d:	89 c8                	mov    %ecx,%eax
 812cc6f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 812cc72:	0f b7 d0             	movzwl %ax,%edx
 812cc75:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cc78:	89 54 24 04          	mov    %edx,0x4(%esp)
 812cc7c:	89 04 24             	mov    %eax,(%esp)
 812cc7f:	e8 72 01 00 00       	call   812cdf6 <_ZN15CUserCharacInfo29setCurCharacMaxPremiumFatigueEt>
 812cc84:	eb 52                	jmp    812ccd8 <_ZN16CLocalChina_User16SendFatigueEventEv+0x250>
 812cc86:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cc89:	89 04 24             	mov    %eax,(%esp)
 812cc8c:	e8 45 01 00 00       	call   812cdd6 <_ZNK15CUserCharacInfo22getCurCharacMaxFatigueEv>
 812cc91:	0f b7 d8             	movzwl %ax,%ebx
 812cc94:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cc97:	89 04 24             	mov    %eax,(%esp)
 812cc9a:	e8 89 01 00 00       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 812cc9f:	89 04 24             	mov    %eax,(%esp)
 812cca2:	e8 07 01 00 00       	call   812cdae <_ZNK8WongWork12CUserPremium23GetAdvantageFatigueRateEv>
 812cca7:	0f b7 c0             	movzwl %ax,%eax
 812ccaa:	89 d9                	mov    %ebx,%ecx
 812ccac:	0f af c8             	imul   %eax,%ecx
 812ccaf:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 812ccb4:	89 c8                	mov    %ecx,%eax
 812ccb6:	f7 ea                	imul   %edx
 812ccb8:	c1 fa 05             	sar    $0x5,%edx
 812ccbb:	89 c8                	mov    %ecx,%eax
 812ccbd:	c1 f8 1f             	sar    $0x1f,%eax
 812ccc0:	89 d1                	mov    %edx,%ecx
 812ccc2:	29 c1                	sub    %eax,%ecx
 812ccc4:	89 c8                	mov    %ecx,%eax
 812ccc6:	0f b7 d0             	movzwl %ax,%edx
 812ccc9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812cccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ccd0:	89 04 24             	mov    %eax,(%esp)
 812ccd3:	e8 1e 01 00 00       	call   812cdf6 <_ZN15CUserCharacInfo29setCurCharacMaxPremiumFatigueEt>
 812ccd8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812ccdb:	89 04 24             	mov    %eax,(%esp)
 812ccde:	e8 5d 98 52 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 812cce3:	eb 01                	jmp    812cce6 <_ZN16CLocalChina_User16SendFatigueEventEv+0x25e>
 812cce5:	90                   	nop
 812cce6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812cce9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812ccf0:	00 
 812ccf1:	8d 55 dc             	lea    -0x24(%ebp),%edx
 812ccf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ccf8:	89 04 24             	mov    %eax,(%esp)
 812ccfb:	e8 06 ac fc ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 812cd00:	83 ec 04             	sub    $0x4,%esp
 812cd03:	e8 9f d6 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 812cd08:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 812cd0e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812cd11:	89 54 24 04          	mov    %edx,0x4(%esp)
 812cd15:	89 04 24             	mov    %eax,(%esp)
 812cd18:	e8 af ab fc ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 812cd1d:	83 ec 04             	sub    $0x4,%esp
 812cd20:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812cd23:	89 44 24 04          	mov    %eax,0x4(%esp)
 812cd27:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812cd2a:	89 04 24             	mov    %eax,(%esp)
 812cd2d:	e8 c0 ab fc ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 812cd32:	84 c0                	test   %al,%al
 812cd34:	0f 85 90 fd ff ff    	jne    812caca <_ZN16CLocalChina_User16SendFatigueEventEv+0x42>
 812cd3a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 812cd3d:	83 c4 00             	add    $0x0,%esp
 812cd40:	5b                   	pop    %ebx
 812cd41:	5e                   	pop    %esi
 812cd42:	5d                   	pop    %ebp
 812cd43:	c3                   	ret

```

```c
// CLocalChina_User::SendFatigueEvent @ 0x812ca88

/* CLocalChina_User::SendFatigueEvent() */

void CLocalChina_User::SendFatigueEvent(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUserPremium *pCVar4;
  uint uVar5;
  uint uVar6;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_28 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_20 [4];
  CMaxFatigueFactorEvent *local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  ushort local_e;
  
  local_1c = (CMaxFatigueFactorEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,2);
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_28);
  do {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_24);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28);
    local_18 = *(CUserCharacInfo **)(iVar3 + 4);
    iVar3 = CUser::get_state((CUser *)local_18);
    if (2 < iVar3) {
      if (local_1c != (CMaxFatigueFactorEvent *)0x0) {
        local_14 = CUserCharacInfo::getCurCharacW(local_18);
        if (local_14 == 0) goto LAB_0812cce6;
        cVar2 = (**(code **)(*(int *)local_1c + 0x34))(local_1c,0);
        if (cVar2 == '\0') {
          *(short *)(local_14 + 0x35) = (short)DEFAULT_MAX_FATIGUE;
        }
        else {
          iVar3 = CMaxFatigueFactorEvent::GetMaxFatigueFactor(local_1c);
          *(short *)(local_14 + 0x35) = (short)((iVar3 * DEFAULT_MAX_FATIGUE) / 100);
        }
      }
      cVar2 = CUser::IsHavePremiumAdvantage((CUser *)local_18);
      if (cVar2 != '\0') {
        if (local_1c == (CMaxFatigueFactorEvent *)0x0) {
LAB_0812cbb4:
          bVar1 = false;
        }
        else {
          cVar2 = (**(code **)(*(int *)local_1c + 0x34))(local_1c,0);
          if (cVar2 == '\0') goto LAB_0812cbb4;
          bVar1 = true;
        }
        if (bVar1) {
          iVar3 = CMaxFatigueFactorEvent::GetMaxFatigueFactor(local_1c);
          local_e = (short)((iVar3 * DEFAULT_MAX_FATIGUE) / 100) - (short)DEFAULT_MAX_FATIGUE;
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo((CUser *)local_18);
          uVar5 = WongWork::CUserPremium::GetAdvantageFatigueRate(pCVar4);
          iVar3 = (uVar5 & 0xffff) * DEFAULT_MAX_FATIGUE;
          uVar6 = (uint)local_e;
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo((CUser *)local_18);
          uVar5 = WongWork::CUserPremium::GetAdvantageFatigueRate(pCVar4);
          CUserCharacInfo::setCurCharacMaxPremiumFatigue
                    (local_18,(short)(iVar3 / 100) + (short)((int)(uVar6 * (uVar5 & 0xffff)) / 100))
          ;
        }
        else {
          uVar5 = CUserCharacInfo::getCurCharacMaxFatigue(local_18);
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo((CUser *)local_18);
          uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate(pCVar4);
          CUserCharacInfo::setCurCharacMaxPremiumFatigue
                    (local_18,(ushort)((int)((uVar5 & 0xffff) * (uVar6 & 0xffff)) / 100));
        }
      }
      CUser::SendFatigue((CUser *)local_18);
    }
LAB_0812cce6:
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_20,(int)local_28);
  } while( true );
}

```

