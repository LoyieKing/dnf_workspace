# CerashopAddRestrict

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## FindUserInfoDetail

```asm
// === 080e0a43 CerashopAddRestrict::FindUserInfoDetail  [0x080e0a43-0x80e0bed] ===
 80e0a43:	55                   	push   %ebp
 80e0a44:	89 e5                	mov    %esp,%ebp
 80e0a46:	53                   	push   %ebx
 80e0a47:	83 ec 44             	sub    $0x44,%esp
 80e0a4a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e0a4d:	8d 55 10             	lea    0x10(%ebp),%edx
 80e0a50:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e0a54:	8b 55 08             	mov    0x8(%ebp),%edx
 80e0a57:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0a5b:	89 04 24             	mov    %eax,(%esp)
 80e0a5e:	e8 93 1b 00 00       	call   80e25f6 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4findERS3_>
 80e0a63:	83 ec 04             	sub    $0x4,%esp
 80e0a66:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e0a69:	8b 55 08             	mov    0x8(%ebp),%edx
 80e0a6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0a70:	89 04 24             	mov    %eax,(%esp)
 80e0a73:	e8 aa 1b 00 00       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 80e0a78:	83 ec 04             	sub    $0x4,%esp
 80e0a7b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e0a7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0a82:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e0a85:	89 04 24             	mov    %eax,(%esp)
 80e0a88:	e8 bb 1b 00 00       	call   80e2648 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEeqERKS3_>
 80e0a8d:	84 c0                	test   %al,%al
 80e0a8f:	74 42                	je     80e0ad3 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x90>
 80e0a91:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80e0a98:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e0a9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e0a9f:	8d 45 10             	lea    0x10(%ebp),%eax
 80e0aa2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0aa6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e0aa9:	89 04 24             	mov    %eax,(%esp)
 80e0aac:	e8 ab 1b 00 00       	call   80e265c <_ZNSt4pairIKjjEC1IRjiEEOT_OT0_>
 80e0ab1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80e0ab4:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80e0ab7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e0abb:	8b 55 08             	mov    0x8(%ebp),%edx
 80e0abe:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0ac2:	89 04 24             	mov    %eax,(%esp)
 80e0ac5:	e8 c2 1b 00 00       	call   80e268c <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE6insertERKS4_>
 80e0aca:	83 ec 04             	sub    $0x4,%esp
 80e0acd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80e0ad0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80e0ad3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e0ad6:	89 04 24             	mov    %eax,(%esp)
 80e0ad9:	e8 da 1b 00 00       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 80e0ade:	8b 50 04             	mov    0x4(%eax),%edx
 80e0ae1:	03 55 18             	add    0x18(%ebp),%edx
 80e0ae4:	89 50 04             	mov    %edx,0x4(%eax)
 80e0ae7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e0aea:	8d 55 10             	lea    0x10(%ebp),%edx
 80e0aed:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e0af1:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e0af4:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0af8:	89 04 24             	mov    %eax,(%esp)
 80e0afb:	e8 c6 1b 00 00       	call   80e26c6 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 80e0b00:	83 ec 04             	sub    $0x4,%esp
 80e0b03:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e0b06:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e0b09:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0b0d:	89 04 24             	mov    %eax,(%esp)
 80e0b10:	e8 dd 1b 00 00       	call   80e26f2 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 80e0b15:	83 ec 04             	sub    $0x4,%esp
 80e0b18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e0b1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0b1f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e0b22:	89 04 24             	mov    %eax,(%esp)
 80e0b25:	e8 ee 1b 00 00       	call   80e2718 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEneERKS6_>
 80e0b2a:	84 c0                	test   %al,%al
 80e0b2c:	0f 84 8d 00 00 00    	je     80e0bbf <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x17c>
 80e0b32:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e0b35:	89 04 24             	mov    %eax,(%esp)
 80e0b38:	e8 ef 1b 00 00       	call   80e272c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEptEv>
 80e0b3d:	8b 40 04             	mov    0x4(%eax),%eax
 80e0b40:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e0b43:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80e0b4a:	e8 01 cc f9 ff       	call   807d750 <time@plt>
 80e0b4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e0b52:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0b55:	8b 40 08             	mov    0x8(%eax),%eax
 80e0b58:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e0b5b:	7e 2d                	jle    80e0b8a <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x147>
 80e0b5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0b60:	8b 58 04             	mov    0x4(%eax),%ebx
 80e0b63:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e0b66:	89 04 24             	mov    %eax,(%esp)
 80e0b69:	e8 4a 1b 00 00       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 80e0b6e:	8b 40 04             	mov    0x4(%eax),%eax
 80e0b71:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80e0b74:	8b 45 14             	mov    0x14(%ebp),%eax
 80e0b77:	8b 40 08             	mov    0x8(%eax),%eax
 80e0b7a:	39 c2                	cmp    %eax,%edx
 80e0b7c:	0f 96 c0             	setbe  %al
 80e0b7f:	84 c0                	test   %al,%al
 80e0b81:	74 35                	je     80e0bb8 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x175>
 80e0b83:	b8 01 00 00 00       	mov    $0x1,%eax
 80e0b88:	eb 5e                	jmp    80e0be8 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x1a5>
 80e0b8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0b8d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80e0b94:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e0b97:	89 04 24             	mov    %eax,(%esp)
 80e0b9a:	e8 19 1b 00 00       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 80e0b9f:	8b 50 04             	mov    0x4(%eax),%edx
 80e0ba2:	8b 45 14             	mov    0x14(%ebp),%eax
 80e0ba5:	8b 40 08             	mov    0x8(%eax),%eax
 80e0ba8:	39 c2                	cmp    %eax,%edx
 80e0baa:	0f 96 c0             	setbe  %al
 80e0bad:	84 c0                	test   %al,%al
 80e0baf:	74 07                	je     80e0bb8 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x175>
 80e0bb1:	b8 01 00 00 00       	mov    $0x1,%eax
 80e0bb6:	eb 30                	jmp    80e0be8 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x1a5>
 80e0bb8:	b8 00 00 00 00       	mov    $0x0,%eax
 80e0bbd:	eb 29                	jmp    80e0be8 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x1a5>
 80e0bbf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e0bc2:	89 04 24             	mov    %eax,(%esp)
 80e0bc5:	e8 ee 1a 00 00       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 80e0bca:	8b 50 04             	mov    0x4(%eax),%edx
 80e0bcd:	8b 45 14             	mov    0x14(%ebp),%eax
 80e0bd0:	8b 40 08             	mov    0x8(%eax),%eax
 80e0bd3:	39 c2                	cmp    %eax,%edx
 80e0bd5:	0f 97 c0             	seta   %al
 80e0bd8:	84 c0                	test   %al,%al
 80e0bda:	74 07                	je     80e0be3 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x1a0>
 80e0bdc:	b8 00 00 00 00       	mov    $0x0,%eax
 80e0be1:	eb 05                	jmp    80e0be8 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj+0x1a5>
 80e0be3:	b8 01 00 00 00       	mov    $0x1,%eax
 80e0be8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80e0beb:	c9                   	leave
 80e0bec:	c3                   	ret
 80e0bed:	90                   	nop

```

