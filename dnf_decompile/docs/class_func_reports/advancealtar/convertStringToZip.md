# convertStringToZip

`_ZN12advancealtar18convertStringToZipEPcjPKcjRj`

`advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)`

| 类 | 地址 |
|---|---|
| `advancealtar` | `0x0813dd3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813dd3e  _ZN12advancealtar18convertStringToZipEPcjPKcjRj
#           advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)
# range [0x0813dd3e, 0x0813ddb1]
0813dd3e +0x00:  push   %ebp
0813dd3f +0x01:  mov    %esp,%ebp
0813dd41 +0x03:  sub    $0x18,%esp
0813dd44 +0x06:  cmpl   $0x0,0x14(%ebp)
0813dd48 +0x0a:  jne    0813dd5a <+0x1c>
0813dd4a +0x0c:  mov    0x18(%ebp),%eax
0813dd4d +0x0f:  movl   $0x0,(%eax)
0813dd53 +0x15:  mov    $0x1,%eax
0813dd58 +0x1a:  jmp    0813ddaf <+0x71>
0813dd5a +0x1c:  mov    0x18(%ebp),%eax
0813dd5d +0x1f:  mov    0xc(%ebp),%edx
0813dd60 +0x22:  mov    %edx,(%eax)
0813dd62 +0x24:  mov    0xc(%ebp),%eax
0813dd65 +0x27:  mov    %eax,0x8(%esp)
0813dd69 +0x2b:  movl   $0x0,0x4(%esp)
0813dd71 +0x33:  mov    0x8(%ebp),%eax
0813dd74 +0x36:  mov    %eax,(%esp)
0813dd77 +0x39:  call   0807dcc0 <_init+0x5b8>
0813dd7c +0x3e:  mov    0x14(%ebp),%eax
0813dd7f +0x41:  mov    %eax,0xc(%esp)
0813dd83 +0x45:  mov    0x10(%ebp),%eax
0813dd86 +0x48:  mov    %eax,0x8(%esp)
0813dd8a +0x4c:  mov    0x18(%ebp),%eax
0813dd8d +0x4f:  mov    %eax,0x4(%esp)
0813dd91 +0x53:  mov    0x8(%ebp),%eax
0813dd94 +0x56:  mov    %eax,(%esp)
0813dd97 +0x59:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0813dd9c +0x5e:  xor    $0x1,%eax
0813dd9f +0x61:  test   %al,%al
0813dda1 +0x63:  je     0813ddaa <+0x6c>
0813dda3 +0x65:  mov    $0x0,%eax
0813dda8 +0x6a:  jmp    0813ddaf <+0x71>
0813ddaa +0x6c:  mov    $0x1,%eax
0813ddaf +0x71:  leave
0813ddb0 +0x72:  ret
0813ddb1 +0x73:  nop
```

## 反编译 C

```c
// advancealtar::convertStringToZip @ 0x813dd3e

/* advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)
    */

undefined4
advancealtar::convertStringToZip
          (char *param_1,uint param_2,char *param_3,uint param_4,uint *param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    *param_5 = 0;
    uVar2 = 1;
  }
  else {
    *param_5 = param_2;
    memset(param_1,0,param_2);
    cVar1 = compress_zip(param_1,param_5,param_3,param_4);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
