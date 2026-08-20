# init

`_ZN6Taiwan15AuthGarenaToken4initEv`

`Taiwan::AuthGarenaToken::init()`

| 类 | 地址 |
|---|---|
| `Taiwan::AuthGarenaToken` | `0x081730c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081730c2  _ZN6Taiwan15AuthGarenaToken4initEv
#           Taiwan::AuthGarenaToken::init()
# range [0x081730c2, 0x081730d5]
081730c2 +0x00:  push   %ebp
081730c3 +0x01:  mov    %esp,%ebp
081730c5 +0x03:  sub    $0x18,%esp
081730c8 +0x06:  movl   $&_ZN6Taiwan15AuthGarenaToken11openSSLRSA_E,(%esp)
081730cf +0x0d:  call   0816c26e <_ZN11COpensslRSA4InitEv>  ; COpensslRSA::Init()
081730d4 +0x12:  leave
081730d5 +0x13:  ret
```

## 反编译 C

```c
// Taiwan::AuthGarenaToken::init @ 0x81730c2

/* Taiwan::AuthGarenaToken::init() */

void Taiwan::AuthGarenaToken::init(void)

{
  COpensslRSA::Init((COpensslRSA *)&openSSLRSA_);
  return;
}
```
