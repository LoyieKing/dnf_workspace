# WongWork__CCalcCharacStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## ApplyElixerItem

```asm
// === 0831e85c WongWork::CCalcCharacStat::ApplyElixerItem  [0x0831e85c-0x831e9c9] ===
 831e85c:	55                   	push   %ebp
 831e85d:	89 e5                	mov    %esp,%ebp
 831e85f:	53                   	push   %ebx
 831e860:	83 ec 10             	sub    $0x10,%esp
 831e863:	83 7d 0c 09          	cmpl   $0x9,0xc(%ebp)
 831e867:	0f 87 56 01 00 00    	ja     831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e86d:	8b 45 0c             	mov    0xc(%ebp),%eax
 831e870:	c1 e0 02             	shl    $0x2,%eax
 831e873:	8b 80 c0 4f c2 08    	mov    0x8c24fc0(%eax),%eax
 831e879:	ff e0                	jmp    *%eax
 831e87b:	8b 45 08             	mov    0x8(%ebp),%eax
 831e87e:	0f b7 48 08          	movzwl 0x8(%eax),%ecx
 831e882:	8b 45 10             	mov    0x10(%ebp),%eax
 831e885:	89 c2                	mov    %eax,%edx
 831e887:	89 d0                	mov    %edx,%eax
 831e889:	c1 e0 02             	shl    $0x2,%eax
 831e88c:	01 d0                	add    %edx,%eax
 831e88e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831e895:	01 d0                	add    %edx,%eax
 831e897:	01 c0                	add    %eax,%eax
 831e899:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 831e89c:	8b 45 08             	mov    0x8(%ebp),%eax
 831e89f:	66 89 50 08          	mov    %dx,0x8(%eax)
 831e8a3:	e9 1b 01 00 00       	jmp    831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e8a8:	8b 45 08             	mov    0x8(%ebp),%eax
 831e8ab:	0f b7 48 0c          	movzwl 0xc(%eax),%ecx
 831e8af:	8b 45 10             	mov    0x10(%ebp),%eax
 831e8b2:	89 c2                	mov    %eax,%edx
 831e8b4:	89 d0                	mov    %edx,%eax
 831e8b6:	c1 e0 02             	shl    $0x2,%eax
 831e8b9:	01 d0                	add    %edx,%eax
 831e8bb:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831e8c2:	01 d0                	add    %edx,%eax
 831e8c4:	01 c0                	add    %eax,%eax
 831e8c6:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 831e8c9:	8b 45 08             	mov    0x8(%ebp),%eax
 831e8cc:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831e8d0:	e9 ee 00 00 00       	jmp    831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e8d5:	8b 45 08             	mov    0x8(%ebp),%eax
 831e8d8:	0f b7 48 0a          	movzwl 0xa(%eax),%ecx
 831e8dc:	8b 45 10             	mov    0x10(%ebp),%eax
 831e8df:	89 c2                	mov    %eax,%edx
 831e8e1:	89 d0                	mov    %edx,%eax
 831e8e3:	c1 e0 02             	shl    $0x2,%eax
 831e8e6:	01 d0                	add    %edx,%eax
 831e8e8:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831e8ef:	01 d0                	add    %edx,%eax
 831e8f1:	01 c0                	add    %eax,%eax
 831e8f3:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 831e8f6:	8b 45 08             	mov    0x8(%ebp),%eax
 831e8f9:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831e8fd:	e9 c1 00 00 00       	jmp    831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e902:	8b 45 08             	mov    0x8(%ebp),%eax
 831e905:	0f b7 48 0e          	movzwl 0xe(%eax),%ecx
 831e909:	8b 45 10             	mov    0x10(%ebp),%eax
 831e90c:	89 c2                	mov    %eax,%edx
 831e90e:	89 d0                	mov    %edx,%eax
 831e910:	c1 e0 02             	shl    $0x2,%eax
 831e913:	01 d0                	add    %edx,%eax
 831e915:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831e91c:	01 d0                	add    %edx,%eax
 831e91e:	01 c0                	add    %eax,%eax
 831e920:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 831e923:	8b 45 08             	mov    0x8(%ebp),%eax
 831e926:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831e92a:	e9 94 00 00 00       	jmp    831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e92f:	8b 45 08             	mov    0x8(%ebp),%eax
 831e932:	8b 10                	mov    (%eax),%edx
 831e934:	8b 45 10             	mov    0x10(%ebp),%eax
 831e937:	69 c0 fa 00 00 00    	imul   $0xfa,%eax,%eax
 831e93d:	01 c2                	add    %eax,%edx
 831e93f:	8b 45 08             	mov    0x8(%ebp),%eax
 831e942:	89 10                	mov    %edx,(%eax)
 831e944:	eb 7d                	jmp    831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e946:	8b 45 08             	mov    0x8(%ebp),%eax
 831e949:	8b 50 04             	mov    0x4(%eax),%edx
 831e94c:	8b 45 10             	mov    0x10(%ebp),%eax
 831e94f:	69 c0 fa 00 00 00    	imul   $0xfa,%eax,%eax
 831e955:	01 c2                	add    %eax,%edx
 831e957:	8b 45 08             	mov    0x8(%ebp),%eax
 831e95a:	89 50 04             	mov    %edx,0x4(%eax)
 831e95d:	eb 64                	jmp    831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e95f:	8b 45 08             	mov    0x8(%ebp),%eax
 831e962:	8b 48 42             	mov    0x42(%eax),%ecx
 831e965:	8b 55 10             	mov    0x10(%ebp),%edx
 831e968:	89 d0                	mov    %edx,%eax
 831e96a:	c1 e0 02             	shl    $0x2,%eax
 831e96d:	01 d0                	add    %edx,%eax
 831e96f:	01 c0                	add    %eax,%eax
 831e971:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 831e974:	8b 45 08             	mov    0x8(%ebp),%eax
 831e977:	89 50 42             	mov    %edx,0x42(%eax)
 831e97a:	eb 47                	jmp    831e9c3 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x167>
 831e97c:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 831e983:	eb 33                	jmp    831e9b8 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x15c>
 831e985:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 831e988:	8b 55 f8             	mov    -0x8(%ebp),%edx
 831e98b:	8b 45 08             	mov    0x8(%ebp),%eax
 831e98e:	83 c2 08             	add    $0x8,%edx
 831e991:	0f b7 04 50          	movzwl (%eax,%edx,2),%eax
 831e995:	89 c3                	mov    %eax,%ebx
 831e997:	8b 45 10             	mov    0x10(%ebp),%eax
 831e99a:	89 c2                	mov    %eax,%edx
 831e99c:	89 d0                	mov    %edx,%eax
 831e99e:	c1 e0 02             	shl    $0x2,%eax
 831e9a1:	01 d0                	add    %edx,%eax
 831e9a3:	01 c0                	add    %eax,%eax
 831e9a5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 831e9a8:	89 c2                	mov    %eax,%edx
 831e9aa:	8b 45 08             	mov    0x8(%ebp),%eax
 831e9ad:	83 c1 08             	add    $0x8,%ecx
 831e9b0:	66 89 14 48          	mov    %dx,(%eax,%ecx,2)
 831e9b4:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 831e9b8:	83 7d f8 03          	cmpl   $0x3,-0x8(%ebp)
 831e9bc:	0f 9e c0             	setle  %al
 831e9bf:	84 c0                	test   %al,%al
 831e9c1:	75 c2                	jne    831e985 <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii+0x129>
 831e9c3:	83 c4 10             	add    $0x10,%esp
 831e9c6:	5b                   	pop    %ebx
 831e9c7:	5d                   	pop    %ebp
 831e9c8:	c3                   	ret
 831e9c9:	90                   	nop

```

```c
// WongWork::CCalcCharacStat::ApplyElixerItem @ 0x831e85c

/* WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int) */

void WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  int local_c;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 2:
    *(int *)param_1 = *(int *)param_1 + param_3 * 0xfa;
    break;
  case 3:
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3 * 0xfa;
    break;
  case 4:
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + sVar1 * 0x32;
    break;
  case 5:
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + sVar1 * 0x32;
    break;
  case 6:
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + sVar1 * 0x32;
    break;
  case 7:
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + sVar1 * 0x32;
    break;
  case 8:
    *(int *)(param_1 + 0x42) = *(int *)(param_1 + 0x42) + param_3 * 10;
    break;
  case 9:
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      *(short *)(param_1 + (local_c + 8) * 2) = *(short *)(param_1 + (local_c + 8) * 2) + sVar1 * 10
      ;
    }
  }
  return;
}

```

---

## CalcStat

```asm
// === 0831ec4a WongWork::CCalcCharacStat::CalcStat  [0x0831ec4a-0x831ed6b] ===
 831ec4a:	55                   	push   %ebp
 831ec4b:	89 e5                	mov    %esp,%ebp
 831ec4d:	83 ec 28             	sub    $0x28,%esp
 831ec50:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec53:	89 04 24             	mov    %eax,(%esp)
 831ec56:	e8 0d 96 02 00       	call   8348268 <_ZN15_Additioal_info5clearEv>
 831ec5b:	e8 3b d5 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 831ec60:	8b 50 14             	mov    0x14(%eax),%edx
 831ec63:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ec66:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 831ec6c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 831ec6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ec73:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec76:	89 04 24             	mov    %eax,(%esp)
 831ec79:	e8 82 76 e2 ff       	call   8146300 <_ZN15_Additioal_info3addERKS_>
 831ec7e:	e8 18 d5 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 831ec83:	8b 50 14             	mov    0x14(%eax),%edx
 831ec86:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ec89:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 831ec8f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 831ec92:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 831ec99:	00 
 831ec9a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831eca1:	00 
 831eca2:	89 04 24             	mov    %eax,(%esp)
 831eca5:	e8 94 9b 02 00       	call   834883e <_ZNK10CCharacter17get_growtype_statEii>
 831ecaa:	89 45 e8             	mov    %eax,-0x18(%ebp)
 831ecad:	e8 e9 d4 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 831ecb2:	8b 50 14             	mov    0x14(%eax),%edx
 831ecb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ecb8:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 831ecbe:	01 c2                	add    %eax,%edx
 831ecc0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 831ecc7:	00 
 831ecc8:	8b 45 10             	mov    0x10(%ebp),%eax
 831eccb:	89 44 24 04          	mov    %eax,0x4(%esp)
 831eccf:	89 14 24             	mov    %edx,(%esp)
 831ecd2:	e8 67 9b 02 00       	call   834883e <_ZNK10CCharacter17get_growtype_statEii>
 831ecd7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 831ecda:	e8 bc d4 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 831ecdf:	8b 50 14             	mov    0x14(%eax),%edx
 831ece2:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ece5:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 831eceb:	01 c2                	add    %eax,%edx
 831eced:	8b 45 14             	mov    0x14(%ebp),%eax
 831ecf0:	89 44 24 08          	mov    %eax,0x8(%esp)
 831ecf4:	8b 45 10             	mov    0x10(%ebp),%eax
 831ecf7:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ecfb:	89 14 24             	mov    %edx,(%esp)
 831ecfe:	e8 3b 9b 02 00       	call   834883e <_ZNK10CCharacter17get_growtype_statEii>
 831ed03:	89 45 f0             	mov    %eax,-0x10(%ebp)
 831ed06:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 831ed0d:	eb 4a                	jmp    831ed59 <_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii+0x10f>
 831ed0f:	83 7d f4 0e          	cmpl   $0xe,-0xc(%ebp)
 831ed13:	7f 14                	jg     831ed29 <_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii+0xdf>
 831ed15:	8b 45 e8             	mov    -0x18(%ebp),%eax
 831ed18:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ed1c:	8b 45 08             	mov    0x8(%ebp),%eax
 831ed1f:	89 04 24             	mov    %eax,(%esp)
 831ed22:	e8 d9 75 e2 ff       	call   8146300 <_ZN15_Additioal_info3addERKS_>
 831ed27:	eb 2c                	jmp    831ed55 <_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii+0x10b>
 831ed29:	83 7d f4 31          	cmpl   $0x31,-0xc(%ebp)
 831ed2d:	7f 14                	jg     831ed43 <_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii+0xf9>
 831ed2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 831ed32:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ed36:	8b 45 08             	mov    0x8(%ebp),%eax
 831ed39:	89 04 24             	mov    %eax,(%esp)
 831ed3c:	e8 bf 75 e2 ff       	call   8146300 <_ZN15_Additioal_info3addERKS_>
 831ed41:	eb 12                	jmp    831ed55 <_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii+0x10b>
 831ed43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831ed46:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ed4a:	8b 45 08             	mov    0x8(%ebp),%eax
 831ed4d:	89 04 24             	mov    %eax,(%esp)
 831ed50:	e8 ab 75 e2 ff       	call   8146300 <_ZN15_Additioal_info3addERKS_>
 831ed55:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 831ed59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 831ed5c:	3b 45 18             	cmp    0x18(%ebp),%eax
 831ed5f:	0f 9c c0             	setl   %al
 831ed62:	84 c0                	test   %al,%al
 831ed64:	75 a9                	jne    831ed0f <_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii+0xc5>
 831ed66:	8b 45 08             	mov    0x8(%ebp),%eax
 831ed69:	c9                   	leave
 831ed6a:	c3                   	ret
 831ed6b:	90                   	nop

```

```c
// WongWork::CCalcCharacStat::CalcStat @ 0x831ec4a

/* WongWork::CCalcCharacStat::CalcStat(_Additioal_info*, int, int, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::CalcStat
          (_Additioal_info *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  _Additioal_info *p_Var2;
  _Additioal_info *p_Var3;
  _Additioal_info *p_Var4;
  undefined4 local_10;
  
  _Additioal_info::clear(param_1);
  iVar1 = G_CDataManager();
  _Additioal_info::add(param_1,(_Additioal_info *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc));
  iVar1 = G_CDataManager();
  p_Var2 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc),0,0);
  iVar1 = G_CDataManager();
  p_Var3 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc),param_3,0);
  iVar1 = G_CDataManager();
  p_Var4 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc),param_3,param_4);
  for (local_10 = 1; local_10 < param_5; local_10 = local_10 + 1) {
    if (local_10 < 0xf) {
      _Additioal_info::add(param_1,p_Var2);
    }
    else if (local_10 < 0x32) {
      _Additioal_info::add(param_1,p_Var3);
    }
    else {
      _Additioal_info::add(param_1,p_Var4);
    }
  }
  return param_1;
}

```

---

## InitializeStat

