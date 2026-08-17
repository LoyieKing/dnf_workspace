# StatisticsShusiaService

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## StatisticsShusiaService

```asm
// === 0860c07a StatisticsShusiaService::StatisticsShusiaService  [0x0860c07a-0x860c0e5] ===
 860c07a:	55                   	push   %ebp
 860c07b:	89 e5                	mov    %esp,%ebp
 860c07d:	56                   	push   %esi
 860c07e:	53                   	push   %ebx
 860c07f:	83 ec 10             	sub    $0x10,%esp
 860c082:	8b 45 08             	mov    0x8(%ebp),%eax
 860c085:	89 04 24             	mov    %eax,(%esp)
 860c088:	e8 85 f3 ab ff       	call   80cb412 <_ZN5MutexC1Ev>
 860c08d:	8b 45 08             	mov    0x8(%ebp),%eax
 860c090:	83 c0 18             	add    $0x18,%eax
 860c093:	89 04 24             	mov    %eax,(%esp)
 860c096:	e8 c9 ab ab ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 860c09b:	8b 45 08             	mov    0x8(%ebp),%eax
 860c09e:	83 c0 30             	add    $0x30,%eax
 860c0a1:	89 04 24             	mov    %eax,(%esp)
 860c0a4:	e8 bb ab ab ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 860c0a9:	eb 33                	jmp    860c0de <_ZN23StatisticsShusiaServiceC1Ev+0x64>
 860c0ab:	89 d3                	mov    %edx,%ebx
 860c0ad:	89 c6                	mov    %eax,%esi
 860c0af:	8b 45 08             	mov    0x8(%ebp),%eax
 860c0b2:	83 c0 18             	add    $0x18,%eax
 860c0b5:	89 04 24             	mov    %eax,(%esp)
 860c0b8:	e8 09 aa ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860c0bd:	89 f0                	mov    %esi,%eax
 860c0bf:	89 da                	mov    %ebx,%edx
 860c0c1:	eb 00                	jmp    860c0c3 <_ZN23StatisticsShusiaServiceC1Ev+0x49>
 860c0c3:	89 d3                	mov    %edx,%ebx
 860c0c5:	89 c6                	mov    %eax,%esi
 860c0c7:	8b 45 08             	mov    0x8(%ebp),%eax
 860c0ca:	89 04 24             	mov    %eax,(%esp)
 860c0cd:	e8 5c f3 ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860c0d2:	89 f0                	mov    %esi,%eax
 860c0d4:	89 da                	mov    %ebx,%edx
 860c0d6:	89 04 24             	mov    %eax,(%esp)
 860c0d9:	e8 72 76 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c0de:	83 c4 10             	add    $0x10,%esp
 860c0e1:	5b                   	pop    %ebx
 860c0e2:	5e                   	pop    %esi
 860c0e3:	5d                   	pop    %ebp
 860c0e4:	c3                   	ret
 860c0e5:	90                   	nop

```

```c
// StatisticsShusiaService::StatisticsShusiaService @ 0x860c07a

/* StatisticsShusiaService::StatisticsShusiaService() */

void __thiscall StatisticsShusiaService::StatisticsShusiaService(StatisticsShusiaService *this)

{
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0860c096 to 0860c09a has its CatchHandler @ 0860c0c3 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
                    /* try { // try from 0860c0a4 to 0860c0a8 has its CatchHandler @ 0860c0ab */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  return;
}

```

---

## getDungeonFailure

