# generateCertKey

`_ZN8WongWork19CSecurityCardCenter15generateCertKeyEPc`

`WongWork::CSecurityCardCenter::generateCertKey(char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCardCenter` | `0x085fe17e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe17e  _ZN8WongWork19CSecurityCardCenter15generateCertKeyEPc
#           WongWork::CSecurityCardCenter::generateCertKey(char*)
# range [0x085fe17e, 0x085fe1b9]
085fe17e +0x00:  push   %ebp
085fe17f +0x01:  mov    %esp,%ebp
085fe181 +0x03:  sub    $0x18,%esp
085fe184 +0x06:  movl   $&_ZL14gUnicodeBuffer+0xba63,(%esp)
085fe18b +0x0d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085fe190 +0x12:  add    $0x2710,%eax
085fe195 +0x17:  mov    %eax,0xc(%esp)
085fe199 +0x1b:  movl   $"%d",0x8(%esp)
085fe1a1 +0x23:  movl   $0x6,0x4(%esp)
085fe1a9 +0x2b:  mov    0xc(%ebp),%eax
085fe1ac +0x2e:  mov    %eax,(%esp)
085fe1af +0x31:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
085fe1b4 +0x36:  mov    0xc(%ebp),%eax
085fe1b7 +0x39:  leave
085fe1b8 +0x3a:  ret
085fe1b9 +0x3b:  nop
```

## 反编译 C

```c
// WongWork::CSecurityCardCenter::generateCertKey @ 0x85fe17e

/* WongWork::CSecurityCardCenter::generateCertKey(char*) */

char * __thiscall
WongWork::CSecurityCardCenter::generateCertKey(CSecurityCardCenter *this,char *param_1)

{
  int iVar1;
  
  iVar1 = get_rand_int(89999);
  OS_API::snprintf(param_1,6,"%d",iVar1 + 10000);
  return param_1;
}
```