```asm
// === 0831e9ca WongWork::CCalcCharacStat::InitializeStat  [0x0831e9ca-0x831ec49] ===
 831e9ca:	55                   	push   %ebp
 831e9cb:	89 e5                	mov    %esp,%ebp
 831e9cd:	83 ec 18             	sub    $0x18,%esp
 831e9d0:	8b 45 08             	mov    0x8(%ebp),%eax
 831e9d3:	89 04 24             	mov    %eax,(%esp)
 831e9d6:	e8 8d 98 02 00       	call   8348268 <_ZN15_Additioal_info5clearEv>
 831e9db:	8b 45 0c             	mov    0xc(%ebp),%eax
 831e9de:	83 f8 01             	cmp    $0x1,%eax
 831e9e1:	0f 84 be 00 00 00    	je     831eaa5 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0xdb>
 831e9e7:	83 f8 01             	cmp    $0x1,%eax
 831e9ea:	7f 09                	jg     831e9f5 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x2b>
 831e9ec:	85 c0                	test   %eax,%eax
 831e9ee:	74 1c                	je     831ea0c <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x42>
 831e9f0:	e9 52 02 00 00       	jmp    831ec47 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x27d>
 831e9f5:	83 f8 02             	cmp    $0x2,%eax
 831e9f8:	0f 84 40 01 00 00    	je     831eb3e <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x174>
 831e9fe:	83 f8 03             	cmp    $0x3,%eax
 831ea01:	0f 84 be 01 00 00    	je     831ebc5 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x1fb>
 831ea07:	e9 3b 02 00 00       	jmp    831ec47 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x27d>
 831ea0c:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea0f:	c7 00 dc 05 00 00    	movl   $0x5dc,(%eax)
 831ea15:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea18:	c7 40 04 dc 05 00 00 	movl   $0x5dc,0x4(%eax)
 831ea1f:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea22:	66 c7 40 08 32 00    	movw   $0x32,0x8(%eax)
 831ea28:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea2b:	66 c7 40 0a 32 00    	movw   $0x32,0xa(%eax)
 831ea31:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea34:	66 c7 40 0c 3c 00    	movw   $0x3c,0xc(%eax)
 831ea3a:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea3d:	66 c7 40 0e 32 00    	movw   $0x32,0xe(%eax)
 831ea43:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea46:	66 c7 40 14 c8 00    	movw   $0xc8,0x14(%eax)
 831ea4c:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea4f:	66 c7 40 16 38 ff    	movw   $0xff38,0x16(%eax)
 831ea55:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea58:	c7 40 3a 80 1a 06 00 	movl   $0x61a80,0x3a(%eax)
 831ea5f:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea62:	66 c7 40 40 96 00    	movw   $0x96,0x40(%eax)
 831ea68:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea6b:	c7 40 42 34 21 00 00 	movl   $0x2134,0x42(%eax)
 831ea72:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea75:	66 c7 40 46 34 21    	movw   $0x2134,0x46(%eax)
 831ea7b:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea7e:	66 c7 40 48 58 1b    	movw   $0x1b58,0x48(%eax)
 831ea84:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea87:	66 c7 40 4a 70 17    	movw   $0x1770,0x4a(%eax)
 831ea8d:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea90:	66 c7 40 4c cc 10    	movw   $0x10cc,0x4c(%eax)
 831ea96:	8b 45 08             	mov    0x8(%ebp),%eax
 831ea99:	c7 40 4e 40 60 0a 00 	movl   $0xa6040,0x4e(%eax)
 831eaa0:	e9 a2 01 00 00       	jmp    831ec47 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x27d>
 831eaa5:	8b 45 08             	mov    0x8(%ebp),%eax
 831eaa8:	c7 00 08 07 00 00    	movl   $0x708,(%eax)
 831eaae:	8b 45 08             	mov    0x8(%ebp),%eax
 831eab1:	c7 40 04 dc 05 00 00 	movl   $0x5dc,0x4(%eax)
 831eab8:	8b 45 08             	mov    0x8(%ebp),%eax
 831eabb:	66 c7 40 08 3c 00    	movw   $0x3c,0x8(%eax)
 831eac1:	8b 45 08             	mov    0x8(%ebp),%eax
 831eac4:	66 c7 40 0a 3c 00    	movw   $0x3c,0xa(%eax)
 831eaca:	8b 45 08             	mov    0x8(%ebp),%eax
 831eacd:	66 c7 40 0c 32 00    	movw   $0x32,0xc(%eax)
 831ead3:	8b 45 08             	mov    0x8(%ebp),%eax
 831ead6:	66 c7 40 0e 32 00    	movw   $0x32,0xe(%eax)
 831eadc:	8b 45 08             	mov    0x8(%ebp),%eax
 831eadf:	66 c7 40 14 38 ff    	movw   $0xff38,0x14(%eax)
 831eae5:	8b 45 08             	mov    0x8(%ebp),%eax
 831eae8:	66 c7 40 16 c8 00    	movw   $0xc8,0x16(%eax)
 831eaee:	8b 45 08             	mov    0x8(%ebp),%eax
 831eaf1:	c7 40 3a e0 93 04 00 	movl   $0x493e0,0x3a(%eax)
 831eaf8:	8b 45 08             	mov    0x8(%ebp),%eax
 831eafb:	66 c7 40 40 82 00    	movw   $0x82,0x40(%eax)
 831eb01:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb04:	c7 40 42 8c 23 00 00 	movl   $0x238c,0x42(%eax)
 831eb0b:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb0e:	66 c7 40 46 1c 25    	movw   $0x251c,0x46(%eax)
 831eb14:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb17:	66 c7 40 48 10 27    	movw   $0x2710,0x48(%eax)
 831eb1d:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb20:	66 c7 40 4a 70 17    	movw   $0x1770,0x4a(%eax)
 831eb26:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb29:	66 c7 40 4c 5c 12    	movw   $0x125c,0x4c(%eax)
 831eb2f:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb32:	c7 40 4e 20 a1 07 00 	movl   $0x7a120,0x4e(%eax)
 831eb39:	e9 09 01 00 00       	jmp    831ec47 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x27d>
 831eb3e:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb41:	c7 00 e2 04 00 00    	movl   $0x4e2,(%eax)
 831eb47:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb4a:	c7 40 04 08 07 00 00 	movl   $0x708,0x4(%eax)
 831eb51:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb54:	66 c7 40 08 28 00    	movw   $0x28,0x8(%eax)
 831eb5a:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb5d:	66 c7 40 0a 28 00    	movw   $0x28,0xa(%eax)
 831eb63:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb66:	66 c7 40 0c 46 00    	movw   $0x46,0xc(%eax)
 831eb6c:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb6f:	66 c7 40 0e 3c 00    	movw   $0x3c,0xe(%eax)
 831eb75:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb78:	c7 40 3a 10 09 05 00 	movl   $0x50910,0x3a(%eax)
 831eb7f:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb82:	66 c7 40 40 af 00    	movw   $0xaf,0x40(%eax)
 831eb88:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb8b:	c7 40 42 08 20 00 00 	movl   $0x2008,0x42(%eax)
 831eb92:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb95:	66 c7 40 46 1c 25    	movw   $0x251c,0x46(%eax)
 831eb9b:	8b 45 08             	mov    0x8(%ebp),%eax
 831eb9e:	66 c7 40 48 40 1f    	movw   $0x1f40,0x48(%eax)
 831eba4:	8b 45 08             	mov    0x8(%ebp),%eax
 831eba7:	66 c7 40 4a 70 17    	movw   $0x1770,0x4a(%eax)
 831ebad:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebb0:	66 c7 40 4c 24 13    	movw   $0x1324,0x4c(%eax)
 831ebb6:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebb9:	c7 40 4e c0 27 09 00 	movl   $0x927c0,0x4e(%eax)
 831ebc0:	e9 82 00 00 00       	jmp    831ec47 <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi+0x27d>
 831ebc5:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebc8:	c7 00 e8 03 00 00    	movl   $0x3e8,(%eax)
 831ebce:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebd1:	c7 40 04 d0 07 00 00 	movl   $0x7d0,0x4(%eax)
 831ebd8:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebdb:	66 c7 40 08 1e 00    	movw   $0x1e,0x8(%eax)
 831ebe1:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebe4:	66 c7 40 0a 1e 00    	movw   $0x1e,0xa(%eax)
 831ebea:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebed:	66 c7 40 0c 50 00    	movw   $0x50,0xc(%eax)
 831ebf3:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebf6:	66 c7 40 0e 46 00    	movw   $0x46,0xe(%eax)
 831ebfc:	8b 45 08             	mov    0x8(%ebp),%eax
 831ebff:	c7 40 3a c0 45 04 00 	movl   $0x445c0,0x3a(%eax)
 831ec06:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec09:	66 c7 40 40 c8 00    	movw   $0xc8,0x40(%eax)
 831ec0f:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec12:	c7 40 42 40 1f 00 00 	movl   $0x1f40,0x42(%eax)
 831ec19:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec1c:	66 c7 40 46 10 27    	movw   $0x2710,0x46(%eax)
 831ec22:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec25:	66 c7 40 48 10 27    	movw   $0x2710,0x48(%eax)
 831ec2b:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec2e:	66 c7 40 4a 88 13    	movw   $0x1388,0x4a(%eax)
 831ec34:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec37:	66 c7 40 4c ac 0d    	movw   $0xdac,0x4c(%eax)
 831ec3d:	8b 45 08             	mov    0x8(%ebp),%eax
 831ec40:	c7 40 4e 80 1a 06 00 	movl   $0x61a80,0x4e(%eax)
 831ec47:	c9                   	leave
 831ec48:	c3                   	ret
 831ec49:	90                   	nop

```

```c
// WongWork::CCalcCharacStat::InitializeStat @ 0x831e9ca

/* WongWork::CCalcCharacStat::InitializeStat(_Additioal_info*, int) */

void WongWork::CCalcCharacStat::InitializeStat(_Additioal_info *param_1,int param_2)

{
  _Additioal_info::clear(param_1);
  if (param_2 == 1) {
    *(undefined4 *)param_1 = 0x708;
    *(undefined4 *)(param_1 + 4) = 0x5dc;
    *(undefined2 *)(param_1 + 8) = 0x3c;
    *(undefined2 *)(param_1 + 10) = 0x3c;
    *(undefined2 *)(param_1 + 0xc) = 0x32;
    *(undefined2 *)(param_1 + 0xe) = 0x32;
    *(undefined2 *)(param_1 + 0x14) = 0xff38;
    *(undefined2 *)(param_1 + 0x16) = 200;
    *(undefined4 *)(param_1 + 0x3a) = 300000;
    *(undefined2 *)(param_1 + 0x40) = 0x82;
    *(undefined4 *)(param_1 + 0x42) = 0x238c;
    *(undefined2 *)(param_1 + 0x46) = 0x251c;
    *(undefined2 *)(param_1 + 0x48) = 10000;
    *(undefined2 *)(param_1 + 0x4a) = 6000;
    *(undefined2 *)(param_1 + 0x4c) = 0x125c;
    *(undefined4 *)(param_1 + 0x4e) = 500000;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      *(undefined4 *)param_1 = 0x5dc;
      *(undefined4 *)(param_1 + 4) = 0x5dc;
      *(undefined2 *)(param_1 + 8) = 0x32;
      *(undefined2 *)(param_1 + 10) = 0x32;
      *(undefined2 *)(param_1 + 0xc) = 0x3c;
      *(undefined2 *)(param_1 + 0xe) = 0x32;
      *(undefined2 *)(param_1 + 0x14) = 200;
      *(undefined2 *)(param_1 + 0x16) = 0xff38;
      *(undefined4 *)(param_1 + 0x3a) = 400000;
      *(undefined2 *)(param_1 + 0x40) = 0x96;
      *(undefined4 *)(param_1 + 0x42) = 0x2134;
      *(undefined2 *)(param_1 + 0x46) = 0x2134;
      *(undefined2 *)(param_1 + 0x48) = 7000;
      *(undefined2 *)(param_1 + 0x4a) = 6000;
      *(undefined2 *)(param_1 + 0x4c) = 0x10cc;
      *(undefined4 *)(param_1 + 0x4e) = 680000;
    }
  }
  else if (param_2 == 2) {
    *(undefined4 *)param_1 = 0x4e2;
    *(undefined4 *)(param_1 + 4) = 0x708;
    *(undefined2 *)(param_1 + 8) = 0x28;
    *(undefined2 *)(param_1 + 10) = 0x28;
    *(undefined2 *)(param_1 + 0xc) = 0x46;
    *(undefined2 *)(param_1 + 0xe) = 0x3c;
    *(undefined4 *)(param_1 + 0x3a) = 330000;
    *(undefined2 *)(param_1 + 0x40) = 0xaf;
    *(undefined4 *)(param_1 + 0x42) = 0x2008;
    *(undefined2 *)(param_1 + 0x46) = 0x251c;
    *(undefined2 *)(param_1 + 0x48) = 8000;
    *(undefined2 *)(param_1 + 0x4a) = 6000;
    *(undefined2 *)(param_1 + 0x4c) = 0x1324;
    *(undefined4 *)(param_1 + 0x4e) = 600000;
  }
  else if (param_2 == 3) {
    *(undefined4 *)param_1 = 1000;
    *(undefined4 *)(param_1 + 4) = 2000;
    *(undefined2 *)(param_1 + 8) = 0x1e;
    *(undefined2 *)(param_1 + 10) = 0x1e;
    *(undefined2 *)(param_1 + 0xc) = 0x50;
    *(undefined2 *)(param_1 + 0xe) = 0x46;
    *(undefined4 *)(param_1 + 0x3a) = 280000;
    *(undefined2 *)(param_1 + 0x40) = 200;
    *(undefined4 *)(param_1 + 0x42) = 8000;
    *(undefined2 *)(param_1 + 0x46) = 10000;
    *(undefined2 *)(param_1 + 0x48) = 10000;
    *(undefined2 *)(param_1 + 0x4a) = 5000;
    *(undefined2 *)(param_1 + 0x4c) = 0xdac;
    *(undefined4 *)(param_1 + 0x4e) = 400000;
  }
  return;
}

```

---

## _CalcFighter

