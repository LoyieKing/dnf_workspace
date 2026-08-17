# Area

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## GetUserCount

```asm
// === 086c31f2 Area::GetUserCount  [0x086c31f2-0x86c32df] ===
 86c31f2:	55                   	push   %ebp
 86c31f3:	89 e5                	mov    %esp,%ebp
 86c31f5:	83 ec 48             	sub    $0x48,%esp
 86c31f8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86c31ff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c3202:	89 04 24             	mov    %eax,(%esp)
 86c3205:	e8 cc 06 01 00       	call   86d38d6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtP5CUserEEC1Ev>
 86c320a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c320d:	8d 50 44             	lea    0x44(%eax),%edx
 86c3210:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c3213:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3217:	89 04 24             	mov    %eax,(%esp)
 86c321a:	e8 c5 06 01 00       	call   86d38e4 <_ZNKSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86c321f:	83 ec 04             	sub    $0x4,%esp
 86c3222:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c3225:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c3228:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c322f:	eb 77                	jmp    86c32a8 <_ZNK4Area12GetUserCountEv+0xb6>
 86c3231:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c3234:	89 04 24             	mov    %eax,(%esp)
 86c3237:	e8 08 07 01 00       	call   86d3944 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtP5CUserEEptEv>
 86c323c:	8b 40 04             	mov    0x4(%eax),%eax
 86c323f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86c3242:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86c3246:	74 10                	je     86c3258 <_ZNK4Area12GetUserCountEv+0x66>
 86c3248:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86c324b:	89 04 24             	mov    %eax,(%esp)
 86c324e:	e8 39 71 a1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86c3253:	83 f8 02             	cmp    $0x2,%eax
 86c3256:	7f 07                	jg     86c325f <_ZNK4Area12GetUserCountEv+0x6d>
 86c3258:	b8 01 00 00 00       	mov    $0x1,%eax
 86c325d:	eb 05                	jmp    86c3264 <_ZNK4Area12GetUserCountEv+0x72>
 86c325f:	b8 00 00 00 00       	mov    $0x0,%eax
 86c3264:	84 c0                	test   %al,%al
 86c3266:	74 1f                	je     86c3287 <_ZNK4Area12GetUserCountEv+0x95>
 86c3268:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c326b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c3272:	00 
 86c3273:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86c3276:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c327a:	89 04 24             	mov    %eax,(%esp)
 86c327d:	e8 d0 06 01 00       	call   86d3952 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtP5CUserEEppEi>
 86c3282:	83 ec 04             	sub    $0x4,%esp
 86c3285:	eb 21                	jmp    86c32a8 <_ZNK4Area12GetUserCountEv+0xb6>
 86c3287:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86c328b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c328e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c3295:	00 
 86c3296:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86c3299:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c329d:	89 04 24             	mov    %eax,(%esp)
 86c32a0:	e8 ad 06 01 00       	call   86d3952 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtP5CUserEEppEi>
 86c32a5:	83 ec 04             	sub    $0x4,%esp
 86c32a8:	8b 45 08             	mov    0x8(%ebp),%eax
 86c32ab:	8d 50 44             	lea    0x44(%eax),%edx
 86c32ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c32b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c32b5:	89 04 24             	mov    %eax,(%esp)
 86c32b8:	e8 4d 06 01 00       	call   86d390a <_ZNKSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c32bd:	83 ec 04             	sub    $0x4,%esp
 86c32c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c32c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c32c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c32ca:	89 04 24             	mov    %eax,(%esp)
 86c32cd:	e8 5e 06 01 00       	call   86d3930 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c32d2:	84 c0                	test   %al,%al
 86c32d4:	0f 85 57 ff ff ff    	jne    86c3231 <_ZNK4Area12GetUserCountEv+0x3f>
 86c32da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c32dd:	c9                   	leave
 86c32de:	c3                   	ret
 86c32df:	90                   	nop

```

```c
// Area::GetUserCount @ 0x86c31f2

/* Area::GetUserCount() const */

int Area::GetUserCount(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [3];
  undefined4 local_24;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  CUser *local_14;
  int local_10;
  
  local_14 = (CUser *)0x0;
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_24 = local_30[0];
  local_10 = 0;
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24,
                       (_Rb_tree_const_iterator *)local_20);
    if (cVar2 == '\0') {
      return local_10;
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24)
    ;
    local_14 = *(CUser **)(iVar3 + 4);
    if (local_14 == (CUser *)0x0) {
LAB_086c3258:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_14);
      if (iVar3 < 3) goto LAB_086c3258;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_1c,(int)&local_24);
    }
    else {
      local_10 = local_10 + 1;
      std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_24);
    }
  } while( true );
}

```

---

## IsMovalbeArea

```asm
// === 086c3162 Area::IsMovalbeArea  [0x086c3162-0x86c31f1] ===
 86c3162:	55                   	push   %ebp
 86c3163:	89 e5                	mov    %esp,%ebp
 86c3165:	83 ec 28             	sub    $0x28,%esp
 86c3168:	8b 45 08             	mov    0x8(%ebp),%eax
 86c316b:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 86c3171:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c3174:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3178:	89 04 24             	mov    %eax,(%esp)
 86c317b:	e8 a0 e0 a4 ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 86c3180:	83 ec 04             	sub    $0x4,%esp
 86c3183:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3186:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 86c318c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c318f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3193:	89 04 24             	mov    %eax,(%esp)
 86c3196:	e8 b1 e0 a4 ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 86c319b:	83 ec 04             	sub    $0x4,%esp
 86c319e:	eb 35                	jmp    86c31d5 <_ZNK4Area13IsMovalbeAreaEii+0x73>
 86c31a0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c31a3:	89 04 24             	mov    %eax,(%esp)
 86c31a6:	e8 0f 2a b7 ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 86c31ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c31ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c31b1:	8b 00                	mov    (%eax),%eax
 86c31b3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86c31b6:	75 12                	jne    86c31ca <_ZNK4Area13IsMovalbeAreaEii+0x68>
 86c31b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c31bb:	8b 40 04             	mov    0x4(%eax),%eax
 86c31be:	3b 45 10             	cmp    0x10(%ebp),%eax
 86c31c1:	75 07                	jne    86c31ca <_ZNK4Area13IsMovalbeAreaEii+0x68>
 86c31c3:	b8 01 00 00 00       	mov    $0x1,%eax
 86c31c8:	eb 26                	jmp    86c31f0 <_ZNK4Area13IsMovalbeAreaEii+0x8e>
 86c31ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c31cd:	89 04 24             	mov    %eax,(%esp)
 86c31d0:	e8 fb aa b7 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 86c31d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c31d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c31dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c31df:	89 04 24             	mov    %eax,(%esp)
 86c31e2:	e8 fe 06 ad ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 86c31e7:	84 c0                	test   %al,%al
 86c31e9:	75 b5                	jne    86c31a0 <_ZNK4Area13IsMovalbeAreaEii+0x3e>
 86c31eb:	b8 00 00 00 00       	mov    $0x0,%eax
 86c31f0:	c9                   	leave
 86c31f1:	c3                   	ret

```

```c
// Area::IsMovalbeArea @ 0x86c3162

/* Area::IsMovalbeArea(int, int) const */

undefined4 __thiscall Area::IsMovalbeArea(Area *this,int param_1,int param_2)

{
  bool bVar1;
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  int *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) {
      return 0;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator*(local_14);
    if ((*local_10 == param_1) && (local_10[1] == param_2)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_14);
  }
  return 1;
}

```

---

## delete_user

```asm
// === 086c2a38 Area::delete_user  [0x086c2a38-0x86c2be3] ===
 86c2a38:	55                   	push   %ebp
 86c2a39:	89 e5                	mov    %esp,%ebp
 86c2a3b:	56                   	push   %esi
 86c2a3c:	53                   	push   %ebx
 86c2a3d:	83 ec 20             	sub    $0x20,%esp
 86c2a40:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2a43:	8b 40 68             	mov    0x68(%eax),%eax
 86c2a46:	83 f8 01             	cmp    $0x1,%eax
 86c2a49:	0f 84 8c 01 00 00    	je     86c2bdb <_ZN4Area11delete_userEP5CUser+0x1a3>
 86c2a4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2a52:	89 04 24             	mov    %eax,(%esp)
 86c2a55:	e8 22 79 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c2a5a:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 86c2a5e:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2a61:	8d 50 44             	lea    0x44(%eax),%edx
 86c2a64:	8d 45 f6             	lea    -0xa(%ebp),%eax
 86c2a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2a6b:	89 14 24             	mov    %edx,(%esp)
 86c2a6e:	e8 49 0e 01 00       	call   86d38bc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5eraseERS5_>
 86c2a73:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2a76:	89 04 24             	mov    %eax,(%esp)
 86c2a79:	e8 ce b2 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86c2a7e:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 86c2a85:	00 
 86c2a86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c2a8d:	00 
 86c2a8e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2a91:	89 04 24             	mov    %eax,(%esp)
 86c2a94:	e8 63 8e a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c2a99:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2a9c:	89 04 24             	mov    %eax,(%esp)
 86c2a9f:	e8 d8 78 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c2aa4:	0f b7 c0             	movzwl %ax,%eax
 86c2aa7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2aab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2aae:	89 04 24             	mov    %eax,(%esp)
 86c2ab1:	e8 ee 73 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2ab6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2ab9:	89 04 24             	mov    %eax,(%esp)
 86c2abc:	e8 a3 2a f8 ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 86c2ac1:	0f be c0             	movsbl %al,%eax
 86c2ac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2ac8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2acb:	89 04 24             	mov    %eax,(%esp)
 86c2ace:	e8 4d 8e a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c2ad3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c2ada:	00 
 86c2adb:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2ade:	89 04 24             	mov    %eax,(%esp)
 86c2ae1:	e8 d8 e8 fb ff       	call   86813be <_ZN5CUser8get_areaEb>
 86c2ae6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2aea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2aed:	89 04 24             	mov    %eax,(%esp)
 86c2af0:	e8 2b 8e a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c2af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2af8:	89 04 24             	mov    %eax,(%esp)
 86c2afb:	e8 2c 1e a7 ff       	call   813492c <_ZN5CUser8get_posXEv>
 86c2b00:	0f b7 c0             	movzwl %ax,%eax
 86c2b03:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2b07:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2b0a:	89 04 24             	mov    %eax,(%esp)
 86c2b0d:	e8 92 73 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2b12:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2b15:	89 04 24             	mov    %eax,(%esp)
 86c2b18:	e8 1f 1e a7 ff       	call   813493c <_ZN5CUser8get_posYEv>
 86c2b1d:	0f b7 c0             	movzwl %ax,%eax
 86c2b20:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2b24:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2b27:	89 04 24             	mov    %eax,(%esp)
 86c2b2a:	e8 75 73 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2b2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2b32:	89 04 24             	mov    %eax,(%esp)
 86c2b35:	e8 12 1e a7 ff       	call   813494c <_ZN5CUser13get_directionEv>
 86c2b3a:	0f be c0             	movsbl %al,%eax
 86c2b3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2b41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2b44:	89 04 24             	mov    %eax,(%esp)
 86c2b47:	e8 d4 8d a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c2b4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2b4f:	89 04 24             	mov    %eax,(%esp)
 86c2b52:	e8 8d 92 fc ff       	call   868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>
 86c2b57:	0f be c0             	movsbl %al,%eax
 86c2b5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2b5e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2b61:	89 04 24             	mov    %eax,(%esp)
 86c2b64:	e8 b7 8d a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c2b69:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c2b70:	00 
 86c2b71:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2b74:	89 04 24             	mov    %eax,(%esp)
 86c2b77:	e8 dc 8d a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c2b7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2b7f:	89 04 24             	mov    %eax,(%esp)
 86c2b82:	e8 5d 93 fc ff       	call   868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>
 86c2b87:	84 c0                	test   %al,%al
 86c2b89:	74 14                	je     86c2b9f <_ZN4Area11delete_userEP5CUser+0x167>
 86c2b8b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2b8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2b92:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2b95:	89 04 24             	mov    %eax,(%esp)
 86c2b98:	e8 8d 01 00 00       	call   86c2d2a <_ZN4Area11send_to_allER11PacketGuard>
 86c2b9d:	eb 2f                	jmp    86c2bce <_ZN4Area11delete_userEP5CUser+0x196>
 86c2b9f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2ba2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2ba6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2ba9:	89 04 24             	mov    %eax,(%esp)
 86c2bac:	e8 09 5a f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c2bb1:	eb 1b                	jmp    86c2bce <_ZN4Area11delete_userEP5CUser+0x196>
 86c2bb3:	89 d3                	mov    %edx,%ebx
 86c2bb5:	89 c6                	mov    %eax,%esi
 86c2bb7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2bba:	89 04 24             	mov    %eax,(%esp)
 86c2bbd:	e8 be b2 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c2bc2:	89 f0                	mov    %esi,%eax
 86c2bc4:	89 da                	mov    %ebx,%edx
 86c2bc6:	89 04 24             	mov    %eax,(%esp)
 86c2bc9:	e8 82 0b 42 00       	call   8ae3750 <_Unwind_Resume>
 86c2bce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2bd1:	89 04 24             	mov    %eax,(%esp)
 86c2bd4:	e8 a7 b2 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c2bd9:	eb 01                	jmp    86c2bdc <_ZN4Area11delete_userEP5CUser+0x1a4>
 86c2bdb:	90                   	nop
 86c2bdc:	83 c4 20             	add    $0x20,%esp
 86c2bdf:	5b                   	pop    %ebx
 86c2be0:	5e                   	pop    %esi
 86c2be1:	5d                   	pop    %ebp
 86c2be2:	c3                   	ret
 86c2be3:	90                   	nop

```

