# CRijndael

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CRijndael

```asm
// === 080b60ac CRijndael::CRijndael  [0x080b60ac-0x80b61d1] ===
 80b60ac:	55                   	push   %ebp
 80b60ad:	89 e5                	mov    %esp,%ebp
 80b60af:	83 ec 18             	sub    $0x18,%esp
 80b60b2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b60b5:	89 04 24             	mov    %eax,(%esp)
 80b60b8:	e8 d7 e1 ff ff       	call   80b4294 <_ZN7IMethodC1Ev>
 80b60bd:	8b 45 08             	mov    0x8(%ebp),%eax
 80b60c0:	c7 00 68 2f b2 08    	movl   $0x8b22f68,(%eax)
 80b60c6:	8b 45 08             	mov    0x8(%ebp),%eax
 80b60c9:	83 c0 18             	add    $0x18,%eax
 80b60cc:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 80b60d3:	00 
 80b60d4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b60db:	00 
 80b60dc:	89 04 24             	mov    %eax,(%esp)
 80b60df:	e8 dc 7b fc ff       	call   807dcc0 <memset@plt>
 80b60e4:	8b 45 08             	mov    0x8(%ebp),%eax
 80b60e7:	83 c0 38             	add    $0x38,%eax
 80b60ea:	c7 44 24 08 c0 01 00 	movl   $0x1c0,0x8(%esp)
 80b60f1:	00 
 80b60f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b60f9:	00 
 80b60fa:	89 04 24             	mov    %eax,(%esp)
 80b60fd:	e8 be 7b fc ff       	call   807dcc0 <memset@plt>
 80b6102:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6105:	05 f8 01 00 00       	add    $0x1f8,%eax
 80b610a:	c7 44 24 08 e0 01 00 	movl   $0x1e0,0x8(%esp)
 80b6111:	00 
 80b6112:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b6119:	00 
 80b611a:	89 04 24             	mov    %eax,(%esp)
 80b611d:	e8 9e 7b fc ff       	call   807dcc0 <memset@plt>
 80b6122:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6125:	05 dc 03 00 00       	add    $0x3dc,%eax
 80b612a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 80b6131:	00 
 80b6132:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b6139:	00 
 80b613a:	89 04 24             	mov    %eax,(%esp)
 80b613d:	e8 7e 7b fc ff       	call   807dcc0 <memset@plt>
 80b6142:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6145:	05 fc 03 00 00       	add    $0x3fc,%eax
 80b614a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 80b6151:	00 
 80b6152:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b6159:	00 
 80b615a:	89 04 24             	mov    %eax,(%esp)
 80b615d:	e8 5e 7b fc ff       	call   807dcc0 <memset@plt>
 80b6162:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6165:	05 1c 04 00 00       	add    $0x41c,%eax
 80b616a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 80b6171:	00 
 80b6172:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b6179:	00 
 80b617a:	89 04 24             	mov    %eax,(%esp)
 80b617d:	e8 3e 7b fc ff       	call   807dcc0 <memset@plt>
 80b6182:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6185:	05 3c 04 00 00       	add    $0x43c,%eax
 80b618a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 80b6191:	00 
 80b6192:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b6199:	00 
 80b619a:	89 04 24             	mov    %eax,(%esp)
 80b619d:	e8 1e 7b fc ff       	call   807dcc0 <memset@plt>
 80b61a2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b61a5:	05 5c 04 00 00       	add    $0x45c,%eax
 80b61aa:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 80b61b1:	00 
 80b61b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80b61b9:	00 
 80b61ba:	89 04 24             	mov    %eax,(%esp)
 80b61bd:	e8 fe 7a fc ff       	call   807dcc0 <memset@plt>
 80b61c2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b61c5:	c7 80 d8 03 00 00 00 	movl   $0x0,0x3d8(%eax)
 80b61cc:	00 00 00 
 80b61cf:	c9                   	leave
 80b61d0:	c3                   	ret
 80b61d1:	90                   	nop

```

```c
// CRijndael::CRijndael @ 0x80b60ac

/* CRijndael::CRijndael() */

void __thiscall CRijndael::CRijndael(CRijndael *this)

{
  IMethod::IMethod((IMethod *)this);
  *(undefined ***)this = &PTR__CRijndael_08b22f68;
  memset(this + 0x18,0,0x20);
  memset(this + 0x38,0,0x1c0);
  memset(this + 0x1f8,0,0x1e0);
  memset(this + 0x3dc,0,0x20);
  memset(this + 0x3fc,0,0x20);
  memset(this + 0x41c,0,0x20);
  memset(this + 0x43c,0,0x20);
  memset(this + 0x45c,0,0x20);
  *(undefined4 *)(this + 0x3d8) = 0;
  return;
}

```

---

## Decrypt

```asm
// === 080b8028 CRijndael::Decrypt  [0x080b8028-0x80b824b] ===
 80b8028:	55                   	push   %ebp
 80b8029:	89 e5                	mov    %esp,%ebp
 80b802b:	83 ec 38             	sub    $0x38,%esp
 80b802e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8031:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b8035:	83 f0 01             	xor    $0x1,%eax
 80b8038:	84 c0                	test   %al,%al
 80b803a:	74 0a                	je     80b8046 <_ZN9CRijndael7DecryptEPKcPcj+0x1e>
 80b803c:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b8041:	e9 02 02 00 00       	jmp    80b8248 <_ZN9CRijndael7DecryptEPKcPcj+0x220>
 80b8046:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80b804a:	74 18                	je     80b8064 <_ZN9CRijndael7DecryptEPKcPcj+0x3c>
 80b804c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b804f:	8b 40 08             	mov    0x8(%eax),%eax
 80b8052:	89 c1                	mov    %eax,%ecx
 80b8054:	8b 45 14             	mov    0x14(%ebp),%eax
 80b8057:	ba 00 00 00 00       	mov    $0x0,%edx
 80b805c:	f7 f1                	div    %ecx
 80b805e:	89 d0                	mov    %edx,%eax
 80b8060:	85 c0                	test   %eax,%eax
 80b8062:	74 0a                	je     80b806e <_ZN9CRijndael7DecryptEPKcPcj+0x46>
 80b8064:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 80b8069:	e9 da 01 00 00       	jmp    80b8248 <_ZN9CRijndael7DecryptEPKcPcj+0x220>
 80b806e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8071:	8b 40 10             	mov    0x10(%eax),%eax
 80b8074:	83 f8 01             	cmp    $0x1,%eax
 80b8077:	0f 85 ac 00 00 00    	jne    80b8129 <_ZN9CRijndael7DecryptEPKcPcj+0x101>
 80b807d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80b8084:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b8087:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b808a:	8b 45 10             	mov    0x10(%ebp),%eax
 80b808d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b8090:	eb 70                	jmp    80b8102 <_ZN9CRijndael7DecryptEPKcPcj+0xda>
 80b8092:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b8095:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b8099:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b809c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b80a0:	8b 45 08             	mov    0x8(%ebp),%eax
 80b80a3:	89 04 24             	mov    %eax,(%esp)
 80b80a6:	e8 75 f9 ff ff       	call   80b7a20 <_ZN9CRijndael12DecryptBlockEPKcPc>
 80b80ab:	8b 45 08             	mov    0x8(%ebp),%eax
 80b80ae:	8d 90 fc 03 00 00    	lea    0x3fc(%eax),%edx
 80b80b4:	8b 45 08             	mov    0x8(%ebp),%eax
 80b80b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80b80bb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80b80be:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b80c2:	89 04 24             	mov    %eax,(%esp)
 80b80c5:	e8 4c c2 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80b80ca:	8b 45 08             	mov    0x8(%ebp),%eax
 80b80cd:	8b 40 08             	mov    0x8(%eax),%eax
 80b80d0:	8b 55 08             	mov    0x8(%ebp),%edx
 80b80d3:	81 c2 fc 03 00 00    	add    $0x3fc,%edx
 80b80d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b80dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b80e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b80e4:	89 14 24             	mov    %edx,(%esp)
 80b80e7:	e8 b4 57 fc ff       	call   807d8a0 <memcpy@plt>
 80b80ec:	8b 45 08             	mov    0x8(%ebp),%eax
 80b80ef:	8b 40 08             	mov    0x8(%eax),%eax
 80b80f2:	01 45 f0             	add    %eax,-0x10(%ebp)
 80b80f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b80f8:	8b 40 08             	mov    0x8(%eax),%eax
 80b80fb:	01 45 f4             	add    %eax,-0xc(%ebp)
 80b80fe:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80b8102:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8105:	8b 40 08             	mov    0x8(%eax),%eax
 80b8108:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b810b:	8b 45 14             	mov    0x14(%ebp),%eax
 80b810e:	ba 00 00 00 00       	mov    $0x0,%edx
 80b8113:	f7 75 e4             	divl   -0x1c(%ebp)
 80b8116:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b8119:	0f 97 c0             	seta   %al
 80b811c:	84 c0                	test   %al,%al
 80b811e:	0f 85 6e ff ff ff    	jne    80b8092 <_ZN9CRijndael7DecryptEPKcPcj+0x6a>
 80b8124:	e9 1a 01 00 00       	jmp    80b8243 <_ZN9CRijndael7DecryptEPKcPcj+0x21b>
 80b8129:	8b 45 08             	mov    0x8(%ebp),%eax
 80b812c:	8b 40 10             	mov    0x10(%eax),%eax
 80b812f:	83 f8 02             	cmp    $0x2,%eax
 80b8132:	0f 85 a9 00 00 00    	jne    80b81e1 <_ZN9CRijndael7DecryptEPKcPcj+0x1b9>
 80b8138:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80b813f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b8142:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b8145:	8b 45 10             	mov    0x10(%ebp),%eax
 80b8148:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b814b:	eb 70                	jmp    80b81bd <_ZN9CRijndael7DecryptEPKcPcj+0x195>
 80b814d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8150:	8d 90 fc 03 00 00    	lea    0x3fc(%eax),%edx
 80b8156:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b8159:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b815d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b8161:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8164:	89 04 24             	mov    %eax,(%esp)
 80b8167:	e8 ca f4 ff ff       	call   80b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>
 80b816c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b816f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80b8172:	89 54 24 08          	mov    %edx,0x8(%esp)
 80b8176:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80b8179:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b817d:	89 04 24             	mov    %eax,(%esp)
 80b8180:	e8 91 c1 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80b8185:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8188:	8b 40 08             	mov    0x8(%eax),%eax
 80b818b:	8b 55 08             	mov    0x8(%ebp),%edx
 80b818e:	81 c2 fc 03 00 00    	add    $0x3fc,%edx
 80b8194:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b8198:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b819b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b819f:	89 14 24             	mov    %edx,(%esp)
 80b81a2:	e8 f9 56 fc ff       	call   807d8a0 <memcpy@plt>
 80b81a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80b81aa:	8b 40 08             	mov    0x8(%eax),%eax
 80b81ad:	01 45 f0             	add    %eax,-0x10(%ebp)
 80b81b0:	8b 45 08             	mov    0x8(%ebp),%eax
 80b81b3:	8b 40 08             	mov    0x8(%eax),%eax
 80b81b6:	01 45 f4             	add    %eax,-0xc(%ebp)
 80b81b9:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80b81bd:	8b 45 08             	mov    0x8(%ebp),%eax
 80b81c0:	8b 40 08             	mov    0x8(%eax),%eax
 80b81c3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b81c6:	8b 45 14             	mov    0x14(%ebp),%eax
 80b81c9:	ba 00 00 00 00       	mov    $0x0,%edx
 80b81ce:	f7 75 e4             	divl   -0x1c(%ebp)
 80b81d1:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b81d4:	0f 97 c0             	seta   %al
 80b81d7:	84 c0                	test   %al,%al
 80b81d9:	0f 85 6e ff ff ff    	jne    80b814d <_ZN9CRijndael7DecryptEPKcPcj+0x125>
 80b81df:	eb 62                	jmp    80b8243 <_ZN9CRijndael7DecryptEPKcPcj+0x21b>
 80b81e1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80b81e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b81eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b81ee:	8b 45 10             	mov    0x10(%ebp),%eax
 80b81f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b81f4:	eb 2f                	jmp    80b8225 <_ZN9CRijndael7DecryptEPKcPcj+0x1fd>
 80b81f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b81f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b81fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b8200:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b8204:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8207:	89 04 24             	mov    %eax,(%esp)
 80b820a:	e8 11 f8 ff ff       	call   80b7a20 <_ZN9CRijndael12DecryptBlockEPKcPc>
 80b820f:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8212:	8b 40 08             	mov    0x8(%eax),%eax
 80b8215:	01 45 f0             	add    %eax,-0x10(%ebp)
 80b8218:	8b 45 08             	mov    0x8(%ebp),%eax
 80b821b:	8b 40 08             	mov    0x8(%eax),%eax
 80b821e:	01 45 f4             	add    %eax,-0xc(%ebp)
 80b8221:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80b8225:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8228:	8b 40 08             	mov    0x8(%eax),%eax
 80b822b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b822e:	8b 45 14             	mov    0x14(%ebp),%eax
 80b8231:	ba 00 00 00 00       	mov    $0x0,%edx
 80b8236:	f7 75 e4             	divl   -0x1c(%ebp)
 80b8239:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b823c:	0f 97 c0             	seta   %al
 80b823f:	84 c0                	test   %al,%al
 80b8241:	75 b3                	jne    80b81f6 <_ZN9CRijndael7DecryptEPKcPcj+0x1ce>
 80b8243:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b8248:	c9                   	leave
 80b8249:	c3                   	ret
 80b824a:	90                   	nop
 80b824b:	90                   	nop

```

