# encryptString

`_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc`

`WongWork::CSecurityCardCenter::encryptString(char const*, char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCardCenter` | `0x085fe2e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe2e2  _ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc
#           WongWork::CSecurityCardCenter::encryptString(char const*, char*)
# range [0x085fe2e2, 0x085fe443]
085fe2e2 +0x000:  push   %ebp
085fe2e3 +0x001:  mov    %esp,%ebp
085fe2e5 +0x003:  push   %edi
085fe2e6 +0x004:  push   %ebx
085fe2e7 +0x005:  sub    $0x220,%esp
085fe2ed +0x00b:  lea    -0x114(%ebp),%ebx
085fe2f3 +0x011:  mov    $0x0,%eax
085fe2f8 +0x016:  mov    $0x40,%edx
085fe2fd +0x01b:  mov    %ebx,%edi
085fe2ff +0x01d:  mov    %edx,%ecx
085fe301 +0x01f:  rep stos %eax,%es:(%edi)
085fe303 +0x021:  lea    -0x214(%ebp),%ebx
085fe309 +0x027:  mov    $0x0,%eax
085fe30e +0x02c:  mov    $0x40,%edx
085fe313 +0x031:  mov    %ebx,%edi
085fe315 +0x033:  mov    %edx,%ecx
085fe317 +0x035:  rep stos %eax,%es:(%edi)
085fe319 +0x037:  movl   $0x100,0x8(%esp)
085fe321 +0x03f:  mov    0xc(%ebp),%eax
085fe324 +0x042:  mov    %eax,0x4(%esp)
085fe328 +0x046:  lea    -0x114(%ebp),%eax
085fe32e +0x04c:  mov    %eax,(%esp)
085fe331 +0x04f:  call   0807d8d0 <_init+0x1c8>
085fe336 +0x054:  lea    -0x114(%ebp),%eax
085fe33c +0x05a:  mov    %eax,(%esp)
085fe33f +0x05d:  call   0807e3b0 <_init+0xca8>
085fe344 +0x062:  mov    %eax,-0x14(%ebp)
085fe347 +0x065:  movl   $0x0,-0x10(%ebp)
085fe34e +0x06c:  mov    0x8(%ebp),%eax
085fe351 +0x06f:  movl   $0x0,0x4(%esp)
085fe359 +0x077:  mov    %eax,(%esp)
085fe35c +0x07a:  call   080b4416 <_ZN7IMethod12GetBlockSizeEPj>  ; IMethod::GetBlockSize(unsigned int*)
085fe361 +0x07f:  mov    %eax,-0xc(%ebp)
085fe364 +0x082:  cmpl   $0x0,-0xc(%ebp)
085fe368 +0x086:  js     085fe39a <+0xb8>
085fe36a +0x088:  mov    -0x14(%ebp),%eax
085fe36d +0x08b:  mov    %eax,%edx
085fe36f +0x08d:  sar    $0x1f,%edx
085fe372 +0x090:  idivl  -0xc(%ebp)
085fe375 +0x093:  mov    %edx,%eax
085fe377 +0x095:  test   %eax,%eax
085fe379 +0x097:  je     085fe392 <+0xb0>
085fe37b +0x099:  mov    -0x14(%ebp),%eax
085fe37e +0x09c:  mov    %eax,%edx
085fe380 +0x09e:  sar    $0x1f,%edx
085fe383 +0x0a1:  idivl  -0xc(%ebp)
085fe386 +0x0a4:  add    $0x1,%eax
085fe389 +0x0a7:  imul   -0xc(%ebp),%eax
085fe38d +0x0ab:  mov    %eax,-0x10(%ebp)
085fe390 +0x0ae:  jmp    085fe3a0 <+0xbe>
085fe392 +0x0b0:  mov    -0x14(%ebp),%eax
085fe395 +0x0b3:  mov    %eax,-0x10(%ebp)
085fe398 +0x0b6:  jmp    085fe3a0 <+0xbe>
085fe39a +0x0b8:  mov    -0x14(%ebp),%eax
085fe39d +0x0bb:  mov    %eax,-0x10(%ebp)
085fe3a0 +0x0be:  cmpl   $0x0,-0xc(%ebp)
085fe3a4 +0x0c2:  js     085fe3ca <+0xe8>
085fe3a6 +0x0c4:  mov    0x8(%ebp),%eax
085fe3a9 +0x0c7:  movl   $0x0,0xc(%esp)
085fe3b1 +0x0cf:  mov    -0x14(%ebp),%edx
085fe3b4 +0x0d2:  mov    %edx,0x8(%esp)
085fe3b8 +0x0d6:  lea    -0x114(%ebp),%edx
085fe3be +0x0dc:  mov    %edx,0x4(%esp)
085fe3c2 +0x0e0:  mov    %eax,(%esp)
085fe3c5 +0x0e3:  call   080b44a6 <_ZN7IMethod3PadEPciPj>  ; IMethod::Pad(char*, int, unsigned int*)
085fe3ca +0x0e8:  mov    -0x10(%ebp),%edx
085fe3cd +0x0eb:  mov    0x8(%ebp),%eax
085fe3d0 +0x0ee:  mov    %edx,0xc(%esp)
085fe3d4 +0x0f2:  lea    -0x214(%ebp),%edx
085fe3da +0x0f8:  mov    %edx,0x8(%esp)
085fe3de +0x0fc:  lea    -0x114(%ebp),%edx
085fe3e4 +0x102:  mov    %edx,0x4(%esp)
085fe3e8 +0x106:  mov    %eax,(%esp)
085fe3eb +0x109:  call   080b7e00 <_ZN9CRijndael7EncryptEPKcPcj>  ; CRijndael::Encrypt(char const*, char*, unsigned int)
085fe3f0 +0x10e:  mov    -0x10(%ebp),%eax
085fe3f3 +0x111:  add    %eax,%eax
085fe3f5 +0x113:  add    $0x1,%eax
085fe3f8 +0x116:  mov    %eax,-0x14(%ebp)
085fe3fb +0x119:  lea    -0x214(%ebp),%eax
085fe401 +0x11f:  mov    0x10(%ebp),%edx
085fe404 +0x122:  mov    %edx,0x8(%esp)
085fe408 +0x126:  mov    -0x10(%ebp),%edx
085fe40b +0x129:  mov    %edx,0x4(%esp)
085fe40f +0x12d:  mov    %eax,(%esp)
085fe412 +0x130:  call   08108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>  ; DNFFLib::Binary2Hex(unsigned char const*, int, char*)
085fe417 +0x135:  mov    -0x14(%ebp),%eax
085fe41a +0x138:  add    0x10(%ebp),%eax
085fe41d +0x13b:  movb   $0x0,(%eax)
085fe420 +0x13e:  mov    0x10(%ebp),%ebx
085fe423 +0x141:  jmp    085fe437 <+0x155>
085fe425 +0x143:  mov    %eax,(%esp)
085fe428 +0x146:  call   08725ce0 <__cxa_begin_catch>
085fe42d +0x14b:  mov    $0x0,%ebx
085fe432 +0x150:  call   08725c30 <__cxa_end_catch>
085fe437 +0x155:  mov    %ebx,%eax
085fe439 +0x157:  add    $0x220,%esp
085fe43f +0x15d:  pop    %ebx
085fe440 +0x15e:  pop    %edi
085fe441 +0x15f:  pop    %ebp
085fe442 +0x160:  ret
085fe443 +0x161:  nop
```

