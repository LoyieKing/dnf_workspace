# States

`_ZN5yaSSL6StatesC1Ev`

`yaSSL::States::States()`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874de40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874de40  _ZN5yaSSL6StatesC1Ev
#           yaSSL::States::States()
# range [0x0874de40, 0x0874de79]
0874de40 +0x00:  push   %ebp
0874de41 +0x01:  mov    %esp,%ebp
0874de43 +0x03:  mov    0x8(%ebp),%eax
0874de46 +0x06:  movl   $0x1,(%eax)
0874de4c +0x0c:  movl   $0x1,0x4(%eax)
0874de53 +0x13:  movl   $0x0,0x8(%eax)
0874de5a +0x1a:  movl   $0x0,0xc(%eax)
0874de61 +0x21:  movl   $0x0,0x10(%eax)
0874de68 +0x28:  movl   $0x0,0x14(%eax)
0874de6f +0x2f:  movl   $0x0,0x68(%eax)
0874de76 +0x36:  pop    %ebp
0874de77 +0x37:  ret
0874de78 +0x38:  nop
0874de79 +0x39:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::States @ 0x874de40

/* yaSSL::States::States() */

void __thiscall yaSSL::States::States(States *this)

{
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}
```