```c
// CRijndael::Decrypt @ 0x80b8028

/* CRijndael::Decrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CRijndael::Decrypt(CRijndael *this,char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  char *local_14;
  char *local_10;
  
  if (this[4] == (CRijndael)0x1) {
    if ((param_3 == 0) || (param_3 % *(uint *)(this + 8) != 0)) {
      uVar1 = 0x7000000a;
    }
    else {
      if (*(int *)(this + 0x10) == 1) {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          DecryptBlock(this,local_14,local_10);
          IMethod::Xor((IMethod *)this,local_10,(char *)(this + 0x3fc));
          memcpy(this + 0x3fc,local_14,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else if (*(int *)(this + 0x10) == 2) {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,(char *)(this + 0x3fc),local_10);
          IMethod::Xor((IMethod *)this,local_10,local_14);
          memcpy(this + 0x3fc,local_14,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          DecryptBlock(this,local_14,local_10);
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## DecryptBlock

```asm
// === 080b7a20 CRijndael::DecryptBlock  [0x080b7a20-0x80b7dff] ===
 80b7a20:	55                   	push   %ebp
 80b7a21:	89 e5                	mov    %esp,%ebp
 80b7a23:	56                   	push   %esi
 80b7a24:	53                   	push   %ebx
 80b7a25:	83 ec 40             	sub    $0x40,%esp
 80b7a28:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7a2b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b7a2f:	83 f0 01             	xor    $0x1,%eax
 80b7a32:	84 c0                	test   %al,%al
 80b7a34:	74 0a                	je     80b7a40 <_ZN9CRijndael12DecryptBlockEPKcPc+0x20>
 80b7a36:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b7a3b:	e9 b9 03 00 00       	jmp    80b7df9 <_ZN9CRijndael12DecryptBlockEPKcPc+0x3d9>
 80b7a40:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7a43:	8b 40 08             	mov    0x8(%eax),%eax
 80b7a46:	83 f8 10             	cmp    $0x10,%eax
 80b7a49:	75 23                	jne    80b7a6e <_ZN9CRijndael12DecryptBlockEPKcPc+0x4e>
 80b7a4b:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7a4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7a52:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7a55:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b7a59:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7a5c:	89 04 24             	mov    %eax,(%esp)
 80b7a5f:	e8 84 f6 ff ff       	call   80b70e8 <_ZN9CRijndael15DefDecryptBlockEPKcPc>
 80b7a64:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b7a69:	e9 8b 03 00 00       	jmp    80b7df9 <_ZN9CRijndael12DecryptBlockEPKcPc+0x3d9>
 80b7a6e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7a71:	8b 40 08             	mov    0x8(%eax),%eax
 80b7a74:	89 c2                	mov    %eax,%edx
 80b7a76:	c1 fa 1f             	sar    $0x1f,%edx
 80b7a79:	c1 ea 1e             	shr    $0x1e,%edx
 80b7a7c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7a7f:	c1 f8 02             	sar    $0x2,%eax
 80b7a82:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80b7a85:	83 7d d0 04          	cmpl   $0x4,-0x30(%ebp)
 80b7a89:	74 14                	je     80b7a9f <_ZN9CRijndael12DecryptBlockEPKcPc+0x7f>
 80b7a8b:	83 7d d0 06          	cmpl   $0x6,-0x30(%ebp)
 80b7a8f:	75 07                	jne    80b7a98 <_ZN9CRijndael12DecryptBlockEPKcPc+0x78>
 80b7a91:	b8 01 00 00 00       	mov    $0x1,%eax
 80b7a96:	eb 05                	jmp    80b7a9d <_ZN9CRijndael12DecryptBlockEPKcPc+0x7d>
 80b7a98:	b8 02 00 00 00       	mov    $0x2,%eax
 80b7a9d:	eb 05                	jmp    80b7aa4 <_ZN9CRijndael12DecryptBlockEPKcPc+0x84>
 80b7a9f:	b8 00 00 00 00       	mov    $0x0,%eax
 80b7aa4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b7aa7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7aaa:	c1 e0 05             	shl    $0x5,%eax
 80b7aad:	8b 80 cc 2e b2 08    	mov    0x8b22ecc(%eax),%eax
 80b7ab3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80b7ab6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7ab9:	c1 e0 05             	shl    $0x5,%eax
 80b7abc:	8b 80 d4 2e b2 08    	mov    0x8b22ed4(%eax),%eax
 80b7ac2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80b7ac5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7ac8:	c1 e0 05             	shl    $0x5,%eax
 80b7acb:	8b 80 dc 2e b2 08    	mov    0x8b22edc(%eax),%eax
 80b7ad1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80b7ad4:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ad7:	05 5c 04 00 00       	add    $0x45c,%eax
 80b7adc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b7adf:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80b7ae6:	e9 80 00 00 00       	jmp    80b7b6b <_ZN9CRijndael12DecryptBlockEPKcPc+0x14b>
 80b7aeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7aee:	0f b6 00             	movzbl (%eax),%eax
 80b7af1:	0f b6 c0             	movzbl %al,%eax
 80b7af4:	89 c2                	mov    %eax,%edx
 80b7af6:	c1 e2 18             	shl    $0x18,%edx
 80b7af9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7afc:	89 10                	mov    %edx,(%eax)
 80b7afe:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7b02:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7b05:	8b 10                	mov    (%eax),%edx
 80b7b07:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7b0a:	0f b6 00             	movzbl (%eax),%eax
 80b7b0d:	0f b6 c0             	movzbl %al,%eax
 80b7b10:	c1 e0 10             	shl    $0x10,%eax
 80b7b13:	09 c2                	or     %eax,%edx
 80b7b15:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7b18:	89 10                	mov    %edx,(%eax)
 80b7b1a:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7b1e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7b21:	8b 10                	mov    (%eax),%edx
 80b7b23:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7b26:	0f b6 00             	movzbl (%eax),%eax
 80b7b29:	0f b6 c0             	movzbl %al,%eax
 80b7b2c:	c1 e0 08             	shl    $0x8,%eax
 80b7b2f:	09 c2                	or     %eax,%edx
 80b7b31:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7b34:	89 10                	mov    %edx,(%eax)
 80b7b36:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7b3a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7b3d:	8b 08                	mov    (%eax),%ecx
 80b7b3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 80b7b42:	0f b6 12             	movzbl (%edx),%edx
 80b7b45:	0f b6 d2             	movzbl %dl,%edx
 80b7b48:	09 ca                	or     %ecx,%edx
 80b7b4a:	89 10                	mov    %edx,(%eax)
 80b7b4c:	83 45 ec 04          	addl   $0x4,-0x14(%ebp)
 80b7b50:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7b54:	8b 08                	mov    (%eax),%ecx
 80b7b56:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80b7b59:	8b 55 08             	mov    0x8(%ebp),%edx
 80b7b5c:	83 c3 7c             	add    $0x7c,%ebx
 80b7b5f:	8b 54 9a 08          	mov    0x8(%edx,%ebx,4),%edx
 80b7b63:	31 ca                	xor    %ecx,%edx
 80b7b65:	89 10                	mov    %edx,(%eax)
 80b7b67:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b7b6b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7b6e:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 80b7b71:	0f 9c c0             	setl   %al
 80b7b74:	84 c0                	test   %al,%al
 80b7b76:	0f 85 6f ff ff ff    	jne    80b7aeb <_ZN9CRijndael12DecryptBlockEPKcPc+0xcb>
 80b7b7c:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 80b7b83:	e9 1d 01 00 00       	jmp    80b7ca5 <_ZN9CRijndael12DecryptBlockEPKcPc+0x285>
 80b7b88:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80b7b8f:	e9 d4 00 00 00       	jmp    80b7c68 <_ZN9CRijndael12DecryptBlockEPKcPc+0x248>
 80b7b94:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80b7b97:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7b9a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7b9d:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7ba3:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7ba7:	c1 e8 18             	shr    $0x18,%eax
 80b7baa:	8b 0c 85 a0 0e b2 08 	mov    0x8b20ea0(,%eax,4),%ecx
 80b7bb1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7bb4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7bb7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7bba:	89 c2                	mov    %eax,%edx
 80b7bbc:	c1 fa 1f             	sar    $0x1f,%edx
 80b7bbf:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7bc5:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7bcb:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7bcf:	c1 f8 10             	sar    $0x10,%eax
 80b7bd2:	25 ff 00 00 00       	and    $0xff,%eax
 80b7bd7:	8b 04 85 a0 12 b2 08 	mov    0x8b212a0(,%eax,4),%eax
 80b7bde:	31 c1                	xor    %eax,%ecx
 80b7be0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7be3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7be6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7be9:	89 c2                	mov    %eax,%edx
 80b7beb:	c1 fa 1f             	sar    $0x1f,%edx
 80b7bee:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7bf1:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7bf4:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7bfa:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7bfe:	c1 f8 08             	sar    $0x8,%eax
 80b7c01:	25 ff 00 00 00       	and    $0xff,%eax
 80b7c06:	8b 04 85 a0 16 b2 08 	mov    0x8b216a0(,%eax,4),%eax
 80b7c0d:	31 c1                	xor    %eax,%ecx
 80b7c0f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7c12:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7c15:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7c18:	89 c2                	mov    %eax,%edx
 80b7c1a:	c1 fa 1f             	sar    $0x1f,%edx
 80b7c1d:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7c20:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7c23:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7c29:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7c2d:	25 ff 00 00 00       	and    $0xff,%eax
 80b7c32:	8b 04 85 a0 1a b2 08 	mov    0x8b21aa0(,%eax,4),%eax
 80b7c39:	89 ce                	mov    %ecx,%esi
 80b7c3b:	31 c6                	xor    %eax,%esi
 80b7c3d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 80b7c40:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7c43:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7c46:	c1 e1 03             	shl    $0x3,%ecx
 80b7c49:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80b7c4c:	83 c2 7c             	add    $0x7c,%edx
 80b7c4f:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80b7c53:	89 f1                	mov    %esi,%ecx
 80b7c55:	31 c1                	xor    %eax,%ecx
 80b7c57:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7c5a:	8d 93 0c 01 00 00    	lea    0x10c(%ebx),%edx
 80b7c60:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 80b7c64:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b7c68:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7c6b:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 80b7c6e:	0f 9c c0             	setl   %al
 80b7c71:	84 c0                	test   %al,%al
 80b7c73:	0f 85 1b ff ff ff    	jne    80b7b94 <_ZN9CRijndael12DecryptBlockEPKcPc+0x174>
 80b7c79:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b7c7c:	c1 e0 02             	shl    $0x2,%eax
 80b7c7f:	8b 55 08             	mov    0x8(%ebp),%edx
 80b7c82:	8d 8a 3c 04 00 00    	lea    0x43c(%edx),%ecx
 80b7c88:	8b 55 08             	mov    0x8(%ebp),%edx
 80b7c8b:	81 c2 5c 04 00 00    	add    $0x45c,%edx
 80b7c91:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7c95:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80b7c99:	89 14 24             	mov    %edx,(%esp)
 80b7c9c:	e8 ff 5b fc ff       	call   807d8a0 <memcpy@plt>
 80b7ca1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80b7ca5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ca8:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b7cae:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80b7cb1:	0f 9f c0             	setg   %al
 80b7cb4:	84 c0                	test   %al,%al
 80b7cb6:	0f 85 cc fe ff ff    	jne    80b7b88 <_ZN9CRijndael12DecryptBlockEPKcPc+0x168>
 80b7cbc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80b7cc3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80b7cca:	e9 14 01 00 00       	jmp    80b7de3 <_ZN9CRijndael12DecryptBlockEPKcPc+0x3c3>
 80b7ccf:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7cd2:	8b 88 d8 03 00 00    	mov    0x3d8(%eax),%ecx
 80b7cd8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7cdb:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7cde:	c1 e1 03             	shl    $0x3,%ecx
 80b7ce1:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80b7ce4:	83 c2 7c             	add    $0x7c,%edx
 80b7ce7:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80b7ceb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b7cee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b7cf1:	03 45 10             	add    0x10(%ebp),%eax
 80b7cf4:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 80b7cf7:	8b 55 08             	mov    0x8(%ebp),%edx
 80b7cfa:	81 c1 14 01 00 00    	add    $0x114,%ecx
 80b7d00:	8b 54 8a 0c          	mov    0xc(%edx,%ecx,4),%edx
 80b7d04:	c1 ea 18             	shr    $0x18,%edx
 80b7d07:	0f b6 8a a0 fd b1 08 	movzbl 0x8b1fda0(%edx),%ecx
 80b7d0e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80b7d11:	c1 fa 18             	sar    $0x18,%edx
 80b7d14:	31 ca                	xor    %ecx,%edx
 80b7d16:	88 10                	mov    %dl,(%eax)
 80b7d18:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b7d1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b7d1f:	89 c1                	mov    %eax,%ecx
 80b7d21:	03 4d 10             	add    0x10(%ebp),%ecx
 80b7d24:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7d27:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7d2a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7d2d:	89 c2                	mov    %eax,%edx
 80b7d2f:	c1 fa 1f             	sar    $0x1f,%edx
 80b7d32:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7d35:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7d38:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7d3e:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7d42:	c1 f8 10             	sar    $0x10,%eax
 80b7d45:	25 ff 00 00 00       	and    $0xff,%eax
 80b7d4a:	0f b6 90 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%edx
 80b7d51:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b7d54:	c1 f8 10             	sar    $0x10,%eax
 80b7d57:	31 d0                	xor    %edx,%eax
 80b7d59:	88 01                	mov    %al,(%ecx)
 80b7d5b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b7d5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b7d62:	89 c1                	mov    %eax,%ecx
 80b7d64:	03 4d 10             	add    0x10(%ebp),%ecx
 80b7d67:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7d6a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7d6d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7d70:	89 c2                	mov    %eax,%edx
 80b7d72:	c1 fa 1f             	sar    $0x1f,%edx
 80b7d75:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7d78:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7d7b:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7d81:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7d85:	c1 f8 08             	sar    $0x8,%eax
 80b7d88:	25 ff 00 00 00       	and    $0xff,%eax
 80b7d8d:	0f b6 90 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%edx
 80b7d94:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b7d97:	c1 f8 08             	sar    $0x8,%eax
 80b7d9a:	31 d0                	xor    %edx,%eax
 80b7d9c:	88 01                	mov    %al,(%ecx)
 80b7d9e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b7da2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b7da5:	89 c1                	mov    %eax,%ecx
 80b7da7:	03 4d 10             	add    0x10(%ebp),%ecx
 80b7daa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7dad:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7db0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7db3:	89 c2                	mov    %eax,%edx
 80b7db5:	c1 fa 1f             	sar    $0x1f,%edx
 80b7db8:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7dbb:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7dbe:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7dc4:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7dc8:	25 ff 00 00 00       	and    $0xff,%eax
 80b7dcd:	0f b6 90 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%edx
 80b7dd4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b7dd7:	31 d0                	xor    %edx,%eax
 80b7dd9:	88 01                	mov    %al,(%ecx)
 80b7ddb:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b7ddf:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b7de3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7de6:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 80b7de9:	0f 9c c0             	setl   %al
 80b7dec:	84 c0                	test   %al,%al
 80b7dee:	0f 85 db fe ff ff    	jne    80b7ccf <_ZN9CRijndael12DecryptBlockEPKcPc+0x2af>
 80b7df4:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b7df9:	83 c4 40             	add    $0x40,%esp
 80b7dfc:	5b                   	pop    %ebx
 80b7dfd:	5e                   	pop    %esi
 80b7dfe:	5d                   	pop    %ebp
 80b7dff:	c3                   	ret

```

```c
// CRijndael::DecryptBlock @ 0x80b7a20

