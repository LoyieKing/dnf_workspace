# TLS_hmac

`_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb`

`yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879f370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879f370  _ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb
#           yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
# range [0x0879f370, 0x0879f57b]
0879f370 +0x000:  push   %ebp
0879f371 +0x001:  mov    %esp,%ebp
0879f373 +0x003:  push   %edi
0879f374 +0x004:  push   %esi
0879f375 +0x005:  push   %ebx
0879f376 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879f37b +0x00b:  add    $0xbcd81d,%ebx
0879f381 +0x011:  sub    $0x3c,%esp
0879f384 +0x014:  movzbl 0x1c(%ebp),%esi
0879f388 +0x018:  lea    -0x1a(%ebp),%eax
0879f38b +0x01b:  mov    0x8(%ebp),%edi
0879f38e +0x01e:  mov    %eax,0x4(%esp)
0879f392 +0x022:  movzwl 0x14(%ebp),%eax
0879f396 +0x026:  movl   $0x0,-0x27(%ebp)
0879f39d +0x02d:  and    $0xff,%esi
0879f3a3 +0x033:  movl   $0x0,-0x23(%ebp)
0879f3aa +0x03a:  mov    %eax,(%esp)
0879f3ad +0x03d:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0879f3b2 +0x042:  mov    %esi,0x4(%esp)
0879f3b6 +0x046:  mov    %edi,(%esp)
0879f3b9 +0x049:  call   0874ed10 <_ZN5yaSSL3SSL16get_SEQIncrementEb>  ; yaSSL::SSL::get_SEQIncrement(bool)
0879f3be +0x04e:  lea    -0x23(%ebp),%edx
0879f3c1 +0x051:  mov    %edx,0x4(%esp)
0879f3c5 +0x055:  mov    %eax,(%esp)
0879f3c8 +0x058:  call   0874de10 <_ZN5yaSSL6c32toaEjPh>  ; yaSSL::c32toa(unsigned int, unsigned char*)
0879f3cd +0x05d:  mov    %edi,(%esp)
0879f3d0 +0x060:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f3d5 +0x065:  mov    %eax,(%esp)
0879f3d8 +0x068:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879f3dd +0x06d:  mov    0x10(%eax),%eax
0879f3e0 +0x070:  cmp    $0x2,%eax
0879f3e3 +0x073:  je     0879f538 <+0x1c8>
0879f3e9 +0x079:  cmp    $0x3,%eax
0879f3ec +0x07c:  je     0879f4f0 <+0x180>
0879f3f2 +0x082:  mov    %esi,0x4(%esp)
0879f3f6 +0x086:  mov    %edi,(%esp)
0879f3f9 +0x089:  call   0874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>  ; yaSSL::SSL::get_macSecret(bool)
0879f3fe +0x08e:  movb   $0x0,0x4(%esp)
0879f403 +0x093:  movl   $0x8,(%esp)
0879f40a +0x09a:  mov    %eax,%esi
0879f40c +0x09c:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879f411 +0x0a1:  mov    %esi,0x4(%esp)
0879f415 +0x0a5:  movl   $0x10,0x8(%esp)
0879f41d +0x0ad:  mov    %eax,(%esp)
0879f420 +0x0b0:  mov    %eax,-0x2c(%ebp)
0879f423 +0x0b3:  call   08799ce0 <_ZN5yaSSL8HMAC_MD5C1EPKhj>  ; yaSSL::HMAC_MD5::HMAC_MD5(unsigned char const*, unsigned int)
0879f428 +0x0b8:  mov    -0x2c(%ebp),%eax
0879f42b +0x0bb:  test   %eax,%eax
0879f42d +0x0bd:  mov    %eax,%esi
0879f42f +0x0bf:  je     0879f442 <+0xd2>
0879f431 +0x0c1:  movb   $0x0,0x4(%esp)
0879f436 +0x0c6:  movl   $0x0,(%esp)
0879f43d +0x0cd:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879f442 +0x0d2:  mov    (%esi),%eax
0879f444 +0x0d4:  lea    -0x27(%ebp),%edx
0879f447 +0x0d7:  mov    %edx,0x4(%esp)
0879f44b +0x0db:  mov    %esi,(%esp)
0879f44e +0x0de:  movl   $0x8,0x8(%esp)
0879f456 +0x0e6:  call   *0x8(%eax)
0879f459 +0x0e9:  mov    0x18(%ebp),%eax
0879f45c +0x0ec:  mov    %edi,(%esp)
0879f45f +0x0ef:  mov    %al,-0x1f(%ebp)
0879f462 +0x0f2:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f467 +0x0f7:  mov    %eax,(%esp)
0879f46a +0x0fa:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879f46f +0x0ff:  movzbl 0x12e(%eax),%eax
0879f476 +0x106:  mov    %edi,(%esp)
0879f479 +0x109:  mov    %al,-0x1e(%ebp)
0879f47c +0x10c:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f481 +0x111:  mov    %eax,(%esp)
0879f484 +0x114:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879f489 +0x119:  lea    -0x1f(%ebp),%edx
0879f48c +0x11c:  movzbl 0x12f(%eax),%eax
0879f493 +0x123:  mov    %al,-0x1d(%ebp)
0879f496 +0x126:  movzwl -0x1a(%ebp),%eax
0879f49a +0x12a:  mov    %ax,-0x1c(%ebp)
0879f49e +0x12e:  mov    (%esi),%eax
0879f4a0 +0x130:  mov    %edx,0x4(%esp)
0879f4a4 +0x134:  mov    %esi,(%esp)
0879f4a7 +0x137:  movl   $0x5,0x8(%esp)
0879f4af +0x13f:  call   *0x8(%eax)
0879f4b2 +0x142:  mov    0x14(%ebp),%edx
0879f4b5 +0x145:  mov    (%esi),%eax
0879f4b7 +0x147:  mov    %esi,(%esp)
0879f4ba +0x14a:  mov    %edx,0xc(%esp)
0879f4be +0x14e:  mov    0x10(%ebp),%edx
0879f4c1 +0x151:  mov    %edx,0x8(%esp)
0879f4c5 +0x155:  mov    0xc(%ebp),%edx
0879f4c8 +0x158:  mov    %edx,0x4(%esp)
0879f4cc +0x15c:  call   *0x4(%eax)
0879f4cf +0x15f:  mov    (%esi),%eax
0879f4d1 +0x161:  mov    %esi,(%esp)
0879f4d4 +0x164:  call   *0x14(%eax)
0879f4d7 +0x167:  mov    %esi,(%esp)
0879f4da +0x16a:  movb   $0x0,0x4(%esp)
0879f4df +0x16f:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879f4e4 +0x174:  add    $0x3c,%esp
0879f4e7 +0x177:  pop    %ebx
0879f4e8 +0x178:  pop    %esi
0879f4e9 +0x179:  pop    %edi
0879f4ea +0x17a:  pop    %ebp
0879f4eb +0x17b:  ret
0879f4ec +0x17c:  lea    0x0(%esi,%eiz,1),%esi
0879f4f0 +0x180:  mov    %esi,0x4(%esp)
0879f4f4 +0x184:  mov    %edi,(%esp)
0879f4f7 +0x187:  call   0874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>  ; yaSSL::SSL::get_macSecret(bool)
0879f4fc +0x18c:  movb   $0x0,0x4(%esp)
0879f501 +0x191:  movl   $0x8,(%esp)
0879f508 +0x198:  mov    %eax,%esi
0879f50a +0x19a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879f50f +0x19f:  mov    %esi,0x4(%esp)
0879f513 +0x1a3:  movl   $0x14,0x8(%esp)
0879f51b +0x1ab:  mov    %eax,(%esp)
0879f51e +0x1ae:  mov    %eax,-0x2c(%ebp)
0879f521 +0x1b1:  call   08799740 <_ZN5yaSSL8HMAC_RMDC1EPKhj>  ; yaSSL::HMAC_RMD::HMAC_RMD(unsigned char const*, unsigned int)
0879f526 +0x1b6:  mov    -0x2c(%ebp),%eax
0879f529 +0x1b9:  test   %eax,%eax
0879f52b +0x1bb:  mov    %eax,%esi
0879f52d +0x1bd:  jne    0879f431 <+0xc1>
0879f533 +0x1c3:  jmp    0879f442 <+0xd2>
0879f538 +0x1c8:  mov    %esi,0x4(%esp)
0879f53c +0x1cc:  mov    %edi,(%esp)
0879f53f +0x1cf:  call   0874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>  ; yaSSL::SSL::get_macSecret(bool)
0879f544 +0x1d4:  movb   $0x0,0x4(%esp)
0879f549 +0x1d9:  movl   $0x8,(%esp)
0879f550 +0x1e0:  mov    %eax,%esi
0879f552 +0x1e2:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879f557 +0x1e7:  mov    %esi,0x4(%esp)
0879f55b +0x1eb:  movl   $0x14,0x8(%esp)
0879f563 +0x1f3:  mov    %eax,(%esp)
0879f566 +0x1f6:  mov    %eax,-0x2c(%ebp)
0879f569 +0x1f9:  call   08799a10 <_ZN5yaSSL8HMAC_SHAC1EPKhj>  ; yaSSL::HMAC_SHA::HMAC_SHA(unsigned char const*, unsigned int)
0879f56e +0x1fe:  mov    -0x2c(%ebp),%eax
0879f571 +0x201:  test   %eax,%eax
0879f573 +0x203:  mov    %eax,%esi
0879f575 +0x205:  jne    0879f431 <+0xc1>
0879f57b +0x20b:  jmp    0879f442 <+0xd2>
```

