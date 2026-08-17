# Dispatcher_Antibot_DPCallBack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820b17a Dispatcher_Antibot_DPCallBack::dispatch_sig  [0x0820b17a-0x820b321] ===
 820b17a:	55                   	push   %ebp
 820b17b:	89 e5                	mov    %esp,%ebp
 820b17d:	56                   	push   %esi
 820b17e:	53                   	push   %ebx
 820b17f:	81 ec 20 0b 00 00    	sub    $0xb20,%esp
 820b185:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b188:	0f b6 80 52 d2 08 00 	movzbl 0x8d252(%eax),%eax
 820b18f:	3c 04                	cmp    $0x4,%al
 820b191:	77 16                	ja     820b1a9 <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x2f>
 820b193:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b196:	0f b6 80 52 d2 08 00 	movzbl 0x8d252(%eax),%eax
 820b19d:	8d 50 01             	lea    0x1(%eax),%edx
 820b1a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b1a3:	88 90 52 d2 08 00    	mov    %dl,0x8d252(%eax)
 820b1a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820b1ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b1b0:	8b 45 10             	mov    0x10(%ebp),%eax
 820b1b3:	89 04 24             	mov    %eax,(%esp)
 820b1b6:	e8 85 20 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 820b1bb:	83 f0 01             	xor    $0x1,%eax
 820b1be:	84 c0                	test   %al,%al
 820b1c0:	74 52                	je     820b214 <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x9a>
 820b1c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b1c5:	0f b6 80 52 d2 08 00 	movzbl 0x8d252(%eax),%eax
 820b1cc:	3c 05                	cmp    $0x5,%al
 820b1ce:	77 3a                	ja     820b20a <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x90>
 820b1d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b1d3:	0f b6 80 52 d2 08 00 	movzbl 0x8d252(%eax),%eax
 820b1da:	0f b6 c0             	movzbl %al,%eax
 820b1dd:	8b 55 0c             	mov    0xc(%ebp),%edx
 820b1e0:	81 c2 00 97 07 00    	add    $0x79700,%edx
 820b1e6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 820b1ed:	00 
 820b1ee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820b1f2:	c7 44 24 08 5d 02 00 	movl   $0x25d,0x8(%esp)
 820b1f9:	00 
 820b1fa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820b201:	00 
 820b202:	89 14 24             	mov    %edx,(%esp)
 820b205:	e8 ea bb 47 00       	call   8686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>
 820b20a:	b8 6a a7 00 00       	mov    $0xa76a,%eax
 820b20f:	e9 04 01 00 00       	jmp    820b318 <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x19e>
 820b214:	c7 45 f0 0d 00 00 00 	movl   $0xd,-0x10(%ebp)
 820b21b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820b21e:	3d 67 05 00 00       	cmp    $0x567,%eax
 820b223:	76 72                	jbe    820b297 <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x11d>
 820b225:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b228:	0f b6 80 52 d2 08 00 	movzbl 0x8d252(%eax),%eax
 820b22f:	3c 05                	cmp    $0x5,%al
 820b231:	77 3b                	ja     820b26e <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0xf4>
 820b233:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820b236:	89 c2                	mov    %eax,%edx
 820b238:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b23b:	0f b6 80 52 d2 08 00 	movzbl 0x8d252(%eax),%eax
 820b242:	0f b6 c0             	movzbl %al,%eax
 820b245:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 820b248:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 820b24e:	89 54 24 10          	mov    %edx,0x10(%esp)
 820b252:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820b256:	c7 44 24 08 5d 02 00 	movl   $0x25d,0x8(%esp)
 820b25d:	00 
 820b25e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820b265:	00 
 820b266:	89 0c 24             	mov    %ecx,(%esp)
 820b269:	e8 86 bb 47 00       	call   8686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>
 820b26e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b275:	00 
 820b276:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b27d:	00 
 820b27e:	c7 44 24 04 c0 e1 bc 	movl   $0x8bce1c0,0x4(%esp)
 820b285:	08 
 820b286:	c7 04 24 80 a7 00 00 	movl   $0xa780,(%esp)
 820b28d:	e8 45 56 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b292:	e9 81 00 00 00       	jmp    820b318 <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x19e>
 820b297:	66 c7 45 ea f0 0a    	movw   $0xaf0,-0x16(%ebp)
 820b29d:	8b 45 10             	mov    0x10(%ebp),%eax
 820b2a0:	89 04 24             	mov    %eax,(%esp)
 820b2a3:	e8 74 58 f0 ff       	call   8110b1c <_ZN9PacketBuf9get_indexEv>
 820b2a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b2ac:	8b 45 10             	mov    0x10(%ebp),%eax
 820b2af:	89 04 24             	mov    %eax,(%esp)
 820b2b2:	e8 81 27 38 00       	call   858da38 <_ZN9PacketBuf11get_buf_ptrEi>
 820b2b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820b2ba:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 820b2bf:	8b 00                	mov    (%eax),%eax
 820b2c1:	83 c0 2c             	add    $0x2c,%eax
 820b2c4:	8b 30                	mov    (%eax),%esi
 820b2c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820b2c9:	0f b7 d8             	movzwl %ax,%ebx
 820b2cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b2cf:	89 04 24             	mov    %eax,(%esp)
 820b2d2:	e8 0d 4a 02 00       	call   822fce4 <_ZN5CUser13getAntibotKeyEv>
 820b2d7:	89 c2                	mov    %eax,%edx
 820b2d9:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 820b2de:	8d 4d ea             	lea    -0x16(%ebp),%ecx
 820b2e1:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 820b2e5:	8d 8d fa f4 ff ff    	lea    -0xb06(%ebp),%ecx
 820b2eb:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 820b2ef:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820b2f3:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 820b2f6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 820b2fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 820b2fe:	89 04 24             	mov    %eax,(%esp)
 820b301:	ff d6                	call   *%esi
 820b303:	85 c0                	test   %eax,%eax
 820b305:	0f 95 c0             	setne  %al
 820b308:	84 c0                	test   %al,%al
 820b30a:	74 07                	je     820b313 <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x199>
 820b30c:	b8 00 00 00 00       	mov    $0x0,%eax
 820b311:	eb 05                	jmp    820b318 <_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf+0x19e>
 820b313:	b8 00 00 00 00       	mov    $0x0,%eax
 820b318:	81 c4 20 0b 00 00    	add    $0xb20,%esp
 820b31e:	5b                   	pop    %ebx
 820b31f:	5e                   	pop    %esi
 820b320:	5d                   	pop    %ebp
 820b321:	c3                   	ret

