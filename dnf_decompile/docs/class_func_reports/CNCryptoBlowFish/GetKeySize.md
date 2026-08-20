# GetKeySize

`_ZNK16CNCryptoBlowFish10GetKeySizeEv`

`CNCryptoBlowFish::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099ee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099ee2  _ZNK16CNCryptoBlowFish10GetKeySizeEv
#           CNCryptoBlowFish::GetKeySize() const
# range [0x08099ee2, 0x08099eeb]
08099ee2 +0x00:  push   %ebp
08099ee3 +0x01:  mov    %esp,%ebp
08099ee5 +0x03:  mov    $0x38,%eax
08099eea +0x08:  pop    %ebp
08099eeb +0x09:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::GetKeySize @ 0x8099ee2

/* CNCryptoBlowFish::GetKeySize() const */

undefined4 CNCryptoBlowFish::GetKeySize(void)

{
  return 0x38;
}
```
