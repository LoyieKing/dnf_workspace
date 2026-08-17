# BingoEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## BingoEvent

```asm
// === 080c9984 BingoEvent::BingoEvent  [0x080c9984-0x80c9a05] ===
 80c9984:	55                   	push   %ebp
 80c9985:	89 e5                	mov    %esp,%ebp
 80c9987:	57                   	push   %edi
 80c9988:	56                   	push   %esi
 80c9989:	53                   	push   %ebx
 80c998a:	83 ec 1c             	sub    $0x1c,%esp
 80c998d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9990:	89 04 24             	mov    %eax,(%esp)
 80c9993:	e8 94 14 04 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 80c9998:	8b 45 08             	mov    0x8(%ebp),%eax
 80c999b:	c7 00 48 7e b2 08    	movl   $0x8b27e48,(%eax)
 80c99a1:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 80c99a8:	e8 a3 aa 65 00       	call   8724450 <_Znwj>
 80c99ad:	89 c3                	mov    %eax,%ebx
 80c99af:	89 d8                	mov    %ebx,%eax
 80c99b1:	89 04 24             	mov    %eax,(%esp)
 80c99b4:	e8 73 0e 00 00       	call   80ca82c <_ZN6CBingoC1Ev>
 80c99b9:	eb 12                	jmp    80c99cd <_ZN10BingoEventC1Ev+0x49>
 80c99bb:	89 d6                	mov    %edx,%esi
 80c99bd:	89 c7                	mov    %eax,%edi
 80c99bf:	89 1c 24             	mov    %ebx,(%esp)
 80c99c2:	e8 29 ab 65 00       	call   87244f0 <_ZdlPv>
 80c99c7:	89 f8                	mov    %edi,%eax
 80c99c9:	89 f2                	mov    %esi,%edx
 80c99cb:	eb 16                	jmp    80c99e3 <_ZN10BingoEventC1Ev+0x5f>
 80c99cd:	89 d8                	mov    %ebx,%eax
 80c99cf:	8b 55 08             	mov    0x8(%ebp),%edx
 80c99d2:	83 c2 0c             	add    $0xc,%edx
 80c99d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c99d9:	89 14 24             	mov    %edx,(%esp)
 80c99dc:	e8 47 4d 00 00       	call   80ce728 <_ZN5boost10shared_ptrI6CBingoEC1IS1_EEPT_>
 80c99e1:	eb 1b                	jmp    80c99fe <_ZN10BingoEventC1Ev+0x7a>
 80c99e3:	89 d3                	mov    %edx,%ebx
 80c99e5:	89 c6                	mov    %eax,%esi
 80c99e7:	8b 45 08             	mov    0x8(%ebp),%eax
 80c99ea:	89 04 24             	mov    %eax,(%esp)
 80c99ed:	e8 60 14 04 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 80c99f2:	89 f0                	mov    %esi,%eax
 80c99f4:	89 da                	mov    %ebx,%edx
 80c99f6:	89 04 24             	mov    %eax,(%esp)
 80c99f9:	e8 52 9d a1 00       	call   8ae3750 <_Unwind_Resume>
 80c99fe:	83 c4 1c             	add    $0x1c,%esp
 80c9a01:	5b                   	pop    %ebx
 80c9a02:	5e                   	pop    %esi
 80c9a03:	5f                   	pop    %edi
 80c9a04:	5d                   	pop    %ebp
 80c9a05:	c3                   	ret

```

```c
// BingoEvent::BingoEvent @ 0x80c9984

/* BingoEvent::BingoEvent() */

void __thiscall BingoEvent::BingoEvent(BingoEvent *this)

{
  CBingo *this_00;
  
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__BingoEvent_08b27e48;
                    /* try { // try from 080c99a8 to 080c99ac has its CatchHandler @ 080c99e3 */
  this_00 = operator_new(0x1c);
                    /* try { // try from 080c99b4 to 080c99b8 has its CatchHandler @ 080c99bb */
  CBingo::CBingo(this_00);
                    /* try { // try from 080c99dc to 080c99e0 has its CatchHandler @ 080c99e3 */
  boost::shared_ptr<CBingo>::shared_ptr<CBingo>((shared_ptr<CBingo> *)(this + 0xc),this_00);
  return;
}

```

---

## EndEvent

```asm
// === 080c9d30 BingoEvent::EndEvent  [0x080c9d30-0x80c9d81] ===
 80c9d30:	55                   	push   %ebp
 80c9d31:	89 e5                	mov    %esp,%ebp
 80c9d33:	83 ec 28             	sub    $0x28,%esp
 80c9d36:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9d39:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c9d40:	00 
 80c9d41:	89 04 24             	mov    %eax,(%esp)
 80c9d44:	e8 99 e7 ff ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80c9d49:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80c9d50:	00 
 80c9d51:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 80c9d58:	00 
 80c9d59:	c7 44 24 04 a0 78 b2 	movl   $0x8b278a0,0x4(%esp)
 80c9d60:	08 
 80c9d61:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c9d64:	89 04 24             	mov    %eax,(%esp)
 80c9d67:	e8 ac 59 48 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80c9d6c:	c7 44 24 04 e6 6a b2 	movl   $0x8b26ae6,0x4(%esp)
 80c9d73:	08 
 80c9d74:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c9d77:	89 04 24             	mov    %eax,(%esp)
 80c9d7a:	e8 09 5a 48 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80c9d7f:	c9                   	leave
 80c9d80:	c3                   	ret
 80c9d81:	90                   	nop

```

```c
// BingoEvent::EndEvent @ 0x80c9d30

/* BingoEvent::EndEvent() */

void __thiscall BingoEvent::EndEvent(BingoEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void BingoEvent::EndEvent()",0x3f,0);
  cMyTrace::operator()(local_1c,"BingoEvent Event End!");
  return;
}

```

---

## StartAction

```asm
// === 080c9bb8 BingoEvent::StartAction  [0x080c9bb8-0x80c9d2f] ===
 80c9bb8:	55                   	push   %ebp
 80c9bb9:	89 e5                	mov    %esp,%ebp
 80c9bbb:	53                   	push   %ebx
 80c9bbc:	83 ec 44             	sub    $0x44,%esp
 80c9bbf:	bb 00 00 00 00       	mov    $0x0,%ebx
 80c9bc4:	e8 c5 25 00 00       	call   80cc18e <_Z14G_CGameManagerv>
 80c9bc9:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 80c9bcf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c9bd2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80c9bd6:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9bda:	89 04 24             	mov    %eax,(%esp)
 80c9bdd:	e8 8e 4b 00 00       	call   80ce770 <_ZN5boost15foreach_detail_7containISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEEENS0_8auto_anyIPT_EERSD_PN4mpl_5bool_ILb0EEE>
 80c9be2:	83 ec 04             	sub    $0x4,%esp
 80c9be5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c9be8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c9beb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c9bee:	89 04 24             	mov    %eax,(%esp)
 80c9bf1:	e8 24 33 00 00       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 80c9bf6:	84 c0                	test   %al,%al
 80c9bf8:	0f 85 2c 01 00 00    	jne    80c9d2a <_ZN10BingoEvent11StartActionEv+0x172>
 80c9bfe:	ba 00 00 00 00       	mov    $0x0,%edx
 80c9c03:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c9c06:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80c9c0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80c9c11:	00 
 80c9c12:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80c9c15:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9c19:	89 04 24             	mov    %eax,(%esp)
 80c9c1c:	e8 80 4b 00 00       	call   80ce7a1 <_ZN5boost15foreach_detail_5beginISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISH_SI_EEPSE_>
 80c9c21:	83 ec 04             	sub    $0x4,%esp
 80c9c24:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c9c27:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c9c2a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9c2d:	89 04 24             	mov    %eax,(%esp)
 80c9c30:	e8 e5 32 00 00       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 80c9c35:	84 c0                	test   %al,%al
 80c9c37:	0f 85 ed 00 00 00    	jne    80c9d2a <_ZN10BingoEvent11StartActionEv+0x172>
 80c9c3d:	ba 00 00 00 00       	mov    $0x0,%edx
 80c9c42:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80c9c45:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80c9c49:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80c9c50:	00 
 80c9c51:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80c9c54:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9c58:	89 04 24             	mov    %eax,(%esp)
 80c9c5b:	e8 8a 4b 00 00       	call   80ce7ea <_ZN5boost15foreach_detail_3endISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISH_SI_EEPSE_>
 80c9c60:	83 ec 04             	sub    $0x4,%esp
 80c9c63:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80c9c66:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80c9c69:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80c9c6c:	89 04 24             	mov    %eax,(%esp)
 80c9c6f:	e8 a6 32 00 00       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 80c9c74:	84 c0                	test   %al,%al
 80c9c76:	0f 85 ae 00 00 00    	jne    80c9d2a <_ZN10BingoEvent11StartActionEv+0x172>
 80c9c7c:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 80c9c80:	eb 6b                	jmp    80c9ced <_ZN10BingoEvent11StartActionEv+0x135>
 80c9c82:	8d 45 d7             	lea    -0x29(%ebp),%eax
 80c9c85:	89 04 24             	mov    %eax,(%esp)
 80c9c88:	e8 97 32 00 00       	call   80ccf24 <_ZN5boost15foreach_detail_9set_falseERb>
 80c9c8d:	84 c0                	test   %al,%al
 80c9c8f:	75 41                	jne    80c9cd2 <_ZN10BingoEvent11StartActionEv+0x11a>
 80c9c91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c9c98:	00 
 80c9c99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9c9c:	89 04 24             	mov    %eax,(%esp)
 80c9c9f:	e8 db 4b 00 00       	call   80ce87f <_ZN5boost15foreach_detail_5derefISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEENS0_17foreach_referenceIT_T0_E4typeERKNS0_13auto_any_baseEPNS0_9type2typeISG_SH_EE>
 80c9ca4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c9ca7:	eb 1e                	jmp    80c9cc7 <_ZN10BingoEvent11StartActionEv+0x10f>
 80c9ca9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c9cac:	8b 40 04             	mov    0x4(%eax),%eax
 80c9caf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c9cb2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c9cb6:	74 0b                	je     80c9cc3 <_ZN10BingoEvent11StartActionEv+0x10b>
 80c9cb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c9cbb:	89 04 24             	mov    %eax,(%esp)
 80c9cbe:	e8 8b 76 5c 00       	call   869134e <_ZN5CUser13sendBingoDataEv>
 80c9cc3:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 80c9cc7:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 80c9ccb:	83 f0 01             	xor    $0x1,%eax
 80c9cce:	84 c0                	test   %al,%al
 80c9cd0:	75 d7                	jne    80c9ca9 <_ZN10BingoEvent11StartActionEv+0xf1>
 80c9cd2:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 80c9cd6:	84 c0                	test   %al,%al
 80c9cd8:	74 13                	je     80c9ced <_ZN10BingoEvent11StartActionEv+0x135>
 80c9cda:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c9ce1:	00 
 80c9ce2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9ce5:	89 04 24             	mov    %eax,(%esp)
 80c9ce8:	e8 77 4b 00 00       	call   80ce864 <_ZN5boost15foreach_detail_4nextISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEEvRKNS0_13auto_any_baseEPNS0_9type2typeIT_T0_EE>
 80c9ced:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 80c9cf1:	84 c0                	test   %al,%al
 80c9cf3:	74 28                	je     80c9d1d <_ZN10BingoEvent11StartActionEv+0x165>
 80c9cf5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80c9cfc:	00 
 80c9cfd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80c9d00:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c9d04:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9d07:	89 04 24             	mov    %eax,(%esp)
 80c9d0a:	e8 24 4b 00 00       	call   80ce833 <_ZN5boost15foreach_detail_4doneISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEEbRKNS0_13auto_any_baseESH_PNS0_9type2typeIT_T0_EE>
 80c9d0f:	83 f0 01             	xor    $0x1,%eax
 80c9d12:	84 c0                	test   %al,%al
 80c9d14:	74 07                	je     80c9d1d <_ZN10BingoEvent11StartActionEv+0x165>
 80c9d16:	b8 01 00 00 00       	mov    $0x1,%eax
 80c9d1b:	eb 05                	jmp    80c9d22 <_ZN10BingoEvent11StartActionEv+0x16a>
 80c9d1d:	b8 00 00 00 00       	mov    $0x0,%eax
 80c9d22:	84 c0                	test   %al,%al
 80c9d24:	0f 85 58 ff ff ff    	jne    80c9c82 <_ZN10BingoEvent11StartActionEv+0xca>
 80c9d2a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80c9d2d:	c9                   	leave
 80c9d2e:	c3                   	ret
 80c9d2f:	90                   	nop

```

