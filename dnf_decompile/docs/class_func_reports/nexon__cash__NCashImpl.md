# nexon__cash__NCashImpl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## NCashImpl

```asm
// === 081acfdc nexon::cash::NCashImpl::NCashImpl  [0x081acfdc-0x81ad07f] ===
 81acfdc:	55                   	push   %ebp
 81acfdd:	89 e5                	mov    %esp,%ebp
 81acfdf:	53                   	push   %ebx
 81acfe0:	83 ec 24             	sub    $0x24,%esp
 81acfe3:	8b 5d 10             	mov    0x10(%ebp),%ebx
 81acfe6:	8b 4d 14             	mov    0x14(%ebp),%ecx
 81acfe9:	8b 55 18             	mov    0x18(%ebp),%edx
 81acfec:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81acfef:	66 89 5d f4          	mov    %bx,-0xc(%ebp)
 81acff3:	88 4d f0             	mov    %cl,-0x10(%ebp)
 81acff6:	66 89 55 ec          	mov    %dx,-0x14(%ebp)
 81acffa:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 81acffe:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad001:	83 c0 20             	add    $0x20,%eax
 81ad004:	89 04 24             	mov    %eax,(%esp)
 81ad007:	e8 c0 24 00 00       	call   81af4cc <_ZN5nexon4cash9TCPSocketC1Ev>
 81ad00c:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad00f:	83 c0 40             	add    $0x40,%eax
 81ad012:	89 04 24             	mov    %eax,(%esp)
 81ad015:	e8 14 15 00 00       	call   81ae52e <_ZN5nexon4cash12NCashMessageC1Ev>
 81ad01a:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad01d:	05 48 02 00 00       	add    $0x248,%eax
 81ad022:	89 04 24             	mov    %eax,(%esp)
 81ad025:	e8 04 15 00 00       	call   81ae52e <_ZN5nexon4cash12NCashMessageC1Ev>
 81ad02a:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad02d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 81ad034:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad037:	0f b6 55 f0          	movzbl -0x10(%ebp),%edx
 81ad03b:	88 10                	mov    %dl,(%eax)
 81ad03d:	0f b7 55 ec          	movzwl -0x14(%ebp),%edx
 81ad041:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad044:	66 89 50 02          	mov    %dx,0x2(%eax)
 81ad048:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad04b:	0f b7 55 e8          	movzwl -0x18(%ebp),%edx
 81ad04f:	66 89 50 04          	mov    %dx,0x4(%eax)
 81ad053:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad056:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 81ad05a:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad05d:	8d 50 0d             	lea    0xd(%eax),%edx
 81ad060:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad063:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad067:	89 14 24             	mov    %edx,(%esp)
 81ad06a:	e8 81 0e ed ff       	call   807def0 <strcpy@plt>
 81ad06f:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad072:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 81ad076:	66 89 50 1e          	mov    %dx,0x1e(%eax)
 81ad07a:	83 c4 24             	add    $0x24,%esp
 81ad07d:	5b                   	pop    %ebx
 81ad07e:	5d                   	pop    %ebp
 81ad07f:	c3                   	ret

```

```c
// nexon::cash::NCashImpl::NCashImpl @ 0x81acfdc

/* nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short) */

void __thiscall
nexon::cash::NCashImpl::NCashImpl
          (NCashImpl *this,char *param_1,short param_2,uchar param_3,ushort param_4,short param_5)

{
  TCPSocket::TCPSocket((TCPSocket *)(this + 0x20));
  NCashMessage::NCashMessage((NCashMessage *)(this + 0x40));
  NCashMessage::NCashMessage((NCashMessage *)(this + 0x248));
  *(undefined4 *)(this + 8) = 0;
  *this = (NCashImpl)param_3;
  *(ushort *)(this + 2) = param_4;
  *(short *)(this + 4) = param_5;
  this[0xc] = (NCashImpl)0x0;
  strcpy((char *)(this + 0xd),param_1);
  *(short *)(this + 0x1e) = param_2;
  return;
}

```

---

## cancel

```asm
// === 081add04 nexon::cash::NCashImpl::cancel  [0x081add04-0x81ade33] ===
 81add04:	55                   	push   %ebp
 81add05:	89 e5                	mov    %esp,%ebp
 81add07:	83 ec 68             	sub    $0x68,%esp
 81add0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81add0d:	88 45 c4             	mov    %al,-0x3c(%ebp)
 81add10:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81add14:	75 0a                	jne    81add20 <_ZN5nexon4cash9NCashImpl6cancelEhj+0x1c>
 81add16:	b8 00 00 00 00       	mov    $0x0,%eax
 81add1b:	e9 11 01 00 00       	jmp    81ade31 <_ZN5nexon4cash9NCashImpl6cancelEhj+0x12d>
 81add20:	8b 45 08             	mov    0x8(%ebp),%eax
 81add23:	89 04 24             	mov    %eax,(%esp)
 81add26:	e8 55 f3 ff ff       	call   81ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>
 81add2b:	83 f0 01             	xor    $0x1,%eax
 81add2e:	84 c0                	test   %al,%al
 81add30:	74 0a                	je     81add3c <_ZN5nexon4cash9NCashImpl6cancelEhj+0x38>
 81add32:	b8 02 00 00 00       	mov    $0x2,%eax
 81add37:	e9 f5 00 00 00       	jmp    81ade31 <_ZN5nexon4cash9NCashImpl6cancelEhj+0x12d>
 81add3c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81add3f:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 81add46:	00 
 81add47:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81add4e:	00 
 81add4f:	8b 55 08             	mov    0x8(%ebp),%edx
 81add52:	89 54 24 04          	mov    %edx,0x4(%esp)
 81add56:	89 04 24             	mov    %eax,(%esp)
 81add59:	e8 88 f3 ff ff       	call   81ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>
 81add5e:	83 ec 04             	sub    $0x4,%esp
 81add61:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 81add65:	89 44 24 04          	mov    %eax,0x4(%esp)
 81add69:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81add6c:	89 04 24             	mov    %eax,(%esp)
 81add6f:	e8 a0 08 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81add74:	8b 45 10             	mov    0x10(%ebp),%eax
 81add77:	89 44 24 04          	mov    %eax,0x4(%esp)
 81add7b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81add7e:	89 04 24             	mov    %eax,(%esp)
 81add81:	e8 c6 09 00 00       	call   81ae74c <_ZN5nexon4cash10ByteBufferlsEj>
 81add86:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81add8d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81add90:	89 04 24             	mov    %eax,(%esp)
 81add93:	e8 c8 f1 ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81add98:	89 44 24 04          	mov    %eax,0x4(%esp)
 81add9c:	8b 45 08             	mov    0x8(%ebp),%eax
 81add9f:	89 04 24             	mov    %eax,(%esp)
 81adda2:	e8 85 0e 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81adda7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81addaa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81addae:	74 05                	je     81addb5 <_ZN5nexon4cash9NCashImpl6cancelEhj+0xb1>
 81addb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81addb3:	eb 7c                	jmp    81ade31 <_ZN5nexon4cash9NCashImpl6cancelEhj+0x12d>
 81addb5:	8b 45 08             	mov    0x8(%ebp),%eax
 81addb8:	89 04 24             	mov    %eax,(%esp)
 81addbb:	e8 86 0c 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81addc0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81addc3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81addc7:	74 05                	je     81addce <_ZN5nexon4cash9NCashImpl6cancelEhj+0xca>
 81addc9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81addcc:	eb 63                	jmp    81ade31 <_ZN5nexon4cash9NCashImpl6cancelEhj+0x12d>
 81addce:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81addd1:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81addd4:	89 54 24 10          	mov    %edx,0x10(%esp)
 81addd8:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 81adddb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81adddf:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 81adde2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81adde6:	8b 55 08             	mov    0x8(%ebp),%edx
 81adde9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81added:	89 04 24             	mov    %eax,(%esp)
 81addf0:	e8 73 f3 ff ff       	call   81ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>
 81addf5:	83 ec 04             	sub    $0x4,%esp
 81addf8:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81addfc:	3c 03                	cmp    $0x3,%al
 81addfe:	74 18                	je     81ade18 <_ZN5nexon4cash9NCashImpl6cancelEhj+0x114>
 81ade00:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81ade04:	0f b6 c0             	movzbl %al,%eax
 81ade07:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ade0b:	8b 45 08             	mov    0x8(%ebp),%eax
 81ade0e:	89 04 24             	mov    %eax,(%esp)
 81ade11:	e8 ca f3 ff ff       	call   81ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>
 81ade16:	eb 19                	jmp    81ade31 <_ZN5nexon4cash9NCashImpl6cancelEhj+0x12d>
 81ade18:	c7 44 24 04 6e 49 bb 	movl   $0x8bb496e,0x4(%esp)
 81ade1f:	08 
 81ade20:	c7 04 24 6d 43 bb 08 	movl   $0x8bb436d,(%esp)
 81ade27:	e8 34 fd ec ff       	call   807db60 <printf@plt>
 81ade2c:	b8 00 00 00 00       	mov    $0x0,%eax
 81ade31:	c9                   	leave
 81ade32:	c3                   	ret
 81ade33:	90                   	nop

```

```c
// nexon::cash::NCashImpl::cancel @ 0x81add04

/* nexon::cash::NCashImpl::cancel(unsigned char, unsigned int) */

int __thiscall nexon::cash::NCashImpl::cancel(NCashImpl *this,uchar param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uchar local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    cVar1 = reconnect(this);
    if (cVar1 == '\x01') {
      set_data_header((char)&local_21 + '\x01',(uchar)this);
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_1);
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_2);
      local_10 = 0;
      uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
      local_10 = send_msg(this,uVar2);
      if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
        puVar5 = local_28;
        pbVar4 = &local_22;
        puVar3 = &local_21;
        get_data_header(local_38,(uchar *)this,puVar3);
        if (local_22 == 3) {
          printf("[%s] E_PURCHASE_CONFIRM\n","cancel",puVar3,pbVar4,puVar5);
          local_10 = 0;
        }
        else {
          local_10 = handle_cash_error(this,(uint)local_22);
        }
      }
    }
    else {
      local_10 = 2;
    }
  }
  return local_10;
}

```

---

## chargeCash

