# TakeRawInput

`_ZN5yaSSL7Buffers12TakeRawInputEv`

`yaSSL::Buffers::TakeRawInput()`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x0874e900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e900  _ZN5yaSSL7Buffers12TakeRawInputEv
#           yaSSL::Buffers::TakeRawInput()
# range [0x0874e900, 0x0874e919]
0874e900 +0x00:  push   %ebp
0874e901 +0x01:  mov    %esp,%ebp
0874e903 +0x03:  mov    0x8(%ebp),%edx
0874e906 +0x06:  mov    0x18(%edx),%eax
0874e909 +0x09:  movl   $0x0,0x18(%edx)
0874e910 +0x10:  pop    %ebp
0874e911 +0x11:  ret
0874e912 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0874e919 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Buffers::TakeRawInput @ 0x874e900

/* yaSSL::Buffers::TakeRawInput() */

undefined4 __thiscall yaSSL::Buffers::TakeRawInput(Buffers *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = 0;
  return uVar1;
}
```
