# GetBlockSize

`_ZNK16CNCryptoBlowFish12GetBlockSizeEv`

`CNCryptoBlowFish::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099eec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099eec  _ZNK16CNCryptoBlowFish12GetBlockSizeEv
#           CNCryptoBlowFish::GetBlockSize() const
# range [0x08099eec, 0x08099f0b]
08099eec +0x00:  push   %ebp
08099eed +0x01:  mov    %esp,%ebp
08099eef +0x03:  mov    $0x8,%eax
08099ef4 +0x08:  pop    %ebp
08099ef5 +0x09:  ret
08099ef6 +0x0a:  push   %ebp
08099ef7 +0x0b:  mov    %esp,%ebp
08099ef9 +0x0d:  mov    0x8(%ebp),%eax
08099efc +0x10:  mov    0xc(%ebp),%edx
08099eff +0x13:  mov    %edx,(%eax)
08099f01 +0x15:  mov    0x8(%ebp),%eax
08099f04 +0x18:  mov    0x10(%ebp),%edx
08099f07 +0x1b:  mov    %edx,0x4(%eax)
08099f0a +0x1e:  pop    %ebp
08099f0b +0x1f:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::GetBlockSize @ 0x8099eec

/* CNCryptoBlowFish::GetBlockSize() const */

undefined4 CNCryptoBlowFish::GetBlockSize(void)

{
  return 8;
}
```
