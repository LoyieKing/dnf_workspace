# get_SoloPlay_msgType

`_ZN5CUser20get_SoloPlay_msgTypeERK15MSG_REQ_TO_PEER`

`CUser::get_SoloPlay_msgType(MSG_REQ_TO_PEER const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dd76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dd76  _ZN5CUser20get_SoloPlay_msgTypeERK15MSG_REQ_TO_PEER
#           CUser::get_SoloPlay_msgType(MSG_REQ_TO_PEER const&)
# range [0x0868dd76, 0x0868ddc1]
0868dd76 +0x00:  push   %ebp
0868dd77 +0x01:  mov    %esp,%ebp
0868dd79 +0x03:  mov    0xc(%ebp),%eax
0868dd7c +0x06:  movzbl 0xf(%eax),%eax
0868dd80 +0x0a:  movsbl %al,%eax
0868dd83 +0x0d:  cmp    $0x1,%eax
0868dd86 +0x10:  je     0868dda6 <+0x30>
0868dd88 +0x12:  cmp    $0x1,%eax
0868dd8b +0x15:  jg     0868dd93 <+0x1d>
0868dd8d +0x17:  test   %eax,%eax
0868dd8f +0x19:  je     0868dd9f <+0x29>
0868dd91 +0x1b:  jmp    0868ddbb <+0x45>
0868dd93 +0x1d:  cmp    $0x2,%eax
0868dd96 +0x20:  je     0868ddad <+0x37>
0868dd98 +0x22:  cmp    $0x3,%eax
0868dd9b +0x25:  je     0868ddb4 <+0x3e>
0868dd9d +0x27:  jmp    0868ddbb <+0x45>
0868dd9f +0x29:  mov    $0x1,%eax
0868dda4 +0x2e:  jmp    0868ddc0 <+0x4a>
0868dda6 +0x30:  mov    $0x0,%eax
0868ddab +0x35:  jmp    0868ddc0 <+0x4a>
0868ddad +0x37:  mov    $0x2,%eax
0868ddb2 +0x3c:  jmp    0868ddc0 <+0x4a>
0868ddb4 +0x3e:  mov    $0x3,%eax
0868ddb9 +0x43:  jmp    0868ddc0 <+0x4a>
0868ddbb +0x45:  mov    $0x4,%eax
0868ddc0 +0x4a:  pop    %ebp
0868ddc1 +0x4b:  ret
```

## 反编译 C

```c
// CUser::get_SoloPlay_msgType @ 0x868dd76

/* CUser::get_SoloPlay_msgType(MSG_REQ_TO_PEER const&) */

undefined4 __thiscall CUser::get_SoloPlay_msgType(CUser *this,MSG_REQ_TO_PEER *param_1)

{
  MSG_REQ_TO_PEER MVar1;
  
  MVar1 = param_1[0xf];
  if (MVar1 == (MSG_REQ_TO_PEER)0x1) {
    return 0;
  }
  if ((char)MVar1 < '\x02') {
    if (MVar1 == (MSG_REQ_TO_PEER)0x0) {
      return 1;
    }
  }
  else {
    if (MVar1 == (MSG_REQ_TO_PEER)0x2) {
      return 2;
    }
    if (MVar1 == (MSG_REQ_TO_PEER)0x3) {
      return 3;
    }
  }
  return 4;
}
```
