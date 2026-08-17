# CRidable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CheckAppearRidableObject

```asm
// === 082fe9c8 CRidable::CheckAppearRidableObject  [0x082fe9c8-0x82feb5d] ===
 82fe9c8:	55                   	push   %ebp
 82fe9c9:	89 e5                	mov    %esp,%ebp
 82fe9cb:	57                   	push   %edi
 82fe9cc:	56                   	push   %esi
 82fe9cd:	53                   	push   %ebx
 82fe9ce:	83 ec 3c             	sub    $0x3c,%esp
 82fe9d1:	8b 55 08             	mov    0x8(%ebp),%edx
 82fe9d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fe9d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fe9db:	89 04 24             	mov    %eax,(%esp)
 82fe9de:	e8 57 0d 01 00       	call   830f73a <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 82fe9e3:	83 ec 04             	sub    $0x4,%esp
 82fe9e6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82fe9ed:	8b 45 18             	mov    0x18(%ebp),%eax
 82fe9f0:	89 04 24             	mov    %eax,(%esp)
 82fe9f3:	e8 54 21 e1 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82fe9f8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82fe9fb:	8b 45 18             	mov    0x18(%ebp),%eax
 82fe9fe:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82fea01:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fea05:	89 04 24             	mov    %eax,(%esp)
 82fea08:	e8 13 cf dc ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82fea0d:	e9 f8 00 00 00       	jmp    82feb0a <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0x142>
 82fea12:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fea15:	89 04 24             	mov    %eax,(%esp)
 82fea18:	e8 7d 0d 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82fea1d:	8b 40 04             	mov    0x4(%eax),%eax
 82fea20:	3b 45 10             	cmp    0x10(%ebp),%eax
 82fea23:	75 1a                	jne    82fea3f <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0x77>
 82fea25:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fea28:	89 04 24             	mov    %eax,(%esp)
 82fea2b:	e8 6a 0d 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82fea30:	8b 40 08             	mov    0x8(%eax),%eax
 82fea33:	3b 45 14             	cmp    0x14(%ebp),%eax
 82fea36:	75 07                	jne    82fea3f <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0x77>
 82fea38:	b8 01 00 00 00       	mov    $0x1,%eax
 82fea3d:	eb 05                	jmp    82fea44 <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0x7c>
 82fea3f:	b8 00 00 00 00       	mov    $0x0,%eax
 82fea44:	84 c0                	test   %al,%al
 82fea46:	0f 84 b3 00 00 00    	je     82feaff <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0x137>
 82fea4c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fea4f:	89 04 24             	mov    %eax,(%esp)
 82fea52:	e8 43 0d 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82fea57:	8b 40 1c             	mov    0x1c(%eax),%eax
 82fea5a:	83 f8 04             	cmp    $0x4,%eax
 82fea5d:	74 1e                	je     82fea7d <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0xb5>
 82fea5f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fea62:	89 04 24             	mov    %eax,(%esp)
 82fea65:	e8 30 0d 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82fea6a:	8b 40 1c             	mov    0x1c(%eax),%eax
 82fea6d:	83 f8 03             	cmp    $0x3,%eax
 82fea70:	75 12                	jne    82fea84 <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0xbc>
 82fea72:	8b 45 08             	mov    0x8(%ebp),%eax
 82fea75:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 82fea79:	84 c0                	test   %al,%al
 82fea7b:	74 07                	je     82fea84 <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0xbc>
 82fea7d:	b8 01 00 00 00       	mov    $0x1,%eax
 82fea82:	eb 05                	jmp    82fea89 <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0xc1>
 82fea84:	b8 00 00 00 00       	mov    $0x0,%eax
 82fea89:	84 c0                	test   %al,%al
 82fea8b:	74 72                	je     82feaff <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0x137>
 82fea8d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fea90:	89 04 24             	mov    %eax,(%esp)
 82fea93:	e8 02 0d 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82fea98:	c7 40 1c 01 00 00 00 	movl   $0x1,0x1c(%eax)
 82fea9f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 82feaa3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82feaa6:	89 04 24             	mov    %eax,(%esp)
 82feaa9:	e8 ec 0c 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82feaae:	8b 40 18             	mov    0x18(%eax),%eax
 82feab1:	89 c7                	mov    %eax,%edi
 82feab3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82feab6:	89 04 24             	mov    %eax,(%esp)
 82feab9:	e8 dc 0c 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82feabe:	8b 70 0c             	mov    0xc(%eax),%esi
 82feac1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82feac4:	89 04 24             	mov    %eax,(%esp)
 82feac7:	e8 ce 0c 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82feacc:	8b 58 14             	mov    0x14(%eax),%ebx
 82feacf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fead2:	89 04 24             	mov    %eax,(%esp)
 82fead5:	e8 c0 0c 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82feada:	8b 40 10             	mov    0x10(%eax),%eax
 82feadd:	89 7c 24 14          	mov    %edi,0x14(%esp)
 82feae1:	89 74 24 10          	mov    %esi,0x10(%esp)
 82feae5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82feae9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82feaed:	8b 45 18             	mov    0x18(%ebp),%eax
 82feaf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82feaf4:	8b 45 08             	mov    0x8(%ebp),%eax
 82feaf7:	89 04 24             	mov    %eax,(%esp)
 82feafa:	e8 e3 01 00 00       	call   82fece2 <_ZN8CRidable22SendSpawnRidableObjectEP11PacketGuardiiii>
 82feaff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82feb02:	89 04 24             	mov    %eax,(%esp)
 82feb05:	e8 9e 0c 01 00       	call   830f7a8 <_ZNSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEppEv>
 82feb0a:	8b 55 08             	mov    0x8(%ebp),%edx
 82feb0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82feb10:	89 54 24 04          	mov    %edx,0x4(%esp)
 82feb14:	89 04 24             	mov    %eax,(%esp)
 82feb17:	e8 44 0c 01 00       	call   830f760 <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 82feb1c:	83 ec 04             	sub    $0x4,%esp
 82feb1f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82feb22:	89 44 24 04          	mov    %eax,0x4(%esp)
 82feb26:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82feb29:	89 04 24             	mov    %eax,(%esp)
 82feb2c:	e8 55 0c 01 00       	call   830f786 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEneERKS4_>
 82feb31:	84 c0                	test   %al,%al
 82feb33:	0f 85 d9 fe ff ff    	jne    82fea12 <_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard+0x4a>
 82feb39:	8b 45 18             	mov    0x18(%ebp),%eax
 82feb3c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82feb3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 82feb43:	8d 55 d8             	lea    -0x28(%ebp),%edx
 82feb46:	89 54 24 04          	mov    %edx,0x4(%esp)
 82feb4a:	89 04 24             	mov    %eax,(%esp)
 82feb4d:	e8 d6 1f e1 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 82feb52:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82feb55:	83 c4 00             	add    $0x0,%esp
 82feb58:	5b                   	pop    %ebx
 82feb59:	5e                   	pop    %esi
 82feb5a:	5f                   	pop    %edi
 82feb5b:	5d                   	pop    %ebp
 82feb5c:	c3                   	ret
 82feb5d:	90                   	nop

```

