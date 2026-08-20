# operator=

`_ZN29STSDCActiveStatusSyncDataSendaSERK30STSDCActiveStatusSyncDataCLONG`

`STSDCActiveStatusSyncDataSend::operator=(STSDCActiveStatusSyncDataCLONG const&)`

| 类 | 地址 |
|---|---|
| `STSDCActiveStatusSyncDataSend` | `0x0808d18c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d18c  _ZN29STSDCActiveStatusSyncDataSendaSERK30STSDCActiveStatusSyncDataCLONG
#           STSDCActiveStatusSyncDataSend::operator=(STSDCActiveStatusSyncDataCLONG const&)
# range [0x0808d18c, 0x0808d267]
0808d18c +0x00:  push   %ebp
0808d18d +0x01:  mov    %esp,%ebp
0808d18f +0x03:  mov    0xc(%ebp),%eax
0808d192 +0x06:  mov    (%eax),%eax
0808d194 +0x08:  mov    %eax,%edx
0808d196 +0x0a:  mov    0x8(%ebp),%eax
0808d199 +0x0d:  mov    %dl,(%eax)
0808d19b +0x0f:  mov    0xc(%ebp),%eax
0808d19e +0x12:  mov    0x4(%eax),%eax
0808d1a1 +0x15:  mov    %eax,%edx
0808d1a3 +0x17:  mov    0x8(%ebp),%eax
0808d1a6 +0x1a:  mov    %dl,0x1(%eax)
0808d1a9 +0x1d:  mov    0xc(%ebp),%eax
0808d1ac +0x20:  mov    0x8(%eax),%eax
0808d1af +0x23:  mov    %eax,%edx
0808d1b1 +0x25:  mov    0x8(%ebp),%eax
0808d1b4 +0x28:  mov    %dl,0x2(%eax)
0808d1b7 +0x2b:  mov    0xc(%ebp),%eax
0808d1ba +0x2e:  mov    0xc(%eax),%edx
0808d1bd +0x31:  mov    0x8(%ebp),%eax
0808d1c0 +0x34:  mov    %edx,0x3(%eax)
0808d1c3 +0x37:  mov    0xc(%ebp),%eax
0808d1c6 +0x3a:  mov    0x10(%eax),%edx
0808d1c9 +0x3d:  mov    0x8(%ebp),%eax
0808d1cc +0x40:  mov    %edx,0x7(%eax)
0808d1cf +0x43:  mov    0xc(%ebp),%eax
0808d1d2 +0x46:  mov    0x14(%eax),%eax
0808d1d5 +0x49:  mov    %eax,%edx
0808d1d7 +0x4b:  mov    0x8(%ebp),%eax
0808d1da +0x4e:  mov    %dl,0xb(%eax)
0808d1dd +0x51:  mov    0xc(%ebp),%eax
0808d1e0 +0x54:  mov    0x18(%eax),%eax
0808d1e3 +0x57:  mov    %eax,%edx
0808d1e5 +0x59:  mov    0x8(%ebp),%eax
0808d1e8 +0x5c:  mov    %dl,0xc(%eax)
0808d1eb +0x5f:  mov    0xc(%ebp),%eax
0808d1ee +0x62:  mov    0x1c(%eax),%edx
0808d1f1 +0x65:  mov    0x8(%ebp),%eax
0808d1f4 +0x68:  mov    %edx,0xd(%eax)
0808d1f7 +0x6b:  mov    0xc(%ebp),%eax
0808d1fa +0x6e:  mov    0x28(%eax),%edx
0808d1fd +0x71:  mov    0x8(%ebp),%eax
0808d200 +0x74:  mov    %edx,0x19(%eax)
0808d203 +0x77:  mov    0xc(%ebp),%eax
0808d206 +0x7a:  mov    0x20(%eax),%edx
0808d209 +0x7d:  mov    0x8(%ebp),%eax
0808d20c +0x80:  mov    %edx,0x11(%eax)
0808d20f +0x83:  mov    0xc(%ebp),%eax
0808d212 +0x86:  mov    0x24(%eax),%edx
0808d215 +0x89:  mov    0x8(%ebp),%eax
0808d218 +0x8c:  mov    %edx,0x15(%eax)
0808d21b +0x8f:  mov    0xc(%ebp),%eax
0808d21e +0x92:  mov    0x2c(%eax),%edx
0808d221 +0x95:  mov    0x8(%ebp),%eax
0808d224 +0x98:  mov    %edx,0x1d(%eax)
0808d227 +0x9b:  mov    0xc(%ebp),%eax
0808d22a +0x9e:  mov    0x30(%eax),%edx
0808d22d +0xa1:  mov    0x8(%ebp),%eax
0808d230 +0xa4:  mov    %edx,0x21(%eax)
0808d233 +0xa7:  mov    0xc(%ebp),%eax
0808d236 +0xaa:  mov    0x34(%eax),%edx
0808d239 +0xad:  mov    0x8(%ebp),%eax
0808d23c +0xb0:  mov    %edx,0x25(%eax)
0808d23f +0xb3:  mov    0xc(%ebp),%eax
0808d242 +0xb6:  mov    0x38(%eax),%edx
0808d245 +0xb9:  mov    0x8(%ebp),%eax
0808d248 +0xbc:  mov    %edx,0x29(%eax)
0808d24b +0xbf:  mov    0xc(%ebp),%eax
0808d24e +0xc2:  mov    0x3c(%eax),%edx
0808d251 +0xc5:  mov    0x8(%ebp),%eax
0808d254 +0xc8:  mov    %edx,0x2d(%eax)
0808d257 +0xcb:  mov    0xc(%ebp),%eax
0808d25a +0xce:  mov    0x40(%eax),%edx
0808d25d +0xd1:  mov    0x8(%ebp),%eax
0808d260 +0xd4:  mov    %edx,0x31(%eax)
0808d263 +0xd7:  mov    0x8(%ebp),%eax
0808d266 +0xda:  pop    %ebp
0808d267 +0xdb:  ret
```

## 反编译 C

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
