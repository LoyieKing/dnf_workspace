# Dispatcher_CompoundEmblem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## SendCreateEmblemInfo

```asm
// === 08221dde Dispatcher_CompoundEmblem::SendCreateEmblemInfo  [0x08221dde-0x8221f3b] ===
 8221dde:	55                   	push   %ebp
 8221ddf:	89 e5                	mov    %esp,%ebp
 8221de1:	53                   	push   %ebx
 8221de2:	83 ec 74             	sub    $0x74,%esp
 8221de5:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 8221de8:	89 04 24             	mov    %eax,(%esp)
 8221deb:	e8 ec ed ee ff       	call   8110bdc <_ZN30Packet_Emblem_Create_StatisticC1Ev>
 8221df0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221df3:	89 04 24             	mov    %eax,(%esp)
 8221df6:	e8 19 ba eb ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8221dfb:	83 f8 05             	cmp    $0x5,%eax
 8221dfe:	0f 97 c0             	seta   %al
 8221e01:	84 c0                	test   %al,%al
 8221e03:	0f 85 26 01 00 00    	jne    8221f2f <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x151>
 8221e09:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8221e0c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8221e0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8221e13:	89 04 24             	mov    %eax,(%esp)
 8221e16:	e8 05 f4 ee ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8221e1b:	83 ec 04             	sub    $0x4,%esp
 8221e1e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8221e21:	8b 55 0c             	mov    0xc(%ebp),%edx
 8221e24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8221e28:	89 04 24             	mov    %eax,(%esp)
 8221e2b:	e8 1c f4 ee ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8221e30:	83 ec 04             	sub    $0x4,%esp
 8221e33:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8221e3a:	e9 88 00 00 00       	jmp    8221ec7 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0xe9>
 8221e3f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8221e42:	89 04 24             	mov    %eax,(%esp)
 8221e45:	e8 c8 1a f7 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8221e4a:	8b 00                	mov    (%eax),%eax
 8221e4c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8221e4f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8221e52:	89 04 24             	mov    %eax,(%esp)
 8221e55:	e8 b8 1a f7 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8221e5a:	8b 40 04             	mov    0x4(%eax),%eax
 8221e5d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8221e60:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8221e63:	e8 33 a3 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8221e68:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8221e6c:	89 04 24             	mov    %eax,(%esp)
 8221e6f:	e8 be db 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8221e74:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8221e77:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8221e7b:	0f 84 b1 00 00 00    	je     8221f32 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x154>
 8221e81:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8221e84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8221e87:	89 04 24             	mov    %eax,(%esp)
 8221e8a:	e8 c5 ed ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221e8f:	89 44 9d b4          	mov    %eax,-0x4c(%ebp,%ebx,4)
 8221e93:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8221e96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8221e99:	83 c2 08             	add    $0x8,%edx
 8221e9c:	89 44 95 a8          	mov    %eax,-0x58(%ebp,%edx,4)
 8221ea0:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8221ea4:	83 7d e8 05          	cmpl   $0x5,-0x18(%ebp)
 8221ea8:	7f 39                	jg     8221ee3 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x105>
 8221eaa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8221ead:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8221eb4:	00 
 8221eb5:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8221eb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8221ebc:	89 04 24             	mov    %eax,(%esp)
 8221ebf:	e8 ae 15 f7 ff       	call   8193472 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 8221ec4:	83 ec 04             	sub    $0x4,%esp
 8221ec7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8221eca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221ece:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8221ed1:	89 04 24             	mov    %eax,(%esp)
 8221ed4:	e8 0c 1a f7 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8221ed9:	84 c0                	test   %al,%al
 8221edb:	0f 85 5e ff ff ff    	jne    8221e3f <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x61>
 8221ee1:	eb 01                	jmp    8221ee4 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x106>
 8221ee3:	90                   	nop
 8221ee4:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8221ee7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221eea:	89 04 24             	mov    %eax,(%esp)
 8221eed:	e8 22 b9 eb ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8221ef2:	39 c3                	cmp    %eax,%ebx
 8221ef4:	0f 95 c0             	setne  %al
 8221ef7:	84 c0                	test   %al,%al
 8221ef9:	75 3a                	jne    8221f35 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x157>
 8221efb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8221efe:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8221f01:	8d 5d a6             	lea    -0x5a(%ebp),%ebx
 8221f04:	a1 30 be 40 09       	mov    0x940be30,%eax
 8221f09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8221f10:	00 
 8221f11:	89 04 24             	mov    %eax,(%esp)
 8221f14:	e8 df fd ee ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8221f19:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 8221f20:	00 
 8221f21:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8221f25:	89 04 24             	mov    %eax,(%esp)
 8221f28:	e8 17 01 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 8221f2d:	eb 07                	jmp    8221f36 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x158>
 8221f2f:	90                   	nop
 8221f30:	eb 04                	jmp    8221f36 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x158>
 8221f32:	90                   	nop
 8221f33:	eb 01                	jmp    8221f36 <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x158>
 8221f35:	90                   	nop
 8221f36:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8221f39:	c9                   	leave
 8221f3a:	c3                   	ret
 8221f3b:	90                   	nop

```

```c
// Dispatcher_CompoundEmblem::SendCreateEmblemInfo @ 0x8221dde

/* Dispatcher_CompoundEmblem::SendCreateEmblemInfo(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void __thiscall
Dispatcher_CompoundEmblem::SendCreateEmblemInfo(Dispatcher_CompoundEmblem *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  CDataManager *this_00;
  int iVar5;
  CStatisticServerProxy *this_01;
  Packet_Emblem_Create_Statistic local_5e [2];
  int aiStack_5c [13];
  __normal_iterator local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  Packet_Emblem_Create_Statistic::Packet_Emblem_Create_Statistic(local_5e);
  uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar3 < 6) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    local_1c = 0;
    while (bVar2 = __gnu_cxx::operator!=(local_24,local_28), bVar2) {
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_24);
      local_18 = *piVar4;
      iVar5 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_24);
      iVar1 = local_18;
      local_14 = *(int *)(iVar5 + 4);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
      iVar1 = local_1c;
      if (local_10 == (CItem *)0x0) {
        return;
      }
      iVar5 = CItem::get_grade(local_10);
      aiStack_5c[iVar1 + 3] = iVar5;
      aiStack_5c[local_1c + 8] = local_14;
      local_1c = local_1c + 1;
      if (5 < local_1c) break;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_20,(int)local_24);
    }
    iVar1 = local_1c;
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar1 == iVar5) {
      aiStack_5c[2] = local_1c;
      this_01 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_01,(char *)local_5e,0x36);
    }
  }
  return;
}

```

---

## _selectJewelTypeIndex

```asm
// === 08220a60 Dispatcher_CompoundEmblem::_selectJewelTypeIndex  [0x08220a60-0x8220bb1] ===
 8220a60:	55                   	push   %ebp
 8220a61:	89 e5                	mov    %esp,%ebp
 8220a63:	83 ec 78             	sub    $0x78,%esp
 8220a66:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8220a6d:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8220a74:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8220a7b:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8220a82:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8220a89:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8220a90:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8220a97:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8220a9e:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8220aa5:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8220aac:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8220ab3:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8220aba:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8220ac1:	eb 42                	jmp    8220b05 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0xa5>
 8220ac3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8220ac6:	01 c0                	add    %eax,%eax
 8220ac8:	03 45 10             	add    0x10(%ebp),%eax
 8220acb:	0f b7 00             	movzwl (%eax),%eax
 8220ace:	66 85 c0             	test   %ax,%ax
 8220ad1:	74 2d                	je     8220b00 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0xa0>
 8220ad3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8220ad6:	01 c0                	add    %eax,%eax
 8220ad8:	03 45 10             	add    0x10(%ebp),%eax
 8220adb:	0f b7 00             	movzwl (%eax),%eax
 8220ade:	0f b7 c0             	movzwl %ax,%eax
 8220ae1:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8220ae4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8220ae8:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8220aeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8220aef:	89 04 24             	mov    %eax,(%esp)
 8220af2:	e8 ee 9e 00 00       	call   822a9e5 <_Z39getAvatarEmblemTypeIdxForCompountEmblemtPiRi>
 8220af7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8220afa:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 8220afe:	eb 01                	jmp    8220b01 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0xa1>
 8220b00:	90                   	nop
 8220b01:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8220b05:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8220b08:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8220b0b:	0f 92 c0             	setb   %al
 8220b0e:	84 c0                	test   %al,%al
 8220b10:	75 b1                	jne    8220ac3 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0x63>
 8220b12:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8220b15:	85 c0                	test   %eax,%eax
 8220b17:	75 0a                	jne    8220b23 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0xc3>
 8220b19:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8220b1e:	e9 8c 00 00 00       	jmp    8220baf <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0x14f>
 8220b23:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8220b2a:	eb 3c                	jmp    8220b68 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0x108>
 8220b2c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8220b2f:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8220b32:	b8 10 27 00 00       	mov    $0x2710,%eax
 8220b37:	89 c2                	mov    %eax,%edx
 8220b39:	c1 fa 1f             	sar    $0x1f,%edx
 8220b3c:	f7 7d a4             	idivl  -0x5c(%ebp)
 8220b3f:	89 c2                	mov    %eax,%edx
 8220b41:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8220b44:	8b 44 85 c8          	mov    -0x38(%ebp,%eax,4),%eax
 8220b48:	0f af c2             	imul   %edx,%eax
 8220b4b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8220b4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8220b51:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8220b54:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8220b57:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8220b5a:	89 54 85 b4          	mov    %edx,-0x4c(%ebp,%eax,4)
 8220b5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8220b61:	01 45 dc             	add    %eax,-0x24(%ebp)
 8220b64:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8220b68:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 8220b6c:	0f 9e c0             	setle  %al
 8220b6f:	84 c0                	test   %al,%al
 8220b71:	75 b9                	jne    8220b2c <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0xcc>
 8220b73:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8220b76:	89 04 24             	mov    %eax,(%esp)
 8220b79:	e8 09 10 49 00       	call   86b1b87 <_Z12get_rand_inti>
 8220b7e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8220b81:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8220b88:	eb 15                	jmp    8220b9f <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0x13f>
 8220b8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8220b8d:	8b 44 85 b4          	mov    -0x4c(%ebp,%eax,4),%eax
 8220b91:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8220b94:	7e 05                	jle    8220b9b <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0x13b>
 8220b96:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8220b99:	eb 14                	jmp    8220baf <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0x14f>
 8220b9b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8220b9f:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8220ba3:	0f 9e c0             	setle  %al
 8220ba6:	84 c0                	test   %al,%al
 8220ba8:	75 e0                	jne    8220b8a <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt+0x12a>
 8220baa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8220baf:	c9                   	leave
 8220bb0:	c3                   	ret
 8220bb1:	90                   	nop

```