## 反编译 C

```c
// WongWork::CSecurityCardCenter::encryptString @ 0x85fe2e2

/* WongWork::CSecurityCardCenter::encryptString(char const*, char*) */

char * __thiscall
WongWork::CSecurityCardCenter::encryptString(CSecurityCardCenter *this,char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uchar *puVar3;
  uchar local_218 [256];
  char local_118 [256];
  size_t local_18;
  size_t local_14;
  int local_10;
  
  pcVar2 = local_118;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  puVar3 = local_218;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3 = puVar3 + 4;
  }
  strncpy(local_118,param_1,0x100);
  local_18 = strlen(local_118);
  local_14 = 0;
                    /* try { // try from 085fe35c to 085fe416 has its CatchHandler @ 085fe425 */
  local_10 = IMethod::GetBlockSize((IMethod *)this,(uint *)0x0);
  if (local_10 < 0) {
    local_14 = local_18;
  }
  else if ((int)local_18 % local_10 == 0) {
    local_14 = local_18;
  }
  else {
    local_14 = ((int)local_18 / local_10 + 1) * local_10;
  }
  if (-1 < local_10) {
    IMethod::Pad((IMethod *)this,local_118,local_18,(uint *)0x0);
  }
  CRijndael::Encrypt((CRijndael *)this,local_118,(char *)local_218,local_14);
  local_18 = local_14 * 2 + 1;
  DNFFLib::Binary2Hex(local_218,local_14,param_2);
  param_2[local_18] = '\0';
  return param_2;
}
```
