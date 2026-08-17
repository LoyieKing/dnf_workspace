# std__istream

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## getline

```asm
// === 086e83c0 std::istream::getline  [0x086e83c0-0x86e85ff] ===
 86e83c0:	55                   	push   %ebp
 86e83c1:	89 e5                	mov    %esp,%ebp
 86e83c3:	57                   	push   %edi
 86e83c4:	56                   	push   %esi
 86e83c5:	53                   	push   %ebx
 86e83c6:	83 ec 5c             	sub    $0x5c,%esp
 86e83c9:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 86e83cd:	8b 75 08             	mov    0x8(%ebp),%esi
 86e83d0:	88 45 d4             	mov    %al,-0x2c(%ebp)
 86e83d3:	8d 45 e7             	lea    -0x19(%ebp),%eax
 86e83d6:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 86e83dd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86e83e4:	00 
 86e83e5:	89 74 24 04          	mov    %esi,0x4(%esp)
 86e83e9:	89 04 24             	mov    %eax,(%esp)
 86e83ec:	e8 6f c3 ff ff       	call   86e4760 <_ZNSi6sentryC1ERSib>
 86e83f1:	31 c9                	xor    %ecx,%ecx
 86e83f3:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 86e83f7:	75 4f                	jne    86e8448 <_ZNSi7getlineEPcic+0x88>
 86e83f9:	8b 7d 10             	mov    0x10(%ebp),%edi
 86e83fc:	85 ff                	test   %edi,%edi
 86e83fe:	7e 06                	jle    86e8406 <_ZNSi7getlineEPcic+0x46>
 86e8400:	8b 45 0c             	mov    0xc(%ebp),%eax
 86e8403:	c6 00 00             	movb   $0x0,(%eax)
 86e8406:	8b 5e 04             	mov    0x4(%esi),%ebx
 86e8409:	85 db                	test   %ebx,%ebx
 86e840b:	75 2b                	jne    86e8438 <_ZNSi7getlineEPcic+0x78>
 86e840d:	83 c9 04             	or     $0x4,%ecx
 86e8410:	8b 06                	mov    (%esi),%eax
 86e8412:	8b 40 f4             	mov    -0xc(%eax),%eax
 86e8415:	8d 04 06             	lea    (%esi,%eax,1),%eax
 86e8418:	0b 48 14             	or     0x14(%eax),%ecx
 86e841b:	89 04 24             	mov    %eax,(%esp)
 86e841e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86e8422:	e8 79 89 ff ff       	call   86e0da0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate>
 86e8427:	83 c4 5c             	add    $0x5c,%esp
 86e842a:	89 f0                	mov    %esi,%eax
 86e842c:	5b                   	pop    %ebx
 86e842d:	5e                   	pop    %esi
 86e842e:	5f                   	pop    %edi
 86e842f:	5d                   	pop    %ebp
 86e8430:	c3                   	ret
 86e8431:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86e8438:	85 c9                	test   %ecx,%ecx
 86e843a:	75 d4                	jne    86e8410 <_ZNSi7getlineEPcic+0x50>
 86e843c:	83 c4 5c             	add    $0x5c,%esp
 86e843f:	89 f0                	mov    %esi,%eax
 86e8441:	5b                   	pop    %ebx
 86e8442:	5e                   	pop    %esi
 86e8443:	5f                   	pop    %edi
 86e8444:	5d                   	pop    %ebp
 86e8445:	c3                   	ret
 86e8446:	66 90                	xchg   %ax,%ax
 86e8448:	8b 06                	mov    (%esi),%eax
 86e844a:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 86e844e:	8b 40 f4             	mov    -0xc(%eax),%eax
 86e8451:	89 55 d0             	mov    %edx,-0x30(%ebp)
 86e8454:	8b 5c 06 78          	mov    0x78(%esi,%eax,1),%ebx
 86e8458:	8b 43 08             	mov    0x8(%ebx),%eax
 86e845b:	3b 43 0c             	cmp    0xc(%ebx),%eax
 86e845e:	0f 83 3f 01 00 00    	jae    86e85a3 <_ZNSi7getlineEPcic+0x1e3>
 86e8464:	0f b6 00             	movzbl (%eax),%eax
 86e8467:	0f be 4d d4          	movsbl -0x2c(%ebp),%ecx
 86e846b:	8b 7e 04             	mov    0x4(%esi),%edi
 86e846e:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 86e8471:	e9 97 00 00 00       	jmp    86e850d <_ZNSi7getlineEPcic+0x14d>
 86e8476:	66 90                	xchg   %ax,%ax
 86e8478:	83 f8 ff             	cmp    $0xffffffff,%eax
 86e847b:	0f 84 f7 00 00 00    	je     86e8578 <_ZNSi7getlineEPcic+0x1b8>
 86e8481:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 86e8484:	0f 84 a6 00 00 00    	je     86e8530 <_ZNSi7getlineEPcic+0x170>
 86e848a:	8b 53 08             	mov    0x8(%ebx),%edx
 86e848d:	f7 d7                	not    %edi
 86e848f:	8b 4b 0c             	mov    0xc(%ebx),%ecx
 86e8492:	29 d1                	sub    %edx,%ecx
 86e8494:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 86e8497:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86e849a:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 86e849d:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 86e84a0:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 86e84a3:	39 f9                	cmp    %edi,%ecx
 86e84a5:	7e 03                	jle    86e84aa <_ZNSi7getlineEPcic+0xea>
 86e84a7:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 86e84aa:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 86e84ae:	0f 8e 94 00 00 00    	jle    86e8548 <_ZNSi7getlineEPcic+0x188>
 86e84b4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86e84b7:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 86e84ba:	89 14 24             	mov    %edx,(%esp)
 86e84bd:	89 55 cc             	mov    %edx,-0x34(%ebp)
 86e84c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86e84c4:	89 7c 24 08          	mov    %edi,0x8(%esp)
 86e84c8:	e8 f3 59 99 ff       	call   807dec0 <memchr@plt>
 86e84cd:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86e84d0:	85 c0                	test   %eax,%eax
 86e84d2:	74 05                	je     86e84d9 <_ZNSi7getlineEPcic+0x119>
 86e84d4:	29 d0                	sub    %edx,%eax
 86e84d6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86e84d9:	8b 7d 0c             	mov    0xc(%ebp),%edi
 86e84dc:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 86e84df:	89 54 24 04          	mov    %edx,0x4(%esp)
 86e84e3:	89 3c 24             	mov    %edi,(%esp)
 86e84e6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86e84ea:	e8 b1 53 99 ff       	call   807d8a0 <memcpy@plt>
 86e84ef:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86e84f2:	01 c7                	add    %eax,%edi
 86e84f4:	89 7d 0c             	mov    %edi,0xc(%ebp)
 86e84f7:	8b 7e 04             	mov    0x4(%esi),%edi
 86e84fa:	01 43 08             	add    %eax,0x8(%ebx)
 86e84fd:	01 c7                	add    %eax,%edi
 86e84ff:	8b 43 08             	mov    0x8(%ebx),%eax
 86e8502:	3b 43 0c             	cmp    0xc(%ebx),%eax
 86e8505:	89 7e 04             	mov    %edi,0x4(%esi)
 86e8508:	73 78                	jae    86e8582 <_ZNSi7getlineEPcic+0x1c2>
 86e850a:	0f b6 00             	movzbl (%eax),%eax
 86e850d:	8d 57 01             	lea    0x1(%edi),%edx
 86e8510:	3b 55 10             	cmp    0x10(%ebp),%edx
 86e8513:	0f 8c 5f ff ff ff    	jl     86e8478 <_ZNSi7getlineEPcic+0xb8>
 86e8519:	83 f8 ff             	cmp    $0xffffffff,%eax
 86e851c:	74 5a                	je     86e8578 <_ZNSi7getlineEPcic+0x1b8>
 86e851e:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 86e8521:	b9 04 00 00 00       	mov    $0x4,%ecx
 86e8526:	0f 85 cd fe ff ff    	jne    86e83f9 <_ZNSi7getlineEPcic+0x39>
 86e852c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86e8530:	89 56 04             	mov    %edx,0x4(%esi)
 86e8533:	89 1c 24             	mov    %ebx,(%esp)
 86e8536:	e8 25 da 01 00       	call   8705f60 <_ZNSt15basic_streambufIcSt11char_traitsIcEE6sbumpcEv>
 86e853b:	31 c9                	xor    %ecx,%ecx
 86e853d:	e9 b7 fe ff ff       	jmp    86e83f9 <_ZNSi7getlineEPcic+0x39>
 86e8542:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86e8548:	8b 55 0c             	mov    0xc(%ebp),%edx
 86e854b:	88 02                	mov    %al,(%edx)
 86e854d:	8b 43 08             	mov    0x8(%ebx),%eax
 86e8550:	83 c2 01             	add    $0x1,%edx
 86e8553:	83 46 04 01          	addl   $0x1,0x4(%esi)
 86e8557:	3b 43 0c             	cmp    0xc(%ebx),%eax
 86e855a:	89 55 0c             	mov    %edx,0xc(%ebp)
 86e855d:	73 2d                	jae    86e858c <_ZNSi7getlineEPcic+0x1cc>
 86e855f:	83 c0 01             	add    $0x1,%eax
 86e8562:	89 43 08             	mov    %eax,0x8(%ebx)
 86e8565:	3b 43 0c             	cmp    0xc(%ebx),%eax
 86e8568:	73 18                	jae    86e8582 <_ZNSi7getlineEPcic+0x1c2>
 86e856a:	0f b6 00             	movzbl (%eax),%eax
 86e856d:	8b 7e 04             	mov    0x4(%esi),%edi
 86e8570:	eb 9b                	jmp    86e850d <_ZNSi7getlineEPcic+0x14d>
 86e8572:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86e8578:	b9 02 00 00 00       	mov    $0x2,%ecx
 86e857d:	e9 77 fe ff ff       	jmp    86e83f9 <_ZNSi7getlineEPcic+0x39>
 86e8582:	8b 03                	mov    (%ebx),%eax
 86e8584:	89 1c 24             	mov    %ebx,(%esp)
 86e8587:	ff 50 24             	call   *0x24(%eax)
 86e858a:	eb e1                	jmp    86e856d <_ZNSi7getlineEPcic+0x1ad>
 86e858c:	8b 03                	mov    (%ebx),%eax
 86e858e:	89 1c 24             	mov    %ebx,(%esp)
 86e8591:	ff 50 28             	call   *0x28(%eax)
 86e8594:	89 c2                	mov    %eax,%edx
 86e8596:	83 c8 ff             	or     $0xffffffff,%eax
 86e8599:	83 fa ff             	cmp    $0xffffffff,%edx
 86e859c:	74 cf                	je     86e856d <_ZNSi7getlineEPcic+0x1ad>
 86e859e:	8b 43 08             	mov    0x8(%ebx),%eax
 86e85a1:	eb c2                	jmp    86e8565 <_ZNSi7getlineEPcic+0x1a5>
 86e85a3:	8b 03                	mov    (%ebx),%eax
 86e85a5:	89 1c 24             	mov    %ebx,(%esp)
 86e85a8:	ff 50 24             	call   *0x24(%eax)
 86e85ab:	e9 b7 fe ff ff       	jmp    86e8467 <_ZNSi7getlineEPcic+0xa7>
 86e85b0:	83 fa 02             	cmp    $0x2,%edx
 86e85b3:	74 21                	je     86e85d6 <_ZNSi7getlineEPcic+0x216>
 86e85b5:	89 04 24             	mov    %eax,(%esp)
 86e85b8:	e8 23 d7 03 00       	call   8725ce0 <__cxa_begin_catch>
 86e85bd:	8b 06                	mov    (%esi),%eax
 86e85bf:	8b 40 f4             	mov    -0xc(%eax),%eax
 86e85c2:	8d 04 06             	lea    (%esi,%eax,1),%eax
 86e85c5:	e8 06 ee ff ff       	call   86e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>
 86e85ca:	e8 61 d6 03 00       	call   8725c30 <__cxa_end_catch>
 86e85cf:	31 c9                	xor    %ecx,%ecx
 86e85d1:	e9 23 fe ff ff       	jmp    86e83f9 <_ZNSi7getlineEPcic+0x39>
 86e85d6:	89 04 24             	mov    %eax,(%esp)
 86e85d9:	e8 02 d7 03 00       	call   8725ce0 <__cxa_begin_catch>
 86e85de:	8b 06                	mov    (%esi),%eax
 86e85e0:	03 70 f4             	add    -0xc(%eax),%esi
 86e85e3:	89 f0                	mov    %esi,%eax
 86e85e5:	e8 e6 ed ff ff       	call   86e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>
 86e85ea:	e8 f1 c5 03 00       	call   8724be0 <__cxa_rethrow>
 86e85ef:	89 c3                	mov    %eax,%ebx
 86e85f1:	e8 3a d6 03 00       	call   8725c30 <__cxa_end_catch>
 86e85f6:	89 1c 24             	mov    %ebx,(%esp)
 86e85f9:	e8 52 b1 3f 00       	call   8ae3750 <_Unwind_Resume>
 86e85fe:	eb ef                	jmp    86e85ef <_ZNSi7getlineEPcic+0x22f>

```