```

```c
// Dispatcher_Antibot_DPCallBack::dispatch_sig @ 0x820b17a

/* Dispatcher_Antibot_DPCallBack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Antibot_DPCallBack::dispatch_sig
          (Dispatcher_Antibot_DPCallBack *this,CUser *param_1,PacketBuf *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_b0a [2800];
  undefined2 local_1a;
  uint local_18 [3];
  
  if ((byte)param_1[0x8d252] < 5) {
    param_1[0x8d252] = (CUser)((char)param_1[0x8d252] + '\x01');
  }
  cVar2 = PacketBuf::get_int(param_2,local_18);
  if (cVar2 == '\x01') {
    local_18[1] = 0xd;
    if (local_18[0] < 0x568) {
      local_1a = 0xaf0;
      iVar4 = PacketBuf::get_index(param_2);
      local_18[2] = PacketBuf::get_buf_ptr(param_2,iVar4);
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x2c);
      uVar3 = CUser::getAntibotKey(param_1);
      iVar4 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar3,local_18[2],local_18[0] & 0xffff,
                        local_b0a,&local_1a);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      if ((byte)param_1[0x8d252] < 6) {
        cUserHistoryLog::AbnormalUser
                  ((cUserHistoryLog *)(param_1 + 0x79700),2,0x25d,param_1[0x8d252],local_18[0]);
      }
      uVar3 = LineFunc(0xa780,
                       "virtual int Dispatcher_Antibot_DPCallBack::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    if ((byte)param_1[0x8d252] < 6) {
      cUserHistoryLog::AbnormalUser
                ((cUserHistoryLog *)(param_1 + 0x79700),1,0x25d,param_1[0x8d252],0);
    }
    uVar3 = 0xa76a;
  }
  return uVar3;
}

```