```c
// BingoEvent::StartAction @ 0x80c9bb8

/* BingoEvent::StartAction() */

void BingoEvent::StartAction(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  bool local_2d;
  map local_2c [4];
  auto_any_base local_28 [4];
  auto_any_base local_24 [4];
  type2type *local_20;
  auto_any_base *local_1c;
  auto_any_base *local_18;
  int local_14;
  CUser *local_10;
  
  iVar3 = G_CGameManager();
  boost::foreach_detail_::
  contain<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>>
            (local_2c,(bool_ *)(iVar3 + 0x22c));
  local_20 = (type2type *)local_2c;
  bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool((auto_any_base *)local_20);
  if (!bVar1) {
    boost::foreach_detail_::
    begin<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
              (local_28,local_20,(bool_ *)0x0);
    local_1c = local_28;
    bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_1c);
    if (!bVar1) {
      boost::foreach_detail_::
      end<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                (local_24,local_20,(bool_ *)0x0);
      local_18 = local_24;
      bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
      if (!bVar1) {
        local_2d = true;
LAB_080c9ced:
        if (local_2d == false) {
LAB_080c9d1d:
          bVar1 = false;
        }
        else {
          bVar1 = boost::foreach_detail_::
                  done<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                            (local_1c,local_18,(type2type *)0x0);
          if (bVar1) goto LAB_080c9d1d;
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = boost::foreach_detail_::set_false(&local_2d);
          if (cVar2 == '\0') {
            local_14 = boost::foreach_detail_::
                       deref<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                                 (local_1c,(type2type *)0x0);
            while (local_2d != true) {
              local_10 = *(CUser **)(local_14 + 4);
              if (local_10 != (CUser *)0x0) {
                CUser::sendBingoData(local_10);
              }
              local_2d = true;
            }
          }
          if (local_2d != false) {
            boost::foreach_detail_::
            next<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                      (local_1c,(type2type *)0x0);
          }
          goto LAB_080c9ced;
        }
      }
    }
  }
  return;
}

```

---

## StartEvent

```asm
// === 080c9a86 BingoEvent::StartEvent  [0x080c9a86-0x80c9b67] ===
 80c9a86:	55                   	push   %ebp
 80c9a87:	89 e5                	mov    %esp,%ebp
 80c9a89:	83 ec 38             	sub    $0x38,%esp
 80c9a8c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a8f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80c9a96:	00 
 80c9a97:	89 04 24             	mov    %eax,(%esp)
 80c9a9a:	e8 43 ea ff ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80c9a9f:	e8 dd 26 00 00       	call   80cc181 <_Z14G_CEnvironmentv>
 80c9aa4:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 80c9aaa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80c9aad:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 80c9ab4:	e8 e5 21 00 00       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 80c9ab9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c9abc:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9abf:	83 c0 0c             	add    $0xc,%eax
 80c9ac2:	89 04 24             	mov    %eax,(%esp)
 80c9ac5:	e8 9c 4c 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80c9aca:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80c9acd:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c9ad1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c9ad4:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9ad8:	89 04 24             	mov    %eax,(%esp)
 80c9adb:	e8 62 0e 00 00       	call   80ca942 <_ZN6CBingo8getTodayEli>
 80c9ae0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c9ae3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c9ae7:	7e 7d                	jle    80c9b66 <_ZN10BingoEvent10StartEventEv+0xe0>
 80c9ae9:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
 80c9aed:	7f 77                	jg     80c9b66 <_ZN10BingoEvent10StartEventEv+0xe0>
 80c9aef:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9af2:	83 c0 0c             	add    $0xc,%eax
 80c9af5:	89 04 24             	mov    %eax,(%esp)
 80c9af8:	e8 69 4c 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80c9afd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c9b00:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9b04:	89 04 24             	mov    %eax,(%esp)
 80c9b07:	e8 ac 0e 00 00       	call   80ca9b8 <_ZN6CBingo10resetBoardEi>
 80c9b0c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9b0f:	83 c0 0c             	add    $0xc,%eax
 80c9b12:	89 04 24             	mov    %eax,(%esp)
 80c9b15:	e8 4c 4c 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80c9b1a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c9b1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9b21:	89 04 24             	mov    %eax,(%esp)
 80c9b24:	e8 3b 0f 00 00       	call   80caa64 <_ZN6CBingo9resetQuizEi>
 80c9b29:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80c9b30:	00 
 80c9b31:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 80c9b38:	00 
 80c9b39:	c7 44 24 04 20 79 b2 	movl   $0x8b27920,0x4(%esp)
 80c9b40:	08 
 80c9b41:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c9b44:	89 04 24             	mov    %eax,(%esp)
 80c9b47:	e8 cc 5b 48 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80c9b4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c9b4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c9b53:	c7 44 24 04 bb 6a b2 	movl   $0x8b26abb,0x4(%esp)
 80c9b5a:	08 
 80c9b5b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c9b5e:	89 04 24             	mov    %eax,(%esp)
 80c9b61:	e8 22 5c 48 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80c9b66:	c9                   	leave
 80c9b67:	c3                   	ret

```

```c
// BingoEvent::StartEvent @ 0x80c9a86

/* BingoEvent::StartEvent() */

void __thiscall BingoEvent::StartEvent(BingoEvent *this)

{
  int iVar1;
  CBingo *pCVar2;
  cMyTrace local_28 [16];
  int local_18;
  long local_14;
  int local_10;
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  iVar1 = G_CEnvironment();
  local_18 = *(int *)(iVar1 + 0x37c);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
  local_10 = CBingo::getToday(pCVar2,local_14,local_18);
  if ((0 < local_10) && (local_10 < 0x20)) {
    pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetBoard(pCVar2,local_10);
    pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetQuiz(pCVar2,local_10);
    cMyTrace::cMyTrace(local_28,"virtual void BingoEvent::StartEvent()",0x2a,0);
    cMyTrace::operator()(local_28,"BingoEvent Day(%d)",local_10);
  }
  return;
}

```

---

## StartEvent_080c9b68