```asm
// === 0860c2a8 StatisticsShusiaService::getDungeonFailure  [0x0860c2a8-0x860c357] ===
 860c2a8:	55                   	push   %ebp
 860c2a9:	89 e5                	mov    %esp,%ebp
 860c2ab:	56                   	push   %esi
 860c2ac:	53                   	push   %ebx
 860c2ad:	83 ec 20             	sub    $0x20,%esp
 860c2b0:	8b 45 08             	mov    0x8(%ebp),%eax
 860c2b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c2b7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c2ba:	89 04 24             	mov    %eax,(%esp)
 860c2bd:	e8 8a 91 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860c2c2:	8b 45 08             	mov    0x8(%ebp),%eax
 860c2c5:	8d 48 18             	lea    0x18(%eax),%ecx
 860c2c8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c2cb:	8d 55 0c             	lea    0xc(%ebp),%edx
 860c2ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c2d2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c2d6:	89 04 24             	mov    %eax,(%esp)
 860c2d9:	e8 10 10 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860c2de:	83 ec 04             	sub    $0x4,%esp
 860c2e1:	8b 45 08             	mov    0x8(%ebp),%eax
 860c2e4:	8d 50 18             	lea    0x18(%eax),%edx
 860c2e7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c2ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c2ee:	89 04 24             	mov    %eax,(%esp)
 860c2f1:	e8 24 10 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860c2f6:	83 ec 04             	sub    $0x4,%esp
 860c2f9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c2fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c300:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c303:	89 04 24             	mov    %eax,(%esp)
 860c306:	e8 bd e0 ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860c30b:	84 c0                	test   %al,%al
 860c30d:	74 10                	je     860c31f <_ZN23StatisticsShusiaService17getDungeonFailureEi+0x77>
 860c30f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c312:	89 04 24             	mov    %eax,(%esp)
 860c315:	e8 60 76 b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860c31a:	8b 58 04             	mov    0x4(%eax),%ebx
 860c31d:	eb 22                	jmp    860c341 <_ZN23StatisticsShusiaService17getDungeonFailureEi+0x99>
 860c31f:	bb 00 00 00 00       	mov    $0x0,%ebx
 860c324:	eb 1b                	jmp    860c341 <_ZN23StatisticsShusiaService17getDungeonFailureEi+0x99>
 860c326:	89 d3                	mov    %edx,%ebx
 860c328:	89 c6                	mov    %eax,%esi
 860c32a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c32d:	89 04 24             	mov    %eax,(%esp)
 860c330:	e8 33 91 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c335:	89 f0                	mov    %esi,%eax
 860c337:	89 da                	mov    %ebx,%edx
 860c339:	89 04 24             	mov    %eax,(%esp)
 860c33c:	e8 0f 74 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c341:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c344:	89 04 24             	mov    %eax,(%esp)
 860c347:	e8 1c 91 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c34c:	89 d8                	mov    %ebx,%eax
 860c34e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860c351:	83 c4 00             	add    $0x0,%esp
 860c354:	5b                   	pop    %ebx
 860c355:	5e                   	pop    %esi
 860c356:	5d                   	pop    %ebp
 860c357:	c3                   	ret

```

```c
// StatisticsShusiaService::getDungeonFailure @ 0x860c2a8

/* StatisticsShusiaService::getDungeonFailure(int) */

undefined4 StatisticsShusiaService::getDungeonFailure(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)param_1);
                    /* try { // try from 0860c2d9 to 0860c2f5 has its CatchHandler @ 0860c326 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  Guard<Mutex>::~Guard(local_14);
  return uVar3;
}

```

---

## getServiceUSage

