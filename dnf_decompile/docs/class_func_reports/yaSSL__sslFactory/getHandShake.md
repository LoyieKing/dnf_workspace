# getHandShake

`_ZNK5yaSSL10sslFactory12getHandShakeEv`

`yaSSL::sslFactory::getHandShake() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslFactory` | `0x0874df90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874df90  _ZNK5yaSSL10sslFactory12getHandShakeEv
#           yaSSL::sslFactory::getHandShake() const
# range [0x0874df90, 0x0874df9c]
0874df90 +0x00:  push   %ebp
0874df91 +0x01:  mov    %esp,%ebp
0874df93 +0x03:  mov    0x8(%ebp),%eax
0874df96 +0x06:  pop    %ebp
0874df97 +0x07:  add    $0xc,%eax
0874df9a +0x0a:  ret
0874df9b +0x0b:  nop
0874df9c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslFactory::getHandShake @ 0x874df90

/* yaSSL::sslFactory::getHandShake() const */

sslFactory * __thiscall yaSSL::sslFactory::getHandShake(sslFactory *this)

{
  return this + 0xc;
}
```
