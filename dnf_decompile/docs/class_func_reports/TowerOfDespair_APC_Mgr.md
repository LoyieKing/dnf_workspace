# TowerOfDespair_APC_Mgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Get_APC_Name_byIndex

```asm
// === 085ff020 TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex  [0x085ff020-0x85ff09c] ===
 85ff020:	55                   	push   %ebp
 85ff021:	89 e5                	mov    %esp,%ebp
 85ff023:	83 ec 38             	sub    $0x38,%esp
 85ff026:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ff029:	89 04 24             	mov    %eax,(%esp)
 85ff02c:	e8 3f 01 00 00       	call   85ff170 <_ZNSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEC1Ev>
 85ff031:	8b 55 08             	mov    0x8(%ebp),%edx
 85ff034:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ff037:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ff03b:	89 04 24             	mov    %eax,(%esp)
 85ff03e:	e8 67 01 00 00       	call   85ff1aa <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85ff043:	83 ec 04             	sub    $0x4,%esp
 85ff046:	8b 55 08             	mov    0x8(%ebp),%edx
 85ff049:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ff04c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85ff04f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85ff053:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ff057:	89 04 24             	mov    %eax,(%esp)
 85ff05a:	e8 1f 01 00 00       	call   85ff17e <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85ff05f:	83 ec 04             	sub    $0x4,%esp
 85ff062:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85ff065:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ff068:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ff06b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ff06f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ff072:	89 04 24             	mov    %eax,(%esp)
 85ff075:	e8 56 01 00 00       	call   85ff1d0 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEneERKS5_>
 85ff07a:	84 c0                	test   %al,%al
 85ff07c:	74 18                	je     85ff096 <_ZN22TowerOfDespair_APC_Mgr20Get_APC_Name_byIndexERK9TOD_Layer+0x76>
 85ff07e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ff081:	89 04 24             	mov    %eax,(%esp)
 85ff084:	e8 5b 01 00 00       	call   85ff1e4 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEptEv>
 85ff089:	83 c0 04             	add    $0x4,%eax
 85ff08c:	89 04 24             	mov    %eax,(%esp)
 85ff08f:	e8 a2 00 00 00       	call   85ff136 <_ZN15SendingAPC_Info20get_user_charac_nameEv>
 85ff094:	eb 05                	jmp    85ff09b <_ZN22TowerOfDespair_APC_Mgr20Get_APC_Name_byIndexERK9TOD_Layer+0x7b>
 85ff096:	b8 00 00 00 00       	mov    $0x0,%eax
 85ff09b:	c9                   	leave
 85ff09c:	c3                   	ret

```

```c
// TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex @ 0x85ff020

/* TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(TOD_Layer const&) */

undefined4 TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(TOD_Layer *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20 [3];
  undefined4 local_14;
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_14);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::end(local_10);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::find((TOD_Layer *)local_20);
  local_14 = local_20[0];
  cVar1 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator!=
                    ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_14);
    uVar3 = SendingAPC_Info::get_user_charac_name((SendingAPC_Info *)(iVar2 + 4));
  }
  return uVar3;
}

```

---

## Reset_APC_Info

```asm
// === 085feed0 TowerOfDespair_APC_Mgr::Reset_APC_Info  [0x085feed0-0x85feee3] ===
 85feed0:	55                   	push   %ebp
 85feed1:	89 e5                	mov    %esp,%ebp
 85feed3:	83 ec 18             	sub    $0x18,%esp
 85feed6:	8b 45 08             	mov    0x8(%ebp),%eax
 85feed9:	89 04 24             	mov    %eax,(%esp)
 85feedc:	e8 cd 03 00 00       	call   85ff2ae <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE5clearEv>
 85feee1:	c9                   	leave
 85feee2:	c3                   	ret
 85feee3:	90                   	nop

```

```c
// TowerOfDespair_APC_Mgr::Reset_APC_Info @ 0x85feed0

/* TowerOfDespair_APC_Mgr::Reset_APC_Info() */

void __thiscall TowerOfDespair_APC_Mgr::Reset_APC_Info(TowerOfDespair_APC_Mgr *this)

{
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::clear((map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
           *)this);
  return;
}

```

---

## Send_APC_Info

