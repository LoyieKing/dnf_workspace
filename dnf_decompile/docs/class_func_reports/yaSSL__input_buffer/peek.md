# peek

`_ZNK5yaSSL12input_buffer4peekEv`

`yaSSL::input_buffer::peek() const`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796e80  _ZNK5yaSSL12input_buffer4peekEv
#           yaSSL::input_buffer::peek() const
# range [0x08796e80, 0x08796e99]
08796e80 +0x00:  push   %ebp
08796e81 +0x01:  mov    %esp,%ebp
08796e83 +0x03:  mov    0x8(%ebp),%eax
08796e86 +0x06:  pop    %ebp
08796e87 +0x07:  mov    0x8(%eax),%edx
08796e8a +0x0a:  mov    0x4(%eax),%eax
08796e8d +0x0d:  movzbl (%edx,%eax,1),%eax
08796e91 +0x11:  ret
08796e92 +0x12:  lea    0x0(%esi,%eiz,1),%esi
08796e99 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::input_buffer::peek @ 0x8796e80

/* yaSSL::input_buffer::peek() const */

undefined1 __thiscall yaSSL::input_buffer::peek(input_buffer *this)

{
  return *(undefined1 *)(*(int *)(this + 8) + *(int *)(this + 4));
}
```
