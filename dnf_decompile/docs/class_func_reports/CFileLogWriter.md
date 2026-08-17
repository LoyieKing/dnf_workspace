# CFileLogWriter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CFileLogWriter

```asm
// === 08106ff0 CFileLogWriter::CFileLogWriter  [0x08106ff0-0x810701d] ===
 8106ff0:	55                   	push   %ebp
 8106ff1:	89 e5                	mov    %esp,%ebp
 8106ff3:	83 ec 18             	sub    $0x18,%esp
 8106ff6:	8b 45 08             	mov    0x8(%ebp),%eax
 8106ff9:	c7 00 40 46 b4 08    	movl   $0x8b44640,(%eax)
 8106fff:	8b 45 08             	mov    0x8(%ebp),%eax
 8107002:	83 c0 04             	add    $0x4,%eax
 8107005:	89 04 24             	mov    %eax,(%esp)
 8107008:	e8 dd 0b 00 00       	call   8107bea <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEEC1Ev>
 810700d:	8b 45 08             	mov    0x8(%ebp),%eax
 8107010:	83 c0 1c             	add    $0x1c,%eax
 8107013:	89 04 24             	mov    %eax,(%esp)
 8107016:	e8 3b 0b 00 00       	call   8107b56 <_ZN6CMutexC1Ev>
 810701b:	c9                   	leave
 810701c:	c3                   	ret
 810701d:	90                   	nop

```

```c
// CFileLogWriter::CFileLogWriter @ 0x8106ff0

/* CFileLogWriter::CFileLogWriter() */

void __thiscall CFileLogWriter::CFileLogWriter(CFileLogWriter *this)

{
  *(undefined ***)this = &PTR__CFileLogWriter_08b44640;
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::map((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
         *)(this + 4));
  CMutex::CMutex((CMutex *)(this + 0x1c));
  return;
}

```

---

## writeLog

