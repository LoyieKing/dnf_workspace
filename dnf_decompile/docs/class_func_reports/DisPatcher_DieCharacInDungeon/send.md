# send

`_ZN29DisPatcher_DieCharacInDungeon4sendEP5CUserR9ParamBase`

`DisPatcher_DieCharacInDungeon::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DieCharacInDungeon` | `0x081c2baa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c2baa  _ZN29DisPatcher_DieCharacInDungeon4sendEP5CUserR9ParamBase
#           DisPatcher_DieCharacInDungeon::send(CUser*, ParamBase&)
# range [0x081c2baa, 0x081c2bbf]
081c2baa +0x00:  push   %ebp
081c2bab +0x01:  mov    %esp,%ebp
081c2bad +0x03:  sub    $0x10,%esp
081c2bb0 +0x06:  mov    0x10(%ebp),%eax
081c2bb3 +0x09:  mov    %eax,-0x4(%ebp)
081c2bb6 +0x0c:  mov    -0x4(%ebp),%eax
081c2bb9 +0x0f:  mov    0x4(%eax),%eax
081c2bbc +0x12:  test   %eax,%eax
081c2bbe +0x14:  leave
081c2bbf +0x15:  ret
```

## 反编译 C

```c
// DisPatcher_DieCharacInDungeon::send @ 0x81c2baa

/* DisPatcher_DieCharacInDungeon::send(CUser*, ParamBase&) */

undefined4 __thiscall
DisPatcher_DieCharacInDungeon::send
          (DisPatcher_DieCharacInDungeon *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}
```
