# ResetInOutUser

`_ZN8WongWork15CLogGameChannel14ResetInOutUserEv`

`WongWork::CLogGameChannel::ResetInOutUser()`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x085506c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085506c6  _ZN8WongWork15CLogGameChannel14ResetInOutUserEv
#           WongWork::CLogGameChannel::ResetInOutUser()
# range [0x085506c6, 0x085506dd]
085506c6 +0x00:  push   %ebp
085506c7 +0x01:  mov    %esp,%ebp
085506c9 +0x03:  mov    0x8(%ebp),%eax
085506cc +0x06:  movl   $0x0,(%eax)
085506d2 +0x0c:  mov    0x8(%ebp),%eax
085506d5 +0x0f:  movl   $0x0,0x4(%eax)
085506dc +0x16:  pop    %ebp
085506dd +0x17:  ret
```

## 反编译 C

```c
// WongWork::CLogGameChannel::ResetInOutUser @ 0x85506c6

/* WongWork::CLogGameChannel::ResetInOutUser() */

void __thiscall WongWork::CLogGameChannel::ResetInOutUser(CLogGameChannel *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
