# getUserP

`_ZN8WongWork13CHackAnalyzer8getUserPEv`

`WongWork::CHackAnalyzer::getUserP()`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f79ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f79ce  _ZN8WongWork13CHackAnalyzer8getUserPEv
#           WongWork::CHackAnalyzer::getUserP()
# range [0x080f79ce, 0x080f79e7]
080f79ce +0x00:  push   %ebp
080f79cf +0x01:  mov    %esp,%ebp
080f79d1 +0x03:  mov    0x8(%ebp),%eax
080f79d4 +0x06:  mov    (%eax),%eax
080f79d6 +0x08:  test   %eax,%eax
080f79d8 +0x0a:  je     080f79e1 <+0x13>
080f79da +0x0c:  mov    0x8(%ebp),%eax
080f79dd +0x0f:  mov    (%eax),%eax
080f79df +0x11:  jmp    080f79e6 <+0x18>
080f79e1 +0x13:  mov    $0x0,%eax
080f79e6 +0x18:  pop    %ebp
080f79e7 +0x19:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::getUserP @ 0x80f79ce

/* WongWork::CHackAnalyzer::getUserP() */

undefined4 __thiscall WongWork::CHackAnalyzer::getUserP(CHackAnalyzer *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)this;
  }
  return uVar1;
}
```
