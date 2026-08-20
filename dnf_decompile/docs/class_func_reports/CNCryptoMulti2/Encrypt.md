# Encrypt

`_ZN14CNCryptoMulti27EncryptEPhi`

`CNCryptoMulti2::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b1f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b1f4  _ZN14CNCryptoMulti27EncryptEPhi
#           CNCryptoMulti2::Encrypt(unsigned char*, int)
# range [0x0809b1f4, 0x0809b2cb]
0809b1f4 +0x00:  push   %ebp
0809b1f5 +0x01:  mov    %esp,%ebp
0809b1f7 +0x03:  sub    $0x38,%esp
0809b1fa +0x06:  mov    0x8(%ebp),%eax
0809b1fd +0x09:  mov    0x8(%eax),%eax
0809b200 +0x0c:  test   %eax,%eax
0809b202 +0x0e:  jne    0809b20e <+0x1a>
0809b204 +0x10:  mov    $0x7000000c,%eax
0809b209 +0x15:  jmp    0809b2c9 <+0xd5>
0809b20e +0x1a:  mov    0x8(%ebp),%eax
0809b211 +0x1d:  mov    (%eax),%eax
0809b213 +0x1f:  add    $0x24,%eax
0809b216 +0x22:  mov    (%eax),%edx
0809b218 +0x24:  mov    0x8(%ebp),%eax
0809b21b +0x27:  mov    %eax,(%esp)
0809b21e +0x2a:  call   *%edx
0809b220 +0x2c:  mov    %eax,-0x20(%ebp)
0809b223 +0x2f:  mov    0x10(%ebp),%edx
0809b226 +0x32:  mov    %edx,%eax
0809b228 +0x34:  sar    $0x1f,%edx
0809b22b +0x37:  idivl  -0x20(%ebp)
0809b22e +0x3a:  mov    %edx,%eax
0809b230 +0x3c:  test   %eax,%eax
0809b232 +0x3e:  setne  %al
0809b235 +0x41:  test   %al,%al
0809b237 +0x43:  je     0809b243 <+0x4f>
0809b239 +0x45:  mov    $0x70000006,%eax
0809b23e +0x4a:  jmp    0809b2c9 <+0xd5>
0809b243 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809b247 +0x53:  jg     0809b250 <+0x5c>
0809b249 +0x55:  mov    $0x7000000a,%eax
0809b24e +0x5a:  jmp    0809b2c9 <+0xd5>
0809b250 +0x5c:  mov    0x8(%ebp),%eax
0809b253 +0x5f:  mov    0x8(%eax),%eax
0809b256 +0x62:  mov    %eax,-0x14(%ebp)
0809b259 +0x65:  mov    0x8(%ebp),%eax
0809b25c +0x68:  mov    (%eax),%eax
0809b25e +0x6a:  add    $0x24,%eax
0809b261 +0x6d:  mov    (%eax),%edx
0809b263 +0x6f:  mov    0x8(%ebp),%eax
0809b266 +0x72:  mov    %eax,(%esp)
0809b269 +0x75:  call   *%edx
0809b26b +0x77:  mov    %eax,-0x1c(%ebp)
0809b26e +0x7a:  mov    0x10(%ebp),%eax
0809b271 +0x7d:  mov    %eax,%edx
0809b273 +0x7f:  sar    $0x1f,%edx
0809b276 +0x82:  idivl  -0x1c(%ebp)
0809b279 +0x85:  mov    %eax,-0x10(%ebp)
0809b27c +0x88:  movl   $0x0,-0xc(%ebp)
0809b283 +0x8f:  jmp    0809b2b7 <+0xc3>
0809b285 +0x91:  mov    -0x14(%ebp),%eax
0809b288 +0x94:  mov    %eax,0x8(%esp)
0809b28c +0x98:  mov    0xc(%ebp),%eax
0809b28f +0x9b:  mov    %eax,0x4(%esp)
0809b293 +0x9f:  mov    0xc(%ebp),%eax
0809b296 +0xa2:  mov    %eax,(%esp)
0809b299 +0xa5:  call   080b4c70 <_Z18multi2_ecb_encryptPKhPhP13symmetric_key>  ; multi2_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809b29e +0xaa:  mov    0x8(%ebp),%eax
0809b2a1 +0xad:  mov    (%eax),%eax
0809b2a3 +0xaf:  add    $0x24,%eax
0809b2a6 +0xb2:  mov    (%eax),%edx
0809b2a8 +0xb4:  mov    0x8(%ebp),%eax
0809b2ab +0xb7:  mov    %eax,(%esp)
0809b2ae +0xba:  call   *%edx
0809b2b0 +0xbc:  add    %eax,0xc(%ebp)
0809b2b3 +0xbf:  addl   $0x1,-0xc(%ebp)
0809b2b7 +0xc3:  mov    -0xc(%ebp),%eax
0809b2ba +0xc6:  cmp    -0x10(%ebp),%eax
0809b2bd +0xc9:  setl   %al
0809b2c0 +0xcc:  test   %al,%al
0809b2c2 +0xce:  jne    0809b285 <+0x91>
0809b2c4 +0xd0:  mov    $0x6fffffff,%eax
0809b2c9 +0xd5:  leave
0809b2ca +0xd6:  ret
0809b2cb +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoMulti2::Encrypt @ 0x809b1f4

/* CNCryptoMulti2::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoMulti2::Encrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2)

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
          multi2_ecb_encrypt(param_1,param_1,psVar1);
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