/* CRijndael::DecryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::DecryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_20;
  CRijndael *local_18;
  int local_14;
  int local_10;
  
  if (this[4] == (CRijndael)0x1) {
    if (*(int *)(this + 8) == 0x10) {
      DefDecryptBlock(this,param_1,param_2);
      uVar3 = 0x6fffffff;
    }
    else {
      iVar4 = (int)(((uint)(*(int *)(this + 8) >> 0x1f) >> 0x1e) + *(int *)(this + 8)) >> 2;
      if (iVar4 == 4) {
        iVar5 = 0;
      }
      else if (iVar4 == 6) {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      iVar1 = *(int *)(sm_shifts + iVar5 * 0x20 + 0xc);
      iVar2 = *(int *)(sm_shifts + iVar5 * 0x20 + 0x14);
      iVar5 = *(int *)(sm_shifts + iVar5 * 0x20 + 0x1c);
      local_18 = this + 0x45c;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        *(uint *)local_18 = (uint)(byte)*param_1 << 0x18;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[1] << 0x10;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[2] << 8;
        *(uint *)local_18 = (uint)(byte)param_1[3] | *(uint *)local_18;
        param_1 = param_1 + 4;
        *(uint *)local_18 = *(uint *)(this + (local_20 + 0x7c) * 4 + 8) ^ *(uint *)local_18;
        local_18 = local_18 + 4;
      }
      for (local_10 = 1; local_10 < *(int *)(this + 0x3d8); local_10 = local_10 + 1) {
        for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
          *(uint *)(this + (local_20 + 0x10c) * 4 + 0xc) =
               *(uint *)(sm_T5 + (*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18) * 4) ^
               *(uint *)(sm_T6 + (*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >>
                                  0x10 & 0xffU) * 4) ^
               *(uint *)(sm_T7 + (*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >>
                                  8 & 0xffU) * 4) ^
               *(uint *)(sm_T8 + (*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) &
                                 0xff) * 4) ^
               *(uint *)(this + (local_10 * 8 + local_20 + 0x7c) * 4 + 8);
        }
        memcpy(this + 0x45c,this + 0x43c,iVar4 << 2);
      }
      local_14 = 0;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        uVar3 = *(undefined4 *)(this + (*(int *)(this + 0x3d8) * 8 + local_20 + 0x7c) * 4 + 8);
        param_2[local_14] =
             (byte)((uint)uVar3 >> 0x18) ^
             sm_Si[*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18];
        param_2[local_14 + 1] =
             (byte)((uint)uVar3 >> 0x10) ^
             sm_Si[*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >> 0x10 & 0xff];
        param_2[local_14 + 2] =
             (byte)((uint)uVar3 >> 8) ^
             sm_Si[*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >> 8 & 0xff];
        param_2[local_14 + 3] =
             (byte)uVar3 ^
             sm_Si[*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) & 0xff];
        local_14 = local_14 + 4;
      }
      uVar3 = 0x6fffffff;
    }
  }
  else {
    uVar3 = 0x70000005;
  }
  return uVar3;
}

```

---

## DefDecryptBlock

```asm
// === 080b70e8 CRijndael::DefDecryptBlock  [0x080b70e8-0x80b7635] ===
 80b70e8:	55                   	push   %ebp
 80b70e9:	89 e5                	mov    %esp,%ebp
 80b70eb:	83 ec 30             	sub    $0x30,%esp
 80b70ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80b70f1:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b70f5:	83 f0 01             	xor    $0x1,%eax
 80b70f8:	84 c0                	test   %al,%al
 80b70fa:	74 0a                	je     80b7106 <_ZN9CRijndael15DefDecryptBlockEPKcPc+0x1e>
 80b70fc:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b7101:	e9 2d 05 00 00       	jmp    80b7633 <_ZN9CRijndael15DefDecryptBlockEPKcPc+0x54b>
 80b7106:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7109:	05 f8 01 00 00       	add    $0x1f8,%eax
 80b710e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b7111:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7114:	0f b6 00             	movzbl (%eax),%eax
 80b7117:	0f b6 c0             	movzbl %al,%eax
 80b711a:	c1 e0 18             	shl    $0x18,%eax
 80b711d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80b7120:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7124:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7127:	0f b6 00             	movzbl (%eax),%eax
 80b712a:	0f b6 c0             	movzbl %al,%eax
 80b712d:	c1 e0 10             	shl    $0x10,%eax
 80b7130:	09 45 d8             	or     %eax,-0x28(%ebp)
 80b7133:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7137:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b713a:	0f b6 00             	movzbl (%eax),%eax
 80b713d:	0f b6 c0             	movzbl %al,%eax
 80b7140:	c1 e0 08             	shl    $0x8,%eax
 80b7143:	09 45 d8             	or     %eax,-0x28(%ebp)
 80b7146:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b714a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b714d:	0f b6 00             	movzbl (%eax),%eax
 80b7150:	0f b6 c0             	movzbl %al,%eax
 80b7153:	09 45 d8             	or     %eax,-0x28(%ebp)
 80b7156:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b715a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b715d:	8b 00                	mov    (%eax),%eax
 80b715f:	31 45 d8             	xor    %eax,-0x28(%ebp)
 80b7162:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7165:	0f b6 00             	movzbl (%eax),%eax
 80b7168:	0f b6 c0             	movzbl %al,%eax
 80b716b:	c1 e0 18             	shl    $0x18,%eax
 80b716e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80b7171:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7175:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7178:	0f b6 00             	movzbl (%eax),%eax
 80b717b:	0f b6 c0             	movzbl %al,%eax
 80b717e:	c1 e0 10             	shl    $0x10,%eax
 80b7181:	09 45 dc             	or     %eax,-0x24(%ebp)
 80b7184:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7188:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b718b:	0f b6 00             	movzbl (%eax),%eax
 80b718e:	0f b6 c0             	movzbl %al,%eax
 80b7191:	c1 e0 08             	shl    $0x8,%eax
 80b7194:	09 45 dc             	or     %eax,-0x24(%ebp)
 80b7197:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b719b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b719e:	0f b6 00             	movzbl (%eax),%eax
 80b71a1:	0f b6 c0             	movzbl %al,%eax
 80b71a4:	09 45 dc             	or     %eax,-0x24(%ebp)
 80b71a7:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b71ab:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b71ae:	83 c0 04             	add    $0x4,%eax
 80b71b1:	8b 00                	mov    (%eax),%eax
 80b71b3:	31 45 dc             	xor    %eax,-0x24(%ebp)
 80b71b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b71b9:	0f b6 00             	movzbl (%eax),%eax
 80b71bc:	0f b6 c0             	movzbl %al,%eax
 80b71bf:	c1 e0 18             	shl    $0x18,%eax
 80b71c2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80b71c5:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b71c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b71cc:	0f b6 00             	movzbl (%eax),%eax
 80b71cf:	0f b6 c0             	movzbl %al,%eax
 80b71d2:	c1 e0 10             	shl    $0x10,%eax
 80b71d5:	09 45 e0             	or     %eax,-0x20(%ebp)
 80b71d8:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b71dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b71df:	0f b6 00             	movzbl (%eax),%eax
 80b71e2:	0f b6 c0             	movzbl %al,%eax
 80b71e5:	c1 e0 08             	shl    $0x8,%eax
 80b71e8:	09 45 e0             	or     %eax,-0x20(%ebp)
 80b71eb:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b71ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b71f2:	0f b6 00             	movzbl (%eax),%eax
 80b71f5:	0f b6 c0             	movzbl %al,%eax
 80b71f8:	09 45 e0             	or     %eax,-0x20(%ebp)
 80b71fb:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b71ff:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7202:	83 c0 08             	add    $0x8,%eax
 80b7205:	8b 00                	mov    (%eax),%eax
 80b7207:	31 45 e0             	xor    %eax,-0x20(%ebp)
 80b720a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b720d:	0f b6 00             	movzbl (%eax),%eax
 80b7210:	0f b6 c0             	movzbl %al,%eax
 80b7213:	c1 e0 18             	shl    $0x18,%eax
 80b7216:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b7219:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b721d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7220:	0f b6 00             	movzbl (%eax),%eax
 80b7223:	0f b6 c0             	movzbl %al,%eax
 80b7226:	c1 e0 10             	shl    $0x10,%eax
 80b7229:	09 45 e4             	or     %eax,-0x1c(%ebp)
 80b722c:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7230:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7233:	0f b6 00             	movzbl (%eax),%eax
 80b7236:	0f b6 c0             	movzbl %al,%eax
 80b7239:	c1 e0 08             	shl    $0x8,%eax
 80b723c:	09 45 e4             	or     %eax,-0x1c(%ebp)
 80b723f:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7243:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7246:	0f b6 00             	movzbl (%eax),%eax
 80b7249:	0f b6 c0             	movzbl %al,%eax
 80b724c:	09 45 e4             	or     %eax,-0x1c(%ebp)
 80b724f:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7253:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7256:	83 c0 0c             	add    $0xc,%eax
 80b7259:	8b 00                	mov    (%eax),%eax
 80b725b:	31 45 e4             	xor    %eax,-0x1c(%ebp)
 80b725e:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 80b7265:	e9 79 01 00 00       	jmp    80b73e3 <_ZN9CRijndael15DefDecryptBlockEPKcPc+0x2fb>
 80b726a:	8b 45 fc             	mov    -0x4(%ebp),%eax
 80b726d:	c1 e0 05             	shl    $0x5,%eax
 80b7270:	05 f0 01 00 00       	add    $0x1f0,%eax
 80b7275:	03 45 08             	add    0x8(%ebp),%eax
 80b7278:	83 c0 08             	add    $0x8,%eax
 80b727b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b727e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7281:	c1 e8 18             	shr    $0x18,%eax
 80b7284:	8b 14 85 a0 0e b2 08 	mov    0x8b20ea0(,%eax,4),%edx
 80b728b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b728e:	c1 f8 10             	sar    $0x10,%eax
 80b7291:	25 ff 00 00 00       	and    $0xff,%eax
 80b7296:	8b 04 85 a0 12 b2 08 	mov    0x8b212a0(,%eax,4),%eax
 80b729d:	31 c2                	xor    %eax,%edx
 80b729f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b72a2:	c1 f8 08             	sar    $0x8,%eax
 80b72a5:	25 ff 00 00 00       	and    $0xff,%eax
 80b72aa:	8b 04 85 a0 16 b2 08 	mov    0x8b216a0(,%eax,4),%eax
 80b72b1:	31 c2                	xor    %eax,%edx
 80b72b3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b72b6:	25 ff 00 00 00       	and    $0xff,%eax
 80b72bb:	8b 04 85 a0 1a b2 08 	mov    0x8b21aa0(,%eax,4),%eax
 80b72c2:	31 c2                	xor    %eax,%edx
 80b72c4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b72c7:	8b 00                	mov    (%eax),%eax
 80b72c9:	31 d0                	xor    %edx,%eax
 80b72cb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b72ce:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b72d1:	c1 e8 18             	shr    $0x18,%eax
 80b72d4:	8b 14 85 a0 0e b2 08 	mov    0x8b20ea0(,%eax,4),%edx
 80b72db:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b72de:	c1 f8 10             	sar    $0x10,%eax
 80b72e1:	25 ff 00 00 00       	and    $0xff,%eax
 80b72e6:	8b 04 85 a0 12 b2 08 	mov    0x8b212a0(,%eax,4),%eax
 80b72ed:	31 c2                	xor    %eax,%edx
 80b72ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b72f2:	c1 f8 08             	sar    $0x8,%eax
 80b72f5:	25 ff 00 00 00       	and    $0xff,%eax
 80b72fa:	8b 04 85 a0 16 b2 08 	mov    0x8b216a0(,%eax,4),%eax
 80b7301:	31 c2                	xor    %eax,%edx
 80b7303:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7306:	25 ff 00 00 00       	and    $0xff,%eax
 80b730b:	8b 04 85 a0 1a b2 08 	mov    0x8b21aa0(,%eax,4),%eax
 80b7312:	31 c2                	xor    %eax,%edx
 80b7314:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7317:	83 c0 04             	add    $0x4,%eax
 80b731a:	8b 00                	mov    (%eax),%eax
 80b731c:	31 d0                	xor    %edx,%eax
 80b731e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b7321:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7324:	c1 e8 18             	shr    $0x18,%eax
 80b7327:	8b 14 85 a0 0e b2 08 	mov    0x8b20ea0(,%eax,4),%edx
 80b732e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7331:	c1 f8 10             	sar    $0x10,%eax
 80b7334:	25 ff 00 00 00       	and    $0xff,%eax
 80b7339:	8b 04 85 a0 12 b2 08 	mov    0x8b212a0(,%eax,4),%eax
 80b7340:	31 c2                	xor    %eax,%edx
 80b7342:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7345:	c1 f8 08             	sar    $0x8,%eax
 80b7348:	25 ff 00 00 00       	and    $0xff,%eax
 80b734d:	8b 04 85 a0 16 b2 08 	mov    0x8b216a0(,%eax,4),%eax
 80b7354:	31 c2                	xor    %eax,%edx
 80b7356:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7359:	25 ff 00 00 00       	and    $0xff,%eax
 80b735e:	8b 04 85 a0 1a b2 08 	mov    0x8b21aa0(,%eax,4),%eax
 80b7365:	31 c2                	xor    %eax,%edx
 80b7367:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b736a:	83 c0 08             	add    $0x8,%eax
 80b736d:	8b 00                	mov    (%eax),%eax
 80b736f:	31 d0                	xor    %edx,%eax
 80b7371:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b7374:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7377:	c1 e8 18             	shr    $0x18,%eax
 80b737a:	8b 14 85 a0 0e b2 08 	mov    0x8b20ea0(,%eax,4),%edx
 80b7381:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7384:	c1 f8 10             	sar    $0x10,%eax
 80b7387:	25 ff 00 00 00       	and    $0xff,%eax
 80b738c:	8b 04 85 a0 12 b2 08 	mov    0x8b212a0(,%eax,4),%eax
 80b7393:	31 c2                	xor    %eax,%edx
 80b7395:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7398:	c1 f8 08             	sar    $0x8,%eax
 80b739b:	25 ff 00 00 00       	and    $0xff,%eax
 80b73a0:	8b 04 85 a0 16 b2 08 	mov    0x8b216a0(,%eax,4),%eax
 80b73a7:	31 c2                	xor    %eax,%edx
 80b73a9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b73ac:	25 ff 00 00 00       	and    $0xff,%eax
 80b73b1:	8b 04 85 a0 1a b2 08 	mov    0x8b21aa0(,%eax,4),%eax
 80b73b8:	31 c2                	xor    %eax,%edx
 80b73ba:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b73bd:	83 c0 0c             	add    $0xc,%eax
 80b73c0:	8b 00                	mov    (%eax),%eax
 80b73c2:	31 d0                	xor    %edx,%eax
 80b73c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b73c7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b73ca:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80b73cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b73d0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80b73d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b73d6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80b73d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b73dc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b73df:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 80b73e3:	8b 45 08             	mov    0x8(%ebp),%eax
 80b73e6:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b73ec:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 80b73ef:	0f 9f c0             	setg   %al
 80b73f2:	84 c0                	test   %al,%al
 80b73f4:	0f 85 70 fe ff ff    	jne    80b726a <_ZN9CRijndael15DefDecryptBlockEPKcPc+0x182>
 80b73fa:	8b 45 08             	mov    0x8(%ebp),%eax
 80b73fd:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b7403:	c1 e0 05             	shl    $0x5,%eax
 80b7406:	05 f0 01 00 00       	add    $0x1f0,%eax
 80b740b:	03 45 08             	add    0x8(%ebp),%eax
 80b740e:	83 c0 08             	add    $0x8,%eax
 80b7411:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b7414:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7417:	8b 00                	mov    (%eax),%eax
 80b7419:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b741c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b741f:	c1 e8 18             	shr    $0x18,%eax
 80b7422:	0f b6 90 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%edx
 80b7429:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b742c:	c1 f8 18             	sar    $0x18,%eax
 80b742f:	31 c2                	xor    %eax,%edx
 80b7431:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7434:	88 10                	mov    %dl,(%eax)
 80b7436:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7439:	8d 50 01             	lea    0x1(%eax),%edx
 80b743c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b743f:	c1 f8 10             	sar    $0x10,%eax
 80b7442:	25 ff 00 00 00       	and    $0xff,%eax
 80b7447:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b744e:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7451:	c1 f8 10             	sar    $0x10,%eax
 80b7454:	31 c8                	xor    %ecx,%eax
 80b7456:	88 02                	mov    %al,(%edx)
 80b7458:	8b 45 10             	mov    0x10(%ebp),%eax
 80b745b:	8d 50 02             	lea    0x2(%eax),%edx
 80b745e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7461:	c1 f8 08             	sar    $0x8,%eax
 80b7464:	25 ff 00 00 00       	and    $0xff,%eax
 80b7469:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b7470:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7473:	c1 f8 08             	sar    $0x8,%eax
 80b7476:	31 c8                	xor    %ecx,%eax
 80b7478:	88 02                	mov    %al,(%edx)
 80b747a:	8b 45 10             	mov    0x10(%ebp),%eax
 80b747d:	8d 50 03             	lea    0x3(%eax),%edx
 80b7480:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7483:	25 ff 00 00 00       	and    $0xff,%eax
 80b7488:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b748f:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7492:	31 c8                	xor    %ecx,%eax
 80b7494:	88 02                	mov    %al,(%edx)
 80b7496:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7499:	83 c0 04             	add    $0x4,%eax
 80b749c:	8b 00                	mov    (%eax),%eax
 80b749e:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b74a1:	8b 45 10             	mov    0x10(%ebp),%eax
 80b74a4:	8d 50 04             	lea    0x4(%eax),%edx
 80b74a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b74aa:	c1 e8 18             	shr    $0x18,%eax
 80b74ad:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b74b4:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b74b7:	c1 f8 18             	sar    $0x18,%eax
 80b74ba:	31 c8                	xor    %ecx,%eax
 80b74bc:	88 02                	mov    %al,(%edx)
 80b74be:	8b 45 10             	mov    0x10(%ebp),%eax
 80b74c1:	8d 50 05             	lea    0x5(%eax),%edx
 80b74c4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b74c7:	c1 f8 10             	sar    $0x10,%eax
 80b74ca:	25 ff 00 00 00       	and    $0xff,%eax
 80b74cf:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b74d6:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b74d9:	c1 f8 10             	sar    $0x10,%eax
 80b74dc:	31 c8                	xor    %ecx,%eax
 80b74de:	88 02                	mov    %al,(%edx)
 80b74e0:	8b 45 10             	mov    0x10(%ebp),%eax
 80b74e3:	8d 50 06             	lea    0x6(%eax),%edx
 80b74e6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b74e9:	c1 f8 08             	sar    $0x8,%eax
 80b74ec:	25 ff 00 00 00       	and    $0xff,%eax
 80b74f1:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b74f8:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b74fb:	c1 f8 08             	sar    $0x8,%eax
 80b74fe:	31 c8                	xor    %ecx,%eax
 80b7500:	88 02                	mov    %al,(%edx)
 80b7502:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7505:	8d 50 07             	lea    0x7(%eax),%edx
 80b7508:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b750b:	25 ff 00 00 00       	and    $0xff,%eax
 80b7510:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b7517:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b751a:	31 c8                	xor    %ecx,%eax
 80b751c:	88 02                	mov    %al,(%edx)
 80b751e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b7521:	83 c0 08             	add    $0x8,%eax
 80b7524:	8b 00                	mov    (%eax),%eax
 80b7526:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b7529:	8b 45 10             	mov    0x10(%ebp),%eax
 80b752c:	8d 50 08             	lea    0x8(%eax),%edx
 80b752f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7532:	c1 e8 18             	shr    $0x18,%eax
 80b7535:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b753c:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b753f:	c1 f8 18             	sar    $0x18,%eax
 80b7542:	31 c8                	xor    %ecx,%eax
 80b7544:	88 02                	mov    %al,(%edx)
 80b7546:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7549:	8d 50 09             	lea    0x9(%eax),%edx
 80b754c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b754f:	c1 f8 10             	sar    $0x10,%eax
 80b7552:	25 ff 00 00 00       	and    $0xff,%eax
 80b7557:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b755e:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7561:	c1 f8 10             	sar    $0x10,%eax
 80b7564:	31 c8                	xor    %ecx,%eax
 80b7566:	88 02                	mov    %al,(%edx)
 80b7568:	8b 45 10             	mov    0x10(%ebp),%eax
 80b756b:	8d 50 0a             	lea    0xa(%eax),%edx
 80b756e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7571:	c1 f8 08             	sar    $0x8,%eax
 80b7574:	25 ff 00 00 00       	and    $0xff,%eax
 80b7579:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b7580:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7583:	c1 f8 08             	sar    $0x8,%eax
 80b7586:	31 c8                	xor    %ecx,%eax
 80b7588:	88 02                	mov    %al,(%edx)
 80b758a:	8b 45 10             	mov    0x10(%ebp),%eax
 80b758d:	8d 50 0b             	lea    0xb(%eax),%edx
 80b7590:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7593:	25 ff 00 00 00       	and    $0xff,%eax
 80b7598:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b759f:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b75a2:	31 c8                	xor    %ecx,%eax
 80b75a4:	88 02                	mov    %al,(%edx)
 80b75a6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b75a9:	83 c0 0c             	add    $0xc,%eax
 80b75ac:	8b 00                	mov    (%eax),%eax
 80b75ae:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b75b1:	8b 45 10             	mov    0x10(%ebp),%eax
 80b75b4:	8d 50 0c             	lea    0xc(%eax),%edx
 80b75b7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b75ba:	c1 e8 18             	shr    $0x18,%eax
 80b75bd:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b75c4:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b75c7:	c1 f8 18             	sar    $0x18,%eax
 80b75ca:	31 c8                	xor    %ecx,%eax
 80b75cc:	88 02                	mov    %al,(%edx)
 80b75ce:	8b 45 10             	mov    0x10(%ebp),%eax
 80b75d1:	8d 50 0d             	lea    0xd(%eax),%edx
 80b75d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b75d7:	c1 f8 10             	sar    $0x10,%eax
 80b75da:	25 ff 00 00 00       	and    $0xff,%eax
 80b75df:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b75e6:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b75e9:	c1 f8 10             	sar    $0x10,%eax
 80b75ec:	31 c8                	xor    %ecx,%eax
 80b75ee:	88 02                	mov    %al,(%edx)
 80b75f0:	8b 45 10             	mov    0x10(%ebp),%eax
 80b75f3:	8d 50 0e             	lea    0xe(%eax),%edx
 80b75f6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b75f9:	c1 f8 08             	sar    $0x8,%eax
 80b75fc:	25 ff 00 00 00       	and    $0xff,%eax
 80b7601:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b7608:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b760b:	c1 f8 08             	sar    $0x8,%eax
 80b760e:	31 c8                	xor    %ecx,%eax
 80b7610:	88 02                	mov    %al,(%edx)
 80b7612:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7615:	8d 50 0f             	lea    0xf(%eax),%edx
 80b7618:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b761b:	25 ff 00 00 00       	and    $0xff,%eax
 80b7620:	0f b6 88 a0 fd b1 08 	movzbl 0x8b1fda0(%eax),%ecx
 80b7627:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b762a:	31 c8                	xor    %ecx,%eax
 80b762c:	88 02                	mov    %al,(%edx)
 80b762e:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b7633:	c9                   	leave
 80b7634:	c3                   	ret
 80b7635:	90                   	nop

```

```c
// CRijndael::DefDecryptBlock @ 0x80b70e8

/* CRijndael::DefDecryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::DefDecryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_8;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (this[4] == (CRijndael)0x1) {
    local_28 = ((uint)(byte)param_1[4] << 0x18 | (uint)(byte)param_1[5] << 0x10 |
                (uint)(byte)param_1[6] << 8 | (uint)(byte)param_1[7]) ^ *(uint *)(this + 0x1fc);
    local_24 = ((uint)(byte)param_1[8] << 0x18 | (uint)(byte)param_1[9] << 0x10 |
                (uint)(byte)param_1[10] << 8 | (uint)(byte)param_1[0xb]) ^ *(uint *)(this + 0x200);
    local_20 = ((uint)(byte)param_1[0xc] << 0x18 | (uint)(byte)param_1[0xd] << 0x10 |
                (uint)(byte)param_1[0xe] << 8 | (uint)(byte)param_1[0xf]) ^ *(uint *)(this + 0x204);
    local_2c = ((uint)(byte)*param_1 << 0x18 | (uint)(byte)param_1[1] << 0x10 |
                (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[3]) ^ *(uint *)(this + 0x1f8);
    for (local_8 = 1; uVar4 = (int)local_20 >> 0x10, uVar5 = (int)local_24 >> 8,
        uVar6 = (int)local_24 >> 0x10, uVar7 = (int)local_28 >> 8, uVar8 = (int)local_28 >> 0x10,
        local_8 < *(int *)(this + 0x3d8); local_8 = local_8 + 1) {
      iVar2 = local_8 * 0x20;
      uVar3 = local_28 & 0xff;
      local_28 = *(uint *)(this + local_8 * 0x20 + 0x1fc) ^
                 *(uint *)(sm_T5 + (local_28 >> 0x18) * 4) ^
                 *(uint *)(sm_T6 + ((int)local_2c >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T7 + ((int)local_20 >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_T8 + (local_24 & 0xff) * 4);
      local_24 = *(uint *)(this + local_8 * 0x20 + 0x200) ^
                 *(uint *)(sm_T5 + (local_24 >> 0x18) * 4) ^ *(uint *)(sm_T6 + (uVar8 & 0xff) * 4) ^
                 *(uint *)(sm_T7 + ((int)local_2c >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_T8 + (local_20 & 0xff) * 4);
      local_20 = *(uint *)(this + local_8 * 0x20 + 0x204) ^
                 *(uint *)(sm_T5 + (local_20 >> 0x18) * 4) ^ *(uint *)(sm_T6 + (uVar6 & 0xff) * 4) ^
                 *(uint *)(sm_T7 + (uVar7 & 0xff) * 4) ^ *(uint *)(sm_T8 + (local_2c & 0xff) * 4);
      local_2c = *(uint *)(this + iVar2 + 0x1f8) ^
                 *(uint *)(sm_T5 + (local_2c >> 0x18) * 4) ^ *(uint *)(sm_T6 + (uVar4 & 0xff) * 4) ^
                 *(uint *)(sm_T7 + (uVar5 & 0xff) * 4) ^ *(uint *)(sm_T8 + uVar3 * 4);
    }
    iVar2 = *(int *)(this + 0x3d8);
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x1f8);
    *param_2 = sm_Si[local_2c >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[1] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[uVar4 & 0xff];
    param_2[2] = (byte)((uint)uVar1 >> 8) ^ sm_Si[uVar5 & 0xff];
    param_2[3] = (byte)uVar1 ^ sm_Si[local_28 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x1fc);
    param_2[4] = (byte)((uint)uVar1 >> 0x18) ^ sm_Si[local_28 >> 0x18];
    param_2[5] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[(int)local_2c >> 0x10 & 0xff];
    param_2[6] = (byte)((uint)uVar1 >> 8) ^ sm_Si[(int)local_20 >> 8 & 0xff];
    param_2[7] = (byte)uVar1 ^ sm_Si[local_24 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x200);
    param_2[8] = (byte)((uint)uVar1 >> 0x18) ^ sm_Si[local_24 >> 0x18];
    param_2[9] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[uVar8 & 0xff];
    param_2[10] = (byte)((uint)uVar1 >> 8) ^ sm_Si[(int)local_2c >> 8 & 0xff];
    param_2[0xb] = (byte)uVar1 ^ sm_Si[local_20 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x204);
    param_2[0xc] = (byte)((uint)uVar1 >> 0x18) ^ sm_Si[local_20 >> 0x18];
    param_2[0xd] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[uVar6 & 0xff];
    param_2[0xe] = (byte)((uint)uVar1 >> 8) ^ sm_Si[uVar7 & 0xff];
    param_2[0xf] = (byte)uVar1 ^ sm_Si[local_2c & 0xff];
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## DefEncryptBlock

```asm
// === 080b6ba0 CRijndael::DefEncryptBlock  [0x080b6ba0-0x80b70e7] ===
 80b6ba0:	55                   	push   %ebp
 80b6ba1:	89 e5                	mov    %esp,%ebp
 80b6ba3:	83 ec 30             	sub    $0x30,%esp
 80b6ba6:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6ba9:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b6bad:	83 f0 01             	xor    $0x1,%eax
 80b6bb0:	84 c0                	test   %al,%al
 80b6bb2:	74 0a                	je     80b6bbe <_ZN9CRijndael15DefEncryptBlockEPKcPc+0x1e>
 80b6bb4:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b6bb9:	e9 27 05 00 00       	jmp    80b70e5 <_ZN9CRijndael15DefEncryptBlockEPKcPc+0x545>
 80b6bbe:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6bc1:	83 c0 38             	add    $0x38,%eax
 80b6bc4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b6bc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6bca:	0f b6 00             	movzbl (%eax),%eax
 80b6bcd:	0f b6 c0             	movzbl %al,%eax
 80b6bd0:	c1 e0 18             	shl    $0x18,%eax
 80b6bd3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80b6bd6:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6bda:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6bdd:	0f b6 00             	movzbl (%eax),%eax
 80b6be0:	0f b6 c0             	movzbl %al,%eax
 80b6be3:	c1 e0 10             	shl    $0x10,%eax
 80b6be6:	09 45 d8             	or     %eax,-0x28(%ebp)
 80b6be9:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6bed:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6bf0:	0f b6 00             	movzbl (%eax),%eax
 80b6bf3:	0f b6 c0             	movzbl %al,%eax
 80b6bf6:	c1 e0 08             	shl    $0x8,%eax
 80b6bf9:	09 45 d8             	or     %eax,-0x28(%ebp)
 80b6bfc:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c00:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c03:	0f b6 00             	movzbl (%eax),%eax
 80b6c06:	0f b6 c0             	movzbl %al,%eax
 80b6c09:	09 45 d8             	or     %eax,-0x28(%ebp)
 80b6c0c:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c10:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6c13:	8b 00                	mov    (%eax),%eax
 80b6c15:	31 45 d8             	xor    %eax,-0x28(%ebp)
 80b6c18:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c1b:	0f b6 00             	movzbl (%eax),%eax
 80b6c1e:	0f b6 c0             	movzbl %al,%eax
 80b6c21:	c1 e0 18             	shl    $0x18,%eax
 80b6c24:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80b6c27:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c2e:	0f b6 00             	movzbl (%eax),%eax
 80b6c31:	0f b6 c0             	movzbl %al,%eax
 80b6c34:	c1 e0 10             	shl    $0x10,%eax
 80b6c37:	09 45 dc             	or     %eax,-0x24(%ebp)
 80b6c3a:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c41:	0f b6 00             	movzbl (%eax),%eax
 80b6c44:	0f b6 c0             	movzbl %al,%eax
 80b6c47:	c1 e0 08             	shl    $0x8,%eax
 80b6c4a:	09 45 dc             	or     %eax,-0x24(%ebp)
 80b6c4d:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c51:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c54:	0f b6 00             	movzbl (%eax),%eax
 80b6c57:	0f b6 c0             	movzbl %al,%eax
 80b6c5a:	09 45 dc             	or     %eax,-0x24(%ebp)
 80b6c5d:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c61:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6c64:	83 c0 04             	add    $0x4,%eax
 80b6c67:	8b 00                	mov    (%eax),%eax
 80b6c69:	31 45 dc             	xor    %eax,-0x24(%ebp)
 80b6c6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c6f:	0f b6 00             	movzbl (%eax),%eax
 80b6c72:	0f b6 c0             	movzbl %al,%eax
 80b6c75:	c1 e0 18             	shl    $0x18,%eax
 80b6c78:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80b6c7b:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c82:	0f b6 00             	movzbl (%eax),%eax
 80b6c85:	0f b6 c0             	movzbl %al,%eax
 80b6c88:	c1 e0 10             	shl    $0x10,%eax
 80b6c8b:	09 45 e0             	or     %eax,-0x20(%ebp)
 80b6c8e:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6c92:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6c95:	0f b6 00             	movzbl (%eax),%eax
 80b6c98:	0f b6 c0             	movzbl %al,%eax
 80b6c9b:	c1 e0 08             	shl    $0x8,%eax
 80b6c9e:	09 45 e0             	or     %eax,-0x20(%ebp)
 80b6ca1:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6ca5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6ca8:	0f b6 00             	movzbl (%eax),%eax
 80b6cab:	0f b6 c0             	movzbl %al,%eax
 80b6cae:	09 45 e0             	or     %eax,-0x20(%ebp)
 80b6cb1:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6cb5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6cb8:	83 c0 08             	add    $0x8,%eax
 80b6cbb:	8b 00                	mov    (%eax),%eax
 80b6cbd:	31 45 e0             	xor    %eax,-0x20(%ebp)
 80b6cc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6cc3:	0f b6 00             	movzbl (%eax),%eax
 80b6cc6:	0f b6 c0             	movzbl %al,%eax
 80b6cc9:	c1 e0 18             	shl    $0x18,%eax
 80b6ccc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b6ccf:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6cd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6cd6:	0f b6 00             	movzbl (%eax),%eax
 80b6cd9:	0f b6 c0             	movzbl %al,%eax
 80b6cdc:	c1 e0 10             	shl    $0x10,%eax
 80b6cdf:	09 45 e4             	or     %eax,-0x1c(%ebp)
 80b6ce2:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6ce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6ce9:	0f b6 00             	movzbl (%eax),%eax
 80b6cec:	0f b6 c0             	movzbl %al,%eax
 80b6cef:	c1 e0 08             	shl    $0x8,%eax
 80b6cf2:	09 45 e4             	or     %eax,-0x1c(%ebp)
 80b6cf5:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6cf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6cfc:	0f b6 00             	movzbl (%eax),%eax
 80b6cff:	0f b6 c0             	movzbl %al,%eax
 80b6d02:	09 45 e4             	or     %eax,-0x1c(%ebp)
 80b6d05:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b6d09:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6d0c:	83 c0 0c             	add    $0xc,%eax
 80b6d0f:	8b 00                	mov    (%eax),%eax
 80b6d11:	31 45 e4             	xor    %eax,-0x1c(%ebp)
 80b6d14:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 80b6d1b:	e9 77 01 00 00       	jmp    80b6e97 <_ZN9CRijndael15DefEncryptBlockEPKcPc+0x2f7>
 80b6d20:	8b 45 fc             	mov    -0x4(%ebp),%eax
 80b6d23:	c1 e0 05             	shl    $0x5,%eax
 80b6d26:	83 c0 30             	add    $0x30,%eax
 80b6d29:	03 45 08             	add    0x8(%ebp),%eax
 80b6d2c:	83 c0 08             	add    $0x8,%eax
 80b6d2f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b6d32:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b6d35:	c1 e8 18             	shr    $0x18,%eax
 80b6d38:	8b 14 85 a0 fe b1 08 	mov    0x8b1fea0(,%eax,4),%edx
 80b6d3f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6d42:	c1 f8 10             	sar    $0x10,%eax
 80b6d45:	25 ff 00 00 00       	and    $0xff,%eax
 80b6d4a:	8b 04 85 a0 02 b2 08 	mov    0x8b202a0(,%eax,4),%eax
 80b6d51:	31 c2                	xor    %eax,%edx
 80b6d53:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6d56:	c1 f8 08             	sar    $0x8,%eax
 80b6d59:	25 ff 00 00 00       	and    $0xff,%eax
 80b6d5e:	8b 04 85 a0 06 b2 08 	mov    0x8b206a0(,%eax,4),%eax
 80b6d65:	31 c2                	xor    %eax,%edx
 80b6d67:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6d6a:	25 ff 00 00 00       	and    $0xff,%eax
 80b6d6f:	8b 04 85 a0 0a b2 08 	mov    0x8b20aa0(,%eax,4),%eax
 80b6d76:	31 c2                	xor    %eax,%edx
 80b6d78:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6d7b:	8b 00                	mov    (%eax),%eax
 80b6d7d:	31 d0                	xor    %edx,%eax
 80b6d7f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b6d82:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6d85:	c1 e8 18             	shr    $0x18,%eax
 80b6d88:	8b 14 85 a0 fe b1 08 	mov    0x8b1fea0(,%eax,4),%edx
 80b6d8f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6d92:	c1 f8 10             	sar    $0x10,%eax
 80b6d95:	25 ff 00 00 00       	and    $0xff,%eax
 80b6d9a:	8b 04 85 a0 02 b2 08 	mov    0x8b202a0(,%eax,4),%eax
 80b6da1:	31 c2                	xor    %eax,%edx
 80b6da3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6da6:	c1 f8 08             	sar    $0x8,%eax
 80b6da9:	25 ff 00 00 00       	and    $0xff,%eax
 80b6dae:	8b 04 85 a0 06 b2 08 	mov    0x8b206a0(,%eax,4),%eax
 80b6db5:	31 c2                	xor    %eax,%edx
 80b6db7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b6dba:	25 ff 00 00 00       	and    $0xff,%eax
 80b6dbf:	8b 04 85 a0 0a b2 08 	mov    0x8b20aa0(,%eax,4),%eax
 80b6dc6:	31 c2                	xor    %eax,%edx
 80b6dc8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6dcb:	83 c0 04             	add    $0x4,%eax
 80b6dce:	8b 00                	mov    (%eax),%eax
 80b6dd0:	31 d0                	xor    %edx,%eax
 80b6dd2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b6dd5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6dd8:	c1 e8 18             	shr    $0x18,%eax
 80b6ddb:	8b 14 85 a0 fe b1 08 	mov    0x8b1fea0(,%eax,4),%edx
 80b6de2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6de5:	c1 f8 10             	sar    $0x10,%eax
 80b6de8:	25 ff 00 00 00       	and    $0xff,%eax
 80b6ded:	8b 04 85 a0 02 b2 08 	mov    0x8b202a0(,%eax,4),%eax
 80b6df4:	31 c2                	xor    %eax,%edx
 80b6df6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b6df9:	c1 f8 08             	sar    $0x8,%eax
 80b6dfc:	25 ff 00 00 00       	and    $0xff,%eax
 80b6e01:	8b 04 85 a0 06 b2 08 	mov    0x8b206a0(,%eax,4),%eax
 80b6e08:	31 c2                	xor    %eax,%edx
 80b6e0a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6e0d:	25 ff 00 00 00       	and    $0xff,%eax
 80b6e12:	8b 04 85 a0 0a b2 08 	mov    0x8b20aa0(,%eax,4),%eax
 80b6e19:	31 c2                	xor    %eax,%edx
 80b6e1b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6e1e:	83 c0 08             	add    $0x8,%eax
 80b6e21:	8b 00                	mov    (%eax),%eax
 80b6e23:	31 d0                	xor    %edx,%eax
 80b6e25:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b6e28:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6e2b:	c1 e8 18             	shr    $0x18,%eax
 80b6e2e:	8b 14 85 a0 fe b1 08 	mov    0x8b1fea0(,%eax,4),%edx
 80b6e35:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b6e38:	c1 f8 10             	sar    $0x10,%eax
 80b6e3b:	25 ff 00 00 00       	and    $0xff,%eax
 80b6e40:	8b 04 85 a0 02 b2 08 	mov    0x8b202a0(,%eax,4),%eax
 80b6e47:	31 c2                	xor    %eax,%edx
 80b6e49:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6e4c:	c1 f8 08             	sar    $0x8,%eax
 80b6e4f:	25 ff 00 00 00       	and    $0xff,%eax
 80b6e54:	8b 04 85 a0 06 b2 08 	mov    0x8b206a0(,%eax,4),%eax
 80b6e5b:	31 c2                	xor    %eax,%edx
 80b6e5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6e60:	25 ff 00 00 00       	and    $0xff,%eax
 80b6e65:	8b 04 85 a0 0a b2 08 	mov    0x8b20aa0(,%eax,4),%eax
 80b6e6c:	31 c2                	xor    %eax,%edx
 80b6e6e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6e71:	83 c0 0c             	add    $0xc,%eax
 80b6e74:	8b 00                	mov    (%eax),%eax
 80b6e76:	31 d0                	xor    %edx,%eax
 80b6e78:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b6e7b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b6e7e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80b6e81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b6e84:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80b6e87:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b6e8a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80b6e8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b6e90:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b6e93:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 80b6e97:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6e9a:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b6ea0:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 80b6ea3:	0f 9f c0             	setg   %al
 80b6ea6:	84 c0                	test   %al,%al
 80b6ea8:	0f 85 72 fe ff ff    	jne    80b6d20 <_ZN9CRijndael15DefEncryptBlockEPKcPc+0x180>
 80b6eae:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6eb1:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b6eb7:	c1 e0 05             	shl    $0x5,%eax
 80b6eba:	83 c0 30             	add    $0x30,%eax
 80b6ebd:	03 45 08             	add    0x8(%ebp),%eax
 80b6ec0:	83 c0 08             	add    $0x8,%eax
 80b6ec3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b6ec6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6ec9:	8b 00                	mov    (%eax),%eax
 80b6ecb:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b6ece:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b6ed1:	c1 e8 18             	shr    $0x18,%eax
 80b6ed4:	0f b6 90 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%edx
 80b6edb:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6ede:	c1 f8 18             	sar    $0x18,%eax
 80b6ee1:	31 c2                	xor    %eax,%edx
 80b6ee3:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6ee6:	88 10                	mov    %dl,(%eax)
 80b6ee8:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6eeb:	8d 50 01             	lea    0x1(%eax),%edx
 80b6eee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6ef1:	c1 f8 10             	sar    $0x10,%eax
 80b6ef4:	25 ff 00 00 00       	and    $0xff,%eax
 80b6ef9:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6f00:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6f03:	c1 f8 10             	sar    $0x10,%eax
 80b6f06:	31 c8                	xor    %ecx,%eax
 80b6f08:	88 02                	mov    %al,(%edx)
 80b6f0a:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6f0d:	8d 50 02             	lea    0x2(%eax),%edx
 80b6f10:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6f13:	c1 f8 08             	sar    $0x8,%eax
 80b6f16:	25 ff 00 00 00       	and    $0xff,%eax
 80b6f1b:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6f22:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6f25:	c1 f8 08             	sar    $0x8,%eax
 80b6f28:	31 c8                	xor    %ecx,%eax
 80b6f2a:	88 02                	mov    %al,(%edx)
 80b6f2c:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6f2f:	8d 50 03             	lea    0x3(%eax),%edx
 80b6f32:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6f35:	25 ff 00 00 00       	and    $0xff,%eax
 80b6f3a:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6f41:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6f44:	31 c8                	xor    %ecx,%eax
 80b6f46:	88 02                	mov    %al,(%edx)
 80b6f48:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6f4b:	83 c0 04             	add    $0x4,%eax
 80b6f4e:	8b 00                	mov    (%eax),%eax
 80b6f50:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b6f53:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6f56:	8d 50 04             	lea    0x4(%eax),%edx
 80b6f59:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6f5c:	c1 e8 18             	shr    $0x18,%eax
 80b6f5f:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6f66:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6f69:	c1 f8 18             	sar    $0x18,%eax
 80b6f6c:	31 c8                	xor    %ecx,%eax
 80b6f6e:	88 02                	mov    %al,(%edx)
 80b6f70:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6f73:	8d 50 05             	lea    0x5(%eax),%edx
 80b6f76:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6f79:	c1 f8 10             	sar    $0x10,%eax
 80b6f7c:	25 ff 00 00 00       	and    $0xff,%eax
 80b6f81:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6f88:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6f8b:	c1 f8 10             	sar    $0x10,%eax
 80b6f8e:	31 c8                	xor    %ecx,%eax
 80b6f90:	88 02                	mov    %al,(%edx)
 80b6f92:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6f95:	8d 50 06             	lea    0x6(%eax),%edx
 80b6f98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6f9b:	c1 f8 08             	sar    $0x8,%eax
 80b6f9e:	25 ff 00 00 00       	and    $0xff,%eax
 80b6fa3:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6faa:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6fad:	c1 f8 08             	sar    $0x8,%eax
 80b6fb0:	31 c8                	xor    %ecx,%eax
 80b6fb2:	88 02                	mov    %al,(%edx)
 80b6fb4:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6fb7:	8d 50 07             	lea    0x7(%eax),%edx
 80b6fba:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b6fbd:	25 ff 00 00 00       	and    $0xff,%eax
 80b6fc2:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6fc9:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6fcc:	31 c8                	xor    %ecx,%eax
 80b6fce:	88 02                	mov    %al,(%edx)
 80b6fd0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b6fd3:	83 c0 08             	add    $0x8,%eax
 80b6fd6:	8b 00                	mov    (%eax),%eax
 80b6fd8:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b6fdb:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6fde:	8d 50 08             	lea    0x8(%eax),%edx
 80b6fe1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6fe4:	c1 e8 18             	shr    $0x18,%eax
 80b6fe7:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b6fee:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b6ff1:	c1 f8 18             	sar    $0x18,%eax
 80b6ff4:	31 c8                	xor    %ecx,%eax
 80b6ff6:	88 02                	mov    %al,(%edx)
 80b6ff8:	8b 45 10             	mov    0x10(%ebp),%eax
 80b6ffb:	8d 50 09             	lea    0x9(%eax),%edx
 80b6ffe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7001:	c1 f8 10             	sar    $0x10,%eax
 80b7004:	25 ff 00 00 00       	and    $0xff,%eax
 80b7009:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b7010:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7013:	c1 f8 10             	sar    $0x10,%eax
 80b7016:	31 c8                	xor    %ecx,%eax
 80b7018:	88 02                	mov    %al,(%edx)
 80b701a:	8b 45 10             	mov    0x10(%ebp),%eax
 80b701d:	8d 50 0a             	lea    0xa(%eax),%edx
 80b7020:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7023:	c1 f8 08             	sar    $0x8,%eax
 80b7026:	25 ff 00 00 00       	and    $0xff,%eax
 80b702b:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b7032:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7035:	c1 f8 08             	sar    $0x8,%eax
 80b7038:	31 c8                	xor    %ecx,%eax
 80b703a:	88 02                	mov    %al,(%edx)
 80b703c:	8b 45 10             	mov    0x10(%ebp),%eax
 80b703f:	8d 50 0b             	lea    0xb(%eax),%edx
 80b7042:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7045:	25 ff 00 00 00       	and    $0xff,%eax
 80b704a:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b7051:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7054:	31 c8                	xor    %ecx,%eax
 80b7056:	88 02                	mov    %al,(%edx)
 80b7058:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b705b:	83 c0 0c             	add    $0xc,%eax
 80b705e:	8b 00                	mov    (%eax),%eax
 80b7060:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80b7063:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7066:	8d 50 0c             	lea    0xc(%eax),%edx
 80b7069:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b706c:	c1 e8 18             	shr    $0x18,%eax
 80b706f:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b7076:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b7079:	c1 f8 18             	sar    $0x18,%eax
 80b707c:	31 c8                	xor    %ecx,%eax
 80b707e:	88 02                	mov    %al,(%edx)
 80b7080:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7083:	8d 50 0d             	lea    0xd(%eax),%edx
 80b7086:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7089:	c1 f8 10             	sar    $0x10,%eax
 80b708c:	25 ff 00 00 00       	and    $0xff,%eax
 80b7091:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b7098:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b709b:	c1 f8 10             	sar    $0x10,%eax
 80b709e:	31 c8                	xor    %ecx,%eax
 80b70a0:	88 02                	mov    %al,(%edx)
 80b70a2:	8b 45 10             	mov    0x10(%ebp),%eax
 80b70a5:	8d 50 0e             	lea    0xe(%eax),%edx
 80b70a8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b70ab:	c1 f8 08             	sar    $0x8,%eax
 80b70ae:	25 ff 00 00 00       	and    $0xff,%eax
 80b70b3:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b70ba:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b70bd:	c1 f8 08             	sar    $0x8,%eax
 80b70c0:	31 c8                	xor    %ecx,%eax
 80b70c2:	88 02                	mov    %al,(%edx)
 80b70c4:	8b 45 10             	mov    0x10(%ebp),%eax
 80b70c7:	8d 50 0f             	lea    0xf(%eax),%edx
 80b70ca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b70cd:	25 ff 00 00 00       	and    $0xff,%eax
 80b70d2:	0f b6 88 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%ecx
 80b70d9:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b70dc:	31 c8                	xor    %ecx,%eax
 80b70de:	88 02                	mov    %al,(%edx)
 80b70e0:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b70e5:	c9                   	leave
 80b70e6:	c3                   	ret
 80b70e7:	90                   	nop

```

```c
// CRijndael::DefEncryptBlock @ 0x80b6ba0

/* CRijndael::DefEncryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::DefEncryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_8;
  int iVar3;
  int iVar4;
  uint uVar9;
  uint uVar10;
  
  if (this[4] == (CRijndael)0x1) {
    local_20 = ((uint)(byte)param_1[0xc] << 0x18 | (uint)(byte)param_1[0xd] << 0x10 |
                (uint)(byte)param_1[0xe] << 8 | (uint)(byte)param_1[0xf]) ^ *(uint *)(this + 0x44);
    local_2c = ((uint)(byte)*param_1 << 0x18 | (uint)(byte)param_1[1] << 0x10 |
                (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[3]) ^ *(uint *)(this + 0x38);
    local_28 = ((uint)(byte)param_1[4] << 0x18 | (uint)(byte)param_1[5] << 0x10 |
                (uint)(byte)param_1[6] << 8 | (uint)(byte)param_1[7]) ^ *(uint *)(this + 0x3c);
    local_24 = ((uint)(byte)param_1[8] << 0x18 | (uint)(byte)param_1[9] << 0x10 |
                (uint)(byte)param_1[10] << 8 | (uint)(byte)param_1[0xb]) ^ *(uint *)(this + 0x40);
    for (local_8 = 1; uVar8 = (int)local_20 >> 8, uVar9 = (int)local_20 >> 0x10,
        uVar10 = (int)local_2c >> 8, local_8 < *(int *)(this + 0x3d8); local_8 = local_8 + 1) {
      iVar2 = local_8 * 0x20;
      uVar5 = local_20 & 0xff;
      uVar6 = local_2c & 0xff;
      iVar3 = local_8 * 0x20;
      uVar7 = local_28 & 0xff;
      iVar4 = local_8 * 0x20;
      local_20 = *(uint *)(this + local_8 * 0x20 + 0x44) ^
                 *(uint *)(sm_T1 + (local_20 >> 0x18) * 4) ^
                 *(uint *)(sm_T2 + ((int)local_2c >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T3 + ((int)local_28 >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_T4 + (local_24 & 0xff) * 4);
      local_2c = *(uint *)(this + iVar2 + 0x38) ^
                 *(uint *)(sm_T1 + (local_2c >> 0x18) * 4) ^
                 *(uint *)(sm_T2 + ((int)local_28 >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T3 + ((int)local_24 >> 8 & 0xffU) * 4) ^ *(uint *)(sm_T4 + uVar5 * 4);
      local_28 = *(uint *)(this + iVar3 + 0x3c) ^
                 *(uint *)(sm_T1 + (local_28 >> 0x18) * 4) ^
                 *(uint *)(sm_T2 + ((int)local_24 >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T3 + (uVar8 & 0xff) * 4) ^ *(uint *)(sm_T4 + uVar6 * 4);
      local_24 = *(uint *)(this + iVar4 + 0x40) ^
                 *(uint *)(sm_T1 + (local_24 >> 0x18) * 4) ^ *(uint *)(sm_T2 + (uVar9 & 0xff) * 4) ^
                 *(uint *)(sm_T3 + (uVar10 & 0xff) * 4) ^ *(uint *)(sm_T4 + uVar7 * 4);
    }
    iVar2 = *(int *)(this + 0x3d8);
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x38);
    *param_2 = sm_S[local_2c >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[1] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[(int)local_28 >> 0x10 & 0xff];
    param_2[2] = (byte)((uint)uVar1 >> 8) ^ sm_S[(int)local_24 >> 8 & 0xff];
    param_2[3] = (byte)uVar1 ^ sm_S[local_20 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x3c);
    param_2[4] = (byte)((uint)uVar1 >> 0x18) ^ sm_S[local_28 >> 0x18];
    param_2[5] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[(int)local_24 >> 0x10 & 0xff];
    param_2[6] = (byte)((uint)uVar1 >> 8) ^ sm_S[uVar8 & 0xff];
    param_2[7] = (byte)uVar1 ^ sm_S[local_2c & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x40);
    param_2[8] = (byte)((uint)uVar1 >> 0x18) ^ sm_S[local_24 >> 0x18];
    param_2[9] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[uVar9 & 0xff];
    param_2[10] = (byte)((uint)uVar1 >> 8) ^ sm_S[uVar10 & 0xff];
    param_2[0xb] = (byte)uVar1 ^ sm_S[local_28 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x44);
    param_2[0xc] = (byte)((uint)uVar1 >> 0x18) ^ sm_S[local_20 >> 0x18];
    param_2[0xd] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[(int)local_2c >> 0x10 & 0xff];
    param_2[0xe] = (byte)((uint)uVar1 >> 8) ^ sm_S[(int)local_28 >> 8 & 0xff];
    param_2[0xf] = (byte)uVar1 ^ sm_S[local_24 & 0xff];
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## Encrypt

```asm
// === 080b7e00 CRijndael::Encrypt  [0x080b7e00-0x80b8027] ===
 80b7e00:	55                   	push   %ebp
 80b7e01:	89 e5                	mov    %esp,%ebp
 80b7e03:	83 ec 38             	sub    $0x38,%esp
 80b7e06:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7e09:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b7e0d:	83 f0 01             	xor    $0x1,%eax
 80b7e10:	84 c0                	test   %al,%al
 80b7e12:	74 0a                	je     80b7e1e <_ZN9CRijndael7EncryptEPKcPcj+0x1e>
 80b7e14:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b7e19:	e9 08 02 00 00       	jmp    80b8026 <_ZN9CRijndael7EncryptEPKcPcj+0x226>
 80b7e1e:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80b7e22:	74 18                	je     80b7e3c <_ZN9CRijndael7EncryptEPKcPcj+0x3c>
 80b7e24:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7e27:	8b 40 08             	mov    0x8(%eax),%eax
 80b7e2a:	89 c1                	mov    %eax,%ecx
 80b7e2c:	8b 45 14             	mov    0x14(%ebp),%eax
 80b7e2f:	ba 00 00 00 00       	mov    $0x0,%edx
 80b7e34:	f7 f1                	div    %ecx
 80b7e36:	89 d0                	mov    %edx,%eax
 80b7e38:	85 c0                	test   %eax,%eax
 80b7e3a:	74 0a                	je     80b7e46 <_ZN9CRijndael7EncryptEPKcPcj+0x46>
 80b7e3c:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 80b7e41:	e9 e0 01 00 00       	jmp    80b8026 <_ZN9CRijndael7EncryptEPKcPcj+0x226>
 80b7e46:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7e49:	8b 40 10             	mov    0x10(%eax),%eax
 80b7e4c:	83 f8 01             	cmp    $0x1,%eax
 80b7e4f:	0f 85 b2 00 00 00    	jne    80b7f07 <_ZN9CRijndael7EncryptEPKcPcj+0x107>
 80b7e55:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80b7e5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7e5f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b7e62:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7e65:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b7e68:	eb 76                	jmp    80b7ee0 <_ZN9CRijndael7EncryptEPKcPcj+0xe0>
 80b7e6a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7e6d:	8d 88 fc 03 00 00    	lea    0x3fc(%eax),%ecx
 80b7e73:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7e76:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80b7e79:	89 54 24 08          	mov    %edx,0x8(%esp)
 80b7e7d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80b7e81:	89 04 24             	mov    %eax,(%esp)
 80b7e84:	e8 8d c4 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80b7e89:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7e8c:	8d 90 fc 03 00 00    	lea    0x3fc(%eax),%edx
 80b7e92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b7e95:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7e99:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b7e9d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ea0:	89 04 24             	mov    %eax,(%esp)
 80b7ea3:	e8 8e f7 ff ff       	call   80b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>
 80b7ea8:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7eab:	8b 40 08             	mov    0x8(%eax),%eax
 80b7eae:	8b 55 08             	mov    0x8(%ebp),%edx
 80b7eb1:	81 c2 fc 03 00 00    	add    $0x3fc,%edx
 80b7eb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7ebb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b7ebe:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b7ec2:	89 14 24             	mov    %edx,(%esp)
 80b7ec5:	e8 d6 59 fc ff       	call   807d8a0 <memcpy@plt>
 80b7eca:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ecd:	8b 40 08             	mov    0x8(%eax),%eax
 80b7ed0:	01 45 f0             	add    %eax,-0x10(%ebp)
 80b7ed3:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ed6:	8b 40 08             	mov    0x8(%eax),%eax
 80b7ed9:	01 45 f4             	add    %eax,-0xc(%ebp)
 80b7edc:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80b7ee0:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ee3:	8b 40 08             	mov    0x8(%eax),%eax
 80b7ee6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b7ee9:	8b 45 14             	mov    0x14(%ebp),%eax
 80b7eec:	ba 00 00 00 00       	mov    $0x0,%edx
 80b7ef1:	f7 75 e4             	divl   -0x1c(%ebp)
 80b7ef4:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b7ef7:	0f 97 c0             	seta   %al
 80b7efa:	84 c0                	test   %al,%al
 80b7efc:	0f 85 68 ff ff ff    	jne    80b7e6a <_ZN9CRijndael7EncryptEPKcPcj+0x6a>
 80b7f02:	e9 1a 01 00 00       	jmp    80b8021 <_ZN9CRijndael7EncryptEPKcPcj+0x221>
 80b7f07:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f0a:	8b 40 10             	mov    0x10(%eax),%eax
 80b7f0d:	83 f8 02             	cmp    $0x2,%eax
 80b7f10:	0f 85 a9 00 00 00    	jne    80b7fbf <_ZN9CRijndael7EncryptEPKcPcj+0x1bf>
 80b7f16:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80b7f1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7f20:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b7f23:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7f26:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b7f29:	eb 70                	jmp    80b7f9b <_ZN9CRijndael7EncryptEPKcPcj+0x19b>
 80b7f2b:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f2e:	8d 90 fc 03 00 00    	lea    0x3fc(%eax),%edx
 80b7f34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b7f37:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7f3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b7f3f:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f42:	89 04 24             	mov    %eax,(%esp)
 80b7f45:	e8 ec f6 ff ff       	call   80b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>
 80b7f4a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f4d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80b7f50:	89 54 24 08          	mov    %edx,0x8(%esp)
 80b7f54:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80b7f57:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b7f5b:	89 04 24             	mov    %eax,(%esp)
 80b7f5e:	e8 b3 c3 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80b7f63:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f66:	8b 40 08             	mov    0x8(%eax),%eax
 80b7f69:	8b 55 08             	mov    0x8(%ebp),%edx
 80b7f6c:	81 c2 fc 03 00 00    	add    $0x3fc,%edx
 80b7f72:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7f76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b7f79:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b7f7d:	89 14 24             	mov    %edx,(%esp)
 80b7f80:	e8 1b 59 fc ff       	call   807d8a0 <memcpy@plt>
 80b7f85:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f88:	8b 40 08             	mov    0x8(%eax),%eax
 80b7f8b:	01 45 f0             	add    %eax,-0x10(%ebp)
 80b7f8e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f91:	8b 40 08             	mov    0x8(%eax),%eax
 80b7f94:	01 45 f4             	add    %eax,-0xc(%ebp)
 80b7f97:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80b7f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7f9e:	8b 40 08             	mov    0x8(%eax),%eax
 80b7fa1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b7fa4:	8b 45 14             	mov    0x14(%ebp),%eax
 80b7fa7:	ba 00 00 00 00       	mov    $0x0,%edx
 80b7fac:	f7 75 e4             	divl   -0x1c(%ebp)
 80b7faf:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b7fb2:	0f 97 c0             	seta   %al
 80b7fb5:	84 c0                	test   %al,%al
 80b7fb7:	0f 85 6e ff ff ff    	jne    80b7f2b <_ZN9CRijndael7EncryptEPKcPcj+0x12b>
 80b7fbd:	eb 62                	jmp    80b8021 <_ZN9CRijndael7EncryptEPKcPcj+0x221>
 80b7fbf:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80b7fc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7fc9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b7fcc:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7fcf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b7fd2:	eb 2f                	jmp    80b8003 <_ZN9CRijndael7EncryptEPKcPcj+0x203>
 80b7fd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b7fd7:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7fdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b7fde:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b7fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7fe5:	89 04 24             	mov    %eax,(%esp)
 80b7fe8:	e8 49 f6 ff ff       	call   80b7636 <_ZN9CRijndael12EncryptBlockEPKcPc>
 80b7fed:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ff0:	8b 40 08             	mov    0x8(%eax),%eax
 80b7ff3:	01 45 f0             	add    %eax,-0x10(%ebp)
 80b7ff6:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7ff9:	8b 40 08             	mov    0x8(%eax),%eax
 80b7ffc:	01 45 f4             	add    %eax,-0xc(%ebp)
 80b7fff:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80b8003:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8006:	8b 40 08             	mov    0x8(%eax),%eax
 80b8009:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b800c:	8b 45 14             	mov    0x14(%ebp),%eax
 80b800f:	ba 00 00 00 00       	mov    $0x0,%edx
 80b8014:	f7 75 e4             	divl   -0x1c(%ebp)
 80b8017:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b801a:	0f 97 c0             	seta   %al
 80b801d:	84 c0                	test   %al,%al
 80b801f:	75 b3                	jne    80b7fd4 <_ZN9CRijndael7EncryptEPKcPcj+0x1d4>
 80b8021:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b8026:	c9                   	leave
 80b8027:	c3                   	ret

```

```c
// CRijndael::Encrypt @ 0x80b7e00

/* CRijndael::Encrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CRijndael::Encrypt(CRijndael *this,char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  char *local_14;
  char *local_10;
  
  if (this[4] == (CRijndael)0x1) {
    if ((param_3 == 0) || (param_3 % *(uint *)(this + 8) != 0)) {
      uVar1 = 0x7000000a;
    }
    else {
      if (*(int *)(this + 0x10) == 1) {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          IMethod::Xor((IMethod *)this,(char *)(this + 0x3fc),local_14);
          EncryptBlock(this,(char *)(this + 0x3fc),local_10);
          memcpy(this + 0x3fc,local_10,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else if (*(int *)(this + 0x10) == 2) {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,(char *)(this + 0x3fc),local_10);
          IMethod::Xor((IMethod *)this,local_10,local_14);
          memcpy(this + 0x3fc,local_10,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = param_1;
        local_10 = param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,local_14,local_10);
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## EncryptBlock

```asm
// === 080b7636 CRijndael::EncryptBlock  [0x080b7636-0x80b7a1f] ===
 80b7636:	55                   	push   %ebp
 80b7637:	89 e5                	mov    %esp,%ebp
 80b7639:	56                   	push   %esi
 80b763a:	53                   	push   %ebx
 80b763b:	83 ec 40             	sub    $0x40,%esp
 80b763e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7641:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b7645:	83 f0 01             	xor    $0x1,%eax
 80b7648:	84 c0                	test   %al,%al
 80b764a:	74 0a                	je     80b7656 <_ZN9CRijndael12EncryptBlockEPKcPc+0x20>
 80b764c:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b7651:	e9 c2 03 00 00       	jmp    80b7a18 <_ZN9CRijndael12EncryptBlockEPKcPc+0x3e2>
 80b7656:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7659:	8b 40 08             	mov    0x8(%eax),%eax
 80b765c:	83 f8 10             	cmp    $0x10,%eax
 80b765f:	75 23                	jne    80b7684 <_ZN9CRijndael12EncryptBlockEPKcPc+0x4e>
 80b7661:	8b 45 10             	mov    0x10(%ebp),%eax
 80b7664:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b7668:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b766b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b766f:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7672:	89 04 24             	mov    %eax,(%esp)
 80b7675:	e8 26 f5 ff ff       	call   80b6ba0 <_ZN9CRijndael15DefEncryptBlockEPKcPc>
 80b767a:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b767f:	e9 94 03 00 00       	jmp    80b7a18 <_ZN9CRijndael12EncryptBlockEPKcPc+0x3e2>
 80b7684:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7687:	8b 40 08             	mov    0x8(%eax),%eax
 80b768a:	89 c2                	mov    %eax,%edx
 80b768c:	c1 fa 1f             	sar    $0x1f,%edx
 80b768f:	c1 ea 1e             	shr    $0x1e,%edx
 80b7692:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7695:	c1 f8 02             	sar    $0x2,%eax
 80b7698:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80b769b:	83 7d d0 04          	cmpl   $0x4,-0x30(%ebp)
 80b769f:	74 14                	je     80b76b5 <_ZN9CRijndael12EncryptBlockEPKcPc+0x7f>
 80b76a1:	83 7d d0 06          	cmpl   $0x6,-0x30(%ebp)
 80b76a5:	75 07                	jne    80b76ae <_ZN9CRijndael12EncryptBlockEPKcPc+0x78>
 80b76a7:	b8 01 00 00 00       	mov    $0x1,%eax
 80b76ac:	eb 05                	jmp    80b76b3 <_ZN9CRijndael12EncryptBlockEPKcPc+0x7d>
 80b76ae:	b8 02 00 00 00       	mov    $0x2,%eax
 80b76b3:	eb 05                	jmp    80b76ba <_ZN9CRijndael12EncryptBlockEPKcPc+0x84>
 80b76b5:	b8 00 00 00 00       	mov    $0x0,%eax
 80b76ba:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b76bd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b76c0:	c1 e0 02             	shl    $0x2,%eax
 80b76c3:	83 c0 01             	add    $0x1,%eax
 80b76c6:	8b 04 c5 c0 2e b2 08 	mov    0x8b22ec0(,%eax,8),%eax
 80b76cd:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80b76d0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b76d3:	01 c0                	add    %eax,%eax
 80b76d5:	83 c0 01             	add    $0x1,%eax
 80b76d8:	c1 e0 04             	shl    $0x4,%eax
 80b76db:	8b 80 c0 2e b2 08    	mov    0x8b22ec0(%eax),%eax
 80b76e1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80b76e4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80b76e7:	c1 e0 05             	shl    $0x5,%eax
 80b76ea:	8b 80 d8 2e b2 08    	mov    0x8b22ed8(%eax),%eax
 80b76f0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80b76f3:	8b 45 08             	mov    0x8(%ebp),%eax
 80b76f6:	05 5c 04 00 00       	add    $0x45c,%eax
 80b76fb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b76fe:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80b7705:	e9 80 00 00 00       	jmp    80b778a <_ZN9CRijndael12EncryptBlockEPKcPc+0x154>
 80b770a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b770d:	0f b6 00             	movzbl (%eax),%eax
 80b7710:	0f b6 c0             	movzbl %al,%eax
 80b7713:	89 c2                	mov    %eax,%edx
 80b7715:	c1 e2 18             	shl    $0x18,%edx
 80b7718:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b771b:	89 10                	mov    %edx,(%eax)
 80b771d:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7721:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7724:	8b 10                	mov    (%eax),%edx
 80b7726:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7729:	0f b6 00             	movzbl (%eax),%eax
 80b772c:	0f b6 c0             	movzbl %al,%eax
 80b772f:	c1 e0 10             	shl    $0x10,%eax
 80b7732:	09 c2                	or     %eax,%edx
 80b7734:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7737:	89 10                	mov    %edx,(%eax)
 80b7739:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b773d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7740:	8b 10                	mov    (%eax),%edx
 80b7742:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b7745:	0f b6 00             	movzbl (%eax),%eax
 80b7748:	0f b6 c0             	movzbl %al,%eax
 80b774b:	c1 e0 08             	shl    $0x8,%eax
 80b774e:	09 c2                	or     %eax,%edx
 80b7750:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b7753:	89 10                	mov    %edx,(%eax)
 80b7755:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7759:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b775c:	8b 08                	mov    (%eax),%ecx
 80b775e:	8b 55 0c             	mov    0xc(%ebp),%edx
 80b7761:	0f b6 12             	movzbl (%edx),%edx
 80b7764:	0f b6 d2             	movzbl %dl,%edx
 80b7767:	09 ca                	or     %ecx,%edx
 80b7769:	89 10                	mov    %edx,(%eax)
 80b776b:	83 45 ec 04          	addl   $0x4,-0x14(%ebp)
 80b776f:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b7773:	8b 08                	mov    (%eax),%ecx
 80b7775:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80b7778:	8b 55 08             	mov    0x8(%ebp),%edx
 80b777b:	83 c3 0c             	add    $0xc,%ebx
 80b777e:	8b 54 9a 08          	mov    0x8(%edx,%ebx,4),%edx
 80b7782:	31 ca                	xor    %ecx,%edx
 80b7784:	89 10                	mov    %edx,(%eax)
 80b7786:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b778a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b778d:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 80b7790:	0f 9c c0             	setl   %al
 80b7793:	84 c0                	test   %al,%al
 80b7795:	0f 85 6f ff ff ff    	jne    80b770a <_ZN9CRijndael12EncryptBlockEPKcPc+0xd4>
 80b779b:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 80b77a2:	e9 1d 01 00 00       	jmp    80b78c4 <_ZN9CRijndael12EncryptBlockEPKcPc+0x28e>
 80b77a7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80b77ae:	e9 d4 00 00 00       	jmp    80b7887 <_ZN9CRijndael12EncryptBlockEPKcPc+0x251>
 80b77b3:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80b77b6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b77b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80b77bc:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b77c2:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b77c6:	c1 e8 18             	shr    $0x18,%eax
 80b77c9:	8b 0c 85 a0 fe b1 08 	mov    0x8b1fea0(,%eax,4),%ecx
 80b77d0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b77d3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b77d6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b77d9:	89 c2                	mov    %eax,%edx
 80b77db:	c1 fa 1f             	sar    $0x1f,%edx
 80b77de:	f7 7d d0             	idivl  -0x30(%ebp)
 80b77e1:	8b 45 08             	mov    0x8(%ebp),%eax
 80b77e4:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b77ea:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b77ee:	c1 f8 10             	sar    $0x10,%eax
 80b77f1:	25 ff 00 00 00       	and    $0xff,%eax
 80b77f6:	8b 04 85 a0 02 b2 08 	mov    0x8b202a0(,%eax,4),%eax
 80b77fd:	31 c1                	xor    %eax,%ecx
 80b77ff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7802:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7805:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7808:	89 c2                	mov    %eax,%edx
 80b780a:	c1 fa 1f             	sar    $0x1f,%edx
 80b780d:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7810:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7813:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7819:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b781d:	c1 f8 08             	sar    $0x8,%eax
 80b7820:	25 ff 00 00 00       	and    $0xff,%eax
 80b7825:	8b 04 85 a0 06 b2 08 	mov    0x8b206a0(,%eax,4),%eax
 80b782c:	31 c1                	xor    %eax,%ecx
 80b782e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b7831:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7834:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b7837:	89 c2                	mov    %eax,%edx
 80b7839:	c1 fa 1f             	sar    $0x1f,%edx
 80b783c:	f7 7d d0             	idivl  -0x30(%ebp)
 80b783f:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7842:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b7848:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b784c:	25 ff 00 00 00       	and    $0xff,%eax
 80b7851:	8b 04 85 a0 0a b2 08 	mov    0x8b20aa0(,%eax,4),%eax
 80b7858:	89 ce                	mov    %ecx,%esi
 80b785a:	31 c6                	xor    %eax,%esi
 80b785c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 80b785f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7862:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7865:	c1 e1 03             	shl    $0x3,%ecx
 80b7868:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80b786b:	83 c2 0c             	add    $0xc,%edx
 80b786e:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80b7872:	89 f1                	mov    %esi,%ecx
 80b7874:	31 c1                	xor    %eax,%ecx
 80b7876:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7879:	8d 93 0c 01 00 00    	lea    0x10c(%ebx),%edx
 80b787f:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 80b7883:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b7887:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b788a:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 80b788d:	0f 9c c0             	setl   %al
 80b7890:	84 c0                	test   %al,%al
 80b7892:	0f 85 1b ff ff ff    	jne    80b77b3 <_ZN9CRijndael12EncryptBlockEPKcPc+0x17d>
 80b7898:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b789b:	c1 e0 02             	shl    $0x2,%eax
 80b789e:	8b 55 08             	mov    0x8(%ebp),%edx
 80b78a1:	8d 8a 3c 04 00 00    	lea    0x43c(%edx),%ecx
 80b78a7:	8b 55 08             	mov    0x8(%ebp),%edx
 80b78aa:	81 c2 5c 04 00 00    	add    $0x45c,%edx
 80b78b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b78b4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80b78b8:	89 14 24             	mov    %edx,(%esp)
 80b78bb:	e8 e0 5f fc ff       	call   807d8a0 <memcpy@plt>
 80b78c0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80b78c4:	8b 45 08             	mov    0x8(%ebp),%eax
 80b78c7:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b78cd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80b78d0:	0f 9f c0             	setg   %al
 80b78d3:	84 c0                	test   %al,%al
 80b78d5:	0f 85 cc fe ff ff    	jne    80b77a7 <_ZN9CRijndael12EncryptBlockEPKcPc+0x171>
 80b78db:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80b78e2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80b78e9:	e9 14 01 00 00       	jmp    80b7a02 <_ZN9CRijndael12EncryptBlockEPKcPc+0x3cc>
 80b78ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80b78f1:	8b 88 d8 03 00 00    	mov    0x3d8(%eax),%ecx
 80b78f7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b78fa:	8b 45 08             	mov    0x8(%ebp),%eax
 80b78fd:	c1 e1 03             	shl    $0x3,%ecx
 80b7900:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80b7903:	83 c2 0c             	add    $0xc,%edx
 80b7906:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80b790a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b790d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b7910:	03 45 10             	add    0x10(%ebp),%eax
 80b7913:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 80b7916:	8b 55 08             	mov    0x8(%ebp),%edx
 80b7919:	81 c1 14 01 00 00    	add    $0x114,%ecx
 80b791f:	8b 54 8a 0c          	mov    0xc(%edx,%ecx,4),%edx
 80b7923:	c1 ea 18             	shr    $0x18,%edx
 80b7926:	0f b6 8a a0 fc b1 08 	movzbl 0x8b1fca0(%edx),%ecx
 80b792d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80b7930:	c1 fa 18             	sar    $0x18,%edx
 80b7933:	31 ca                	xor    %ecx,%edx
 80b7935:	88 10                	mov    %dl,(%eax)
 80b7937:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b793b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b793e:	89 c1                	mov    %eax,%ecx
 80b7940:	03 4d 10             	add    0x10(%ebp),%ecx
 80b7943:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80b7946:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b7949:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b794c:	89 c2                	mov    %eax,%edx
 80b794e:	c1 fa 1f             	sar    $0x1f,%edx
 80b7951:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7954:	8b 45 08             	mov    0x8(%ebp),%eax
 80b7957:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b795d:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b7961:	c1 f8 10             	sar    $0x10,%eax
 80b7964:	25 ff 00 00 00       	and    $0xff,%eax
 80b7969:	0f b6 90 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%edx
 80b7970:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b7973:	c1 f8 10             	sar    $0x10,%eax
 80b7976:	31 d0                	xor    %edx,%eax
 80b7978:	88 01                	mov    %al,(%ecx)
 80b797a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b797e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b7981:	89 c1                	mov    %eax,%ecx
 80b7983:	03 4d 10             	add    0x10(%ebp),%ecx
 80b7986:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b7989:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b798c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b798f:	89 c2                	mov    %eax,%edx
 80b7991:	c1 fa 1f             	sar    $0x1f,%edx
 80b7994:	f7 7d d0             	idivl  -0x30(%ebp)
 80b7997:	8b 45 08             	mov    0x8(%ebp),%eax
 80b799a:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b79a0:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b79a4:	c1 f8 08             	sar    $0x8,%eax
 80b79a7:	25 ff 00 00 00       	and    $0xff,%eax
 80b79ac:	0f b6 90 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%edx
 80b79b3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b79b6:	c1 f8 08             	sar    $0x8,%eax
 80b79b9:	31 d0                	xor    %edx,%eax
 80b79bb:	88 01                	mov    %al,(%ecx)
 80b79bd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b79c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b79c4:	89 c1                	mov    %eax,%ecx
 80b79c6:	03 4d 10             	add    0x10(%ebp),%ecx
 80b79c9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b79cc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b79cf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b79d2:	89 c2                	mov    %eax,%edx
 80b79d4:	c1 fa 1f             	sar    $0x1f,%edx
 80b79d7:	f7 7d d0             	idivl  -0x30(%ebp)
 80b79da:	8b 45 08             	mov    0x8(%ebp),%eax
 80b79dd:	81 c2 14 01 00 00    	add    $0x114,%edx
 80b79e3:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b79e7:	25 ff 00 00 00       	and    $0xff,%eax
 80b79ec:	0f b6 90 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%edx
 80b79f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b79f6:	31 d0                	xor    %edx,%eax
 80b79f8:	88 01                	mov    %al,(%ecx)
 80b79fa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b79fe:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b7a02:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b7a05:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 80b7a08:	0f 9c c0             	setl   %al
 80b7a0b:	84 c0                	test   %al,%al
 80b7a0d:	0f 85 db fe ff ff    	jne    80b78ee <_ZN9CRijndael12EncryptBlockEPKcPc+0x2b8>
 80b7a13:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b7a18:	83 c4 40             	add    $0x40,%esp
 80b7a1b:	5b                   	pop    %ebx
 80b7a1c:	5e                   	pop    %esi
 80b7a1d:	5d                   	pop    %ebp
 80b7a1e:	c3                   	ret
 80b7a1f:	90                   	nop

```

```c
// CRijndael::EncryptBlock @ 0x80b7636

/* CRijndael::EncryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::EncryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_20;
  CRijndael *local_18;
  int local_14;
  int local_10;
  
  if (this[4] == (CRijndael)0x1) {
    if (*(int *)(this + 8) == 0x10) {
      DefEncryptBlock(this,param_1,param_2);
      uVar3 = 0x6fffffff;
    }
    else {
      iVar4 = (int)(((uint)(*(int *)(this + 8) >> 0x1f) >> 0x1e) + *(int *)(this + 8)) >> 2;
      if (iVar4 == 4) {
        iVar5 = 0;
      }
      else if (iVar4 == 6) {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      iVar1 = *(int *)(sm_shifts + (iVar5 * 4 + 1) * 8);
      iVar2 = *(int *)(sm_shifts + (iVar5 * 2 + 1) * 0x10);
      iVar5 = *(int *)(sm_shifts + iVar5 * 0x20 + 0x18);
      local_18 = this + 0x45c;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        *(uint *)local_18 = (uint)(byte)*param_1 << 0x18;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[1] << 0x10;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[2] << 8;
        *(uint *)local_18 = (uint)(byte)param_1[3] | *(uint *)local_18;
        param_1 = param_1 + 4;
        *(uint *)local_18 = *(uint *)(this + (local_20 + 0xc) * 4 + 8) ^ *(uint *)local_18;
        local_18 = local_18 + 4;
      }
      for (local_10 = 1; local_10 < *(int *)(this + 0x3d8); local_10 = local_10 + 1) {
        for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
          *(uint *)(this + (local_20 + 0x10c) * 4 + 0xc) =
               *(uint *)(sm_T1 + (*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18) * 4) ^
               *(uint *)(sm_T2 + (*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >>
                                  0x10 & 0xffU) * 4) ^
               *(uint *)(sm_T3 + (*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >>
                                  8 & 0xffU) * 4) ^
               *(uint *)(sm_T4 + (*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) &
                                 0xff) * 4) ^
               *(uint *)(this + (local_10 * 8 + local_20 + 0xc) * 4 + 8);
        }
        memcpy(this + 0x45c,this + 0x43c,iVar4 << 2);
      }
      local_14 = 0;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        uVar3 = *(undefined4 *)(this + (*(int *)(this + 0x3d8) * 8 + local_20 + 0xc) * 4 + 8);
        param_2[local_14] =
             (byte)((uint)uVar3 >> 0x18) ^
             sm_S[*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18];
        param_2[local_14 + 1] =
             (byte)((uint)uVar3 >> 0x10) ^
             sm_S[*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >> 0x10 & 0xff];
        param_2[local_14 + 2] =
             (byte)((uint)uVar3 >> 8) ^
             sm_S[*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >> 8 & 0xff];
        param_2[local_14 + 3] =
             (byte)uVar3 ^
             sm_S[*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) & 0xff];
        local_14 = local_14 + 4;
      }
      uVar3 = 0x6fffffff;
    }
  }
  else {
    uVar3 = 0x70000005;
  }
  return uVar3;
}

```

---

## Initialize

```asm
// === 080b6220 CRijndael::Initialize  [0x080b6220-0x80b6a53] ===
 80b6220:	55                   	push   %ebp
 80b6221:	89 e5                	mov    %esp,%ebp
 80b6223:	53                   	push   %ebx
 80b6224:	83 ec 64             	sub    $0x64,%esp
 80b6227:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80b622b:	75 0a                	jne    80b6237 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x17>
 80b622d:	b8 01 00 00 70       	mov    $0x70000001,%eax
 80b6232:	e9 16 08 00 00       	jmp    80b6a4d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x82d>
 80b6237:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80b623b:	7f 0a                	jg     80b6247 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x27>
 80b623d:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80b6242:	e9 06 08 00 00       	jmp    80b6a4d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x82d>
 80b6247:	83 7d 18 10          	cmpl   $0x10,0x18(%ebp)
 80b624b:	74 16                	je     80b6263 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x43>
 80b624d:	83 7d 18 18          	cmpl   $0x18,0x18(%ebp)
 80b6251:	74 10                	je     80b6263 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x43>
 80b6253:	83 7d 18 20          	cmpl   $0x20,0x18(%ebp)
 80b6257:	74 0a                	je     80b6263 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x43>
 80b6259:	b8 09 00 00 70       	mov    $0x70000009,%eax
 80b625e:	e9 ea 07 00 00       	jmp    80b6a4d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x82d>
 80b6263:	83 7d 1c 10          	cmpl   $0x10,0x1c(%ebp)
 80b6267:	74 16                	je     80b627f <_ZN9CRijndael10InitializeEPKciS1_iiii+0x5f>
 80b6269:	83 7d 1c 18          	cmpl   $0x18,0x1c(%ebp)
 80b626d:	74 10                	je     80b627f <_ZN9CRijndael10InitializeEPKciS1_iiii+0x5f>
 80b626f:	83 7d 1c 20          	cmpl   $0x20,0x1c(%ebp)
 80b6273:	74 0a                	je     80b627f <_ZN9CRijndael10InitializeEPKciS1_iiii+0x5f>
 80b6275:	b8 06 00 00 70       	mov    $0x70000006,%eax
 80b627a:	e9 ce 07 00 00       	jmp    80b6a4d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x82d>
 80b627f:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 80b6283:	78 06                	js     80b628b <_ZN9CRijndael10InitializeEPKciS1_iiii+0x6b>
 80b6285:	83 7d 20 02          	cmpl   $0x2,0x20(%ebp)
 80b6289:	7e 0a                	jle    80b6295 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x75>
 80b628b:	b8 03 00 00 70       	mov    $0x70000003,%eax
 80b6290:	e9 b8 07 00 00       	jmp    80b6a4d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x82d>
 80b6295:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 80b6299:	78 06                	js     80b62a1 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x81>
 80b629b:	83 7d 24 02          	cmpl   $0x2,0x24(%ebp)
 80b629f:	7e 0a                	jle    80b62ab <_ZN9CRijndael10InitializeEPKciS1_iiii+0x8b>
 80b62a1:	b8 04 00 00 70       	mov    $0x70000004,%eax
 80b62a6:	e9 a2 07 00 00       	jmp    80b6a4d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x82d>
 80b62ab:	8b 45 08             	mov    0x8(%ebp),%eax
 80b62ae:	8b 55 20             	mov    0x20(%ebp),%edx
 80b62b1:	89 50 10             	mov    %edx,0x10(%eax)
 80b62b4:	8b 45 08             	mov    0x8(%ebp),%eax
 80b62b7:	8b 55 24             	mov    0x24(%ebp),%edx
 80b62ba:	89 50 14             	mov    %edx,0x14(%eax)
 80b62bd:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 80b62c4:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b62cb:	eb 25                	jmp    80b62f2 <_ZN9CRijndael10InitializeEPKciS1_iiii+0xd2>
 80b62cd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b62d0:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b62d3:	03 55 0c             	add    0xc(%ebp),%edx
 80b62d6:	0f b6 12             	movzbl (%edx),%edx
 80b62d9:	88 54 05 ac          	mov    %dl,-0x54(%ebp,%eax,1)
 80b62dd:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80b62e1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b62e4:	83 c0 01             	add    $0x1,%eax
 80b62e7:	89 c2                	mov    %eax,%edx
 80b62e9:	c1 fa 1f             	sar    $0x1f,%edx
 80b62ec:	f7 7d 10             	idivl  0x10(%ebp)
 80b62ef:	89 55 d0             	mov    %edx,-0x30(%ebp)
 80b62f2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b62f5:	3b 45 18             	cmp    0x18(%ebp),%eax
 80b62f8:	0f 9c c0             	setl   %al
 80b62fb:	84 c0                	test   %al,%al
 80b62fd:	75 ce                	jne    80b62cd <_ZN9CRijndael10InitializeEPKciS1_iiii+0xad>
 80b62ff:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6302:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80b6305:	89 50 08             	mov    %edx,0x8(%eax)
 80b6308:	8b 45 08             	mov    0x8(%ebp),%eax
 80b630b:	8b 40 08             	mov    0x8(%eax),%eax
 80b630e:	8b 55 08             	mov    0x8(%ebp),%edx
 80b6311:	81 c2 dc 03 00 00    	add    $0x3dc,%edx
 80b6317:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b631b:	8b 45 14             	mov    0x14(%ebp),%eax
 80b631e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b6322:	89 14 24             	mov    %edx,(%esp)
 80b6325:	e8 76 75 fc ff       	call   807d8a0 <memcpy@plt>
 80b632a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b632d:	8b 40 08             	mov    0x8(%eax),%eax
 80b6330:	8b 55 08             	mov    0x8(%ebp),%edx
 80b6333:	8d 8a dc 03 00 00    	lea    0x3dc(%edx),%ecx
 80b6339:	8b 55 08             	mov    0x8(%ebp),%edx
 80b633c:	81 c2 fc 03 00 00    	add    $0x3fc,%edx
 80b6342:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b6346:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80b634a:	89 14 24             	mov    %edx,(%esp)
 80b634d:	e8 4e 75 fc ff       	call   807d8a0 <memcpy@plt>
 80b6352:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6355:	8b 55 18             	mov    0x18(%ebp),%edx
 80b6358:	89 50 0c             	mov    %edx,0xc(%eax)
 80b635b:	8b 45 08             	mov    0x8(%ebp),%eax
 80b635e:	8b 40 0c             	mov    0xc(%eax),%eax
 80b6361:	8b 55 08             	mov    0x8(%ebp),%edx
 80b6364:	83 c2 18             	add    $0x18,%edx
 80b6367:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b636b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 80b636e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b6372:	89 14 24             	mov    %edx,(%esp)
 80b6375:	e8 26 75 fc ff       	call   807d8a0 <memcpy@plt>
 80b637a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b637d:	8b 40 0c             	mov    0xc(%eax),%eax
 80b6380:	83 f8 10             	cmp    $0x10,%eax
 80b6383:	74 07                	je     80b638c <_ZN9CRijndael10InitializeEPKciS1_iiii+0x16c>
 80b6385:	83 f8 18             	cmp    $0x18,%eax
 80b6388:	74 36                	je     80b63c0 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1a0>
 80b638a:	eb 56                	jmp    80b63e2 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1c2>
 80b638c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b638f:	8b 40 08             	mov    0x8(%eax),%eax
 80b6392:	83 f8 10             	cmp    $0x10,%eax
 80b6395:	74 19                	je     80b63b0 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x190>
 80b6397:	8b 45 08             	mov    0x8(%ebp),%eax
 80b639a:	8b 40 08             	mov    0x8(%eax),%eax
 80b639d:	83 f8 18             	cmp    $0x18,%eax
 80b63a0:	75 07                	jne    80b63a9 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x189>
 80b63a2:	b8 0c 00 00 00       	mov    $0xc,%eax
 80b63a7:	eb 05                	jmp    80b63ae <_ZN9CRijndael10InitializeEPKciS1_iiii+0x18e>
 80b63a9:	b8 0e 00 00 00       	mov    $0xe,%eax
 80b63ae:	eb 05                	jmp    80b63b5 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x195>
 80b63b0:	b8 0a 00 00 00       	mov    $0xa,%eax
 80b63b5:	8b 55 08             	mov    0x8(%ebp),%edx
 80b63b8:	89 82 d8 03 00 00    	mov    %eax,0x3d8(%edx)
 80b63be:	eb 2f                	jmp    80b63ef <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1cf>
 80b63c0:	8b 45 08             	mov    0x8(%ebp),%eax
 80b63c3:	8b 40 08             	mov    0x8(%eax),%eax
 80b63c6:	83 f8 20             	cmp    $0x20,%eax
 80b63c9:	74 07                	je     80b63d2 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1b2>
 80b63cb:	b8 0c 00 00 00       	mov    $0xc,%eax
 80b63d0:	eb 05                	jmp    80b63d7 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1b7>
 80b63d2:	b8 0e 00 00 00       	mov    $0xe,%eax
 80b63d7:	8b 55 08             	mov    0x8(%ebp),%edx
 80b63da:	89 82 d8 03 00 00    	mov    %eax,0x3d8(%edx)
 80b63e0:	eb 0d                	jmp    80b63ef <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1cf>
 80b63e2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b63e5:	c7 80 d8 03 00 00 0e 	movl   $0xe,0x3d8(%eax)
 80b63ec:	00 00 00 
 80b63ef:	8b 45 08             	mov    0x8(%ebp),%eax
 80b63f2:	8b 40 08             	mov    0x8(%eax),%eax
 80b63f5:	89 c2                	mov    %eax,%edx
 80b63f7:	c1 fa 1f             	sar    $0x1f,%edx
 80b63fa:	c1 ea 1e             	shr    $0x1e,%edx
 80b63fd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b6400:	c1 f8 02             	sar    $0x2,%eax
 80b6403:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80b6406:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 80b640d:	eb 38                	jmp    80b6447 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x227>
 80b640f:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b6416:	eb 1e                	jmp    80b6436 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x216>
 80b6418:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 80b641b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b641e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6421:	c1 e1 03             	shl    $0x3,%ecx
 80b6424:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80b6427:	83 c2 0c             	add    $0xc,%edx
 80b642a:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 80b6431:	00 
 80b6432:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b6436:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b6439:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 80b643c:	0f 9c c0             	setl   %al
 80b643f:	84 c0                	test   %al,%al
 80b6441:	75 d5                	jne    80b6418 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1f8>
 80b6443:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80b6447:	8b 45 08             	mov    0x8(%ebp),%eax
 80b644a:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b6450:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 80b6453:	0f 9d c0             	setge  %al
 80b6456:	84 c0                	test   %al,%al
 80b6458:	75 b5                	jne    80b640f <_ZN9CRijndael10InitializeEPKciS1_iiii+0x1ef>
 80b645a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 80b6461:	eb 38                	jmp    80b649b <_ZN9CRijndael10InitializeEPKciS1_iiii+0x27b>
 80b6463:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b646a:	eb 1e                	jmp    80b648a <_ZN9CRijndael10InitializeEPKciS1_iiii+0x26a>
 80b646c:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 80b646f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b6472:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6475:	c1 e1 03             	shl    $0x3,%ecx
 80b6478:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80b647b:	83 c2 7c             	add    $0x7c,%edx
 80b647e:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 80b6485:	00 
 80b6486:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b648a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b648d:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 80b6490:	0f 9c c0             	setl   %al
 80b6493:	84 c0                	test   %al,%al
 80b6495:	75 d5                	jne    80b646c <_ZN9CRijndael10InitializeEPKciS1_iiii+0x24c>
 80b6497:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80b649b:	8b 45 08             	mov    0x8(%ebp),%eax
 80b649e:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b64a4:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 80b64a7:	0f 9d c0             	setge  %al
 80b64aa:	84 c0                	test   %al,%al
 80b64ac:	75 b5                	jne    80b6463 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x243>
 80b64ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80b64b1:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b64b7:	83 c0 01             	add    $0x1,%eax
 80b64ba:	0f af 45 d4          	imul   -0x2c(%ebp),%eax
 80b64be:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80b64c1:	8b 45 08             	mov    0x8(%ebp),%eax
 80b64c4:	8b 40 0c             	mov    0xc(%eax),%eax
 80b64c7:	89 c2                	mov    %eax,%edx
 80b64c9:	c1 fa 1f             	sar    $0x1f,%edx
 80b64cc:	c1 ea 1e             	shr    $0x1e,%edx
 80b64cf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b64d2:	c1 f8 02             	sar    $0x2,%eax
 80b64d5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80b64d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80b64db:	05 1c 04 00 00       	add    $0x41c,%eax
 80b64e0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80b64e3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 80b64e6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b64e9:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 80b64f0:	eb 6d                	jmp    80b655f <_ZN9CRijndael10InitializeEPKciS1_iiii+0x33f>
 80b64f2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b64f5:	0f b6 00             	movzbl (%eax),%eax
 80b64f8:	0f b6 c0             	movzbl %al,%eax
 80b64fb:	89 c2                	mov    %eax,%edx
 80b64fd:	c1 e2 18             	shl    $0x18,%edx
 80b6500:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6503:	89 10                	mov    %edx,(%eax)
 80b6505:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b6509:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b650c:	8b 10                	mov    (%eax),%edx
 80b650e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6511:	0f b6 00             	movzbl (%eax),%eax
 80b6514:	0f b6 c0             	movzbl %al,%eax
 80b6517:	c1 e0 10             	shl    $0x10,%eax
 80b651a:	09 c2                	or     %eax,%edx
 80b651c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b651f:	89 10                	mov    %edx,(%eax)
 80b6521:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b6525:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6528:	8b 10                	mov    (%eax),%edx
 80b652a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b652d:	0f b6 00             	movzbl (%eax),%eax
 80b6530:	0f b6 c0             	movzbl %al,%eax
 80b6533:	c1 e0 08             	shl    $0x8,%eax
 80b6536:	09 c2                	or     %eax,%edx
 80b6538:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b653b:	89 10                	mov    %edx,(%eax)
 80b653d:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b6541:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80b6544:	8b 08                	mov    (%eax),%ecx
 80b6546:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80b6549:	0f b6 12             	movzbl (%edx),%edx
 80b654c:	0f b6 d2             	movzbl %dl,%edx
 80b654f:	09 ca                	or     %ecx,%edx
 80b6551:	89 10                	mov    %edx,(%eax)
 80b6553:	83 45 e0 04          	addl   $0x4,-0x20(%ebp)
 80b6557:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80b655b:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80b655f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b6562:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 80b6565:	0f 9c c0             	setl   %al
 80b6568:	84 c0                	test   %al,%al
 80b656a:	75 86                	jne    80b64f2 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x2d2>
 80b656c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80b6573:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b657a:	e9 87 00 00 00       	jmp    80b6606 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x3e6>
 80b657f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b6582:	89 c2                	mov    %eax,%edx
 80b6584:	c1 fa 1f             	sar    $0x1f,%edx
 80b6587:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b658a:	89 c3                	mov    %eax,%ebx
 80b658c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b658f:	89 c2                	mov    %eax,%edx
 80b6591:	c1 fa 1f             	sar    $0x1f,%edx
 80b6594:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b6597:	89 d1                	mov    %edx,%ecx
 80b6599:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b659c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b659f:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b65a5:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 80b65a9:	8b 45 08             	mov    0x8(%ebp),%eax
 80b65ac:	c1 e3 03             	shl    $0x3,%ebx
 80b65af:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 80b65b2:	83 c1 0c             	add    $0xc,%ecx
 80b65b5:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80b65b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80b65bc:	8b 88 d8 03 00 00    	mov    0x3d8(%eax),%ecx
 80b65c2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b65c5:	89 c2                	mov    %eax,%edx
 80b65c7:	c1 fa 1f             	sar    $0x1f,%edx
 80b65ca:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b65cd:	89 cb                	mov    %ecx,%ebx
 80b65cf:	29 c3                	sub    %eax,%ebx
 80b65d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b65d4:	89 c2                	mov    %eax,%edx
 80b65d6:	c1 fa 1f             	sar    $0x1f,%edx
 80b65d9:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b65dc:	89 d1                	mov    %edx,%ecx
 80b65de:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b65e1:	8b 45 08             	mov    0x8(%ebp),%eax
 80b65e4:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b65ea:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 80b65ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80b65f1:	c1 e3 03             	shl    $0x3,%ebx
 80b65f4:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 80b65f7:	83 c1 7c             	add    $0x7c,%ecx
 80b65fa:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80b65fe:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b6602:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80b6606:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b6609:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 80b660c:	7d 0f                	jge    80b661d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x3fd>
 80b660e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b6611:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 80b6614:	7d 07                	jge    80b661d <_ZN9CRijndael10InitializeEPKciS1_iiii+0x3fd>
 80b6616:	b8 01 00 00 00       	mov    $0x1,%eax
 80b661b:	eb 05                	jmp    80b6622 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x402>
 80b661d:	b8 00 00 00 00       	mov    $0x0,%eax
 80b6622:	84 c0                	test   %al,%al
 80b6624:	0f 85 55 ff ff ff    	jne    80b657f <_ZN9CRijndael10InitializeEPKciS1_iiii+0x35f>
 80b662a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80b6631:	e9 40 03 00 00       	jmp    80b6976 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x756>
 80b6636:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6639:	8d 50 ff             	lea    -0x1(%eax),%edx
 80b663c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b663f:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b6645:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b6649:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b664c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b664f:	8b 90 1c 04 00 00    	mov    0x41c(%eax),%edx
 80b6655:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b6658:	c1 f8 10             	sar    $0x10,%eax
 80b665b:	25 ff 00 00 00       	and    $0xff,%eax
 80b6660:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b6667:	0f be c0             	movsbl %al,%eax
 80b666a:	89 c1                	mov    %eax,%ecx
 80b666c:	c1 e1 18             	shl    $0x18,%ecx
 80b666f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b6672:	c1 f8 08             	sar    $0x8,%eax
 80b6675:	25 ff 00 00 00       	and    $0xff,%eax
 80b667a:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b6681:	0f be c0             	movsbl %al,%eax
 80b6684:	25 ff 00 00 00       	and    $0xff,%eax
 80b6689:	c1 e0 10             	shl    $0x10,%eax
 80b668c:	31 c1                	xor    %eax,%ecx
 80b668e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b6691:	25 ff 00 00 00       	and    $0xff,%eax
 80b6696:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b669d:	0f be c0             	movsbl %al,%eax
 80b66a0:	c1 e0 08             	shl    $0x8,%eax
 80b66a3:	25 ff ff 00 00       	and    $0xffff,%eax
 80b66a8:	31 c1                	xor    %eax,%ecx
 80b66aa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b66ad:	c1 e8 18             	shr    $0x18,%eax
 80b66b0:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b66b7:	0f be c0             	movsbl %al,%eax
 80b66ba:	25 ff 00 00 00       	and    $0xff,%eax
 80b66bf:	31 c1                	xor    %eax,%ecx
 80b66c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b66c4:	0f b6 80 a0 2e b2 08 	movzbl 0x8b22ea0(%eax),%eax
 80b66cb:	0f be c0             	movsbl %al,%eax
 80b66ce:	c1 e0 18             	shl    $0x18,%eax
 80b66d1:	31 c8                	xor    %ecx,%eax
 80b66d3:	31 c2                	xor    %eax,%edx
 80b66d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b66d8:	89 90 1c 04 00 00    	mov    %edx,0x41c(%eax)
 80b66de:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b66e2:	83 7d dc 08          	cmpl   $0x8,-0x24(%ebp)
 80b66e6:	74 5d                	je     80b6745 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x525>
 80b66e8:	c7 45 cc 01 00 00 00 	movl   $0x1,-0x34(%ebp)
 80b66ef:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b66f6:	eb 3b                	jmp    80b6733 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x513>
 80b66f8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b66fb:	89 c2                	mov    %eax,%edx
 80b66fd:	89 c1                	mov    %eax,%ecx
 80b66ff:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6702:	81 c1 04 01 00 00    	add    $0x104,%ecx
 80b6708:	8b 4c 88 0c          	mov    0xc(%eax,%ecx,4),%ecx
 80b670c:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 80b670f:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6712:	81 c3 04 01 00 00    	add    $0x104,%ebx
 80b6718:	8b 44 98 0c          	mov    0xc(%eax,%ebx,4),%eax
 80b671c:	31 c1                	xor    %eax,%ecx
 80b671e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6721:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b6727:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 80b672b:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80b672f:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b6733:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b6736:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 80b6739:	0f 9c c0             	setl   %al
 80b673c:	84 c0                	test   %al,%al
 80b673e:	75 b8                	jne    80b66f8 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x4d8>
 80b6740:	e9 7a 01 00 00       	jmp    80b68bf <_ZN9CRijndael10InitializeEPKciS1_iiii+0x69f>
 80b6745:	c7 45 cc 01 00 00 00 	movl   $0x1,-0x34(%ebp)
 80b674c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b6753:	eb 3b                	jmp    80b6790 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x570>
 80b6755:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b6758:	89 c2                	mov    %eax,%edx
 80b675a:	89 c1                	mov    %eax,%ecx
 80b675c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b675f:	81 c1 04 01 00 00    	add    $0x104,%ecx
 80b6765:	8b 4c 88 0c          	mov    0xc(%eax,%ecx,4),%ecx
 80b6769:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 80b676c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b676f:	81 c3 04 01 00 00    	add    $0x104,%ebx
 80b6775:	8b 44 98 0c          	mov    0xc(%eax,%ebx,4),%eax
 80b6779:	31 c1                	xor    %eax,%ecx
 80b677b:	8b 45 08             	mov    0x8(%ebp),%eax
 80b677e:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b6784:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 80b6788:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80b678c:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b6790:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b6793:	89 c2                	mov    %eax,%edx
 80b6795:	c1 ea 1f             	shr    $0x1f,%edx
 80b6798:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b679b:	d1 f8                	sar    $1,%eax
 80b679d:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 80b67a0:	0f 9f c0             	setg   %al
 80b67a3:	84 c0                	test   %al,%al
 80b67a5:	75 ae                	jne    80b6755 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x535>
 80b67a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b67aa:	89 c2                	mov    %eax,%edx
 80b67ac:	c1 ea 1f             	shr    $0x1f,%edx
 80b67af:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b67b2:	d1 f8                	sar    $1,%eax
 80b67b4:	8d 50 ff             	lea    -0x1(%eax),%edx
 80b67b7:	8b 45 08             	mov    0x8(%ebp),%eax
 80b67ba:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b67c0:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 80b67c4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b67c7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b67ca:	89 c2                	mov    %eax,%edx
 80b67cc:	c1 ea 1f             	shr    $0x1f,%edx
 80b67cf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b67d2:	d1 f8                	sar    $1,%eax
 80b67d4:	89 c2                	mov    %eax,%edx
 80b67d6:	89 c1                	mov    %eax,%ecx
 80b67d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80b67db:	81 c1 04 01 00 00    	add    $0x104,%ecx
 80b67e1:	8b 4c 88 0c          	mov    0xc(%eax,%ecx,4),%ecx
 80b67e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b67e8:	25 ff 00 00 00       	and    $0xff,%eax
 80b67ed:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b67f4:	0f be c0             	movsbl %al,%eax
 80b67f7:	0f b6 d8             	movzbl %al,%ebx
 80b67fa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b67fd:	c1 f8 08             	sar    $0x8,%eax
 80b6800:	25 ff 00 00 00       	and    $0xff,%eax
 80b6805:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b680c:	0f be c0             	movsbl %al,%eax
 80b680f:	c1 e0 08             	shl    $0x8,%eax
 80b6812:	25 ff ff 00 00       	and    $0xffff,%eax
 80b6817:	31 c3                	xor    %eax,%ebx
 80b6819:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b681c:	c1 f8 10             	sar    $0x10,%eax
 80b681f:	25 ff 00 00 00       	and    $0xff,%eax
 80b6824:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b682b:	0f be c0             	movsbl %al,%eax
 80b682e:	25 ff 00 00 00       	and    $0xff,%eax
 80b6833:	c1 e0 10             	shl    $0x10,%eax
 80b6836:	31 c3                	xor    %eax,%ebx
 80b6838:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b683b:	c1 e8 18             	shr    $0x18,%eax
 80b683e:	0f b6 80 a0 fc b1 08 	movzbl 0x8b1fca0(%eax),%eax
 80b6845:	0f be c0             	movsbl %al,%eax
 80b6848:	c1 e0 18             	shl    $0x18,%eax
 80b684b:	31 d8                	xor    %ebx,%eax
 80b684d:	31 c1                	xor    %eax,%ecx
 80b684f:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6852:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b6858:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 80b685c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80b685f:	89 c2                	mov    %eax,%edx
 80b6861:	c1 ea 1f             	shr    $0x1f,%edx
 80b6864:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b6867:	d1 f8                	sar    $1,%eax
 80b6869:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80b686c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b686f:	83 c0 01             	add    $0x1,%eax
 80b6872:	89 45 cc             	mov    %eax,-0x34(%ebp)
 80b6875:	eb 3b                	jmp    80b68b2 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x692>
 80b6877:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b687a:	89 c2                	mov    %eax,%edx
 80b687c:	89 c1                	mov    %eax,%ecx
 80b687e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6881:	81 c1 04 01 00 00    	add    $0x104,%ecx
 80b6887:	8b 4c 88 0c          	mov    0xc(%eax,%ecx,4),%ecx
 80b688b:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 80b688e:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6891:	81 c3 04 01 00 00    	add    $0x104,%ebx
 80b6897:	8b 44 98 0c          	mov    0xc(%eax,%ebx,4),%eax
 80b689b:	31 c1                	xor    %eax,%ecx
 80b689d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b68a0:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b68a6:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 80b68aa:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80b68ae:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b68b2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80b68b5:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 80b68b8:	0f 9c c0             	setl   %al
 80b68bb:	84 c0                	test   %al,%al
 80b68bd:	75 b8                	jne    80b6877 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x657>
 80b68bf:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b68c6:	e9 87 00 00 00       	jmp    80b6952 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x732>
 80b68cb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b68ce:	89 c2                	mov    %eax,%edx
 80b68d0:	c1 fa 1f             	sar    $0x1f,%edx
 80b68d3:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b68d6:	89 c3                	mov    %eax,%ebx
 80b68d8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b68db:	89 c2                	mov    %eax,%edx
 80b68dd:	c1 fa 1f             	sar    $0x1f,%edx
 80b68e0:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b68e3:	89 d1                	mov    %edx,%ecx
 80b68e5:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b68e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80b68eb:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b68f1:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 80b68f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b68f8:	c1 e3 03             	shl    $0x3,%ebx
 80b68fb:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 80b68fe:	83 c1 0c             	add    $0xc,%ecx
 80b6901:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80b6905:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6908:	8b 88 d8 03 00 00    	mov    0x3d8(%eax),%ecx
 80b690e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b6911:	89 c2                	mov    %eax,%edx
 80b6913:	c1 fa 1f             	sar    $0x1f,%edx
 80b6916:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b6919:	89 cb                	mov    %ecx,%ebx
 80b691b:	29 c3                	sub    %eax,%ebx
 80b691d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b6920:	89 c2                	mov    %eax,%edx
 80b6922:	c1 fa 1f             	sar    $0x1f,%edx
 80b6925:	f7 7d d4             	idivl  -0x2c(%ebp)
 80b6928:	89 d1                	mov    %edx,%ecx
 80b692a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b692d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6930:	81 c2 04 01 00 00    	add    $0x104,%edx
 80b6936:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 80b693a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b693d:	c1 e3 03             	shl    $0x3,%ebx
 80b6940:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 80b6943:	83 c1 7c             	add    $0x7c,%ecx
 80b6946:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80b694a:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b694e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80b6952:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b6955:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 80b6958:	7d 0f                	jge    80b6969 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x749>
 80b695a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b695d:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 80b6960:	7d 07                	jge    80b6969 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x749>
 80b6962:	b8 01 00 00 00       	mov    $0x1,%eax
 80b6967:	eb 05                	jmp    80b696e <_ZN9CRijndael10InitializeEPKciS1_iiii+0x74e>
 80b6969:	b8 00 00 00 00       	mov    $0x0,%eax
 80b696e:	84 c0                	test   %al,%al
 80b6970:	0f 85 55 ff ff ff    	jne    80b68cb <_ZN9CRijndael10InitializeEPKciS1_iiii+0x6ab>
 80b6976:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b6979:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 80b697c:	0f 9c c0             	setl   %al
 80b697f:	84 c0                	test   %al,%al
 80b6981:	0f 85 af fc ff ff    	jne    80b6636 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x416>
 80b6987:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 80b698e:	e9 97 00 00 00       	jmp    80b6a2a <_ZN9CRijndael10InitializeEPKciS1_iiii+0x80a>
 80b6993:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80b699a:	eb 79                	jmp    80b6a15 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x7f5>
 80b699c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 80b699f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b69a2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b69a5:	c1 e1 03             	shl    $0x3,%ecx
 80b69a8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80b69ab:	83 c2 7c             	add    $0x7c,%edx
 80b69ae:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80b69b2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b69b5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 80b69b8:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80b69bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b69be:	c1 e8 18             	shr    $0x18,%eax
 80b69c1:	8b 0c 85 a0 1e b2 08 	mov    0x8b21ea0(,%eax,4),%ecx
 80b69c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b69cb:	c1 f8 10             	sar    $0x10,%eax
 80b69ce:	25 ff 00 00 00       	and    $0xff,%eax
 80b69d3:	8b 04 85 a0 22 b2 08 	mov    0x8b222a0(,%eax,4),%eax
 80b69da:	31 c1                	xor    %eax,%ecx
 80b69dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b69df:	c1 f8 08             	sar    $0x8,%eax
 80b69e2:	25 ff 00 00 00       	and    $0xff,%eax
 80b69e7:	8b 04 85 a0 26 b2 08 	mov    0x8b226a0(,%eax,4),%eax
 80b69ee:	31 c1                	xor    %eax,%ecx
 80b69f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b69f3:	25 ff 00 00 00       	and    $0xff,%eax
 80b69f8:	8b 04 85 a0 2a b2 08 	mov    0x8b22aa0(,%eax,4),%eax
 80b69ff:	31 c1                	xor    %eax,%ecx
 80b6a01:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6a04:	c1 e3 03             	shl    $0x3,%ebx
 80b6a07:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 80b6a0a:	83 c2 7c             	add    $0x7c,%edx
 80b6a0d:	89 4c 90 08          	mov    %ecx,0x8(%eax,%edx,4)
 80b6a11:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 80b6a15:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80b6a18:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 80b6a1b:	0f 9c c0             	setl   %al
 80b6a1e:	84 c0                	test   %al,%al
 80b6a20:	0f 85 76 ff ff ff    	jne    80b699c <_ZN9CRijndael10InitializeEPKciS1_iiii+0x77c>
 80b6a26:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80b6a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6a2d:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 80b6a33:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80b6a36:	0f 9f c0             	setg   %al
 80b6a39:	84 c0                	test   %al,%al
 80b6a3b:	0f 85 52 ff ff ff    	jne    80b6993 <_ZN9CRijndael10InitializeEPKciS1_iiii+0x773>
 80b6a41:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6a44:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 80b6a48:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b6a4d:	83 c4 64             	add    $0x64,%esp
 80b6a50:	5b                   	pop    %ebx
 80b6a51:	5d                   	pop    %ebp
 80b6a52:	c3                   	ret
 80b6a53:	90                   	nop

```

```c
// CRijndael::Initialize @ 0x80b6220

/* CRijndael::Initialize(char const*, int, char const*, int, int, int, int) */

