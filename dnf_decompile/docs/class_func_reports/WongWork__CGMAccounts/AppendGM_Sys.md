# AppendGM_Sys

`_ZN8WongWork11CGMAccounts12AppendGM_SysEjc`

`WongWork::CGMAccounts::AppendGM_Sys(unsigned int, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x08109524` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109524  _ZN8WongWork11CGMAccounts12AppendGM_SysEjc
#           WongWork::CGMAccounts::AppendGM_Sys(unsigned int, char)
# range [0x08109524, 0x081095b2]
08109524 +0x00:  push   %ebp
08109525 +0x01:  mov    %esp,%ebp
08109527 +0x03:  push   %ebx
08109528 +0x04:  sub    $0x34,%esp
0810952b +0x07:  mov    0x10(%ebp),%eax
0810952e +0x0a:  mov    %al,-0x1c(%ebp)
08109531 +0x0d:  movl   $0x0,-0x18(%ebp)
08109538 +0x14:  movl   $0x0,-0x14(%ebp)
0810953f +0x1b:  mov    0xc(%ebp),%eax
08109542 +0x1e:  mov    %eax,-0x18(%ebp)
08109545 +0x21:  movsbl -0x1c(%ebp),%eax
08109549 +0x25:  mov    %eax,-0x14(%ebp)
0810954c +0x28:  mov    0x8(%ebp),%eax
0810954f +0x2b:  lea    -0x18(%ebp),%edx
08109552 +0x2e:  mov    %edx,0x4(%esp)
08109556 +0x32:  mov    %eax,(%esp)
08109559 +0x35:  call   081096d6 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0xe3>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0xe3
0810955e +0x3a:  movl   $0x0,0x4(%esp)
08109566 +0x42:  mov    0xc(%ebp),%eax
08109569 +0x45:  mov    %eax,(%esp)
0810956c +0x48:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08109571 +0x4d:  mov    %eax,%ebx
08109573 +0x4f:  movl   $0xcd,0x8(%esp)
0810957b +0x57:  movl   $&_ZZN8WongWork11CGMAccounts12AppendGM_SysEjcE12__FUNCTION__,0x4(%esp)
08109583 +0x5f:  lea    -0x10(%ebp),%eax
08109586 +0x62:  mov    %eax,(%esp)
08109589 +0x65:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
0810958e +0x6a:  mov    %ebx,0xc(%esp)
08109592 +0x6e:  movl   $"GM List Add mid:%s",0x8(%esp)
0810959a +0x76:  movl   $"./log/Init",0x4(%esp)
081095a2 +0x7e:  lea    -0x10(%ebp),%eax
081095a5 +0x81:  mov    %eax,(%esp)
081095a8 +0x84:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081095ad +0x89:  add    $0x34,%esp
081095b0 +0x8c:  pop    %ebx
081095b1 +0x8d:  pop    %ebp
081095b2 +0x8e:  ret
```

## 反编译 C

```c
// WongWork::CGMAccounts::AppendGM_Sys @ 0x8109524

/* WongWork::CGMAccounts::AppendGM_Sys(unsigned int, char) */

void __thiscall WongWork::CGMAccounts::AppendGM_Sys(CGMAccounts *this,uint param_1,char param_2)

{
  undefined4 uVar1;
  uint local_1c;
  int local_18;
  CMyFileLog local_14 [12];
  
  local_1c = param_1;
  local_18 = (int)param_2;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  push_back((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
             *)this,(stGMInfo_t *)&local_1c);
  uVar1 = NumberToString(param_1,0);
  CMyFileLog::CMyFileLog(local_14,"AppendGM_Sys",0xcd);
  CMyFileLog::operator()(local_14,"./log/Init","GM List Add mid:%s",uVar1);
  return;
}
```
