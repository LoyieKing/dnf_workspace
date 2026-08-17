# StatisticsToObserveCrash

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## StatisticsToObserveCrash

```asm
// === 0860b934 StatisticsToObserveCrash::StatisticsToObserveCrash  [0x0860b934-0x860b9d1] ===
 860b934:	55                   	push   %ebp
 860b935:	89 e5                	mov    %esp,%ebp
 860b937:	56                   	push   %esi
 860b938:	53                   	push   %ebx
 860b939:	83 ec 10             	sub    $0x10,%esp
 860b93c:	8b 45 08             	mov    0x8(%ebp),%eax
 860b93f:	83 c0 04             	add    $0x4,%eax
 860b942:	89 04 24             	mov    %eax,(%esp)
 860b945:	e8 c8 fa ab ff       	call   80cb412 <_ZN5MutexC1Ev>
 860b94a:	8b 45 08             	mov    0x8(%ebp),%eax
 860b94d:	83 c0 1c             	add    $0x1c,%eax
 860b950:	89 04 24             	mov    %eax,(%esp)
 860b953:	e8 0c b3 ab ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 860b958:	8b 45 08             	mov    0x8(%ebp),%eax
 860b95b:	83 c0 34             	add    $0x34,%eax
 860b95e:	89 04 24             	mov    %eax,(%esp)
 860b961:	e8 fe b2 ab ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 860b966:	8b 45 08             	mov    0x8(%ebp),%eax
 860b969:	83 c0 4c             	add    $0x4c,%eax
 860b96c:	89 04 24             	mov    %eax,(%esp)
 860b96f:	e8 f0 b2 ab ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 860b974:	8b 45 08             	mov    0x8(%ebp),%eax
 860b977:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 860b97d:	83 c4 10             	add    $0x10,%esp
 860b980:	5b                   	pop    %ebx
 860b981:	5e                   	pop    %esi
 860b982:	5d                   	pop    %ebp
 860b983:	c3                   	ret
 860b984:	89 d3                	mov    %edx,%ebx
 860b986:	89 c6                	mov    %eax,%esi
 860b988:	8b 45 08             	mov    0x8(%ebp),%eax
 860b98b:	83 c0 34             	add    $0x34,%eax
 860b98e:	89 04 24             	mov    %eax,(%esp)
 860b991:	e8 30 b1 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860b996:	89 f0                	mov    %esi,%eax
 860b998:	89 da                	mov    %ebx,%edx
 860b99a:	eb 00                	jmp    860b99c <_ZN24StatisticsToObserveCrashC1Ev+0x68>
 860b99c:	89 d3                	mov    %edx,%ebx
 860b99e:	89 c6                	mov    %eax,%esi
 860b9a0:	8b 45 08             	mov    0x8(%ebp),%eax
 860b9a3:	83 c0 1c             	add    $0x1c,%eax
 860b9a6:	89 04 24             	mov    %eax,(%esp)
 860b9a9:	e8 18 b1 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860b9ae:	89 f0                	mov    %esi,%eax
 860b9b0:	89 da                	mov    %ebx,%edx
 860b9b2:	eb 00                	jmp    860b9b4 <_ZN24StatisticsToObserveCrashC1Ev+0x80>
 860b9b4:	89 d3                	mov    %edx,%ebx
 860b9b6:	89 c6                	mov    %eax,%esi
 860b9b8:	8b 45 08             	mov    0x8(%ebp),%eax
 860b9bb:	83 c0 04             	add    $0x4,%eax
 860b9be:	89 04 24             	mov    %eax,(%esp)
 860b9c1:	e8 68 fa ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860b9c6:	89 f0                	mov    %esi,%eax
 860b9c8:	89 da                	mov    %ebx,%edx
 860b9ca:	89 04 24             	mov    %eax,(%esp)
 860b9cd:	e8 7e 7d 4d 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// StatisticsToObserveCrash::StatisticsToObserveCrash @ 0x860b934

/* StatisticsToObserveCrash::StatisticsToObserveCrash() */

void __thiscall StatisticsToObserveCrash::StatisticsToObserveCrash(StatisticsToObserveCrash *this)

{
  Mutex::Mutex((Mutex *)(this + 4));
                    /* try { // try from 0860b953 to 0860b957 has its CatchHandler @ 0860b9b4 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
                    /* try { // try from 0860b961 to 0860b965 has its CatchHandler @ 0860b99c */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
                    /* try { // try from 0860b96f to 0860b973 has its CatchHandler @ 0860b984 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x4c));
  *(undefined4 *)this = 0;
  return;
}

```

---

## getAbnormalDownUserCount

```asm
// === 0860baee StatisticsToObserveCrash::getAbnormalDownUserCount  [0x0860baee-0x860bb21] ===
 860baee:	55                   	push   %ebp
 860baef:	89 e5                	mov    %esp,%ebp
 860baf1:	53                   	push   %ebx
 860baf2:	83 ec 24             	sub    $0x24,%esp
 860baf5:	8b 45 08             	mov    0x8(%ebp),%eax
 860baf8:	83 c0 04             	add    $0x4,%eax
 860bafb:	89 44 24 04          	mov    %eax,0x4(%esp)
 860baff:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bb02:	89 04 24             	mov    %eax,(%esp)
 860bb05:	e8 42 99 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bb0a:	8b 45 08             	mov    0x8(%ebp),%eax
 860bb0d:	8b 18                	mov    (%eax),%ebx
 860bb0f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bb12:	89 04 24             	mov    %eax,(%esp)
 860bb15:	e8 4e 99 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bb1a:	89 d8                	mov    %ebx,%eax
 860bb1c:	83 c4 24             	add    $0x24,%esp
 860bb1f:	5b                   	pop    %ebx
 860bb20:	5d                   	pop    %ebp
 860bb21:	c3                   	ret

```

