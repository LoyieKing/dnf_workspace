# ~ServerDHParams

`_ZN5yaSSL14ServerDHParamsD1Ev`

`yaSSL::ServerDHParams::~ServerDHParams()`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x0874b940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b940  _ZN5yaSSL14ServerDHParamsD1Ev
#           yaSSL::ServerDHParams::~ServerDHParams()
# range [0x0874b940, 0x0874b99a]
0874b940 +0x00:  push   %ebp
0874b941 +0x01:  mov    %esp,%ebp
0874b943 +0x03:  sub    $0x18,%esp
0874b946 +0x06:  mov    %esi,-0x4(%ebp)
0874b949 +0x09:  mov    0x8(%ebp),%esi
0874b94c +0x0c:  mov    %ebx,-0x8(%ebp)
0874b94f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b954 +0x14:  add    $0xc21244,%ebx
0874b95a +0x1a:  movb   $0x0,0x4(%esp)
0874b95f +0x1f:  mov    0x14(%esi),%eax
0874b962 +0x22:  mov    %eax,(%esp)
0874b965 +0x25:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874b96a +0x2a:  movb   $0x0,0x4(%esp)
0874b96f +0x2f:  mov    0x10(%esi),%eax
0874b972 +0x32:  mov    %eax,(%esp)
0874b975 +0x35:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874b97a +0x3a:  movb   $0x0,0x4(%esp)
0874b97f +0x3f:  mov    0xc(%esi),%eax
0874b982 +0x42:  mov    %eax,(%esp)
0874b985 +0x45:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874b98a +0x4a:  mov    -0x8(%ebp),%ebx
0874b98d +0x4d:  mov    -0x4(%ebp),%esi
0874b990 +0x50:  mov    %ebp,%esp
0874b992 +0x52:  pop    %ebp
0874b993 +0x53:  ret
0874b994 +0x54:  lea    0x0(%esi),%esi
0874b99a +0x5a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::~ServerDHParams @ 0x874b940

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::~ServerDHParams() */

void __thiscall yaSSL::ServerDHParams::~ServerDHParams(ServerDHParams *this)

{
  operator_delete__(*(undefined4 *)(this + 0x14),0);
  operator_delete__(*(undefined4 *)(this + 0x10),0);
  operator_delete__(*(undefined4 *)(this + 0xc),0);
  return;
}
```
