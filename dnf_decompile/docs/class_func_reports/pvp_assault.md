# pvp_assault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetDirectionByTeam

```asm
// === 082e564c pvp_assault::GetDirectionByTeam  [0x082e564c-0x82e567b] ===
 82e564c:	55                   	push   %ebp
 82e564d:	89 e5                	mov    %esp,%ebp
 82e564f:	83 ec 10             	sub    $0x10,%esp
 82e5652:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 82e5659:	8b 45 08             	mov    0x8(%ebp),%eax
 82e565c:	85 c0                	test   %eax,%eax
 82e565e:	74 07                	je     82e5667 <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1b>
 82e5660:	83 f8 01             	cmp    $0x1,%eax
 82e5663:	74 0b                	je     82e5670 <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x24>
 82e5665:	eb 10                	jmp    82e5677 <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2b>
 82e5667:	c7 45 fc 06 00 00 00 	movl   $0x6,-0x4(%ebp)
 82e566e:	eb 07                	jmp    82e5677 <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2b>
 82e5670:	c7 45 fc 04 00 00 00 	movl   $0x4,-0x4(%ebp)
 82e5677:	8b 45 fc             	mov    -0x4(%ebp),%eax
 82e567a:	c9                   	leave
 82e567b:	c3                   	ret

```

```c
// pvp_assault::GetDirectionByTeam @ 0x82e564c

/* pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM) */

undefined4 pvp_assault::GetDirectionByTeam(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
    local_8 = 6;
  }
  else if (param_1 == 1) {
    local_8 = 4;
  }
  return local_8;
}

```

---

## IsIncludeVirtualMoveAreas