```asm
// === 080c9b68 BingoEvent::StartEvent  [0x080c9b68-0x80c9bb7] ===
 80c9b68:	55                   	push   %ebp
 80c9b69:	89 e5                	mov    %esp,%ebp
 80c9b6b:	83 ec 28             	sub    $0x28,%esp
 80c9b6e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9b71:	8b 00                	mov    (%eax),%eax
 80c9b73:	83 c0 08             	add    $0x8,%eax
 80c9b76:	8b 10                	mov    (%eax),%edx
 80c9b78:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9b7b:	89 04 24             	mov    %eax,(%esp)
 80c9b7e:	ff d2                	call   *%edx
 80c9b80:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80c9b87:	00 
 80c9b88:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 80c9b8f:	00 
 80c9b90:	c7 44 24 04 e0 78 b2 	movl   $0x8b278e0,0x4(%esp)
 80c9b97:	08 
 80c9b98:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c9b9b:	89 04 24             	mov    %eax,(%esp)
 80c9b9e:	e8 75 5b 48 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80c9ba3:	c7 44 24 04 ce 6a b2 	movl   $0x8b26ace,0x4(%esp)
 80c9baa:	08 
 80c9bab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c9bae:	89 04 24             	mov    %eax,(%esp)
 80c9bb1:	e8 d2 5b 48 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80c9bb6:	c9                   	leave
 80c9bb7:	c3                   	ret

```

```c
// BingoEvent::StartEvent @ 0x80c9b68

/* BingoEvent::StartEvent(Word_Param) */

void BingoEvent::StartEvent(int *param_1)

{
  cMyTrace local_1c [24];
  
  (**(code **)(*param_1 + 8))(param_1);
  cMyTrace::cMyTrace(local_1c,"virtual void BingoEvent::StartEvent(Word_Param)",0x30,0);
  cMyTrace::operator()(local_1c,"BingoEvent Event Start!");
  return;
}

```

---

## dailyresetData

```asm
// === 080c9d82 BingoEvent::dailyresetData  [0x080c9d82-0x80c9fe9] ===
 80c9d82:	55                   	push   %ebp
 80c9d83:	89 e5                	mov    %esp,%ebp
 80c9d85:	53                   	push   %ebx
 80c9d86:	83 ec 54             	sub    $0x54,%esp
 80c9d89:	e8 f3 23 00 00       	call   80cc181 <_Z14G_CEnvironmentv>
 80c9d8e:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 80c9d94:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80c9d97:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 80c9d9e:	e8 fb 1e 00 00       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 80c9da3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80c9da6:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9da9:	83 c0 0c             	add    $0xc,%eax
 80c9dac:	89 04 24             	mov    %eax,(%esp)
 80c9daf:	e8 b2 49 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80c9db4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80c9db7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c9dbb:	8b 55 dc             	mov    -0x24(%ebp),%edx
 80c9dbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9dc2:	89 04 24             	mov    %eax,(%esp)
 80c9dc5:	e8 78 0b 00 00       	call   80ca942 <_ZN6CBingo8getTodayEli>
 80c9dca:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80c9dcd:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 80c9dd1:	7e 7d                	jle    80c9e50 <_ZN10BingoEvent14dailyresetDataEv+0xce>
 80c9dd3:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 80c9dd7:	7f 77                	jg     80c9e50 <_ZN10BingoEvent14dailyresetDataEv+0xce>
 80c9dd9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9ddc:	83 c0 0c             	add    $0xc,%eax
 80c9ddf:	89 04 24             	mov    %eax,(%esp)
 80c9de2:	e8 7f 49 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80c9de7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80c9dea:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9dee:	89 04 24             	mov    %eax,(%esp)
 80c9df1:	e8 c2 0b 00 00       	call   80ca9b8 <_ZN6CBingo10resetBoardEi>
 80c9df6:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9df9:	83 c0 0c             	add    $0xc,%eax
 80c9dfc:	89 04 24             	mov    %eax,(%esp)
 80c9dff:	e8 62 49 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80c9e04:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80c9e07:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9e0b:	89 04 24             	mov    %eax,(%esp)
 80c9e0e:	e8 51 0c 00 00       	call   80caa64 <_ZN6CBingo9resetQuizEi>
 80c9e13:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80c9e1a:	00 
 80c9e1b:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 80c9e22:	00 
 80c9e23:	c7 44 24 04 60 78 b2 	movl   $0x8b27860,0x4(%esp)
 80c9e2a:	08 
 80c9e2b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80c9e2e:	89 04 24             	mov    %eax,(%esp)
 80c9e31:	e8 e2 58 48 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80c9e36:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80c9e39:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c9e3d:	c7 44 24 04 bb 6a b2 	movl   $0x8b26abb,0x4(%esp)
 80c9e44:	08 
 80c9e45:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80c9e48:	89 04 24             	mov    %eax,(%esp)
 80c9e4b:	e8 38 59 48 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80c9e50:	bb 00 00 00 00       	mov    $0x0,%ebx
 80c9e55:	e8 34 23 00 00       	call   80cc18e <_Z14G_CGameManagerv>
 80c9e5a:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 80c9e60:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80c9e63:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80c9e67:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9e6b:	89 04 24             	mov    %eax,(%esp)
 80c9e6e:	e8 fd 48 00 00       	call   80ce770 <_ZN5boost15foreach_detail_7containISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEEENS0_8auto_anyIPT_EERSD_PN4mpl_5bool_ILb0EEE>
 80c9e73:	83 ec 04             	sub    $0x4,%esp
 80c9e76:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80c9e79:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c9e7c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c9e7f:	89 04 24             	mov    %eax,(%esp)
 80c9e82:	e8 93 30 00 00       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 80c9e87:	84 c0                	test   %al,%al
 80c9e89:	0f 85 55 01 00 00    	jne    80c9fe4 <_ZN10BingoEvent14dailyresetDataEv+0x262>
 80c9e8f:	ba 00 00 00 00       	mov    $0x0,%edx
 80c9e94:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80c9e97:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80c9e9b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80c9ea2:	00 
 80c9ea3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80c9ea6:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9eaa:	89 04 24             	mov    %eax,(%esp)
 80c9ead:	e8 ef 48 00 00       	call   80ce7a1 <_ZN5boost15foreach_detail_5beginISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISH_SI_EEPSE_>
 80c9eb2:	83 ec 04             	sub    $0x4,%esp
 80c9eb5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80c9eb8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c9ebb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9ebe:	89 04 24             	mov    %eax,(%esp)
 80c9ec1:	e8 54 30 00 00       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 80c9ec6:	84 c0                	test   %al,%al
 80c9ec8:	0f 85 16 01 00 00    	jne    80c9fe4 <_ZN10BingoEvent14dailyresetDataEv+0x262>
 80c9ece:	ba 00 00 00 00       	mov    $0x0,%edx
 80c9ed3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80c9ed6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80c9eda:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80c9ee1:	00 
 80c9ee2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80c9ee5:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c9ee9:	89 04 24             	mov    %eax,(%esp)
 80c9eec:	e8 f9 48 00 00       	call   80ce7ea <_ZN5boost15foreach_detail_3endISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISH_SI_EEPSE_>
 80c9ef1:	83 ec 04             	sub    $0x4,%esp
 80c9ef4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80c9ef7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80c9efa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80c9efd:	89 04 24             	mov    %eax,(%esp)
 80c9f00:	e8 15 30 00 00       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 80c9f05:	84 c0                	test   %al,%al
 80c9f07:	0f 85 d7 00 00 00    	jne    80c9fe4 <_ZN10BingoEvent14dailyresetDataEv+0x262>
 80c9f0d:	c6 45 bb 01          	movb   $0x1,-0x45(%ebp)
 80c9f11:	e9 91 00 00 00       	jmp    80c9fa7 <_ZN10BingoEvent14dailyresetDataEv+0x225>
 80c9f16:	8d 45 bb             	lea    -0x45(%ebp),%eax
 80c9f19:	89 04 24             	mov    %eax,(%esp)
 80c9f1c:	e8 03 30 00 00       	call   80ccf24 <_ZN5boost15foreach_detail_9set_falseERb>
 80c9f21:	84 c0                	test   %al,%al
 80c9f23:	75 67                	jne    80c9f8c <_ZN10BingoEvent14dailyresetDataEv+0x20a>
 80c9f25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c9f2c:	00 
 80c9f2d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9f30:	89 04 24             	mov    %eax,(%esp)
 80c9f33:	e8 47 49 00 00       	call   80ce87f <_ZN5boost15foreach_detail_5derefISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEENS0_17foreach_referenceIT_T0_E4typeERKNS0_13auto_any_baseEPNS0_9type2typeISG_SH_EE>
 80c9f38:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c9f3b:	eb 44                	jmp    80c9f81 <_ZN10BingoEvent14dailyresetDataEv+0x1ff>
 80c9f3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c9f40:	8b 40 04             	mov    0x4(%eax),%eax
 80c9f43:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c9f46:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c9f4a:	74 31                	je     80c9f7d <_ZN10BingoEvent14dailyresetDataEv+0x1fb>
 80c9f4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c9f4f:	89 04 24             	mov    %eax,(%esp)
 80c9f52:	e8 59 73 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80c9f57:	89 04 24             	mov    %eax,(%esp)
 80c9f5a:	e8 0d 1d 00 00       	call   80cbc6c <_ZN9BingoData5clearEv>
 80c9f5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c9f62:	89 04 24             	mov    %eax,(%esp)
 80c9f65:	e8 e4 73 5c 00       	call   869134e <_ZN5CUser13sendBingoDataEv>
 80c9f6a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c9f71:	00 
 80c9f72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c9f75:	89 04 24             	mov    %eax,(%esp)
 80c9f78:	e8 1d 6e 5c 00       	call   8690d9a <_ZN5CUser23sendDecorationObjectCntEs>
 80c9f7d:	c6 45 bb 01          	movb   $0x1,-0x45(%ebp)
 80c9f81:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 80c9f85:	83 f0 01             	xor    $0x1,%eax
 80c9f88:	84 c0                	test   %al,%al
 80c9f8a:	75 b1                	jne    80c9f3d <_ZN10BingoEvent14dailyresetDataEv+0x1bb>
 80c9f8c:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 80c9f90:	84 c0                	test   %al,%al
 80c9f92:	74 13                	je     80c9fa7 <_ZN10BingoEvent14dailyresetDataEv+0x225>
 80c9f94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c9f9b:	00 
 80c9f9c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9f9f:	89 04 24             	mov    %eax,(%esp)
 80c9fa2:	e8 bd 48 00 00       	call   80ce864 <_ZN5boost15foreach_detail_4nextISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEEvRKNS0_13auto_any_baseEPNS0_9type2typeIT_T0_EE>
 80c9fa7:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 80c9fab:	84 c0                	test   %al,%al
 80c9fad:	74 28                	je     80c9fd7 <_ZN10BingoEvent14dailyresetDataEv+0x255>
 80c9faf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80c9fb6:	00 
 80c9fb7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80c9fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c9fbe:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c9fc1:	89 04 24             	mov    %eax,(%esp)
 80c9fc4:	e8 6a 48 00 00       	call   80ce833 <_ZN5boost15foreach_detail_4doneISt3mapIjP5CUserSt4lessIjESaISt4pairIKjS4_EEEN4mpl_5bool_ILb0EEEEEbRKNS0_13auto_any_baseESH_PNS0_9type2typeIT_T0_EE>
 80c9fc9:	83 f0 01             	xor    $0x1,%eax
 80c9fcc:	84 c0                	test   %al,%al
 80c9fce:	74 07                	je     80c9fd7 <_ZN10BingoEvent14dailyresetDataEv+0x255>
 80c9fd0:	b8 01 00 00 00       	mov    $0x1,%eax
 80c9fd5:	eb 05                	jmp    80c9fdc <_ZN10BingoEvent14dailyresetDataEv+0x25a>
 80c9fd7:	b8 00 00 00 00       	mov    $0x0,%eax
 80c9fdc:	84 c0                	test   %al,%al
 80c9fde:	0f 85 32 ff ff ff    	jne    80c9f16 <_ZN10BingoEvent14dailyresetDataEv+0x194>
 80c9fe4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80c9fe7:	c9                   	leave
 80c9fe8:	c3                   	ret
 80c9fe9:	90                   	nop

```

