# std____basic_file_lt_char_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## __basic_file

```asm
// === 08722560 std::__basic_file<char>::__basic_file  [0x08722560-0x872257f] ===
 8722560:	55                   	push   %ebp
 8722561:	89 e5                	mov    %esp,%ebp
 8722563:	8b 45 08             	mov    0x8(%ebp),%eax
 8722566:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 872256c:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8722570:	5d                   	pop    %ebp
 8722571:	c3                   	ret
 8722572:	90                   	nop
 8722573:	90                   	nop
 8722574:	90                   	nop
 8722575:	90                   	nop
 8722576:	90                   	nop
 8722577:	90                   	nop
 8722578:	90                   	nop
 8722579:	90                   	nop
 872257a:	90                   	nop
 872257b:	90                   	nop
 872257c:	90                   	nop
 872257d:	90                   	nop
 872257e:	90                   	nop
 872257f:	90                   	nop

```

```c
// std::__basic_file<char>::__basic_file @ 0x8722560

/* std::__basic_file<char>::__basic_file(pthread_mutex_t*) */

void std::__basic_file<char>::__basic_file(pthread_mutex_t *param_1)

{
  (param_1->__data).__lock = 0;
  param_1->__size[4] = '\0';
  return;
}

```

---

## close

```asm
// === 08722690 std::__basic_file<char>::close  [0x08722690-0x872271f] ===
 8722690:	55                   	push   %ebp
 8722691:	31 c0                	xor    %eax,%eax
 8722693:	89 e5                	mov    %esp,%ebp
 8722695:	83 ec 28             	sub    $0x28,%esp
 8722698:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872269b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872269e:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87226a1:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87226a4:	8b 33                	mov    (%ebx),%esi
 87226a6:	85 f6                	test   %esi,%esi
 87226a8:	75 0e                	jne    87226b8 <_ZNSt12__basic_fileIcE5closeEv+0x28>
 87226aa:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87226ad:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87226b0:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87226b3:	89 ec                	mov    %ebp,%esp
 87226b5:	5d                   	pop    %ebp
 87226b6:	c3                   	ret
 87226b7:	90                   	nop
 87226b8:	80 7b 04 00          	cmpb   $0x0,0x4(%ebx)
 87226bc:	74 3a                	je     87226f8 <_ZNSt12__basic_fileIcE5closeEv+0x68>
 87226be:	e8 ad b6 95 ff       	call   807dd70 <__errno_location@plt>
 87226c3:	89 c7                	mov    %eax,%edi
 87226c5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87226cb:	89 34 24             	mov    %esi,(%esp)
 87226ce:	e8 cd b7 95 ff       	call   807dea0 <fclose@plt>
 87226d3:	85 c0                	test   %eax,%eax
 87226d5:	74 21                	je     87226f8 <_ZNSt12__basic_fileIcE5closeEv+0x68>
 87226d7:	83 3f 04             	cmpl   $0x4,(%edi)
 87226da:	74 34                	je     8722710 <_ZNSt12__basic_fileIcE5closeEv+0x80>
 87226dc:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 87226e2:	31 c0                	xor    %eax,%eax
 87226e4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87226e7:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87226ea:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87226ed:	89 ec                	mov    %ebp,%esp
 87226ef:	5d                   	pop    %ebp
 87226f0:	c3                   	ret
 87226f1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87226f8:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 87226fe:	89 d8                	mov    %ebx,%eax
 8722700:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8722703:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8722706:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8722709:	89 ec                	mov    %ebp,%esp
 872270b:	5d                   	pop    %ebp
 872270c:	c3                   	ret
 872270d:	8d 76 00             	lea    0x0(%esi),%esi
 8722710:	8b 33                	mov    (%ebx),%esi
 8722712:	eb b7                	jmp    87226cb <_ZNSt12__basic_fileIcE5closeEv+0x3b>
 8722714:	90                   	nop
 8722715:	90                   	nop
 8722716:	90                   	nop
 8722717:	90                   	nop
 8722718:	90                   	nop
 8722719:	90                   	nop
 872271a:	90                   	nop
 872271b:	90                   	nop
 872271c:	90                   	nop
 872271d:	90                   	nop
 872271e:	90                   	nop
 872271f:	90                   	nop

```

```c
// std::__basic_file<char>::close @ 0x8722690

/* std::__basic_file<char>::close() */

__basic_file<char> * __thiscall std::__basic_file<char>::close(__basic_file<char> *this)

{
  int *piVar1;
  int iVar2;
  FILE *__stream;
  
  __stream = (FILE *)this->_M_cfile;
  if (__stream == (FILE *)0x0) {
    return (__basic_file<char> *)0x0;
  }
  if (this->_M_cfile_created != false) {
    piVar1 = __errno_location();
    *piVar1 = 0;
    while( true ) {
      iVar2 = fclose(__stream);
      if (iVar2 == 0) break;
      if (*piVar1 != 4) {
        this->_M_cfile = (__c_file *)0x0;
        return (__basic_file<char> *)0x0;
      }
      __stream = (FILE *)this->_M_cfile;
    }
  }
  this->_M_cfile = (__c_file *)0x0;
  return this;
}

```

---

## fd

