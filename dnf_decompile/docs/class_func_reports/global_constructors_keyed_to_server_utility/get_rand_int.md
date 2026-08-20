# get_rand_int

`_GLOBAL__I__ZN14server_utility12get_rand_intEi`

`global constructors keyed to server_utility::get_rand_int(int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to server_utility` | `0x0808ec31` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808ec31  _GLOBAL__I__ZN14server_utility12get_rand_intEi
#           global constructors keyed to server_utility::get_rand_int(int)
# range [0x0808ec31, 0x0808ec4f]
0808ec31 +0x00:  push   %ebp
0808ec32 +0x01:  mov    %esp,%ebp
0808ec34 +0x03:  sub    $0x18,%esp
0808ec37 +0x06:  movl   $0xffff,0x4(%esp)
0808ec3f +0x0e:  movl   $0x1,(%esp)
0808ec46 +0x15:  call   0808ebf1 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0808ec4b +0x1a:  leave
0808ec4c +0x1b:  ret
0808ec4d +0x1c:  nop
0808ec4e +0x1d:  nop
0808ec4f +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x808ec31

/* server_utility::get_rand_int(int) */

void server_utility::_GLOBAL__I_get_rand_int(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