```c
// CerashopAddRestrict::FindUserInfoDetail @ 0x80e0a43

/* CerashopAddRestrict::FindUserInfoDetail(std::map<unsigned int, unsigned int, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int,
   CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int
   const, CerashopAddRestrict::paramDaily*> > >&, unsigned int, CerashopAddRestrict::InfoDaily*,
   unsigned int) */

undefined4
CerashopAddRestrict::FindUserInfoDetail
          (map *param_1,map *param_2,uint param_3,InfoDaily *param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_38 [2];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> local_30 [4];
  uint local_2c;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_28 [4];
  pair<unsigned_int_const,unsigned_int> local_24 [8];
  int local_1c;
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_18 [4];
  int local_14;
  time_t local_10;
  
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::find(&local_2c);
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_28);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c,
                     (_Rb_tree_iterator *)local_28);
  if (cVar1 != '\0') {
    local_1c = 0;
    std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int&,int>(local_24,&param_3,&local_1c)
    ;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::insert((pair *)local_38);
    local_2c = local_38[0];
  }
  iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c);
  *(uint *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_5;
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::find((uint *)local_30);
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
          operator!=(local_30,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c);
    if (*(uint *)(param_4 + 8) < *(uint *)(iVar2 + 4)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
            operator->(local_30);
    local_14 = *(int *)(iVar2 + 4);
    local_10 = time((time_t *)0x0);
    if (local_10 < *(int *)(local_14 + 8)) {
      iVar2 = *(int *)(local_14 + 4);
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c)
      ;
      if ((uint)(iVar2 + *(int *)(iVar3 + 4)) <= *(uint *)(param_4 + 8)) {
        return 1;
      }
    }
    else {
      *(undefined4 *)(local_14 + 4) = 0;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_2c)
      ;
      if (*(uint *)(iVar2 + 4) <= *(uint *)(param_4 + 8)) {
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## GetCalcDay

```asm
// === 080e10d7 CerashopAddRestrict::GetCalcDay  [0x080e10d7-0x80e1195] ===
 80e10d7:	55                   	push   %ebp
 80e10d8:	89 e5                	mov    %esp,%ebp
 80e10da:	83 ec 58             	sub    $0x58,%esp
 80e10dd:	8b 45 08             	mov    0x8(%ebp),%eax
 80e10e0:	8b 50 10             	mov    0x10(%eax),%edx
 80e10e3:	8b 45 08             	mov    0x8(%ebp),%eax
 80e10e6:	8b 40 0c             	mov    0xc(%eax),%eax
 80e10e9:	89 d1                	mov    %edx,%ecx
 80e10eb:	29 c1                	sub    %eax,%ecx
 80e10ed:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 80e10f2:	89 c8                	mov    %ecx,%eax
 80e10f4:	f7 ea                	imul   %edx
 80e10f6:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 80e10f9:	89 c2                	mov    %eax,%edx
 80e10fb:	c1 fa 10             	sar    $0x10,%edx
 80e10fe:	89 c8                	mov    %ecx,%eax
 80e1100:	c1 f8 1f             	sar    $0x1f,%eax
 80e1103:	89 d1                	mov    %edx,%ecx
 80e1105:	29 c1                	sub    %eax,%ecx
 80e1107:	89 c8                	mov    %ecx,%eax
 80e1109:	83 c0 01             	add    $0x1,%eax
 80e110c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e110f:	8b 45 08             	mov    0x8(%ebp),%eax
 80e1112:	8b 40 14             	mov    0x14(%eax),%eax
 80e1115:	85 c0                	test   %eax,%eax
 80e1117:	7e 09                	jle    80e1122 <_ZN19CerashopAddRestrictL10GetCalcDayEPKNS_9InfoDailyE+0x4b>
 80e1119:	8b 45 08             	mov    0x8(%ebp),%eax
 80e111c:	8b 40 14             	mov    0x14(%eax),%eax
 80e111f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e1122:	8b 45 08             	mov    0x8(%ebp),%eax
 80e1125:	8b 40 0c             	mov    0xc(%eax),%eax
 80e1128:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80e112b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80e1132:	e8 19 c6 f9 ff       	call   807d750 <time@plt>
 80e1137:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e113a:	eb 12                	jmp    80e114e <_ZN19CerashopAddRestrictL10GetCalcDayEPKNS_9InfoDailyE+0x77>
 80e113c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e113f:	69 d0 80 51 01 00    	imul   $0x15180,%eax,%edx
 80e1145:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e1148:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80e114b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80e114e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e1151:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e1154:	0f 9e c0             	setle  %al
 80e1157:	84 c0                	test   %al,%al
 80e1159:	75 e1                	jne    80e113c <_ZN19CerashopAddRestrictL10GetCalcDayEPKNS_9InfoDailyE+0x65>
 80e115b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80e115e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1162:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e1165:	89 04 24             	mov    %eax,(%esp)
 80e1168:	e8 f3 d1 f9 ff       	call   807e360 <localtime_r@plt>
 80e116d:	e8 0f b0 fe ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80e1172:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 80e1178:	89 45 c8             	mov    %eax,-0x38(%ebp)
 80e117b:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 80e1182:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 80e1189:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80e118c:	89 04 24             	mov    %eax,(%esp)
 80e118f:	e8 8c d6 f9 ff       	call   807e820 <mktime@plt>
 80e1194:	c9                   	leave
 80e1195:	c3                   	ret

