# IncInUser

`_ZN8WongWork15CLogGameChannel9IncInUserEv`

`WongWork::CLogGameChannel::IncInUser()`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x085506de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085506de  _ZN8WongWork15CLogGameChannel9IncInUserEv
#           WongWork::CLogGameChannel::IncInUser()
# range [0x085506de, 0x085506ff]
085506de +0x00:  push   %ebp
085506df +0x01:  mov    %esp,%ebp
085506e1 +0x03:  mov    0x8(%ebp),%eax
085506e4 +0x06:  mov    (%eax),%eax
085506e6 +0x08:  lea    0x1(%eax),%edx
085506e9 +0x0b:  mov    0x8(%ebp),%eax
085506ec +0x0e:  mov    %edx,(%eax)
085506ee +0x10:  mov    0x8(%ebp),%eax
085506f1 +0x13:  mov    0x8(%eax),%eax
085506f4 +0x16:  lea    0x1(%eax),%edx
085506f7 +0x19:  mov    0x8(%ebp),%eax
085506fa +0x1c:  mov    %edx,0x8(%eax)
085506fd +0x1f:  pop    %ebp
085506fe +0x20:  ret
085506ff +0x21:  nop
```

## 反编译 C

```c
// WongWork::CLogGameChannel::IncInUser @ 0x85506de

/* WongWork::CLogGameChannel::IncInUser() */

void __thiscall WongWork::CLogGameChannel::IncInUser(CLogGameChannel *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}
```