```c
// Dispatcher_CompoundEmblem::_selectJewelTypeIndex @ 0x8220a60

/* Dispatcher_CompoundEmblem::_selectJewelTypeIndex(unsigned int, unsigned short const*) const */

int __thiscall
Dispatcher_CompoundEmblem::_selectJewelTypeIndex
          (Dispatcher_CompoundEmblem *this,uint param_1,ushort *param_2)

{
  int iVar1;
  int local_54 [13];
  uint local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_54[6] = 0;
  local_54[7] = 0;
  local_54[8] = 0;
  local_54[9] = 0;
  local_54[10] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[5] = 0;
  local_54[0] = 0;
  local_54[0xb] = 0;
  for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
    if (param_2[local_20] != 0) {
      local_1c = getAvatarEmblemTypeIdxForCompountEmblem(param_2[local_20],local_54 + 6,local_54);
    }
  }
  if (local_54[0] != 0) {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      local_14 = local_54[local_18 + 6] * (int)(10000 / (longlong)local_54[0]);
      local_54[local_18 + 1] = local_14 + local_54[0xb];
      local_54[0xb] = local_54[0xb] + local_14;
    }
    iVar1 = get_rand_int(local_54[0xb]);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (iVar1 < local_54[local_10 + 1]) {
        return local_10;
      }
    }
  }
  return -1;
}

```

---

## dispatch_sig