```asm
// === 0860c446 StatisticsShusiaService::getServiceUSage  [0x0860c446-0x860c4f5] ===
 860c446:	55                   	push   %ebp
 860c447:	89 e5                	mov    %esp,%ebp
 860c449:	56                   	push   %esi
 860c44a:	53                   	push   %ebx
 860c44b:	83 ec 20             	sub    $0x20,%esp
 860c44e:	8b 45 08             	mov    0x8(%ebp),%eax
 860c451:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c455:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c458:	89 04 24             	mov    %eax,(%esp)
 860c45b:	e8 ec 8f af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860c460:	8b 45 08             	mov    0x8(%ebp),%eax
 860c463:	8d 48 30             	lea    0x30(%eax),%ecx
 860c466:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c469:	8d 55 0c             	lea    0xc(%ebp),%edx
 860c46c:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c470:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c474:	89 04 24             	mov    %eax,(%esp)
 860c477:	e8 72 0e ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860c47c:	83 ec 04             	sub    $0x4,%esp
 860c47f:	8b 45 08             	mov    0x8(%ebp),%eax
 860c482:	8d 50 30             	lea    0x30(%eax),%edx
 860c485:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c488:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c48c:	89 04 24             	mov    %eax,(%esp)
 860c48f:	e8 86 0e ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860c494:	83 ec 04             	sub    $0x4,%esp
 860c497:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c49a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c49e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c4a1:	89 04 24             	mov    %eax,(%esp)
 860c4a4:	e8 1f df ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860c4a9:	84 c0                	test   %al,%al
 860c4ab:	74 10                	je     860c4bd <_ZN23StatisticsShusiaService15getServiceUSageEi+0x77>
 860c4ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c4b0:	89 04 24             	mov    %eax,(%esp)
 860c4b3:	e8 c2 74 b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860c4b8:	8b 58 04             	mov    0x4(%eax),%ebx
 860c4bb:	eb 22                	jmp    860c4df <_ZN23StatisticsShusiaService15getServiceUSageEi+0x99>
 860c4bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 860c4c2:	eb 1b                	jmp    860c4df <_ZN23StatisticsShusiaService15getServiceUSageEi+0x99>
 860c4c4:	89 d3                	mov    %edx,%ebx
 860c4c6:	89 c6                	mov    %eax,%esi
 860c4c8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c4cb:	89 04 24             	mov    %eax,(%esp)
 860c4ce:	e8 95 8f af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c4d3:	89 f0                	mov    %esi,%eax
 860c4d5:	89 da                	mov    %ebx,%edx
 860c4d7:	89 04 24             	mov    %eax,(%esp)
 860c4da:	e8 71 72 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c4df:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c4e2:	89 04 24             	mov    %eax,(%esp)
 860c4e5:	e8 7e 8f af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c4ea:	89 d8                	mov    %ebx,%eax
 860c4ec:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860c4ef:	83 c4 00             	add    $0x0,%esp
 860c4f2:	5b                   	pop    %ebx
 860c4f3:	5e                   	pop    %esi
 860c4f4:	5d                   	pop    %ebp
 860c4f5:	c3                   	ret

```

```c
// StatisticsShusiaService::getServiceUSage @ 0x860c446

/* StatisticsShusiaService::getServiceUSage(int) */

undefined4 StatisticsShusiaService::getServiceUSage(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)param_1);
                    /* try { // try from 0860c477 to 0860c493 has its CatchHandler @ 0860c4c4 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  Guard<Mutex>::~Guard(local_14);
  return uVar3;
}

```

---

## incDungeonFailure

```asm
// === 0860c1ba StatisticsShusiaService::incDungeonFailure  [0x0860c1ba-0x860c2a7] ===
 860c1ba:	55                   	push   %ebp
 860c1bb:	89 e5                	mov    %esp,%ebp
 860c1bd:	56                   	push   %esi
 860c1be:	53                   	push   %ebx
 860c1bf:	83 ec 30             	sub    $0x30,%esp
 860c1c2:	8b 45 08             	mov    0x8(%ebp),%eax
 860c1c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c1c9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860c1cc:	89 04 24             	mov    %eax,(%esp)
 860c1cf:	e8 78 92 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860c1d4:	8b 45 08             	mov    0x8(%ebp),%eax
 860c1d7:	8d 48 18             	lea    0x18(%eax),%ecx
 860c1da:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c1dd:	8d 55 0c             	lea    0xc(%ebp),%edx
 860c1e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c1e4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c1e8:	89 04 24             	mov    %eax,(%esp)
 860c1eb:	e8 fe 10 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860c1f0:	83 ec 04             	sub    $0x4,%esp
 860c1f3:	8b 45 08             	mov    0x8(%ebp),%eax
 860c1f6:	8d 50 18             	lea    0x18(%eax),%edx
 860c1f9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860c1fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c200:	89 04 24             	mov    %eax,(%esp)
 860c203:	e8 12 11 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860c208:	83 ec 04             	sub    $0x4,%esp
 860c20b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860c20e:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c212:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c215:	89 04 24             	mov    %eax,(%esp)
 860c218:	e8 d3 b6 ab ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 860c21d:	84 c0                	test   %al,%al
 860c21f:	74 41                	je     860c262 <_ZN23StatisticsShusiaService17incDungeonFailureEi+0xa8>
 860c221:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 860c228:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c22b:	89 44 24 08          	mov    %eax,0x8(%esp)
 860c22f:	8d 45 0c             	lea    0xc(%ebp),%eax
 860c232:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c236:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c239:	89 04 24             	mov    %eax,(%esp)
 860c23c:	e8 f7 49 00 00       	call   8610c38 <_ZNSt4pairIKiiEC1IRiiEEOT_OT0_>
 860c241:	8b 45 08             	mov    0x8(%ebp),%eax
 860c244:	8d 48 18             	lea    0x18(%eax),%ecx
 860c247:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860c24a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860c24d:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c251:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c255:	89 04 24             	mov    %eax,(%esp)
 860c258:	e8 f3 aa ab ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 860c25d:	83 ec 04             	sub    $0x4,%esp
 860c260:	eb 31                	jmp    860c293 <_ZN23StatisticsShusiaService17incDungeonFailureEi+0xd9>
 860c262:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c265:	89 04 24             	mov    %eax,(%esp)
 860c268:	e8 0d 77 b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860c26d:	8b 50 04             	mov    0x4(%eax),%edx
 860c270:	83 c2 01             	add    $0x1,%edx
 860c273:	89 50 04             	mov    %edx,0x4(%eax)
 860c276:	eb 1b                	jmp    860c293 <_ZN23StatisticsShusiaService17incDungeonFailureEi+0xd9>
 860c278:	89 d3                	mov    %edx,%ebx
 860c27a:	89 c6                	mov    %eax,%esi
 860c27c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860c27f:	89 04 24             	mov    %eax,(%esp)
 860c282:	e8 e1 91 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c287:	89 f0                	mov    %esi,%eax
 860c289:	89 da                	mov    %ebx,%edx
 860c28b:	89 04 24             	mov    %eax,(%esp)
 860c28e:	e8 bd 74 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c293:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860c296:	89 04 24             	mov    %eax,(%esp)
 860c299:	e8 ca 91 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c29e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860c2a1:	83 c4 00             	add    $0x0,%esp
 860c2a4:	5b                   	pop    %ebx
 860c2a5:	5e                   	pop    %esi
 860c2a6:	5d                   	pop    %ebp
 860c2a7:	c3                   	ret

```

