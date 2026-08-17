# CAuctionAveragePrice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CAuctionAveragePrice

```asm
// === 082f5a94 CAuctionAveragePrice::CAuctionAveragePrice  [0x082f5a94-0x82f5aa7] ===
 82f5a94:	55                   	push   %ebp
 82f5a95:	89 e5                	mov    %esp,%ebp
 82f5a97:	83 ec 18             	sub    $0x18,%esp
 82f5a9a:	8b 45 08             	mov    0x8(%ebp),%eax
 82f5a9d:	89 04 24             	mov    %eax,(%esp)
 82f5aa0:	e8 cb 04 00 00       	call   82f5f70 <_ZNSt3mapIiSt6vectorISt4pairIhiESaIS2_EESt4lessIiESaIS1_IKiS4_EEEC1Ev>
 82f5aa5:	c9                   	leave
 82f5aa6:	c3                   	ret
 82f5aa7:	90                   	nop

```

```c
// CAuctionAveragePrice::CAuctionAveragePrice @ 0x82f5a94

/* CAuctionAveragePrice::CAuctionAveragePrice() */

void __thiscall CAuctionAveragePrice::CAuctionAveragePrice(CAuctionAveragePrice *this)

{
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::map((map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
         *)this);
  return;
}

```

---

## GetAveragePrice

```asm
// === 082f5da8 CAuctionAveragePrice::GetAveragePrice  [0x082f5da8-0x82f5ec2] ===
 82f5da8:	55                   	push   %ebp
 82f5da9:	89 e5                	mov    %esp,%ebp
 82f5dab:	83 ec 48             	sub    $0x48,%esp
 82f5dae:	8b 45 10             	mov    0x10(%ebp),%eax
 82f5db1:	88 45 d4             	mov    %al,-0x2c(%ebp)
 82f5db4:	8b 55 08             	mov    0x8(%ebp),%edx
 82f5db7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f5dba:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82f5dbd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f5dc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5dc5:	89 04 24             	mov    %eax,(%esp)
 82f5dc8:	e8 8b 03 00 00       	call   82f6158 <_ZNKSt3mapIiSt6vectorISt4pairIhiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE4findERS7_>
 82f5dcd:	83 ec 04             	sub    $0x4,%esp
 82f5dd0:	8b 55 08             	mov    0x8(%ebp),%edx
 82f5dd3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f5dd6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5dda:	89 04 24             	mov    %eax,(%esp)
 82f5ddd:	e8 a2 03 00 00       	call   82f6184 <_ZNKSt3mapIiSt6vectorISt4pairIhiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE3endEv>
 82f5de2:	83 ec 04             	sub    $0x4,%esp
 82f5de5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f5de8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5dec:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f5def:	89 04 24             	mov    %eax,(%esp)
 82f5df2:	e8 b3 03 00 00       	call   82f61aa <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS0_IhiESaIS3_EEEEneERKS7_>
 82f5df7:	84 c0                	test   %al,%al
 82f5df9:	0f 84 bd 00 00 00    	je     82f5ebc <_ZNK20CAuctionAveragePrice15GetAveragePriceEih+0x114>
 82f5dff:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 82f5e03:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5e07:	8d 45 eb             	lea    -0x15(%ebp),%eax
 82f5e0a:	89 04 24             	mov    %eax,(%esp)
 82f5e0d:	e8 0e 01 00 00       	call   82f5f20 <_ZN9FindPriceC1Eh>
 82f5e12:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f5e15:	89 04 24             	mov    %eax,(%esp)
 82f5e18:	e8 a1 03 00 00       	call   82f61be <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS0_IhiESaIS3_EEEEptEv>
 82f5e1d:	8d 50 04             	lea    0x4(%eax),%edx
 82f5e20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f5e23:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5e27:	89 04 24             	mov    %eax,(%esp)
 82f5e2a:	e8 c9 03 00 00       	call   82f61f8 <_ZNKSt6vectorISt4pairIhiESaIS1_EE3endEv>
 82f5e2f:	83 ec 04             	sub    $0x4,%esp
 82f5e32:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f5e35:	89 04 24             	mov    %eax,(%esp)
 82f5e38:	e8 81 03 00 00       	call   82f61be <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS0_IhiESaIS3_EEEEptEv>
 82f5e3d:	8d 50 04             	lea    0x4(%eax),%edx
 82f5e40:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82f5e43:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5e47:	89 04 24             	mov    %eax,(%esp)
 82f5e4a:	e8 7d 03 00 00       	call   82f61cc <_ZNKSt6vectorISt4pairIhiESaIS1_EE5beginEv>
 82f5e4f:	83 ec 04             	sub    $0x4,%esp
 82f5e52:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f5e55:	0f b6 55 eb          	movzbl -0x15(%ebp),%edx
 82f5e59:	88 54 24 0c          	mov    %dl,0xc(%esp)
 82f5e5d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82f5e60:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f5e64:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82f5e67:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5e6b:	89 04 24             	mov    %eax,(%esp)
 82f5e6e:	e8 b1 03 00 00       	call   82f6224 <_ZSt7find_ifIN9__gnu_cxx17__normal_iteratorIPKSt4pairIhiESt6vectorIS3_SaIS3_EEEE9FindPriceET_SB_SB_T0_>
 82f5e73:	83 ec 04             	sub    $0x4,%esp
 82f5e76:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f5e79:	89 04 24             	mov    %eax,(%esp)
 82f5e7c:	e8 3d 03 00 00       	call   82f61be <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS0_IhiESaIS3_EEEEptEv>
 82f5e81:	8d 50 04             	lea    0x4(%eax),%edx
 82f5e84:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f5e87:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5e8b:	89 04 24             	mov    %eax,(%esp)
 82f5e8e:	e8 65 03 00 00       	call   82f61f8 <_ZNKSt6vectorISt4pairIhiESaIS1_EE3endEv>
 82f5e93:	83 ec 04             	sub    $0x4,%esp
 82f5e96:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82f5e99:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5e9d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f5ea0:	89 04 24             	mov    %eax,(%esp)
 82f5ea3:	e8 d1 03 00 00       	call   82f6279 <_ZN9__gnu_cxxneIPKSt4pairIhiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 82f5ea8:	84 c0                	test   %al,%al
 82f5eaa:	74 10                	je     82f5ebc <_ZNK20CAuctionAveragePrice15GetAveragePriceEih+0x114>
 82f5eac:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f5eaf:	89 04 24             	mov    %eax,(%esp)
 82f5eb2:	e8 ef 03 00 00       	call   82f62a6 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIhiESt6vectorIS2_SaIS2_EEEptEv>
 82f5eb7:	8b 40 04             	mov    0x4(%eax),%eax
 82f5eba:	eb 05                	jmp    82f5ec1 <_ZNK20CAuctionAveragePrice15GetAveragePriceEih+0x119>
 82f5ebc:	b8 00 00 00 00       	mov    $0x0,%eax
 82f5ec1:	c9                   	leave
 82f5ec2:	c3                   	ret

```