```c
// CRidable::CheckAppearRidableObject @ 0x82fe9c8

/* CRidable::CheckAppearRidableObject(CParty*, int, int, PacketGuard*) */

void __thiscall
CRidable::CheckAppearRidableObject
          (CRidable *this,CParty *param_1,int param_2,int param_3,PacketGuard *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_28 [4];
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_24 [4];
  int local_20;
  
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::begin(local_28);
  local_20 = 0;
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_20);
  do {
    std::
    map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
    ::end(local_24);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,&local_2c,local_20);
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
    if (*(int *)(iVar3 + 4) == param_2) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
      if (*(int *)(iVar3 + 8) != param_3) goto LAB_082fea3f;
      bVar1 = true;
    }
    else {
LAB_082fea3f:
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
      if (*(int *)(iVar3 + 0x1c) == 4) {
LAB_082fea7d:
        bVar1 = true;
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        if ((*(int *)(iVar3 + 0x1c) == 3) && (this[0x18] != (CRidable)0x0)) goto LAB_082fea7d;
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        *(undefined4 *)(iVar3 + 0x1c) = 1;
        local_20 = local_20 + 1;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        iVar3 = *(int *)(iVar3 + 0x18);
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        iVar4 = *(int *)(iVar4 + 0xc);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        iVar5 = *(int *)(iVar5 + 0x14);
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        SendSpawnRidableObject(this,param_4,*(int *)(iVar6 + 0x10),iVar5,iVar4,iVar3);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
  } while( true );
}

```

---

## Clear

```asm
// === 082fe6bc CRidable::Clear  [0x082fe6bc-0x82fe6cf] ===
 82fe6bc:	55                   	push   %ebp
 82fe6bd:	89 e5                	mov    %esp,%ebp
 82fe6bf:	83 ec 18             	sub    $0x18,%esp
 82fe6c2:	8b 45 08             	mov    0x8(%ebp),%eax
 82fe6c5:	89 04 24             	mov    %eax,(%esp)
 82fe6c8:	e8 0d 0d 01 00       	call   830f3da <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 82fe6cd:	c9                   	leave
 82fe6ce:	c3                   	ret
 82fe6cf:	90                   	nop

```