```asm
// === 0831f282 WongWork::CCalcCharacStat::_CalcFighter  [0x0831f282-0x831f75b] ===
 831f282:	55                   	push   %ebp
 831f283:	89 e5                	mov    %esp,%ebp
 831f285:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 831f289:	0f 87 c8 04 00 00    	ja     831f757 <_ZN8WongWork15CCalcCharacStat12_CalcFighterEP15_Additioal_infoii+0x4d5>
 831f28f:	8b 45 0c             	mov    0xc(%ebp),%eax
 831f292:	c1 e0 02             	shl    $0x2,%eax
 831f295:	8b 80 fc 4f c2 08    	mov    0x8c24ffc(%eax),%eax
 831f29b:	ff e0                	jmp    *%eax
 831f29d:	8b 45 10             	mov    0x10(%ebp),%eax
 831f2a0:	83 e8 01             	sub    $0x1,%eax
 831f2a3:	69 c0 c2 01 00 00    	imul   $0x1c2,%eax,%eax
 831f2a9:	05 08 07 00 00       	add    $0x708,%eax
 831f2ae:	89 c2                	mov    %eax,%edx
 831f2b0:	8b 45 08             	mov    0x8(%ebp),%eax
 831f2b3:	89 10                	mov    %edx,(%eax)
 831f2b5:	8b 45 10             	mov    0x10(%ebp),%eax
 831f2b8:	83 e8 01             	sub    $0x1,%eax
 831f2bb:	69 c0 fa 00 00 00    	imul   $0xfa,%eax,%eax
 831f2c1:	05 dc 05 00 00       	add    $0x5dc,%eax
 831f2c6:	89 c2                	mov    %eax,%edx
 831f2c8:	8b 45 08             	mov    0x8(%ebp),%eax
 831f2cb:	89 50 04             	mov    %edx,0x4(%eax)
 831f2ce:	8b 45 10             	mov    0x10(%ebp),%eax
 831f2d1:	83 e8 01             	sub    $0x1,%eax
 831f2d4:	c1 e0 05             	shl    $0x5,%eax
 831f2d7:	8d 50 3c             	lea    0x3c(%eax),%edx
 831f2da:	8b 45 08             	mov    0x8(%ebp),%eax
 831f2dd:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f2e1:	8b 45 10             	mov    0x10(%ebp),%eax
 831f2e4:	83 e8 01             	sub    $0x1,%eax
 831f2e7:	89 c2                	mov    %eax,%edx
 831f2e9:	89 d0                	mov    %edx,%eax
 831f2eb:	c1 e0 02             	shl    $0x2,%eax
 831f2ee:	01 d0                	add    %edx,%eax
 831f2f0:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831f2f7:	89 d1                	mov    %edx,%ecx
 831f2f9:	66 29 c1             	sub    %ax,%cx
 831f2fc:	89 c8                	mov    %ecx,%eax
 831f2fe:	8d 50 3c             	lea    0x3c(%eax),%edx
 831f301:	8b 45 08             	mov    0x8(%ebp),%eax
 831f304:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f308:	8b 45 10             	mov    0x10(%ebp),%eax
 831f30b:	83 e8 01             	sub    $0x1,%eax
 831f30e:	01 c0                	add    %eax,%eax
 831f310:	89 c2                	mov    %eax,%edx
 831f312:	c1 e2 04             	shl    $0x4,%edx
 831f315:	89 d1                	mov    %edx,%ecx
 831f317:	66 29 c1             	sub    %ax,%cx
 831f31a:	89 c8                	mov    %ecx,%eax
 831f31c:	8d 50 32             	lea    0x32(%eax),%edx
 831f31f:	8b 45 08             	mov    0x8(%ebp),%eax
 831f322:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f326:	8b 45 10             	mov    0x10(%ebp),%eax
 831f329:	83 e8 01             	sub    $0x1,%eax
 831f32c:	89 c2                	mov    %eax,%edx
 831f32e:	89 d0                	mov    %edx,%eax
 831f330:	01 c0                	add    %eax,%eax
 831f332:	01 d0                	add    %edx,%eax
 831f334:	c1 e0 03             	shl    $0x3,%eax
 831f337:	66 29 d0             	sub    %dx,%ax
 831f33a:	8d 50 32             	lea    0x32(%eax),%edx
 831f33d:	8b 45 08             	mov    0x8(%ebp),%eax
 831f340:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f344:	8b 45 10             	mov    0x10(%ebp),%eax
 831f347:	83 e8 01             	sub    $0x1,%eax
 831f34a:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 831f350:	8d 90 e0 93 04 00    	lea    0x493e0(%eax),%edx
 831f356:	8b 45 08             	mov    0x8(%ebp),%eax
 831f359:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f35c:	8b 45 10             	mov    0x10(%ebp),%eax
 831f35f:	83 e8 01             	sub    $0x1,%eax
 831f362:	89 c2                	mov    %eax,%edx
 831f364:	89 d0                	mov    %edx,%eax
 831f366:	c1 e0 02             	shl    $0x2,%eax
 831f369:	01 d0                	add    %edx,%eax
 831f36b:	c1 e0 02             	shl    $0x2,%eax
 831f36e:	66 05 70 17          	add    $0x1770,%ax
 831f372:	89 c2                	mov    %eax,%edx
 831f374:	8b 45 08             	mov    0x8(%ebp),%eax
 831f377:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f37b:	e9 d7 03 00 00       	jmp    831f757 <_ZN8WongWork15CCalcCharacStat12_CalcFighterEP15_Additioal_infoii+0x4d5>
 831f380:	8b 45 10             	mov    0x10(%ebp),%eax
 831f383:	69 c0 90 01 00 00    	imul   $0x190,%eax,%eax
 831f389:	05 ca 08 00 00       	add    $0x8ca,%eax
 831f38e:	89 c2                	mov    %eax,%edx
 831f390:	8b 45 08             	mov    0x8(%ebp),%eax
 831f393:	89 10                	mov    %edx,(%eax)
 831f395:	8b 45 10             	mov    0x10(%ebp),%eax
 831f398:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 831f39e:	05 5e 01 00 00       	add    $0x15e,%eax
 831f3a3:	89 c2                	mov    %eax,%edx
 831f3a5:	8b 45 08             	mov    0x8(%ebp),%eax
 831f3a8:	89 50 04             	mov    %edx,0x4(%eax)
 831f3ab:	8b 45 10             	mov    0x10(%ebp),%eax
 831f3ae:	89 c2                	mov    %eax,%edx
 831f3b0:	89 d0                	mov    %edx,%eax
 831f3b2:	c1 e0 02             	shl    $0x2,%eax
 831f3b5:	01 d0                	add    %edx,%eax
 831f3b7:	c1 e0 02             	shl    $0x2,%eax
 831f3ba:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 831f3c0:	8b 45 08             	mov    0x8(%ebp),%eax
 831f3c3:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f3c7:	8b 45 10             	mov    0x10(%ebp),%eax
 831f3ca:	89 c2                	mov    %eax,%edx
 831f3cc:	89 d0                	mov    %edx,%eax
 831f3ce:	c1 e0 02             	shl    $0x2,%eax
 831f3d1:	01 d0                	add    %edx,%eax
 831f3d3:	c1 e0 02             	shl    $0x2,%eax
 831f3d6:	8d 90 27 01 00 00    	lea    0x127(%eax),%edx
 831f3dc:	8b 45 08             	mov    0x8(%ebp),%eax
 831f3df:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f3e3:	8b 45 10             	mov    0x10(%ebp),%eax
 831f3e6:	89 c2                	mov    %eax,%edx
 831f3e8:	89 d0                	mov    %edx,%eax
 831f3ea:	c1 e0 02             	shl    $0x2,%eax
 831f3ed:	01 d0                	add    %edx,%eax
 831f3ef:	c1 e0 03             	shl    $0x3,%eax
 831f3f2:	8d 90 60 ff ff ff    	lea    -0xa0(%eax),%edx
 831f3f8:	8b 45 08             	mov    0x8(%ebp),%eax
 831f3fb:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f3ff:	8b 45 10             	mov    0x10(%ebp),%eax
 831f402:	89 c2                	mov    %eax,%edx
 831f404:	89 d0                	mov    %edx,%eax
 831f406:	c1 e0 02             	shl    $0x2,%eax
 831f409:	01 d0                	add    %edx,%eax
 831f40b:	c1 e0 03             	shl    $0x3,%eax
 831f40e:	8d 90 e9 fe ff ff    	lea    -0x117(%eax),%edx
 831f414:	8b 45 08             	mov    0x8(%ebp),%eax
 831f417:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f41b:	8b 45 10             	mov    0x10(%ebp),%eax
 831f41e:	83 e8 01             	sub    $0x1,%eax
 831f421:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 831f427:	8d 90 e0 93 04 00    	lea    0x493e0(%eax),%edx
 831f42d:	8b 45 08             	mov    0x8(%ebp),%eax
 831f430:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f433:	8b 45 10             	mov    0x10(%ebp),%eax
 831f436:	89 c2                	mov    %eax,%edx
 831f438:	89 d0                	mov    %edx,%eax
 831f43a:	c1 e0 02             	shl    $0x2,%eax
 831f43d:	01 d0                	add    %edx,%eax
 831f43f:	c1 e0 02             	shl    $0x2,%eax
 831f442:	66 2d e6 00          	sub    $0xe6,%ax
 831f446:	89 c2                	mov    %eax,%edx
 831f448:	8b 45 08             	mov    0x8(%ebp),%eax
 831f44b:	66 89 50 40          	mov    %dx,0x40(%eax)
 831f44f:	8b 45 10             	mov    0x10(%ebp),%eax
 831f452:	89 c2                	mov    %eax,%edx
 831f454:	89 d0                	mov    %edx,%eax
 831f456:	c1 e0 02             	shl    $0x2,%eax
 831f459:	01 d0                	add    %edx,%eax
 831f45b:	c1 e0 02             	shl    $0x2,%eax
 831f45e:	8d 90 a8 25 00 00    	lea    0x25a8(%eax),%edx
 831f464:	8b 45 08             	mov    0x8(%ebp),%eax
 831f467:	66 89 50 48          	mov    %dx,0x48(%eax)
 831f46b:	8b 45 10             	mov    0x10(%ebp),%eax
 831f46e:	89 c2                	mov    %eax,%edx
 831f470:	89 d0                	mov    %edx,%eax
 831f472:	c1 e0 02             	shl    $0x2,%eax
 831f475:	01 d0                	add    %edx,%eax
 831f477:	01 c0                	add    %eax,%eax
 831f479:	66 05 10 18          	add    $0x1810,%ax
 831f47d:	89 c2                	mov    %eax,%edx
 831f47f:	8b 45 08             	mov    0x8(%ebp),%eax
 831f482:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f486:	e9 cc 02 00 00       	jmp    831f757 <_ZN8WongWork15CCalcCharacStat12_CalcFighterEP15_Additioal_infoii+0x4d5>
 831f48b:	8b 45 10             	mov    0x10(%ebp),%eax
 831f48e:	69 c0 f4 01 00 00    	imul   $0x1f4,%eax,%eax
 831f494:	05 c2 01 00 00       	add    $0x1c2,%eax
 831f499:	89 c2                	mov    %eax,%edx
 831f49b:	8b 45 08             	mov    0x8(%ebp),%eax
 831f49e:	89 10                	mov    %edx,(%eax)
 831f4a0:	8b 45 10             	mov    0x10(%ebp),%eax
 831f4a3:	69 c0 c8 00 00 00    	imul   $0xc8,%eax,%eax
 831f4a9:	05 66 08 00 00       	add    $0x866,%eax
 831f4ae:	89 c2                	mov    %eax,%edx
 831f4b0:	8b 45 08             	mov    0x8(%ebp),%eax
 831f4b3:	89 50 04             	mov    %edx,0x4(%eax)
 831f4b6:	8b 45 10             	mov    0x10(%ebp),%eax
 831f4b9:	89 c2                	mov    %eax,%edx
 831f4bb:	89 d0                	mov    %edx,%eax
 831f4bd:	c1 e0 02             	shl    $0x2,%eax
 831f4c0:	01 d0                	add    %edx,%eax
 831f4c2:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831f4c9:	89 d1                	mov    %edx,%ecx
 831f4cb:	66 29 c1             	sub    %ax,%cx
 831f4ce:	89 c8                	mov    %ecx,%eax
 831f4d0:	8d 50 e6             	lea    -0x1a(%eax),%edx
 831f4d3:	8b 45 08             	mov    0x8(%ebp),%eax
 831f4d6:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f4da:	8b 45 10             	mov    0x10(%ebp),%eax
 831f4dd:	01 c0                	add    %eax,%eax
 831f4df:	89 c2                	mov    %eax,%edx
 831f4e1:	c1 e2 04             	shl    $0x4,%edx
 831f4e4:	89 d1                	mov    %edx,%ecx
 831f4e6:	66 29 c1             	sub    %ax,%cx
 831f4e9:	89 c8                	mov    %ecx,%eax
 831f4eb:	8d 50 73             	lea    0x73(%eax),%edx
 831f4ee:	8b 45 08             	mov    0x8(%ebp),%eax
 831f4f1:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f4f5:	8b 45 10             	mov    0x10(%ebp),%eax
 831f4f8:	89 c2                	mov    %eax,%edx
 831f4fa:	89 d0                	mov    %edx,%eax
 831f4fc:	c1 e0 02             	shl    $0x2,%eax
 831f4ff:	01 d0                	add    %edx,%eax
 831f501:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831f508:	89 d1                	mov    %edx,%ecx
 831f50a:	66 29 c1             	sub    %ax,%cx
 831f50d:	89 c8                	mov    %ecx,%eax
 831f50f:	8d 50 ba             	lea    -0x46(%eax),%edx
 831f512:	8b 45 08             	mov    0x8(%ebp),%eax
 831f515:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f519:	8b 45 10             	mov    0x10(%ebp),%eax
 831f51c:	89 c2                	mov    %eax,%edx
 831f51e:	89 d0                	mov    %edx,%eax
 831f520:	c1 e0 02             	shl    $0x2,%eax
 831f523:	01 d0                	add    %edx,%eax
 831f525:	c1 e0 02             	shl    $0x2,%eax
 831f528:	8d 50 51             	lea    0x51(%eax),%edx
 831f52b:	8b 45 08             	mov    0x8(%ebp),%eax
 831f52e:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f532:	8b 45 10             	mov    0x10(%ebp),%eax
 831f535:	83 e8 01             	sub    $0x1,%eax
 831f538:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 831f53e:	8d 90 e0 93 04 00    	lea    0x493e0(%eax),%edx
 831f544:	8b 45 08             	mov    0x8(%ebp),%eax
 831f547:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f54a:	8b 45 10             	mov    0x10(%ebp),%eax
 831f54d:	89 c2                	mov    %eax,%edx
 831f54f:	89 d0                	mov    %edx,%eax
 831f551:	c1 e0 02             	shl    $0x2,%eax
 831f554:	01 d0                	add    %edx,%eax
 831f556:	01 c0                	add    %eax,%eax
 831f558:	8d 90 68 24 00 00    	lea    0x2468(%eax),%edx
 831f55e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f561:	66 89 50 46          	mov    %dx,0x46(%eax)
 831f565:	8b 45 10             	mov    0x10(%ebp),%eax
 831f568:	89 c2                	mov    %eax,%edx
 831f56a:	89 d0                	mov    %edx,%eax
 831f56c:	c1 e0 02             	shl    $0x2,%eax
 831f56f:	01 d0                	add    %edx,%eax
 831f571:	c1 e0 03             	shl    $0x3,%eax
 831f574:	66 05 f4 15          	add    $0x15f4,%ax
 831f578:	89 c2                	mov    %eax,%edx
 831f57a:	8b 45 08             	mov    0x8(%ebp),%eax
 831f57d:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f581:	e9 d1 01 00 00       	jmp    831f757 <_ZN8WongWork15CCalcCharacStat12_CalcFighterEP15_Additioal_infoii+0x4d5>
 831f586:	8b 45 10             	mov    0x10(%ebp),%eax
 831f589:	69 c0 58 02 00 00    	imul   $0x258,%eax,%eax
 831f58f:	2d 46 05 00 00       	sub    $0x546,%eax
 831f594:	89 c2                	mov    %eax,%edx
 831f596:	8b 45 08             	mov    0x8(%ebp),%eax
 831f599:	89 10                	mov    %edx,(%eax)
 831f59b:	8b 45 10             	mov    0x10(%ebp),%eax
 831f59e:	6b c0 64             	imul   $0x64,%eax,%eax
 831f5a1:	05 6e 0f 00 00       	add    $0xf6e,%eax
 831f5a6:	89 c2                	mov    %eax,%edx
 831f5a8:	8b 45 08             	mov    0x8(%ebp),%eax
 831f5ab:	89 50 04             	mov    %edx,0x4(%eax)
 831f5ae:	8b 45 10             	mov    0x10(%ebp),%eax
 831f5b1:	89 c2                	mov    %eax,%edx
 831f5b3:	89 d0                	mov    %edx,%eax
 831f5b5:	c1 e0 03             	shl    $0x3,%eax
 831f5b8:	01 d0                	add    %edx,%eax
 831f5ba:	01 c0                	add    %eax,%eax
 831f5bc:	01 d0                	add    %edx,%eax
 831f5be:	01 c0                	add    %eax,%eax
 831f5c0:	8d 50 b0             	lea    -0x50(%eax),%edx
 831f5c3:	8b 45 08             	mov    0x8(%ebp),%eax
 831f5c6:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f5ca:	8b 45 10             	mov    0x10(%ebp),%eax
 831f5cd:	89 c2                	mov    %eax,%edx
 831f5cf:	89 d0                	mov    %edx,%eax
 831f5d1:	c1 e0 02             	shl    $0x2,%eax
 831f5d4:	01 d0                	add    %edx,%eax
 831f5d6:	c1 e0 03             	shl    $0x3,%eax
 831f5d9:	8d 50 bf             	lea    -0x41(%eax),%edx
 831f5dc:	8b 45 08             	mov    0x8(%ebp),%eax
 831f5df:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f5e3:	8b 45 10             	mov    0x10(%ebp),%eax
 831f5e6:	89 c2                	mov    %eax,%edx
 831f5e8:	89 d0                	mov    %edx,%eax
 831f5ea:	01 c0                	add    %eax,%eax
 831f5ec:	01 d0                	add    %edx,%eax
 831f5ee:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831f5f5:	01 d0                	add    %edx,%eax
 831f5f7:	8d 50 4a             	lea    0x4a(%eax),%edx
 831f5fa:	8b 45 08             	mov    0x8(%ebp),%eax
 831f5fd:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f601:	8b 45 10             	mov    0x10(%ebp),%eax
 831f604:	89 c2                	mov    %eax,%edx
 831f606:	89 d0                	mov    %edx,%eax
 831f608:	c1 e0 04             	shl    $0x4,%eax
 831f60b:	66 29 d0             	sub    %dx,%ax
 831f60e:	8d 90 ab 00 00 00    	lea    0xab(%eax),%edx
 831f614:	8b 45 08             	mov    0x8(%ebp),%eax
 831f617:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f61b:	8b 45 10             	mov    0x10(%ebp),%eax
 831f61e:	89 c2                	mov    %eax,%edx
 831f620:	89 d0                	mov    %edx,%eax
 831f622:	01 c0                	add    %eax,%eax
 831f624:	01 d0                	add    %edx,%eax
 831f626:	01 c0                	add    %eax,%eax
 831f628:	66 2d 34 01          	sub    $0x134,%ax
 831f62c:	89 c2                	mov    %eax,%edx
 831f62e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f631:	66 89 50 14          	mov    %dx,0x14(%eax)
 831f635:	8b 45 10             	mov    0x10(%ebp),%eax
 831f638:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831f63e:	8d 90 f4 66 04 00    	lea    0x466f4(%eax),%edx
 831f644:	8b 45 08             	mov    0x8(%ebp),%eax
 831f647:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f64a:	8b 55 10             	mov    0x10(%ebp),%edx
 831f64d:	89 d0                	mov    %edx,%eax
 831f64f:	c1 e0 02             	shl    $0x2,%eax
 831f652:	01 d0                	add    %edx,%eax
 831f654:	01 c0                	add    %eax,%eax
 831f656:	05 d8 22 00 00       	add    $0x22d8,%eax
 831f65b:	89 c2                	mov    %eax,%edx
 831f65d:	8b 45 08             	mov    0x8(%ebp),%eax
 831f660:	89 50 42             	mov    %edx,0x42(%eax)
 831f663:	8b 45 10             	mov    0x10(%ebp),%eax
 831f666:	01 c0                	add    %eax,%eax
 831f668:	89 c2                	mov    %eax,%edx
 831f66a:	c1 e2 04             	shl    $0x4,%edx
 831f66d:	89 d1                	mov    %edx,%ecx
 831f66f:	66 29 c1             	sub    %ax,%cx
 831f672:	89 c8                	mov    %ecx,%eax
 831f674:	66 05 a8 16          	add    $0x16a8,%ax
 831f678:	89 c2                	mov    %eax,%edx
 831f67a:	8b 45 08             	mov    0x8(%ebp),%eax
 831f67d:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f681:	e9 d1 00 00 00       	jmp    831f757 <_ZN8WongWork15CCalcCharacStat12_CalcFighterEP15_Additioal_infoii+0x4d5>
 831f686:	8b 45 10             	mov    0x10(%ebp),%eax
 831f689:	69 c0 c2 01 00 00    	imul   $0x1c2,%eax,%eax
 831f68f:	05 46 05 00 00       	add    $0x546,%eax
 831f694:	89 c2                	mov    %eax,%edx
 831f696:	8b 45 08             	mov    0x8(%ebp),%eax
 831f699:	89 10                	mov    %edx,(%eax)
 831f69b:	8b 45 10             	mov    0x10(%ebp),%eax
 831f69e:	69 c0 fa 00 00 00    	imul   $0xfa,%eax,%eax
 831f6a4:	05 e2 04 00 00       	add    $0x4e2,%eax
 831f6a9:	89 c2                	mov    %eax,%edx
 831f6ab:	8b 45 08             	mov    0x8(%ebp),%eax
 831f6ae:	89 50 04             	mov    %edx,0x4(%eax)
 831f6b1:	8b 45 10             	mov    0x10(%ebp),%eax
 831f6b4:	83 e8 12             	sub    $0x12,%eax
 831f6b7:	c1 e0 05             	shl    $0x5,%eax
 831f6ba:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 831f6c0:	8b 45 08             	mov    0x8(%ebp),%eax
 831f6c3:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f6c7:	8b 45 10             	mov    0x10(%ebp),%eax
 831f6ca:	89 c2                	mov    %eax,%edx
 831f6cc:	89 d0                	mov    %edx,%eax
 831f6ce:	c1 e0 02             	shl    $0x2,%eax
 831f6d1:	01 d0                	add    %edx,%eax
 831f6d3:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831f6da:	89 d1                	mov    %edx,%ecx
 831f6dc:	66 29 c1             	sub    %ax,%cx
 831f6df:	89 c8                	mov    %ecx,%eax
 831f6e1:	8d 50 19             	lea    0x19(%eax),%edx
 831f6e4:	8b 45 08             	mov    0x8(%ebp),%eax
 831f6e7:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f6eb:	8b 45 10             	mov    0x10(%ebp),%eax
 831f6ee:	01 c0                	add    %eax,%eax
 831f6f0:	89 c2                	mov    %eax,%edx
 831f6f2:	c1 e2 04             	shl    $0x4,%edx
 831f6f5:	89 d1                	mov    %edx,%ecx
 831f6f7:	66 29 c1             	sub    %ax,%cx
 831f6fa:	89 c8                	mov    %ecx,%eax
 831f6fc:	8d 50 14             	lea    0x14(%eax),%edx
 831f6ff:	8b 45 08             	mov    0x8(%ebp),%eax
 831f702:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f706:	8b 45 10             	mov    0x10(%ebp),%eax
 831f709:	89 c2                	mov    %eax,%edx
 831f70b:	89 d0                	mov    %edx,%eax
 831f70d:	01 c0                	add    %eax,%eax
 831f70f:	01 d0                	add    %edx,%eax
 831f711:	c1 e0 03             	shl    $0x3,%eax
 831f714:	66 29 d0             	sub    %dx,%ax
 831f717:	8d 50 1b             	lea    0x1b(%eax),%edx
 831f71a:	8b 45 08             	mov    0x8(%ebp),%eax
 831f71d:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f721:	8b 45 10             	mov    0x10(%ebp),%eax
 831f724:	83 e8 01             	sub    $0x1,%eax
 831f727:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 831f72d:	8d 90 e0 93 04 00    	lea    0x493e0(%eax),%edx
 831f733:	8b 45 08             	mov    0x8(%ebp),%eax
 831f736:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f739:	8b 45 10             	mov    0x10(%ebp),%eax
 831f73c:	01 c0                	add    %eax,%eax
 831f73e:	89 c2                	mov    %eax,%edx
 831f740:	c1 e2 04             	shl    $0x4,%edx
 831f743:	89 d1                	mov    %edx,%ecx
 831f745:	66 29 c1             	sub    %ax,%cx
 831f748:	89 c8                	mov    %ecx,%eax
 831f74a:	66 05 a8 16          	add    $0x16a8,%ax
 831f74e:	89 c2                	mov    %eax,%edx
 831f750:	8b 45 08             	mov    0x8(%ebp),%eax
 831f753:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f757:	8b 45 08             	mov    0x8(%ebp),%eax
 831f75a:	5d                   	pop    %ebp
 831f75b:	c3                   	ret

```

