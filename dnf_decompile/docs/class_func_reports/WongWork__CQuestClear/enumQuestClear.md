# enumQuestClear

`_ZNK8WongWork11CQuestClear14enumQuestClearEPFbjPcEz`

`WongWork::CQuestClear::enumQuestClear(bool (*)(unsigned int, char*), ...) const`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bb88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bb88  _ZNK8WongWork11CQuestClear14enumQuestClearEPFbjPcEz
#           WongWork::CQuestClear::enumQuestClear(bool (*)(unsigned int, char*), ...) const
# range [0x0808bb88, 0x0808bbc3]
0808bb88 +0x00:  push   %ebp
0808bb89 +0x01:  mov    %esp,%ebp
0808bb8b +0x03:  sub    $0x28,%esp
0808bb8e +0x06:  lea    0x10(%ebp),%eax
0808bb91 +0x09:  mov    %eax,-0x10(%ebp)
0808bb94 +0x0c:  movl   $0x1,-0xc(%ebp)
0808bb9b +0x13:  jmp    0808bbb3 <+0x2b>
0808bb9d +0x15:  mov    -0x10(%ebp),%edx
0808bba0 +0x18:  mov    -0xc(%ebp),%eax
0808bba3 +0x1b:  mov    %edx,0x4(%esp)
0808bba7 +0x1f:  mov    %eax,(%esp)
0808bbaa +0x22:  mov    0xc(%ebp),%eax
0808bbad +0x25:  call   *%eax
0808bbaf +0x27:  addl   $0x1,-0xc(%ebp)
0808bbb3 +0x2b:  cmpl   $0x752f,-0xc(%ebp)
0808bbba +0x32:  setle  %al
0808bbbd +0x35:  test   %al,%al
0808bbbf +0x37:  jne    0808bb9d <+0x15>
0808bbc1 +0x39:  leave
0808bbc2 +0x3a:  ret
0808bbc3 +0x3b:  nop
```

## 反编译 C

```c
// WongWork::CQuestClear::enumQuestClear @ 0x808bb88

/* WongWork::CQuestClear::enumQuestClear(bool (*)(unsigned int, char*), ...) const */

void __thiscall
WongWork::CQuestClear::enumQuestClear(CQuestClear *this,_func_bool_uint_char_ptr *param_1,...)

{
  uint local_10;
  
  for (local_10 = 1; (int)local_10 < 30000; local_10 = local_10 + 1) {
    (*param_1)(local_10,&stack0x0000000c);
  }
  return;
}
```
