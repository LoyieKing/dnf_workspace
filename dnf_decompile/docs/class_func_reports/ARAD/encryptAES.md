# encryptAES

`_ZN4ARAD10encryptAESEP9CRijndaelPcS2_`

`ARAD::encryptAES(CRijndael*, char*, char*)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x0819e997` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e997  _ZN4ARAD10encryptAESEP9CRijndaelPcS2_
#           ARAD::encryptAES(CRijndael*, char*, char*)
# range [0x0819e997, 0x0819eae3]
0819e997 +0x000:  push   %ebp
0819e998 +0x001:  mov    %esp,%ebp
0819e99a +0x003:  sub    $0xc8,%esp
0819e9a0 +0x009:  mov    0xc(%ebp),%eax
0819e9a3 +0x00c:  mov    %eax,(%esp)
0819e9a6 +0x00f:  call   0807e3b0 <_init+0xca8>
0819e9ab +0x014:  mov    %eax,-0x18(%ebp)
0819e9ae +0x017:  movl   $0x0,-0x14(%ebp)
0819e9b5 +0x01e:  mov    0x8(%ebp),%eax
0819e9b8 +0x021:  movl   $0x0,0x4(%esp)
0819e9c0 +0x029:  mov    %eax,(%esp)
0819e9c3 +0x02c:  call   080b4416 <_ZN7IMethod12GetBlockSizeEPj>  ; IMethod::GetBlockSize(unsigned int*)
0819e9c8 +0x031:  mov    %eax,-0x10(%ebp)
0819e9cb +0x034:  cmpl   $0x0,-0x10(%ebp)
0819e9cf +0x038:  js     0819ea01 <+0x6a>
0819e9d1 +0x03a:  mov    -0x18(%ebp),%eax
0819e9d4 +0x03d:  mov    %eax,%edx
0819e9d6 +0x03f:  sar    $0x1f,%edx
0819e9d9 +0x042:  idivl  -0x10(%ebp)
0819e9dc +0x045:  mov    %edx,%eax
0819e9de +0x047:  test   %eax,%eax
0819e9e0 +0x049:  je     0819e9f9 <+0x62>
0819e9e2 +0x04b:  mov    -0x18(%ebp),%eax
0819e9e5 +0x04e:  mov    %eax,%edx
0819e9e7 +0x050:  sar    $0x1f,%edx
0819e9ea +0x053:  idivl  -0x10(%ebp)
0819e9ed +0x056:  add    $0x1,%eax
0819e9f0 +0x059:  imul   -0x10(%ebp),%eax
0819e9f4 +0x05d:  mov    %eax,-0x14(%ebp)
0819e9f7 +0x060:  jmp    0819ea07 <+0x70>
0819e9f9 +0x062:  mov    -0x18(%ebp),%eax
0819e9fc +0x065:  mov    %eax,-0x14(%ebp)
0819e9ff +0x068:  jmp    0819ea07 <+0x70>
0819ea01 +0x06a:  mov    -0x18(%ebp),%eax
0819ea04 +0x06d:  mov    %eax,-0x14(%ebp)
0819ea07 +0x070:  cmpl   $0x0,-0x10(%ebp)
0819ea0b +0x074:  js     0819ea2e <+0x97>
0819ea0d +0x076:  mov    0x8(%ebp),%eax
0819ea10 +0x079:  movl   $0x0,0xc(%esp)
0819ea18 +0x081:  mov    -0x18(%ebp),%edx
0819ea1b +0x084:  mov    %edx,0x8(%esp)
0819ea1f +0x088:  mov    0xc(%ebp),%edx
0819ea22 +0x08b:  mov    %edx,0x4(%esp)
0819ea26 +0x08f:  mov    %eax,(%esp)
0819ea29 +0x092:  call   080b44a6 <_ZN7IMethod3PadEPciPj>  ; IMethod::Pad(char*, int, unsigned int*)
0819ea2e +0x097:  mov    0x8(%ebp),%eax
0819ea31 +0x09a:  mov    (%eax),%eax
0819ea33 +0x09c:  add    $0xc,%eax
0819ea36 +0x09f:  mov    (%eax),%edx
0819ea38 +0x0a1:  mov    -0x14(%ebp),%eax
0819ea3b +0x0a4:  mov    %eax,0xc(%esp)
0819ea3f +0x0a8:  lea    -0x9c(%ebp),%eax
0819ea45 +0x0ae:  mov    %eax,0x8(%esp)
0819ea49 +0x0b2:  mov    0xc(%ebp),%eax
0819ea4c +0x0b5:  mov    %eax,0x4(%esp)
0819ea50 +0x0b9:  mov    0x8(%ebp),%eax
0819ea53 +0x0bc:  mov    %eax,(%esp)
0819ea56 +0x0bf:  call   *%edx
0819ea58 +0x0c1:  mov    %eax,-0xc(%ebp)
0819ea5b +0x0c4:  cmpl   $0x6fffffff,-0xc(%ebp)
0819ea62 +0x0cb:  je     0819eaaf <+0x118>
0819ea64 +0x0cd:  movl   $"Encrypt Error",0x1c(%esp)
0819ea6c +0x0d5:  movl   $0x52,0x18(%esp)
0819ea74 +0x0dd:  movl   $&_ZZN4ARAD10encryptAESEP9CRijndaelPcS2_E19__PRETTY_FUNCTION__,0x14(%esp)
0819ea7c +0x0e5:  movl   $"[%s][%d][%s]",0x10(%esp)
0819ea84 +0x0ed:  movl   $0x52,0xc(%esp)
0819ea8c +0x0f5:  movl   $&_ZZN4ARAD10encryptAESEP9CRijndaelPcS2_E19__PRETTY_FUNCTION__,0x8(%esp)
0819ea94 +0x0fd:  movl   $"localjapan/Arad_OS.cpp",0x4(%esp)
0819ea9c +0x105:  movl   $0x1,(%esp)
0819eaa3 +0x10c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819eaa8 +0x111:  mov    $0x0,%eax
0819eaad +0x116:  jmp    0819eae2 <+0x14b>
0819eaaf +0x118:  mov    -0x14(%ebp),%eax
0819eab2 +0x11b:  add    %eax,%eax
0819eab4 +0x11d:  add    $0x1,%eax
0819eab7 +0x120:  mov    %eax,-0x18(%ebp)
0819eaba +0x123:  lea    -0x9c(%ebp),%eax
0819eac0 +0x129:  mov    0x10(%ebp),%edx
0819eac3 +0x12c:  mov    %edx,0x8(%esp)
0819eac7 +0x130:  mov    -0x14(%ebp),%edx
0819eaca +0x133:  mov    %edx,0x4(%esp)
0819eace +0x137:  mov    %eax,(%esp)
0819ead1 +0x13a:  call   08108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>  ; DNFFLib::Binary2Hex(unsigned char const*, int, char*)
0819ead6 +0x13f:  mov    -0x18(%ebp),%eax
0819ead9 +0x142:  add    0x10(%ebp),%eax
0819eadc +0x145:  movb   $0x0,(%eax)
0819eadf +0x148:  mov    0x10(%ebp),%eax
0819eae2 +0x14b:  leave
0819eae3 +0x14c:  ret
```

## 反编译 C

```c
// ARAD::encryptAES @ 0x819e997

