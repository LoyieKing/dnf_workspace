# alloc_pub

`_ZN5yaSSL14ServerDHParams9alloc_pubEi`

`yaSSL::ServerDHParams::alloc_pub(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x087472c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087472c0  _ZN5yaSSL14ServerDHParams9alloc_pubEi
#           yaSSL::ServerDHParams::alloc_pub(int)
# range [0x087472c0, 0x087472fa]
087472c0 +0x00:  push   %ebp
087472c1 +0x01:  mov    %esp,%ebp
087472c3 +0x03:  sub    $0x18,%esp
087472c6 +0x06:  mov    %ebx,-0x8(%ebp)
087472c9 +0x09:  mov    0xc(%ebp),%eax
087472cc +0x0c:  mov    %esi,-0x4(%ebp)
087472cf +0x0f:  mov    0x8(%ebp),%esi
087472d2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087472d7 +0x17:  add    $0xc258c1,%ebx
087472dd +0x1d:  mov    %eax,0x8(%esi)
087472e0 +0x20:  movb   $0x0,0x4(%esp)
087472e5 +0x25:  mov    %eax,(%esp)
087472e8 +0x28:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087472ed +0x2d:  mov    %eax,0x14(%esi)
087472f0 +0x30:  mov    -0x8(%ebp),%ebx
087472f3 +0x33:  mov    -0x4(%ebp),%esi
087472f6 +0x36:  mov    %ebp,%esp
087472f8 +0x38:  pop    %ebp
087472f9 +0x39:  ret
087472fa +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::alloc_pub @ 0x87472c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::alloc_pub(int) */

void __thiscall yaSSL::ServerDHParams::alloc_pub(ServerDHParams *this,int param_1)

{
  void *pvVar1;
  
  *(int *)(this + 8) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 0x14) = pvVar1;
  return;
}
```