```asm
// === 085feee4 TowerOfDespair_APC_Mgr::Send_APC_Info  [0x085feee4-0x85ff01f] ===
 85feee4:	55                   	push   %ebp
 85feee5:	89 e5                	mov    %esp,%ebp
 85feee7:	57                   	push   %edi
 85feee8:	56                   	push   %esi
 85feee9:	53                   	push   %ebx
 85feeea:	83 ec 5c             	sub    $0x5c,%esp
 85feeed:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85feef0:	89 04 24             	mov    %eax,(%esp)
 85feef3:	e8 78 02 00 00       	call   85ff170 <_ZNSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEC1Ev>
 85feef8:	8b 55 08             	mov    0x8(%ebp),%edx
 85feefb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85feefe:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fef02:	89 04 24             	mov    %eax,(%esp)
 85fef05:	e8 a0 02 00 00       	call   85ff1aa <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85fef0a:	83 ec 04             	sub    $0x4,%esp
 85fef0d:	8b 55 08             	mov    0x8(%ebp),%edx
 85fef10:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85fef13:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85fef16:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fef1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fef1e:	89 04 24             	mov    %eax,(%esp)
 85fef21:	e8 58 02 00 00       	call   85ff17e <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85fef26:	83 ec 04             	sub    $0x4,%esp
 85fef29:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85fef2c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85fef2f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85fef32:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fef36:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85fef39:	89 04 24             	mov    %eax,(%esp)
 85fef3c:	e8 8f 02 00 00       	call   85ff1d0 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEneERKS5_>
 85fef41:	84 c0                	test   %al,%al
 85fef43:	0f 84 83 00 00 00    	je     85fefcc <_ZN22TowerOfDespair_APC_Mgr13Send_APC_InfoERK9TOD_LayerP5CUser+0xe8>
 85fef49:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85fef4c:	89 04 24             	mov    %eax,(%esp)
 85fef4f:	e8 90 02 00 00       	call   85ff1e4 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEptEv>
 85fef54:	8d 50 04             	lea    0x4(%eax),%edx
 85fef57:	8b 45 10             	mov    0x10(%ebp),%eax
 85fef5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fef5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fef61:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fef65:	89 14 24             	mov    %edx,(%esp)
 85fef68:	e8 5d fc ff ff       	call   85febca <_ZN15SendingAPC_Info13Send_APC_InfoERK9TOD_LayerP5CUser>
 85fef6d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85fef70:	89 04 24             	mov    %eax,(%esp)
 85fef73:	e8 6c 02 00 00       	call   85ff1e4 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEptEv>
 85fef78:	83 c0 04             	add    $0x4,%eax
 85fef7b:	89 04 24             	mov    %eax,(%esp)
 85fef7e:	e8 a9 01 00 00       	call   85ff12c <_ZN15SendingAPC_Info18get_user_charac_noEv>
 85fef83:	89 c6                	mov    %eax,%esi
 85fef85:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fef88:	89 04 24             	mov    %eax,(%esp)
 85fef8b:	e8 b0 fc c2 ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 85fef90:	0f b7 f8             	movzwl %ax,%edi
 85fef93:	8b 45 10             	mov    0x10(%ebp),%eax
 85fef96:	89 04 24             	mov    %eax,(%esp)
 85fef99:	e8 b0 cc ac ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85fef9e:	89 c3                	mov    %eax,%ebx
 85fefa0:	8d 45 d7             	lea    -0x29(%ebp),%eax
 85fefa3:	89 04 24             	mov    %eax,(%esp)
 85fefa6:	e8 af bd c2 ff       	call   822ad5a <_ZN12cMyTraceNoopC1Ev>
 85fefab:	89 74 24 10          	mov    %esi,0x10(%esp)
 85fefaf:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85fefb3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85fefb7:	c7 44 24 04 00 6a cd 	movl   $0x8cd6a00,0x4(%esp)
 85fefbe:	08 
 85fefbf:	8d 45 d7             	lea    -0x29(%ebp),%eax
 85fefc2:	89 04 24             	mov    %eax,(%esp)
 85fefc5:	e8 96 bd c2 ff       	call   822ad60 <_ZN12cMyTraceNoopclEPKcz>
 85fefca:	eb 48                	jmp    85ff014 <_ZN22TowerOfDespair_APC_Mgr13Send_APC_InfoERK9TOD_LayerP5CUser+0x130>
 85fefcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fefcf:	89 04 24             	mov    %eax,(%esp)
 85fefd2:	e8 69 fc c2 ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 85fefd7:	0f b7 d8             	movzwl %ax,%ebx
 85fefda:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85fefe1:	00 
 85fefe2:	c7 44 24 08 a1 00 00 	movl   $0xa1,0x8(%esp)
 85fefe9:	00 
 85fefea:	c7 44 24 04 60 76 cd 	movl   $0x8cd7660,0x4(%esp)
 85feff1:	08 
 85feff2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85feff5:	89 04 24             	mov    %eax,(%esp)
 85feff8:	e8 1b 07 f5 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85feffd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85ff001:	c7 44 24 04 33 6a cd 	movl   $0x8cd6a33,0x4(%esp)
 85ff008:	08 
 85ff009:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85ff00c:	89 04 24             	mov    %eax,(%esp)
 85ff00f:	e8 74 07 f5 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85ff014:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85ff017:	83 c4 00             	add    $0x0,%esp
 85ff01a:	5b                   	pop    %ebx
 85ff01b:	5e                   	pop    %esi
 85ff01c:	5f                   	pop    %edi
 85ff01d:	5d                   	pop    %ebp
 85ff01e:	c3                   	ret
 85ff01f:	90                   	nop

```

