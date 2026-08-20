# get_length

`_ZNK5yaSSL25ClientDiffieHellmanPublic10get_lengthEv`

`yaSSL::ClientDiffieHellmanPublic::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x087469f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087469f0  _ZNK5yaSSL25ClientDiffieHellmanPublic10get_lengthEv
#           yaSSL::ClientDiffieHellmanPublic::get_length() const
# range [0x087469f0, 0x087469fc]
087469f0 +0x00:  push   %ebp
087469f1 +0x01:  mov    %esp,%ebp
087469f3 +0x03:  mov    0x8(%ebp),%eax
087469f6 +0x06:  pop    %ebp
087469f7 +0x07:  mov    0x8(%eax),%eax
087469fa +0x0a:  ret
087469fb +0x0b:  nop
087469fc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::get_length @ 0x87469f0

/* yaSSL::ClientDiffieHellmanPublic::get_length() const */

undefined4 __thiscall yaSSL::ClientDiffieHellmanPublic::get_length(ClientDiffieHellmanPublic *this)

{
  return *(undefined4 *)(this + 8);
}
```