```asm
// === 08722730 std::__basic_file<char>::fd  [0x08722730-0x872274f] ===
 8722730:	55                   	push   %ebp
 8722731:	89 e5                	mov    %esp,%ebp
 8722733:	83 ec 08             	sub    $0x8,%esp
 8722736:	8b 45 08             	mov    0x8(%ebp),%eax
 8722739:	8b 00                	mov    (%eax),%eax
 872273b:	89 45 08             	mov    %eax,0x8(%ebp)
 872273e:	c9                   	leave
 872273f:	e9 8c bf 95 ff       	jmp    807e6d0 <fileno@plt>
 8722744:	90                   	nop
 8722745:	90                   	nop
 8722746:	90                   	nop
 8722747:	90                   	nop
 8722748:	90                   	nop
 8722749:	90                   	nop
 872274a:	90                   	nop
 872274b:	90                   	nop
 872274c:	90                   	nop
 872274d:	90                   	nop
 872274e:	90                   	nop
 872274f:	90                   	nop

```

```c
// std::__basic_file<char>::fd @ 0x8722730

/* std::__basic_file<char>::fd() */

void __thiscall std::__basic_file<char>::fd(__basic_file<char> *this)

{
  fileno((FILE *)this->_M_cfile);
  return;
}

```

---

## file

```asm
// === 08722590 std::__basic_file<char>::file  [0x08722590-0x872259f] ===
 8722590:	55                   	push   %ebp
 8722591:	89 e5                	mov    %esp,%ebp
 8722593:	8b 45 08             	mov    0x8(%ebp),%eax
 8722596:	5d                   	pop    %ebp
 8722597:	8b 00                	mov    (%eax),%eax
 8722599:	c3                   	ret
 872259a:	90                   	nop
 872259b:	90                   	nop
 872259c:	90                   	nop
 872259d:	90                   	nop
 872259e:	90                   	nop
 872259f:	90                   	nop

```

```c
// std::__basic_file<char>::file @ 0x8722590

/* std::__basic_file<char>::file() */

__c_file * __thiscall std::__basic_file<char>::file(__basic_file<char> *this)

{
  return this->_M_cfile;
}

```

---

## is_open

```asm
// === 08722580 std::__basic_file<char>::is_open  [0x08722580-0x872258f] ===
 8722580:	55                   	push   %ebp
 8722581:	89 e5                	mov    %esp,%ebp
 8722583:	8b 45 08             	mov    0x8(%ebp),%eax
 8722586:	5d                   	pop    %ebp
 8722587:	8b 00                	mov    (%eax),%eax
 8722589:	85 c0                	test   %eax,%eax
 872258b:	0f 95 c0             	setne  %al
 872258e:	c3                   	ret
 872258f:	90                   	nop

```

```c
// std::__basic_file<char>::is_open @ 0x8722580

/* std::__basic_file<char>::is_open() const */

undefined4 __thiscall std::__basic_file<char>::is_open(__basic_file<char> *this)

{
  return CONCAT31((int3)((uint)this->_M_cfile >> 8),this->_M_cfile != (__c_file *)0x0);
}

```

---

## open

```asm
// === 08722a20 std::__basic_file<char>::open  [0x08722a20-0x8722a7f] ===
 8722a20:	55                   	push   %ebp
 8722a21:	89 e5                	mov    %esp,%ebp
 8722a23:	53                   	push   %ebx
 8722a24:	83 ec 14             	sub    $0x14,%esp
 8722a27:	8b 45 10             	mov    0x10(%ebp),%eax
 8722a2a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8722a2d:	83 e0 3d             	and    $0x3d,%eax
 8722a30:	83 e8 01             	sub    $0x1,%eax
 8722a33:	83 f8 3b             	cmp    $0x3b,%eax
 8722a36:	77 11                	ja     8722a49 <_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei+0x29>
 8722a38:	8b 04 85 80 16 d0 08 	mov    0x8d01680(,%eax,4),%eax
 8722a3f:	85 c0                	test   %eax,%eax
 8722a41:	74 06                	je     8722a49 <_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei+0x29>
 8722a43:	8b 0b                	mov    (%ebx),%ecx
 8722a45:	85 c9                	test   %ecx,%ecx
 8722a47:	74 0f                	je     8722a58 <_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei+0x38>
 8722a49:	31 c0                	xor    %eax,%eax
 8722a4b:	83 c4 14             	add    $0x14,%esp
 8722a4e:	5b                   	pop    %ebx
 8722a4f:	5d                   	pop    %ebp
 8722a50:	c3                   	ret
 8722a51:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8722a58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722a5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722a5f:	89 04 24             	mov    %eax,(%esp)
 8722a62:	e8 d9 ae 95 ff       	call   807d940 <fopen64@plt>
 8722a67:	85 c0                	test   %eax,%eax
 8722a69:	89 03                	mov    %eax,(%ebx)
 8722a6b:	74 dc                	je     8722a49 <_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei+0x29>
 8722a6d:	c6 43 04 01          	movb   $0x1,0x4(%ebx)
 8722a71:	89 d8                	mov    %ebx,%eax
 8722a73:	eb d6                	jmp    8722a4b <_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei+0x2b>
 8722a75:	90                   	nop
 8722a76:	90                   	nop
 8722a77:	90                   	nop
 8722a78:	90                   	nop
 8722a79:	90                   	nop
 8722a7a:	90                   	nop
 8722a7b:	90                   	nop
 8722a7c:	90                   	nop
 8722a7d:	90                   	nop
 8722a7e:	90                   	nop
 8722a7f:	90                   	nop

```

