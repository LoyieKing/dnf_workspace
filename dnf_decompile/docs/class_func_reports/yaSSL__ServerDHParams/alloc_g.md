# alloc_g

`_ZN5yaSSL14ServerDHParams7alloc_gEi`

`yaSSL::ServerDHParams::alloc_g(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08747300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747300  _ZN5yaSSL14ServerDHParams7alloc_gEi
#           yaSSL::ServerDHParams::alloc_g(int)
# range [0x08747300, 0x0874733a]
08747300 +0x00:  push   %ebp
08747301 +0x01:  mov    %esp,%ebp
08747303 +0x03:  sub    $0x18,%esp
08747306 +0x06:  mov    %ebx,-0x8(%ebp)
08747309 +0x09:  mov    0xc(%ebp),%eax
0874730c +0x0c:  mov    %esi,-0x4(%ebp)
0874730f +0x0f:  mov    0x8(%ebp),%esi
08747312 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08747317 +0x17:  add    $0xc25881,%ebx
0874731d +0x1d:  mov    %eax,0x4(%esi)
08747320 +0x20:  movb   $0x0,0x4(%esp)
08747325 +0x25:  mov    %eax,(%esp)
08747328 +0x28:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874732d +0x2d:  mov    %eax,0x10(%esi)
08747330 +0x30:  mov    -0x8(%ebp),%ebx
08747333 +0x33:  mov    -0x4(%ebp),%esi
08747336 +0x36:  mov    %ebp,%esp
08747338 +0x38:  pop    %ebp
08747339 +0x39:  ret
0874733a +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::alloc_g @ 0x8747300

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::alloc_g(int) */

void __thiscall yaSSL::ServerDHParams::alloc_g(ServerDHParams *this,int param_1)

{
  void *pvVar1;
  
  *(int *)(this + 4) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 0x10) = pvVar1;
  return;
}
```