```c
// BingoEvent::dailyresetData @ 0x80c9d82

/* BingoEvent::dailyresetData() */

void __thiscall BingoEvent::dailyresetData(BingoEvent *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CBingo *pCVar4;
  BingoData *this_00;
  bool local_49;
  cMyTrace local_48 [16];
  map local_38 [4];
  auto_any_base local_34 [4];
  auto_any_base local_30 [4];
  int local_2c;
  long local_28;
  int local_24;
  type2type *local_20;
  auto_any_base *local_1c;
  auto_any_base *local_18;
  int local_14;
  CUser *local_10;
  
  iVar3 = G_CEnvironment();
  local_2c = *(int *)(iVar3 + 0x37c);
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pCVar4 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
  local_24 = CBingo::getToday(pCVar4,local_28,local_2c);
  if ((0 < local_24) && (local_24 < 0x20)) {
    pCVar4 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetBoard(pCVar4,local_24);
    pCVar4 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetQuiz(pCVar4,local_24);
    cMyTrace::cMyTrace(local_48,"virtual void BingoEvent::dailyresetData()",0x50,0);
    cMyTrace::operator()(local_48,"BingoEvent Day(%d)",local_24);
  }
  iVar3 = G_CGameManager();
  boost::foreach_detail_::
  contain<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>>
            (local_38,(bool_ *)(iVar3 + 0x22c));
  local_20 = (type2type *)local_38;
  bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool((auto_any_base *)local_20);
  if (!bVar1) {
    boost::foreach_detail_::
    begin<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
              (local_34,local_20,(bool_ *)0x0);
    local_1c = local_34;
    bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_1c);
    if (!bVar1) {
      boost::foreach_detail_::
      end<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                (local_30,local_20,(bool_ *)0x0);
      local_18 = local_30;
      bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
      if (!bVar1) {
        local_49 = true;
LAB_080c9fa7:
        if (local_49 == false) {
LAB_080c9fd7:
          bVar1 = false;
        }
        else {
          bVar1 = boost::foreach_detail_::
                  done<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                            (local_1c,local_18,(type2type *)0x0);
          if (bVar1) goto LAB_080c9fd7;
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = boost::foreach_detail_::set_false(&local_49);
          if (cVar2 == '\0') {
            local_14 = boost::foreach_detail_::
                       deref<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                                 (local_1c,(type2type *)0x0);
            while (local_49 != true) {
              local_10 = *(CUser **)(local_14 + 4);
              if (local_10 != (CUser *)0x0) {
                this_00 = (BingoData *)CUser::getBingoData(local_10);
                BingoData::clear(this_00);
                CUser::sendBingoData(local_10);
                CUser::sendDecorationObjectCnt(local_10,0);
              }
              local_49 = true;
            }
          }
          if (local_49 != false) {
            boost::foreach_detail_::
            next<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                      (local_1c,(type2type *)0x0);
          }
          goto LAB_080c9fa7;
        }
      }
    }
  }
  return;
}

```

---

## getBingoSystem

```asm
// === 080c9fea BingoEvent::getBingoSystem  [0x080c9fea-0x80c9ff5] ===
 80c9fea:	55                   	push   %ebp
 80c9feb:	89 e5                	mov    %esp,%ebp
 80c9fed:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9ff0:	83 c0 0c             	add    $0xc,%eax
 80c9ff3:	5d                   	pop    %ebp
 80c9ff4:	c3                   	ret
 80c9ff5:	90                   	nop

```

```c
// BingoEvent::getBingoSystem @ 0x80c9fea

/* BingoEvent::getBingoSystem() */

BingoEvent * __thiscall BingoEvent::getBingoSystem(BingoEvent *this)

{
  return this + 0xc;
}

```

---

## reqBingoMark

