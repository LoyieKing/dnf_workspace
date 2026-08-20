# get_cert

`_ZNK5yaSSL11CertManager8get_certEv`

`yaSSL::CertManager::get_cert() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797490  _ZNK5yaSSL11CertManager8get_certEv
#           yaSSL::CertManager::get_cert() const
# range [0x08797490, 0x087974aa]
08797490 +0x00:  push   %ebp
08797491 +0x01:  mov    %esp,%ebp
08797493 +0x03:  mov    0x8(%ebp),%eax
08797496 +0x06:  mov    (%eax),%edx
08797498 +0x08:  xor    %eax,%eax
0879749a +0x0a:  test   %edx,%edx
0879749c +0x0c:  je     087974a1 <+0x11>
0879749e +0x0e:  mov    0x8(%edx),%eax
087974a1 +0x11:  pop    %ebp
087974a2 +0x12:  ret
087974a3 +0x13:  nop
087974a4 +0x14:  lea    0x0(%esi),%esi
087974aa +0x1a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::get_cert @ 0x8797490

/* yaSSL::CertManager::get_cert() const */

undefined4 __thiscall yaSSL::CertManager::get_cert(CertManager *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 8);
  }
  return uVar1;
}
```
