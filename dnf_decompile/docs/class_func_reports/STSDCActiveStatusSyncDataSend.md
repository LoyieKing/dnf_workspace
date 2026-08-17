# STSDCActiveStatusSyncDataSend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator=

```asm
// === 0808d18c STSDCActiveStatusSyncDataSend::operator=  [0x0808d18c-0x808d267] ===
 808d18c:	55                   	push   %ebp
 808d18d:	89 e5                	mov    %esp,%ebp
 808d18f:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d192:	8b 00                	mov    (%eax),%eax
 808d194:	89 c2                	mov    %eax,%edx
 808d196:	8b 45 08             	mov    0x8(%ebp),%eax
 808d199:	88 10                	mov    %dl,(%eax)
 808d19b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d19e:	8b 40 04             	mov    0x4(%eax),%eax
 808d1a1:	89 c2                	mov    %eax,%edx
 808d1a3:	8b 45 08             	mov    0x8(%ebp),%eax
 808d1a6:	88 50 01             	mov    %dl,0x1(%eax)
 808d1a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d1ac:	8b 40 08             	mov    0x8(%eax),%eax
 808d1af:	89 c2                	mov    %eax,%edx
 808d1b1:	8b 45 08             	mov    0x8(%ebp),%eax
 808d1b4:	88 50 02             	mov    %dl,0x2(%eax)
 808d1b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d1ba:	8b 50 0c             	mov    0xc(%eax),%edx
 808d1bd:	8b 45 08             	mov    0x8(%ebp),%eax
 808d1c0:	89 50 03             	mov    %edx,0x3(%eax)
 808d1c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d1c6:	8b 50 10             	mov    0x10(%eax),%edx
 808d1c9:	8b 45 08             	mov    0x8(%ebp),%eax
 808d1cc:	89 50 07             	mov    %edx,0x7(%eax)
 808d1cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d1d2:	8b 40 14             	mov    0x14(%eax),%eax
 808d1d5:	89 c2                	mov    %eax,%edx
 808d1d7:	8b 45 08             	mov    0x8(%ebp),%eax
 808d1da:	88 50 0b             	mov    %dl,0xb(%eax)
 808d1dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d1e0:	8b 40 18             	mov    0x18(%eax),%eax
 808d1e3:	89 c2                	mov    %eax,%edx
 808d1e5:	8b 45 08             	mov    0x8(%ebp),%eax
 808d1e8:	88 50 0c             	mov    %dl,0xc(%eax)
 808d1eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d1ee:	8b 50 1c             	mov    0x1c(%eax),%edx
 808d1f1:	8b 45 08             	mov    0x8(%ebp),%eax
 808d1f4:	89 50 0d             	mov    %edx,0xd(%eax)
 808d1f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d1fa:	8b 50 28             	mov    0x28(%eax),%edx
 808d1fd:	8b 45 08             	mov    0x8(%ebp),%eax
 808d200:	89 50 19             	mov    %edx,0x19(%eax)
 808d203:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d206:	8b 50 20             	mov    0x20(%eax),%edx
 808d209:	8b 45 08             	mov    0x8(%ebp),%eax
 808d20c:	89 50 11             	mov    %edx,0x11(%eax)
 808d20f:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d212:	8b 50 24             	mov    0x24(%eax),%edx
 808d215:	8b 45 08             	mov    0x8(%ebp),%eax
 808d218:	89 50 15             	mov    %edx,0x15(%eax)
 808d21b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d21e:	8b 50 2c             	mov    0x2c(%eax),%edx
 808d221:	8b 45 08             	mov    0x8(%ebp),%eax
 808d224:	89 50 1d             	mov    %edx,0x1d(%eax)
 808d227:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d22a:	8b 50 30             	mov    0x30(%eax),%edx
 808d22d:	8b 45 08             	mov    0x8(%ebp),%eax
 808d230:	89 50 21             	mov    %edx,0x21(%eax)
 808d233:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d236:	8b 50 34             	mov    0x34(%eax),%edx
 808d239:	8b 45 08             	mov    0x8(%ebp),%eax
 808d23c:	89 50 25             	mov    %edx,0x25(%eax)
 808d23f:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d242:	8b 50 38             	mov    0x38(%eax),%edx
 808d245:	8b 45 08             	mov    0x8(%ebp),%eax
 808d248:	89 50 29             	mov    %edx,0x29(%eax)
 808d24b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d24e:	8b 50 3c             	mov    0x3c(%eax),%edx
 808d251:	8b 45 08             	mov    0x8(%ebp),%eax
 808d254:	89 50 2d             	mov    %edx,0x2d(%eax)
 808d257:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d25a:	8b 50 40             	mov    0x40(%eax),%edx
 808d25d:	8b 45 08             	mov    0x8(%ebp),%eax
 808d260:	89 50 31             	mov    %edx,0x31(%eax)
 808d263:	8b 45 08             	mov    0x8(%ebp),%eax
 808d266:	5d                   	pop    %ebp
 808d267:	c3                   	ret

```

```c
// STSDCActiveStatusSyncDataSend::operator= @ 0x808d18c

/* STSDCActiveStatusSyncDataSend::TEMPNAMEPLACEHOLDERVALUE(STSDCActiveStatusSyncDataCLONG const&) */

STSDCActiveStatusSyncDataSend * __thiscall
STSDCActiveStatusSyncDataSend::operator=
          (STSDCActiveStatusSyncDataSend *this,STSDCActiveStatusSyncDataCLONG *param_1)

{
  *this = SUB41(*(undefined4 *)param_1,0);
  this[1] = SUB41(*(undefined4 *)(param_1 + 4),0);
  this[2] = SUB41(*(undefined4 *)(param_1 + 8),0);
  *(undefined4 *)(this + 3) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 7) = *(undefined4 *)(param_1 + 0x10);
  this[0xb] = SUB41(*(undefined4 *)(param_1 + 0x14),0);
  this[0xc] = SUB41(*(undefined4 *)(param_1 + 0x18),0);
  *(undefined4 *)(this + 0xd) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x19) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x11) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x15) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x1d) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x21) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x25) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x29) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x2d) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x31) = *(undefined4 *)(param_1 + 0x40);
  return this;
}

```

