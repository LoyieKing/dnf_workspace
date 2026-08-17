# CSimpleLog__DateTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## DateTime

```asm
// === 0854fa02 CSimpleLog::DateTime::DateTime  [0x0854fa02-0x854fa87] ===
 854fa02:	55                   	push   %ebp
 854fa03:	89 e5                	mov    %esp,%ebp
 854fa05:	83 ec 58             	sub    $0x58,%esp
 854fa08:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 854fa0f:	e8 3c dd b2 ff       	call   807d750 <time@plt>
 854fa14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854fa17:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 854fa1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fa1e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854fa21:	89 04 24             	mov    %eax,(%esp)
 854fa24:	e8 37 e9 b2 ff       	call   807e360 <localtime_r@plt>
 854fa29:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854fa2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fa2f:	8b 40 14             	mov    0x14(%eax),%eax
 854fa32:	66 05 6c 07          	add    $0x76c,%ax
 854fa36:	89 c2                	mov    %eax,%edx
 854fa38:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa3b:	66 89 10             	mov    %dx,(%eax)
 854fa3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fa41:	8b 40 10             	mov    0x10(%eax),%eax
 854fa44:	83 c0 01             	add    $0x1,%eax
 854fa47:	89 c2                	mov    %eax,%edx
 854fa49:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa4c:	88 50 02             	mov    %dl,0x2(%eax)
 854fa4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fa52:	8b 40 0c             	mov    0xc(%eax),%eax
 854fa55:	89 c2                	mov    %eax,%edx
 854fa57:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa5a:	88 50 03             	mov    %dl,0x3(%eax)
 854fa5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fa60:	8b 40 08             	mov    0x8(%eax),%eax
 854fa63:	89 c2                	mov    %eax,%edx
 854fa65:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa68:	88 50 04             	mov    %dl,0x4(%eax)
 854fa6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fa6e:	8b 40 04             	mov    0x4(%eax),%eax
 854fa71:	89 c2                	mov    %eax,%edx
 854fa73:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa76:	88 50 05             	mov    %dl,0x5(%eax)
 854fa79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fa7c:	8b 00                	mov    (%eax),%eax
 854fa7e:	89 c2                	mov    %eax,%edx
 854fa80:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa83:	88 50 06             	mov    %dl,0x6(%eax)
 854fa86:	c9                   	leave
 854fa87:	c3                   	ret

```

```c
// CSimpleLog::DateTime::DateTime @ 0x854fa02

/* CSimpleLog::DateTime::DateTime() */

void __thiscall CSimpleLog::DateTime::DateTime(DateTime *this)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime_r(local_14,&local_40);
  *(short *)this = (short)ptVar1->tm_year + 0x76c;
  this[2] = (DateTime)((char)ptVar1->tm_mon + '\x01');
  this[3] = SUB41(ptVar1->tm_mday,0);
  this[4] = SUB41(ptVar1->tm_hour,0);
  this[5] = SUB41(ptVar1->tm_min,0);
  this[6] = SUB41(ptVar1->tm_sec,0);
  return;
}

```