```c
// Area::delete_user @ 0x86c2a38

/* Area::delete_user(CUser*) */

void __thiscall Area::delete_user(Area *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  PacketGuard local_1c [14];
  undefined2 local_e;
  
  if (*(int *)(this + 0x68) != 1) {
    local_e = CUser::get_unique_id(param_1);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::erase((ushort *)(this + 0x44));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 086c2a94 to 086c2bb0 has its CatchHandler @ 086c2bb3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x17);
    uVar2 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    iVar3 = CUser::get_area(param_1,true);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar3);
    uVar2 = CUser::get_posX(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    uVar2 = CUser::get_posY(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    cVar1 = CUser::get_direction(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    cVar1 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      CUser::Send(param_1,local_1c);
    }
    else {
      send_to_all(this,local_1c);
    }
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

---

## erase_user

```asm
// === 086c2be4 Area::erase_user  [0x086c2be4-0x86c2c1d] ===
 86c2be4:	55                   	push   %ebp
 86c2be5:	89 e5                	mov    %esp,%ebp
 86c2be7:	83 ec 28             	sub    $0x28,%esp
 86c2bea:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2bed:	8b 40 68             	mov    0x68(%eax),%eax
 86c2bf0:	83 f8 01             	cmp    $0x1,%eax
 86c2bf3:	74 26                	je     86c2c1b <_ZN4Area10erase_userEP5CUser+0x37>
 86c2bf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2bf8:	89 04 24             	mov    %eax,(%esp)
 86c2bfb:	e8 7c 77 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c2c00:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 86c2c04:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2c07:	8d 50 44             	lea    0x44(%eax),%edx
 86c2c0a:	8d 45 f6             	lea    -0xa(%ebp),%eax
 86c2c0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2c11:	89 14 24             	mov    %edx,(%esp)
 86c2c14:	e8 a3 0c 01 00       	call   86d38bc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5eraseERS5_>
 86c2c19:	eb 01                	jmp    86c2c1c <_ZN4Area10erase_userEP5CUser+0x38>
 86c2c1b:	90                   	nop
 86c2c1c:	c9                   	leave
 86c2c1d:	c3                   	ret

```

```c
// Area::erase_user @ 0x86c2be4

/* Area::erase_user(CUser*) */

void __thiscall Area::erase_user(Area *this,CUser *param_1)

{
  if (*(int *)(this + 0x68) != 1) {
    CUser::get_unique_id(param_1);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::erase((ushort *)(this + 0x44));
  }
  return;
}

```

---

## get_user_id_list

```asm
// === 086c305e Area::get_user_id_list  [0x086c305e-0x86c3161] ===
 86c305e:	55                   	push   %ebp
 86c305f:	89 e5                	mov    %esp,%ebp
 86c3061:	83 ec 48             	sub    $0x48,%esp
 86c3064:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c306b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c306e:	89 04 24             	mov    %eax,(%esp)
 86c3071:	e8 b0 07 01 00       	call   86d3826 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEC1Ev>
 86c3076:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3079:	8d 50 44             	lea    0x44(%eax),%edx
 86c307c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c307f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3083:	89 04 24             	mov    %eax,(%esp)
 86c3086:	e8 1b 48 a3 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86c308b:	83 ec 04             	sub    $0x4,%esp
 86c308e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c3091:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c3094:	e9 94 00 00 00       	jmp    86c312d <_ZN4Area16get_user_id_listERSt6vectorItSaItEE+0xcf>
 86c3099:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c309c:	89 04 24             	mov    %eax,(%esp)
 86c309f:	e8 a0 48 a3 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 86c30a4:	8b 40 04             	mov    0x4(%eax),%eax
 86c30a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c30aa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86c30ae:	74 10                	je     86c30c0 <_ZN4Area16get_user_id_listERSt6vectorItSaItEE+0x62>
 86c30b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c30b3:	89 04 24             	mov    %eax,(%esp)
 86c30b6:	e8 d1 72 a1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86c30bb:	83 f8 02             	cmp    $0x2,%eax
 86c30be:	7f 07                	jg     86c30c7 <_ZN4Area16get_user_id_listERSt6vectorItSaItEE+0x69>
 86c30c0:	b8 01 00 00 00       	mov    $0x1,%eax
 86c30c5:	eb 05                	jmp    86c30cc <_ZN4Area16get_user_id_listERSt6vectorItSaItEE+0x6e>
 86c30c7:	b8 00 00 00 00       	mov    $0x0,%eax
 86c30cc:	84 c0                	test   %al,%al
 86c30ce:	74 1f                	je     86c30ef <_ZN4Area16get_user_id_listERSt6vectorItSaItEE+0x91>
 86c30d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c30d3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c30da:	00 
 86c30db:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86c30de:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c30e2:	89 04 24             	mov    %eax,(%esp)
 86c30e5:	e8 1c 48 a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c30ea:	83 ec 04             	sub    $0x4,%esp
 86c30ed:	eb 3e                	jmp    86c312d <_ZN4Area16get_user_id_listERSt6vectorItSaItEE+0xcf>
 86c30ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c30f2:	89 04 24             	mov    %eax,(%esp)
 86c30f5:	e8 82 72 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c30fa:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 86c30fe:	8d 45 ee             	lea    -0x12(%ebp),%eax
 86c3101:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3105:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3108:	89 04 24             	mov    %eax,(%esp)
 86c310b:	e8 de d4 ef ff       	call   85c05ee <_ZNSt6vectorItSaItEE9push_backEOt>
 86c3110:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c3113:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c311a:	00 
 86c311b:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86c311e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3122:	89 04 24             	mov    %eax,(%esp)
 86c3125:	e8 dc 47 a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c312a:	83 ec 04             	sub    $0x4,%esp
 86c312d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3130:	8d 50 44             	lea    0x44(%eax),%edx
 86c3133:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c3136:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c313a:	89 04 24             	mov    %eax,(%esp)
 86c313d:	e8 8a 47 a3 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c3142:	83 ec 04             	sub    $0x4,%esp
 86c3145:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c3148:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c314c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c314f:	89 04 24             	mov    %eax,(%esp)
 86c3152:	e8 9b 47 a3 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c3157:	84 c0                	test   %al,%al
 86c3159:	0f 85 3a ff ff ff    	jne    86c3099 <_ZN4Area16get_user_id_listERSt6vectorItSaItEE+0x3b>
 86c315f:	c9                   	leave
 86c3160:	c3                   	ret
 86c3161:	90                   	nop

```

```c
// Area::get_user_id_list @ 0x86c305e

/* Area::get_user_id_list(std::vector<unsigned short, std::allocator<unsigned short> >&) */

void __thiscall Area::get_user_id_list(Area *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [3];
  undefined4 local_24;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_1c [6];
  ushort local_16;
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_24 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
    local_10 = *(CUser **)(iVar3 + 4);
    if (local_10 == (CUser *)0x0) {
LAB_086c30c0:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_10);
      if (iVar3 < 3) goto LAB_086c30c0;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_1c,(int)&local_24);
    }
    else {
      local_16 = CUser::get_unique_id(local_10);
      std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back
                ((vector<unsigned_short,std::allocator<unsigned_short>> *)param_1,&local_16);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_24);
    }
  } while( true );
}

```

---

## hasNPC

```asm
// === 086c214c Area::hasNPC  [0x086c214c-0x86c21e1] ===
 86c214c:	55                   	push   %ebp
 86c214d:	89 e5                	mov    %esp,%ebp
 86c214f:	83 ec 28             	sub    $0x28,%esp
 86c2152:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2155:	8d 50 5c             	lea    0x5c(%eax),%edx
 86c2158:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c215b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c215f:	89 04 24             	mov    %eax,(%esp)
 86c2162:	e8 13 b2 a0 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 86c2167:	83 ec 04             	sub    $0x4,%esp
 86c216a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c216d:	8d 50 5c             	lea    0x5c(%eax),%edx
 86c2170:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c2173:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2177:	89 04 24             	mov    %eax,(%esp)
 86c217a:	e8 cf b1 a0 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 86c217f:	83 ec 04             	sub    $0x4,%esp
 86c2182:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2185:	8d 55 0c             	lea    0xc(%ebp),%edx
 86c2188:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86c218c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86c218f:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c2193:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c2196:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c219a:	89 04 24             	mov    %eax,(%esp)
 86c219d:	e8 7f 39 b7 ff       	call   8235b21 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEjET_S8_S8_RKT0_>
 86c21a2:	83 ec 04             	sub    $0x4,%esp
 86c21a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86c21a8:	8d 50 5c             	lea    0x5c(%eax),%edx
 86c21ab:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86c21ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c21b2:	89 04 24             	mov    %eax,(%esp)
 86c21b5:	e8 c0 b1 a0 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 86c21ba:	83 ec 04             	sub    $0x4,%esp
 86c21bd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86c21c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c21c4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c21c7:	89 04 24             	mov    %eax,(%esp)
 86c21ca:	e8 cd 79 a3 ff       	call   80f9b9c <_ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 86c21cf:	84 c0                	test   %al,%al
 86c21d1:	74 07                	je     86c21da <_ZNK4Area6hasNPCEj+0x8e>
 86c21d3:	b8 00 00 00 00       	mov    $0x0,%eax
 86c21d8:	eb 05                	jmp    86c21df <_ZNK4Area6hasNPCEj+0x93>
 86c21da:	b8 01 00 00 00       	mov    $0x1,%eax
 86c21df:	c9                   	leave
 86c21e0:	c3                   	ret
 86c21e1:	90                   	nop

```

```c
// Area::hasNPC @ 0x86c214c

/* Area::hasNPC(unsigned int) const */

bool Area::hasNPC(uint param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,unsigned_int>
            (local_1c,local_14,local_18,&stack0x00000008);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator==(local_1c,local_10);
  return !bVar1;
}

