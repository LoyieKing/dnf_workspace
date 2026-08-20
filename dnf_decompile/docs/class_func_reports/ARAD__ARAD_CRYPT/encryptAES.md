# encryptAES

`_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_`

`ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*)`

| 类 | 地址 |
|---|---|
| `ARAD::ARAD_CRYPT` | `0x08184abc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184abc  _ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_
#           ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*)
# range [0x08184abc, 0x08184c08]
08184abc +0x000:  push   %ebp
08184abd +0x001:  mov    %esp,%ebp
08184abf +0x003:  sub    $0xc8,%esp
08184ac5 +0x009:  mov    0xc(%ebp),%eax
08184ac8 +0x00c:  mov    %eax,(%esp)
08184acb +0x00f:  call   0807e3b0 <_init+0xca8>
08184ad0 +0x014:  mov    %eax,-0x18(%ebp)
08184ad3 +0x017:  movl   $0x0,-0x14(%ebp)
08184ada +0x01e:  mov    0x8(%ebp),%eax
08184add +0x021:  movl   $0x0,0x4(%esp)
08184ae5 +0x029:  mov    %eax,(%esp)
08184ae8 +0x02c:  call   080b4416 <_ZN7IMethod12GetBlockSizeEPj>  ; IMethod::GetBlockSize(unsigned int*)
08184aed +0x031:  mov    %eax,-0x10(%ebp)
08184af0 +0x034:  cmpl   $0x0,-0x10(%ebp)
08184af4 +0x038:  js     08184b26 <+0x6a>
08184af6 +0x03a:  mov    -0x18(%ebp),%eax
08184af9 +0x03d:  mov    %eax,%edx
08184afb +0x03f:  sar    $0x1f,%edx
08184afe +0x042:  idivl  -0x10(%ebp)
08184b01 +0x045:  mov    %edx,%eax
08184b03 +0x047:  test   %eax,%eax
08184b05 +0x049:  je     08184b1e <+0x62>
08184b07 +0x04b:  mov    -0x18(%ebp),%eax
08184b0a +0x04e:  mov    %eax,%edx
08184b0c +0x050:  sar    $0x1f,%edx
08184b0f +0x053:  idivl  -0x10(%ebp)
08184b12 +0x056:  add    $0x1,%eax
08184b15 +0x059:  imul   -0x10(%ebp),%eax
08184b19 +0x05d:  mov    %eax,-0x14(%ebp)
08184b1c +0x060:  jmp    08184b2c <+0x70>
08184b1e +0x062:  mov    -0x18(%ebp),%eax
08184b21 +0x065:  mov    %eax,-0x14(%ebp)
08184b24 +0x068:  jmp    08184b2c <+0x70>
08184b26 +0x06a:  mov    -0x18(%ebp),%eax
08184b29 +0x06d:  mov    %eax,-0x14(%ebp)
08184b2c +0x070:  cmpl   $0x0,-0x10(%ebp)
08184b30 +0x074:  js     08184b53 <+0x97>
08184b32 +0x076:  mov    0x8(%ebp),%eax
08184b35 +0x079:  movl   $0x0,0xc(%esp)
08184b3d +0x081:  mov    -0x18(%ebp),%edx
08184b40 +0x084:  mov    %edx,0x8(%esp)
08184b44 +0x088:  mov    0xc(%ebp),%edx
08184b47 +0x08b:  mov    %edx,0x4(%esp)
08184b4b +0x08f:  mov    %eax,(%esp)
08184b4e +0x092:  call   080b44a6 <_ZN7IMethod3PadEPciPj>  ; IMethod::Pad(char*, int, unsigned int*)
08184b53 +0x097:  mov    0x8(%ebp),%eax
08184b56 +0x09a:  mov    (%eax),%eax
08184b58 +0x09c:  add    $0xc,%eax
08184b5b +0x09f:  mov    (%eax),%edx
08184b5d +0x0a1:  mov    -0x14(%ebp),%eax
08184b60 +0x0a4:  mov    %eax,0xc(%esp)
08184b64 +0x0a8:  lea    -0x9c(%ebp),%eax
08184b6a +0x0ae:  mov    %eax,0x8(%esp)
08184b6e +0x0b2:  mov    0xc(%ebp),%eax
08184b71 +0x0b5:  mov    %eax,0x4(%esp)
08184b75 +0x0b9:  mov    0x8(%ebp),%eax
08184b78 +0x0bc:  mov    %eax,(%esp)
08184b7b +0x0bf:  call   *%edx
08184b7d +0x0c1:  mov    %eax,-0xc(%ebp)
08184b80 +0x0c4:  cmpl   $0x6fffffff,-0xc(%ebp)
08184b87 +0x0cb:  je     08184bd4 <+0x118>
08184b89 +0x0cd:  movl   $"Encrypt Error",0x1c(%esp)
08184b91 +0x0d5:  movl   $0x1f,0x18(%esp)
08184b99 +0x0dd:  movl   $&_ZZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_E12__FUNCTION__,0x14(%esp)
08184ba1 +0x0e5:  movl   $"[%s][%d][%s]",0x10(%esp)
08184ba9 +0x0ed:  movl   $0x1f,0xc(%esp)
08184bb1 +0x0f5:  movl   $&_ZZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_E12__FUNCTION__,0x8(%esp)
08184bb9 +0x0fd:  movl   $"localjapan/Arad_Crypt.cpp",0x4(%esp)
08184bc1 +0x105:  movl   $0x1,(%esp)
08184bc8 +0x10c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08184bcd +0x111:  mov    $0x0,%eax
08184bd2 +0x116:  jmp    08184c07 <+0x14b>
08184bd4 +0x118:  mov    -0x14(%ebp),%eax
08184bd7 +0x11b:  add    %eax,%eax
08184bd9 +0x11d:  add    $0x1,%eax
08184bdc +0x120:  mov    %eax,-0x18(%ebp)
08184bdf +0x123:  lea    -0x9c(%ebp),%eax
08184be5 +0x129:  mov    0x10(%ebp),%edx
08184be8 +0x12c:  mov    %edx,0x8(%esp)
08184bec +0x130:  mov    -0x14(%ebp),%edx
08184bef +0x133:  mov    %edx,0x4(%esp)
08184bf3 +0x137:  mov    %eax,(%esp)
08184bf6 +0x13a:  call   08108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>  ; DNFFLib::Binary2Hex(unsigned char const*, int, char*)
08184bfb +0x13f:  mov    -0x18(%ebp),%eax
08184bfe +0x142:  add    0x10(%ebp),%eax
08184c01 +0x145:  movb   $0x0,(%eax)
08184c04 +0x148:  mov    0x10(%ebp),%eax
08184c07 +0x14b:  leave
08184c08 +0x14c:  ret
```

## 反编译 C

```c
// ARAD::ARAD_CRYPT::encryptAES @ 0x8184abc

/* ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*) */

char * ARAD::ARAD_CRYPT::encryptAES(CRijndael *param_1,char *param_2,char *param_3)

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
              (1,"localjapan/Arad_Crypt.cpp","encryptAES",0x1f,"[%s][%d][%s]","encryptAES",0x1f,
               "Encrypt Error");
    param_3 = (char *)0x0;
  }
  return param_3;
}
```
