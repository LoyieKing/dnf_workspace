# TimeLog_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## setTime

```asm
// === 0854e228 TimeLog_::setTime  [0x0854e228-0x854e2ad] ===
 854e228:	55                   	push   %ebp
 854e229:	89 e5                	mov    %esp,%ebp
 854e22b:	83 ec 58             	sub    $0x58,%esp
 854e22e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 854e235:	e8 16 f5 b2 ff       	call   807d750 <time@plt>
 854e23a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854e23d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 854e240:	89 44 24 04          	mov    %eax,0x4(%esp)
 854e244:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854e247:	89 04 24             	mov    %eax,(%esp)
 854e24a:	e8 11 01 b3 ff       	call   807e360 <localtime_r@plt>
 854e24f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854e252:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854e255:	8b 40 14             	mov    0x14(%eax),%eax
 854e258:	66 05 6c 07          	add    $0x76c,%ax
 854e25c:	89 c2                	mov    %eax,%edx
 854e25e:	8b 45 08             	mov    0x8(%ebp),%eax
 854e261:	66 89 10             	mov    %dx,(%eax)
 854e264:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854e267:	8b 40 10             	mov    0x10(%eax),%eax
 854e26a:	83 c0 01             	add    $0x1,%eax
 854e26d:	89 c2                	mov    %eax,%edx
 854e26f:	8b 45 08             	mov    0x8(%ebp),%eax
 854e272:	88 50 02             	mov    %dl,0x2(%eax)
 854e275:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854e278:	8b 40 0c             	mov    0xc(%eax),%eax
 854e27b:	89 c2                	mov    %eax,%edx
 854e27d:	8b 45 08             	mov    0x8(%ebp),%eax
 854e280:	88 50 03             	mov    %dl,0x3(%eax)
 854e283:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854e286:	8b 40 08             	mov    0x8(%eax),%eax
 854e289:	89 c2                	mov    %eax,%edx
 854e28b:	8b 45 08             	mov    0x8(%ebp),%eax
 854e28e:	88 50 04             	mov    %dl,0x4(%eax)
 854e291:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854e294:	8b 40 04             	mov    0x4(%eax),%eax
 854e297:	89 c2                	mov    %eax,%edx
 854e299:	8b 45 08             	mov    0x8(%ebp),%eax
 854e29c:	88 50 05             	mov    %dl,0x5(%eax)
 854e29f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854e2a2:	8b 00                	mov    (%eax),%eax
 854e2a4:	89 c2                	mov    %eax,%edx
 854e2a6:	8b 45 08             	mov    0x8(%ebp),%eax
 854e2a9:	88 50 06             	mov    %dl,0x6(%eax)
 854e2ac:	c9                   	leave
 854e2ad:	c3                   	ret

```

```c
// TimeLog_::setTime @ 0x854e228

/* TimeLog_::setTime() */

void __thiscall TimeLog_::setTime(TimeLog_ *this)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime_r(local_14,&local_40);
  *(short *)this = (short)ptVar1->tm_year + 0x76c;
  this[2] = (TimeLog_)((char)ptVar1->tm_mon + '\x01');
  this[3] = SUB41(ptVar1->tm_mday,0);
  this[4] = SUB41(ptVar1->tm_hour,0);
  this[5] = SUB41(ptVar1->tm_min,0);
  this[6] = SUB41(ptVar1->tm_sec,0);
  return;
}

```

