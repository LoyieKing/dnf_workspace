# Dispatcher_CharacterStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082051d0 Dispatcher_CharacterStatistic::dispatch_sig  [0x082051d0-0x82053e5] ===
 82051d0:	55                   	push   %ebp
 82051d1:	89 e5                	mov    %esp,%ebp
 82051d3:	83 ec 38             	sub    $0x38,%esp
 82051d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82051d9:	89 04 24             	mov    %eax,(%esp)
 82051dc:	e8 ab 51 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82051e1:	83 f8 02             	cmp    $0x2,%eax
 82051e4:	0f 9e c0             	setle  %al
 82051e7:	84 c0                	test   %al,%al
 82051e9:	74 0a                	je     82051f5 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x25>
 82051eb:	b8 00 00 00 00       	mov    $0x0,%eax
 82051f0:	e9 ef 01 00 00       	jmp    82053e4 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x214>
 82051f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82051f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82051fc:	8b 45 10             	mov    0x10(%ebp),%eax
 82051ff:	89 04 24             	mov    %eax,(%esp)
 8205202:	e8 e9 7e 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8205207:	83 f0 01             	xor    $0x1,%eax
 820520a:	84 c0                	test   %al,%al
 820520c:	74 29                	je     8205237 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x67>
 820520e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205215:	00 
 8205216:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820521d:	00 
 820521e:	c7 44 24 04 20 ee bc 	movl   $0x8bcee20,0x4(%esp)
 8205225:	08 
 8205226:	c7 04 24 1f 9d 00 00 	movl   $0x9d1f,(%esp)
 820522d:	e8 a5 b6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205232:	e9 ad 01 00 00       	jmp    82053e4 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x214>
 8205237:	8d 45 e0             	lea    -0x20(%ebp),%eax
 820523a:	83 c0 08             	add    $0x8,%eax
 820523d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205241:	8b 45 10             	mov    0x10(%ebp),%eax
 8205244:	89 04 24             	mov    %eax,(%esp)
 8205247:	e8 a4 7e 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 820524c:	83 f0 01             	xor    $0x1,%eax
 820524f:	84 c0                	test   %al,%al
 8205251:	74 29                	je     820527c <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0xac>
 8205253:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820525a:	00 
 820525b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8205262:	00 
 8205263:	c7 44 24 04 20 ee bc 	movl   $0x8bcee20,0x4(%esp)
 820526a:	08 
 820526b:	c7 04 24 20 9d 00 00 	movl   $0x9d20,(%esp)
 8205272:	e8 60 b6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205277:	e9 68 01 00 00       	jmp    82053e4 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820527c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 820527f:	83 c0 0c             	add    $0xc,%eax
 8205282:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205286:	8b 45 10             	mov    0x10(%ebp),%eax
 8205289:	89 04 24             	mov    %eax,(%esp)
 820528c:	e8 5f 7e 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8205291:	83 f0 01             	xor    $0x1,%eax
 8205294:	84 c0                	test   %al,%al
 8205296:	74 29                	je     82052c1 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0xf1>
 8205298:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820529f:	00 
 82052a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82052a7:	00 
 82052a8:	c7 44 24 04 20 ee bc 	movl   $0x8bcee20,0x4(%esp)
 82052af:	08 
 82052b0:	c7 04 24 21 9d 00 00 	movl   $0x9d21,(%esp)
 82052b7:	e8 1b b6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82052bc:	e9 23 01 00 00       	jmp    82053e4 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x214>
 82052c1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82052c4:	83 c0 04             	add    $0x4,%eax
 82052c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82052cb:	8b 45 10             	mov    0x10(%ebp),%eax
 82052ce:	89 04 24             	mov    %eax,(%esp)
 82052d1:	e8 1a 7e 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82052d6:	83 f0 01             	xor    $0x1,%eax
 82052d9:	84 c0                	test   %al,%al
 82052db:	74 29                	je     8205306 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x136>
 82052dd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82052e4:	00 
 82052e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82052ec:	00 
 82052ed:	c7 44 24 04 20 ee bc 	movl   $0x8bcee20,0x4(%esp)
 82052f4:	08 
 82052f5:	c7 04 24 22 9d 00 00 	movl   $0x9d22,(%esp)
 82052fc:	e8 d6 b5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205301:	e9 de 00 00 00       	jmp    82053e4 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x214>
 8205306:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8205309:	83 c0 10             	add    $0x10,%eax
 820530c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205310:	8b 45 10             	mov    0x10(%ebp),%eax
 8205313:	89 04 24             	mov    %eax,(%esp)
 8205316:	e8 d5 7d 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 820531b:	83 f0 01             	xor    $0x1,%eax
 820531e:	84 c0                	test   %al,%al
 8205320:	74 29                	je     820534b <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x17b>
 8205322:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205329:	00 
 820532a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8205331:	00 
 8205332:	c7 44 24 04 20 ee bc 	movl   $0x8bcee20,0x4(%esp)
 8205339:	08 
 820533a:	c7 04 24 23 9d 00 00 	movl   $0x9d23,(%esp)
 8205341:	e8 91 b5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205346:	e9 99 00 00 00       	jmp    82053e4 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820534b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 820534e:	83 c0 14             	add    $0x14,%eax
 8205351:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205355:	8b 45 10             	mov    0x10(%ebp),%eax
 8205358:	89 04 24             	mov    %eax,(%esp)
 820535b:	e8 90 7d 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8205360:	83 f0 01             	xor    $0x1,%eax
 8205363:	84 c0                	test   %al,%al
 8205365:	74 26                	je     820538d <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x1bd>
 8205367:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820536e:	00 
 820536f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8205376:	00 
 8205377:	c7 44 24 04 20 ee bc 	movl   $0x8bcee20,0x4(%esp)
 820537e:	08 
 820537f:	c7 04 24 24 9d 00 00 	movl   $0x9d24,(%esp)
 8205386:	e8 4c b5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820538b:	eb 57                	jmp    82053e4 <_ZN29Dispatcher_CharacterStatistic12dispatch_sigEP5CUserR9PacketBuf+0x214>
 820538d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8205390:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205393:	89 90 3c e0 08 00    	mov    %edx,0x8e03c(%eax)
 8205399:	8b 55 e8             	mov    -0x18(%ebp),%edx
 820539c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820539f:	89 90 44 e0 08 00    	mov    %edx,0x8e044(%eax)
 82053a5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82053a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82053ab:	89 90 48 e0 08 00    	mov    %edx,0x8e048(%eax)
 82053b1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82053b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82053b7:	89 90 40 e0 08 00    	mov    %edx,0x8e040(%eax)
 82053bd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82053c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82053c3:	89 90 4c e0 08 00    	mov    %edx,0x8e04c(%eax)
 82053c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82053cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82053cf:	89 90 50 e0 08 00    	mov    %edx,0x8e050(%eax)
 82053d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82053d8:	c6 80 74 e0 08 00 01 	movb   $0x1,0x8e074(%eax)
 82053df:	b8 00 00 00 00       	mov    $0x0,%eax
 82053e4:	c9                   	leave
 82053e5:	c3                   	ret

```

```c
// Dispatcher_CharacterStatistic::dispatch_sig @ 0x82051d0

/* Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CharacterStatistic::dispatch_sig
          (Dispatcher_CharacterStatistic *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10 [3];
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = PacketBuf::get_int(param_2,&local_24);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_1c);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_18);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_2,&local_20);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&local_14);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_2,local_10);
              if (cVar1 == '\x01') {
                *(int *)(param_1 + 0x8e03c) = local_24;
                *(int *)(param_1 + 0x8e044) = local_1c;
                *(int *)(param_1 + 0x8e048) = local_18;
                *(int *)(param_1 + 0x8e040) = local_20;
                *(int *)(param_1 + 0x8e04c) = local_14;
                *(int *)(param_1 + 0x8e050) = local_10[0];
                param_1[0x8e074] = (CUser)0x1;
                uVar3 = 0;
              }
              else {
                uVar3 = LineFunc(0x9d24,
                                 "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x9d23,
                               "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x9d22,
                             "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x9d21,
                           "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x9d20,
                         "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0x9d1f,
                       "virtual int Dispatcher_CharacterStatistic::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

