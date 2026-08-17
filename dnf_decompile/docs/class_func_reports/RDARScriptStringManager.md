# RDARScriptStringManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## RDARScriptStringManager

```asm
// === 08aa4e98 RDARScriptStringManager::RDARScriptStringManager  [0x08aa4e98-0x8aa4f03] ===
 8aa4e98:	55                   	push   %ebp
 8aa4e99:	89 e5                	mov    %esp,%ebp
 8aa4e9b:	56                   	push   %esi
 8aa4e9c:	53                   	push   %ebx
 8aa4e9d:	83 ec 10             	sub    $0x10,%esp
 8aa4ea0:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4ea3:	89 04 24             	mov    %eax,(%esp)
 8aa4ea6:	e8 4d 5e e1 ff       	call   88bacf8 <_ZN16STScriptFileListC1Ev>
 8aa4eab:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4eae:	83 c0 18             	add    $0x18,%eax
 8aa4eb1:	89 04 24             	mov    %eax,(%esp)
 8aa4eb4:	e8 81 18 00 00       	call   8aa673a <_ZNSt6vectorIP16StringDictionarySaIS1_EEC1Ev>
 8aa4eb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4ebc:	83 c0 24             	add    $0x24,%eax
 8aa4ebf:	89 04 24             	mov    %eax,(%esp)
 8aa4ec2:	e8 69 72 c7 ff       	call   871c130 <_ZNSbIwSt11char_traitsIwESaIwEEC1Ev>
 8aa4ec7:	eb 33                	jmp    8aa4efc <_ZN23RDARScriptStringManagerC1Ev+0x64>
 8aa4ec9:	89 d3                	mov    %edx,%ebx
 8aa4ecb:	89 c6                	mov    %eax,%esi
 8aa4ecd:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4ed0:	83 c0 18             	add    $0x18,%eax
 8aa4ed3:	89 04 24             	mov    %eax,(%esp)
 8aa4ed6:	e8 73 18 00 00       	call   8aa674e <_ZNSt6vectorIP16StringDictionarySaIS1_EED1Ev>
 8aa4edb:	89 f0                	mov    %esi,%eax
 8aa4edd:	89 da                	mov    %ebx,%edx
 8aa4edf:	eb 00                	jmp    8aa4ee1 <_ZN23RDARScriptStringManagerC1Ev+0x49>
 8aa4ee1:	89 d3                	mov    %edx,%ebx
 8aa4ee3:	89 c6                	mov    %eax,%esi
 8aa4ee5:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4ee8:	89 04 24             	mov    %eax,(%esp)
 8aa4eeb:	e8 62 c4 64 ff       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 8aa4ef0:	89 f0                	mov    %esi,%eax
 8aa4ef2:	89 da                	mov    %ebx,%edx
 8aa4ef4:	89 04 24             	mov    %eax,(%esp)
 8aa4ef7:	e8 54 e8 03 00       	call   8ae3750 <_Unwind_Resume>
 8aa4efc:	83 c4 10             	add    $0x10,%esp
 8aa4eff:	5b                   	pop    %ebx
 8aa4f00:	5e                   	pop    %esi
 8aa4f01:	5d                   	pop    %ebp
 8aa4f02:	c3                   	ret
 8aa4f03:	90                   	nop

```

```c
// RDARScriptStringManager::RDARScriptStringManager @ 0x8aa4e98

/* RDARScriptStringManager::RDARScriptStringManager() */

void __thiscall RDARScriptStringManager::RDARScriptStringManager(RDARScriptStringManager *this)

{
  STScriptFileList::STScriptFileList((STScriptFileList *)this);
                    /* try { // try from 08aa4eb4 to 08aa4eb8 has its CatchHandler @ 08aa4ee1 */
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::vector
            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
                    /* try { // try from 08aa4ec2 to 08aa4ec6 has its CatchHandler @ 08aa4ec9 */
  std::wstring::wstring((wstring *)(this + 0x24));
  return;
}

```

---

## changeSpacilTagStr

```asm
// === 08aa60b0 RDARScriptStringManager::changeSpacilTagStr  [0x08aa60b0-0x8aa6447] ===
 8aa60b0:	55                   	push   %ebp
 8aa60b1:	89 e5                	mov    %esp,%ebp
 8aa60b3:	57                   	push   %edi
 8aa60b4:	56                   	push   %esi
 8aa60b5:	53                   	push   %ebx
 8aa60b6:	83 ec 4c             	sub    $0x4c,%esp
 8aa60b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa60bc:	89 04 24             	mov    %eax,(%esp)
 8aa60bf:	e8 dc 05 c6 ff       	call   87066a0 <_ZNKSs5emptyEv>
 8aa60c4:	84 c0                	test   %al,%al
 8aa60c6:	74 0a                	je     8aa60d2 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x22>
 8aa60c8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa60cd:	e9 68 03 00 00       	jmp    8aa643a <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x38a>
 8aa60d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa60d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa60d9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aa60dc:	89 04 24             	mov    %eax,(%esp)
 8aa60df:	e8 cc 18 c6 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8aa60e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa60e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa60eb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8aa60ee:	89 04 24             	mov    %eax,(%esp)
 8aa60f1:	e8 ba 18 c6 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8aa60f6:	c7 45 dc fa a8 e2 08 	movl   $0x8e2a8fa,-0x24(%ebp)
 8aa60fd:	c7 45 e0 05 a9 e2 08 	movl   $0x8e2a905,-0x20(%ebp)
 8aa6104:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8aa610b:	00 
 8aa610c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8aa610f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa6113:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa6116:	89 04 24             	mov    %eax,(%esp)
 8aa6119:	e8 22 0b c6 ff       	call   8706c40 <_ZNKSs4findEPKcj>
 8aa611e:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8aa6122:	66 83 7d e4 ff       	cmpw   $0xffff,-0x1c(%ebp)
 8aa6127:	75 0a                	jne    8aa6133 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x83>
 8aa6129:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa612e:	e9 d4 02 00 00       	jmp    8aa6407 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x357>
 8aa6133:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8aa613a:	ff 
 8aa613b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa613e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa6142:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa6145:	89 04 24             	mov    %eax,(%esp)
 8aa6148:	e8 e3 09 c6 ff       	call   8706b30 <_ZNKSs5rfindEPKcj>
 8aa614d:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 8aa6151:	66 83 7d e6 ff       	cmpw   $0xffff,-0x1a(%ebp)
 8aa6156:	75 0a                	jne    8aa6162 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0xb2>
 8aa6158:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa615d:	e9 a5 02 00 00       	jmp    8aa6407 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x357>
 8aa6162:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8aa6166:	66 3b 45 e6          	cmp    -0x1a(%ebp),%ax
 8aa616a:	75 0a                	jne    8aa6176 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0xc6>
 8aa616c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa6171:	e9 91 02 00 00       	jmp    8aa6407 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x357>
 8aa6176:	0f bf 55 e4          	movswl -0x1c(%ebp),%edx
 8aa617a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8aa617d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8aa6181:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8aa6188:	00 
 8aa6189:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa618c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa6190:	89 04 24             	mov    %eax,(%esp)
 8aa6193:	e8 e8 16 c6 ff       	call   8707880 <_ZNKSs6substrEjj>
 8aa6198:	83 ec 04             	sub    $0x4,%esp
 8aa619b:	0f bf 55 e6          	movswl -0x1a(%ebp),%edx
 8aa619f:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 8aa61a3:	89 d1                	mov    %edx,%ecx
 8aa61a5:	29 c1                	sub    %eax,%ecx
 8aa61a7:	89 c8                	mov    %ecx,%eax
 8aa61a9:	89 c6                	mov    %eax,%esi
 8aa61ab:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8aa61ae:	89 04 24             	mov    %eax,(%esp)
 8aa61b1:	e8 fa 81 5d ff       	call   807e3b0 <strlen@plt>
 8aa61b6:	29 c6                	sub    %eax,%esi
 8aa61b8:	0f bf 7d e4          	movswl -0x1c(%ebp),%edi
 8aa61bc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8aa61bf:	89 04 24             	mov    %eax,(%esp)
 8aa61c2:	e8 e9 81 5d ff       	call   807e3b0 <strlen@plt>
 8aa61c7:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8aa61ca:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8aa61cd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8aa61d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa61d5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa61d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa61dc:	89 04 24             	mov    %eax,(%esp)
 8aa61df:	e8 9c 16 c6 ff       	call   8707880 <_ZNKSs6substrEjj>
 8aa61e4:	83 ec 04             	sub    $0x4,%esp
 8aa61e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa61ea:	89 04 24             	mov    %eax,(%esp)
 8aa61ed:	e8 7e 04 c6 ff       	call   8706670 <_ZNKSs6lengthEv>
 8aa61f2:	0f bf 55 e6          	movswl -0x1a(%ebp),%edx
 8aa61f6:	89 c6                	mov    %eax,%esi
 8aa61f8:	29 d6                	sub    %edx,%esi
 8aa61fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa61fd:	89 04 24             	mov    %eax,(%esp)
 8aa6200:	e8 ab 81 5d ff       	call   807e3b0 <strlen@plt>
 8aa6205:	29 c6                	sub    %eax,%esi
 8aa6207:	0f bf 7d e6          	movswl -0x1a(%ebp),%edi
 8aa620b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa620e:	89 04 24             	mov    %eax,(%esp)
 8aa6211:	e8 9a 81 5d ff       	call   807e3b0 <strlen@plt>
 8aa6216:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8aa6219:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa621c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8aa6220:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa6224:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa6227:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa622b:	89 04 24             	mov    %eax,(%esp)
 8aa622e:	e8 4d 16 c6 ff       	call   8707880 <_ZNKSs6substrEjj>
 8aa6233:	83 ec 04             	sub    $0x4,%esp
 8aa6236:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8aa6239:	89 04 24             	mov    %eax,(%esp)
 8aa623c:	e8 5f 04 c6 ff       	call   87066a0 <_ZNKSs5emptyEv>
 8aa6241:	83 f0 01             	xor    $0x1,%eax
 8aa6244:	84 c0                	test   %al,%al
 8aa6246:	74 19                	je     8aa6261 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x1b1>
 8aa6248:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8aa624b:	89 04 24             	mov    %eax,(%esp)
 8aa624e:	e8 4d 04 c6 ff       	call   87066a0 <_ZNKSs5emptyEv>
 8aa6253:	83 f0 01             	xor    $0x1,%eax
 8aa6256:	84 c0                	test   %al,%al
 8aa6258:	74 07                	je     8aa6261 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x1b1>
 8aa625a:	b8 01 00 00 00       	mov    $0x1,%eax
 8aa625f:	eb 05                	jmp    8aa6266 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x1b6>
 8aa6261:	b8 00 00 00 00       	mov    $0x0,%eax
 8aa6266:	84 c0                	test   %al,%al
 8aa6268:	0f 84 ee 00 00 00    	je     8aa635c <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2ac>
 8aa626e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8aa6271:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa6275:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa6278:	89 04 24             	mov    %eax,(%esp)
 8aa627b:	e8 30 17 c6 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8aa6280:	c7 44 24 04 1c 00 00 	movl   $0x1c,0x4(%esp)
 8aa6287:	00 
 8aa6288:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa628b:	89 04 24             	mov    %eax,(%esp)
 8aa628e:	e8 6d 20 c6 ff       	call   8708300 <_ZNSspLEc>
 8aa6293:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8aa6296:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa629a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa629d:	89 04 24             	mov    %eax,(%esp)
 8aa62a0:	e8 4b 1f c6 ff       	call   87081f0 <_ZNSspLERKSs>
 8aa62a5:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 8aa62ac:	00 
 8aa62ad:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa62b0:	89 04 24             	mov    %eax,(%esp)
 8aa62b3:	e8 48 20 c6 ff       	call   8708300 <_ZNSspLEc>
 8aa62b8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa62bb:	89 04 24             	mov    %eax,(%esp)
 8aa62be:	e8 dd 03 c6 ff       	call   87066a0 <_ZNKSs5emptyEv>
 8aa62c3:	83 f0 01             	xor    $0x1,%eax
 8aa62c6:	84 c0                	test   %al,%al
 8aa62c8:	74 12                	je     8aa62dc <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x22c>
 8aa62ca:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa62cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa62d1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa62d4:	89 04 24             	mov    %eax,(%esp)
 8aa62d7:	e8 14 1f c6 ff       	call   87081f0 <_ZNSspLERKSs>
 8aa62dc:	c7 44 24 04 11 a9 e2 	movl   $0x8e2a911,0x4(%esp)
 8aa62e3:	08 
 8aa62e4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa62e7:	89 04 24             	mov    %eax,(%esp)
 8aa62ea:	e8 41 1d c6 ff       	call   8708030 <_ZNSspLEPKc>
 8aa62ef:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa62f2:	89 04 24             	mov    %eax,(%esp)
 8aa62f5:	e8 a6 03 c6 ff       	call   87066a0 <_ZNKSs5emptyEv>
 8aa62fa:	83 f0 01             	xor    $0x1,%eax
 8aa62fd:	84 c0                	test   %al,%al
 8aa62ff:	74 29                	je     8aa632a <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x27a>
 8aa6301:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa6304:	89 04 24             	mov    %eax,(%esp)
 8aa6307:	e8 c4 2a c6 ff       	call   8708dd0 <_ZNSs5clearEv>
 8aa630c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa630f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa6313:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa6316:	89 04 24             	mov    %eax,(%esp)
 8aa6319:	e8 e2 19 c6 ff       	call   8707d00 <_ZNSsaSERKSs>
 8aa631e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8aa6323:	be 00 00 00 00       	mov    $0x0,%esi
 8aa6328:	eb 1c                	jmp    8aa6346 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x296>
 8aa632a:	be 01 00 00 00       	mov    $0x1,%esi
 8aa632f:	eb 15                	jmp    8aa6346 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x296>
 8aa6331:	89 d3                	mov    %edx,%ebx
 8aa6333:	89 c6                	mov    %eax,%esi
 8aa6335:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa6338:	89 04 24             	mov    %eax,(%esp)
 8aa633b:	e8 a0 18 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa6340:	89 f0                	mov    %esi,%eax
 8aa6342:	89 da                	mov    %ebx,%edx
 8aa6344:	eb 1d                	jmp    8aa6363 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2b3>
 8aa6346:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa6349:	89 04 24             	mov    %eax,(%esp)
 8aa634c:	e8 8f 18 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa6351:	85 f6                	test   %esi,%esi
 8aa6353:	75 07                	jne    8aa635c <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2ac>
 8aa6355:	be 00 00 00 00       	mov    $0x0,%esi
 8aa635a:	eb 1c                	jmp    8aa6378 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2c8>
 8aa635c:	be 01 00 00 00       	mov    $0x1,%esi
 8aa6361:	eb 15                	jmp    8aa6378 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2c8>
 8aa6363:	89 d3                	mov    %edx,%ebx
 8aa6365:	89 c6                	mov    %eax,%esi
 8aa6367:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa636a:	89 04 24             	mov    %eax,(%esp)
 8aa636d:	e8 6e 18 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa6372:	89 f0                	mov    %esi,%eax
 8aa6374:	89 da                	mov    %ebx,%edx
 8aa6376:	eb 1d                	jmp    8aa6395 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2e5>
 8aa6378:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa637b:	89 04 24             	mov    %eax,(%esp)
 8aa637e:	e8 5d 18 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa6383:	85 f6                	test   %esi,%esi
 8aa6385:	75 07                	jne    8aa638e <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2de>
 8aa6387:	be 00 00 00 00       	mov    $0x0,%esi
 8aa638c:	eb 1c                	jmp    8aa63aa <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2fa>
 8aa638e:	be 01 00 00 00       	mov    $0x1,%esi
 8aa6393:	eb 15                	jmp    8aa63aa <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x2fa>
 8aa6395:	89 d3                	mov    %edx,%ebx
 8aa6397:	89 c6                	mov    %eax,%esi
 8aa6399:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8aa639c:	89 04 24             	mov    %eax,(%esp)
 8aa639f:	e8 3c 18 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa63a4:	89 f0                	mov    %esi,%eax
 8aa63a6:	89 da                	mov    %ebx,%edx
 8aa63a8:	eb 1d                	jmp    8aa63c7 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x317>
 8aa63aa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8aa63ad:	89 04 24             	mov    %eax,(%esp)
 8aa63b0:	e8 2b 18 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa63b5:	85 f6                	test   %esi,%esi
 8aa63b7:	75 07                	jne    8aa63c0 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x310>
 8aa63b9:	be 00 00 00 00       	mov    $0x0,%esi
 8aa63be:	eb 1c                	jmp    8aa63dc <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x32c>
 8aa63c0:	be 01 00 00 00       	mov    $0x1,%esi
 8aa63c5:	eb 15                	jmp    8aa63dc <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x32c>
 8aa63c7:	89 d3                	mov    %edx,%ebx
 8aa63c9:	89 c6                	mov    %eax,%esi
 8aa63cb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8aa63ce:	89 04 24             	mov    %eax,(%esp)
 8aa63d1:	e8 0a 18 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa63d6:	89 f0                	mov    %esi,%eax
 8aa63d8:	89 da                	mov    %ebx,%edx
 8aa63da:	eb 16                	jmp    8aa63f2 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x342>
 8aa63dc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8aa63df:	89 04 24             	mov    %eax,(%esp)
 8aa63e2:	e8 f9 17 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa63e7:	85 f6                	test   %esi,%esi
 8aa63e9:	74 1c                	je     8aa6407 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x357>
 8aa63eb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa63f0:	eb 15                	jmp    8aa6407 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x357>
 8aa63f2:	89 d3                	mov    %edx,%ebx
 8aa63f4:	89 c6                	mov    %eax,%esi
 8aa63f6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8aa63f9:	89 04 24             	mov    %eax,(%esp)
 8aa63fc:	e8 df 17 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa6401:	89 f0                	mov    %esi,%eax
 8aa6403:	89 da                	mov    %ebx,%edx
 8aa6405:	eb 0d                	jmp    8aa6414 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x364>
 8aa6407:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8aa640a:	89 04 24             	mov    %eax,(%esp)
 8aa640d:	e8 ce 17 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa6412:	eb 1b                	jmp    8aa642f <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs+0x37f>
 8aa6414:	89 d3                	mov    %edx,%ebx
 8aa6416:	89 c6                	mov    %eax,%esi
 8aa6418:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aa641b:	89 04 24             	mov    %eax,(%esp)
 8aa641e:	e8 bd 17 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa6423:	89 f0                	mov    %esi,%eax
 8aa6425:	89 da                	mov    %ebx,%edx
 8aa6427:	89 04 24             	mov    %eax,(%esp)
 8aa642a:	e8 21 d3 03 00       	call   8ae3750 <_Unwind_Resume>
 8aa642f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aa6432:	89 04 24             	mov    %eax,(%esp)
 8aa6435:	e8 a6 17 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa643a:	89 d8                	mov    %ebx,%eax
 8aa643c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8aa643f:	83 c4 00             	add    $0x0,%esp
 8aa6442:	5b                   	pop    %ebx
 8aa6443:	5e                   	pop    %esi
 8aa6444:	5f                   	pop    %edi
 8aa6445:	5d                   	pop    %ebp
 8aa6446:	c3                   	ret
 8aa6447:	90                   	nop

```

