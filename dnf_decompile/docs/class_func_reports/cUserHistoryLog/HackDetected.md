# HackDetected

`_ZN15cUserHistoryLog12HackDetectedEjjjjjj`

`cUserHistoryLog::HackDetected(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685320  _ZN15cUserHistoryLog12HackDetectedEjjjjjj
#           cUserHistoryLog::HackDetected(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x08685320, 0x086853e5]
08685320 +0x00:  push   %ebp
08685321 +0x01:  mov    %esp,%ebp
08685323 +0x03:  sub    $0x28,%esp
08685326 +0x06:  cmpl   $0x0,0x1c(%ebp)
0868532a +0x0a:  jne    08685365 <+0x45>
0868532c +0x0c:  cmpl   $0x0,0x20(%ebp)
08685330 +0x10:  jne    08685365 <+0x45>
08685332 +0x12:  mov    0x8(%ebp),%eax
08685335 +0x15:  mov    (%eax),%eax
08685337 +0x17:  mov    0x18(%ebp),%edx
0868533a +0x1a:  mov    %edx,0x14(%esp)
0868533e +0x1e:  mov    0x14(%ebp),%edx
08685341 +0x21:  mov    %edx,0x10(%esp)
08685345 +0x25:  mov    0x10(%ebp),%edx
08685348 +0x28:  mov    %edx,0xc(%esp)
0868534c +0x2c:  mov    0xc(%ebp),%edx
0868534f +0x2f:  mov    %edx,0x8(%esp)
08685353 +0x33:  movl   $"Hack,%d,%d,%d,%d",0x4(%esp)
0868535b +0x3b:  mov    %eax,(%esp)
0868535e +0x3e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685363 +0x43:  jmp    086853e4 <+0xc4>
08685365 +0x45:  cmpl   $0x0,0x20(%ebp)
08685369 +0x49:  jne    086853a5 <+0x85>
0868536b +0x4b:  mov    0x8(%ebp),%eax
0868536e +0x4e:  mov    (%eax),%eax
08685370 +0x50:  mov    0x1c(%ebp),%edx
08685373 +0x53:  mov    %edx,0x18(%esp)
08685377 +0x57:  mov    0x18(%ebp),%edx
0868537a +0x5a:  mov    %edx,0x14(%esp)
0868537e +0x5e:  mov    0x14(%ebp),%edx
08685381 +0x61:  mov    %edx,0x10(%esp)
08685385 +0x65:  mov    0x10(%ebp),%edx
08685388 +0x68:  mov    %edx,0xc(%esp)
0868538c +0x6c:  mov    0xc(%ebp),%edx
0868538f +0x6f:  mov    %edx,0x8(%esp)
08685393 +0x73:  movl   $"Hack,%d,%d,%d,%d,%d",0x4(%esp)
0868539b +0x7b:  mov    %eax,(%esp)
0868539e +0x7e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086853a3 +0x83:  jmp    086853e4 <+0xc4>
086853a5 +0x85:  mov    0x8(%ebp),%eax
086853a8 +0x88:  mov    (%eax),%eax
086853aa +0x8a:  mov    0x20(%ebp),%edx
086853ad +0x8d:  mov    %edx,0x1c(%esp)
086853b1 +0x91:  mov    0x1c(%ebp),%edx
086853b4 +0x94:  mov    %edx,0x18(%esp)
086853b8 +0x98:  mov    0x18(%ebp),%edx
086853bb +0x9b:  mov    %edx,0x14(%esp)
086853bf +0x9f:  mov    0x14(%ebp),%edx
086853c2 +0xa2:  mov    %edx,0x10(%esp)
086853c6 +0xa6:  mov    0x10(%ebp),%edx
086853c9 +0xa9:  mov    %edx,0xc(%esp)
086853cd +0xad:  mov    0xc(%ebp),%edx
086853d0 +0xb0:  mov    %edx,0x8(%esp)
086853d4 +0xb4:  movl   $"Hack,%d,%d,%d,%d,%d,%d",0x4(%esp)
086853dc +0xbc:  mov    %eax,(%esp)
086853df +0xbf:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086853e4 +0xc4:  leave
086853e5 +0xc5:  ret
```

## 反编译 C

```c
// cUserHistoryLog::HackDetected @ 0x8685320

/* cUserHistoryLog::HackDetected(unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
cUserHistoryLog::HackDetected
          (cUserHistoryLog *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6)

{
  if ((param_5 == 0) && (param_6 == 0)) {
    CUser::LogHistory(*(CUser **)this,"Hack,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  }
  else if (param_6 == 0) {
    CUser::LogHistory(*(CUser **)this,"Hack,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,param_5)
    ;
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Hack,%d,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,
                      param_5,param_6);
  }
  return;
}
```
