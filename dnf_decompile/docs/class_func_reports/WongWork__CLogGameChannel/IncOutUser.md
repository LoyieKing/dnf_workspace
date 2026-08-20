# IncOutUser

`_ZN8WongWork15CLogGameChannel10IncOutUserEv`

`WongWork::CLogGameChannel::IncOutUser()`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x08550700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550700  _ZN8WongWork15CLogGameChannel10IncOutUserEv
#           WongWork::CLogGameChannel::IncOutUser()
# range [0x08550700, 0x08550722]
08550700 +0x00:  push   %ebp
08550701 +0x01:  mov    %esp,%ebp
08550703 +0x03:  mov    0x8(%ebp),%eax
08550706 +0x06:  mov    0x4(%eax),%eax
08550709 +0x09:  lea    0x1(%eax),%edx
0855070c +0x0c:  mov    0x8(%ebp),%eax
0855070f +0x0f:  mov    %edx,0x4(%eax)
08550712 +0x12:  mov    0x8(%ebp),%eax
08550715 +0x15:  mov    0x8(%eax),%eax
08550718 +0x18:  lea    -0x1(%eax),%edx
0855071b +0x1b:  mov    0x8(%ebp),%eax
0855071e +0x1e:  mov    %edx,0x8(%eax)
08550721 +0x21:  pop    %ebp
08550722 +0x22:  ret
```

## 反编译 C

```c
// WongWork::CLogGameChannel::IncOutUser @ 0x8550700

/* WongWork::CLogGameChannel::IncOutUser() */

void __thiscall WongWork::CLogGameChannel::IncOutUser(CLogGameChannel *this)

{
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  return;
}
```
