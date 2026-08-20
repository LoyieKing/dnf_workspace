# EncryptedPreMasterSecret

`_ZN5yaSSL24EncryptedPreMasterSecretC1Ev`

`yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret()`

| 类 | 地址 |
|---|---|
| `yaSSL::EncryptedPreMasterSecret` | `0x08746970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746970  _ZN5yaSSL24EncryptedPreMasterSecretC1Ev
#           yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret()
# range [0x08746970, 0x0874699c]
08746970 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08746975 +0x05:  add    $0xc26223,%ecx
0874697b +0x0b:  push   %ebp
0874697c +0x0c:  mov    %esp,%ebp
0874697e +0x0e:  mov    0x8(%ebp),%eax
08746981 +0x11:  mov    -0x1c(%ecx),%edx
08746987 +0x17:  movl   $0x0,0x4(%eax)
0874698e +0x1e:  movl   $0x0,0x8(%eax)
08746995 +0x25:  add    $0x8,%edx
08746998 +0x28:  mov    %edx,(%eax)
0874699a +0x2a:  pop    %ebp
0874699b +0x2b:  ret
0874699c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret @ 0x8746970

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret() */

void __thiscall
yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret(EncryptedPreMasterSecret *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936cb7c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