```

```c
// CerashopAddRestrict::GetCalcDay @ 0x80e10d7

/* CerashopAddRestrict::GetCalcDay(CerashopAddRestrict::InfoDaily const*) */

void CerashopAddRestrict::GetCalcDay(InfoDaily *param_1)

{
  int iVar1;
  tm local_44;
  int local_18;
  int local_14;
  time_t local_10;
  
  local_14 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x15180 + 1;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_14 = *(int *)(param_1 + 0x14);
  }
  local_18 = *(int *)(param_1 + 0xc);
  local_10 = time((time_t *)0x0);
  for (; local_18 <= local_10; local_18 = local_14 * 0x15180 + local_18) {
  }
  localtime_r(&local_18,&local_44);
  iVar1 = G_CEnvironment();
  local_44.tm_hour = *(int *)(iVar1 + 0x37c);
  local_44.tm_min = 0;
  local_44.tm_sec = 0;
  mktime(&local_44);
  return;
}

```

---

## InputBuyInfoDetail

```asm
// === 080e1196 CerashopAddRestrict::InputBuyInfoDetail  [0x080e1196-0x80e1299] ===
 80e1196:	55                   	push   %ebp
 80e1197:	89 e5                	mov    %esp,%ebp
 80e1199:	83 ec 38             	sub    $0x38,%esp
 80e119c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e11a3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e11a6:	8d 55 10             	lea    0x10(%ebp),%edx
 80e11a9:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e11ad:	8b 55 08             	mov    0x8(%ebp),%edx
 80e11b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e11b4:	89 04 24             	mov    %eax,(%esp)
 80e11b7:	e8 0a 15 00 00       	call   80e26c6 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 80e11bc:	83 ec 04             	sub    $0x4,%esp
 80e11bf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e11c2:	8b 55 08             	mov    0x8(%ebp),%edx
 80e11c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e11c9:	89 04 24             	mov    %eax,(%esp)
 80e11cc:	e8 21 15 00 00       	call   80e26f2 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 80e11d1:	83 ec 04             	sub    $0x4,%esp
 80e11d4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e11d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e11db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e11de:	89 04 24             	mov    %eax,(%esp)
 80e11e1:	e8 32 15 00 00       	call   80e2718 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEneERKS6_>
 80e11e6:	84 c0                	test   %al,%al
 80e11e8:	74 24                	je     80e120e <_ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj+0x78>
 80e11ea:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e11ed:	89 04 24             	mov    %eax,(%esp)
 80e11f0:	e8 37 15 00 00       	call   80e272c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEptEv>
 80e11f5:	8b 40 04             	mov    0x4(%eax),%eax
 80e11f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e11fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e11fe:	8b 40 04             	mov    0x4(%eax),%eax
 80e1201:	89 c2                	mov    %eax,%edx
 80e1203:	03 55 14             	add    0x14(%ebp),%edx
 80e1206:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1209:	89 50 04             	mov    %edx,0x4(%eax)
 80e120c:	eb 75                	jmp    80e1283 <_ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj+0xed>
 80e120e:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 80e1215:	e8 36 32 64 00       	call   8724450 <_Znwj>
 80e121a:	89 c2                	mov    %eax,%edx
 80e121c:	89 d0                	mov    %edx,%eax
 80e121e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80e1224:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80e122b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80e1232:	89 d0                	mov    %edx,%eax
 80e1234:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80e1237:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80e123a:	8b 55 14             	mov    0x14(%ebp),%edx
 80e123d:	89 50 04             	mov    %edx,0x4(%eax)
 80e1240:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80e1243:	8b 55 10             	mov    0x10(%ebp),%edx
 80e1246:	89 10                	mov    %edx,(%eax)
 80e1248:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e124b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e124f:	8d 45 10             	lea    0x10(%ebp),%eax
 80e1252:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1256:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e1259:	89 04 24             	mov    %eax,(%esp)
 80e125c:	e8 4f 16 00 00       	call   80e28b0 <_ZNSt4pairIKjPN19CerashopAddRestrict10paramDailyEEC1IRjRS3_EEOT_OT0_>
 80e1261:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e1264:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80e1267:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e126b:	8b 55 08             	mov    0x8(%ebp),%edx
 80e126e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e1272:	89 04 24             	mov    %eax,(%esp)
 80e1275:	e8 64 16 00 00       	call   80e28de <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE6insertERKS7_>
 80e127a:	83 ec 04             	sub    $0x4,%esp
 80e127d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80e1280:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e1283:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e1286:	89 04 24             	mov    %eax,(%esp)
 80e1289:	e8 49 fe ff ff       	call   80e10d7 <_ZN19CerashopAddRestrictL10GetCalcDayEPKNS_9InfoDailyE>
 80e128e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e1291:	89 42 08             	mov    %eax,0x8(%edx)
 80e1294:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1297:	c9                   	leave
 80e1298:	c3                   	ret
 80e1299:	90                   	nop

