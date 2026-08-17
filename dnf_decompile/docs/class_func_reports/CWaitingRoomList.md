# CWaitingRoomList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## doMatch

```asm
// === 08566d9c CWaitingRoomList::doMatch  [0x08566d9c-0x8566efb] ===
 8566d9c:	55                   	push   %ebp
 8566d9d:	89 e5                	mov    %esp,%ebp
 8566d9f:	83 ec 48             	sub    $0x48,%esp
 8566da2:	8b 45 08             	mov    0x8(%ebp),%eax
 8566da5:	89 04 24             	mov    %eax,(%esp)
 8566da8:	e8 e7 26 00 00       	call   8569494 <_ZNKSt3setIP6IMatchSt4lessIS1_ESaIS1_EE5emptyEv>
 8566dad:	83 f0 01             	xor    $0x1,%eax
 8566db0:	84 c0                	test   %al,%al
 8566db2:	0f 84 1f 01 00 00    	je     8566ed7 <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0x13b>
 8566db8:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8566dbc:	b8 00 00 00 00       	mov    $0x0,%eax
 8566dc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8566dc4:	8b 55 08             	mov    0x8(%ebp),%edx
 8566dc7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8566dca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566dce:	89 04 24             	mov    %eax,(%esp)
 8566dd1:	e8 88 23 00 00       	call   856915e <_ZNKSt3setIP6IMatchSt4lessIS1_ESaIS1_EE3endEv>
 8566dd6:	83 ec 04             	sub    $0x4,%esp
 8566dd9:	8b 55 08             	mov    0x8(%ebp),%edx
 8566ddc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8566ddf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566de3:	89 04 24             	mov    %eax,(%esp)
 8566de6:	e8 bd 26 00 00       	call   85694a8 <_ZNKSt3setIP6IMatchSt4lessIS1_ESaIS1_EE5beginEv>
 8566deb:	83 ec 04             	sub    $0x4,%esp
 8566dee:	e9 b3 00 00 00       	jmp    8566ea6 <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0x10a>
 8566df3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8566df6:	89 04 24             	mov    %eax,(%esp)
 8566df9:	e8 ee 26 00 00       	call   85694ec <_ZNKSt23_Rb_tree_const_iteratorIP6IMatchEdeEv>
 8566dfe:	8b 00                	mov    (%eax),%eax
 8566e00:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8566e03:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8566e06:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8566e09:	0f 84 88 00 00 00    	je     8566e97 <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0xfb>
 8566e0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566e12:	8b 00                	mov    (%eax),%eax
 8566e14:	83 c0 78             	add    $0x78,%eax
 8566e17:	8b 10                	mov    (%eax),%edx
 8566e19:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8566e1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566e20:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566e23:	89 04 24             	mov    %eax,(%esp)
 8566e26:	ff d2                	call   *%edx
 8566e28:	83 f0 01             	xor    $0x1,%eax
 8566e2b:	84 c0                	test   %al,%al
 8566e2d:	75 6b                	jne    8566e9a <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0xfe>
 8566e2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566e32:	8b 00                	mov    (%eax),%eax
 8566e34:	83 c0 0c             	add    $0xc,%eax
 8566e37:	8b 10                	mov    (%eax),%edx
 8566e39:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8566e3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566e40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566e43:	89 04 24             	mov    %eax,(%esp)
 8566e46:	ff d2                	call   *%edx
 8566e48:	d9 5d c8             	fstps  -0x38(%ebp)
 8566e4b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8566e4e:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8566e51:	89 54 24 08          	mov    %edx,0x8(%esp)
 8566e55:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8566e58:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566e5c:	89 04 24             	mov    %eax,(%esp)
 8566e5f:	e8 95 26 00 00       	call   85694f9 <_ZSt9make_pairIRfRP6IMatchESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8566e64:	83 ec 04             	sub    $0x4,%esp
 8566e67:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8566e6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566e6e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8566e71:	89 04 24             	mov    %eax,(%esp)
 8566e74:	e8 bf 26 00 00       	call   8569538 <_ZNSt4pairIKfP6IMatchEC1IfS2_EEOS_IT_T0_E>
 8566e79:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8566e7c:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8566e7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8566e83:	8b 55 10             	mov    0x10(%ebp),%edx
 8566e86:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566e8a:	89 04 24             	mov    %eax,(%esp)
 8566e8d:	e8 d6 26 00 00       	call   8569568 <_ZNSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEE6insertERKS6_>
 8566e92:	83 ec 04             	sub    $0x4,%esp
 8566e95:	eb 04                	jmp    8566e9b <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0xff>
 8566e97:	90                   	nop
 8566e98:	eb 01                	jmp    8566e9b <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0xff>
 8566e9a:	90                   	nop
 8566e9b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8566e9e:	89 04 24             	mov    %eax,(%esp)
 8566ea1:	e8 28 26 00 00       	call   85694ce <_ZNSt23_Rb_tree_const_iteratorIP6IMatchEppEv>
 8566ea6:	8b 55 08             	mov    0x8(%ebp),%edx
 8566ea9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8566eac:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566eb0:	89 04 24             	mov    %eax,(%esp)
 8566eb3:	e8 a6 22 00 00       	call   856915e <_ZNKSt3setIP6IMatchSt4lessIS1_ESaIS1_EE3endEv>
 8566eb8:	83 ec 04             	sub    $0x4,%esp
 8566ebb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8566ebe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566ec2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8566ec5:	89 04 24             	mov    %eax,(%esp)
 8566ec8:	e8 b7 22 00 00       	call   8569184 <_ZNKSt23_Rb_tree_const_iteratorIP6IMatchEneERKS2_>
 8566ecd:	84 c0                	test   %al,%al
 8566ecf:	0f 85 1e ff ff ff    	jne    8566df3 <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0x57>
 8566ed5:	eb 07                	jmp    8566ede <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0x142>
 8566ed7:	b8 00 00 00 00       	mov    $0x0,%eax
 8566edc:	eb 1b                	jmp    8566ef9 <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0x15d>
 8566ede:	8b 45 10             	mov    0x10(%ebp),%eax
 8566ee1:	89 04 24             	mov    %eax,(%esp)
 8566ee4:	e8 ab 26 00 00       	call   8569594 <_ZNKSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEE5emptyEv>
 8566ee9:	84 c0                	test   %al,%al
 8566eeb:	74 07                	je     8566ef4 <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0x158>
 8566eed:	b8 00 00 00 00       	mov    $0x0,%eax
 8566ef2:	eb 05                	jmp    8566ef9 <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE+0x15d>
 8566ef4:	b8 01 00 00 00       	mov    $0x1,%eax
 8566ef9:	c9                   	leave
 8566efa:	c3                   	ret
 8566efb:	90                   	nop

```