```asm
// === 0810707e CFileLogWriter::writeLog  [0x0810707e-0x810747b] ===
 810707e:	55                   	push   %ebp
 810707f:	89 e5                	mov    %esp,%ebp
 8107081:	57                   	push   %edi
 8107082:	56                   	push   %esi
 8107083:	53                   	push   %ebx
 8107084:	81 ec dc 02 00 00    	sub    $0x2dc,%esp
 810708a:	8b 45 08             	mov    0x8(%ebp),%eax
 810708d:	83 c0 1c             	add    $0x1c,%eax
 8107090:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107094:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8107097:	89 04 24             	mov    %eax,(%esp)
 810709a:	e8 c5 0b 00 00       	call   8107c64 <_ZN6CGuardI6CMutexEC1EPS0_>
 810709f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81070a6:	e8 a5 66 f7 ff       	call   807d750 <time@plt>
 81070ab:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81070ae:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81070b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81070b8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81070bb:	89 04 24             	mov    %eax,(%esp)
 81070be:	e8 9d 72 f7 ff       	call   807e360 <localtime_r@plt>
 81070c3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81070c6:	8d 45 14             	lea    0x14(%ebp),%eax
 81070c9:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81070cc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81070cf:	8b 40 0c             	mov    0xc(%eax),%eax
 81070d2:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81070d5:	8b 52 10             	mov    0x10(%edx),%edx
 81070d8:	8d 4a 01             	lea    0x1(%edx),%ecx
 81070db:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81070de:	8b 52 14             	mov    0x14(%edx),%edx
 81070e1:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 81070e7:	89 44 24 14          	mov    %eax,0x14(%esp)
 81070eb:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81070ef:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81070f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81070f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81070fa:	c7 44 24 04 9c 40 b4 	movl   $0x8b4409c,0x4(%esp)
 8107101:	08 
 8107102:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 8107108:	89 04 24             	mov    %eax,(%esp)
 810710b:	e8 30 73 f7 ff       	call   807e440 <sprintf@plt>
 8107110:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8107113:	89 04 24             	mov    %eax,(%esp)
 8107116:	e8 b5 8f 5d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 810711b:	8d 45 b7             	lea    -0x49(%ebp),%eax
 810711e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8107122:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 8107128:	89 44 24 04          	mov    %eax,0x4(%esp)
 810712c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 810712f:	89 04 24             	mov    %eax,(%esp)
 8107132:	e8 f9 04 60 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8107137:	eb 18                	jmp    8107151 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0xd3>
 8107139:	89 d3                	mov    %edx,%ebx
 810713b:	89 c6                	mov    %eax,%esi
 810713d:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8107140:	89 04 24             	mov    %eax,(%esp)
 8107143:	e8 a8 8f 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8107148:	89 f0                	mov    %esi,%eax
 810714a:	89 da                	mov    %ebx,%edx
 810714c:	e9 f9 02 00 00       	jmp    810744a <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3cc>
 8107151:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8107154:	89 04 24             	mov    %eax,(%esp)
 8107157:	e8 94 8f 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 810715c:	8b 45 08             	mov    0x8(%ebp),%eax
 810715f:	8d 48 04             	lea    0x4(%eax),%ecx
 8107162:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8107165:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8107168:	89 54 24 08          	mov    %edx,0x8(%esp)
 810716c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8107170:	89 04 24             	mov    %eax,(%esp)
 8107173:	e8 1e 0b 00 00       	call   8107c96 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 8107178:	83 ec 04             	sub    $0x4,%esp
 810717b:	8b 45 08             	mov    0x8(%ebp),%eax
 810717e:	8d 50 04             	lea    0x4(%eax),%edx
 8107181:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8107184:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107188:	89 04 24             	mov    %eax,(%esp)
 810718b:	e8 32 0b 00 00       	call   8107cc2 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 8107190:	83 ec 04             	sub    $0x4,%esp
 8107193:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8107196:	89 44 24 04          	mov    %eax,0x4(%esp)
 810719a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 810719d:	89 04 24             	mov    %eax,(%esp)
 81071a0:	e8 43 0b 00 00       	call   8107ce8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEneERKS5_>
 81071a5:	84 c0                	test   %al,%al
 81071a7:	74 36                	je     81071df <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x161>
 81071a9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81071ac:	89 04 24             	mov    %eax,(%esp)
 81071af:	e8 48 0b 00 00       	call   8107cfc <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEptEv>
 81071b4:	8b 40 04             	mov    0x4(%eax),%eax
 81071b7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81071ba:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81071bd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81071c1:	8b 45 10             	mov    0x10(%ebp),%eax
 81071c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81071c8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81071cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81071cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81071d2:	89 04 24             	mov    %eax,(%esp)
 81071d5:	e8 08 fd ff ff       	call   8106ee2 <_ZN5CFLog8writeLogEP2tmPKcPc>
 81071da:	e9 5e 02 00 00       	jmp    810743d <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3bf>
 81071df:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81071e2:	2d 80 51 01 00       	sub    $0x15180,%eax
 81071e7:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81071ea:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 81071f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81071f4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81071f7:	89 04 24             	mov    %eax,(%esp)
 81071fa:	e8 61 71 f7 ff       	call   807e360 <localtime_r@plt>
 81071ff:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8107202:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8107205:	8b 40 0c             	mov    0xc(%eax),%eax
 8107208:	8b 55 e0             	mov    -0x20(%ebp),%edx
 810720b:	8b 52 10             	mov    0x10(%edx),%edx
 810720e:	8d 4a 01             	lea    0x1(%edx),%ecx
 8107211:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8107214:	8b 52 14             	mov    0x14(%edx),%edx
 8107217:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 810721d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8107221:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8107225:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8107229:	8b 45 0c             	mov    0xc(%ebp),%eax
 810722c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8107230:	c7 44 24 04 9c 40 b4 	movl   $0x8b4409c,0x4(%esp)
 8107237:	08 
 8107238:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 810723e:	89 04 24             	mov    %eax,(%esp)
 8107241:	e8 fa 71 f7 ff       	call   807e440 <sprintf@plt>
 8107246:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8107249:	89 04 24             	mov    %eax,(%esp)
 810724c:	e8 7f 8e 5d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8107251:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8107254:	89 44 24 08          	mov    %eax,0x8(%esp)
 8107258:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 810725e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107262:	8d 45 98             	lea    -0x68(%ebp),%eax
 8107265:	89 04 24             	mov    %eax,(%esp)
 8107268:	e8 c3 03 60 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 810726d:	eb 18                	jmp    8107287 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x209>
 810726f:	89 d3                	mov    %edx,%ebx
 8107271:	89 c6                	mov    %eax,%esi
 8107273:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8107276:	89 04 24             	mov    %eax,(%esp)
 8107279:	e8 72 8e 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 810727e:	89 f0                	mov    %esi,%eax
 8107280:	89 da                	mov    %ebx,%edx
 8107282:	e9 a1 01 00 00       	jmp    8107428 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3aa>
 8107287:	8d 45 bf             	lea    -0x41(%ebp),%eax
 810728a:	89 04 24             	mov    %eax,(%esp)
 810728d:	e8 5e 8e 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8107292:	8b 45 08             	mov    0x8(%ebp),%eax
 8107295:	8d 48 04             	lea    0x4(%eax),%ecx
 8107298:	8d 45 94             	lea    -0x6c(%ebp),%eax
 810729b:	8d 55 98             	lea    -0x68(%ebp),%edx
 810729e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81072a2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81072a6:	89 04 24             	mov    %eax,(%esp)
 81072a9:	e8 e8 09 00 00       	call   8107c96 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 81072ae:	83 ec 04             	sub    $0x4,%esp
 81072b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81072b4:	8d 50 04             	lea    0x4(%eax),%edx
 81072b7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81072ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 81072be:	89 04 24             	mov    %eax,(%esp)
 81072c1:	e8 fc 09 00 00       	call   8107cc2 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 81072c6:	83 ec 04             	sub    $0x4,%esp
 81072c9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81072cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81072d0:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81072d3:	89 04 24             	mov    %eax,(%esp)
 81072d6:	e8 0d 0a 00 00       	call   8107ce8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEneERKS5_>
 81072db:	84 c0                	test   %al,%al
 81072dd:	74 33                	je     8107312 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x294>
 81072df:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81072e2:	89 04 24             	mov    %eax,(%esp)
 81072e5:	e8 12 0a 00 00       	call   8107cfc <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEptEv>
 81072ea:	8b 40 04             	mov    0x4(%eax),%eax
 81072ed:	85 c0                	test   %eax,%eax
 81072ef:	74 0c                	je     81072fd <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x27f>
 81072f1:	8b 10                	mov    (%eax),%edx
 81072f3:	83 c2 04             	add    $0x4,%edx
 81072f6:	8b 12                	mov    (%edx),%edx
 81072f8:	89 04 24             	mov    %eax,(%esp)
 81072fb:	ff d2                	call   *%edx
 81072fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8107300:	8d 50 04             	lea    0x4(%eax),%edx
 8107303:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8107306:	89 44 24 04          	mov    %eax,0x4(%esp)
 810730a:	89 14 24             	mov    %edx,(%esp)
 810730d:	e8 f8 09 00 00       	call   8107d0a <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 8107312:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8107319:	e8 32 d1 61 00       	call   8724450 <_Znwj>
 810731e:	89 c3                	mov    %eax,%ebx
 8107320:	89 d8                	mov    %ebx,%eax
 8107322:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8107325:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107329:	89 04 24             	mov    %eax,(%esp)
 810732c:	e8 93 fa ff ff       	call   8106dc4 <_ZN5CFLogC1ERSs>
 8107331:	eb 15                	jmp    8107348 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x2ca>
 8107333:	89 d6                	mov    %edx,%esi
 8107335:	89 c7                	mov    %eax,%edi
 8107337:	89 1c 24             	mov    %ebx,(%esp)
 810733a:	e8 b1 d1 61 00       	call   87244f0 <_ZdlPv>
 810733f:	89 f8                	mov    %edi,%eax
 8107341:	89 f2                	mov    %esi,%edx
 8107343:	e9 be 00 00 00       	jmp    8107406 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x388>
 8107348:	89 d8                	mov    %ebx,%eax
 810734a:	89 45 90             	mov    %eax,-0x70(%ebp)
 810734d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8107350:	8d 55 90             	lea    -0x70(%ebp),%edx
 8107353:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107357:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 810735a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810735e:	89 04 24             	mov    %eax,(%esp)
 8107361:	e8 be 09 00 00       	call   8107d24 <_ZSt9make_pairIRSsRP5CFLogESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8107366:	83 ec 04             	sub    $0x4,%esp
 8107369:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 810736c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107370:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8107373:	89 04 24             	mov    %eax,(%esp)
 8107376:	e8 ed 09 00 00       	call   8107d68 <_ZNSt4pairIKSsP5CFLogEC1ISsS2_EEOS_IT_T0_E>
 810737b:	8b 45 08             	mov    0x8(%ebp),%eax
 810737e:	8d 48 04             	lea    0x4(%eax),%ecx
 8107381:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8107384:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8107387:	89 54 24 08          	mov    %edx,0x8(%esp)
 810738b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810738f:	89 04 24             	mov    %eax,(%esp)
 8107392:	e8 09 0a 00 00       	call   8107da0 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE6insertERKS6_>
 8107397:	83 ec 04             	sub    $0x4,%esp
 810739a:	0f b6 5d c8          	movzbl -0x38(%ebp),%ebx
 810739e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81073a1:	89 04 24             	mov    %eax,(%esp)
 81073a4:	e8 2d 08 00 00       	call   8107bd6 <_ZNSt4pairIKSsP5CFLogED1Ev>
 81073a9:	eb 2a                	jmp    81073d5 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x357>
 81073ab:	89 d3                	mov    %edx,%ebx
 81073ad:	89 c6                	mov    %eax,%esi
 81073af:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81073b2:	89 04 24             	mov    %eax,(%esp)
 81073b5:	e8 1c 08 00 00       	call   8107bd6 <_ZNSt4pairIKSsP5CFLogED1Ev>
 81073ba:	89 f0                	mov    %esi,%eax
 81073bc:	89 da                	mov    %ebx,%edx
 81073be:	eb 00                	jmp    81073c0 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x342>
 81073c0:	89 d3                	mov    %edx,%ebx
 81073c2:	89 c6                	mov    %eax,%esi
 81073c4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81073c7:	89 04 24             	mov    %eax,(%esp)
 81073ca:	e8 f3 07 00 00       	call   8107bc2 <_ZNSt4pairISsP5CFLogED1Ev>
 81073cf:	89 f0                	mov    %esi,%eax
 81073d1:	89 da                	mov    %ebx,%edx
 81073d3:	eb 31                	jmp    8107406 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x388>
 81073d5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81073d8:	89 04 24             	mov    %eax,(%esp)
 81073db:	e8 e2 07 00 00       	call   8107bc2 <_ZNSt4pairISsP5CFLogED1Ev>
 81073e0:	84 db                	test   %bl,%bl
 81073e2:	74 37                	je     810741b <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x39d>
 81073e4:	8b 55 a8             	mov    -0x58(%ebp),%edx
 81073e7:	8b 45 90             	mov    -0x70(%ebp),%eax
 81073ea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81073ee:	8b 55 10             	mov    0x10(%ebp),%edx
 81073f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81073f5:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81073f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81073fc:	89 04 24             	mov    %eax,(%esp)
 81073ff:	e8 de fa ff ff       	call   8106ee2 <_ZN5CFLog8writeLogEP2tmPKcPc>
 8107404:	eb 15                	jmp    810741b <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x39d>
 8107406:	89 d3                	mov    %edx,%ebx
 8107408:	89 c6                	mov    %eax,%esi
 810740a:	8d 45 98             	lea    -0x68(%ebp),%eax
 810740d:	89 04 24             	mov    %eax,(%esp)
 8107410:	e8 cb 07 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107415:	89 f0                	mov    %esi,%eax
 8107417:	89 da                	mov    %ebx,%edx
 8107419:	eb 0d                	jmp    8107428 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3aa>
 810741b:	8d 45 98             	lea    -0x68(%ebp),%eax
 810741e:	89 04 24             	mov    %eax,(%esp)
 8107421:	e8 ba 07 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107426:	eb 15                	jmp    810743d <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3bf>
 8107428:	89 d3                	mov    %edx,%ebx
 810742a:	89 c6                	mov    %eax,%esi
 810742c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 810742f:	89 04 24             	mov    %eax,(%esp)
 8107432:	e8 a9 07 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107437:	89 f0                	mov    %esi,%eax
 8107439:	89 da                	mov    %ebx,%edx
 810743b:	eb 0d                	jmp    810744a <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3cc>
 810743d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8107440:	89 04 24             	mov    %eax,(%esp)
 8107443:	e8 98 07 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107448:	eb 1b                	jmp    8107465 <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3e7>
 810744a:	89 d3                	mov    %edx,%ebx
 810744c:	89 c6                	mov    %eax,%esi
 810744e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8107451:	89 04 24             	mov    %eax,(%esp)
 8107454:	e8 27 08 00 00       	call   8107c80 <_ZN6CGuardI6CMutexED1Ev>
 8107459:	89 f0                	mov    %esi,%eax
 810745b:	89 da                	mov    %ebx,%edx
 810745d:	89 04 24             	mov    %eax,(%esp)
 8107460:	e8 eb c2 9d 00       	call   8ae3750 <_Unwind_Resume>
 8107465:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8107468:	89 04 24             	mov    %eax,(%esp)
 810746b:	e8 10 08 00 00       	call   8107c80 <_ZN6CGuardI6CMutexED1Ev>
 8107470:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8107473:	83 c4 00             	add    $0x0,%esp
 8107476:	5b                   	pop    %ebx
 8107477:	5e                   	pop    %esi
 8107478:	5f                   	pop    %edi
 8107479:	5d                   	pop    %ebp
 810747a:	c3                   	ret
 810747b:	90                   	nop

```