```asm
// === 081ade34 nexon::cash::NCashImpl::chargeCash  [0x081ade34-0x81ae1af] ===
 81ade34:	55                   	push   %ebp
 81ade35:	89 e5                	mov    %esp,%ebp
 81ade37:	53                   	push   %ebx
 81ade38:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 81ade3e:	8b 55 10             	mov    0x10(%ebp),%edx
 81ade41:	8b 45 14             	mov    0x14(%ebp),%eax
 81ade44:	88 95 74 ff ff ff    	mov    %dl,-0x8c(%ebp)
 81ade4a:	88 85 70 ff ff ff    	mov    %al,-0x90(%ebp)
 81ade50:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81ade53:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ade5a:	00 
 81ade5b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81ade62:	00 
 81ade63:	8b 55 08             	mov    0x8(%ebp),%edx
 81ade66:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ade6a:	89 04 24             	mov    %eax,(%esp)
 81ade6d:	e8 74 f2 ff ff       	call   81ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>
 81ade72:	83 ec 04             	sub    $0x4,%esp
 81ade75:	c7 45 d4 0b f8 c3 e8 	movl   $0xe8c3f80b,-0x2c(%ebp)
 81ade7c:	c7 45 d8 6f 26 d8 f3 	movl   $0xf3d8266f,-0x28(%ebp)
 81ade83:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81ade8a:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 81ade91:	00 
 81ade92:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ade99:	00 
 81ade9a:	c7 04 24 40 56 40 09 	movl   $0x9405640,(%esp)
 81adea1:	e8 1a fe ec ff       	call   807dcc0 <memset@plt>
 81adea6:	c7 44 24 08 a0 0f 00 	movl   $0xfa0,0x8(%esp)
 81adead:	00 
 81adeae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81adeb5:	00 
 81adeb6:	c7 04 24 40 5a 40 09 	movl   $0x9405a40,(%esp)
 81adebd:	e8 fe fd ec ff       	call   807dcc0 <memset@plt>
 81adec2:	c7 44 24 08 a0 0f 00 	movl   $0xfa0,0x8(%esp)
 81adec9:	00 
 81adeca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81aded1:	00 
 81aded2:	c7 04 24 e0 69 40 09 	movl   $0x94069e0,(%esp)
 81aded9:	e8 e2 fd ec ff       	call   807dcc0 <memset@plt>
 81adede:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 81adee5:	00 
 81adee6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81adeed:	00 
 81adeee:	c7 04 24 80 79 40 09 	movl   $0x9407980,(%esp)
 81adef5:	e8 c6 fd ec ff       	call   807dcc0 <memset@plt>
 81adefa:	c7 45 99 25 73 7c 25 	movl   $0x257c7325,-0x67(%ebp)
 81adf01:	c7 45 9d 69 7c 25 69 	movl   $0x69257c69,-0x63(%ebp)
 81adf08:	c7 45 a1 7c 25 69 7c 	movl   $0x7c69257c,-0x5f(%ebp)
 81adf0f:	c7 45 a5 25 73 7c 25 	movl   $0x257c7325,-0x5b(%ebp)
 81adf16:	c7 45 a9 73 7c 25 73 	movl   $0x73257c73,-0x57(%ebp)
 81adf1d:	c7 45 ad 7c 25 73 7c 	movl   $0x7c73257c,-0x53(%ebp)
 81adf24:	66 c7 45 b1 25 69    	movw   $0x6925,-0x4f(%ebp)
 81adf2a:	c6 45 b3 00          	movb   $0x0,-0x4d(%ebp)
 81adf2e:	0f b6 95 70 ff ff ff 	movzbl -0x90(%ebp),%edx
 81adf35:	0f b6 85 74 ff ff ff 	movzbl -0x8c(%ebp),%eax
 81adf3c:	8b 4d 2c             	mov    0x2c(%ebp),%ecx
 81adf3f:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 81adf43:	8b 4d 28             	mov    0x28(%ebp),%ecx
 81adf46:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 81adf4a:	8b 4d 24             	mov    0x24(%ebp),%ecx
 81adf4d:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 81adf51:	8b 4d 20             	mov    0x20(%ebp),%ecx
 81adf54:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81adf58:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 81adf5b:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81adf5f:	8b 4d 18             	mov    0x18(%ebp),%ecx
 81adf62:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81adf66:	89 54 24 14          	mov    %edx,0x14(%esp)
 81adf6a:	89 44 24 10          	mov    %eax,0x10(%esp)
 81adf6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81adf71:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81adf75:	8d 45 99             	lea    -0x67(%ebp),%eax
 81adf78:	89 44 24 08          	mov    %eax,0x8(%esp)
 81adf7c:	c7 44 24 04 e8 03 00 	movl   $0x3e8,0x4(%esp)
 81adf83:	00 
 81adf84:	c7 04 24 40 56 40 09 	movl   $0x9405640,(%esp)
 81adf8b:	e8 50 fc ec ff       	call   807dbe0 <snprintf@plt>
 81adf90:	c7 04 24 40 56 40 09 	movl   $0x9405640,(%esp)
 81adf97:	e8 14 04 ed ff       	call   807e3b0 <strlen@plt>
 81adf9c:	83 c0 01             	add    $0x1,%eax
 81adf9f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81adfa2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81adfa5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81adfa9:	c7 44 24 04 40 56 40 	movl   $0x9405640,0x4(%esp)
 81adfb0:	09 
 81adfb1:	c7 04 24 40 5a 40 09 	movl   $0x9405a40,(%esp)
 81adfb8:	e8 23 fb ec ff       	call   807dae0 <mbstowcs@plt>
 81adfbd:	c7 04 24 40 5a 40 09 	movl   $0x9405a40,(%esp)
 81adfc4:	e8 67 01 ed ff       	call   807e130 <wcslen@plt>
 81adfc9:	8d 14 00             	lea    (%eax,%eax,1),%edx
 81adfcc:	b8 40 5a 40 09       	mov    $0x9405a40,%eax
 81adfd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81adfd5:	89 04 24             	mov    %eax,(%esp)
 81adfd8:	e8 b3 01 ed ff       	call   807e190 <_ZN10Encryption7Adler32EPcj@plt>
 81adfdd:	ba 00 00 00 00       	mov    $0x0,%edx
 81adfe2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81adfe5:	89 55 ec             	mov    %edx,-0x14(%ebp)
 81adfe8:	c7 44 24 08 64 de 1b 	movl   $0x1b1bde64,0x8(%esp)
 81adfef:	1b 
 81adff0:	c7 44 24 04 e0 69 40 	movl   $0x94069e0,0x4(%esp)
 81adff7:	09 
 81adff8:	c7 04 24 40 5a 40 09 	movl   $0x9405a40,(%esp)
 81adfff:	e8 dc 08 ed ff       	call   807e8e0 <_ZN10Encryption21EncodeDressStringWideEPKwPwm@plt>
 81ae004:	c7 04 24 e0 69 40 09 	movl   $0x94069e0,(%esp)
 81ae00b:	e8 20 01 ed ff       	call   807e130 <wcslen@plt>
 81ae010:	83 c0 01             	add    $0x1,%eax
 81ae013:	01 c0                	add    %eax,%eax
 81ae015:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ae018:	c7 04 24 e0 69 40 09 	movl   $0x94069e0,(%esp)
 81ae01f:	e8 0c 01 ed ff       	call   807e130 <wcslen@plt>
 81ae024:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ae028:	c7 44 24 04 e0 69 40 	movl   $0x94069e0,0x4(%esp)
 81ae02f:	09 
 81ae030:	c7 04 24 80 79 40 09 	movl   $0x9407980,(%esp)
 81ae037:	e8 84 f8 ec ff       	call   807d8c0 <wcstombs@plt>
 81ae03c:	c7 44 24 04 80 79 40 	movl   $0x9407980,0x4(%esp)
 81ae043:	09 
 81ae044:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81ae047:	89 04 24             	mov    %eax,(%esp)
 81ae04a:	e8 51 eb ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ae04f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81ae052:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81ae055:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae059:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae05d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81ae060:	89 04 24             	mov    %eax,(%esp)
 81ae063:	e8 6c 07 00 00       	call   81ae7d4 <_ZN5nexon4cash10ByteBufferlsEy>
 81ae068:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ae06b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81ae06e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae072:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae076:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81ae079:	89 04 24             	mov    %eax,(%esp)
 81ae07c:	e8 53 07 00 00       	call   81ae7d4 <_ZN5nexon4cash10ByteBufferlsEy>
 81ae081:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ae088:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81ae08b:	89 04 24             	mov    %eax,(%esp)
 81ae08e:	e8 cd ee ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81ae093:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae097:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae09a:	89 04 24             	mov    %eax,(%esp)
 81ae09d:	e8 8a 0b 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81ae0a2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ae0a5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ae0a9:	74 08                	je     81ae0b3 <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE+0x27f>
 81ae0ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ae0ae:	e9 f7 00 00 00       	jmp    81ae1aa <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE+0x376>
 81ae0b3:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae0b6:	89 04 24             	mov    %eax,(%esp)
 81ae0b9:	e8 88 09 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81ae0be:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ae0c1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ae0c5:	74 08                	je     81ae0cf <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE+0x29b>
 81ae0c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ae0ca:	e9 db 00 00 00       	jmp    81ae1aa <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE+0x376>
 81ae0cf:	8d 45 80             	lea    -0x80(%ebp),%eax
 81ae0d2:	8d 55 90             	lea    -0x70(%ebp),%edx
 81ae0d5:	89 54 24 10          	mov    %edx,0x10(%esp)
 81ae0d9:	8d 55 97             	lea    -0x69(%ebp),%edx
 81ae0dc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ae0e0:	8d 55 98             	lea    -0x68(%ebp),%edx
 81ae0e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae0e7:	8b 55 08             	mov    0x8(%ebp),%edx
 81ae0ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ae0ee:	89 04 24             	mov    %eax,(%esp)
 81ae0f1:	e8 72 f0 ff ff       	call   81ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>
 81ae0f6:	83 ec 04             	sub    $0x4,%esp
 81ae0f9:	0f b6 45 97          	movzbl -0x69(%ebp),%eax
 81ae0fd:	3c 02                	cmp    $0x2,%al
 81ae0ff:	74 52                	je     81ae153 <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE+0x31f>
 81ae101:	0f b6 45 97          	movzbl -0x69(%ebp),%eax
 81ae105:	0f b6 d8             	movzbl %al,%ebx
 81ae108:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ae10f:	00 
 81ae110:	c7 44 24 08 03 03 00 	movl   $0x303,0x8(%esp)
 81ae117:	00 
 81ae118:	c7 44 24 04 50 49 bb 	movl   $0x8bb4950,0x4(%esp)
 81ae11f:	08 
 81ae120:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ae123:	89 04 24             	mov    %eax,(%esp)
 81ae126:	e8 ed 15 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ae12b:	c7 44 24 0c 40 56 40 	movl   $0x9405640,0xc(%esp)
 81ae132:	09 
 81ae133:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ae137:	c7 44 24 04 88 43 bb 	movl   $0x8bb4388,0x4(%esp)
 81ae13e:	08 
 81ae13f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ae142:	89 04 24             	mov    %eax,(%esp)
 81ae145:	e8 3e 16 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ae14a:	0f b6 45 97          	movzbl -0x69(%ebp),%eax
 81ae14e:	0f b6 c0             	movzbl %al,%eax
 81ae151:	eb 57                	jmp    81ae1aa <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE+0x376>
 81ae153:	8b 45 30             	mov    0x30(%ebp),%eax
 81ae156:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae15a:	8d 45 80             	lea    -0x80(%ebp),%eax
 81ae15d:	89 04 24             	mov    %eax,(%esp)
 81ae160:	e8 57 07 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81ae165:	8b 45 30             	mov    0x30(%ebp),%eax
 81ae168:	83 c0 04             	add    $0x4,%eax
 81ae16b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae16f:	8d 45 80             	lea    -0x80(%ebp),%eax
 81ae172:	89 04 24             	mov    %eax,(%esp)
 81ae175:	e8 d4 07 00 00       	call   81ae94e <_ZN5nexon4cash10ByteBufferrsERj>
 81ae17a:	8b 45 30             	mov    0x30(%ebp),%eax
 81ae17d:	8b 50 04             	mov    0x4(%eax),%edx
 81ae180:	8b 45 30             	mov    0x30(%ebp),%eax
 81ae183:	0f b6 00             	movzbl (%eax),%eax
 81ae186:	0f b6 c0             	movzbl %al,%eax
 81ae189:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ae18d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ae191:	c7 44 24 04 50 49 bb 	movl   $0x8bb4950,0x4(%esp)
 81ae198:	08 
 81ae199:	c7 04 24 c4 43 bb 08 	movl   $0x8bb43c4,(%esp)
 81ae1a0:	e8 bb f9 ec ff       	call   807db60 <printf@plt>
 81ae1a5:	b8 00 00 00 00       	mov    $0x0,%eax
 81ae1aa:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81ae1ad:	c9                   	leave
 81ae1ae:	c3                   	ret
 81ae1af:	90                   	nop

```