```

---

## insert_user

```asm
// === 086c25a6 Area::insert_user  [0x086c25a6-0x86c2a37] ===
 86c25a6:	55                   	push   %ebp
 86c25a7:	89 e5                	mov    %esp,%ebp
 86c25a9:	56                   	push   %esi
 86c25aa:	53                   	push   %ebx
 86c25ab:	83 ec 60             	sub    $0x60,%esp
 86c25ae:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c25b1:	89 04 24             	mov    %eax,(%esp)
 86c25b4:	e8 93 b7 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86c25b9:	8b 45 08             	mov    0x8(%ebp),%eax
 86c25bc:	8b 40 68             	mov    0x68(%eax),%eax
 86c25bf:	83 f8 01             	cmp    $0x1,%eax
 86c25c2:	0f 85 33 01 00 00    	jne    86c26fb <_ZN4Area11insert_userEP5CUser+0x155>
 86c25c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c25cb:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86c25d2:	00 
 86c25d3:	89 04 24             	mov    %eax,(%esp)
 86c25d6:	e8 d7 c7 fb ff       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 86c25db:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 86c25e2:	00 
 86c25e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c25ea:	00 
 86c25eb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c25ee:	89 04 24             	mov    %eax,(%esp)
 86c25f1:	e8 06 93 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c25f6:	8b 45 08             	mov    0x8(%ebp),%eax
 86c25f9:	8b 40 04             	mov    0x4(%eax),%eax
 86c25fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2600:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2603:	89 04 24             	mov    %eax,(%esp)
 86c2606:	e8 15 93 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c260b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c260e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c2615:	00 
 86c2616:	89 04 24             	mov    %eax,(%esp)
 86c2619:	e8 a0 ed fb ff       	call   86813be <_ZN5CUser8get_areaEb>
 86c261e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2622:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2625:	89 04 24             	mov    %eax,(%esp)
 86c2628:	e8 f3 92 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c262d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c2634:	00 
 86c2635:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2638:	89 04 24             	mov    %eax,(%esp)
 86c263b:	e8 64 78 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2640:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2643:	89 04 24             	mov    %eax,(%esp)
 86c2646:	e8 31 7d a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c264b:	0f b7 c0             	movzwl %ax,%eax
 86c264e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2652:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2655:	89 04 24             	mov    %eax,(%esp)
 86c2658:	e8 47 78 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c265d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2660:	89 04 24             	mov    %eax,(%esp)
 86c2663:	e8 c4 22 a7 ff       	call   813492c <_ZN5CUser8get_posXEv>
 86c2668:	0f b7 c0             	movzwl %ax,%eax
 86c266b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c266f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2672:	89 04 24             	mov    %eax,(%esp)
 86c2675:	e8 2a 78 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c267a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c267d:	89 04 24             	mov    %eax,(%esp)
 86c2680:	e8 b7 22 a7 ff       	call   813493c <_ZN5CUser8get_posYEv>
 86c2685:	0f b7 c0             	movzwl %ax,%eax
 86c2688:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c268c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c268f:	89 04 24             	mov    %eax,(%esp)
 86c2692:	e8 0d 78 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2697:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c269a:	89 04 24             	mov    %eax,(%esp)
 86c269d:	e8 aa 22 a7 ff       	call   813494c <_ZN5CUser13get_directionEv>
 86c26a2:	0f be c0             	movsbl %al,%eax
 86c26a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c26a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c26ac:	89 04 24             	mov    %eax,(%esp)
 86c26af:	e8 6c 92 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c26b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c26b7:	89 04 24             	mov    %eax,(%esp)
 86c26ba:	e8 25 97 fc ff       	call   868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>
 86c26bf:	0f be c0             	movsbl %al,%eax
 86c26c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c26c6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c26c9:	89 04 24             	mov    %eax,(%esp)
 86c26cc:	e8 4f 92 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c26d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c26d8:	00 
 86c26d9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c26dc:	89 04 24             	mov    %eax,(%esp)
 86c26df:	e8 74 92 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c26e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c26e7:	8d 55 d0             	lea    -0x30(%ebp),%edx
 86c26ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c26ee:	89 04 24             	mov    %eax,(%esp)
 86c26f1:	e8 c4 5e f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c26f6:	e9 27 03 00 00       	jmp    86c2a22 <_ZN4Area11insert_userEP5CUser+0x47c>
 86c26fb:	8b 45 08             	mov    0x8(%ebp),%eax
 86c26fe:	8b 40 68             	mov    0x68(%eax),%eax
 86c2701:	83 f8 02             	cmp    $0x2,%eax
 86c2704:	75 15                	jne    86c271b <_ZN4Area11insert_userEP5CUser+0x175>
 86c2706:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2709:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86c2710:	00 
 86c2711:	89 04 24             	mov    %eax,(%esp)
 86c2714:	e8 99 c6 fb ff       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 86c2719:	eb 13                	jmp    86c272e <_ZN4Area11insert_userEP5CUser+0x188>
 86c271b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c271e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86c2725:	00 
 86c2726:	89 04 24             	mov    %eax,(%esp)
 86c2729:	e8 84 c6 fb ff       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 86c272e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86c2731:	89 04 24             	mov    %eax,(%esp)
 86c2734:	e8 ed 10 01 00       	call   86d3826 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEC1Ev>
 86c2739:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c273c:	89 04 24             	mov    %eax,(%esp)
 86c273f:	e8 38 7c a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c2744:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 86c2748:	8b 45 08             	mov    0x8(%ebp),%eax
 86c274b:	8d 48 44             	lea    0x44(%eax),%ecx
 86c274e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86c2751:	8d 55 de             	lea    -0x22(%ebp),%edx
 86c2754:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c2758:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86c275c:	89 04 24             	mov    %eax,(%esp)
 86c275f:	e8 d0 10 01 00       	call   86d3834 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 86c2764:	83 ec 04             	sub    $0x4,%esp
 86c2767:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86c276a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86c276d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2770:	8d 50 44             	lea    0x44(%eax),%edx
 86c2773:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c2776:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c277a:	89 04 24             	mov    %eax,(%esp)
 86c277d:	e8 4a 51 a3 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c2782:	83 ec 04             	sub    $0x4,%esp
 86c2785:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c2788:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c278c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86c278f:	89 04 24             	mov    %eax,(%esp)
 86c2792:	e8 5b 51 a3 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c2797:	84 c0                	test   %al,%al
 86c2799:	74 43                	je     86c27de <_ZN4Area11insert_userEP5CUser+0x238>
 86c279b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c279e:	89 04 24             	mov    %eax,(%esp)
 86c27a1:	e8 d6 7b a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c27a6:	0f b7 c0             	movzwl %ax,%eax
 86c27a9:	89 44 24 14          	mov    %eax,0x14(%esp)
 86c27ad:	c7 44 24 10 6e b4 cf 	movl   $0x8cfb46e,0x10(%esp)
 86c27b4:	08 
 86c27b5:	c7 44 24 0c a7 01 00 	movl   $0x1a7,0xc(%esp)
 86c27bc:	00 
 86c27bd:	c7 44 24 08 08 d8 cf 	movl   $0x8cfd808,0x8(%esp)
 86c27c4:	08 
 86c27c5:	c7 44 24 04 85 b4 cf 	movl   $0x8cfb485,0x4(%esp)
 86c27cc:	08 
 86c27cd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86c27d4:	e8 31 14 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86c27d9:	e9 44 02 00 00       	jmp    86c2a22 <_ZN4Area11insert_userEP5CUser+0x47c>
 86c27de:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c27e1:	89 04 24             	mov    %eax,(%esp)
 86c27e4:	e8 93 7b a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c27e9:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 86c27ed:	8d 45 0c             	lea    0xc(%ebp),%eax
 86c27f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c27f4:	8d 45 f6             	lea    -0xa(%ebp),%eax
 86c27f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c27fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c27fe:	89 04 24             	mov    %eax,(%esp)
 86c2801:	e8 5a 10 01 00       	call   86d3860 <_ZNSt4pairIKtP5CUserEC1ItRS2_EEOT_OT0_>
 86c2806:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2809:	8d 48 44             	lea    0x44(%eax),%ecx
 86c280c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c280f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86c2812:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c2816:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86c281a:	89 04 24             	mov    %eax,(%esp)
 86c281d:	e8 6e 10 01 00       	call   86d3890 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE6insertERKS6_>
 86c2822:	83 ec 04             	sub    $0x4,%esp
 86c2825:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 86c282c:	00 
 86c282d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c2834:	00 
 86c2835:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2838:	89 04 24             	mov    %eax,(%esp)
 86c283b:	e8 bc 90 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c2840:	eb 65                	jmp    86c28a7 <_ZN4Area11insert_userEP5CUser+0x301>
 86c2842:	89 04 24             	mov    %eax,(%esp)
 86c2845:	e8 96 34 06 00       	call   8725ce0 <__cxa_begin_catch>
 86c284a:	e8 21 b5 9b ff       	call   807dd70 <__errno_location@plt>
 86c284f:	8b 00                	mov    (%eax),%eax
 86c2851:	89 04 24             	mov    %eax,(%esp)
 86c2854:	e8 d7 ae 9b ff       	call   807d730 <strerror@plt>
 86c2859:	89 44 24 14          	mov    %eax,0x14(%esp)
 86c285d:	c7 44 24 10 90 b4 cf 	movl   $0x8cfb490,0x10(%esp)
 86c2864:	08 
 86c2865:	c7 44 24 0c af 01 00 	movl   $0x1af,0xc(%esp)
 86c286c:	00 
 86c286d:	c7 44 24 08 08 d8 cf 	movl   $0x8cfd808,0x8(%esp)
 86c2874:	08 
 86c2875:	c7 44 24 04 85 b4 cf 	movl   $0x8cfb485,0x4(%esp)
 86c287c:	08 
 86c287d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86c2884:	e8 81 13 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86c2889:	eb 12                	jmp    86c289d <_ZN4Area11insert_userEP5CUser+0x2f7>
 86c288b:	89 d3                	mov    %edx,%ebx
 86c288d:	89 c6                	mov    %eax,%esi
 86c288f:	e8 9c 33 06 00       	call   8725c30 <__cxa_end_catch>
 86c2894:	89 f0                	mov    %esi,%eax
 86c2896:	89 da                	mov    %ebx,%edx
 86c2898:	e9 6a 01 00 00       	jmp    86c2a07 <_ZN4Area11insert_userEP5CUser+0x461>
 86c289d:	e8 8e 33 06 00       	call   8725c30 <__cxa_end_catch>
 86c28a2:	e9 7b 01 00 00       	jmp    86c2a22 <_ZN4Area11insert_userEP5CUser+0x47c>
 86c28a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c28aa:	89 04 24             	mov    %eax,(%esp)
 86c28ad:	e8 ca 7a a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c28b2:	0f b7 c0             	movzwl %ax,%eax
 86c28b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c28b9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c28bc:	89 04 24             	mov    %eax,(%esp)
 86c28bf:	e8 e0 75 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c28c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86c28c7:	8b 40 04             	mov    0x4(%eax),%eax
 86c28ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c28ce:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c28d1:	89 04 24             	mov    %eax,(%esp)
 86c28d4:	e8 47 90 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c28d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c28dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c28e3:	00 
 86c28e4:	89 04 24             	mov    %eax,(%esp)
 86c28e7:	e8 d2 ea fb ff       	call   86813be <_ZN5CUser8get_areaEb>
 86c28ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c28f0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c28f3:	89 04 24             	mov    %eax,(%esp)
 86c28f6:	e8 25 90 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c28fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c28fe:	89 04 24             	mov    %eax,(%esp)
 86c2901:	e8 26 20 a7 ff       	call   813492c <_ZN5CUser8get_posXEv>
 86c2906:	0f b7 c0             	movzwl %ax,%eax
 86c2909:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c290d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2910:	89 04 24             	mov    %eax,(%esp)
 86c2913:	e8 8c 75 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2918:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c291b:	89 04 24             	mov    %eax,(%esp)
 86c291e:	e8 19 20 a7 ff       	call   813493c <_ZN5CUser8get_posYEv>
 86c2923:	0f b7 c0             	movzwl %ax,%eax
 86c2926:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c292a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c292d:	89 04 24             	mov    %eax,(%esp)
 86c2930:	e8 6f 75 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2935:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2938:	89 04 24             	mov    %eax,(%esp)
 86c293b:	e8 0c 20 a7 ff       	call   813494c <_ZN5CUser13get_directionEv>
 86c2940:	0f be c0             	movsbl %al,%eax
 86c2943:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2947:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c294a:	89 04 24             	mov    %eax,(%esp)
 86c294d:	e8 ce 8f a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c2952:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2955:	89 04 24             	mov    %eax,(%esp)
 86c2958:	e8 87 94 fc ff       	call   868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>
 86c295d:	0f be c0             	movsbl %al,%eax
 86c2960:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2964:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2967:	89 04 24             	mov    %eax,(%esp)
 86c296a:	e8 b1 8f a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c296f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c2976:	00 
 86c2977:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c297a:	89 04 24             	mov    %eax,(%esp)
 86c297d:	e8 d6 8f a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c2982:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2985:	89 04 24             	mov    %eax,(%esp)
 86c2988:	e8 57 95 fc ff       	call   868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>
 86c298d:	84 c0                	test   %al,%al
 86c298f:	74 14                	je     86c29a5 <_ZN4Area11insert_userEP5CUser+0x3ff>
 86c2991:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2994:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2998:	8b 45 08             	mov    0x8(%ebp),%eax
 86c299b:	89 04 24             	mov    %eax,(%esp)
 86c299e:	e8 87 03 00 00       	call   86c2d2a <_ZN4Area11send_to_allER11PacketGuard>
 86c29a3:	eb 12                	jmp    86c29b7 <_ZN4Area11insert_userEP5CUser+0x411>
 86c29a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c29a8:	8d 55 d0             	lea    -0x30(%ebp),%edx
 86c29ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c29af:	89 04 24             	mov    %eax,(%esp)
 86c29b2:	e8 03 5c f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c29b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c29ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c29be:	8b 45 08             	mov    0x8(%ebp),%eax
 86c29c1:	89 04 24             	mov    %eax,(%esp)
 86c29c4:	e8 29 f9 ff ff       	call   86c22f2 <_ZN4Area15send_area_usersEP5CUser>
 86c29c9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86c29cc:	e8 cf 26 b7 ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 86c29d1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86c29d5:	89 04 24             	mov    %eax,(%esp)
 86c29d8:	e8 33 cc c2 ff       	call   82ef610 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser>
 86c29dd:	8b 55 0c             	mov    0xc(%ebp),%edx
 86c29e0:	a1 74 f7 41 09       	mov    0x941f774,%eax
 86c29e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c29e9:	89 04 24             	mov    %eax,(%esp)
 86c29ec:	e8 e9 47 ff ff       	call   86b71da <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser>
 86c29f1:	8b 55 0c             	mov    0xc(%ebp),%edx
 86c29f4:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 86c29f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c29fd:	89 04 24             	mov    %eax,(%esp)
 86c2a00:	e8 b7 1b ff ff       	call   86b45bc <_ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser>
 86c2a05:	eb 1b                	jmp    86c2a22 <_ZN4Area11insert_userEP5CUser+0x47c>
 86c2a07:	89 d3                	mov    %edx,%ebx
 86c2a09:	89 c6                	mov    %eax,%esi
 86c2a0b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2a0e:	89 04 24             	mov    %eax,(%esp)
 86c2a11:	e8 6a b4 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c2a16:	89 f0                	mov    %esi,%eax
 86c2a18:	89 da                	mov    %ebx,%edx
 86c2a1a:	89 04 24             	mov    %eax,(%esp)
 86c2a1d:	e8 2e 0d 42 00       	call   8ae3750 <_Unwind_Resume>
 86c2a22:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2a25:	89 04 24             	mov    %eax,(%esp)
 86c2a28:	e8 53 b4 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c2a2d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86c2a30:	83 c4 00             	add    $0x0,%esp
 86c2a33:	5b                   	pop    %ebx
 86c2a34:	5e                   	pop    %esi
 86c2a35:	5d                   	pop    %ebp
 86c2a36:	c3                   	ret
 86c2a37:	90                   	nop

