# Dispatcher_RequestMatch

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08217ad0 Dispatcher_RequestMatch::dispatch_sig  [0x08217ad0-0x8217bd5] ===
 8217ad0:	55                   	push   %ebp
 8217ad1:	89 e5                	mov    %esp,%ebp
 8217ad3:	83 ec 28             	sub    $0x28,%esp
 8217ad6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217ad9:	89 04 24             	mov    %eax,(%esp)
 8217adc:	e8 ab 28 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8217ae1:	83 f8 02             	cmp    $0x2,%eax
 8217ae4:	0f 9e c0             	setle  %al
 8217ae7:	84 c0                	test   %al,%al
 8217ae9:	74 0a                	je     8217af5 <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8217aeb:	b8 00 00 00 00       	mov    $0x0,%eax
 8217af0:	e9 df 00 00 00       	jmp    8217bd4 <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x104>
 8217af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217af8:	89 04 24             	mov    %eax,(%esp)
 8217afb:	e8 8e d6 43 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 8217b00:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8217b03:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8217b07:	75 0a                	jne    8217b13 <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x43>
 8217b09:	b8 00 00 00 00       	mov    $0x0,%eax
 8217b0e:	e9 c1 00 00 00       	jmp    8217bd4 <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x104>
 8217b13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8217b16:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8217b1c:	85 c0                	test   %eax,%eax
 8217b1e:	75 0a                	jne    8217b2a <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x5a>
 8217b20:	b8 00 00 00 00       	mov    $0x0,%eax
 8217b25:	e9 aa 00 00 00       	jmp    8217bd4 <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x104>
 8217b2a:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8217b2e:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8217b31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217b35:	8b 45 10             	mov    0x10(%ebp),%eax
 8217b38:	89 04 24             	mov    %eax,(%esp)
 8217b3b:	e8 30 54 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8217b40:	83 f0 01             	xor    $0x1,%eax
 8217b43:	84 c0                	test   %al,%al
 8217b45:	74 26                	je     8217b6d <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x9d>
 8217b47:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217b4e:	00 
 8217b4f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217b56:	00 
 8217b57:	c7 44 24 04 80 d9 bc 	movl   $0x8bcd980,0x4(%esp)
 8217b5e:	08 
 8217b5f:	c7 04 24 c4 c9 00 00 	movl   $0xc9c4,(%esp)
 8217b66:	e8 6c 8d 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217b6b:	eb 67                	jmp    8217bd4 <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0x104>
 8217b6d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8217b71:	84 c0                	test   %al,%al
 8217b73:	74 2e                	je     8217ba3 <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8217b75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8217b78:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8217b7e:	8b 00                	mov    (%eax),%eax
 8217b80:	83 c0 34             	add    $0x34,%eax
 8217b83:	8b 08                	mov    (%eax),%ecx
 8217b85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8217b88:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8217b8e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8217b91:	89 54 24 08          	mov    %edx,0x8(%esp)
 8217b95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8217b98:	89 54 24 04          	mov    %edx,0x4(%esp)
 8217b9c:	89 04 24             	mov    %eax,(%esp)
 8217b9f:	ff d1                	call   *%ecx
 8217ba1:	eb 2c                	jmp    8217bcf <_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf+0xff>
 8217ba3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8217ba6:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8217bac:	8b 00                	mov    (%eax),%eax
 8217bae:	83 c0 30             	add    $0x30,%eax
 8217bb1:	8b 08                	mov    (%eax),%ecx
 8217bb3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8217bb6:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8217bbc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8217bbf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8217bc3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8217bc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8217bca:	89 04 24             	mov    %eax,(%esp)
 8217bcd:	ff d1                	call   *%ecx
 8217bcf:	b8 00 00 00 00       	mov    $0x0,%eax
 8217bd4:	c9                   	leave
 8217bd5:	c3                   	ret

```

```c
// Dispatcher_RequestMatch::dispatch_sig @ 0x8217ad0

/* Dispatcher_RequestMatch::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestMatch::dispatch_sig
          (Dispatcher_RequestMatch *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uchar local_11;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_10 = CUser::GetPVPRoom(param_1);
    if (local_10 == 0) {
      uVar3 = 0;
    }
    else if (*(int *)(local_10 + 0x6e4) == 0) {
      uVar3 = 0;
    }
    else {
      local_11 = '\0';
      cVar1 = PacketBuf::get_byte(param_2,&local_11);
      if (cVar1 == '\x01') {
        if (local_11 == '\0') {
          (**(code **)(**(int **)(local_10 + 0x6e4) + 0x30))
                    (*(undefined4 *)(local_10 + 0x6e4),param_1,local_10);
        }
        else {
          (**(code **)(**(int **)(local_10 + 0x6e4) + 0x34))
                    (*(undefined4 *)(local_10 + 0x6e4),param_1,local_10);
        }
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xc9c4,
                         "virtual int Dispatcher_RequestMatch::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
  }
  return uVar3;
}

```