```c
// CRidable::Clear @ 0x82fe6bc

/* CRidable::Clear() */

void __thiscall CRidable::Clear(CRidable *this)

{
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::clear((map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
           *)this);
  return;
}

```

---

## GetObjectPos

```asm
// === 082fec2c CRidable::GetObjectPos  [0x082fec2c-0x82fece1] ===
 82fec2c:	55                   	push   %ebp
 82fec2d:	89 e5                	mov    %esp,%ebp
 82fec2f:	83 ec 48             	sub    $0x48,%esp
 82fec32:	8b 55 08             	mov    0x8(%ebp),%edx
 82fec35:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fec38:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fec3c:	89 04 24             	mov    %eax,(%esp)
 82fec3f:	e8 f6 0a 01 00       	call   830f73a <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 82fec44:	83 ec 04             	sub    $0x4,%esp
 82fec47:	eb 68                	jmp    82fecb1 <_ZN8CRidable12GetObjectPosERSt6vectorISt4pairIiiESaIS2_EE+0x85>
 82fec49:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fec4c:	89 04 24             	mov    %eax,(%esp)
 82fec4f:	e8 46 0b 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82fec54:	8b 50 04             	mov    0x4(%eax),%edx
 82fec57:	89 55 d0             	mov    %edx,-0x30(%ebp)
 82fec5a:	8b 50 08             	mov    0x8(%eax),%edx
 82fec5d:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 82fec60:	8b 50 0c             	mov    0xc(%eax),%edx
 82fec63:	89 55 d8             	mov    %edx,-0x28(%ebp)
 82fec66:	8b 50 10             	mov    0x10(%eax),%edx
 82fec69:	89 55 dc             	mov    %edx,-0x24(%ebp)
 82fec6c:	8b 50 14             	mov    0x14(%eax),%edx
 82fec6f:	89 55 e0             	mov    %edx,-0x20(%ebp)
 82fec72:	8b 40 18             	mov    0x18(%eax),%eax
 82fec75:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82fec78:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fec7b:	83 c0 04             	add    $0x4,%eax
 82fec7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 82fec82:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fec85:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fec89:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fec8c:	89 04 24             	mov    %eax,(%esp)
 82fec8f:	e8 5e 80 dc ff       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 82fec94:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fec97:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fec9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fec9e:	89 04 24             	mov    %eax,(%esp)
 82feca1:	e8 60 e9 dd ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 82feca6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82feca9:	89 04 24             	mov    %eax,(%esp)
 82fecac:	e8 f7 0a 01 00       	call   830f7a8 <_ZNSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEppEv>
 82fecb1:	8b 55 08             	mov    0x8(%ebp),%edx
 82fecb4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82fecb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fecbb:	89 04 24             	mov    %eax,(%esp)
 82fecbe:	e8 9d 0a 01 00       	call   830f760 <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 82fecc3:	83 ec 04             	sub    $0x4,%esp
 82fecc6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82fecc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82feccd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fecd0:	89 04 24             	mov    %eax,(%esp)
 82fecd3:	e8 ae 0a 01 00       	call   830f786 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEneERKS4_>
 82fecd8:	84 c0                	test   %al,%al
 82fecda:	0f 85 69 ff ff ff    	jne    82fec49 <_ZN8CRidable12GetObjectPosERSt6vectorISt4pairIiiESaIS2_EE+0x1d>
 82fece0:	c9                   	leave
 82fece1:	c3                   	ret

```

```c
// CRidable::GetObjectPos @ 0x82fec2c

/* CRidable::GetObjectPos(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
    */

void __thiscall CRidable::GetObjectPos(CRidable *this,vector *param_1)

{
  char cVar1;
  int iVar2;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_1c [4];
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_18 [4];
  pair<int,int> local_14 [16];
  
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_1c);
    local_34 = *(int *)(iVar2 + 4);
    local_30 = *(int *)(iVar2 + 8);
    local_2c = *(undefined4 *)(iVar2 + 0xc);
    local_28 = *(undefined4 *)(iVar2 + 0x10);
    local_24 = *(undefined4 *)(iVar2 + 0x14);
    local_20 = *(undefined4 *)(iVar2 + 0x18);
    std::pair<int,int>::pair<int&,int&>(local_14,&local_34,&local_30);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,local_14);
    std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_1c);
  }
  return;
}

```

---

## SendSpawnRidableObject