```c
// std::istream::getline @ 0x86e83c0

/* std::istream::getline(char*, int, char) */

istream * __thiscall std::istream::getline(istream *this,char *param_1,int param_2,char param_3)

{
  streambuf *this_00;
  void *__s;
  byte *pbVar1;
  uint uVar2;
  void *pvVar3;
  byte *pbVar4;
  int iVar5;
  _Ios_Iostate _Var6;
  uint uVar7;
  size_t local_40;
  sentry local_1d [13];
  
  *(undefined4 *)(this + 4) = 0;
  sentry::sentry(local_1d,this,true);
  _Var6 = _S_goodbit;
  if (local_1d[0] != (sentry)0x0) {
    this_00 = *(streambuf **)(this + *(int *)(*(int *)this + -0xc) + 0x78);
    if (*(byte **)(this_00 + 8) < *(byte **)(this_00 + 0xc)) {
      uVar2 = (uint)**(byte **)(this_00 + 8);
    }
    else {
      uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
    }
    uVar7 = *(uint *)(this + 4);
    while ((int)(uVar7 + 1) < param_2) {
      if (uVar2 == 0xffffffff) goto LAB_086e8578;
      if (uVar2 == (byte)param_3) goto LAB_086e8530;
      __s = *(void **)(this_00 + 8);
      local_40 = ~uVar7 + param_2;
      if (*(int *)(this_00 + 0xc) - (int)__s < (int)(~uVar7 + param_2)) {
        local_40 = *(int *)(this_00 + 0xc) - (int)__s;
      }
      if ((int)local_40 < 2) {
        *param_1 = (char)uVar2;
        uVar2 = *(uint *)(this_00 + 8);
        param_1 = param_1 + 1;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        if (uVar2 < *(uint *)(this_00 + 0xc)) {
          pbVar4 = (byte *)(uVar2 + 1);
          *(byte **)(this_00 + 8) = pbVar4;
LAB_086e8565:
          if (*(byte **)(this_00 + 0xc) <= pbVar4) goto LAB_086e8582;
          uVar2 = (uint)*pbVar4;
        }
        else {
          iVar5 = (**(code **)(*(int *)this_00 + 0x28))(this_00);
          uVar2 = 0xffffffff;
          if (iVar5 != -1) {
            pbVar4 = *(byte **)(this_00 + 8);
            goto LAB_086e8565;
          }
        }
LAB_086e856d:
        uVar7 = *(uint *)(this + 4);
      }
      else {
        pvVar3 = memchr(__s,(int)param_3,local_40);
        if (pvVar3 != (void *)0x0) {
          local_40 = (int)pvVar3 - (int)__s;
        }
        memcpy(param_1,__s,local_40);
        param_1 = param_1 + local_40;
        iVar5 = *(int *)(this + 4);
        *(size_t *)(this_00 + 8) = *(int *)(this_00 + 8) + local_40;
        uVar7 = iVar5 + local_40;
        pbVar1 = *(byte **)(this_00 + 8);
        pbVar4 = *(byte **)(this_00 + 0xc);
        *(uint *)(this + 4) = uVar7;
        if (pbVar4 <= pbVar1) {
LAB_086e8582:
          uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
          goto LAB_086e856d;
        }
        uVar2 = (uint)*pbVar1;
      }
    }
    if (uVar2 == 0xffffffff) {
LAB_086e8578:
      _Var6 = _S_eofbit;
    }
    else {
      _Var6 = _S_failbit;
      if (uVar2 == (byte)param_3) {
LAB_086e8530:
        *(uint *)(this + 4) = uVar7 + 1;
                    /* try { // try from 086e8536 to 086e85aa has its CatchHandler @ 086e85b0 */
        streambuf::sbumpc(this_00);
        _Var6 = _S_goodbit;
      }
    }
  }
  if (0 < param_2) {
    *param_1 = '\0';
  }
  if (*(int *)(this + 4) == 0) {
    _Var6 = _Var6 | _S_failbit;
  }
  else if (_Var6 == _S_goodbit) {
    return this;
  }
  ios::clear((ios *)(this + *(int *)(*(int *)this + -0xc)),
             _Var6 | *(_Ios_Iostate *)((ios *)(this + *(int *)(*(int *)this + -0xc)) + 0x14));
  return this;
}

```