```c
// StatisticsShusiaService::incDungeonFailure @ 0x860c1ba

/* StatisticsShusiaService::incDungeonFailure(int) */

void StatisticsShusiaService::incDungeonFailure(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  Guard<Mutex> local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  pair local_20 [8];
  pair<int_const,int> local_18 [8];
  int local_10;
  
  Guard<Mutex>::Guard(local_28,(Mutex *)param_1);
                    /* try { // try from 0860c1eb to 0860c25c has its CatchHandler @ 0860c278 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_2c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  else {
    local_10 = 1;
    std::pair<int_const,int>::pair<int&,int>(local_18,(int *)&stack0x00000008,&local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_20);
  }
  Guard<Mutex>::~Guard(local_28);
  return;
}

```

---

## incServiceUsage

```asm
// === 0860c358 StatisticsShusiaService::incServiceUsage  [0x0860c358-0x860c445] ===
 860c358:	55                   	push   %ebp
 860c359:	89 e5                	mov    %esp,%ebp
 860c35b:	56                   	push   %esi
 860c35c:	53                   	push   %ebx
 860c35d:	83 ec 30             	sub    $0x30,%esp
 860c360:	8b 45 08             	mov    0x8(%ebp),%eax
 860c363:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c367:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860c36a:	89 04 24             	mov    %eax,(%esp)
 860c36d:	e8 da 90 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860c372:	8b 45 08             	mov    0x8(%ebp),%eax
 860c375:	8d 48 30             	lea    0x30(%eax),%ecx
 860c378:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c37b:	8d 55 0c             	lea    0xc(%ebp),%edx
 860c37e:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c382:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c386:	89 04 24             	mov    %eax,(%esp)
 860c389:	e8 60 0f ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860c38e:	83 ec 04             	sub    $0x4,%esp
 860c391:	8b 45 08             	mov    0x8(%ebp),%eax
 860c394:	8d 50 30             	lea    0x30(%eax),%edx
 860c397:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860c39a:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c39e:	89 04 24             	mov    %eax,(%esp)
 860c3a1:	e8 74 0f ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860c3a6:	83 ec 04             	sub    $0x4,%esp
 860c3a9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860c3ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c3b0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c3b3:	89 04 24             	mov    %eax,(%esp)
 860c3b6:	e8 35 b5 ab ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 860c3bb:	84 c0                	test   %al,%al
 860c3bd:	74 41                	je     860c400 <_ZN23StatisticsShusiaService15incServiceUsageEi+0xa8>
 860c3bf:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 860c3c6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c3c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 860c3cd:	8d 45 0c             	lea    0xc(%ebp),%eax
 860c3d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c3d4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c3d7:	89 04 24             	mov    %eax,(%esp)
 860c3da:	e8 59 48 00 00       	call   8610c38 <_ZNSt4pairIKiiEC1IRiiEEOT_OT0_>
 860c3df:	8b 45 08             	mov    0x8(%ebp),%eax
 860c3e2:	8d 48 30             	lea    0x30(%eax),%ecx
 860c3e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860c3e8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860c3eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c3ef:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c3f3:	89 04 24             	mov    %eax,(%esp)
 860c3f6:	e8 55 a9 ab ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 860c3fb:	83 ec 04             	sub    $0x4,%esp
 860c3fe:	eb 31                	jmp    860c431 <_ZN23StatisticsShusiaService15incServiceUsageEi+0xd9>
 860c400:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c403:	89 04 24             	mov    %eax,(%esp)
 860c406:	e8 6f 75 b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860c40b:	8b 50 04             	mov    0x4(%eax),%edx
 860c40e:	83 c2 01             	add    $0x1,%edx
 860c411:	89 50 04             	mov    %edx,0x4(%eax)
 860c414:	eb 1b                	jmp    860c431 <_ZN23StatisticsShusiaService15incServiceUsageEi+0xd9>
 860c416:	89 d3                	mov    %edx,%ebx
 860c418:	89 c6                	mov    %eax,%esi
 860c41a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860c41d:	89 04 24             	mov    %eax,(%esp)
 860c420:	e8 43 90 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c425:	89 f0                	mov    %esi,%eax
 860c427:	89 da                	mov    %ebx,%edx
 860c429:	89 04 24             	mov    %eax,(%esp)
 860c42c:	e8 1f 73 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c431:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860c434:	89 04 24             	mov    %eax,(%esp)
 860c437:	e8 2c 90 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c43c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860c43f:	83 c4 00             	add    $0x0,%esp
 860c442:	5b                   	pop    %ebx
 860c443:	5e                   	pop    %esi
 860c444:	5d                   	pop    %ebp
 860c445:	c3                   	ret

```