```c
// CAuctionAveragePrice::GetAveragePrice @ 0x82f5da8

/* CAuctionAveragePrice::GetAveragePrice(int, unsigned char) const */

undefined4 __thiscall
CAuctionAveragePrice::GetAveragePrice(CAuctionAveragePrice *this,int param_1,uchar param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  __normal_iterator<std::pair<unsigned_char,int>const*,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
  local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
  local_24 [4];
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  local_20 [7];
  FindPrice local_19;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::find((int *)local_24);
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::end(local_20);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
          ::operator!=(local_24,(_Rb_tree_const_iterator *)local_20);
  if (cVar1 != '\0') {
    FindPrice::FindPrice(&local_19,param_2);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
    ::operator->(local_24);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::end();
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
    ::operator->(local_24);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::begin();
    std::
    find_if<__gnu_cxx::__normal_iterator<std::pair<unsigned_char,int>const*,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>,FindPrice>
              (local_28,local_14,local_18,local_19);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
    ::operator->(local_24);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_28,local_10);
    if (bVar2) {
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_char,int>const*,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
              ::operator->(local_28);
      return *(undefined4 *)(iVar3 + 4);
    }
  }
  return 0;
}

```

---

## LoadAveragePrice

```asm
// === 082f5aa8 CAuctionAveragePrice::LoadAveragePrice  [0x082f5aa8-0x82f5c23] ===
 82f5aa8:	55                   	push   %ebp
 82f5aa9:	89 e5                	mov    %esp,%ebp
 82f5aab:	83 ec 38             	sub    $0x38,%esp
 82f5aae:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 82f5ab3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f5aba:	00 
 82f5abb:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 82f5ac2:	00 
 82f5ac3:	89 04 24             	mov    %eax,(%esp)
 82f5ac6:	e8 73 f7 0f 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 82f5acb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82f5ace:	c7 44 24 04 80 d2 c1 	movl   $0x8c1d280,0x4(%esp)
 82f5ad5:	08 
 82f5ad6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5ad9:	89 04 24             	mov    %eax,(%esp)
 82f5adc:	e8 df e6 0f 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 82f5ae1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82f5ae8:	00 
 82f5ae9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5aec:	89 04 24             	mov    %eax,(%esp)
 82f5aef:	e8 32 e8 0f 00       	call   83f4326 <_ZN5MySQL4execEb>
 82f5af4:	83 f0 01             	xor    $0x1,%eax
 82f5af7:	84 c0                	test   %al,%al
 82f5af9:	74 0a                	je     82f5b05 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x5d>
 82f5afb:	b8 00 00 00 00       	mov    $0x0,%eax
 82f5b00:	e9 1d 01 00 00       	jmp    82f5c22 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x17a>
 82f5b05:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5b08:	89 04 24             	mov    %eax,(%esp)
 82f5b0b:	e8 5c c8 de ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 82f5b10:	85 c0                	test   %eax,%eax
 82f5b12:	0f 94 c0             	sete   %al
 82f5b15:	84 c0                	test   %al,%al
 82f5b17:	74 0a                	je     82f5b23 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x7b>
 82f5b19:	b8 01 00 00 00       	mov    $0x1,%eax
 82f5b1e:	e9 ff 00 00 00       	jmp    82f5c22 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x17a>
 82f5b23:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82f5b2a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82f5b31:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 82f5b35:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 82f5b39:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82f5b40:	e9 bf 00 00 00       	jmp    82f5c04 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x15c>
 82f5b45:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5b48:	89 04 24             	mov    %eax,(%esp)
 82f5b4b:	e8 6c e9 0f 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 82f5b50:	83 f0 01             	xor    $0x1,%eax
 82f5b53:	84 c0                	test   %al,%al
 82f5b55:	74 0a                	je     82f5b61 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0xb9>
 82f5b57:	b8 00 00 00 00       	mov    $0x0,%eax
 82f5b5c:	e9 c1 00 00 00       	jmp    82f5c22 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x17a>
 82f5b61:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f5b64:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f5b68:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82f5b6f:	00 
 82f5b70:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5b73:	89 04 24             	mov    %eax,(%esp)
 82f5b76:	e8 b1 0d e2 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 82f5b7b:	83 f0 01             	xor    $0x1,%eax
 82f5b7e:	84 c0                	test   %al,%al
 82f5b80:	74 0a                	je     82f5b8c <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0xe4>
 82f5b82:	b8 00 00 00 00       	mov    $0x0,%eax
 82f5b87:	e9 96 00 00 00       	jmp    82f5c22 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x17a>
 82f5b8c:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 82f5b8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f5b93:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82f5b9a:	00 
 82f5b9b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5b9e:	89 04 24             	mov    %eax,(%esp)
 82f5ba1:	e8 14 83 e0 ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 82f5ba6:	83 f0 01             	xor    $0x1,%eax
 82f5ba9:	84 c0                	test   %al,%al
 82f5bab:	74 07                	je     82f5bb4 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x10c>
 82f5bad:	b8 00 00 00 00       	mov    $0x0,%eax
 82f5bb2:	eb 6e                	jmp    82f5c22 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x17a>
 82f5bb4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f5bb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f5bbb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82f5bc2:	00 
 82f5bc3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5bc6:	89 04 24             	mov    %eax,(%esp)
 82f5bc9:	e8 5e 0d e2 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 82f5bce:	83 f0 01             	xor    $0x1,%eax
 82f5bd1:	84 c0                	test   %al,%al
 82f5bd3:	74 07                	je     82f5bdc <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x134>
 82f5bd5:	b8 00 00 00 00       	mov    $0x0,%eax
 82f5bda:	eb 46                	jmp    82f5c22 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x17a>
 82f5bdc:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 82f5bdf:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 82f5be3:	0f b6 d0             	movzbl %al,%edx
 82f5be6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82f5be9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82f5bed:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f5bf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5bf5:	8b 45 08             	mov    0x8(%ebp),%eax
 82f5bf8:	89 04 24             	mov    %eax,(%esp)
 82f5bfb:	e8 24 00 00 00       	call   82f5c24 <_ZN20CAuctionAveragePrice15SetAveragePriceEihi>
 82f5c00:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82f5c04:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f5c07:	89 04 24             	mov    %eax,(%esp)
 82f5c0a:	e8 5d c7 de ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 82f5c0f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82f5c12:	0f 97 c0             	seta   %al
 82f5c15:	84 c0                	test   %al,%al
 82f5c17:	0f 85 28 ff ff ff    	jne    82f5b45 <_ZN20CAuctionAveragePrice16LoadAveragePriceEv+0x9d>
 82f5c1d:	b8 01 00 00 00       	mov    $0x1,%eax
 82f5c22:	c9                   	leave
 82f5c23:	c3                   	ret

```