```asm
// === 082e5a0b pvp_assault::IsIncludeVirtualMoveAreas  [0x082e5a0b-0x82e5b4d] ===
 82e5a0b:	55                   	push   %ebp
 82e5a0c:	89 e5                	mov    %esp,%ebp
 82e5a0e:	83 ec 58             	sub    $0x58,%esp
 82e5a11:	c7 45 ec ff ff ff 7f 	movl   $0x7fffffff,-0x14(%ebp)
 82e5a18:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e5a1f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82e5a26:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 82e5a2d:	8b 45 14             	mov    0x14(%ebp),%eax
 82e5a30:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e5a33:	89 10                	mov    %edx,(%eax)
 82e5a35:	8b 45 18             	mov    0x18(%ebp),%eax
 82e5a38:	8b 55 10             	mov    0x10(%ebp),%edx
 82e5a3b:	89 10                	mov    %edx,(%eax)
 82e5a3d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e5a44:	e9 e4 00 00 00       	jmp    82e5b2d <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i+0x122>
 82e5a49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e5a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5a50:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5a53:	89 04 24             	mov    %eax,(%esp)
 82e5a56:	e8 8d bd 00 00       	call   82f17e8 <_ZNSt6vectorI7MapAreaSaIS0_EE2atEj>
 82e5a5b:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82e5a5e:	89 54 24 14          	mov    %edx,0x14(%esp)
 82e5a62:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 82e5a65:	89 54 24 10          	mov    %edx,0x10(%esp)
 82e5a69:	8d 55 d8             	lea    -0x28(%ebp),%edx
 82e5a6c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e5a70:	8b 55 10             	mov    0x10(%ebp),%edx
 82e5a73:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e5a77:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e5a7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5a7e:	89 04 24             	mov    %eax,(%esp)
 82e5a81:	e8 60 a8 00 00       	call   82f02e6 <_ZN7MapArea7includeEiiRiS0_i>
 82e5a86:	84 c0                	test   %al,%al
 82e5a88:	74 0a                	je     82e5a94 <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i+0x89>
 82e5a8a:	b8 01 00 00 00       	mov    $0x1,%eax
 82e5a8f:	e9 b7 00 00 00       	jmp    82e5b4b <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i+0x140>
 82e5a94:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82e5a97:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e5a9a:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e5a9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5aa2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e5aa5:	89 04 24             	mov    %eax,(%esp)
 82e5aa8:	e8 c3 a9 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e5aad:	8b 45 10             	mov    0x10(%ebp),%eax
 82e5ab0:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e5ab4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e5ab7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e5abb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e5abe:	89 04 24             	mov    %eax,(%esp)
 82e5ac1:	e8 aa a9 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e5ac6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82e5ac9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82e5acc:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e5ad0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e5ad4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e5ad7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 82e5ada:	89 04 24             	mov    %eax,(%esp)
 82e5add:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5ae1:	e8 0b ff ff ff       	call   82e59f1 <_Z11GetDistanceN11pvp_assault7Point2dES0_>
 82e5ae6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82e5ae9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e5aec:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 82e5aef:	7e 38                	jle    82e5b29 <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i+0x11e>
 82e5af1:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 82e5af5:	74 12                	je     82e5b09 <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i+0xfe>
 82e5af7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 82e5afa:	8b 45 14             	mov    0x14(%ebp),%eax
 82e5afd:	89 10                	mov    %edx,(%eax)
 82e5aff:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82e5b02:	8b 45 18             	mov    0x18(%ebp),%eax
 82e5b05:	89 10                	mov    %edx,(%eax)
 82e5b07:	eb 1a                	jmp    82e5b23 <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i+0x118>
 82e5b09:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e5b0c:	89 c2                	mov    %eax,%edx
 82e5b0e:	2b 55 0c             	sub    0xc(%ebp),%edx
 82e5b11:	8b 45 14             	mov    0x14(%ebp),%eax
 82e5b14:	89 10                	mov    %edx,(%eax)
 82e5b16:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82e5b19:	89 c2                	mov    %eax,%edx
 82e5b1b:	2b 55 10             	sub    0x10(%ebp),%edx
 82e5b1e:	8b 45 18             	mov    0x18(%ebp),%eax
 82e5b21:	89 10                	mov    %edx,(%eax)
 82e5b23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e5b26:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e5b29:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e5b2d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5b30:	89 04 24             	mov    %eax,(%esp)
 82e5b33:	e8 8e bc 00 00       	call   82f17c6 <_ZNKSt6vectorI7MapAreaSaIS0_EE4sizeEv>
 82e5b38:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82e5b3b:	0f 97 c0             	seta   %al
 82e5b3e:	84 c0                	test   %al,%al
 82e5b40:	0f 85 03 ff ff ff    	jne    82e5a49 <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i+0x3e>
 82e5b46:	b8 00 00 00 00       	mov    $0x0,%eax
 82e5b4b:	c9                   	leave
 82e5b4c:	c3                   	ret
 82e5b4d:	90                   	nop

```

```c
// pvp_assault::IsIncludeVirtualMoveAreas @ 0x82e5a0b

/* pvp_assault::IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int,
   int&, int&, int) */

undefined4
pvp_assault::IsIncludeVirtualMoveAreas
          (vector *param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  char cVar1;
  MapArea *this;
  uint uVar2;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_18 = 0x7fffffff;
  local_14 = 0;
  local_2c = 0;
  local_30 = 0;
  *param_4 = param_2;
  *param_5 = param_3;
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<MapArea,std::allocator<MapArea>>::size
                      ((vector<MapArea,std::allocator<MapArea>> *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    this = (MapArea *)
           std::vector<MapArea,std::allocator<MapArea>>::at
                     ((vector<MapArea,std::allocator<MapArea>> *)param_1,local_10);
    cVar1 = MapArea::include(this,param_2,param_3,&local_2c,&local_30,param_6);
    if (cVar1 != '\0') break;
    Point2d::Point2d((Point2d *)&local_28,local_2c,local_30);
    Point2d::Point2d((Point2d *)&local_20,param_2,param_3);
    local_14 = GetDistance(local_20,local_1c,local_28,local_24);
    if (local_14 < local_18) {
      local_18 = local_14;
      if (param_6 == 0) {
        *param_4 = local_2c - param_2;
        *param_5 = local_30 - param_3;
      }
      else {
        *param_4 = local_2c;
        *param_5 = local_30;
      }
    }
    local_10 = local_10 + 1;
  }
  return 1;
}

```