```c
// WongWork::CCalcCharacStat::_CalcFighter @ 0x831f282

/* WongWork::CCalcCharacStat::_CalcFighter(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcFighter(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 0x1c2 + 0x708;
    *(int *)(param_1 + 4) = (param_3 + -1) * 0xfa + 0x5dc;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x20 + 0x3c;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x23 + 0x3c;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x1e + 0x32;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x17 + 0x32;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 0x14 + 6000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 400 + 0x8ca;
    *(int *)(param_1 + 4) = param_3 * 300 + 0x15e;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 0xf4;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 0x127;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 2) + sVar1) * 8 + -0xa0;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + -0x117;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + -0xe6;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x25a8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x1810;
    break;
  case 2:
    *(int *)param_1 = param_3 * 500 + 0x1c2;
    *(int *)(param_1 + 4) = param_3 * 200 + 0x866;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0x1a;
    *(short *)(param_1 + 10) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + -0x46;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 4 + 0x51;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x2468;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 8 + 0x15f4;
    break;
  case 3:
    *(int *)param_1 = param_3 * 600 + -0x546;
    *(int *)(param_1 + 4) = param_3 * 100 + 0xf6e;
    *(short *)(param_1 + 8) = sVar1 * 0x26 + -0x50;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 8 + -0x41;
    *(short *)(param_1 + 0xc) = sVar1 * 0x1b + 0x4a;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 4) - sVar1) + 0xab;
    *(short *)(param_1 + 0x14) = sVar1 * 6 + -0x134;
    *(int *)(param_1 + 0x3a) = param_3 * 3000 + 0x466f4;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x22d8;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
    break;
  case 4:
    *(int *)param_1 = param_3 * 0x1c2 + 0x546;
    *(int *)(param_1 + 4) = param_3 * 0xfa + 0x4e2;
    *(short *)(param_1 + 8) = (sVar1 + -0x12) * 0x20 + 0x25c;
    *(short *)(param_1 + 10) = sVar1 * 0x23 + 0x19;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 0xe) = sVar1 * 0x17 + 0x1b;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 300000;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
  }
  return param_1;
}

```

---

## _CalcGunner

```asm
// === 0831f75c WongWork::CCalcCharacStat::_CalcGunner  [0x0831f75c-0x831fc39] ===
 831f75c:	55                   	push   %ebp
 831f75d:	89 e5                	mov    %esp,%ebp
 831f75f:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 831f763:	0f 87 cc 04 00 00    	ja     831fc35 <_ZN8WongWork15CCalcCharacStat11_CalcGunnerEP15_Additioal_infoii+0x4d9>
 831f769:	8b 45 0c             	mov    0xc(%ebp),%eax
 831f76c:	c1 e0 02             	shl    $0x2,%eax
 831f76f:	8b 80 10 50 c2 08    	mov    0x8c25010(%eax),%eax
 831f775:	ff e0                	jmp    *%eax
 831f777:	8b 45 10             	mov    0x10(%ebp),%eax
 831f77a:	83 e8 01             	sub    $0x1,%eax
 831f77d:	69 c0 90 01 00 00    	imul   $0x190,%eax,%eax
 831f783:	05 e2 04 00 00       	add    $0x4e2,%eax
 831f788:	89 c2                	mov    %eax,%edx
 831f78a:	8b 45 08             	mov    0x8(%ebp),%eax
 831f78d:	89 10                	mov    %edx,(%eax)
 831f78f:	8b 45 10             	mov    0x10(%ebp),%eax
 831f792:	83 e8 01             	sub    $0x1,%eax
 831f795:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 831f79b:	05 08 07 00 00       	add    $0x708,%eax
 831f7a0:	89 c2                	mov    %eax,%edx
 831f7a2:	8b 45 08             	mov    0x8(%ebp),%eax
 831f7a5:	89 50 04             	mov    %edx,0x4(%eax)
 831f7a8:	8b 45 10             	mov    0x10(%ebp),%eax
 831f7ab:	83 e8 01             	sub    $0x1,%eax
 831f7ae:	89 c2                	mov    %eax,%edx
 831f7b0:	89 d0                	mov    %edx,%eax
 831f7b2:	c1 e0 02             	shl    $0x2,%eax
 831f7b5:	01 d0                	add    %edx,%eax
 831f7b7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831f7be:	01 d0                	add    %edx,%eax
 831f7c0:	8d 50 28             	lea    0x28(%eax),%edx
 831f7c3:	8b 45 08             	mov    0x8(%ebp),%eax
 831f7c6:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f7ca:	8b 45 10             	mov    0x10(%ebp),%eax
 831f7cd:	83 e8 01             	sub    $0x1,%eax
 831f7d0:	89 c2                	mov    %eax,%edx
 831f7d2:	89 d0                	mov    %edx,%eax
 831f7d4:	01 c0                	add    %eax,%eax
 831f7d6:	01 d0                	add    %edx,%eax
 831f7d8:	c1 e0 03             	shl    $0x3,%eax
 831f7db:	66 29 d0             	sub    %dx,%ax
 831f7de:	8d 50 28             	lea    0x28(%eax),%edx
 831f7e1:	8b 45 08             	mov    0x8(%ebp),%eax
 831f7e4:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f7e8:	8b 45 10             	mov    0x10(%ebp),%eax
 831f7eb:	83 e8 01             	sub    $0x1,%eax
 831f7ee:	89 c2                	mov    %eax,%edx
 831f7f0:	89 d0                	mov    %edx,%eax
 831f7f2:	c1 e0 03             	shl    $0x3,%eax
 831f7f5:	01 d0                	add    %edx,%eax
 831f7f7:	c1 e0 02             	shl    $0x2,%eax
 831f7fa:	01 d0                	add    %edx,%eax
 831f7fc:	8d 50 46             	lea    0x46(%eax),%edx
 831f7ff:	8b 45 08             	mov    0x8(%ebp),%eax
 831f802:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f806:	8b 45 10             	mov    0x10(%ebp),%eax
 831f809:	83 e8 01             	sub    $0x1,%eax
 831f80c:	89 c2                	mov    %eax,%edx
 831f80e:	89 d0                	mov    %edx,%eax
 831f810:	c1 e0 02             	shl    $0x2,%eax
 831f813:	01 d0                	add    %edx,%eax
 831f815:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831f81c:	89 d1                	mov    %edx,%ecx
 831f81e:	66 29 c1             	sub    %ax,%cx
 831f821:	89 c8                	mov    %ecx,%eax
 831f823:	8d 50 3c             	lea    0x3c(%eax),%edx
 831f826:	8b 45 08             	mov    0x8(%ebp),%eax
 831f829:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f82d:	8b 45 10             	mov    0x10(%ebp),%eax
 831f830:	83 e8 01             	sub    $0x1,%eax
 831f833:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831f839:	8d 90 10 09 05 00    	lea    0x50910(%eax),%edx
 831f83f:	8b 45 08             	mov    0x8(%ebp),%eax
 831f842:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f845:	8b 45 10             	mov    0x10(%ebp),%eax
 831f848:	83 e8 01             	sub    $0x1,%eax
 831f84b:	89 c2                	mov    %eax,%edx
 831f84d:	89 d0                	mov    %edx,%eax
 831f84f:	c1 e0 02             	shl    $0x2,%eax
 831f852:	01 d0                	add    %edx,%eax
 831f854:	c1 e0 02             	shl    $0x2,%eax
 831f857:	66 05 70 17          	add    $0x1770,%ax
 831f85b:	89 c2                	mov    %eax,%edx
 831f85d:	8b 45 08             	mov    0x8(%ebp),%eax
 831f860:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f864:	e9 cc 03 00 00       	jmp    831fc35 <_ZN8WongWork15CCalcCharacStat11_CalcGunnerEP15_Additioal_infoii+0x4d9>
 831f869:	8b 45 10             	mov    0x10(%ebp),%eax
 831f86c:	69 c0 5e 01 00 00    	imul   $0x15e,%eax,%eax
 831f872:	05 d6 06 00 00       	add    $0x6d6,%eax
 831f877:	89 c2                	mov    %eax,%edx
 831f879:	8b 45 08             	mov    0x8(%ebp),%eax
 831f87c:	89 10                	mov    %edx,(%eax)
 831f87e:	8b 45 10             	mov    0x10(%ebp),%eax
 831f881:	69 c0 5e 01 00 00    	imul   $0x15e,%eax,%eax
 831f887:	05 58 02 00 00       	add    $0x258,%eax
 831f88c:	89 c2                	mov    %eax,%edx
 831f88e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f891:	89 50 04             	mov    %edx,0x4(%eax)
 831f894:	8b 45 10             	mov    0x10(%ebp),%eax
 831f897:	89 c2                	mov    %eax,%edx
 831f899:	89 d0                	mov    %edx,%eax
 831f89b:	c1 e0 02             	shl    $0x2,%eax
 831f89e:	01 d0                	add    %edx,%eax
 831f8a0:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831f8a7:	89 d1                	mov    %edx,%ecx
 831f8a9:	66 29 c1             	sub    %ax,%cx
 831f8ac:	89 c8                	mov    %ecx,%eax
 831f8ae:	8d 90 5b ff ff ff    	lea    -0xa5(%eax),%edx
 831f8b4:	8b 45 08             	mov    0x8(%ebp),%eax
 831f8b7:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f8bb:	8b 45 10             	mov    0x10(%ebp),%eax
 831f8be:	89 c2                	mov    %eax,%edx
 831f8c0:	89 d0                	mov    %edx,%eax
 831f8c2:	c1 e0 02             	shl    $0x2,%eax
 831f8c5:	01 d0                	add    %edx,%eax
 831f8c7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831f8ce:	01 d0                	add    %edx,%eax
 831f8d0:	8d 50 ed             	lea    -0x13(%eax),%edx
 831f8d3:	8b 45 08             	mov    0x8(%ebp),%eax
 831f8d6:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f8da:	8b 45 10             	mov    0x10(%ebp),%eax
 831f8dd:	01 c0                	add    %eax,%eax
 831f8df:	89 c2                	mov    %eax,%edx
 831f8e1:	c1 e2 04             	shl    $0x4,%edx
 831f8e4:	89 d1                	mov    %edx,%ecx
 831f8e6:	66 29 c1             	sub    %ax,%cx
 831f8e9:	89 c8                	mov    %ecx,%eax
 831f8eb:	8d 90 9f 00 00 00    	lea    0x9f(%eax),%edx
 831f8f1:	8b 45 08             	mov    0x8(%ebp),%eax
 831f8f4:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f8f8:	8b 45 10             	mov    0x10(%ebp),%eax
 831f8fb:	01 c0                	add    %eax,%eax
 831f8fd:	89 c2                	mov    %eax,%edx
 831f8ff:	c1 e2 04             	shl    $0x4,%edx
 831f902:	89 d1                	mov    %edx,%ecx
 831f904:	66 29 c1             	sub    %ax,%cx
 831f907:	89 c8                	mov    %ecx,%eax
 831f909:	8d 50 73             	lea    0x73(%eax),%edx
 831f90c:	8b 45 08             	mov    0x8(%ebp),%eax
 831f90f:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f913:	8b 45 10             	mov    0x10(%ebp),%eax
 831f916:	83 e8 01             	sub    $0x1,%eax
 831f919:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831f91f:	8d 90 10 09 05 00    	lea    0x50910(%eax),%edx
 831f925:	8b 45 08             	mov    0x8(%ebp),%eax
 831f928:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f92b:	8b 45 10             	mov    0x10(%ebp),%eax
 831f92e:	89 c2                	mov    %eax,%edx
 831f930:	89 d0                	mov    %edx,%eax
 831f932:	c1 e0 02             	shl    $0x2,%eax
 831f935:	01 d0                	add    %edx,%eax
 831f937:	01 c0                	add    %eax,%eax
 831f939:	8d 90 68 24 00 00    	lea    0x2468(%eax),%edx
 831f93f:	8b 45 08             	mov    0x8(%ebp),%eax
 831f942:	66 89 50 46          	mov    %dx,0x46(%eax)
 831f946:	8b 55 10             	mov    0x10(%ebp),%edx
 831f949:	89 d0                	mov    %edx,%eax
 831f94b:	c1 e0 02             	shl    $0x2,%eax
 831f94e:	01 d0                	add    %edx,%eax
 831f950:	01 c0                	add    %eax,%eax
 831f952:	05 54 1f 00 00       	add    $0x1f54,%eax
 831f957:	89 c2                	mov    %eax,%edx
 831f959:	8b 45 08             	mov    0x8(%ebp),%eax
 831f95c:	89 50 42             	mov    %edx,0x42(%eax)
 831f95f:	8b 45 10             	mov    0x10(%ebp),%eax
 831f962:	89 c2                	mov    %eax,%edx
 831f964:	89 d0                	mov    %edx,%eax
 831f966:	c1 e0 02             	shl    $0x2,%eax
 831f969:	01 d0                	add    %edx,%eax
 831f96b:	c1 e0 03             	shl    $0x3,%eax
 831f96e:	66 05 f4 15          	add    $0x15f4,%ax
 831f972:	89 c2                	mov    %eax,%edx
 831f974:	8b 45 08             	mov    0x8(%ebp),%eax
 831f977:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f97b:	e9 b5 02 00 00       	jmp    831fc35 <_ZN8WongWork15CCalcCharacStat11_CalcGunnerEP15_Additioal_infoii+0x4d9>
 831f980:	8b 45 10             	mov    0x10(%ebp),%eax
 831f983:	69 c0 a9 01 00 00    	imul   $0x1a9,%eax,%eax
 831f989:	05 90 01 00 00       	add    $0x190,%eax
 831f98e:	89 c2                	mov    %eax,%edx
 831f990:	8b 45 08             	mov    0x8(%ebp),%eax
 831f993:	89 10                	mov    %edx,(%eax)
 831f995:	8b 45 10             	mov    0x10(%ebp),%eax
 831f998:	69 c0 13 01 00 00    	imul   $0x113,%eax,%eax
 831f99e:	05 9e 07 00 00       	add    $0x79e,%eax
 831f9a3:	89 c2                	mov    %eax,%edx
 831f9a5:	8b 45 08             	mov    0x8(%ebp),%eax
 831f9a8:	89 50 04             	mov    %edx,0x4(%eax)
 831f9ab:	8b 45 10             	mov    0x10(%ebp),%eax
 831f9ae:	89 c2                	mov    %eax,%edx
 831f9b0:	89 d0                	mov    %edx,%eax
 831f9b2:	c1 e0 02             	shl    $0x2,%eax
 831f9b5:	01 d0                	add    %edx,%eax
 831f9b7:	c1 e0 03             	shl    $0x3,%eax
 831f9ba:	8d 90 01 ff ff ff    	lea    -0xff(%eax),%edx
 831f9c0:	8b 45 08             	mov    0x8(%ebp),%eax
 831f9c3:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f9c7:	8b 45 10             	mov    0x10(%ebp),%eax
 831f9ca:	89 c2                	mov    %eax,%edx
 831f9cc:	89 d0                	mov    %edx,%eax
 831f9ce:	01 c0                	add    %eax,%eax
 831f9d0:	01 d0                	add    %edx,%eax
 831f9d2:	89 c2                	mov    %eax,%edx
 831f9d4:	c1 e2 04             	shl    $0x4,%edx
 831f9d7:	89 d1                	mov    %edx,%ecx
 831f9d9:	66 29 c1             	sub    %ax,%cx
 831f9dc:	89 c8                	mov    %ecx,%eax
 831f9de:	8d 90 85 fe ff ff    	lea    -0x17b(%eax),%edx
 831f9e4:	8b 45 08             	mov    0x8(%ebp),%eax
 831f9e7:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f9eb:	8b 45 10             	mov    0x10(%ebp),%eax
 831f9ee:	89 c2                	mov    %eax,%edx
 831f9f0:	89 d0                	mov    %edx,%eax
 831f9f2:	c1 e0 04             	shl    $0x4,%eax
 831f9f5:	66 29 d0             	sub    %dx,%ax
 831f9f8:	8d 90 ad 01 00 00    	lea    0x1ad(%eax),%edx
 831f9fe:	8b 45 08             	mov    0x8(%ebp),%eax
 831fa01:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831fa05:	8b 45 10             	mov    0x10(%ebp),%eax
 831fa08:	89 c2                	mov    %eax,%edx
 831fa0a:	89 d0                	mov    %edx,%eax
 831fa0c:	c1 e0 02             	shl    $0x2,%eax
 831fa0f:	01 d0                	add    %edx,%eax
 831fa11:	c1 e0 02             	shl    $0x2,%eax
 831fa14:	8d 90 27 01 00 00    	lea    0x127(%eax),%edx
 831fa1a:	8b 45 08             	mov    0x8(%ebp),%eax
 831fa1d:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831fa21:	8b 45 10             	mov    0x10(%ebp),%eax
 831fa24:	83 e8 01             	sub    $0x1,%eax
 831fa27:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831fa2d:	8d 90 10 09 05 00    	lea    0x50910(%eax),%edx
 831fa33:	8b 45 08             	mov    0x8(%ebp),%eax
 831fa36:	89 50 3a             	mov    %edx,0x3a(%eax)
 831fa39:	8b 45 10             	mov    0x10(%ebp),%eax
 831fa3c:	01 c0                	add    %eax,%eax
 831fa3e:	89 c2                	mov    %eax,%edx
 831fa40:	c1 e2 04             	shl    $0x4,%edx
 831fa43:	89 d1                	mov    %edx,%ecx
 831fa45:	66 29 c1             	sub    %ax,%cx
 831fa48:	89 c8                	mov    %ecx,%eax
 831fa4a:	66 05 a8 16          	add    $0x16a8,%ax
 831fa4e:	89 c2                	mov    %eax,%edx
 831fa50:	8b 45 08             	mov    0x8(%ebp),%eax
 831fa53:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831fa57:	e9 d9 01 00 00       	jmp    831fc35 <_ZN8WongWork15CCalcCharacStat11_CalcGunnerEP15_Additioal_infoii+0x4d9>
 831fa5c:	8b 45 10             	mov    0x10(%ebp),%eax
 831fa5f:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 831fa65:	05 5a 0a 00 00       	add    $0xa5a,%eax
 831fa6a:	89 c2                	mov    %eax,%edx
 831fa6c:	8b 45 08             	mov    0x8(%ebp),%eax
 831fa6f:	89 10                	mov    %edx,(%eax)
 831fa71:	8b 45 10             	mov    0x10(%ebp),%eax
 831fa74:	69 c0 90 01 00 00    	imul   $0x190,%eax,%eax
 831fa7a:	2d 2c 01 00 00       	sub    $0x12c,%eax
 831fa7f:	89 c2                	mov    %eax,%edx
 831fa81:	8b 45 08             	mov    0x8(%ebp),%eax
 831fa84:	89 50 04             	mov    %edx,0x4(%eax)
 831fa87:	8b 45 10             	mov    0x10(%ebp),%eax
 831fa8a:	89 c2                	mov    %eax,%edx
 831fa8c:	89 d0                	mov    %edx,%eax
 831fa8e:	c1 e0 02             	shl    $0x2,%eax
 831fa91:	01 d0                	add    %edx,%eax
 831fa93:	c1 e0 02             	shl    $0x2,%eax
 831fa96:	8d 50 69             	lea    0x69(%eax),%edx
 831fa99:	8b 45 08             	mov    0x8(%ebp),%eax
 831fa9c:	66 89 50 08          	mov    %dx,0x8(%eax)
 831faa0:	8b 45 10             	mov    0x10(%ebp),%eax
 831faa3:	89 c2                	mov    %eax,%edx
 831faa5:	89 d0                	mov    %edx,%eax
 831faa7:	c1 e0 02             	shl    $0x2,%eax
 831faaa:	01 d0                	add    %edx,%eax
 831faac:	c1 e0 02             	shl    $0x2,%eax
 831faaf:	8d 50 47             	lea    0x47(%eax),%edx
 831fab2:	8b 45 08             	mov    0x8(%ebp),%eax
 831fab5:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831fab9:	8b 45 10             	mov    0x10(%ebp),%eax
 831fabc:	89 c2                	mov    %eax,%edx
 831fabe:	89 d0                	mov    %edx,%eax
 831fac0:	c1 e0 02             	shl    $0x2,%eax
 831fac3:	01 d0                	add    %edx,%eax
 831fac5:	c1 e0 03             	shl    $0x3,%eax
 831fac8:	8d 50 eb             	lea    -0x15(%eax),%edx
 831facb:	8b 45 08             	mov    0x8(%ebp),%eax
 831face:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831fad2:	8b 45 10             	mov    0x10(%ebp),%eax
 831fad5:	89 c2                	mov    %eax,%edx
 831fad7:	89 d0                	mov    %edx,%eax
 831fad9:	c1 e0 02             	shl    $0x2,%eax
 831fadc:	01 d0                	add    %edx,%eax
 831fade:	c1 e0 03             	shl    $0x3,%eax
 831fae1:	8d 50 bf             	lea    -0x41(%eax),%edx
 831fae4:	8b 45 08             	mov    0x8(%ebp),%eax
 831fae7:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831faeb:	8b 45 10             	mov    0x10(%ebp),%eax
 831faee:	83 e8 01             	sub    $0x1,%eax
 831faf1:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831faf7:	8d 90 10 09 05 00    	lea    0x50910(%eax),%edx
 831fafd:	8b 45 08             	mov    0x8(%ebp),%eax
 831fb00:	89 50 3a             	mov    %edx,0x3a(%eax)
 831fb03:	8b 45 10             	mov    0x10(%ebp),%eax
 831fb06:	89 c2                	mov    %eax,%edx
 831fb08:	89 d0                	mov    %edx,%eax
 831fb0a:	c1 e0 02             	shl    $0x2,%eax
 831fb0d:	01 d0                	add    %edx,%eax
 831fb0f:	c1 e0 02             	shl    $0x2,%eax
 831fb12:	66 2d b9 00          	sub    $0xb9,%ax
 831fb16:	89 c2                	mov    %eax,%edx
 831fb18:	8b 45 08             	mov    0x8(%ebp),%eax
 831fb1b:	66 89 50 40          	mov    %dx,0x40(%eax)
 831fb1f:	8b 45 10             	mov    0x10(%ebp),%eax
 831fb22:	89 c2                	mov    %eax,%edx
 831fb24:	89 d0                	mov    %edx,%eax
 831fb26:	c1 e0 02             	shl    $0x2,%eax
 831fb29:	01 d0                	add    %edx,%eax
 831fb2b:	c1 e0 02             	shl    $0x2,%eax
 831fb2e:	8d 90 d8 1d 00 00    	lea    0x1dd8(%eax),%edx
 831fb34:	8b 45 08             	mov    0x8(%ebp),%eax
 831fb37:	66 89 50 48          	mov    %dx,0x48(%eax)
 831fb3b:	8b 45 10             	mov    0x10(%ebp),%eax
 831fb3e:	89 c2                	mov    %eax,%edx
 831fb40:	89 d0                	mov    %edx,%eax
 831fb42:	c1 e0 02             	shl    $0x2,%eax
 831fb45:	01 d0                	add    %edx,%eax
 831fb47:	01 c0                	add    %eax,%eax
 831fb49:	66 05 10 18          	add    $0x1810,%ax
 831fb4d:	89 c2                	mov    %eax,%edx
 831fb4f:	8b 45 08             	mov    0x8(%ebp),%eax
 831fb52:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831fb56:	e9 da 00 00 00       	jmp    831fc35 <_ZN8WongWork15CCalcCharacStat11_CalcGunnerEP15_Additioal_infoii+0x4d9>
 831fb5b:	8b 45 10             	mov    0x10(%ebp),%eax
 831fb5e:	69 c0 90 01 00 00    	imul   $0x190,%eax,%eax
 831fb64:	05 52 03 00 00       	add    $0x352,%eax
 831fb69:	89 c2                	mov    %eax,%edx
 831fb6b:	8b 45 08             	mov    0x8(%ebp),%eax
 831fb6e:	89 10                	mov    %edx,(%eax)
 831fb70:	8b 45 10             	mov    0x10(%ebp),%eax
 831fb73:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 831fb79:	05 dc 05 00 00       	add    $0x5dc,%eax
 831fb7e:	89 c2                	mov    %eax,%edx
 831fb80:	8b 45 08             	mov    0x8(%ebp),%eax
 831fb83:	89 50 04             	mov    %edx,0x4(%eax)
 831fb86:	8b 45 10             	mov    0x10(%ebp),%eax
 831fb89:	01 c0                	add    %eax,%eax
 831fb8b:	89 c2                	mov    %eax,%edx
 831fb8d:	c1 e2 04             	shl    $0x4,%edx
 831fb90:	89 d1                	mov    %edx,%ecx
 831fb92:	66 29 c1             	sub    %ax,%cx
 831fb95:	89 c8                	mov    %ecx,%eax
 831fb97:	8d 50 b5             	lea    -0x4b(%eax),%edx
 831fb9a:	8b 45 08             	mov    0x8(%ebp),%eax
 831fb9d:	66 89 50 08          	mov    %dx,0x8(%eax)
 831fba1:	8b 45 10             	mov    0x10(%ebp),%eax
 831fba4:	89 c2                	mov    %eax,%edx
 831fba6:	89 d0                	mov    %edx,%eax
 831fba8:	c1 e0 02             	shl    $0x2,%eax
 831fbab:	01 d0                	add    %edx,%eax
 831fbad:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831fbb4:	01 d0                	add    %edx,%eax
 831fbb6:	8d 50 ed             	lea    -0x13(%eax),%edx
 831fbb9:	8b 45 08             	mov    0x8(%ebp),%eax
 831fbbc:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831fbc0:	8b 45 10             	mov    0x10(%ebp),%eax
 831fbc3:	89 c2                	mov    %eax,%edx
 831fbc5:	89 d0                	mov    %edx,%eax
 831fbc7:	c1 e0 02             	shl    $0x2,%eax
 831fbca:	01 d0                	add    %edx,%eax
 831fbcc:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831fbd3:	89 d1                	mov    %edx,%ecx
 831fbd5:	66 29 c1             	sub    %ax,%cx
 831fbd8:	89 c8                	mov    %ecx,%eax
 831fbda:	8d 50 45             	lea    0x45(%eax),%edx
 831fbdd:	8b 45 08             	mov    0x8(%ebp),%eax
 831fbe0:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831fbe4:	8b 45 10             	mov    0x10(%ebp),%eax
 831fbe7:	01 c0                	add    %eax,%eax
 831fbe9:	89 c2                	mov    %eax,%edx
 831fbeb:	c1 e2 04             	shl    $0x4,%edx
 831fbee:	89 d1                	mov    %edx,%ecx
 831fbf0:	66 29 c1             	sub    %ax,%cx
 831fbf3:	89 c8                	mov    %ecx,%eax
 831fbf5:	8d 50 73             	lea    0x73(%eax),%edx
 831fbf8:	8b 45 08             	mov    0x8(%ebp),%eax
 831fbfb:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831fbff:	8b 45 10             	mov    0x10(%ebp),%eax
 831fc02:	83 e8 01             	sub    $0x1,%eax
 831fc05:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831fc0b:	8d 90 10 09 05 00    	lea    0x50910(%eax),%edx
 831fc11:	8b 45 08             	mov    0x8(%ebp),%eax
 831fc14:	89 50 3a             	mov    %edx,0x3a(%eax)
 831fc17:	8b 45 10             	mov    0x10(%ebp),%eax
 831fc1a:	01 c0                	add    %eax,%eax
 831fc1c:	89 c2                	mov    %eax,%edx
 831fc1e:	c1 e2 04             	shl    $0x4,%edx
 831fc21:	89 d1                	mov    %edx,%ecx
 831fc23:	66 29 c1             	sub    %ax,%cx
 831fc26:	89 c8                	mov    %ecx,%eax
 831fc28:	66 05 a8 16          	add    $0x16a8,%ax
 831fc2c:	89 c2                	mov    %eax,%edx
 831fc2e:	8b 45 08             	mov    0x8(%ebp),%eax
 831fc31:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831fc35:	8b 45 08             	mov    0x8(%ebp),%eax
 831fc38:	5d                   	pop    %ebp
 831fc39:	c3                   	ret

```

