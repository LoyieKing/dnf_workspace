# pvp_assault__CDynamicDisposition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CDynamicDisposition

```asm
// === 082e6032 pvp_assault::CDynamicDisposition::CDynamicDisposition  [0x082e6032-0x82e624b] ===
 82e6032:	55                   	push   %ebp
 82e6033:	89 e5                	mov    %esp,%ebp
 82e6035:	56                   	push   %esi
 82e6036:	53                   	push   %ebx
 82e6037:	83 ec 40             	sub    $0x40,%esp
 82e603a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e603d:	89 04 24             	mov    %eax,(%esp)
 82e6040:	e8 0d b0 00 00       	call   82f1052 <_ZN11pvp_assault12CDispositionC1Ev>
 82e6045:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6048:	c7 00 b0 d1 c1 08    	movl   $0x8c1d1b0,(%eax)
 82e604e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6051:	83 c0 0c             	add    $0xc,%eax
 82e6054:	89 04 24             	mov    %eax,(%esp)
 82e6057:	e8 0e a4 00 00       	call   82f046a <_ZN11pvp_assault7Point2dC1Ev>
 82e605c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e605f:	83 c0 14             	add    $0x14,%eax
 82e6062:	89 04 24             	mov    %eax,(%esp)
 82e6065:	e8 f6 af 00 00       	call   82f1060 <_ZN11pvp_assault16CCandidateMatrixC1Ev>
 82e606a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e606d:	83 c0 20             	add    $0x20,%eax
 82e6070:	89 04 24             	mov    %eax,(%esp)
 82e6073:	e8 e8 af 00 00       	call   82f1060 <_ZN11pvp_assault16CCandidateMatrixC1Ev>
 82e6078:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e607f:	eb 19                	jmp    82e609a <_ZN11pvp_assault19CDynamicDispositionC1EPP5CUserPi+0x68>
 82e6081:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e6084:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6087:	c1 e0 02             	shl    $0x2,%eax
 82e608a:	03 45 0c             	add    0xc(%ebp),%eax
 82e608d:	8b 08                	mov    (%eax),%ecx
 82e608f:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6092:	89 4c 90 04          	mov    %ecx,0x4(%eax,%edx,4)
 82e6096:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e609a:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82e609e:	0f 9e c0             	setle  %al
 82e60a1:	84 c0                	test   %al,%al
 82e60a3:	75 dc                	jne    82e6081 <_ZN11pvp_assault19CDynamicDispositionC1EPP5CUserPi+0x4f>
 82e60a5:	8b 45 08             	mov    0x8(%ebp),%eax
 82e60a8:	8b 40 04             	mov    0x4(%eax),%eax
 82e60ab:	89 04 24             	mov    %eax,(%esp)
 82e60ae:	e8 79 e8 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e60b3:	0f b7 d8             	movzwl %ax,%ebx
 82e60b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e60b9:	8b 40 08             	mov    0x8(%eax),%eax
 82e60bc:	89 04 24             	mov    %eax,(%esp)
 82e60bf:	e8 68 e8 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e60c4:	66 d1 e8             	shr    $1,%ax
 82e60c7:	0f b7 c0             	movzwl %ax,%eax
 82e60ca:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 82e60cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82e60d0:	89 50 0c             	mov    %edx,0xc(%eax)
 82e60d3:	8b 45 08             	mov    0x8(%ebp),%eax
 82e60d6:	8b 40 04             	mov    0x4(%eax),%eax
 82e60d9:	89 04 24             	mov    %eax,(%esp)
 82e60dc:	e8 5b e8 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82e60e1:	0f b7 d8             	movzwl %ax,%ebx
 82e60e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82e60e7:	8b 40 08             	mov    0x8(%eax),%eax
 82e60ea:	89 04 24             	mov    %eax,(%esp)
 82e60ed:	e8 4a e8 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82e60f2:	66 d1 e8             	shr    $1,%ax
 82e60f5:	0f b7 c0             	movzwl %ax,%eax
 82e60f8:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 82e60fb:	8b 45 08             	mov    0x8(%ebp),%eax
 82e60fe:	89 50 10             	mov    %edx,0x10(%eax)
 82e6101:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6104:	8b 40 08             	mov    0x8(%eax),%eax
 82e6107:	89 04 24             	mov    %eax,(%esp)
 82e610a:	e8 2d e8 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82e610f:	0f b7 d8             	movzwl %ax,%ebx
 82e6112:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6115:	8b 40 08             	mov    0x8(%eax),%eax
 82e6118:	89 04 24             	mov    %eax,(%esp)
 82e611b:	e8 0c e8 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e6120:	0f b7 c0             	movzwl %ax,%eax
 82e6123:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e6127:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e612b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82e612e:	89 04 24             	mov    %eax,(%esp)
 82e6131:	e8 3a a3 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e6136:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6139:	8b 40 04             	mov    0x4(%eax),%eax
 82e613c:	89 04 24             	mov    %eax,(%esp)
 82e613f:	e8 f8 e7 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82e6144:	0f b7 d8             	movzwl %ax,%ebx
 82e6147:	8b 45 08             	mov    0x8(%ebp),%eax
 82e614a:	8b 40 04             	mov    0x4(%eax),%eax
 82e614d:	89 04 24             	mov    %eax,(%esp)
 82e6150:	e8 d7 e7 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e6155:	0f b7 c0             	movzwl %ax,%eax
 82e6158:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e615c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6160:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e6163:	89 04 24             	mov    %eax,(%esp)
 82e6166:	e8 05 a3 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e616b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e616e:	8d 50 14             	lea    0x14(%eax),%edx
 82e6171:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82e6174:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e6178:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e617b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e617f:	89 14 24             	mov    %edx,(%esp)
 82e6182:	e8 21 fb ff ff       	call   82e5ca8 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_>
 82e6187:	8b 45 08             	mov    0x8(%ebp),%eax
 82e618a:	8b 40 04             	mov    0x4(%eax),%eax
 82e618d:	89 04 24             	mov    %eax,(%esp)
 82e6190:	e8 a7 e7 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82e6195:	0f b7 d8             	movzwl %ax,%ebx
 82e6198:	8b 45 08             	mov    0x8(%ebp),%eax
 82e619b:	8b 40 04             	mov    0x4(%eax),%eax
 82e619e:	89 04 24             	mov    %eax,(%esp)
 82e61a1:	e8 86 e7 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e61a6:	0f b7 c0             	movzwl %ax,%eax
 82e61a9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e61ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e61b1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e61b4:	89 04 24             	mov    %eax,(%esp)
 82e61b7:	e8 b4 a2 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e61bc:	8b 45 08             	mov    0x8(%ebp),%eax
 82e61bf:	8b 40 08             	mov    0x8(%eax),%eax
 82e61c2:	89 04 24             	mov    %eax,(%esp)
 82e61c5:	e8 72 e7 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82e61ca:	0f b7 d8             	movzwl %ax,%ebx
 82e61cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82e61d0:	8b 40 08             	mov    0x8(%eax),%eax
 82e61d3:	89 04 24             	mov    %eax,(%esp)
 82e61d6:	e8 51 e7 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e61db:	0f b7 c0             	movzwl %ax,%eax
 82e61de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e61e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e61e6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e61e9:	89 04 24             	mov    %eax,(%esp)
 82e61ec:	e8 7f a2 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e61f1:	8b 45 08             	mov    0x8(%ebp),%eax
 82e61f4:	8d 50 20             	lea    0x20(%eax),%edx
 82e61f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e61fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e61fe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e6201:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6205:	89 14 24             	mov    %edx,(%esp)
 82e6208:	e8 9b fa ff ff       	call   82e5ca8 <_ZN11pvp_assault16CCandidateMatrix18MakeCandidatePointERKNS_7Point2dES3_>
 82e620d:	eb 36                	jmp    82e6245 <_ZN11pvp_assault19CDynamicDispositionC1EPP5CUserPi+0x213>
 82e620f:	89 d3                	mov    %edx,%ebx
 82e6211:	89 c6                	mov    %eax,%esi
 82e6213:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6216:	83 c0 20             	add    $0x20,%eax
 82e6219:	89 04 24             	mov    %eax,(%esp)
 82e621c:	e8 53 ae 00 00       	call   82f1074 <_ZN11pvp_assault16CCandidateMatrixD1Ev>
 82e6221:	89 f0                	mov    %esi,%eax
 82e6223:	89 da                	mov    %ebx,%edx
 82e6225:	eb 00                	jmp    82e6227 <_ZN11pvp_assault19CDynamicDispositionC1EPP5CUserPi+0x1f5>
 82e6227:	89 d3                	mov    %edx,%ebx
 82e6229:	89 c6                	mov    %eax,%esi
 82e622b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e622e:	83 c0 14             	add    $0x14,%eax
 82e6231:	89 04 24             	mov    %eax,(%esp)
 82e6234:	e8 3b ae 00 00       	call   82f1074 <_ZN11pvp_assault16CCandidateMatrixD1Ev>
 82e6239:	89 f0                	mov    %esi,%eax
 82e623b:	89 da                	mov    %ebx,%edx
 82e623d:	89 04 24             	mov    %eax,(%esp)
 82e6240:	e8 0b d5 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e6245:	83 c4 40             	add    $0x40,%esp
 82e6248:	5b                   	pop    %ebx
 82e6249:	5e                   	pop    %esi
 82e624a:	5d                   	pop    %ebp
 82e624b:	c3                   	ret

```

