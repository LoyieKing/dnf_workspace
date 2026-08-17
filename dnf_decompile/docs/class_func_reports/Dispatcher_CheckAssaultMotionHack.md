# Dispatcher_CheckAssaultMotionHack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08221f3c Dispatcher_CheckAssaultMotionHack::dispatch_sig  [0x08221f3c-0x822226f] ===
 8221f3c:	55                   	push   %ebp
 8221f3d:	89 e5                	mov    %esp,%ebp
 8221f3f:	53                   	push   %ebx
 8221f40:	83 ec 64             	sub    $0x64,%esp
 8221f43:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8221f47:	75 29                	jne    8221f72 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x36>
 8221f49:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8221f50:	00 
 8221f51:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8221f58:	00 
 8221f59:	c7 44 24 04 00 ce bc 	movl   $0x8bcce00,0x4(%esp)
 8221f60:	08 
 8221f61:	c7 04 24 73 db 00 00 	movl   $0xdb73,(%esp)
 8221f68:	e8 6a e9 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8221f6d:	e9 f8 02 00 00       	jmp    822226a <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x32e>
 8221f72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8221f75:	89 04 24             	mov    %eax,(%esp)
 8221f78:	e8 b5 e4 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8221f7d:	85 c0                	test   %eax,%eax
 8221f7f:	0f 94 c0             	sete   %al
 8221f82:	84 c0                	test   %al,%al
 8221f84:	74 0a                	je     8221f90 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x54>
 8221f86:	b8 00 00 00 00       	mov    $0x0,%eax
 8221f8b:	e9 da 02 00 00       	jmp    822226a <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x32e>
 8221f90:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8221f97:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8221f9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8221fa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221fa5:	8b 45 10             	mov    0x10(%ebp),%eax
 8221fa8:	89 04 24             	mov    %eax,(%esp)
 8221fab:	e8 90 b2 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8221fb0:	83 f0 01             	xor    $0x1,%eax
 8221fb3:	84 c0                	test   %al,%al
 8221fb5:	74 29                	je     8221fe0 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0xa4>
 8221fb7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8221fbe:	00 
 8221fbf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8221fc6:	00 
 8221fc7:	c7 44 24 04 00 ce bc 	movl   $0x8bcce00,0x4(%esp)
 8221fce:	08 
 8221fcf:	c7 04 24 7e db 00 00 	movl   $0xdb7e,(%esp)
 8221fd6:	e8 fc e8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8221fdb:	e9 8a 02 00 00       	jmp    822226a <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x32e>
 8221fe0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8221fe3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8221fe7:	8b 45 10             	mov    0x10(%ebp),%eax
 8221fea:	89 04 24             	mov    %eax,(%esp)
 8221fed:	e8 4e b2 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8221ff2:	83 f0 01             	xor    $0x1,%eax
 8221ff5:	84 c0                	test   %al,%al
 8221ff7:	74 29                	je     8222022 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0xe6>
 8221ff9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8222000:	00 
 8222001:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222008:	00 
 8222009:	c7 44 24 04 00 ce bc 	movl   $0x8bcce00,0x4(%esp)
 8222010:	08 
 8222011:	c7 04 24 7f db 00 00 	movl   $0xdb7f,(%esp)
 8222018:	e8 ba e8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822201d:	e9 48 02 00 00       	jmp    822226a <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x32e>
 8222022:	a1 50 be 40 09       	mov    0x940be50,%eax
 8222027:	89 04 24             	mov    %eax,(%esp)
 822202a:	e8 e1 d8 25 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 822202f:	84 c0                	test   %al,%al
 8222031:	74 16                	je     8222049 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x10d>
 8222033:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222036:	89 04 24             	mov    %eax,(%esp)
 8222039:	e8 26 35 42 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 822203e:	3c 07                	cmp    $0x7,%al
 8222040:	75 07                	jne    8222049 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x10d>
 8222042:	b8 01 00 00 00       	mov    $0x1,%eax
 8222047:	eb 05                	jmp    822204e <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x112>
 8222049:	b8 00 00 00 00       	mov    $0x0,%eax
 822204e:	84 c0                	test   %al,%al
 8222050:	74 06                	je     8222058 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x11c>
 8222052:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8222056:	eb 04                	jmp    822205c <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x120>
 8222058:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 822205c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 822205f:	3d 10 27 00 00       	cmp    $0x2710,%eax
 8222064:	0f 86 c6 00 00 00    	jbe    8222130 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x1f4>
 822206a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8222071:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8222078:	8b 45 e8             	mov    -0x18(%ebp),%eax
 822207b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 822207e:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 8222083:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8222086:	f7 e2                	mul    %edx
 8222088:	89 d0                	mov    %edx,%eax
 822208a:	c1 e8 0d             	shr    $0xd,%eax
 822208d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8222090:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8222093:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 8222098:	89 c8                	mov    %ecx,%eax
 822209a:	f7 e2                	mul    %edx
 822209c:	89 d0                	mov    %edx,%eax
 822209e:	c1 e8 0d             	shr    $0xd,%eax
 82220a1:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 82220a7:	89 ca                	mov    %ecx,%edx
 82220a9:	29 c2                	sub    %eax,%edx
 82220ab:	89 d0                	mov    %edx,%eax
 82220ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82220b0:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 82220b4:	74 3b                	je     82220f1 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x1b5>
 82220b6:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 82220b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82220bc:	89 04 24             	mov    %eax,(%esp)
 82220bf:	e8 96 78 ed ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82220c4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82220cb:	00 
 82220cc:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82220d0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82220d7:	00 
 82220d8:	c7 44 24 08 7c 00 00 	movl   $0x7c,0x8(%esp)
 82220df:	00 
 82220e0:	8b 55 0c             	mov    0xc(%ebp),%edx
 82220e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82220e7:	89 04 24             	mov    %eax,(%esp)
 82220ea:	e8 8f 6b ed ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82220ef:	eb 39                	jmp    822212a <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x1ee>
 82220f1:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 82220f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82220f7:	89 04 24             	mov    %eax,(%esp)
 82220fa:	e8 5b 78 ed ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82220ff:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8222106:	00 
 8222107:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 822210b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8222112:	00 
 8222113:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 822211a:	00 
 822211b:	8b 55 0c             	mov    0xc(%ebp),%edx
 822211e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8222122:	89 04 24             	mov    %eax,(%esp)
 8222125:	e8 54 6b ed ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 822212a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 822212d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8222130:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222133:	89 04 24             	mov    %eax,(%esp)
 8222136:	e8 e5 bd ed ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 822213b:	83 f8 03             	cmp    $0x3,%eax
 822213e:	74 1f                	je     822215f <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x223>
 8222140:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222143:	89 04 24             	mov    %eax,(%esp)
 8222146:	e8 d5 bd ed ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 822214b:	83 f8 04             	cmp    $0x4,%eax
 822214e:	75 16                	jne    8222166 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x22a>
 8222150:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222153:	89 04 24             	mov    %eax,(%esp)
 8222156:	e8 39 eb ee ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 822215b:	3c 02                	cmp    $0x2,%al
 822215d:	75 07                	jne    8222166 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x22a>
 822215f:	b8 01 00 00 00       	mov    $0x1,%eax
 8222164:	eb 05                	jmp    822216b <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x22f>
 8222166:	b8 00 00 00 00       	mov    $0x0,%eax
 822216b:	84 c0                	test   %al,%al
 822216d:	74 3a                	je     82221a9 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x26d>
 822216f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8222172:	ba 00 00 00 00       	mov    $0x0,%edx
 8222177:	89 45 d0             	mov    %eax,-0x30(%ebp)
 822217a:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 822217d:	df 6d d0             	fildll -0x30(%ebp)
 8222180:	dd 05 20 63 bd 08    	fldl   0x8bd6320
 8222186:	de c9                	fmulp  %st,%st(1)
 8222188:	d9 7d ce             	fnstcw -0x32(%ebp)
 822218b:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 822218f:	b4 0c                	mov    $0xc,%ah
 8222191:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 8222195:	d9 6d cc             	fldcw  -0x34(%ebp)
 8222198:	df 7d d0             	fistpll -0x30(%ebp)
 822219b:	d9 6d ce             	fldcw  -0x32(%ebp)
 822219e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82221a1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82221a4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82221a7:	eb 38                	jmp    82221e1 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x2a5>
 82221a9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82221ac:	ba 00 00 00 00       	mov    $0x0,%edx
 82221b1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82221b4:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 82221b7:	df 6d d0             	fildll -0x30(%ebp)
 82221ba:	dd 05 28 63 bd 08    	fldl   0x8bd6328
 82221c0:	de c9                	fmulp  %st,%st(1)
 82221c2:	d9 7d ce             	fnstcw -0x32(%ebp)
 82221c5:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 82221c9:	b4 0c                	mov    $0xc,%ah
 82221cb:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 82221cf:	d9 6d cc             	fldcw  -0x34(%ebp)
 82221d2:	df 7d d0             	fistpll -0x30(%ebp)
 82221d5:	d9 6d ce             	fldcw  -0x32(%ebp)
 82221d8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82221db:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82221de:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82221e1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82221e4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82221e7:	39 c2                	cmp    %eax,%edx
 82221e9:	73 7a                	jae    8222265 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x329>
 82221eb:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 82221ef:	74 3b                	je     822222c <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x2f0>
 82221f1:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 82221f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82221f7:	89 04 24             	mov    %eax,(%esp)
 82221fa:	e8 5b 77 ed ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82221ff:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8222206:	00 
 8222207:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 822220b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8222212:	00 
 8222213:	c7 44 24 08 7b 00 00 	movl   $0x7b,0x8(%esp)
 822221a:	00 
 822221b:	8b 55 0c             	mov    0xc(%ebp),%edx
 822221e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8222222:	89 04 24             	mov    %eax,(%esp)
 8222225:	e8 54 6a ed ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 822222a:	eb 39                	jmp    8222265 <_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf+0x329>
 822222c:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 822222f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222232:	89 04 24             	mov    %eax,(%esp)
 8222235:	e8 20 77 ed ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 822223a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8222241:	00 
 8222242:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8222246:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 822224d:	00 
 822224e:	c7 44 24 08 79 00 00 	movl   $0x79,0x8(%esp)
 8222255:	00 
 8222256:	8b 55 0c             	mov    0xc(%ebp),%edx
 8222259:	89 54 24 04          	mov    %edx,0x4(%esp)
 822225d:	89 04 24             	mov    %eax,(%esp)
 8222260:	e8 19 6a ed ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8222265:	b8 00 00 00 00       	mov    $0x0,%eax
 822226a:	83 c4 64             	add    $0x64,%esp
 822226d:	5b                   	pop    %ebx
 822226e:	5d                   	pop    %ebp
 822226f:	c3                   	ret