```asm
// === 08220bb2 Dispatcher_CompoundEmblem::dispatch_sig  [0x08220bb2-0x8221ddd] ===
 8220bb2:	55                   	push   %ebp
 8220bb3:	89 e5                	mov    %esp,%ebp
 8220bb5:	56                   	push   %esi
 8220bb6:	53                   	push   %ebx
 8220bb7:	81 ec e0 01 00 00    	sub    $0x1e0,%esp
 8220bbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220bc0:	89 04 24             	mov    %eax,(%esp)
 8220bc3:	e8 c4 97 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8220bc8:	83 f8 03             	cmp    $0x3,%eax
 8220bcb:	0f 95 c0             	setne  %al
 8220bce:	84 c0                	test   %al,%al
 8220bd0:	74 0a                	je     8220bdc <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 8220bd2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8220bd7:	e9 f6 11 00 00       	jmp    8221dd2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1220>
 8220bdc:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8220bdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220be3:	8b 45 10             	mov    0x10(%ebp),%eax
 8220be6:	89 04 24             	mov    %eax,(%esp)
 8220be9:	e8 fa aa 00 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 8220bee:	83 f0 01             	xor    $0x1,%eax
 8220bf1:	84 c0                	test   %al,%al
 8220bf3:	74 2b                	je     8220c20 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x6e>
 8220bf5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8220bfc:	00 
 8220bfd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220c04:	00 
 8220c05:	c7 44 24 04 60 ce bc 	movl   $0x8bcce60,0x4(%esp)
 8220c0c:	08 
 8220c0d:	c7 04 24 8f da 00 00 	movl   $0xda8f,(%esp)
 8220c14:	e8 be fc 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8220c19:	89 c3                	mov    %eax,%ebx
 8220c1b:	e9 b2 11 00 00       	jmp    8221dd2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1220>
 8220c20:	8d 45 9e             	lea    -0x62(%ebp),%eax
 8220c23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220c27:	8b 45 10             	mov    0x10(%ebp),%eax
 8220c2a:	89 04 24             	mov    %eax,(%esp)
 8220c2d:	e8 7e c4 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8220c32:	83 f0 01             	xor    $0x1,%eax
 8220c35:	84 c0                	test   %al,%al
 8220c37:	74 2b                	je     8220c64 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 8220c39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8220c40:	00 
 8220c41:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220c48:	00 
 8220c49:	c7 44 24 04 60 ce bc 	movl   $0x8bcce60,0x4(%esp)
 8220c50:	08 
 8220c51:	c7 04 24 90 da 00 00 	movl   $0xda90,(%esp)
 8220c58:	e8 7a fc 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8220c5d:	89 c3                	mov    %eax,%ebx
 8220c5f:	e9 6e 11 00 00       	jmp    8221dd2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1220>
 8220c64:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8220c67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220c6b:	8b 45 10             	mov    0x10(%ebp),%eax
 8220c6e:	89 04 24             	mov    %eax,(%esp)
 8220c71:	e8 72 aa 00 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 8220c76:	83 f0 01             	xor    $0x1,%eax
 8220c79:	84 c0                	test   %al,%al
 8220c7b:	74 2b                	je     8220ca8 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xf6>
 8220c7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8220c84:	00 
 8220c85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220c8c:	00 
 8220c8d:	c7 44 24 04 60 ce bc 	movl   $0x8bcce60,0x4(%esp)
 8220c94:	08 
 8220c95:	c7 04 24 91 da 00 00 	movl   $0xda91,(%esp)
 8220c9c:	e8 36 fc 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8220ca1:	89 c3                	mov    %eax,%ebx
 8220ca3:	e9 2a 11 00 00       	jmp    8221dd2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1220>
 8220ca8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8220cab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220caf:	8b 45 10             	mov    0x10(%ebp),%eax
 8220cb2:	89 04 24             	mov    %eax,(%esp)
 8220cb5:	e8 f6 c3 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8220cba:	83 f0 01             	xor    $0x1,%eax
 8220cbd:	84 c0                	test   %al,%al
 8220cbf:	74 2b                	je     8220cec <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x13a>
 8220cc1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8220cc8:	00 
 8220cc9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220cd0:	00 
 8220cd1:	c7 44 24 04 60 ce bc 	movl   $0x8bcce60,0x4(%esp)
 8220cd8:	08 
 8220cd9:	c7 04 24 92 da 00 00 	movl   $0xda92,(%esp)
 8220ce0:	e8 f2 fb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8220ce5:	89 c3                	mov    %eax,%ebx
 8220ce7:	e9 e6 10 00 00       	jmp    8221dd2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1220>
 8220cec:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 8220cf2:	89 04 24             	mov    %eax,(%esp)
 8220cf5:	e8 5a ab ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8220cfa:	8d 85 ea fe ff ff    	lea    -0x116(%ebp),%eax
 8220d00:	89 04 24             	mov    %eax,(%esp)
 8220d03:	e8 4c ab ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8220d08:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8220d0b:	89 c3                	mov    %eax,%ebx
 8220d0d:	e8 89 b4 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8220d12:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8220d16:	89 04 24             	mov    %eax,(%esp)
 8220d19:	e8 14 ed 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8220d1e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8220d21:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8220d24:	89 c3                	mov    %eax,%ebx
 8220d26:	e8 70 b4 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8220d2b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8220d2f:	89 04 24             	mov    %eax,(%esp)
 8220d32:	e8 fb ec 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8220d37:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8220d3a:	c7 45 d0 ff ff ff ff 	movl   $0xffffffff,-0x30(%ebp)
 8220d41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220d44:	89 04 24             	mov    %eax,(%esp)
 8220d47:	e8 5c 03 46 00       	call   86810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>
 8220d4c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8220d4f:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8220d53:	74 2b                	je     8220d80 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1ce>
 8220d55:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8220d5c:	e8 9f 4a 50 00       	call   8725800 <__cxa_allocate_exception>
 8220d61:	89 c2                	mov    %eax,%edx
 8220d63:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8220d66:	89 0a                	mov    %ecx,(%edx)
 8220d68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220d6f:	00 
 8220d70:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220d77:	08 
 8220d78:	89 04 24             	mov    %eax,(%esp)
 8220d7b:	e8 d0 3e 50 00       	call   8724c50 <__cxa_throw>
 8220d80:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 8220d84:	74 06                	je     8220d8c <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1da>
 8220d86:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8220d8a:	75 2c                	jne    8220db8 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x206>
 8220d8c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8220d93:	e8 68 4a 50 00       	call   8725800 <__cxa_allocate_exception>
 8220d98:	89 c2                	mov    %eax,%edx
 8220d9a:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8220da0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220da7:	00 
 8220da8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220daf:	08 
 8220db0:	89 04 24             	mov    %eax,(%esp)
 8220db3:	e8 98 3e 50 00       	call   8724c50 <__cxa_throw>
 8220db8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8220dbb:	8b 00                	mov    (%eax),%eax
 8220dbd:	83 c0 0c             	add    $0xc,%eax
 8220dc0:	8b 10                	mov    (%eax),%edx
 8220dc2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8220dc5:	89 04 24             	mov    %eax,(%esp)
 8220dc8:	ff d2                	call   *%edx
 8220dca:	83 f8 14             	cmp    $0x14,%eax
 8220dcd:	75 17                	jne    8220de6 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x234>
 8220dcf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8220dd2:	8b 00                	mov    (%eax),%eax
 8220dd4:	83 c0 0c             	add    $0xc,%eax
 8220dd7:	8b 10                	mov    (%eax),%edx
 8220dd9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8220ddc:	89 04 24             	mov    %eax,(%esp)
 8220ddf:	ff d2                	call   *%edx
 8220de1:	83 f8 14             	cmp    $0x14,%eax
 8220de4:	74 07                	je     8220ded <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x23b>
 8220de6:	b8 01 00 00 00       	mov    $0x1,%eax
 8220deb:	eb 05                	jmp    8220df2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x240>
 8220ded:	b8 00 00 00 00       	mov    $0x0,%eax
 8220df2:	84 c0                	test   %al,%al
 8220df4:	74 2c                	je     8220e22 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x270>
 8220df6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8220dfd:	e8 fe 49 50 00       	call   8725800 <__cxa_allocate_exception>
 8220e02:	89 c2                	mov    %eax,%edx
 8220e04:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 8220e0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220e11:	00 
 8220e12:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220e19:	08 
 8220e1a:	89 04 24             	mov    %eax,(%esp)
 8220e1d:	e8 2e 3e 50 00       	call   8724c50 <__cxa_throw>
 8220e22:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 8220e26:	0f b7 d8             	movzwl %ax,%ebx
 8220e29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220e2c:	89 04 24             	mov    %eax,(%esp)
 8220e2f:	e8 4a 94 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8220e34:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 8220e3a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8220e3e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8220e45:	00 
 8220e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220e4a:	89 14 24             	mov    %edx,(%esp)
 8220e4d:	e8 c6 aa 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8220e52:	83 ec 04             	sub    $0x4,%esp
 8220e55:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8220e5b:	89 85 27 ff ff ff    	mov    %eax,-0xd9(%ebp)
 8220e61:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8220e67:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 8220e6d:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8220e73:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 8220e79:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8220e7f:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 8220e85:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 8220e8b:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 8220e91:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 8220e97:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 8220e9d:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 8220ea3:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 8220ea9:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 8220eaf:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 8220eb5:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 8220ebb:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 8220ec1:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 8220ec7:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 8220ecd:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 8220ed3:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 8220ed9:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 8220edf:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 8220ee5:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8220eeb:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 8220ef1:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8220ef7:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 8220efd:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8220f03:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 8220f09:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 8220f10:	88 85 63 ff ff ff    	mov    %al,-0x9d(%ebp)
 8220f16:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 8220f1c:	89 04 24             	mov    %eax,(%esp)
 8220f1f:	e8 42 de ef ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8220f24:	84 c0                	test   %al,%al
 8220f26:	74 2c                	je     8220f54 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x3a2>
 8220f28:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8220f2f:	e8 cc 48 50 00       	call   8725800 <__cxa_allocate_exception>
 8220f34:	89 c2                	mov    %eax,%edx
 8220f36:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8220f3c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220f43:	00 
 8220f44:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220f4b:	08 
 8220f4c:	89 04 24             	mov    %eax,(%esp)
 8220f4f:	e8 fc 3c 50 00       	call   8724c50 <__cxa_throw>
 8220f54:	8b 95 29 ff ff ff    	mov    -0xd7(%ebp),%edx
 8220f5a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8220f5d:	39 c2                	cmp    %eax,%edx
 8220f5f:	74 2c                	je     8220f8d <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x3db>
 8220f61:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8220f68:	e8 93 48 50 00       	call   8725800 <__cxa_allocate_exception>
 8220f6d:	89 c2                	mov    %eax,%edx
 8220f6f:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8220f75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220f7c:	00 
 8220f7d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220f84:	08 
 8220f85:	89 04 24             	mov    %eax,(%esp)
 8220f88:	e8 c3 3c 50 00       	call   8724c50 <__cxa_throw>
 8220f8d:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 8220f91:	0f b7 d8             	movzwl %ax,%ebx
 8220f94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220f97:	89 04 24             	mov    %eax,(%esp)
 8220f9a:	e8 df 92 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8220f9f:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 8220fa5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8220fa9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8220fb0:	00 
 8220fb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220fb5:	89 14 24             	mov    %edx,(%esp)
 8220fb8:	e8 5b a9 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8220fbd:	83 ec 04             	sub    $0x4,%esp
 8220fc0:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8220fc6:	89 85 ea fe ff ff    	mov    %eax,-0x116(%ebp)
 8220fcc:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8220fd2:	89 85 ee fe ff ff    	mov    %eax,-0x112(%ebp)
 8220fd8:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8220fde:	89 85 f2 fe ff ff    	mov    %eax,-0x10e(%ebp)
 8220fe4:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8220fea:	89 85 f6 fe ff ff    	mov    %eax,-0x10a(%ebp)
 8220ff0:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 8220ff6:	89 85 fa fe ff ff    	mov    %eax,-0x106(%ebp)
 8220ffc:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 8221002:	89 85 fe fe ff ff    	mov    %eax,-0x102(%ebp)
 8221008:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 822100e:	89 85 02 ff ff ff    	mov    %eax,-0xfe(%ebp)
 8221014:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 822101a:	89 85 06 ff ff ff    	mov    %eax,-0xfa(%ebp)
 8221020:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 8221026:	89 85 0a ff ff ff    	mov    %eax,-0xf6(%ebp)
 822102c:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 8221032:	89 85 0e ff ff ff    	mov    %eax,-0xf2(%ebp)
 8221038:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 822103e:	89 85 12 ff ff ff    	mov    %eax,-0xee(%ebp)
 8221044:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 822104a:	89 85 16 ff ff ff    	mov    %eax,-0xea(%ebp)
 8221050:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8221056:	89 85 1a ff ff ff    	mov    %eax,-0xe6(%ebp)
 822105c:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8221062:	89 85 1e ff ff ff    	mov    %eax,-0xe2(%ebp)
 8221068:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 822106e:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 8221074:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 822107b:	88 85 26 ff ff ff    	mov    %al,-0xda(%ebp)
 8221081:	8d 85 ea fe ff ff    	lea    -0x116(%ebp),%eax
 8221087:	89 04 24             	mov    %eax,(%esp)
 822108a:	e8 d7 dc ef ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 822108f:	84 c0                	test   %al,%al
 8221091:	74 2c                	je     82210bf <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x50d>
 8221093:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822109a:	e8 61 47 50 00       	call   8725800 <__cxa_allocate_exception>
 822109f:	89 c2                	mov    %eax,%edx
 82210a1:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 82210a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82210ae:	00 
 82210af:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82210b6:	08 
 82210b7:	89 04 24             	mov    %eax,(%esp)
 82210ba:	e8 91 3b 50 00       	call   8724c50 <__cxa_throw>
 82210bf:	8b 95 ec fe ff ff    	mov    -0x114(%ebp),%edx
 82210c5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 82210c8:	39 c2                	cmp    %eax,%edx
 82210ca:	74 2c                	je     82210f8 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x546>
 82210cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82210d3:	e8 28 47 50 00       	call   8725800 <__cxa_allocate_exception>
 82210d8:	89 c2                	mov    %eax,%edx
 82210da:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 82210e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82210e7:	00 
 82210e8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82210ef:	08 
 82210f0:	89 04 24             	mov    %eax,(%esp)
 82210f3:	e8 58 3b 50 00       	call   8724c50 <__cxa_throw>
 82210f8:	0f b7 55 9e          	movzwl -0x62(%ebp),%edx
 82210fc:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 8221100:	66 39 c2             	cmp    %ax,%dx
 8221103:	75 2a                	jne    822112f <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x57d>
 8221105:	8b 95 29 ff ff ff    	mov    -0xd7(%ebp),%edx
 822110b:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 8221111:	39 c2                	cmp    %eax,%edx
 8221113:	75 1a                	jne    822112f <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x57d>
 8221115:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 822111b:	89 04 24             	mov    %eax,(%esp)
 822111e:	e8 17 67 ed ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8221123:	83 f8 01             	cmp    $0x1,%eax
 8221126:	7f 07                	jg     822112f <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x57d>
 8221128:	b8 01 00 00 00       	mov    $0x1,%eax
 822112d:	eb 05                	jmp    8221134 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x582>
 822112f:	b8 00 00 00 00       	mov    $0x0,%eax
 8221134:	84 c0                	test   %al,%al
 8221136:	74 2c                	je     8221164 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x5b2>
 8221138:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822113f:	e8 bc 46 50 00       	call   8725800 <__cxa_allocate_exception>
 8221144:	89 c2                	mov    %eax,%edx
 8221146:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 822114c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8221153:	00 
 8221154:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 822115b:	08 
 822115c:	89 04 24             	mov    %eax,(%esp)
 822115f:	e8 ec 3a 50 00       	call   8724c50 <__cxa_throw>
 8221164:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 8221168:	0f b7 c0             	movzwl %ax,%eax
 822116b:	89 44 24 08          	mov    %eax,0x8(%esp)
 822116f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8221176:	00 
 8221177:	8b 45 0c             	mov    0xc(%ebp),%eax
 822117a:	89 04 24             	mov    %eax,(%esp)
 822117d:	e8 c0 57 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8221182:	84 c0                	test   %al,%al
 8221184:	74 2c                	je     82211b2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x600>
 8221186:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822118d:	e8 6e 46 50 00       	call   8725800 <__cxa_allocate_exception>
 8221192:	89 c2                	mov    %eax,%edx
 8221194:	c7 02 d5 00 00 00    	movl   $0xd5,(%edx)
 822119a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82211a1:	00 
 82211a2:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82211a9:	08 
 82211aa:	89 04 24             	mov    %eax,(%esp)
 82211ad:	e8 9e 3a 50 00       	call   8724c50 <__cxa_throw>
 82211b2:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 82211b6:	0f b7 c0             	movzwl %ax,%eax
 82211b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82211bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82211c4:	00 
 82211c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82211c8:	89 04 24             	mov    %eax,(%esp)
 82211cb:	e8 72 57 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 82211d0:	84 c0                	test   %al,%al
 82211d2:	74 2c                	je     8221200 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x64e>
 82211d4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82211db:	e8 20 46 50 00       	call   8725800 <__cxa_allocate_exception>
 82211e0:	89 c2                	mov    %eax,%edx
 82211e2:	c7 02 d5 00 00 00    	movl   $0xd5,(%edx)
 82211e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82211ef:	00 
 82211f0:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82211f7:	08 
 82211f8:	89 04 24             	mov    %eax,(%esp)
 82211fb:	e8 50 3a 50 00       	call   8724c50 <__cxa_throw>
 8221200:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8221203:	89 04 24             	mov    %eax,(%esp)
 8221206:	e8 49 fa ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 822120b:	89 c3                	mov    %eax,%ebx
 822120d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8221210:	89 04 24             	mov    %eax,(%esp)
 8221213:	e8 3c fa ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221218:	39 c3                	cmp    %eax,%ebx
 822121a:	0f 95 c0             	setne  %al
 822121d:	84 c0                	test   %al,%al
 822121f:	74 2c                	je     822124d <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x69b>
 8221221:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8221228:	e8 d3 45 50 00       	call   8725800 <__cxa_allocate_exception>
 822122d:	89 c2                	mov    %eax,%edx
 822122f:	c7 02 d8 00 00 00    	movl   $0xd8,(%edx)
 8221235:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822123c:	00 
 822123d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8221244:	08 
 8221245:	89 04 24             	mov    %eax,(%esp)
 8221248:	e8 03 3a 50 00       	call   8724c50 <__cxa_throw>
 822124d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8221250:	89 04 24             	mov    %eax,(%esp)
 8221253:	e8 fc f9 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221258:	85 c0                	test   %eax,%eax
 822125a:	78 10                	js     822126c <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x6ba>
 822125c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 822125f:	89 04 24             	mov    %eax,(%esp)
 8221262:	e8 ed f9 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221267:	83 f8 06             	cmp    $0x6,%eax
 822126a:	7e 07                	jle    8221273 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x6c1>
 822126c:	b8 01 00 00 00       	mov    $0x1,%eax
 8221271:	eb 05                	jmp    8221278 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x6c6>
 8221273:	b8 00 00 00 00       	mov    $0x0,%eax
 8221278:	84 c0                	test   %al,%al
 822127a:	74 2c                	je     82212a8 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x6f6>
 822127c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8221283:	e8 78 45 50 00       	call   8725800 <__cxa_allocate_exception>
 8221288:	89 c2                	mov    %eax,%edx
 822128a:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8221290:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8221297:	00 
 8221298:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 822129f:	08 
 82212a0:	89 04 24             	mov    %eax,(%esp)
 82212a3:	e8 a8 39 50 00       	call   8724c50 <__cxa_throw>
 82212a8:	e8 ee ae ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 82212ad:	89 c3                	mov    %eax,%ebx
 82212af:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82212b2:	89 04 24             	mov    %eax,(%esp)
 82212b5:	e8 9a f9 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 82212ba:	89 c2                	mov    %eax,%edx
 82212bc:	89 d0                	mov    %edx,%eax
 82212be:	01 c0                	add    %eax,%eax
 82212c0:	01 d0                	add    %edx,%eax
 82212c2:	c1 e0 03             	shl    $0x3,%eax
 82212c5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 82212c8:	05 28 08 00 00       	add    $0x828,%eax
 82212cd:	8b 00                	mov    (%eax),%eax
 82212cf:	83 f8 ff             	cmp    $0xffffffff,%eax
 82212d2:	0f 94 c0             	sete   %al
 82212d5:	84 c0                	test   %al,%al
 82212d7:	74 2c                	je     8221305 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x753>
 82212d9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82212e0:	e8 1b 45 50 00       	call   8725800 <__cxa_allocate_exception>
 82212e5:	89 c2                	mov    %eax,%edx
 82212e7:	c7 02 07 00 00 00    	movl   $0x7,(%edx)
 82212ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82212f4:	00 
 82212f5:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82212fc:	08 
 82212fd:	89 04 24             	mov    %eax,(%esp)
 8221300:	e8 4b 39 50 00       	call   8724c50 <__cxa_throw>
 8221305:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8221308:	89 04 24             	mov    %eax,(%esp)
 822130b:	e8 44 f9 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221310:	85 c0                	test   %eax,%eax
 8221312:	78 10                	js     8221324 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x772>
 8221314:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8221317:	89 04 24             	mov    %eax,(%esp)
 822131a:	e8 35 f9 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 822131f:	83 f8 06             	cmp    $0x6,%eax
 8221322:	7e 07                	jle    822132b <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8221324:	b8 01 00 00 00       	mov    $0x1,%eax
 8221329:	eb 05                	jmp    8221330 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x77e>
 822132b:	b8 00 00 00 00       	mov    $0x0,%eax
 8221330:	84 c0                	test   %al,%al
 8221332:	74 2c                	je     8221360 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x7ae>
 8221334:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822133b:	e8 c0 44 50 00       	call   8725800 <__cxa_allocate_exception>
 8221340:	89 c2                	mov    %eax,%edx
 8221342:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8221348:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822134f:	00 
 8221350:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8221357:	08 
 8221358:	89 04 24             	mov    %eax,(%esp)
 822135b:	e8 f0 38 50 00       	call   8724c50 <__cxa_throw>
 8221360:	e8 36 ae ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8221365:	89 c3                	mov    %eax,%ebx
 8221367:	8b 45 cc             	mov    -0x34(%ebp),%eax
 822136a:	89 04 24             	mov    %eax,(%esp)
 822136d:	e8 e2 f8 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221372:	89 c2                	mov    %eax,%edx
 8221374:	89 d0                	mov    %edx,%eax
 8221376:	01 c0                	add    %eax,%eax
 8221378:	01 d0                	add    %edx,%eax
 822137a:	c1 e0 03             	shl    $0x3,%eax
 822137d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8221380:	05 28 08 00 00       	add    $0x828,%eax
 8221385:	8b 00                	mov    (%eax),%eax
 8221387:	83 f8 ff             	cmp    $0xffffffff,%eax
 822138a:	0f 94 c0             	sete   %al
 822138d:	84 c0                	test   %al,%al
 822138f:	74 2c                	je     82213bd <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x80b>
 8221391:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8221398:	e8 63 44 50 00       	call   8725800 <__cxa_allocate_exception>
 822139d:	89 c2                	mov    %eax,%edx
 822139f:	c7 02 07 00 00 00    	movl   $0x7,(%edx)
 82213a5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82213ac:	00 
 82213ad:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82213b4:	08 
 82213b5:	89 04 24             	mov    %eax,(%esp)
 82213b8:	e8 93 38 50 00       	call   8724c50 <__cxa_throw>
 82213bd:	c7 45 dc 02 00 00 00 	movl   $0x2,-0x24(%ebp)
 82213c4:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82213c7:	89 04 24             	mov    %eax,(%esp)
 82213ca:	e8 59 b6 00 00       	call   822ca28 <_ZNK14CStackableItem20getJewelTargetSocketEv>
 82213cf:	66 89 85 74 ff ff ff 	mov    %ax,-0x8c(%ebp)
 82213d6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82213d9:	89 04 24             	mov    %eax,(%esp)
 82213dc:	e8 47 b6 00 00       	call   822ca28 <_ZNK14CStackableItem20getJewelTargetSocketEv>
 82213e1:	66 89 85 76 ff ff ff 	mov    %ax,-0x8a(%ebp)
 82213e8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 82213ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 82213f2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82213f9:	00 
 82213fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82213fd:	89 04 24             	mov    %eax,(%esp)
 8221400:	e8 5b f6 ff ff       	call   8220a60 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt>
 8221405:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8221408:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 822140c:	0f 94 c0             	sete   %al
 822140f:	84 c0                	test   %al,%al
 8221411:	74 2c                	je     822143f <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x88d>
 8221413:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822141a:	e8 e1 43 50 00       	call   8725800 <__cxa_allocate_exception>
 822141f:	89 c2                	mov    %eax,%edx
 8221421:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 8221427:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822142e:	00 
 822142f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8221436:	08 
 8221437:	89 04 24             	mov    %eax,(%esp)
 822143a:	e8 11 38 50 00       	call   8724c50 <__cxa_throw>
 822143f:	e8 57 ad ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8221444:	89 c3                	mov    %eax,%ebx
 8221446:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8221449:	89 04 24             	mov    %eax,(%esp)
 822144c:	e8 03 f8 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221451:	89 c2                	mov    %eax,%edx
 8221453:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8221456:	89 d0                	mov    %edx,%eax
 8221458:	01 c0                	add    %eax,%eax
 822145a:	01 d0                	add    %edx,%eax
 822145c:	01 c0                	add    %eax,%eax
 822145e:	01 c8                	add    %ecx,%eax
 8221460:	05 08 02 00 00       	add    $0x208,%eax
 8221465:	8b 44 83 0c          	mov    0xc(%ebx,%eax,4),%eax
 8221469:	89 45 e0             	mov    %eax,-0x20(%ebp)
 822146c:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 822146f:	e8 27 ad ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8221474:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8221478:	89 04 24             	mov    %eax,(%esp)
 822147b:	e8 b2 e5 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8221480:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8221483:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8221487:	74 17                	je     82214a0 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x8ee>
 8221489:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 822148c:	8b 00                	mov    (%eax),%eax
 822148e:	83 c0 0c             	add    $0xc,%eax
 8221491:	8b 10                	mov    (%eax),%edx
 8221493:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8221496:	89 04 24             	mov    %eax,(%esp)
 8221499:	ff d2                	call   *%edx
 822149b:	83 f8 10             	cmp    $0x10,%eax
 822149e:	74 07                	je     82214a7 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x8f5>
 82214a0:	b8 01 00 00 00       	mov    $0x1,%eax
 82214a5:	eb 05                	jmp    82214ac <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x8fa>
 82214a7:	b8 00 00 00 00       	mov    $0x0,%eax
 82214ac:	84 c0                	test   %al,%al
 82214ae:	74 2c                	je     82214dc <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x92a>
 82214b0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82214b7:	e8 44 43 50 00       	call   8725800 <__cxa_allocate_exception>
 82214bc:	89 c2                	mov    %eax,%edx
 82214be:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 82214c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82214cb:	00 
 82214cc:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82214d3:	08 
 82214d4:	89 04 24             	mov    %eax,(%esp)
 82214d7:	e8 74 37 50 00       	call   8724c50 <__cxa_throw>
 82214dc:	e8 ba ac ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 82214e1:	89 c3                	mov    %eax,%ebx
 82214e3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82214e6:	89 04 24             	mov    %eax,(%esp)
 82214e9:	e8 66 f7 ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 82214ee:	89 c2                	mov    %eax,%edx
 82214f0:	89 d0                	mov    %edx,%eax
 82214f2:	01 c0                	add    %eax,%eax
 82214f4:	01 d0                	add    %edx,%eax
 82214f6:	c1 e0 03             	shl    $0x3,%eax
 82214f9:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 82214fc:	05 28 08 00 00       	add    $0x828,%eax
 8221501:	8b 18                	mov    (%eax),%ebx
 8221503:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221506:	89 04 24             	mov    %eax,(%esp)
 8221509:	e8 80 8d eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 822150e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8221515:	00 
 8221516:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 822151d:	00 
 822151e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8221522:	89 04 24             	mov    %eax,(%esp)
 8221525:	e8 22 e0 2d 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 822152a:	83 f0 01             	xor    $0x1,%eax
 822152d:	84 c0                	test   %al,%al
 822152f:	74 2c                	je     822155d <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x9ab>
 8221531:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8221538:	e8 c3 42 50 00       	call   8725800 <__cxa_allocate_exception>
 822153d:	89 c2                	mov    %eax,%edx
 822153f:	c7 02 0a 00 00 00    	movl   $0xa,(%edx)
 8221545:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822154c:	00 
 822154d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8221554:	08 
 8221555:	89 04 24             	mov    %eax,(%esp)
 8221558:	e8 f3 36 50 00       	call   8724c50 <__cxa_throw>
 822155d:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 8221561:	0f b7 d8             	movzwl %ax,%ebx
 8221564:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221567:	89 04 24             	mov    %eax,(%esp)
 822156a:	e8 1f 8d eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 822156f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8221576:	00 
 8221577:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 822157e:	00 
 822157f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8221586:	00 
 8221587:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 822158b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8221592:	00 
 8221593:	89 04 24             	mov    %eax,(%esp)
 8221596:	e8 71 2a 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 822159b:	83 f0 01             	xor    $0x1,%eax
 822159e:	84 c0                	test   %al,%al
 82215a0:	74 2c                	je     82215ce <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xa1c>
 82215a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82215a9:	e8 52 42 50 00       	call   8725800 <__cxa_allocate_exception>
 82215ae:	89 c2                	mov    %eax,%edx
 82215b0:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 82215b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82215bd:	00 
 82215be:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82215c5:	08 
 82215c6:	89 04 24             	mov    %eax,(%esp)
 82215c9:	e8 82 36 50 00       	call   8724c50 <__cxa_throw>
 82215ce:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 82215d2:	0f b7 d8             	movzwl %ax,%ebx
 82215d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82215d8:	89 04 24             	mov    %eax,(%esp)
 82215db:	e8 ae 8c eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82215e0:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 82215e7:	00 
 82215e8:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 82215ef:	00 
 82215f0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82215f7:	00 
 82215f8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82215fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8221603:	00 
 8221604:	89 04 24             	mov    %eax,(%esp)
 8221607:	e8 00 2a 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 822160c:	83 f0 01             	xor    $0x1,%eax
 822160f:	84 c0                	test   %al,%al
 8221611:	74 2c                	je     822163f <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xa8d>
 8221613:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822161a:	e8 e1 41 50 00       	call   8725800 <__cxa_allocate_exception>
 822161f:	89 c2                	mov    %eax,%edx
 8221621:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 8221627:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822162e:	00 
 822162f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8221636:	08 
 8221637:	89 04 24             	mov    %eax,(%esp)
 822163a:	e8 11 36 50 00       	call   8724c50 <__cxa_throw>
 822163f:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 8221643:	0f b7 d8             	movzwl %ax,%ebx
 8221646:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221649:	89 04 24             	mov    %eax,(%esp)
 822164c:	e8 2d 8c eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8221651:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 8221657:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 822165b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8221662:	00 
 8221663:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221667:	89 14 24             	mov    %edx,(%esp)
 822166a:	e8 a9 a2 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 822166f:	83 ec 04             	sub    $0x4,%esp
 8221672:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8221678:	89 85 27 ff ff ff    	mov    %eax,-0xd9(%ebp)
 822167e:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8221684:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 822168a:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8221690:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 8221696:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 822169c:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 82216a2:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 82216a8:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 82216ae:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 82216b4:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 82216ba:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 82216c0:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 82216c6:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 82216cc:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 82216d2:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 82216d8:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 82216de:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 82216e4:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 82216ea:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 82216f0:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 82216f6:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 82216fc:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 8221702:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8221708:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 822170e:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8221714:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 822171a:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8221720:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 8221726:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 822172d:	88 85 63 ff ff ff    	mov    %al,-0x9d(%ebp)
 8221733:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 8221737:	0f b7 d8             	movzwl %ax,%ebx
 822173a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822173d:	89 04 24             	mov    %eax,(%esp)
 8221740:	e8 39 8b eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8221745:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 822174b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 822174f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8221756:	00 
 8221757:	89 44 24 04          	mov    %eax,0x4(%esp)
 822175b:	89 14 24             	mov    %edx,(%esp)
 822175e:	e8 b5 a1 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8221763:	83 ec 04             	sub    $0x4,%esp
 8221766:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 822176c:	89 85 ea fe ff ff    	mov    %eax,-0x116(%ebp)
 8221772:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8221778:	89 85 ee fe ff ff    	mov    %eax,-0x112(%ebp)
 822177e:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8221784:	89 85 f2 fe ff ff    	mov    %eax,-0x10e(%ebp)
 822178a:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8221790:	89 85 f6 fe ff ff    	mov    %eax,-0x10a(%ebp)
 8221796:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 822179c:	89 85 fa fe ff ff    	mov    %eax,-0x106(%ebp)
 82217a2:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 82217a8:	89 85 fe fe ff ff    	mov    %eax,-0x102(%ebp)
 82217ae:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 82217b4:	89 85 02 ff ff ff    	mov    %eax,-0xfe(%ebp)
 82217ba:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 82217c0:	89 85 06 ff ff ff    	mov    %eax,-0xfa(%ebp)
 82217c6:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 82217cc:	89 85 0a ff ff ff    	mov    %eax,-0xf6(%ebp)
 82217d2:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 82217d8:	89 85 0e ff ff ff    	mov    %eax,-0xf2(%ebp)
 82217de:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 82217e4:	89 85 12 ff ff ff    	mov    %eax,-0xee(%ebp)
 82217ea:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 82217f0:	89 85 16 ff ff ff    	mov    %eax,-0xea(%ebp)
 82217f6:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 82217fc:	89 85 1a ff ff ff    	mov    %eax,-0xe6(%ebp)
 8221802:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8221808:	89 85 1e ff ff ff    	mov    %eax,-0xe2(%ebp)
 822180e:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8221814:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 822181a:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 8221821:	88 85 26 ff ff ff    	mov    %al,-0xda(%ebp)
 8221827:	8d 45 90             	lea    -0x70(%ebp),%eax
 822182a:	89 04 24             	mov    %eax,(%esp)
 822182d:	e8 1a c5 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8221832:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 8221839:	00 
 822183a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8221841:	00 
 8221842:	8d 45 90             	lea    -0x70(%ebp),%eax
 8221845:	89 04 24             	mov    %eax,(%esp)
 8221848:	e8 af a0 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 822184d:	eb 5b                	jmp    82218aa <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xcf8>
 822184f:	83 fa 01             	cmp    $0x1,%edx
 8221852:	74 08                	je     822185c <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xcaa>
 8221854:	89 04 24             	mov    %eax,(%esp)
 8221857:	e8 f4 1e 8c 00       	call   8ae3750 <_Unwind_Resume>
 822185c:	89 04 24             	mov    %eax,(%esp)
 822185f:	e8 7c 44 50 00       	call   8725ce0 <__cxa_begin_catch>
 8221864:	8b 00                	mov    (%eax),%eax
 8221866:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8221869:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 822186c:	0f b6 c0             	movzbl %al,%eax
 822186f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8221873:	c7 44 24 04 04 01 00 	movl   $0x104,0x4(%esp)
 822187a:	00 
 822187b:	8b 45 0c             	mov    0xc(%ebp),%eax
 822187e:	89 04 24             	mov    %eax,(%esp)
 8221881:	e8 bc a6 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8221886:	bb 00 00 00 00       	mov    $0x0,%ebx
 822188b:	e8 a0 43 50 00       	call   8725c30 <__cxa_end_catch>
 8221890:	e9 3d 05 00 00       	jmp    8221dd2 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1220>
 8221895:	89 d3                	mov    %edx,%ebx
 8221897:	89 c6                	mov    %eax,%esi
 8221899:	e8 92 43 50 00       	call   8725c30 <__cxa_end_catch>
 822189e:	89 f0                	mov    %esi,%eax
 82218a0:	89 da                	mov    %ebx,%edx
 82218a2:	89 04 24             	mov    %eax,(%esp)
 82218a5:	e8 a6 1e 8c 00       	call   8ae3750 <_Unwind_Resume>
 82218aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82218b1:	00 
 82218b2:	8d 45 90             	lea    -0x70(%ebp),%eax
 82218b5:	89 04 24             	mov    %eax,(%esp)
 82218b8:	e8 63 a0 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82218bd:	8d 45 84             	lea    -0x7c(%ebp),%eax
 82218c0:	89 04 24             	mov    %eax,(%esp)
 82218c3:	e8 e0 01 ef ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 82218c8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82218cb:	8d 55 84             	lea    -0x7c(%ebp),%edx
 82218ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 82218d2:	89 04 24             	mov    %eax,(%esp)
 82218d5:	e8 84 de 2e 00       	call   850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>
 82218da:	8d 45 84             	lea    -0x7c(%ebp),%eax
 82218dd:	89 04 24             	mov    %eax,(%esp)
 82218e0:	e8 85 61 01 00       	call   8237a6a <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE4sizeEv>
 82218e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82218e9:	8d 45 90             	lea    -0x70(%ebp),%eax
 82218ec:	89 04 24             	mov    %eax,(%esp)
 82218ef:	e8 2c a0 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82218f4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82218f7:	8d 55 84             	lea    -0x7c(%ebp),%edx
 82218fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 82218fe:	89 04 24             	mov    %eax,(%esp)
 8221901:	e8 14 02 ef ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 8221906:	83 ec 04             	sub    $0x4,%esp
 8221909:	8d 45 a8             	lea    -0x58(%ebp),%eax
 822190c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221910:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8221916:	89 04 24             	mov    %eax,(%esp)
 8221919:	e8 20 02 ef ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 822191e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8221921:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8221924:	89 54 24 04          	mov    %edx,0x4(%esp)
 8221928:	89 04 24             	mov    %eax,(%esp)
 822192b:	e8 28 02 ef ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 8221930:	83 ec 04             	sub    $0x4,%esp
 8221933:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8221936:	89 44 24 04          	mov    %eax,0x4(%esp)
 822193a:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8221940:	89 04 24             	mov    %eax,(%esp)
 8221943:	e8 f6 01 ef ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8221948:	eb 51                	jmp    822199b <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xde9>
 822194a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8221950:	89 04 24             	mov    %eax,(%esp)
 8221953:	e8 68 02 ef ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8221958:	8b 00                	mov    (%eax),%eax
 822195a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822195e:	8d 45 90             	lea    -0x70(%ebp),%eax
 8221961:	89 04 24             	mov    %eax,(%esp)
 8221964:	e8 2b 9e 00 00       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 8221969:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 822196f:	89 04 24             	mov    %eax,(%esp)
 8221972:	e8 49 02 ef ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8221977:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 822197b:	0f b7 c0             	movzwl %ax,%eax
 822197e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221982:	8d 45 90             	lea    -0x70(%ebp),%eax
 8221985:	89 04 24             	mov    %eax,(%esp)
 8221988:	e8 af 9f ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 822198d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8221993:	89 04 24             	mov    %eax,(%esp)
 8221996:	e8 0f 02 ef ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 822199b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82219a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82219a5:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 82219ab:	89 04 24             	mov    %eax,(%esp)
 82219ae:	e8 7a 62 01 00       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 82219b3:	84 c0                	test   %al,%al
 82219b5:	75 93                	jne    822194a <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xd98>
 82219b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82219be:	00 
 82219bf:	8d 45 90             	lea    -0x70(%ebp),%eax
 82219c2:	89 04 24             	mov    %eax,(%esp)
 82219c5:	e8 8e 9f ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82219ca:	8d 45 90             	lea    -0x70(%ebp),%eax
 82219cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82219d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82219d4:	89 04 24             	mov    %eax,(%esp)
 82219d7:	e8 de 6b 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82219dc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 82219e2:	89 04 24             	mov    %eax,(%esp)
 82219e5:	e8 ec 2f f1 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 82219ea:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82219ed:	8d 55 84             	lea    -0x7c(%ebp),%edx
 82219f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82219f4:	89 04 24             	mov    %eax,(%esp)
 82219f7:	e8 1e 01 ef ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 82219fc:	83 ec 04             	sub    $0x4,%esp
 82219ff:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8221a02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221a06:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221a0c:	89 04 24             	mov    %eax,(%esp)
 8221a0f:	e8 2a 01 ef ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8221a14:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8221a17:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8221a1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8221a1e:	89 04 24             	mov    %eax,(%esp)
 8221a21:	e8 32 01 ef ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 8221a26:	83 ec 04             	sub    $0x4,%esp
 8221a29:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8221a2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221a30:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8221a36:	89 04 24             	mov    %eax,(%esp)
 8221a39:	e8 00 01 ef ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8221a3e:	e9 c7 02 00 00       	jmp    8221d0a <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1158>
 8221a43:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221a49:	89 04 24             	mov    %eax,(%esp)
 8221a4c:	e8 6f 01 ef ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8221a51:	8b 00                	mov    (%eax),%eax
 8221a53:	89 c3                	mov    %eax,%ebx
 8221a55:	e8 41 a7 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8221a5a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8221a5e:	89 04 24             	mov    %eax,(%esp)
 8221a61:	e8 cc df 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8221a66:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8221a69:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8221a6d:	0f 84 88 02 00 00    	je     8221cfb <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1149>
 8221a73:	8d 85 ad fe ff ff    	lea    -0x153(%ebp),%eax
 8221a79:	89 04 24             	mov    %eax,(%esp)
 8221a7c:	e8 d3 9d ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8221a81:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221a87:	89 04 24             	mov    %eax,(%esp)
 8221a8a:	e8 31 01 ef ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8221a8f:	8b 00                	mov    (%eax),%eax
 8221a91:	89 85 af fe ff ff    	mov    %eax,-0x151(%ebp)
 8221a97:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8221a9a:	8b 00                	mov    (%eax),%eax
 8221a9c:	83 c0 08             	add    $0x8,%eax
 8221a9f:	8b 10                	mov    (%eax),%edx
 8221aa1:	8d 85 ad fe ff ff    	lea    -0x153(%ebp),%eax
 8221aa7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221aab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8221aae:	89 04 24             	mov    %eax,(%esp)
 8221ab1:	ff d2                	call   *%edx
 8221ab3:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221ab9:	89 04 24             	mov    %eax,(%esp)
 8221abc:	e8 ff 00 ef ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8221ac1:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8221ac5:	0f b7 c0             	movzwl %ax,%eax
 8221ac8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221acc:	8d 85 ad fe ff ff    	lea    -0x153(%ebp),%eax
 8221ad2:	89 04 24             	mov    %eax,(%esp)
 8221ad5:	e8 aa 9d ea ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8221ada:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221add:	89 04 24             	mov    %eax,(%esp)
 8221ae0:	e8 a9 87 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8221ae5:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8221aec:	00 
 8221aed:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8221af4:	00 
 8221af5:	c7 44 24 44 09 00 00 	movl   $0x9,0x44(%esp)
 8221afc:	00 
 8221afd:	8b 95 ad fe ff ff    	mov    -0x153(%ebp),%edx
 8221b03:	89 54 24 04          	mov    %edx,0x4(%esp)
 8221b07:	8b 95 b1 fe ff ff    	mov    -0x14f(%ebp),%edx
 8221b0d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8221b11:	8b 95 b5 fe ff ff    	mov    -0x14b(%ebp),%edx
 8221b17:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8221b1b:	8b 95 b9 fe ff ff    	mov    -0x147(%ebp),%edx
 8221b21:	89 54 24 10          	mov    %edx,0x10(%esp)
 8221b25:	8b 95 bd fe ff ff    	mov    -0x143(%ebp),%edx
 8221b2b:	89 54 24 14          	mov    %edx,0x14(%esp)
 8221b2f:	8b 95 c1 fe ff ff    	mov    -0x13f(%ebp),%edx
 8221b35:	89 54 24 18          	mov    %edx,0x18(%esp)
 8221b39:	8b 95 c5 fe ff ff    	mov    -0x13b(%ebp),%edx
 8221b3f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8221b43:	8b 95 c9 fe ff ff    	mov    -0x137(%ebp),%edx
 8221b49:	89 54 24 20          	mov    %edx,0x20(%esp)
 8221b4d:	8b 95 cd fe ff ff    	mov    -0x133(%ebp),%edx
 8221b53:	89 54 24 24          	mov    %edx,0x24(%esp)
 8221b57:	8b 95 d1 fe ff ff    	mov    -0x12f(%ebp),%edx
 8221b5d:	89 54 24 28          	mov    %edx,0x28(%esp)
 8221b61:	8b 95 d5 fe ff ff    	mov    -0x12b(%ebp),%edx
 8221b67:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8221b6b:	8b 95 d9 fe ff ff    	mov    -0x127(%ebp),%edx
 8221b71:	89 54 24 30          	mov    %edx,0x30(%esp)
 8221b75:	8b 95 dd fe ff ff    	mov    -0x123(%ebp),%edx
 8221b7b:	89 54 24 34          	mov    %edx,0x34(%esp)
 8221b7f:	8b 95 e1 fe ff ff    	mov    -0x11f(%ebp),%edx
 8221b85:	89 54 24 38          	mov    %edx,0x38(%esp)
 8221b89:	8b 95 e5 fe ff ff    	mov    -0x11b(%ebp),%edx
 8221b8f:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8221b93:	0f b6 95 e9 fe ff ff 	movzbl -0x117(%ebp),%edx
 8221b9a:	88 54 24 40          	mov    %dl,0x40(%esp)
 8221b9e:	89 04 24             	mov    %eax,(%esp)
 8221ba1:	e8 e0 11 2e 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8221ba6:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 8221baa:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 8221bae:	f7 d0                	not    %eax
 8221bb0:	66 c1 e8 0f          	shr    $0xf,%ax
 8221bb4:	84 c0                	test   %al,%al
 8221bb6:	74 28                	je     8221be0 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x102e>
 8221bb8:	0f bf 45 ee          	movswl -0x12(%ebp),%eax
 8221bbc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8221bc0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8221bc7:	00 
 8221bc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8221bcf:	00 
 8221bd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221bd3:	89 04 24             	mov    %eax,(%esp)
 8221bd6:	e8 fd a6 45 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8221bdb:	e9 bb 00 00 00       	jmp    8221c9b <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x10e9>
 8221be0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8221be7:	00 
 8221be8:	c7 44 24 08 66 35 bc 	movl   $0x8bc3566,0x8(%esp)
 8221bef:	08 
 8221bf0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8221bf7:	00 
 8221bf8:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8221bff:	e8 fa 3b 88 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8221c04:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8221c07:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8221c0e:	00 
 8221c0f:	c7 44 24 08 7a 35 bc 	movl   $0x8bc357a,0x8(%esp)
 8221c16:	08 
 8221c17:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8221c1e:	00 
 8221c1f:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8221c26:	e8 d3 3b 88 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8221c2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8221c2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221c31:	89 04 24             	mov    %eax,(%esp)
 8221c34:	e8 57 a0 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8221c39:	89 c3                	mov    %eax,%ebx
 8221c3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8221c3e:	89 04 24             	mov    %eax,(%esp)
 8221c41:	e8 6a c7 e5 ff       	call   807e3b0 <strlen@plt>
 8221c46:	89 c6                	mov    %eax,%esi
 8221c48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221c4b:	89 04 24             	mov    %eax,(%esp)
 8221c4e:	e8 fb 9f ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8221c53:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8221c5a:	00 
 8221c5b:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8221c62:	00 
 8221c63:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8221c67:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8221c6e:	00 
 8221c6f:	89 74 24 14          	mov    %esi,0x14(%esp)
 8221c73:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8221c76:	89 54 24 10          	mov    %edx,0x10(%esp)
 8221c7a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8221c7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8221c85:	00 
 8221c86:	8d 85 ad fe ff ff    	lea    -0x153(%ebp),%eax
 8221c8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221c90:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8221c93:	89 04 24             	mov    %eax,(%esp)
 8221c96:	e8 4d 39 33 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8221c9b:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221ca1:	89 04 24             	mov    %eax,(%esp)
 8221ca4:	e8 17 ff ee ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8221ca9:	8d 58 08             	lea    0x8(%eax),%ebx
 8221cac:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221cb2:	89 04 24             	mov    %eax,(%esp)
 8221cb5:	e8 06 ff ee ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8221cba:	89 c2                	mov    %eax,%edx
 8221cbc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8221cbf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8221cc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8221cc7:	89 04 24             	mov    %eax,(%esp)
 8221cca:	e8 fb fe ee ff       	call   8111bca <_ZSt9make_pairIRKjRKtESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8221ccf:	83 ec 04             	sub    $0x4,%esp
 8221cd2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8221cd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221cd9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8221cdc:	89 04 24             	mov    %eax,(%esp)
 8221cdf:	e8 24 ff ee ff       	call   8111c08 <_ZNSt4pairIiiEC1IjtEEOS_IT_T0_E>
 8221ce4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8221ce7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221ceb:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8221cf1:	89 04 24             	mov    %eax,(%esp)
 8221cf4:	e8 0d b9 eb ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8221cf9:	eb 01                	jmp    8221cfc <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x114a>
 8221cfb:	90                   	nop
 8221cfc:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221d02:	89 04 24             	mov    %eax,(%esp)
 8221d05:	e8 a0 fe ee ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 8221d0a:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8221d10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221d14:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8221d1a:	89 04 24             	mov    %eax,(%esp)
 8221d1d:	e8 0b 5f 01 00       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8221d22:	84 c0                	test   %al,%al
 8221d24:	0f 85 19 fd ff ff    	jne    8221a43 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0xe91>
 8221d2a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8221d2d:	89 04 24             	mov    %eax,(%esp)
 8221d30:	e8 1f ef ee ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8221d35:	89 c3                	mov    %eax,%ebx
 8221d37:	e8 33 e0 3e 00       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 8221d3c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8221d40:	89 04 24             	mov    %eax,(%esp)
 8221d43:	e8 6c 16 f7 ff       	call   81933b4 <_ZN24CCompoundEmblemStatistic13increaseCountEi>
 8221d48:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8221d4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221d52:	8b 45 08             	mov    0x8(%ebp),%eax
 8221d55:	89 04 24             	mov    %eax,(%esp)
 8221d58:	e8 81 00 00 00       	call   8221dde <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE>
 8221d5d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8221d62:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8221d68:	89 04 24             	mov    %eax,(%esp)
 8221d6b:	e8 7a 2c f1 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8221d70:	eb 2d                	jmp    8221d9f <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x11ed>
 8221d72:	89 d3                	mov    %edx,%ebx
 8221d74:	89 c6                	mov    %eax,%esi
 8221d76:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8221d7c:	89 04 24             	mov    %eax,(%esp)
 8221d7f:	e8 66 2c f1 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8221d84:	89 f0                	mov    %esi,%eax
 8221d86:	89 da                	mov    %ebx,%edx
 8221d88:	eb 00                	jmp    8221d8a <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x11d8>
 8221d8a:	89 d3                	mov    %edx,%ebx
 8221d8c:	89 c6                	mov    %eax,%esi
 8221d8e:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8221d91:	89 04 24             	mov    %eax,(%esp)
 8221d94:	e8 23 fd ee ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 8221d99:	89 f0                	mov    %esi,%eax
 8221d9b:	89 da                	mov    %ebx,%edx
 8221d9d:	eb 0d                	jmp    8221dac <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x11fa>
 8221d9f:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8221da2:	89 04 24             	mov    %eax,(%esp)
 8221da5:	e8 12 fd ee ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 8221daa:	eb 1b                	jmp    8221dc7 <_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf+0x1215>
 8221dac:	89 d3                	mov    %edx,%ebx
 8221dae:	89 c6                	mov    %eax,%esi
 8221db0:	8d 45 90             	lea    -0x70(%ebp),%eax
 8221db3:	89 04 24             	mov    %eax,(%esp)
 8221db6:	e8 c5 c0 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8221dbb:	89 f0                	mov    %esi,%eax
 8221dbd:	89 da                	mov    %ebx,%edx
 8221dbf:	89 04 24             	mov    %eax,(%esp)
 8221dc2:	e8 89 19 8c 00       	call   8ae3750 <_Unwind_Resume>
 8221dc7:	8d 45 90             	lea    -0x70(%ebp),%eax
 8221dca:	89 04 24             	mov    %eax,(%esp)
 8221dcd:	e8 ae c0 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8221dd2:	89 d8                	mov    %ebx,%eax
 8221dd4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8221dd7:	83 c4 00             	add    $0x0,%esp
 8221dda:	5b                   	pop    %ebx
 8221ddb:	5e                   	pop    %esi
 8221ddc:	5d                   	pop    %ebp
 8221ddd:	c3                   	ret

```

