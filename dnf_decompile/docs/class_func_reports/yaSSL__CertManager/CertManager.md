# CertManager

`_ZN5yaSSL11CertManagerC1Ev`

`yaSSL::CertManager::CertManager()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087978e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087978e0  _ZN5yaSSL11CertManagerC1Ev
#           yaSSL::CertManager::CertManager()
# range [0x087978e0, 0x0879796f]
087978e0 +0x00:  push   %ebp
087978e1 +0x01:  mov    %esp,%ebp
087978e3 +0x03:  push   %esi
087978e4 +0x04:  push   %ebx
087978e5 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
087978ea +0x0a:  add    $0xbd52ae,%ebx
087978f0 +0x10:  sub    $0x10,%esp
087978f3 +0x13:  mov    0x8(%ebp),%esi
087978f6 +0x16:  lea    0xc(%esi),%eax
087978f9 +0x19:  movl   $0x0,(%esi)
087978ff +0x1f:  movl   $0x0,0x4(%esi)
08797906 +0x26:  movl   $0x0,0x8(%esi)
0879790d +0x2d:  mov    %eax,(%esp)
08797910 +0x30:  call   08796d00 <_ZN5yaSSL12input_bufferC1Ev>  ; yaSSL::input_buffer::input_buffer()
08797915 +0x35:  lea    0x28(%esi),%eax
08797918 +0x38:  movl   $0x0,0x1c(%esi)
0879791f +0x3f:  movl   $0x0,0x20(%esi)
08797926 +0x46:  movl   $0x0,0x24(%esi)
0879792d +0x4d:  mov    %eax,(%esp)
08797930 +0x50:  call   08796d00 <_ZN5yaSSL12input_bufferC1Ev>  ; yaSSL::input_buffer::input_buffer()
08797935 +0x55:  movl   $0x0,0x38(%esi)
0879793c +0x5c:  movl   $0x0,0x44(%esi)
08797943 +0x63:  movl   $0x0,0x48(%esi)
0879794a +0x6a:  movl   $0x0,0x4c(%esi)
08797951 +0x71:  movb   $0x0,0x50(%esi)
08797955 +0x75:  movb   $0x0,0x51(%esi)
08797959 +0x79:  movb   $0x0,0x52(%esi)
0879795d +0x7d:  movb   $0x0,0x53(%esi)
08797961 +0x81:  movl   $0x0,0x54(%esi)
08797968 +0x88:  add    $0x10,%esp
0879796b +0x8b:  pop    %ebx
0879796c +0x8c:  pop    %esi
0879796d +0x8d:  pop    %ebp
0879796e +0x8e:  ret
0879796f +0x8f:  nop
```

## 反编译 C

```c
// yaSSL::CertManager::CertManager @ 0x87978e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::CertManager() */

void __thiscall yaSSL::CertManager::CertManager(CertManager *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  input_buffer::input_buffer((input_buffer *)(this + 0xc));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  input_buffer::input_buffer((input_buffer *)(this + 0x28));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (CertManager)0x0;
  this[0x51] = (CertManager)0x0;
  this[0x52] = (CertManager)0x0;
  this[0x53] = (CertManager)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  return;
}
```
