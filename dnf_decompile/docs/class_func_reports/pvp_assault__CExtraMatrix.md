# pvp_assault__CExtraMatrix

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AddPoint

```asm
// === 082e5962 pvp_assault::CExtraMatrix::AddPoint  [0x082e5962-0x82e597b] ===
 82e5962:	55                   	push   %ebp
 82e5963:	89 e5                	mov    %esp,%ebp
 82e5965:	83 ec 18             	sub    $0x18,%esp
 82e5968:	8b 45 08             	mov    0x8(%ebp),%eax
 82e596b:	8d 55 0c             	lea    0xc(%ebp),%edx
 82e596e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5972:	89 04 24             	mov    %eax,(%esp)
 82e5975:	e8 42 bd 00 00       	call   82f16bc <_ZNSt6vectorIN11pvp_assault7Point2dESaIS1_EE9push_backERKS1_>
 82e597a:	c9                   	leave
 82e597b:	c3                   	ret

```

```c
// pvp_assault::CExtraMatrix::AddPoint @ 0x82e5962

/* pvp_assault::CExtraMatrix::AddPoint(pvp_assault::Point2d) */

void pvp_assault::CExtraMatrix::AddPoint
               (vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *param_1)

{
  std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::push_back
            (param_1,(Point2d *)&stack0x00000008);
  return;
}

```

---

## CheckPoint

```asm
// === 082e5b4e pvp_assault::CExtraMatrix::CheckPoint  [0x082e5b4e-0x82e5c09] ===
 82e5b4e:	55                   	push   %ebp
 82e5b4f:	89 e5                	mov    %esp,%ebp
 82e5b51:	57                   	push   %edi
 82e5b52:	56                   	push   %esi
 82e5b53:	53                   	push   %ebx
 82e5b54:	83 ec 3c             	sub    $0x3c,%esp
 82e5b57:	8b 55 08             	mov    0x8(%ebp),%edx
 82e5b5a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e5b5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5b61:	89 04 24             	mov    %eax,(%esp)
 82e5b64:	e8 c7 bb 00 00       	call   82f1730 <_ZNSt6vectorIN11pvp_assault7Point2dESaIS1_EE5beginEv>
 82e5b69:	83 ec 04             	sub    $0x4,%esp
 82e5b6c:	eb 5d                	jmp    82e5bcb <_ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0x7d>
 82e5b6e:	8b 45 10             	mov    0x10(%ebp),%eax
 82e5b71:	8d 78 04             	lea    0x4(%eax),%edi
 82e5b74:	8b 75 10             	mov    0x10(%ebp),%esi
 82e5b77:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e5b7a:	89 04 24             	mov    %eax,(%esp)
 82e5b7d:	e8 3a bc 00 00       	call   82f17bc <_ZNK9__gnu_cxx17__normal_iteratorIPN11pvp_assault7Point2dESt6vectorIS2_SaIS2_EEEdeEv>
 82e5b82:	8b 58 04             	mov    0x4(%eax),%ebx
 82e5b85:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e5b88:	89 04 24             	mov    %eax,(%esp)
 82e5b8b:	e8 2c bc 00 00       	call   82f17bc <_ZNK9__gnu_cxx17__normal_iteratorIPN11pvp_assault7Point2dESt6vectorIS2_SaIS2_EEEdeEv>
 82e5b90:	8b 00                	mov    (%eax),%eax
 82e5b92:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82e5b99:	00 
 82e5b9a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82e5b9e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82e5ba2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e5ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5baa:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5bad:	89 04 24             	mov    %eax,(%esp)
 82e5bb0:	e8 56 fe ff ff       	call   82e5a0b <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i>
 82e5bb5:	84 c0                	test   %al,%al
 82e5bb7:	74 07                	je     82e5bc0 <_ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0x72>
 82e5bb9:	b8 01 00 00 00       	mov    $0x1,%eax
 82e5bbe:	eb 3f                	jmp    82e5bff <_ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0xb1>
 82e5bc0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e5bc3:	89 04 24             	mov    %eax,(%esp)
 82e5bc6:	e8 db bb 00 00       	call   82f17a6 <_ZN9__gnu_cxx17__normal_iteratorIPN11pvp_assault7Point2dESt6vectorIS2_SaIS2_EEEppEv>
 82e5bcb:	8b 55 08             	mov    0x8(%ebp),%edx
 82e5bce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e5bd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5bd5:	89 04 24             	mov    %eax,(%esp)
 82e5bd8:	e8 77 bb 00 00       	call   82f1754 <_ZNSt6vectorIN11pvp_assault7Point2dESaIS1_EE3endEv>
 82e5bdd:	83 ec 04             	sub    $0x4,%esp
 82e5be0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e5be3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5be7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e5bea:	89 04 24             	mov    %eax,(%esp)
 82e5bed:	e8 88 bb 00 00       	call   82f177a <_ZN9__gnu_cxxneIPN11pvp_assault7Point2dESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 82e5bf2:	84 c0                	test   %al,%al
 82e5bf4:	0f 85 74 ff ff ff    	jne    82e5b6e <_ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0x20>
 82e5bfa:	b8 00 00 00 00       	mov    $0x0,%eax
 82e5bff:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82e5c02:	83 c4 00             	add    $0x0,%esp
 82e5c05:	5b                   	pop    %ebx
 82e5c06:	5e                   	pop    %esi
 82e5c07:	5f                   	pop    %edi
 82e5c08:	5d                   	pop    %ebp
 82e5c09:	c3                   	ret

```