```

```c
// Area::insert_user @ 0x86c25a6

/* Area::insert_user(CUser*) */

void __thiscall Area::insert_user(Area *this,CUser *param_1)

{
  CUser *pCVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CAssaultMgr *this_00;
  undefined4 local_40 [2];
  undefined4 local_38;
  PacketGuard local_34 [14];
  undefined2 local_26;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  pair local_20 [8];
  pair<unsigned_short_const,CUser*> local_18 [10];
  ushort local_e;
  
  PacketGuard::PacketGuard(local_34);
  if (*(int *)(this + 0x68) == 1) {
                    /* try { // try from 086c25d6 to 086c272d has its CatchHandler @ 086c2a07 */
    CUser::set_state(param_1,3);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(this + 4));
    iVar3 = CUser::get_area(param_1,true);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
    uVar4 = CUser::get_posX(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
    uVar4 = CUser::get_posY(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
    cVar2 = CUser::get_direction(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
    cVar2 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    CUser::Send(param_1,local_34);
  }
  else {
    if (*(int *)(this + 0x68) == 2) {
      CUser::set_state(param_1,4);
    }
    else {
      CUser::set_state(param_1,3);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_38);
    local_26 = CUser::get_unique_id(param_1);
                    /* try { // try from 086c275f to 086c2821 has its CatchHandler @ 086c2842 */
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::find((ushort *)local_40);
    local_38 = local_40[0];
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_24);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_38,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      local_e = CUser::get_unique_id(param_1);
      std::pair<unsigned_short_const,CUser*>::pair<unsigned_short,CUser*&>
                (local_18,&local_e,&param_1);
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::insert(local_20);
                    /* try { // try from 086c283b to 086c283f has its CatchHandler @ 086c2a07 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x17);
      uVar4 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(this + 4));
      iVar3 = CUser::get_area(param_1,true);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar3);
      uVar4 = CUser::get_posX(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      uVar4 = CUser::get_posY(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      cVar2 = CUser::get_direction(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
      cVar2 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      cVar2 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)param_1);
      if (cVar2 == '\0') {
        CUser::Send(param_1,local_34);
      }
      else {
        send_to_all(this,local_34);
      }
      send_area_users(this,param_1);
      pCVar1 = param_1;
      this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      pvp_assault::CAssaultMgr::OnMoveArea(this_00,pCVar1);
      village_object::CVillageObjectMgr::on_move_area(GlobalData::s_villageObjectMgr,param_1);
      village_attacked::CVillageMonsterMgr::OnMoveArea(GlobalData::s_villageMonsterMgr,param_1);
    }
    else {
      uVar4 = CUser::get_unique_id(param_1);
      LogManager::logFormat
                (1,"world.cpp","void Area::insert_user(CUser*)",0x1a7,"m_UsersInArea.find(%d)",
                 uVar4 & 0xffff);
    }
  }
  PacketGuard::~PacketGuard(local_34);
  return;
}

```

---

## make_power_war_hp_of_vill

```asm
// === 086c2c1e Area::make_power_war_hp_of_vill  [0x086c2c1e-0x86c2d29] ===
 86c2c1e:	55                   	push   %ebp
 86c2c1f:	89 e5                	mov    %esp,%ebp
 86c2c21:	83 ec 48             	sub    $0x48,%esp
 86c2c24:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c2c2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2c2e:	89 04 24             	mov    %eax,(%esp)
 86c2c31:	e8 f0 0b 01 00       	call   86d3826 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEC1Ev>
 86c2c36:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2c39:	8d 50 44             	lea    0x44(%eax),%edx
 86c2c3c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c2c3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2c43:	89 04 24             	mov    %eax,(%esp)
 86c2c46:	e8 5b 4c a3 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86c2c4b:	83 ec 04             	sub    $0x4,%esp
 86c2c4e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c2c51:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86c2c54:	e9 9d 00 00 00       	jmp    86c2cf6 <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi+0xd8>
 86c2c59:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2c5c:	89 04 24             	mov    %eax,(%esp)
 86c2c5f:	e8 e0 4c a3 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 86c2c64:	8b 40 04             	mov    0x4(%eax),%eax
 86c2c67:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c2c6a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86c2c6e:	74 10                	je     86c2c80 <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi+0x62>
 86c2c70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2c73:	89 04 24             	mov    %eax,(%esp)
 86c2c76:	e8 11 77 a1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86c2c7b:	83 f8 02             	cmp    $0x2,%eax
 86c2c7e:	7f 07                	jg     86c2c87 <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi+0x69>
 86c2c80:	b8 01 00 00 00       	mov    $0x1,%eax
 86c2c85:	eb 05                	jmp    86c2c8c <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi+0x6e>
 86c2c87:	b8 00 00 00 00       	mov    $0x0,%eax
 86c2c8c:	84 c0                	test   %al,%al
 86c2c8e:	74 1f                	je     86c2caf <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi+0x91>
 86c2c90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c2c93:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2c9a:	00 
 86c2c9b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86c2c9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2ca2:	89 04 24             	mov    %eax,(%esp)
 86c2ca5:	e8 5c 4c a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c2caa:	83 ec 04             	sub    $0x4,%esp
 86c2cad:	eb 47                	jmp    86c2cf6 <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi+0xd8>
 86c2caf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2cb2:	89 04 24             	mov    %eax,(%esp)
 86c2cb5:	e8 34 dd c2 ff       	call   82f09ee <_ZN15CUserCharacInfo13getPowerWarHPEv>
 86c2cba:	0f b7 d0             	movzwl %ax,%edx
 86c2cbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2cc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2cc4:	89 04 24             	mov    %eax,(%esp)
 86c2cc7:	e8 d8 71 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2ccc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c2ccf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2cd6:	00 
 86c2cd7:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86c2cda:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2cde:	89 04 24             	mov    %eax,(%esp)
 86c2ce1:	e8 20 4c a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c2ce6:	83 ec 04             	sub    $0x4,%esp
 86c2ce9:	8b 45 10             	mov    0x10(%ebp),%eax
 86c2cec:	8b 00                	mov    (%eax),%eax
 86c2cee:	8d 50 01             	lea    0x1(%eax),%edx
 86c2cf1:	8b 45 10             	mov    0x10(%ebp),%eax
 86c2cf4:	89 10                	mov    %edx,(%eax)
 86c2cf6:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2cf9:	8d 50 44             	lea    0x44(%eax),%edx
 86c2cfc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2cff:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2d03:	89 04 24             	mov    %eax,(%esp)
 86c2d06:	e8 c1 4b a3 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c2d0b:	83 ec 04             	sub    $0x4,%esp
 86c2d0e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2d11:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2d15:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2d18:	89 04 24             	mov    %eax,(%esp)
 86c2d1b:	e8 d2 4b a3 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c2d20:	84 c0                	test   %al,%al
 86c2d22:	0f 85 31 ff ff ff    	jne    86c2c59 <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi+0x3b>
 86c2d28:	c9                   	leave
 86c2d29:	c3                   	ret

```

```c
// Area::make_power_war_hp_of_vill @ 0x86c2c1e

/* Area::make_power_war_hp_of_vill(PacketGuard&, int&) */

void __thiscall Area::make_power_war_hp_of_vill(Area *this,PacketGuard *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30 [4];
  undefined4 local_20;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUserCharacInfo *local_10;
  
  local_10 = (CUserCharacInfo *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
    local_10 = *(CUserCharacInfo **)(iVar3 + 4);
    if (local_10 == (CUserCharacInfo *)0x0) {
LAB_086c2c80:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state((CUser *)local_10);
      if (iVar3 < 3) goto LAB_086c2c80;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_20);
    }
    else {
      uVar4 = CUserCharacInfo::getPowerWarHP(local_10);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar4 & 0xffff);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_20);
      *param_2 = *param_2 + 1;
    }
  } while( true );
}