```c
// pvp_assault::CDynamicDisposition::CDynamicDisposition @ 0x82e6032

/* pvp_assault::CDynamicDisposition::CDynamicDisposition(CUser**, int*) */

void __thiscall
pvp_assault::CDynamicDisposition::CDynamicDisposition
          (CDynamicDisposition *this,CUser **param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  Point2d local_30 [8];
  Point2d local_28 [8];
  Point2d local_20 [8];
  Point2d local_18 [8];
  int local_10;
  
  CDisposition::CDisposition((CDisposition *)this);
  *(undefined ***)this = &PTR_SetVirtualMap_08c1d1b0;
  Point2d::Point2d((Point2d *)(this + 0xc));
  CCandidateMatrix::CCandidateMatrix((CCandidateMatrix *)(this + 0x14));
                    /* try { // try from 082e6073 to 082e6077 has its CatchHandler @ 082e6227 */
  CCandidateMatrix::CCandidateMatrix((CCandidateMatrix *)(this + 0x20));
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(CUser **)(this + local_10 * 4 + 4) = param_1[local_10];
  }
  uVar2 = CUser::get_posX(*(CUser **)(this + 4));
  uVar1 = CUser::get_posX(*(CUser **)(this + 8));
  *(uint *)(this + 0xc) = (uVar2 & 0xffff) + (uint)(uVar1 >> 1);
  uVar2 = CUser::get_posY(*(CUser **)(this + 4));
  uVar1 = CUser::get_posY(*(CUser **)(this + 8));
  *(uint *)(this + 0x10) = (uVar2 & 0xffff) + (uint)(uVar1 >> 1);
  uVar2 = CUser::get_posY(*(CUser **)(this + 8));
  uVar3 = CUser::get_posX(*(CUser **)(this + 8));
  Point2d::Point2d(local_30,uVar3 & 0xffff,uVar2 & 0xffff);
  uVar2 = CUser::get_posY(*(CUser **)(this + 4));
  uVar3 = CUser::get_posX(*(CUser **)(this + 4));
  Point2d::Point2d(local_28,uVar3 & 0xffff,uVar2 & 0xffff);
                    /* try { // try from 082e6182 to 082e620c has its CatchHandler @ 082e620f */
  CCandidateMatrix::MakeCandidatePoint((CCandidateMatrix *)(this + 0x14),local_28,local_30);
  uVar2 = CUser::get_posY(*(CUser **)(this + 4));
  uVar3 = CUser::get_posX(*(CUser **)(this + 4));
  Point2d::Point2d(local_20,uVar3 & 0xffff,uVar2 & 0xffff);
  uVar2 = CUser::get_posY(*(CUser **)(this + 8));
  uVar3 = CUser::get_posX(*(CUser **)(this + 8));
  Point2d::Point2d(local_18,uVar3 & 0xffff,uVar2 & 0xffff);
  CCandidateMatrix::MakeCandidatePoint((CCandidateMatrix *)(this + 0x20),local_18,local_20);
  return;
}

```