```c
// std::__basic_file<char>::open @ 0x8722a20

/* std::__basic_file<char>::open(char const*, std::_Ios_Openmode, int) */

char * std::__basic_file<char>::open(char *param_1,_Ios_Openmode param_2,int param_3)

{
  uint uVar1;
  FILE *pFVar2;
  
  uVar1 = (param_3 & 0x3dU) - 1;
  if (((uVar1 < 0x3c) && (*(char **)(CSWTCH_106 + uVar1 * 4) != (char *)0x0)) &&
     (*(int *)param_1 == 0)) {
    pFVar2 = fopen64((char *)param_2,*(char **)(CSWTCH_106 + uVar1 * 4));
    *(FILE **)param_1 = pFVar2;
    if (pFVar2 != (FILE *)0x0) {
      param_1[4] = '\x01';
      return param_1;
    }
  }
  return (char *)0x0;
}

```

---

## seekoff

```asm
// === 08722880 std::__basic_file<char>::seekoff  [0x08722880-0x87228cf] ===
 8722880:	55                   	push   %ebp
 8722881:	89 e5                	mov    %esp,%ebp
 8722883:	83 ec 28             	sub    $0x28,%esp
 8722886:	8b 45 08             	mov    0x8(%ebp),%eax
 8722889:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872288c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 872288f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8722892:	8b 75 10             	mov    0x10(%ebp),%esi
 8722895:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8722898:	8b 7d 14             	mov    0x14(%ebp),%edi
 872289b:	8b 00                	mov    (%eax),%eax
 872289d:	89 04 24             	mov    %eax,(%esp)
 87228a0:	e8 2b be 95 ff       	call   807e6d0 <fileno@plt>
 87228a5:	89 7d 14             	mov    %edi,0x14(%ebp)
 87228a8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87228ab:	89 5d 0c             	mov    %ebx,0xc(%ebp)
 87228ae:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87228b1:	89 75 10             	mov    %esi,0x10(%ebp)
 87228b4:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87228b7:	89 45 08             	mov    %eax,0x8(%ebp)
 87228ba:	89 ec                	mov    %ebp,%esp
 87228bc:	5d                   	pop    %ebp
 87228bd:	e9 de be 95 ff       	jmp    807e7a0 <lseek64@plt>
 87228c2:	90                   	nop
 87228c3:	90                   	nop
 87228c4:	90                   	nop
 87228c5:	90                   	nop
 87228c6:	90                   	nop
 87228c7:	90                   	nop
 87228c8:	90                   	nop
 87228c9:	90                   	nop
 87228ca:	90                   	nop
 87228cb:	90                   	nop
 87228cc:	90                   	nop
 87228cd:	90                   	nop
 87228ce:	90                   	nop
 87228cf:	90                   	nop

```

```c
// std::__basic_file<char>::seekoff @ 0x8722880

/* std::__basic_file<char>::seekoff(long long, std::_Ios_Seekdir) */

__off64_t std::__basic_file<char>::seekoff(longlong param_1,_Ios_Seekdir param_2)

{
  int __fd;
  __off64_t _Var1;
  int in_stack_00000010;
  
  __fd = fileno((FILE *)*(undefined4 *)param_1);
  _Var1 = lseek64(__fd,CONCAT44(param_2,param_1._4_4_),in_stack_00000010);
  return _Var1;
}

```

---

## showmanyc