```

---

## send_area_users

```asm
// === 086c22f2 Area::send_area_users  [0x086c22f2-0x86c25a5] ===
 86c22f2:	55                   	push   %ebp
 86c22f3:	89 e5                	mov    %esp,%ebp
 86c22f5:	56                   	push   %esi
 86c22f6:	53                   	push   %ebx
 86c22f7:	83 ec 40             	sub    $0x40,%esp
 86c22fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c22fd:	89 04 24             	mov    %eax,(%esp)
 86c2300:	e8 5f 32 f8 ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 86c2305:	0f be d0             	movsbl %al,%edx
 86c2308:	8b 45 08             	mov    0x8(%ebp),%eax
 86c230b:	8b 40 04             	mov    0x4(%eax),%eax
 86c230e:	39 c2                	cmp    %eax,%edx
 86c2310:	75 1c                	jne    86c232e <_ZN4Area15send_area_usersEP5CUser+0x3c>
 86c2312:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c2319:	00 
 86c231a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c231d:	89 04 24             	mov    %eax,(%esp)
 86c2320:	e8 99 f0 fb ff       	call   86813be <_ZN5CUser8get_areaEb>
 86c2325:	8b 55 08             	mov    0x8(%ebp),%edx
 86c2328:	8b 12                	mov    (%edx),%edx
 86c232a:	39 d0                	cmp    %edx,%eax
 86c232c:	74 07                	je     86c2335 <_ZN4Area15send_area_usersEP5CUser+0x43>
 86c232e:	b8 01 00 00 00       	mov    $0x1,%eax
 86c2333:	eb 05                	jmp    86c233a <_ZN4Area15send_area_usersEP5CUser+0x48>
 86c2335:	b8 00 00 00 00       	mov    $0x0,%eax
 86c233a:	84 c0                	test   %al,%al
 86c233c:	0f 85 58 02 00 00    	jne    86c259a <_ZN4Area15send_area_usersEP5CUser+0x2a8>
 86c2342:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2345:	89 04 24             	mov    %eax,(%esp)
 86c2348:	e8 ff b9 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86c234d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2350:	89 04 24             	mov    %eax,(%esp)
 86c2353:	e8 8e 95 a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86c2358:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 86c235f:	00 
 86c2360:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c2367:	00 
 86c2368:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c236b:	89 04 24             	mov    %eax,(%esp)
 86c236e:	e8 89 95 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c2373:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2376:	8b 40 04             	mov    0x4(%eax),%eax
 86c2379:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c237d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2380:	89 04 24             	mov    %eax,(%esp)
 86c2383:	e8 98 95 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c2388:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c238f:	00 
 86c2390:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2393:	89 04 24             	mov    %eax,(%esp)
 86c2396:	e8 23 f0 fb ff       	call   86813be <_ZN5CUser8get_areaEb>
 86c239b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c239f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c23a2:	89 04 24             	mov    %eax,(%esp)
 86c23a5:	e8 76 95 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c23aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c23ad:	89 04 24             	mov    %eax,(%esp)
 86c23b0:	e8 97 e7 a4 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 86c23b5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86c23b8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86c23bf:	8b 45 08             	mov    0x8(%ebp),%eax
 86c23c2:	83 c0 44             	add    $0x44,%eax
 86c23c5:	89 04 24             	mov    %eax,(%esp)
 86c23c8:	e8 2f 49 a4 ff       	call   8106cfc <_ZNKSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE4sizeEv>
 86c23cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c23d1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c23d4:	89 04 24             	mov    %eax,(%esp)
 86c23d7:	e8 c8 7a a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c23dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86c23df:	8d 50 44             	lea    0x44(%eax),%edx
 86c23e2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c23e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c23e9:	89 04 24             	mov    %eax,(%esp)
 86c23ec:	e8 b5 54 a3 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86c23f1:	83 ec 04             	sub    $0x4,%esp
 86c23f4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c23fb:	e9 00 01 00 00       	jmp    86c2500 <_ZN4Area15send_area_usersEP5CUser+0x20e>
 86c2400:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c2403:	89 04 24             	mov    %eax,(%esp)
 86c2406:	e8 39 55 a3 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 86c240b:	8b 40 04             	mov    0x4(%eax),%eax
 86c240e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c2411:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2414:	89 04 24             	mov    %eax,(%esp)
 86c2417:	e8 c8 9a fc ff       	call   868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>
 86c241c:	84 c0                	test   %al,%al
 86c241e:	75 1a                	jne    86c243a <_ZN4Area15send_area_usersEP5CUser+0x148>
 86c2420:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2423:	89 04 24             	mov    %eax,(%esp)
 86c2426:	e8 b9 9a fc ff       	call   868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>
 86c242b:	83 f0 01             	xor    $0x1,%eax
 86c242e:	84 c0                	test   %al,%al
 86c2430:	74 0f                	je     86c2441 <_ZN4Area15send_area_usersEP5CUser+0x14f>
 86c2432:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2435:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86c2438:	75 07                	jne    86c2441 <_ZN4Area15send_area_usersEP5CUser+0x14f>
 86c243a:	b8 01 00 00 00       	mov    $0x1,%eax
 86c243f:	eb 05                	jmp    86c2446 <_ZN4Area15send_area_usersEP5CUser+0x154>
 86c2441:	b8 00 00 00 00       	mov    $0x0,%eax
 86c2446:	84 c0                	test   %al,%al
 86c2448:	0f 84 95 00 00 00    	je     86c24e3 <_ZN4Area15send_area_usersEP5CUser+0x1f1>
 86c244e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2451:	89 04 24             	mov    %eax,(%esp)
 86c2454:	e8 23 7f a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c2459:	0f b7 c0             	movzwl %ax,%eax
 86c245c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2460:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2463:	89 04 24             	mov    %eax,(%esp)
 86c2466:	e8 39 7a a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c246b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c246e:	89 04 24             	mov    %eax,(%esp)
 86c2471:	e8 b6 24 a7 ff       	call   813492c <_ZN5CUser8get_posXEv>
 86c2476:	0f b7 c0             	movzwl %ax,%eax
 86c2479:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c247d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2480:	89 04 24             	mov    %eax,(%esp)
 86c2483:	e8 1c 7a a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c2488:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c248b:	89 04 24             	mov    %eax,(%esp)
 86c248e:	e8 a9 24 a7 ff       	call   813493c <_ZN5CUser8get_posYEv>
 86c2493:	0f b7 c0             	movzwl %ax,%eax
 86c2496:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c249a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c249d:	89 04 24             	mov    %eax,(%esp)
 86c24a0:	e8 ff 79 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c24a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c24a8:	89 04 24             	mov    %eax,(%esp)
 86c24ab:	e8 9c 24 a7 ff       	call   813494c <_ZN5CUser13get_directionEv>
 86c24b0:	0f be c0             	movsbl %al,%eax
 86c24b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c24b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c24ba:	89 04 24             	mov    %eax,(%esp)
 86c24bd:	e8 5e 94 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c24c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c24c5:	89 04 24             	mov    %eax,(%esp)
 86c24c8:	e8 17 99 fc ff       	call   868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>
 86c24cd:	0f be c0             	movsbl %al,%eax
 86c24d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c24d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c24d7:	89 04 24             	mov    %eax,(%esp)
 86c24da:	e8 41 94 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c24df:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86c24e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c24e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c24ed:	00 
 86c24ee:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 86c24f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c24f5:	89 04 24             	mov    %eax,(%esp)
 86c24f8:	e8 09 54 a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c24fd:	83 ec 04             	sub    $0x4,%esp
 86c2500:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2503:	8d 50 44             	lea    0x44(%eax),%edx
 86c2506:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2509:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c250d:	89 04 24             	mov    %eax,(%esp)
 86c2510:	e8 b7 53 a3 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c2515:	83 ec 04             	sub    $0x4,%esp
 86c2518:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c251b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c251f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c2522:	89 04 24             	mov    %eax,(%esp)
 86c2525:	e8 c8 53 a3 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c252a:	84 c0                	test   %al,%al
 86c252c:	0f 85 ce fe ff ff    	jne    86c2400 <_ZN4Area15send_area_usersEP5CUser+0x10e>
 86c2532:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86c2535:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c2539:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c253c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2540:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2543:	89 04 24             	mov    %eax,(%esp)
 86c2546:	e8 bd 43 a5 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 86c254b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c2552:	00 
 86c2553:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2556:	89 04 24             	mov    %eax,(%esp)
 86c2559:	e8 fa 93 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c255e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2561:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2565:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2568:	89 04 24             	mov    %eax,(%esp)
 86c256b:	e8 4a 60 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c2570:	eb 1b                	jmp    86c258d <_ZN4Area15send_area_usersEP5CUser+0x29b>
 86c2572:	89 d3                	mov    %edx,%ebx
 86c2574:	89 c6                	mov    %eax,%esi
 86c2576:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2579:	89 04 24             	mov    %eax,(%esp)
 86c257c:	e8 ff b8 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c2581:	89 f0                	mov    %esi,%eax
 86c2583:	89 da                	mov    %ebx,%edx
 86c2585:	89 04 24             	mov    %eax,(%esp)
 86c2588:	e8 c3 11 42 00       	call   8ae3750 <_Unwind_Resume>
 86c258d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c2590:	89 04 24             	mov    %eax,(%esp)
 86c2593:	e8 e8 b8 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c2598:	eb 01                	jmp    86c259b <_ZN4Area15send_area_usersEP5CUser+0x2a9>
 86c259a:	90                   	nop
 86c259b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86c259e:	83 c4 00             	add    $0x0,%esp
 86c25a1:	5b                   	pop    %ebx
 86c25a2:	5e                   	pop    %esi
 86c25a3:	5d                   	pop    %ebp
 86c25a4:	c3                   	ret
 86c25a5:	90                   	nop

```

```c
// Area::send_area_users @ 0x86c22f2

/* Area::send_area_users(CUser*) */

void __thiscall Area::send_area_users(Area *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_30 [4];
  int local_2c;
  PacketGuard local_28 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  int local_14;
  CUser *local_10;
  
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if ((int)cVar2 == *(int *)(this + 4)) {
    iVar3 = CUser::get_area(param_1,false);
    if (iVar3 == *(int *)this) {
      bVar1 = false;
      goto LAB_086c233a;
    }
  }
  bVar1 = true;
LAB_086c233a:
  if (!bVar1) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086c2353 to 086c256f has its CatchHandler @ 086c2572 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(this + 4));
    iVar3 = CUser::get_area(param_1,true);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar3);
    local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    local_14 = 0;
    iVar3 = std::
            map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
            ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                    *)(this + 0x44));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar3);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_30);
    local_10 = (CUser *)0x0;
    while( true ) {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_1c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30);
      local_10 = *(CUser **)(iVar3 + 4);
      cVar2 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)local_10);
      if (cVar2 == '\0') {
        cVar2 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)local_10);
        if ((cVar2 != '\x01') && (local_10 == param_1)) goto LAB_086c243a;
        bVar1 = false;
      }
      else {
LAB_086c243a:
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = CUser::get_unique_id(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar4 & 0xffff);
        uVar4 = CUser::get_posX(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar4 & 0xffff);
        uVar4 = CUser::get_posY(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar4 & 0xffff);
        cVar2 = CUser::get_direction(local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar2);
        cVar2 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar2);
        local_14 = local_14 + 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)local_30);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_2c,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

---

## send_group

```asm
// === 086c2e1e Area::send_group  [0x086c2e1e-0x86c2f2b] ===
 86c2e1e:	55                   	push   %ebp
 86c2e1f:	89 e5                	mov    %esp,%ebp
 86c2e21:	83 ec 48             	sub    $0x48,%esp
 86c2e24:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c2e2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2e2e:	89 04 24             	mov    %eax,(%esp)
 86c2e31:	e8 f0 09 01 00       	call   86d3826 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEC1Ev>
 86c2e36:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2e39:	8d 50 44             	lea    0x44(%eax),%edx
 86c2e3c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c2e3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2e43:	89 04 24             	mov    %eax,(%esp)
 86c2e46:	e8 5b 4a a3 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86c2e4b:	83 ec 04             	sub    $0x4,%esp
 86c2e4e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c2e51:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86c2e54:	e9 9f 00 00 00       	jmp    86c2ef8 <_ZN4Area10send_groupER11PacketGuardP7CBelong+0xda>
 86c2e59:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2e5c:	89 04 24             	mov    %eax,(%esp)
 86c2e5f:	e8 e0 4a a3 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 86c2e64:	8b 40 04             	mov    0x4(%eax),%eax
 86c2e67:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c2e6a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86c2e6e:	74 10                	je     86c2e80 <_ZN4Area10send_groupER11PacketGuardP7CBelong+0x62>
 86c2e70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2e73:	89 04 24             	mov    %eax,(%esp)
 86c2e76:	e8 11 75 a1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86c2e7b:	83 f8 02             	cmp    $0x2,%eax
 86c2e7e:	7f 07                	jg     86c2e87 <_ZN4Area10send_groupER11PacketGuardP7CBelong+0x69>
 86c2e80:	b8 01 00 00 00       	mov    $0x1,%eax
 86c2e85:	eb 05                	jmp    86c2e8c <_ZN4Area10send_groupER11PacketGuardP7CBelong+0x6e>
 86c2e87:	b8 00 00 00 00       	mov    $0x0,%eax
 86c2e8c:	84 c0                	test   %al,%al
 86c2e8e:	74 1f                	je     86c2eaf <_ZN4Area10send_groupER11PacketGuardP7CBelong+0x91>
 86c2e90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c2e93:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2e9a:	00 
 86c2e9b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86c2e9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2ea2:	89 04 24             	mov    %eax,(%esp)
 86c2ea5:	e8 5c 4a a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c2eaa:	83 ec 04             	sub    $0x4,%esp
 86c2ead:	eb 49                	jmp    86c2ef8 <_ZN4Area10send_groupER11PacketGuardP7CBelong+0xda>
 86c2eaf:	8b 45 10             	mov    0x10(%ebp),%eax
 86c2eb2:	8b 00                	mov    (%eax),%eax
 86c2eb4:	8b 10                	mov    (%eax),%edx
 86c2eb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2eb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2ebd:	8b 45 10             	mov    0x10(%ebp),%eax
 86c2ec0:	89 04 24             	mov    %eax,(%esp)
 86c2ec3:	ff d2                	call   *%edx
 86c2ec5:	84 c0                	test   %al,%al
 86c2ec7:	74 12                	je     86c2edb <_ZN4Area10send_groupER11PacketGuardP7CBelong+0xbd>
 86c2ec9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2ecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2ed0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2ed3:	89 04 24             	mov    %eax,(%esp)
 86c2ed6:	e8 df 56 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c2edb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c2ede:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2ee5:	00 
 86c2ee6:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86c2ee9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2eed:	89 04 24             	mov    %eax,(%esp)
 86c2ef0:	e8 11 4a a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c2ef5:	83 ec 04             	sub    $0x4,%esp
 86c2ef8:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2efb:	8d 50 44             	lea    0x44(%eax),%edx
 86c2efe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2f01:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2f05:	89 04 24             	mov    %eax,(%esp)
 86c2f08:	e8 bf 49 a3 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c2f0d:	83 ec 04             	sub    $0x4,%esp
 86c2f10:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2f13:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2f17:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2f1a:	89 04 24             	mov    %eax,(%esp)
 86c2f1d:	e8 d0 49 a3 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c2f22:	84 c0                	test   %al,%al
 86c2f24:	0f 85 2f ff ff ff    	jne    86c2e59 <_ZN4Area10send_groupER11PacketGuardP7CBelong+0x3b>
 86c2f2a:	c9                   	leave
 86c2f2b:	c3                   	ret

```

```c
// Area::send_group @ 0x86c2e1e

/* Area::send_group(PacketGuard&, CBelong*) */

void __thiscall Area::send_group(Area *this,PacketGuard *param_1,CBelong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [4];
  undefined4 local_20;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
    local_10 = *(CUser **)(iVar3 + 4);
    if (local_10 == (CUser *)0x0) {
LAB_086c2e80:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_10);
      if (iVar3 < 3) goto LAB_086c2e80;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_20);
    }
    else {
      cVar2 = (*(code *)**(undefined4 **)param_2)(param_2,local_10);
      if (cVar2 != '\0') {
        CUser::Send(local_10,param_1);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_20);
    }
  } while( true );
}

```