```c
// RDARScriptStringManager::changeSpacilTagStr @ 0x8aa60b0

/* RDARScriptStringManager::changeSpacilTagStr(std::string&) */

undefined4 __thiscall
RDARScriptStringManager::changeSpacilTagStr(RDARScriptStringManager *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 unaff_EBX;
  string local_40 [4];
  string local_3c [4];
  string local_38 [4];
  string local_34 [4];
  string local_30 [4];
  string local_2c [4];
  char *local_28;
  char *local_24;
  short local_20;
  short local_1e;
  
  cVar2 = std::string::empty(param_1);
  if (cVar2 != '\0') {
    return 0;
  }
  std::string::string(local_2c,param_1);
                    /* try { // try from 08aa60f1 to 08aa60f5 has its CatchHandler @ 08aa6414 */
  std::string::string(local_30,param_1);
  local_28 = "<URL LINK>";
  local_24 = "</URL LINK>";
                    /* try { // try from 08aa6119 to 08aa6197 has its CatchHandler @ 08aa63f2 */
  local_20 = std::string::find(param_1,"<URL LINK>",0);
  if (local_20 == -1) {
    unaff_EBX = 0;
    goto LAB_08aa6407;
  }
  local_1e = std::string::rfind(param_1,local_24,0xffffffff);
  if (local_1e == -1) {
    unaff_EBX = 0;
    goto LAB_08aa6407;
  }
  if (local_20 == local_1e) {
    unaff_EBX = 0;
    goto LAB_08aa6407;
  }
  std::string::substr((uint)local_34,(uint)param_1);
  strlen(local_28);
  strlen(local_28);
                    /* try { // try from 08aa61df to 08aa61e3 has its CatchHandler @ 08aa63c7 */
  std::string::substr((uint)local_38,(uint)param_1);
                    /* try { // try from 08aa61ed to 08aa6232 has its CatchHandler @ 08aa6395 */
  std::string::length(param_1);
  strlen(local_24);
  strlen(local_24);
  std::string::substr((uint)local_3c,(uint)param_1);
                    /* try { // try from 08aa623c to 08aa627f has its CatchHandler @ 08aa6363 */
  cVar2 = std::string::empty(local_34);
  if ((cVar2 == '\x01') || (cVar2 = std::string::empty(local_38), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    std::string::string(local_40,local_34);
                    /* try { // try from 08aa628e to 08aa631d has its CatchHandler @ 08aa6331 */
    std::string::operator+=(local_40,'\x1c');
    std::string::operator+=(local_40,local_38);
    std::string::operator+=(local_40,'\x1d');
    cVar2 = std::string::empty(local_3c);
    if (cVar2 != '\x01') {
      std::string::operator+=(local_40,local_3c);
    }
    std::string::operator+=(local_40,"\n");
    cVar2 = std::string::empty(local_40);
    if (cVar2 != '\x01') {
      std::string::clear(param_1);
      std::string::operator=(param_1,local_40);
      unaff_EBX = 1;
    }
                    /* try { // try from 08aa634c to 08aa6350 has its CatchHandler @ 08aa6363 */
    std::string::~string(local_40);
    if (cVar2 == '\x01') goto LAB_08aa635c;
    bVar1 = false;
  }
  else {
LAB_08aa635c:
    bVar1 = true;
  }
                    /* try { // try from 08aa637e to 08aa6382 has its CatchHandler @ 08aa6395 */
  std::string::~string(local_3c);
                    /* try { // try from 08aa63b0 to 08aa63b4 has its CatchHandler @ 08aa63c7 */
  std::string::~string(local_38);
                    /* try { // try from 08aa63e2 to 08aa63e6 has its CatchHandler @ 08aa63f2 */
  std::string::~string(local_34);
  if (bVar1) {
    unaff_EBX = 0;
  }
LAB_08aa6407:
                    /* try { // try from 08aa640d to 08aa6411 has its CatchHandler @ 08aa6414 */
  std::string::~string(local_30);
  std::string::~string(local_2c);
  return unaff_EBX;
}

```

---

## findChangedString

```asm
// === 08aa6448 RDARScriptStringManager::findChangedString  [0x08aa6448-0x8aa6550] ===
 8aa6448:	55                   	push   %ebp
 8aa6449:	89 e5                	mov    %esp,%ebp
 8aa644b:	57                   	push   %edi
 8aa644c:	56                   	push   %esi
 8aa644d:	53                   	push   %ebx
 8aa644e:	83 ec 2c             	sub    $0x2c,%esp
 8aa6451:	b8 c0 09 50 09       	mov    $0x95009c0,%eax
 8aa6456:	0f b6 00             	movzbl (%eax),%eax
 8aa6459:	84 c0                	test   %al,%al
 8aa645b:	0f 85 c9 00 00 00    	jne    8aa652a <_ZN23RDARScriptStringManager17findChangedStringEiPKcPb+0xe2>
 8aa6461:	c7 04 24 c0 09 50 09 	movl   $0x95009c0,(%esp)
 8aa6468:	e8 c3 ee c7 ff       	call   8725330 <__cxa_guard_acquire>
 8aa646d:	85 c0                	test   %eax,%eax
 8aa646f:	0f 95 c0             	setne  %al
 8aa6472:	84 c0                	test   %al,%al
 8aa6474:	0f 84 b0 00 00 00    	je     8aa652a <_ZN23RDARScriptStringManager17findChangedStringEiPKcPb+0xe2>
 8aa647a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa647f:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8aa6482:	89 04 24             	mov    %eax,(%esp)
 8aa6485:	e8 46 9c c3 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 8aa648a:	8b 45 14             	mov    0x14(%ebp),%eax
 8aa648d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8aa6491:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa6494:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa6498:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa649b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa649f:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa64a2:	89 04 24             	mov    %eax,(%esp)
 8aa64a5:	e8 54 f3 ff ff       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8aa64aa:	8d 55 e7             	lea    -0x19(%ebp),%edx
 8aa64ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa64b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa64b5:	c7 04 24 c8 09 50 09 	movl   $0x95009c8,(%esp)
 8aa64bc:	e8 6f 11 c6 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8aa64c1:	c7 04 24 c0 09 50 09 	movl   $0x95009c0,(%esp)
 8aa64c8:	e8 83 ed c7 ff       	call   8725250 <__cxa_guard_release>
 8aa64cd:	b8 e0 7b 70 08       	mov    $0x8707be0,%eax
 8aa64d2:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8aa64d9:	08 
 8aa64da:	c7 44 24 04 c8 09 50 	movl   $0x95009c8,0x4(%esp)
 8aa64e1:	09 
 8aa64e2:	89 04 24             	mov    %eax,(%esp)
 8aa64e5:	e8 e6 78 5d ff       	call   807ddd0 <__cxa_atexit@plt>
 8aa64ea:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8aa64ed:	89 04 24             	mov    %eax,(%esp)
 8aa64f0:	e8 fb 9b c3 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8aa64f5:	eb 33                	jmp    8aa652a <_ZN23RDARScriptStringManager17findChangedStringEiPKcPb+0xe2>
 8aa64f7:	89 d6                	mov    %edx,%esi
 8aa64f9:	89 c7                	mov    %eax,%edi
 8aa64fb:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8aa64fe:	89 04 24             	mov    %eax,(%esp)
 8aa6501:	e8 ea 9b c3 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8aa6506:	89 f8                	mov    %edi,%eax
 8aa6508:	89 f2                	mov    %esi,%edx
 8aa650a:	89 d6                	mov    %edx,%esi
 8aa650c:	89 c7                	mov    %eax,%edi
 8aa650e:	84 db                	test   %bl,%bl
 8aa6510:	75 0c                	jne    8aa651e <_ZN23RDARScriptStringManager17findChangedStringEiPKcPb+0xd6>
 8aa6512:	c7 04 24 c0 09 50 09 	movl   $0x95009c0,(%esp)
 8aa6519:	e8 a2 ed c7 ff       	call   87252c0 <__cxa_guard_abort>
 8aa651e:	89 f8                	mov    %edi,%eax
 8aa6520:	89 f2                	mov    %esi,%edx
 8aa6522:	89 04 24             	mov    %eax,(%esp)
 8aa6525:	e8 26 d2 03 00       	call   8ae3750 <_Unwind_Resume>
 8aa652a:	c7 44 24 04 c8 09 50 	movl   $0x95009c8,0x4(%esp)
 8aa6531:	09 
 8aa6532:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa6535:	89 04 24             	mov    %eax,(%esp)
 8aa6538:	e8 73 fb ff ff       	call   8aa60b0 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs>
 8aa653d:	c7 04 24 c8 09 50 09 	movl   $0x95009c8,(%esp)
 8aa6544:	e8 a7 ff c5 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8aa6549:	83 c4 2c             	add    $0x2c,%esp
 8aa654c:	5b                   	pop    %ebx
 8aa654d:	5e                   	pop    %esi
 8aa654e:	5f                   	pop    %edi
 8aa654f:	5d                   	pop    %ebp
 8aa6550:	c3                   	ret

```

```c
// RDARScriptStringManager::findChangedString @ 0x8aa6448

/* RDARScriptStringManager::findChangedString(int, char const*, bool*) */

void __thiscall
RDARScriptStringManager::findChangedString
          (RDARScriptStringManager *this,int param_1,char *param_2,bool *param_3)

{
  int iVar1;
  char *pcVar2;
  allocator<char> local_1d [13];
  
  if (findChangedString(int,char_const*,bool*)::ret == '\0') {
    iVar1 = __cxa_guard_acquire(&findChangedString(int,char_const*,bool*)::ret);
    if (iVar1 != 0) {
      std::allocator<char>::allocator();
                    /* try { // try from 08aa64a5 to 08aa64c0 has its CatchHandler @ 08aa64f7 */
      pcVar2 = (char *)findString(this,param_1,param_2,param_3);
      std::string::string((string *)&findChangedString(int,char_const*,bool*)::ret,pcVar2,
                          (allocator *)local_1d);
      __cxa_guard_release(&findChangedString(int,char_const*,bool*)::ret);
      __cxa_atexit(std::string::~string,&findChangedString(int,char_const*,bool*)::ret,&__dso_handle
                  );
      std::allocator<char>::~allocator(local_1d);
    }
  }
  changeSpacilTagStr(this,(string *)&findChangedString(int,char_const*,bool*)::ret);
  std::string::c_str((string *)&findChangedString(int,char_const*,bool*)::ret);
  return;
}

```

---

## findString

```asm
// === 08aa57fe RDARScriptStringManager::findString  [0x08aa57fe-0x8aa594b] ===
 8aa57fe:	55                   	push   %ebp
 8aa57ff:	89 e5                	mov    %esp,%ebp
 8aa5801:	53                   	push   %ebx
 8aa5802:	83 ec 34             	sub    $0x34,%esp
 8aa5805:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8aa5809:	75 0a                	jne    8aa5815 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x17>
 8aa580b:	b8 a4 a7 e2 08       	mov    $0x8e2a7a4,%eax
 8aa5810:	e9 31 01 00 00       	jmp    8aa5946 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x148>
 8aa5815:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5818:	83 c0 18             	add    $0x18,%eax
 8aa581b:	89 04 24             	mov    %eax,(%esp)
 8aa581e:	e8 8f 10 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa5823:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8aa5826:	0f 9e c0             	setle  %al
 8aa5829:	84 c0                	test   %al,%al
 8aa582b:	74 0a                	je     8aa5837 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x39>
 8aa582d:	b8 d8 a7 e2 08       	mov    $0x8e2a7d8,%eax
 8aa5832:	e9 0f 01 00 00       	jmp    8aa5946 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x148>
 8aa5837:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8aa583b:	78 11                	js     8aa584e <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x50>
 8aa583d:	c7 04 24 58 b1 49 09 	movl   $0x949b158,(%esp)
 8aa5844:	e8 69 10 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa5849:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8aa584c:	7f 07                	jg     8aa5855 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x57>
 8aa584e:	b8 01 00 00 00       	mov    $0x1,%eax
 8aa5853:	eb 05                	jmp    8aa585a <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x5c>
 8aa5855:	b8 00 00 00 00       	mov    $0x0,%eax
 8aa585a:	84 c0                	test   %al,%al
 8aa585c:	74 58                	je     8aa58b6 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0xb8>
 8aa585e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5861:	89 44 24 14          	mov    %eax,0x14(%esp)
 8aa5865:	c7 44 24 10 24 a8 e2 	movl   $0x8e2a824,0x10(%esp)
 8aa586c:	08 
 8aa586d:	c7 44 24 0c 1c 01 00 	movl   $0x11c,0xc(%esp)
 8aa5874:	00 
 8aa5875:	c7 44 24 08 14 ad e2 	movl   $0x8e2ad14,0x8(%esp)
 8aa587c:	08 
 8aa587d:	c7 44 24 04 80 a8 e2 	movl   $0x8e2a880,0x4(%esp)
 8aa5884:	08 
 8aa5885:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8aa588c:	e8 79 e3 02 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8aa5891:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5894:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa5898:	c7 44 24 04 a0 a8 e2 	movl   $0x8e2a8a0,0x4(%esp)
 8aa589f:	08 
 8aa58a0:	c7 04 24 e0 0a 50 09 	movl   $0x9500ae0,(%esp)
 8aa58a7:	e8 08 11 00 00       	call   8aa69b4 <_Z10ss_sprintfILj256EEiRAT__cPKcz>
 8aa58ac:	b8 e0 0a 50 09       	mov    $0x9500ae0,%eax
 8aa58b1:	e9 90 00 00 00       	jmp    8aa5946 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x148>
 8aa58b6:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa58b9:	89 04 24             	mov    %eax,(%esp)
 8aa58bc:	e8 b4 92 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa58c1:	89 c3                	mov    %eax,%ebx
 8aa58c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa58c6:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa58c9:	83 c2 18             	add    $0x18,%edx
 8aa58cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa58d0:	89 14 24             	mov    %edx,(%esp)
 8aa58d3:	e8 12 11 00 00       	call   8aa69ea <_ZNKSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa58d8:	8b 00                	mov    (%eax),%eax
 8aa58da:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa58de:	89 04 24             	mov    %eax,(%esp)
 8aa58e1:	e8 42 cc 00 00       	call   8ab2528 <_ZNK16StringDictionary3getEPKc>
 8aa58e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aa58e9:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8aa58ed:	74 0c                	je     8aa58fb <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0xfd>
 8aa58ef:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8aa58f3:	0f 95 c2             	setne  %dl
 8aa58f6:	8b 45 14             	mov    0x14(%ebp),%eax
 8aa58f9:	88 10                	mov    %dl,(%eax)
 8aa58fb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8aa58ff:	74 05                	je     8aa5906 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x108>
 8aa5901:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aa5904:	eb 40                	jmp    8aa5946 <_ZNK23RDARScriptStringManager10findStringEiPKcPb+0x148>
 8aa5906:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5909:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa590c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5910:	89 04 24             	mov    %eax,(%esp)
 8aa5913:	e8 36 54 e1 ff       	call   88bad4e <_ZNK16STScriptFileList11GetFileNameEi>
 8aa5918:	89 c3                	mov    %eax,%ebx
 8aa591a:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa591d:	89 04 24             	mov    %eax,(%esp)
 8aa5920:	e8 50 92 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa5925:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8aa5929:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa592d:	c7 44 24 04 c3 a8 e2 	movl   $0x8e2a8c3,0x4(%esp)
 8aa5934:	08 
 8aa5935:	c7 04 24 e0 0b 50 09 	movl   $0x9500be0,(%esp)
 8aa593c:	e8 73 10 00 00       	call   8aa69b4 <_Z10ss_sprintfILj256EEiRAT__cPKcz>
 8aa5941:	b8 e0 0b 50 09       	mov    $0x9500be0,%eax
 8aa5946:	83 c4 34             	add    $0x34,%esp
 8aa5949:	5b                   	pop    %ebx
 8aa594a:	5d                   	pop    %ebp
 8aa594b:	c3                   	ret

```

