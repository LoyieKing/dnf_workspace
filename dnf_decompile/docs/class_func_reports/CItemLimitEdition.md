# CItemLimitEdition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## makeInfoPacket

```asm
// === 085130e8 CItemLimitEdition::makeInfoPacket  [0x085130e8-0x85132c9] ===
 85130e8:	55                   	push   %ebp
 85130e9:	89 e5                	mov    %esp,%ebp
 85130eb:	53                   	push   %ebx
 85130ec:	83 ec 14             	sub    $0x14,%esp
 85130ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85130f2:	8b 00                	mov    (%eax),%eax
 85130f4:	89 c2                	mov    %eax,%edx
 85130f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85130f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85130fd:	89 04 24             	mov    %eax,(%esp)
 8513100:	e8 37 88 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513105:	8b 45 08             	mov    0x8(%ebp),%eax
 8513108:	8b 50 04             	mov    0x4(%eax),%edx
 851310b:	8b 45 0c             	mov    0xc(%ebp),%eax
 851310e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513112:	89 04 24             	mov    %eax,(%esp)
 8513115:	e8 7a 86 d1 ff       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 851311a:	8b 45 08             	mov    0x8(%ebp),%eax
 851311d:	8b 40 08             	mov    0x8(%eax),%eax
 8513120:	89 c2                	mov    %eax,%edx
 8513122:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513125:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513129:	89 04 24             	mov    %eax,(%esp)
 851312c:	e8 0b 88 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513131:	8b 45 08             	mov    0x8(%ebp),%eax
 8513134:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8513138:	0f be d0             	movsbl %al,%edx
 851313b:	8b 45 0c             	mov    0xc(%ebp),%eax
 851313e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513142:	89 04 24             	mov    %eax,(%esp)
 8513145:	e8 d6 87 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 851314a:	8b 45 08             	mov    0x8(%ebp),%eax
 851314d:	8b 40 10             	mov    0x10(%eax),%eax
 8513150:	89 c2                	mov    %eax,%edx
 8513152:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513155:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513159:	89 04 24             	mov    %eax,(%esp)
 851315c:	e8 db 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513161:	8b 45 08             	mov    0x8(%ebp),%eax
 8513164:	8b 40 14             	mov    0x14(%eax),%eax
 8513167:	89 c2                	mov    %eax,%edx
 8513169:	8b 45 0c             	mov    0xc(%ebp),%eax
 851316c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513170:	89 04 24             	mov    %eax,(%esp)
 8513173:	e8 c4 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513178:	8b 45 08             	mov    0x8(%ebp),%eax
 851317b:	8b 40 48             	mov    0x48(%eax),%eax
 851317e:	89 c2                	mov    %eax,%edx
 8513180:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513183:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513187:	89 04 24             	mov    %eax,(%esp)
 851318a:	e8 ad 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 851318f:	8b 45 08             	mov    0x8(%ebp),%eax
 8513192:	8b 50 1c             	mov    0x1c(%eax),%edx
 8513195:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513198:	89 54 24 04          	mov    %edx,0x4(%esp)
 851319c:	89 04 24             	mov    %eax,(%esp)
 851319f:	e8 98 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85131a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85131a7:	8b 40 20             	mov    0x20(%eax),%eax
 85131aa:	89 c2                	mov    %eax,%edx
 85131ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 85131af:	89 54 24 04          	mov    %edx,0x4(%esp)
 85131b3:	89 04 24             	mov    %eax,(%esp)
 85131b6:	e8 81 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85131bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85131be:	8b 58 28             	mov    0x28(%eax),%ebx
 85131c1:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85131c8:	e8 d1 8a bb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85131cd:	39 c3                	cmp    %eax,%ebx
 85131cf:	0f 9e c0             	setle  %al
 85131d2:	84 c0                	test   %al,%al
 85131d4:	74 15                	je     85131eb <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard+0x103>
 85131d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85131d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85131e0:	00 
 85131e1:	89 04 24             	mov    %eax,(%esp)
 85131e4:	e8 53 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85131e9:	eb 25                	jmp    8513210 <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard+0x128>
 85131eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85131ee:	8b 58 28             	mov    0x28(%eax),%ebx
 85131f1:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85131f8:	e8 a1 8a bb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85131fd:	89 da                	mov    %ebx,%edx
 85131ff:	29 c2                	sub    %eax,%edx
 8513201:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513204:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513208:	89 04 24             	mov    %eax,(%esp)
 851320b:	e8 2c 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513210:	8b 45 08             	mov    0x8(%ebp),%eax
 8513213:	8b 40 2c             	mov    0x2c(%eax),%eax
 8513216:	89 c2                	mov    %eax,%edx
 8513218:	8b 45 0c             	mov    0xc(%ebp),%eax
 851321b:	89 54 24 04          	mov    %edx,0x4(%esp)
 851321f:	89 04 24             	mov    %eax,(%esp)
 8513222:	e8 15 87 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513227:	8b 45 08             	mov    0x8(%ebp),%eax
 851322a:	8b 40 30             	mov    0x30(%eax),%eax
 851322d:	89 c2                	mov    %eax,%edx
 851322f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513232:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513236:	89 04 24             	mov    %eax,(%esp)
 8513239:	e8 e2 86 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 851323e:	8b 45 08             	mov    0x8(%ebp),%eax
 8513241:	0f b7 40 34          	movzwl 0x34(%eax),%eax
 8513245:	0f b7 d0             	movzwl %ax,%edx
 8513248:	8b 45 0c             	mov    0xc(%ebp),%eax
 851324b:	89 54 24 04          	mov    %edx,0x4(%esp)
 851324f:	89 04 24             	mov    %eax,(%esp)
 8513252:	e8 4d 6c bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8513257:	8b 45 08             	mov    0x8(%ebp),%eax
 851325a:	0f b7 40 36          	movzwl 0x36(%eax),%eax
 851325e:	0f b7 d0             	movzwl %ax,%edx
 8513261:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513264:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513268:	89 04 24             	mov    %eax,(%esp)
 851326b:	e8 34 6c bc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8513270:	8b 45 08             	mov    0x8(%ebp),%eax
 8513273:	8b 50 38             	mov    0x38(%eax),%edx
 8513276:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513279:	89 54 24 04          	mov    %edx,0x4(%esp)
 851327d:	89 04 24             	mov    %eax,(%esp)
 8513280:	e8 b7 86 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513285:	8b 45 08             	mov    0x8(%ebp),%eax
 8513288:	8b 50 3c             	mov    0x3c(%eax),%edx
 851328b:	8b 45 0c             	mov    0xc(%ebp),%eax
 851328e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513292:	89 04 24             	mov    %eax,(%esp)
 8513295:	e8 a2 86 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 851329a:	8b 45 08             	mov    0x8(%ebp),%eax
 851329d:	8b 50 40             	mov    0x40(%eax),%edx
 85132a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85132a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85132a7:	89 04 24             	mov    %eax,(%esp)
 85132aa:	e8 8d 86 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85132af:	8b 45 08             	mov    0x8(%ebp),%eax
 85132b2:	8b 50 44             	mov    0x44(%eax),%edx
 85132b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85132b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85132bc:	89 04 24             	mov    %eax,(%esp)
 85132bf:	e8 78 86 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85132c4:	83 c4 14             	add    $0x14,%esp
 85132c7:	5b                   	pop    %ebx
 85132c8:	5d                   	pop    %ebp
 85132c9:	c3                   	ret

```

```c
// CItemLimitEdition::makeInfoPacket @ 0x85130e8

/* CItemLimitEdition::makeInfoPacket(PacketGuard&) const */

void __thiscall CItemLimitEdition::makeInfoPacket(CItemLimitEdition *this,PacketGuard *param_1)

{
  int iVar1;
  int iVar2;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)param_1,*(ulong *)(this + 4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 8));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)this[0xc]);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x14));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x48));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x1c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x20));
  iVar1 = *(int *)(this + 0x28);
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar2 < iVar1) {
    iVar1 = *(int *)(this + 0x28);
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar1 - iVar2);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x30));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 0x34));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 0x36));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x38));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x3c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x40));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x44));
  return;
}

```

