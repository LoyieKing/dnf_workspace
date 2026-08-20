# convertZipToString

`_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j`

`advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `advancealtar` | `0x0813dc48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813dc48  _ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j
#           advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)
# range [0x0813dc48, 0x0813dd3d]
0813dc48 +0x00:  push   %ebp
0813dc49 +0x01:  mov    %esp,%ebp
0813dc4b +0x03:  sub    $0x28,%esp
0813dc4e +0x06:  mov    0xc(%ebp),%eax
0813dc51 +0x09:  mov    %eax,0x4(%esp)
0813dc55 +0x0d:  mov    0x8(%ebp),%eax
0813dc58 +0x10:  mov    %eax,(%esp)
0813dc5b +0x13:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0813dc60 +0x18:  mov    %eax,-0x10(%ebp)
0813dc63 +0x1b:  cmpl   $0x0,-0x10(%ebp)
0813dc67 +0x1f:  jne    0813dc73 <+0x2b>
0813dc69 +0x21:  mov    $0x1,%eax
0813dc6e +0x26:  jmp    0813dd3c <+0xf4>
0813dc73 +0x2b:  mov    0x14(%ebp),%eax
0813dc76 +0x2e:  cmp    -0x10(%ebp),%eax
0813dc79 +0x31:  ja     0813dc85 <+0x3d>
0813dc7b +0x33:  mov    $0x0,%eax
0813dc80 +0x38:  jmp    0813dd3c <+0xf4>
0813dc85 +0x3d:  mov    0x14(%ebp),%eax
0813dc88 +0x40:  mov    %eax,0x8(%esp)
0813dc8c +0x44:  movl   $0x0,0x4(%esp)
0813dc94 +0x4c:  mov    0x10(%ebp),%eax
0813dc97 +0x4f:  mov    %eax,(%esp)
0813dc9a +0x52:  call   0807dcc0 <_init+0x5b8>
0813dc9f +0x57:  mov    -0x10(%ebp),%eax
0813dca2 +0x5a:  mov    %eax,0xc(%esp)
0813dca6 +0x5e:  mov    0x10(%ebp),%eax
0813dca9 +0x61:  mov    %eax,0x8(%esp)
0813dcad +0x65:  mov    0xc(%ebp),%eax
0813dcb0 +0x68:  mov    %eax,0x4(%esp)
0813dcb4 +0x6c:  mov    0x8(%ebp),%eax
0813dcb7 +0x6f:  mov    %eax,(%esp)
0813dcba +0x72:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0813dcbf +0x77:  xor    $0x1,%eax
0813dcc2 +0x7a:  test   %al,%al
0813dcc4 +0x7c:  je     0813dccd <+0x85>
0813dcc6 +0x7e:  mov    $0x0,%eax
0813dccb +0x83:  jmp    0813dd3c <+0xf4>
0813dccd +0x85:  mov    0x10(%ebp),%eax
0813dcd0 +0x88:  mov    (%eax),%eax
0813dcd2 +0x8a:  and    $0x3fffffff,%eax
0813dcd7 +0x8f:  mov    %eax,-0xc(%ebp)
0813dcda +0x92:  mov    0x1c(%ebp),%eax
0813dcdd +0x95:  cmp    -0xc(%ebp),%eax
0813dce0 +0x98:  ja     0813dce9 <+0xa1>
0813dce2 +0x9a:  mov    $0x0,%eax
0813dce7 +0x9f:  jmp    0813dd3c <+0xf4>
0813dce9 +0xa1:  mov    0x1c(%ebp),%eax
0813dcec +0xa4:  mov    %eax,0x8(%esp)
0813dcf0 +0xa8:  movl   $0x0,0x4(%esp)
0813dcf8 +0xb0:  mov    0x18(%ebp),%eax
0813dcfb +0xb3:  mov    %eax,(%esp)
0813dcfe +0xb6:  call   0807dcc0 <_init+0x5b8>
0813dd03 +0xbb:  mov    -0xc(%ebp),%eax
0813dd06 +0xbe:  mov    %eax,-0x14(%ebp)
0813dd09 +0xc1:  mov    -0x10(%ebp),%eax
0813dd0c +0xc4:  mov    %eax,0xc(%esp)
0813dd10 +0xc8:  mov    0x10(%ebp),%eax
0813dd13 +0xcb:  mov    %eax,0x8(%esp)
0813dd17 +0xcf:  lea    -0x14(%ebp),%eax
0813dd1a +0xd2:  mov    %eax,0x4(%esp)
0813dd1e +0xd6:  mov    0x18(%ebp),%eax
0813dd21 +0xd9:  mov    %eax,(%esp)
0813dd24 +0xdc:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0813dd29 +0xe1:  xor    $0x1,%eax
0813dd2c +0xe4:  test   %al,%al
0813dd2e +0xe6:  je     0813dd37 <+0xef>
0813dd30 +0xe8:  mov    $0x0,%eax
0813dd35 +0xed:  jmp    0813dd3c <+0xf4>
0813dd37 +0xef:  mov    $0x1,%eax
0813dd3c +0xf4:  leave
0813dd3d +0xf5:  ret
```

## 反编译 C

```c
// advancealtar::convertZipToString @ 0x813dc48

/* advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int) */

undefined4
advancealtar::convertZipToString
          (MySQL *param_1,int param_2,char *param_3,uint param_4,char *param_5,uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_14 = MySQL::get_binary_length(param_1,param_2);
  if (local_14 == 0) {
    uVar2 = 1;
  }
  else if (local_14 < param_4) {
    memset(param_3,0,param_4);
    cVar1 = MySQL::get_binary(param_1,param_2,param_3,local_14);
    if (cVar1 == '\x01') {
      local_10 = *(uint *)param_3 & 0x3fffffff;
      if (local_10 < param_6) {
        memset(param_5,0,param_6);
        local_18 = local_10;
        cVar1 = uncompress_zip(param_5,&local_18,param_3,local_14);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