```c
// RDARScriptStringManager::findString @ 0x8aa57fe

/* RDARScriptStringManager::findString(int, char const*, bool*) const */

char * __thiscall
RDARScriptStringManager::findString
          (RDARScriptStringManager *this,int param_1,char *param_2,bool *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  TCHAR *pTVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (param_2 == (char *)0x0) {
    pcVar2 = "RDARScriptStringManager::ERROR::input NULL string";
  }
  else {
    iVar3 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                      ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18))
    ;
    if (param_1 < iVar3) {
      if ((param_1 < 0) ||
         (iVar3 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                             (g_scriptStringManager_ + 0x18)), iVar3 <= param_1)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        LogManager::logFormat
                  (0,"../RDARScriptStringManager.cpp","findString",0x11c,&DAT_08e2a824,param_1);
        ss_sprintf<256u>(findString(int,char_const*,bool*)::errStr,
                         "String table index out of range %d",param_1);
        pcVar2 = findString(int,char_const*,bool*)::errStr;
      }
      else {
        pTVar4 = toTString(param_2);
        puVar5 = (undefined4 *)
                 std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                           ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                            (this + 0x18),param_1);
        pcVar2 = (char *)StringDictionary::get((StringDictionary *)*puVar5,pTVar4);
        if (param_3 != (bool *)0x0) {
          *param_3 = pcVar2 != (char *)0x0;
        }
        if (pcVar2 == (char *)0x0) {
          uVar6 = STScriptFileList::GetFileName((int)this);
          pTVar4 = toTString(param_2);
          ss_sprintf<256u>(findString(int,char_const*,bool*)::errStr,"%s == NULL, %s : ",pTVar4,
                           uVar6);
          pcVar2 = findString(int,char_const*,bool*)::errStr;
        }
      }
    }
    else {
      pcVar2 = "RDARScriptStringManager::ERROR::requested fileIndex isn\'t in string table";
    }
  }
  return pcVar2;
}

```

---

## findString_08aa594c

```asm
// === 08aa594c RDARScriptStringManager::findString  [0x08aa594c-0x8aa59ef] ===
 8aa594c:	55                   	push   %ebp
 8aa594d:	89 e5                	mov    %esp,%ebp
 8aa594f:	53                   	push   %ebx
 8aa5950:	83 ec 24             	sub    $0x24,%esp
 8aa5953:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8aa5957:	75 0a                	jne    8aa5963 <_ZNK23RDARScriptStringManager10findStringEiPKwPb+0x17>
 8aa5959:	b8 a4 a7 e2 08       	mov    $0x8e2a7a4,%eax
 8aa595e:	e9 86 00 00 00       	jmp    8aa59e9 <_ZNK23RDARScriptStringManager10findStringEiPKwPb+0x9d>
 8aa5963:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa5966:	89 04 24             	mov    %eax,(%esp)
 8aa5969:	e8 0f 92 03 00       	call   8adeb7d <_Z9toTStringPKw>
 8aa596e:	89 c3                	mov    %eax,%ebx
 8aa5970:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5973:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa5976:	83 c2 18             	add    $0x18,%edx
 8aa5979:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa597d:	89 14 24             	mov    %edx,(%esp)
 8aa5980:	e8 65 10 00 00       	call   8aa69ea <_ZNKSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa5985:	8b 00                	mov    (%eax),%eax
 8aa5987:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa598b:	89 04 24             	mov    %eax,(%esp)
 8aa598e:	e8 95 cb 00 00       	call   8ab2528 <_ZNK16StringDictionary3getEPKc>
 8aa5993:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aa5996:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8aa599a:	74 0c                	je     8aa59a8 <_ZNK23RDARScriptStringManager10findStringEiPKwPb+0x5c>
 8aa599c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8aa59a0:	0f 95 c2             	setne  %dl
 8aa59a3:	8b 45 14             	mov    0x14(%ebp),%eax
 8aa59a6:	88 10                	mov    %dl,(%eax)
 8aa59a8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8aa59ac:	74 05                	je     8aa59b3 <_ZNK23RDARScriptStringManager10findStringEiPKwPb+0x67>
 8aa59ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aa59b1:	eb 36                	jmp    8aa59e9 <_ZNK23RDARScriptStringManager10findStringEiPKwPb+0x9d>
 8aa59b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa59b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa59b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa59bd:	89 04 24             	mov    %eax,(%esp)
 8aa59c0:	e8 89 53 e1 ff       	call   88bad4e <_ZNK16STScriptFileList11GetFileNameEi>
 8aa59c5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8aa59c9:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa59cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa59d0:	c7 44 24 04 c3 a8 e2 	movl   $0x8e2a8c3,0x4(%esp)
 8aa59d7:	08 
 8aa59d8:	c7 04 24 e0 09 50 09 	movl   $0x95009e0,(%esp)
 8aa59df:	e8 d0 0f 00 00       	call   8aa69b4 <_Z10ss_sprintfILj256EEiRAT__cPKcz>
 8aa59e4:	b8 e0 09 50 09       	mov    $0x95009e0,%eax
 8aa59e9:	83 c4 24             	add    $0x24,%esp
 8aa59ec:	5b                   	pop    %ebx
 8aa59ed:	5d                   	pop    %ebp
 8aa59ee:	c3                   	ret
 8aa59ef:	90                   	nop

```

```c
// RDARScriptStringManager::findString @ 0x8aa594c

/* RDARScriptStringManager::findString(int, wchar_t const*, bool*) const */

char * __thiscall
RDARScriptStringManager::findString
          (RDARScriptStringManager *this,int param_1,wchar_t *param_2,bool *param_3)

{
  char *pcVar1;
  TCHAR *pTVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == (wchar_t *)0x0) {
    pcVar1 = "RDARScriptStringManager::ERROR::input NULL string";
  }
  else {
    pTVar2 = toTString(param_2);
    puVar3 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    pcVar1 = (char *)StringDictionary::get((StringDictionary *)*puVar3,pTVar2);
    if (param_3 != (bool *)0x0) {
      *param_3 = pcVar1 != (char *)0x0;
    }
    if (pcVar1 == (char *)0x0) {
      uVar4 = STScriptFileList::GetFileName((int)this);
      ss_sprintf<256u>(findString(int,wchar_t_const*,bool*)::errStr,"%s == NULL, %s : ",param_2,
                       uVar4);
      pcVar1 = findString(int,wchar_t_const*,bool*)::errStr;
    }
  }
  return pcVar1;
}

```

---

## getKeyIndex

```asm
// === 08aa5cba RDARScriptStringManager::getKeyIndex  [0x08aa5cba-0x8aa5d97] ===
 8aa5cba:	55                   	push   %ebp
 8aa5cbb:	89 e5                	mov    %esp,%ebp
 8aa5cbd:	53                   	push   %ebx
 8aa5cbe:	83 ec 24             	sub    $0x24,%esp
 8aa5cc1:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8aa5cc5:	75 0a                	jne    8aa5cd1 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0x17>
 8aa5cc7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8aa5ccc:	e9 c1 00 00 00       	jmp    8aa5d92 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0xd8>
 8aa5cd1:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8aa5cd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5cd7:	83 c0 18             	add    $0x18,%eax
 8aa5cda:	89 04 24             	mov    %eax,(%esp)
 8aa5cdd:	e8 d0 0b 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa5ce2:	39 c3                	cmp    %eax,%ebx
 8aa5ce4:	0f 92 c0             	setb   %al
 8aa5ce7:	84 c0                	test   %al,%al
 8aa5ce9:	0f 84 9e 00 00 00    	je     8aa5d8d <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0xd3>
 8aa5cef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5cf2:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa5cf5:	83 c2 18             	add    $0x18,%edx
 8aa5cf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5cfc:	89 14 24             	mov    %edx,(%esp)
 8aa5cff:	e8 e6 0c 00 00       	call   8aa69ea <_ZNKSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa5d04:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8aa5d07:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8aa5d0e:	eb 66                	jmp    8aa5d76 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0xbc>
 8aa5d10:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa5d13:	8b 00                	mov    (%eax),%eax
 8aa5d15:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8aa5d18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5d1c:	89 04 24             	mov    %eax,(%esp)
 8aa5d1f:	e8 44 c9 00 00       	call   8ab2668 <_ZNK16StringDictionary8getValueEi>
 8aa5d24:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8aa5d27:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8aa5d2b:	74 45                	je     8aa5d72 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0xb8>
 8aa5d2d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8aa5d30:	89 04 24             	mov    %eax,(%esp)
 8aa5d33:	e8 7b 94 03 00       	call   8adf1b3 <_Z9toUnicodePKc>
 8aa5d38:	8b 55 10             	mov    0x10(%ebp),%edx
 8aa5d3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5d3f:	89 04 24             	mov    %eax,(%esp)
 8aa5d42:	e8 69 89 5d ff       	call   807e6b0 <wcscmp@plt>
 8aa5d47:	85 c0                	test   %eax,%eax
 8aa5d49:	0f 94 c0             	sete   %al
 8aa5d4c:	84 c0                	test   %al,%al
 8aa5d4e:	74 22                	je     8aa5d72 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0xb8>
 8aa5d50:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa5d53:	8b 00                	mov    (%eax),%eax
 8aa5d55:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8aa5d58:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5d5c:	89 04 24             	mov    %eax,(%esp)
 8aa5d5f:	e8 c4 c8 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5d64:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aa5d67:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8aa5d6b:	74 05                	je     8aa5d72 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0xb8>
 8aa5d6d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8aa5d70:	eb 20                	jmp    8aa5d92 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0xd8>
 8aa5d72:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8aa5d76:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa5d79:	8b 00                	mov    (%eax),%eax
 8aa5d7b:	89 04 24             	mov    %eax,(%esp)
 8aa5d7e:	e8 8f c8 00 00       	call   8ab2612 <_ZNK16StringDictionary8getCountEv>
 8aa5d83:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8aa5d86:	0f 9f c0             	setg   %al
 8aa5d89:	84 c0                	test   %al,%al
 8aa5d8b:	75 83                	jne    8aa5d10 <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw+0x56>
 8aa5d8d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8aa5d92:	83 c4 24             	add    $0x24,%esp
 8aa5d95:	5b                   	pop    %ebx
 8aa5d96:	5d                   	pop    %ebp
 8aa5d97:	c3                   	ret

```

```c
// RDARScriptStringManager::getKeyIndex @ 0x8aa5cba

/* RDARScriptStringManager::getKeyIndex(int, wchar_t const*) const */

int __thiscall
RDARScriptStringManager::getKeyIndex(RDARScriptStringManager *this,int param_1,wchar_t *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pszSrc;
  wchar_t *__s1;
  int iVar3;
  int local_18;
  
  if ((param_2 != (wchar_t *)0x0) &&
     (uVar1 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                        ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                         (this + 0x18)), (uint)param_1 < uVar1)) {
    puVar2 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    for (local_18 = 0; iVar3 = StringDictionary::getCount((StringDictionary *)*puVar2),
        local_18 < iVar3; local_18 = local_18 + 1) {
      pszSrc = (char *)StringDictionary::getValue((StringDictionary *)*puVar2,local_18);
      if (pszSrc != (char *)0x0) {
        __s1 = toUnicode(pszSrc);
        iVar3 = wcscmp(__s1,param_2);
        if ((iVar3 == 0) &&
           (iVar3 = StringDictionary::getKey((StringDictionary *)*puVar2,local_18), iVar3 != 0)) {
          return local_18;
        }
      }
    }
  }
  return -1;
}

```

---

## getStringFileList

```asm
// === 08aa50b4 RDARScriptStringManager::getStringFileList  [0x08aa50b4-0x8aa50bb] ===
 8aa50b4:	55                   	push   %ebp
 8aa50b5:	89 e5                	mov    %esp,%ebp
 8aa50b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa50ba:	5d                   	pop    %ebp
 8aa50bb:	c3                   	ret

```

```c
// RDARScriptStringManager::getStringFileList @ 0x8aa50b4

/* RDARScriptStringManager::getStringFileList() */

RDARScriptStringManager * __thiscall
RDARScriptStringManager::getStringFileList(RDARScriptStringManager *this)

{
  return this;
}

```

---

## getTagByName

