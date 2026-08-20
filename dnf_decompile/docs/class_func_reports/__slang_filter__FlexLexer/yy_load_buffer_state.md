# yy_load_buffer_state

`_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv`

`__slang_filter__FlexLexer::yy_load_buffer_state()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x0809464e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809464e  _ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv
#           __slang_filter__FlexLexer::yy_load_buffer_state()
# range [0x0809464e, 0x080946c3]
0809464e +0x00:  push   %ebp
0809464f +0x01:  mov    %esp,%ebp
08094651 +0x03:  mov    0x8(%ebp),%eax
08094654 +0x06:  mov    0x48(%eax),%edx
08094657 +0x09:  mov    0x8(%ebp),%eax
0809465a +0x0c:  mov    0x40(%eax),%eax
0809465d +0x0f:  shl    $0x2,%eax
08094660 +0x12:  lea    (%edx,%eax,1),%eax
08094663 +0x15:  mov    (%eax),%eax
08094665 +0x17:  mov    0x10(%eax),%edx
08094668 +0x1a:  mov    0x8(%ebp),%eax
0809466b +0x1d:  mov    %edx,0x2c(%eax)
0809466e +0x20:  mov    0x8(%ebp),%eax
08094671 +0x23:  mov    0x48(%eax),%edx
08094674 +0x26:  mov    0x8(%ebp),%eax
08094677 +0x29:  mov    0x40(%eax),%eax
0809467a +0x2c:  shl    $0x2,%eax
0809467d +0x2f:  lea    (%edx,%eax,1),%eax
08094680 +0x32:  mov    (%eax),%eax
08094682 +0x34:  mov    0x8(%eax),%edx
08094685 +0x37:  mov    0x8(%ebp),%eax
08094688 +0x3a:  mov    %edx,0x30(%eax)
0809468b +0x3d:  mov    0x8(%ebp),%eax
0809468e +0x40:  mov    0x30(%eax),%edx
08094691 +0x43:  mov    0x8(%ebp),%eax
08094694 +0x46:  mov    %edx,0x4(%eax)
08094697 +0x49:  mov    0x8(%ebp),%eax
0809469a +0x4c:  mov    0x48(%eax),%edx
0809469d +0x4f:  mov    0x8(%ebp),%eax
080946a0 +0x52:  mov    0x40(%eax),%eax
080946a3 +0x55:  shl    $0x2,%eax
080946a6 +0x58:  lea    (%edx,%eax,1),%eax
080946a9 +0x5b:  mov    (%eax),%eax
080946ab +0x5d:  mov    (%eax),%edx
080946ad +0x5f:  mov    0x8(%ebp),%eax
080946b0 +0x62:  mov    %edx,0x20(%eax)
080946b3 +0x65:  mov    0x8(%ebp),%eax
080946b6 +0x68:  mov    0x30(%eax),%eax
080946b9 +0x6b:  movzbl (%eax),%edx
080946bc +0x6e:  mov    0x8(%ebp),%eax
080946bf +0x71:  mov    %dl,0x28(%eax)
080946c2 +0x74:  pop    %ebp
080946c3 +0x75:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_load_buffer_state @ 0x809464e

/* __slang_filter__FlexLexer::yy_load_buffer_state() */

void __thiscall __slang_filter__FlexLexer::yy_load_buffer_state(__slang_filter__FlexLexer *this)

{
  *(undefined4 *)(this + 0x2c) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10);
  *(undefined4 *)(this + 0x30) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 8);
  *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(this + 0x20) =
       **(undefined4 **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  this[0x28] = **(__slang_filter__FlexLexer **)(this + 0x30);
  return;
}
```