```c
// nexon::cash::NCashImpl::chargeCash @ 0x81ade34

/* nexon::cash::NCashImpl::chargeCash(char*, unsigned char, unsigned char, int, char*, char*, char*,
   char*, int, nexon::cash::NXTransaction&) */

uint __thiscall
nexon::cash::NCashImpl::chargeCash
          (NCashImpl *this,char *param_1,uchar param_2,uchar param_3,int param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,int param_9,NXTransaction *param_10)

{
  size_t sVar1;
  uint uVar2;
  undefined1 *puVar3;
  ByteBuffer local_84 [16];
  undefined1 local_74 [7];
  byte local_6d;
  undefined1 local_6c [5];
  undefined4 local_67;
  undefined4 local_63;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  ByteBuffer local_50 [16];
  cMyTrace local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  size_t local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  set_data_header((uchar)local_50,(uchar)this);
  local_30 = 0xe8c3f80b;
  local_2c = 0xf3d8266f;
  local_28 = 0;
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::data,0,1000);
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::wide_data,0,4000);
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::enc_data,0,4000);
  memset(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
         ::send_data,0,1000);
  local_6c._1_4_ = 0x257c7325;
  local_67 = 0x69257c69;
  local_63 = 0x7c69257c;
  local_5f = 0x257c7325;
  local_5b = 0x73257c73;
  local_57 = 0x7c73257c;
  local_53 = 0x6925;
  local_51 = 0;
  snprintf(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::data,1000,local_6c + 1,param_1,(uint)param_2,(uint)param_3,param_4,param_5,param_6,
           param_7,param_8,param_9);
  local_20 = strlen(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                    ::data);
  local_20 = local_20 + 1;
  mbstowcs((wchar_t *)
           chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::wide_data,
           chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::data,local_20);
  sVar1 = wcslen((wchar_t *)
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::wide_data);
  local_1c = Encryption::Adler32(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                                 ::wide_data,sVar1 * 2);
  local_18 = 0;
  Encryption::EncodeDressStringWide
            ((wchar_t *)
             chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
             ::wide_data,
             (wchar_t *)
             chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
             ::enc_data,0x1b1bde64);
  sVar1 = wcslen((wchar_t *)
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::enc_data);
  local_14 = (sVar1 + 1) * 2;
  sVar1 = wcslen((wchar_t *)
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::enc_data);
  wcstombs(chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::send_data,
           (wchar_t *)
           chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
           ::enc_data,sVar1);
  ByteBuffer::operator<<
            (local_50,chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                      ::send_data);
  ByteBuffer::operator<<(local_50,CONCAT44(local_28,local_2c));
  ByteBuffer::operator<<(local_50,CONCAT44(local_18,local_1c));
  local_10 = 0;
  uVar2 = ByteBuffer::length(local_50);
  local_10 = send_msg(this,uVar2);
  if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
    puVar3 = local_74;
    get_data_header((uchar *)local_84,(uchar *)this,(uint *)local_6c);
    if (local_6d == 2) {
      ByteBuffer::operator>>(local_84,(uchar *)param_10);
      ByteBuffer::operator>>(local_84,(uint *)(param_10 + 4));
      printf("[%s] CHARGE_CASH OK, db_id: %u, transaction_id: %u\n","chargeCash",
             (uint)(byte)*param_10,*(undefined4 *)(param_10 + 4),puVar3);
      local_10 = 0;
    }
    else {
      uVar2 = (uint)local_6d;
      cMyTrace::cMyTrace(local_40,"chargeCash",0x303,0);
      cMyTrace::operator()
                (local_40,"NCashImpl::chargeCash Recv Error!! packet_id:%d, data:%s",uVar2,
                 chargeCash(char*,unsigned_char,unsigned_char,int,char*,char*,char*,char*,int,nexon::cash::NXTransaction&)
                 ::data);
      local_10 = (uint)local_6d;
    }
  }
  return local_10;
}

```

---

## checkEntrance

```asm
// === 081ad316 nexon::cash::NCashImpl::checkEntrance  [0x081ad316-0x81ad49d] ===
 81ad316:	55                   	push   %ebp
 81ad317:	89 e5                	mov    %esp,%ebp
 81ad319:	53                   	push   %ebx
 81ad31a:	83 ec 44             	sub    $0x44,%esp
 81ad31d:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad320:	89 04 24             	mov    %eax,(%esp)
 81ad323:	e8 58 fd ff ff       	call   81ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>
 81ad328:	83 f0 01             	xor    $0x1,%eax
 81ad32b:	84 c0                	test   %al,%al
 81ad32d:	74 0a                	je     81ad339 <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc+0x23>
 81ad32f:	b8 02 00 00 00       	mov    $0x2,%eax
 81ad334:	e9 5f 01 00 00       	jmp    81ad498 <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc+0x182>
 81ad339:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad33c:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81ad340:	88 45 f3             	mov    %al,-0xd(%ebp)
 81ad343:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad346:	05 48 02 00 00       	add    $0x248,%eax
 81ad34b:	89 04 24             	mov    %eax,(%esp)
 81ad34e:	e8 0d 12 00 00       	call   81ae560 <_ZN5nexon4cash12NCashMessage4bodyEv>
 81ad353:	c7 44 24 08 00 02 00 	movl   $0x200,0x8(%esp)
 81ad35a:	00 
 81ad35b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad35f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ad362:	89 04 24             	mov    %eax,(%esp)
 81ad365:	e8 78 16 00 00       	call   81ae9e2 <_ZN5nexon4cash10ByteBufferC1EPcj>
 81ad36a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81ad371:	00 
 81ad372:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ad375:	89 04 24             	mov    %eax,(%esp)
 81ad378:	e8 97 12 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81ad37d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ad384:	00 
 81ad385:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ad388:	89 04 24             	mov    %eax,(%esp)
 81ad38b:	e8 84 12 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81ad390:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 81ad394:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad398:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ad39b:	89 04 24             	mov    %eax,(%esp)
 81ad39e:	e8 71 12 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81ad3a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad3a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad3aa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ad3ad:	89 04 24             	mov    %eax,(%esp)
 81ad3b0:	e8 eb f7 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ad3b5:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad3b8:	89 04 24             	mov    %eax,(%esp)
 81ad3bb:	e8 72 16 00 00       	call   81aea32 <_ZN5nexon4cash9NCashImpl18_increaseRequestIDEv>
 81ad3c0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ad3c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ad3ca:	89 04 24             	mov    %eax,(%esp)
 81ad3cd:	e8 8e fb ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81ad3d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad3d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad3d9:	89 04 24             	mov    %eax,(%esp)
 81ad3dc:	e8 4b 18 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81ad3e1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad3e4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad3e8:	74 08                	je     81ad3f2 <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc+0xdc>
 81ad3ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad3ed:	e9 a6 00 00 00       	jmp    81ad498 <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc+0x182>
 81ad3f2:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad3f5:	89 04 24             	mov    %eax,(%esp)
 81ad3f8:	e8 49 16 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81ad3fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad400:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad404:	74 08                	je     81ad40e <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc+0xf8>
 81ad406:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad409:	e9 8a 00 00 00       	jmp    81ad498 <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc+0x182>
 81ad40e:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad411:	83 c0 40             	add    $0x40,%eax
 81ad414:	89 04 24             	mov    %eax,(%esp)
 81ad417:	e8 50 11 00 00       	call   81ae56c <_ZN5nexon4cash12NCashMessage11body_lengthEv>
 81ad41c:	0f b7 d8             	movzwl %ax,%ebx
 81ad41f:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad422:	83 c0 40             	add    $0x40,%eax
 81ad425:	89 04 24             	mov    %eax,(%esp)
 81ad428:	e8 33 11 00 00       	call   81ae560 <_ZN5nexon4cash12NCashMessage4bodyEv>
 81ad42d:	8d 55 cc             	lea    -0x34(%ebp),%edx
 81ad430:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ad434:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad438:	89 14 24             	mov    %edx,(%esp)
 81ad43b:	e8 78 15 00 00       	call   81ae9b8 <_ZN5nexon4cash10ByteBuffer4wrapEPcj>
 81ad440:	83 ec 04             	sub    $0x4,%esp
 81ad443:	8d 45 df             	lea    -0x21(%ebp),%eax
 81ad446:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad44a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad44d:	89 04 24             	mov    %eax,(%esp)
 81ad450:	e8 67 14 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81ad455:	8d 45 de             	lea    -0x22(%ebp),%eax
 81ad458:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad45c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad45f:	89 04 24             	mov    %eax,(%esp)
 81ad462:	e8 55 14 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81ad467:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 81ad46b:	89 c2                	mov    %eax,%edx
 81ad46d:	8b 45 10             	mov    0x10(%ebp),%eax
 81ad470:	88 10                	mov    %dl,(%eax)
 81ad472:	8b 45 10             	mov    0x10(%ebp),%eax
 81ad475:	0f b6 00             	movzbl (%eax),%eax
 81ad478:	0f be c0             	movsbl %al,%eax
 81ad47b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ad47f:	c7 44 24 04 9f 49 bb 	movl   $0x8bb499f,0x4(%esp)
 81ad486:	08 
 81ad487:	c7 04 24 0f 43 bb 08 	movl   $0x8bb430f,(%esp)
 81ad48e:	e8 cd 06 ed ff       	call   807db60 <printf@plt>
 81ad493:	b8 00 00 00 00       	mov    $0x0,%eax
 81ad498:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81ad49b:	c9                   	leave
 81ad49c:	c3                   	ret
 81ad49d:	90                   	nop

```

```c
// nexon::cash::NCashImpl::checkEntrance @ 0x81ad316

/* nexon::cash::NCashImpl::checkEntrance(char const*, char&) */

int __thiscall nexon::cash::NCashImpl::checkEntrance(NCashImpl *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  ByteBuffer local_38 [18];
  uchar local_26;
  uchar local_25;
  ByteBuffer local_24 [19];
  uchar local_11;
  int local_10;
  
  cVar1 = reconnect(this);
  if (cVar1 == '\x01') {
    local_11 = (uchar)*(undefined2 *)(this + 4);
    pcVar2 = (char *)NCashMessage::body((NCashMessage *)(this + 0x248));
    ByteBuffer::ByteBuffer(local_24,pcVar2,0x200);
    ByteBuffer::operator<<(local_24,'\x03');
    ByteBuffer::operator<<(local_24,'\x01');
    ByteBuffer::operator<<(local_24,local_11);
    ByteBuffer::operator<<(local_24,param_1);
    _increaseRequestID(this);
    local_10 = 0;
    uVar3 = ByteBuffer::length(local_24);
    local_10 = send_msg(this,uVar3);
    if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
      uVar3 = NCashMessage::body_length((NCashMessage *)(this + 0x40));
      pcVar2 = (char *)NCashMessage::body((NCashMessage *)(this + 0x40));
      ByteBuffer::wrap(local_38,pcVar2,uVar3 & 0xffff);
      ByteBuffer::operator>>(local_38,&local_25);
      ByteBuffer::operator>>(local_38,&local_26);
      *param_2 = local_26;
      printf("[%s] CheckEntrace: %d\n","checkEntrance",(int)*param_2);
      local_10 = 0;
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}

```

