# Encrypt

`_ZN14CNCryptoMulti27EncryptEPKhiPhi`

`CNCryptoMulti2::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b3a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b3a4  _ZN14CNCryptoMulti27EncryptEPKhiPhi
#           CNCryptoMulti2::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809b3a4, 0x0809b495]
0809b3a4 +0x00:  push   %ebp
0809b3a5 +0x01:  mov    %esp,%ebp
0809b3a7 +0x03:  sub    $0x38,%esp
0809b3aa +0x06:  mov    0x8(%ebp),%eax
0809b3ad +0x09:  mov    0x8(%eax),%eax
0809b3b0 +0x0c:  test   %eax,%eax
0809b3b2 +0x0e:  jne    0809b3be <+0x1a>
0809b3b4 +0x10:  mov    $0x7000000c,%eax
0809b3b9 +0x15:  jmp    0809b493 <+0xef>
0809b3be +0x1a:  mov    0x8(%ebp),%eax
0809b3c1 +0x1d:  mov    (%eax),%eax
0809b3c3 +0x1f:  add    $0x24,%eax
0809b3c6 +0x22:  mov    (%eax),%edx
0809b3c8 +0x24:  mov    0x8(%ebp),%eax
0809b3cb +0x27:  mov    %eax,(%esp)
0809b3ce +0x2a:  call   *%edx
0809b3d0 +0x2c:  mov    %eax,-0x20(%ebp)
0809b3d3 +0x2f:  mov    0x10(%ebp),%edx
0809b3d6 +0x32:  mov    %edx,%eax
0809b3d8 +0x34:  sar    $0x1f,%edx
0809b3db +0x37:  idivl  -0x20(%ebp)
0809b3de +0x3a:  mov    %edx,%eax
0809b3e0 +0x3c:  test   %eax,%eax
0809b3e2 +0x3e:  setne  %al
0809b3e5 +0x41:  test   %al,%al
0809b3e7 +0x43:  je     0809b3f3 <+0x4f>
0809b3e9 +0x45:  mov    $0x70000006,%eax
0809b3ee +0x4a:  jmp    0809b493 <+0xef>
0809b3f3 +0x4f:  mov    0x10(%ebp),%eax
0809b3f6 +0x52:  cmp    0x18(%ebp),%eax
0809b3f9 +0x55:  jle    0809b405 <+0x61>
0809b3fb +0x57:  mov    $0x7000000a,%eax
0809b400 +0x5c:  jmp    0809b493 <+0xef>
0809b405 +0x61:  mov    0x8(%ebp),%eax
0809b408 +0x64:  mov    0x8(%eax),%eax
0809b40b +0x67:  mov    %eax,-0x14(%ebp)
0809b40e +0x6a:  mov    0x8(%ebp),%eax
0809b411 +0x6d:  mov    (%eax),%eax
0809b413 +0x6f:  add    $0x24,%eax
0809b416 +0x72:  mov    (%eax),%edx
0809b418 +0x74:  mov    0x8(%ebp),%eax
0809b41b +0x77:  mov    %eax,(%esp)
0809b41e +0x7a:  call   *%edx
0809b420 +0x7c:  mov    %eax,-0x1c(%ebp)
0809b423 +0x7f:  mov    0x10(%ebp),%eax
0809b426 +0x82:  mov    %eax,%edx
0809b428 +0x84:  sar    $0x1f,%edx
0809b42b +0x87:  idivl  -0x1c(%ebp)
0809b42e +0x8a:  mov    %eax,-0x10(%ebp)
0809b431 +0x8d:  movl   $0x0,-0xc(%ebp)
0809b438 +0x94:  jmp    0809b481 <+0xdd>
0809b43a +0x96:  mov    -0x14(%ebp),%eax
0809b43d +0x99:  mov    %eax,0x8(%esp)
0809b441 +0x9d:  mov    0x14(%ebp),%eax
0809b444 +0xa0:  mov    %eax,0x4(%esp)
0809b448 +0xa4:  mov    0xc(%ebp),%eax
0809b44b +0xa7:  mov    %eax,(%esp)
0809b44e +0xaa:  call   080b4c70 <_Z18multi2_ecb_encryptPKhPhP13symmetric_key>  ; multi2_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809b453 +0xaf:  mov    0x8(%ebp),%eax
0809b456 +0xb2:  mov    (%eax),%eax
0809b458 +0xb4:  add    $0x24,%eax
0809b45b +0xb7:  mov    (%eax),%edx
0809b45d +0xb9:  mov    0x8(%ebp),%eax
0809b460 +0xbc:  mov    %eax,(%esp)
0809b463 +0xbf:  call   *%edx
0809b465 +0xc1:  add    %eax,0xc(%ebp)
0809b468 +0xc4:  mov    0x8(%ebp),%eax
0809b46b +0xc7:  mov    (%eax),%eax
0809b46d +0xc9:  add    $0x24,%eax
0809b470 +0xcc:  mov    (%eax),%edx
0809b472 +0xce:  mov    0x8(%ebp),%eax
0809b475 +0xd1:  mov    %eax,(%esp)
0809b478 +0xd4:  call   *%edx
0809b47a +0xd6:  add    %eax,0x14(%ebp)
0809b47d +0xd9:  addl   $0x1,-0xc(%ebp)
0809b481 +0xdd:  mov    -0xc(%ebp),%eax
0809b484 +0xe0:  cmp    -0x10(%ebp),%eax
0809b487 +0xe3:  setl   %al
0809b48a +0xe6:  test   %al,%al
0809b48c +0xe8:  jne    0809b43a <+0x96>
0809b48e +0xea:  mov    $0x6fffffff,%eax
0809b493 +0xef:  leave
0809b494 +0xf0:  ret
0809b495 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoMulti2::Encrypt @ 0x809b3a4

/* CNCryptoMulti2::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoMulti2::Encrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          multi2_ecb_encrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
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