/* ARAD::encryptAES(CRijndael*, char*, char*) */

char * ARAD::encryptAES(CRijndael *param_1,char *param_2,char *param_3)

{
  uchar local_a0 [132];
  size_t local_1c;
  size_t local_18;
  int local_14;
  int local_10;
  
  local_1c = strlen(param_2);
  local_18 = 0;
  local_14 = IMethod::GetBlockSize((IMethod *)param_1,(uint *)0x0);
  if (local_14 < 0) {
    local_18 = local_1c;
  }
  else if ((int)local_1c % local_14 == 0) {
    local_18 = local_1c;
  }
  else {
    local_18 = ((int)local_1c / local_14 + 1) * local_14;
  }
  if (-1 < local_14) {
    IMethod::Pad((IMethod *)param_1,param_2,local_1c,(uint *)0x0);
  }
  local_10 = (**(code **)(*(int *)param_1 + 0xc))(param_1,param_2,local_a0,local_18);
  if (local_10 == 0x6fffffff) {
    local_1c = local_18 * 2 + 1;
    DNFFLib::Binary2Hex(local_a0,local_18,param_3);
    param_3[local_1c] = '\0';
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_OS.cpp","char* ARAD::encryptAES(CRijndael*, char*, char*)",0x52,
               "[%s][%d][%s]","char* ARAD::encryptAES(CRijndael*, char*, char*)",0x52,
               "Encrypt Error");
    param_3 = (char *)0x0;
  }
  return param_3;
}
```
