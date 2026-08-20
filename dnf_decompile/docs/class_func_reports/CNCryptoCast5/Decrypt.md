# Decrypt

`_ZN13CNCryptoCast57DecryptEPhi`

`CNCryptoCast5::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a1e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a1e0  _ZN13CNCryptoCast57DecryptEPhi
#           CNCryptoCast5::Decrypt(unsigned char*, int)
# range [0x0809a1e0, 0x0809a2b7]
0809a1e0 +0x00:  push   %ebp
0809a1e1 +0x01:  mov    %esp,%ebp
0809a1e3 +0x03:  sub    $0x38,%esp
0809a1e6 +0x06:  mov    0x8(%ebp),%eax
0809a1e9 +0x09:  mov    0x8(%eax),%eax
0809a1ec +0x0c:  test   %eax,%eax
0809a1ee +0x0e:  jne    0809a1fa <+0x1a>
0809a1f0 +0x10:  mov    $0x7000000c,%eax
0809a1f5 +0x15:  jmp    0809a2b5 <+0xd5>
0809a1fa +0x1a:  mov    0x8(%ebp),%eax
0809a1fd +0x1d:  mov    (%eax),%eax
0809a1ff +0x1f:  add    $0x24,%eax
0809a202 +0x22:  mov    (%eax),%edx
0809a204 +0x24:  mov    0x8(%ebp),%eax
0809a207 +0x27:  mov    %eax,(%esp)
0809a20a +0x2a:  call   *%edx
0809a20c +0x2c:  mov    %eax,-0x20(%ebp)
0809a20f +0x2f:  mov    0x10(%ebp),%edx
0809a212 +0x32:  mov    %edx,%eax
0809a214 +0x34:  sar    $0x1f,%edx
0809a217 +0x37:  idivl  -0x20(%ebp)
0809a21a +0x3a:  mov    %edx,%eax
0809a21c +0x3c:  test   %eax,%eax
0809a21e +0x3e:  setne  %al
0809a221 +0x41:  test   %al,%al
0809a223 +0x43:  je     0809a22f <+0x4f>
0809a225 +0x45:  mov    $0x70000006,%eax
0809a22a +0x4a:  jmp    0809a2b5 <+0xd5>
0809a22f +0x4f:  cmpl   $0x0,0x10(%ebp)
0809a233 +0x53:  jg     0809a23c <+0x5c>
0809a235 +0x55:  mov    $0x7000000a,%eax
0809a23a +0x5a:  jmp    0809a2b5 <+0xd5>
0809a23c +0x5c:  mov    0x8(%ebp),%eax
0809a23f +0x5f:  mov    0x8(%eax),%eax
0809a242 +0x62:  mov    %eax,-0x14(%ebp)
0809a245 +0x65:  mov    0x8(%ebp),%eax
0809a248 +0x68:  mov    (%eax),%eax
0809a24a +0x6a:  add    $0x24,%eax
0809a24d +0x6d:  mov    (%eax),%edx
0809a24f +0x6f:  mov    0x8(%ebp),%eax
0809a252 +0x72:  mov    %eax,(%esp)
0809a255 +0x75:  call   *%edx
0809a257 +0x77:  mov    %eax,-0x1c(%ebp)
0809a25a +0x7a:  mov    0x10(%ebp),%eax
0809a25d +0x7d:  mov    %eax,%edx
0809a25f +0x7f:  sar    $0x1f,%edx
0809a262 +0x82:  idivl  -0x1c(%ebp)
0809a265 +0x85:  mov    %eax,-0x10(%ebp)
0809a268 +0x88:  movl   $0x0,-0xc(%ebp)
0809a26f +0x8f:  jmp    0809a2a3 <+0xc3>
0809a271 +0x91:  mov    -0x14(%ebp),%eax
0809a274 +0x94:  mov    %eax,0x8(%esp)
0809a278 +0x98:  mov    0xc(%ebp),%eax
0809a27b +0x9b:  mov    %eax,0x4(%esp)
0809a27f +0x9f:  mov    0xc(%ebp),%eax
0809a282 +0xa2:  mov    %eax,(%esp)
0809a285 +0xa5:  call   080abc49 <_Z17cast5_ecb_decryptPKhPhP13symmetric_key>  ; cast5_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a28a +0xaa:  mov    0x8(%ebp),%eax
0809a28d +0xad:  mov    (%eax),%eax
0809a28f +0xaf:  add    $0x24,%eax
0809a292 +0xb2:  mov    (%eax),%edx
0809a294 +0xb4:  mov    0x8(%ebp),%eax
0809a297 +0xb7:  mov    %eax,(%esp)
0809a29a +0xba:  call   *%edx
0809a29c +0xbc:  add    %eax,0xc(%ebp)
0809a29f +0xbf:  addl   $0x1,-0xc(%ebp)
0809a2a3 +0xc3:  mov    -0xc(%ebp),%eax
0809a2a6 +0xc6:  cmp    -0x10(%ebp),%eax
0809a2a9 +0xc9:  setl   %al
0809a2ac +0xcc:  test   %al,%al
0809a2ae +0xce:  jne    0809a271 <+0x91>
0809a2b0 +0xd0:  mov    $0x6fffffff,%eax
0809a2b5 +0xd5:  leave
0809a2b6 +0xd6:  ret
0809a2b7 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoCast5::Decrypt @ 0x809a1e0

/* CNCryptoCast5::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoCast5::Decrypt(CNCryptoCast5 *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          cast5_ecb_decrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}
```
