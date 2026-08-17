# WongWork__DBCommon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetIdentity

```asm
// === 083f9ad4 WongWork::DBCommon::GetIdentity  [0x083f9ad4-0x83f9b53] ===
 83f9ad4:	55                   	push   %ebp
 83f9ad5:	89 e5                	mov    %esp,%ebp
 83f9ad7:	83 ec 28             	sub    $0x28,%esp
 83f9ada:	c7 44 24 04 53 5b c3 	movl   $0x8c35b53,0x4(%esp)
 83f9ae1:	08 
 83f9ae2:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9ae5:	89 04 24             	mov    %eax,(%esp)
 83f9ae8:	e8 d3 a6 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83f9aed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f9af4:	00 
 83f9af5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9af8:	89 04 24             	mov    %eax,(%esp)
 83f9afb:	e8 26 a8 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83f9b00:	83 f0 01             	xor    $0x1,%eax
 83f9b03:	84 c0                	test   %al,%al
 83f9b05:	74 07                	je     83f9b0e <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3a>
 83f9b07:	b8 00 00 00 00       	mov    $0x0,%eax
 83f9b0c:	eb 44                	jmp    83f9b52 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7e>
 83f9b0e:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9b11:	89 04 24             	mov    %eax,(%esp)
 83f9b14:	e8 a3 a9 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83f9b19:	83 f0 01             	xor    $0x1,%eax
 83f9b1c:	84 c0                	test   %al,%al
 83f9b1e:	74 07                	je     83f9b27 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x53>
 83f9b20:	b8 00 00 00 00       	mov    $0x0,%eax
 83f9b25:	eb 2b                	jmp    83f9b52 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7e>
 83f9b27:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83f9b2a:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9b2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f9b35:	00 
 83f9b36:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9b39:	89 04 24             	mov    %eax,(%esp)
 83f9b3c:	e8 b1 87 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 83f9b41:	83 f0 01             	xor    $0x1,%eax
 83f9b44:	84 c0                	test   %al,%al
 83f9b46:	74 07                	je     83f9b4f <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7b>
 83f9b48:	b8 00 00 00 00       	mov    $0x0,%eax
 83f9b4d:	eb 03                	jmp    83f9b52 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7e>
 83f9b4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9b52:	c9                   	leave
 83f9b53:	c3                   	ret

```

```c
// WongWork::DBCommon::GetIdentity @ 0x83f9ad4

/* WongWork::DBCommon::GetIdentity(MySQL*) */

uint WongWork::DBCommon::GetIdentity(MySQL *param_1)

{
  char cVar1;
  uint local_10 [3];
  
  MySQL::set_query(param_1,"seLect @@identity");
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(param_1);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_uint(param_1,0,local_10);
      if (cVar1 != '\x01') {
        local_10[0] = 0;
      }
    }
    else {
      local_10[0] = 0;
    }
  }
  else {
    local_10[0] = 0;
  }
  return local_10[0];
}

```

