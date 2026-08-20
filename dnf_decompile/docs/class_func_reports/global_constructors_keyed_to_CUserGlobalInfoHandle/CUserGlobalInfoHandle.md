# CUserGlobalInfoHandle

`_GLOBAL__I__ZN21CUserGlobalInfoHandleC2Ev`

`global constructors keyed to CUserGlobalInfoHandle::CUserGlobalInfoHandle()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CUserGlobalInfoHandle` | `0x086ad9b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad9b8  _GLOBAL__I__ZN21CUserGlobalInfoHandleC2Ev
#           global constructors keyed to CUserGlobalInfoHandle::CUserGlobalInfoHandle()
# range [0x086ad9b8, 0x086ad9d3]
086ad9b8 +0x00:  push   %ebp
086ad9b9 +0x01:  mov    %esp,%ebp
086ad9bb +0x03:  sub    $0x18,%esp
086ad9be +0x06:  movl   $0xffff,0x4(%esp)
086ad9c6 +0x0e:  movl   $0x1,(%esp)
086ad9cd +0x15:  call   086ad978 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086ad9d2 +0x1a:  leave
086ad9d3 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x86ad9b8

/* CUserGlobalInfoHandle::CUserGlobalInfoHandle() */

void CUserGlobalInfoHandle::_GLOBAL__I_CUserGlobalInfoHandle(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