```asm
// === 082fece2 CRidable::SendSpawnRidableObject  [0x082fece2-0x82fed31] ===
 82fece2:	55                   	push   %ebp
 82fece3:	89 e5                	mov    %esp,%ebp
 82fece5:	83 ec 18             	sub    $0x18,%esp
 82fece8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82feceb:	8b 55 10             	mov    0x10(%ebp),%edx
 82fecee:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fecf2:	89 04 24             	mov    %eax,(%esp)
 82fecf5:	e8 42 cc dc ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82fecfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fecfd:	8b 55 14             	mov    0x14(%ebp),%edx
 82fed00:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fed04:	89 04 24             	mov    %eax,(%esp)
 82fed07:	e8 30 cc dc ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82fed0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fed0f:	8b 55 18             	mov    0x18(%ebp),%edx
 82fed12:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fed16:	89 04 24             	mov    %eax,(%esp)
 82fed19:	e8 1e cc dc ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82fed1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fed21:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82fed24:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fed28:	89 04 24             	mov    %eax,(%esp)
 82fed2b:	e8 0c cc dc ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82fed30:	c9                   	leave
 82fed31:	c3                   	ret

```

```c
// CRidable::SendSpawnRidableObject @ 0x82fece2

/* CRidable::SendSpawnRidableObject(PacketGuard*, int, int, int, int) */

void __thiscall
CRidable::SendSpawnRidableObject
          (CRidable *this,PacketGuard *param_1,int param_2,int param_3,int param_4,int param_5)

{
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_5);
  return;
}

```

---

## SetRidableObject

