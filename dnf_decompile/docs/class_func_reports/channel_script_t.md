# channel_script_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GetPvPChannelNumber

```asm
// === 088dcc28 channel_script_t::GetPvPChannelNumber  [0x088dcc28-0x88dcd37] ===
 88dcc28:	55                   	push   %ebp
 88dcc29:	89 e5                	mov    %esp,%ebp
 88dcc2b:	83 ec 48             	sub    $0x48,%esp
 88dcc2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 88dcc31:	88 45 d4             	mov    %al,-0x2c(%ebp)
 88dcc34:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 88dcc38:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88dcc3b:	8b 45 08             	mov    0x8(%ebp),%eax
 88dcc3e:	8d 48 18             	lea    0x18(%eax),%ecx
 88dcc41:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88dcc44:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 88dcc47:	89 54 24 08          	mov    %edx,0x8(%esp)
 88dcc4b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88dcc4f:	89 04 24             	mov    %eax,(%esp)
 88dcc52:	e8 97 0e 00 00       	call   88ddaee <_ZNKSt3mapIiS_Ii14channel_info_tSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE4findERS4_>
 88dcc57:	83 ec 04             	sub    $0x4,%esp
 88dcc5a:	8b 45 08             	mov    0x8(%ebp),%eax
 88dcc5d:	8d 50 18             	lea    0x18(%eax),%edx
 88dcc60:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88dcc63:	89 54 24 04          	mov    %edx,0x4(%esp)
 88dcc67:	89 04 24             	mov    %eax,(%esp)
 88dcc6a:	e8 ab 0e 00 00       	call   88ddb1a <_ZNKSt3mapIiS_Ii14channel_info_tSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE3endEv>
 88dcc6f:	83 ec 04             	sub    $0x4,%esp
 88dcc72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88dcc75:	89 44 24 04          	mov    %eax,0x4(%esp)
 88dcc79:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88dcc7c:	89 04 24             	mov    %eax,(%esp)
 88dcc7f:	e8 bc 0e 00 00       	call   88ddb40 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi14channel_info_tSt4lessIiESaIS0_IS1_S3_EEEEEeqERKSA_>
 88dcc84:	84 c0                	test   %al,%al
 88dcc86:	74 0a                	je     88dcc92 <_ZNK16channel_script_t19GetPvPChannelNumberEhj+0x6a>
 88dcc88:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88dcc8d:	e9 a4 00 00 00       	jmp    88dcd36 <_ZNK16channel_script_t19GetPvPChannelNumberEhj+0x10e>
 88dcc92:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88dcc95:	89 04 24             	mov    %eax,(%esp)
 88dcc98:	e8 b7 0e 00 00       	call   88ddb54 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi14channel_info_tSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 88dcc9d:	83 c0 04             	add    $0x4,%eax
 88dcca0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88dcca3:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 88dccaa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88dccad:	8b 55 f0             	mov    -0x10(%ebp),%edx
 88dccb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 88dccb4:	89 04 24             	mov    %eax,(%esp)
 88dccb7:	e8 a6 0e 00 00       	call   88ddb62 <_ZNKSt3mapIi14channel_info_tSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 88dccbc:	83 ec 04             	sub    $0x4,%esp
 88dccbf:	eb 45                	jmp    88dcd06 <_ZNK16channel_script_t19GetPvPChannelNumberEhj+0xde>
 88dccc1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88dccc4:	89 04 24             	mov    %eax,(%esp)
 88dccc7:	e8 14 0f 00 00       	call   88ddbe0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi14channel_info_tEEptEv>
 88dcccc:	8b 40 08             	mov    0x8(%eax),%eax
 88dcccf:	89 04 24             	mov    %eax,(%esp)
 88dccd2:	e8 7e 05 00 00       	call   88dd255 <_Z14IS_PVP_CHANNELi>
 88dccd7:	84 c0                	test   %al,%al
 88dccd9:	74 04                	je     88dccdf <_ZNK16channel_script_t19GetPvPChannelNumberEhj+0xb7>
 88dccdb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88dccdf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88dcce2:	89 04 24             	mov    %eax,(%esp)
 88dcce5:	e8 f6 0e 00 00       	call   88ddbe0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi14channel_info_tEEptEv>
 88dccea:	8b 00                	mov    (%eax),%eax
 88dccec:	3b 45 10             	cmp    0x10(%ebp),%eax
 88dccef:	0f 94 c0             	sete   %al
 88dccf2:	84 c0                	test   %al,%al
 88dccf4:	74 05                	je     88dccfb <_ZNK16channel_script_t19GetPvPChannelNumberEhj+0xd3>
 88dccf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88dccf9:	eb 3b                	jmp    88dcd36 <_ZNK16channel_script_t19GetPvPChannelNumberEhj+0x10e>
 88dccfb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88dccfe:	89 04 24             	mov    %eax,(%esp)
 88dcd01:	e8 bc 0e 00 00       	call   88ddbc2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi14channel_info_tEEppEv>
 88dcd06:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88dcd09:	8b 55 f0             	mov    -0x10(%ebp),%edx
 88dcd0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 88dcd10:	89 04 24             	mov    %eax,(%esp)
 88dcd13:	e8 70 0e 00 00       	call   88ddb88 <_ZNKSt3mapIi14channel_info_tSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 88dcd18:	83 ec 04             	sub    $0x4,%esp
 88dcd1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88dcd1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88dcd22:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88dcd25:	89 04 24             	mov    %eax,(%esp)
 88dcd28:	e8 81 0e 00 00       	call   88ddbae <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi14channel_info_tEEneERKS4_>
 88dcd2d:	84 c0                	test   %al,%al
 88dcd2f:	75 90                	jne    88dccc1 <_ZNK16channel_script_t19GetPvPChannelNumberEhj+0x99>
 88dcd31:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88dcd36:	c9                   	leave
 88dcd37:	c3                   	ret

```