```c
// TowerOfDespair_APC_Mgr::Send_APC_Info @ 0x85feee4

/* TowerOfDespair_APC_Mgr::Send_APC_Info(TOD_Layer const&, CUser*) */

void __thiscall
TowerOfDespair_APC_Mgr::Send_APC_Info
          (TowerOfDespair_APC_Mgr *this,TOD_Layer *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  local_34 [7];
  cMyTraceNoop local_2d;
  cMyTrace local_2c [28];
  
  std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::end(local_34);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::find((TOD_Layer *)local_40);
  local_38 = local_40[0];
  cVar1 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator!=
                    ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38,
                     (_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    uVar4 = TOD_Layer::GetLayer(param_1);
    cMyTrace::cMyTrace(local_2c,
                       "void TowerOfDespair_APC_Mgr::Send_APC_Info(const TOD_Layer&, CUser*)",0xa1,5
                      );
    cMyTrace::operator()(local_2c,"TOD:invalid layer %d",uVar4 & 0xffff);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38);
    SendingAPC_Info::Send_APC_Info((SendingAPC_Info *)(iVar2 + 4),param_1,param_2);
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38);
    uVar3 = SendingAPC_Info::get_user_charac_no((SendingAPC_Info *)(iVar2 + 4));
    uVar4 = TOD_Layer::GetLayer(param_1);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    cMyTraceNoop::cMyTraceNoop(&local_2d);
    cMyTraceNoop::operator()
              ((char *)&local_2d,"TOD:sending [%d] toUser, layer [%d] : clone : [%d]",uVar5,
               uVar4 & 0xffff,uVar3);
  }
  return;
}

```

---

## Set_APC_Info