```asm
// === 082fe6d0 CRidable::SetRidableObject  [0x082fe6d0-0x82fe9c7] ===
 82fe6d0:	55                   	push   %ebp
 82fe6d1:	89 e5                	mov    %esp,%ebp
 82fe6d3:	56                   	push   %esi
 82fe6d4:	53                   	push   %ebx
 82fe6d5:	81 ec 00 01 00 00    	sub    $0x100,%esp
 82fe6db:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe6de:	8b 00                	mov    (%eax),%eax
 82fe6e0:	85 c0                	test   %eax,%eax
 82fe6e2:	0f 8e d4 02 00 00    	jle    82fe9bc <_ZN8CRidable16SetRidableObjectER13RidableScript+0x2ec>
 82fe6e8:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 82fe6ee:	89 04 24             	mov    %eax,(%esp)
 82fe6f1:	e8 c4 02 01 00       	call   830e9ba <_ZN20DungeonRidableObjectC1Ev>
 82fe6f6:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 82fe6fc:	89 04 24             	mov    %eax,(%esp)
 82fe6ff:	e8 64 fd 00 00       	call   830e468 <_ZN13RidableObjectC1Ev>
 82fe704:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe707:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 82fe70b:	8b 45 08             	mov    0x8(%ebp),%eax
 82fe70e:	88 50 18             	mov    %dl,0x18(%eax)
 82fe711:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe714:	8b 10                	mov    (%eax),%edx
 82fe716:	8b 45 08             	mov    0x8(%ebp),%eax
 82fe719:	89 50 1c             	mov    %edx,0x1c(%eax)
 82fe71c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe71f:	8b 18                	mov    (%eax),%ebx
 82fe721:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe724:	83 c0 08             	add    $0x8,%eax
 82fe727:	89 04 24             	mov    %eax,(%esp)
 82fe72a:	e8 bf 0c 01 00       	call   830f3ee <_ZNKSt6vectorI13RidableObjectSaIS0_EE4sizeEv>
 82fe72f:	39 c3                	cmp    %eax,%ebx
 82fe731:	0f 9d c0             	setge  %al
 82fe734:	84 c0                	test   %al,%al
 82fe736:	0f 84 e0 00 00 00    	je     82fe81c <_ZN8CRidable16SetRidableObjectER13RidableScript+0x14c>
 82fe73c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82fe743:	e9 b3 00 00 00       	jmp    82fe7fb <_ZN8CRidable16SetRidableObjectER13RidableScript+0x12b>
 82fe748:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82fe74b:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fe74e:	83 c2 08             	add    $0x8,%edx
 82fe751:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fe755:	89 14 24             	mov    %edx,(%esp)
 82fe758:	e8 b3 0c 01 00       	call   830f410 <_ZNSt6vectorI13RidableObjectSaIS0_EEixEj>
 82fe75d:	8b 10                	mov    (%eax),%edx
 82fe75f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fe763:	8b 50 04             	mov    0x4(%eax),%edx
 82fe766:	89 54 24 08          	mov    %edx,0x8(%esp)
 82fe76a:	8b 50 08             	mov    0x8(%eax),%edx
 82fe76d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82fe771:	8b 50 0c             	mov    0xc(%eax),%edx
 82fe774:	89 54 24 10          	mov    %edx,0x10(%esp)
 82fe778:	8b 50 10             	mov    0x10(%eax),%edx
 82fe77b:	89 54 24 14          	mov    %edx,0x14(%esp)
 82fe77f:	8b 40 14             	mov    0x14(%eax),%eax
 82fe782:	89 44 24 18          	mov    %eax,0x18(%esp)
 82fe786:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 82fe78c:	89 04 24             	mov    %eax,(%esp)
 82fe78f:	e8 44 02 01 00       	call   830e9d8 <_ZN20DungeonRidableObjectaSE13RidableObject>
 82fe794:	c7 85 54 ff ff ff 04 	movl   $0x4,-0xac(%ebp)
 82fe79b:	00 00 00 
 82fe79e:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 82fe7a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 82fe7a8:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 82fe7ae:	83 c0 08             	add    $0x8,%eax
 82fe7b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fe7b5:	8d 45 80             	lea    -0x80(%ebp),%eax
 82fe7b8:	89 04 24             	mov    %eax,(%esp)
 82fe7bb:	e8 6a 0c 01 00       	call   830f42a <_ZNSt4pairIi20DungeonRidableObjectEC1IRiRS0_EEOT_OT0_>
 82fe7c0:	8d 45 80             	lea    -0x80(%ebp),%eax
 82fe7c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fe7c7:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82fe7cd:	89 04 24             	mov    %eax,(%esp)
 82fe7d0:	e8 a7 0c 01 00       	call   830f47c <_ZNSt4pairIKi20DungeonRidableObjectEC1IiS1_EEOS_IT_T0_E>
 82fe7d5:	8b 55 08             	mov    0x8(%ebp),%edx
 82fe7d8:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 82fe7de:	8d 8d 60 ff ff ff    	lea    -0xa0(%ebp),%ecx
 82fe7e4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82fe7e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fe7ec:	89 04 24             	mov    %eax,(%esp)
 82fe7ef:	e8 dc 0c 01 00       	call   830f4d0 <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 82fe7f4:	83 ec 04             	sub    $0x4,%esp
 82fe7f7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82fe7fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe7fe:	83 c0 08             	add    $0x8,%eax
 82fe801:	89 04 24             	mov    %eax,(%esp)
 82fe804:	e8 e5 0b 01 00       	call   830f3ee <_ZNKSt6vectorI13RidableObjectSaIS0_EE4sizeEv>
 82fe809:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82fe80c:	0f 9f c0             	setg   %al
 82fe80f:	84 c0                	test   %al,%al
 82fe811:	0f 85 31 ff ff ff    	jne    82fe748 <_ZN8CRidable16SetRidableObjectER13RidableScript+0x78>
 82fe817:	e9 a1 01 00 00       	jmp    82fe9bd <_ZN8CRidable16SetRidableObjectER13RidableScript+0x2ed>
 82fe81c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82fe823:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe826:	83 c0 08             	add    $0x8,%eax
 82fe829:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fe82d:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 82fe833:	89 04 24             	mov    %eax,(%esp)
 82fe836:	e8 c1 0c 01 00       	call   830f4fc <_ZNSt6vectorI13RidableObjectSaIS0_EEC1ERKS2_>
 82fe83b:	e9 39 01 00 00       	jmp    82fe979 <_ZN8CRidable16SetRidableObjectER13RidableScript+0x2a9>
 82fe840:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82fe843:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 82fe849:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fe84d:	89 04 24             	mov    %eax,(%esp)
 82fe850:	e8 7f 0d 01 00       	call   830f5d4 <_ZNSt6vectorI13RidableObjectSaIS0_EE3endEv>
 82fe855:	83 ec 04             	sub    $0x4,%esp
 82fe858:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82fe85b:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 82fe861:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fe865:	89 04 24             	mov    %eax,(%esp)
 82fe868:	e8 43 0d 01 00       	call   830f5b0 <_ZNSt6vectorI13RidableObjectSaIS0_EE5beginEv>
 82fe86d:	83 ec 04             	sub    $0x4,%esp
 82fe870:	8b 45 a0             	mov    -0x60(%ebp),%eax
 82fe873:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fe877:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 82fe87a:	89 04 24             	mov    %eax,(%esp)
 82fe87d:	e8 78 0d 01 00       	call   830f5fa <_ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIP13RidableObjectSt6vectorIS2_SaIS2_EEEEEvT_S8_>
 82fe882:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 82fe888:	89 04 24             	mov    %eax,(%esp)
 82fe88b:	e8 32 0e 01 00       	call   830f6c2 <_ZNSt6vectorI13RidableObjectSaIS0_EE4backEv>
 82fe890:	8b 10                	mov    (%eax),%edx
 82fe892:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 82fe898:	8b 50 04             	mov    0x4(%eax),%edx
 82fe89b:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 82fe8a1:	8b 50 08             	mov    0x8(%eax),%edx
 82fe8a4:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 82fe8aa:	8b 50 0c             	mov    0xc(%eax),%edx
 82fe8ad:	89 95 30 ff ff ff    	mov    %edx,-0xd0(%ebp)
 82fe8b3:	8b 50 10             	mov    0x10(%eax),%edx
 82fe8b6:	89 95 34 ff ff ff    	mov    %edx,-0xcc(%ebp)
 82fe8bc:	8b 40 14             	mov    0x14(%eax),%eax
 82fe8bf:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 82fe8c5:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 82fe8cb:	89 04 24             	mov    %eax,(%esp)
 82fe8ce:	e8 3b 0e 01 00       	call   830f70e <_ZNSt6vectorI13RidableObjectSaIS0_EE8pop_backEv>
 82fe8d3:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 82fe8d9:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 82fe8df:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 82fe8e5:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 82fe8eb:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 82fe8f1:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 82fe8f7:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 82fe8fd:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 82fe903:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 82fe909:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 82fe90f:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 82fe915:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 82fe91b:	c7 85 54 ff ff ff 04 	movl   $0x4,-0xac(%ebp)
 82fe922:	00 00 00 
 82fe925:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 82fe92b:	89 44 24 08          	mov    %eax,0x8(%esp)
 82fe92f:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 82fe935:	83 c0 08             	add    $0x8,%eax
 82fe938:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fe93c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fe93f:	89 04 24             	mov    %eax,(%esp)
 82fe942:	e8 e3 0a 01 00       	call   830f42a <_ZNSt4pairIi20DungeonRidableObjectEC1IRiRS0_EEOT_OT0_>
 82fe947:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fe94a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fe94e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82fe951:	89 04 24             	mov    %eax,(%esp)
 82fe954:	e8 23 0b 01 00       	call   830f47c <_ZNSt4pairIKi20DungeonRidableObjectEC1IiS1_EEOS_IT_T0_E>
 82fe959:	8b 55 08             	mov    0x8(%ebp),%edx
 82fe95c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82fe95f:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 82fe962:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82fe966:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fe96a:	89 04 24             	mov    %eax,(%esp)
 82fe96d:	e8 5e 0b 01 00       	call   830f4d0 <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 82fe972:	83 ec 04             	sub    $0x4,%esp
 82fe975:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82fe979:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fe97c:	8b 00                	mov    (%eax),%eax
 82fe97e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 82fe981:	0f 9f c0             	setg   %al
 82fe984:	84 c0                	test   %al,%al
 82fe986:	0f 85 b4 fe ff ff    	jne    82fe840 <_ZN8CRidable16SetRidableObjectER13RidableScript+0x170>
 82fe98c:	eb 1e                	jmp    82fe9ac <_ZN8CRidable16SetRidableObjectER13RidableScript+0x2dc>
 82fe98e:	89 d3                	mov    %edx,%ebx
 82fe990:	89 c6                	mov    %eax,%esi
 82fe992:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 82fe998:	89 04 24             	mov    %eax,(%esp)
 82fe99b:	e8 3a 09 01 00       	call   830f2da <_ZNSt6vectorI13RidableObjectSaIS0_EED1Ev>
 82fe9a0:	89 f0                	mov    %esi,%eax
 82fe9a2:	89 da                	mov    %ebx,%edx
 82fe9a4:	89 04 24             	mov    %eax,(%esp)
 82fe9a7:	e8 a4 4d 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fe9ac:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 82fe9b2:	89 04 24             	mov    %eax,(%esp)
 82fe9b5:	e8 20 09 01 00       	call   830f2da <_ZNSt6vectorI13RidableObjectSaIS0_EED1Ev>
 82fe9ba:	eb 01                	jmp    82fe9bd <_ZN8CRidable16SetRidableObjectER13RidableScript+0x2ed>
 82fe9bc:	90                   	nop
 82fe9bd:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82fe9c0:	83 c4 00             	add    $0x0,%esp
 82fe9c3:	5b                   	pop    %ebx
 82fe9c4:	5e                   	pop    %esi
 82fe9c5:	5d                   	pop    %ebp
 82fe9c6:	c3                   	ret
 82fe9c7:	90                   	nop

```

