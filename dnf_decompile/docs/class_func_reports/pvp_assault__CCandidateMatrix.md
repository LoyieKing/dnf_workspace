# pvp_assault__CCandidateMatrix

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## ArrangeCandidatePoint

```asm
// === 082e5fee pvp_assault::CCandidateMatrix::ArrangeCandidatePoint  [0x082e5fee-0x82e6031] ===
 82e5fee:	55                   	push   %ebp
 82e5fef:	89 e5                	mov    %esp,%ebp
 82e5ff1:	83 ec 28             	sub    $0x28,%esp
 82e5ff4:	8b 55 08             	mov    0x8(%ebp),%edx
 82e5ff7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e5ffa:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5ffe:	89 04 24             	mov    %eax,(%esp)
 82e6001:	e8 7a b8 00 00       	call   82f1880 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EE3endEv>
 82e6006:	83 ec 04             	sub    $0x4,%esp
 82e6009:	8b 55 08             	mov    0x8(%ebp),%edx
 82e600c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82e600f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e6013:	89 04 24             	mov    %eax,(%esp)
 82e6016:	e8 41 b8 00 00       	call   82f185c <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EE5beginEv>
 82e601b:	83 ec 04             	sub    $0x4,%esp
 82e601e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e6021:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6025:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6028:	89 04 24             	mov    %eax,(%esp)
 82e602b:	e8 a7 b9 00 00       	call   82f19d7 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPN11pvp_assault14CandidatePointESt6vectorIS3_SaIS3_EEEEEvT_S9_>
 82e6030:	c9                   	leave
 82e6031:	c3                   	ret

```

```c
// pvp_assault::CCandidateMatrix::ArrangeCandidatePoint @ 0x82e5fee

/* pvp_assault::CCandidateMatrix::ArrangeCandidatePoint() */

void pvp_assault::CCandidateMatrix::ArrangeCandidatePoint(void)

{
  undefined4 local_14;
  undefined4 local_10;
  
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::end();
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::begin();
  std::
  sort<__gnu_cxx::__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>>
            (local_10,local_14);
  return;
}

```

---

## At

```asm
// === 082e590c pvp_assault::CCandidateMatrix::At  [0x082e590c-0x82e5961] ===
 82e590c:	55                   	push   %ebp
 82e590d:	89 e5                	mov    %esp,%ebp
 82e590f:	83 ec 18             	sub    $0x18,%esp
 82e5912:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5915:	89 04 24             	mov    %eax,(%esp)
 82e5918:	e8 63 bd 00 00       	call   82f1680 <_ZNKSt6vectorIN11pvp_assault14CandidatePointESaIS1_EE4sizeEv>
 82e591d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e5920:	0f 97 c0             	seta   %al
 82e5923:	84 c0                	test   %al,%al
 82e5925:	74 34                	je     82e595b <_ZN11pvp_assault16CCandidateMatrix2AtEjRiS1_+0x4f>
 82e5927:	8b 45 08             	mov    0x8(%ebp),%eax
 82e592a:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e592d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5931:	89 04 24             	mov    %eax,(%esp)
 82e5934:	e8 69 bd 00 00       	call   82f16a2 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EEixEj>
 82e5939:	8b 50 04             	mov    0x4(%eax),%edx
 82e593c:	8b 45 10             	mov    0x10(%ebp),%eax
 82e593f:	89 10                	mov    %edx,(%eax)
 82e5941:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5944:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e5947:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e594b:	89 04 24             	mov    %eax,(%esp)
 82e594e:	e8 4f bd 00 00       	call   82f16a2 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EEixEj>
 82e5953:	8b 50 08             	mov    0x8(%eax),%edx
 82e5956:	8b 45 14             	mov    0x14(%ebp),%eax
 82e5959:	89 10                	mov    %edx,(%eax)
 82e595b:	b8 00 00 00 00       	mov    $0x0,%eax
 82e5960:	c9                   	leave
 82e5961:	c3                   	ret

```

```c
// pvp_assault::CCandidateMatrix::At @ 0x82e590c

/* pvp_assault::CCandidateMatrix::At(unsigned int, int&, int&) */

undefined4 __thiscall
pvp_assault::CCandidateMatrix::At(CCandidateMatrix *this,uint param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::size
                    ((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                      *)this);
  if (param_1 < uVar1) {
    iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
            operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                        *)this,param_1);
    *param_2 = *(int *)(iVar2 + 4);
    iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
            operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                        *)this,param_1);
    *param_3 = *(int *)(iVar2 + 8);
  }
  return 0;
}

```