```c
// pvp_assault::CExtraMatrix::CheckPoint @ 0x82e5b4e

/* pvp_assault::CExtraMatrix::CheckPoint(std::vector<MapArea, std::allocator<MapArea> >*,
   pvp_assault::Point2d&) */

undefined4 __thiscall
pvp_assault::CExtraMatrix::CheckPoint(CExtraMatrix *this,vector *param_1,Point2d *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
  local_24 [4];
  __normal_iterator local_20 [16];
  
  std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::begin();
  while( true ) {
    std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::end();
    bVar2 = __gnu_cxx::operator!=(local_24,local_20);
    if (!bVar2) {
      return 0;
    }
    iVar3 = __gnu_cxx::
            __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
            ::operator*(local_24);
    iVar3 = *(int *)(iVar3 + 4);
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
                    ::operator*(local_24);
    cVar1 = IsIncludeVirtualMoveAreas(param_1,*piVar4,iVar3,(int *)param_2,(int *)(param_2 + 4),0);
    if (cVar1 != '\0') break;
    __gnu_cxx::
    __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
    ::operator++(local_24);
  }
  return 1;
}

```

---

## MovePoint

```asm
// === 082e597c pvp_assault::CExtraMatrix::MovePoint  [0x082e597c-0x82e59f0] ===
 82e597c:	55                   	push   %ebp
 82e597d:	89 e5                	mov    %esp,%ebp
 82e597f:	83 ec 28             	sub    $0x28,%esp
 82e5982:	8b 55 08             	mov    0x8(%ebp),%edx
 82e5985:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e5988:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e598c:	89 04 24             	mov    %eax,(%esp)
 82e598f:	e8 9c bd 00 00       	call   82f1730 <_ZNSt6vectorIN11pvp_assault7Point2dESaIS1_EE5beginEv>
 82e5994:	83 ec 04             	sub    $0x4,%esp
 82e5997:	eb 2b                	jmp    82e59c4 <_ZN11pvp_assault12CExtraMatrix9MovePointERKNS_7Point2dE+0x48>
 82e5999:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e599c:	89 04 24             	mov    %eax,(%esp)
 82e599f:	e8 18 be 00 00       	call   82f17bc <_ZNK9__gnu_cxx17__normal_iteratorIPN11pvp_assault7Point2dESt6vectorIS2_SaIS2_EEEdeEv>
 82e59a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e59a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e59aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e59ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e59b1:	89 04 24             	mov    %eax,(%esp)
 82e59b4:	e8 07 ab 00 00       	call   82f04c0 <_ZN11pvp_assault7Point2dpLERKS0_>
 82e59b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e59bc:	89 04 24             	mov    %eax,(%esp)
 82e59bf:	e8 e2 bd 00 00       	call   82f17a6 <_ZN9__gnu_cxx17__normal_iteratorIPN11pvp_assault7Point2dESt6vectorIS2_SaIS2_EEEppEv>
 82e59c4:	8b 55 08             	mov    0x8(%ebp),%edx
 82e59c7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e59ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e59ce:	89 04 24             	mov    %eax,(%esp)
 82e59d1:	e8 7e bd 00 00       	call   82f1754 <_ZNSt6vectorIN11pvp_assault7Point2dESaIS1_EE3endEv>
 82e59d6:	83 ec 04             	sub    $0x4,%esp
 82e59d9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e59dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e59e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e59e3:	89 04 24             	mov    %eax,(%esp)
 82e59e6:	e8 8f bd 00 00       	call   82f177a <_ZN9__gnu_cxxneIPN11pvp_assault7Point2dESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 82e59eb:	84 c0                	test   %al,%al
 82e59ed:	75 aa                	jne    82e5999 <_ZN11pvp_assault12CExtraMatrix9MovePointERKNS_7Point2dE+0x1d>
 82e59ef:	c9                   	leave
 82e59f0:	c3                   	ret

```