```c
// channel_script_t::GetPvPChannelNumber @ 0x88dcc28

/* channel_script_t::GetPvPChannelNumber(unsigned char, unsigned int) const */

int __thiscall
channel_script_t::GetPvPChannelNumber(channel_script_t *this,uchar param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
  local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
  local_24 [4];
  uint local_20;
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  local_1c [4];
  map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_20 = (uint)param_1;
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::find((int *)local_24);
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
          ::operator==(local_24,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    local_14 = std::
               _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
               ::operator->(local_24);
    local_14 = local_14 + 4;
    local_10 = -1;
    std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>::
      end(local_18);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)local_28,
                         (_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)local_28);
      cVar1 = IS_PVP_CHANNEL(*(int *)(iVar2 + 8));
      if (cVar1 != '\0') {
        local_10 = local_10 + 1;
      }
      puVar3 = (uint *)std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator->
                                 ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)
                                  local_28);
      if (*puVar3 == param_2) {
        return local_10;
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)local_28);
    }
  }
  return -1;
}

```

---

## getBonusRate

```asm
// === 088dce3c channel_script_t::getBonusRate  [0x088dce3c-0x88dcee1] ===
 88dce3c:	55                   	push   %ebp
 88dce3d:	89 e5                	mov    %esp,%ebp
 88dce3f:	83 ec 38             	sub    $0x38,%esp
 88dce42:	8b 45 0c             	mov    0xc(%ebp),%eax
 88dce45:	88 45 e4             	mov    %al,-0x1c(%ebp)
 88dce48:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 88dce4c:	8b 55 10             	mov    0x10(%ebp),%edx
 88dce4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 88dce53:	89 44 24 04          	mov    %eax,0x4(%esp)
 88dce57:	8b 45 08             	mov    0x8(%ebp),%eax
 88dce5a:	89 04 24             	mov    %eax,(%esp)
 88dce5d:	e8 d6 fe ff ff       	call   88dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>
 88dce62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88dce65:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88dce69:	75 04                	jne    88dce6f <_ZNK16channel_script_t12getBonusRateEhjj+0x33>
 88dce6b:	d9 ee                	fldz
 88dce6d:	eb 71                	jmp    88dcee0 <_ZNK16channel_script_t12getBonusRateEhjj+0xa4>
 88dce6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88dce72:	8b 40 10             	mov    0x10(%eax),%eax
 88dce75:	85 c0                	test   %eax,%eax
 88dce77:	75 04                	jne    88dce7d <_ZNK16channel_script_t12getBonusRateEhjj+0x41>
 88dce79:	d9 ee                	fldz
 88dce7b:	eb 63                	jmp    88dcee0 <_ZNK16channel_script_t12getBonusRateEhjj+0xa4>
 88dce7d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 88dce84:	eb 40                	jmp    88dcec6 <_ZNK16channel_script_t12getBonusRateEhjj+0x8a>
 88dce86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88dce89:	8b 40 10             	mov    0x10(%eax),%eax
 88dce8c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 88dce8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 88dce93:	89 04 24             	mov    %eax,(%esp)
 88dce96:	e8 d7 9d 7b ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 88dce9b:	8b 00                	mov    (%eax),%eax
 88dce9d:	3b 45 14             	cmp    0x14(%ebp),%eax
 88dcea0:	0f 94 c0             	sete   %al
 88dcea3:	84 c0                	test   %al,%al
 88dcea5:	74 1b                	je     88dcec2 <_ZNK16channel_script_t12getBonusRateEhjj+0x86>
 88dcea7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88dceaa:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 88dceae:	0f b6 c0             	movzbl %al,%eax
 88dceb1:	66 89 45 e2          	mov    %ax,-0x1e(%ebp)
 88dceb5:	df 45 e2             	filds  -0x1e(%ebp)
 88dceb8:	d9 05 34 c0 e0 08    	flds   0x8e0c034
 88dcebe:	de f9                	fdivrp %st,%st(1)
 88dcec0:	eb 1e                	jmp    88dcee0 <_ZNK16channel_script_t12getBonusRateEhjj+0xa4>
 88dcec2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 88dcec6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88dcec9:	8b 40 10             	mov    0x10(%eax),%eax
 88dcecc:	89 04 24             	mov    %eax,(%esp)
 88dcecf:	e8 ec 12 7b ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 88dced4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 88dced7:	0f 97 c0             	seta   %al
 88dceda:	84 c0                	test   %al,%al
 88dcedc:	75 a8                	jne    88dce86 <_ZNK16channel_script_t12getBonusRateEhjj+0x4a>
 88dcede:	d9 ee                	fldz
 88dcee0:	c9                   	leave
 88dcee1:	c3                   	ret

```