## 反编译 C

```c
// yaSSL::TLS_hmac @ 0x879f370

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int,
   yaSSL::ContentType, bool) */

void yaSSL::TLS_hmac(SSL *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                    undefined1 param_5,bool param_6)

{
  uint uVar1;
  Security *pSVar2;
  int iVar3;
  uchar *puVar4;
  HMAC_MD5 *this;
  uint uVar5;
  undefined4 local_2b;
  undefined4 local_27;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined2 local_20;
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x879f37b;
  uVar5 = 0;
  local_2b = 0;
  local_27 = 0;
  c16toa((ushort)param_4,(uchar *)local_1e);
  uVar1 = SSL::get_SEQIncrement(param_1,param_6);
  c32toa(uVar1,(uchar *)&local_27);
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_parms(pSVar2);
  if (*(int *)(iVar3 + 0x10) == 2) {
    puVar4 = (uchar *)SSL::get_macSecret(param_1,param_6);
    this = operator_new(8,uVar5 & 0xffffff00);
    HMAC_SHA::HMAC_SHA((HMAC_SHA *)this,puVar4,0x14);
  }
  else if (*(int *)(iVar3 + 0x10) == 3) {
    puVar4 = (uchar *)SSL::get_macSecret(param_1,param_6);
    this = operator_new(8,uVar5 & 0xffffff00);
    HMAC_RMD::HMAC_RMD((HMAC_RMD *)this,puVar4,0x14);
  }
  else {
    puVar4 = (uchar *)SSL::get_macSecret(param_1,param_6);
    this = operator_new(8,uVar5 & 0xffffff00);
    HMAC_MD5::HMAC_MD5(this,puVar4,0x10);
  }
  if (this != (HMAC_MD5 *)0x0) {
    operator_delete(0,(uint)puVar4 & 0xffffff00);
  }
  (**(code **)(*(int *)this + 8))(this,&local_2b,8);
  local_23 = param_5;
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_connection(pSVar2);
  local_22 = *(undefined1 *)(iVar3 + 0x12e);
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_connection(pSVar2);
  local_21 = *(undefined1 *)(iVar3 + 0x12f);
  local_20 = local_1e[0];
  (**(code **)(*(int *)this + 8))(this,&local_23,5);
  (**(code **)(*(int *)this + 4))(this,param_2,param_3,param_4);
  (**(code **)(*(int *)this + 0x14))(this);
  operator_delete(this,param_2 & 0xffffff00);
  return;
}
```
