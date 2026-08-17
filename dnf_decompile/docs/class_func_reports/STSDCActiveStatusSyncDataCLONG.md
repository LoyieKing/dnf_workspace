# STSDCActiveStatusSyncDataCLONG

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator=

```asm
// === 0808d0a6 STSDCActiveStatusSyncDataCLONG::operator=  [0x0808d0a6-0x808d18b] ===
 808d0a6:	55                   	push   %ebp
 808d0a7:	89 e5                	mov    %esp,%ebp
 808d0a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d0ac:	0f b6 00             	movzbl (%eax),%eax
 808d0af:	0f be d0             	movsbl %al,%edx
 808d0b2:	8b 45 08             	mov    0x8(%ebp),%eax
 808d0b5:	89 10                	mov    %edx,(%eax)
 808d0b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d0ba:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 808d0be:	0f be d0             	movsbl %al,%edx
 808d0c1:	8b 45 08             	mov    0x8(%ebp),%eax
 808d0c4:	89 50 04             	mov    %edx,0x4(%eax)
 808d0c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d0ca:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 808d0ce:	0f b6 d0             	movzbl %al,%edx
 808d0d1:	8b 45 08             	mov    0x8(%ebp),%eax
 808d0d4:	89 50 08             	mov    %edx,0x8(%eax)
 808d0d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d0da:	8b 50 03             	mov    0x3(%eax),%edx
 808d0dd:	8b 45 08             	mov    0x8(%ebp),%eax
 808d0e0:	89 50 0c             	mov    %edx,0xc(%eax)
 808d0e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d0e6:	8b 50 07             	mov    0x7(%eax),%edx
 808d0e9:	8b 45 08             	mov    0x8(%ebp),%eax
 808d0ec:	89 50 10             	mov    %edx,0x10(%eax)
 808d0ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d0f2:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 808d0f6:	0f be d0             	movsbl %al,%edx
 808d0f9:	8b 45 08             	mov    0x8(%ebp),%eax
 808d0fc:	89 50 14             	mov    %edx,0x14(%eax)
 808d0ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d102:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 808d106:	0f be d0             	movsbl %al,%edx
 808d109:	8b 45 08             	mov    0x8(%ebp),%eax
 808d10c:	89 50 18             	mov    %edx,0x18(%eax)
 808d10f:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d112:	8b 50 0d             	mov    0xd(%eax),%edx
 808d115:	8b 45 08             	mov    0x8(%ebp),%eax
 808d118:	89 50 1c             	mov    %edx,0x1c(%eax)
 808d11b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d11e:	8b 50 19             	mov    0x19(%eax),%edx
 808d121:	8b 45 08             	mov    0x8(%ebp),%eax
 808d124:	89 50 28             	mov    %edx,0x28(%eax)
 808d127:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d12a:	8b 50 11             	mov    0x11(%eax),%edx
 808d12d:	8b 45 08             	mov    0x8(%ebp),%eax
 808d130:	89 50 20             	mov    %edx,0x20(%eax)
 808d133:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d136:	8b 50 15             	mov    0x15(%eax),%edx
 808d139:	8b 45 08             	mov    0x8(%ebp),%eax
 808d13c:	89 50 24             	mov    %edx,0x24(%eax)
 808d13f:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d142:	8b 50 1d             	mov    0x1d(%eax),%edx
 808d145:	8b 45 08             	mov    0x8(%ebp),%eax
 808d148:	89 50 2c             	mov    %edx,0x2c(%eax)
 808d14b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d14e:	8b 50 21             	mov    0x21(%eax),%edx
 808d151:	8b 45 08             	mov    0x8(%ebp),%eax
 808d154:	89 50 30             	mov    %edx,0x30(%eax)
 808d157:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d15a:	8b 50 25             	mov    0x25(%eax),%edx
 808d15d:	8b 45 08             	mov    0x8(%ebp),%eax
 808d160:	89 50 34             	mov    %edx,0x34(%eax)
 808d163:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d166:	8b 50 29             	mov    0x29(%eax),%edx
 808d169:	8b 45 08             	mov    0x8(%ebp),%eax
 808d16c:	89 50 38             	mov    %edx,0x38(%eax)
 808d16f:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d172:	8b 50 2d             	mov    0x2d(%eax),%edx
 808d175:	8b 45 08             	mov    0x8(%ebp),%eax
 808d178:	89 50 3c             	mov    %edx,0x3c(%eax)
 808d17b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d17e:	8b 50 31             	mov    0x31(%eax),%edx
 808d181:	8b 45 08             	mov    0x8(%ebp),%eax
 808d184:	89 50 40             	mov    %edx,0x40(%eax)
 808d187:	8b 45 08             	mov    0x8(%ebp),%eax
 808d18a:	5d                   	pop    %ebp
 808d18b:	c3                   	ret

```

```c
// STSDCActiveStatusSyncDataCLONG::operator= @ 0x808d0a6

/* STSDCActiveStatusSyncDataCLONG::TEMPNAMEPLACEHOLDERVALUE(STSDCActiveStatusSyncDataSend const&) */

STSDCActiveStatusSyncDataCLONG * __thiscall
STSDCActiveStatusSyncDataCLONG::operator=
          (STSDCActiveStatusSyncDataCLONG *this,STSDCActiveStatusSyncDataSend *param_1)

{
  *(int *)this = (int)(char)*param_1;
  *(int *)(this + 4) = (int)(char)param_1[1];
  *(uint *)(this + 8) = (uint)(byte)param_1[2];
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 7);
  *(int *)(this + 0x14) = (int)(char)param_1[0xb];
  *(int *)(this + 0x18) = (int)(char)param_1[0xc];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x19);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x11);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x15);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x1d);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x21);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x25);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x29);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x2d);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x31);
  return this;
}

```