```asm
// === 08722750 std::__basic_file<char>::showmanyc  [0x08722750-0x872287f] ===
 8722750:	55                   	push   %ebp
 8722751:	89 e5                	mov    %esp,%ebp
 8722753:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8722759:	89 7d fc             	mov    %edi,-0x4(%ebp)
 872275c:	8b 7d 08             	mov    0x8(%ebp),%edi
 872275f:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8722762:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8722765:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 872276c:	8b 07                	mov    (%edi),%eax
 872276e:	89 04 24             	mov    %eax,(%esp)
 8722771:	e8 5a bf 95 ff       	call   807e6d0 <fileno@plt>
 8722776:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8722779:	89 54 24 08          	mov    %edx,0x8(%esp)
 872277d:	c7 44 24 04 1b 54 00 	movl   $0x541b,0x4(%esp)
 8722784:	00 
 8722785:	89 04 24             	mov    %eax,(%esp)
 8722788:	e8 23 bb 95 ff       	call   807e2b0 <ioctl@plt>
 872278d:	85 c0                	test   %eax,%eax
 872278f:	75 17                	jne    87227a8 <_ZNSt12__basic_fileIcE9showmanycEv+0x58>
 8722791:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8722794:	85 db                	test   %ebx,%ebx
 8722796:	78 10                	js     87227a8 <_ZNSt12__basic_fileIcE9showmanycEv+0x58>
 8722798:	89 d8                	mov    %ebx,%eax
 872279a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872279d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87227a0:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87227a3:	89 ec                	mov    %ebp,%esp
 87227a5:	5d                   	pop    %ebp
 87227a6:	c3                   	ret
 87227a7:	90                   	nop
 87227a8:	8b 07                	mov    (%edi),%eax
 87227aa:	89 04 24             	mov    %eax,(%esp)
 87227ad:	e8 1e bf 95 ff       	call   807e6d0 <fileno@plt>
 87227b2:	66 c7 45 e0 01 00    	movw   $0x1,-0x20(%ebp)
 87227b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87227bf:	00 
 87227c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87227c7:	00 
 87227c8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87227cb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 87227ce:	89 04 24             	mov    %eax,(%esp)
 87227d1:	e8 da bf 95 ff       	call   807e7b0 <poll@plt>
 87227d6:	85 c0                	test   %eax,%eax
 87227d8:	7e 37                	jle    8722811 <_ZNSt12__basic_fileIcE9showmanycEv+0xc1>
 87227da:	8b 07                	mov    (%edi),%eax
 87227dc:	89 04 24             	mov    %eax,(%esp)
 87227df:	e8 ec be 95 ff       	call   807e6d0 <fileno@plt>
 87227e4:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 87227ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 87227ee:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 87227f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87227f9:	e8 02 bf 95 ff       	call   807e700 <__fxstat64@plt>
 87227fe:	85 c0                	test   %eax,%eax
 8722800:	75 0f                	jne    8722811 <_ZNSt12__basic_fileIcE9showmanycEv+0xc1>
 8722802:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8722805:	25 00 f0 00 00       	and    $0xf000,%eax
 872280a:	3d 00 80 00 00       	cmp    $0x8000,%eax
 872280f:	74 17                	je     8722828 <_ZNSt12__basic_fileIcE9showmanycEv+0xd8>
 8722811:	31 db                	xor    %ebx,%ebx
 8722813:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8722816:	89 d8                	mov    %ebx,%eax
 8722818:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872281b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872281e:	89 ec                	mov    %ebp,%esp
 8722820:	5d                   	pop    %ebp
 8722821:	c3                   	ret
 8722822:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8722828:	8b 07                	mov    (%edi),%eax
 872282a:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 872282d:	8b 75 ac             	mov    -0x54(%ebp),%esi
 8722830:	89 04 24             	mov    %eax,(%esp)
 8722833:	e8 98 be 95 ff       	call   807e6d0 <fileno@plt>
 8722838:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 872283f:	00 
 8722840:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8722847:	00 
 8722848:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 872284f:	00 
 8722850:	89 04 24             	mov    %eax,(%esp)
 8722853:	e8 48 bf 95 ff       	call   807e7a0 <lseek64@plt>
 8722858:	29 c3                	sub    %eax,%ebx
 872285a:	19 d6                	sbb    %edx,%esi
 872285c:	83 fe 00             	cmp    $0x0,%esi
 872285f:	0f 8c 33 ff ff ff    	jl     8722798 <_ZNSt12__basic_fileIcE9showmanycEv+0x48>
 8722865:	7e 0a                	jle    8722871 <_ZNSt12__basic_fileIcE9showmanycEv+0x121>
 8722867:	bb ff ff ff 7f       	mov    $0x7fffffff,%ebx
 872286c:	e9 27 ff ff ff       	jmp    8722798 <_ZNSt12__basic_fileIcE9showmanycEv+0x48>
 8722871:	81 fb ff ff ff 7f    	cmp    $0x7fffffff,%ebx
 8722877:	0f 86 1b ff ff ff    	jbe    8722798 <_ZNSt12__basic_fileIcE9showmanycEv+0x48>
 872287d:	eb e8                	jmp    8722867 <_ZNSt12__basic_fileIcE9showmanycEv+0x117>
 872287f:	90                   	nop

```

```c
// std::__basic_file<char>::showmanyc @ 0x8722750

/* std::__basic_file<char>::showmanyc() */

uint __thiscall std::__basic_file<char>::showmanyc(__basic_file<char> *this)

{
  int iVar1;
  uint uVar2;
  __off64_t _Var3;
  stat64 local_88;
  pollfd local_28;
  uint local_20 [4];
  
  local_20[0] = 0;
  iVar1 = fileno((FILE *)this->_M_cfile);
  iVar1 = ioctl(iVar1,0x541b,local_20);
  if ((iVar1 == 0) && (-1 < (int)local_20[0])) {
    return local_20[0];
  }
  local_28.fd = fileno((FILE *)this->_M_cfile);
  local_28.events = 1;
  iVar1 = poll(&local_28,1,0);
  if (0 < iVar1) {
    iVar1 = fileno((FILE *)this->_M_cfile);
    iVar1 = __fxstat64(3,iVar1,&local_88);
    if ((iVar1 == 0) && ((local_88.st_mode & 0xf000) == 0x8000)) {
      iVar1 = fileno((FILE *)this->_M_cfile);
      _Var3 = lseek64(iVar1,0,1);
      uVar2 = (uint)local_88.st_size - (uint)_Var3;
      iVar1 = (local_88.st_size._4_4_ - (int)((ulonglong)_Var3 >> 0x20)) -
              (uint)((uint)local_88.st_size < (uint)_Var3);
      if (iVar1 < 0) {
        return uVar2;
      }
      if ((iVar1 < 1) && (uVar2 < 0x80000000)) {
        return uVar2;
      }
      return 0x7fffffff;
    }
  }
  return 0;
}

```