---

## send_to_all

```asm
// === 086c2d2a Area::send_to_all  [0x086c2d2a-0x86c2e1d] ===
 86c2d2a:	55                   	push   %ebp
 86c2d2b:	89 e5                	mov    %esp,%ebp
 86c2d2d:	83 ec 48             	sub    $0x48,%esp
 86c2d30:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c2d37:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2d3a:	89 04 24             	mov    %eax,(%esp)
 86c2d3d:	e8 e4 0a 01 00       	call   86d3826 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEC1Ev>
 86c2d42:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2d45:	8d 50 44             	lea    0x44(%eax),%edx
 86c2d48:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c2d4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2d4f:	89 04 24             	mov    %eax,(%esp)
 86c2d52:	e8 4f 4b a3 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86c2d57:	83 ec 04             	sub    $0x4,%esp
 86c2d5a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c2d5d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86c2d60:	e9 85 00 00 00       	jmp    86c2dea <_ZN4Area11send_to_allER11PacketGuard+0xc0>
 86c2d65:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2d68:	89 04 24             	mov    %eax,(%esp)
 86c2d6b:	e8 d4 4b a3 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 86c2d70:	8b 40 04             	mov    0x4(%eax),%eax
 86c2d73:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c2d76:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86c2d7a:	74 10                	je     86c2d8c <_ZN4Area11send_to_allER11PacketGuard+0x62>
 86c2d7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2d7f:	89 04 24             	mov    %eax,(%esp)
 86c2d82:	e8 05 76 a1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86c2d87:	83 f8 02             	cmp    $0x2,%eax
 86c2d8a:	7f 07                	jg     86c2d93 <_ZN4Area11send_to_allER11PacketGuard+0x69>
 86c2d8c:	b8 01 00 00 00       	mov    $0x1,%eax
 86c2d91:	eb 05                	jmp    86c2d98 <_ZN4Area11send_to_allER11PacketGuard+0x6e>
 86c2d93:	b8 00 00 00 00       	mov    $0x0,%eax
 86c2d98:	84 c0                	test   %al,%al
 86c2d9a:	74 1f                	je     86c2dbb <_ZN4Area11send_to_allER11PacketGuard+0x91>
 86c2d9c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c2d9f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2da6:	00 
 86c2da7:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86c2daa:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2dae:	89 04 24             	mov    %eax,(%esp)
 86c2db1:	e8 50 4b a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c2db6:	83 ec 04             	sub    $0x4,%esp
 86c2db9:	eb 2f                	jmp    86c2dea <_ZN4Area11send_to_allER11PacketGuard+0xc0>
 86c2dbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2dbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2dc2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2dc5:	89 04 24             	mov    %eax,(%esp)
 86c2dc8:	e8 ed 57 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c2dcd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86c2dd0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2dd7:	00 
 86c2dd8:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86c2ddb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2ddf:	89 04 24             	mov    %eax,(%esp)
 86c2de2:	e8 1f 4b a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c2de7:	83 ec 04             	sub    $0x4,%esp
 86c2dea:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2ded:	8d 50 44             	lea    0x44(%eax),%edx
 86c2df0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2df3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2df7:	89 04 24             	mov    %eax,(%esp)
 86c2dfa:	e8 cd 4a a3 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c2dff:	83 ec 04             	sub    $0x4,%esp
 86c2e02:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2e05:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2e09:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c2e0c:	89 04 24             	mov    %eax,(%esp)
 86c2e0f:	e8 de 4a a3 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c2e14:	84 c0                	test   %al,%al
 86c2e16:	0f 85 49 ff ff ff    	jne    86c2d65 <_ZN4Area11send_to_allER11PacketGuard+0x3b>
 86c2e1c:	c9                   	leave
 86c2e1d:	c3                   	ret

```

```c
// Area::send_to_all @ 0x86c2d2a

/* Area::send_to_all(PacketGuard&) */

void __thiscall Area::send_to_all(Area *this,PacketGuard *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [4];
  undefined4 local_20;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
    local_10 = *(CUser **)(iVar3 + 4);
    if (local_10 == (CUser *)0x0) {
LAB_086c2d8c:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_10);
      if (iVar3 < 3) goto LAB_086c2d8c;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_20);
    }
    else {
      CUser::Send(local_10,param_1);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_20);
    }
  } while( true );
}

```

---

## send_to_all_086c2f2c

```asm
// === 086c2f2c Area::send_to_all  [0x086c2f2c-0x86c305d] ===
 86c2f2c:	55                   	push   %ebp
 86c2f2d:	89 e5                	mov    %esp,%ebp
 86c2f2f:	83 ec 48             	sub    $0x48,%esp
 86c2f32:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86c2f39:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c2f3c:	89 04 24             	mov    %eax,(%esp)
 86c2f3f:	e8 e2 08 01 00       	call   86d3826 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEC1Ev>
 86c2f44:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2f47:	8d 50 44             	lea    0x44(%eax),%edx
 86c2f4a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c2f4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2f51:	89 04 24             	mov    %eax,(%esp)
 86c2f54:	e8 4d 49 a3 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86c2f59:	83 ec 04             	sub    $0x4,%esp
 86c2f5c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c2f5f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c2f62:	e9 c3 00 00 00       	jmp    86c302a <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0xfe>
 86c2f67:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c2f6a:	89 04 24             	mov    %eax,(%esp)
 86c2f6d:	e8 d2 49 a3 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 86c2f72:	8b 40 04             	mov    0x4(%eax),%eax
 86c2f75:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86c2f78:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c2f7f:	eb 20                	jmp    86c2fa1 <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0x75>
 86c2f81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c2f84:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2f88:	8b 45 10             	mov    0x10(%ebp),%eax
 86c2f8b:	89 04 24             	mov    %eax,(%esp)
 86c2f8e:	e8 43 fb c2 ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 86c2f93:	8b 00                	mov    (%eax),%eax
 86c2f95:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86c2f98:	0f 94 c0             	sete   %al
 86c2f9b:	84 c0                	test   %al,%al
 86c2f9d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86c2fa1:	8b 45 10             	mov    0x10(%ebp),%eax
 86c2fa4:	89 04 24             	mov    %eax,(%esp)
 86c2fa7:	e8 e4 eb c2 ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 86c2fac:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86c2faf:	0f 97 c0             	seta   %al
 86c2fb2:	84 c0                	test   %al,%al
 86c2fb4:	75 cb                	jne    86c2f81 <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0x55>
 86c2fb6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86c2fba:	74 10                	je     86c2fcc <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0xa0>
 86c2fbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86c2fbf:	89 04 24             	mov    %eax,(%esp)
 86c2fc2:	e8 c5 73 a1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86c2fc7:	83 f8 02             	cmp    $0x2,%eax
 86c2fca:	7f 07                	jg     86c2fd3 <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0xa7>
 86c2fcc:	b8 01 00 00 00       	mov    $0x1,%eax
 86c2fd1:	eb 05                	jmp    86c2fd8 <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0xac>
 86c2fd3:	b8 00 00 00 00       	mov    $0x0,%eax
 86c2fd8:	84 c0                	test   %al,%al
 86c2fda:	74 1f                	je     86c2ffb <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0xcf>
 86c2fdc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c2fdf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2fe6:	00 
 86c2fe7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86c2fea:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2fee:	89 04 24             	mov    %eax,(%esp)
 86c2ff1:	e8 10 49 a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c2ff6:	83 ec 04             	sub    $0x4,%esp
 86c2ff9:	eb 2f                	jmp    86c302a <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0xfe>
 86c2ffb:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c2ffe:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3002:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86c3005:	89 04 24             	mov    %eax,(%esp)
 86c3008:	e8 ad 55 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c300d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c3010:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c3017:	00 
 86c3018:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86c301b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c301f:	89 04 24             	mov    %eax,(%esp)
 86c3022:	e8 df 48 a3 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 86c3027:	83 ec 04             	sub    $0x4,%esp
 86c302a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c302d:	8d 50 44             	lea    0x44(%eax),%edx
 86c3030:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c3033:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3037:	89 04 24             	mov    %eax,(%esp)
 86c303a:	e8 8d 48 a3 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 86c303f:	83 ec 04             	sub    $0x4,%esp
 86c3042:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86c3045:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3049:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c304c:	89 04 24             	mov    %eax,(%esp)
 86c304f:	e8 9e 48 a3 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 86c3054:	84 c0                	test   %al,%al
 86c3056:	0f 85 0b ff ff ff    	jne    86c2f67 <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE+0x3b>
 86c305c:	c9                   	leave
 86c305d:	c3                   	ret

```

```c
// Area::send_to_all @ 0x86c2f2c

/* Area::send_to_all(PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&) */

void __thiscall Area::send_to_all(Area *this,PacketGuard *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30 [3];
  undefined4 local_24;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  CUser *local_14;
  uint local_10;
  
  local_14 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_24 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
    local_14 = *(CUser **)(iVar3 + 4);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<CUser*,std::allocator<CUser*>>::size
                        ((vector<CUser*,std::allocator<CUser*>> *)param_2);
      if (uVar4 <= local_10) break;
      std::vector<CUser*,std::allocator<CUser*>>::operator[]
                ((vector<CUser*,std::allocator<CUser*>> *)param_2,local_10);
      local_10 = local_10 + 1;
    }
    if (local_14 == (CUser *)0x0) {
LAB_086c2fcc:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_14);
      if (iVar3 < 3) goto LAB_086c2fcc;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_1c,(int)&local_24);
    }
    else {
      CUser::Send(local_14,param_1);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_24);
    }
  } while( true );
}

```

---

## set_area