```c
// StatisticsToObserveCrash::getAbnormalDownUserCount @ 0x860baee

/* StatisticsToObserveCrash::getAbnormalDownUserCount() */

undefined4 __thiscall
StatisticsToObserveCrash::getAbnormalDownUserCount(StatisticsToObserveCrash *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [8];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  uVar1 = *(undefined4 *)this;
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}

```

---

## getUserLastCrashDungeonID

```asm
// === 0860be20 StatisticsToObserveCrash::getUserLastCrashDungeonID  [0x0860be20-0x860bed3] ===
 860be20:	55                   	push   %ebp
 860be21:	89 e5                	mov    %esp,%ebp
 860be23:	56                   	push   %esi
 860be24:	53                   	push   %ebx
 860be25:	83 ec 20             	sub    $0x20,%esp
 860be28:	8b 45 08             	mov    0x8(%ebp),%eax
 860be2b:	83 c0 04             	add    $0x4,%eax
 860be2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 860be32:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860be35:	89 04 24             	mov    %eax,(%esp)
 860be38:	e8 0f 96 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860be3d:	8b 45 08             	mov    0x8(%ebp),%eax
 860be40:	8d 48 34             	lea    0x34(%eax),%ecx
 860be43:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860be46:	8d 55 0c             	lea    0xc(%ebp),%edx
 860be49:	89 54 24 08          	mov    %edx,0x8(%esp)
 860be4d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860be51:	89 04 24             	mov    %eax,(%esp)
 860be54:	e8 95 14 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860be59:	83 ec 04             	sub    $0x4,%esp
 860be5c:	8b 45 08             	mov    0x8(%ebp),%eax
 860be5f:	8d 50 34             	lea    0x34(%eax),%edx
 860be62:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860be65:	89 54 24 04          	mov    %edx,0x4(%esp)
 860be69:	89 04 24             	mov    %eax,(%esp)
 860be6c:	e8 a9 14 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860be71:	83 ec 04             	sub    $0x4,%esp
 860be74:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860be77:	89 44 24 04          	mov    %eax,0x4(%esp)
 860be7b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860be7e:	89 04 24             	mov    %eax,(%esp)
 860be81:	e8 42 e5 ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860be86:	84 c0                	test   %al,%al
 860be88:	74 10                	je     860be9a <_ZN24StatisticsToObserveCrash25getUserLastCrashDungeonIDEi+0x7a>
 860be8a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860be8d:	89 04 24             	mov    %eax,(%esp)
 860be90:	e8 e5 7a b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860be95:	8b 58 04             	mov    0x4(%eax),%ebx
 860be98:	eb 22                	jmp    860bebc <_ZN24StatisticsToObserveCrash25getUserLastCrashDungeonIDEi+0x9c>
 860be9a:	bb 00 00 00 00       	mov    $0x0,%ebx
 860be9f:	eb 1b                	jmp    860bebc <_ZN24StatisticsToObserveCrash25getUserLastCrashDungeonIDEi+0x9c>
 860bea1:	89 d3                	mov    %edx,%ebx
 860bea3:	89 c6                	mov    %eax,%esi
 860bea5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860bea8:	89 04 24             	mov    %eax,(%esp)
 860beab:	e8 b8 95 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860beb0:	89 f0                	mov    %esi,%eax
 860beb2:	89 da                	mov    %ebx,%edx
 860beb4:	89 04 24             	mov    %eax,(%esp)
 860beb7:	e8 94 78 4d 00       	call   8ae3750 <_Unwind_Resume>
 860bebc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860bebf:	89 04 24             	mov    %eax,(%esp)
 860bec2:	e8 a1 95 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bec7:	89 d8                	mov    %ebx,%eax
 860bec9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860becc:	83 c4 00             	add    $0x0,%esp
 860becf:	5b                   	pop    %ebx
 860bed0:	5e                   	pop    %esi
 860bed1:	5d                   	pop    %ebp
 860bed2:	c3                   	ret
 860bed3:	90                   	nop

```