---

## sync

```asm
// === 087225a0 std::__basic_file<char>::sync  [0x087225a0-0x87225bf] ===
 87225a0:	55                   	push   %ebp
 87225a1:	89 e5                	mov    %esp,%ebp
 87225a3:	83 ec 08             	sub    $0x8,%esp
 87225a6:	8b 45 08             	mov    0x8(%ebp),%eax
 87225a9:	8b 00                	mov    (%eax),%eax
 87225ab:	89 45 08             	mov    %eax,0x8(%ebp)
 87225ae:	c9                   	leave
 87225af:	e9 1c c3 95 ff       	jmp    807e8d0 <fflush@plt>
 87225b4:	90                   	nop
 87225b5:	90                   	nop
 87225b6:	90                   	nop
 87225b7:	90                   	nop
 87225b8:	90                   	nop
 87225b9:	90                   	nop
 87225ba:	90                   	nop
 87225bb:	90                   	nop
 87225bc:	90                   	nop
 87225bd:	90                   	nop
 87225be:	90                   	nop
 87225bf:	90                   	nop

```

```c
// std::__basic_file<char>::sync @ 0x87225a0

/* std::__basic_file<char>::sync() */

void __thiscall std::__basic_file<char>::sync(__basic_file<char> *this)

{
  fflush((FILE *)this->_M_cfile);
  return;
}

```

---

## sys_open

```asm
// === 087225c0 std::__basic_file<char>::sys_open  [0x087225c0-0x872263f] ===
 87225c0:	55                   	push   %ebp
 87225c1:	89 e5                	mov    %esp,%ebp
 87225c3:	83 ec 28             	sub    $0x28,%esp
 87225c6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87225c9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87225cc:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87225cf:	8b 75 0c             	mov    0xc(%ebp),%esi
 87225d2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87225d5:	8b 13                	mov    (%ebx),%edx
 87225d7:	85 d2                	test   %edx,%edx
 87225d9:	74 15                	je     87225f0 <_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode+0x30>
 87225db:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87225de:	31 c0                	xor    %eax,%eax
 87225e0:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87225e3:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87225e6:	89 ec                	mov    %ebp,%esp
 87225e8:	5d                   	pop    %ebp
 87225e9:	c3                   	ret
 87225ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87225f0:	85 f6                	test   %esi,%esi
 87225f2:	74 e7                	je     87225db <_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode+0x1b>
 87225f4:	e8 77 b7 95 ff       	call   807dd70 <__errno_location@plt>
 87225f9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87225ff:	89 c7                	mov    %eax,%edi
 8722601:	31 c0                	xor    %eax,%eax
 8722603:	89 04 24             	mov    %eax,(%esp)
 8722606:	e8 c5 c2 95 ff       	call   807e8d0 <fflush@plt>
 872260b:	85 c0                	test   %eax,%eax
 872260d:	74 13                	je     8722622 <_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode+0x62>
 872260f:	83 3f 04             	cmpl   $0x4,(%edi)
 8722612:	75 c7                	jne    87225db <_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode+0x1b>
 8722614:	8b 03                	mov    (%ebx),%eax
 8722616:	89 04 24             	mov    %eax,(%esp)
 8722619:	e8 b2 c2 95 ff       	call   807e8d0 <fflush@plt>
 872261e:	85 c0                	test   %eax,%eax
 8722620:	75 ed                	jne    872260f <_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode+0x4f>
 8722622:	89 33                	mov    %esi,(%ebx)
 8722624:	89 d8                	mov    %ebx,%eax
 8722626:	c6 43 04 00          	movb   $0x0,0x4(%ebx)
 872262a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872262d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8722630:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8722633:	89 ec                	mov    %ebp,%esp
 8722635:	5d                   	pop    %ebp
 8722636:	c3                   	ret
 8722637:	90                   	nop
 8722638:	90                   	nop
 8722639:	90                   	nop
 872263a:	90                   	nop
 872263b:	90                   	nop
 872263c:	90                   	nop
 872263d:	90                   	nop
 872263e:	90                   	nop
 872263f:	90                   	nop

```

```c
// std::__basic_file<char>::sys_open @ 0x87225c0

/* std::__basic_file<char>::sys_open(_IO_FILE*, std::_Ios_Openmode) */

_IO_FILE * std::__basic_file<char>::sys_open(_IO_FILE *param_1,_Ios_Openmode param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1->_flags == 0) && (param_2 != 0)) {
    piVar1 = __errno_location();
    *piVar1 = 0;
    iVar2 = fflush((FILE *)0x0);
    while( true ) {
      if (iVar2 == 0) {
        param_1->_flags = param_2;
        *(undefined1 *)&param_1->_IO_read_ptr = 0;
        return param_1;
      }
      if (*piVar1 != 4) break;
      iVar2 = fflush((FILE *)param_1->_flags);
    }
  }
  return (_IO_FILE *)0x0;
}

```

---

## sys_open_08722a80