---

## confirm

```asm
// === 081adbd4 nexon::cash::NCashImpl::confirm  [0x081adbd4-0x81add03] ===
 81adbd4:	55                   	push   %ebp
 81adbd5:	89 e5                	mov    %esp,%ebp
 81adbd7:	83 ec 68             	sub    $0x68,%esp
 81adbda:	8b 45 0c             	mov    0xc(%ebp),%eax
 81adbdd:	88 45 c4             	mov    %al,-0x3c(%ebp)
 81adbe0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81adbe4:	75 0a                	jne    81adbf0 <_ZN5nexon4cash9NCashImpl7confirmEhj+0x1c>
 81adbe6:	b8 00 00 00 00       	mov    $0x0,%eax
 81adbeb:	e9 11 01 00 00       	jmp    81add01 <_ZN5nexon4cash9NCashImpl7confirmEhj+0x12d>
 81adbf0:	8b 45 08             	mov    0x8(%ebp),%eax
 81adbf3:	89 04 24             	mov    %eax,(%esp)
 81adbf6:	e8 85 f4 ff ff       	call   81ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>
 81adbfb:	83 f0 01             	xor    $0x1,%eax
 81adbfe:	84 c0                	test   %al,%al
 81adc00:	74 0a                	je     81adc0c <_ZN5nexon4cash9NCashImpl7confirmEhj+0x38>
 81adc02:	b8 02 00 00 00       	mov    $0x2,%eax
 81adc07:	e9 f5 00 00 00       	jmp    81add01 <_ZN5nexon4cash9NCashImpl7confirmEhj+0x12d>
 81adc0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adc0f:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 81adc16:	00 
 81adc17:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81adc1e:	00 
 81adc1f:	8b 55 08             	mov    0x8(%ebp),%edx
 81adc22:	89 54 24 04          	mov    %edx,0x4(%esp)
 81adc26:	89 04 24             	mov    %eax,(%esp)
 81adc29:	e8 b8 f4 ff ff       	call   81ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>
 81adc2e:	83 ec 04             	sub    $0x4,%esp
 81adc31:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 81adc35:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adc39:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adc3c:	89 04 24             	mov    %eax,(%esp)
 81adc3f:	e8 d0 09 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81adc44:	8b 45 10             	mov    0x10(%ebp),%eax
 81adc47:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adc4b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adc4e:	89 04 24             	mov    %eax,(%esp)
 81adc51:	e8 f6 0a 00 00       	call   81ae74c <_ZN5nexon4cash10ByteBufferlsEj>
 81adc56:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81adc5d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adc60:	89 04 24             	mov    %eax,(%esp)
 81adc63:	e8 f8 f2 ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81adc68:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adc6c:	8b 45 08             	mov    0x8(%ebp),%eax
 81adc6f:	89 04 24             	mov    %eax,(%esp)
 81adc72:	e8 b5 0f 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81adc77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81adc7a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81adc7e:	74 05                	je     81adc85 <_ZN5nexon4cash9NCashImpl7confirmEhj+0xb1>
 81adc80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81adc83:	eb 7c                	jmp    81add01 <_ZN5nexon4cash9NCashImpl7confirmEhj+0x12d>
 81adc85:	8b 45 08             	mov    0x8(%ebp),%eax
 81adc88:	89 04 24             	mov    %eax,(%esp)
 81adc8b:	e8 b6 0d 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81adc90:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81adc93:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81adc97:	74 05                	je     81adc9e <_ZN5nexon4cash9NCashImpl7confirmEhj+0xca>
 81adc99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81adc9c:	eb 63                	jmp    81add01 <_ZN5nexon4cash9NCashImpl7confirmEhj+0x12d>
 81adc9e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81adca1:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81adca4:	89 54 24 10          	mov    %edx,0x10(%esp)
 81adca8:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 81adcab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81adcaf:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 81adcb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81adcb6:	8b 55 08             	mov    0x8(%ebp),%edx
 81adcb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81adcbd:	89 04 24             	mov    %eax,(%esp)
 81adcc0:	e8 a3 f4 ff ff       	call   81ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>
 81adcc5:	83 ec 04             	sub    $0x4,%esp
 81adcc8:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81adccc:	3c 03                	cmp    $0x3,%al
 81adcce:	74 18                	je     81adce8 <_ZN5nexon4cash9NCashImpl7confirmEhj+0x114>
 81adcd0:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81adcd4:	0f b6 c0             	movzbl %al,%eax
 81adcd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adcdb:	8b 45 08             	mov    0x8(%ebp),%eax
 81adcde:	89 04 24             	mov    %eax,(%esp)
 81adce1:	e8 fa f4 ff ff       	call   81ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>
 81adce6:	eb 19                	jmp    81add01 <_ZN5nexon4cash9NCashImpl7confirmEhj+0x12d>
 81adce8:	c7 44 24 04 75 49 bb 	movl   $0x8bb4975,0x4(%esp)
 81adcef:	08 
 81adcf0:	c7 04 24 6d 43 bb 08 	movl   $0x8bb436d,(%esp)
 81adcf7:	e8 64 fe ec ff       	call   807db60 <printf@plt>
 81adcfc:	b8 00 00 00 00       	mov    $0x0,%eax
 81add01:	c9                   	leave
 81add02:	c3                   	ret
 81add03:	90                   	nop

```

```c
// nexon::cash::NCashImpl::confirm @ 0x81adbd4

/* nexon::cash::NCashImpl::confirm(unsigned char, unsigned int) */

int __thiscall nexon::cash::NCashImpl::confirm(NCashImpl *this,uchar param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uchar local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    cVar1 = reconnect(this);
    if (cVar1 == '\x01') {
      set_data_header((char)&local_21 + '\x01',(uchar)this);
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_1);
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_2);
      local_10 = 0;
      uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
      local_10 = send_msg(this,uVar2);
      if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
        puVar5 = local_28;
        pbVar4 = &local_22;
        puVar3 = &local_21;
        get_data_header(local_38,(uchar *)this,puVar3);
        if (local_22 == 3) {
          printf("[%s] E_PURCHASE_CONFIRM\n","confirm",puVar3,pbVar4,puVar5);
          local_10 = 0;
        }
        else {
          local_10 = handle_cash_error(this,(uint)local_22);
        }
      }
    }
    else {
      local_10 = 2;
    }
  }
  return local_10;
}

```

---

## getBalance

```asm
// === 081ad49e nexon::cash::NCashImpl::getBalance  [0x081ad49e-0x81ad5c1] ===
 81ad49e:	55                   	push   %ebp
 81ad49f:	89 e5                	mov    %esp,%ebp
 81ad4a1:	83 ec 58             	sub    $0x58,%esp
 81ad4a4:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad4a7:	89 04 24             	mov    %eax,(%esp)
 81ad4aa:	e8 d1 fb ff ff       	call   81ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>
 81ad4af:	83 f0 01             	xor    $0x1,%eax
 81ad4b2:	84 c0                	test   %al,%al
 81ad4b4:	74 0a                	je     81ad4c0 <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0x22>
 81ad4b6:	b8 02 00 00 00       	mov    $0x2,%eax
 81ad4bb:	e9 00 01 00 00       	jmp    81ad5c0 <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0x122>
 81ad4c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad4c3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ad4ca:	00 
 81ad4cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ad4d2:	00 
 81ad4d3:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad4d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ad4da:	89 04 24             	mov    %eax,(%esp)
 81ad4dd:	e8 04 fc ff ff       	call   81ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>
 81ad4e2:	83 ec 04             	sub    $0x4,%esp
 81ad4e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad4e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad4ec:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad4ef:	89 04 24             	mov    %eax,(%esp)
 81ad4f2:	e8 a9 f6 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ad4f7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ad4fe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad501:	89 04 24             	mov    %eax,(%esp)
 81ad504:	e8 57 fa ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81ad509:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad50d:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad510:	89 04 24             	mov    %eax,(%esp)
 81ad513:	e8 14 17 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81ad518:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad51b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad51f:	74 08                	je     81ad529 <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0x8b>
 81ad521:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad524:	e9 97 00 00 00       	jmp    81ad5c0 <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0x122>
 81ad529:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad52c:	89 04 24             	mov    %eax,(%esp)
 81ad52f:	e8 12 15 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81ad534:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad537:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad53b:	74 05                	je     81ad542 <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0xa4>
 81ad53d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad540:	eb 7e                	jmp    81ad5c0 <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0x122>
 81ad542:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad545:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81ad548:	89 54 24 10          	mov    %edx,0x10(%esp)
 81ad54c:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 81ad54f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ad553:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 81ad556:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ad55a:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad55d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ad561:	89 04 24             	mov    %eax,(%esp)
 81ad564:	e8 ff fb ff ff       	call   81ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>
 81ad569:	83 ec 04             	sub    $0x4,%esp
 81ad56c:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81ad570:	84 c0                	test   %al,%al
 81ad572:	74 18                	je     81ad58c <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0xee>
 81ad574:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81ad578:	0f b6 c0             	movzbl %al,%eax
 81ad57b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad57f:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad582:	89 04 24             	mov    %eax,(%esp)
 81ad585:	e8 56 fc ff ff       	call   81ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>
 81ad58a:	eb 34                	jmp    81ad5c0 <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi+0x122>
 81ad58c:	8b 45 10             	mov    0x10(%ebp),%eax
 81ad58f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad593:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad596:	89 04 24             	mov    %eax,(%esp)
 81ad599:	e8 46 13 00 00       	call   81ae8e4 <_ZN5nexon4cash10ByteBufferrsERi>
 81ad59e:	8b 45 10             	mov    0x10(%ebp),%eax
 81ad5a1:	8b 00                	mov    (%eax),%eax
 81ad5a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ad5a7:	c7 44 24 04 94 49 bb 	movl   $0x8bb4994,0x4(%esp)
 81ad5ae:	08 
 81ad5af:	c7 04 24 26 43 bb 08 	movl   $0x8bb4326,(%esp)
 81ad5b6:	e8 a5 05 ed ff       	call   807db60 <printf@plt>
 81ad5bb:	b8 00 00 00 00       	mov    $0x0,%eax
 81ad5c0:	c9                   	leave
 81ad5c1:	c3                   	ret

```

