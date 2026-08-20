# Decrypt

`_ZN12CNCryptoXTea7DecryptEPhi`

`CNCryptoXTea::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809dba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809dba0  _ZN12CNCryptoXTea7DecryptEPhi
#           CNCryptoXTea::Decrypt(unsigned char*, int)
# range [0x0809dba0, 0x0809dc77]
0809dba0 +0x00:  push   %ebp
0809dba1 +0x01:  mov    %esp,%ebp
0809dba3 +0x03:  sub    $0x38,%esp
0809dba6 +0x06:  mov    0x8(%ebp),%eax
0809dba9 +0x09:  mov    0x8(%eax),%eax
0809dbac +0x0c:  test   %eax,%eax
0809dbae +0x0e:  jne    0809dbba <+0x1a>
0809dbb0 +0x10:  mov    $0x7000000c,%eax
0809dbb5 +0x15:  jmp    0809dc75 <+0xd5>
0809dbba +0x1a:  mov    0x8(%ebp),%eax
0809dbbd +0x1d:  mov    (%eax),%eax
0809dbbf +0x1f:  add    $0x24,%eax
0809dbc2 +0x22:  mov    (%eax),%edx
0809dbc4 +0x24:  mov    0x8(%ebp),%eax
0809dbc7 +0x27:  mov    %eax,(%esp)
0809dbca +0x2a:  call   *%edx
0809dbcc +0x2c:  mov    %eax,-0x20(%ebp)
0809dbcf +0x2f:  mov    0x10(%ebp),%edx
0809dbd2 +0x32:  mov    %edx,%eax
0809dbd4 +0x34:  sar    $0x1f,%edx
0809dbd7 +0x37:  idivl  -0x20(%ebp)
0809dbda +0x3a:  mov    %edx,%eax
0809dbdc +0x3c:  test   %eax,%eax
0809dbde +0x3e:  setne  %al
0809dbe1 +0x41:  test   %al,%al
0809dbe3 +0x43:  je     0809dbef <+0x4f>
0809dbe5 +0x45:  mov    $0x70000006,%eax
0809dbea +0x4a:  jmp    0809dc75 <+0xd5>
0809dbef +0x4f:  cmpl   $0x0,0x10(%ebp)
0809dbf3 +0x53:  jg     0809dbfc <+0x5c>
0809dbf5 +0x55:  mov    $0x7000000a,%eax
0809dbfa +0x5a:  jmp    0809dc75 <+0xd5>
0809dbfc +0x5c:  mov    0x8(%ebp),%eax
0809dbff +0x5f:  mov    0x8(%eax),%eax
0809dc02 +0x62:  mov    %eax,-0x14(%ebp)
0809dc05 +0x65:  mov    0x8(%ebp),%eax
0809dc08 +0x68:  mov    (%eax),%eax
0809dc0a +0x6a:  add    $0x24,%eax
0809dc0d +0x6d:  mov    (%eax),%edx
0809dc0f +0x6f:  mov    0x8(%ebp),%eax
0809dc12 +0x72:  mov    %eax,(%esp)
0809dc15 +0x75:  call   *%edx
0809dc17 +0x77:  mov    %eax,-0x1c(%ebp)
0809dc1a +0x7a:  mov    0x10(%ebp),%eax
0809dc1d +0x7d:  mov    %eax,%edx
0809dc1f +0x7f:  sar    $0x1f,%edx
0809dc22 +0x82:  idivl  -0x1c(%ebp)
0809dc25 +0x85:  mov    %eax,-0x10(%ebp)
0809dc28 +0x88:  movl   $0x0,-0xc(%ebp)
0809dc2f +0x8f:  jmp    0809dc63 <+0xc3>
0809dc31 +0x91:  mov    -0x14(%ebp),%eax
0809dc34 +0x94:  mov    %eax,0x8(%esp)
0809dc38 +0x98:  mov    0xc(%ebp),%eax
0809dc3b +0x9b:  mov    %eax,0x4(%esp)
0809dc3f +0x9f:  mov    0xc(%ebp),%eax
0809dc42 +0xa2:  mov    %eax,(%esp)
0809dc45 +0xa5:  call   080c5786 <_Z16xtea_ecb_decryptPKhPhP13symmetric_key>  ; xtea_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809dc4a +0xaa:  mov    0x8(%ebp),%eax
0809dc4d +0xad:  mov    (%eax),%eax
0809dc4f +0xaf:  add    $0x24,%eax
0809dc52 +0xb2:  mov    (%eax),%edx
0809dc54 +0xb4:  mov    0x8(%ebp),%eax
0809dc57 +0xb7:  mov    %eax,(%esp)
0809dc5a +0xba:  call   *%edx
0809dc5c +0xbc:  add    %eax,0xc(%ebp)
0809dc5f +0xbf:  addl   $0x1,-0xc(%ebp)
0809dc63 +0xc3:  mov    -0xc(%ebp),%eax
0809dc66 +0xc6:  cmp    -0x10(%ebp),%eax
0809dc69 +0xc9:  setl   %al
0809dc6c +0xcc:  test   %al,%al
0809dc6e +0xce:  jne    0809dc31 <+0x91>
0809dc70 +0xd0:  mov    $0x6fffffff,%eax
0809dc75 +0xd5:  leave
0809dc76 +0xd6:  ret
0809dc77 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoXTea::Decrypt @ 0x809dba0

/* CNCryptoXTea::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoXTea::Decrypt(CNCryptoXTea *this,uchar *param_1,int param_2)

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
          xtea_ecb_decrypt(param_1,param_1,psVar1);
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