```

```c
// Dispatcher_CheckAssaultMotionHack::dispatch_sig @ 0x8221f3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckAssaultMotionHack::dispatch_sig
          (Dispatcher_CheckAssaultMotionHack *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  ulonglong local_34;
  uint local_20;
  uint local_1c;
  char local_15;
  uint local_14;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = LineFunc(0xdb73,
                     "virtual int Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 0;
      local_20 = 0;
      cVar2 = PacketBuf::get_int(param_2,&local_1c);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_int(param_2,&local_20);
        if (cVar2 == '\x01') {
          cVar2 = CPowerManager::IsPowerWarEventOn();
          if ((cVar2 == '\0') ||
             (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a'))
          {
            local_15 = false;
          }
          else {
            local_15 = true;
          }
          if (10000 < local_1c) {
            uVar5 = local_1c / 10000;
            local_10 = local_1c % 10000;
            local_14 = uVar5;
            if ((bool)local_15) {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x7c,1,uVar5,0);
            }
            else {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x7a,1,uVar5,0);
            }
            local_1c = local_10;
          }
          iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          if ((iVar4 == 3) ||
             ((iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1), iVar4 == 4 &&
              (cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1),
              cVar2 == '\x02')))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_34 = (ulonglong)local_1c;
            local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6320 * (double)local_34);
            local_1c = (uint)local_34;
          }
          else {
            local_34 = (ulonglong)local_1c;
            local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6328 * (double)local_34);
            local_1c = (uint)local_34;
          }
          uVar5 = local_1c;
          if (local_20 < local_1c) {
            if (local_15 == '\0') {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x79,1,uVar5,0);
            }
            else {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x7b,1,uVar5,0);
            }
          }
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xdb7f,
                           "virtual int Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xdb7e,
                         "virtual int Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
  }
  return uVar3;
}

```