```c
// nexon::cash::NCashImpl::getBalance @ 0x81ad49e

/* nexon::cash::NCashImpl::getBalance(char const*, int&) */

int __thiscall nexon::cash::NCashImpl::getBalance(NCashImpl *this,char *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  ByteBuffer local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  cVar1 = reconnect(this);
  if (cVar1 == '\x01') {
    set_data_header((char)&local_21 + '\x01',(uchar)this);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_1);
    local_10 = 0;
    uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
    local_10 = send_msg(this,uVar2);
    if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
      puVar4 = local_28;
      pbVar3 = &local_22;
      get_data_header((uchar *)local_38,(uchar *)this,&local_21);
      if (local_22 == 0) {
        ByteBuffer::operator>>(local_38,param_2);
        printf("[%s] Remain cash: %d\n","getBalance",*param_2,pbVar3,puVar4);
        local_10 = 0;
      }
      else {
        local_10 = handle_cash_error(this,(uint)local_22);
      }
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}

```

---

## get_data_header

```asm
// === 081ad168 nexon::cash::NCashImpl::get_data_header  [0x081ad168-0x81ad1df] ===
 81ad168:	55                   	push   %ebp
 81ad169:	89 e5                	mov    %esp,%ebp
 81ad16b:	56                   	push   %esi
 81ad16c:	53                   	push   %ebx
 81ad16d:	83 ec 10             	sub    $0x10,%esp
 81ad170:	8b 5d 08             	mov    0x8(%ebp),%ebx
 81ad173:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad176:	83 c0 40             	add    $0x40,%eax
 81ad179:	89 04 24             	mov    %eax,(%esp)
 81ad17c:	e8 eb 13 00 00       	call   81ae56c <_ZN5nexon4cash12NCashMessage11body_lengthEv>
 81ad181:	0f b7 f0             	movzwl %ax,%esi
 81ad184:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad187:	83 c0 40             	add    $0x40,%eax
 81ad18a:	89 04 24             	mov    %eax,(%esp)
 81ad18d:	e8 ce 13 00 00       	call   81ae560 <_ZN5nexon4cash12NCashMessage4bodyEv>
 81ad192:	89 74 24 08          	mov    %esi,0x8(%esp)
 81ad196:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad19a:	89 1c 24             	mov    %ebx,(%esp)
 81ad19d:	e8 16 18 00 00       	call   81ae9b8 <_ZN5nexon4cash10ByteBuffer4wrapEPcj>
 81ad1a2:	83 ec 04             	sub    $0x4,%esp
 81ad1a5:	8b 45 10             	mov    0x10(%ebp),%eax
 81ad1a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad1ac:	89 1c 24             	mov    %ebx,(%esp)
 81ad1af:	e8 08 17 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81ad1b4:	8b 45 14             	mov    0x14(%ebp),%eax
 81ad1b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad1bb:	89 1c 24             	mov    %ebx,(%esp)
 81ad1be:	e8 f9 16 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81ad1c3:	8b 45 18             	mov    0x18(%ebp),%eax
 81ad1c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad1ca:	89 1c 24             	mov    %ebx,(%esp)
 81ad1cd:	e8 7c 17 00 00       	call   81ae94e <_ZN5nexon4cash10ByteBufferrsERj>
 81ad1d2:	89 d8                	mov    %ebx,%eax
 81ad1d4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81ad1d7:	83 c4 00             	add    $0x0,%esp
 81ad1da:	5b                   	pop    %ebx
 81ad1db:	5e                   	pop    %esi
 81ad1dc:	5d                   	pop    %ebp
 81ad1dd:	c2 04 00             	ret    $0x4

```

```c
// nexon::cash::NCashImpl::get_data_header @ 0x81ad168

/* nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&) */

uchar * nexon::cash::NCashImpl::get_data_header(uchar *param_1,uchar *param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  uchar *in_stack_00000010;
  uint *in_stack_00000014;
  
  uVar1 = NCashMessage::body_length((NCashMessage *)(param_2 + 0x40));
  pcVar2 = (char *)NCashMessage::body((NCashMessage *)(param_2 + 0x40));
  ByteBuffer::wrap((ByteBuffer *)param_1,pcVar2,uVar1 & 0xffff);
  ByteBuffer::operator>>((ByteBuffer *)param_1,(uchar *)param_3);
  ByteBuffer::operator>>((ByteBuffer *)param_1,in_stack_00000010);
  ByteBuffer::operator>>((ByteBuffer *)param_1,in_stack_00000014);
  return param_1;
}

```

---

## gift

```asm
// === 081ad9c4 nexon::cash::NCashImpl::gift  [0x081ad9c4-0x81adbd3] ===
 81ad9c4:	55                   	push   %ebp
 81ad9c5:	89 e5                	mov    %esp,%ebp
 81ad9c7:	83 ec 68             	sub    $0x68,%esp
 81ad9ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad9cd:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81ad9d0:	8b 45 10             	mov    0x10(%ebp),%eax
 81ad9d3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81ad9d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad9d9:	89 04 24             	mov    %eax,(%esp)
 81ad9dc:	e8 9f f6 ff ff       	call   81ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>
 81ad9e1:	83 f0 01             	xor    $0x1,%eax
 81ad9e4:	84 c0                	test   %al,%al
 81ad9e6:	74 0a                	je     81ad9f2 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x2e>
 81ad9e8:	b8 02 00 00 00       	mov    $0x2,%eax
 81ad9ed:	e9 df 01 00 00       	jmp    81adbd1 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x20d>
 81ad9f2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad9f5:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 81ad9fc:	00 
 81ad9fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ada04:	00 
 81ada05:	8b 55 08             	mov    0x8(%ebp),%edx
 81ada08:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ada0c:	89 04 24             	mov    %eax,(%esp)
 81ada0f:	e8 d2 f6 ff ff       	call   81ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>
 81ada14:	83 ec 04             	sub    $0x4,%esp
 81ada17:	8b 45 08             	mov    0x8(%ebp),%eax
 81ada1a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81ada1e:	98                   	cwtl
 81ada1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ada23:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ada26:	89 04 24             	mov    %eax,(%esp)
 81ada29:	e8 30 0c 00 00       	call   81ae65e <_ZN5nexon4cash10ByteBufferlsEs>
 81ada2e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81ada31:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ada34:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ada38:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ada3c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ada3f:	89 04 24             	mov    %eax,(%esp)
 81ada42:	e8 8d 0d 00 00       	call   81ae7d4 <_ZN5nexon4cash10ByteBufferlsEy>
 81ada47:	8b 45 14             	mov    0x14(%ebp),%eax
 81ada4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ada4e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ada51:	89 04 24             	mov    %eax,(%esp)
 81ada54:	e8 6b 0c 00 00       	call   81ae6c4 <_ZN5nexon4cash10ByteBufferlsEi>
 81ada59:	8b 45 18             	mov    0x18(%ebp),%eax
 81ada5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ada60:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ada63:	89 04 24             	mov    %eax,(%esp)
 81ada66:	e8 59 0c 00 00       	call   81ae6c4 <_ZN5nexon4cash10ByteBufferlsEi>
 81ada6b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81ada6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ada72:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ada75:	89 04 24             	mov    %eax,(%esp)
 81ada78:	e8 23 f1 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ada7d:	8b 45 20             	mov    0x20(%ebp),%eax
 81ada80:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ada84:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ada87:	89 04 24             	mov    %eax,(%esp)
 81ada8a:	e8 11 f1 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ada8f:	8b 45 08             	mov    0x8(%ebp),%eax
 81ada92:	0f b6 00             	movzbl (%eax),%eax
 81ada95:	0f b6 c0             	movzbl %al,%eax
 81ada98:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ada9c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ada9f:	89 04 24             	mov    %eax,(%esp)
 81adaa2:	e8 6d 0b 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81adaa7:	8b 45 08             	mov    0x8(%ebp),%eax
 81adaaa:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81adaae:	98                   	cwtl
 81adaaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adab3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adab6:	89 04 24             	mov    %eax,(%esp)
 81adab9:	e8 a0 0b 00 00       	call   81ae65e <_ZN5nexon4cash10ByteBufferlsEs>
 81adabe:	8b 45 24             	mov    0x24(%ebp),%eax
 81adac1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adac5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adac8:	89 04 24             	mov    %eax,(%esp)
 81adacb:	e8 d0 f0 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81adad0:	8b 45 28             	mov    0x28(%ebp),%eax
 81adad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adad7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adada:	89 04 24             	mov    %eax,(%esp)
 81adadd:	e8 be f0 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81adae2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81adae9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81adaec:	89 04 24             	mov    %eax,(%esp)
 81adaef:	e8 6c f4 ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81adaf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adaf8:	8b 45 08             	mov    0x8(%ebp),%eax
 81adafb:	89 04 24             	mov    %eax,(%esp)
 81adafe:	e8 29 11 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81adb03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81adb06:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81adb0a:	74 08                	je     81adb14 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x150>
 81adb0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81adb0f:	e9 bd 00 00 00       	jmp    81adbd1 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x20d>
 81adb14:	8b 45 08             	mov    0x8(%ebp),%eax
 81adb17:	89 04 24             	mov    %eax,(%esp)
 81adb1a:	e8 27 0f 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81adb1f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81adb22:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81adb26:	74 08                	je     81adb30 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x16c>
 81adb28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81adb2b:	e9 a1 00 00 00       	jmp    81adbd1 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x20d>
 81adb30:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81adb33:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81adb36:	89 54 24 10          	mov    %edx,0x10(%esp)
 81adb3a:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 81adb3d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81adb41:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 81adb44:	89 54 24 08          	mov    %edx,0x8(%esp)
 81adb48:	8b 55 08             	mov    0x8(%ebp),%edx
 81adb4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81adb4f:	89 04 24             	mov    %eax,(%esp)
 81adb52:	e8 11 f6 ff ff       	call   81ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>
 81adb57:	83 ec 04             	sub    $0x4,%esp
 81adb5a:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81adb5e:	3c 02                	cmp    $0x2,%al
 81adb60:	74 18                	je     81adb7a <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x1b6>
 81adb62:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81adb66:	0f b6 c0             	movzbl %al,%eax
 81adb69:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adb6d:	8b 45 08             	mov    0x8(%ebp),%eax
 81adb70:	89 04 24             	mov    %eax,(%esp)
 81adb73:	e8 68 f6 ff ff       	call   81ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>
 81adb78:	eb 57                	jmp    81adbd1 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE+0x20d>
 81adb7a:	8b 45 2c             	mov    0x2c(%ebp),%eax
 81adb7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adb81:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81adb84:	89 04 24             	mov    %eax,(%esp)
 81adb87:	e8 30 0d 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81adb8c:	8b 45 2c             	mov    0x2c(%ebp),%eax
 81adb8f:	83 c0 04             	add    $0x4,%eax
 81adb92:	89 44 24 04          	mov    %eax,0x4(%esp)
 81adb96:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81adb99:	89 04 24             	mov    %eax,(%esp)
 81adb9c:	e8 ad 0d 00 00       	call   81ae94e <_ZN5nexon4cash10ByteBufferrsERj>
 81adba1:	8b 45 2c             	mov    0x2c(%ebp),%eax
 81adba4:	8b 50 04             	mov    0x4(%eax),%edx
 81adba7:	8b 45 2c             	mov    0x2c(%ebp),%eax
 81adbaa:	0f b6 00             	movzbl (%eax),%eax
 81adbad:	0f b6 c0             	movzbl %al,%eax
 81adbb0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81adbb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81adbb8:	c7 44 24 04 7d 49 bb 	movl   $0x8bb497d,0x4(%esp)
 81adbbf:	08 
 81adbc0:	c7 04 24 3c 43 bb 08 	movl   $0x8bb433c,(%esp)
 81adbc7:	e8 94 ff ec ff       	call   807db60 <printf@plt>
 81adbcc:	b8 00 00 00 00       	mov    $0x0,%eax
 81adbd1:	c9                   	leave
 81adbd2:	c3                   	ret
 81adbd3:	90                   	nop

```