```asm
// === 086c1d14 Area::set_area  [0x086c1d14-0x86c214b] ===
 86c1d14:	55                   	push   %ebp
 86c1d15:	89 e5                	mov    %esp,%ebp
 86c1d17:	57                   	push   %edi
 86c1d18:	56                   	push   %esi
 86c1d19:	53                   	push   %ebx
 86c1d1a:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 86c1d20:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d23:	83 c0 5c             	add    $0x5c,%eax
 86c1d26:	89 04 24             	mov    %eax,(%esp)
 86c1d29:	e8 40 4e 9d ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 86c1d2e:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d31:	8b 55 0c             	mov    0xc(%ebp),%edx
 86c1d34:	89 50 04             	mov    %edx,0x4(%eax)
 86c1d37:	8b 45 10             	mov    0x10(%ebp),%eax
 86c1d3a:	8b 10                	mov    (%eax),%edx
 86c1d3c:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d3f:	89 10                	mov    %edx,(%eax)
 86c1d41:	8b 45 10             	mov    0x10(%ebp),%eax
 86c1d44:	8b 40 08             	mov    0x8(%eax),%eax
 86c1d47:	89 c2                	mov    %eax,%edx
 86c1d49:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d4c:	89 50 68             	mov    %edx,0x68(%eax)
 86c1d4f:	8b 45 10             	mov    0x10(%ebp),%eax
 86c1d52:	0f b6 50 24          	movzbl 0x24(%eax),%edx
 86c1d56:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d59:	88 50 6c             	mov    %dl,0x6c(%eax)
 86c1d5c:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d5f:	8b 40 68             	mov    0x68(%eax),%eax
 86c1d62:	83 f8 02             	cmp    $0x2,%eax
 86c1d65:	75 18                	jne    86c1d7f <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x6b>
 86c1d67:	8b 45 10             	mov    0x10(%ebp),%eax
 86c1d6a:	8d 50 18             	lea    0x18(%eax),%edx
 86c1d6d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d70:	83 c0 24             	add    $0x24,%eax
 86c1d73:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1d77:	89 04 24             	mov    %eax,(%esp)
 86c1d7a:	e8 e5 8d 2f 00       	call   89bab64 <_Z17createLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>
 86c1d7f:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1d82:	8b 40 68             	mov    0x68(%eax),%eax
 86c1d85:	83 f8 04             	cmp    $0x4,%eax
 86c1d88:	75 20                	jne    86c1daa <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x96>
 86c1d8a:	8b 45 10             	mov    0x10(%ebp),%eax
 86c1d8d:	83 c0 18             	add    $0x18,%eax
 86c1d90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c1d97:	00 
 86c1d98:	89 04 24             	mov    %eax,(%esp)
 86c1d9b:	e8 3c c4 9c ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 86c1da0:	8b 10                	mov    (%eax),%edx
 86c1da2:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1da5:	89 50 08             	mov    %edx,0x8(%eax)
 86c1da8:	eb 0a                	jmp    86c1db4 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0xa0>
 86c1daa:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1dad:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 86c1db4:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1db7:	83 c0 60             	add    $0x60,%eax
 86c1dba:	89 04 24             	mov    %eax,(%esp)
 86c1dbd:	e8 48 16 01 00       	call   86d340a <_ZNKSt6vectorI9AssignNpcSaIS0_EE5emptyEv>
 86c1dc2:	83 f0 01             	xor    $0x1,%eax
 86c1dc5:	84 c0                	test   %al,%al
 86c1dc7:	0f 84 b0 01 00 00    	je     86c1f7d <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x269>
 86c1dcd:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86c1dd0:	89 04 24             	mov    %eax,(%esp)
 86c1dd3:	e8 b6 3e af ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 86c1dd8:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1ddb:	8d 50 60             	lea    0x60(%eax),%edx
 86c1dde:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86c1de1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1de5:	89 04 24             	mov    %eax,(%esp)
 86c1de8:	e8 61 16 01 00       	call   86d344e <_ZNSt6vectorI9AssignNpcSaIS0_EE3endEv>
 86c1ded:	83 ec 04             	sub    $0x4,%esp
 86c1df0:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1df3:	8d 50 60             	lea    0x60(%eax),%edx
 86c1df6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1df9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1dfd:	89 04 24             	mov    %eax,(%esp)
 86c1e00:	e8 6f 16 01 00       	call   86d3474 <_ZNSt6vectorI9AssignNpcSaIS0_EE5beginEv>
 86c1e05:	83 ec 04             	sub    $0x4,%esp
 86c1e08:	e9 56 01 00 00       	jmp    86c1f63 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x24f>
 86c1e0d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1e10:	89 04 24             	mov    %eax,(%esp)
 86c1e13:	e8 c2 16 01 00       	call   86d34da <_ZNK9__gnu_cxx17__normal_iteratorIP9AssignNpcSt6vectorIS1_SaIS1_EEEdeEv>
 86c1e18:	8b 40 10             	mov    0x10(%eax),%eax
 86c1e1b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86c1e1e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1e21:	89 04 24             	mov    %eax,(%esp)
 86c1e24:	e8 b1 16 01 00       	call   86d34da <_ZNK9__gnu_cxx17__normal_iteratorIP9AssignNpcSt6vectorIS1_SaIS1_EEEdeEv>
 86c1e29:	8b 40 14             	mov    0x14(%eax),%eax
 86c1e2c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86c1e2f:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1e32:	8d 50 70             	lea    0x70(%eax),%edx
 86c1e35:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86c1e38:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1e3c:	89 14 24             	mov    %edx,(%esp)
 86c1e3f:	e8 2c dc c4 ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 86c1e44:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1e47:	89 04 24             	mov    %eax,(%esp)
 86c1e4a:	e8 95 16 01 00       	call   86d34e4 <_ZNK9__gnu_cxx17__normal_iteratorIP9AssignNpcSt6vectorIS1_SaIS1_EEEptEv>
 86c1e4f:	8b 55 08             	mov    0x8(%ebp),%edx
 86c1e52:	83 c2 5c             	add    $0x5c,%edx
 86c1e55:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1e59:	89 14 24             	mov    %edx,(%esp)
 86c1e5c:	e8 c5 f2 a4 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 86c1e61:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1e64:	0f b6 80 94 00 00 00 	movzbl 0x94(%eax),%eax
 86c1e6b:	83 f0 01             	xor    $0x1,%eax
 86c1e6e:	84 c0                	test   %al,%al
 86c1e70:	74 4b                	je     86c1ebd <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x1a9>
 86c1e72:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1e75:	89 04 24             	mov    %eax,(%esp)
 86c1e78:	e8 67 16 01 00       	call   86d34e4 <_ZNK9__gnu_cxx17__normal_iteratorIP9AssignNpcSt6vectorIS1_SaIS1_EEEptEv>
 86c1e7d:	8b 00                	mov    (%eax),%eax
 86c1e7f:	89 c3                	mov    %eax,%ebx
 86c1e81:	e8 15 a3 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86c1e86:	8b 80 d0 a8 00 00    	mov    0xa8d0(%eax),%eax
 86c1e8c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86c1e90:	89 04 24             	mov    %eax,(%esp)
 86c1e93:	e8 e8 f7 eb ff       	call   8581680 <_ZNK14CNPCScriptList4findEj>
 86c1e98:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86c1e9b:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 86c1e9f:	74 1c                	je     86c1ebd <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x1a9>
 86c1ea1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c1ea8:	00 
 86c1ea9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86c1eac:	89 04 24             	mov    %eax,(%esp)
 86c1eaf:	e8 82 08 01 00       	call   86d2736 <_ZNK10CNPCScript11isExistRoleE13ENUM_NPC_ROLE>
 86c1eb4:	8b 55 08             	mov    0x8(%ebp),%edx
 86c1eb7:	88 82 94 00 00 00    	mov    %al,0x94(%edx)
 86c1ebd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1ec0:	89 04 24             	mov    %eax,(%esp)
 86c1ec3:	e8 1c 16 01 00       	call   86d34e4 <_ZNK9__gnu_cxx17__normal_iteratorIP9AssignNpcSt6vectorIS1_SaIS1_EEEptEv>
 86c1ec8:	8b 00                	mov    (%eax),%eax
 86c1eca:	83 f8 7f             	cmp    $0x7f,%eax
 86c1ecd:	0f 94 c0             	sete   %al
 86c1ed0:	84 c0                	test   %al,%al
 86c1ed2:	0f 84 80 00 00 00    	je     86c1f58 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x244>
 86c1ed8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1edb:	89 04 24             	mov    %eax,(%esp)
 86c1ede:	e8 01 16 01 00       	call   86d34e4 <_ZNK9__gnu_cxx17__normal_iteratorIP9AssignNpcSt6vectorIS1_SaIS1_EEEptEv>
 86c1ee3:	8b 08                	mov    (%eax),%ecx
 86c1ee5:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1ee8:	8b 10                	mov    (%eax),%edx
 86c1eea:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 86c1eef:	c7 44 24 14 bc 11 00 	movl   $0x11bc,0x14(%esp)
 86c1ef6:	00 
 86c1ef7:	c7 44 24 10 8a 11 00 	movl   $0x118a,0x10(%esp)
 86c1efe:	00 
 86c1eff:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86c1f03:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c1f07:	8b 55 0c             	mov    0xc(%ebp),%edx
 86c1f0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1f0e:	89 04 24             	mov    %eax,(%esp)
 86c1f11:	e8 72 08 01 00       	call   86d2788 <_ZN9CTimeGate11SetTimeGateEiiiii>
 86c1f16:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 86c1f1b:	89 c3                	mov    %eax,%ebx
 86c1f1d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1f20:	8b 00                	mov    (%eax),%eax
 86c1f22:	0f b6 d0             	movzbl %al,%edx
 86c1f25:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c1f28:	0f b6 c0             	movzbl %al,%eax
 86c1f2b:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c1f2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1f33:	8d 45 ca             	lea    -0x36(%ebp),%eax
 86c1f36:	89 04 24             	mov    %eax,(%esp)
 86c1f39:	e8 fc 96 f0 ff       	call   85cb63a <_ZN14village_object4ZoneC1Ehh>
 86c1f3e:	a1 74 f7 41 09       	mov    0x941f774,%eax
 86c1f43:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86c1f47:	0f b7 55 ca          	movzwl -0x36(%ebp),%edx
 86c1f4b:	66 89 54 24 04       	mov    %dx,0x4(%esp)
 86c1f50:	89 04 24             	mov    %eax,(%esp)
 86c1f53:	e8 00 50 ff ff       	call   86b6f58 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE>
 86c1f58:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1f5b:	89 04 24             	mov    %eax,(%esp)
 86c1f5e:	e8 61 15 01 00       	call   86d34c4 <_ZN9__gnu_cxx17__normal_iteratorIP9AssignNpcSt6vectorIS1_SaIS1_EEEppEv>
 86c1f63:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86c1f66:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1f6a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c1f6d:	89 04 24             	mov    %eax,(%esp)
 86c1f70:	e8 22 15 01 00       	call   86d3497 <_ZN9__gnu_cxxneIP9AssignNpcSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 86c1f75:	84 c0                	test   %al,%al
 86c1f77:	0f 85 90 fe ff ff    	jne    86c1e0d <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0xf9>
 86c1f7d:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1f80:	8d 90 e8 00 00 00    	lea    0xe8(%eax),%edx
 86c1f86:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1f89:	83 c0 7c             	add    $0x7c,%eax
 86c1f8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1f90:	89 04 24             	mov    %eax,(%esp)
 86c1f93:	e8 56 15 01 00       	call   86d34ee <_ZNSt6vectorI7MapAreaSaIS0_EEaSERKS2_>
 86c1f98:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86c1f9f:	eb 68                	jmp    86c2009 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x2f5>
 86c1fa1:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1fa4:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 86c1faa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86c1fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1fb1:	89 14 24             	mov    %edx,(%esp)
 86c1fb4:	e8 bd 17 01 00       	call   86d3776 <_ZNSt6vectorI8TownPathSaIS0_EEixEj>
 86c1fb9:	8d 58 20             	lea    0x20(%eax),%ebx
 86c1fbc:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1fbf:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 86c1fc5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86c1fc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1fcc:	89 14 24             	mov    %edx,(%esp)
 86c1fcf:	e8 a2 17 01 00       	call   86d3776 <_ZNSt6vectorI8TownPathSaIS0_EEixEj>
 86c1fd4:	8d 50 1c             	lea    0x1c(%eax),%edx
 86c1fd7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86c1fda:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86c1fde:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1fe2:	89 04 24             	mov    %eax,(%esp)
 86c1fe5:	e8 c8 f2 a4 ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 86c1fea:	83 ec 04             	sub    $0x4,%esp
 86c1fed:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1ff0:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 86c1ff6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86c1ff9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1ffd:	89 14 24             	mov    %edx,(%esp)
 86c2000:	e8 01 b6 a1 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 86c2005:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 86c2009:	8b 45 14             	mov    0x14(%ebp),%eax
 86c200c:	05 dc 00 00 00       	add    $0xdc,%eax
 86c2011:	89 04 24             	mov    %eax,(%esp)
 86c2014:	e8 55 f1 ce ff       	call   83b116e <_ZNKSt6vectorI8TownPathSaIS0_EE4sizeEv>
 86c2019:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 86c201c:	0f 97 c0             	seta   %al
 86c201f:	84 c0                	test   %al,%al
 86c2021:	0f 85 7a ff ff ff    	jne    86c1fa1 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x28d>
 86c2027:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 86c202e:	e8 68 a1 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86c2033:	8d 90 a0 61 00 00    	lea    0x61a0(%eax),%edx
 86c2039:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86c203c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2040:	89 04 24             	mov    %eax,(%esp)
 86c2043:	e8 48 17 01 00       	call   86d3790 <_ZNSt6vectorI19stAttackedMapInfo_tSaIS0_EE5beginEv>
 86c2048:	83 ec 04             	sub    $0x4,%esp
 86c204b:	eb 3d                	jmp    86c208a <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x376>
 86c204d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86c2050:	89 04 24             	mov    %eax,(%esp)
 86c2053:	e8 c4 17 01 00       	call   86d381c <_ZNK9__gnu_cxx17__normal_iteratorIP19stAttackedMapInfo_tSt6vectorIS1_SaIS1_EEEdeEv>
 86c2058:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86c205b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86c205e:	8b 10                	mov    (%eax),%edx
 86c2060:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2063:	8b 40 04             	mov    0x4(%eax),%eax
 86c2066:	39 c2                	cmp    %eax,%edx
 86c2068:	75 15                	jne    86c207f <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x36b>
 86c206a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86c206d:	8b 50 04             	mov    0x4(%eax),%edx
 86c2070:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2073:	8b 00                	mov    (%eax),%eax
 86c2075:	39 c2                	cmp    %eax,%edx
 86c2077:	75 06                	jne    86c207f <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x36b>
 86c2079:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86c207c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86c207f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86c2082:	89 04 24             	mov    %eax,(%esp)
 86c2085:	e8 7c 17 01 00       	call   86d3806 <_ZN9__gnu_cxx17__normal_iteratorIP19stAttackedMapInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 86c208a:	e8 0c a1 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86c208f:	8d 90 a0 61 00 00    	lea    0x61a0(%eax),%edx
 86c2095:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c2098:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c209c:	89 04 24             	mov    %eax,(%esp)
 86c209f:	e8 10 17 01 00       	call   86d37b4 <_ZNSt6vectorI19stAttackedMapInfo_tSaIS0_EE3endEv>
 86c20a4:	83 ec 04             	sub    $0x4,%esp
 86c20a7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86c20aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c20ae:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86c20b1:	89 04 24             	mov    %eax,(%esp)
 86c20b4:	e8 21 17 01 00       	call   86d37da <_ZN9__gnu_cxxneIP19stAttackedMapInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 86c20b9:	84 c0                	test   %al,%al
 86c20bb:	75 90                	jne    86c204d <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x339>
 86c20bd:	8b 45 14             	mov    0x14(%ebp),%eax
 86c20c0:	05 18 03 00 00       	add    $0x318,%eax
 86c20c5:	89 04 24             	mov    %eax,(%esp)
 86c20c8:	e8 9f 2f ff ff       	call   86b506c <_ZNKSt6vectorI17STAttackedMonsterSaIS0_EE5emptyEv>
 86c20cd:	83 f0 01             	xor    $0x1,%eax
 86c20d0:	84 c0                	test   %al,%al
 86c20d2:	74 0d                	je     86c20e1 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x3cd>
 86c20d4:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 86c20d8:	74 07                	je     86c20e1 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x3cd>
 86c20da:	b8 01 00 00 00       	mov    $0x1,%eax
 86c20df:	eb 05                	jmp    86c20e6 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x3d2>
 86c20e1:	b8 00 00 00 00       	mov    $0x0,%eax
 86c20e6:	84 c0                	test   %al,%al
 86c20e8:	74 57                	je     86c2141 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript+0x42d>
 86c20ea:	8b 45 08             	mov    0x8(%ebp),%eax
 86c20ed:	83 c0 7c             	add    $0x7c,%eax
 86c20f0:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 86c20f3:	8b 45 14             	mov    0x14(%ebp),%eax
 86c20f6:	8d b8 18 03 00 00    	lea    0x318(%eax),%edi
 86c20fc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86c20ff:	8b 70 0c             	mov    0xc(%eax),%esi
 86c2102:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86c2105:	8b 58 08             	mov    0x8(%eax),%ebx
 86c2108:	8b 45 08             	mov    0x8(%ebp),%eax
 86c210b:	8b 08                	mov    (%eax),%ecx
 86c210d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c2110:	8b 50 04             	mov    0x4(%eax),%edx
 86c2113:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 86c2118:	89 45 94             	mov    %eax,-0x6c(%ebp)
 86c211b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 86c211e:	89 44 24 18          	mov    %eax,0x18(%esp)
 86c2122:	89 7c 24 14          	mov    %edi,0x14(%esp)
 86c2126:	89 74 24 10          	mov    %esi,0x10(%esp)
 86c212a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86c212e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86c2132:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2136:	8b 45 94             	mov    -0x6c(%ebp),%eax
 86c2139:	89 04 24             	mov    %eax,(%esp)
 86c213c:	e8 03 20 ff ff       	call   86b4144 <_ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE>
 86c2141:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86c2144:	83 c4 00             	add    $0x0,%esp
 86c2147:	5b                   	pop    %ebx
 86c2148:	5e                   	pop    %esi
 86c2149:	5f                   	pop    %edi
 86c214a:	5d                   	pop    %ebp
 86c214b:	c3                   	ret

```