---

## MakeCandidatePoint

```asm
// === 082e5ca8 pvp_assault::CCandidateMatrix::MakeCandidatePoint  [0x082e5ca8-0x82e5ed0] ===
 82e5ca8:	55                   	push   %ebp
 82e5ca9:	89 e5                	mov    %esp,%ebp
 82e5cab:	53                   	push   %ebx
 82e5cac:	83 ec 54             	sub    $0x54,%esp
 82e5caf:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e5cb6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e5cbd:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 82e5cc4:	00 
 82e5cc5:	8b 45 10             	mov    0x10(%ebp),%eax
 82e5cc8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82e5ccc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5ccf:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e5cd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5cd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5cda:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5cdd:	89 04 24             	mov    %eax,(%esp)
 82e5ce0:	e8 af fb ff ff       	call   82e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>
 82e5ce5:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 82e5cec:	e9 a7 00 00 00       	jmp    82e5d98 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_+0xf0>
 82e5cf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5cf4:	8b 48 04             	mov    0x4(%eax),%ecx
 82e5cf7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e5cfa:	89 d0                	mov    %edx,%eax
 82e5cfc:	c1 e0 02             	shl    $0x2,%eax
 82e5cff:	01 d0                	add    %edx,%eax
 82e5d01:	01 c0                	add    %eax,%eax
 82e5d03:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 82e5d06:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5d09:	8b 00                	mov    (%eax),%eax
 82e5d0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e5d0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5d13:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82e5d16:	89 04 24             	mov    %eax,(%esp)
 82e5d19:	e8 52 a7 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e5d1e:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 82e5d25:	00 
 82e5d26:	8b 45 10             	mov    0x10(%ebp),%eax
 82e5d29:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82e5d2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5d30:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e5d34:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82e5d37:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5d3b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5d3e:	89 04 24             	mov    %eax,(%esp)
 82e5d41:	e8 4e fb ff ff       	call   82e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>
 82e5d46:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5d49:	8b 50 04             	mov    0x4(%eax),%edx
 82e5d4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e5d4f:	6b c0 f6             	imul   $0xfffffff6,%eax,%eax
 82e5d52:	01 c2                	add    %eax,%edx
 82e5d54:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5d57:	8b 00                	mov    (%eax),%eax
 82e5d59:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e5d5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5d61:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82e5d64:	89 04 24             	mov    %eax,(%esp)
 82e5d67:	e8 04 a7 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e5d6c:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 82e5d73:	00 
 82e5d74:	8b 45 10             	mov    0x10(%ebp),%eax
 82e5d77:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82e5d7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5d7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e5d82:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82e5d85:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5d89:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5d8c:	89 04 24             	mov    %eax,(%esp)
 82e5d8f:	e8 00 fb ff ff       	call   82e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>
 82e5d94:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e5d98:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e5d9c:	0f 9e c0             	setle  %al
 82e5d9f:	84 c0                	test   %al,%al
 82e5da1:	0f 85 4a ff ff ff    	jne    82e5cf1 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_+0x49>
 82e5da7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e5dae:	e9 05 01 00 00       	jmp    82e5eb8 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_+0x210>
 82e5db3:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 82e5dba:	e9 e6 00 00 00       	jmp    82e5ea5 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_+0x1fd>
 82e5dbf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e5dc2:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5dc5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5dc9:	89 04 24             	mov    %eax,(%esp)
 82e5dcc:	e8 d1 b8 00 00       	call   82f16a2 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EEixEj>
 82e5dd1:	8b 58 08             	mov    0x8(%eax),%ebx
 82e5dd4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e5dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5dda:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5dde:	89 04 24             	mov    %eax,(%esp)
 82e5de1:	e8 bc b8 00 00       	call   82f16a2 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EEixEj>
 82e5de6:	8b 48 04             	mov    0x4(%eax),%ecx
 82e5de9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e5dec:	89 d0                	mov    %edx,%eax
 82e5dee:	c1 e0 02             	shl    $0x2,%eax
 82e5df1:	01 d0                	add    %edx,%eax
 82e5df3:	01 c0                	add    %eax,%eax
 82e5df5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82e5df8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e5dfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5e00:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e5e03:	89 04 24             	mov    %eax,(%esp)
 82e5e06:	e8 65 a6 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e5e0b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82e5e12:	00 
 82e5e13:	8b 45 10             	mov    0x10(%ebp),%eax
 82e5e16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82e5e1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5e1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e5e21:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e5e24:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5e28:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5e2b:	89 04 24             	mov    %eax,(%esp)
 82e5e2e:	e8 61 fa ff ff       	call   82e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>
 82e5e33:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e5e36:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5e39:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5e3d:	89 04 24             	mov    %eax,(%esp)
 82e5e40:	e8 5d b8 00 00       	call   82f16a2 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EEixEj>
 82e5e45:	8b 58 08             	mov    0x8(%eax),%ebx
 82e5e48:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e5e4b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5e4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5e52:	89 04 24             	mov    %eax,(%esp)
 82e5e55:	e8 48 b8 00 00       	call   82f16a2 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EEixEj>
 82e5e5a:	8b 50 04             	mov    0x4(%eax),%edx
 82e5e5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e5e60:	6b c0 f6             	imul   $0xfffffff6,%eax,%eax
 82e5e63:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82e5e66:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e5e6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5e6e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82e5e71:	89 04 24             	mov    %eax,(%esp)
 82e5e74:	e8 f7 a5 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e5e79:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82e5e80:	00 
 82e5e81:	8b 45 10             	mov    0x10(%ebp),%eax
 82e5e84:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82e5e88:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5e8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e5e8f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82e5e92:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5e96:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5e99:	89 04 24             	mov    %eax,(%esp)
 82e5e9c:	e8 f3 f9 ff ff       	call   82e5894 <_ZN11pvp_assault16CCandidateMatrix18_AddCandidatePointERKNS_7Point2dES3_S3_i>
 82e5ea1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e5ea5:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e5ea9:	0f 9e c0             	setle  %al
 82e5eac:	84 c0                	test   %al,%al
 82e5eae:	0f 85 0b ff ff ff    	jne    82e5dbf <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_+0x117>
 82e5eb4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e5eb8:	e8 e1 fd ff ff       	call   82e5c9e <_Z24GetMaxCandidateMatirxRowv>
 82e5ebd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82e5ec0:	0f 9f c0             	setg   %al
 82e5ec3:	84 c0                	test   %al,%al
 82e5ec5:	0f 85 e8 fe ff ff    	jne    82e5db3 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_+0x10b>
 82e5ecb:	83 c4 54             	add    $0x54,%esp
 82e5ece:	5b                   	pop    %ebx
 82e5ecf:	5d                   	pop    %ebp
 82e5ed0:	c3                   	ret

```