```c
// nexon::cash::NCashImpl::gift @ 0x81ad9c4

/* nexon::cash::NCashImpl::gift(unsigned long long, int, int, char const*, char const*, char const*,
   char const*, nexon::cash::NXTransaction&) */

int nexon::cash::NCashImpl::gift
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,char *param_6,
              char *param_7,NXTransaction *param_8)

{
  char cVar1;
  uint uVar2;
  byte *in_stack_00000028;
  undefined1 *puVar3;
  ByteBuffer local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  cVar1 = reconnect((NCashImpl *)param_1);
  if (cVar1 == '\x01') {
    set_data_header((char)&local_21 + '\x01',(uchar)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 4));
    ByteBuffer::operator<<
              ((ByteBuffer *)((int)&local_21 + 1),CONCAT44(param_2,(int)(param_1 >> 0x20)));
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_3);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(int)param_4);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_5);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_6);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(uchar)*(NCashImpl *)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 2));
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_7);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(char *)param_8);
    local_10 = 0;
    uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
    local_10 = send_msg((NCashImpl *)param_1,uVar2);
    if ((local_10 == 0) && (local_10 = recv_msg((NCashImpl *)param_1), local_10 == 0)) {
      puVar3 = local_28;
      get_data_header((uchar *)local_38,(uchar *)(NCashImpl *)param_1,&local_21);
      if (local_22 == 2) {
        ByteBuffer::operator>>(local_38,in_stack_00000028);
        ByteBuffer::operator>>(local_38,(uint *)(in_stack_00000028 + 4));
        printf("[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",0x7d,(uint)*in_stack_00000028,
               *(undefined4 *)(in_stack_00000028 + 4),puVar3);
        local_10 = 0;
      }
      else {
        local_10 = handle_cash_error((NCashImpl *)param_1,(uint)local_22);
      }
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}

```

---

## handle_cash_error

```asm
// === 081ad1e0 nexon::cash::NCashImpl::handle_cash_error  [0x081ad1e0-0x81ad2bf] ===
 81ad1e0:	55                   	push   %ebp
 81ad1e1:	89 e5                	mov    %esp,%ebp
 81ad1e3:	83 ec 28             	sub    $0x28,%esp
 81ad1e6:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 81ad1ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad1f0:	83 e8 05             	sub    $0x5,%eax
 81ad1f3:	83 f8 05             	cmp    $0x5,%eax
 81ad1f6:	0f 87 9d 00 00 00    	ja     81ad299 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi+0xb9>
 81ad1fc:	8b 04 85 d4 42 bb 08 	mov    0x8bb42d4(,%eax,4),%eax
 81ad203:	ff e0                	jmp    *%eax
 81ad205:	c7 45 f4 04 00 00 00 	movl   $0x4,-0xc(%ebp)
 81ad20c:	c7 44 24 04 c1 49 bb 	movl   $0x8bb49c1,0x4(%esp)
 81ad213:	08 
 81ad214:	c7 04 24 2b 42 bb 08 	movl   $0x8bb422b,(%esp)
 81ad21b:	e8 40 09 ed ff       	call   807db60 <printf@plt>
 81ad220:	e9 96 00 00 00       	jmp    81ad2bb <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi+0xdb>
 81ad225:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
 81ad22c:	c7 44 24 04 c1 49 bb 	movl   $0x8bb49c1,0x4(%esp)
 81ad233:	08 
 81ad234:	c7 04 24 40 42 bb 08 	movl   $0x8bb4240,(%esp)
 81ad23b:	e8 20 09 ed ff       	call   807db60 <printf@plt>
 81ad240:	eb 79                	jmp    81ad2bb <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi+0xdb>
 81ad242:	c7 45 f4 05 00 00 00 	movl   $0x5,-0xc(%ebp)
 81ad249:	c7 44 24 04 c1 49 bb 	movl   $0x8bb49c1,0x4(%esp)
 81ad250:	08 
 81ad251:	c7 04 24 54 42 bb 08 	movl   $0x8bb4254,(%esp)
 81ad258:	e8 03 09 ed ff       	call   807db60 <printf@plt>
 81ad25d:	eb 5c                	jmp    81ad2bb <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi+0xdb>
 81ad25f:	c7 45 f4 06 00 00 00 	movl   $0x6,-0xc(%ebp)
 81ad266:	c7 44 24 04 c1 49 bb 	movl   $0x8bb49c1,0x4(%esp)
 81ad26d:	08 
 81ad26e:	c7 04 24 78 42 bb 08 	movl   $0x8bb4278,(%esp)
 81ad275:	e8 e6 08 ed ff       	call   807db60 <printf@plt>
 81ad27a:	eb 3f                	jmp    81ad2bb <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi+0xdb>
 81ad27c:	c7 45 f4 07 00 00 00 	movl   $0x7,-0xc(%ebp)
 81ad283:	c7 44 24 04 c1 49 bb 	movl   $0x8bb49c1,0x4(%esp)
 81ad28a:	08 
 81ad28b:	c7 04 24 95 42 bb 08 	movl   $0x8bb4295,(%esp)
 81ad292:	e8 c9 08 ed ff       	call   807db60 <printf@plt>
 81ad297:	eb 22                	jmp    81ad2bb <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi+0xdb>
 81ad299:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 81ad2a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad2a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ad2a7:	c7 44 24 04 c1 49 bb 	movl   $0x8bb49c1,0x4(%esp)
 81ad2ae:	08 
 81ad2af:	c7 04 24 b4 42 bb 08 	movl   $0x8bb42b4,(%esp)
 81ad2b6:	e8 a5 08 ed ff       	call   807db60 <printf@plt>
 81ad2bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad2be:	c9                   	leave
 81ad2bf:	c3                   	ret

```

```c
// nexon::cash::NCashImpl::handle_cash_error @ 0x81ad1e0

/* nexon::cash::NCashImpl::handle_cash_error(int) */

undefined4 __thiscall nexon::cash::NCashImpl::handle_cash_error(NCashImpl *this,int param_1)

{
  undefined4 local_10;
  
  switch(param_1) {
  case 5:
    local_10 = 3;
    printf("[%s] NO REMIN CASH\n","handle_cash_error");
    break;
  case 6:
    local_10 = 4;
    printf("[%s] DB error occur\n","handle_cash_error");
    break;
  default:
    local_10 = 0x10;
    printf("[%s] Undefined cash error: %u\n","handle_cash_error",param_1);
    break;
  case 8:
    local_10 = 5;
    printf("[%s] E_GIFT_LIMIT_OVER Remain cash\n","handle_cash_error");
    break;
  case 9:
    local_10 = 6;
    printf("[%s] E_GIFT_NOT_READY error\n","handle_cash_error");
    break;
  case 10:
    local_10 = 7;
    printf("[%s] E_GIFT_UNDER_AGE error\n","handle_cash_error");
  }
  return local_10;
}

```

---

## handle_coupon_error

```asm
// === 081ad2c0 nexon::cash::NCashImpl::handle_coupon_error  [0x081ad2c0-0x81ad315] ===
 81ad2c0:	55                   	push   %ebp
 81ad2c1:	89 e5                	mov    %esp,%ebp
 81ad2c3:	83 ec 28             	sub    $0x28,%esp
 81ad2c6:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 81ad2cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad2d0:	83 f8 01             	cmp    $0x1,%eax
 81ad2d3:	74 32                	je     81ad307 <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x47>
 81ad2d5:	83 f8 01             	cmp    $0x1,%eax
 81ad2d8:	7f 06                	jg     81ad2e0 <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x20>
 81ad2da:	85 c0                	test   %eax,%eax
 81ad2dc:	74 2c                	je     81ad30a <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x4a>
 81ad2de:	eb 0a                	jmp    81ad2ea <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x2a>
 81ad2e0:	83 f8 02             	cmp    $0x2,%eax
 81ad2e3:	74 28                	je     81ad30d <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x4d>
 81ad2e5:	83 f8 03             	cmp    $0x3,%eax
 81ad2e8:	74 26                	je     81ad310 <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x50>
 81ad2ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad2ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ad2f1:	c7 44 24 04 ad 49 bb 	movl   $0x8bb49ad,0x4(%esp)
 81ad2f8:	08 
 81ad2f9:	c7 04 24 ec 42 bb 08 	movl   $0x8bb42ec,(%esp)
 81ad300:	e8 5b 08 ed ff       	call   807db60 <printf@plt>
 81ad305:	eb 0a                	jmp    81ad311 <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x51>
 81ad307:	90                   	nop
 81ad308:	eb 07                	jmp    81ad311 <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x51>
 81ad30a:	90                   	nop
 81ad30b:	eb 04                	jmp    81ad311 <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x51>
 81ad30d:	90                   	nop
 81ad30e:	eb 01                	jmp    81ad311 <_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi+0x51>
 81ad310:	90                   	nop
 81ad311:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad314:	c9                   	leave
 81ad315:	c3                   	ret

```

```c
// nexon::cash::NCashImpl::handle_coupon_error @ 0x81ad2c0

/* nexon::cash::NCashImpl::handle_coupon_error(int) */

undefined4 __thiscall nexon::cash::NCashImpl::handle_coupon_error(NCashImpl *this,int param_1)

{
  if (param_1 != 1) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        return 0x10;
      }
    }
    else {
      if (param_1 == 2) {
        return 0x10;
      }
      if (param_1 == 3) {
        return 0x10;
      }
    }
    printf("[%s] Invalid coupon packet_id: %u\n","handle_coupon_error",param_1);
  }
  return 0x10;
}

```

---

## purchase