```c
// channel_script_t::getBonusRate @ 0x88dce3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const */

longdouble __thiscall
channel_script_t::getBonusRate(channel_script_t *this,uchar param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14;
  
  iVar1 = getChannelInfo(this,param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    for (local_14 = 0;
        uVar3 = std::vector<int,std::allocator<int>>::size
                          (*(vector<int,std::allocator<int>> **)(iVar1 + 0x10)), local_14 < uVar3;
        local_14 = local_14 + 1) {
      puVar2 = (uint *)std::vector<int,std::allocator<int>>::at
                                 (*(vector<int,std::allocator<int>> **)(iVar1 + 0x10),local_14);
      if (*puVar2 == param_3) {
        return (longdouble)*(byte *)(iVar1 + 0x14) / (longdouble)_DAT_08e0c034;
      }
    }
  }
  return (longdouble)0;
}

```

---

## getBonusRateEventServer

```asm
// === 088dcee2 channel_script_t::getBonusRateEventServer  [0x088dcee2-0x88dcf24] ===
 88dcee2:	55                   	push   %ebp
 88dcee3:	89 e5                	mov    %esp,%ebp
 88dcee5:	83 ec 48             	sub    $0x48,%esp
 88dcee8:	8b 45 0c             	mov    0xc(%ebp),%eax
 88dceeb:	88 45 e4             	mov    %al,-0x1c(%ebp)
 88dceee:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 88dcef2:	8b 55 10             	mov    0x10(%ebp),%edx
 88dcef5:	89 54 24 08          	mov    %edx,0x8(%esp)
 88dcef9:	89 44 24 04          	mov    %eax,0x4(%esp)
 88dcefd:	8b 45 08             	mov    0x8(%ebp),%eax
 88dcf00:	89 04 24             	mov    %eax,(%esp)
 88dcf03:	e8 30 fe ff ff       	call   88dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>
 88dcf08:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88dcf0b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88dcf0f:	75 07                	jne    88dcf18 <_ZNK16channel_script_t23getBonusRateEventServerEhj+0x36>
 88dcf11:	b8 00 00 00 00       	mov    $0x0,%eax
 88dcf16:	eb 05                	jmp    88dcf1d <_ZNK16channel_script_t23getBonusRateEventServerEhj+0x3b>
 88dcf18:	b8 0a d7 a3 3c       	mov    $0x3ca3d70a,%eax
 88dcf1d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 88dcf20:	d9 45 d4             	flds   -0x2c(%ebp)
 88dcf23:	c9                   	leave
 88dcf24:	c3                   	ret

```

