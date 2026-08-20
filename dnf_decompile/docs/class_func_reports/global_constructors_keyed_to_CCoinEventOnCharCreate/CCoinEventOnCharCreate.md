# CCoinEventOnCharCreate

`_GLOBAL__I__ZN22CCoinEventOnCharCreateC2Ev`

`global constructors keyed to CCoinEventOnCharCreate::CCoinEventOnCharCreate()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCoinEventOnCharCreate` | `0x0810aadd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810aadd  _GLOBAL__I__ZN22CCoinEventOnCharCreateC2Ev
#           global constructors keyed to CCoinEventOnCharCreate::CCoinEventOnCharCreate()
# range [0x0810aadd, 0x0810aafb]
0810aadd +0x00:  push   %ebp
0810aade +0x01:  mov    %esp,%ebp
0810aae0 +0x03:  sub    $0x18,%esp
0810aae3 +0x06:  movl   $0xffff,0x4(%esp)
0810aaeb +0x0e:  movl   $0x1,(%esp)
0810aaf2 +0x15:  call   0810aa9d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810aaf7 +0x1a:  leave
0810aaf8 +0x1b:  ret
0810aaf9 +0x1c:  nop
0810aafa +0x1d:  nop
0810aafb +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x810aadd

/* CCoinEventOnCharCreate::CCoinEventOnCharCreate() */

void CCoinEventOnCharCreate::_GLOBAL__I_CCoinEventOnCharCreate(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