```asm
// === 08722a80 std::__basic_file<char>::sys_open  [0x08722a80-0x8722b0f] ===
 8722a80:	55                   	push   %ebp
 8722a81:	89 e5                	mov    %esp,%ebp
 8722a83:	83 ec 18             	sub    $0x18,%esp
 8722a86:	8b 45 10             	mov    0x10(%ebp),%eax
 8722a89:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8722a8c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8722a8f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8722a92:	8b 75 0c             	mov    0xc(%ebp),%esi
 8722a95:	83 e0 3d             	and    $0x3d,%eax
 8722a98:	83 e8 01             	sub    $0x1,%eax
 8722a9b:	83 f8 3b             	cmp    $0x3b,%eax
 8722a9e:	77 11                	ja     8722ab1 <_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode+0x31>
 8722aa0:	8b 04 85 80 16 d0 08 	mov    0x8d01680(,%eax,4),%eax
 8722aa7:	85 c0                	test   %eax,%eax
 8722aa9:	74 06                	je     8722ab1 <_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode+0x31>
 8722aab:	8b 13                	mov    (%ebx),%edx
 8722aad:	85 d2                	test   %edx,%edx
 8722aaf:	74 0f                	je     8722ac0 <_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode+0x40>
 8722ab1:	31 c0                	xor    %eax,%eax
 8722ab3:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8722ab6:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8722ab9:	89 ec                	mov    %ebp,%esp
 8722abb:	5d                   	pop    %ebp
 8722abc:	c3                   	ret
 8722abd:	8d 76 00             	lea    0x0(%esi),%esi
 8722ac0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722ac4:	89 34 24             	mov    %esi,(%esp)
 8722ac7:	e8 04 b2 95 ff       	call   807dcd0 <fdopen@plt>
 8722acc:	85 c0                	test   %eax,%eax
 8722ace:	89 c2                	mov    %eax,%edx
 8722ad0:	89 03                	mov    %eax,(%ebx)
 8722ad2:	74 dd                	je     8722ab1 <_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode+0x31>
 8722ad4:	85 f6                	test   %esi,%esi
 8722ad6:	89 d8                	mov    %ebx,%eax
 8722ad8:	c6 43 04 01          	movb   $0x1,0x4(%ebx)
 8722adc:	75 d5                	jne    8722ab3 <_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode+0x33>
 8722ade:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8722ae5:	00 
 8722ae6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8722aed:	00 
 8722aee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8722af5:	00 
 8722af6:	89 14 24             	mov    %edx,(%esp)
 8722af9:	e8 32 b9 95 ff       	call   807e430 <setvbuf@plt>
 8722afe:	89 d8                	mov    %ebx,%eax
 8722b00:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8722b03:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8722b06:	89 ec                	mov    %ebp,%esp
 8722b08:	5d                   	pop    %ebp
 8722b09:	c3                   	ret
 8722b0a:	90                   	nop
 8722b0b:	90                   	nop
 8722b0c:	90                   	nop
 8722b0d:	90                   	nop
 8722b0e:	90                   	nop
 8722b0f:	90                   	nop

```

```c
// std::__basic_file<char>::sys_open @ 0x8722a80

/* std::__basic_file<char>::sys_open(int, std::_Ios_Openmode) */

__basic_file<char> * __thiscall
std::__basic_file<char>::sys_open(__basic_file<char> *this,int param_1,_Ios_Openmode param_2)

{
  uint uVar1;
  FILE *__stream;
  
  uVar1 = (param_2 & (_S_trunc|_S_out|_S_in|_S_bin|_S_app)) - _S_app;
  if (((uVar1 < 0x3c) && (*(char **)(CSWTCH_106 + uVar1 * 4) != (char *)0x0)) &&
     (this->_M_cfile == (__c_file *)0x0)) {
    __stream = fdopen(param_1,*(char **)(CSWTCH_106 + uVar1 * 4));
    this->_M_cfile = (__c_file *)__stream;
    if (__stream != (FILE *)0x0) {
      this->_M_cfile_created = true;
      if (param_1 != 0) {
        return this;
      }
      setvbuf(__stream,(char *)0x0,2,0);
      return this;
    }
  }
  return (__basic_file<char> *)0x0;
}

```

---

## xsgetn