```asm
// === 081ad5c2 nexon::cash::NCashImpl::purchase  [0x081ad5c2-0x81ad7ad] ===
 81ad5c2:	55                   	push   %ebp
 81ad5c3:	89 e5                	mov    %esp,%ebp
 81ad5c5:	83 ec 68             	sub    $0x68,%esp
 81ad5c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad5cb:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81ad5ce:	8b 45 10             	mov    0x10(%ebp),%eax
 81ad5d1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81ad5d4:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad5d7:	89 04 24             	mov    %eax,(%esp)
 81ad5da:	e8 a1 fa ff ff       	call   81ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>
 81ad5df:	83 f0 01             	xor    $0x1,%eax
 81ad5e2:	84 c0                	test   %al,%al
 81ad5e4:	74 0a                	je     81ad5f0 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x2e>
 81ad5e6:	b8 02 00 00 00       	mov    $0x2,%eax
 81ad5eb:	e9 bb 01 00 00       	jmp    81ad7ab <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x1e9>
 81ad5f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad5f3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ad5fa:	00 
 81ad5fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ad602:	00 
 81ad603:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad606:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ad60a:	89 04 24             	mov    %eax,(%esp)
 81ad60d:	e8 d4 fa ff ff       	call   81ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>
 81ad612:	83 ec 04             	sub    $0x4,%esp
 81ad615:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad618:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81ad61c:	98                   	cwtl
 81ad61d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad621:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad624:	89 04 24             	mov    %eax,(%esp)
 81ad627:	e8 32 10 00 00       	call   81ae65e <_ZN5nexon4cash10ByteBufferlsEs>
 81ad62c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81ad62f:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ad632:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad636:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ad63a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad63d:	89 04 24             	mov    %eax,(%esp)
 81ad640:	e8 8f 11 00 00       	call   81ae7d4 <_ZN5nexon4cash10ByteBufferlsEy>
 81ad645:	8b 45 14             	mov    0x14(%ebp),%eax
 81ad648:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad64c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad64f:	89 04 24             	mov    %eax,(%esp)
 81ad652:	e8 6d 10 00 00       	call   81ae6c4 <_ZN5nexon4cash10ByteBufferlsEi>
 81ad657:	8b 45 18             	mov    0x18(%ebp),%eax
 81ad65a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad65e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad661:	89 04 24             	mov    %eax,(%esp)
 81ad664:	e8 5b 10 00 00       	call   81ae6c4 <_ZN5nexon4cash10ByteBufferlsEi>
 81ad669:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81ad66c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad670:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad673:	89 04 24             	mov    %eax,(%esp)
 81ad676:	e8 25 f5 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ad67b:	8b 45 20             	mov    0x20(%ebp),%eax
 81ad67e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad682:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad685:	89 04 24             	mov    %eax,(%esp)
 81ad688:	e8 13 f5 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ad68d:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad690:	0f b6 00             	movzbl (%eax),%eax
 81ad693:	0f b6 c0             	movzbl %al,%eax
 81ad696:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad69a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad69d:	89 04 24             	mov    %eax,(%esp)
 81ad6a0:	e8 6f 0f 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81ad6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad6a8:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81ad6ac:	98                   	cwtl
 81ad6ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad6b1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad6b4:	89 04 24             	mov    %eax,(%esp)
 81ad6b7:	e8 a2 0f 00 00       	call   81ae65e <_ZN5nexon4cash10ByteBufferlsEs>
 81ad6bc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ad6c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad6c6:	89 04 24             	mov    %eax,(%esp)
 81ad6c9:	e8 92 f8 ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81ad6ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad6d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad6d5:	89 04 24             	mov    %eax,(%esp)
 81ad6d8:	e8 4f 15 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81ad6dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad6e0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad6e4:	74 08                	je     81ad6ee <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x12c>
 81ad6e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad6e9:	e9 bd 00 00 00       	jmp    81ad7ab <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x1e9>
 81ad6ee:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad6f1:	89 04 24             	mov    %eax,(%esp)
 81ad6f4:	e8 4d 13 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81ad6f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad6fc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad700:	74 08                	je     81ad70a <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x148>
 81ad702:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad705:	e9 a1 00 00 00       	jmp    81ad7ab <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x1e9>
 81ad70a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad70d:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81ad710:	89 54 24 10          	mov    %edx,0x10(%esp)
 81ad714:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 81ad717:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ad71b:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 81ad71e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ad722:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad725:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ad729:	89 04 24             	mov    %eax,(%esp)
 81ad72c:	e8 37 fa ff ff       	call   81ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>
 81ad731:	83 ec 04             	sub    $0x4,%esp
 81ad734:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81ad738:	3c 02                	cmp    $0x2,%al
 81ad73a:	74 18                	je     81ad754 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x192>
 81ad73c:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81ad740:	0f b6 c0             	movzbl %al,%eax
 81ad743:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad747:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad74a:	89 04 24             	mov    %eax,(%esp)
 81ad74d:	e8 8e fa ff ff       	call   81ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>
 81ad752:	eb 57                	jmp    81ad7ab <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE+0x1e9>
 81ad754:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad757:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad75b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad75e:	89 04 24             	mov    %eax,(%esp)
 81ad761:	e8 56 11 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81ad766:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad769:	83 c0 04             	add    $0x4,%eax
 81ad76c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad770:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad773:	89 04 24             	mov    %eax,(%esp)
 81ad776:	e8 d3 11 00 00       	call   81ae94e <_ZN5nexon4cash10ByteBufferrsERj>
 81ad77b:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad77e:	8b 50 04             	mov    0x4(%eax),%edx
 81ad781:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad784:	0f b6 00             	movzbl (%eax),%eax
 81ad787:	0f b6 c0             	movzbl %al,%eax
 81ad78a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ad78e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ad792:	c7 44 24 04 8b 49 bb 	movl   $0x8bb498b,0x4(%esp)
 81ad799:	08 
 81ad79a:	c7 04 24 3c 43 bb 08 	movl   $0x8bb433c,(%esp)
 81ad7a1:	e8 ba 03 ed ff       	call   807db60 <printf@plt>
 81ad7a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81ad7ab:	c9                   	leave
 81ad7ac:	c3                   	ret
 81ad7ad:	90                   	nop

```

```c
// nexon::cash::NCashImpl::purchase @ 0x81ad5c2

/* nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&) */

int nexon::cash::NCashImpl::purchase
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
              NXTransaction *param_6)

{
  char cVar1;
  uint uVar2;
  byte *in_stack_00000020;
  undefined1 *puVar3;
  ByteBuffer local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  cVar1 = reconnect((NCashImpl *)param_1);
  if (cVar1 == '\x01') {
    set_data_header((char)&local_21 + '\x01',(uchar)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 4));
    ByteBuffer::operator<<
              ((ByteBuffer *)((int)&local_21 + 1),CONCAT44(param_2,(int)(param_1 >> 0x20)));
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_3);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(int)param_4);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_5);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(char *)param_6);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(uchar)*(NCashImpl *)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 2));
    local_10 = 0;
    uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
    local_10 = send_msg((NCashImpl *)param_1,uVar2);
    if ((local_10 == 0) && (local_10 = recv_msg((NCashImpl *)param_1), local_10 == 0)) {
      puVar3 = local_28;
      get_data_header((uchar *)local_38,(uchar *)(NCashImpl *)param_1,&local_21);
      if (local_22 == 2) {
        ByteBuffer::operator>>(local_38,in_stack_00000020);
        ByteBuffer::operator>>(local_38,(uint *)(in_stack_00000020 + 4));
        printf("[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",0x8b,(uint)*in_stack_00000020,
               *(undefined4 *)(in_stack_00000020 + 4),puVar3);
        local_10 = 0;
      }
      else {
        local_10 = handle_cash_error((NCashImpl *)param_1,(uint)local_22);
      }
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}

```

---

## purchase_081ad7ae

```asm
// === 081ad7ae nexon::cash::NCashImpl::purchase  [0x081ad7ae-0x81ad9c3] ===
 81ad7ae:	55                   	push   %ebp
 81ad7af:	89 e5                	mov    %esp,%ebp
 81ad7b1:	83 ec 68             	sub    $0x68,%esp
 81ad7b4:	8b 45 28             	mov    0x28(%ebp),%eax
 81ad7b7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ad7ba:	89 55 c0             	mov    %edx,-0x40(%ebp)
 81ad7bd:	8b 55 10             	mov    0x10(%ebp),%edx
 81ad7c0:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 81ad7c3:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 81ad7c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad7ca:	89 04 24             	mov    %eax,(%esp)
 81ad7cd:	e8 ae f8 ff ff       	call   81ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>
 81ad7d2:	83 f0 01             	xor    $0x1,%eax
 81ad7d5:	84 c0                	test   %al,%al
 81ad7d7:	74 0a                	je     81ad7e3 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x35>
 81ad7d9:	b8 02 00 00 00       	mov    $0x2,%eax
 81ad7de:	e9 de 01 00 00       	jmp    81ad9c1 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x213>
 81ad7e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad7e6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ad7ed:	00 
 81ad7ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ad7f5:	00 
 81ad7f6:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad7f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ad7fd:	89 04 24             	mov    %eax,(%esp)
 81ad800:	e8 e1 f8 ff ff       	call   81ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>
 81ad805:	83 ec 04             	sub    $0x4,%esp
 81ad808:	66 83 7d bc 3c       	cmpw   $0x3c,-0x44(%ebp)
 81ad80d:	74 07                	je     81ad816 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x68>
 81ad80f:	66 83 7d bc 3e       	cmpw   $0x3e,-0x44(%ebp)
 81ad814:	75 15                	jne    81ad82b <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x7d>
 81ad816:	0f bf 45 bc          	movswl -0x44(%ebp),%eax
 81ad81a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad81e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad821:	89 04 24             	mov    %eax,(%esp)
 81ad824:	e8 35 0e 00 00       	call   81ae65e <_ZN5nexon4cash10ByteBufferlsEs>
 81ad829:	eb 17                	jmp    81ad842 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x94>
 81ad82b:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad82e:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81ad832:	98                   	cwtl
 81ad833:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad837:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad83a:	89 04 24             	mov    %eax,(%esp)
 81ad83d:	e8 1c 0e 00 00       	call   81ae65e <_ZN5nexon4cash10ByteBufferlsEs>
 81ad842:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81ad845:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ad848:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad84c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ad850:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad853:	89 04 24             	mov    %eax,(%esp)
 81ad856:	e8 79 0f 00 00       	call   81ae7d4 <_ZN5nexon4cash10ByteBufferlsEy>
 81ad85b:	8b 45 14             	mov    0x14(%ebp),%eax
 81ad85e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad862:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad865:	89 04 24             	mov    %eax,(%esp)
 81ad868:	e8 57 0e 00 00       	call   81ae6c4 <_ZN5nexon4cash10ByteBufferlsEi>
 81ad86d:	8b 45 18             	mov    0x18(%ebp),%eax
 81ad870:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad874:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad877:	89 04 24             	mov    %eax,(%esp)
 81ad87a:	e8 45 0e 00 00       	call   81ae6c4 <_ZN5nexon4cash10ByteBufferlsEi>
 81ad87f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81ad882:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad886:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad889:	89 04 24             	mov    %eax,(%esp)
 81ad88c:	e8 0f f3 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ad891:	8b 45 20             	mov    0x20(%ebp),%eax
 81ad894:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad898:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad89b:	89 04 24             	mov    %eax,(%esp)
 81ad89e:	e8 fd f2 ff ff       	call   81acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>
 81ad8a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad8a6:	0f b6 00             	movzbl (%eax),%eax
 81ad8a9:	0f b6 c0             	movzbl %al,%eax
 81ad8ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad8b0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad8b3:	89 04 24             	mov    %eax,(%esp)
 81ad8b6:	e8 59 0d 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81ad8bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad8be:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81ad8c2:	98                   	cwtl
 81ad8c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad8c7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad8ca:	89 04 24             	mov    %eax,(%esp)
 81ad8cd:	e8 8c 0d 00 00       	call   81ae65e <_ZN5nexon4cash10ByteBufferlsEs>
 81ad8d2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ad8d9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ad8dc:	89 04 24             	mov    %eax,(%esp)
 81ad8df:	e8 7c f6 ff ff       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81ad8e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad8e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad8eb:	89 04 24             	mov    %eax,(%esp)
 81ad8ee:	e8 39 13 00 00       	call   81aec2c <_ZN5nexon4cash9NCashImpl8send_msgEj>
 81ad8f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad8f6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad8fa:	74 08                	je     81ad904 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x156>
 81ad8fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad8ff:	e9 bd 00 00 00       	jmp    81ad9c1 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x213>
 81ad904:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad907:	89 04 24             	mov    %eax,(%esp)
 81ad90a:	e8 37 11 00 00       	call   81aea46 <_ZN5nexon4cash9NCashImpl8recv_msgEv>
 81ad90f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ad912:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ad916:	74 08                	je     81ad920 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x172>
 81ad918:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ad91b:	e9 a1 00 00 00       	jmp    81ad9c1 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x213>
 81ad920:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad923:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81ad926:	89 54 24 10          	mov    %edx,0x10(%esp)
 81ad92a:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 81ad92d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ad931:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 81ad934:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ad938:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad93b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ad93f:	89 04 24             	mov    %eax,(%esp)
 81ad942:	e8 21 f8 ff ff       	call   81ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>
 81ad947:	83 ec 04             	sub    $0x4,%esp
 81ad94a:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81ad94e:	3c 02                	cmp    $0x2,%al
 81ad950:	74 18                	je     81ad96a <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x1bc>
 81ad952:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 81ad956:	0f b6 c0             	movzbl %al,%eax
 81ad959:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad95d:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad960:	89 04 24             	mov    %eax,(%esp)
 81ad963:	e8 78 f8 ff ff       	call   81ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>
 81ad968:	eb 57                	jmp    81ad9c1 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs+0x213>
 81ad96a:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad96d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad971:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad974:	89 04 24             	mov    %eax,(%esp)
 81ad977:	e8 40 0f 00 00       	call   81ae8bc <_ZN5nexon4cash10ByteBufferrsERh>
 81ad97c:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad97f:	83 c0 04             	add    $0x4,%eax
 81ad982:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad986:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ad989:	89 04 24             	mov    %eax,(%esp)
 81ad98c:	e8 bd 0f 00 00       	call   81ae94e <_ZN5nexon4cash10ByteBufferrsERj>
 81ad991:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad994:	8b 50 04             	mov    0x4(%eax),%edx
 81ad997:	8b 45 24             	mov    0x24(%ebp),%eax
 81ad99a:	0f b6 00             	movzbl (%eax),%eax
 81ad99d:	0f b6 c0             	movzbl %al,%eax
 81ad9a0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ad9a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ad9a8:	c7 44 24 04 82 49 bb 	movl   $0x8bb4982,0x4(%esp)
 81ad9af:	08 
 81ad9b0:	c7 04 24 3c 43 bb 08 	movl   $0x8bb433c,(%esp)
 81ad9b7:	e8 a4 01 ed ff       	call   807db60 <printf@plt>
 81ad9bc:	b8 00 00 00 00       	mov    $0x0,%eax
 81ad9c1:	c9                   	leave
 81ad9c2:	c3                   	ret
 81ad9c3:	90                   	nop

```