```c
// CFileLogWriter::writeLog @ 0x810707e

/* CFileLogWriter::writeLog(char const*, char const*, ...) */

void __thiscall CFileLogWriter::writeLog(CFileLogWriter *this,char *param_1,char *param_2,...)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  CFLog *this_00;
  _Rb_tree_iterator *p_Var4;
  string *psVar5;
  char local_2cc [256];
  char local_1cc [256];
  tm local_cc;
  tm local_a0;
  CFLog *local_74;
  string local_70;
  string local_6c [4];
  int local_68;
  string local_64;
  string local_60;
  char *local_5c;
  time_t local_58;
  CGuard<CMutex> local_54 [7];
  allocator<char> local_4d;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_4c [7];
  allocator<char> local_45;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_44 [4];
  pair local_40 [4];
  char local_3c;
  pair<std::string_const,CFLog*> local_38 [8];
  string local_30 [2];
  tm *local_28;
  tm *local_24;
  CFLog *local_20;
  
  CGuard<CMutex>::CGuard(local_54,(CMutex *)(this + 0x1c));
  local_58 = time((time_t *)0x0);
  local_28 = localtime_r(&local_58,&local_a0);
  local_5c = &stack0x00000010;
  sprintf(local_1cc,"%s%04d%02d%02d.log",param_1,local_28->tm_year + 0x76c,local_28->tm_mon + 1,
          local_28->tm_mday);
  std::allocator<char>::allocator();
                    /* try { // try from 08107132 to 08107136 has its CatchHandler @ 08107139 */
  std::string::string((string *)&local_60,local_1cc,(allocator *)&local_4d);
  std::allocator<char>::~allocator(&local_4d);
                    /* try { // try from 08107173 to 081071d9 has its CatchHandler @ 08107428 */
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::find(&local_64);
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::end(local_4c);
  cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64,
                     (_Rb_tree_iterator *)local_4c);
  if (cVar2 == '\0') {
    local_68 = local_58 + -0x15180;
    local_24 = localtime_r(&local_68,&local_cc);
    sprintf(local_2cc,"%s%04d%02d%02d.log",param_1,local_24->tm_year + 0x76c,local_24->tm_mon + 1,
            local_24->tm_mday);
    std::allocator<char>::allocator();
                    /* try { // try from 08107268 to 0810726c has its CatchHandler @ 0810726f */
    std::string::string(local_6c,local_2cc,(allocator *)&local_45);
    std::allocator<char>::~allocator(&local_45);
    psVar5 = local_6c;
                    /* try { // try from 081072a9 to 0810731d has its CatchHandler @ 08107406 */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::find(&local_70);
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::end(local_44);
    p_Var4 = (_Rb_tree_iterator *)local_44;
    cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70,p_Var4);
    if (cVar2 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70);
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1,p_Var4,psVar5);
      }
      std::
      map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
      ::erase((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
               *)(this + 4),local_70._M_dataplus._M_p);
    }
    this_00 = operator_new(0xc);
                    /* try { // try from 0810732c to 08107330 has its CatchHandler @ 08107333 */
    CFLog::CFLog(this_00,&local_60);
    local_74 = this_00;
                    /* try { // try from 08107361 to 08107365 has its CatchHandler @ 08107406 */
    std::make_pair<std::string&,CFLog*&>(local_30,(CFLog **)&local_60);
                    /* try { // try from 08107376 to 0810737a has its CatchHandler @ 081073c0 */
    std::pair<std::string_const,CFLog*>::pair<std::string,CFLog*>(local_38,(pair *)local_30);
                    /* try { // try from 08107392 to 08107396 has its CatchHandler @ 081073ab */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::insert(local_40);
                    /* try { // try from 081073a4 to 081073a8 has its CatchHandler @ 081073c0 */
    std::pair<std::string_const,CFLog*>::~pair(local_38);
                    /* try { // try from 081073db to 08107403 has its CatchHandler @ 08107406 */
    std::pair<std::string,CFLog*>::~pair((pair<std::string,CFLog*> *)local_30);
    if (local_3c != '\0') {
      CFLog::writeLog(local_74,local_28,param_2,local_5c);
    }
                    /* try { // try from 08107421 to 08107425 has its CatchHandler @ 08107428 */
    std::string::~string(local_6c);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64);
    local_20 = *(CFLog **)(iVar3 + 4);
    CFLog::writeLog(local_20,local_28,param_2,local_5c);
  }
                    /* try { // try from 08107443 to 08107447 has its CatchHandler @ 0810744a */
  std::string::~string((string *)&local_60);
  CGuard<CMutex>::~CGuard(local_54);
  return;
}

```

