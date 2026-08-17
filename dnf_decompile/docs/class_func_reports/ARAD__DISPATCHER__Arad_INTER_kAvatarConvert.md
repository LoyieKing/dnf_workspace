# ARAD__DISPATCHER__Arad_INTER_kAvatarConvert

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0819a20e ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig  [0x0819a20e-0x819a2d9] ===
 819a20e:	55                   	push   %ebp
 819a20f:	89 e5                	mov    %esp,%ebp
 819a211:	83 ec 38             	sub    $0x38,%esp
 819a214:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819a218:	75 0a                	jne    819a224 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0x16>
 819a21a:	b8 d8 06 00 00       	mov    $0x6d8,%eax
 819a21f:	e9 b4 00 00 00       	jmp    819a2d8 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0xca>
 819a224:	8b 45 0c             	mov    0xc(%ebp),%eax
 819a227:	89 04 24             	mov    %eax,(%esp)
 819a22a:	e8 03 62 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 819a22f:	85 c0                	test   %eax,%eax
 819a231:	0f 94 c0             	sete   %al
 819a234:	84 c0                	test   %al,%al
 819a236:	74 0a                	je     819a242 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0x34>
 819a238:	b8 db 06 00 00       	mov    $0x6db,%eax
 819a23d:	e9 96 00 00 00       	jmp    819a2d8 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0xca>
 819a242:	8b 45 10             	mov    0x10(%ebp),%eax
 819a245:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819a248:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819a24c:	75 33                	jne    819a281 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0x73>
 819a24e:	c7 44 24 10 d4 1f ba 	movl   $0x8ba1fd4,0x10(%esp)
 819a255:	08 
 819a256:	c7 44 24 0c e0 06 00 	movl   $0x6e0,0xc(%esp)
 819a25d:	00 
 819a25e:	c7 44 24 08 20 2c ba 	movl   $0x8ba2c20,0x8(%esp)
 819a265:	08 
 819a266:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 819a26d:	08 
 819a26e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 819a275:	e8 90 99 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819a27a:	b8 e1 06 00 00       	mov    $0x6e1,%eax
 819a27f:	eb 57                	jmp    819a2d8 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0xca>
 819a281:	e8 69 0d 00 00       	call   819afef <_ZN4ARAD9SingletonI19AvatarConvertServerE3GetEv>
 819a286:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819a289:	89 54 24 08          	mov    %edx,0x8(%esp)
 819a28d:	8b 55 0c             	mov    0xc(%ebp),%edx
 819a290:	89 54 24 04          	mov    %edx,0x4(%esp)
 819a294:	89 04 24             	mov    %eax,(%esp)
 819a297:	e8 76 7f ff ff       	call   8192212 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE>
 819a29c:	83 f0 01             	xor    $0x1,%eax
 819a29f:	84 c0                	test   %al,%al
 819a2a1:	74 07                	je     819a2aa <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0x9c>
 819a2a3:	b8 00 00 00 00       	mov    $0x0,%eax
 819a2a8:	eb 2e                	jmp    819a2d8 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0xca>
 819a2aa:	e8 40 0d 00 00       	call   819afef <_ZN4ARAD9SingletonI19AvatarConvertServerE3GetEv>
 819a2af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819a2b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 819a2b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 819a2b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 819a2bd:	89 04 24             	mov    %eax,(%esp)
 819a2c0:	e8 19 84 ff ff       	call   81926de <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE>
 819a2c5:	83 f0 01             	xor    $0x1,%eax
 819a2c8:	84 c0                	test   %al,%al
 819a2ca:	74 07                	je     819a2d3 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0xc5>
 819a2cc:	b8 00 00 00 00       	mov    $0x0,%eax
 819a2d1:	eb 05                	jmp    819a2d8 <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci+0xca>
 819a2d3:	b8 00 00 00 00       	mov    $0x0,%eax
 819a2d8:	c9                   	leave
 819a2d9:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig @ 0x819a20e

/* ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  AvatarConvertServer *pAVar4;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0x6d8;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar2 = 0x6db;
    }
    else if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser*, char*, int)"
                 ,0x6e0,"AVATAR CONVERT INTER_DSP(kAvatarConvert) null.");
      uVar2 = 0x6e1;
    }
    else {
      pAVar4 = (AvatarConvertServer *)Singleton<AvatarConvertServer>::Get();
      cVar1 = AvatarConvertServer::CheckCondition
                        (pAVar4,(CUser *)param_2,(SigAradAvatarConvert *)param_3);
      if (cVar1 == '\x01') {
        pAVar4 = (AvatarConvertServer *)Singleton<AvatarConvertServer>::Get();
        cVar1 = AvatarConvertServer::Convert
                          (pAVar4,(CUser *)param_2,(SigAradAvatarConvert *)param_3);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