```c
// StatisticsToObserveCrash::getUserLastCrashDungeonID @ 0x860be20

/* StatisticsToObserveCrash::getUserLastCrashDungeonID(int) */

undefined4 StatisticsToObserveCrash::getUserLastCrashDungeonID(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860be54 to 0860be70 has its CatchHandler @ 0860bea1 */
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

## getUserLastCrashPacketID

```asm
// === 0860bc7a StatisticsToObserveCrash::getUserLastCrashPacketID  [0x0860bc7a-0x860bd2d] ===
 860bc7a:	55                   	push   %ebp
 860bc7b:	89 e5                	mov    %esp,%ebp
 860bc7d:	56                   	push   %esi
 860bc7e:	53                   	push   %ebx
 860bc7f:	83 ec 20             	sub    $0x20,%esp
 860bc82:	8b 45 08             	mov    0x8(%ebp),%eax
 860bc85:	83 c0 04             	add    $0x4,%eax
 860bc88:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bc8c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860bc8f:	89 04 24             	mov    %eax,(%esp)
 860bc92:	e8 b5 97 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bc97:	8b 45 08             	mov    0x8(%ebp),%eax
 860bc9a:	8d 48 1c             	lea    0x1c(%eax),%ecx
 860bc9d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860bca0:	8d 55 0c             	lea    0xc(%ebp),%edx
 860bca3:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bca7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bcab:	89 04 24             	mov    %eax,(%esp)
 860bcae:	e8 3b 16 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860bcb3:	83 ec 04             	sub    $0x4,%esp
 860bcb6:	8b 45 08             	mov    0x8(%ebp),%eax
 860bcb9:	8d 50 1c             	lea    0x1c(%eax),%edx
 860bcbc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bcbf:	89 54 24 04          	mov    %edx,0x4(%esp)
 860bcc3:	89 04 24             	mov    %eax,(%esp)
 860bcc6:	e8 4f 16 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860bccb:	83 ec 04             	sub    $0x4,%esp
 860bcce:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bcd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bcd5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860bcd8:	89 04 24             	mov    %eax,(%esp)
 860bcdb:	e8 e8 e6 ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860bce0:	84 c0                	test   %al,%al
 860bce2:	74 10                	je     860bcf4 <_ZN24StatisticsToObserveCrash24getUserLastCrashPacketIDEi+0x7a>
 860bce4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860bce7:	89 04 24             	mov    %eax,(%esp)
 860bcea:	e8 8b 7c b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860bcef:	8b 58 04             	mov    0x4(%eax),%ebx
 860bcf2:	eb 22                	jmp    860bd16 <_ZN24StatisticsToObserveCrash24getUserLastCrashPacketIDEi+0x9c>
 860bcf4:	bb 00 00 00 00       	mov    $0x0,%ebx
 860bcf9:	eb 1b                	jmp    860bd16 <_ZN24StatisticsToObserveCrash24getUserLastCrashPacketIDEi+0x9c>
 860bcfb:	89 d3                	mov    %edx,%ebx
 860bcfd:	89 c6                	mov    %eax,%esi
 860bcff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860bd02:	89 04 24             	mov    %eax,(%esp)
 860bd05:	e8 5e 97 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bd0a:	89 f0                	mov    %esi,%eax
 860bd0c:	89 da                	mov    %ebx,%edx
 860bd0e:	89 04 24             	mov    %eax,(%esp)
 860bd11:	e8 3a 7a 4d 00       	call   8ae3750 <_Unwind_Resume>
 860bd16:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860bd19:	89 04 24             	mov    %eax,(%esp)
 860bd1c:	e8 47 97 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bd21:	89 d8                	mov    %ebx,%eax
 860bd23:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860bd26:	83 c4 00             	add    $0x0,%esp
 860bd29:	5b                   	pop    %ebx
 860bd2a:	5e                   	pop    %esi
 860bd2b:	5d                   	pop    %ebp
 860bd2c:	c3                   	ret
 860bd2d:	90                   	nop

```

```c
// StatisticsToObserveCrash::getUserLastCrashPacketID @ 0x860bc7a

/* StatisticsToObserveCrash::getUserLastCrashPacketID(int) */