```c
// pvp_assault::CCandidateMatrix::MakeCandidatePoint @ 0x82e5ca8

/* pvp_assault::CCandidateMatrix::MakeCandidatePoint(pvp_assault::Point2d const&,
   pvp_assault::Point2d const&) */

void __thiscall
pvp_assault::CCandidateMatrix::MakeCandidatePoint
          (CCandidateMatrix *this,Point2d *param_1,Point2d *param_2)

{
  int iVar1;
  int iVar2;
  Point2d local_34 [8];
  Point2d local_2c [8];
  Point2d local_24 [8];
  Point2d local_1c [8];
  int local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  _AddCandidatePoint(this,param_1,param_1,param_2,10);
  for (local_14 = 1; local_14 < 8; local_14 = local_14 + 1) {
    Point2d::Point2d(local_34,*(int *)param_1,*(int *)(param_1 + 4) + local_14 * 10);
    _AddCandidatePoint(this,local_34,param_1,param_2,10);
    Point2d::Point2d(local_2c,*(int *)param_1,*(int *)(param_1 + 4) + local_14 * -10);
    _AddCandidatePoint(this,local_2c,param_1,param_2,10);
  }
  local_10 = 0;
  while( true ) {
    iVar2 = GetMaxCandidateMatirxRow();
    if (iVar2 <= (int)local_10) break;
    for (local_14 = 1; local_14 < 8; local_14 = local_14 + 1) {
      iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      Point2d::Point2d(local_24,*(int *)(iVar1 + 4) + local_14 * 10,iVar2);
      _AddCandidatePoint(this,local_24,param_1,param_2,0);
      iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
              operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                          *)this,local_10);
      Point2d::Point2d(local_1c,*(int *)(iVar1 + 4) + local_14 * -10,iVar2);
      _AddCandidatePoint(this,local_1c,param_1,param_2,0);
    }
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## RemoveCandidatePoint

```asm
// === 082e5f36 pvp_assault::CCandidateMatrix::RemoveCandidatePoint  [0x082e5f36-0x82e5fed] ===
 82e5f36:	55                   	push   %ebp
 82e5f37:	89 e5                	mov    %esp,%ebp
 82e5f39:	53                   	push   %ebx
 82e5f3a:	83 ec 34             	sub    $0x34,%esp
 82e5f3d:	8b 55 08             	mov    0x8(%ebp),%edx
 82e5f40:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e5f43:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5f47:	89 04 24             	mov    %eax,(%esp)
 82e5f4a:	e8 0d b9 00 00       	call   82f185c <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EE5beginEv>
 82e5f4f:	83 ec 04             	sub    $0x4,%esp
 82e5f52:	eb 65                	jmp    82e5fb9 <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE+0x83>
 82e5f54:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e5f57:	89 04 24             	mov    %eax,(%esp)
 82e5f5a:	e8 73 b9 00 00       	call   82f18d2 <_ZNK9__gnu_cxx17__normal_iteratorIPN11pvp_assault14CandidatePointESt6vectorIS2_SaIS2_EEEdeEv>
 82e5f5f:	8b 58 08             	mov    0x8(%eax),%ebx
 82e5f62:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e5f65:	89 04 24             	mov    %eax,(%esp)
 82e5f68:	e8 65 b9 00 00       	call   82f18d2 <_ZNK9__gnu_cxx17__normal_iteratorIPN11pvp_assault14CandidatePointESt6vectorIS2_SaIS2_EEEdeEv>
 82e5f6d:	8b 40 04             	mov    0x4(%eax),%eax
 82e5f70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e5f74:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5f78:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5f7b:	89 04 24             	mov    %eax,(%esp)
 82e5f7e:	e8 4e ff ff ff       	call   82e5ed1 <_Z25IsIncludeVirtualMoveAreasPSt6vectorI7MapAreaSaIS0_EEii>
 82e5f83:	83 f0 01             	xor    $0x1,%eax
 82e5f86:	84 c0                	test   %al,%al
 82e5f88:	74 24                	je     82e5fae <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE+0x78>
 82e5f8a:	8b 55 08             	mov    0x8(%ebp),%edx
 82e5f8d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e5f90:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 82e5f93:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82e5f97:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5f9b:	89 04 24             	mov    %eax,(%esp)
 82e5f9e:	e8 39 b9 00 00       	call   82f18dc <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS1_S3_EE>
 82e5fa3:	83 ec 04             	sub    $0x4,%esp
 82e5fa6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e5fa9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82e5fac:	eb 0b                	jmp    82e5fb9 <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE+0x83>
 82e5fae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e5fb1:	89 04 24             	mov    %eax,(%esp)
 82e5fb4:	e8 09 ba 00 00       	call   82f19c2 <_ZN9__gnu_cxx17__normal_iteratorIPN11pvp_assault14CandidatePointESt6vectorIS2_SaIS2_EEEppEv>
 82e5fb9:	8b 55 08             	mov    0x8(%ebp),%edx
 82e5fbc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82e5fbf:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5fc3:	89 04 24             	mov    %eax,(%esp)
 82e5fc6:	e8 b5 b8 00 00       	call   82f1880 <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EE3endEv>
 82e5fcb:	83 ec 04             	sub    $0x4,%esp
 82e5fce:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82e5fd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5fd5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e5fd8:	89 04 24             	mov    %eax,(%esp)
 82e5fdb:	e8 c6 b8 00 00       	call   82f18a6 <_ZN9__gnu_cxxneIPN11pvp_assault14CandidatePointESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 82e5fe0:	84 c0                	test   %al,%al
 82e5fe2:	0f 85 6c ff ff ff    	jne    82e5f54 <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE+0x1e>
 82e5fe8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 82e5feb:	c9                   	leave
 82e5fec:	c3                   	ret
 82e5fed:	90                   	nop

