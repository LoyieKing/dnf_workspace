# CeraPointQuery

`_ZN6Taiwan14CeraPointQueryC1EPKcS2_PcS3_jccc`

`Taiwan::CeraPointQuery::CeraPointQuery(char const*, char const*, char*, char*, unsigned int, char, char, char)`

| 类 | 地址 |
|---|---|
| `Taiwan::CeraPointQuery` | `0x081751b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081751b6  _ZN6Taiwan14CeraPointQueryC1EPKcS2_PcS3_jccc
#           Taiwan::CeraPointQuery::CeraPointQuery(char const*, char const*, char*, char*, unsigned int, char, char, char)
# range [0x081751b6, 0x08175223]
081751b6 +0x00:  push   %ebp
081751b7 +0x01:  mov    %esp,%ebp
081751b9 +0x03:  sub    $0xc,%esp
081751bc +0x06:  mov    0x20(%ebp),%ecx
081751bf +0x09:  mov    0x24(%ebp),%edx
081751c2 +0x0c:  mov    0x28(%ebp),%eax
081751c5 +0x0f:  mov    %cl,-0x4(%ebp)
081751c8 +0x12:  mov    %dl,-0x8(%ebp)
081751cb +0x15:  mov    %al,-0xc(%ebp)
081751ce +0x18:  mov    0x8(%ebp),%eax
081751d1 +0x1b:  mov    0xc(%ebp),%edx
081751d4 +0x1e:  mov    %edx,(%eax)
081751d6 +0x20:  mov    0x8(%ebp),%eax
081751d9 +0x23:  mov    0x10(%ebp),%edx
081751dc +0x26:  mov    %edx,0x4(%eax)
081751df +0x29:  mov    0x8(%ebp),%eax
081751e2 +0x2c:  mov    0x14(%ebp),%edx
081751e5 +0x2f:  mov    %edx,0x8(%eax)
081751e8 +0x32:  mov    0x8(%ebp),%eax
081751eb +0x35:  mov    0x18(%ebp),%edx
081751ee +0x38:  mov    %edx,0xc(%eax)
081751f1 +0x3b:  mov    0x8(%ebp),%eax
081751f4 +0x3e:  mov    0x1c(%ebp),%edx
081751f7 +0x41:  mov    %edx,0x10(%eax)
081751fa +0x44:  mov    0x8(%ebp),%eax
081751fd +0x47:  movzbl -0x4(%ebp),%edx
08175201 +0x4b:  mov    %dl,0x14(%eax)
08175204 +0x4e:  mov    0x8(%ebp),%eax
08175207 +0x51:  movzbl -0x8(%ebp),%edx
0817520b +0x55:  mov    %dl,0x15(%eax)
0817520e +0x58:  mov    0x8(%ebp),%eax
08175211 +0x5b:  movzbl -0xc(%ebp),%edx
08175215 +0x5f:  mov    %dl,0x16(%eax)
08175218 +0x62:  mov    0x8(%ebp),%eax
0817521b +0x65:  movl   $0x0,0x18(%eax)
08175222 +0x6c:  leave
08175223 +0x6d:  ret
```

## 反编译 C

```c
// Taiwan::CeraPointQuery::CeraPointQuery @ 0x81751b6

/* Taiwan::CeraPointQuery::CeraPointQuery(char const*, char const*, char*, char*, unsigned int,
   char, char, char) */

void __thiscall
Taiwan::CeraPointQuery::CeraPointQuery
          (CeraPointQuery *this,char *param_1,char *param_2,char *param_3,char *param_4,uint param_5
          ,char param_6,char param_7,char param_8)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(char **)(this + 8) = param_3;
  *(char **)(this + 0xc) = param_4;
  *(uint *)(this + 0x10) = param_5;
  this[0x14] = (CeraPointQuery)param_6;
  this[0x15] = (CeraPointQuery)param_7;
  this[0x16] = (CeraPointQuery)param_8;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```