```c
// CAuctionAveragePrice::LoadAveragePrice @ 0x82f5aa8

/* CAuctionAveragePrice::LoadAveragePrice() */

undefined4 __thiscall CAuctionAveragePrice::LoadAveragePrice(CAuctionAveragePrice *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte local_21;
  int local_20 [2];
  MySQL *local_18;
  undefined1 local_11;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xc,0);
  MySQL::set_query(local_18,"seLect item_id,upgrade,average_price from auction_average_price");
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      local_20[1] = 0;
      local_20[0] = 0;
      local_21 = 0;
      local_11 = 0;
      local_10 = 0;
      while (uVar4 = MySQL::get_n_rows(local_18), local_10 < uVar4) {
        cVar1 = MySQL::fetch(local_18);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(local_18,0,local_20 + 1);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_ubyte(local_18,1,&local_21);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(local_18,2,local_20);
        if (cVar1 != '\x01') {
          return 0;
        }
        SetAveragePrice((int)this,(uchar)local_20[1],(uint)local_21);
        local_10 = local_10 + 1;
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## SetAveragePrice

```asm
// === 082f5c24 CAuctionAveragePrice::SetAveragePrice  [0x082f5c24-0x82f5da7] ===
 82f5c24:	55                   	push   %ebp
 82f5c25:	89 e5                	mov    %esp,%ebp
 82f5c27:	56                   	push   %esi
 82f5c28:	53                   	push   %ebx
 82f5c29:	83 ec 70             	sub    $0x70,%esp
 82f5c2c:	8b 45 10             	mov    0x10(%ebp),%eax
 82f5c2f:	88 45 a4             	mov    %al,-0x5c(%ebp)
 82f5c32:	8b 55 08             	mov    0x8(%ebp),%edx
 82f5c35:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82f5c38:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82f5c3b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f5c3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5c43:	89 04 24             	mov    %eax,(%esp)
 82f5c46:	e8 39 03 00 00       	call   82f5f84 <_ZNSt3mapIiSt6vectorISt4pairIhiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE4findERS7_>
 82f5c4b:	83 ec 04             	sub    $0x4,%esp
 82f5c4e:	8b 55 08             	mov    0x8(%ebp),%edx
 82f5c51:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82f5c54:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5c58:	89 04 24             	mov    %eax,(%esp)
 82f5c5b:	e8 50 03 00 00       	call   82f5fb0 <_ZNSt3mapIiSt6vectorISt4pairIhiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE3endEv>
 82f5c60:	83 ec 04             	sub    $0x4,%esp
 82f5c63:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82f5c66:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5c6a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82f5c6d:	89 04 24             	mov    %eax,(%esp)
 82f5c70:	e8 61 03 00 00       	call   82f5fd6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IhiESaIS3_EEEEneERKS7_>
 82f5c75:	84 c0                	test   %al,%al
 82f5c77:	74 3b                	je     82f5cb4 <_ZN20CAuctionAveragePrice15SetAveragePriceEihi+0x90>
 82f5c79:	8d 45 14             	lea    0x14(%ebp),%eax
 82f5c7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f5c80:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82f5c83:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5c87:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82f5c8a:	89 04 24             	mov    %eax,(%esp)
 82f5c8d:	e8 58 03 00 00       	call   82f5fea <_ZNSt4pairIhiEC1IRhRiEEOT_OT0_>
 82f5c92:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82f5c95:	89 04 24             	mov    %eax,(%esp)
 82f5c98:	e8 7b 03 00 00       	call   82f6018 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IhiESaIS3_EEEEptEv>
 82f5c9d:	8d 50 04             	lea    0x4(%eax),%edx
 82f5ca0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82f5ca3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5ca7:	89 14 24             	mov    %edx,(%esp)
 82f5caa:	e8 77 03 00 00       	call   82f6026 <_ZNSt6vectorISt4pairIhiESaIS1_EE9push_backERKS1_>
 82f5caf:	e9 ea 00 00 00       	jmp    82f5d9e <_ZN20CAuctionAveragePrice15SetAveragePriceEihi+0x17a>
 82f5cb4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82f5cb7:	89 04 24             	mov    %eax,(%esp)
 82f5cba:	e8 db 03 00 00       	call   82f609a <_ZNSt6vectorISt4pairIhiESaIS1_EEC1Ev>
 82f5cbf:	8d 45 14             	lea    0x14(%ebp),%eax
 82f5cc2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f5cc6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82f5cc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5ccd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82f5cd0:	89 04 24             	mov    %eax,(%esp)
 82f5cd3:	e8 12 03 00 00       	call   82f5fea <_ZNSt4pairIhiEC1IRhRiEEOT_OT0_>
 82f5cd8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82f5cdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5cdf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82f5ce2:	89 04 24             	mov    %eax,(%esp)
 82f5ce5:	e8 3c 03 00 00       	call   82f6026 <_ZNSt6vectorISt4pairIhiESaIS1_EE9push_backERKS1_>
 82f5cea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f5ced:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 82f5cf0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f5cf4:	8d 55 0c             	lea    0xc(%ebp),%edx
 82f5cf7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5cfb:	89 04 24             	mov    %eax,(%esp)
 82f5cfe:	e8 aa 03 00 00       	call   82f60ad <_ZSt9make_pairIRiRSt6vectorISt4pairIhiESaIS3_EEES2_INSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 82f5d03:	83 ec 04             	sub    $0x4,%esp
 82f5d06:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f5d09:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f5d0d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f5d10:	89 04 24             	mov    %eax,(%esp)
 82f5d13:	e8 da 03 00 00       	call   82f60f2 <_ZNSt4pairIKiSt6vectorIS_IhiESaIS2_EEEC1IiS4_EEOS_IT_T0_E>
 82f5d18:	8b 55 08             	mov    0x8(%ebp),%edx
 82f5d1b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82f5d1e:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 82f5d21:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f5d25:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f5d29:	89 04 24             	mov    %eax,(%esp)
 82f5d2c:	e8 fb 03 00 00       	call   82f612c <_ZNSt3mapIiSt6vectorISt4pairIhiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE6insertERKS8_>
 82f5d31:	83 ec 04             	sub    $0x4,%esp
 82f5d34:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f5d37:	89 04 24             	mov    %eax,(%esp)
 82f5d3a:	e8 9d 98 fd ff       	call   82cf5dc <_ZNSt4pairIKiSt6vectorIS_IhiESaIS2_EEED1Ev>
 82f5d3f:	eb 2a                	jmp    82f5d6b <_ZN20CAuctionAveragePrice15SetAveragePriceEihi+0x147>
 82f5d41:	89 d3                	mov    %edx,%ebx
 82f5d43:	89 c6                	mov    %eax,%esi
 82f5d45:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82f5d48:	89 04 24             	mov    %eax,(%esp)
 82f5d4b:	e8 8c 98 fd ff       	call   82cf5dc <_ZNSt4pairIKiSt6vectorIS_IhiESaIS2_EEED1Ev>
 82f5d50:	89 f0                	mov    %esi,%eax
 82f5d52:	89 da                	mov    %ebx,%edx
 82f5d54:	eb 00                	jmp    82f5d56 <_ZN20CAuctionAveragePrice15SetAveragePriceEihi+0x132>
 82f5d56:	89 d3                	mov    %edx,%ebx
 82f5d58:	89 c6                	mov    %eax,%esi
 82f5d5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f5d5d:	89 04 24             	mov    %eax,(%esp)
 82f5d60:	e8 f5 01 00 00       	call   82f5f5a <_ZNSt4pairIiSt6vectorIS_IhiESaIS1_EEED1Ev>
 82f5d65:	89 f0                	mov    %esi,%eax
 82f5d67:	89 da                	mov    %ebx,%edx
 82f5d69:	eb 0d                	jmp    82f5d78 <_ZN20CAuctionAveragePrice15SetAveragePriceEihi+0x154>
 82f5d6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82f5d6e:	89 04 24             	mov    %eax,(%esp)
 82f5d71:	e8 e4 01 00 00       	call   82f5f5a <_ZNSt4pairIiSt6vectorIS_IhiESaIS1_EEED1Ev>
 82f5d76:	eb 1b                	jmp    82f5d93 <_ZN20CAuctionAveragePrice15SetAveragePriceEihi+0x16f>
 82f5d78:	89 d3                	mov    %edx,%ebx
 82f5d7a:	89 c6                	mov    %eax,%esi
 82f5d7c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82f5d7f:	89 04 24             	mov    %eax,(%esp)
 82f5d82:	e8 c9 49 fe ff       	call   82da750 <_ZNSt6vectorISt4pairIhiESaIS1_EED1Ev>
 82f5d87:	89 f0                	mov    %esi,%eax
 82f5d89:	89 da                	mov    %ebx,%edx
 82f5d8b:	89 04 24             	mov    %eax,(%esp)
 82f5d8e:	e8 bd d9 7e 00       	call   8ae3750 <_Unwind_Resume>
 82f5d93:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82f5d96:	89 04 24             	mov    %eax,(%esp)
 82f5d99:	e8 b2 49 fe ff       	call   82da750 <_ZNSt6vectorISt4pairIhiESaIS1_EED1Ev>
 82f5d9e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82f5da1:	83 c4 00             	add    $0x0,%esp
 82f5da4:	5b                   	pop    %ebx
 82f5da5:	5e                   	pop    %esi
 82f5da6:	5d                   	pop    %ebp
 82f5da7:	c3                   	ret

