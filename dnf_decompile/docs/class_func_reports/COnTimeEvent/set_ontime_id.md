# set_ontime_id

`_ZN12COnTimeEvent13set_ontime_idEi`

`COnTimeEvent::set_ontime_id(int)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb986  _ZN12COnTimeEvent13set_ontime_idEi
#           COnTimeEvent::set_ontime_id(int)
# range [0x081bb986, 0x081bb993]
081bb986 +0x00:  push   %ebp
081bb987 +0x01:  mov    %esp,%ebp
081bb989 +0x03:  mov    0x8(%ebp),%eax
081bb98c +0x06:  mov    0xc(%ebp),%edx
081bb98f +0x09:  mov    %edx,0xc(%eax)
081bb992 +0x0c:  pop    %ebp
081bb993 +0x0d:  ret
```

## 反编译 C

```c
// COnTimeEvent::set_ontime_id @ 0x81bb986

/* COnTimeEvent::set_ontime_id(int) */

void __thiscall COnTimeEvent::set_ontime_id(COnTimeEvent *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}
```
