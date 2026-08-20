# dispatch_sig

`_ZN38Timer_Security_NonClient_CheckResponse12dispatch_sigEiij`

`Timer_Security_NonClient_CheckResponse::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_Security_NonClient_CheckResponse` | `0x086394f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086394f0  _ZN38Timer_Security_NonClient_CheckResponse12dispatch_sigEiij
#           Timer_Security_NonClient_CheckResponse::dispatch_sig(int, int, unsigned int)
# range [0x086394f0, 0x08639511]
086394f0 +0x00:  push   %ebp
086394f1 +0x01:  mov    %esp,%ebp
086394f3 +0x03:  sub    $0x18,%esp
086394f6 +0x06:  mov    0x14(%ebp),%eax
086394f9 +0x09:  mov    %eax,0x8(%esp)
086394fd +0x0d:  mov    0x10(%ebp),%eax
08639500 +0x10:  mov    %eax,0x4(%esp)
08639504 +0x14:  mov    0xc(%ebp),%eax
08639507 +0x17:  mov    %eax,(%esp)
0863950a +0x1a:  call   08274e4e <_Z27_NS_NonClient_CheckResponseiii>  ; _NS_NonClient_CheckResponse(int, int, int)
0863950f +0x1f:  leave
08639510 +0x20:  ret
08639511 +0x21:  nop
```

## 反编译 C

```c
// Timer_Security_NonClient_CheckResponse::dispatch_sig @ 0x86394f0

/* Timer_Security_NonClient_CheckResponse::dispatch_sig(int, int, unsigned int) */

void __thiscall
Timer_Security_NonClient_CheckResponse::dispatch_sig
          (Timer_Security_NonClient_CheckResponse *this,int param_1,int param_2,uint param_3)

{
  _NS_NonClient_CheckResponse(param_1,param_2,param_3);
  return;
}
```