undefined4 __thiscall
CRijndael::Initialize
          (CRijndael *this,char *param_1,int param_2,char *param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte local_58 [32];
  int local_38;
  int local_34;
  CRijndael *local_24;
  byte *local_20;
  int local_1c;
  int local_14;
  int local_10;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x70000001;
  }
  else if (param_2 < 1) {
    uVar4 = 0x70000002;
  }
  else if (((param_4 == 0x10) || (param_4 == 0x18)) || (param_4 == 0x20)) {
    if (((param_5 == 0x10) || (param_5 == 0x18)) || (param_5 == 0x20)) {
      if ((param_6 < 0) || (2 < param_6)) {
        uVar4 = 0x70000003;
      }
      else if ((param_7 < 0) || (2 < param_7)) {
        uVar4 = 0x70000004;
      }
      else {
        *(int *)(this + 0x10) = param_6;
        *(int *)(this + 0x14) = param_7;
        local_34 = 0;
        for (local_38 = 0; local_38 < param_4; local_38 = local_38 + 1) {
          local_58[local_38] = param_1[local_34];
          local_34 = (local_34 + 1) % param_2;
        }
        *(int *)(this + 8) = param_5;
        memcpy(this + 0x3dc,param_3,*(size_t *)(this + 8));
        memcpy(this + 0x3fc,this + 0x3dc,*(size_t *)(this + 8));
        *(int *)(this + 0xc) = param_4;
        memcpy(this + 0x18,local_58,*(size_t *)(this + 0xc));
        if (*(int *)(this + 0xc) == 0x10) {
          if (*(int *)(this + 8) == 0x10) {
            uVar4 = 10;
          }
          else if (*(int *)(this + 8) == 0x18) {
            uVar4 = 0xc;
          }
          else {
            uVar4 = 0xe;
          }
          *(undefined4 *)(this + 0x3d8) = uVar4;
        }
        else if (*(int *)(this + 0xc) == 0x18) {
          if (*(int *)(this + 8) == 0x20) {
            uVar4 = 0xe;
          }
          else {
            uVar4 = 0xc;
          }
          *(undefined4 *)(this + 0x3d8) = uVar4;
        }
        else {
          *(undefined4 *)(this + 0x3d8) = 0xe;
        }
        iVar5 = (int)(((uint)(*(int *)(this + 8) >> 0x1f) >> 0x1e) + *(int *)(this + 8)) >> 2;
        for (local_38 = 0; local_38 <= *(int *)(this + 0x3d8); local_38 = local_38 + 1) {
          for (local_34 = 0; local_34 < iVar5; local_34 = local_34 + 1) {
            *(undefined4 *)(this + (local_38 * 8 + local_34 + 0xc) * 4 + 8) = 0;
          }
        }
        for (local_38 = 0; local_38 <= *(int *)(this + 0x3d8); local_38 = local_38 + 1) {
          for (local_34 = 0; local_34 < iVar5; local_34 = local_34 + 1) {
            *(undefined4 *)(this + (local_38 * 8 + local_34 + 0x7c) * 4 + 8) = 0;
          }
        }
        iVar6 = (*(int *)(this + 0x3d8) + 1) * iVar5;
        iVar7 = (int)(((uint)(*(int *)(this + 0xc) >> 0x1f) >> 0x1e) + *(int *)(this + 0xc)) >> 2;
        local_24 = this + 0x41c;
        local_20 = local_58;
        for (local_38 = 0; local_38 < iVar7; local_38 = local_38 + 1) {
          *(uint *)local_24 = (uint)*local_20 << 0x18;
          *(uint *)local_24 = *(uint *)local_24 | (uint)local_20[1] << 0x10;
          *(uint *)local_24 = *(uint *)local_24 | (uint)local_20[2] << 8;
          *(uint *)local_24 = (uint)local_20[3] | *(uint *)local_24;
          local_24 = local_24 + 4;
          local_20 = local_20 + 4;
        }
        local_1c = 0;
        local_34 = 0;
        while( true ) {
          if ((local_34 < iVar7) && (local_1c < iVar6)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) break;
          *(undefined4 *)(this + ((local_1c / iVar5) * 8 + local_1c % iVar5 + 0xc) * 4 + 8) =
               *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
          *(undefined4 *)
           (this + ((*(int *)(this + 0x3d8) - local_1c / iVar5) * 8 + local_1c % iVar5 + 0x7c) * 4 +
                   8) = *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
          local_34 = local_34 + 1;
          local_1c = local_1c + 1;
        }
        local_14 = 0;
        while (local_1c < iVar6) {
          uVar1 = *(uint *)(this + (iVar7 + 0x103) * 4 + 0xc);
          *(uint *)(this + 0x41c) =
               *(uint *)(this + 0x41c) ^
               (int)(char)sm_rcon[local_14] << 0x18 ^
               (int)(char)sm_S[(int)uVar1 >> 0x10 & 0xff] << 0x18 ^
               (uint)(byte)sm_S[(int)uVar1 >> 8 & 0xff] << 0x10 ^
               (uint)(byte)sm_S[uVar1 & 0xff] << 8 ^ (uint)(byte)sm_S[uVar1 >> 0x18];
          local_14 = local_14 + 1;
          if (iVar7 == 8) {
            local_34 = 0;
            for (local_38 = 1; local_38 < 4; local_38 = local_38 + 1) {
              *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) =
                   *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) ^
                   *(uint *)(this + (local_34 + 0x104) * 4 + 0xc);
              local_34 = local_34 + 1;
            }
            uVar1 = *(uint *)(this + 0x428);
            *(uint *)(this + 0x42c) =
                 *(uint *)(this + 0x42c) ^
                 CONCAT13(sm_S[uVar1 >> 0x18],
                          CONCAT12(sm_S[(int)uVar1 >> 0x10 & 0xff],
                                   CONCAT11(sm_S[(int)uVar1 >> 8 & 0xff],sm_S[uVar1 & 0xff])));
            local_34 = 4;
            iVar3 = local_34;
            while (local_38 = iVar3 + 1, local_38 < 8) {
              *(uint *)(this + (iVar3 + 0x105) * 4 + 0xc) =
                   *(uint *)(this + (iVar3 + 0x105) * 4 + 0xc) ^
                   *(uint *)(this + (local_34 + 0x104) * 4 + 0xc);
              local_34 = local_34 + 1;
              iVar3 = local_38;
            }
          }
          else {
            local_34 = 0;
            for (local_38 = 1; local_38 < iVar7; local_38 = local_38 + 1) {
              *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) =
                   *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) ^
                   *(uint *)(this + (local_34 + 0x104) * 4 + 0xc);
              local_34 = local_34 + 1;
            }
          }
          local_34 = 0;
          while( true ) {
            if ((local_34 < iVar7) && (local_1c < iVar6)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (!bVar2) break;
            *(undefined4 *)(this + ((local_1c / iVar5) * 8 + local_1c % iVar5 + 0xc) * 4 + 8) =
                 *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
            *(undefined4 *)
             (this + ((*(int *)(this + 0x3d8) - local_1c / iVar5) * 8 + local_1c % iVar5 + 0x7c) * 4
                     + 8) = *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
            local_34 = local_34 + 1;
            local_1c = local_1c + 1;
          }
        }
        for (local_10 = 1; local_10 < *(int *)(this + 0x3d8); local_10 = local_10 + 1) {
          for (local_34 = 0; local_34 < iVar5; local_34 = local_34 + 1) {
            uVar1 = *(uint *)(this + (local_10 * 8 + local_34 + 0x7c) * 4 + 8);
            *(uint *)(this + (local_10 * 8 + local_34 + 0x7c) * 4 + 8) =
                 *(uint *)(sm_U1 + (uVar1 >> 0x18) * 4) ^
                 *(uint *)(sm_U2 + ((int)uVar1 >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_U3 + ((int)uVar1 >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_U4 + (uVar1 & 0xff) * 4);
          }
        }
        this[4] = (CRijndael)0x1;
        uVar4 = 0x6fffffff;
      }
    }
    else {
      uVar4 = 0x70000006;
    }
  }
  else {
    uVar4 = 0x70000009;
  }
  return uVar4;
}

