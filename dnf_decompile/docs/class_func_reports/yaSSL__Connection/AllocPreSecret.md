# AllocPreSecret

`_ZN5yaSSL10Connection14AllocPreSecretEj`

`yaSSL::Connection::AllocPreSecret(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Connection` | `0x08747280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747280  _ZN5yaSSL10Connection14AllocPreSecretEj
#           yaSSL::Connection::AllocPreSecret(unsigned int)
# range [0x08747280, 0x087472bc]
08747280 +0x00:  push   %ebp
08747281 +0x01:  mov    %esp,%ebp
08747283 +0x03:  sub    $0x18,%esp
08747286 +0x06:  mov    %ebx,-0x8(%ebp)
08747289 +0x09:  mov    0xc(%ebp),%eax
0874728c +0x0c:  mov    %esi,-0x4(%ebp)
0874728f +0x0f:  mov    0x8(%ebp),%esi
08747292 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08747297 +0x17:  add    $0xc25901,%ebx
0874729d +0x1d:  mov    %eax,0x124(%esi)
087472a3 +0x23:  movb   $0x0,0x4(%esp)
087472a8 +0x28:  mov    %eax,(%esp)
087472ab +0x2b:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087472b0 +0x30:  mov    %eax,(%esi)
087472b2 +0x32:  mov    -0x8(%ebp),%ebx
087472b5 +0x35:  mov    -0x4(%ebp),%esi
087472b8 +0x38:  mov    %ebp,%esp
087472ba +0x3a:  pop    %ebp
087472bb +0x3b:  ret
087472bc +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Connection::AllocPreSecret @ 0x8747280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::AllocPreSecret(unsigned int) */

void __thiscall yaSSL::Connection::AllocPreSecret(Connection *this,uint param_1)

{
  void *pvVar1;
  
  *(uint *)(this + 0x124) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)this = pvVar1;
  return;
}
```