```asm
// === 085fed2e TowerOfDespair_APC_Mgr::Set_APC_Info  [0x085fed2e-0x85feecf] ===
 85fed2e:	55                   	push   %ebp
 85fed2f:	89 e5                	mov    %esp,%ebp
 85fed31:	56                   	push   %esi
 85fed32:	53                   	push   %ebx
 85fed33:	81 ec 20 5c 04 00    	sub    $0x45c20,%esp
 85fed39:	8d 85 f8 17 fd ff    	lea    -0x2e808(%ebp),%eax
 85fed3f:	89 04 24             	mov    %eax,(%esp)
 85fed42:	e8 29 04 00 00       	call   85ff170 <_ZNSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEC1Ev>
 85fed47:	8b 55 08             	mov    0x8(%ebp),%edx
 85fed4a:	8d 85 fc 17 fd ff    	lea    -0x2e804(%ebp),%eax
 85fed50:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fed54:	89 04 24             	mov    %eax,(%esp)
 85fed57:	e8 4e 04 00 00       	call   85ff1aa <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85fed5c:	83 ec 04             	sub    $0x4,%esp
 85fed5f:	8b 55 08             	mov    0x8(%ebp),%edx
 85fed62:	8d 85 f4 a3 fb ff    	lea    -0x45c0c(%ebp),%eax
 85fed68:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85fed6b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fed6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fed73:	89 04 24             	mov    %eax,(%esp)
 85fed76:	e8 03 04 00 00       	call   85ff17e <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85fed7b:	83 ec 04             	sub    $0x4,%esp
 85fed7e:	8b 85 f4 a3 fb ff    	mov    -0x45c0c(%ebp),%eax
 85fed84:	89 85 f8 17 fd ff    	mov    %eax,-0x2e808(%ebp)
 85fed8a:	8d 85 fc 17 fd ff    	lea    -0x2e804(%ebp),%eax
 85fed90:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fed94:	8d 85 f8 17 fd ff    	lea    -0x2e808(%ebp),%eax
 85fed9a:	89 04 24             	mov    %eax,(%esp)
 85fed9d:	e8 2e 04 00 00       	call   85ff1d0 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEneERKS5_>
 85feda2:	84 c0                	test   %al,%al
 85feda4:	74 25                	je     85fedcb <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x9d>
 85feda6:	8d 85 f8 17 fd ff    	lea    -0x2e808(%ebp),%eax
 85fedac:	89 04 24             	mov    %eax,(%esp)
 85fedaf:	e8 30 04 00 00       	call   85ff1e4 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9TOD_Layer15SendingAPC_InfoEEptEv>
 85fedb4:	8d 50 04             	lea    0x4(%eax),%edx
 85fedb7:	8b 45 10             	mov    0x10(%ebp),%eax
 85fedba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fedbe:	89 14 24             	mov    %edx,(%esp)
 85fedc1:	e8 1a fb ff ff       	call   85fe8e0 <_ZN15SendingAPC_Info8set_dataERK8_APCInfo>
 85fedc6:	e9 fb 00 00 00       	jmp    85feec6 <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x198>
 85fedcb:	8d 85 04 a4 fb ff    	lea    -0x45bfc(%ebp),%eax
 85fedd1:	89 04 24             	mov    %eax,(%esp)
 85fedd4:	e8 87 fa ff ff       	call   85fe860 <_ZN15SendingAPC_InfoC1Ev>
 85fedd9:	8b 45 10             	mov    0x10(%ebp),%eax
 85feddc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fede0:	8d 85 04 a4 fb ff    	lea    -0x45bfc(%ebp),%eax
 85fede6:	89 04 24             	mov    %eax,(%esp)
 85fede9:	e8 f2 fa ff ff       	call   85fe8e0 <_ZN15SendingAPC_Info8set_dataERK8_APCInfo>
 85fedee:	8d 85 00 8c fe ff    	lea    -0x17400(%ebp),%eax
 85fedf4:	8d 95 04 a4 fb ff    	lea    -0x45bfc(%ebp),%edx
 85fedfa:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fedfe:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fee01:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fee05:	89 04 24             	mov    %eax,(%esp)
 85fee08:	e8 e4 03 00 00       	call   85ff1f1 <_ZSt9make_pairIRK9TOD_LayerR15SendingAPC_InfoESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 85fee0d:	83 ec 04             	sub    $0x4,%esp
 85fee10:	8d 85 00 8c fe ff    	lea    -0x17400(%ebp),%eax
 85fee16:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fee1a:	8d 85 08 18 fd ff    	lea    -0x2e7f8(%ebp),%eax
 85fee20:	89 04 24             	mov    %eax,(%esp)
 85fee23:	e8 0e 04 00 00       	call   85ff236 <_ZNSt4pairIK9TOD_Layer15SendingAPC_InfoEC1IS0_S2_EEOS_IT_T0_E>
 85fee28:	8b 55 08             	mov    0x8(%ebp),%edx
 85fee2b:	8d 85 00 18 fd ff    	lea    -0x2e800(%ebp),%eax
 85fee31:	8d 8d 08 18 fd ff    	lea    -0x2e7f8(%ebp),%ecx
 85fee37:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fee3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fee3f:	89 04 24             	mov    %eax,(%esp)
 85fee42:	e8 3b 04 00 00       	call   85ff282 <_ZNSt3mapI9TOD_Layer15SendingAPC_InfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 85fee47:	83 ec 04             	sub    $0x4,%esp
 85fee4a:	8d 85 08 18 fd ff    	lea    -0x2e7f8(%ebp),%eax
 85fee50:	89 04 24             	mov    %eax,(%esp)
 85fee53:	e8 02 03 00 00       	call   85ff15a <_ZNSt4pairIK9TOD_Layer15SendingAPC_InfoED1Ev>
 85fee58:	eb 30                	jmp    85fee8a <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x15c>
 85fee5a:	89 d3                	mov    %edx,%ebx
 85fee5c:	89 c6                	mov    %eax,%esi
 85fee5e:	8d 85 08 18 fd ff    	lea    -0x2e7f8(%ebp),%eax
 85fee64:	89 04 24             	mov    %eax,(%esp)
 85fee67:	e8 ee 02 00 00       	call   85ff15a <_ZNSt4pairIK9TOD_Layer15SendingAPC_InfoED1Ev>
 85fee6c:	89 f0                	mov    %esi,%eax
 85fee6e:	89 da                	mov    %ebx,%edx
 85fee70:	eb 00                	jmp    85fee72 <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x144>
 85fee72:	89 d3                	mov    %edx,%ebx
 85fee74:	89 c6                	mov    %eax,%esi
 85fee76:	8d 85 00 8c fe ff    	lea    -0x17400(%ebp),%eax
 85fee7c:	89 04 24             	mov    %eax,(%esp)
 85fee7f:	e8 c0 02 00 00       	call   85ff144 <_ZNSt4pairI9TOD_Layer15SendingAPC_InfoED1Ev>
 85fee84:	89 f0                	mov    %esi,%eax
 85fee86:	89 da                	mov    %ebx,%edx
 85fee88:	eb 10                	jmp    85fee9a <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x16c>
 85fee8a:	8d 85 00 8c fe ff    	lea    -0x17400(%ebp),%eax
 85fee90:	89 04 24             	mov    %eax,(%esp)
 85fee93:	e8 ac 02 00 00       	call   85ff144 <_ZNSt4pairI9TOD_Layer15SendingAPC_InfoED1Ev>
 85fee98:	eb 1e                	jmp    85feeb8 <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo+0x18a>
 85fee9a:	89 d3                	mov    %edx,%ebx
 85fee9c:	89 c6                	mov    %eax,%esi
 85fee9e:	8d 85 04 a4 fb ff    	lea    -0x45bfc(%ebp),%eax
 85feea4:	89 04 24             	mov    %eax,(%esp)
 85feea7:	e8 1e fa ff ff       	call   85fe8ca <_ZN15SendingAPC_InfoD1Ev>
 85feeac:	89 f0                	mov    %esi,%eax
 85feeae:	89 da                	mov    %ebx,%edx
 85feeb0:	89 04 24             	mov    %eax,(%esp)
 85feeb3:	e8 98 48 4e 00       	call   8ae3750 <_Unwind_Resume>
 85feeb8:	8d 85 04 a4 fb ff    	lea    -0x45bfc(%ebp),%eax
 85feebe:	89 04 24             	mov    %eax,(%esp)
 85feec1:	e8 04 fa ff ff       	call   85fe8ca <_ZN15SendingAPC_InfoD1Ev>
 85feec6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85feec9:	83 c4 00             	add    $0x0,%esp
 85feecc:	5b                   	pop    %ebx
 85feecd:	5e                   	pop    %esi
 85feece:	5d                   	pop    %ebp
 85feecf:	c3                   	ret

```