---

## writeRawLog

```asm
// === 0810747c CFileLogWriter::writeRawLog  [0x0810747c-0x810786b] ===
 810747c:	55                   	push   %ebp
 810747d:	89 e5                	mov    %esp,%ebp
 810747f:	57                   	push   %edi
 8107480:	56                   	push   %esi
 8107481:	53                   	push   %ebx
 8107482:	81 ec dc 02 00 00    	sub    $0x2dc,%esp
 8107488:	8b 45 08             	mov    0x8(%ebp),%eax
 810748b:	83 c0 1c             	add    $0x1c,%eax
 810748e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107492:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8107495:	89 04 24             	mov    %eax,(%esp)
 8107498:	e8 c7 07 00 00       	call   8107c64 <_ZN6CGuardI6CMutexEC1EPS0_>
 810749d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81074a4:	e8 a7 62 f7 ff       	call   807d750 <time@plt>
 81074a9:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81074ac:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81074b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81074b6:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81074b9:	89 04 24             	mov    %eax,(%esp)
 81074bc:	e8 9f 6e f7 ff       	call   807e360 <localtime_r@plt>
 81074c1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81074c4:	8d 45 14             	lea    0x14(%ebp),%eax
 81074c7:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81074ca:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81074cd:	8b 40 0c             	mov    0xc(%eax),%eax
 81074d0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81074d3:	8b 52 10             	mov    0x10(%edx),%edx
 81074d6:	8d 4a 01             	lea    0x1(%edx),%ecx
 81074d9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81074dc:	8b 52 14             	mov    0x14(%edx),%edx
 81074df:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 81074e5:	89 44 24 14          	mov    %eax,0x14(%esp)
 81074e9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81074ed:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81074f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81074f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81074f8:	c7 44 24 04 9c 40 b4 	movl   $0x8b4409c,0x4(%esp)
 81074ff:	08 
 8107500:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 8107506:	89 04 24             	mov    %eax,(%esp)
 8107509:	e8 32 6f f7 ff       	call   807e440 <sprintf@plt>
 810750e:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8107511:	89 04 24             	mov    %eax,(%esp)
 8107514:	e8 b7 8b 5d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8107519:	8d 45 b7             	lea    -0x49(%ebp),%eax
 810751c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8107520:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 8107526:	89 44 24 04          	mov    %eax,0x4(%esp)
 810752a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 810752d:	89 04 24             	mov    %eax,(%esp)
 8107530:	e8 fb 00 60 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8107535:	eb 18                	jmp    810754f <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0xd3>
 8107537:	89 d3                	mov    %edx,%ebx
 8107539:	89 c6                	mov    %eax,%esi
 810753b:	8d 45 b7             	lea    -0x49(%ebp),%eax
 810753e:	89 04 24             	mov    %eax,(%esp)
 8107541:	e8 aa 8b 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8107546:	89 f0                	mov    %esi,%eax
 8107548:	89 da                	mov    %ebx,%edx
 810754a:	e9 eb 02 00 00       	jmp    810783a <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x3be>
 810754f:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8107552:	89 04 24             	mov    %eax,(%esp)
 8107555:	e8 96 8b 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 810755a:	8b 45 08             	mov    0x8(%ebp),%eax
 810755d:	8d 48 04             	lea    0x4(%eax),%ecx
 8107560:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8107563:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8107566:	89 54 24 08          	mov    %edx,0x8(%esp)
 810756a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810756e:	89 04 24             	mov    %eax,(%esp)
 8107571:	e8 20 07 00 00       	call   8107c96 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 8107576:	83 ec 04             	sub    $0x4,%esp
 8107579:	8b 45 08             	mov    0x8(%ebp),%eax
 810757c:	8d 50 04             	lea    0x4(%eax),%edx
 810757f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8107582:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107586:	89 04 24             	mov    %eax,(%esp)
 8107589:	e8 34 07 00 00       	call   8107cc2 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 810758e:	83 ec 04             	sub    $0x4,%esp
 8107591:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8107594:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107598:	8d 45 a0             	lea    -0x60(%ebp),%eax
 810759b:	89 04 24             	mov    %eax,(%esp)
 810759e:	e8 45 07 00 00       	call   8107ce8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEneERKS5_>
 81075a3:	84 c0                	test   %al,%al
 81075a5:	74 2f                	je     81075d6 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x15a>
 81075a7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81075aa:	89 04 24             	mov    %eax,(%esp)
 81075ad:	e8 4a 07 00 00       	call   8107cfc <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEptEv>
 81075b2:	8b 40 04             	mov    0x4(%eax),%eax
 81075b5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81075b8:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81075bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81075bf:	8b 45 10             	mov    0x10(%ebp),%eax
 81075c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81075c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81075c9:	89 04 24             	mov    %eax,(%esp)
 81075cc:	e8 bd f9 ff ff       	call   8106f8e <_ZN5CFLog8writeLogEPKcPc>
 81075d1:	e9 57 02 00 00       	jmp    810782d <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x3b1>
 81075d6:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81075d9:	2d 80 51 01 00       	sub    $0x15180,%eax
 81075de:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81075e1:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 81075e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81075eb:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81075ee:	89 04 24             	mov    %eax,(%esp)
 81075f1:	e8 6a 6d f7 ff       	call   807e360 <localtime_r@plt>
 81075f6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81075f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81075fc:	8b 40 0c             	mov    0xc(%eax),%eax
 81075ff:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8107602:	8b 52 10             	mov    0x10(%edx),%edx
 8107605:	8d 4a 01             	lea    0x1(%edx),%ecx
 8107608:	8b 55 e0             	mov    -0x20(%ebp),%edx
 810760b:	8b 52 14             	mov    0x14(%edx),%edx
 810760e:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 8107614:	89 44 24 14          	mov    %eax,0x14(%esp)
 8107618:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 810761c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8107620:	8b 45 0c             	mov    0xc(%ebp),%eax
 8107623:	89 44 24 08          	mov    %eax,0x8(%esp)
 8107627:	c7 44 24 04 9c 40 b4 	movl   $0x8b4409c,0x4(%esp)
 810762e:	08 
 810762f:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 8107635:	89 04 24             	mov    %eax,(%esp)
 8107638:	e8 03 6e f7 ff       	call   807e440 <sprintf@plt>
 810763d:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8107640:	89 04 24             	mov    %eax,(%esp)
 8107643:	e8 88 8a 5d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8107648:	8d 45 bf             	lea    -0x41(%ebp),%eax
 810764b:	89 44 24 08          	mov    %eax,0x8(%esp)
 810764f:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 8107655:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107659:	8d 45 98             	lea    -0x68(%ebp),%eax
 810765c:	89 04 24             	mov    %eax,(%esp)
 810765f:	e8 cc ff 5f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8107664:	eb 18                	jmp    810767e <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x202>
 8107666:	89 d3                	mov    %edx,%ebx
 8107668:	89 c6                	mov    %eax,%esi
 810766a:	8d 45 bf             	lea    -0x41(%ebp),%eax
 810766d:	89 04 24             	mov    %eax,(%esp)
 8107670:	e8 7b 8a 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8107675:	89 f0                	mov    %esi,%eax
 8107677:	89 da                	mov    %ebx,%edx
 8107679:	e9 9a 01 00 00       	jmp    8107818 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x39c>
 810767e:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8107681:	89 04 24             	mov    %eax,(%esp)
 8107684:	e8 67 8a 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8107689:	8b 45 08             	mov    0x8(%ebp),%eax
 810768c:	8d 48 04             	lea    0x4(%eax),%ecx
 810768f:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8107692:	8d 55 98             	lea    -0x68(%ebp),%edx
 8107695:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107699:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810769d:	89 04 24             	mov    %eax,(%esp)
 81076a0:	e8 f1 05 00 00       	call   8107c96 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 81076a5:	83 ec 04             	sub    $0x4,%esp
 81076a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81076ab:	8d 50 04             	lea    0x4(%eax),%edx
 81076ae:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81076b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81076b5:	89 04 24             	mov    %eax,(%esp)
 81076b8:	e8 05 06 00 00       	call   8107cc2 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 81076bd:	83 ec 04             	sub    $0x4,%esp
 81076c0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81076c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81076c7:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81076ca:	89 04 24             	mov    %eax,(%esp)
 81076cd:	e8 16 06 00 00       	call   8107ce8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEneERKS5_>
 81076d2:	84 c0                	test   %al,%al
 81076d4:	74 33                	je     8107709 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x28d>
 81076d6:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81076d9:	89 04 24             	mov    %eax,(%esp)
 81076dc:	e8 1b 06 00 00       	call   8107cfc <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEptEv>
 81076e1:	8b 40 04             	mov    0x4(%eax),%eax
 81076e4:	85 c0                	test   %eax,%eax
 81076e6:	74 0c                	je     81076f4 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x278>
 81076e8:	8b 10                	mov    (%eax),%edx
 81076ea:	83 c2 04             	add    $0x4,%edx
 81076ed:	8b 12                	mov    (%edx),%edx
 81076ef:	89 04 24             	mov    %eax,(%esp)
 81076f2:	ff d2                	call   *%edx
 81076f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81076f7:	8d 50 04             	lea    0x4(%eax),%edx
 81076fa:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81076fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107701:	89 14 24             	mov    %edx,(%esp)
 8107704:	e8 01 06 00 00       	call   8107d0a <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 8107709:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8107710:	e8 3b cd 61 00       	call   8724450 <_Znwj>
 8107715:	89 c3                	mov    %eax,%ebx
 8107717:	89 d8                	mov    %ebx,%eax
 8107719:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 810771c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107720:	89 04 24             	mov    %eax,(%esp)
 8107723:	e8 9c f6 ff ff       	call   8106dc4 <_ZN5CFLogC1ERSs>
 8107728:	eb 15                	jmp    810773f <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x2c3>
 810772a:	89 d6                	mov    %edx,%esi
 810772c:	89 c7                	mov    %eax,%edi
 810772e:	89 1c 24             	mov    %ebx,(%esp)
 8107731:	e8 ba cd 61 00       	call   87244f0 <_ZdlPv>
 8107736:	89 f8                	mov    %edi,%eax
 8107738:	89 f2                	mov    %esi,%edx
 810773a:	e9 b7 00 00 00       	jmp    81077f6 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x37a>
 810773f:	89 d8                	mov    %ebx,%eax
 8107741:	89 45 90             	mov    %eax,-0x70(%ebp)
 8107744:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8107747:	8d 55 90             	lea    -0x70(%ebp),%edx
 810774a:	89 54 24 08          	mov    %edx,0x8(%esp)
 810774e:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8107751:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107755:	89 04 24             	mov    %eax,(%esp)
 8107758:	e8 c7 05 00 00       	call   8107d24 <_ZSt9make_pairIRSsRP5CFLogESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 810775d:	83 ec 04             	sub    $0x4,%esp
 8107760:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8107763:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107767:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810776a:	89 04 24             	mov    %eax,(%esp)
 810776d:	e8 f6 05 00 00       	call   8107d68 <_ZNSt4pairIKSsP5CFLogEC1ISsS2_EEOS_IT_T0_E>
 8107772:	8b 45 08             	mov    0x8(%ebp),%eax
 8107775:	8d 48 04             	lea    0x4(%eax),%ecx
 8107778:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 810777b:	8d 55 cc             	lea    -0x34(%ebp),%edx
 810777e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107782:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8107786:	89 04 24             	mov    %eax,(%esp)
 8107789:	e8 12 06 00 00       	call   8107da0 <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE6insertERKS6_>
 810778e:	83 ec 04             	sub    $0x4,%esp
 8107791:	0f b6 5d c8          	movzbl -0x38(%ebp),%ebx
 8107795:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8107798:	89 04 24             	mov    %eax,(%esp)
 810779b:	e8 36 04 00 00       	call   8107bd6 <_ZNSt4pairIKSsP5CFLogED1Ev>
 81077a0:	eb 2a                	jmp    81077cc <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x350>
 81077a2:	89 d3                	mov    %edx,%ebx
 81077a4:	89 c6                	mov    %eax,%esi
 81077a6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81077a9:	89 04 24             	mov    %eax,(%esp)
 81077ac:	e8 25 04 00 00       	call   8107bd6 <_ZNSt4pairIKSsP5CFLogED1Ev>
 81077b1:	89 f0                	mov    %esi,%eax
 81077b3:	89 da                	mov    %ebx,%edx
 81077b5:	eb 00                	jmp    81077b7 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x33b>
 81077b7:	89 d3                	mov    %edx,%ebx
 81077b9:	89 c6                	mov    %eax,%esi
 81077bb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81077be:	89 04 24             	mov    %eax,(%esp)
 81077c1:	e8 fc 03 00 00       	call   8107bc2 <_ZNSt4pairISsP5CFLogED1Ev>
 81077c6:	89 f0                	mov    %esi,%eax
 81077c8:	89 da                	mov    %ebx,%edx
 81077ca:	eb 2a                	jmp    81077f6 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x37a>
 81077cc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81077cf:	89 04 24             	mov    %eax,(%esp)
 81077d2:	e8 eb 03 00 00       	call   8107bc2 <_ZNSt4pairISsP5CFLogED1Ev>
 81077d7:	84 db                	test   %bl,%bl
 81077d9:	74 30                	je     810780b <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x38f>
 81077db:	8b 55 a8             	mov    -0x58(%ebp),%edx
 81077de:	8b 45 90             	mov    -0x70(%ebp),%eax
 81077e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81077e5:	8b 55 10             	mov    0x10(%ebp),%edx
 81077e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81077ec:	89 04 24             	mov    %eax,(%esp)
 81077ef:	e8 9a f7 ff ff       	call   8106f8e <_ZN5CFLog8writeLogEPKcPc>
 81077f4:	eb 15                	jmp    810780b <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x38f>
 81077f6:	89 d3                	mov    %edx,%ebx
 81077f8:	89 c6                	mov    %eax,%esi
 81077fa:	8d 45 98             	lea    -0x68(%ebp),%eax
 81077fd:	89 04 24             	mov    %eax,(%esp)
 8107800:	e8 db 03 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107805:	89 f0                	mov    %esi,%eax
 8107807:	89 da                	mov    %ebx,%edx
 8107809:	eb 0d                	jmp    8107818 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x39c>
 810780b:	8d 45 98             	lea    -0x68(%ebp),%eax
 810780e:	89 04 24             	mov    %eax,(%esp)
 8107811:	e8 ca 03 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107816:	eb 15                	jmp    810782d <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x3b1>
 8107818:	89 d3                	mov    %edx,%ebx
 810781a:	89 c6                	mov    %eax,%esi
 810781c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 810781f:	89 04 24             	mov    %eax,(%esp)
 8107822:	e8 b9 03 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107827:	89 f0                	mov    %esi,%eax
 8107829:	89 da                	mov    %ebx,%edx
 810782b:	eb 0d                	jmp    810783a <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x3be>
 810782d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8107830:	89 04 24             	mov    %eax,(%esp)
 8107833:	e8 a8 03 60 00       	call   8707be0 <_ZNSsD1Ev>
 8107838:	eb 1b                	jmp    8107855 <_ZN14CFileLogWriter11writeRawLogEPKcS1_z+0x3d9>
 810783a:	89 d3                	mov    %edx,%ebx
 810783c:	89 c6                	mov    %eax,%esi
 810783e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8107841:	89 04 24             	mov    %eax,(%esp)
 8107844:	e8 37 04 00 00       	call   8107c80 <_ZN6CGuardI6CMutexED1Ev>
 8107849:	89 f0                	mov    %esi,%eax
 810784b:	89 da                	mov    %ebx,%edx
 810784d:	89 04 24             	mov    %eax,(%esp)
 8107850:	e8 fb be 9d 00       	call   8ae3750 <_Unwind_Resume>
 8107855:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8107858:	89 04 24             	mov    %eax,(%esp)
 810785b:	e8 20 04 00 00       	call   8107c80 <_ZN6CGuardI6CMutexED1Ev>
 8107860:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8107863:	83 c4 00             	add    $0x0,%esp
 8107866:	5b                   	pop    %ebx
 8107867:	5e                   	pop    %esi
 8107868:	5f                   	pop    %edi
 8107869:	5d                   	pop    %ebp
 810786a:	c3                   	ret
 810786b:	90                   	nop

```