```c
// CWaitingRoomList::doMatch @ 0x8566d9c

/* CWaitingRoomList::doMatch(IMatch*, std::multimap<float, IMatch*, std::less<float>,
   std::allocator<std::pair<float const, IMatch*> > >&) */

undefined4 __thiscall
CWaitingRoomList::doMatch(CWaitingRoomList *this,IMatch *param_1,multimap *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  longdouble lVar4;
  IMatch *local_3c;
  IMatch *local_38;
  set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> local_34 [4];
  set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> local_30 [4];
  set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> local_2c [4];
  pair local_28 [4];
  pair<float_const,IMatch*> local_24 [8];
  float local_1c [2];
  undefined1 local_11;
  undefined4 local_10;
  
  cVar1 = std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::empty
                    ((set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> *)this);
  if (cVar1 == '\x01') {
    uVar3 = 0;
  }
  else {
    local_11 = 0;
    local_10 = 0;
    std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::end(local_30);
    std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::begin(local_34);
    while( true ) {
      std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::end(local_2c);
      cVar1 = std::_Rb_tree_const_iterator<IMatch*>::operator!=
                        ((_Rb_tree_const_iterator<IMatch*> *)local_34,
                         (_Rb_tree_const_iterator *)local_2c);
      if (cVar1 == '\0') break;
      piVar2 = (int *)std::_Rb_tree_const_iterator<IMatch*>::operator*
                                ((_Rb_tree_const_iterator<IMatch*> *)local_34);
      local_38 = (IMatch *)*piVar2;
      if ((local_38 != param_1) &&
         (cVar1 = (**(code **)(*(int *)param_1 + 0x78))(param_1,local_38), cVar1 == '\x01')) {
        lVar4 = (longdouble)(**(code **)(*(int *)param_1 + 0xc))(param_1,local_38);
        local_3c = (IMatch *)(float)lVar4;
        std::make_pair<float&,IMatch*&>(local_1c,&local_3c);
        std::pair<float_const,IMatch*>::pair<float,IMatch*>(local_24,(pair *)local_1c);
        std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
        ::insert(local_28);
      }
      std::_Rb_tree_const_iterator<IMatch*>::operator++
                ((_Rb_tree_const_iterator<IMatch*> *)local_34);
    }
    cVar1 = std::
            multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
            ::empty((multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
                     *)param_2);
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

