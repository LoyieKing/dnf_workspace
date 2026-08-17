# Dispatcher_SecuDataControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821f612 Dispatcher_SecuDataControl::dispatch_sig  [0x0821f612-0x821f729] ===
 821f612:	55                   	push   %ebp
 821f613:	89 e5                	mov    %esp,%ebp
 821f615:	53                   	push   %ebx
 821f616:	83 ec 34             	sub    $0x34,%esp
 821f619:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 821f61d:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
 821f623:	66 c7 45 f2 00 00    	movw   $0x0,-0xe(%ebp)
 821f629:	8d 45 f7             	lea    -0x9(%ebp),%eax
 821f62c:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f630:	8b 45 10             	mov    0x10(%ebp),%eax
 821f633:	89 04 24             	mov    %eax,(%esp)
 821f636:	e8 35 d9 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821f63b:	83 f0 01             	xor    $0x1,%eax
 821f63e:	84 c0                	test   %al,%al
 821f640:	74 29                	je     821f66b <_ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf+0x59>
 821f642:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f649:	00 
 821f64a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f651:	00 
 821f652:	c7 44 24 04 e0 cf bc 	movl   $0x8bccfe0,0x4(%esp)
 821f659:	08 
 821f65a:	c7 04 24 38 d8 00 00 	movl   $0xd838,(%esp)
 821f661:	e8 71 12 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f666:	e9 b8 00 00 00       	jmp    821f723 <_ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf+0x111>
 821f66b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821f66e:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f672:	8b 45 10             	mov    0x10(%ebp),%eax
 821f675:	89 04 24             	mov    %eax,(%esp)
 821f678:	e8 33 da 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f67d:	83 f0 01             	xor    $0x1,%eax
 821f680:	84 c0                	test   %al,%al
 821f682:	74 26                	je     821f6aa <_ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf+0x98>
 821f684:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f68b:	00 
 821f68c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f693:	00 
 821f694:	c7 44 24 04 e0 cf bc 	movl   $0x8bccfe0,0x4(%esp)
 821f69b:	08 
 821f69c:	c7 04 24 39 d8 00 00 	movl   $0xd839,(%esp)
 821f6a3:	e8 2f 12 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f6a8:	eb 79                	jmp    821f723 <_ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf+0x111>
 821f6aa:	8d 45 f2             	lea    -0xe(%ebp),%eax
 821f6ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f6b1:	8b 45 10             	mov    0x10(%ebp),%eax
 821f6b4:	89 04 24             	mov    %eax,(%esp)
 821f6b7:	e8 f4 d9 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f6bc:	83 f0 01             	xor    $0x1,%eax
 821f6bf:	84 c0                	test   %al,%al
 821f6c1:	74 26                	je     821f6e9 <_ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf+0xd7>
 821f6c3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f6ca:	00 
 821f6cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f6d2:	00 
 821f6d3:	c7 44 24 04 e0 cf bc 	movl   $0x8bccfe0,0x4(%esp)
 821f6da:	08 
 821f6db:	c7 04 24 3a d8 00 00 	movl   $0xd83a,(%esp)
 821f6e2:	e8 f0 11 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f6e7:	eb 3a                	jmp    821f723 <_ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf+0x111>
 821f6e9:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 821f6ed:	0f b7 d8             	movzwl %ax,%ebx
 821f6f0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 821f6f4:	0f b7 c8             	movzwl %ax,%ecx
 821f6f7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 821f6fb:	0f b6 d0             	movzbl %al,%edx
 821f6fe:	a1 c8 f7 41 09       	mov    0x941f7c8,%eax
 821f703:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 821f707:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 821f70b:	89 54 24 08          	mov    %edx,0x8(%esp)
 821f70f:	8b 55 0c             	mov    0xc(%ebp),%edx
 821f712:	89 54 24 04          	mov    %edx,0x4(%esp)
 821f716:	89 04 24             	mov    %eax,(%esp)
 821f719:	e8 12 73 06 00       	call   8286a30 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt>
 821f71e:	b8 00 00 00 00       	mov    $0x0,%eax
 821f723:	83 c4 34             	add    $0x34,%esp
 821f726:	5b                   	pop    %ebx
 821f727:	5d                   	pop    %ebp
 821f728:	c3                   	ret
 821f729:	90                   	nop

```

```c
// Dispatcher_SecuDataControl::dispatch_sig @ 0x821f612

/* Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecuDataControl::dispatch_sig
          (Dispatcher_SecuDataControl *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ushort local_12;
  ushort local_10;
  uchar local_d [5];
  
  local_d[0] = '\0';
  local_10 = 0;
  local_12 = 0;
  cVar1 = PacketBuf::get_byte(param_2,local_d);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_2,&local_10);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_12);
      if (cVar1 == '\x01') {
        Secu_DataControl::SetControlData
                  (GlobalData::s_pSecuDataControl,param_1,local_d[0],local_10,local_12);
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xd83a,
                         "virtual int Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xd839,
                       "virtual int Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0xd838,
                     "virtual int Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  return uVar2;
}

```