```c
// Area::set_area @ 0x86c1d14

/* Area::set_area(int, TownAreaScript&, STMapScript&) */

void __thiscall Area::set_area(Area *this,int param_1,TownAreaScript *param_2,STMapScript *param_3)

{
  CTimeGate *pCVar1;
  char cVar2;
  Area AVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined2 uVar9;
  int iVar7;
  uint uVar8;
  __normal_iterator<stAttackedMapInfo_t*,std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>>
  local_50 [4];
  __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>> local_4c [4];
  __normal_iterator local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3a;
  int local_38 [2];
  __normal_iterator local_30 [4];
  int *local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x5c));
  *(int *)(this + 4) = param_1;
  *(undefined4 *)this = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_2 + 8);
  this[0x6c] = *(Area *)(param_2 + 0x24);
  if (*(int *)(this + 0x68) == 2) {
    createLotteryInfo((LotteryInfo *)(this + 0x24),(vector *)(param_2 + 0x18));
  }
  if (*(int *)(this + 0x68) == 4) {
    puVar5 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(param_2 + 0x18),0);
    *(undefined4 *)(this + 8) = *puVar5;
  }
  else {
    *(undefined4 *)(this + 8) = 0xffffffff;
  }
  cVar2 = std::vector<AssignNpc,std::allocator<AssignNpc>>::empty();
  if (cVar2 != '\x01') {
    std::pair<int,int>::pair((pair<int,int> *)&local_44);
    std::vector<AssignNpc,std::allocator<AssignNpc>>::end();
    std::vector<AssignNpc,std::allocator<AssignNpc>>::begin();
    while( true ) {
      bVar4 = __gnu_cxx::operator!=(local_4c,local_48);
      if (!bVar4) break;
      iVar7 = __gnu_cxx::
              __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
              operator*(local_4c);
      local_44 = *(undefined4 *)(iVar7 + 0x10);
      iVar7 = __gnu_cxx::
              __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
              operator*(local_4c);
      local_40 = *(undefined4 *)(iVar7 + 0x14);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x70),
                 (pair *)&local_44);
      piVar6 = (int *)__gnu_cxx::
                      __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>
                      ::operator->(local_4c);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x5c),piVar6);
      if (this[0x94] != (Area)0x1) {
        __gnu_cxx::__normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
        operator->(local_4c);
        iVar7 = G_CDataManager();
        local_28 = CNPCScriptList::find(*(uint *)(iVar7 + 0xa8d0));
        if (local_28 != 0) {
          AVar3 = (Area)CNPCScript::isExistRole(local_28,0);
          this[0x94] = AVar3;
        }
      }
      piVar6 = (int *)__gnu_cxx::
                      __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>
                      ::operator->(local_4c);
      if (*piVar6 == 0x7f) {
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>
                        ::operator->(local_4c);
        CTimeGate::SetTimeGate(GlobalData::s_timeGate_,param_1,*(int *)this,*piVar6,0x118a,0x11bc);
        pCVar1 = GlobalData::s_timeGate_;
        uVar9 = 0;
        village_object::Zone::Zone((Zone *)&local_3a,(uchar)param_1,(uchar)*(undefined4 *)this);
        village_object::CVillageObjectMgr::register_object
                  (GlobalData::s_villageObjectMgr,CONCAT22(uVar9,local_3a),pCVar1);
      }
      __gnu_cxx::__normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
      operator++(local_4c);
    }
  }
  std::vector<MapArea,std::allocator<MapArea>>::operator=
            ((vector<MapArea,std::allocator<MapArea>> *)(this + 0x7c),(vector *)(param_3 + 0xe8));
  local_24 = 0;
  while( true ) {
    uVar8 = std::vector<TownPath,std::allocator<TownPath>>::size
                      ((vector<TownPath,std::allocator<TownPath>> *)(param_3 + 0xdc));
    if (uVar8 <= local_24) break;
    std::vector<TownPath,std::allocator<TownPath>>::operator[]
              ((vector<TownPath,std::allocator<TownPath>> *)(param_3 + 0xdc),local_24);
    iVar7 = std::vector<TownPath,std::allocator<TownPath>>::operator[]
                      ((vector<TownPath,std::allocator<TownPath>> *)(param_3 + 0xdc),local_24);
    std::make_pair<int&,int&>(local_38,(int *)(iVar7 + 0x1c));
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x88),
               (pair *)local_38);
    local_24 = local_24 + 1;
  }
  local_2c = (int *)0x0;
  G_CDataManager();
  std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>::begin();
  while( true ) {
    G_CDataManager();
    std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>::end();
    bVar4 = __gnu_cxx::operator!=(local_50,local_30);
    if (!bVar4) break;
    local_20 = (int *)__gnu_cxx::
                      __normal_iterator<stAttackedMapInfo_t*,std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>>
                      ::operator*(local_50);
    if ((*local_20 == *(int *)(this + 4)) && (local_20[1] == *(int *)this)) {
      local_2c = local_20;
    }
    __gnu_cxx::
    __normal_iterator<stAttackedMapInfo_t*,std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>>
    ::operator++(local_50);
  }
  cVar2 = std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::empty();
  if ((cVar2 == '\x01') || (local_2c == (int *)0x0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    village_attacked::CVillageMonsterMgr::InsertVillageMonster
              (GlobalData::s_villageMonsterMgr,*(int *)(this + 4),*(int *)this,local_2c[2],
               local_2c[3],(vector *)(param_3 + 0x318),(vector *)(this + 0x7c));
  }
  return;
}

```

---

## take_fish

```asm
// === 086c21e2 Area::take_fish  [0x086c21e2-0x86c22f1] ===
 86c21e2:	55                   	push   %ebp
 86c21e3:	89 e5                	mov    %esp,%ebp
 86c21e5:	83 ec 58             	sub    $0x58,%esp
 86c21e8:	8b 45 08             	mov    0x8(%ebp),%eax
 86c21eb:	8b 40 68             	mov    0x68(%eax),%eax
 86c21ee:	83 f8 02             	cmp    $0x2,%eax
 86c21f1:	0f 85 f4 00 00 00    	jne    86c22eb <_ZN4Area9take_fishEv+0x109>
 86c21f7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86c21fe:	c7 04 24 a0 86 01 00 	movl   $0x186a0,(%esp)
 86c2205:	e8 7d f9 fe ff       	call   86b1b87 <_Z12get_rand_inti>
 86c220a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86c220d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c2214:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c2217:	89 04 24             	mov    %eax,(%esp)
 86c221a:	e8 ad 54 e5 ff       	call   85176cc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEC1Ev>
 86c221f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c2222:	89 04 24             	mov    %eax,(%esp)
 86c2225:	e8 64 3a af ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 86c222a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c222d:	8d 50 28             	lea    0x28(%eax),%edx
 86c2230:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86c2233:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c2237:	89 04 24             	mov    %eax,(%esp)
 86c223a:	e8 73 b3 a1 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 86c223f:	83 ec 04             	sub    $0x4,%esp
 86c2242:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86c2245:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86c2248:	eb 5b                	jmp    86c22a5 <_ZN4Area9take_fishEv+0xc3>
 86c224a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c224d:	89 04 24             	mov    %eax,(%esp)
 86c2250:	e8 a7 b3 a1 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 86c2255:	8b 50 04             	mov    0x4(%eax),%edx
 86c2258:	8b 00                	mov    (%eax),%eax
 86c225a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c225d:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 86c2260:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86c2263:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c2267:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c226a:	89 04 24             	mov    %eax,(%esp)
 86c226d:	e8 aa bc a1 ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 86c2272:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c2275:	01 45 f4             	add    %eax,-0xc(%ebp)
 86c2278:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c227b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86c227e:	7e 08                	jle    86c2288 <_ZN4Area9take_fishEv+0xa6>
 86c2280:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86c2283:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86c2286:	eb 4f                	jmp    86c22d7 <_ZN4Area9take_fishEv+0xf5>
 86c2288:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c228b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c2292:	00 
 86c2293:	8d 55 d8             	lea    -0x28(%ebp),%edx
 86c2296:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c229a:	89 04 24             	mov    %eax,(%esp)
 86c229d:	e8 fa 6a cc ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 86c22a2:	83 ec 04             	sub    $0x4,%esp
 86c22a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86c22a8:	8d 50 28             	lea    0x28(%eax),%edx
 86c22ab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c22ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c22b2:	89 04 24             	mov    %eax,(%esp)
 86c22b5:	e8 1c b3 a1 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 86c22ba:	83 ec 04             	sub    $0x4,%esp
 86c22bd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c22c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c22c4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c22c7:	89 04 24             	mov    %eax,(%esp)
 86c22ca:	e8 0f ef a4 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 86c22cf:	84 c0                	test   %al,%al
 86c22d1:	0f 85 73 ff ff ff    	jne    86c224a <_ZN4Area9take_fishEv+0x68>
 86c22d7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86c22db:	75 09                	jne    86c22e6 <_ZN4Area9take_fishEv+0x104>
 86c22dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86c22e0:	8b 40 24             	mov    0x24(%eax),%eax
 86c22e3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86c22e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86c22e9:	eb 05                	jmp    86c22f0 <_ZN4Area9take_fishEv+0x10e>
 86c22eb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86c22f0:	c9                   	leave
 86c22f1:	c3                   	ret

```

```c
// Area::take_fish @ 0x86c21e2

/* Area::take_fish() */

int __thiscall Area::take_fish(Area *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int local_34;
  int local_30;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x68) == 2) {
    local_18 = 0;
    local_14 = get_rand_int(100000);
    local_10 = 0;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_2c);
    std::pair<int,int>::pair((pair<int,int> *)&local_34);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_2c,local_28);
      if (!bVar1) break;
      puVar2 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_2c);
      local_20 = puVar2[1];
      local_24 = *puVar2;
      std::pair<int,int>::operator=((pair<int,int> *)&local_34,(pair *)&local_24);
      local_10 = local_10 + local_30;
      if (local_14 < local_10) {
        local_18 = local_34;
        break;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_1c,(int)local_2c);
    }
    if (local_18 == 0) {
      local_18 = *(int *)(this + 0x24);
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}

```