---

## ignore

```asm
// === 086e8150 std::istream::ignore  [0x086e8150-0x86e83bf] ===
 86e8150:	55                   	push   %ebp
 86e8151:	89 e5                	mov    %esp,%ebp
 86e8153:	57                   	push   %edi
 86e8154:	56                   	push   %esi
 86e8155:	53                   	push   %ebx
 86e8156:	83 ec 3c             	sub    $0x3c,%esp
 86e8159:	8b 75 0c             	mov    0xc(%ebp),%esi
 86e815c:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 86e8160:	0f 84 5d 01 00 00    	je     86e82c3 <_ZNSi6ignoreEii+0x173>
 86e8166:	8b 55 08             	mov    0x8(%ebp),%edx
 86e8169:	8d 45 e7             	lea    -0x19(%ebp),%eax
 86e816c:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 86e8173:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86e817a:	00 
 86e817b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86e817f:	89 04 24             	mov    %eax,(%esp)
 86e8182:	e8 d9 c5 ff ff       	call   86e4760 <_ZNSi6sentryC1ERSib>
 86e8187:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 86e818b:	0f 84 cf 00 00 00    	je     86e8260 <_ZNSi6ignoreEii+0x110>
 86e8191:	85 f6                	test   %esi,%esi
 86e8193:	0f 8e c7 00 00 00    	jle    86e8260 <_ZNSi6ignoreEii+0x110>
 86e8199:	8b 55 08             	mov    0x8(%ebp),%edx
 86e819c:	0f b6 7d 10          	movzbl 0x10(%ebp),%edi
 86e81a0:	8b 02                	mov    (%edx),%eax
 86e81a2:	8b 40 f4             	mov    -0xc(%eax),%eax
 86e81a5:	8b 5c 02 78          	mov    0x78(%edx,%eax,1),%ebx
 86e81a9:	8b 43 08             	mov    0x8(%ebx),%eax
 86e81ac:	3b 43 0c             	cmp    0xc(%ebx),%eax
 86e81af:	0f 83 c7 01 00 00    	jae    86e837c <_ZNSi6ignoreEii+0x22c>
 86e81b5:	0f b6 00             	movzbl (%eax),%eax
 86e81b8:	8b 55 08             	mov    0x8(%ebp),%edx
 86e81bb:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 86e81bf:	8b 4a 04             	mov    0x4(%edx),%ecx
 86e81c2:	89 fa                	mov    %edi,%edx
 86e81c4:	0f be fa             	movsbl %dl,%edi
 86e81c7:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 86e81ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86e81d0:	39 ce                	cmp    %ecx,%esi
 86e81d2:	7e 66                	jle    86e823a <_ZNSi6ignoreEii+0xea>
 86e81d4:	83 f8 ff             	cmp    $0xffffffff,%eax
 86e81d7:	74 61                	je     86e823a <_ZNSi6ignoreEii+0xea>
 86e81d9:	39 45 10             	cmp    %eax,0x10(%ebp)
 86e81dc:	74 5c                	je     86e823a <_ZNSi6ignoreEii+0xea>
 86e81de:	8b 53 08             	mov    0x8(%ebx),%edx
 86e81e1:	89 f7                	mov    %esi,%edi
 86e81e3:	8b 43 0c             	mov    0xc(%ebx),%eax
 86e81e6:	29 cf                	sub    %ecx,%edi
 86e81e8:	29 d0                	sub    %edx,%eax
 86e81ea:	39 c7                	cmp    %eax,%edi
 86e81ec:	7e 02                	jle    86e81f0 <_ZNSi6ignoreEii+0xa0>
 86e81ee:	89 c7                	mov    %eax,%edi
 86e81f0:	83 ff 01             	cmp    $0x1,%edi
 86e81f3:	0f 8e 9f 00 00 00    	jle    86e8298 <_ZNSi6ignoreEii+0x148>
 86e81f9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86e81fc:	89 14 24             	mov    %edx,(%esp)
 86e81ff:	89 7c 24 08          	mov    %edi,0x8(%esp)
 86e8203:	89 55 cc             	mov    %edx,-0x34(%ebp)
 86e8206:	89 44 24 04          	mov    %eax,0x4(%esp)
 86e820a:	e8 b1 5c 99 ff       	call   807dec0 <memchr@plt>
 86e820f:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86e8212:	85 c0                	test   %eax,%eax
 86e8214:	74 04                	je     86e821a <_ZNSi6ignoreEii+0xca>
 86e8216:	89 c7                	mov    %eax,%edi
 86e8218:	29 d7                	sub    %edx,%edi
 86e821a:	8b 45 08             	mov    0x8(%ebp),%eax
 86e821d:	01 fa                	add    %edi,%edx
 86e821f:	89 f9                	mov    %edi,%ecx
 86e8221:	89 53 08             	mov    %edx,0x8(%ebx)
 86e8224:	03 48 04             	add    0x4(%eax),%ecx
 86e8227:	3b 53 0c             	cmp    0xc(%ebx),%edx
 86e822a:	89 48 04             	mov    %ecx,0x4(%eax)
 86e822d:	0f 83 fb 00 00 00    	jae    86e832e <_ZNSi6ignoreEii+0x1de>
 86e8233:	39 ce                	cmp    %ecx,%esi
 86e8235:	0f b6 02             	movzbl (%edx),%eax
 86e8238:	7f 9a                	jg     86e81d4 <_ZNSi6ignoreEii+0x84>
 86e823a:	81 fe ff ff ff 7f    	cmp    $0x7fffffff,%esi
 86e8240:	74 2e                	je     86e8270 <_ZNSi6ignoreEii+0x120>
 86e8242:	80 7d d3 00          	cmpb   $0x0,-0x2d(%ebp)
 86e8246:	0f 85 94 00 00 00    	jne    86e82e0 <_ZNSi6ignoreEii+0x190>
 86e824c:	83 f8 ff             	cmp    $0xffffffff,%eax
 86e824f:	0f 84 ba 00 00 00    	je     86e830f <_ZNSi6ignoreEii+0x1bf>
 86e8255:	39 45 10             	cmp    %eax,0x10(%ebp)
 86e8258:	0f 84 91 00 00 00    	je     86e82ef <_ZNSi6ignoreEii+0x19f>
 86e825e:	66 90                	xchg   %ax,%ax
 86e8260:	8b 45 08             	mov    0x8(%ebp),%eax
 86e8263:	83 c4 3c             	add    $0x3c,%esp
 86e8266:	5b                   	pop    %ebx
 86e8267:	5e                   	pop    %esi
 86e8268:	5f                   	pop    %edi
 86e8269:	5d                   	pop    %ebp
 86e826a:	c3                   	ret
 86e826b:	90                   	nop
 86e826c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86e8270:	83 f8 ff             	cmp    $0xffffffff,%eax
 86e8273:	74 cd                	je     86e8242 <_ZNSi6ignoreEii+0xf2>
 86e8275:	39 45 10             	cmp    %eax,0x10(%ebp)
 86e8278:	74 c8                	je     86e8242 <_ZNSi6ignoreEii+0xf2>
 86e827a:	8b 55 08             	mov    0x8(%ebp),%edx
 86e827d:	b9 00 00 00 80       	mov    $0x80000000,%ecx
 86e8282:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 86e8286:	c7 42 04 00 00 00 80 	movl   $0x80000000,0x4(%edx)
 86e828d:	e9 3e ff ff ff       	jmp    86e81d0 <_ZNSi6ignoreEii+0x80>
 86e8292:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86e8298:	8b 45 08             	mov    0x8(%ebp),%eax
 86e829b:	83 c1 01             	add    $0x1,%ecx
 86e829e:	3b 53 0c             	cmp    0xc(%ebx),%edx
 86e82a1:	89 48 04             	mov    %ecx,0x4(%eax)
 86e82a4:	0f 83 b4 00 00 00    	jae    86e835e <_ZNSi6ignoreEii+0x20e>
 86e82aa:	83 c2 01             	add    $0x1,%edx
 86e82ad:	89 53 08             	mov    %edx,0x8(%ebx)
 86e82b0:	39 53 0c             	cmp    %edx,0xc(%ebx)
 86e82b3:	76 79                	jbe    86e832e <_ZNSi6ignoreEii+0x1de>
 86e82b5:	0f b6 02             	movzbl (%edx),%eax
 86e82b8:	8b 55 08             	mov    0x8(%ebp),%edx
 86e82bb:	8b 4a 04             	mov    0x4(%edx),%ecx
 86e82be:	e9 0d ff ff ff       	jmp    86e81d0 <_ZNSi6ignoreEii+0x80>
 86e82c3:	8b 45 08             	mov    0x8(%ebp),%eax
 86e82c6:	89 74 24 04          	mov    %esi,0x4(%esp)
 86e82ca:	89 04 24             	mov    %eax,(%esp)
 86e82cd:	e8 ae df 03 00       	call   8726280 <_ZNSi6ignoreEi>
 86e82d2:	89 45 08             	mov    %eax,0x8(%ebp)
 86e82d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86e82d8:	83 c4 3c             	add    $0x3c,%esp
 86e82db:	5b                   	pop    %ebx
 86e82dc:	5e                   	pop    %esi
 86e82dd:	5f                   	pop    %edi
 86e82de:	5d                   	pop    %ebp
 86e82df:	c3                   	ret
 86e82e0:	8b 55 08             	mov    0x8(%ebp),%edx
 86e82e3:	c7 42 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%edx)
 86e82ea:	e9 5d ff ff ff       	jmp    86e824c <_ZNSi6ignoreEii+0xfc>
 86e82ef:	8b 55 08             	mov    0x8(%ebp),%edx
 86e82f2:	8b 42 04             	mov    0x4(%edx),%eax
 86e82f5:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 86e82fa:	74 06                	je     86e8302 <_ZNSi6ignoreEii+0x1b2>
 86e82fc:	83 c0 01             	add    $0x1,%eax
 86e82ff:	89 42 04             	mov    %eax,0x4(%edx)
 86e8302:	89 1c 24             	mov    %ebx,(%esp)
 86e8305:	e8 56 dc 01 00       	call   8705f60 <_ZNSt15basic_streambufIcSt11char_traitsIcEE6sbumpcEv>
 86e830a:	e9 51 ff ff ff       	jmp    86e8260 <_ZNSi6ignoreEii+0x110>
 86e830f:	8b 55 08             	mov    0x8(%ebp),%edx
 86e8312:	8b 02                	mov    (%edx),%eax
 86e8314:	03 50 f4             	add    -0xc(%eax),%edx
 86e8317:	8b 42 14             	mov    0x14(%edx),%eax
 86e831a:	89 14 24             	mov    %edx,(%esp)
 86e831d:	83 c8 02             	or     $0x2,%eax
 86e8320:	89 44 24 04          	mov    %eax,0x4(%esp)
 86e8324:	e8 77 8a ff ff       	call   86e0da0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate>
 86e8329:	e9 32 ff ff ff       	jmp    86e8260 <_ZNSi6ignoreEii+0x110>
 86e832e:	8b 03                	mov    (%ebx),%eax
 86e8330:	89 1c 24             	mov    %ebx,(%esp)
 86e8333:	ff 50 24             	call   *0x24(%eax)
 86e8336:	eb 80                	jmp    86e82b8 <_ZNSi6ignoreEii+0x168>
 86e8338:	83 fa 02             	cmp    $0x2,%edx
 86e833b:	74 5b                	je     86e8398 <_ZNSi6ignoreEii+0x248>
 86e833d:	89 04 24             	mov    %eax,(%esp)
 86e8340:	e8 9b d9 03 00       	call   8725ce0 <__cxa_begin_catch>
 86e8345:	8b 55 08             	mov    0x8(%ebp),%edx
 86e8348:	8b 02                	mov    (%edx),%eax
 86e834a:	8b 40 f4             	mov    -0xc(%eax),%eax
 86e834d:	01 d0                	add    %edx,%eax
 86e834f:	e8 7c f0 ff ff       	call   86e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>
 86e8354:	e8 d7 d8 03 00       	call   8725c30 <__cxa_end_catch>
 86e8359:	e9 02 ff ff ff       	jmp    86e8260 <_ZNSi6ignoreEii+0x110>
 86e835e:	8b 03                	mov    (%ebx),%eax
 86e8360:	89 1c 24             	mov    %ebx,(%esp)
 86e8363:	ff 50 28             	call   *0x28(%eax)
 86e8366:	89 c2                	mov    %eax,%edx
 86e8368:	83 c8 ff             	or     $0xffffffff,%eax
 86e836b:	83 fa ff             	cmp    $0xffffffff,%edx
 86e836e:	0f 84 44 ff ff ff    	je     86e82b8 <_ZNSi6ignoreEii+0x168>
 86e8374:	8b 53 08             	mov    0x8(%ebx),%edx
 86e8377:	e9 34 ff ff ff       	jmp    86e82b0 <_ZNSi6ignoreEii+0x160>
 86e837c:	8b 03                	mov    (%ebx),%eax
 86e837e:	89 1c 24             	mov    %ebx,(%esp)
 86e8381:	ff 50 24             	call   *0x24(%eax)
 86e8384:	e9 2f fe ff ff       	jmp    86e81b8 <_ZNSi6ignoreEii+0x68>
 86e8389:	89 c3                	mov    %eax,%ebx
 86e838b:	e8 a0 d8 03 00       	call   8725c30 <__cxa_end_catch>
 86e8390:	89 1c 24             	mov    %ebx,(%esp)
 86e8393:	e8 b8 b3 3f 00       	call   8ae3750 <_Unwind_Resume>
 86e8398:	89 04 24             	mov    %eax,(%esp)
 86e839b:	e8 40 d9 03 00       	call   8725ce0 <__cxa_begin_catch>
 86e83a0:	8b 55 08             	mov    0x8(%ebp),%edx
 86e83a3:	8b 02                	mov    (%edx),%eax
 86e83a5:	8b 40 f4             	mov    -0xc(%eax),%eax
 86e83a8:	01 d0                	add    %edx,%eax
 86e83aa:	e8 21 f0 ff ff       	call   86e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>
 86e83af:	e8 2c c8 03 00       	call   8724be0 <__cxa_rethrow>
 86e83b4:	eb d3                	jmp    86e8389 <_ZNSi6ignoreEii+0x239>
 86e83b6:	90                   	nop
 86e83b7:	90                   	nop
 86e83b8:	90                   	nop
 86e83b9:	90                   	nop
 86e83ba:	90                   	nop
 86e83bb:	90                   	nop
 86e83bc:	90                   	nop
 86e83bd:	90                   	nop
 86e83be:	90                   	nop
 86e83bf:	90                   	nop

```