```c
// CFileLogWriter::writeRawLog @ 0x810747c

/* CFileLogWriter::writeRawLog(char const*, char const*, ...) */

void __thiscall CFileLogWriter::writeRawLog(CFileLogWriter *this,char *param_1,char *param_2,...)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  CFLog *this_00;
  _Rb_tree_iterator *p_Var4;
  string *psVar5;
  char local_2cc [256];
  char local_1cc [256];
  tm local_cc;
  tm local_a0;
  CFLog *local_74;
  string local_70;
  string local_6c [4];
  int local_68;
  string local_64;
  string local_60;
  char *local_5c;
  time_t local_58;
  CGuard<CMutex> local_54 [7];
  allocator<char> local_4d;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_4c [7];
  allocator<char> local_45;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_44 [4];
  pair local_40 [4];
  char local_3c;
  pair<std::string_const,CFLog*> local_38 [8];
  string local_30 [2];
  tm *local_28;
  tm *local_24;
  CFLog *local_20;
  
  CGuard<CMutex>::CGuard(local_54,(CMutex *)(this + 0x1c));
  local_58 = time((time_t *)0x0);
  local_28 = localtime_r(&local_58,&local_a0);
  local_5c = &stack0x00000010;
  sprintf(local_1cc,"%s%04d%02d%02d.log",param_1,local_28->tm_year + 0x76c,local_28->tm_mon + 1,
          local_28->tm_mday);
  std::allocator<char>::allocator();
                    /* try { // try from 08107530 to 08107534 has its CatchHandler @ 08107537 */
  std::string::string((string *)&local_60,local_1cc,(allocator *)&local_4d);
  std::allocator<char>::~allocator(&local_4d);
                    /* try { // try from 08107571 to 081075d0 has its CatchHandler @ 08107818 */
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::find(&local_64);
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::end(local_4c);
  cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64,
                     (_Rb_tree_iterator *)local_4c);
  if (cVar2 == '\0') {
    local_68 = local_58 + -0x15180;
    local_24 = localtime_r(&local_68,&local_cc);
    sprintf(local_2cc,"%s%04d%02d%02d.log",param_1,local_24->tm_year + 0x76c,local_24->tm_mon + 1,
            local_24->tm_mday);
    std::allocator<char>::allocator();
                    /* try { // try from 0810765f to 08107663 has its CatchHandler @ 08107666 */
    std::string::string(local_6c,local_2cc,(allocator *)&local_45);
    std::allocator<char>::~allocator(&local_45);
    psVar5 = local_6c;
                    /* try { // try from 081076a0 to 08107714 has its CatchHandler @ 081077f6 */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::find(&local_70);
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::end(local_44);
    p_Var4 = (_Rb_tree_iterator *)local_44;
    cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70,p_Var4);
    if (cVar2 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70);
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1,p_Var4,psVar5);
      }
      std::
      map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
      ::erase((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
               *)(this + 4),local_70._M_dataplus._M_p);
    }
    this_00 = operator_new(0xc);
                    /* try { // try from 08107723 to 08107727 has its CatchHandler @ 0810772a */
    CFLog::CFLog(this_00,&local_60);
    local_74 = this_00;
                    /* try { // try from 08107758 to 0810775c has its CatchHandler @ 081077f6 */
    std::make_pair<std::string&,CFLog*&>(local_30,(CFLog **)&local_60);
                    /* try { // try from 0810776d to 08107771 has its CatchHandler @ 081077b7 */
    std::pair<std::string_const,CFLog*>::pair<std::string,CFLog*>(local_38,(pair *)local_30);
                    /* try { // try from 08107789 to 0810778d has its CatchHandler @ 081077a2 */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::insert(local_40);
                    /* try { // try from 0810779b to 0810779f has its CatchHandler @ 081077b7 */
    std::pair<std::string_const,CFLog*>::~pair(local_38);
                    /* try { // try from 081077d2 to 081077f3 has its CatchHandler @ 081077f6 */
    std::pair<std::string,CFLog*>::~pair((pair<std::string,CFLog*> *)local_30);
    if (local_3c != '\0') {
      CFLog::writeLog(local_74,param_2,local_5c);
    }
                    /* try { // try from 08107811 to 08107815 has its CatchHandler @ 08107818 */
    std::string::~string(local_6c);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64);
    local_20 = *(CFLog **)(iVar3 + 4);
    CFLog::writeLog(local_20,param_2,local_5c);
  }
                    /* try { // try from 08107833 to 08107837 has its CatchHandler @ 0810783a */
  std::string::~string((string *)&local_60);
  CGuard<CMutex>::~CGuard(local_54);
  return;
}

```

