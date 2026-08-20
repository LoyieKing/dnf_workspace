# alloc

`_ZN5yaSSL24EncryptedPreMasterSecret5allocEi`

`yaSSL::EncryptedPreMasterSecret::alloc(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::EncryptedPreMasterSecret` | `0x087473d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087473d0  _ZN5yaSSL24EncryptedPreMasterSecret5allocEi
#           yaSSL::EncryptedPreMasterSecret::alloc(int)
# range [0x087473d0, 0x0874740a]
087473d0 +0x00:  push   %ebp
087473d1 +0x01:  mov    %esp,%ebp
087473d3 +0x03:  sub    $0x18,%esp
087473d6 +0x06:  mov    %esi,-0x4(%ebp)
087473d9 +0x09:  mov    0xc(%ebp),%eax
087473dc +0x0c:  mov    0x8(%ebp),%esi
087473df +0x0f:  mov    %ebx,-0x8(%ebp)
087473e2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087473e7 +0x17:  add    $0xc257b1,%ebx
087473ed +0x1d:  mov    %eax,0x8(%esi)
087473f0 +0x20:  movb   $0x0,0x4(%esp)
087473f5 +0x25:  mov    %eax,(%esp)
087473f8 +0x28:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087473fd +0x2d:  mov    %eax,0x4(%esi)
08747400 +0x30:  mov    -0x8(%ebp),%ebx
08747403 +0x33:  mov    -0x4(%ebp),%esi
08747406 +0x36:  mov    %ebp,%esp
08747408 +0x38:  pop    %ebp
08747409 +0x39:  ret
0874740a +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::EncryptedPreMasterSecret::alloc @ 0x87473d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::alloc(int) */

void __thiscall yaSSL::EncryptedPreMasterSecret::alloc(EncryptedPreMasterSecret *this,int param_1)

{
  void *pvVar1;
  
  *(int *)(this + 8) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 4) = pvVar1;
  return;
}
```
