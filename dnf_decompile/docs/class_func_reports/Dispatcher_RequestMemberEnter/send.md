# send

`_ZN29Dispatcher_RequestMemberEnter4sendEP5CUserR9ParamBase`

`Dispatcher_RequestMemberEnter::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestMemberEnter` | `0x081cb980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb980  _ZN29Dispatcher_RequestMemberEnter4sendEP5CUserR9ParamBase
#           Dispatcher_RequestMemberEnter::send(CUser*, ParamBase&)
# range [0x081cb980, 0x081cb999]
081cb980 +0x00:  push   %ebp
081cb981 +0x01:  mov    %esp,%ebp
081cb983 +0x03:  sub    $0x10,%esp
081cb986 +0x06:  mov    0x10(%ebp),%eax
081cb989 +0x09:  mov    %eax,-0x4(%ebp)
081cb98c +0x0c:  mov    -0x4(%ebp),%eax
081cb98f +0x0f:  mov    0x4(%eax),%eax
081cb992 +0x12:  cmp    $0x7fffffff,%eax
081cb997 +0x17:  leave
081cb998 +0x18:  ret
081cb999 +0x19:  nop
```

## 反编译 C

```c
// Dispatcher_RequestMemberEnter::send @ 0x81cb980

/* Dispatcher_RequestMemberEnter::send(CUser*, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestMemberEnter::send
          (Dispatcher_RequestMemberEnter *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}
```
