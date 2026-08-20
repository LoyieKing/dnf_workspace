# ConvertUTF32ToUTF8

`_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi`

`TiXmlBase::ConvertUTF32ToUTF8(unsigned long, char*, int*)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e5ef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e5ef0  _ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi
#           TiXmlBase::ConvertUTF32ToUTF8(unsigned long, char*, int*)
# range [0x087e5ef0, 0x087e5fec]
087e5ef0 +0x00:  push   %ebp
087e5ef1 +0x01:  mov    %esp,%ebp
087e5ef3 +0x03:  sub    $0x2c,%esp
087e5ef6 +0x06:  mov    0x8(%ebp),%eax
087e5ef9 +0x09:  mov    %edi,-0x4(%ebp)
087e5efc +0x0c:  mov    0x10(%ebp),%edx
087e5eff +0x0f:  mov    %ebx,-0xc(%ebp)
087e5f02 +0x12:  mov    0xc(%ebp),%edi
087e5f05 +0x15:  mov    %esi,-0x8(%ebp)
087e5f08 +0x18:  cmp    $0x7f,%eax
087e5f0b +0x1b:  ja     087e5f30 <+0x40>
087e5f0d +0x1d:  movl   $0x1,(%edx)
087e5f13 +0x23:  lea    0x1(%edi),%ebx
087e5f16 +0x26:  xor    %edx,%edx
087e5f18 +0x28:  or     %edx,%eax
087e5f1a +0x2a:  mov    %al,-0x1(%ebx)
087e5f1d +0x2d:  mov    -0xc(%ebp),%ebx
087e5f20 +0x30:  mov    -0x8(%ebp),%esi
087e5f23 +0x33:  mov    -0x4(%ebp),%edi
087e5f26 +0x36:  mov    %ebp,%esp
087e5f28 +0x38:  pop    %ebp
087e5f29 +0x39:  ret
087e5f2a +0x3a:  lea    0x0(%esi),%esi
087e5f30 +0x40:  cmp    $0x7ff,%eax
087e5f35 +0x45:  ja     087e5f90 <+0xa0>
087e5f37 +0x47:  movl   $0x2,(%edx)
087e5f3d +0x4d:  lea    0x2(%edi),%esi
087e5f40 +0x50:  mov    %eax,%ecx
087e5f42 +0x52:  and    $0x3f,%ecx
087e5f45 +0x55:  or     $0xffffff80,%ecx
087e5f48 +0x58:  mov    %cl,-0x1(%esi)
087e5f4b +0x5b:  mov    (%edx),%edx
087e5f4d +0x5d:  lea    -0x1(%esi),%ebx
087e5f50 +0x60:  movl   $0x0,-0x28(%ebp)
087e5f57 +0x67:  shr    $0x6,%eax
087e5f5a +0x6a:  movl   $0x0,-0x24(%ebp)
087e5f61 +0x71:  movl   $0xc0,-0x20(%ebp)
087e5f68 +0x78:  movl   $0xe0,-0x1c(%ebp)
087e5f6f +0x7f:  movl   $0xf0,-0x18(%ebp)
087e5f76 +0x86:  movl   $0xf8,-0x14(%ebp)
087e5f7d +0x8d:  movl   $0xfc,-0x10(%ebp)
087e5f84 +0x94:  movzbl -0x28(%ebp,%edx,4),%edx
087e5f89 +0x99:  jmp    087e5f18 <+0x28>
087e5f8b +0x9b:  nop
087e5f8c +0x9c:  lea    0x0(%esi,%eiz,1),%esi
087e5f90 +0xa0:  cmp    $0xffff,%eax
087e5f95 +0xa5:  jbe    087e5fd0 <+0xe0>
087e5f97 +0xa7:  cmp    $0x1fffff,%eax
087e5f9c +0xac:  ja     087e5fe0 <+0xf0>
087e5f9e +0xae:  mov    %eax,%ecx
087e5fa0 +0xb0:  and    $0x3f,%ecx
087e5fa3 +0xb3:  mov    %ecx,%esi
087e5fa5 +0xb5:  or     $0xffffff80,%esi
087e5fa8 +0xb8:  mov    %esi,%ecx
087e5faa +0xba:  movl   $0x4,(%edx)
087e5fb0 +0xc0:  lea    0x3(%edi),%ebx
087e5fb3 +0xc3:  mov    %cl,0x3(%edi)
087e5fb6 +0xc6:  shr    $0x6,%eax
087e5fb9 +0xc9:  mov    %eax,%ecx
087e5fbb +0xcb:  and    $0x3f,%ecx
087e5fbe +0xce:  or     $0xffffff80,%ecx
087e5fc1 +0xd1:  lea    -0x1(%ebx),%esi
087e5fc4 +0xd4:  mov    %cl,-0x1(%ebx)
087e5fc7 +0xd7:  shr    $0x6,%eax
087e5fca +0xda:  jmp    087e5f40 <+0x50>
087e5fcf +0xdf:  nop
087e5fd0 +0xe0:  movl   $0x3,(%edx)
087e5fd6 +0xe6:  lea    0x3(%edi),%ebx
087e5fd9 +0xe9:  jmp    087e5fb9 <+0xc9>
087e5fdb +0xeb:  nop
087e5fdc +0xec:  lea    0x0(%esi,%eiz,1),%esi
087e5fe0 +0xf0:  movl   $0x0,(%edx)
087e5fe6 +0xf6:  jmp    087e5f1d <+0x2d>
087e5feb +0xfb:  nop
087e5fec +0xfc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlBase::ConvertUTF32ToUTF8 @ 0x87e5ef0

/* TiXmlBase::ConvertUTF32ToUTF8(unsigned long, char*, int*) */

void TiXmlBase::ConvertUTF32ToUTF8(ulong param_1,char *param_2,int *param_3)

{
  byte bVar1;
  byte local_2c [28];
  
  if (param_1 < 0x80) {
    *param_3 = 1;
    bVar1 = 0;
  }
  else {
    if (param_1 < 0x800) {
      *param_3 = 2;
    }
    else {
      if (param_1 < 0x10000) {
        *param_3 = 3;
      }
      else {
        if (0x1fffff < param_1) {
          *param_3 = 0;
          return;
        }
        *param_3 = 4;
        param_2[3] = (byte)param_1 & 0x3f | 0x80;
        param_1 = param_1 >> 6;
      }
      param_2[2] = (byte)param_1 & 0x3f | 0x80;
      param_1 = param_1 >> 6;
    }
    param_2[1] = (byte)param_1 & 0x3f | 0x80;
    local_2c[0] = 0;
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[3] = 0;
    param_1 = param_1 >> 6;
    local_2c[4] = 0;
    local_2c[5] = 0;
    local_2c[6] = 0;
    local_2c[7] = 0;
    local_2c[8] = 0xc0;
    local_2c[9] = 0;
    local_2c[10] = 0;
    local_2c[0xb] = 0;
    local_2c[0xc] = 0xe0;
    local_2c[0xd] = 0;
    local_2c[0xe] = 0;
    local_2c[0xf] = 0;
    local_2c[0x10] = 0xf0;
    local_2c[0x11] = 0;
    local_2c[0x12] = 0;
    local_2c[0x13] = 0;
    local_2c[0x14] = 0xf8;
    local_2c[0x15] = 0;
    local_2c[0x16] = 0;
    local_2c[0x17] = 0;
    local_2c[0x18] = 0xfc;
    local_2c[0x19] = 0;
    local_2c[0x1a] = 0;
    local_2c[0x1b] = 0;
    bVar1 = local_2c[*param_3 * 4];
  }
  *param_2 = (byte)param_1 | bVar1;
  return;
}
```