```c
// nexon::cash::NCashImpl::purchase @ 0x81ad7ae

/* nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&, short) */

int nexon::cash::NCashImpl::purchase
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
              NXTransaction *param_6,short param_7)

{
  char cVar1;
  uint uVar2;
  undefined2 in_stack_00000022;
  short in_stack_00000024;
  undefined1 *puVar3;
  ByteBuffer local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  cVar1 = reconnect((NCashImpl *)param_1);
  if (cVar1 == '\x01') {
    set_data_header((char)&local_21 + '\x01',(uchar)param_1);
    if ((in_stack_00000024 == 0x3c) || (in_stack_00000024 == 0x3e)) {
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),in_stack_00000024);
    }
    else {
      ByteBuffer::operator<<
                ((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 4));
    }
    ByteBuffer::operator<<
              ((ByteBuffer *)((int)&local_21 + 1),CONCAT44(param_2,(int)(param_1 >> 0x20)));
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_3);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(int)param_4);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_5);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(char *)param_6);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(uchar)*(NCashImpl *)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 2));
    local_10 = 0;
    uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
    local_10 = send_msg((NCashImpl *)param_1,uVar2);
    if ((local_10 == 0) && (local_10 = recv_msg((NCashImpl *)param_1), local_10 == 0)) {
      puVar3 = local_28;
      get_data_header((uchar *)local_38,(uchar *)(NCashImpl *)param_1,&local_21);
      if (local_22 == 2) {
        ByteBuffer::operator>>(local_38,(uchar *)CONCAT22(in_stack_00000022,param_7));
        ByteBuffer::operator>>(local_38,(uint *)(_param_7 + 4));
        printf("[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",0x82,(uint)*_param_7,
               *(undefined4 *)(_param_7 + 4),puVar3);
        local_10 = 0;
      }
      else {
        local_10 = handle_cash_error((NCashImpl *)param_1,(uint)local_22);
      }
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}

```

---

## reconnect

```asm
// === 081ad080 nexon::cash::NCashImpl::reconnect  [0x081ad080-0x81ad0e5] ===
 81ad080:	55                   	push   %ebp
 81ad081:	89 e5                	mov    %esp,%ebp
 81ad083:	83 ec 18             	sub    $0x18,%esp
 81ad086:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad089:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 81ad08d:	83 f0 01             	xor    $0x1,%eax
 81ad090:	84 c0                	test   %al,%al
 81ad092:	74 48                	je     81ad0dc <_ZN5nexon4cash9NCashImpl9reconnectEv+0x5c>
 81ad094:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad097:	83 c0 20             	add    $0x20,%eax
 81ad09a:	89 04 24             	mov    %eax,(%esp)
 81ad09d:	e8 6a 27 00 00       	call   81af80c <_ZN5nexon4cash9TCPSocket5closeEv>
 81ad0a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad0a5:	83 c0 20             	add    $0x20,%eax
 81ad0a8:	89 04 24             	mov    %eax,(%esp)
 81ad0ab:	e8 82 24 00 00       	call   81af532 <_ZN5nexon4cash9TCPSocket4openEv>
 81ad0b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad0b3:	0f b7 40 1e          	movzwl 0x1e(%eax),%eax
 81ad0b7:	0f b7 c0             	movzwl %ax,%eax
 81ad0ba:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad0bd:	8d 4a 0d             	lea    0xd(%edx),%ecx
 81ad0c0:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad0c3:	83 c2 20             	add    $0x20,%edx
 81ad0c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ad0ca:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81ad0ce:	89 14 24             	mov    %edx,(%esp)
 81ad0d1:	e8 14 29 00 00       	call   81af9ea <_ZN5nexon4cash9TCPSocket7connectEPKct>
 81ad0d6:	8b 55 08             	mov    0x8(%ebp),%edx
 81ad0d9:	88 42 0c             	mov    %al,0xc(%edx)
 81ad0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81ad0df:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 81ad0e3:	c9                   	leave
 81ad0e4:	c3                   	ret
 81ad0e5:	90                   	nop

```

```c
// nexon::cash::NCashImpl::reconnect @ 0x81ad080

/* nexon::cash::NCashImpl::reconnect() */

NCashImpl __thiscall nexon::cash::NCashImpl::reconnect(NCashImpl *this)

{
  NCashImpl NVar1;
  
  if (this[0xc] != (NCashImpl)0x1) {
    TCPSocket::close((TCPSocket *)(this + 0x20));
    TCPSocket::open((TCPSocket *)(this + 0x20));
    NVar1 = (NCashImpl)
            TCPSocket::connect((TCPSocket *)(this + 0x20),(char *)(this + 0xd),
                               *(ushort *)(this + 0x1e));
    this[0xc] = NVar1;
  }
  return this[0xc];
}

```

---

## set_data_header

```asm
// === 081ad0e6 nexon::cash::NCashImpl::set_data_header  [0x081ad0e6-0x81ad167] ===
 81ad0e6:	55                   	push   %ebp
 81ad0e7:	89 e5                	mov    %esp,%ebp
 81ad0e9:	53                   	push   %ebx
 81ad0ea:	83 ec 24             	sub    $0x24,%esp
 81ad0ed:	8b 5d 08             	mov    0x8(%ebp),%ebx
 81ad0f0:	8b 55 10             	mov    0x10(%ebp),%edx
 81ad0f3:	8b 45 14             	mov    0x14(%ebp),%eax
 81ad0f6:	88 55 f4             	mov    %dl,-0xc(%ebp)
 81ad0f9:	88 45 f0             	mov    %al,-0x10(%ebp)
 81ad0fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad0ff:	05 48 02 00 00       	add    $0x248,%eax
 81ad104:	89 04 24             	mov    %eax,(%esp)
 81ad107:	e8 54 14 00 00       	call   81ae560 <_ZN5nexon4cash12NCashMessage4bodyEv>
 81ad10c:	c7 44 24 08 00 02 00 	movl   $0x200,0x8(%esp)
 81ad113:	00 
 81ad114:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad118:	89 1c 24             	mov    %ebx,(%esp)
 81ad11b:	e8 c2 18 00 00       	call   81ae9e2 <_ZN5nexon4cash10ByteBufferC1EPcj>
 81ad120:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 81ad124:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad128:	89 1c 24             	mov    %ebx,(%esp)
 81ad12b:	e8 e4 14 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81ad130:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 81ad134:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad138:	89 1c 24             	mov    %ebx,(%esp)
 81ad13b:	e8 d4 14 00 00       	call   81ae614 <_ZN5nexon4cash10ByteBufferlsEh>
 81ad140:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad143:	89 04 24             	mov    %eax,(%esp)
 81ad146:	e8 e7 18 00 00       	call   81aea32 <_ZN5nexon4cash9NCashImpl18_increaseRequestIDEv>
 81ad14b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ad14e:	8b 40 08             	mov    0x8(%eax),%eax
 81ad151:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ad155:	89 1c 24             	mov    %ebx,(%esp)
 81ad158:	e8 ef 15 00 00       	call   81ae74c <_ZN5nexon4cash10ByteBufferlsEj>
 81ad15d:	89 d8                	mov    %ebx,%eax
 81ad15f:	83 c4 24             	add    $0x24,%esp
 81ad162:	5b                   	pop    %ebx
 81ad163:	5d                   	pop    %ebp
 81ad164:	c2 04 00             	ret    $0x4
 81ad167:	90                   	nop

```

```c
// nexon::cash::NCashImpl::set_data_header @ 0x81ad0e6

/* nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char) */

ByteBuffer * nexon::cash::NCashImpl::set_data_header(uchar param_1,uchar param_2)

{
  char *pcVar1;
  undefined3 in_stack_00000005;
  undefined3 in_stack_00000009;
  uchar in_stack_0000000c;
  uchar in_stack_00000010;
  
  pcVar1 = (char *)NCashMessage::body((NCashMessage *)(_param_2 + 0x248));
  ByteBuffer::ByteBuffer(_param_1,pcVar1,0x200);
  ByteBuffer::operator<<(_param_1,in_stack_0000000c);
  ByteBuffer::operator<<(_param_1,in_stack_00000010);
  _increaseRequestID(_param_2);
  ByteBuffer::operator<<(_param_1,*(uint *)(_param_2 + 8));
  return _param_1;
}

```