```asm
// === 080c9ff6 BingoEvent::reqBingoMark  [0x080c9ff6-0x80ca261] ===
 80c9ff6:	55                   	push   %ebp
 80c9ff7:	89 e5                	mov    %esp,%ebp
 80c9ff9:	56                   	push   %esi
 80c9ffa:	53                   	push   %ebx
 80c9ffb:	83 ec 40             	sub    $0x40,%esp
 80c9ffe:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca001:	8b 40 08             	mov    0x8(%eax),%eax
 80ca004:	85 c0                	test   %eax,%eax
 80ca006:	75 0a                	jne    80ca012 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x1c>
 80ca008:	bb 13 00 00 00       	mov    $0x13,%ebx
 80ca00d:	e9 47 02 00 00       	jmp    80ca259 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x263>
 80ca012:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca015:	8b 40 0c             	mov    0xc(%eax),%eax
 80ca018:	85 c0                	test   %eax,%eax
 80ca01a:	75 0a                	jne    80ca026 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x30>
 80ca01c:	bb 13 00 00 00       	mov    $0x13,%ebx
 80ca021:	e9 33 02 00 00       	jmp    80ca259 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x263>
 80ca026:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca029:	8b 40 08             	mov    0x8(%eax),%eax
 80ca02c:	89 04 24             	mov    %eax,(%esp)
 80ca02f:	e8 7c 72 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca034:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80ca038:	3c 02                	cmp    $0x2,%al
 80ca03a:	0f 9f c0             	setg   %al
 80ca03d:	84 c0                	test   %al,%al
 80ca03f:	74 0a                	je     80ca04b <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x55>
 80ca041:	bb 07 00 00 00       	mov    $0x7,%ebx
 80ca046:	e9 0e 02 00 00       	jmp    80ca259 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x263>
 80ca04b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca04e:	8b 40 0c             	mov    0xc(%eax),%eax
 80ca051:	05 a0 03 00 00       	add    $0x3a0,%eax
 80ca056:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ca05d:	00 
 80ca05e:	89 04 24             	mov    %eax,(%esp)
 80ca061:	e8 76 41 fc ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80ca066:	8b 00                	mov    (%eax),%eax
 80ca068:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80ca06b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 80ca06f:	7e 06                	jle    80ca077 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x81>
 80ca071:	83 7d e0 32          	cmpl   $0x32,-0x20(%ebp)
 80ca075:	7e 0a                	jle    80ca081 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x8b>
 80ca077:	bb 17 00 00 00       	mov    $0x17,%ebx
 80ca07c:	e9 d8 01 00 00       	jmp    80ca259 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x263>
 80ca081:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca084:	83 c0 0c             	add    $0xc,%eax
 80ca087:	89 04 24             	mov    %eax,(%esp)
 80ca08a:	e8 d7 46 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80ca08f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80ca092:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca096:	89 04 24             	mov    %eax,(%esp)
 80ca099:	e8 d2 0d 00 00       	call   80cae70 <_ZN6CBingo19getBingoRandomVauleEi>
 80ca09e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80ca0a1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 80ca0a5:	75 0a                	jne    80ca0b1 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0xbb>
 80ca0a7:	bb 13 00 00 00       	mov    $0x13,%ebx
 80ca0ac:	e9 a8 01 00 00       	jmp    80ca259 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x263>
 80ca0b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca0b4:	8b 40 08             	mov    0x8(%eax),%eax
 80ca0b7:	89 04 24             	mov    %eax,(%esp)
 80ca0ba:	e8 f1 71 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca0bf:	8b 00                	mov    (%eax),%eax
 80ca0c1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80ca0c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca0c7:	8b 40 08             	mov    0x8(%eax),%eax
 80ca0ca:	89 04 24             	mov    %eax,(%esp)
 80ca0cd:	e8 de 71 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca0d2:	89 c3                	mov    %eax,%ebx
 80ca0d4:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca0d7:	83 c0 0c             	add    $0xc,%eax
 80ca0da:	89 04 24             	mov    %eax,(%esp)
 80ca0dd:	e8 84 46 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80ca0e2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80ca0e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ca0e9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80ca0ed:	89 04 24             	mov    %eax,(%esp)
 80ca0f0:	e8 57 0c 00 00       	call   80cad4c <_ZN6CBingo11calNewValueERji>
 80ca0f5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80ca0f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca0fb:	8b 40 08             	mov    0x8(%eax),%eax
 80ca0fe:	89 04 24             	mov    %eax,(%esp)
 80ca101:	e8 aa 71 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca106:	8b 00                	mov    (%eax),%eax
 80ca108:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 80ca10b:	0f 95 c0             	setne  %al
 80ca10e:	84 c0                	test   %al,%al
 80ca110:	0f 84 8c 00 00 00    	je     80ca1a2 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x1ac>
 80ca116:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca119:	8b 40 08             	mov    0x8(%eax),%eax
 80ca11c:	89 04 24             	mov    %eax,(%esp)
 80ca11f:	e8 8c 71 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca124:	c6 40 06 01          	movb   $0x1,0x6(%eax)
 80ca128:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca12b:	8b 40 08             	mov    0x8(%eax),%eax
 80ca12e:	89 04 24             	mov    %eax,(%esp)
 80ca131:	e8 7a 71 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca136:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80ca13a:	0f be c0             	movsbl %al,%eax
 80ca13d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80ca140:	89 d1                	mov    %edx,%ecx
 80ca142:	29 c1                	sub    %eax,%ecx
 80ca144:	89 c8                	mov    %ecx,%eax
 80ca146:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ca149:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80ca14d:	7e 53                	jle    80ca1a2 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x1ac>
 80ca14f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ca152:	83 f8 03             	cmp    $0x3,%eax
 80ca155:	7e 05                	jle    80ca15c <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x166>
 80ca157:	b8 03 00 00 00       	mov    $0x3,%eax
 80ca15c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ca15f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca162:	8b 40 08             	mov    0x8(%eax),%eax
 80ca165:	89 04 24             	mov    %eax,(%esp)
 80ca168:	e8 43 71 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca16d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80ca170:	88 50 04             	mov    %dl,0x4(%eax)
 80ca173:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80ca17a:	eb 19                	jmp    80ca195 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x19f>
 80ca17c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca17f:	8b 40 08             	mov    0x8(%eax),%eax
 80ca182:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca186:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca189:	89 04 24             	mov    %eax,(%esp)
 80ca18c:	e8 43 02 00 00       	call   80ca3d4 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser>
 80ca191:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80ca195:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ca198:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80ca19b:	0f 9c c0             	setl   %al
 80ca19e:	84 c0                	test   %al,%al
 80ca1a0:	75 da                	jne    80ca17c <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x186>
 80ca1a2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca1a5:	89 04 24             	mov    %eax,(%esp)
 80ca1a8:	e8 9f 3b 4c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80ca1ad:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca1b0:	89 04 24             	mov    %eax,(%esp)
 80ca1b3:	e8 2e 17 00 00       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 80ca1b8:	c7 44 24 08 c3 01 00 	movl   $0x1c3,0x8(%esp)
 80ca1bf:	00 
 80ca1c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ca1c7:	00 
 80ca1c8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca1cb:	89 04 24             	mov    %eax,(%esp)
 80ca1ce:	e8 29 17 00 00       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80ca1d3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ca1d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca1da:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca1dd:	89 04 24             	mov    %eax,(%esp)
 80ca1e0:	e8 3b 17 00 00       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80ca1e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca1e8:	8b 40 08             	mov    0x8(%eax),%eax
 80ca1eb:	89 04 24             	mov    %eax,(%esp)
 80ca1ee:	e8 bd 70 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca1f3:	8b 00                	mov    (%eax),%eax
 80ca1f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca1f9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca1fc:	89 04 24             	mov    %eax,(%esp)
 80ca1ff:	e8 38 17 00 00       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 80ca204:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80ca20b:	00 
 80ca20c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca20f:	89 04 24             	mov    %eax,(%esp)
 80ca212:	e8 41 17 00 00       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80ca217:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca21a:	8b 40 08             	mov    0x8(%eax),%eax
 80ca21d:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 80ca220:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca224:	89 04 24             	mov    %eax,(%esp)
 80ca227:	e8 8e e3 57 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80ca22c:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ca231:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca234:	89 04 24             	mov    %eax,(%esp)
 80ca237:	e8 44 3c 4c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80ca23c:	eb 1b                	jmp    80ca259 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE+0x263>
 80ca23e:	89 d3                	mov    %edx,%ebx
 80ca240:	89 c6                	mov    %eax,%esi
 80ca242:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ca245:	89 04 24             	mov    %eax,(%esp)
 80ca248:	e8 33 3c 4c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80ca24d:	89 f0                	mov    %esi,%eax
 80ca24f:	89 da                	mov    %ebx,%edx
 80ca251:	89 04 24             	mov    %eax,(%esp)
 80ca254:	e8 f7 94 a1 00       	call   8ae3750 <_Unwind_Resume>
 80ca259:	89 d8                	mov    %ebx,%eax
 80ca25b:	83 c4 40             	add    $0x40,%esp
 80ca25e:	5b                   	pop    %ebx
 80ca25f:	5e                   	pop    %esi
 80ca260:	5d                   	pop    %ebp
 80ca261:	c3                   	ret

```

```c
// BingoEvent::reqBingoMark @ 0x80c9ff6

/* BingoEvent::reqBingoMark(StackableAction::input_param&) */

undefined4 __thiscall BingoEvent::reqBingoMark(BingoEvent *this,input_param *param_1)

{
  int iVar1;
  int *piVar2;
  CBingo *pCVar3;
  uint *puVar4;
  undefined4 uVar5;
  PacketGuard local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar5 = 0x13;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 0x13;
  }
  else {
    iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
    if (*(char *)(iVar1 + 4) < '\x03') {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)
                                 (*(int *)(param_1 + 0xc) + 0x3a0),0);
      local_24 = *piVar2;
      if ((local_24 < 1) || (0x32 < local_24)) {
        uVar5 = 0x17;
      }
      else {
        pCVar3 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc))
        ;
        local_20 = CBingo::getBingoRandomVaule(pCVar3,local_24);
        if (local_20 == 0) {
          uVar5 = 0x13;
        }
        else {
          piVar2 = (int *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          local_1c = *piVar2;
          puVar4 = (uint *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          pCVar3 = (CBingo *)
                   boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
          local_18 = CBingo::calNewValue(pCVar3,puVar4,local_20);
          piVar2 = (int *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          if (*piVar2 != local_1c) {
            iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
            *(undefined1 *)(iVar1 + 6) = 1;
            iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
            local_14 = local_18 - *(char *)(iVar1 + 4);
            if (0 < local_14) {
              if (3 < local_14) {
                local_14 = 3;
              }
              iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
              *(char *)(iVar1 + 4) = (char)local_18;
              for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
                sendOneMatchLineReward(this,*(CUser **)(param_1 + 8));
              }
            }
          }
          PacketGuard::PacketGuard(local_30);
                    /* try { // try from 080ca1b3 to 080ca22b has its CatchHandler @ 080ca23e */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1c3);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_20);
          piVar2 = (int *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*piVar2);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
          CUser::Send(*(CUser **)(param_1 + 8),local_30);
          uVar5 = 0;
          PacketGuard::~PacketGuard(local_30);
        }
      }
    }
    else {
      uVar5 = 7;
    }
  }
  return uVar5;
}

```

---

## reqBingoQuizMark