```c
// WongWork::CCalcCharacStat::_CalcGunner @ 0x831f75c

/* WongWork::CCalcCharacStat::_CalcGunner(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcGunner(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 400 + 0x4e2;
    *(int *)(param_1 + 4) = (param_3 + -1) * 300 + 0x708;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x19 + 0x28;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x17 + 0x28;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x25 + 0x46;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x23 + 0x3c;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 0x14 + 6000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 0x15e + 0x6d6;
    *(int *)(param_1 + 4) = param_3 * 0x15e + 600;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0xa5;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x13;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x9f;
    *(short *)(param_1 + 0xe) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x2468;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x1f54;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 8 + 0x15f4;
    break;
  case 2:
    *(int *)param_1 = param_3 * 0x1a9 + 400;
    *(int *)(param_1 + 4) = param_3 * 0x113 + 0x79e;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 8 + -0xff;
    *(short *)(param_1 + 10) = sVar1 * 0x2d + -0x17b;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 4) - sVar1) + 0x1ad;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 4 + 0x127;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
    break;
  case 3:
    *(int *)param_1 = param_3 * 300 + 0xa5a;
    *(int *)(param_1 + 4) = param_3 * 400 + -300;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 0x69;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 0x47;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 2) + sVar1) * 8 + -0x15;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + -0x41;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + -0xb9;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x1dd8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x1810;
    break;
  case 4:
    *(int *)param_1 = param_3 * 400 + 0x352;
    *(int *)(param_1 + 4) = param_3 * 300 + 0x5dc;
    *(short *)(param_1 + 8) = (short)(param_3 << 5) + sVar1 * -2 + -0x4b;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x13;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + 0x45;
    *(short *)(param_1 + 0xe) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 330000;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
  }
  return param_1;
}

```

---

## _CalcMage