```c
// Dispatcher_CompoundEmblem::dispatch_sig @ 0x8220bb2

/* Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CompoundEmblem::dispatch_sig
          (Dispatcher_CompoundEmblem *this,CUser *param_1,PacketBuf *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  CInventory *pCVar10;
  ulong *puVar11;
  size_t sVar12;
  undefined4 uVar13;
  ushort *puVar14;
  CCompoundEmblemStatistic *this_00;
  uint uVar15;
  undefined1 local_19c [8];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined2 local_157;
  undefined2 uStack_155;
  undefined2 uStack_153;
  undefined2 uStack_151;
  undefined4 local_14f;
  undefined4 local_14b;
  undefined4 local_147;
  undefined4 local_143;
  undefined4 local_13f;
  undefined4 local_13b;
  undefined4 local_137;
  undefined4 local_133;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined4 local_123;
  undefined4 local_11f;
  undefined1 local_11b;
  undefined2 local_11a;
  undefined2 uStack_118;
  undefined2 local_116;
  undefined2 uStack_114;
  undefined4 local_112;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined1 local_de;
  undefined2 local_dd;
  undefined2 uStack_db;
  undefined2 local_d9;
  undefined2 uStack_d7;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined1 local_a1;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_a0 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_9c [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_98 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_94 [4];
  ushort local_90;
  undefined2 local_8e;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_8c [12];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_80 [12];
  PacketGuard local_74 [12];
  ushort local_68;
  ushort local_66;
  ulong local_64;
  ulong local_60;
  __normal_iterator local_5c [4];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator local_50 [4];
  pair<int,int> local_4c [8];
  uint local_44 [2];
  CItem *local_3c;
  CItem *local_38;
  int local_34;
  CStackableItem *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int *local_1c;
  short local_16;
  undefined4 local_14;
  char *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    return 0;
  }
  cVar2 = PacketBuf::get_item_idx(param_2,&local_60);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda8f,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_66);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda90,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_item_idx(param_2,&local_64);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda91,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_68);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda92,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_dd);
  Inven_Item::Inven_Item((Inven_Item *)&local_11a);
  uVar1 = local_60;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(pCVar6,uVar1);
  uVar1 = local_64;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_38 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
  local_34 = 0xffffffff;
                    /* try { // try from 08220d47 to 08221762 has its CatchHandler @ 0822184f */
  local_2c = CUser::isEnableAvatarSocketAction(param_1);
  if (local_2c != 0) {
    piVar7 = (int *)__cxa_allocate_exception(4);
    *piVar7 = local_2c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar7,&ENUM_ERROR::typeinfo,0);
  }
  if ((local_3c == (CItem *)0x0) || (local_38 == (CItem *)0x0)) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = (**(code **)(*(int *)local_3c + 0xc))(local_3c);
  if ((iVar4 == 0x14) && (iVar4 = (**(code **)(*(int *)local_38 + 0xc))(local_38), iVar4 == 0x14)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_66;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_19c,iVar4);
  local_dd = (undefined2)local_19c._0_4_;
  uStack_db = SUB42(local_19c._0_4_,2);
  local_d9 = (undefined2)local_19c._4_4_;
  uStack_d7 = SUB42(local_19c._4_4_,2);
  local_d5 = local_194;
  local_d1 = local_190;
  local_cd = local_18c;
  local_c9 = local_188;
  local_c5 = local_184;
  local_c1 = local_180;
  local_bd = local_17c;
  local_b9 = local_178;
  local_b5 = local_174;
  local_b1 = local_170;
  local_ad = local_16c;
  local_a9 = local_168;
  local_a5 = local_164;
  local_a1 = local_160;
  cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_dd);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  if (CONCAT22(local_d9,uStack_db) != local_60) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_68;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_19c,iVar4);
  local_11a = (undefined2)local_19c._0_4_;
  uStack_118 = SUB42(local_19c._0_4_,2);
  local_116 = (undefined2)local_19c._4_4_;
  uStack_114 = SUB42(local_19c._4_4_,2);
  local_112 = local_194;
  local_10e = local_190;
  local_10a = local_18c;
  local_106 = local_188;
  local_102 = local_184;
  local_fe = local_180;
  local_fa = local_17c;
  local_f6 = local_178;
  local_f2 = local_174;
  local_ee = local_170;
  local_ea = local_16c;
  local_e6 = local_168;
  local_e2 = local_164;
  local_de = local_160;
  cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_11a);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  if (CONCAT22(local_116,uStack_118) != local_64) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  if (((local_66 == local_68) && (CONCAT22(local_d9,uStack_db) == CONCAT22(local_116,uStack_118)))
     && (iVar9 = Inven_Item::get_add_info((Inven_Item *)&local_dd), iVar9 < 2)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUser::CheckItemLock(param_1,1,(uint)local_66);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0xd5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUser::CheckItemLock(param_1,1,(uint)local_68);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0xd5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItem::get_grade(local_3c);
  iVar9 = CItem::get_grade(local_38);
  if (iVar4 != iVar9) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0xd8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItem::get_grade(local_3c);
  if ((iVar4 < 0) || (iVar4 = CItem::get_grade(local_3c), 6 < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = G_CDataManager();
  iVar9 = CItem::get_grade(local_3c);
  if (*(int *)(iVar4 + iVar9 * 0x18 + 0x828) == -1) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItem::get_grade(local_38);
  if ((iVar4 < 0) || (iVar4 = CItem::get_grade(local_38), 6 < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    iVar4 = G_CDataManager();
    iVar9 = CItem::get_grade(local_38);
    if (*(int *)(iVar4 + iVar9 * 0x18 + 0x828) == -1) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 7;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    local_28 = 2;
    local_90 = CStackableItem::getJewelTargetSocket((CStackableItem *)local_3c);
    local_8e = CStackableItem::getJewelTargetSocket((CStackableItem *)local_38);
    local_34 = _selectJewelTypeIndex(this,2,&local_90);
    if (local_34 == -1) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = G_CDataManager();
    iVar9 = CItem::get_grade(local_3c);
    iVar4 = *(int *)(iVar4 + (iVar9 * 6 + local_34) * 4 + 0x82c);
    local_24 = iVar4;
    pCVar6 = (CDataManager *)G_CDataManager();
    local_30 = (CStackableItem *)CDataManager::find_item(pCVar6,iVar4);
    if ((local_30 == (CStackableItem *)0x0) ||
       (iVar4 = (**(code **)(*(int *)local_30 + 0xc))(local_30), iVar4 != 0x10)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = G_CDataManager();
    iVar9 = CItem::get_grade(local_3c);
    uVar5 = *(undefined4 *)(iVar4 + iVar9 * 0x18 + 0x828);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::use_money(pCVar10,uVar5,0x23,1);
    if (cVar2 != '\x01') {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar10,1,local_66,1,8,1);
    if (cVar2 == '\x01') {
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar2 = CInventory::delete_item(pCVar10,1,local_68,1,8,1);
      if (cVar2 == '\x01') {
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_19c,iVar4);
        local_dd = (undefined2)local_19c._0_4_;
        uStack_db = SUB42(local_19c._0_4_,2);
        local_d9 = (undefined2)local_19c._4_4_;
        uStack_d7 = SUB42(local_19c._4_4_,2);
        local_d5 = local_194;
        local_d1 = local_190;
        local_cd = local_18c;
        local_c9 = local_188;
        local_c5 = local_184;
        local_c1 = local_180;
        local_bd = local_17c;
        local_b9 = local_178;
        local_b5 = local_174;
        local_b1 = local_170;
        local_ad = local_16c;
        local_a9 = local_168;
        local_a5 = local_164;
        local_a1 = local_160;
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_19c,iVar4);
        local_11a = (undefined2)local_19c._0_4_;
        uStack_118 = SUB42(local_19c._0_4_,2);
        local_116 = (undefined2)local_19c._4_4_;
        uStack_114 = SUB42(local_19c._4_4_,2);
        local_112 = local_194;
        local_10e = local_190;
        local_10a = local_18c;
        local_106 = local_188;
        local_102 = local_184;
        local_fe = local_180;
        local_fa = local_17c;
        local_f6 = local_178;
        local_f2 = local_174;
        local_ee = local_170;
        local_ea = local_16c;
        local_e6 = local_168;
        local_e2 = local_164;
        local_de = local_160;
        PacketGuard::PacketGuard(local_74);
                    /* try { // try from 08221848 to 0822184c has its CatchHandler @ 08221dac */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_74,1,0x104);
                    /* try { // try from 082218b8 to 082218c7 has its CatchHandler @ 08221dac */
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,1);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        vector(local_80);
                    /* try { // try from 082218d5 to 082219e9 has its CatchHandler @ 08221d8a */
        CStackableItem::getBoosterItem(local_30,(vector *)local_80);
        iVar4 = std::
                vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
                size(local_80);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,iVar4);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        begin();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_94,local_5c);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end
                  ();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_98,local_58);
        while (bVar3 = __gnu_cxx::operator!=(local_94,local_98), bVar3) {
          puVar11 = (ulong *)__gnu_cxx::
                             __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                             ::operator->(local_94);
          InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)local_74,*puVar11);
          iVar4 = __gnu_cxx::
                  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                  ::operator->(local_94);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,(uint)*(ushort *)(iVar4 + 8));
          __gnu_cxx::
          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
          ::operator++(local_94);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_74,true);
        CUser::Send(param_1,local_74);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_8c);
                    /* try { // try from 082219f7 to 08221d5c has its CatchHandler @ 08221d72 */
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        begin();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_9c,local_54);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end
                  ();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_a0,local_50);
        while (bVar3 = __gnu_cxx::operator!=(local_9c,local_a0), bVar3) {
          piVar7 = (int *)__gnu_cxx::
                          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                          ::operator->(local_9c);
          iVar4 = *piVar7;
          pCVar6 = (CDataManager *)G_CDataManager();
          local_1c = (int *)CDataManager::find_item(pCVar6,iVar4);
          if (local_1c != (int *)0x0) {
            Inven_Item::Inven_Item((Inven_Item *)&local_157);
            puVar8 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                     ::operator->(local_9c);
            uStack_155 = (undefined2)*puVar8;
            uStack_153 = (undefined2)((uint)*puVar8 >> 0x10);
            (**(code **)(*local_1c + 8))(local_1c,&local_157);
            iVar4 = __gnu_cxx::
                    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                    ::operator->(local_9c);
            Inven_Item::set_add_info((Inven_Item *)&local_157,(uint)*(ushort *)(iVar4 + 8));
            uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_16 = CInventory::insertItemIntoInventory
                                 (uVar5,CONCAT22(uStack_155,local_157),
                                  CONCAT22(uStack_151,uStack_153),local_14f,local_14b,local_147,
                                  local_143,local_13f,local_13b,local_137,local_133,local_12f,
                                  local_12b,local_127,local_123,local_11f,local_11b,9,1,1);
            if (local_16 < 0) {
              local_14 = RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_122",(bool *)0x0);
              local_10 = (char *)RDARScriptStringManager::findString
                                           ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                            "game_server_msg_123",(bool *)0x0);
              uVar5 = CUser::GetServerGroup(param_1);
              sVar12 = strlen(local_10);
              uVar13 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                        (local_14,&local_157,0,uVar13,local_10,sVar12,0,uVar5,0,0);
            }
            else {
              CUser::SendUpdateItem(param_1,1,0,(int)local_16);
            }
            __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_9c);
            puVar14 = (ushort *)
                      __gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_9c);
            std::make_pair<unsigned_int_const&,unsigned_short_const&>(local_44,puVar14);
            std::pair<int,int>::pair<unsigned_int,unsigned_short>(local_4c,(pair *)local_44);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_8c,local_4c);
          }
          __gnu_cxx::
          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
          ::operator++(local_9c);
        }
        iVar4 = CItem::get_grade(local_3c);
        this_00 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
        CCompoundEmblemStatistic::increaseCount(this_00,iVar4);
        SendCreateEmblemInfo(this,(vector *)local_8c);
                    /* try { // try from 08221d6b to 08221d6f has its CatchHandler @ 08221d8a */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_8c);
                    /* try { // try from 08221da5 to 08221da9 has its CatchHandler @ 08221dac */
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        ~vector(local_80);
        PacketGuard::~PacketGuard(local_74);
        return 0;
      }
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  puVar8 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
}

```