```

```c
// CAuctionAveragePrice::SetAveragePrice @ 0x82f5c24

/* CAuctionAveragePrice::SetAveragePrice(int, unsigned char, int) */

void CAuctionAveragePrice::SetAveragePrice(int param_1,uchar param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uchar local_60 [8];
  pair<unsigned_char,int> local_58 [8];
  vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>> local_50 [12];
  pair<unsigned_char,int> local_44 [8];
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
  local_3c [4];
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
  local_2c [16];
  pair<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
  local_1c [16];
  
  local_60[0] = (uchar)param_3;
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::find((int *)local_3c);
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::end(local_38);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
          ::operator!=(local_3c,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::vector
              (local_50);
                    /* try { // try from 082f5cd3 to 082f5d02 has its CatchHandler @ 082f5d78 */
    std::pair<unsigned_char,int>::pair<unsigned_char&,int&>
              (local_58,local_60,(int *)&stack0x00000010);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::
    push_back(local_50,local_58);
    std::
    make_pair<int&,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>&>
              ((int *)local_1c,(vector *)&param_2);
                    /* try { // try from 082f5d13 to 082f5d17 has its CatchHandler @ 082f5d56 */
    std::
    pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
    ::
    pair<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
              (local_2c,local_1c);
                    /* try { // try from 082f5d2c to 082f5d30 has its CatchHandler @ 082f5d41 */
    std::
    map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
    ::insert(local_34);
                    /* try { // try from 082f5d3a to 082f5d3e has its CatchHandler @ 082f5d56 */
    std::
    pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
    ::~pair(local_2c);
                    /* try { // try from 082f5d71 to 082f5d75 has its CatchHandler @ 082f5d78 */
    std::
    pair<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
    ::~pair(local_1c);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::~vector
              (local_50);
  }
  else {
    std::pair<unsigned_char,int>::pair<unsigned_char&,int&>
              (local_44,local_60,(int *)&stack0x00000010);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
            ::operator->(local_3c);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::
    push_back((vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>> *)
              (iVar2 + 4),local_44);
  }
  return;
}

```

