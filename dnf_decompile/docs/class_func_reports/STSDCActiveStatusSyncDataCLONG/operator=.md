# operator=

`_ZN30STSDCActiveStatusSyncDataCLONGaSERK29STSDCActiveStatusSyncDataSend`

`STSDCActiveStatusSyncDataCLONG::operator=(STSDCActiveStatusSyncDataSend const&)`

| 类 | 地址 |
|---|---|
| `STSDCActiveStatusSyncDataCLONG` | `0x0808d0a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d0a6  _ZN30STSDCActiveStatusSyncDataCLONGaSERK29STSDCActiveStatusSyncDataSend
#           STSDCActiveStatusSyncDataCLONG::operator=(STSDCActiveStatusSyncDataSend const&)
# range [0x0808d0a6, 0x0808d18b]
0808d0a6 +0x00:  push   %ebp
0808d0a7 +0x01:  mov    %esp,%ebp
0808d0a9 +0x03:  mov    0xc(%ebp),%eax
0808d0ac +0x06:  movzbl (%eax),%eax
0808d0af +0x09:  movsbl %al,%edx
0808d0b2 +0x0c:  mov    0x8(%ebp),%eax
0808d0b5 +0x0f:  mov    %edx,(%eax)
0808d0b7 +0x11:  mov    0xc(%ebp),%eax
0808d0ba +0x14:  movzbl 0x1(%eax),%eax
0808d0be +0x18:  movsbl %al,%edx
0808d0c1 +0x1b:  mov    0x8(%ebp),%eax
0808d0c4 +0x1e:  mov    %edx,0x4(%eax)
0808d0c7 +0x21:  mov    0xc(%ebp),%eax
0808d0ca +0x24:  movzbl 0x2(%eax),%eax
0808d0ce +0x28:  movzbl %al,%edx
0808d0d1 +0x2b:  mov    0x8(%ebp),%eax
0808d0d4 +0x2e:  mov    %edx,0x8(%eax)
0808d0d7 +0x31:  mov    0xc(%ebp),%eax
0808d0da +0x34:  mov    0x3(%eax),%edx
0808d0dd +0x37:  mov    0x8(%ebp),%eax
0808d0e0 +0x3a:  mov    %edx,0xc(%eax)
0808d0e3 +0x3d:  mov    0xc(%ebp),%eax
0808d0e6 +0x40:  mov    0x7(%eax),%edx
0808d0e9 +0x43:  mov    0x8(%ebp),%eax
0808d0ec +0x46:  mov    %edx,0x10(%eax)
0808d0ef +0x49:  mov    0xc(%ebp),%eax
0808d0f2 +0x4c:  movzbl 0xb(%eax),%eax
0808d0f6 +0x50:  movsbl %al,%edx
0808d0f9 +0x53:  mov    0x8(%ebp),%eax
0808d0fc +0x56:  mov    %edx,0x14(%eax)
0808d0ff +0x59:  mov    0xc(%ebp),%eax
0808d102 +0x5c:  movzbl 0xc(%eax),%eax
0808d106 +0x60:  movsbl %al,%edx
0808d109 +0x63:  mov    0x8(%ebp),%eax
0808d10c +0x66:  mov    %edx,0x18(%eax)
0808d10f +0x69:  mov    0xc(%ebp),%eax
0808d112 +0x6c:  mov    0xd(%eax),%edx
0808d115 +0x6f:  mov    0x8(%ebp),%eax
0808d118 +0x72:  mov    %edx,0x1c(%eax)
0808d11b +0x75:  mov    0xc(%ebp),%eax
0808d11e +0x78:  mov    0x19(%eax),%edx
0808d121 +0x7b:  mov    0x8(%ebp),%eax
0808d124 +0x7e:  mov    %edx,0x28(%eax)
0808d127 +0x81:  mov    0xc(%ebp),%eax
0808d12a +0x84:  mov    0x11(%eax),%edx
0808d12d +0x87:  mov    0x8(%ebp),%eax
0808d130 +0x8a:  mov    %edx,0x20(%eax)
0808d133 +0x8d:  mov    0xc(%ebp),%eax
0808d136 +0x90:  mov    0x15(%eax),%edx
0808d139 +0x93:  mov    0x8(%ebp),%eax
0808d13c +0x96:  mov    %edx,0x24(%eax)
0808d13f +0x99:  mov    0xc(%ebp),%eax
0808d142 +0x9c:  mov    0x1d(%eax),%edx
0808d145 +0x9f:  mov    0x8(%ebp),%eax
0808d148 +0xa2:  mov    %edx,0x2c(%eax)
0808d14b +0xa5:  mov    0xc(%ebp),%eax
0808d14e +0xa8:  mov    0x21(%eax),%edx
0808d151 +0xab:  mov    0x8(%ebp),%eax
0808d154 +0xae:  mov    %edx,0x30(%eax)
0808d157 +0xb1:  mov    0xc(%ebp),%eax
0808d15a +0xb4:  mov    0x25(%eax),%edx
0808d15d +0xb7:  mov    0x8(%ebp),%eax
0808d160 +0xba:  mov    %edx,0x34(%eax)
0808d163 +0xbd:  mov    0xc(%ebp),%eax
0808d166 +0xc0:  mov    0x29(%eax),%edx
0808d169 +0xc3:  mov    0x8(%ebp),%eax
0808d16c +0xc6:  mov    %edx,0x38(%eax)
0808d16f +0xc9:  mov    0xc(%ebp),%eax
0808d172 +0xcc:  mov    0x2d(%eax),%edx
0808d175 +0xcf:  mov    0x8(%ebp),%eax
0808d178 +0xd2:  mov    %edx,0x3c(%eax)
0808d17b +0xd5:  mov    0xc(%ebp),%eax
0808d17e +0xd8:  mov    0x31(%eax),%edx
0808d181 +0xdb:  mov    0x8(%ebp),%eax
0808d184 +0xde:  mov    %edx,0x40(%eax)
0808d187 +0xe1:  mov    0x8(%ebp),%eax
0808d18a +0xe4:  pop    %ebp
0808d18b +0xe5:  ret
```

## 反编译 C

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
