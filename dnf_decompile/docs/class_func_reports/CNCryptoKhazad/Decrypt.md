# Decrypt

`_ZN14CNCryptoKhazad7DecryptEPhi`

`CNCryptoKhazad::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809ad28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ad28  _ZN14CNCryptoKhazad7DecryptEPhi
#           CNCryptoKhazad::Decrypt(unsigned char*, int)
# range [0x0809ad28, 0x0809adff]
0809ad28 +0x00:  push   %ebp
0809ad29 +0x01:  mov    %esp,%ebp
0809ad2b +0x03:  sub    $0x38,%esp
0809ad2e +0x06:  mov    0x8(%ebp),%eax
0809ad31 +0x09:  mov    0x8(%eax),%eax
0809ad34 +0x0c:  test   %eax,%eax
0809ad36 +0x0e:  jne    0809ad42 <+0x1a>
0809ad38 +0x10:  mov    $0x7000000c,%eax
0809ad3d +0x15:  jmp    0809adfd <+0xd5>
0809ad42 +0x1a:  mov    0x8(%ebp),%eax
0809ad45 +0x1d:  mov    (%eax),%eax
0809ad47 +0x1f:  add    $0x24,%eax
0809ad4a +0x22:  mov    (%eax),%edx
0809ad4c +0x24:  mov    0x8(%ebp),%eax
0809ad4f +0x27:  mov    %eax,(%esp)
0809ad52 +0x2a:  call   *%edx
0809ad54 +0x2c:  mov    %eax,-0x20(%ebp)
0809ad57 +0x2f:  mov    0x10(%ebp),%edx
0809ad5a +0x32:  mov    %edx,%eax
0809ad5c +0x34:  sar    $0x1f,%edx
0809ad5f +0x37:  idivl  -0x20(%ebp)
0809ad62 +0x3a:  mov    %edx,%eax
0809ad64 +0x3c:  test   %eax,%eax
0809ad66 +0x3e:  setne  %al
0809ad69 +0x41:  test   %al,%al
0809ad6b +0x43:  je     0809ad77 <+0x4f>
0809ad6d +0x45:  mov    $0x70000006,%eax
0809ad72 +0x4a:  jmp    0809adfd <+0xd5>
0809ad77 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809ad7b +0x53:  jg     0809ad84 <+0x5c>
0809ad7d +0x55:  mov    $0x7000000a,%eax
0809ad82 +0x5a:  jmp    0809adfd <+0xd5>
0809ad84 +0x5c:  mov    0x8(%ebp),%eax
0809ad87 +0x5f:  mov    0x8(%eax),%eax
0809ad8a +0x62:  mov    %eax,-0x14(%ebp)
0809ad8d +0x65:  mov    0x8(%ebp),%eax
0809ad90 +0x68:  mov    (%eax),%eax
0809ad92 +0x6a:  add    $0x24,%eax
0809ad95 +0x6d:  mov    (%eax),%edx
0809ad97 +0x6f:  mov    0x8(%ebp),%eax
0809ad9a +0x72:  mov    %eax,(%esp)
0809ad9d +0x75:  call   *%edx
0809ad9f +0x77:  mov    %eax,-0x1c(%ebp)
0809ada2 +0x7a:  mov    0x10(%ebp),%eax
0809ada5 +0x7d:  mov    %eax,%edx
0809ada7 +0x7f:  sar    $0x1f,%edx
0809adaa +0x82:  idivl  -0x1c(%ebp)
0809adad +0x85:  mov    %eax,-0x10(%ebp)
0809adb0 +0x88:  movl   $0x0,-0xc(%ebp)
0809adb7 +0x8f:  jmp    0809adeb <+0xc3>
0809adb9 +0x91:  mov    -0x14(%ebp),%eax
0809adbc +0x94:  mov    %eax,0x8(%esp)
0809adc0 +0x98:  mov    0xc(%ebp),%eax
0809adc3 +0x9b:  mov    %eax,0x4(%esp)
0809adc7 +0x9f:  mov    0xc(%ebp),%eax
0809adca +0xa2:  mov    %eax,(%esp)
0809adcd +0xa5:  call   080b2a81 <_Z18khazad_ecb_decryptPKhPhP13symmetric_key>  ; khazad_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809add2 +0xaa:  mov    0x8(%ebp),%eax
0809add5 +0xad:  mov    (%eax),%eax
0809add7 +0xaf:  add    $0x24,%eax
0809adda +0xb2:  mov    (%eax),%edx
0809addc +0xb4:  mov    0x8(%ebp),%eax
0809addf +0xb7:  mov    %eax,(%esp)
0809ade2 +0xba:  call   *%edx
0809ade4 +0xbc:  add    %eax,0xc(%ebp)
0809ade7 +0xbf:  addl   $0x1,-0xc(%ebp)
0809adeb +0xc3:  mov    -0xc(%ebp),%eax
0809adee +0xc6:  cmp    -0x10(%ebp),%eax
0809adf1 +0xc9:  setl   %al
0809adf4 +0xcc:  test   %al,%al
0809adf6 +0xce:  jne    0809adb9 <+0x91>
0809adf8 +0xd0:  mov    $0x6fffffff,%eax
0809adfd +0xd5:  leave
0809adfe +0xd6:  ret
0809adff +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoKhazad::Decrypt @ 0x809ad28

/* CNCryptoKhazad::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKhazad::Decrypt(CNCryptoKhazad *this,uchar *param_1,int param_2)

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
          khazad_ecb_decrypt(param_1,param_1,psVar1);
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