```c
// CRidable::SetRidableObject @ 0x82fe6d0

/* CRidable::SetRidableObject(RidableScript&) */

void __thiscall CRidable::SetRidableObject(CRidable *this,RidableScript *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  vector<RidableObject,std::allocator<RidableObject>> local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  pair local_ac [8];
  pair<int_const,DungeonRidableObject> local_a4 [32];
  pair<int,DungeonRidableObject> local_84 [32];
  undefined4 local_64;
  undefined4 local_60;
  pair local_5c [8];
  pair<int_const,DungeonRidableObject> local_54 [32];
  pair<int,DungeonRidableObject> local_34 [32];
  int local_14;
  uint local_10;
  
  if (0 < *(int *)param_1) {
    DungeonRidableObject::DungeonRidableObject((DungeonRidableObject *)&local_c8);
    RidableObject::RidableObject((RidableObject *)&local_e0);
    this[0x18] = *(CRidable *)(param_1 + 4);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)param_1;
    iVar3 = *(int *)param_1;
    iVar1 = std::vector<RidableObject,std::allocator<RidableObject>>::size
                      ((vector<RidableObject,std::allocator<RidableObject>> *)(param_1 + 8));
    if (iVar3 < iVar1) {
      local_14 = 0;
      std::vector<RidableObject,std::allocator<RidableObject>>::vector
                (local_ec,(vector *)(param_1 + 8));
      for (; local_14 < *(int *)param_1; local_14 = local_14 + 1) {
                    /* try { // try from 082fe850 to 082fe971 has its CatchHandler @ 082fe98e */
        std::vector<RidableObject,std::allocator<RidableObject>>::end();
        std::vector<RidableObject,std::allocator<RidableObject>>::begin();
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<RidableObject*,std::vector<RidableObject,std::allocator<RidableObject>>>>
                  (local_60,local_64);
        puVar2 = (undefined4 *)std::vector<RidableObject,std::allocator<RidableObject>>::back();
        local_e0 = *puVar2;
        local_dc = puVar2[1];
        local_d8 = puVar2[2];
        local_d4 = puVar2[3];
        local_d0 = puVar2[4];
        local_cc = puVar2[5];
        std::vector<RidableObject,std::allocator<RidableObject>>::pop_back(local_ec);
        local_bc = local_d4;
        local_b8 = local_d0;
        local_c8 = local_e0;
        local_c4 = local_dc;
        local_c0 = local_d8;
        local_b4 = local_cc;
        local_b0 = 4;
        std::pair<int,DungeonRidableObject>::pair<int&,DungeonRidableObject&>
                  (local_34,&local_c0,(DungeonRidableObject *)&local_c8);
        std::pair<int_const,DungeonRidableObject>::pair<int,DungeonRidableObject>(local_54,local_34)
        ;
        std::
        map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
        ::insert(local_5c);
      }
      std::vector<RidableObject,std::allocator<RidableObject>>::~vector(local_ec);
    }
    else {
      local_10 = 0;
      while (iVar3 = std::vector<RidableObject,std::allocator<RidableObject>>::size
                               ((vector<RidableObject,std::allocator<RidableObject>> *)(param_1 + 8)
                               ), (int)local_10 < iVar3) {
        puVar2 = (undefined4 *)
                 std::vector<RidableObject,std::allocator<RidableObject>>::operator[]
                           ((vector<RidableObject,std::allocator<RidableObject>> *)(param_1 + 8),
                            local_10);
        DungeonRidableObject::operator=
                  ((DungeonRidableObject *)&local_c8,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4]
                   ,puVar2[5]);
        local_b0 = 4;
        std::pair<int,DungeonRidableObject>::pair<int&,DungeonRidableObject&>
                  (local_84,&local_c0,(DungeonRidableObject *)&local_c8);
        std::pair<int_const,DungeonRidableObject>::pair<int,DungeonRidableObject>(local_a4,local_84)
        ;
        std::
        map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
        ::insert(local_ac);
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}

```