```c
// std::istream::ignore @ 0x86e8150

/* std::istream::ignore(int, int) */

istream * __thiscall std::istream::ignore(istream *this,int param_1,int param_2)

{
  streambuf *this_00;
  void *__s;
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  istream *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t __n;
  sentry local_1d [13];
  
  if (param_2 == -1) {
    piVar4 = (istream *)ignore(this,param_1);
    return piVar4;
  }
  *(undefined4 *)(this + 4) = 0;
  sentry::sentry(local_1d,this,true);
  if ((local_1d[0] == (sentry)0x0) || (param_1 < 1)) {
    return this;
  }
  this_00 = *(streambuf **)(this + *(int *)(*(int *)this + -0xc) + 0x78);
  if (*(byte **)(this_00 + 8) < *(byte **)(this_00 + 0xc)) {
    uVar2 = (uint)**(byte **)(this_00 + 8);
  }
  else {
    uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
  }
  bVar1 = false;
  iVar5 = *(int *)(this + 4);
  do {
    while( true ) {
      while (((param_1 <= iVar5 || (uVar2 == 0xffffffff)) || (param_2 == uVar2))) {
        if (((param_1 != 0x7fffffff) || (uVar2 == 0xffffffff)) || (param_2 == uVar2)) {
          if (bVar1) {
            *(undefined4 *)(this + 4) = 0x7fffffff;
          }
          if (uVar2 != 0xffffffff) {
            if (param_2 != uVar2) {
              return this;
            }
            if (*(int *)(this + 4) != 0x7fffffff) {
              *(int *)(this + 4) = *(int *)(this + 4) + 1;
            }
                    /* try { // try from 086e8305 to 086e8309 has its CatchHandler @ 086e8338 */
            streambuf::sbumpc(this_00);
            return this;
          }
          ios::clear((ios *)(this + *(int *)(*(int *)this + -0xc)),
                     *(_Ios_Iostate *)((ios *)(this + *(int *)(*(int *)this + -0xc)) + 0x14) |
                     _S_eofbit);
          return this;
        }
        iVar5 = -0x80000000;
        bVar1 = true;
        *(undefined4 *)(this + 4) = 0x80000000;
      }
      __s = *(void **)(this_00 + 8);
      __n = param_1 - iVar5;
      if (*(int *)(this_00 + 0xc) - (int)__s < param_1 - iVar5) {
        __n = *(int *)(this_00 + 0xc) - (int)__s;
      }
      if (1 < (int)__n) break;
      pvVar3 = *(void **)(this_00 + 0xc);
      *(int *)(this + 4) = iVar5 + 1;
      if (__s < pvVar3) {
        pbVar7 = (byte *)((int)__s + 1);
        *(byte **)(this_00 + 8) = pbVar7;
LAB_086e82b0:
        if (*(byte **)(this_00 + 0xc) <= pbVar7) goto LAB_086e832e;
        uVar2 = (uint)*pbVar7;
      }
      else {
                    /* try { // try from 086e8363 to 086e8383 has its CatchHandler @ 086e8338 */
        iVar5 = (**(code **)(*(int *)this_00 + 0x28))(this_00);
        uVar2 = 0xffffffff;
        if (iVar5 != -1) {
          pbVar7 = *(byte **)(this_00 + 8);
          goto LAB_086e82b0;
        }
      }
LAB_086e82b8:
      iVar5 = *(int *)(this + 4);
    }
    pvVar3 = memchr(__s,(int)(char)param_2,__n);
    if (pvVar3 != (void *)0x0) {
      __n = (int)pvVar3 - (int)__s;
    }
    pbVar6 = (byte *)((int)__s + __n);
    *(byte **)(this_00 + 8) = pbVar6;
    iVar5 = __n + *(int *)(this + 4);
    pbVar7 = *(byte **)(this_00 + 0xc);
    *(int *)(this + 4) = iVar5;
    if (pbVar7 <= pbVar6) {
LAB_086e832e:
                    /* try { // try from 086e8333 to 086e8335 has its CatchHandler @ 086e8338 */
      uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
      goto LAB_086e82b8;
    }
    uVar2 = (uint)*pbVar6;
  } while( true );
}

```

