# Decrypt

`_ZN14CNCryptoMulti27DecryptEPKhiPhi`

`CNCryptoMulti2::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b496` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b496  _ZN14CNCryptoMulti27DecryptEPKhiPhi
#           CNCryptoMulti2::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809b496, 0x0809b587]
0809b496 +0x00:  push   %ebp
0809b497 +0x01:  mov    %esp,%ebp
0809b499 +0x03:  sub    $0x38,%esp
0809b49c +0x06:  mov    0x8(%ebp),%eax
0809b49f +0x09:  mov    0x8(%eax),%eax
0809b4a2 +0x0c:  test   %eax,%eax
0809b4a4 +0x0e:  jne    0809b4b0 <+0x1a>
0809b4a6 +0x10:  mov    $0x7000000c,%eax
0809b4ab +0x15:  jmp    0809b585 <+0xef>
0809b4b0 +0x1a:  mov    0x8(%ebp),%eax
0809b4b3 +0x1d:  mov    (%eax),%eax
0809b4b5 +0x1f:  add    $0x24,%eax
0809b4b8 +0x22:  mov    (%eax),%edx
0809b4ba +0x24:  mov    0x8(%ebp),%eax
0809b4bd +0x27:  mov    %eax,(%esp)
0809b4c0 +0x2a:  call   *%edx
0809b4c2 +0x2c:  mov    %eax,-0x20(%ebp)
0809b4c5 +0x2f:  mov    0x10(%ebp),%edx
0809b4c8 +0x32:  mov    %edx,%eax
0809b4ca +0x34:  sar    $0x1f,%edx
0809b4cd +0x37:  idivl  -0x20(%ebp)
0809b4d0 +0x3a:  mov    %edx,%eax
0809b4d2 +0x3c:  test   %eax,%eax
0809b4d4 +0x3e:  setne  %al
0809b4d7 +0x41:  test   %al,%al
0809b4d9 +0x43:  je     0809b4e5 <+0x4f>
0809b4db +0x45:  mov    $0x7000000a,%eax
0809b4e0 +0x4a:  jmp    0809b585 <+0xef>
0809b4e5 +0x4f:  mov    0x10(%ebp),%eax
0809b4e8 +0x52:  cmp    0x18(%ebp),%eax
0809b4eb +0x55:  jle    0809b4f7 <+0x61>
0809b4ed +0x57:  mov    $0x7000000a,%eax
0809b4f2 +0x5c:  jmp    0809b585 <+0xef>
0809b4f7 +0x61:  mov    0x8(%ebp),%eax
0809b4fa +0x64:  mov    0x8(%eax),%eax
0809b4fd +0x67:  mov    %eax,-0x14(%ebp)
0809b500 +0x6a:  mov    0x8(%ebp),%eax
0809b503 +0x6d:  mov    (%eax),%eax
0809b505 +0x6f:  add    $0x24,%eax
0809b508 +0x72:  mov    (%eax),%edx
0809b50a +0x74:  mov    0x8(%ebp),%eax
0809b50d +0x77:  mov    %eax,(%esp)
0809b510 +0x7a:  call   *%edx
0809b512 +0x7c:  mov    %eax,-0x1c(%ebp)
0809b515 +0x7f:  mov    0x10(%ebp),%eax
0809b518 +0x82:  mov    %eax,%edx
0809b51a +0x84:  sar    $0x1f,%edx
0809b51d +0x87:  idivl  -0x1c(%ebp)
0809b520 +0x8a:  mov    %eax,-0x10(%ebp)
0809b523 +0x8d:  movl   $0x0,-0xc(%ebp)
0809b52a +0x94:  jmp    0809b573 <+0xdd>
0809b52c +0x96:  mov    -0x14(%ebp),%eax
0809b52f +0x99:  mov    %eax,0x8(%esp)
0809b533 +0x9d:  mov    0x14(%ebp),%eax
0809b536 +0xa0:  mov    %eax,0x4(%esp)
0809b53a +0xa4:  mov    0xc(%ebp),%eax
0809b53d +0xa7:  mov    %eax,(%esp)
0809b540 +0xaa:  call   080b4d89 <_Z18multi2_ecb_decryptPKhPhP13symmetric_key>  ; multi2_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809b545 +0xaf:  mov    0x8(%ebp),%eax
0809b548 +0xb2:  mov    (%eax),%eax
0809b54a +0xb4:  add    $0x24,%eax
0809b54d +0xb7:  mov    (%eax),%edx
0809b54f +0xb9:  mov    0x8(%ebp),%eax
0809b552 +0xbc:  mov    %eax,(%esp)
0809b555 +0xbf:  call   *%edx
0809b557 +0xc1:  add    %eax,0xc(%ebp)
0809b55a +0xc4:  mov    0x8(%ebp),%eax
0809b55d +0xc7:  mov    (%eax),%eax
0809b55f +0xc9:  add    $0x24,%eax
0809b562 +0xcc:  mov    (%eax),%edx
0809b564 +0xce:  mov    0x8(%ebp),%eax
0809b567 +0xd1:  mov    %eax,(%esp)
0809b56a +0xd4:  call   *%edx
0809b56c +0xd6:  add    %eax,0x14(%ebp)
0809b56f +0xd9:  addl   $0x1,-0xc(%ebp)
0809b573 +0xdd:  mov    -0xc(%ebp),%eax
0809b576 +0xe0:  cmp    -0x10(%ebp),%eax
0809b579 +0xe3:  setl   %al
0809b57c +0xe6:  test   %al,%al
0809b57e +0xe8:  jne    0809b52c <+0x96>
0809b580 +0xea:  mov    $0x6fffffff,%eax
0809b585 +0xef:  leave
0809b586 +0xf0:  ret
0809b587 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoMulti2::Decrypt @ 0x809b496

/* CNCryptoMulti2::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoMulti2::Decrypt(CNCryptoMulti2 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          multi2_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x7000000a;
    }
  }
  return uVar2;
}
```