---

## ~CFileLogWriter

```asm
// === 0810701e CFileLogWriter::~CFileLogWriter  [0x0810701e-0x810705f] ===
 810701e:	55                   	push   %ebp
 810701f:	89 e5                	mov    %esp,%ebp
 8107021:	83 ec 18             	sub    $0x18,%esp
 8107024:	8b 45 08             	mov    0x8(%ebp),%eax
 8107027:	c7 00 40 46 b4 08    	movl   $0x8b44640,(%eax)
 810702d:	8b 45 08             	mov    0x8(%ebp),%eax
 8107030:	83 c0 1c             	add    $0x1c,%eax
 8107033:	89 04 24             	mov    %eax,(%esp)
 8107036:	e8 37 0b 00 00       	call   8107b72 <_ZN6CMutexD1Ev>
 810703b:	8b 45 08             	mov    0x8(%ebp),%eax
 810703e:	83 c0 04             	add    $0x4,%eax
 8107041:	89 04 24             	mov    %eax,(%esp)
 8107044:	e8 65 0b 00 00       	call   8107bae <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEED1Ev>
 8107049:	b8 00 00 00 00       	mov    $0x0,%eax
 810704e:	84 c0                	test   %al,%al
 8107050:	74 0b                	je     810705d <_ZN14CFileLogWriterD1Ev+0x3f>
 8107052:	8b 45 08             	mov    0x8(%ebp),%eax
 8107055:	89 04 24             	mov    %eax,(%esp)
 8107058:	e8 93 d4 61 00       	call   87244f0 <_ZdlPv>
 810705d:	c9                   	leave
 810705e:	c3                   	ret
 810705f:	90                   	nop

```

