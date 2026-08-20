# SetCodeHackCheckRange

`_ZN18CodeHackChecksumEx21SetCodeHackCheckRangeERK18CodeHackCheckRange`

`CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackCheckRange const&)`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a7d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a7d8  _ZN18CodeHackChecksumEx21SetCodeHackCheckRangeERK18CodeHackCheckRange
#           CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackCheckRange const&)
# range [0x0808a7d8, 0x0808a7f3]
0808a7d8 +0x00:  push   %ebp
0808a7d9 +0x01:  mov    %esp,%ebp
0808a7db +0x03:  mov    0x8(%ebp),%ecx
0808a7de +0x06:  mov    0xc(%ebp),%eax
0808a7e1 +0x09:  mov    0x4(%eax),%edx
0808a7e4 +0x0c:  mov    (%eax),%eax
0808a7e6 +0x0e:  mov    %eax,0x110(%ecx)
0808a7ec +0x14:  mov    %edx,0x114(%ecx)
0808a7f2 +0x1a:  pop    %ebp
0808a7f3 +0x1b:  ret
```

## 反编译 C

```c
// CodeHackChecksumEx::SetCodeHackCheckRange @ 0x808a7d8

/* CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackCheckRange const&) */

void __thiscall
CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackChecksumEx *this,CodeHackCheckRange *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x114) = uVar1;
  return;
}
```