```asm
// === 0831fc3a WongWork::CCalcCharacStat::_CalcMage  [0x0831fc3a-0x83201b3] ===
 831fc3a:	55                   	push   %ebp
 831fc3b:	89 e5                	mov    %esp,%ebp
 831fc3d:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 831fc41:	0f 87 68 05 00 00    	ja     83201af <_ZN8WongWork15CCalcCharacStat9_CalcMageEP15_Additioal_infoii+0x575>
 831fc47:	8b 45 0c             	mov    0xc(%ebp),%eax
 831fc4a:	c1 e0 02             	shl    $0x2,%eax
 831fc4d:	8b 80 24 50 c2 08    	mov    0x8c25024(%eax),%eax
 831fc53:	ff e0                	jmp    *%eax
 831fc55:	8b 45 10             	mov    0x10(%ebp),%eax
 831fc58:	83 e8 01             	sub    $0x1,%eax
 831fc5b:	69 c0 45 01 00 00    	imul   $0x145,%eax,%eax
 831fc61:	05 e8 03 00 00       	add    $0x3e8,%eax
 831fc66:	89 c2                	mov    %eax,%edx
 831fc68:	8b 45 08             	mov    0x8(%ebp),%eax
 831fc6b:	89 10                	mov    %edx,(%eax)
 831fc6d:	8b 45 10             	mov    0x10(%ebp),%eax
 831fc70:	83 e8 01             	sub    $0x1,%eax
 831fc73:	69 c0 77 01 00 00    	imul   $0x177,%eax,%eax
 831fc79:	05 d0 07 00 00       	add    $0x7d0,%eax
 831fc7e:	89 c2                	mov    %eax,%edx
 831fc80:	8b 45 08             	mov    0x8(%ebp),%eax
 831fc83:	89 50 04             	mov    %edx,0x4(%eax)
 831fc86:	8b 45 10             	mov    0x10(%ebp),%eax
 831fc89:	83 e8 01             	sub    $0x1,%eax
 831fc8c:	89 c2                	mov    %eax,%edx
 831fc8e:	89 d0                	mov    %edx,%eax
 831fc90:	c1 e0 02             	shl    $0x2,%eax
 831fc93:	01 d0                	add    %edx,%eax
 831fc95:	c1 e0 02             	shl    $0x2,%eax
 831fc98:	8d 50 1e             	lea    0x1e(%eax),%edx
 831fc9b:	8b 45 08             	mov    0x8(%ebp),%eax
 831fc9e:	66 89 50 08          	mov    %dx,0x8(%eax)
 831fca2:	8b 45 10             	mov    0x10(%ebp),%eax
 831fca5:	83 e8 01             	sub    $0x1,%eax
 831fca8:	89 c2                	mov    %eax,%edx
 831fcaa:	89 d0                	mov    %edx,%eax
 831fcac:	c1 e0 02             	shl    $0x2,%eax
 831fcaf:	01 d0                	add    %edx,%eax
 831fcb1:	c1 e0 02             	shl    $0x2,%eax
 831fcb4:	8d 50 1e             	lea    0x1e(%eax),%edx
 831fcb7:	8b 45 08             	mov    0x8(%ebp),%eax
 831fcba:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831fcbe:	8b 45 10             	mov    0x10(%ebp),%eax
 831fcc1:	83 e8 01             	sub    $0x1,%eax
 831fcc4:	89 c2                	mov    %eax,%edx
 831fcc6:	89 d0                	mov    %edx,%eax
 831fcc8:	c1 e0 02             	shl    $0x2,%eax
 831fccb:	01 d0                	add    %edx,%eax
 831fccd:	c1 e0 03             	shl    $0x3,%eax
 831fcd0:	8d 50 50             	lea    0x50(%eax),%edx
 831fcd3:	8b 45 08             	mov    0x8(%ebp),%eax
 831fcd6:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831fcda:	8b 45 10             	mov    0x10(%ebp),%eax
 831fcdd:	83 e8 01             	sub    $0x1,%eax
 831fce0:	89 c2                	mov    %eax,%edx
 831fce2:	89 d0                	mov    %edx,%eax
 831fce4:	c1 e0 02             	shl    $0x2,%eax
 831fce7:	01 d0                	add    %edx,%eax
 831fce9:	c1 e0 03             	shl    $0x3,%eax
 831fcec:	8d 50 46             	lea    0x46(%eax),%edx
 831fcef:	8b 45 08             	mov    0x8(%ebp),%eax
 831fcf2:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831fcf6:	8b 45 10             	mov    0x10(%ebp),%eax
 831fcf9:	83 e8 01             	sub    $0x1,%eax
 831fcfc:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 831fd02:	8d 90 c0 45 04 00    	lea    0x445c0(%eax),%edx
 831fd08:	8b 45 08             	mov    0x8(%ebp),%eax
 831fd0b:	89 50 3a             	mov    %edx,0x3a(%eax)
 831fd0e:	8b 45 10             	mov    0x10(%ebp),%eax
 831fd11:	83 e8 01             	sub    $0x1,%eax
 831fd14:	89 c2                	mov    %eax,%edx
 831fd16:	89 d0                	mov    %edx,%eax
 831fd18:	c1 e0 02             	shl    $0x2,%eax
 831fd1b:	01 d0                	add    %edx,%eax
 831fd1d:	01 c0                	add    %eax,%eax
 831fd1f:	66 05 c8 00          	add    $0xc8,%ax
 831fd23:	89 c2                	mov    %eax,%edx
 831fd25:	8b 45 08             	mov    0x8(%ebp),%eax
 831fd28:	66 89 50 40          	mov    %dx,0x40(%eax)
 831fd2c:	8b 45 10             	mov    0x10(%ebp),%eax
 831fd2f:	83 e8 01             	sub    $0x1,%eax
 831fd32:	89 c2                	mov    %eax,%edx
 831fd34:	89 d0                	mov    %edx,%eax
 831fd36:	c1 e0 02             	shl    $0x2,%eax
 831fd39:	01 d0                	add    %edx,%eax
 831fd3b:	01 c0                	add    %eax,%eax
 831fd3d:	66 05 88 13          	add    $0x1388,%ax
 831fd41:	89 c2                	mov    %eax,%edx
 831fd43:	8b 45 08             	mov    0x8(%ebp),%eax
 831fd46:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831fd4a:	e9 60 04 00 00       	jmp    83201af <_ZN8WongWork15CCalcCharacStat9_CalcMageEP15_Additioal_infoii+0x575>
 831fd4f:	8b 45 10             	mov    0x10(%ebp),%eax
 831fd52:	69 c0 13 01 00 00    	imul   $0x113,%eax,%eax
 831fd58:	05 27 06 00 00       	add    $0x627,%eax
 831fd5d:	89 c2                	mov    %eax,%edx
 831fd5f:	8b 45 08             	mov    0x8(%ebp),%eax
 831fd62:	89 10                	mov    %edx,(%eax)
 831fd64:	8b 45 10             	mov    0x10(%ebp),%eax
 831fd67:	69 c0 a9 01 00 00    	imul   $0x1a9,%eax,%eax
 831fd6d:	05 d5 02 00 00       	add    $0x2d5,%eax
 831fd72:	89 c2                	mov    %eax,%edx
 831fd74:	8b 45 08             	mov    0x8(%ebp),%eax
 831fd77:	89 50 04             	mov    %edx,0x4(%eax)
 831fd7a:	8b 45 10             	mov    0x10(%ebp),%eax
 831fd7d:	89 c2                	mov    %eax,%edx
 831fd7f:	89 d0                	mov    %edx,%eax
 831fd81:	c1 e0 04             	shl    $0x4,%eax
 831fd84:	66 29 d0             	sub    %dx,%ax
 831fd87:	8d 50 64             	lea    0x64(%eax),%edx
 831fd8a:	8b 45 08             	mov    0x8(%ebp),%eax
 831fd8d:	66 89 50 08          	mov    %dx,0x8(%eax)
 831fd91:	8b 45 10             	mov    0x10(%ebp),%eax
 831fd94:	89 c2                	mov    %eax,%edx
 831fd96:	89 d0                	mov    %edx,%eax
 831fd98:	c1 e0 04             	shl    $0x4,%eax
 831fd9b:	66 29 d0             	sub    %dx,%ax
 831fd9e:	8d 50 64             	lea    0x64(%eax),%edx
 831fda1:	8b 45 08             	mov    0x8(%ebp),%eax
 831fda4:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831fda8:	8b 45 10             	mov    0x10(%ebp),%eax
 831fdab:	89 c2                	mov    %eax,%edx
 831fdad:	89 d0                	mov    %edx,%eax
 831fdaf:	01 c0                	add    %eax,%eax
 831fdb1:	01 d0                	add    %edx,%eax
 831fdb3:	89 c2                	mov    %eax,%edx
 831fdb5:	c1 e2 04             	shl    $0x4,%edx
 831fdb8:	89 d1                	mov    %edx,%ecx
 831fdba:	66 29 c1             	sub    %ax,%cx
 831fdbd:	89 c8                	mov    %ecx,%eax
 831fdbf:	8d 50 ce             	lea    -0x32(%eax),%edx
 831fdc2:	8b 45 08             	mov    0x8(%ebp),%eax
 831fdc5:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831fdc9:	8b 45 10             	mov    0x10(%ebp),%eax
 831fdcc:	89 c2                	mov    %eax,%edx
 831fdce:	89 d0                	mov    %edx,%eax
 831fdd0:	01 c0                	add    %eax,%eax
 831fdd2:	01 d0                	add    %edx,%eax
 831fdd4:	89 c2                	mov    %eax,%edx
 831fdd6:	c1 e2 04             	shl    $0x4,%edx
 831fdd9:	89 d1                	mov    %edx,%ecx
 831fddb:	66 29 c1             	sub    %ax,%cx
 831fdde:	89 c8                	mov    %ecx,%eax
 831fde0:	8d 50 c4             	lea    -0x3c(%eax),%edx
 831fde3:	8b 45 08             	mov    0x8(%ebp),%eax
 831fde6:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831fdea:	8b 45 10             	mov    0x10(%ebp),%eax
 831fded:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 831fdf3:	8d 90 fc 3b 04 00    	lea    0x43bfc(%eax),%edx
 831fdf9:	8b 45 08             	mov    0x8(%ebp),%eax
 831fdfc:	89 50 3a             	mov    %edx,0x3a(%eax)
 831fdff:	8b 45 10             	mov    0x10(%ebp),%eax
 831fe02:	89 c2                	mov    %eax,%edx
 831fe04:	89 d0                	mov    %edx,%eax
 831fe06:	c1 e0 02             	shl    $0x2,%eax
 831fe09:	01 d0                	add    %edx,%eax
 831fe0b:	c1 e0 02             	shl    $0x2,%eax
 831fe0e:	83 c0 0a             	add    $0xa,%eax
 831fe11:	89 c2                	mov    %eax,%edx
 831fe13:	8b 45 08             	mov    0x8(%ebp),%eax
 831fe16:	66 89 50 40          	mov    %dx,0x40(%eax)
 831fe1a:	8b 45 10             	mov    0x10(%ebp),%eax
 831fe1d:	89 c2                	mov    %eax,%edx
 831fe1f:	89 d0                	mov    %edx,%eax
 831fe21:	c1 e0 02             	shl    $0x2,%eax
 831fe24:	01 d0                	add    %edx,%eax
 831fe26:	c1 e0 02             	shl    $0x2,%eax
 831fe29:	8d 90 a8 25 00 00    	lea    0x25a8(%eax),%edx
 831fe2f:	8b 45 08             	mov    0x8(%ebp),%eax
 831fe32:	66 89 50 48          	mov    %dx,0x48(%eax)
 831fe36:	8b 45 10             	mov    0x10(%ebp),%eax
 831fe39:	89 c2                	mov    %eax,%edx
 831fe3b:	89 d0                	mov    %edx,%eax
 831fe3d:	c1 e0 02             	shl    $0x2,%eax
 831fe40:	01 d0                	add    %edx,%eax
 831fe42:	01 c0                	add    %eax,%eax
 831fe44:	66 05 7e 13          	add    $0x137e,%ax
 831fe48:	89 c2                	mov    %eax,%edx
 831fe4a:	8b 45 08             	mov    0x8(%ebp),%eax
 831fe4d:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831fe51:	e9 59 03 00 00       	jmp    83201af <_ZN8WongWork15CCalcCharacStat9_CalcMageEP15_Additioal_infoii+0x575>
 831fe56:	8b 45 10             	mov    0x10(%ebp),%eax
 831fe59:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 831fe5f:	05 65 04 00 00       	add    $0x465,%eax
 831fe64:	89 c2                	mov    %eax,%edx
 831fe66:	8b 45 08             	mov    0x8(%ebp),%eax
 831fe69:	89 10                	mov    %edx,(%eax)
 831fe6b:	8b 45 10             	mov    0x10(%ebp),%eax
 831fe6e:	69 c0 90 01 00 00    	imul   $0x190,%eax,%eax
 831fe74:	05 97 04 00 00       	add    $0x497,%eax
 831fe79:	89 c2                	mov    %eax,%edx
 831fe7b:	8b 45 08             	mov    0x8(%ebp),%eax
 831fe7e:	89 50 04             	mov    %edx,0x4(%eax)
 831fe81:	8b 45 10             	mov    0x10(%ebp),%eax
 831fe84:	89 c2                	mov    %eax,%edx
 831fe86:	89 d0                	mov    %edx,%eax
 831fe88:	c1 e0 02             	shl    $0x2,%eax
 831fe8b:	01 d0                	add    %edx,%eax
 831fe8d:	c1 e0 02             	shl    $0x2,%eax
 831fe90:	8d 50 0a             	lea    0xa(%eax),%edx
 831fe93:	8b 45 08             	mov    0x8(%ebp),%eax
 831fe96:	66 89 50 08          	mov    %dx,0x8(%eax)
 831fe9a:	8b 45 10             	mov    0x10(%ebp),%eax
 831fe9d:	89 c2                	mov    %eax,%edx
 831fe9f:	89 d0                	mov    %edx,%eax
 831fea1:	c1 e0 02             	shl    $0x2,%eax
 831fea4:	01 d0                	add    %edx,%eax
 831fea6:	c1 e0 02             	shl    $0x2,%eax
 831fea9:	8d 50 0a             	lea    0xa(%eax),%edx
 831feac:	8b 45 08             	mov    0x8(%ebp),%eax
 831feaf:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831feb3:	8b 45 10             	mov    0x10(%ebp),%eax
 831feb6:	83 c0 01             	add    $0x1,%eax
 831feb9:	89 c2                	mov    %eax,%edx
 831febb:	89 d0                	mov    %edx,%eax
 831febd:	c1 e0 02             	shl    $0x2,%eax
 831fec0:	01 d0                	add    %edx,%eax
 831fec2:	c1 e0 03             	shl    $0x3,%eax
 831fec5:	89 c2                	mov    %eax,%edx
 831fec7:	8b 45 08             	mov    0x8(%ebp),%eax
 831feca:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831fece:	8b 45 10             	mov    0x10(%ebp),%eax
 831fed1:	89 c2                	mov    %eax,%edx
 831fed3:	89 d0                	mov    %edx,%eax
 831fed5:	c1 e0 02             	shl    $0x2,%eax
 831fed8:	01 d0                	add    %edx,%eax
 831feda:	c1 e0 03             	shl    $0x3,%eax
 831fedd:	8d 50 1e             	lea    0x1e(%eax),%edx
 831fee0:	8b 45 08             	mov    0x8(%ebp),%eax
 831fee3:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831fee7:	8b 45 10             	mov    0x10(%ebp),%eax
 831feea:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 831fef0:	8d 90 fc 3b 04 00    	lea    0x43bfc(%eax),%edx
 831fef6:	8b 45 08             	mov    0x8(%ebp),%eax
 831fef9:	89 50 3a             	mov    %edx,0x3a(%eax)
 831fefc:	8b 45 10             	mov    0x10(%ebp),%eax
 831feff:	89 c2                	mov    %eax,%edx
 831ff01:	89 d0                	mov    %edx,%eax
 831ff03:	c1 e0 02             	shl    $0x2,%eax
 831ff06:	01 d0                	add    %edx,%eax
 831ff08:	c1 e0 02             	shl    $0x2,%eax
 831ff0b:	83 c0 0a             	add    $0xa,%eax
 831ff0e:	89 c2                	mov    %eax,%edx
 831ff10:	8b 45 08             	mov    0x8(%ebp),%eax
 831ff13:	66 89 50 40          	mov    %dx,0x40(%eax)
 831ff17:	8b 45 10             	mov    0x10(%ebp),%eax
 831ff1a:	89 c2                	mov    %eax,%edx
 831ff1c:	89 d0                	mov    %edx,%eax
 831ff1e:	c1 e0 02             	shl    $0x2,%eax
 831ff21:	01 d0                	add    %edx,%eax
 831ff23:	c1 e0 02             	shl    $0x2,%eax
 831ff26:	8d 90 a8 25 00 00    	lea    0x25a8(%eax),%edx
 831ff2c:	8b 45 08             	mov    0x8(%ebp),%eax
 831ff2f:	66 89 50 48          	mov    %dx,0x48(%eax)
 831ff33:	8b 45 10             	mov    0x10(%ebp),%eax
 831ff36:	89 c2                	mov    %eax,%edx
 831ff38:	89 d0                	mov    %edx,%eax
 831ff3a:	c1 e0 02             	shl    $0x2,%eax
 831ff3d:	01 d0                	add    %edx,%eax
 831ff3f:	01 c0                	add    %eax,%eax
 831ff41:	66 05 7e 13          	add    $0x137e,%ax
 831ff45:	89 c2                	mov    %eax,%edx
 831ff47:	8b 45 08             	mov    0x8(%ebp),%eax
 831ff4a:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831ff4e:	e9 5c 02 00 00       	jmp    83201af <_ZN8WongWork15CCalcCharacStat9_CalcMageEP15_Additioal_infoii+0x575>
 831ff53:	8b 45 10             	mov    0x10(%ebp),%eax
 831ff56:	69 c0 90 01 00 00    	imul   $0x190,%eax,%eax
 831ff5c:	2d a3 02 00 00       	sub    $0x2a3,%eax
 831ff61:	89 c2                	mov    %eax,%edx
 831ff63:	8b 45 08             	mov    0x8(%ebp),%eax
 831ff66:	89 10                	mov    %edx,(%eax)
 831ff68:	8b 45 10             	mov    0x10(%ebp),%eax
 831ff6b:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 831ff71:	05 9f 0b 00 00       	add    $0xb9f,%eax
 831ff76:	89 c2                	mov    %eax,%edx
 831ff78:	8b 45 08             	mov    0x8(%ebp),%eax
 831ff7b:	89 50 04             	mov    %edx,0x4(%eax)
 831ff7e:	8b 45 10             	mov    0x10(%ebp),%eax
 831ff81:	89 c2                	mov    %eax,%edx
 831ff83:	89 d0                	mov    %edx,%eax
 831ff85:	c1 e0 02             	shl    $0x2,%eax
 831ff88:	01 d0                	add    %edx,%eax
 831ff8a:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831ff91:	89 d1                	mov    %edx,%ecx
 831ff93:	66 29 c1             	sub    %ax,%cx
 831ff96:	89 c8                	mov    %ecx,%eax
 831ff98:	8d 90 fc fe ff ff    	lea    -0x104(%eax),%edx
 831ff9e:	8b 45 08             	mov    0x8(%ebp),%eax
 831ffa1:	66 89 50 08          	mov    %dx,0x8(%eax)
 831ffa5:	8b 45 10             	mov    0x10(%ebp),%eax
 831ffa8:	89 c2                	mov    %eax,%edx
 831ffaa:	89 d0                	mov    %edx,%eax
 831ffac:	c1 e0 02             	shl    $0x2,%eax
 831ffaf:	01 d0                	add    %edx,%eax
 831ffb1:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831ffb8:	01 d0                	add    %edx,%eax
 831ffba:	8d 50 b0             	lea    -0x50(%eax),%edx
 831ffbd:	8b 45 08             	mov    0x8(%ebp),%eax
 831ffc0:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831ffc4:	8b 45 10             	mov    0x10(%ebp),%eax
 831ffc7:	89 c2                	mov    %eax,%edx
 831ffc9:	89 d0                	mov    %edx,%eax
 831ffcb:	c1 e0 02             	shl    $0x2,%eax
 831ffce:	01 d0                	add    %edx,%eax
 831ffd0:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831ffd7:	89 d1                	mov    %edx,%ecx
 831ffd9:	66 29 c1             	sub    %ax,%cx
 831ffdc:	89 c8                	mov    %ecx,%eax
 831ffde:	8d 90 82 00 00 00    	lea    0x82(%eax),%edx
 831ffe4:	8b 45 08             	mov    0x8(%ebp),%eax
 831ffe7:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831ffeb:	8b 45 10             	mov    0x10(%ebp),%eax
 831ffee:	89 c2                	mov    %eax,%edx
 831fff0:	89 d0                	mov    %edx,%eax
 831fff2:	c1 e0 02             	shl    $0x2,%eax
 831fff5:	01 d0                	add    %edx,%eax
 831fff7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831fffe:	01 d0                	add    %edx,%eax
 8320000:	8d 90 2c 01 00 00    	lea    0x12c(%eax),%edx
 8320006:	8b 45 08             	mov    0x8(%ebp),%eax
 8320009:	66 89 50 0e          	mov    %dx,0xe(%eax)
 832000d:	8b 45 10             	mov    0x10(%ebp),%eax
 8320010:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 8320016:	8d 90 fc 3b 04 00    	lea    0x43bfc(%eax),%edx
 832001c:	8b 45 08             	mov    0x8(%ebp),%eax
 832001f:	89 50 3a             	mov    %edx,0x3a(%eax)
 8320022:	8b 45 10             	mov    0x10(%ebp),%eax
 8320025:	89 c2                	mov    %eax,%edx
 8320027:	89 d0                	mov    %edx,%eax
 8320029:	c1 e0 02             	shl    $0x2,%eax
 832002c:	01 d0                	add    %edx,%eax
 832002e:	01 c0                	add    %eax,%eax
 8320030:	8d 90 5c 26 00 00    	lea    0x265c(%eax),%edx
 8320036:	8b 45 08             	mov    0x8(%ebp),%eax
 8320039:	66 89 50 46          	mov    %dx,0x46(%eax)
 832003d:	8b 55 10             	mov    0x10(%ebp),%edx
 8320040:	89 d0                	mov    %edx,%eax
 8320042:	c1 e0 02             	shl    $0x2,%eax
 8320045:	01 d0                	add    %edx,%eax
 8320047:	01 c0                	add    %eax,%eax
 8320049:	05 5c 26 00 00       	add    $0x265c,%eax
 832004e:	89 c2                	mov    %eax,%edx
 8320050:	8b 45 08             	mov    0x8(%ebp),%eax
 8320053:	89 50 42             	mov    %edx,0x42(%eax)
 8320056:	8b 45 10             	mov    0x10(%ebp),%eax
 8320059:	01 c0                	add    %eax,%eax
 832005b:	89 c2                	mov    %eax,%edx
 832005d:	c1 e2 04             	shl    $0x4,%edx
 8320060:	89 d1                	mov    %edx,%ecx
 8320062:	66 29 c1             	sub    %ax,%cx
 8320065:	89 c8                	mov    %ecx,%eax
 8320067:	66 05 16 12          	add    $0x1216,%ax
 832006b:	89 c2                	mov    %eax,%edx
 832006d:	8b 45 08             	mov    0x8(%ebp),%eax
 8320070:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 8320074:	8b 45 10             	mov    0x10(%ebp),%eax
 8320077:	89 c2                	mov    %eax,%edx
 8320079:	89 d0                	mov    %edx,%eax
 832007b:	c1 e0 02             	shl    $0x2,%eax
 832007e:	01 d0                	add    %edx,%eax
 8320080:	01 c0                	add    %eax,%eax
 8320082:	66 05 be 00          	add    $0xbe,%ax
 8320086:	89 c2                	mov    %eax,%edx
 8320088:	8b 45 08             	mov    0x8(%ebp),%eax
 832008b:	66 89 50 40          	mov    %dx,0x40(%eax)
 832008f:	e9 1b 01 00 00       	jmp    83201af <_ZN8WongWork15CCalcCharacStat9_CalcMageEP15_Additioal_infoii+0x575>
 8320094:	8b 45 10             	mov    0x10(%ebp),%eax
 8320097:	69 c0 5e 01 00 00    	imul   $0x15e,%eax,%eax
 832009d:	05 e1 00 00 00       	add    $0xe1,%eax
 83200a2:	89 c2                	mov    %eax,%edx
 83200a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83200a7:	89 10                	mov    %edx,(%eax)
 83200a9:	8b 45 10             	mov    0x10(%ebp),%eax
 83200ac:	69 c0 5e 01 00 00    	imul   $0x15e,%eax,%eax
 83200b2:	05 1b 08 00 00       	add    $0x81b,%eax
 83200b7:	89 c2                	mov    %eax,%edx
 83200b9:	8b 45 08             	mov    0x8(%ebp),%eax
 83200bc:	89 50 04             	mov    %edx,0x4(%eax)
 83200bf:	8b 45 10             	mov    0x10(%ebp),%eax
 83200c2:	89 c2                	mov    %eax,%edx
 83200c4:	89 d0                	mov    %edx,%eax
 83200c6:	c1 e0 02             	shl    $0x2,%eax
 83200c9:	01 d0                	add    %edx,%eax
 83200cb:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 83200d2:	01 d0                	add    %edx,%eax
 83200d4:	8d 50 b0             	lea    -0x50(%eax),%edx
 83200d7:	8b 45 08             	mov    0x8(%ebp),%eax
 83200da:	66 89 50 08          	mov    %dx,0x8(%eax)
 83200de:	8b 45 10             	mov    0x10(%ebp),%eax
 83200e1:	89 c2                	mov    %eax,%edx
 83200e3:	89 d0                	mov    %edx,%eax
 83200e5:	c1 e0 02             	shl    $0x2,%eax
 83200e8:	01 d0                	add    %edx,%eax
 83200ea:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 83200f1:	01 d0                	add    %edx,%eax
 83200f3:	8d 50 b0             	lea    -0x50(%eax),%edx
 83200f6:	8b 45 08             	mov    0x8(%ebp),%eax
 83200f9:	66 89 50 0a          	mov    %dx,0xa(%eax)
 83200fd:	8b 45 10             	mov    0x10(%ebp),%eax
 8320100:	89 c2                	mov    %eax,%edx
 8320102:	89 d0                	mov    %edx,%eax
 8320104:	c1 e0 02             	shl    $0x2,%eax
 8320107:	01 d0                	add    %edx,%eax
 8320109:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8320110:	89 d1                	mov    %edx,%ecx
 8320112:	66 29 c1             	sub    %ax,%cx
 8320115:	89 c8                	mov    %ecx,%eax
 8320117:	8d 90 82 00 00 00    	lea    0x82(%eax),%edx
 832011d:	8b 45 08             	mov    0x8(%ebp),%eax
 8320120:	66 89 50 0c          	mov    %dx,0xc(%eax)
 8320124:	8b 45 10             	mov    0x10(%ebp),%eax
 8320127:	89 c2                	mov    %eax,%edx
 8320129:	89 d0                	mov    %edx,%eax
 832012b:	c1 e0 02             	shl    $0x2,%eax
 832012e:	01 d0                	add    %edx,%eax
 8320130:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8320137:	89 d1                	mov    %edx,%ecx
 8320139:	66 29 c1             	sub    %ax,%cx
 832013c:	89 c8                	mov    %ecx,%eax
 832013e:	8d 50 78             	lea    0x78(%eax),%edx
 8320141:	8b 45 08             	mov    0x8(%ebp),%eax
 8320144:	66 89 50 0e          	mov    %dx,0xe(%eax)
 8320148:	8b 45 10             	mov    0x10(%ebp),%eax
 832014b:	69 c0 c4 09 00 00    	imul   $0x9c4,%eax,%eax
 8320151:	8d 90 fc 3b 04 00    	lea    0x43bfc(%eax),%edx
 8320157:	8b 45 08             	mov    0x8(%ebp),%eax
 832015a:	89 50 3a             	mov    %edx,0x3a(%eax)
 832015d:	8b 45 10             	mov    0x10(%ebp),%eax
 8320160:	89 c2                	mov    %eax,%edx
 8320162:	89 d0                	mov    %edx,%eax
 8320164:	c1 e0 02             	shl    $0x2,%eax
 8320167:	01 d0                	add    %edx,%eax
 8320169:	c1 e0 02             	shl    $0x2,%eax
 832016c:	83 c0 0a             	add    $0xa,%eax
 832016f:	89 c2                	mov    %eax,%edx
 8320171:	8b 45 08             	mov    0x8(%ebp),%eax
 8320174:	66 89 50 40          	mov    %dx,0x40(%eax)
 8320178:	8b 45 10             	mov    0x10(%ebp),%eax
 832017b:	89 c2                	mov    %eax,%edx
 832017d:	89 d0                	mov    %edx,%eax
 832017f:	c1 e0 02             	shl    $0x2,%eax
 8320182:	01 d0                	add    %edx,%eax
 8320184:	01 c0                	add    %eax,%eax
 8320186:	8d 90 5c 26 00 00    	lea    0x265c(%eax),%edx
 832018c:	8b 45 08             	mov    0x8(%ebp),%eax
 832018f:	66 89 50 48          	mov    %dx,0x48(%eax)
 8320193:	8b 45 10             	mov    0x10(%ebp),%eax
 8320196:	89 c2                	mov    %eax,%edx
 8320198:	89 d0                	mov    %edx,%eax
 832019a:	c1 e0 02             	shl    $0x2,%eax
 832019d:	01 d0                	add    %edx,%eax
 832019f:	c1 e0 02             	shl    $0x2,%eax
 83201a2:	66 05 ca 12          	add    $0x12ca,%ax
 83201a6:	89 c2                	mov    %eax,%edx
 83201a8:	8b 45 08             	mov    0x8(%ebp),%eax
 83201ab:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 83201af:	8b 45 08             	mov    0x8(%ebp),%eax
 83201b2:	5d                   	pop    %ebp
 83201b3:	c3                   	ret

```