```

```c
// CerashopAddRestrict::InputBuyInfoDetail @ 0x80e1196

/* CerashopAddRestrict::InputBuyInfoDetail(std::map<unsigned int, CerashopAddRestrict::paramDaily*,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const,
   CerashopAddRestrict::paramDaily*> > >&, CerashopAddRestrict::InfoDaily const*, unsigned int,
   unsigned int) */

paramDaily *
CerashopAddRestrict::InputBuyInfoDetail(map *param_1,InfoDaily *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  paramDaily *local_2c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> local_28 [4];
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_24 [4];
  pair local_20 [8];
  pair<unsigned_int_const,CerashopAddRestrict::paramDaily*> local_18 [8];
  paramDaily *local_10;
  
  local_10 = (paramDaily *)0x0;
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::find((uint *)local_28);
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
          operator!=(local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    local_2c = operator_new(0xc);
    *(uint *)local_2c = 0;
    *(uint *)(local_2c + 4) = 0;
    *(uint *)(local_2c + 8) = 0;
    *(uint *)(local_2c + 4) = param_4;
    *(uint *)local_2c = param_3;
    std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>::
    pair<unsigned_int&,CerashopAddRestrict::paramDaily*&>(local_18,&param_3,&local_2c);
    std::
    map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
    ::insert(local_20);
    local_10 = local_2c;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
            operator->(local_28);
    local_10 = *(paramDaily **)(iVar2 + 4);
    *(uint *)(local_10 + 4) = *(uint *)(local_10 + 4) + param_4;
  }
  uVar3 = GetCalcDay(param_2);
  *(uint *)(local_10 + 8) = uVar3;
  return local_10;
}