```asm
// === 087229c0 std::__basic_file<char>::xsgetn  [0x087229c0-0x8722a1f] ===
 87229c0:	55                   	push   %ebp
 87229c1:	89 e5                	mov    %esp,%ebp
 87229c3:	57                   	push   %edi
 87229c4:	56                   	push   %esi
 87229c5:	53                   	push   %ebx
 87229c6:	83 ec 1c             	sub    $0x1c,%esp
 87229c9:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87229cc:	8b 75 10             	mov    0x10(%ebp),%esi
 87229cf:	8b 55 08             	mov    0x8(%ebp),%edx
 87229d2:	8b 02                	mov    (%edx),%eax
 87229d4:	89 04 24             	mov    %eax,(%esp)
 87229d7:	e8 f4 bc 95 ff       	call   807e6d0 <fileno@plt>
 87229dc:	89 74 24 08          	mov    %esi,0x8(%esp)
 87229e0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87229e4:	89 04 24             	mov    %eax,(%esp)
 87229e7:	e8 74 b4 95 ff       	call   807de60 <read@plt>
 87229ec:	83 f8 ff             	cmp    $0xffffffff,%eax
 87229ef:	89 c3                	mov    %eax,%ebx
 87229f1:	74 0d                	je     8722a00 <_ZNSt12__basic_fileIcE6xsgetnEPci+0x40>
 87229f3:	83 c4 1c             	add    $0x1c,%esp
 87229f6:	89 d8                	mov    %ebx,%eax
 87229f8:	5b                   	pop    %ebx
 87229f9:	5e                   	pop    %esi
 87229fa:	5f                   	pop    %edi
 87229fb:	5d                   	pop    %ebp
 87229fc:	c3                   	ret
 87229fd:	8d 76 00             	lea    0x0(%esi),%esi
 8722a00:	e8 6b b3 95 ff       	call   807dd70 <__errno_location@plt>
 8722a05:	83 38 04             	cmpl   $0x4,(%eax)
 8722a08:	74 c5                	je     87229cf <_ZNSt12__basic_fileIcE6xsgetnEPci+0xf>
 8722a0a:	83 c4 1c             	add    $0x1c,%esp
 8722a0d:	89 d8                	mov    %ebx,%eax
 8722a0f:	5b                   	pop    %ebx
 8722a10:	5e                   	pop    %esi
 8722a11:	5f                   	pop    %edi
 8722a12:	5d                   	pop    %ebp
 8722a13:	c3                   	ret
 8722a14:	90                   	nop
 8722a15:	90                   	nop
 8722a16:	90                   	nop
 8722a17:	90                   	nop
 8722a18:	90                   	nop
 8722a19:	90                   	nop
 8722a1a:	90                   	nop
 8722a1b:	90                   	nop
 8722a1c:	90                   	nop
 8722a1d:	90                   	nop
 8722a1e:	90                   	nop
 8722a1f:	90                   	nop

```

```c
// std::__basic_file<char>::xsgetn @ 0x87229c0

/* std::__basic_file<char>::xsgetn(char*, int) */

ssize_t __thiscall
std::__basic_file<char>::xsgetn(__basic_file<char> *this,char *param_1,int param_2)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  
  do {
    __fd = fileno((FILE *)this->_M_cfile);
    sVar1 = ::read(__fd,param_1,param_2);
    if (sVar1 != -1) {
      return sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return -1;
}

```

---

## xsputn

```asm
// === 08722980 std::__basic_file<char>::xsputn  [0x08722980-0x87229bf] ===
 8722980:	55                   	push   %ebp
 8722981:	89 e5                	mov    %esp,%ebp
 8722983:	83 ec 18             	sub    $0x18,%esp
 8722986:	8b 45 08             	mov    0x8(%ebp),%eax
 8722989:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 872298c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 872298f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8722992:	8b 75 10             	mov    0x10(%ebp),%esi
 8722995:	8b 00                	mov    (%eax),%eax
 8722997:	89 04 24             	mov    %eax,(%esp)
 872299a:	e8 31 bd 95 ff       	call   807e6d0 <fileno@plt>
 872299f:	89 f1                	mov    %esi,%ecx
 87229a1:	89 da                	mov    %ebx,%edx
 87229a3:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87229a6:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87229a9:	89 ec                	mov    %ebp,%esp
 87229ab:	5d                   	pop    %ebp
 87229ac:	e9 8f fc ff ff       	jmp    8722640 <_ZN12_GLOBAL__N_1L6xwriteEiPKci>
 87229b1:	90                   	nop
 87229b2:	90                   	nop
 87229b3:	90                   	nop
 87229b4:	90                   	nop
 87229b5:	90                   	nop
 87229b6:	90                   	nop
 87229b7:	90                   	nop
 87229b8:	90                   	nop
 87229b9:	90                   	nop
 87229ba:	90                   	nop
 87229bb:	90                   	nop
 87229bc:	90                   	nop
 87229bd:	90                   	nop
 87229be:	90                   	nop
 87229bf:	90                   	nop

```

```c
// std::__basic_file<char>::xsputn @ 0x8722980

/* std::__basic_file<char>::xsputn(char const*, int) */

void __thiscall std::__basic_file<char>::xsputn(__basic_file<char> *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fileno((FILE *)this->_M_cfile);
  ::(anonymous_namespace)::xwrite(iVar1,param_1,param_2);
  return;
}

```

---

## xsputn_2