---

## MoveUser

```asm
// === 082e62a0 pvp_assault::CDynamicDisposition::MoveUser  [0x082e62a0-0x82e62a9] ===
 82e62a0:	55                   	push   %ebp
 82e62a1:	89 e5                	mov    %esp,%ebp
 82e62a3:	b8 01 00 00 00       	mov    $0x1,%eax
 82e62a8:	5d                   	pop    %ebp
 82e62a9:	c3                   	ret

```

```c
// pvp_assault::CDynamicDisposition::MoveUser @ 0x82e62a0

/* pvp_assault::CDynamicDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*) */

undefined4 pvp_assault::CDynamicDisposition::MoveUser(CForcedMoveCharacter *param_1)

{
  return 1;
}

```

---

## SetVirtualMap

```asm
// === 082e624c pvp_assault::CDynamicDisposition::SetVirtualMap  [0x082e624c-0x82e629f] ===
 82e624c:	55                   	push   %ebp
 82e624d:	89 e5                	mov    %esp,%ebp
 82e624f:	83 ec 18             	sub    $0x18,%esp
 82e6252:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6255:	8d 50 14             	lea    0x14(%eax),%edx
 82e6258:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e625b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e625f:	89 14 24             	mov    %edx,(%esp)
 82e6262:	e8 cf fc ff ff       	call   82e5f36 <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE>
 82e6267:	8b 45 08             	mov    0x8(%ebp),%eax
 82e626a:	8d 50 20             	lea    0x20(%eax),%edx
 82e626d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6270:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6274:	89 14 24             	mov    %edx,(%esp)
 82e6277:	e8 ba fc ff ff       	call   82e5f36 <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE>
 82e627c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e627f:	83 c0 14             	add    $0x14,%eax
 82e6282:	89 04 24             	mov    %eax,(%esp)
 82e6285:	e8 64 fd ff ff       	call   82e5fee <_ZN11pvp_assault16CCandidateMatrix21ArrangeCandidatePointEv>
 82e628a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e628d:	83 c0 20             	add    $0x20,%eax
 82e6290:	89 04 24             	mov    %eax,(%esp)
 82e6293:	e8 56 fd ff ff       	call   82e5fee <_ZN11pvp_assault16CCandidateMatrix21ArrangeCandidatePointEv>
 82e6298:	b8 01 00 00 00       	mov    $0x1,%eax
 82e629d:	c9                   	leave
 82e629e:	c3                   	ret
 82e629f:	90                   	nop

```

```c
// pvp_assault::CDynamicDisposition::SetVirtualMap @ 0x82e624c

/* pvp_assault::CDynamicDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)
    */

undefined4 __thiscall
pvp_assault::CDynamicDisposition::SetVirtualMap(CDynamicDisposition *this,vector *param_1)

{
  CCandidateMatrix::RemoveCandidatePoint((CCandidateMatrix *)(this + 0x14),param_1);
  CCandidateMatrix::RemoveCandidatePoint((CCandidateMatrix *)(this + 0x20),param_1);
  CCandidateMatrix::ArrangeCandidatePoint();
  CCandidateMatrix::ArrangeCandidatePoint();
  return 1;
}

```

