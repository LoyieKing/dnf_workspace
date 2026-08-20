# GetError

`_ZNK5yaSSL10RandomPool8GetErrorEv`

`yaSSL::RandomPool::GetError() const`

| 类 | 地址 |
|---|---|
| `yaSSL::RandomPool` | `0x087985b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087985b0  _ZNK5yaSSL10RandomPool8GetErrorEv
#           yaSSL::RandomPool::GetError() const
# range [0x087985b0, 0x087985be]
087985b0 +0x00:  push   %ebp
087985b1 +0x01:  mov    %esp,%ebp
087985b3 +0x03:  mov    0x8(%ebp),%eax
087985b6 +0x06:  pop    %ebp
087985b7 +0x07:  mov    (%eax),%eax
087985b9 +0x09:  mov    0x4(%eax),%eax
087985bc +0x0c:  ret
087985bd +0x0d:  nop
087985be +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::RandomPool::GetError @ 0x87985b0

/* yaSSL::RandomPool::GetError() const */

undefined4 __thiscall yaSSL::RandomPool::GetError(RandomPool *this)

{
  return *(undefined4 *)(*(int *)this + 4);
}
```
