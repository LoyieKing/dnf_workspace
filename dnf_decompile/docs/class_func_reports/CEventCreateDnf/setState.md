# setState

`_ZN15CEventCreateDnf8setStateENS_5State1TE`

`CEventCreateDnf::setState(CEventCreateDnf::State::T)`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08164252` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164252  _ZN15CEventCreateDnf8setStateENS_5State1TE
#           CEventCreateDnf::setState(CEventCreateDnf::State::T)
# range [0x08164252, 0x0816425f]
08164252 +0x00:  push   %ebp
08164253 +0x01:  mov    %esp,%ebp
08164255 +0x03:  mov    0x8(%ebp),%eax
08164258 +0x06:  mov    0xc(%ebp),%edx
0816425b +0x09:  mov    %edx,0xc(%eax)
0816425e +0x0c:  pop    %ebp
0816425f +0x0d:  ret
```

## 反编译 C

```c
// CEventCreateDnf::setState @ 0x8164252

/* CEventCreateDnf::setState(CEventCreateDnf::State::T) */

void __thiscall CEventCreateDnf::setState(CEventCreateDnf *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc) = param_2;
  return;
}
```