```c
// pvp_assault::CExtraMatrix::MovePoint @ 0x82e597c

/* pvp_assault::CExtraMatrix::MovePoint(pvp_assault::Point2d const&) */

void __thiscall pvp_assault::CExtraMatrix::MovePoint(CExtraMatrix *this,Point2d *param_1)

{
  bool bVar1;
  __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  Point2d *local_10;
  
  std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::begin();
  while( true ) {
    std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    local_10 = (Point2d *)
               __gnu_cxx::
               __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
               ::operator*(local_18);
    Point2d::operator+=(local_10,param_1);
    __gnu_cxx::
    __normal_iterator<pvp_assault::Point2d*,std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>>
    ::operator++(local_18);
  }
  return;
}

```

---

## MoveUser

```asm
// === 082e5c0a pvp_assault::CExtraMatrix::MoveUser  [0x082e5c0a-0x82e5c9d] ===
 82e5c0a:	55                   	push   %ebp
 82e5c0b:	89 e5                	mov    %esp,%ebp
 82e5c0d:	53                   	push   %ebx
 82e5c0e:	83 ec 14             	sub    $0x14,%esp
 82e5c11:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5c14:	8b 40 04             	mov    0x4(%eax),%eax
 82e5c17:	85 c0                	test   %eax,%eax
 82e5c19:	78 17                	js     82e5c32 <_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE+0x28>
 82e5c1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5c1e:	8b 40 04             	mov    0x4(%eax),%eax
 82e5c21:	89 c3                	mov    %eax,%ebx
 82e5c23:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5c26:	89 04 24             	mov    %eax,(%esp)
 82e5c29:	e8 e6 bb 00 00       	call   82f1814 <_ZNKSt6vectorIN11pvp_assault7Point2dESaIS1_EE4sizeEv>
 82e5c2e:	39 c3                	cmp    %eax,%ebx
 82e5c30:	72 07                	jb     82e5c39 <_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE+0x2f>
 82e5c32:	b8 01 00 00 00       	mov    $0x1,%eax
 82e5c37:	eb 05                	jmp    82e5c3e <_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE+0x34>
 82e5c39:	b8 00 00 00 00       	mov    $0x0,%eax
 82e5c3e:	84 c0                	test   %al,%al
 82e5c40:	74 07                	je     82e5c49 <_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE+0x3f>
 82e5c42:	b8 00 00 00 00       	mov    $0x0,%eax
 82e5c47:	eb 4f                	jmp    82e5c98 <_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE+0x8e>
 82e5c49:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5c4c:	8b 40 04             	mov    0x4(%eax),%eax
 82e5c4f:	89 c2                	mov    %eax,%edx
 82e5c51:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5c54:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5c58:	89 04 24             	mov    %eax,(%esp)
 82e5c5b:	e8 d0 bb 00 00       	call   82f1830 <_ZNSt6vectorIN11pvp_assault7Point2dESaIS1_EE2atEj>
 82e5c60:	8b 10                	mov    (%eax),%edx
 82e5c62:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5c65:	89 50 14             	mov    %edx,0x14(%eax)
 82e5c68:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5c6b:	8b 40 04             	mov    0x4(%eax),%eax
 82e5c6e:	89 c2                	mov    %eax,%edx
 82e5c70:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5c73:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5c77:	89 04 24             	mov    %eax,(%esp)
 82e5c7a:	e8 b1 bb 00 00       	call   82f1830 <_ZNSt6vectorIN11pvp_assault7Point2dESaIS1_EE2atEj>
 82e5c7f:	8b 50 04             	mov    0x4(%eax),%edx
 82e5c82:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5c85:	89 50 18             	mov    %edx,0x18(%eax)
 82e5c88:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5c8b:	89 04 24             	mov    %eax,(%esp)
 82e5c8e:	e8 e9 f9 ff ff       	call   82e567c <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv>
 82e5c93:	b8 01 00 00 00       	mov    $0x1,%eax
 82e5c98:	83 c4 14             	add    $0x14,%esp
 82e5c9b:	5b                   	pop    %ebx
 82e5c9c:	5d                   	pop    %ebp
 82e5c9d:	c3                   	ret

```

```c
// pvp_assault::CExtraMatrix::MoveUser @ 0x82e5c0a

/* pvp_assault::CExtraMatrix::MoveUser(pvp_assault::CForcedMoveCharacter*) */

bool __thiscall
pvp_assault::CExtraMatrix::MoveUser(CExtraMatrix *this,CForcedMoveCharacter *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 4) < 0) ||
     (uVar1 = *(uint *)(param_1 + 4),
     uVar3 = std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::size
                       ((vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *)this),
     uVar3 <= uVar1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    puVar4 = (undefined4 *)
             std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::at
                       ((vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *)this,
                        *(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x14) = *puVar4;
    iVar5 = std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::at
                      ((vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *)this,
                       *(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar5 + 4);
    CForcedMoveCharacter::ForcedMove(param_1);
  }
  return !bVar2;
}

```

