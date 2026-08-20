# get_serverKey

`_ZNK5yaSSL9DH_Server13get_serverKeyEv`

`yaSSL::DH_Server::get_serverKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::DH_Server` | `0x08746a20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746a20  _ZNK5yaSSL9DH_Server13get_serverKeyEv
#           yaSSL::DH_Server::get_serverKey() const
# range [0x08746a20, 0x08746a2c]
08746a20 +0x00:  push   %ebp
08746a21 +0x01:  mov    %esp,%ebp
08746a23 +0x03:  mov    0x8(%ebp),%eax
08746a26 +0x06:  pop    %ebp
08746a27 +0x07:  mov    0x24(%eax),%eax
08746a2a +0x0a:  ret
08746a2b +0x0b:  nop
08746a2c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::DH_Server::get_serverKey @ 0x8746a20

/* yaSSL::DH_Server::get_serverKey() const */

undefined4 __thiscall yaSSL::DH_Server::get_serverKey(DH_Server *this)

{
  return *(undefined4 *)(this + 0x24);
}
```