```asm
// === 08aa59f0 RDARScriptStringManager::getTagByName  [0x08aa59f0-0x8aa5cb9] ===
 8aa59f0:	55                   	push   %ebp
 8aa59f1:	89 e5                	mov    %esp,%ebp
 8aa59f3:	56                   	push   %esi
 8aa59f4:	53                   	push   %ebx
 8aa59f5:	83 ec 50             	sub    $0x50,%esp
 8aa59f8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8aa59fc:	74 06                	je     8aa5a04 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x14>
 8aa59fe:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8aa5a02:	75 0a                	jne    8aa5a0e <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x1e>
 8aa5a04:	b8 00 00 00 00       	mov    $0x0,%eax
 8aa5a09:	e9 a1 02 00 00       	jmp    8aa5caf <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x2bf>
 8aa5a0e:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8aa5a11:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5a14:	83 c0 18             	add    $0x18,%eax
 8aa5a17:	89 04 24             	mov    %eax,(%esp)
 8aa5a1a:	e8 93 0e 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa5a1f:	39 c3                	cmp    %eax,%ebx
 8aa5a21:	0f 93 c0             	setae  %al
 8aa5a24:	84 c0                	test   %al,%al
 8aa5a26:	74 0a                	je     8aa5a32 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x42>
 8aa5a28:	b8 00 00 00 00       	mov    $0x0,%eax
 8aa5a2d:	e9 7d 02 00 00       	jmp    8aa5caf <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x2bf>
 8aa5a32:	8b 45 14             	mov    0x14(%ebp),%eax
 8aa5a35:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa5a38:	83 c2 18             	add    $0x18,%edx
 8aa5a3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5a3f:	89 14 24             	mov    %edx,(%esp)
 8aa5a42:	e8 a3 0f 00 00       	call   8aa69ea <_ZNKSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa5a47:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8aa5a4a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8aa5a51:	e9 39 02 00 00       	jmp    8aa5c8f <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x29f>
 8aa5a56:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa5a59:	8b 00                	mov    (%eax),%eax
 8aa5a5b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8aa5a5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5a62:	89 04 24             	mov    %eax,(%esp)
 8aa5a65:	e8 fe cb 00 00       	call   8ab2668 <_ZNK16StringDictionary8getValueEi>
 8aa5a6a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8aa5a6d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8aa5a71:	0f 84 14 02 00 00    	je     8aa5c8b <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x29b>
 8aa5a77:	8d 45 c7             	lea    -0x39(%ebp),%eax
 8aa5a7a:	89 04 24             	mov    %eax,(%esp)
 8aa5a7d:	e8 4e a6 c3 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 8aa5a82:	8d 45 c7             	lea    -0x39(%ebp),%eax
 8aa5a85:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa5a89:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8aa5a8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5a90:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aa5a93:	89 04 24             	mov    %eax,(%esp)
 8aa5a96:	e8 95 1b c6 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8aa5a9b:	eb 1b                	jmp    8aa5ab8 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0xc8>
 8aa5a9d:	89 d3                	mov    %edx,%ebx
 8aa5a9f:	89 c6                	mov    %eax,%esi
 8aa5aa1:	8d 45 c7             	lea    -0x39(%ebp),%eax
 8aa5aa4:	89 04 24             	mov    %eax,(%esp)
 8aa5aa7:	e8 44 a6 c3 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8aa5aac:	89 f0                	mov    %esi,%eax
 8aa5aae:	89 da                	mov    %ebx,%edx
 8aa5ab0:	89 04 24             	mov    %eax,(%esp)
 8aa5ab3:	e8 98 dc 03 00       	call   8ae3750 <_Unwind_Resume>
 8aa5ab8:	8d 45 c7             	lea    -0x39(%ebp),%eax
 8aa5abb:	89 04 24             	mov    %eax,(%esp)
 8aa5abe:	e8 2d a6 c3 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8aa5ac3:	c6 45 cf 20          	movb   $0x20,-0x31(%ebp)
 8aa5ac7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8aa5aca:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8aa5acd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5ad1:	89 04 24             	mov    %eax,(%esp)
 8aa5ad4:	e8 17 34 c6 ff       	call   8708ef0 <_ZNSs3endEv>
 8aa5ad9:	83 ec 04             	sub    $0x4,%esp
 8aa5adc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8aa5adf:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8aa5ae2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5ae6:	89 04 24             	mov    %eax,(%esp)
 8aa5ae9:	e8 42 34 c6 ff       	call   8708f30 <_ZNSs5beginEv>
 8aa5aee:	83 ec 04             	sub    $0x4,%esp
 8aa5af1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa5af4:	8d 55 cf             	lea    -0x31(%ebp),%edx
 8aa5af7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8aa5afb:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8aa5afe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa5b02:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8aa5b05:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5b09:	89 04 24             	mov    %eax,(%esp)
 8aa5b0c:	e8 60 07 fc ff       	call   8a66271 <_ZSt6removeIN9__gnu_cxx17__normal_iteratorIPcSsEEcET_S4_S4_RKT0_>
 8aa5b11:	83 ec 04             	sub    $0x4,%esp
 8aa5b14:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aa5b17:	89 04 24             	mov    %eax,(%esp)
 8aa5b1a:	e8 d7 95 03 00       	call   8adf0f6 <_Z9toUnicodeRKSs>
 8aa5b1f:	8b 55 18             	mov    0x18(%ebp),%edx
 8aa5b22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5b26:	89 04 24             	mov    %eax,(%esp)
 8aa5b29:	e8 52 86 5d ff       	call   807e180 <wcsstr@plt>
 8aa5b2e:	85 c0                	test   %eax,%eax
 8aa5b30:	0f 95 c0             	setne  %al
 8aa5b33:	84 c0                	test   %al,%al
 8aa5b35:	0f 84 45 01 00 00    	je     8aa5c80 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x290>
 8aa5b3b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa5b3e:	8b 00                	mov    (%eax),%eax
 8aa5b40:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8aa5b43:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5b47:	89 04 24             	mov    %eax,(%esp)
 8aa5b4a:	e8 d9 ca 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5b4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aa5b52:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8aa5b56:	0f 84 24 01 00 00    	je     8aa5c80 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x290>
 8aa5b5c:	8d 45 df             	lea    -0x21(%ebp),%eax
 8aa5b5f:	89 04 24             	mov    %eax,(%esp)
 8aa5b62:	e8 99 a5 c3 ff       	call   86e0100 <_ZNSaIwEC1Ev>
 8aa5b67:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aa5b6a:	89 04 24             	mov    %eax,(%esp)
 8aa5b6d:	e8 41 96 03 00       	call   8adf1b3 <_Z9toUnicodePKc>
 8aa5b72:	8d 55 df             	lea    -0x21(%ebp),%edx
 8aa5b75:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa5b79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5b7d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aa5b80:	89 04 24             	mov    %eax,(%esp)
 8aa5b83:	e8 f8 75 c7 ff       	call   871d180 <_ZNSbIwSt11char_traitsIwESaIwEEC1EPKwRKS1_>
 8aa5b88:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aa5b8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5b8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5b92:	89 04 24             	mov    %eax,(%esp)
 8aa5b95:	e8 62 0e 00 00       	call   8aa69fc <_ZNSt6vectorISbIwSt11char_traitsIwESaIwEESaIS3_EE9push_backEOS3_>
 8aa5b9a:	eb 15                	jmp    8aa5bb1 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x1c1>
 8aa5b9c:	89 d3                	mov    %edx,%ebx
 8aa5b9e:	89 c6                	mov    %eax,%esi
 8aa5ba0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aa5ba3:	89 04 24             	mov    %eax,(%esp)
 8aa5ba6:	e8 75 7b c7 ff       	call   871d720 <_ZNSbIwSt11char_traitsIwESaIwEED1Ev>
 8aa5bab:	89 f0                	mov    %esi,%eax
 8aa5bad:	89 da                	mov    %ebx,%edx
 8aa5baf:	eb 0d                	jmp    8aa5bbe <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x1ce>
 8aa5bb1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aa5bb4:	89 04 24             	mov    %eax,(%esp)
 8aa5bb7:	e8 64 7b c7 ff       	call   871d720 <_ZNSbIwSt11char_traitsIwESaIwEED1Ev>
 8aa5bbc:	eb 18                	jmp    8aa5bd6 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x1e6>
 8aa5bbe:	89 d3                	mov    %edx,%ebx
 8aa5bc0:	89 c6                	mov    %eax,%esi
 8aa5bc2:	8d 45 df             	lea    -0x21(%ebp),%eax
 8aa5bc5:	89 04 24             	mov    %eax,(%esp)
 8aa5bc8:	e8 53 a5 c3 ff       	call   86e0120 <_ZNSaIwED1Ev>
 8aa5bcd:	89 f0                	mov    %esi,%eax
 8aa5bcf:	89 da                	mov    %ebx,%edx
 8aa5bd1:	e9 8f 00 00 00       	jmp    8aa5c65 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x275>
 8aa5bd6:	8d 45 df             	lea    -0x21(%ebp),%eax
 8aa5bd9:	89 04 24             	mov    %eax,(%esp)
 8aa5bdc:	e8 3f a5 c3 ff       	call   86e0120 <_ZNSaIwED1Ev>
 8aa5be1:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8aa5be4:	89 04 24             	mov    %eax,(%esp)
 8aa5be7:	e8 14 a5 c3 ff       	call   86e0100 <_ZNSaIwEC1Ev>
 8aa5bec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8aa5bef:	89 04 24             	mov    %eax,(%esp)
 8aa5bf2:	e8 bc 95 03 00       	call   8adf1b3 <_Z9toUnicodePKc>
 8aa5bf7:	8d 55 e7             	lea    -0x19(%ebp),%edx
 8aa5bfa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa5bfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5c02:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8aa5c05:	89 04 24             	mov    %eax,(%esp)
 8aa5c08:	e8 73 75 c7 ff       	call   871d180 <_ZNSbIwSt11char_traitsIwESaIwEEC1EPKwRKS1_>
 8aa5c0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8aa5c10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5c14:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa5c17:	89 04 24             	mov    %eax,(%esp)
 8aa5c1a:	e8 dd 0d 00 00       	call   8aa69fc <_ZNSt6vectorISbIwSt11char_traitsIwESaIwEESaIS3_EE9push_backEOS3_>
 8aa5c1f:	eb 15                	jmp    8aa5c36 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x246>
 8aa5c21:	89 d3                	mov    %edx,%ebx
 8aa5c23:	89 c6                	mov    %eax,%esi
 8aa5c25:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8aa5c28:	89 04 24             	mov    %eax,(%esp)
 8aa5c2b:	e8 f0 7a c7 ff       	call   871d720 <_ZNSbIwSt11char_traitsIwESaIwEED1Ev>
 8aa5c30:	89 f0                	mov    %esi,%eax
 8aa5c32:	89 da                	mov    %ebx,%edx
 8aa5c34:	eb 0d                	jmp    8aa5c43 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x253>
 8aa5c36:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8aa5c39:	89 04 24             	mov    %eax,(%esp)
 8aa5c3c:	e8 df 7a c7 ff       	call   871d720 <_ZNSbIwSt11char_traitsIwESaIwEED1Ev>
 8aa5c41:	eb 15                	jmp    8aa5c58 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x268>
 8aa5c43:	89 d3                	mov    %edx,%ebx
 8aa5c45:	89 c6                	mov    %eax,%esi
 8aa5c47:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8aa5c4a:	89 04 24             	mov    %eax,(%esp)
 8aa5c4d:	e8 ce a4 c3 ff       	call   86e0120 <_ZNSaIwED1Ev>
 8aa5c52:	89 f0                	mov    %esi,%eax
 8aa5c54:	89 da                	mov    %ebx,%edx
 8aa5c56:	eb 0d                	jmp    8aa5c65 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x275>
 8aa5c58:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8aa5c5b:	89 04 24             	mov    %eax,(%esp)
 8aa5c5e:	e8 bd a4 c3 ff       	call   86e0120 <_ZNSaIwED1Ev>
 8aa5c63:	eb 1b                	jmp    8aa5c80 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x290>
 8aa5c65:	89 d3                	mov    %edx,%ebx
 8aa5c67:	89 c6                	mov    %eax,%esi
 8aa5c69:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aa5c6c:	89 04 24             	mov    %eax,(%esp)
 8aa5c6f:	e8 6c 1f c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa5c74:	89 f0                	mov    %esi,%eax
 8aa5c76:	89 da                	mov    %ebx,%edx
 8aa5c78:	89 04 24             	mov    %eax,(%esp)
 8aa5c7b:	e8 d0 da 03 00       	call   8ae3750 <_Unwind_Resume>
 8aa5c80:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aa5c83:	89 04 24             	mov    %eax,(%esp)
 8aa5c86:	e8 55 1f c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8aa5c8b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8aa5c8f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa5c92:	8b 00                	mov    (%eax),%eax
 8aa5c94:	89 04 24             	mov    %eax,(%esp)
 8aa5c97:	e8 76 c9 00 00       	call   8ab2612 <_ZNK16StringDictionary8getCountEv>
 8aa5c9c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8aa5c9f:	0f 9f c0             	setg   %al
 8aa5ca2:	84 c0                	test   %al,%al
 8aa5ca4:	0f 85 ac fd ff ff    	jne    8aa5a56 <_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw+0x66>
 8aa5caa:	b8 01 00 00 00       	mov    $0x1,%eax
 8aa5caf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8aa5cb2:	83 c4 00             	add    $0x0,%esp
 8aa5cb5:	5b                   	pop    %ebx
 8aa5cb6:	5e                   	pop    %esi
 8aa5cb7:	5d                   	pop    %ebp
 8aa5cb8:	c3                   	ret
 8aa5cb9:	90                   	nop

```