```asm
// === 080ca262 BingoEvent::reqBingoQuizMark  [0x080ca262-0x80ca3d3] ===
 80ca262:	55                   	push   %ebp
 80ca263:	89 e5                	mov    %esp,%ebp
 80ca265:	53                   	push   %ebx
 80ca266:	83 ec 34             	sub    $0x34,%esp
 80ca269:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca26c:	83 c0 0c             	add    $0xc,%eax
 80ca26f:	89 04 24             	mov    %eax,(%esp)
 80ca272:	e8 ef 44 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80ca277:	89 04 24             	mov    %eax,(%esp)
 80ca27a:	e8 93 0b 00 00       	call   80cae12 <_ZN6CBingo12getQuizValueEv>
 80ca27f:	3b 45 10             	cmp    0x10(%ebp),%eax
 80ca282:	0f 95 c0             	setne  %al
 80ca285:	84 c0                	test   %al,%al
 80ca287:	74 0a                	je     80ca293 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x31>
 80ca289:	b8 17 00 00 00       	mov    $0x17,%eax
 80ca28e:	e9 3b 01 00 00       	jmp    80ca3ce <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x16c>
 80ca293:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca296:	83 c0 0c             	add    $0xc,%eax
 80ca299:	89 04 24             	mov    %eax,(%esp)
 80ca29c:	e8 c5 44 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80ca2a1:	89 04 24             	mov    %eax,(%esp)
 80ca2a4:	e8 75 0b 00 00       	call   80cae1e <_ZN6CBingo12getQuizIndexEv>
 80ca2a9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80ca2ac:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 80ca2b0:	79 10                	jns    80ca2c2 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x60>
 80ca2b2:	83 7d e4 31          	cmpl   $0x31,-0x1c(%ebp)
 80ca2b6:	7e 0a                	jle    80ca2c2 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x60>
 80ca2b8:	b8 13 00 00 00       	mov    $0x13,%eax
 80ca2bd:	e9 0c 01 00 00       	jmp    80ca3ce <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x16c>
 80ca2c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca2c5:	89 04 24             	mov    %eax,(%esp)
 80ca2c8:	e8 e3 6f 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca2cd:	8b 00                	mov    (%eax),%eax
 80ca2cf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80ca2d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca2d6:	89 04 24             	mov    %eax,(%esp)
 80ca2d9:	e8 50 80 7c 00       	call   889232e <_Z13isSetBit_Uintji>
 80ca2de:	84 c0                	test   %al,%al
 80ca2e0:	74 0a                	je     80ca2ec <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x8a>
 80ca2e2:	b8 12 00 00 00       	mov    $0x12,%eax
 80ca2e7:	e9 e2 00 00 00       	jmp    80ca3ce <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x16c>
 80ca2ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca2ef:	89 04 24             	mov    %eax,(%esp)
 80ca2f2:	e8 b9 6f 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca2f7:	8b 00                	mov    (%eax),%eax
 80ca2f9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80ca2fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca2ff:	89 04 24             	mov    %eax,(%esp)
 80ca302:	e8 a9 6f 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca307:	89 c3                	mov    %eax,%ebx
 80ca309:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca30c:	83 c0 0c             	add    $0xc,%eax
 80ca30f:	89 04 24             	mov    %eax,(%esp)
 80ca312:	e8 4f 44 00 00       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 80ca317:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80ca31e:	00 
 80ca31f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80ca323:	89 04 24             	mov    %eax,(%esp)
 80ca326:	e8 21 0a 00 00       	call   80cad4c <_ZN6CBingo11calNewValueERji>
 80ca32b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80ca32e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca331:	89 04 24             	mov    %eax,(%esp)
 80ca334:	e8 77 6f 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca339:	8b 00                	mov    (%eax),%eax
 80ca33b:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 80ca33e:	0f 95 c0             	setne  %al
 80ca341:	84 c0                	test   %al,%al
 80ca343:	0f 84 80 00 00 00    	je     80ca3c9 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x167>
 80ca349:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca34c:	89 04 24             	mov    %eax,(%esp)
 80ca34f:	e8 5c 6f 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca354:	c6 40 06 01          	movb   $0x1,0x6(%eax)
 80ca358:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca35b:	89 04 24             	mov    %eax,(%esp)
 80ca35e:	e8 4d 6f 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca363:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80ca367:	0f be c0             	movsbl %al,%eax
 80ca36a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80ca36d:	89 d1                	mov    %edx,%ecx
 80ca36f:	29 c1                	sub    %eax,%ecx
 80ca371:	89 c8                	mov    %ecx,%eax
 80ca373:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ca376:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80ca37a:	7e 4d                	jle    80ca3c9 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x167>
 80ca37c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ca37f:	83 f8 03             	cmp    $0x3,%eax
 80ca382:	7e 05                	jle    80ca389 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x127>
 80ca384:	b8 03 00 00 00       	mov    $0x3,%eax
 80ca389:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ca38c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca38f:	89 04 24             	mov    %eax,(%esp)
 80ca392:	e8 19 6f 5c 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 80ca397:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80ca39a:	88 50 04             	mov    %dl,0x4(%eax)
 80ca39d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80ca3a4:	eb 16                	jmp    80ca3bc <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x15a>
 80ca3a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca3a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca3ad:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca3b0:	89 04 24             	mov    %eax,(%esp)
 80ca3b3:	e8 1c 00 00 00       	call   80ca3d4 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser>
 80ca3b8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80ca3bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ca3bf:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80ca3c2:	0f 9c c0             	setl   %al
 80ca3c5:	84 c0                	test   %al,%al
 80ca3c7:	75 dd                	jne    80ca3a6 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri+0x144>
 80ca3c9:	b8 00 00 00 00       	mov    $0x0,%eax
 80ca3ce:	83 c4 34             	add    $0x34,%esp
 80ca3d1:	5b                   	pop    %ebx
 80ca3d2:	5d                   	pop    %ebp
 80ca3d3:	c3                   	ret

```

```c
// BingoEvent::reqBingoQuizMark @ 0x80ca262

/* BingoEvent::reqBingoQuizMark(CUser&, int) */

undefined4 __thiscall BingoEvent::reqBingoQuizMark(BingoEvent *this,CUser *param_1,int param_2)

{
  char cVar1;
  CBingo *pCVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_10;
  
  pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
  iVar3 = CBingo::getQuizValue(pCVar2);
  if (iVar3 == param_2) {
    pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    iVar3 = CBingo::getQuizIndex(pCVar2);
    if ((iVar3 < 0) && (0x31 < iVar3)) {
      uVar4 = 0x13;
    }
    else {
      puVar5 = (uint *)CUser::getBingoData(param_1);
      cVar1 = isSetBit_Uint(*puVar5,iVar3);
      if (cVar1 == '\0') {
        piVar6 = (int *)CUser::getBingoData(param_1);
        iVar3 = *piVar6;
        puVar5 = (uint *)CUser::getBingoData(param_1);
        pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc))
        ;
        iVar7 = CBingo::calNewValue(pCVar2,puVar5,0);
        piVar6 = (int *)CUser::getBingoData(param_1);
        if (*piVar6 != iVar3) {
          iVar3 = CUser::getBingoData(param_1);
          *(undefined1 *)(iVar3 + 6) = 1;
          iVar3 = CUser::getBingoData(param_1);
          iVar3 = iVar7 - *(char *)(iVar3 + 4);
          if (0 < iVar3) {
            if (3 < iVar3) {
              iVar3 = 3;
            }
            iVar8 = CUser::getBingoData(param_1);
            *(char *)(iVar8 + 4) = (char)iVar7;
            for (local_10 = 0; local_10 < iVar3; local_10 = local_10 + 1) {
              sendOneMatchLineReward(this,param_1);
            }
          }
        }
        uVar4 = 0;
      }
      else {
        uVar4 = 0x12;
      }
    }
  }
  else {
    uVar4 = 0x17;
  }
  return uVar4;
}

```

---

## sendMaxMatchLineReward

