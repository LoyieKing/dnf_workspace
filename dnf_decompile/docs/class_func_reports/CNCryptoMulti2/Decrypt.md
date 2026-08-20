# Decrypt

`_ZN14CNCryptoMulti27DecryptEPhi`

`CNCryptoMulti2::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b2cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b2cc  _ZN14CNCryptoMulti27DecryptEPhi
#           CNCryptoMulti2::Decrypt(unsigned char*, int)
# range [0x0809b2cc, 0x0809b3a3]
0809b2cc +0x00:  push   %ebp
0809b2cd +0x01:  mov    %esp,%ebp
0809b2cf +0x03:  sub    $0x38,%esp
0809b2d2 +0x06:  mov    0x8(%ebp),%eax
0809b2d5 +0x09:  mov    0x8(%eax),%eax
0809b2d8 +0x0c:  test   %eax,%eax
0809b2da +0x0e:  jne    0809b2e6 <+0x1a>
0809b2dc +0x10:  mov    $0x7000000c,%eax
0809b2e1 +0x15:  jmp    0809b3a1 <+0xd5>
0809b2e6 +0x1a:  mov    0x8(%ebp),%eax
0809b2e9 +0x1d:  mov    (%eax),%eax
0809b2eb +0x1f:  add    $0x24,%eax
0809b2ee +0x22:  mov    (%eax),%edx
0809b2f0 +0x24:  mov    0x8(%ebp),%eax
0809b2f3 +0x27:  mov    %eax,(%esp)
0809b2f6 +0x2a:  call   *%edx
0809b2f8 +0x2c:  mov    %eax,-0x20(%ebp)
0809b2fb +0x2f:  mov    0x10(%ebp),%edx
0809b2fe +0x32:  mov    %edx,%eax
0809b300 +0x34:  sar    $0x1f,%edx
0809b303 +0x37:  idivl  -0x20(%ebp)
0809b306 +0x3a:  mov    %edx,%eax
0809b308 +0x3c:  test   %eax,%eax
0809b30a +0x3e:  setne  %al
0809b30d +0x41:  test   %al,%al
0809b30f +0x43:  je     0809b31b <+0x4f>
0809b311 +0x45:  mov    $0x70000006,%eax
0809b316 +0x4a:  jmp    0809b3a1 <+0xd5>
0809b31b +0x4f:  cmpl   $0x0,0x10(%ebp)
0809b31f +0x53:  jg     0809b328 <+0x5c>
0809b321 +0x55:  mov    $0x7000000a,%eax
0809b326 +0x5a:  jmp    0809b3a1 <+0xd5>
0809b328 +0x5c:  mov    0x8(%ebp),%eax
0809b32b +0x5f:  mov    0x8(%eax),%eax
0809b32e +0x62:  mov    %eax,-0x14(%ebp)
0809b331 +0x65:  mov    0x8(%ebp),%eax
0809b334 +0x68:  mov    (%eax),%eax
0809b336 +0x6a:  add    $0x24,%eax
0809b339 +0x6d:  mov    (%eax),%edx
0809b33b +0x6f:  mov    0x8(%ebp),%eax
0809b33e +0x72:  mov    %eax,(%esp)
0809b341 +0x75:  call   *%edx
0809b343 +0x77:  mov    %eax,-0x1c(%ebp)
0809b346 +0x7a:  mov    0x10(%ebp),%eax
0809b349 +0x7d:  mov    %eax,%edx
0809b34b +0x7f:  sar    $0x1f,%edx
0809b34e +0x82:  idivl  -0x1c(%ebp)
0809b351 +0x85:  mov    %eax,-0x10(%ebp)
0809b354 +0x88:  movl   $0x0,-0xc(%ebp)
0809b35b +0x8f:  jmp    0809b38f <+0xc3>
0809b35d +0x91:  mov    -0x14(%ebp),%eax
0809b360 +0x94:  mov    %eax,0x8(%esp)
0809b364 +0x98:  mov    0xc(%ebp),%eax
0809b367 +0x9b:  mov    %eax,0x4(%esp)
0809b36b +0x9f:  mov    0xc(%ebp),%eax
0809b36e +0xa2:  mov    %eax,(%esp)
0809b371 +0xa5:  call   080b4d89 <_Z18multi2_ecb_decryptPKhPhP13symmetric_key>  ; multi2_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809b376 +0xaa:  mov    0x8(%ebp),%eax
0809b379 +0xad:  mov    (%eax),%eax
0809b37b +0xaf:  add    $0x24,%eax
0809b37e +0xb2:  mov    (%eax),%edx
0809b380 +0xb4:  mov    0x8(%ebp),%eax
0809b383 +0xb7:  mov    %eax,(%esp)
0809b386 +0xba:  call   *%edx
0809b388 +0xbc:  add    %eax,0xc(%ebp)
0809b38b +0xbf:  addl   $0x1,-0xc(%ebp)
0809b38f +0xc3:  mov    -0xc(%ebp),%eax
0809b392 +0xc6:  cmp    -0x10(%ebp),%eax
0809b395 +0xc9:  setl   %al
0809b398 +0xcc:  test   %al,%al
0809b39a +0xce:  jne    0809b35d <+0x91>
0809b39c +0xd0:  mov    $0x6fffffff,%eax
0809b3a1 +0xd5:  leave
0809b3a2 +0xd6:  ret
0809b3a3 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoMulti2::Decrypt @ 0x809b2cc

/* CNCryptoMulti2::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoMulti2::Decrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2)

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
          multi2_ecb_decrypt(param_1,param_1,psVar1);
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