```

---

## ResetChain

```asm
// === 080b6a54 CRijndael::ResetChain  [0x080b6a54-0x80b6a9d] ===
 80b6a54:	55                   	push   %ebp
 80b6a55:	89 e5                	mov    %esp,%ebp
 80b6a57:	83 ec 18             	sub    $0x18,%esp
 80b6a5a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6a5d:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b6a61:	83 f0 01             	xor    $0x1,%eax
 80b6a64:	84 c0                	test   %al,%al
 80b6a66:	74 07                	je     80b6a6f <_ZN9CRijndael10ResetChainEv+0x1b>
 80b6a68:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b6a6d:	eb 2d                	jmp    80b6a9c <_ZN9CRijndael10ResetChainEv+0x48>
 80b6a6f:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6a72:	8b 40 08             	mov    0x8(%eax),%eax
 80b6a75:	8b 55 08             	mov    0x8(%ebp),%edx
 80b6a78:	8d 8a dc 03 00 00    	lea    0x3dc(%edx),%ecx
 80b6a7e:	8b 55 08             	mov    0x8(%ebp),%edx
 80b6a81:	81 c2 fc 03 00 00    	add    $0x3fc,%edx
 80b6a87:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b6a8b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80b6a8f:	89 14 24             	mov    %edx,(%esp)
 80b6a92:	e8 09 6e fc ff       	call   807d8a0 <memcpy@plt>
 80b6a97:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b6a9c:	c9                   	leave
 80b6a9d:	c3                   	ret

