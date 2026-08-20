# cal_premium_term

`_ZN23premium_helper_function16cal_premium_termEibi`

`premium_helper_function::cal_premium_term(int, bool, int)`

| 类 | 地址 |
|---|---|
| `premium_helper_function` | `0x0827cff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827cff0  _ZN23premium_helper_function16cal_premium_termEibi
#           premium_helper_function::cal_premium_term(int, bool, int)
# range [0x0827cff0, 0x0827d023]
0827cff0 +0x00:  push   %ebp
0827cff1 +0x01:  mov    %esp,%ebp
0827cff3 +0x03:  sub    $0x18,%esp
0827cff6 +0x06:  mov    0xc(%ebp),%eax
0827cff9 +0x09:  mov    %al,-0xc(%ebp)
0827cffc +0x0c:  cmpb   $0x0,-0xc(%ebp)
0827d000 +0x10:  je     0827d01b <+0x2b>
0827d002 +0x12:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827d007 +0x17:  movzbl 0x877e(%eax),%eax
0827d00e +0x1e:  movzbl %al,%eax
0827d011 +0x21:  imul   0x8(%ebp),%eax
0827d015 +0x25:  imul   0x10(%ebp),%eax
0827d019 +0x29:  jmp    0827d022 <+0x32>
0827d01b +0x2b:  mov    0x8(%ebp),%eax
0827d01e +0x2e:  imul   0x10(%ebp),%eax
0827d022 +0x32:  leave
0827d023 +0x33:  ret
```

## 反编译 C

```c
// premium_helper_function::cal_premium_term @ 0x827cff0

/* premium_helper_function::cal_premium_term(int, bool, int) */

int premium_helper_function::cal_premium_term(int param_1,bool param_2,int param_3)

{
  int iVar1;
  
  if (param_2) {
    iVar1 = G_CDataManager();
    param_1 = (uint)*(byte *)(iVar1 + 0x877e) * param_1;
  }
  return param_1 * param_3;
}
```