```asm
// === 080ca622 BingoEvent::sendMaxMatchLineReward  [0x080ca622-0x80ca82b] ===
 80ca622:	55                   	push   %ebp
 80ca623:	89 e5                	mov    %esp,%ebp
 80ca625:	56                   	push   %esi
 80ca626:	53                   	push   %ebx
 80ca627:	81 ec a0 01 00 00    	sub    $0x1a0,%esp
 80ca62d:	e8 69 1b 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80ca632:	8d 90 98 b5 00 00    	lea    0xb598(%eax),%edx
 80ca638:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ca63b:	c7 44 24 08 60 6f b2 	movl   $0x8b26f60,0x8(%esp)
 80ca642:	08 
 80ca643:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca647:	89 04 24             	mov    %eax,(%esp)
 80ca64a:	e8 4b 42 00 00       	call   80ce89a <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4findERS4_>
 80ca64f:	83 ec 04             	sub    $0x4,%esp
 80ca652:	e8 44 1b 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80ca657:	8d 90 98 b5 00 00    	lea    0xb598(%eax),%edx
 80ca65d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ca660:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca664:	89 04 24             	mov    %eax,(%esp)
 80ca667:	e8 5c 2c 00 00       	call   80cd2c8 <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 80ca66c:	83 ec 04             	sub    $0x4,%esp
 80ca66f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ca672:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca676:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ca679:	89 04 24             	mov    %eax,(%esp)
 80ca67c:	e8 45 42 00 00       	call   80ce8c6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEeqERKS4_>
 80ca681:	84 c0                	test   %al,%al
 80ca683:	74 31                	je     80ca6b6 <_ZN10BingoEvent22sendMaxMatchLineRewardER5CUser+0x94>
 80ca685:	c7 44 24 10 fc 6a b2 	movl   $0x8b26afc,0x10(%esp)
 80ca68c:	08 
 80ca68d:	c7 44 24 0c ef 00 00 	movl   $0xef,0xc(%esp)
 80ca694:	00 
 80ca695:	c7 44 24 08 e0 77 b2 	movl   $0x8b277e0,0x8(%esp)
 80ca69c:	08 
 80ca69d:	c7 44 24 04 0f 6b b2 	movl   $0x8b26b0f,0x4(%esp)
 80ca6a4:	08 
 80ca6a5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80ca6ac:	e8 59 95 a0 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80ca6b1:	e9 6b 01 00 00       	jmp    80ca821 <_ZN10BingoEvent22sendMaxMatchLineRewardER5CUser+0x1ff>
 80ca6b6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ca6b9:	89 04 24             	mov    %eax,(%esp)
 80ca6bc:	e8 19 42 00 00       	call   80ce8da <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEptEv>
 80ca6c1:	8b 40 04             	mov    0x4(%eax),%eax
 80ca6c4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80ca6c7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ca6ca:	89 04 24             	mov    %eax,(%esp)
 80ca6cd:	e8 08 42 00 00       	call   80ce8da <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEptEv>
 80ca6d2:	8b 40 08             	mov    0x8(%eax),%eax
 80ca6d5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ca6d8:	8d 45 92             	lea    -0x6e(%ebp),%eax
 80ca6db:	89 04 24             	mov    %eax,(%esp)
 80ca6de:	e8 71 11 00 00       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80ca6e3:	e8 b3 1a 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80ca6e8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80ca6eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca6ef:	89 04 24             	mov    %eax,(%esp)
 80ca6f2:	e8 3b 53 29 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80ca6f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ca6fa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80ca6fe:	0f 84 1c 01 00 00    	je     80ca820 <_ZN10BingoEvent22sendMaxMatchLineRewardER5CUser+0x1fe>
 80ca704:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80ca707:	89 45 94             	mov    %eax,-0x6c(%ebp)
 80ca70a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ca70d:	8b 00                	mov    (%eax),%eax
 80ca70f:	83 c0 08             	add    $0x8,%eax
 80ca712:	8b 10                	mov    (%eax),%edx
 80ca714:	8d 45 92             	lea    -0x6e(%ebp),%eax
 80ca717:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca71b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ca71e:	89 04 24             	mov    %eax,(%esp)
 80ca721:	ff d2                	call   *%edx
 80ca723:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ca726:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca72a:	8d 45 92             	lea    -0x6e(%ebp),%eax
 80ca72d:	89 04 24             	mov    %eax,(%esp)
 80ca730:	e8 4f 11 00 00       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 80ca735:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80ca73c:	00 
 80ca73d:	c7 44 24 08 1e 6b b2 	movl   $0x8b26b1e,0x8(%esp)
 80ca744:	08 
 80ca745:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80ca74c:	00 
 80ca74d:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80ca754:	e8 a5 b0 9d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80ca759:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 80ca760:	00 
 80ca761:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca765:	8d 45 cf             	lea    -0x31(%ebp),%eax
 80ca768:	89 04 24             	mov    %eax,(%esp)
 80ca76b:	e8 60 31 fb ff       	call   807d8d0 <strncpy@plt>
 80ca770:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80ca777:	00 
 80ca778:	c7 44 24 08 46 6b b2 	movl   $0x8b26b46,0x8(%esp)
 80ca77f:	08 
 80ca780:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80ca787:	00 
 80ca788:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80ca78f:	e8 6a b0 9d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80ca794:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 80ca79b:	00 
 80ca79c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca7a0:	8d 85 92 fe ff ff    	lea    -0x16e(%ebp),%eax
 80ca7a6:	89 04 24             	mov    %eax,(%esp)
 80ca7a9:	e8 22 31 fb ff       	call   807d8d0 <strncpy@plt>
 80ca7ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca7b1:	89 04 24             	mov    %eax,(%esp)
 80ca7b4:	e8 d7 14 00 00       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80ca7b9:	89 c3                	mov    %eax,%ebx
 80ca7bb:	8d 85 92 fe ff ff    	lea    -0x16e(%ebp),%eax
 80ca7c1:	89 04 24             	mov    %eax,(%esp)
 80ca7c4:	e8 e7 3b fb ff       	call   807e3b0 <strlen@plt>
 80ca7c9:	89 c6                	mov    %eax,%esi
 80ca7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca7ce:	89 04 24             	mov    %eax,(%esp)
 80ca7d1:	e8 78 14 00 00       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80ca7d6:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 80ca7dd:	00 
 80ca7de:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 80ca7e5:	00 
 80ca7e6:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 80ca7ea:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 80ca7f1:	00 
 80ca7f2:	89 74 24 14          	mov    %esi,0x14(%esp)
 80ca7f6:	8d 95 92 fe ff ff    	lea    -0x16e(%ebp),%edx
 80ca7fc:	89 54 24 10          	mov    %edx,0x10(%esp)
 80ca800:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80ca804:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80ca80b:	00 
 80ca80c:	8d 45 92             	lea    -0x6e(%ebp),%eax
 80ca80f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca813:	8d 45 cf             	lea    -0x31(%ebp),%eax
 80ca816:	89 04 24             	mov    %eax,(%esp)
 80ca819:	e8 ca ad 48 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 80ca81e:	eb 01                	jmp    80ca821 <_ZN10BingoEvent22sendMaxMatchLineRewardER5CUser+0x1ff>
 80ca820:	90                   	nop
 80ca821:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80ca824:	83 c4 00             	add    $0x0,%esp
 80ca827:	5b                   	pop    %ebx
 80ca828:	5e                   	pop    %esi
 80ca829:	5d                   	pop    %ebp
 80ca82a:	c3                   	ret
 80ca82b:	90                   	nop

```

```c
// BingoEvent::sendMaxMatchLineReward @ 0x80ca622

/* BingoEvent::sendMaxMatchLineReward(CUser&) */

void __thiscall BingoEvent::sendMaxMatchLineReward(BingoEvent *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  char local_172 [256];
  Inven_Item local_72 [2];
  int local_70;
  char local_35 [21];
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_20 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_1c [4];
  int local_18;
  int local_14;
  int *local_10;
  
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_20);
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_20);
    local_18 = *(int *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_20);
    local_14 = *(int *)(iVar2 + 8);
    Inven_Item::Inven_Item(local_72);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,local_18);
    if (local_10 != (int *)0x0) {
      local_70 = local_18;
      (**(code **)(*local_10 + 8))(local_10,local_72);
      Inven_Item::set_add_info(local_72,local_14);
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_292",(bool *)0x0);
      strncpy(local_35,pcVar3,0x14);
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_294",(bool *)0x0);
      strncpy(local_172,pcVar3,0xff);
      uVar4 = CUser::GetServerGroup(param_1);
      sVar5 = strlen(local_172);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_35,local_72,0,uVar6,local_172,sVar5,0,uVar4,0,0);
    }
  }
  else {
    LogManager::logFormat
              (1,"BingoEvent.cpp","void BingoEvent::sendMaxMatchLineReward(CUser&)",0xef,
               "bingo script error");
  }
  return;
}

```

---

## sendOneMatchLineReward

```asm
// === 080ca3d4 BingoEvent::sendOneMatchLineReward  [0x080ca3d4-0x80ca621] ===
 80ca3d4:	55                   	push   %ebp
 80ca3d5:	89 e5                	mov    %esp,%ebp
 80ca3d7:	56                   	push   %esi
 80ca3d8:	53                   	push   %ebx
 80ca3d9:	81 ec a0 01 00 00    	sub    $0x1a0,%esp
 80ca3df:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 80ca3e6:	e8 b0 1d 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80ca3eb:	8d 88 98 b5 00 00    	lea    0xb598(%eax),%ecx
 80ca3f1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ca3f4:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80ca3f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ca3fb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80ca3ff:	89 04 24             	mov    %eax,(%esp)
 80ca402:	e8 93 44 00 00       	call   80ce89a <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4findERS4_>
 80ca407:	83 ec 04             	sub    $0x4,%esp
 80ca40a:	e8 8c 1d 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80ca40f:	8d 90 98 b5 00 00    	lea    0xb598(%eax),%edx
 80ca415:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ca418:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca41c:	89 04 24             	mov    %eax,(%esp)
 80ca41f:	e8 a4 2e 00 00       	call   80cd2c8 <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 80ca424:	83 ec 04             	sub    $0x4,%esp
 80ca427:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ca42a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca42e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ca431:	89 04 24             	mov    %eax,(%esp)
 80ca434:	e8 8d 44 00 00       	call   80ce8c6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEeqERKS4_>
 80ca439:	84 c0                	test   %al,%al
 80ca43b:	74 31                	je     80ca46e <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0x9a>
 80ca43d:	c7 44 24 10 fc 6a b2 	movl   $0x8b26afc,0x10(%esp)
 80ca444:	08 
 80ca445:	c7 44 24 0c c0 00 00 	movl   $0xc0,0xc(%esp)
 80ca44c:	00 
 80ca44d:	c7 44 24 08 20 78 b2 	movl   $0x8b27820,0x8(%esp)
 80ca454:	08 
 80ca455:	c7 44 24 04 0f 6b b2 	movl   $0x8b26b0f,0x4(%esp)
 80ca45c:	08 
 80ca45d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80ca464:	e8 a1 97 a0 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80ca469:	e9 a9 01 00 00       	jmp    80ca617 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0x243>
 80ca46e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ca471:	89 04 24             	mov    %eax,(%esp)
 80ca474:	e8 61 44 00 00       	call   80ce8da <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEptEv>
 80ca479:	8b 40 04             	mov    0x4(%eax),%eax
 80ca47c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80ca47f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ca482:	89 04 24             	mov    %eax,(%esp)
 80ca485:	e8 50 44 00 00       	call   80ce8da <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEptEv>
 80ca48a:	8b 40 08             	mov    0x8(%eax),%eax
 80ca48d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80ca490:	8d 45 8a             	lea    -0x76(%ebp),%eax
 80ca493:	89 04 24             	mov    %eax,(%esp)
 80ca496:	e8 b9 13 00 00       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80ca49b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80ca4a2:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80ca4a6:	75 08                	jne    80ca4b0 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0xdc>
 80ca4a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80ca4ab:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ca4ae:	eb 7c                	jmp    80ca52c <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0x158>
 80ca4b0:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 80ca4b4:	75 24                	jne    80ca4da <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0x106>
 80ca4b6:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
 80ca4bd:	c6 45 8b 02          	movb   $0x2,-0x75(%ebp)
 80ca4c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80ca4c4:	89 45 91             	mov    %eax,-0x6f(%ebp)
 80ca4c7:	66 c7 45 95 01 00    	movw   $0x1,-0x6b(%ebp)
 80ca4cd:	8d 45 8a             	lea    -0x76(%ebp),%eax
 80ca4d0:	89 04 24             	mov    %eax,(%esp)
 80ca4d3:	e8 ba 13 00 00       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 80ca4d8:	eb 52                	jmp    80ca52c <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0x158>
 80ca4da:	e8 bc 1c 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80ca4df:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80ca4e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ca4e6:	89 04 24             	mov    %eax,(%esp)
 80ca4e9:	e8 44 55 29 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80ca4ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ca4f1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80ca4f5:	0f 84 1b 01 00 00    	je     80ca616 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0x242>
 80ca4fb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80ca4fe:	89 45 8c             	mov    %eax,-0x74(%ebp)
 80ca501:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ca504:	8b 00                	mov    (%eax),%eax
 80ca506:	83 c0 08             	add    $0x8,%eax
 80ca509:	8b 10                	mov    (%eax),%edx
 80ca50b:	8d 45 8a             	lea    -0x76(%ebp),%eax
 80ca50e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca512:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ca515:	89 04 24             	mov    %eax,(%esp)
 80ca518:	ff d2                	call   *%edx
 80ca51a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80ca51d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca521:	8d 45 8a             	lea    -0x76(%ebp),%eax
 80ca524:	89 04 24             	mov    %eax,(%esp)
 80ca527:	e8 58 13 00 00       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 80ca52c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80ca533:	00 
 80ca534:	c7 44 24 08 1e 6b b2 	movl   $0x8b26b1e,0x8(%esp)
 80ca53b:	08 
 80ca53c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80ca543:	00 
 80ca544:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80ca54b:	e8 ae b2 9d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80ca550:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 80ca557:	00 
 80ca558:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca55c:	8d 45 c7             	lea    -0x39(%ebp),%eax
 80ca55f:	89 04 24             	mov    %eax,(%esp)
 80ca562:	e8 69 33 fb ff       	call   807d8d0 <strncpy@plt>
 80ca567:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80ca56e:	00 
 80ca56f:	c7 44 24 08 32 6b b2 	movl   $0x8b26b32,0x8(%esp)
 80ca576:	08 
 80ca577:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80ca57e:	00 
 80ca57f:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80ca586:	e8 73 b2 9d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80ca58b:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 80ca592:	00 
 80ca593:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca597:	8d 85 8a fe ff ff    	lea    -0x176(%ebp),%eax
 80ca59d:	89 04 24             	mov    %eax,(%esp)
 80ca5a0:	e8 2b 33 fb ff       	call   807d8d0 <strncpy@plt>
 80ca5a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca5a8:	89 04 24             	mov    %eax,(%esp)
 80ca5ab:	e8 e0 16 00 00       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80ca5b0:	89 c3                	mov    %eax,%ebx
 80ca5b2:	8d 85 8a fe ff ff    	lea    -0x176(%ebp),%eax
 80ca5b8:	89 04 24             	mov    %eax,(%esp)
 80ca5bb:	e8 f0 3d fb ff       	call   807e3b0 <strlen@plt>
 80ca5c0:	89 c6                	mov    %eax,%esi
 80ca5c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca5c5:	89 04 24             	mov    %eax,(%esp)
 80ca5c8:	e8 81 16 00 00       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80ca5cd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80ca5d0:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 80ca5d7:	00 
 80ca5d8:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 80ca5df:	00 
 80ca5e0:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 80ca5e4:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 80ca5eb:	00 
 80ca5ec:	89 74 24 14          	mov    %esi,0x14(%esp)
 80ca5f0:	8d 8d 8a fe ff ff    	lea    -0x176(%ebp),%ecx
 80ca5f6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80ca5fa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80ca5fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ca602:	8d 45 8a             	lea    -0x76(%ebp),%eax
 80ca605:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca609:	8d 45 c7             	lea    -0x39(%ebp),%eax
 80ca60c:	89 04 24             	mov    %eax,(%esp)
 80ca60f:	e8 d4 af 48 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 80ca614:	eb 01                	jmp    80ca617 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser+0x243>
 80ca616:	90                   	nop
 80ca617:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80ca61a:	83 c4 00             	add    $0x0,%esp
 80ca61d:	5b                   	pop    %ebx
 80ca61e:	5e                   	pop    %esi
 80ca61f:	5d                   	pop    %ebp
 80ca620:	c3                   	ret
 80ca621:	90                   	nop

```