```

```c
// pvp_assault::CCandidateMatrix::RemoveCandidatePoint @ 0x82e5f36

/* pvp_assault::CCandidateMatrix::RemoveCandidatePoint(std::vector<MapArea, std::allocator<MapArea>
   >*) */

void __thiscall
pvp_assault::CCandidateMatrix::RemoveCandidatePoint(CCandidateMatrix *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20 [3];
  undefined4 local_14;
  __normal_iterator local_10 [8];
  
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::begin();
  while( true ) {
    std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_14,local_10);
    if (!bVar2) break;
    iVar3 = __gnu_cxx::
            __normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
            ::operator*((__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
                         *)&local_14);
    iVar3 = *(int *)(iVar3 + 8);
    iVar4 = __gnu_cxx::
            __normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
            ::operator*((__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
                         *)&local_14);
    cVar1 = ::IsIncludeVirtualMoveAreas(param_1,*(int *)(iVar4 + 4),iVar3);
    if (cVar1 == '\x01') {
      __gnu_cxx::
      __normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
      ::operator++((__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
                    *)&local_14);
    }
    else {
      std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::erase
                (local_20,this,local_14);
      local_14 = local_20[0];
    }
  }
  return;
}

```

---

## _AddCandidatePoint

```asm
// === 082e5894 pvp_assault::CCandidateMatrix::_AddCandidatePoint  [0x082e5894-0x82e590b] ===
 82e5894:	55                   	push   %ebp
 82e5895:	89 e5                	mov    %esp,%ebp
 82e5897:	53                   	push   %ebx
 82e5898:	83 ec 24             	sub    $0x24,%esp
 82e589b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e589e:	89 04 24             	mov    %eax,(%esp)
 82e58a1:	e8 96 b7 00 00       	call   82f103c <_ZN11pvp_assault14CandidatePointC1Ev>
 82e58a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e58a9:	8b 50 04             	mov    0x4(%eax),%edx
 82e58ac:	8b 00                	mov    (%eax),%eax
 82e58ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82e58b1:	89 55 f4             	mov    %edx,-0xc(%ebp)
 82e58b4:	8b 45 18             	mov    0x18(%ebp),%eax
 82e58b7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e58ba:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 82e58bd:	8b 45 14             	mov    0x14(%ebp),%eax
 82e58c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e58c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e58c7:	89 04 24             	mov    %eax,(%esp)
 82e58ca:	e8 b7 ab 00 00       	call   82f0486 <_ZNK11pvp_assault7Point2dmiERKS0_>
 82e58cf:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 82e58d2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e58d5:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 82e58d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e58db:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e58df:	8b 45 10             	mov    0x10(%ebp),%eax
 82e58e2:	89 04 24             	mov    %eax,(%esp)
 82e58e5:	e8 9c ab 00 00       	call   82f0486 <_ZNK11pvp_assault7Point2dmiERKS0_>
 82e58ea:	89 da                	mov    %ebx,%edx
 82e58ec:	29 c2                	sub    %eax,%edx
 82e58ee:	89 d0                	mov    %edx,%eax
 82e58f0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e58f3:	8b 45 08             	mov    0x8(%ebp),%eax
 82e58f6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e58f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e58fd:	89 04 24             	mov    %eax,(%esp)
 82e5900:	e8 07 bd 00 00       	call   82f160c <_ZNSt6vectorIN11pvp_assault14CandidatePointESaIS1_EE9push_backERKS1_>
 82e5905:	83 c4 24             	add    $0x24,%esp
 82e5908:	5b                   	pop    %ebx
 82e5909:	5d                   	pop    %ebp
 82e590a:	c3                   	ret
 82e590b:	90                   	nop

```

```c
// pvp_assault::CCandidateMatrix::_AddCandidatePoint @ 0x82e5894

/* pvp_assault::CCandidateMatrix::_AddCandidatePoint(pvp_assault::Point2d const&,
   pvp_assault::Point2d const&, pvp_assault::Point2d const&, int) */

void __thiscall
pvp_assault::CCandidateMatrix::_AddCandidatePoint
          (CCandidateMatrix *this,Point2d *param_1,Point2d *param_2,Point2d *param_3,int param_4)

{
  int iVar1;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  CandidatePoint::CandidatePoint((CandidatePoint *)&local_18);
  local_10 = *(undefined4 *)(param_1 + 4);
  local_14 = *(undefined4 *)param_1;
  local_18 = param_4;
  iVar1 = Point2d::operator-(param_1,param_3);
  local_18 = param_4 + iVar1;
  local_18 = Point2d::operator-(param_2,param_1);
  local_18 = (param_4 + iVar1) - local_18;
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::push_back
            ((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>> *)this
             ,(CandidatePoint *)&local_18);
  return;
}

```