```c
// StatisticsShusiaService::incServiceUsage @ 0x860c358

/* StatisticsShusiaService::incServiceUsage(int) */

void StatisticsShusiaService::incServiceUsage(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  Guard<Mutex> local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  pair local_20 [8];
  pair<int_const,int> local_18 [8];
  int local_10;
  
  Guard<Mutex>::Guard(local_28,(Mutex *)param_1);
                    /* try { // try from 0860c389 to 0860c3fa has its CatchHandler @ 0860c416 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_2c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  else {
    local_10 = 1;
    std::pair<int_const,int>::pair<int&,int>(local_18,(int *)&stack0x00000008,&local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_20);
  }
  Guard<Mutex>::~Guard(local_28);
  return;
}

```

---

## reset

```asm
// === 0860c154 StatisticsShusiaService::reset  [0x0860c154-0x860c1b9] ===
 860c154:	55                   	push   %ebp
 860c155:	89 e5                	mov    %esp,%ebp
 860c157:	56                   	push   %esi
 860c158:	53                   	push   %ebx
 860c159:	83 ec 20             	sub    $0x20,%esp
 860c15c:	8b 45 08             	mov    0x8(%ebp),%eax
 860c15f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c163:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c166:	89 04 24             	mov    %eax,(%esp)
 860c169:	e8 de 92 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860c16e:	8b 45 08             	mov    0x8(%ebp),%eax
 860c171:	83 c0 18             	add    $0x18,%eax
 860c174:	89 04 24             	mov    %eax,(%esp)
 860c177:	e8 62 ab ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860c17c:	8b 45 08             	mov    0x8(%ebp),%eax
 860c17f:	83 c0 30             	add    $0x30,%eax
 860c182:	89 04 24             	mov    %eax,(%esp)
 860c185:	e8 54 ab ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860c18a:	eb 1b                	jmp    860c1a7 <_ZN23StatisticsShusiaService5resetEv+0x53>
 860c18c:	89 d3                	mov    %edx,%ebx
 860c18e:	89 c6                	mov    %eax,%esi
 860c190:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c193:	89 04 24             	mov    %eax,(%esp)
 860c196:	e8 cd 92 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c19b:	89 f0                	mov    %esi,%eax
 860c19d:	89 da                	mov    %ebx,%edx
 860c19f:	89 04 24             	mov    %eax,(%esp)
 860c1a2:	e8 a9 75 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c1a7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c1aa:	89 04 24             	mov    %eax,(%esp)
 860c1ad:	e8 b6 92 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c1b2:	83 c4 20             	add    $0x20,%esp
 860c1b5:	5b                   	pop    %ebx
 860c1b6:	5e                   	pop    %esi
 860c1b7:	5d                   	pop    %ebp
 860c1b8:	c3                   	ret
 860c1b9:	90                   	nop

```

