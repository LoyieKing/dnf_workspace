# WongWork__IPG__CIPGMgr__CIPGWorker__CIPGNetwork

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ConnectTo

```asm
// === 081043e0 WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo  [0x081043e0-0x8104493] ===
 81043e0:	55                   	push   %ebp
 81043e1:	89 e5                	mov    %esp,%ebp
 81043e3:	83 ec 48             	sub    $0x48,%esp
 81043e6:	8b 45 10             	mov    0x10(%ebp),%eax
 81043e9:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 81043ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81043f4:	00 
 81043f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81043fc:	00 
 81043fd:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8104404:	e8 a7 96 f7 ff       	call   807dab0 <socket@plt>
 8104409:	8b 55 08             	mov    0x8(%ebp),%edx
 810440c:	89 02                	mov    %eax,(%edx)
 810440e:	8b 45 08             	mov    0x8(%ebp),%eax
 8104411:	8b 00                	mov    (%eax),%eax
 8104413:	85 c0                	test   %eax,%eax
 8104415:	79 07                	jns    810441e <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x3e>
 8104417:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 810441c:	eb 74                	jmp    8104492 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xb2>
 810441e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8104425:	00 
 8104426:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810442d:	00 
 810442e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8104431:	89 04 24             	mov    %eax,(%esp)
 8104434:	e8 87 98 f7 ff       	call   807dcc0 <memset@plt>
 8104439:	66 c7 45 e4 02 00    	movw   $0x2,-0x1c(%ebp)
 810443f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104442:	89 04 24             	mov    %eax,(%esp)
 8104445:	e8 e6 a0 f7 ff       	call   807e530 <inet_addr@plt>
 810444a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 810444d:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8104451:	89 04 24             	mov    %eax,(%esp)
 8104454:	e8 27 a2 f7 ff       	call   807e680 <htons@plt>
 8104459:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 810445d:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 8104464:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8104467:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 810446a:	8b 45 08             	mov    0x8(%ebp),%eax
 810446d:	8b 00                	mov    (%eax),%eax
 810446f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8104473:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104477:	89 04 24             	mov    %eax,(%esp)
 810447a:	e8 b1 9d f7 ff       	call   807e230 <connect@plt>
 810447f:	c1 e8 1f             	shr    $0x1f,%eax
 8104482:	84 c0                	test   %al,%al
 8104484:	74 07                	je     810448d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xad>
 8104486:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 810448b:	eb 05                	jmp    8104492 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xb2>
 810448d:	b8 00 00 00 00       	mov    $0x0,%eax
 8104492:	c9                   	leave
 8104493:	c3                   	ret

```

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo @ 0x81043e0

/* WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short) */

undefined4 __thiscall
WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo
          (CIPGNetwork *this,char *param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr local_20;
  undefined4 local_10;
  
  iVar1 = socket(2,1,0);
  *(int *)this = iVar1;
  if (*(int *)this < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    memset(&local_20,0,0x10);
    local_20.sa_family = 2;
    local_20.sa_data._2_4_ = inet_addr(param_1);
    local_20.sa_data._0_2_ = htons(param_2);
    local_10 = 0x10;
    iVar1 = connect(*(int *)this,&local_20,0x10);
    if (iVar1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