```

---

## readTime

```asm
// === 08abf164 CerashopAddRestrict::readTime  [0x08abf164-0x8abf33e] ===
 8abf164:	55                   	push   %ebp
 8abf165:	89 e5                	mov    %esp,%ebp
 8abf167:	56                   	push   %esi
 8abf168:	53                   	push   %ebx
 8abf169:	83 ec 30             	sub    $0x30,%esp
 8abf16c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8abf173:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8abf177:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8abf17a:	01 c0                	add    %eax,%eax
 8abf17c:	89 c3                	mov    %eax,%ebx
 8abf17e:	03 5d 08             	add    0x8(%ebp),%ebx
 8abf181:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8abf184:	89 04 24             	mov    %eax,(%esp)
 8abf187:	e8 ef d1 df ff       	call   88bc37b <_Z7ScanIntPb>
 8abf18c:	66 89 03             	mov    %ax,(%ebx)
 8abf18f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8abf193:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8abf197:	83 f0 01             	xor    $0x1,%eax
 8abf19a:	84 c0                	test   %al,%al
 8abf19c:	74 2c                	je     8abf1ca <_ZN19CerashopAddRestrict8readTimeEPs+0x66>
 8abf19e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8abf1a5:	e8 56 66 c6 ff       	call   8725800 <__cxa_allocate_exception>
 8abf1aa:	89 c2                	mov    %eax,%edx
 8abf1ac:	c7 02 40 d4 e2 08    	movl   $0x8e2d440,(%edx)
 8abf1b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8abf1b9:	00 
 8abf1ba:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8abf1c1:	09 
 8abf1c2:	89 04 24             	mov    %eax,(%esp)
 8abf1c5:	e8 86 5a c6 ff       	call   8724c50 <__cxa_throw>
 8abf1ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8abf1cd:	01 c0                	add    %eax,%eax
 8abf1cf:	89 c3                	mov    %eax,%ebx
 8abf1d1:	03 5d 08             	add    0x8(%ebp),%ebx
 8abf1d4:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8abf1d7:	89 04 24             	mov    %eax,(%esp)
 8abf1da:	e8 9c d1 df ff       	call   88bc37b <_Z7ScanIntPb>
 8abf1df:	66 89 03             	mov    %ax,(%ebx)
 8abf1e2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8abf1e6:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8abf1ea:	83 f0 01             	xor    $0x1,%eax
 8abf1ed:	84 c0                	test   %al,%al
 8abf1ef:	74 2c                	je     8abf21d <_ZN19CerashopAddRestrict8readTimeEPs+0xb9>
 8abf1f1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8abf1f8:	e8 03 66 c6 ff       	call   8725800 <__cxa_allocate_exception>
 8abf1fd:	89 c2                	mov    %eax,%edx
 8abf1ff:	c7 02 4b d4 e2 08    	movl   $0x8e2d44b,(%edx)
 8abf205:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8abf20c:	00 
 8abf20d:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8abf214:	09 
 8abf215:	89 04 24             	mov    %eax,(%esp)
 8abf218:	e8 33 5a c6 ff       	call   8724c50 <__cxa_throw>
 8abf21d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8abf220:	01 c0                	add    %eax,%eax
 8abf222:	89 c3                	mov    %eax,%ebx
 8abf224:	03 5d 08             	add    0x8(%ebp),%ebx
 8abf227:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8abf22a:	89 04 24             	mov    %eax,(%esp)
 8abf22d:	e8 49 d1 df ff       	call   88bc37b <_Z7ScanIntPb>
 8abf232:	66 89 03             	mov    %ax,(%ebx)
 8abf235:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8abf239:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8abf23d:	83 f0 01             	xor    $0x1,%eax
 8abf240:	84 c0                	test   %al,%al
 8abf242:	74 2c                	je     8abf270 <_ZN19CerashopAddRestrict8readTimeEPs+0x10c>
 8abf244:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8abf24b:	e8 b0 65 c6 ff       	call   8725800 <__cxa_allocate_exception>
 8abf250:	89 c2                	mov    %eax,%edx
 8abf252:	c7 02 57 d4 e2 08    	movl   $0x8e2d457,(%edx)
 8abf258:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8abf25f:	00 
 8abf260:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8abf267:	09 
 8abf268:	89 04 24             	mov    %eax,(%esp)
 8abf26b:	e8 e0 59 c6 ff       	call   8724c50 <__cxa_throw>
 8abf270:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8abf273:	01 c0                	add    %eax,%eax
 8abf275:	89 c3                	mov    %eax,%ebx
 8abf277:	03 5d 08             	add    0x8(%ebp),%ebx
 8abf27a:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8abf27d:	89 04 24             	mov    %eax,(%esp)
 8abf280:	e8 f6 d0 df ff       	call   88bc37b <_Z7ScanIntPb>
 8abf285:	66 89 03             	mov    %ax,(%ebx)
 8abf288:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8abf28c:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8abf290:	83 f0 01             	xor    $0x1,%eax
 8abf293:	84 c0                	test   %al,%al
 8abf295:	74 2c                	je     8abf2c3 <_ZN19CerashopAddRestrict8readTimeEPs+0x15f>
 8abf297:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8abf29e:	e8 5d 65 c6 ff       	call   8725800 <__cxa_allocate_exception>
 8abf2a3:	89 c2                	mov    %eax,%edx
 8abf2a5:	c7 02 61 d4 e2 08    	movl   $0x8e2d461,(%edx)
 8abf2ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8abf2b2:	00 
 8abf2b3:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8abf2ba:	09 
 8abf2bb:	89 04 24             	mov    %eax,(%esp)
 8abf2be:	e8 8d 59 c6 ff       	call   8724c50 <__cxa_throw>
 8abf2c3:	bb 01 00 00 00       	mov    $0x1,%ebx
 8abf2c8:	eb 6c                	jmp    8abf336 <_ZN19CerashopAddRestrict8readTimeEPs+0x1d2>
 8abf2ca:	83 fa 01             	cmp    $0x1,%edx
 8abf2cd:	74 08                	je     8abf2d7 <_ZN19CerashopAddRestrict8readTimeEPs+0x173>
 8abf2cf:	89 04 24             	mov    %eax,(%esp)
 8abf2d2:	e8 79 44 02 00       	call   8ae3750 <_Unwind_Resume>
 8abf2d7:	89 04 24             	mov    %eax,(%esp)
 8abf2da:	e8 01 6a c6 ff       	call   8725ce0 <__cxa_begin_catch>
 8abf2df:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8abf2e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf2e5:	89 44 24 14          	mov    %eax,0x14(%esp)
 8abf2e9:	c7 44 24 10 6c d4 e2 	movl   $0x8e2d46c,0x10(%esp)
 8abf2f0:	08 
 8abf2f1:	c7 44 24 0c 25 00 00 	movl   $0x25,0xc(%esp)
 8abf2f8:	00 
 8abf2f9:	c7 44 24 08 ec d8 e2 	movl   $0x8e2d8ec,0x8(%esp)
 8abf300:	08 
 8abf301:	c7 44 24 04 88 d4 e2 	movl   $0x8e2d488,0x4(%esp)
 8abf308:	08 
 8abf309:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8abf310:	e8 f5 48 01 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8abf315:	bb 00 00 00 00       	mov    $0x0,%ebx
 8abf31a:	e8 11 69 c6 ff       	call   8725c30 <__cxa_end_catch>
 8abf31f:	eb 15                	jmp    8abf336 <_ZN19CerashopAddRestrict8readTimeEPs+0x1d2>
 8abf321:	89 d3                	mov    %edx,%ebx
 8abf323:	89 c6                	mov    %eax,%esi
 8abf325:	e8 06 69 c6 ff       	call   8725c30 <__cxa_end_catch>
 8abf32a:	89 f0                	mov    %esi,%eax
 8abf32c:	89 da                	mov    %ebx,%edx
 8abf32e:	89 04 24             	mov    %eax,(%esp)
 8abf331:	e8 1a 44 02 00       	call   8ae3750 <_Unwind_Resume>
 8abf336:	89 d8                	mov    %ebx,%eax
 8abf338:	83 c4 30             	add    $0x30,%esp
 8abf33b:	5b                   	pop    %ebx
 8abf33c:	5e                   	pop    %esi
 8abf33d:	5d                   	pop    %ebp
 8abf33e:	c3                   	ret