```c
// RDARScriptStringManager::getTagByName @ 0x8aa59f0

/* RDARScriptStringManager::getTagByName(std::vector<std::wstring, std::allocator<std::wstring > >*,
   std::vector<std::wstring, std::allocator<std::wstring > >*, int, wchar_t const*) const */

undefined4 __thiscall
RDARScriptStringManager::getTagByName
          (RDARScriptStringManager *this,vector *param_1,vector *param_2,int param_3,
          wchar_t *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_64 [2];
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined1 local_3c [7];
  undefined1 local_35;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  undefined1 local_24 [7];
  undefined1 local_1d;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((param_1 == (vector *)0x0) || (param_2 == (vector *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                      ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18))
    ;
    if ((uint)param_3 < uVar2) {
      local_1c = (undefined4 *)
                 std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                           ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                            (this + 0x18),param_3);
      local_18 = 0;
      piVar6 = (int *)&stack0xffffffa4;
      while( true ) {
        *piVar6 = *local_1c;
        piVar6[-1] = 0x8aa5c9c;
        iVar4 = StringDictionary::getCount((StringDictionary *)*piVar6);
        if (iVar4 <= local_18) break;
        uVar1 = *local_1c;
        piVar6[1] = local_18;
        *piVar6 = uVar1;
        piVar6[-1] = 0x8aa5a6a;
        local_14 = StringDictionary::getValue((StringDictionary *)*piVar6,piVar6[1]);
        piVar5 = piVar6;
        if (local_14 != 0) {
          *piVar6 = (int)&local_3d;
          piVar6[-1] = 0x8aa5a82;
          std::allocator<char>::allocator();
          piVar6[2] = (int)&local_3d;
          piVar6[1] = local_14;
          *piVar6 = (int)local_44;
                    /* try { // try from 08aa5a96 to 08aa5a9a has its CatchHandler @ 08aa5a9d */
          piVar6[-1] = 0x8aa5a9b;
          std::string::string((string *)*piVar6,(char *)piVar6[1],(allocator *)piVar6[2]);
          *piVar6 = (int)&local_3d;
          piVar6[-1] = 0x8aa5ac3;
          std::allocator<char>::~allocator((allocator<char> *)*piVar6);
          local_35 = 0x20;
          piVar6[1] = (int)local_44;
          *piVar6 = (int)&local_34;
                    /* try { // try from 08aa5ad4 to 08aa5b4e has its CatchHandler @ 08aa5c65 */
          piVar6[-1] = 0x8aa5ad9;
          std::string::end();
          piVar6[1] = (int)local_44;
          *piVar6 = (int)&local_30;
          piVar6[-1] = 0x8aa5aee;
          std::string::begin();
          piVar6[3] = (int)&local_35;
          piVar6[2] = local_34;
          piVar6[1] = local_30;
          *piVar6 = (int)local_3c;
          piVar6[-1] = 0x8aa5b11;
          std::remove<__gnu_cxx::__normal_iterator<char*,std::string>,char>();
          piVar5 = piVar6 + -1;
          piVar6[-1] = (int)local_44;
          piVar6[-2] = 0x8aa5b1f;
          pwVar3 = toUnicode((string *)piVar6[-1]);
          *piVar6 = (int)param_4;
          piVar6[-1] = (int)pwVar3;
          piVar6[-2] = 0x8aa5b2e;
          pwVar3 = wcsstr((wchar_t *)piVar6[-1],(wchar_t *)*piVar6);
          if (pwVar3 != (wchar_t *)0x0) {
            uVar1 = *local_1c;
            *piVar6 = local_18;
            piVar6[-1] = uVar1;
            piVar6[-2] = 0x8aa5b4f;
            local_10 = StringDictionary::getKey((StringDictionary *)piVar6[-1],*piVar6);
            if (local_10 != 0) {
              piVar6[-1] = (int)&local_25;
              piVar6[-2] = 0x8aa5b67;
              std::allocator<wchar_t>::allocator();
              piVar6[-1] = local_10;
                    /* try { // try from 08aa5b6d to 08aa5b87 has its CatchHandler @ 08aa5bbe */
              piVar6[-2] = 0x8aa5b72;
              pwVar3 = toUnicode((char *)piVar6[-1]);
              piVar6[1] = (int)&local_25;
              *piVar6 = (int)pwVar3;
              piVar6[-1] = (int)local_2c;
              piVar6[-2] = 0x8aa5b88;
              std::wstring::wstring((wstring *)piVar6[-1],(wchar_t *)*piVar6,(allocator *)piVar6[1])
              ;
              *piVar6 = (int)local_2c;
              piVar6[-1] = (int)param_1;
                    /* try { // try from 08aa5b95 to 08aa5b99 has its CatchHandler @ 08aa5b9c */
              piVar6[-2] = 0x8aa5b9a;
              std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                        ((vector<std::wstring,std::allocator<std::wstring>> *)piVar6[-1],
                         (wstring *)*piVar6);
              piVar6[-1] = (int)local_2c;
                    /* try { // try from 08aa5bb7 to 08aa5bbb has its CatchHandler @ 08aa5bbe */
              piVar6[-2] = 0x8aa5bbc;
              std::wstring::~wstring((wstring *)piVar6[-1]);
              piVar6[-1] = (int)&local_25;
              piVar6[-2] = 0x8aa5be1;
              std::allocator<wchar_t>::~allocator((allocator<wchar_t> *)piVar6[-1]);
              piVar6[-1] = (int)&local_1d;
              piVar6[-2] = 0x8aa5bec;
              std::allocator<wchar_t>::allocator();
              piVar6[-1] = local_14;
                    /* try { // try from 08aa5bf2 to 08aa5c0c has its CatchHandler @ 08aa5c43 */
              piVar6[-2] = 0x8aa5bf7;
              pwVar3 = toUnicode((char *)piVar6[-1]);
              piVar6[1] = (int)&local_1d;
              *piVar6 = (int)pwVar3;
              piVar6[-1] = (int)local_24;
              piVar6[-2] = 0x8aa5c0d;
              std::wstring::wstring((wstring *)piVar6[-1],(wchar_t *)*piVar6,(allocator *)piVar6[1])
              ;
              *piVar6 = (int)local_24;
              piVar6[-1] = (int)param_2;
                    /* try { // try from 08aa5c1a to 08aa5c1e has its CatchHandler @ 08aa5c21 */
              piVar6[-2] = 0x8aa5c1f;
              std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                        ((vector<std::wstring,std::allocator<std::wstring>> *)piVar6[-1],
                         (wstring *)*piVar6);
              piVar6[-1] = (int)local_24;
                    /* try { // try from 08aa5c3c to 08aa5c40 has its CatchHandler @ 08aa5c43 */
              piVar6[-2] = 0x8aa5c41;
              std::wstring::~wstring((wstring *)piVar6[-1]);
              piVar6[-1] = (int)&local_1d;
              piVar6[-2] = 0x8aa5c63;
              std::allocator<wchar_t>::~allocator((allocator<wchar_t> *)piVar6[-1]);
            }
          }
          piVar6[-1] = (int)local_44;
          piVar6[-2] = 0x8aa5c8b;
          std::string::~string((string *)piVar6[-1]);
        }
        local_18 = local_18 + 1;
        piVar6 = piVar5;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## getTagByName_08aa5e40

```asm
// === 08aa5e40 RDARScriptStringManager::getTagByName  [0x08aa5e40-0x8aa60af] ===
 8aa5e40:	55                   	push   %ebp
 8aa5e41:	89 e5                	mov    %esp,%ebp
 8aa5e43:	53                   	push   %ebx
 8aa5e44:	83 ec 44             	sub    $0x44,%esp
 8aa5e47:	8b 45 18             	mov    0x18(%ebp),%eax
 8aa5e4a:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8aa5e4d:	c7 45 dc ff ff ff ff 	movl   $0xffffffff,-0x24(%ebp)
 8aa5e54:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8aa5e57:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5e5a:	83 c0 18             	add    $0x18,%eax
 8aa5e5d:	89 04 24             	mov    %eax,(%esp)
 8aa5e60:	e8 4d 0a 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa5e65:	39 c3                	cmp    %eax,%ebx
 8aa5e67:	0f 92 c0             	setb   %al
 8aa5e6a:	84 c0                	test   %al,%al
 8aa5e6c:	0f 84 f3 01 00 00    	je     8aa6065 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x225>
 8aa5e72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5e75:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa5e78:	83 c2 18             	add    $0x18,%edx
 8aa5e7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5e7f:	89 14 24             	mov    %edx,(%esp)
 8aa5e82:	e8 63 0b 00 00       	call   8aa69ea <_ZNKSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa5e87:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8aa5e8a:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa5e8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa5e91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5e94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5e98:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5e9b:	89 04 24             	mov    %eax,(%esp)
 8aa5e9e:	e8 17 fe ff ff       	call   8aa5cba <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw>
 8aa5ea3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8aa5ea6:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 8aa5eaa:	0f 85 57 01 00 00    	jne    8aa6007 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x1c7>
 8aa5eb0:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8aa5eb4:	74 25                	je     8aa5edb <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x9b>
 8aa5eb6:	8b 45 14             	mov    0x14(%ebp),%eax
 8aa5eb9:	8b 00                	mov    (%eax),%eax
 8aa5ebb:	85 c0                	test   %eax,%eax
 8aa5ebd:	74 1c                	je     8aa5edb <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x9b>
 8aa5ebf:	8b 45 14             	mov    0x14(%ebp),%eax
 8aa5ec2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa5ec6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5ec9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5ecd:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5ed0:	89 04 24             	mov    %eax,(%esp)
 8aa5ed3:	e8 e2 fd ff ff       	call   8aa5cba <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw>
 8aa5ed8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8aa5edb:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8aa5ee2:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 8aa5ee6:	74 19                	je     8aa5f01 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0xc1>
 8aa5ee8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa5eeb:	8b 00                	mov    (%eax),%eax
 8aa5eed:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8aa5ef0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5ef4:	89 04 24             	mov    %eax,(%esp)
 8aa5ef7:	e8 2c c7 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5efc:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8aa5eff:	eb 11                	jmp    8aa5f12 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0xd2>
 8aa5f01:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5f04:	83 c0 24             	add    $0x24,%eax
 8aa5f07:	89 04 24             	mov    %eax,(%esp)
 8aa5f0a:	e8 31 61 c7 ff       	call   871c040 <_ZNKSbIwSt11char_traitsIwESaIwEE5c_strEv>
 8aa5f0f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8aa5f12:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8aa5f19:	e9 d7 00 00 00       	jmp    8aa5ff5 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x1b5>
 8aa5f1e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8aa5f21:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8aa5f25:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa5f28:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa5f2c:	c7 44 24 04 d5 a8 e2 	movl   $0x8e2a8d5,0x4(%esp)
 8aa5f33:	08 
 8aa5f34:	65 a1 00 00 00 00    	mov    %gs:0x0,%eax
 8aa5f3a:	8d 80 b8 3d fc ff    	lea    -0x3c248(%eax),%eax
 8aa5f40:	89 04 24             	mov    %eax,(%esp)
 8aa5f43:	e8 6c 0a 00 00       	call   8aa69b4 <_Z10ss_sprintfILj256EEiRAT__cPKcz>
 8aa5f48:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8aa5f4c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8aa5f53:	eb 40                	jmp    8aa5f95 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x155>
 8aa5f55:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa5f58:	8b 00                	mov    (%eax),%eax
 8aa5f5a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8aa5f5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5f61:	89 04 24             	mov    %eax,(%esp)
 8aa5f64:	e8 bf c6 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5f69:	65 8b 15 00 00 00 00 	mov    %gs:0x0,%edx
 8aa5f70:	8d 92 b8 3d fc ff    	lea    -0x3c248(%edx),%edx
 8aa5f76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5f7a:	89 04 24             	mov    %eax,(%esp)
 8aa5f7d:	e8 5e 85 5d ff       	call   807e4e0 <strcmp@plt>
 8aa5f82:	85 c0                	test   %eax,%eax
 8aa5f84:	0f 94 c0             	sete   %al
 8aa5f87:	84 c0                	test   %al,%al
 8aa5f89:	74 06                	je     8aa5f91 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x151>
 8aa5f8b:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8aa5f8f:	eb 1b                	jmp    8aa5fac <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x16c>
 8aa5f91:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8aa5f95:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa5f98:	8b 00                	mov    (%eax),%eax
 8aa5f9a:	89 04 24             	mov    %eax,(%esp)
 8aa5f9d:	e8 70 c6 00 00       	call   8ab2612 <_ZNK16StringDictionary8getCountEv>
 8aa5fa2:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8aa5fa5:	0f 9f c0             	setg   %al
 8aa5fa8:	84 c0                	test   %al,%al
 8aa5faa:	75 a9                	jne    8aa5f55 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x115>
 8aa5fac:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8aa5fb0:	83 f0 01             	xor    $0x1,%eax
 8aa5fb3:	84 c0                	test   %al,%al
 8aa5fb5:	74 3a                	je     8aa5ff1 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x1b1>
 8aa5fb7:	8b 55 10             	mov    0x10(%ebp),%edx
 8aa5fba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa5fbd:	8b 00                	mov    (%eax),%eax
 8aa5fbf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa5fc3:	65 8b 15 00 00 00 00 	mov    %gs:0x0,%edx
 8aa5fca:	8d 92 b8 3d fc ff    	lea    -0x3c248(%edx),%edx
 8aa5fd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5fd4:	89 04 24             	mov    %eax,(%esp)
 8aa5fd7:	e8 bc c3 00 00       	call   8ab2398 <_ZN16StringDictionary3addEPKcS1_>
 8aa5fdc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa5fdf:	8b 00                	mov    (%eax),%eax
 8aa5fe1:	89 04 24             	mov    %eax,(%esp)
 8aa5fe4:	e8 29 c6 00 00       	call   8ab2612 <_ZNK16StringDictionary8getCountEv>
 8aa5fe9:	83 e8 01             	sub    $0x1,%eax
 8aa5fec:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8aa5fef:	eb 16                	jmp    8aa6007 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x1c7>
 8aa5ff1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8aa5ff5:	81 7d ec 0f 27 00 00 	cmpl   $0x270f,-0x14(%ebp)
 8aa5ffc:	0f 9e c0             	setle  %al
 8aa5fff:	84 c0                	test   %al,%al
 8aa6001:	0f 85 17 ff ff ff    	jne    8aa5f1e <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0xde>
 8aa6007:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8aa600e:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 8aa6012:	74 51                	je     8aa6065 <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x225>
 8aa6014:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa6017:	8b 00                	mov    (%eax),%eax
 8aa6019:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8aa601c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa6020:	89 04 24             	mov    %eax,(%esp)
 8aa6023:	e8 00 c6 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa6028:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8aa602c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa602f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa6033:	c7 44 24 04 db a8 e2 	movl   $0x8e2a8db,0x4(%esp)
 8aa603a:	08 
 8aa603b:	65 a1 00 00 00 00    	mov    %gs:0x0,%eax
 8aa6041:	8d 80 b8 3d fc ff    	lea    -0x3c248(%eax),%eax
 8aa6047:	89 04 24             	mov    %eax,(%esp)
 8aa604a:	e8 65 09 00 00       	call   8aa69b4 <_Z10ss_sprintfILj256EEiRAT__cPKcz>
 8aa604f:	65 a1 00 00 00 00    	mov    %gs:0x0,%eax
 8aa6055:	8d 80 b8 3d fc ff    	lea    -0x3c248(%eax),%eax
 8aa605b:	89 04 24             	mov    %eax,(%esp)
 8aa605e:	e8 50 91 03 00       	call   8adf1b3 <_Z9toUnicodePKc>
 8aa6063:	eb 45                	jmp    8aa60aa <_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b+0x26a>
 8aa6065:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa6068:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa606b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa606f:	89 04 24             	mov    %eax,(%esp)
 8aa6072:	e8 d7 4c e1 ff       	call   88bad4e <_ZNK16STScriptFileList11GetFileNameEi>
 8aa6077:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8aa607b:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa607e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa6082:	c7 44 24 04 e4 a8 e2 	movl   $0x8e2a8e4,0x4(%esp)
 8aa6089:	08 
 8aa608a:	65 a1 00 00 00 00    	mov    %gs:0x0,%eax
 8aa6090:	8d 80 b8 3e fc ff    	lea    -0x3c148(%eax),%eax
 8aa6096:	89 04 24             	mov    %eax,(%esp)
 8aa6099:	e8 16 09 00 00       	call   8aa69b4 <_Z10ss_sprintfILj256EEiRAT__cPKcz>
 8aa609e:	65 a1 00 00 00 00    	mov    %gs:0x0,%eax
 8aa60a4:	8d 80 b8 3e fc ff    	lea    -0x3c148(%eax),%eax
 8aa60aa:	83 c4 44             	add    $0x44,%esp
 8aa60ad:	5b                   	pop    %ebx
 8aa60ae:	5d                   	pop    %ebp
 8aa60af:	c3                   	ret

```

```c
// RDARScriptStringManager::getTagByName @ 0x8aa5e40

/* RDARScriptStringManager::getTagByName(int, wchar_t const*, wchar_t const*, bool) const */

wchar_t * RDARScriptStringManager::getTagByName
                    (int param_1,wchar_t *param_2,wchar_t *param_3,bool param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  char *__s1;
  int iVar4;
  undefined4 uVar5;
  int *in_GS_OFFSET;
  undefined3 in_stack_00000011;
  int local_28;
  undefined4 local_1c;
  int local_18;
  int local_10;
  
  pwVar2 = (wchar_t *)
           std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                     ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                      (param_1 + 0x18));
  if (param_2 < pwVar2) {
    puVar3 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                        (param_1 + 0x18),(uint)param_2);
    local_28 = getKeyIndex((RDARScriptStringManager *)param_1,(int)param_2,param_3);
    if (local_28 == -1) {
      if ((_param_4 != (wchar_t *)0x0) && (*_param_4 != L'\0')) {
        local_28 = getKeyIndex((RDARScriptStringManager *)param_1,(int)param_2,_param_4);
      }
      if (local_28 == -1) {
        local_1c = std::wstring::c_str((wstring *)(param_1 + 0x24));
      }
      else {
        local_1c = StringDictionary::getKey((StringDictionary *)*puVar3,local_28);
      }
      for (local_18 = 0; local_18 < 10000; local_18 = local_18 + 1) {
        ss_sprintf<256u>((char *)(*in_GS_OFFSET + -0x3c248),"%s_%d",local_1c,local_18);
        bVar1 = false;
        for (local_10 = 0; iVar4 = StringDictionary::getCount((StringDictionary *)*puVar3),
            local_10 < iVar4; local_10 = local_10 + 1) {
          __s1 = (char *)StringDictionary::getKey((StringDictionary *)*puVar3,local_10);
          iVar4 = strcmp(__s1,(char *)(*in_GS_OFFSET + -0x3c248));
          if (iVar4 == 0) {
            bVar1 = true;
            break;
          }
        }
        if (!bVar1) {
          StringDictionary::add
                    ((StringDictionary *)*puVar3,(char *)(*in_GS_OFFSET + -0x3c248),(char *)param_3)
          ;
          local_28 = StringDictionary::getCount((StringDictionary *)*puVar3);
          local_28 = local_28 + -1;
          break;
        }
      }
    }
    if (local_28 != -1) {
      uVar5 = StringDictionary::getKey((StringDictionary *)*puVar3,local_28);
      ss_sprintf<256u>((char *)(*in_GS_OFFSET + -0x3c248),"<%d::%s>",param_2,uVar5);
      pwVar2 = toUnicode((char *)(*in_GS_OFFSET + -0x3c248));
      return pwVar2;
    }
  }
  uVar5 = STScriptFileList::GetFileName(param_1);
  ss_sprintf<256u>((char *)(*in_GS_OFFSET + -0x3c148),"`%s is not found, %s`",param_3,uVar5);
  return (wchar_t *)(*in_GS_OFFSET + -0x3c148);
}

```

---

## getTagSizeInFile

```asm
// === 08aa5df2 RDARScriptStringManager::getTagSizeInFile  [0x08aa5df2-0x8aa5e3f] ===
 8aa5df2:	55                   	push   %ebp
 8aa5df3:	89 e5                	mov    %esp,%ebp
 8aa5df5:	53                   	push   %ebx
 8aa5df6:	83 ec 14             	sub    $0x14,%esp
 8aa5df9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8aa5dfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5dff:	83 c0 18             	add    $0x18,%eax
 8aa5e02:	89 04 24             	mov    %eax,(%esp)
 8aa5e05:	e8 a8 0a 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa5e0a:	39 c3                	cmp    %eax,%ebx
 8aa5e0c:	0f 92 c0             	setb   %al
 8aa5e0f:	84 c0                	test   %al,%al
 8aa5e11:	74 21                	je     8aa5e34 <_ZN23RDARScriptStringManager16getTagSizeInFileEi+0x42>
 8aa5e13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5e16:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa5e19:	83 c2 18             	add    $0x18,%edx
 8aa5e1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5e20:	89 14 24             	mov    %edx,(%esp)
 8aa5e23:	e8 a6 0a 00 00       	call   8aa68ce <_ZNSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa5e28:	8b 00                	mov    (%eax),%eax
 8aa5e2a:	89 04 24             	mov    %eax,(%esp)
 8aa5e2d:	e8 e0 c7 00 00       	call   8ab2612 <_ZNK16StringDictionary8getCountEv>
 8aa5e32:	eb 05                	jmp    8aa5e39 <_ZN23RDARScriptStringManager16getTagSizeInFileEi+0x47>
 8aa5e34:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8aa5e39:	83 c4 14             	add    $0x14,%esp
 8aa5e3c:	5b                   	pop    %ebx
 8aa5e3d:	5d                   	pop    %ebp
 8aa5e3e:	c3                   	ret
 8aa5e3f:	90                   	nop

```

```c
// RDARScriptStringManager::getTagSizeInFile @ 0x8aa5df2

/* RDARScriptStringManager::getTagSizeInFile(int) */

