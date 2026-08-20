# CreateRSAClient

`_ZN5yaSSL15CreateRSAClientEv`

`yaSSL::CreateRSAClient()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747490  _ZN5yaSSL15CreateRSAClientEv
#           yaSSL::CreateRSAClient()
# range [0x08747490, 0x087474ce]
08747490 +0x00:  push   %ebp
08747491 +0x01:  mov    %esp,%ebp
08747493 +0x03:  sub    $0x18,%esp
08747496 +0x06:  mov    %ebx,-0x8(%ebp)
08747499 +0x09:  mov    %esi,-0x4(%ebp)
0874749c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087474a1 +0x11:  add    $0xc256f7,%ebx
087474a7 +0x17:  movb   $0x0,0x4(%esp)
087474ac +0x1c:  movl   $0xc,(%esp)
087474b3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087474b8 +0x28:  mov    %eax,%esi
087474ba +0x2a:  mov    %eax,(%esp)
087474bd +0x2d:  call   08746970 <_ZN5yaSSL24EncryptedPreMasterSecretC1Ev>  ; yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret()
087474c2 +0x32:  mov    %esi,%eax
087474c4 +0x34:  mov    -0x8(%ebp),%ebx
087474c7 +0x37:  mov    -0x4(%ebp),%esi
087474ca +0x3a:  mov    %ebp,%esp
087474cc +0x3c:  pop    %ebp
087474cd +0x3d:  ret
087474ce +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateRSAClient @ 0x8747490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateRSAClient() */

EncryptedPreMasterSecret * yaSSL::CreateRSAClient(void)

{
  EncryptedPreMasterSecret *this;
  
  this = operator_new(0xc,0);
  EncryptedPreMasterSecret::EncryptedPreMasterSecret(this);
  return this;
}
```
