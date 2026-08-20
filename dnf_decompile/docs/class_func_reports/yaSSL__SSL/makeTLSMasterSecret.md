# makeTLSMasterSecret

`_ZN5yaSSL3SSL19makeTLSMasterSecretEv`

`yaSSL::SSL::makeTLSMasterSecret()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874fd20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874fd20  _ZN5yaSSL3SSL19makeTLSMasterSecretEv
#           yaSSL::SSL::makeTLSMasterSecret()
# range [0x0874fd20, 0x0874fe2c]
0874fd20 +0x000:  push   %ebp
0874fd21 +0x001:  mov    %esp,%ebp
0874fd23 +0x003:  push   %edi
0874fd24 +0x004:  push   %esi
0874fd25 +0x005:  push   %ebx
0874fd26 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874fd2b +0x00b:  add    $0xc1ce6d,%ebx
0874fd31 +0x011:  sub    $0x7c,%esp
0874fd34 +0x014:  mov    0x8(%ebp),%esi
0874fd37 +0x017:  add    $0x68,%esi
0874fd3a +0x01a:  mov    %esi,(%esp)
0874fd3d +0x01d:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fd42 +0x022:  lea    -0x58(%ebp),%edx
0874fd45 +0x025:  lea    0x34(%eax),%ecx
0874fd48 +0x028:  mov    0x34(%eax),%eax
0874fd4b +0x02b:  mov    %eax,-0x58(%ebp)
0874fd4e +0x02e:  mov    0x4(%ecx),%eax
0874fd51 +0x031:  mov    %eax,-0x54(%ebp)
0874fd54 +0x034:  mov    0x8(%ecx),%eax
0874fd57 +0x037:  mov    %eax,-0x50(%ebp)
0874fd5a +0x03a:  mov    0xc(%ecx),%eax
0874fd5d +0x03d:  mov    %eax,-0x4c(%ebp)
0874fd60 +0x040:  mov    0x10(%ecx),%eax
0874fd63 +0x043:  mov    %eax,-0x48(%ebp)
0874fd66 +0x046:  mov    0x14(%ecx),%eax
0874fd69 +0x049:  mov    %eax,-0x44(%ebp)
0874fd6c +0x04c:  mov    0x18(%ecx),%eax
0874fd6f +0x04f:  mov    %eax,-0x40(%ebp)
0874fd72 +0x052:  mov    0x1c(%ecx),%eax
0874fd75 +0x055:  mov    %edx,-0x5c(%ebp)
0874fd78 +0x058:  mov    %esi,(%esp)
0874fd7b +0x05b:  mov    %eax,-0x3c(%ebp)
0874fd7e +0x05e:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fd83 +0x063:  lea    0x54(%eax),%ecx
0874fd86 +0x066:  mov    0x54(%eax),%eax
0874fd89 +0x069:  mov    %eax,-0x38(%ebp)
0874fd8c +0x06c:  mov    0x4(%ecx),%eax
0874fd8f +0x06f:  mov    %eax,-0x34(%ebp)
0874fd92 +0x072:  mov    0x8(%ecx),%eax
0874fd95 +0x075:  mov    %eax,-0x30(%ebp)
0874fd98 +0x078:  mov    0xc(%ecx),%eax
0874fd9b +0x07b:  mov    %eax,-0x2c(%ebp)
0874fd9e +0x07e:  mov    0x10(%ecx),%eax
0874fda1 +0x081:  mov    %eax,-0x28(%ebp)
0874fda4 +0x084:  mov    0x14(%ecx),%eax
0874fda7 +0x087:  mov    %eax,-0x24(%ebp)
0874fdaa +0x08a:  mov    0x18(%ecx),%eax
0874fdad +0x08d:  mov    %eax,-0x20(%ebp)
0874fdb0 +0x090:  mov    0x1c(%ecx),%eax
0874fdb3 +0x093:  mov    %esi,(%esp)
0874fdb6 +0x096:  mov    %eax,-0x1c(%ebp)
0874fdb9 +0x099:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fdbe +0x09e:  mov    0x124(%eax),%edi
0874fdc4 +0x0a4:  mov    %esi,(%esp)
0874fdc7 +0x0a7:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fdcc +0x0ac:  mov    (%eax),%ecx
0874fdce +0x0ae:  mov    %esi,(%esp)
0874fdd1 +0x0b1:  mov    %ecx,-0x60(%ebp)
0874fdd4 +0x0b4:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874fdd9 +0x0b9:  mov    -0x5c(%ebp),%edx
0874fddc +0x0bc:  mov    -0x60(%ebp),%ecx
0874fddf +0x0bf:  mov    %edi,0xc(%esp)
0874fde3 +0x0c3:  movl   $0x40,0x1c(%esp)
0874fdeb +0x0cb:  mov    %edx,0x18(%esp)
0874fdef +0x0cf:  lea    -0x6679da(%ebx),%edx
0874fdf5 +0x0d5:  mov    %edx,0x10(%esp)
0874fdf9 +0x0d9:  add    $0x4,%eax
0874fdfc +0x0dc:  mov    %ecx,0x8(%esp)
0874fe00 +0x0e0:  mov    %eax,(%esp)
0874fe03 +0x0e3:  movl   $0xd,0x14(%esp)
0874fe0b +0x0eb:  movl   $0x30,0x4(%esp)
0874fe13 +0x0f3:  call   0879e980 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j>  ; yaSSL::PRF(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int)
0874fe18 +0x0f8:  mov    0x8(%ebp),%eax
0874fe1b +0x0fb:  mov    %eax,(%esp)
0874fe1e +0x0fe:  call   0874fbc0 <_ZN5yaSSL3SSL13deriveTLSKeysEv>  ; yaSSL::SSL::deriveTLSKeys()
0874fe23 +0x103:  add    $0x7c,%esp
0874fe26 +0x106:  pop    %ebx
0874fe27 +0x107:  pop    %esi
0874fe28 +0x108:  pop    %edi
0874fe29 +0x109:  pop    %ebp
0874fe2a +0x10a:  ret
0874fe2b +0x10b:  nop
0874fe2c +0x10c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::makeTLSMasterSecret @ 0x874fd20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::makeTLSMasterSecret() */

void __thiscall yaSSL::SSL::makeTLSMasterSecret(SSL *this)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  undefined4 *puVar4;
  Security *this_00;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x874fd2b;
  this_00 = (Security *)(this + 0x68);
  iVar3 = Security::get_connection(this_00);
  local_5c = *(undefined4 *)(iVar3 + 0x34);
  local_58 = *(undefined4 *)(iVar3 + 0x38);
  local_54 = *(undefined4 *)(iVar3 + 0x3c);
  local_50 = *(undefined4 *)(iVar3 + 0x40);
  local_4c = *(undefined4 *)(iVar3 + 0x44);
  local_48 = *(undefined4 *)(iVar3 + 0x48);
  local_44 = *(undefined4 *)(iVar3 + 0x4c);
  local_40 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = Security::get_connection(this_00);
  local_3c = *(undefined4 *)(iVar3 + 0x54);
  local_38 = *(undefined4 *)(iVar3 + 0x58);
  local_34 = *(undefined4 *)(iVar3 + 0x5c);
  local_30 = *(undefined4 *)(iVar3 + 0x60);
  local_2c = *(undefined4 *)(iVar3 + 100);
  local_28 = *(undefined4 *)(iVar3 + 0x68);
  local_24 = *(undefined4 *)(iVar3 + 0x6c);
  local_20 = *(undefined4 *)(iVar3 + 0x70);
  iVar3 = Security::get_connection(this_00);
  uVar1 = *(uint *)(iVar3 + 0x124);
  puVar4 = (undefined4 *)Security::get_connection(this_00);
  puVar2 = (uchar *)*puVar4;
  iVar3 = Security::use_connection(this_00);
  PRF((uchar *)(iVar3 + 4),0x30,puVar2,uVar1,(uchar *)"master secret",0xd,(uchar *)&local_5c,0x40);
  deriveTLSKeys(this);
  return;
}
```