undefined4 __thiscall
RDARScriptStringManager::getTagSizeInFile(RDARScriptStringManager *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                    ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  if ((uint)param_1 < uVar1) {
    puVar2 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    uVar3 = StringDictionary::getCount((StringDictionary *)*puVar2);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## loadStringFile

```asm
// === 08aa529e RDARScriptStringManager::loadStringFile  [0x08aa529e-0x8aa57fd] ===
 8aa529e:	55                   	push   %ebp
 8aa529f:	89 e5                	mov    %esp,%ebp
 8aa52a1:	57                   	push   %edi
 8aa52a2:	56                   	push   %esi
 8aa52a3:	53                   	push   %ebx
 8aa52a4:	81 ec 3c 39 00 00    	sub    $0x393c,%esp
 8aa52aa:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8aa52ae:	74 22                	je     8aa52d2 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x34>
 8aa52b0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8aa52b4:	74 1c                	je     8aa52d2 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x34>
 8aa52b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa52b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa52bc:	8b 00                	mov    (%eax),%eax
 8aa52be:	83 e8 0c             	sub    $0xc,%eax
 8aa52c1:	8b 00                	mov    (%eax),%eax
 8aa52c3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8aa52c6:	89 04 24             	mov    %eax,(%esp)
 8aa52c9:	e8 92 b4 c3 ff       	call   86e0760 <_ZNKSt9basic_iosIcSt11char_traitsIcEE3badEv>
 8aa52ce:	84 c0                	test   %al,%al
 8aa52d0:	74 07                	je     8aa52d9 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x3b>
 8aa52d2:	b8 01 00 00 00       	mov    $0x1,%eax
 8aa52d7:	eb 05                	jmp    8aa52de <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x40>
 8aa52d9:	b8 00 00 00 00       	mov    $0x0,%eax
 8aa52de:	84 c0                	test   %al,%al
 8aa52e0:	74 0a                	je     8aa52ec <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x4e>
 8aa52e2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa52e7:	e9 05 05 00 00       	jmp    8aa57f1 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x553>
 8aa52ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8aa52f3:	00 
 8aa52f4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa52f7:	89 04 24             	mov    %eax,(%esp)
 8aa52fa:	e8 e1 15 00 00       	call   8aa68e0 <_ZNSt8auto_ptrI16StringDictionaryEC1EPS0_>
 8aa52ff:	c7 04 24 24 04 00 00 	movl   $0x424,(%esp)
 8aa5306:	e8 45 f1 c7 ff       	call   8724450 <_Znwj>
 8aa530b:	89 c3                	mov    %eax,%ebx
 8aa530d:	89 d8                	mov    %ebx,%eax
 8aa530f:	89 04 24             	mov    %eax,(%esp)
 8aa5312:	e8 29 cf 00 00       	call   8ab2240 <_ZN16StringDictionaryC1Ev>
 8aa5317:	eb 15                	jmp    8aa532e <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x90>
 8aa5319:	89 d6                	mov    %edx,%esi
 8aa531b:	89 c7                	mov    %eax,%edi
 8aa531d:	89 1c 24             	mov    %ebx,(%esp)
 8aa5320:	e8 cb f1 c7 ff       	call   87244f0 <_ZdlPv>
 8aa5325:	89 f8                	mov    %edi,%eax
 8aa5327:	89 f2                	mov    %esi,%edx
 8aa5329:	e9 9d 04 00 00       	jmp    8aa57cb <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x52d>
 8aa532e:	89 d8                	mov    %ebx,%eax
 8aa5330:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5334:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa5337:	89 04 24             	mov    %eax,(%esp)
 8aa533a:	e8 d5 15 00 00       	call   8aa6914 <_ZNSt8auto_ptrI16StringDictionaryE5resetEPS0_>
 8aa533f:	c6 45 d2 00          	movb   $0x0,-0x2e(%ebp)
 8aa5343:	c7 44 24 04 73 a7 e2 	movl   $0x8e2a773,0x4(%esp)
 8aa534a:	08 
 8aa534b:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa534e:	89 04 24             	mov    %eax,(%esp)
 8aa5351:	e8 6a 87 5d ff       	call   807dac0 <strstr@plt>
 8aa5356:	85 c0                	test   %eax,%eax
 8aa5358:	74 04                	je     8aa535e <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0xc0>
 8aa535a:	c6 45 d2 01          	movb   $0x1,-0x2e(%ebp)
 8aa535e:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 8aa5362:	c7 44 24 04 84 a7 e2 	movl   $0x8e2a784,0x4(%esp)
 8aa5369:	08 
 8aa536a:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa536d:	89 04 24             	mov    %eax,(%esp)
 8aa5370:	e8 6b 91 5d ff       	call   807e4e0 <strcmp@plt>
 8aa5375:	85 c0                	test   %eax,%eax
 8aa5377:	75 04                	jne    8aa537d <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0xdf>
 8aa5379:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 8aa537d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8aa5384:	e9 63 02 00 00       	jmp    8aa55ec <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x34e>
 8aa5389:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8aa538d:	c7 44 24 08 28 29 00 	movl   $0x2928,0x8(%esp)
 8aa5394:	00 
 8aa5395:	8d 85 c8 c6 ff ff    	lea    -0x3938(%ebp),%eax
 8aa539b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa539f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa53a2:	89 04 24             	mov    %eax,(%esp)
 8aa53a5:	e8 e6 1e c4 ff       	call   86e7290 <_ZNSi7getlineEPci>
 8aa53aa:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8aa53b1:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8aa53b8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aa53bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa53bf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aa53c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa53c6:	8d 85 c8 c6 ff ff    	lea    -0x3938(%ebp),%eax
 8aa53cc:	89 04 24             	mov    %eax,(%esp)
 8aa53cf:	e8 7d 11 00 00       	call   8aa6551 <_ZL15parseStringLinePcPS_S0_>
 8aa53d4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8aa53d7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8aa53da:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8aa53dd:	74 7d                	je     8aa545c <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x1be>
 8aa53df:	83 f8 ff             	cmp    $0xffffffff,%eax
 8aa53e2:	0f 85 e8 00 00 00    	jne    8aa54d0 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x232>
 8aa53e8:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8aa53ec:	74 64                	je     8aa5452 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x1b4>
 8aa53ee:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8aa53f1:	89 04 24             	mov    %eax,(%esp)
 8aa53f4:	e8 53 ee e1 ff       	call   88c424c <_ZN8ErrorLogC1Ev>
 8aa53f9:	c7 45 b0 00 00 00 80 	movl   $0x80000000,-0x50(%ebp)
 8aa5400:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa5403:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5407:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8aa540a:	83 c0 04             	add    $0x4,%eax
 8aa540d:	89 04 24             	mov    %eax,(%esp)
 8aa5410:	e8 0b 33 c6 ff       	call   8708720 <_ZNSsaSEPKc>
 8aa5415:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8aa5418:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8aa541b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8aa541e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5422:	8b 45 18             	mov    0x18(%ebp),%eax
 8aa5425:	89 04 24             	mov    %eax,(%esp)
 8aa5428:	e8 5b f3 e1 ff       	call   88c4788 <_ZNSt6vectorI8ErrorLogSaIS0_EE9push_backERKS0_>
 8aa542d:	eb 18                	jmp    8aa5447 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x1a9>
 8aa542f:	89 d3                	mov    %edx,%ebx
 8aa5431:	89 c6                	mov    %eax,%esi
 8aa5433:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8aa5436:	89 04 24             	mov    %eax,(%esp)
 8aa5439:	e8 5a ee e1 ff       	call   88c4298 <_ZN8ErrorLogD1Ev>
 8aa543e:	89 f0                	mov    %esi,%eax
 8aa5440:	89 da                	mov    %ebx,%edx
 8aa5442:	e9 84 03 00 00       	jmp    8aa57cb <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x52d>
 8aa5447:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8aa544a:	89 04 24             	mov    %eax,(%esp)
 8aa544d:	e8 46 ee e1 ff       	call   88c4298 <_ZN8ErrorLogD1Ev>
 8aa5452:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa5457:	e9 8a 03 00 00       	jmp    8aa57e6 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x548>
 8aa545c:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8aa5460:	74 64                	je     8aa54c6 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x228>
 8aa5462:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8aa5465:	89 04 24             	mov    %eax,(%esp)
 8aa5468:	e8 df ed e1 ff       	call   88c424c <_ZN8ErrorLogC1Ev>
 8aa546d:	c7 45 a0 01 00 00 80 	movl   $0x80000001,-0x60(%ebp)
 8aa5474:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa5477:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa547b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8aa547e:	83 c0 04             	add    $0x4,%eax
 8aa5481:	89 04 24             	mov    %eax,(%esp)
 8aa5484:	e8 97 32 c6 ff       	call   8708720 <_ZNSsaSEPKc>
 8aa5489:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8aa548c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8aa548f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8aa5492:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5496:	8b 45 18             	mov    0x18(%ebp),%eax
 8aa5499:	89 04 24             	mov    %eax,(%esp)
 8aa549c:	e8 e7 f2 e1 ff       	call   88c4788 <_ZNSt6vectorI8ErrorLogSaIS0_EE9push_backERKS0_>
 8aa54a1:	eb 18                	jmp    8aa54bb <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x21d>
 8aa54a3:	89 d3                	mov    %edx,%ebx
 8aa54a5:	89 c6                	mov    %eax,%esi
 8aa54a7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8aa54aa:	89 04 24             	mov    %eax,(%esp)
 8aa54ad:	e8 e6 ed e1 ff       	call   88c4298 <_ZN8ErrorLogD1Ev>
 8aa54b2:	89 f0                	mov    %esi,%eax
 8aa54b4:	89 da                	mov    %ebx,%edx
 8aa54b6:	e9 10 03 00 00       	jmp    8aa57cb <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x52d>
 8aa54bb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8aa54be:	89 04 24             	mov    %eax,(%esp)
 8aa54c1:	e8 d2 ed e1 ff       	call   88c4298 <_ZN8ErrorLogD1Ev>
 8aa54c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa54cb:	e9 16 03 00 00       	jmp    8aa57e6 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x548>
 8aa54d0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8aa54d3:	85 c0                	test   %eax,%eax
 8aa54d5:	0f 84 11 01 00 00    	je     8aa55ec <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x34e>
 8aa54db:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8aa54de:	85 c0                	test   %eax,%eax
 8aa54e0:	0f 84 06 01 00 00    	je     8aa55ec <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x34e>
 8aa54e6:	80 7d d3 00          	cmpb   $0x0,-0x2d(%ebp)
 8aa54ea:	74 49                	je     8aa5535 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x297>
 8aa54ec:	8d 9d f0 ef ff ff    	lea    -0x1010(%ebp),%ebx
 8aa54f2:	b8 00 00 00 00       	mov    $0x0,%eax
 8aa54f7:	ba e8 03 00 00       	mov    $0x3e8,%edx
 8aa54fc:	89 df                	mov    %ebx,%edi
 8aa54fe:	89 d1                	mov    %edx,%ecx
 8aa5500:	f3 ab                	rep stos %eax,%es:(%edi)
 8aa5502:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8aa5505:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5509:	8d 85 f0 ef ff ff    	lea    -0x1010(%ebp),%eax
 8aa550f:	89 04 24             	mov    %eax,(%esp)
 8aa5512:	e8 d9 89 5d ff       	call   807def0 <strcpy@plt>
 8aa5517:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8aa551a:	8d 95 f0 ef ff ff    	lea    -0x1010(%ebp),%edx
 8aa5520:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5524:	89 04 24             	mov    %eax,(%esp)
 8aa5527:	e8 dc 38 66 ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8aa552c:	8d 85 f0 ef ff ff    	lea    -0x1010(%ebp),%eax
 8aa5532:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8aa5535:	80 7d d2 00          	cmpb   $0x0,-0x2e(%ebp)
 8aa5539:	74 7c                	je     8aa55b7 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x319>
 8aa553b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8aa553e:	89 04 24             	mov    %eax,(%esp)
 8aa5541:	e8 2f 96 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa5546:	0f b6 00             	movzbl (%eax),%eax
 8aa5549:	84 c0                	test   %al,%al
 8aa554b:	0f 95 c0             	setne  %al
 8aa554e:	84 c0                	test   %al,%al
 8aa5550:	74 37                	je     8aa5589 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x2eb>
 8aa5552:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8aa5555:	89 04 24             	mov    %eax,(%esp)
 8aa5558:	e8 18 96 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa555d:	89 c6                	mov    %eax,%esi
 8aa555f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8aa5562:	89 04 24             	mov    %eax,(%esp)
 8aa5565:	e8 0b 96 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa556a:	89 c3                	mov    %eax,%ebx
 8aa556c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa556f:	89 04 24             	mov    %eax,(%esp)
 8aa5572:	e8 ed 13 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa5577:	89 74 24 08          	mov    %esi,0x8(%esp)
 8aa557b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa557f:	89 04 24             	mov    %eax,(%esp)
 8aa5582:	e8 11 ce 00 00       	call   8ab2398 <_ZN16StringDictionary3addEPKcS1_>
 8aa5587:	eb 63                	jmp    8aa55ec <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x34e>
 8aa5589:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8aa558c:	89 04 24             	mov    %eax,(%esp)
 8aa558f:	e8 e1 95 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa5594:	89 c3                	mov    %eax,%ebx
 8aa5596:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa5599:	89 04 24             	mov    %eax,(%esp)
 8aa559c:	e8 c3 13 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa55a1:	c7 44 24 08 94 a7 e2 	movl   $0x8e2a794,0x8(%esp)
 8aa55a8:	08 
 8aa55a9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa55ad:	89 04 24             	mov    %eax,(%esp)
 8aa55b0:	e8 e3 cd 00 00       	call   8ab2398 <_ZN16StringDictionary3addEPKcS1_>
 8aa55b5:	eb 35                	jmp    8aa55ec <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x34e>
 8aa55b7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8aa55ba:	89 04 24             	mov    %eax,(%esp)
 8aa55bd:	e8 b3 95 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa55c2:	89 c6                	mov    %eax,%esi
 8aa55c4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8aa55c7:	89 04 24             	mov    %eax,(%esp)
 8aa55ca:	e8 a6 95 03 00       	call   8adeb75 <_Z9toTStringPKc>
 8aa55cf:	89 c3                	mov    %eax,%ebx
 8aa55d1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa55d4:	89 04 24             	mov    %eax,(%esp)
 8aa55d7:	e8 88 13 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa55dc:	89 74 24 08          	mov    %esi,0x8(%esp)
 8aa55e0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa55e4:	89 04 24             	mov    %eax,(%esp)
 8aa55e7:	e8 ac cd 00 00       	call   8ab2398 <_ZN16StringDictionary3addEPKcS1_>
 8aa55ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa55ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa55f2:	8b 00                	mov    (%eax),%eax
 8aa55f4:	83 e8 0c             	sub    $0xc,%eax
 8aa55f7:	8b 00                	mov    (%eax),%eax
 8aa55f9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8aa55fc:	89 04 24             	mov    %eax,(%esp)
 8aa55ff:	e8 3c b1 c3 ff       	call   86e0740 <_ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv>
 8aa5604:	83 f0 01             	xor    $0x1,%eax
 8aa5607:	84 c0                	test   %al,%al
 8aa5609:	0f 85 7a fd ff ff    	jne    8aa5389 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0xeb>
 8aa560f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa5612:	89 04 24             	mov    %eax,(%esp)
 8aa5615:	e8 4a 13 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa561a:	89 04 24             	mov    %eax,(%esp)
 8aa561d:	e8 ec cd 00 00       	call   8ab240e <_ZN16StringDictionary6freezeEv>
 8aa5622:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 8aa5626:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8aa562d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa5630:	89 04 24             	mov    %eax,(%esp)
 8aa5633:	e8 2c 13 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa5638:	89 04 24             	mov    %eax,(%esp)
 8aa563b:	e8 d2 cf 00 00       	call   8ab2612 <_ZNK16StringDictionary8getCountEv>
 8aa5640:	83 e8 01             	sub    $0x1,%eax
 8aa5643:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8aa5646:	e9 38 01 00 00       	jmp    8aa5783 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x4e5>
 8aa564b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa564e:	8d 58 01             	lea    0x1(%eax),%ebx
 8aa5651:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa5654:	89 04 24             	mov    %eax,(%esp)
 8aa5657:	e8 08 13 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa565c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa5660:	89 04 24             	mov    %eax,(%esp)
 8aa5663:	e8 c0 cf 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5668:	89 c3                	mov    %eax,%ebx
 8aa566a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa566d:	89 04 24             	mov    %eax,(%esp)
 8aa5670:	e8 ef 12 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa5675:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8aa5678:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa567c:	89 04 24             	mov    %eax,(%esp)
 8aa567f:	e8 a4 cf 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5684:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa5688:	89 04 24             	mov    %eax,(%esp)
 8aa568b:	e8 50 8e 5d ff       	call   807e4e0 <strcmp@plt>
 8aa5690:	85 c0                	test   %eax,%eax
 8aa5692:	0f 94 c0             	sete   %al
 8aa5695:	84 c0                	test   %al,%al
 8aa5697:	0f 84 e2 00 00 00    	je     8aa577f <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x4e1>
 8aa569d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa56a0:	8d 58 01             	lea    0x1(%eax),%ebx
 8aa56a3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa56a6:	89 04 24             	mov    %eax,(%esp)
 8aa56a9:	e8 b6 12 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa56ae:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8aa56b2:	89 04 24             	mov    %eax,(%esp)
 8aa56b5:	e8 6e cf 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa56ba:	89 c3                	mov    %eax,%ebx
 8aa56bc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa56bf:	89 04 24             	mov    %eax,(%esp)
 8aa56c2:	e8 9d 12 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa56c7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8aa56ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa56ce:	89 04 24             	mov    %eax,(%esp)
 8aa56d1:	e8 52 cf 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa56d6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8aa56da:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa56de:	c7 04 24 99 a7 e2 08 	movl   $0x8e2a799,(%esp)
 8aa56e5:	e8 76 84 5d ff       	call   807db60 <printf@plt>
 8aa56ea:	c6 45 db 01          	movb   $0x1,-0x25(%ebp)
 8aa56ee:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8aa56f2:	0f 84 87 00 00 00    	je     8aa577f <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x4e1>
 8aa56f8:	8d 45 90             	lea    -0x70(%ebp),%eax
 8aa56fb:	89 04 24             	mov    %eax,(%esp)
 8aa56fe:	e8 49 eb e1 ff       	call   88c424c <_ZN8ErrorLogC1Ev>
 8aa5703:	c7 45 90 02 00 00 80 	movl   $0x80000002,-0x70(%ebp)
 8aa570a:	8b 45 10             	mov    0x10(%ebp),%eax
 8aa570d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5711:	8d 45 90             	lea    -0x70(%ebp),%eax
 8aa5714:	83 c0 04             	add    $0x4,%eax
 8aa5717:	89 04 24             	mov    %eax,(%esp)
 8aa571a:	e8 01 30 c6 ff       	call   8708720 <_ZNSsaSEPKc>
 8aa571f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa5722:	89 04 24             	mov    %eax,(%esp)
 8aa5725:	e8 3a 12 00 00       	call   8aa6964 <_ZNKSt8auto_ptrI16StringDictionaryEptEv>
 8aa572a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8aa572d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5731:	89 04 24             	mov    %eax,(%esp)
 8aa5734:	e8 ef ce 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5739:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa573d:	8d 45 90             	lea    -0x70(%ebp),%eax
 8aa5740:	83 c0 08             	add    $0x8,%eax
 8aa5743:	89 04 24             	mov    %eax,(%esp)
 8aa5746:	e8 d5 2f c6 ff       	call   8708720 <_ZNSsaSEPKc>
 8aa574b:	8d 45 90             	lea    -0x70(%ebp),%eax
 8aa574e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5752:	8b 45 18             	mov    0x18(%ebp),%eax
 8aa5755:	89 04 24             	mov    %eax,(%esp)
 8aa5758:	e8 2b f0 e1 ff       	call   88c4788 <_ZNSt6vectorI8ErrorLogSaIS0_EE9push_backERKS0_>
 8aa575d:	eb 15                	jmp    8aa5774 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x4d6>
 8aa575f:	89 d3                	mov    %edx,%ebx
 8aa5761:	89 c6                	mov    %eax,%esi
 8aa5763:	8d 45 90             	lea    -0x70(%ebp),%eax
 8aa5766:	89 04 24             	mov    %eax,(%esp)
 8aa5769:	e8 2a eb e1 ff       	call   88c4298 <_ZN8ErrorLogD1Ev>
 8aa576e:	89 f0                	mov    %esi,%eax
 8aa5770:	89 da                	mov    %ebx,%edx
 8aa5772:	eb 57                	jmp    8aa57cb <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x52d>
 8aa5774:	8d 45 90             	lea    -0x70(%ebp),%eax
 8aa5777:	89 04 24             	mov    %eax,(%esp)
 8aa577a:	e8 19 eb e1 ff       	call   88c4298 <_ZN8ErrorLogD1Ev>
 8aa577f:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8aa5783:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa5786:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8aa5789:	0f 9c c0             	setl   %al
 8aa578c:	84 c0                	test   %al,%al
 8aa578e:	0f 85 b7 fe ff ff    	jne    8aa564b <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x3ad>
 8aa5794:	80 7d db 00          	cmpb   $0x0,-0x25(%ebp)
 8aa5798:	74 07                	je     8aa57a1 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x503>
 8aa579a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aa579f:	eb 45                	jmp    8aa57e6 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x548>
 8aa57a1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa57a4:	89 04 24             	mov    %eax,(%esp)
 8aa57a7:	e8 c2 11 00 00       	call   8aa696e <_ZNSt8auto_ptrI16StringDictionaryE7releaseEv>
 8aa57ac:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8aa57af:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa57b2:	8d 50 18             	lea    0x18(%eax),%edx
 8aa57b5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8aa57b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa57bc:	89 14 24             	mov    %edx,(%esp)
 8aa57bf:	e8 c6 11 00 00       	call   8aa698a <_ZNSt6vectorIP16StringDictionarySaIS1_EE9push_backEOS1_>
 8aa57c4:	bb 01 00 00 00       	mov    $0x1,%ebx
 8aa57c9:	eb 1b                	jmp    8aa57e6 <_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE+0x548>
 8aa57cb:	89 d3                	mov    %edx,%ebx
 8aa57cd:	89 c6                	mov    %eax,%esi
 8aa57cf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa57d2:	89 04 24             	mov    %eax,(%esp)
 8aa57d5:	e8 14 11 00 00       	call   8aa68ee <_ZNSt8auto_ptrI16StringDictionaryED1Ev>
 8aa57da:	89 f0                	mov    %esi,%eax
 8aa57dc:	89 da                	mov    %ebx,%edx
 8aa57de:	89 04 24             	mov    %eax,(%esp)
 8aa57e1:	e8 6a df 03 00       	call   8ae3750 <_Unwind_Resume>
 8aa57e6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aa57e9:	89 04 24             	mov    %eax,(%esp)
 8aa57ec:	e8 fd 10 00 00       	call   8aa68ee <_ZNSt8auto_ptrI16StringDictionaryED1Ev>
 8aa57f1:	89 d8                	mov    %ebx,%eax
 8aa57f3:	81 c4 3c 39 00 00    	add    $0x393c,%esp
 8aa57f9:	5b                   	pop    %ebx
 8aa57fa:	5e                   	pop    %esi
 8aa57fb:	5f                   	pop    %edi
 8aa57fc:	5d                   	pop    %ebp
 8aa57fd:	c3                   	ret

```

```c
// RDARScriptStringManager::loadStringFile @ 0x8aa529e

/* RDARScriptStringManager::loadStringFile(std::istream*, char const*, int, std::vector<ErrorLog,
   std::allocator<ErrorLog> >*) */

undefined4 __thiscall
RDARScriptStringManager::loadStringFile
          (RDARScriptStringManager *this,istream *param_1,char *param_2,int param_3,vector *param_4)

{
  bool bVar1;
  char cVar2;
  StringDictionary *pSVar3;
  char *pcVar4;
  int iVar5;
  TCHAR *pTVar6;
  TCHAR *pTVar7;
  char *__s1;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  char local_393c [10536];
  char local_1014 [4000];
  undefined4 local_74;
  string asStack_70 [4];
  string asStack_6c [8];
  undefined4 local_64;
  string asStack_60 [8];
  int local_58;
  undefined4 local_54;
  string asStack_50 [8];
  int local_48;
  char *local_44;
  char *local_40;
  auto_ptr<StringDictionary> local_3c [4];
  StringDictionary *local_38;
  char local_32;
  char local_31;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  
  bVar10 = 0;
  if ((param_1 != (istream *)0x0) && (param_2 != (char *)0x0)) {
    cVar2 = std::ios::bad((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08aa52de;
    }
  }
  bVar1 = true;
LAB_08aa52de:
  if (bVar1) {
    uVar9 = 0;
  }
  else {
    std::auto_ptr<StringDictionary>::auto_ptr(local_3c,(StringDictionary *)0x0);
                    /* try { // try from 08aa5306 to 08aa530a has its CatchHandler @ 08aa57cb */
    pSVar3 = operator_new(0x424);
                    /* try { // try from 08aa5312 to 08aa5316 has its CatchHandler @ 08aa5319 */
    StringDictionary::StringDictionary(pSVar3);
    std::auto_ptr<StringDictionary>::reset(local_3c,pSVar3);
    local_32 = '\0';
    pcVar4 = strstr(param_2,"Creature.jpn.str");
    if (pcVar4 != (char *)0x0) {
      local_32 = '\x01';
    }
    local_31 = '\0';
    iVar5 = strcmp(param_2,"Etc/Etc.kor.str");
    if (iVar5 == 0) {
      local_31 = '\x01';
    }
    local_30 = 0;
    while( true ) {
      cVar2 = std::ios::eof((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)));
      if (cVar2 == '\x01') break;
      local_30 = local_30 + 1;
                    /* try { // try from 08aa53a5 to 08aa53f8 has its CatchHandler @ 08aa57cb */
      std::istream::getline(param_1,local_393c,0x2928);
      local_40 = (char *)0x0;
      local_44 = (char *)0x0;
      local_28 = parseStringLine(local_393c,&local_40,&local_44);
      if (local_28 == -2) {
        if (param_4 != (vector *)0x0) {
          ErrorLog::ErrorLog((ErrorLog *)&local_64);
          local_64 = 0x80000001;
                    /* try { // try from 08aa5484 to 08aa54a0 has its CatchHandler @ 08aa54a3 */
          std::string::operator=(asStack_60,param_2);
          local_58 = local_30;
          std::vector<ErrorLog,std::allocator<ErrorLog>>::push_back
                    ((vector<ErrorLog,std::allocator<ErrorLog>> *)param_4,(ErrorLog *)&local_64);
                    /* try { // try from 08aa54c1 to 08aa5702 has its CatchHandler @ 08aa57cb */
          ErrorLog::~ErrorLog((ErrorLog *)&local_64);
        }
        uVar9 = 0;
        goto LAB_08aa57e6;
      }
      if (local_28 == -1) {
        if (param_4 != (vector *)0x0) {
          ErrorLog::ErrorLog((ErrorLog *)&local_54);
          local_54 = 0x80000000;
                    /* try { // try from 08aa5410 to 08aa542c has its CatchHandler @ 08aa542f */
          std::string::operator=(asStack_50,param_2);
          local_48 = local_30;
          std::vector<ErrorLog,std::allocator<ErrorLog>>::push_back
                    ((vector<ErrorLog,std::allocator<ErrorLog>> *)param_4,(ErrorLog *)&local_54);
                    /* try { // try from 08aa544d to 08aa546c has its CatchHandler @ 08aa57cb */
          ErrorLog::~ErrorLog((ErrorLog *)&local_54);
        }
        uVar9 = 0;
        goto LAB_08aa57e6;
      }
      if ((local_40 != (char *)0x0) && (local_44 != (char *)0x0)) {
        if (local_31 != '\0') {
          pcVar4 = local_1014;
          for (iVar5 = 1000; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + ((uint)bVar10 * -2 + 1) * 4;
          }
          strcpy(local_1014,local_44);
          CodePage::script2Database(local_44,local_1014);
          local_44 = local_1014;
        }
        if (local_32 == '\0') {
          pTVar6 = toTString(local_44);
          pTVar7 = toTString(local_40);
          pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
          StringDictionary::add(pSVar3,pTVar7,pTVar6);
        }
        else {
          pTVar6 = toTString(local_44);
          if (*pTVar6 == '\0') {
            pTVar6 = toTString(local_40);
            pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
            StringDictionary::add(pSVar3,pTVar6,"NULL");
          }
          else {
            pTVar6 = toTString(local_44);
            pTVar7 = toTString(local_40);
            pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
            StringDictionary::add(pSVar3,pTVar7,pTVar6);
          }
        }
      }
    }
    pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
    StringDictionary::freeze(pSVar3);
    local_29 = '\0';
    local_24 = 0;
    pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
    local_20 = StringDictionary::getCount(pSVar3);
    local_20 = local_20 + -1;
    for (; local_24 < local_20; local_24 = local_24 + 1) {
      iVar5 = local_24 + 1;
      pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
      pcVar4 = (char *)StringDictionary::getKey(pSVar3,iVar5);
      pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
      __s1 = (char *)StringDictionary::getKey(pSVar3,local_24);
      iVar5 = strcmp(__s1,pcVar4);
      if (iVar5 == 0) {
        iVar5 = local_24 + 1;
        pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
        uVar9 = StringDictionary::getKey(pSVar3,iVar5);
        pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
        uVar8 = StringDictionary::getKey(pSVar3,local_24);
        printf("%s, %s \n",uVar8,uVar9);
        local_29 = '\x01';
        if (param_4 != (vector *)0x0) {
          ErrorLog::ErrorLog((ErrorLog *)&local_74);
          local_74 = 0x80000002;
                    /* try { // try from 08aa571a to 08aa575c has its CatchHandler @ 08aa575f */
          std::string::operator=(asStack_70,param_2);
          pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
          pcVar4 = (char *)StringDictionary::getKey(pSVar3,local_24);
          std::string::operator=(asStack_6c,pcVar4);
          std::vector<ErrorLog,std::allocator<ErrorLog>>::push_back
                    ((vector<ErrorLog,std::allocator<ErrorLog>> *)param_4,(ErrorLog *)&local_74);
                    /* try { // try from 08aa577a to 08aa57c3 has its CatchHandler @ 08aa57cb */
          ErrorLog::~ErrorLog((ErrorLog *)&local_74);
        }
      }
    }
    if (local_29 == '\0') {
      local_38 = (StringDictionary *)std::auto_ptr<StringDictionary>::release(local_3c);
      std::vector<StringDictionary*,std::allocator<StringDictionary*>>::push_back
                ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18),
                 &local_38);
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
LAB_08aa57e6:
    std::auto_ptr<StringDictionary>::~auto_ptr(local_3c);
  }
  return uVar9;
}

```

---

## release

```asm
// === 08aa5014 RDARScriptStringManager::release  [0x08aa5014-0x8aa50b3] ===
 8aa5014:	55                   	push   %ebp
 8aa5015:	89 e5                	mov    %esp,%ebp
 8aa5017:	53                   	push   %ebx
 8aa5018:	83 ec 24             	sub    $0x24,%esp
 8aa501b:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa501e:	8d 50 18             	lea    0x18(%eax),%edx
 8aa5021:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8aa5024:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5028:	89 04 24             	mov    %eax,(%esp)
 8aa502b:	e8 7c 17 00 00       	call   8aa67ac <_ZNSt6vectorIP16StringDictionarySaIS1_EE5beginEv>
 8aa5030:	83 ec 04             	sub    $0x4,%esp
 8aa5033:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5036:	8d 50 18             	lea    0x18(%eax),%edx
 8aa5039:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8aa503c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5040:	89 04 24             	mov    %eax,(%esp)
 8aa5043:	e8 88 17 00 00       	call   8aa67d0 <_ZNSt6vectorIP16StringDictionarySaIS1_EE3endEv>
 8aa5048:	83 ec 04             	sub    $0x4,%esp
 8aa504b:	eb 3e                	jmp    8aa508b <_ZN23RDARScriptStringManager7releaseEv+0x77>
 8aa504d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8aa5050:	89 04 24             	mov    %eax,(%esp)
 8aa5053:	e8 fe 17 00 00       	call   8aa6856 <_ZNK9__gnu_cxx17__normal_iteratorIPP16StringDictionarySt6vectorIS2_SaIS2_EEEdeEv>
 8aa5058:	8b 18                	mov    (%eax),%ebx
 8aa505a:	85 db                	test   %ebx,%ebx
 8aa505c:	74 10                	je     8aa506e <_ZN23RDARScriptStringManager7releaseEv+0x5a>
 8aa505e:	89 1c 24             	mov    %ebx,(%esp)
 8aa5061:	e8 58 d2 00 00       	call   8ab22be <_ZN16StringDictionaryD1Ev>
 8aa5066:	89 1c 24             	mov    %ebx,(%esp)
 8aa5069:	e8 82 f4 c7 ff       	call   87244f0 <_ZdlPv>
 8aa506e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8aa5071:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8aa5078:	00 
 8aa5079:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8aa507c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5080:	89 04 24             	mov    %eax,(%esp)
 8aa5083:	e8 9a 17 00 00       	call   8aa6822 <_ZN9__gnu_cxx17__normal_iteratorIPP16StringDictionarySt6vectorIS2_SaIS2_EEEppEi>
 8aa5088:	83 ec 04             	sub    $0x4,%esp
 8aa508b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8aa508e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5092:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8aa5095:	89 04 24             	mov    %eax,(%esp)
 8aa5098:	e8 59 17 00 00       	call   8aa67f6 <_ZN9__gnu_cxxneIPP16StringDictionarySt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8aa509d:	84 c0                	test   %al,%al
 8aa509f:	75 ac                	jne    8aa504d <_ZN23RDARScriptStringManager7releaseEv+0x39>
 8aa50a1:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa50a4:	83 c0 18             	add    $0x18,%eax
 8aa50a7:	89 04 24             	mov    %eax,(%esp)
 8aa50aa:	e8 b1 17 00 00       	call   8aa6860 <_ZNSt6vectorIP16StringDictionarySaIS1_EE5clearEv>
 8aa50af:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8aa50b2:	c9                   	leave
 8aa50b3:	c3                   	ret

```

```c
// RDARScriptStringManager::release @ 0x8aa5014

/* RDARScriptStringManager::release() */

void __thiscall RDARScriptStringManager::release(RDARScriptStringManager *this)

{
  StringDictionary *this_00;
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_14 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_10 [8];
  
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::begin();
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
             ::operator*(local_14);
    this_00 = (StringDictionary *)*puVar2;
    if (this_00 != (StringDictionary *)0x0) {
      StringDictionary::~StringDictionary(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
    ::operator++(local_10,(int)local_14);
  }
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::clear
            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  return;
}

```

---

## setTableValue

```asm
// === 08aa5d98 RDARScriptStringManager::setTableValue  [0x08aa5d98-0x8aa5df1] ===
 8aa5d98:	55                   	push   %ebp
 8aa5d99:	89 e5                	mov    %esp,%ebp
 8aa5d9b:	53                   	push   %ebx
 8aa5d9c:	83 ec 24             	sub    $0x24,%esp
 8aa5d9f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8aa5da2:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5da5:	83 c0 18             	add    $0x18,%eax
 8aa5da8:	89 04 24             	mov    %eax,(%esp)
 8aa5dab:	e8 02 0b 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa5db0:	39 c3                	cmp    %eax,%ebx
 8aa5db2:	0f 92 c0             	setb   %al
 8aa5db5:	84 c0                	test   %al,%al
 8aa5db7:	74 33                	je     8aa5dec <_ZN23RDARScriptStringManager13setTableValueEiiPKc+0x54>
 8aa5db9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa5dbc:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa5dbf:	83 c2 18             	add    $0x18,%edx
 8aa5dc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5dc6:	89 14 24             	mov    %edx,(%esp)
 8aa5dc9:	e8 00 0b 00 00       	call   8aa68ce <_ZNSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa5dce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aa5dd1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aa5dd4:	8b 00                	mov    (%eax),%eax
 8aa5dd6:	8b 55 14             	mov    0x14(%ebp),%edx
 8aa5dd9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aa5ddd:	8b 55 10             	mov    0x10(%ebp),%edx
 8aa5de0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5de4:	89 04 24             	mov    %eax,(%esp)
 8aa5de7:	e8 bc c8 00 00       	call   8ab26a8 <_ZN16StringDictionary8setValueEiPKc>
 8aa5dec:	83 c4 24             	add    $0x24,%esp
 8aa5def:	5b                   	pop    %ebx
 8aa5df0:	5d                   	pop    %ebp
 8aa5df1:	c3                   	ret

```

```c
// RDARScriptStringManager::setTableValue @ 0x8aa5d98

/* RDARScriptStringManager::setTableValue(int, int, char const*) */

void __thiscall
RDARScriptStringManager::setTableValue
          (RDARScriptStringManager *this,int param_1,int param_2,char *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                    ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  if ((uint)param_1 < uVar1) {
    puVar2 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    StringDictionary::setValue((StringDictionary *)*puVar2,param_2,param_3);
  }
  return;
}

```

---

## writeStringFile

```asm
// === 08aa50bc RDARScriptStringManager::writeStringFile  [0x08aa50bc-0x8aa529d] ===
 8aa50bc:	55                   	push   %ebp
 8aa50bd:	89 e5                	mov    %esp,%ebp
 8aa50bf:	53                   	push   %ebx
 8aa50c0:	81 ec 44 06 00 00    	sub    $0x644,%esp
 8aa50c6:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa50c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8aa50cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa50d0:	89 04 24             	mov    %eax,(%esp)
 8aa50d3:	e8 76 5c e1 ff       	call   88bad4e <_ZNK16STScriptFileList11GetFileNameEi>
 8aa50d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa50dc:	c7 44 24 04 60 a7 e2 	movl   $0x8e2a760,0x4(%esp)
 8aa50e3:	08 
 8aa50e4:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 8aa50ea:	89 04 24             	mov    %eax,(%esp)
 8aa50ed:	e8 8a 17 00 00       	call   8aa687c <_Z10ss_sprintfILj512EEiRAT__cPKcz>
 8aa50f2:	c7 44 24 04 6a a7 e2 	movl   $0x8e2a76a,0x4(%esp)
 8aa50f9:	08 
 8aa50fa:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 8aa5100:	89 04 24             	mov    %eax,(%esp)
 8aa5103:	e8 68 96 5d ff       	call   807e770 <fopen@plt>
 8aa5108:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8aa510b:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8aa510f:	0f 95 c0             	setne  %al
 8aa5112:	84 c0                	test   %al,%al
 8aa5114:	0f 84 76 01 00 00    	je     8aa5290 <_ZN23RDARScriptStringManager15writeStringFileEi+0x1d4>
 8aa511a:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8aa511d:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5120:	83 c0 18             	add    $0x18,%eax
 8aa5123:	89 04 24             	mov    %eax,(%esp)
 8aa5126:	e8 87 17 00 00       	call   8aa68b2 <_ZNKSt6vectorIP16StringDictionarySaIS1_EE4sizeEv>
 8aa512b:	39 c3                	cmp    %eax,%ebx
 8aa512d:	0f 92 c0             	setb   %al
 8aa5130:	84 c0                	test   %al,%al
 8aa5132:	0f 84 46 01 00 00    	je     8aa527e <_ZN23RDARScriptStringManager15writeStringFileEi+0x1c2>
 8aa5138:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aa513b:	8b 55 08             	mov    0x8(%ebp),%edx
 8aa513e:	83 c2 18             	add    $0x18,%edx
 8aa5141:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa5145:	89 14 24             	mov    %edx,(%esp)
 8aa5148:	e8 81 17 00 00       	call   8aa68ce <_ZNSt6vectorIP16StringDictionarySaIS1_EEixEj>
 8aa514d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8aa5150:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8aa5157:	e9 07 01 00 00       	jmp    8aa5263 <_ZN23RDARScriptStringManager15writeStringFileEi+0x1a7>
 8aa515c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8aa515f:	8b 00                	mov    (%eax),%eax
 8aa5161:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8aa5164:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa5168:	89 04 24             	mov    %eax,(%esp)
 8aa516b:	e8 b8 d4 00 00       	call   8ab2628 <_ZNK16StringDictionary6getKeyEi>
 8aa5170:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8aa5173:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8aa5176:	8b 00                	mov    (%eax),%eax
 8aa5178:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8aa517b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa517f:	89 04 24             	mov    %eax,(%esp)
 8aa5182:	e8 e1 d4 00 00       	call   8ab2668 <_ZNK16StringDictionary8getValueEi>
 8aa5187:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa518b:	8d 85 d4 f9 ff ff    	lea    -0x62c(%ebp),%eax
 8aa5191:	89 04 24             	mov    %eax,(%esp)
 8aa5194:	e8 57 8d 5d ff       	call   807def0 <strcpy@plt>
 8aa5199:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8aa519d:	0f 84 bc 00 00 00    	je     8aa525f <_ZN23RDARScriptStringManager15writeStringFileEi+0x1a3>
 8aa51a3:	8d 85 d4 f9 ff ff    	lea    -0x62c(%ebp),%eax
 8aa51a9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8aa51ac:	eb 7a                	jmp    8aa5228 <_ZN23RDARScriptStringManager15writeStringFileEi+0x16c>
 8aa51ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8aa51b1:	0f b6 00             	movzbl (%eax),%eax
 8aa51b4:	3c 0a                	cmp    $0xa,%al
 8aa51b6:	75 6c                	jne    8aa5224 <_ZN23RDARScriptStringManager15writeStringFileEi+0x168>
 8aa51b8:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 8aa51bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8aa51c2:	83 c0 01             	add    $0x1,%eax
 8aa51c5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8aa51c8:	eb 08                	jmp    8aa51d2 <_ZN23RDARScriptStringManager15writeStringFileEi+0x116>
 8aa51ca:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8aa51ce:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8aa51d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8aa51d5:	0f b6 00             	movzbl (%eax),%eax
 8aa51d8:	84 c0                	test   %al,%al
 8aa51da:	0f 95 c0             	setne  %al
 8aa51dd:	84 c0                	test   %al,%al
 8aa51df:	75 e9                	jne    8aa51ca <_ZN23RDARScriptStringManager15writeStringFileEi+0x10e>
 8aa51e1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa51e4:	03 45 e4             	add    -0x1c(%ebp),%eax
 8aa51e7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8aa51ea:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aa51ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aa51f0:	eb 16                	jmp    8aa5208 <_ZN23RDARScriptStringManager15writeStringFileEi+0x14c>
 8aa51f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8aa51f5:	8d 50 01             	lea    0x1(%eax),%edx
 8aa51f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8aa51fb:	0f b6 00             	movzbl (%eax),%eax
 8aa51fe:	88 02                	mov    %al,(%edx)
 8aa5200:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 8aa5204:	83 6d ec 01          	subl   $0x1,-0x14(%ebp)
 8aa5208:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aa520b:	f7 d0                	not    %eax
 8aa520d:	c1 e8 1f             	shr    $0x1f,%eax
 8aa5210:	84 c0                	test   %al,%al
 8aa5212:	75 de                	jne    8aa51f2 <_ZN23RDARScriptStringManager15writeStringFileEi+0x136>
 8aa5214:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8aa5217:	c6 00 5c             	movb   $0x5c,(%eax)
 8aa521a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8aa521e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8aa5221:	c6 00 6e             	movb   $0x6e,(%eax)
 8aa5224:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8aa5228:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8aa522b:	0f b6 00             	movzbl (%eax),%eax
 8aa522e:	84 c0                	test   %al,%al
 8aa5230:	0f 95 c0             	setne  %al
 8aa5233:	84 c0                	test   %al,%al
 8aa5235:	0f 85 73 ff ff ff    	jne    8aa51ae <_ZN23RDARScriptStringManager15writeStringFileEi+0xf2>
 8aa523b:	8d 85 d4 f9 ff ff    	lea    -0x62c(%ebp),%eax
 8aa5241:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8aa5245:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8aa5248:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aa524c:	c7 44 24 04 6c a7 e2 	movl   $0x8e2a76c,0x4(%esp)
 8aa5253:	08 
 8aa5254:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8aa5257:	89 04 24             	mov    %eax,(%esp)
 8aa525a:	e8 31 88 5d ff       	call   807da90 <fprintf@plt>
 8aa525f:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8aa5263:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8aa5266:	8b 00                	mov    (%eax),%eax
 8aa5268:	89 04 24             	mov    %eax,(%esp)
 8aa526b:	e8 a2 d3 00 00       	call   8ab2612 <_ZNK16StringDictionary8getCountEv>
 8aa5270:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8aa5273:	0f 9f c0             	setg   %al
 8aa5276:	84 c0                	test   %al,%al
 8aa5278:	0f 85 de fe ff ff    	jne    8aa515c <_ZN23RDARScriptStringManager15writeStringFileEi+0xa0>
 8aa527e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8aa5281:	89 04 24             	mov    %eax,(%esp)
 8aa5284:	e8 17 8c 5d ff       	call   807dea0 <fclose@plt>
 8aa5289:	b8 01 00 00 00       	mov    $0x1,%eax
 8aa528e:	eb 05                	jmp    8aa5295 <_ZN23RDARScriptStringManager15writeStringFileEi+0x1d9>
 8aa5290:	b8 00 00 00 00       	mov    $0x0,%eax
 8aa5295:	81 c4 44 06 00 00    	add    $0x644,%esp
 8aa529b:	5b                   	pop    %ebx
 8aa529c:	5d                   	pop    %ebp
 8aa529d:	c3                   	ret

```

```c
// RDARScriptStringManager::writeStringFile @ 0x8aa50bc

/* RDARScriptStringManager::writeStringFile(int) */

undefined4 __thiscall
RDARScriptStringManager::writeStringFile(RDARScriptStringManager *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *__src;
  int iVar3;
  char local_630 [1024];
  char local_230 [512];
  FILE *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  int local_10;
  
  uVar1 = STScriptFileList::GetFileName((int)this);
  ss_sprintf<512u>(local_230,"Script/%s",uVar1);
  local_30 = fopen(local_230,"w");
  if (local_30 == (FILE *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                      ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18))
    ;
    if ((uint)param_1 < uVar2) {
      local_2c = (undefined4 *)
                 std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                           ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                            (this + 0x18),param_1);
      local_28 = 0;
      while( true ) {
        iVar3 = StringDictionary::getCount((StringDictionary *)*local_2c);
        if (iVar3 <= local_28) break;
        local_24 = StringDictionary::getKey((StringDictionary *)*local_2c,local_28);
        __src = (char *)StringDictionary::getValue((StringDictionary *)*local_2c,local_28);
        strcpy(local_630,__src);
        if (local_24 != 0) {
          for (local_20 = local_630; *local_20 != '\0'; local_20 = local_20 + 1) {
            if (*local_20 == '\n') {
              local_1c = 1;
              local_14 = local_20;
              while (local_14 = local_14 + 1, *local_14 != '\0') {
                local_1c = local_1c + 1;
              }
              local_18 = local_20 + local_1c;
              for (local_10 = local_1c; -1 < local_10; local_10 = local_10 + -1) {
                local_18[1] = *local_18;
                local_18 = local_18 + -1;
              }
              *local_20 = '\\';
              local_20 = local_20 + 1;
              *local_20 = 'n';
            }
          }
          fprintf(local_30,"%s>%s\n",local_24,local_630);
        }
        local_28 = local_28 + 1;
      }
    }
    fclose(local_30);
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## ~RDARScriptStringManager

```asm
// === 08aa4f04 RDARScriptStringManager::~RDARScriptStringManager  [0x08aa4f04-0x8aa5013] ===
 8aa4f04:	55                   	push   %ebp
 8aa4f05:	89 e5                	mov    %esp,%ebp
 8aa4f07:	56                   	push   %esi
 8aa4f08:	53                   	push   %ebx
 8aa4f09:	83 ec 20             	sub    $0x20,%esp
 8aa4f0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4f0f:	8d 50 18             	lea    0x18(%eax),%edx
 8aa4f12:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8aa4f15:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa4f19:	89 04 24             	mov    %eax,(%esp)
 8aa4f1c:	e8 8b 18 00 00       	call   8aa67ac <_ZNSt6vectorIP16StringDictionarySaIS1_EE5beginEv>
 8aa4f21:	83 ec 04             	sub    $0x4,%esp
 8aa4f24:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4f27:	8d 50 18             	lea    0x18(%eax),%edx
 8aa4f2a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8aa4f2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa4f31:	89 04 24             	mov    %eax,(%esp)
 8aa4f34:	e8 97 18 00 00       	call   8aa67d0 <_ZNSt6vectorIP16StringDictionarySaIS1_EE3endEv>
 8aa4f39:	83 ec 04             	sub    $0x4,%esp
 8aa4f3c:	eb 3e                	jmp    8aa4f7c <_ZN23RDARScriptStringManagerD1Ev+0x78>
 8aa4f3e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8aa4f41:	89 04 24             	mov    %eax,(%esp)
 8aa4f44:	e8 0d 19 00 00       	call   8aa6856 <_ZNK9__gnu_cxx17__normal_iteratorIPP16StringDictionarySt6vectorIS2_SaIS2_EEEdeEv>
 8aa4f49:	8b 18                	mov    (%eax),%ebx
 8aa4f4b:	85 db                	test   %ebx,%ebx
 8aa4f4d:	74 10                	je     8aa4f5f <_ZN23RDARScriptStringManagerD1Ev+0x5b>
 8aa4f4f:	89 1c 24             	mov    %ebx,(%esp)
 8aa4f52:	e8 67 d3 00 00       	call   8ab22be <_ZN16StringDictionaryD1Ev>
 8aa4f57:	89 1c 24             	mov    %ebx,(%esp)
 8aa4f5a:	e8 91 f5 c7 ff       	call   87244f0 <_ZdlPv>
 8aa4f5f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8aa4f62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8aa4f69:	00 
 8aa4f6a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8aa4f6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aa4f71:	89 04 24             	mov    %eax,(%esp)
 8aa4f74:	e8 a9 18 00 00       	call   8aa6822 <_ZN9__gnu_cxx17__normal_iteratorIPP16StringDictionarySt6vectorIS2_SaIS2_EEEppEi>
 8aa4f79:	83 ec 04             	sub    $0x4,%esp
 8aa4f7c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8aa4f7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aa4f83:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8aa4f86:	89 04 24             	mov    %eax,(%esp)
 8aa4f89:	e8 68 18 00 00       	call   8aa67f6 <_ZN9__gnu_cxxneIPP16StringDictionarySt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8aa4f8e:	84 c0                	test   %al,%al
 8aa4f90:	75 ac                	jne    8aa4f3e <_ZN23RDARScriptStringManagerD1Ev+0x3a>
 8aa4f92:	eb 18                	jmp    8aa4fac <_ZN23RDARScriptStringManagerD1Ev+0xa8>
 8aa4f94:	89 d3                	mov    %edx,%ebx
 8aa4f96:	89 c6                	mov    %eax,%esi
 8aa4f98:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4f9b:	83 c0 24             	add    $0x24,%eax
 8aa4f9e:	89 04 24             	mov    %eax,(%esp)
 8aa4fa1:	e8 7a 87 c7 ff       	call   871d720 <_ZNSbIwSt11char_traitsIwESaIwEED1Ev>
 8aa4fa6:	89 f0                	mov    %esi,%eax
 8aa4fa8:	89 da                	mov    %ebx,%edx
 8aa4faa:	eb 10                	jmp    8aa4fbc <_ZN23RDARScriptStringManagerD1Ev+0xb8>
 8aa4fac:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4faf:	83 c0 24             	add    $0x24,%eax
 8aa4fb2:	89 04 24             	mov    %eax,(%esp)
 8aa4fb5:	e8 66 87 c7 ff       	call   871d720 <_ZNSbIwSt11char_traitsIwESaIwEED1Ev>
 8aa4fba:	eb 18                	jmp    8aa4fd4 <_ZN23RDARScriptStringManagerD1Ev+0xd0>
 8aa4fbc:	89 d3                	mov    %edx,%ebx
 8aa4fbe:	89 c6                	mov    %eax,%esi
 8aa4fc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4fc3:	83 c0 18             	add    $0x18,%eax
 8aa4fc6:	89 04 24             	mov    %eax,(%esp)
 8aa4fc9:	e8 80 17 00 00       	call   8aa674e <_ZNSt6vectorIP16StringDictionarySaIS1_EED1Ev>
 8aa4fce:	89 f0                	mov    %esi,%eax
 8aa4fd0:	89 da                	mov    %ebx,%edx
 8aa4fd2:	eb 10                	jmp    8aa4fe4 <_ZN23RDARScriptStringManagerD1Ev+0xe0>
 8aa4fd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4fd7:	83 c0 18             	add    $0x18,%eax
 8aa4fda:	89 04 24             	mov    %eax,(%esp)
 8aa4fdd:	e8 6c 17 00 00       	call   8aa674e <_ZNSt6vectorIP16StringDictionarySaIS1_EED1Ev>
 8aa4fe2:	eb 1b                	jmp    8aa4fff <_ZN23RDARScriptStringManagerD1Ev+0xfb>
 8aa4fe4:	89 d3                	mov    %edx,%ebx
 8aa4fe6:	89 c6                	mov    %eax,%esi
 8aa4fe8:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa4feb:	89 04 24             	mov    %eax,(%esp)
 8aa4fee:	e8 5f c3 64 ff       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 8aa4ff3:	89 f0                	mov    %esi,%eax
 8aa4ff5:	89 da                	mov    %ebx,%edx
 8aa4ff7:	89 04 24             	mov    %eax,(%esp)
 8aa4ffa:	e8 51 e7 03 00       	call   8ae3750 <_Unwind_Resume>
 8aa4fff:	8b 45 08             	mov    0x8(%ebp),%eax
 8aa5002:	89 04 24             	mov    %eax,(%esp)
 8aa5005:	e8 48 c3 64 ff       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 8aa500a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8aa500d:	83 c4 00             	add    $0x0,%esp
 8aa5010:	5b                   	pop    %ebx
 8aa5011:	5e                   	pop    %esi
 8aa5012:	5d                   	pop    %ebp
 8aa5013:	c3                   	ret

```

```c
// RDARScriptStringManager::~RDARScriptStringManager @ 0x8aa4f04

/* RDARScriptStringManager::~RDARScriptStringManager() */

void __thiscall RDARScriptStringManager::~RDARScriptStringManager(RDARScriptStringManager *this)

{
  StringDictionary *this_00;
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_14 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_10 [4];
  
                    /* try { // try from 08aa4f1c to 08aa4f8d has its CatchHandler @ 08aa4f94 */
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::begin();
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
             ::operator*(local_14);
    this_00 = (StringDictionary *)*puVar2;
    if (this_00 != (StringDictionary *)0x0) {
      StringDictionary::~StringDictionary(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
    ::operator++(local_10,(int)local_14);
  }
                    /* try { // try from 08aa4fb5 to 08aa4fb9 has its CatchHandler @ 08aa4fbc */
  std::wstring::~wstring((wstring *)(this + 0x24));
                    /* try { // try from 08aa4fdd to 08aa4fe1 has its CatchHandler @ 08aa4fe4 */
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::~vector
            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  STScriptFileList::~STScriptFileList((STScriptFileList *)this);
  return;
}

```