---

## SetRidableObjectState

```asm
// === 082feb5e CRidable::SetRidableObjectState  [0x082feb5e-0x82fec2b] ===
 82feb5e:	55                   	push   %ebp
 82feb5f:	89 e5                	mov    %esp,%ebp
 82feb61:	83 ec 28             	sub    $0x28,%esp
 82feb64:	8b 55 08             	mov    0x8(%ebp),%edx
 82feb67:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82feb6a:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82feb6d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82feb71:	89 54 24 04          	mov    %edx,0x4(%esp)
 82feb75:	89 04 24             	mov    %eax,(%esp)
 82feb78:	e8 49 0c 01 00       	call   830f7c6 <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 82feb7d:	83 ec 04             	sub    $0x4,%esp
 82feb80:	8b 55 08             	mov    0x8(%ebp),%edx
 82feb83:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82feb86:	89 54 24 04          	mov    %edx,0x4(%esp)
 82feb8a:	89 04 24             	mov    %eax,(%esp)
 82feb8d:	e8 ce 0b 01 00       	call   830f760 <_ZNSt3mapIi20DungeonRidableObjectSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 82feb92:	83 ec 04             	sub    $0x4,%esp
 82feb95:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82feb98:	89 44 24 04          	mov    %eax,0x4(%esp)
 82feb9c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82feb9f:	89 04 24             	mov    %eax,(%esp)
 82feba2:	e8 df 0b 01 00       	call   830f786 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEneERKS4_>
 82feba7:	84 c0                	test   %al,%al
 82feba9:	74 7a                	je     82fec25 <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0xc7>
 82febab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82febae:	89 04 24             	mov    %eax,(%esp)
 82febb1:	e8 e4 0b 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82febb6:	8b 40 1c             	mov    0x1c(%eax),%eax
 82febb9:	85 c0                	test   %eax,%eax
 82febbb:	74 39                	je     82febf6 <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0x98>
 82febbd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82febc0:	89 04 24             	mov    %eax,(%esp)
 82febc3:	e8 d2 0b 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82febc8:	8b 40 1c             	mov    0x1c(%eax),%eax
 82febcb:	83 f8 04             	cmp    $0x4,%eax
 82febce:	74 26                	je     82febf6 <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0x98>
 82febd0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82febd3:	89 04 24             	mov    %eax,(%esp)
 82febd6:	e8 bf 0b 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82febdb:	8b 40 1c             	mov    0x1c(%eax),%eax
 82febde:	83 f8 03             	cmp    $0x3,%eax
 82febe1:	74 13                	je     82febf6 <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0x98>
 82febe3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82febe6:	89 04 24             	mov    %eax,(%esp)
 82febe9:	e8 ac 0b 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82febee:	8b 40 1c             	mov    0x1c(%eax),%eax
 82febf1:	83 f8 04             	cmp    $0x4,%eax
 82febf4:	7e 07                	jle    82febfd <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0x9f>
 82febf6:	b8 01 00 00 00       	mov    $0x1,%eax
 82febfb:	eb 05                	jmp    82fec02 <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0xa4>
 82febfd:	b8 00 00 00 00       	mov    $0x0,%eax
 82fec02:	84 c0                	test   %al,%al
 82fec04:	74 07                	je     82fec0d <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0xaf>
 82fec06:	b8 00 00 00 00       	mov    $0x0,%eax
 82fec0b:	eb 1d                	jmp    82fec2a <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0xcc>
 82fec0d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fec10:	89 04 24             	mov    %eax,(%esp)
 82fec13:	e8 82 0b 01 00       	call   830f79a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi20DungeonRidableObjectEEptEv>
 82fec18:	8b 55 10             	mov    0x10(%ebp),%edx
 82fec1b:	89 50 1c             	mov    %edx,0x1c(%eax)
 82fec1e:	b8 01 00 00 00       	mov    $0x1,%eax
 82fec23:	eb 05                	jmp    82fec2a <_ZN8CRidable21SetRidableObjectStateEi19eRidableObjectState+0xcc>
 82fec25:	b8 00 00 00 00       	mov    $0x0,%eax
 82fec2a:	c9                   	leave
 82fec2b:	c3                   	ret

```

```c
// CRidable::SetRidableObjectState @ 0x82feb5e

/* CRidable::SetRidableObjectState(int, eRidableObjectState) */

bool __thiscall
CRidable::SetRidableObjectState(undefined4 this,undefined4 param_1,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> local_14 [4];
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_10 [12];
  
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::find((int *)local_14);
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 == '\0') {
    return false;
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->(local_14);
  if ((((*(int *)(iVar3 + 0x1c) == 0) ||
       (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          (local_14), *(int *)(iVar3 + 0x1c) == 4)) ||
      (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                         (local_14), *(int *)(iVar3 + 0x1c) == 3)) ||
     (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                        (local_14), 4 < *(int *)(iVar3 + 0x1c))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->(local_14);
    *(undefined4 *)(iVar3 + 0x1c) = param_3;
  }
  return !bVar1;
}

```