```

```c
// CerashopAddRestrict::readTime @ 0x8abf164

/* CerashopAddRestrict::readTime(short*) */

undefined4 CerashopAddRestrict::readTime(short *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  bool local_15;
  int local_14;
  
  local_14 = 0;
  local_15 = false;
                    /* try { // try from 08abf187 to 08abf2c2 has its CatchHandler @ 08abf2ca */
  sVar1 = ScanInt(&local_15);
  *param_1 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start year";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start month";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start day";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start time";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return 1;
}

```

---

## uint32Time

```asm
// === 08abf33f CerashopAddRestrict::uint32Time  [0x08abf33f-0x8abf3cb] ===
 8abf33f:	55                   	push   %ebp
 8abf340:	89 e5                	mov    %esp,%ebp
 8abf342:	83 ec 28             	sub    $0x28,%esp
 8abf345:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8abf34c:	e8 ff e3 5b ff       	call   807d750 <time@plt>
 8abf351:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8abf354:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf357:	89 04 24             	mov    %eax,(%esp)
 8abf35a:	e8 d1 ef 5b ff       	call   807e330 <localtime@plt>
 8abf35f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8abf362:	8b 45 08             	mov    0x8(%ebp),%eax
 8abf365:	0f b7 00             	movzwl (%eax),%eax
 8abf368:	98                   	cwtl
 8abf369:	8d 90 94 f8 ff ff    	lea    -0x76c(%eax),%edx
 8abf36f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf372:	89 50 14             	mov    %edx,0x14(%eax)
 8abf375:	8b 45 08             	mov    0x8(%ebp),%eax
 8abf378:	83 c0 02             	add    $0x2,%eax
 8abf37b:	0f b7 00             	movzwl (%eax),%eax
 8abf37e:	98                   	cwtl
 8abf37f:	8d 50 ff             	lea    -0x1(%eax),%edx
 8abf382:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf385:	89 50 10             	mov    %edx,0x10(%eax)
 8abf388:	8b 45 08             	mov    0x8(%ebp),%eax
 8abf38b:	83 c0 04             	add    $0x4,%eax
 8abf38e:	0f b7 00             	movzwl (%eax),%eax
 8abf391:	0f bf d0             	movswl %ax,%edx
 8abf394:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf397:	89 50 0c             	mov    %edx,0xc(%eax)
 8abf39a:	8b 45 08             	mov    0x8(%ebp),%eax
 8abf39d:	83 c0 06             	add    $0x6,%eax
 8abf3a0:	0f b7 00             	movzwl (%eax),%eax
 8abf3a3:	0f bf d0             	movswl %ax,%edx
 8abf3a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf3a9:	89 50 08             	mov    %edx,0x8(%eax)
 8abf3ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf3af:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8abf3b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf3b9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8abf3bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8abf3c2:	89 04 24             	mov    %eax,(%esp)
 8abf3c5:	e8 56 f4 5b ff       	call   807e820 <mktime@plt>
 8abf3ca:	c9                   	leave
 8abf3cb:	c3                   	ret

```

```c
// CerashopAddRestrict::uint32Time @ 0x8abf33f

/* CerashopAddRestrict::uint32Time(short*) */

void CerashopAddRestrict::uint32Time(short *param_1)

{
  time_t local_14;
  tm *local_10;
  
  local_14 = time((time_t *)0x0);
  local_10 = localtime(&local_14);
  local_10->tm_year = *param_1 + -0x76c;
  local_10->tm_mon = param_1[1] + -1;
  local_10->tm_mday = (int)param_1[2];
  local_10->tm_hour = (int)param_1[3];
  local_10->tm_min = 0;
  local_10->tm_sec = 0;
  mktime(local_10);
  return;
}

```