---

## ignore_08726280

```asm
// === 08726280 std::istream::ignore  [0x08726280-0x872646f] ===
 8726280:	55                   	push   %ebp
 8726281:	89 e5                	mov    %esp,%ebp
 8726283:	57                   	push   %edi
 8726284:	56                   	push   %esi
 8726285:	53                   	push   %ebx
 8726286:	83 ec 3c             	sub    $0x3c,%esp
 8726289:	8b 75 0c             	mov    0xc(%ebp),%esi
 872628c:	83 fe 01             	cmp    $0x1,%esi
 872628f:	0f 84 0a 01 00 00    	je     872639f <_ZNSi6ignoreEi+0x11f>
 8726295:	8b 55 08             	mov    0x8(%ebp),%edx
 8726298:	8d 45 e7             	lea    -0x19(%ebp),%eax
 872629b:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 87262a2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87262a9:	00 
 87262aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 87262ae:	89 04 24             	mov    %eax,(%esp)
 87262b1:	e8 aa e4 fb ff       	call   86e4760 <_ZNSi6sentryC1ERSib>
 87262b6:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 87262ba:	0f 84 8d 00 00 00    	je     872634d <_ZNSi6ignoreEi+0xcd>
 87262c0:	85 f6                	test   %esi,%esi
 87262c2:	0f 8e 85 00 00 00    	jle    872634d <_ZNSi6ignoreEi+0xcd>
 87262c8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87262cb:	8b 01                	mov    (%ecx),%eax
 87262cd:	8b 40 f4             	mov    -0xc(%eax),%eax
 87262d0:	8b 5c 01 78          	mov    0x78(%ecx,%eax,1),%ebx
 87262d4:	8b 43 08             	mov    0x8(%ebx),%eax
 87262d7:	3b 43 0c             	cmp    0xc(%ebx),%eax
 87262da:	0f 83 19 01 00 00    	jae    87263f9 <_ZNSi6ignoreEi+0x179>
 87262e0:	0f b6 00             	movzbl (%eax),%eax
 87262e3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87262e6:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 87262ea:	8b 51 04             	mov    0x4(%ecx),%edx
 87262ed:	8d 76 00             	lea    0x0(%esi),%esi
 87262f0:	39 d6                	cmp    %edx,%esi
 87262f2:	7e 3c                	jle    8726330 <_ZNSi6ignoreEi+0xb0>
 87262f4:	83 f8 ff             	cmp    $0xffffffff,%eax
 87262f7:	74 37                	je     8726330 <_ZNSi6ignoreEi+0xb0>
 87262f9:	8b 7b 08             	mov    0x8(%ebx),%edi
 87262fc:	89 f0                	mov    %esi,%eax
 87262fe:	8b 4b 0c             	mov    0xc(%ebx),%ecx
 8726301:	29 d0                	sub    %edx,%eax
 8726303:	29 f9                	sub    %edi,%ecx
 8726305:	39 c8                	cmp    %ecx,%eax
 8726307:	7e 02                	jle    872630b <_ZNSi6ignoreEi+0x8b>
 8726309:	89 c8                	mov    %ecx,%eax
 872630b:	83 f8 01             	cmp    $0x1,%eax
 872630e:	7e 68                	jle    8726378 <_ZNSi6ignoreEi+0xf8>
 8726310:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8726313:	01 c7                	add    %eax,%edi
 8726315:	89 c2                	mov    %eax,%edx
 8726317:	89 7b 08             	mov    %edi,0x8(%ebx)
 872631a:	03 51 04             	add    0x4(%ecx),%edx
 872631d:	3b 7b 0c             	cmp    0xc(%ebx),%edi
 8726320:	89 51 04             	mov    %edx,0x4(%ecx)
 8726323:	0f 83 ae 00 00 00    	jae    87263d7 <_ZNSi6ignoreEi+0x157>
 8726329:	39 d6                	cmp    %edx,%esi
 872632b:	0f b6 07             	movzbl (%edi),%eax
 872632e:	7f c4                	jg     87262f4 <_ZNSi6ignoreEi+0x74>
 8726330:	81 fe ff ff ff 7f    	cmp    $0x7fffffff,%esi
 8726336:	74 20                	je     8726358 <_ZNSi6ignoreEi+0xd8>
 8726338:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 872633c:	74 0a                	je     8726348 <_ZNSi6ignoreEi+0xc8>
 872633e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8726341:	c7 41 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%ecx)
 8726348:	83 f8 ff             	cmp    $0xffffffff,%eax
 872634b:	74 6b                	je     87263b8 <_ZNSi6ignoreEi+0x138>
 872634d:	8b 45 08             	mov    0x8(%ebp),%eax
 8726350:	83 c4 3c             	add    $0x3c,%esp
 8726353:	5b                   	pop    %ebx
 8726354:	5e                   	pop    %esi
 8726355:	5f                   	pop    %edi
 8726356:	5d                   	pop    %ebp
 8726357:	c3                   	ret
 8726358:	83 f8 ff             	cmp    $0xffffffff,%eax
 872635b:	74 db                	je     8726338 <_ZNSi6ignoreEi+0xb8>
 872635d:	8b 55 08             	mov    0x8(%ebp),%edx
 8726360:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 8726364:	c7 42 04 00 00 00 80 	movl   $0x80000000,0x4(%edx)
 872636b:	ba 00 00 00 80       	mov    $0x80000000,%edx
 8726370:	e9 7b ff ff ff       	jmp    87262f0 <_ZNSi6ignoreEi+0x70>
 8726375:	8d 76 00             	lea    0x0(%esi),%esi
 8726378:	8b 45 08             	mov    0x8(%ebp),%eax
 872637b:	83 c2 01             	add    $0x1,%edx
 872637e:	3b 7b 0c             	cmp    0xc(%ebx),%edi
 8726381:	89 50 04             	mov    %edx,0x4(%eax)
 8726384:	73 5c                	jae    87263e2 <_ZNSi6ignoreEi+0x162>
 8726386:	83 c7 01             	add    $0x1,%edi
 8726389:	89 7b 08             	mov    %edi,0x8(%ebx)
 872638c:	39 7b 0c             	cmp    %edi,0xc(%ebx)
 872638f:	76 46                	jbe    87263d7 <_ZNSi6ignoreEi+0x157>
 8726391:	0f b6 07             	movzbl (%edi),%eax
 8726394:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8726397:	8b 51 04             	mov    0x4(%ecx),%edx
 872639a:	e9 51 ff ff ff       	jmp    87262f0 <_ZNSi6ignoreEi+0x70>
 872639f:	8b 45 08             	mov    0x8(%ebp),%eax
 87263a2:	89 04 24             	mov    %eax,(%esp)
 87263a5:	e8 66 01 fc ff       	call   86e6510 <_ZNSi6ignoreEv>
 87263aa:	89 45 08             	mov    %eax,0x8(%ebp)
 87263ad:	8b 45 08             	mov    0x8(%ebp),%eax
 87263b0:	83 c4 3c             	add    $0x3c,%esp
 87263b3:	5b                   	pop    %ebx
 87263b4:	5e                   	pop    %esi
 87263b5:	5f                   	pop    %edi
 87263b6:	5d                   	pop    %ebp
 87263b7:	c3                   	ret
 87263b8:	8b 55 08             	mov    0x8(%ebp),%edx
 87263bb:	8b 02                	mov    (%edx),%eax
 87263bd:	03 50 f4             	add    -0xc(%eax),%edx
 87263c0:	8b 42 14             	mov    0x14(%edx),%eax
 87263c3:	89 14 24             	mov    %edx,(%esp)
 87263c6:	83 c8 02             	or     $0x2,%eax
 87263c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87263cd:	e8 ce a9 fb ff       	call   86e0da0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate>
 87263d2:	e9 76 ff ff ff       	jmp    872634d <_ZNSi6ignoreEi+0xcd>
 87263d7:	8b 03                	mov    (%ebx),%eax
 87263d9:	89 1c 24             	mov    %ebx,(%esp)
 87263dc:	ff 50 24             	call   *0x24(%eax)
 87263df:	90                   	nop
 87263e0:	eb b2                	jmp    8726394 <_ZNSi6ignoreEi+0x114>
 87263e2:	8b 03                	mov    (%ebx),%eax
 87263e4:	89 1c 24             	mov    %ebx,(%esp)
 87263e7:	ff 50 28             	call   *0x28(%eax)
 87263ea:	89 c2                	mov    %eax,%edx
 87263ec:	83 c8 ff             	or     $0xffffffff,%eax
 87263ef:	83 fa ff             	cmp    $0xffffffff,%edx
 87263f2:	74 a0                	je     8726394 <_ZNSi6ignoreEi+0x114>
 87263f4:	8b 7b 08             	mov    0x8(%ebx),%edi
 87263f7:	eb 93                	jmp    872638c <_ZNSi6ignoreEi+0x10c>
 87263f9:	8b 03                	mov    (%ebx),%eax
 87263fb:	89 1c 24             	mov    %ebx,(%esp)
 87263fe:	ff 50 24             	call   *0x24(%eax)
 8726401:	e9 dd fe ff ff       	jmp    87262e3 <_ZNSi6ignoreEi+0x63>
 8726406:	83 fa 02             	cmp    $0x2,%edx
 8726409:	74 28                	je     8726433 <_ZNSi6ignoreEi+0x1b3>
 872640b:	89 04 24             	mov    %eax,(%esp)
 872640e:	66 90                	xchg   %ax,%ax
 8726410:	e8 cb f8 ff ff       	call   8725ce0 <__cxa_begin_catch>
 8726415:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8726418:	8b 01                	mov    (%ecx),%eax
 872641a:	8b 40 f4             	mov    -0xc(%eax),%eax
 872641d:	01 c8                	add    %ecx,%eax
 872641f:	83 48 14 01          	orl    $0x1,0x14(%eax)
 8726423:	f6 40 10 01          	testb  $0x1,0x10(%eax)
 8726427:	75 2b                	jne    8726454 <_ZNSi6ignoreEi+0x1d4>
 8726429:	e8 02 f8 ff ff       	call   8725c30 <__cxa_end_catch>
 872642e:	e9 1a ff ff ff       	jmp    872634d <_ZNSi6ignoreEi+0xcd>
 8726433:	89 04 24             	mov    %eax,(%esp)
 8726436:	e8 a5 f8 ff ff       	call   8725ce0 <__cxa_begin_catch>
 872643b:	8b 55 08             	mov    0x8(%ebp),%edx
 872643e:	8b 02                	mov    (%edx),%eax
 8726440:	8b 40 f4             	mov    -0xc(%eax),%eax
 8726443:	01 d0                	add    %edx,%eax
 8726445:	83 48 14 01          	orl    $0x1,0x14(%eax)
 8726449:	f6 40 10 01          	testb  $0x1,0x10(%eax)
 872644d:	75 19                	jne    8726468 <_ZNSi6ignoreEi+0x1e8>
 872644f:	e8 8c e7 ff ff       	call   8724be0 <__cxa_rethrow>
 8726454:	e8 87 e7 ff ff       	call   8724be0 <__cxa_rethrow>
 8726459:	89 c3                	mov    %eax,%ebx
 872645b:	e8 d0 f7 ff ff       	call   8725c30 <__cxa_end_catch>
 8726460:	89 1c 24             	mov    %ebx,(%esp)
 8726463:	e8 e8 d2 3b 00       	call   8ae3750 <_Unwind_Resume>
 8726468:	e8 73 e7 ff ff       	call   8724be0 <__cxa_rethrow>
 872646d:	eb ea                	jmp    8726459 <_ZNSi6ignoreEi+0x1d9>
 872646f:	90                   	nop

```