```c
// CFileLogWriter::~CFileLogWriter @ 0x810701e

/* WARNING: Removing unreachable block (ram,0x08107052) */
/* CFileLogWriter::~CFileLogWriter() */

void __thiscall CFileLogWriter::~CFileLogWriter(CFileLogWriter *this)

{
  *(undefined ***)this = &PTR__CFileLogWriter_08b44640;
  CMutex::~CMutex((CMutex *)(this + 0x1c));
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::~map((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
          *)(this + 4));
  return;
}

```

---

## ~CFileLogWriter_08107060

```asm
// === 08107060 CFileLogWriter::~CFileLogWriter  [0x08107060-0x810707d] ===
 8107060:	55                   	push   %ebp
 8107061:	89 e5                	mov    %esp,%ebp
 8107063:	83 ec 18             	sub    $0x18,%esp
 8107066:	8b 45 08             	mov    0x8(%ebp),%eax
 8107069:	89 04 24             	mov    %eax,(%esp)
 810706c:	e8 ad ff ff ff       	call   810701e <_ZN14CFileLogWriterD1Ev>
 8107071:	8b 45 08             	mov    0x8(%ebp),%eax
 8107074:	89 04 24             	mov    %eax,(%esp)
 8107077:	e8 74 d4 61 00       	call   87244f0 <_ZdlPv>
 810707c:	c9                   	leave
 810707d:	c3                   	ret

```

```c
// CFileLogWriter::~CFileLogWriter @ 0x8107060

/* CFileLogWriter::~CFileLogWriter() */

void __thiscall CFileLogWriter::~CFileLogWriter(CFileLogWriter *this)

{
  ~CFileLogWriter(this);
  operator_delete(this);
  return;
}

```

