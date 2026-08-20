# Encrypt

`_ZN14CNCryptoKhazad7EncryptEPKhiPhi`

`CNCryptoKhazad::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809ae00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ae00  _ZN14CNCryptoKhazad7EncryptEPKhiPhi
#           CNCryptoKhazad::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809ae00, 0x0809aef1]
0809ae00 +0x00:  push   %ebp
0809ae01 +0x01:  mov    %esp,%ebp
0809ae03 +0x03:  sub    $0x38,%esp
0809ae06 +0x06:  mov    0x8(%ebp),%eax
0809ae09 +0x09:  mov    0x8(%eax),%eax
0809ae0c +0x0c:  test   %eax,%eax
0809ae0e +0x0e:  jne    0809ae1a <+0x1a>
0809ae10 +0x10:  mov    $0x7000000c,%eax
0809ae15 +0x15:  jmp    0809aeef <+0xef>
0809ae1a +0x1a:  mov    0x8(%ebp),%eax
0809ae1d +0x1d:  mov    (%eax),%eax
0809ae1f +0x1f:  add    $0x24,%eax
0809ae22 +0x22:  mov    (%eax),%edx
0809ae24 +0x24:  mov    0x8(%ebp),%eax
0809ae27 +0x27:  mov    %eax,(%esp)
0809ae2a +0x2a:  call   *%edx
0809ae2c +0x2c:  mov    %eax,-0x20(%ebp)
0809ae2f +0x2f:  mov    0x10(%ebp),%edx
0809ae32 +0x32:  mov    %edx,%eax
0809ae34 +0x34:  sar    $0x1f,%edx
0809ae37 +0x37:  idivl  -0x20(%ebp)
0809ae3a +0x3a:  mov    %edx,%eax
0809ae3c +0x3c:  test   %eax,%eax
0809ae3e +0x3e:  setne  %al
0809ae41 +0x41:  test   %al,%al
0809ae43 +0x43:  je     0809ae4f <+0x4f>
0809ae45 +0x45:  mov    $0x70000006,%eax
0809ae4a +0x4a:  jmp    0809aeef <+0xef>
0809ae4f +0x4f:  mov    0x10(%ebp),%eax
0809ae52 +0x52:  cmp    0x18(%ebp),%eax
0809ae55 +0x55:  jle    0809ae61 <+0x61>
0809ae57 +0x57:  mov    $0x7000000a,%eax
0809ae5c +0x5c:  jmp    0809aeef <+0xef>
0809ae61 +0x61:  mov    0x8(%ebp),%eax
0809ae64 +0x64:  mov    0x8(%eax),%eax
0809ae67 +0x67:  mov    %eax,-0x14(%ebp)
0809ae6a +0x6a:  mov    0x8(%ebp),%eax
0809ae6d +0x6d:  mov    (%eax),%eax
0809ae6f +0x6f:  add    $0x24,%eax
0809ae72 +0x72:  mov    (%eax),%edx
0809ae74 +0x74:  mov    0x8(%ebp),%eax
0809ae77 +0x77:  mov    %eax,(%esp)
0809ae7a +0x7a:  call   *%edx
0809ae7c +0x7c:  mov    %eax,-0x1c(%ebp)
0809ae7f +0x7f:  mov    0x10(%ebp),%eax
0809ae82 +0x82:  mov    %eax,%edx
0809ae84 +0x84:  sar    $0x1f,%edx
0809ae87 +0x87:  idivl  -0x1c(%ebp)
0809ae8a +0x8a:  mov    %eax,-0x10(%ebp)
0809ae8d +0x8d:  movl   $0x0,-0xc(%ebp)
0809ae94 +0x94:  jmp    0809aedd <+0xdd>
0809ae96 +0x96:  mov    -0x14(%ebp),%eax
0809ae99 +0x99:  mov    %eax,0x8(%esp)
0809ae9d +0x9d:  mov    0x14(%ebp),%eax
0809aea0 +0xa0:  mov    %eax,0x4(%esp)
0809aea4 +0xa4:  mov    0xc(%ebp),%eax
0809aea7 +0xa7:  mov    %eax,(%esp)
0809aeaa +0xaa:  call   080b2a5b <_Z18khazad_ecb_encryptPKhPhP13symmetric_key>  ; khazad_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809aeaf +0xaf:  mov    0x8(%ebp),%eax
0809aeb2 +0xb2:  mov    (%eax),%eax
0809aeb4 +0xb4:  add    $0x24,%eax
0809aeb7 +0xb7:  mov    (%eax),%edx
0809aeb9 +0xb9:  mov    0x8(%ebp),%eax
0809aebc +0xbc:  mov    %eax,(%esp)
0809aebf +0xbf:  call   *%edx
0809aec1 +0xc1:  add    %eax,0xc(%ebp)
0809aec4 +0xc4:  mov    0x8(%ebp),%eax
0809aec7 +0xc7:  mov    (%eax),%eax
0809aec9 +0xc9:  add    $0x24,%eax
0809aecc +0xcc:  mov    (%eax),%edx
0809aece +0xce:  mov    0x8(%ebp),%eax
0809aed1 +0xd1:  mov    %eax,(%esp)
0809aed4 +0xd4:  call   *%edx
0809aed6 +0xd6:  add    %eax,0x14(%ebp)
0809aed9 +0xd9:  addl   $0x1,-0xc(%ebp)
0809aedd +0xdd:  mov    -0xc(%ebp),%eax
0809aee0 +0xe0:  cmp    -0x10(%ebp),%eax
0809aee3 +0xe3:  setl   %al
0809aee6 +0xe6:  test   %al,%al
0809aee8 +0xe8:  jne    0809ae96 <+0x96>
0809aeea +0xea:  mov    $0x6fffffff,%eax
0809aeef +0xef:  leave
0809aef0 +0xf0:  ret
0809aef1 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoKhazad::Encrypt @ 0x809ae00

/* CNCryptoKhazad::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKhazad::Encrypt(CNCryptoKhazad *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          khazad_ecb_encrypt(param_1,param_3,psVar1);
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
