# Crypto

`_ZN5yaSSL6CryptoC1Ev`

`yaSSL::Crypto::Crypto()`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874f450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f450  _ZN5yaSSL6CryptoC1Ev
#           yaSSL::Crypto::Crypto()
# range [0x0874f450, 0x0874f49e]
0874f450 +0x00:  push   %ebp
0874f451 +0x01:  mov    %esp,%ebp
0874f453 +0x03:  sub    $0x18,%esp
0874f456 +0x06:  mov    %ebx,-0x8(%ebp)
0874f459 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f45e +0x0e:  add    $0xc1d73a,%ebx
0874f464 +0x14:  mov    %esi,-0x4(%ebp)
0874f467 +0x17:  mov    0x8(%ebp),%esi
0874f46a +0x1a:  lea    0xc(%esi),%eax
0874f46d +0x1d:  movl   $0x0,(%esi)
0874f473 +0x23:  movl   $0x0,0x4(%esi)
0874f47a +0x2a:  movl   $0x0,0x8(%esi)
0874f481 +0x31:  add    $0x10,%esi
0874f484 +0x34:  mov    %eax,(%esp)
0874f487 +0x37:  call   08799040 <_ZN5yaSSL10RandomPoolC1Ev>  ; yaSSL::RandomPool::RandomPool()
0874f48c +0x3c:  mov    %esi,(%esp)
0874f48f +0x3f:  call   087978e0 <_ZN5yaSSL11CertManagerC1Ev>  ; yaSSL::CertManager::CertManager()
0874f494 +0x44:  mov    -0x8(%ebp),%ebx
0874f497 +0x47:  mov    -0x4(%ebp),%esi
0874f49a +0x4a:  mov    %ebp,%esp
0874f49c +0x4c:  pop    %ebp
0874f49d +0x4d:  ret
0874f49e +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Crypto::Crypto @ 0x874f450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Crypto::Crypto() */

void __thiscall yaSSL::Crypto::Crypto(Crypto *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  RandomPool::RandomPool((RandomPool *)(this + 0xc));
  CertManager::CertManager((CertManager *)(this + 0x10));
  return;
}
```