```c
// std::istream::ignore @ 0x8726280

/* std::istream::ignore(int) */

istream * __thiscall std::istream::ignore(istream *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  istream *piVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  sentry local_1d [13];
  
  if (param_1 == 1) {
    piVar6 = (istream *)ignore(this);
    return piVar6;
  }
  *(undefined4 *)(this + 4) = 0;
  sentry::sentry(local_1d,this,true);
  if ((local_1d[0] == (sentry)0x0) || (param_1 < 1)) {
    return this;
  }
  piVar2 = *(int **)(this + *(int *)(*(int *)this + -0xc) + 0x78);
  if ((byte *)piVar2[2] < (byte *)piVar2[3]) {
    uVar4 = (uint)*(byte *)piVar2[2];
  }
  else {
    uVar4 = (**(code **)(*piVar2 + 0x24))(piVar2);
  }
  bVar3 = false;
  iVar7 = *(int *)(this + 4);
  do {
    while( true ) {
      while ((param_1 <= iVar7 || (uVar4 == 0xffffffff))) {
        if ((param_1 != 0x7fffffff) || (uVar4 == 0xffffffff)) {
          if (bVar3) {
            *(undefined4 *)(this + 4) = 0x7fffffff;
          }
          if (uVar4 != 0xffffffff) {
            return this;
          }
          ios::clear((ios *)(this + *(int *)(*(int *)this + -0xc)),
                     *(_Ios_Iostate *)((ios *)(this + *(int *)(*(int *)this + -0xc)) + 0x14) |
                     _S_eofbit);
          return this;
        }
        bVar3 = true;
        *(undefined4 *)(this + 4) = 0x80000000;
        iVar7 = -0x80000000;
      }
      uVar4 = piVar2[2];
      iVar5 = param_1 - iVar7;
      if ((int)(piVar2[3] - uVar4) < param_1 - iVar7) {
        iVar5 = piVar2[3] - uVar4;
      }
      if (1 < iVar5) break;
      uVar1 = piVar2[3];
      *(int *)(this + 4) = iVar7 + 1;
      if (uVar4 < uVar1) {
        pbVar9 = (byte *)(uVar4 + 1);
        piVar2[2] = (int)pbVar9;
LAB_0872638c:
        if ((byte *)piVar2[3] <= pbVar9) goto LAB_087263d7;
        uVar4 = (uint)*pbVar9;
      }
      else {
        iVar7 = (**(code **)(*piVar2 + 0x28))(piVar2);
        uVar4 = 0xffffffff;
        if (iVar7 != -1) {
          pbVar9 = (byte *)piVar2[2];
          goto LAB_0872638c;
        }
      }
LAB_08726394:
      iVar7 = *(int *)(this + 4);
    }
    pbVar8 = (byte *)(uVar4 + iVar5);
    piVar2[2] = (int)pbVar8;
    iVar7 = iVar5 + *(int *)(this + 4);
    pbVar9 = (byte *)piVar2[3];
    *(int *)(this + 4) = iVar7;
    if (pbVar9 <= pbVar8) {
LAB_087263d7:
                    /* try { // try from 087263dc to 08726400 has its CatchHandler @ 08726406 */
      uVar4 = (**(code **)(*piVar2 + 0x24))(piVar2);
      goto LAB_08726394;
    }
    uVar4 = (uint)*pbVar8;
  } while( true );
}

```