```c
// StatisticsShusiaService::reset @ 0x860c154

/* StatisticsShusiaService::reset() */

void __thiscall StatisticsShusiaService::reset(StatisticsShusiaService *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 0860c177 to 0860c189 has its CatchHandler @ 0860c18c */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## ~StatisticsShusiaService

```asm
// === 0860c0e6 StatisticsShusiaService::~StatisticsShusiaService  [0x0860c0e6-0x860c153] ===
 860c0e6:	55                   	push   %ebp
 860c0e7:	89 e5                	mov    %esp,%ebp
 860c0e9:	56                   	push   %esi
 860c0ea:	53                   	push   %ebx
 860c0eb:	83 ec 10             	sub    $0x10,%esp
 860c0ee:	8b 45 08             	mov    0x8(%ebp),%eax
 860c0f1:	83 c0 30             	add    $0x30,%eax
 860c0f4:	89 04 24             	mov    %eax,(%esp)
 860c0f7:	e8 ca a9 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860c0fc:	eb 18                	jmp    860c116 <_ZN23StatisticsShusiaServiceD1Ev+0x30>
 860c0fe:	89 d3                	mov    %edx,%ebx
 860c100:	89 c6                	mov    %eax,%esi
 860c102:	8b 45 08             	mov    0x8(%ebp),%eax
 860c105:	83 c0 18             	add    $0x18,%eax
 860c108:	89 04 24             	mov    %eax,(%esp)
 860c10b:	e8 b6 a9 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860c110:	89 f0                	mov    %esi,%eax
 860c112:	89 da                	mov    %ebx,%edx
 860c114:	eb 10                	jmp    860c126 <_ZN23StatisticsShusiaServiceD1Ev+0x40>
 860c116:	8b 45 08             	mov    0x8(%ebp),%eax
 860c119:	83 c0 18             	add    $0x18,%eax
 860c11c:	89 04 24             	mov    %eax,(%esp)
 860c11f:	e8 a2 a9 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860c124:	eb 1b                	jmp    860c141 <_ZN23StatisticsShusiaServiceD1Ev+0x5b>
 860c126:	89 d3                	mov    %edx,%ebx
 860c128:	89 c6                	mov    %eax,%esi
 860c12a:	8b 45 08             	mov    0x8(%ebp),%eax
 860c12d:	89 04 24             	mov    %eax,(%esp)
 860c130:	e8 f9 f2 ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860c135:	89 f0                	mov    %esi,%eax
 860c137:	89 da                	mov    %ebx,%edx
 860c139:	89 04 24             	mov    %eax,(%esp)
 860c13c:	e8 0f 76 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c141:	8b 45 08             	mov    0x8(%ebp),%eax
 860c144:	89 04 24             	mov    %eax,(%esp)
 860c147:	e8 e2 f2 ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860c14c:	83 c4 10             	add    $0x10,%esp
 860c14f:	5b                   	pop    %ebx
 860c150:	5e                   	pop    %esi
 860c151:	5d                   	pop    %ebp
 860c152:	c3                   	ret
 860c153:	90                   	nop

```

```c
// StatisticsShusiaService::~StatisticsShusiaService @ 0x860c0e6

/* StatisticsShusiaService::~StatisticsShusiaService() */

void __thiscall StatisticsShusiaService::~StatisticsShusiaService(StatisticsShusiaService *this)

{
                    /* try { // try from 0860c0f7 to 0860c0fb has its CatchHandler @ 0860c0fe */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 0860c11f to 0860c123 has its CatchHandler @ 0860c126 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
  Mutex::~Mutex((Mutex *)this);
  return;
}

```