```c
// WongWork::CCalcCharacStat::_CalcMage @ 0x831fc3a

/* WongWork::CCalcCharacStat::_CalcMage(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcMage(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 0x145 + 1000;
    *(int *)(param_1 + 4) = (param_3 + -1) * 0x177 + 2000;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x14 + 0x1e;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x14 + 0x1e;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x28 + 0x50;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x28 + 0x46;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 280000;
    *(short *)(param_1 + 0x40) = (sVar1 + -1) * 10 + 200;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 10 + 5000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 0x113 + 0x627;
    *(int *)(param_1 + 4) = param_3 * 0x1a9 + 0x2d5;
    *(short *)(param_1 + 8) = ((short)(param_3 << 4) - sVar1) + 100;
    *(short *)(param_1 + 10) = ((short)(param_3 << 4) - sVar1) + 100;
    *(short *)(param_1 + 0xc) = sVar1 * 0x2d + -0x32;
    *(short *)(param_1 + 0xe) = sVar1 * 0x2d + -0x3c;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x25a8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x137e;
    break;
  case 2:
    *(int *)param_1 = param_3 * 300 + 0x465;
    *(int *)(param_1 + 4) = param_3 * 400 + 0x497;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0xc) = (sVar1 + 1) * 0x28;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + 0x1e;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x25a8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x137e;
    break;
  case 3:
    *(int *)param_1 = param_3 * 400 + -0x2a3;
    *(int *)(param_1 + 4) = param_3 * 300 + 0xb9f;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0x104;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x50;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + 0x82;
    *(short *)(param_1 + 0xe) = sVar1 * 0x19 + 300;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x265c;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x265c;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x1216;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 2 + 0xbe;
    break;
  case 4:
    *(int *)param_1 = param_3 * 0x15e + 0xe1;
    *(int *)(param_1 + 4) = param_3 * 0x15e + 0x81b;
    *(short *)(param_1 + 8) = sVar1 * 0x19 + -0x50;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x50;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + 0x82;
    *(short *)(param_1 + 0xe) = sVar1 * 0x23 + 0x78;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0x48) = sVar1 * 10 + 0x265c;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 4 + 0x12ca;
  }
  return param_1;
}

```

---

## _CalcSwordman

