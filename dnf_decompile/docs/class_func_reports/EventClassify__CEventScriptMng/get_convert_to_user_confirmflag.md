# get_convert_to_user_confirmflag

`_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi`

`EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810b0cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b0cc  _ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi
#           EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
# range [0x0810b0cc, 0x0810b10f]
0810b0cc +0x00:  push   %ebp
0810b0cd +0x01:  mov    %esp,%ebp
0810b0cf +0x03:  sub    $0x10,%esp
0810b0d2 +0x06:  movl   $0xffffffff,-0x4(%ebp)
0810b0d9 +0x0d:  mov    0xc(%ebp),%eax
0810b0dc +0x10:  cmp    $0x192,%eax
0810b0e1 +0x15:  je     0810b0fa <+0x2e>
0810b0e3 +0x17:  cmp    $0x19c,%eax
0810b0e8 +0x1c:  je     0810b103 <+0x37>
0810b0ea +0x1e:  cmp    $0x191,%eax
0810b0ef +0x23:  jne    0810b10a <+0x3e>
0810b0f1 +0x25:  movl   $0x0,-0x4(%ebp)
0810b0f8 +0x2c:  jmp    0810b10a <+0x3e>
0810b0fa +0x2e:  movl   $0x1,-0x4(%ebp)
0810b101 +0x35:  jmp    0810b10a <+0x3e>
0810b103 +0x37:  movl   $0x2,-0x4(%ebp)
0810b10a +0x3e:  mov    -0x4(%ebp),%eax
0810b10d +0x41:  leave
0810b10e +0x42:  ret
0810b10f +0x43:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_convert_to_user_confirmflag @ 0x810b0cc

/* EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int) */

undefined4 __thiscall
EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(CEventScriptMng *this,int param_1)

{
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if (param_1 == 0x192) {
    local_8 = 1;
  }
  else if (param_1 == 0x19c) {
    local_8 = 2;
  }
  else if (param_1 == 0x191) {
    local_8 = 0;
  }
  return local_8;
}
```