```c
// TowerOfDespair_APC_Mgr::Set_APC_Info @ 0x85fed2e

/* TowerOfDespair_APC_Mgr::Set_APC_Info(TOD_Layer const&, _APCInfo const&) */

void __thiscall
TowerOfDespair_APC_Mgr::Set_APC_Info
          (TowerOfDespair_APC_Mgr *this,TOD_Layer *param_1,_APCInfo *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 auStack_45c10 [4];
  SendingAPC_Info aSStack_45c00 [95220];
  undefined4 uStack_2e80c;
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  amStack_2e808 [4];
  pair apStack_2e804 [8];
  pair<TOD_Layer_const,SendingAPC_Info> apStack_2e7fc [95224];
  TOD_Layer aTStack_17404 [95224];
  
  std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&uStack_2e80c);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::end(amStack_2e808);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::find((TOD_Layer *)auStack_45c10);
  uStack_2e80c = auStack_45c10[0];
  cVar1 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator!=
                    ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&uStack_2e80c,
                     (_Rb_tree_iterator *)amStack_2e808);
  if (cVar1 == '\0') {
    SendingAPC_Info::SendingAPC_Info(aSStack_45c00);
    SendingAPC_Info::set_data(aSStack_45c00,param_2);
                    /* try { // try from 085fee08 to 085fee0c has its CatchHandler @ 085fee9a */
    std::make_pair<TOD_Layer_const&,SendingAPC_Info&>(aTStack_17404,(SendingAPC_Info *)param_1);
                    /* try { // try from 085fee23 to 085fee27 has its CatchHandler @ 085fee72 */
    std::pair<TOD_Layer_const,SendingAPC_Info>::pair<TOD_Layer,SendingAPC_Info>
              (apStack_2e7fc,aTStack_17404);
                    /* try { // try from 085fee42 to 085fee46 has its CatchHandler @ 085fee5a */
    std::
    map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
    ::insert(apStack_2e804);
                    /* try { // try from 085fee53 to 085fee57 has its CatchHandler @ 085fee72 */
    std::pair<TOD_Layer_const,SendingAPC_Info>::~pair(apStack_2e7fc);
                    /* try { // try from 085fee93 to 085fee97 has its CatchHandler @ 085fee9a */
    std::pair<TOD_Layer,SendingAPC_Info>::~pair((pair<TOD_Layer,SendingAPC_Info> *)aTStack_17404);
    SendingAPC_Info::~SendingAPC_Info(aSStack_45c00);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)
                       &uStack_2e80c);
    SendingAPC_Info::set_data((SendingAPC_Info *)(iVar2 + 4),param_2);
  }
  return;
}

```

