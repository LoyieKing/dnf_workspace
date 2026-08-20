# get_clientKey

`_ZNK5yaSSL25ClientDiffieHellmanPublic13get_clientKeyEv`

`yaSSL::ClientDiffieHellmanPublic::get_clientKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x08746a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746a00  _ZNK5yaSSL25ClientDiffieHellmanPublic13get_clientKeyEv
#           yaSSL::ClientDiffieHellmanPublic::get_clientKey() const
# range [0x08746a00, 0x08746a0c]
08746a00 +0x00:  push   %ebp
08746a01 +0x01:  mov    %esp,%ebp
08746a03 +0x03:  mov    0x8(%ebp),%eax
08746a06 +0x06:  pop    %ebp
08746a07 +0x07:  mov    0xc(%eax),%eax
08746a0a +0x0a:  ret
08746a0b +0x0b:  nop
08746a0c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::get_clientKey @ 0x8746a00

/* yaSSL::ClientDiffieHellmanPublic::get_clientKey() const */

undefined4 __thiscall
yaSSL::ClientDiffieHellmanPublic::get_clientKey(ClientDiffieHellmanPublic *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