```c
// channel_script_t::getBonusRateEventServer @ 0x88dcee2

/* channel_script_t::getBonusRateEventServer(unsigned char, unsigned int) const */

longdouble __thiscall
channel_script_t::getBonusRateEventServer(channel_script_t *this,uchar param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = getChannelInfo(this,param_1,param_2);
  if (iVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 0.02;
  }
  return (longdouble)fVar2;
}

```

---

## getChannelInfo

```asm
// === 088dcd38 channel_script_t::getChannelInfo  [0x088dcd38-0x88dce3b] ===
 88dcd38:	55                   	push   %ebp
 88dcd39:	89 e5                	mov    %esp,%ebp
 88dcd3b:	83 ec 48             	sub    $0x48,%esp
 88dcd3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 88dcd41:	88 45 d4             	mov    %al,-0x2c(%ebp)
 88dcd44:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88dcd47:	89 04 24             	mov    %eax,(%esp)
 88dcd4a:	e8 9f 0e 00 00       	call   88ddbee <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi14channel_info_tEEC1Ev>
 88dcd4f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88dcd52:	89 04 24             	mov    %eax,(%esp)
 88dcd55:	e8 a2 0e 00 00       	call   88ddbfc <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi14channel_info_tSt4lessIiESaIS0_IS1_S3_EEEEEC1Ev>
 88dcd5a:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 88dcd5e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 88dcd61:	8b 45 08             	mov    0x8(%ebp),%eax
 88dcd64:	8d 48 18             	lea    0x18(%eax),%ecx
 88dcd67:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88dcd6a:	8d 55 e8             	lea    -0x18(%ebp),%edx
 88dcd6d:	89 54 24 08          	mov    %edx,0x8(%esp)
 88dcd71:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88dcd75:	89 04 24             	mov    %eax,(%esp)
 88dcd78:	e8 71 0d 00 00       	call   88ddaee <_ZNKSt3mapIiS_Ii14channel_info_tSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE4findERS4_>
 88dcd7d:	83 ec 04             	sub    $0x4,%esp
 88dcd80:	8b 45 d0             	mov    -0x30(%ebp),%eax
 88dcd83:	89 45 e0             	mov    %eax,-0x20(%ebp)
 88dcd86:	8b 45 08             	mov    0x8(%ebp),%eax
 88dcd89:	8d 50 18             	lea    0x18(%eax),%edx
 88dcd8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88dcd8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 88dcd93:	89 04 24             	mov    %eax,(%esp)
 88dcd96:	e8 7f 0d 00 00       	call   88ddb1a <_ZNKSt3mapIiS_Ii14channel_info_tSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE3endEv>
 88dcd9b:	83 ec 04             	sub    $0x4,%esp
 88dcd9e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88dcda1:	89 44 24 04          	mov    %eax,0x4(%esp)
 88dcda5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88dcda8:	89 04 24             	mov    %eax,(%esp)
 88dcdab:	e8 90 0d 00 00       	call   88ddb40 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi14channel_info_tSt4lessIiESaIS0_IS1_S3_EEEEEeqERKSA_>
 88dcdb0:	84 c0                	test   %al,%al
 88dcdb2:	74 07                	je     88dcdbb <_ZNK16channel_script_t14getChannelInfoEhj+0x83>
 88dcdb4:	b8 00 00 00 00       	mov    $0x0,%eax
 88dcdb9:	eb 7e                	jmp    88dce39 <_ZNK16channel_script_t14getChannelInfoEhj+0x101>
 88dcdbb:	8b 45 10             	mov    0x10(%ebp),%eax
 88dcdbe:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88dcdc1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88dcdc4:	89 04 24             	mov    %eax,(%esp)
 88dcdc7:	e8 88 0d 00 00       	call   88ddb54 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi14channel_info_tSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 88dcdcc:	8d 48 04             	lea    0x4(%eax),%ecx
 88dcdcf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88dcdd2:	8d 55 f0             	lea    -0x10(%ebp),%edx
 88dcdd5:	89 54 24 08          	mov    %edx,0x8(%esp)
 88dcdd9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88dcddd:	89 04 24             	mov    %eax,(%esp)
 88dcde0:	e8 25 0e 00 00       	call   88ddc0a <_ZNKSt3mapIi14channel_info_tSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 88dcde5:	83 ec 04             	sub    $0x4,%esp
 88dcde8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 88dcdeb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88dcdee:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88dcdf1:	89 04 24             	mov    %eax,(%esp)
 88dcdf4:	e8 5b 0d 00 00       	call   88ddb54 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi14channel_info_tSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 88dcdf9:	8d 50 04             	lea    0x4(%eax),%edx
 88dcdfc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88dcdff:	89 54 24 04          	mov    %edx,0x4(%esp)
 88dce03:	89 04 24             	mov    %eax,(%esp)
 88dce06:	e8 7d 0d 00 00       	call   88ddb88 <_ZNKSt3mapIi14channel_info_tSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 88dce0b:	83 ec 04             	sub    $0x4,%esp
 88dce0e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88dce11:	89 44 24 04          	mov    %eax,0x4(%esp)
 88dce15:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88dce18:	89 04 24             	mov    %eax,(%esp)
 88dce1b:	e8 16 0e 00 00       	call   88ddc36 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi14channel_info_tEEeqERKS4_>
 88dce20:	84 c0                	test   %al,%al
 88dce22:	74 07                	je     88dce2b <_ZNK16channel_script_t14getChannelInfoEhj+0xf3>
 88dce24:	b8 00 00 00 00       	mov    $0x0,%eax
 88dce29:	eb 0e                	jmp    88dce39 <_ZNK16channel_script_t14getChannelInfoEhj+0x101>
 88dce2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88dce2e:	89 04 24             	mov    %eax,(%esp)
 88dce31:	e8 aa 0d 00 00       	call   88ddbe0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi14channel_info_tEEptEv>
 88dce36:	83 c0 04             	add    $0x4,%eax
 88dce39:	c9                   	leave
 88dce3a:	c3                   	ret
 88dce3b:	90                   	nop

```

```c
// channel_script_t::getChannelInfo @ 0x88dcd38

/* channel_script_t::getChannelInfo(unsigned char, unsigned int) const */

int __thiscall channel_script_t::getChannelInfo(channel_script_t *this,uchar param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int local_34;
  byte local_30;
  int local_24;
  int local_20;
  uint local_1c;
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  local_18 [4];
  uint local_14;
  map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
  local_10 [12];
  
  local_30 = param_1;
  std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)&local_20);
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
  ::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
              *)&local_24);
  local_1c = (uint)local_30;
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::find(&local_34);
  local_24 = local_34;
  std::
  map<int,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>>
  ::end(local_18);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
          ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
                        *)&local_24,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    local_14 = param_2;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
                  *)&local_24);
    std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
    ::find(&local_34);
    local_20 = local_34;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>>>
                  *)&local_24);
    std::map<int,channel_info_t,std::less<int>,std::allocator<std::pair<int_const,channel_info_t>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator==
                      ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,channel_info_t>> *)&local_20);
      iVar2 = iVar2 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

```

