# isEqualEmoticon

`_ZN11CGameOption15isEqualEmoticonERK23CChattingEmoticonConfig`

`CGameOption::isEqualEmoticon(CChattingEmoticonConfig const&)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b71e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b71e8  _ZN11CGameOption15isEqualEmoticonERK23CChattingEmoticonConfig
#           CGameOption::isEqualEmoticon(CChattingEmoticonConfig const&)
# range [0x084b71e8, 0x084b7215]
084b71e8 +0x00:  push   %ebp
084b71e9 +0x01:  mov    %esp,%ebp
084b71eb +0x03:  sub    $0x18,%esp
084b71ee +0x06:  mov    0x8(%ebp),%eax
084b71f1 +0x09:  lea    0x41b(%eax),%edx
084b71f7 +0x0f:  movl   $0x210,0x8(%esp)
084b71ff +0x17:  mov    0xc(%ebp),%eax
084b7202 +0x1a:  mov    %eax,0x4(%esp)
084b7206 +0x1e:  mov    %edx,(%esp)
084b7209 +0x21:  call   0807dc90 <_init+0x588>
084b720e +0x26:  test   %eax,%eax
084b7210 +0x28:  sete   %al
084b7213 +0x2b:  leave
084b7214 +0x2c:  ret
084b7215 +0x2d:  nop
```

## 反编译 C

```c
// CGameOption::isEqualEmoticon @ 0x84b71e8

/* CGameOption::isEqualEmoticon(CChattingEmoticonConfig const&) */

bool __thiscall CGameOption::isEqualEmoticon(CGameOption *this,CChattingEmoticonConfig *param_1)

{
  int iVar1;
  
  iVar1 = memcmp(this + 0x41b,param_1,0x210);
  return iVar1 == 0;
}
```