```c
// BingoEvent::sendOneMatchLineReward @ 0x80ca3d4

/* BingoEvent::sendOneMatchLineReward(CUser&) */

void __thiscall BingoEvent::sendOneMatchLineReward(BingoEvent *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  char local_17a [256];
  Inven_Item local_7a;
  undefined1 local_79;
  int local_78;
  int local_73;
  undefined2 local_6f;
  char local_3d [21];
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_28 [4];
  undefined4 local_24;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_24 = 1;
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_28);
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_20);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator==
                    (local_28,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_28);
    local_1c = *(int *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_28);
    local_18 = *(int *)(iVar2 + 8);
    Inven_Item::Inven_Item(&local_7a);
    local_14 = 0;
    if (local_1c == 0) {
      local_14 = local_18;
    }
    else if (local_1c == 1) {
      local_78 = 1;
      local_79 = 2;
      local_73 = local_18;
      local_6f = 1;
      Inven_Item::ResetItemAttr(&local_7a);
    }
    else {
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(this_00,local_1c);
      if (local_10 == (int *)0x0) {
        return;
      }
      local_78 = local_1c;
      (**(code **)(*local_10 + 8))(local_10,&local_7a);
      Inven_Item::set_add_info(&local_7a,local_18);
    }
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_292",(bool *)0x0);
    strncpy(local_3d,pcVar3,0x14);
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_293",(bool *)0x0);
    strncpy(local_17a,pcVar3,0xff);
    uVar4 = CUser::GetServerGroup(param_1);
    sVar5 = strlen(local_17a);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_3d,&local_7a,local_14,uVar6,local_17a,sVar5,0,uVar4,0,0);
  }
  else {
    LogManager::logFormat
              (1,"BingoEvent.cpp","void BingoEvent::sendOneMatchLineReward(CUser&)",0xc0,
               "bingo script error");
  }
  return;
}

```

---

## ~BingoEvent

```asm
// === 080c9a06 BingoEvent::~BingoEvent  [0x080c9a06-0x80c9a67] ===
 80c9a06:	55                   	push   %ebp
 80c9a07:	89 e5                	mov    %esp,%ebp
 80c9a09:	56                   	push   %esi
 80c9a0a:	53                   	push   %ebx
 80c9a0b:	83 ec 10             	sub    $0x10,%esp
 80c9a0e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a11:	c7 00 48 7e b2 08    	movl   $0x8b27e48,(%eax)
 80c9a17:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a1a:	83 c0 0c             	add    $0xc,%eax
 80c9a1d:	89 04 24             	mov    %eax,(%esp)
 80c9a20:	e8 0f 35 00 00       	call   80ccf34 <_ZN5boost10shared_ptrI6CBingoED1Ev>
 80c9a25:	eb 1b                	jmp    80c9a42 <_ZN10BingoEventD1Ev+0x3c>
 80c9a27:	89 d3                	mov    %edx,%ebx
 80c9a29:	89 c6                	mov    %eax,%esi
 80c9a2b:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a2e:	89 04 24             	mov    %eax,(%esp)
 80c9a31:	e8 1c 14 04 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 80c9a36:	89 f0                	mov    %esi,%eax
 80c9a38:	89 da                	mov    %ebx,%edx
 80c9a3a:	89 04 24             	mov    %eax,(%esp)
 80c9a3d:	e8 0e 9d a1 00       	call   8ae3750 <_Unwind_Resume>
 80c9a42:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a45:	89 04 24             	mov    %eax,(%esp)
 80c9a48:	e8 05 14 04 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 80c9a4d:	b8 00 00 00 00       	mov    $0x0,%eax
 80c9a52:	84 c0                	test   %al,%al
 80c9a54:	74 0b                	je     80c9a61 <_ZN10BingoEventD1Ev+0x5b>
 80c9a56:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a59:	89 04 24             	mov    %eax,(%esp)
 80c9a5c:	e8 8f aa 65 00       	call   87244f0 <_ZdlPv>
 80c9a61:	83 c4 10             	add    $0x10,%esp
 80c9a64:	5b                   	pop    %ebx
 80c9a65:	5e                   	pop    %esi
 80c9a66:	5d                   	pop    %ebp
 80c9a67:	c3                   	ret

```

```c
// BingoEvent::~BingoEvent @ 0x80c9a06

/* WARNING: Removing unreachable block (ram,0x080c9a56) */
/* BingoEvent::~BingoEvent() */

void __thiscall BingoEvent::~BingoEvent(BingoEvent *this)

{
  *(undefined ***)this = &PTR__BingoEvent_08b27e48;
                    /* try { // try from 080c9a20 to 080c9a24 has its CatchHandler @ 080c9a27 */
  boost::shared_ptr<CBingo>::~shared_ptr((shared_ptr<CBingo> *)(this + 0xc));
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~BingoEvent_080c9a68

```asm
// === 080c9a68 BingoEvent::~BingoEvent  [0x080c9a68-0x80c9a85] ===
 80c9a68:	55                   	push   %ebp
 80c9a69:	89 e5                	mov    %esp,%ebp
 80c9a6b:	83 ec 18             	sub    $0x18,%esp
 80c9a6e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a71:	89 04 24             	mov    %eax,(%esp)
 80c9a74:	e8 8d ff ff ff       	call   80c9a06 <_ZN10BingoEventD1Ev>
 80c9a79:	8b 45 08             	mov    0x8(%ebp),%eax
 80c9a7c:	89 04 24             	mov    %eax,(%esp)
 80c9a7f:	e8 6c aa 65 00       	call   87244f0 <_ZdlPv>
 80c9a84:	c9                   	leave
 80c9a85:	c3                   	ret

```

```c
// BingoEvent::~BingoEvent @ 0x80c9a68

/* BingoEvent::~BingoEvent() */

void __thiscall BingoEvent::~BingoEvent(BingoEvent *this)

{
  ~BingoEvent(this);
  operator_delete(this);
  return;
}

```