```asm
// === 087228d0 std::__basic_file<char>::xsputn_2  [0x087228d0-0x872297f] ===
 87228d0:	55                   	push   %ebp
 87228d1:	89 e5                	mov    %esp,%ebp
 87228d3:	57                   	push   %edi
 87228d4:	56                   	push   %esi
 87228d5:	53                   	push   %ebx
 87228d6:	83 ec 3c             	sub    $0x3c,%esp
 87228d9:	8b 45 08             	mov    0x8(%ebp),%eax
 87228dc:	8b 75 10             	mov    0x10(%ebp),%esi
 87228df:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87228e2:	8b 00                	mov    (%eax),%eax
 87228e4:	89 04 24             	mov    %eax,(%esp)
 87228e7:	e8 e4 bd 95 ff       	call   807e6d0 <fileno@plt>
 87228ec:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87228ef:	8b 45 18             	mov    0x18(%ebp),%eax
 87228f2:	01 f0                	add    %esi,%eax
 87228f4:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87228f7:	8b 45 14             	mov    0x14(%ebp),%eax
 87228fa:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 87228fd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8722900:	8b 45 18             	mov    0x18(%ebp),%eax
 8722903:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8722906:	eb 0e                	jmp    8722916 <_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i+0x46>
 8722908:	29 c3                	sub    %eax,%ebx
 872290a:	74 39                	je     8722945 <_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i+0x75>
 872290c:	89 c2                	mov    %eax,%edx
 872290e:	29 f2                	sub    %esi,%edx
 8722910:	79 46                	jns    8722958 <_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i+0x88>
 8722912:	01 c7                	add    %eax,%edi
 8722914:	29 c6                	sub    %eax,%esi
 8722916:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8722919:	89 44 24 04          	mov    %eax,0x4(%esp)
 872291d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8722920:	89 7d d8             	mov    %edi,-0x28(%ebp)
 8722923:	89 75 dc             	mov    %esi,-0x24(%ebp)
 8722926:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 872292d:	00 
 872292e:	89 04 24             	mov    %eax,(%esp)
 8722931:	e8 ca b4 95 ff       	call   807de00 <writev@plt>
 8722936:	83 f8 ff             	cmp    $0xffffffff,%eax
 8722939:	75 cd                	jne    8722908 <_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i+0x38>
 872293b:	e8 30 b4 95 ff       	call   807dd70 <__errno_location@plt>
 8722940:	83 38 04             	cmpl   $0x4,(%eax)
 8722943:	74 d1                	je     8722916 <_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i+0x46>
 8722945:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8722948:	83 c4 3c             	add    $0x3c,%esp
 872294b:	29 d8                	sub    %ebx,%eax
 872294d:	5b                   	pop    %ebx
 872294e:	5e                   	pop    %esi
 872294f:	5f                   	pop    %edi
 8722950:	5d                   	pop    %ebp
 8722951:	c3                   	ret
 8722952:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8722958:	8b 4d 18             	mov    0x18(%ebp),%ecx
 872295b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 872295e:	29 d1                	sub    %edx,%ecx
 8722960:	03 55 14             	add    0x14(%ebp),%edx
 8722963:	e8 d8 fc ff ff       	call   8722640 <_ZN12_GLOBAL__N_1L6xwriteEiPKci>
 8722968:	29 c3                	sub    %eax,%ebx
 872296a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 872296d:	83 c4 3c             	add    $0x3c,%esp
 8722970:	29 d8                	sub    %ebx,%eax
 8722972:	5b                   	pop    %ebx
 8722973:	5e                   	pop    %esi
 8722974:	5f                   	pop    %edi
 8722975:	5d                   	pop    %ebp
 8722976:	c3                   	ret
 8722977:	90                   	nop
 8722978:	90                   	nop
 8722979:	90                   	nop
 872297a:	90                   	nop
 872297b:	90                   	nop
 872297c:	90                   	nop
 872297d:	90                   	nop
 872297e:	90                   	nop
 872297f:	90                   	nop

```

```c
// std::__basic_file<char>::xsputn_2 @ 0x87228d0

/* std::__basic_file<char>::xsputn_2(char const*, int, char const*, int) */

int __thiscall
std::__basic_file<char>::xsputn_2
          (__basic_file<char> *this,char *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  iovec local_2c;
  char *local_24;
  int local_20;
  
  iVar1 = fileno((FILE *)this->_M_cfile);
  iVar2 = param_4 + param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar6 = iVar2;
  do {
    while( true ) {
      local_2c.iov_base = param_1;
      local_2c.iov_len = param_2;
      sVar3 = writev(iVar1,&local_2c,2);
      if (sVar3 == -1) break;
      iVar6 = iVar6 - sVar3;
      if (iVar6 == 0) goto LAB_08722945;
      iVar5 = sVar3 - param_2;
      if (-1 < iVar5) {
        iVar1 = ::(anonymous_namespace)::xwrite(iVar1,param_3 + iVar5,param_4 - iVar5);
        return iVar2 - (iVar6 - iVar1);
      }
      param_1 = param_1 + sVar3;
      param_2 = param_2 - sVar3;
    }
    piVar4 = __errno_location();
  } while (*piVar4 == 4);
LAB_08722945:
  return iVar2 - iVar6;
}

```

---

## ~__basic_file

```asm
// === 08722720 std::__basic_file<char>::~__basic_file  [0x08722720-0x872272f] ===
 8722720:	55                   	push   %ebp
 8722721:	89 e5                	mov    %esp,%ebp
 8722723:	83 ec 08             	sub    $0x8,%esp
 8722726:	c9                   	leave
 8722727:	e9 64 ff ff ff       	jmp    8722690 <_ZNSt12__basic_fileIcE5closeEv>
 872272c:	90                   	nop
 872272d:	90                   	nop
 872272e:	90                   	nop
 872272f:	90                   	nop

```

```c
// std::__basic_file<char>::~__basic_file @ 0x8722720

/* std::__basic_file<char>::~__basic_file() */

void __thiscall std::__basic_file<char>::~__basic_file(__basic_file<char> *this)

{
  close(this);
  return;
}

```