```asm
// === 0831ed6c WongWork::CCalcCharacStat::_CalcSwordman  [0x0831ed6c-0x831f281] ===
 831ed6c:	55                   	push   %ebp
 831ed6d:	89 e5                	mov    %esp,%ebp
 831ed6f:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 831ed73:	0f 87 03 05 00 00    	ja     831f27c <_ZN8WongWork15CCalcCharacStat13_CalcSwordmanEP15_Additioal_infoii+0x510>
 831ed79:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ed7c:	c1 e0 02             	shl    $0x2,%eax
 831ed7f:	8b 80 e8 4f c2 08    	mov    0x8c24fe8(%eax),%eax
 831ed85:	ff e0                	jmp    *%eax
 831ed87:	8b 45 10             	mov    0x10(%ebp),%eax
 831ed8a:	83 e8 01             	sub    $0x1,%eax
 831ed8d:	69 c0 0d 02 00 00    	imul   $0x20d,%eax,%eax
 831ed93:	05 dc 05 00 00       	add    $0x5dc,%eax
 831ed98:	89 c2                	mov    %eax,%edx
 831ed9a:	8b 45 08             	mov    0x8(%ebp),%eax
 831ed9d:	89 10                	mov    %edx,(%eax)
 831ed9f:	8b 45 10             	mov    0x10(%ebp),%eax
 831eda2:	83 e8 01             	sub    $0x1,%eax
 831eda5:	69 c0 af 00 00 00    	imul   $0xaf,%eax,%eax
 831edab:	05 dc 05 00 00       	add    $0x5dc,%eax
 831edb0:	89 c2                	mov    %eax,%edx
 831edb2:	8b 45 08             	mov    0x8(%ebp),%eax
 831edb5:	89 50 04             	mov    %edx,0x4(%eax)
 831edb8:	8b 45 10             	mov    0x10(%ebp),%eax
 831edbb:	83 e8 01             	sub    $0x1,%eax
 831edbe:	01 c0                	add    %eax,%eax
 831edc0:	89 c2                	mov    %eax,%edx
 831edc2:	c1 e2 04             	shl    $0x4,%edx
 831edc5:	89 d1                	mov    %edx,%ecx
 831edc7:	66 29 c1             	sub    %ax,%cx
 831edca:	89 c8                	mov    %ecx,%eax
 831edcc:	8d 50 32             	lea    0x32(%eax),%edx
 831edcf:	8b 45 08             	mov    0x8(%ebp),%eax
 831edd2:	66 89 50 08          	mov    %dx,0x8(%eax)
 831edd6:	8b 45 10             	mov    0x10(%ebp),%eax
 831edd9:	83 e8 01             	sub    $0x1,%eax
 831eddc:	01 c0                	add    %eax,%eax
 831edde:	89 c2                	mov    %eax,%edx
 831ede0:	c1 e2 04             	shl    $0x4,%edx
 831ede3:	89 d1                	mov    %edx,%ecx
 831ede5:	66 29 c1             	sub    %ax,%cx
 831ede8:	89 c8                	mov    %ecx,%eax
 831edea:	8d 50 32             	lea    0x32(%eax),%edx
 831eded:	8b 45 08             	mov    0x8(%ebp),%eax
 831edf0:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831edf4:	8b 45 10             	mov    0x10(%ebp),%eax
 831edf7:	83 e8 01             	sub    $0x1,%eax
 831edfa:	89 c2                	mov    %eax,%edx
 831edfc:	89 d0                	mov    %edx,%eax
 831edfe:	c1 e0 02             	shl    $0x2,%eax
 831ee01:	01 d0                	add    %edx,%eax
 831ee03:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831ee0a:	89 d1                	mov    %edx,%ecx
 831ee0c:	66 29 c1             	sub    %ax,%cx
 831ee0f:	89 c8                	mov    %ecx,%eax
 831ee11:	8d 50 3c             	lea    0x3c(%eax),%edx
 831ee14:	8b 45 08             	mov    0x8(%ebp),%eax
 831ee17:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831ee1b:	8b 45 10             	mov    0x10(%ebp),%eax
 831ee1e:	83 e8 01             	sub    $0x1,%eax
 831ee21:	89 c2                	mov    %eax,%edx
 831ee23:	89 d0                	mov    %edx,%eax
 831ee25:	c1 e0 02             	shl    $0x2,%eax
 831ee28:	01 d0                	add    %edx,%eax
 831ee2a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831ee31:	01 d0                	add    %edx,%eax
 831ee33:	8d 50 32             	lea    0x32(%eax),%edx
 831ee36:	8b 45 08             	mov    0x8(%ebp),%eax
 831ee39:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831ee3d:	8b 45 10             	mov    0x10(%ebp),%eax
 831ee40:	83 e8 01             	sub    $0x1,%eax
 831ee43:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831ee49:	8d 90 80 1a 06 00    	lea    0x61a80(%eax),%edx
 831ee4f:	8b 45 08             	mov    0x8(%ebp),%eax
 831ee52:	89 50 3a             	mov    %edx,0x3a(%eax)
 831ee55:	8b 45 10             	mov    0x10(%ebp),%eax
 831ee58:	83 e8 01             	sub    $0x1,%eax
 831ee5b:	89 c2                	mov    %eax,%edx
 831ee5d:	89 d0                	mov    %edx,%eax
 831ee5f:	c1 e0 02             	shl    $0x2,%eax
 831ee62:	01 d0                	add    %edx,%eax
 831ee64:	c1 e0 02             	shl    $0x2,%eax
 831ee67:	66 05 70 17          	add    $0x1770,%ax
 831ee6b:	89 c2                	mov    %eax,%edx
 831ee6d:	8b 45 08             	mov    0x8(%ebp),%eax
 831ee70:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831ee74:	e9 03 04 00 00       	jmp    831f27c <_ZN8WongWork15CCalcCharacStat13_CalcSwordmanEP15_Additioal_infoii+0x510>
 831ee79:	8b 45 10             	mov    0x10(%ebp),%eax
 831ee7c:	69 c0 90 01 00 00    	imul   $0x190,%eax,%eax
 831ee82:	05 99 0c 00 00       	add    $0xc99,%eax
 831ee87:	89 c2                	mov    %eax,%edx
 831ee89:	8b 45 08             	mov    0x8(%ebp),%eax
 831ee8c:	89 10                	mov    %edx,(%eax)
 831ee8e:	8b 45 10             	mov    0x10(%ebp),%eax
 831ee91:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 831ee97:	2d 9d 03 00 00       	sub    $0x39d,%eax
 831ee9c:	89 c2                	mov    %eax,%edx
 831ee9e:	8b 45 08             	mov    0x8(%ebp),%eax
 831eea1:	89 50 04             	mov    %edx,0x4(%eax)
 831eea4:	8b 45 10             	mov    0x10(%ebp),%eax
 831eea7:	89 c2                	mov    %eax,%edx
 831eea9:	89 d0                	mov    %edx,%eax
 831eeab:	c1 e0 02             	shl    $0x2,%eax
 831eeae:	01 d0                	add    %edx,%eax
 831eeb0:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 831eeb7:	89 d1                	mov    %edx,%ecx
 831eeb9:	66 29 c1             	sub    %ax,%cx
 831eebc:	89 c8                	mov    %ecx,%eax
 831eebe:	8d 50 ba             	lea    -0x46(%eax),%edx
 831eec1:	8b 45 08             	mov    0x8(%ebp),%eax
 831eec4:	66 89 50 08          	mov    %dx,0x8(%eax)
 831eec8:	8b 45 10             	mov    0x10(%ebp),%eax
 831eecb:	01 c0                	add    %eax,%eax
 831eecd:	89 c2                	mov    %eax,%edx
 831eecf:	c1 e2 04             	shl    $0x4,%edx
 831eed2:	89 d1                	mov    %edx,%ecx
 831eed4:	66 29 c1             	sub    %ax,%cx
 831eed7:	89 c8                	mov    %ecx,%eax
 831eed9:	8d 50 14             	lea    0x14(%eax),%edx
 831eedc:	8b 45 08             	mov    0x8(%ebp),%eax
 831eedf:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831eee3:	8b 45 10             	mov    0x10(%ebp),%eax
 831eee6:	01 c0                	add    %eax,%eax
 831eee8:	89 c2                	mov    %eax,%edx
 831eeea:	c1 e2 04             	shl    $0x4,%edx
 831eeed:	89 d1                	mov    %edx,%ecx
 831eeef:	66 29 c1             	sub    %ax,%cx
 831eef2:	89 c8                	mov    %ecx,%eax
 831eef4:	8d 50 73             	lea    0x73(%eax),%edx
 831eef7:	8b 45 08             	mov    0x8(%ebp),%eax
 831eefa:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831eefe:	8b 45 10             	mov    0x10(%ebp),%eax
 831ef01:	83 c0 01             	add    $0x1,%eax
 831ef04:	89 c2                	mov    %eax,%edx
 831ef06:	89 d0                	mov    %edx,%eax
 831ef08:	c1 e0 02             	shl    $0x2,%eax
 831ef0b:	01 d0                	add    %edx,%eax
 831ef0d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 831ef14:	8d 14 10             	lea    (%eax,%edx,1),%edx
 831ef17:	8b 45 08             	mov    0x8(%ebp),%eax
 831ef1a:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831ef1e:	8b 45 10             	mov    0x10(%ebp),%eax
 831ef21:	83 e8 01             	sub    $0x1,%eax
 831ef24:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831ef2a:	8d 90 80 1a 06 00    	lea    0x61a80(%eax),%edx
 831ef30:	8b 45 08             	mov    0x8(%ebp),%eax
 831ef33:	89 50 3a             	mov    %edx,0x3a(%eax)
 831ef36:	8b 45 10             	mov    0x10(%ebp),%eax
 831ef39:	89 c2                	mov    %eax,%edx
 831ef3b:	89 d0                	mov    %edx,%eax
 831ef3d:	c1 e0 02             	shl    $0x2,%eax
 831ef40:	01 d0                	add    %edx,%eax
 831ef42:	01 c0                	add    %eax,%eax
 831ef44:	8d 90 80 20 00 00    	lea    0x2080(%eax),%edx
 831ef4a:	8b 45 08             	mov    0x8(%ebp),%eax
 831ef4d:	66 89 50 46          	mov    %dx,0x46(%eax)
 831ef51:	8b 45 10             	mov    0x10(%ebp),%eax
 831ef54:	01 c0                	add    %eax,%eax
 831ef56:	89 c2                	mov    %eax,%edx
 831ef58:	c1 e2 04             	shl    $0x4,%edx
 831ef5b:	89 d1                	mov    %edx,%ecx
 831ef5d:	66 29 c1             	sub    %ax,%cx
 831ef60:	89 c8                	mov    %ecx,%eax
 831ef62:	66 05 a8 16          	add    $0x16a8,%ax
 831ef66:	89 c2                	mov    %eax,%edx
 831ef68:	8b 45 08             	mov    0x8(%ebp),%eax
 831ef6b:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831ef6f:	e9 08 03 00 00       	jmp    831f27c <_ZN8WongWork15CCalcCharacStat13_CalcSwordmanEP15_Additioal_infoii+0x510>
 831ef74:	8b 45 10             	mov    0x10(%ebp),%eax
 831ef77:	69 c0 5e 01 00 00    	imul   $0x15e,%eax,%eax
 831ef7d:	05 1d 10 00 00       	add    $0x101d,%eax
 831ef82:	89 c2                	mov    %eax,%edx
 831ef84:	8b 45 08             	mov    0x8(%ebp),%eax
 831ef87:	89 10                	mov    %edx,(%eax)
 831ef89:	8b 45 10             	mov    0x10(%ebp),%eax
 831ef8c:	69 c0 5e 01 00 00    	imul   $0x15e,%eax,%eax
 831ef92:	2d 21 07 00 00       	sub    $0x721,%eax
 831ef97:	89 c2                	mov    %eax,%edx
 831ef99:	8b 45 08             	mov    0x8(%ebp),%eax
 831ef9c:	89 50 04             	mov    %edx,0x4(%eax)
 831ef9f:	8b 45 10             	mov    0x10(%ebp),%eax
 831efa2:	89 c2                	mov    %eax,%edx
 831efa4:	89 d0                	mov    %edx,%eax
 831efa6:	c1 e0 02             	shl    $0x2,%eax
 831efa9:	01 d0                	add    %edx,%eax
 831efab:	c1 e0 02             	shl    $0x2,%eax
 831efae:	8d 90 c8 00 00 00    	lea    0xc8(%eax),%edx
 831efb4:	8b 45 08             	mov    0x8(%ebp),%eax
 831efb7:	66 89 50 08          	mov    %dx,0x8(%eax)
 831efbb:	8b 45 10             	mov    0x10(%ebp),%eax
 831efbe:	89 c2                	mov    %eax,%edx
 831efc0:	89 d0                	mov    %edx,%eax
 831efc2:	c1 e0 02             	shl    $0x2,%eax
 831efc5:	01 d0                	add    %edx,%eax
 831efc7:	c1 e0 02             	shl    $0x2,%eax
 831efca:	8d 90 c8 00 00 00    	lea    0xc8(%eax),%edx
 831efd0:	8b 45 08             	mov    0x8(%ebp),%eax
 831efd3:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831efd7:	8b 45 10             	mov    0x10(%ebp),%eax
 831efda:	89 c2                	mov    %eax,%edx
 831efdc:	89 d0                	mov    %edx,%eax
 831efde:	c1 e0 02             	shl    $0x2,%eax
 831efe1:	01 d0                	add    %edx,%eax
 831efe3:	c1 e0 03             	shl    $0x3,%eax
 831efe6:	8d 50 bf             	lea    -0x41(%eax),%edx
 831efe9:	8b 45 08             	mov    0x8(%ebp),%eax
 831efec:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831eff0:	8b 45 10             	mov    0x10(%ebp),%eax
 831eff3:	89 c2                	mov    %eax,%edx
 831eff5:	89 d0                	mov    %edx,%eax
 831eff7:	c1 e0 02             	shl    $0x2,%eax
 831effa:	01 d0                	add    %edx,%eax
 831effc:	c1 e0 03             	shl    $0x3,%eax
 831efff:	8d 90 0b ff ff ff    	lea    -0xf5(%eax),%edx
 831f005:	8b 45 08             	mov    0x8(%ebp),%eax
 831f008:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f00c:	8b 45 10             	mov    0x10(%ebp),%eax
 831f00f:	83 c0 07             	add    $0x7,%eax
 831f012:	c1 e0 03             	shl    $0x3,%eax
 831f015:	89 c2                	mov    %eax,%edx
 831f017:	8b 45 08             	mov    0x8(%ebp),%eax
 831f01a:	66 89 50 14          	mov    %dx,0x14(%eax)
 831f01e:	8b 45 10             	mov    0x10(%ebp),%eax
 831f021:	83 e8 01             	sub    $0x1,%eax
 831f024:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831f02a:	8d 90 80 1a 06 00    	lea    0x61a80(%eax),%edx
 831f030:	8b 45 08             	mov    0x8(%ebp),%eax
 831f033:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f036:	8b 45 10             	mov    0x10(%ebp),%eax
 831f039:	89 c2                	mov    %eax,%edx
 831f03b:	89 d0                	mov    %edx,%eax
 831f03d:	c1 e0 02             	shl    $0x2,%eax
 831f040:	01 d0                	add    %edx,%eax
 831f042:	c1 e0 02             	shl    $0x2,%eax
 831f045:	66 2d d2 00          	sub    $0xd2,%ax
 831f049:	89 c2                	mov    %eax,%edx
 831f04b:	8b 45 08             	mov    0x8(%ebp),%eax
 831f04e:	66 89 50 40          	mov    %dx,0x40(%eax)
 831f052:	8b 45 10             	mov    0x10(%ebp),%eax
 831f055:	89 c2                	mov    %eax,%edx
 831f057:	89 d0                	mov    %edx,%eax
 831f059:	c1 e0 02             	shl    $0x2,%eax
 831f05c:	01 d0                	add    %edx,%eax
 831f05e:	c1 e0 02             	shl    $0x2,%eax
 831f061:	8d 90 f0 19 00 00    	lea    0x19f0(%eax),%edx
 831f067:	8b 45 08             	mov    0x8(%ebp),%eax
 831f06a:	66 89 50 48          	mov    %dx,0x48(%eax)
 831f06e:	8b 45 10             	mov    0x10(%ebp),%eax
 831f071:	89 c2                	mov    %eax,%edx
 831f073:	89 d0                	mov    %edx,%eax
 831f075:	c1 e0 02             	shl    $0x2,%eax
 831f078:	01 d0                	add    %edx,%eax
 831f07a:	01 c0                	add    %eax,%eax
 831f07c:	66 05 10 18          	add    $0x1810,%ax
 831f080:	89 c2                	mov    %eax,%edx
 831f082:	8b 45 08             	mov    0x8(%ebp),%eax
 831f085:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f089:	e9 ee 01 00 00       	jmp    831f27c <_ZN8WongWork15CCalcCharacStat13_CalcSwordmanEP15_Additioal_infoii+0x510>
 831f08e:	8b 45 10             	mov    0x10(%ebp),%eax
 831f091:	69 c0 26 02 00 00    	imul   $0x226,%eax,%eax
 831f097:	05 0d 02 00 00       	add    $0x20d,%eax
 831f09c:	89 c2                	mov    %eax,%edx
 831f09e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f0a1:	89 10                	mov    %edx,(%eax)
 831f0a3:	8b 45 10             	mov    0x10(%ebp),%eax
 831f0a6:	69 c0 96 00 00 00    	imul   $0x96,%eax,%eax
 831f0ac:	05 ef 06 00 00       	add    $0x6ef,%eax
 831f0b1:	89 c2                	mov    %eax,%edx
 831f0b3:	8b 45 08             	mov    0x8(%ebp),%eax
 831f0b6:	89 50 04             	mov    %edx,0x4(%eax)
 831f0b9:	8b 45 10             	mov    0x10(%ebp),%eax
 831f0bc:	89 c2                	mov    %eax,%edx
 831f0be:	89 d0                	mov    %edx,%eax
 831f0c0:	c1 e0 02             	shl    $0x2,%eax
 831f0c3:	01 d0                	add    %edx,%eax
 831f0c5:	c1 e0 03             	shl    $0x3,%eax
 831f0c8:	8d 90 60 ff ff ff    	lea    -0xa0(%eax),%edx
 831f0ce:	8b 45 08             	mov    0x8(%ebp),%eax
 831f0d1:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f0d5:	8b 45 10             	mov    0x10(%ebp),%eax
 831f0d8:	89 c2                	mov    %eax,%edx
 831f0da:	89 d0                	mov    %edx,%eax
 831f0dc:	01 c0                	add    %eax,%eax
 831f0de:	01 d0                	add    %edx,%eax
 831f0e0:	89 c2                	mov    %eax,%edx
 831f0e2:	c1 e2 04             	shl    $0x4,%edx
 831f0e5:	89 d1                	mov    %edx,%ecx
 831f0e7:	66 29 c1             	sub    %ax,%cx
 831f0ea:	89 c8                	mov    %ecx,%eax
 831f0ec:	8d 90 06 ff ff ff    	lea    -0xfa(%eax),%edx
 831f0f2:	8b 45 08             	mov    0x8(%ebp),%eax
 831f0f5:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f0f9:	8b 45 10             	mov    0x10(%ebp),%eax
 831f0fc:	89 c2                	mov    %eax,%edx
 831f0fe:	89 d0                	mov    %edx,%eax
 831f100:	c1 e0 04             	shl    $0x4,%eax
 831f103:	66 29 d0             	sub    %dx,%ax
 831f106:	8d 90 81 01 00 00    	lea    0x181(%eax),%edx
 831f10c:	8b 45 08             	mov    0x8(%ebp),%eax
 831f10f:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f113:	8b 45 10             	mov    0x10(%ebp),%eax
 831f116:	89 c2                	mov    %eax,%edx
 831f118:	89 d0                	mov    %edx,%eax
 831f11a:	c1 e0 02             	shl    $0x2,%eax
 831f11d:	01 d0                	add    %edx,%eax
 831f11f:	c1 e0 02             	shl    $0x2,%eax
 831f122:	8d 50 73             	lea    0x73(%eax),%edx
 831f125:	8b 45 08             	mov    0x8(%ebp),%eax
 831f128:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f12c:	8b 45 10             	mov    0x10(%ebp),%eax
 831f12f:	83 e8 01             	sub    $0x1,%eax
 831f132:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831f138:	8d 90 80 1a 06 00    	lea    0x61a80(%eax),%edx
 831f13e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f141:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f144:	8b 55 10             	mov    0x10(%ebp),%edx
 831f147:	89 d0                	mov    %edx,%eax
 831f149:	c1 e0 02             	shl    $0x2,%eax
 831f14c:	01 d0                	add    %edx,%eax
 831f14e:	01 c0                	add    %eax,%eax
 831f150:	05 80 20 00 00       	add    $0x2080,%eax
 831f155:	89 c2                	mov    %eax,%edx
 831f157:	8b 45 08             	mov    0x8(%ebp),%eax
 831f15a:	89 50 42             	mov    %edx,0x42(%eax)
 831f15d:	8b 45 10             	mov    0x10(%ebp),%eax
 831f160:	89 c2                	mov    %eax,%edx
 831f162:	89 d0                	mov    %edx,%eax
 831f164:	c1 e0 02             	shl    $0x2,%eax
 831f167:	01 d0                	add    %edx,%eax
 831f169:	c1 e0 03             	shl    $0x3,%eax
 831f16c:	66 05 f4 15          	add    $0x15f4,%ax
 831f170:	89 c2                	mov    %eax,%edx
 831f172:	8b 45 08             	mov    0x8(%ebp),%eax
 831f175:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f179:	e9 fe 00 00 00       	jmp    831f27c <_ZN8WongWork15CCalcCharacStat13_CalcSwordmanEP15_Additioal_infoii+0x510>
 831f17e:	8b 45 10             	mov    0x10(%ebp),%eax
 831f181:	69 c0 0d 02 00 00    	imul   $0x20d,%eax,%eax
 831f187:	05 cf 03 00 00       	add    $0x3cf,%eax
 831f18c:	89 c2                	mov    %eax,%edx
 831f18e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f191:	89 10                	mov    %edx,(%eax)
 831f193:	8b 45 10             	mov    0x10(%ebp),%eax
 831f196:	69 c0 af 00 00 00    	imul   $0xaf,%eax,%eax
 831f19c:	05 2d 05 00 00       	add    $0x52d,%eax
 831f1a1:	89 c2                	mov    %eax,%edx
 831f1a3:	8b 45 08             	mov    0x8(%ebp),%eax
 831f1a6:	89 50 04             	mov    %edx,0x4(%eax)
 831f1a9:	8b 45 10             	mov    0x10(%ebp),%eax
 831f1ac:	01 c0                	add    %eax,%eax
 831f1ae:	89 c2                	mov    %eax,%edx
 831f1b0:	c1 e2 04             	shl    $0x4,%edx
 831f1b3:	89 d1                	mov    %edx,%ecx
 831f1b5:	66 29 c1             	sub    %ax,%cx
 831f1b8:	89 c8                	mov    %ecx,%eax
 831f1ba:	8d 50 14             	lea    0x14(%eax),%edx
 831f1bd:	8b 45 08             	mov    0x8(%ebp),%eax
 831f1c0:	66 89 50 08          	mov    %dx,0x8(%eax)
 831f1c4:	8b 45 10             	mov    0x10(%ebp),%eax
 831f1c7:	01 c0                	add    %eax,%eax
 831f1c9:	89 c2                	mov    %eax,%edx
 831f1cb:	c1 e2 04             	shl    $0x4,%edx
 831f1ce:	89 d1                	mov    %edx,%ecx
 831f1d0:	66 29 c1             	sub    %ax,%cx
 831f1d3:	89 c8                	mov    %ecx,%eax
 831f1d5:	8d 50 14             	lea    0x14(%eax),%edx
 831f1d8:	8b 45 08             	mov    0x8(%ebp),%eax
 831f1db:	66 89 50 0a          	mov    %dx,0xa(%eax)
 831f1df:	8b 45 10             	mov    0x10(%ebp),%eax
 831f1e2:	01 c0                	add    %eax,%eax
 831f1e4:	89 c2                	mov    %eax,%edx
 831f1e6:	c1 e2 04             	shl    $0x4,%edx
 831f1e9:	89 d1                	mov    %edx,%ecx
 831f1eb:	66 29 c1             	sub    %ax,%cx
 831f1ee:	89 c8                	mov    %ecx,%eax
 831f1f0:	8d 50 73             	lea    0x73(%eax),%edx
 831f1f3:	8b 45 08             	mov    0x8(%ebp),%eax
 831f1f6:	66 89 50 0c          	mov    %dx,0xc(%eax)
 831f1fa:	8b 45 10             	mov    0x10(%ebp),%eax
 831f1fd:	01 c0                	add    %eax,%eax
 831f1ff:	89 c2                	mov    %eax,%edx
 831f201:	c1 e2 04             	shl    $0x4,%edx
 831f204:	89 d1                	mov    %edx,%ecx
 831f206:	66 29 c1             	sub    %ax,%cx
 831f209:	89 c8                	mov    %ecx,%eax
 831f20b:	8d 50 bf             	lea    -0x41(%eax),%edx
 831f20e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f211:	66 89 50 0e          	mov    %dx,0xe(%eax)
 831f215:	8b 45 10             	mov    0x10(%ebp),%eax
 831f218:	83 e8 01             	sub    $0x1,%eax
 831f21b:	69 c0 b8 0b 00 00    	imul   $0xbb8,%eax,%eax
 831f221:	8d 90 80 1a 06 00    	lea    0x61a80(%eax),%edx
 831f227:	8b 45 08             	mov    0x8(%ebp),%eax
 831f22a:	89 50 3a             	mov    %edx,0x3a(%eax)
 831f22d:	8b 45 10             	mov    0x10(%ebp),%eax
 831f230:	89 c2                	mov    %eax,%edx
 831f232:	89 d0                	mov    %edx,%eax
 831f234:	c1 e0 02             	shl    $0x2,%eax
 831f237:	01 d0                	add    %edx,%eax
 831f239:	83 c0 3c             	add    $0x3c,%eax
 831f23c:	89 c2                	mov    %eax,%edx
 831f23e:	8b 45 08             	mov    0x8(%ebp),%eax
 831f241:	66 89 50 40          	mov    %dx,0x40(%eax)
 831f245:	8b 45 10             	mov    0x10(%ebp),%eax
 831f248:	89 c2                	mov    %eax,%edx
 831f24a:	89 d0                	mov    %edx,%eax
 831f24c:	c1 e0 02             	shl    $0x2,%eax
 831f24f:	01 d0                	add    %edx,%eax
 831f251:	01 c0                	add    %eax,%eax
 831f253:	8d 90 a4 1a 00 00    	lea    0x1aa4(%eax),%edx
 831f259:	8b 45 08             	mov    0x8(%ebp),%eax
 831f25c:	66 89 50 48          	mov    %dx,0x48(%eax)
 831f260:	8b 45 10             	mov    0x10(%ebp),%eax
 831f263:	89 c2                	mov    %eax,%edx
 831f265:	89 d0                	mov    %edx,%eax
 831f267:	c1 e0 02             	shl    $0x2,%eax
 831f26a:	01 d0                	add    %edx,%eax
 831f26c:	c1 e0 02             	shl    $0x2,%eax
 831f26f:	66 05 08 16          	add    $0x1608,%ax
 831f273:	89 c2                	mov    %eax,%edx
 831f275:	8b 45 08             	mov    0x8(%ebp),%eax
 831f278:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 831f27c:	8b 45 08             	mov    0x8(%ebp),%eax
 831f27f:	5d                   	pop    %ebp
 831f280:	c3                   	ret
 831f281:	90                   	nop

```

```c
// WongWork::CCalcCharacStat::_CalcSwordman @ 0x831ed6c

/* WongWork::CCalcCharacStat::_CalcSwordman(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcSwordman(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 0x20d + 0x5dc;
    *(int *)(param_1 + 4) = (param_3 + -1) * 0xaf + 0x5dc;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x1e + 0x32;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x1e + 0x32;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x23 + 0x3c;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x19 + 0x32;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 0x14 + 6000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 400 + 0xc99;
    *(int *)(param_1 + 4) = param_3 * 300 + -0x39d;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0x46;
    *(short *)(param_1 + 10) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(short *)(param_1 + 0xe) = (sVar1 + 1) * 0x19;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x2080;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
    break;
  case 2:
    *(int *)param_1 = param_3 * 0x15e + 0x101d;
    *(int *)(param_1 + 4) = param_3 * 0x15e + -0x721;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 200;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 200;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 2) + sVar1) * 8 + -0x41;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + -0xf5;
    *(short *)(param_1 + 0x14) = (sVar1 + 7) * 8;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + -0xd2;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x19f0;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x1810;
    break;
  case 3:
    *(int *)param_1 = param_3 * 0x226 + 0x20d;
    *(int *)(param_1 + 4) = param_3 * 0x96 + 0x6ef;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 8 + -0xa0;
    *(short *)(param_1 + 10) = sVar1 * 0x2d + -0xfa;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 4) - sVar1) + 0x181;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 4 + 0x73;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x2080;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 8 + 0x15f4;
    break;
  case 4:
    *(int *)param_1 = param_3 * 0x20d + 0x3cf;
    *(int *)(param_1 + 4) = param_3 * 0xaf + 0x52d;
    *(short *)(param_1 + 8) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 10) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(short *)(param_1 + 0xe) = (short)(param_3 << 5) + sVar1 * -2 + -0x41;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x40) = (short)(param_3 << 2) + sVar1 + 0x3c;
    *(short *)(param_1 + 0x48) = sVar1 * 10 + 0x1aa4;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 4 + 0x1608;
  }
  return param_1;
}

```

