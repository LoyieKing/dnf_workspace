# get_keySize

`_ZNK5yaSSL3AES11get_keySizeEv`

`yaSSL::AES::get_keySize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::AES` | `0x08798590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798590  _ZNK5yaSSL3AES11get_keySizeEv
#           yaSSL::AES::get_keySize() const
# range [0x08798590, 0x087985a9]
08798590 +0x00:  push   %ebp
08798591 +0x01:  mov    %esp,%ebp
08798593 +0x03:  mov    0x8(%ebp),%eax
08798596 +0x06:  pop    %ebp
08798597 +0x07:  mov    0x4(%eax),%eax
0879859a +0x0a:  mov    0x258(%eax),%eax
087985a0 +0x10:  ret
087985a1 +0x11:  nop
087985a2 +0x12:  lea    0x0(%esi,%eiz,1),%esi
087985a9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::AES::get_keySize @ 0x8798590

/* yaSSL::AES::get_keySize() const */

undefined4 __thiscall yaSSL::AES::get_keySize(AES *this)

{
  return *(undefined4 *)(*(int *)(this + 4) + 600);
}
```