```

```c
// CRijndael::ResetChain @ 0x80b6a54

/* CRijndael::ResetChain() */

undefined4 __thiscall CRijndael::ResetChain(CRijndael *this)

{
  undefined4 uVar1;
  
  if (this[4] == (CRijndael)0x1) {
    memcpy(this + 0x3fc,this + 0x3dc,*(size_t *)(this + 8));
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## Signature

```asm
// === 080b6a9e CRijndael::Signature  [0x080b6a9e-0x80b6b9f] ===
 80b6a9e:	55                   	push   %ebp
 80b6a9f:	89 e5                	mov    %esp,%ebp
 80b6aa1:	57                   	push   %edi
 80b6aa2:	56                   	push   %esi
 80b6aa3:	53                   	push   %ebx
 80b6aa4:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 80b6aaa:	8d 5d b4             	lea    -0x4c(%ebp),%ebx
 80b6aad:	b8 00 00 00 00       	mov    $0x0,%eax
 80b6ab2:	ba 0c 00 00 00       	mov    $0xc,%edx
 80b6ab7:	89 df                	mov    %ebx,%edi
 80b6ab9:	89 d1                	mov    %edx,%ecx
 80b6abb:	f3 ab                	rep stos %eax,%es:(%edi)
 80b6abd:	c7 44 24 04 40 2f b2 	movl   $0x8b22f40,0x4(%esp)
 80b6ac4:	08 
 80b6ac5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80b6ac8:	89 04 24             	mov    %eax,(%esp)
 80b6acb:	e8 90 72 fc ff       	call   807dd60 <strcat@plt>
 80b6ad0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80b6ad3:	89 04 24             	mov    %eax,(%esp)
 80b6ad6:	e8 d5 78 fc ff       	call   807e3b0 <strlen@plt>
 80b6adb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b6ade:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6ae1:	8b 40 0c             	mov    0xc(%eax),%eax
 80b6ae4:	89 c2                	mov    %eax,%edx
 80b6ae6:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6ae9:	8d 48 18             	lea    0x18(%eax),%ecx
 80b6aec:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80b6aef:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80b6af2:	01 d8                	add    %ebx,%eax
 80b6af4:	89 54 24 08          	mov    %edx,0x8(%esp)
 80b6af8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80b6afc:	89 04 24             	mov    %eax,(%esp)
 80b6aff:	e8 9c 6d fc ff       	call   807d8a0 <memcpy@plt>
 80b6b04:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6b07:	8b 70 14             	mov    0x14(%eax),%esi
 80b6b0a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6b0d:	8b 58 10             	mov    0x10(%eax),%ebx
 80b6b10:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6b13:	8b 48 0c             	mov    0xc(%eax),%ecx
 80b6b16:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6b19:	8b 50 08             	mov    0x8(%eax),%edx
 80b6b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6b1f:	8b 40 0c             	mov    0xc(%eax),%eax
 80b6b22:	89 c7                	mov    %eax,%edi
 80b6b24:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80b6b27:	01 c7                	add    %eax,%edi
 80b6b29:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80b6b2c:	01 f8                	add    %edi,%eax
 80b6b2e:	89 74 24 14          	mov    %esi,0x14(%esp)
 80b6b32:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 80b6b36:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80b6b3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 80b6b3e:	c7 44 24 04 48 2f b2 	movl   $0x8b22f48,0x4(%esp)
 80b6b45:	08 
 80b6b46:	89 04 24             	mov    %eax,(%esp)
 80b6b49:	e8 f2 78 fc ff       	call   807e440 <sprintf@plt>
 80b6b4e:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 80b6b54:	89 04 24             	mov    %eax,(%esp)
 80b6b57:	e8 40 4b 00 00       	call   80bb69c <_ZN4CSHAC1Ev>
 80b6b5c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80b6b5f:	89 04 24             	mov    %eax,(%esp)
 80b6b62:	e8 49 78 fc ff       	call   807e3b0 <strlen@plt>
 80b6b67:	89 44 24 08          	mov    %eax,0x8(%esp)
 80b6b6b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80b6b6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b6b72:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 80b6b78:	89 04 24             	mov    %eax,(%esp)
 80b6b7b:	e8 88 4b 00 00       	call   80bb708 <_ZN4CSHA7AddDataEPKci>
 80b6b80:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b6b83:	89 44 24 04          	mov    %eax,0x4(%esp)
 80b6b87:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 80b6b8d:	89 04 24             	mov    %eax,(%esp)
 80b6b90:	e8 c9 4c 00 00       	call   80bb85e <_ZN4CSHA11FinalDigestEPc>
 80b6b95:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 80b6b9b:	5b                   	pop    %ebx
 80b6b9c:	5e                   	pop    %esi
 80b6b9d:	5f                   	pop    %edi
 80b6b9e:	5d                   	pop    %ebp
 80b6b9f:	c3                   	ret

```

```c
// CRijndael::Signature @ 0x80b6a9e

/* CRijndael::Signature(char*) */

void __thiscall CRijndael::Signature(CRijndael *this,char *param_1)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  CSHA local_bc [108];
  char local_50 [48];
  size_t local_20;
  
  pcVar3 = local_50;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  strcat(local_50,"RIJDAEL");
  local_20 = strlen(local_50);
  memcpy(local_50 + local_20,this + 0x18,*(size_t *)(this + 0xc));
  sprintf(local_50 + *(int *)(this + 0xc) + local_20,"%d%d%d%d",*(undefined4 *)(this + 8),
          *(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
  CSHA::CSHA(local_bc);
  sVar1 = strlen(local_50);
  CSHA::AddData(local_bc,local_50,sVar1);
  CSHA::FinalDigest(local_bc,param_1);
  return;
}

```

---

## ~CRijndael

```asm
// === 080b61d2 CRijndael::~CRijndael  [0x080b61d2-0x80b6201] ===
 80b61d2:	55                   	push   %ebp
 80b61d3:	89 e5                	mov    %esp,%ebp
 80b61d5:	83 ec 18             	sub    $0x18,%esp
 80b61d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80b61db:	c7 00 68 2f b2 08    	movl   $0x8b22f68,(%eax)
 80b61e1:	8b 45 08             	mov    0x8(%ebp),%eax
 80b61e4:	89 04 24             	mov    %eax,(%esp)
 80b61e7:	e8 e6 e0 ff ff       	call   80b42d2 <_ZN7IMethodD1Ev>
 80b61ec:	b8 00 00 00 00       	mov    $0x0,%eax
 80b61f1:	84 c0                	test   %al,%al
 80b61f3:	74 0b                	je     80b6200 <_ZN9CRijndaelD1Ev+0x2e>
 80b61f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b61f8:	89 04 24             	mov    %eax,(%esp)
 80b61fb:	e8 f0 e2 66 00       	call   87244f0 <_ZdlPv>
 80b6200:	c9                   	leave
 80b6201:	c3                   	ret

```

```c
// CRijndael::~CRijndael @ 0x80b61d2

/* WARNING: Removing unreachable block (ram,0x080b61f5) */
/* CRijndael::~CRijndael() */

void __thiscall CRijndael::~CRijndael(CRijndael *this)

{
  *(undefined ***)this = &PTR__CRijndael_08b22f68;
  IMethod::~IMethod((IMethod *)this);
  return;
}

```

---

## ~CRijndael_080b6202

```asm
// === 080b6202 CRijndael::~CRijndael  [0x080b6202-0x80b621f] ===
 80b6202:	55                   	push   %ebp
 80b6203:	89 e5                	mov    %esp,%ebp
 80b6205:	83 ec 18             	sub    $0x18,%esp
 80b6208:	8b 45 08             	mov    0x8(%ebp),%eax
 80b620b:	89 04 24             	mov    %eax,(%esp)
 80b620e:	e8 bf ff ff ff       	call   80b61d2 <_ZN9CRijndaelD1Ev>
 80b6213:	8b 45 08             	mov    0x8(%ebp),%eax
 80b6216:	89 04 24             	mov    %eax,(%esp)
 80b6219:	e8 d2 e2 66 00       	call   87244f0 <_ZdlPv>
 80b621e:	c9                   	leave
 80b621f:	c3                   	ret

```

```c
// CRijndael::~CRijndael @ 0x80b6202

/* CRijndael::~CRijndael() */

void __thiscall CRijndael::~CRijndael(CRijndael *this)

{
  ~CRijndael(this);
  operator_delete(this);
  return;
}

```

