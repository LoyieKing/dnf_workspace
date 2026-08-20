# alloc_p

`_ZN5yaSSL14ServerDHParams7alloc_pEi`

`yaSSL::ServerDHParams::alloc_p(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08747340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747340  _ZN5yaSSL14ServerDHParams7alloc_pEi
#           yaSSL::ServerDHParams::alloc_p(int)
# range [0x08747340, 0x0874737a]
08747340 +0x00:  push   %ebp
08747341 +0x01:  mov    %esp,%ebp
08747343 +0x03:  sub    $0x18,%esp
08747346 +0x06:  mov    %ebx,-0x8(%ebp)
08747349 +0x09:  mov    0xc(%ebp),%eax
0874734c +0x0c:  mov    %esi,-0x4(%ebp)
0874734f +0x0f:  mov    0x8(%ebp),%esi
08747352 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08747357 +0x17:  add    $0xc25841,%ebx
0874735d +0x1d:  mov    %eax,(%esi)
0874735f +0x1f:  movb   $0x0,0x4(%esp)
08747364 +0x24:  mov    %eax,(%esp)
08747367 +0x27:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874736c +0x2c:  mov    %eax,0xc(%esi)
0874736f +0x2f:  mov    -0x8(%ebp),%ebx
08747372 +0x32:  mov    -0x4(%ebp),%esi
08747375 +0x35:  mov    %ebp,%esp
08747377 +0x37:  pop    %ebp
08747378 +0x38:  ret
08747379 +0x39:  nop
0874737a +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::alloc_p @ 0x8747340

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::alloc_p(int) */

void __thiscall yaSSL::ServerDHParams::alloc_p(ServerDHParams *this,int param_1)

{
  void *pvVar1;
  
  *(int *)this = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 0xc) = pvVar1;
  return;
}
```