undefined4 StatisticsToObserveCrash::getUserLastCrashPacketID(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bcae to 0860bcca has its CatchHandler @ 0860bcfb */
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

## getUserLastCrashPlayStatus

```asm
// === 0860bfc6 StatisticsToObserveCrash::getUserLastCrashPlayStatus  [0x0860bfc6-0x860c079] ===
 860bfc6:	55                   	push   %ebp
 860bfc7:	89 e5                	mov    %esp,%ebp
 860bfc9:	56                   	push   %esi
 860bfca:	53                   	push   %ebx
 860bfcb:	83 ec 20             	sub    $0x20,%esp
 860bfce:	8b 45 08             	mov    0x8(%ebp),%eax
 860bfd1:	83 c0 04             	add    $0x4,%eax
 860bfd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bfd8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860bfdb:	89 04 24             	mov    %eax,(%esp)
 860bfde:	e8 69 94 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bfe3:	8b 45 08             	mov    0x8(%ebp),%eax
 860bfe6:	8d 48 4c             	lea    0x4c(%eax),%ecx
 860bfe9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860bfec:	8d 55 0c             	lea    0xc(%ebp),%edx
 860bfef:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bff3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bff7:	89 04 24             	mov    %eax,(%esp)
 860bffa:	e8 ef 12 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860bfff:	83 ec 04             	sub    $0x4,%esp
 860c002:	8b 45 08             	mov    0x8(%ebp),%eax
 860c005:	8d 50 4c             	lea    0x4c(%eax),%edx
 860c008:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c00b:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c00f:	89 04 24             	mov    %eax,(%esp)
 860c012:	e8 03 13 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860c017:	83 ec 04             	sub    $0x4,%esp
 860c01a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c01d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c021:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c024:	89 04 24             	mov    %eax,(%esp)
 860c027:	e8 9c e3 ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860c02c:	84 c0                	test   %al,%al
 860c02e:	74 10                	je     860c040 <_ZN24StatisticsToObserveCrash26getUserLastCrashPlayStatusEi+0x7a>
 860c030:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c033:	89 04 24             	mov    %eax,(%esp)
 860c036:	e8 3f 79 b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860c03b:	8b 58 04             	mov    0x4(%eax),%ebx
 860c03e:	eb 22                	jmp    860c062 <_ZN24StatisticsToObserveCrash26getUserLastCrashPlayStatusEi+0x9c>
 860c040:	bb 00 00 00 00       	mov    $0x0,%ebx
 860c045:	eb 1b                	jmp    860c062 <_ZN24StatisticsToObserveCrash26getUserLastCrashPlayStatusEi+0x9c>
 860c047:	89 d3                	mov    %edx,%ebx
 860c049:	89 c6                	mov    %eax,%esi
 860c04b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c04e:	89 04 24             	mov    %eax,(%esp)
 860c051:	e8 12 94 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c056:	89 f0                	mov    %esi,%eax
 860c058:	89 da                	mov    %ebx,%edx
 860c05a:	89 04 24             	mov    %eax,(%esp)
 860c05d:	e8 ee 76 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c062:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c065:	89 04 24             	mov    %eax,(%esp)
 860c068:	e8 fb 93 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c06d:	89 d8                	mov    %ebx,%eax
 860c06f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860c072:	83 c4 00             	add    $0x0,%esp
 860c075:	5b                   	pop    %ebx
 860c076:	5e                   	pop    %esi
 860c077:	5d                   	pop    %ebp
 860c078:	c3                   	ret
 860c079:	90                   	nop

```

```c
// StatisticsToObserveCrash::getUserLastCrashPlayStatus @ 0x860bfc6

/* StatisticsToObserveCrash::getUserLastCrashPlayStatus(int) */

undefined4 StatisticsToObserveCrash::getUserLastCrashPlayStatus(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bffa to 0860c016 has its CatchHandler @ 0860c047 */
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

## incAbnormalDownUserCount

```asm
// === 0860bb52 StatisticsToObserveCrash::incAbnormalDownUserCount  [0x0860bb52-0x860bb87] ===
 860bb52:	55                   	push   %ebp
 860bb53:	89 e5                	mov    %esp,%ebp
 860bb55:	83 ec 28             	sub    $0x28,%esp
 860bb58:	8b 45 08             	mov    0x8(%ebp),%eax
 860bb5b:	83 c0 04             	add    $0x4,%eax
 860bb5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bb62:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bb65:	89 04 24             	mov    %eax,(%esp)
 860bb68:	e8 df 98 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bb6d:	8b 45 08             	mov    0x8(%ebp),%eax
 860bb70:	8b 00                	mov    (%eax),%eax
 860bb72:	8d 50 01             	lea    0x1(%eax),%edx
 860bb75:	8b 45 08             	mov    0x8(%ebp),%eax
 860bb78:	89 10                	mov    %edx,(%eax)
 860bb7a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bb7d:	89 04 24             	mov    %eax,(%esp)
 860bb80:	e8 e3 98 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bb85:	c9                   	leave
 860bb86:	c3                   	ret
 860bb87:	90                   	nop

```

```c
// StatisticsToObserveCrash::incAbnormalDownUserCount @ 0x860bb52

/* StatisticsToObserveCrash::incAbnormalDownUserCount() */

void __thiscall StatisticsToObserveCrash::incAbnormalDownUserCount(StatisticsToObserveCrash *this)

{
  Guard<Mutex> local_10 [12];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  *(int *)this = *(int *)this + 1;
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## incUserLastCrashDungeonID

```asm
// === 0860bd2e StatisticsToObserveCrash::incUserLastCrashDungeonID  [0x0860bd2e-0x860be1f] ===
 860bd2e:	55                   	push   %ebp
 860bd2f:	89 e5                	mov    %esp,%ebp
 860bd31:	56                   	push   %esi
 860bd32:	53                   	push   %ebx
 860bd33:	83 ec 30             	sub    $0x30,%esp
 860bd36:	8b 45 08             	mov    0x8(%ebp),%eax
 860bd39:	83 c0 04             	add    $0x4,%eax
 860bd3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bd40:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bd43:	89 04 24             	mov    %eax,(%esp)
 860bd46:	e8 01 97 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bd4b:	8b 45 08             	mov    0x8(%ebp),%eax
 860bd4e:	8d 48 34             	lea    0x34(%eax),%ecx
 860bd51:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bd54:	8d 55 0c             	lea    0xc(%ebp),%edx
 860bd57:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bd5b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bd5f:	89 04 24             	mov    %eax,(%esp)
 860bd62:	e8 87 15 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860bd67:	83 ec 04             	sub    $0x4,%esp
 860bd6a:	8b 45 08             	mov    0x8(%ebp),%eax
 860bd6d:	8d 50 34             	lea    0x34(%eax),%edx
 860bd70:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860bd73:	89 54 24 04          	mov    %edx,0x4(%esp)
 860bd77:	89 04 24             	mov    %eax,(%esp)
 860bd7a:	e8 9b 15 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860bd7f:	83 ec 04             	sub    $0x4,%esp
 860bd82:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860bd85:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bd89:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bd8c:	89 04 24             	mov    %eax,(%esp)
 860bd8f:	e8 5c bb ab ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 860bd94:	84 c0                	test   %al,%al
 860bd96:	74 41                	je     860bdd9 <_ZN24StatisticsToObserveCrash25incUserLastCrashDungeonIDEi+0xab>
 860bd98:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 860bd9f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bda2:	89 44 24 08          	mov    %eax,0x8(%esp)
 860bda6:	8d 45 0c             	lea    0xc(%ebp),%eax
 860bda9:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bdad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860bdb0:	89 04 24             	mov    %eax,(%esp)
 860bdb3:	e8 80 4e 00 00       	call   8610c38 <_ZNSt4pairIKiiEC1IRiiEEOT_OT0_>
 860bdb8:	8b 45 08             	mov    0x8(%ebp),%eax
 860bdbb:	8d 48 34             	lea    0x34(%eax),%ecx
 860bdbe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860bdc1:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860bdc4:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bdc8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bdcc:	89 04 24             	mov    %eax,(%esp)
 860bdcf:	e8 7c af ab ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 860bdd4:	83 ec 04             	sub    $0x4,%esp
 860bdd7:	eb 31                	jmp    860be0a <_ZN24StatisticsToObserveCrash25incUserLastCrashDungeonIDEi+0xdc>
 860bdd9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bddc:	89 04 24             	mov    %eax,(%esp)
 860bddf:	e8 96 7b b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860bde4:	8b 50 04             	mov    0x4(%eax),%edx
 860bde7:	83 c2 01             	add    $0x1,%edx
 860bdea:	89 50 04             	mov    %edx,0x4(%eax)
 860bded:	eb 1b                	jmp    860be0a <_ZN24StatisticsToObserveCrash25incUserLastCrashDungeonIDEi+0xdc>
 860bdef:	89 d3                	mov    %edx,%ebx
 860bdf1:	89 c6                	mov    %eax,%esi
 860bdf3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bdf6:	89 04 24             	mov    %eax,(%esp)
 860bdf9:	e8 6a 96 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bdfe:	89 f0                	mov    %esi,%eax
 860be00:	89 da                	mov    %ebx,%edx
 860be02:	89 04 24             	mov    %eax,(%esp)
 860be05:	e8 46 79 4d 00       	call   8ae3750 <_Unwind_Resume>
 860be0a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860be0d:	89 04 24             	mov    %eax,(%esp)
 860be10:	e8 53 96 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860be15:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860be18:	83 c4 00             	add    $0x0,%esp
 860be1b:	5b                   	pop    %ebx
 860be1c:	5e                   	pop    %esi
 860be1d:	5d                   	pop    %ebp
 860be1e:	c3                   	ret
 860be1f:	90                   	nop

```

```c
// StatisticsToObserveCrash::incUserLastCrashDungeonID @ 0x860bd2e

/* StatisticsToObserveCrash::incUserLastCrashDungeonID(int) */

void StatisticsToObserveCrash::incUserLastCrashDungeonID(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  Guard<Mutex> local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  pair local_20 [8];
  pair<int_const,int> local_18 [8];
  int local_10;
  
  Guard<Mutex>::Guard(local_28,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bd62 to 0860bdd3 has its CatchHandler @ 0860bdef */
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

## incUserLastCrashPacketID

```asm
// === 0860bb88 StatisticsToObserveCrash::incUserLastCrashPacketID  [0x0860bb88-0x860bc79] ===
 860bb88:	55                   	push   %ebp
 860bb89:	89 e5                	mov    %esp,%ebp
 860bb8b:	56                   	push   %esi
 860bb8c:	53                   	push   %ebx
 860bb8d:	83 ec 30             	sub    $0x30,%esp
 860bb90:	8b 45 08             	mov    0x8(%ebp),%eax
 860bb93:	83 c0 04             	add    $0x4,%eax
 860bb96:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bb9a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bb9d:	89 04 24             	mov    %eax,(%esp)
 860bba0:	e8 a7 98 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bba5:	8b 45 08             	mov    0x8(%ebp),%eax
 860bba8:	8d 48 1c             	lea    0x1c(%eax),%ecx
 860bbab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bbae:	8d 55 0c             	lea    0xc(%ebp),%edx
 860bbb1:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bbb5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bbb9:	89 04 24             	mov    %eax,(%esp)
 860bbbc:	e8 2d 17 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860bbc1:	83 ec 04             	sub    $0x4,%esp
 860bbc4:	8b 45 08             	mov    0x8(%ebp),%eax
 860bbc7:	8d 50 1c             	lea    0x1c(%eax),%edx
 860bbca:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860bbcd:	89 54 24 04          	mov    %edx,0x4(%esp)
 860bbd1:	89 04 24             	mov    %eax,(%esp)
 860bbd4:	e8 41 17 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860bbd9:	83 ec 04             	sub    $0x4,%esp
 860bbdc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860bbdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bbe3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bbe6:	89 04 24             	mov    %eax,(%esp)
 860bbe9:	e8 02 bd ab ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 860bbee:	84 c0                	test   %al,%al
 860bbf0:	74 41                	je     860bc33 <_ZN24StatisticsToObserveCrash24incUserLastCrashPacketIDEi+0xab>
 860bbf2:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 860bbf9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bbfc:	89 44 24 08          	mov    %eax,0x8(%esp)
 860bc00:	8d 45 0c             	lea    0xc(%ebp),%eax
 860bc03:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bc07:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860bc0a:	89 04 24             	mov    %eax,(%esp)
 860bc0d:	e8 26 50 00 00       	call   8610c38 <_ZNSt4pairIKiiEC1IRiiEEOT_OT0_>
 860bc12:	8b 45 08             	mov    0x8(%ebp),%eax
 860bc15:	8d 48 1c             	lea    0x1c(%eax),%ecx
 860bc18:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860bc1b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860bc1e:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bc22:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bc26:	89 04 24             	mov    %eax,(%esp)
 860bc29:	e8 22 b1 ab ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 860bc2e:	83 ec 04             	sub    $0x4,%esp
 860bc31:	eb 31                	jmp    860bc64 <_ZN24StatisticsToObserveCrash24incUserLastCrashPacketIDEi+0xdc>
 860bc33:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bc36:	89 04 24             	mov    %eax,(%esp)
 860bc39:	e8 3c 7d b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860bc3e:	8b 50 04             	mov    0x4(%eax),%edx
 860bc41:	83 c2 01             	add    $0x1,%edx
 860bc44:	89 50 04             	mov    %edx,0x4(%eax)
 860bc47:	eb 1b                	jmp    860bc64 <_ZN24StatisticsToObserveCrash24incUserLastCrashPacketIDEi+0xdc>
 860bc49:	89 d3                	mov    %edx,%ebx
 860bc4b:	89 c6                	mov    %eax,%esi
 860bc4d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bc50:	89 04 24             	mov    %eax,(%esp)
 860bc53:	e8 10 98 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bc58:	89 f0                	mov    %esi,%eax
 860bc5a:	89 da                	mov    %ebx,%edx
 860bc5c:	89 04 24             	mov    %eax,(%esp)
 860bc5f:	e8 ec 7a 4d 00       	call   8ae3750 <_Unwind_Resume>
 860bc64:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bc67:	89 04 24             	mov    %eax,(%esp)
 860bc6a:	e8 f9 97 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bc6f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860bc72:	83 c4 00             	add    $0x0,%esp
 860bc75:	5b                   	pop    %ebx
 860bc76:	5e                   	pop    %esi
 860bc77:	5d                   	pop    %ebp
 860bc78:	c3                   	ret
 860bc79:	90                   	nop

```

```c
// StatisticsToObserveCrash::incUserLastCrashPacketID @ 0x860bb88

/* StatisticsToObserveCrash::incUserLastCrashPacketID(int) */

void StatisticsToObserveCrash::incUserLastCrashPacketID(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  Guard<Mutex> local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  pair local_20 [8];
  pair<int_const,int> local_18 [8];
  int local_10;
  
  Guard<Mutex>::Guard(local_28,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bbbc to 0860bc2d has its CatchHandler @ 0860bc49 */
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

## incUserLastCrashPlayStatus

```asm
// === 0860bed4 StatisticsToObserveCrash::incUserLastCrashPlayStatus  [0x0860bed4-0x860bfc5] ===
 860bed4:	55                   	push   %ebp
 860bed5:	89 e5                	mov    %esp,%ebp
 860bed7:	56                   	push   %esi
 860bed8:	53                   	push   %ebx
 860bed9:	83 ec 30             	sub    $0x30,%esp
 860bedc:	8b 45 08             	mov    0x8(%ebp),%eax
 860bedf:	83 c0 04             	add    $0x4,%eax
 860bee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bee6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bee9:	89 04 24             	mov    %eax,(%esp)
 860beec:	e8 5b 95 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bef1:	8b 45 08             	mov    0x8(%ebp),%eax
 860bef4:	8d 48 4c             	lea    0x4c(%eax),%ecx
 860bef7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860befa:	8d 55 0c             	lea    0xc(%ebp),%edx
 860befd:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bf01:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bf05:	89 04 24             	mov    %eax,(%esp)
 860bf08:	e8 e1 13 ac ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 860bf0d:	83 ec 04             	sub    $0x4,%esp
 860bf10:	8b 45 08             	mov    0x8(%ebp),%eax
 860bf13:	8d 50 4c             	lea    0x4c(%eax),%edx
 860bf16:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860bf19:	89 54 24 04          	mov    %edx,0x4(%esp)
 860bf1d:	89 04 24             	mov    %eax,(%esp)
 860bf20:	e8 f5 13 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860bf25:	83 ec 04             	sub    $0x4,%esp
 860bf28:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860bf2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bf2f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bf32:	89 04 24             	mov    %eax,(%esp)
 860bf35:	e8 b6 b9 ab ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 860bf3a:	84 c0                	test   %al,%al
 860bf3c:	74 41                	je     860bf7f <_ZN24StatisticsToObserveCrash26incUserLastCrashPlayStatusEi+0xab>
 860bf3e:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 860bf45:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bf48:	89 44 24 08          	mov    %eax,0x8(%esp)
 860bf4c:	8d 45 0c             	lea    0xc(%ebp),%eax
 860bf4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bf53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860bf56:	89 04 24             	mov    %eax,(%esp)
 860bf59:	e8 da 4c 00 00       	call   8610c38 <_ZNSt4pairIKiiEC1IRiiEEOT_OT0_>
 860bf5e:	8b 45 08             	mov    0x8(%ebp),%eax
 860bf61:	8d 48 4c             	lea    0x4c(%eax),%ecx
 860bf64:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860bf67:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860bf6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 860bf6e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860bf72:	89 04 24             	mov    %eax,(%esp)
 860bf75:	e8 d6 ad ab ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 860bf7a:	83 ec 04             	sub    $0x4,%esp
 860bf7d:	eb 31                	jmp    860bfb0 <_ZN24StatisticsToObserveCrash26incUserLastCrashPlayStatusEi+0xdc>
 860bf7f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860bf82:	89 04 24             	mov    %eax,(%esp)
 860bf85:	e8 f0 79 b8 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 860bf8a:	8b 50 04             	mov    0x4(%eax),%edx
 860bf8d:	83 c2 01             	add    $0x1,%edx
 860bf90:	89 50 04             	mov    %edx,0x4(%eax)
 860bf93:	eb 1b                	jmp    860bfb0 <_ZN24StatisticsToObserveCrash26incUserLastCrashPlayStatusEi+0xdc>
 860bf95:	89 d3                	mov    %edx,%ebx
 860bf97:	89 c6                	mov    %eax,%esi
 860bf99:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bf9c:	89 04 24             	mov    %eax,(%esp)
 860bf9f:	e8 c4 94 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bfa4:	89 f0                	mov    %esi,%eax
 860bfa6:	89 da                	mov    %ebx,%edx
 860bfa8:	89 04 24             	mov    %eax,(%esp)
 860bfab:	e8 a0 77 4d 00       	call   8ae3750 <_Unwind_Resume>
 860bfb0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860bfb3:	89 04 24             	mov    %eax,(%esp)
 860bfb6:	e8 ad 94 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bfbb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860bfbe:	83 c4 00             	add    $0x0,%esp
 860bfc1:	5b                   	pop    %ebx
 860bfc2:	5e                   	pop    %esi
 860bfc3:	5d                   	pop    %ebp
 860bfc4:	c3                   	ret
 860bfc5:	90                   	nop

```

```c
// StatisticsToObserveCrash::incUserLastCrashPlayStatus @ 0x860bed4

/* StatisticsToObserveCrash::incUserLastCrashPlayStatus(int) */

void StatisticsToObserveCrash::incUserLastCrashPlayStatus(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  Guard<Mutex> local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  pair local_20 [8];
  pair<int_const,int> local_18 [8];
  int local_10;
  
  Guard<Mutex>::Guard(local_28,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bf08 to 0860bf79 has its CatchHandler @ 0860bf95 */
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
// === 0860ba6e StatisticsToObserveCrash::reset  [0x0860ba6e-0x860baed] ===
 860ba6e:	55                   	push   %ebp
 860ba6f:	89 e5                	mov    %esp,%ebp
 860ba71:	56                   	push   %esi
 860ba72:	53                   	push   %ebx
 860ba73:	83 ec 20             	sub    $0x20,%esp
 860ba76:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba79:	83 c0 04             	add    $0x4,%eax
 860ba7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ba80:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860ba83:	89 04 24             	mov    %eax,(%esp)
 860ba86:	e8 c1 99 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860ba8b:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba8e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 860ba94:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba97:	83 c0 1c             	add    $0x1c,%eax
 860ba9a:	89 04 24             	mov    %eax,(%esp)
 860ba9d:	e8 3c b2 ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860baa2:	8b 45 08             	mov    0x8(%ebp),%eax
 860baa5:	83 c0 34             	add    $0x34,%eax
 860baa8:	89 04 24             	mov    %eax,(%esp)
 860baab:	e8 2e b2 ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860bab0:	8b 45 08             	mov    0x8(%ebp),%eax
 860bab3:	83 c0 4c             	add    $0x4c,%eax
 860bab6:	89 04 24             	mov    %eax,(%esp)
 860bab9:	e8 20 b2 ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860babe:	eb 1b                	jmp    860badb <_ZN24StatisticsToObserveCrash5resetEv+0x6d>
 860bac0:	89 d3                	mov    %edx,%ebx
 860bac2:	89 c6                	mov    %eax,%esi
 860bac4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bac7:	89 04 24             	mov    %eax,(%esp)
 860baca:	e8 99 99 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bacf:	89 f0                	mov    %esi,%eax
 860bad1:	89 da                	mov    %ebx,%edx
 860bad3:	89 04 24             	mov    %eax,(%esp)
 860bad6:	e8 75 7c 4d 00       	call   8ae3750 <_Unwind_Resume>
 860badb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bade:	89 04 24             	mov    %eax,(%esp)
 860bae1:	e8 82 99 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bae6:	83 c4 20             	add    $0x20,%esp
 860bae9:	5b                   	pop    %ebx
 860baea:	5e                   	pop    %esi
 860baeb:	5d                   	pop    %ebp
 860baec:	c3                   	ret
 860baed:	90                   	nop

```

```c
// StatisticsToObserveCrash::reset @ 0x860ba6e

/* StatisticsToObserveCrash::reset() */

void __thiscall StatisticsToObserveCrash::reset(StatisticsToObserveCrash *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  *(undefined4 *)this = 0;
                    /* try { // try from 0860ba9d to 0860babd has its CatchHandler @ 0860bac0 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x4c));
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## setAbnormalDownUserCount

```asm
// === 0860bb22 StatisticsToObserveCrash::setAbnormalDownUserCount  [0x0860bb22-0x860bb51] ===
 860bb22:	55                   	push   %ebp
 860bb23:	89 e5                	mov    %esp,%ebp
 860bb25:	83 ec 28             	sub    $0x28,%esp
 860bb28:	8b 45 08             	mov    0x8(%ebp),%eax
 860bb2b:	83 c0 04             	add    $0x4,%eax
 860bb2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 860bb32:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bb35:	89 04 24             	mov    %eax,(%esp)
 860bb38:	e8 0f 99 af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860bb3d:	8b 45 08             	mov    0x8(%ebp),%eax
 860bb40:	8b 55 0c             	mov    0xc(%ebp),%edx
 860bb43:	89 10                	mov    %edx,(%eax)
 860bb45:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860bb48:	89 04 24             	mov    %eax,(%esp)
 860bb4b:	e8 18 99 af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860bb50:	c9                   	leave
 860bb51:	c3                   	ret

```

```c
// StatisticsToObserveCrash::setAbnormalDownUserCount @ 0x860bb22

/* StatisticsToObserveCrash::setAbnormalDownUserCount(int) */

void __thiscall
StatisticsToObserveCrash::setAbnormalDownUserCount(StatisticsToObserveCrash *this,int param_1)

{
  Guard<Mutex> local_10 [12];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  *(int *)this = param_1;
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## ~StatisticsToObserveCrash

```asm
// === 0860b9d2 StatisticsToObserveCrash::~StatisticsToObserveCrash  [0x0860b9d2-0x860ba6d] ===
 860b9d2:	55                   	push   %ebp
 860b9d3:	89 e5                	mov    %esp,%ebp
 860b9d5:	56                   	push   %esi
 860b9d6:	53                   	push   %ebx
 860b9d7:	83 ec 10             	sub    $0x10,%esp
 860b9da:	8b 45 08             	mov    0x8(%ebp),%eax
 860b9dd:	83 c0 4c             	add    $0x4c,%eax
 860b9e0:	89 04 24             	mov    %eax,(%esp)
 860b9e3:	e8 de b0 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860b9e8:	eb 18                	jmp    860ba02 <_ZN24StatisticsToObserveCrashD1Ev+0x30>
 860b9ea:	89 d3                	mov    %edx,%ebx
 860b9ec:	89 c6                	mov    %eax,%esi
 860b9ee:	8b 45 08             	mov    0x8(%ebp),%eax
 860b9f1:	83 c0 34             	add    $0x34,%eax
 860b9f4:	89 04 24             	mov    %eax,(%esp)
 860b9f7:	e8 ca b0 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860b9fc:	89 f0                	mov    %esi,%eax
 860b9fe:	89 da                	mov    %ebx,%edx
 860ba00:	eb 10                	jmp    860ba12 <_ZN24StatisticsToObserveCrashD1Ev+0x40>
 860ba02:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba05:	83 c0 34             	add    $0x34,%eax
 860ba08:	89 04 24             	mov    %eax,(%esp)
 860ba0b:	e8 b6 b0 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860ba10:	eb 18                	jmp    860ba2a <_ZN24StatisticsToObserveCrashD1Ev+0x58>
 860ba12:	89 d3                	mov    %edx,%ebx
 860ba14:	89 c6                	mov    %eax,%esi
 860ba16:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba19:	83 c0 1c             	add    $0x1c,%eax
 860ba1c:	89 04 24             	mov    %eax,(%esp)
 860ba1f:	e8 a2 b0 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860ba24:	89 f0                	mov    %esi,%eax
 860ba26:	89 da                	mov    %ebx,%edx
 860ba28:	eb 10                	jmp    860ba3a <_ZN24StatisticsToObserveCrashD1Ev+0x68>
 860ba2a:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba2d:	83 c0 1c             	add    $0x1c,%eax
 860ba30:	89 04 24             	mov    %eax,(%esp)
 860ba33:	e8 8e b0 ab ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 860ba38:	eb 1e                	jmp    860ba58 <_ZN24StatisticsToObserveCrashD1Ev+0x86>
 860ba3a:	89 d3                	mov    %edx,%ebx
 860ba3c:	89 c6                	mov    %eax,%esi
 860ba3e:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba41:	83 c0 04             	add    $0x4,%eax
 860ba44:	89 04 24             	mov    %eax,(%esp)
 860ba47:	e8 e2 f9 ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860ba4c:	89 f0                	mov    %esi,%eax
 860ba4e:	89 da                	mov    %ebx,%edx
 860ba50:	89 04 24             	mov    %eax,(%esp)
 860ba53:	e8 f8 7c 4d 00       	call   8ae3750 <_Unwind_Resume>
 860ba58:	8b 45 08             	mov    0x8(%ebp),%eax
 860ba5b:	83 c0 04             	add    $0x4,%eax
 860ba5e:	89 04 24             	mov    %eax,(%esp)
 860ba61:	e8 c8 f9 ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860ba66:	83 c4 10             	add    $0x10,%esp
 860ba69:	5b                   	pop    %ebx
 860ba6a:	5e                   	pop    %esi
 860ba6b:	5d                   	pop    %ebp
 860ba6c:	c3                   	ret
 860ba6d:	90                   	nop

```

```c
// StatisticsToObserveCrash::~StatisticsToObserveCrash @ 0x860b9d2

/* StatisticsToObserveCrash::~StatisticsToObserveCrash() */

void __thiscall StatisticsToObserveCrash::~StatisticsToObserveCrash(StatisticsToObserveCrash *this)

{
                    /* try { // try from 0860b9e3 to 0860b9e7 has its CatchHandler @ 0860b9ea */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x4c));
                    /* try { // try from 0860ba0b to 0860ba0f has its CatchHandler @ 0860ba12 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
                    /* try { // try from 0860ba33 to 0860ba37 has its CatchHandler @ 0860ba3a */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  Mutex::~Mutex((Mutex *)(this + 4));
  return;
}

```

