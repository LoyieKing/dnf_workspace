# ~UseCubeMission

`_ZN14UseCubeMissionD0Ev`

`UseCubeMission::~UseCubeMission()`

| 类 | 地址 |
|---|---|
| `UseCubeMission` | `0x08165974` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165974  _ZN14UseCubeMissionD0Ev
#           UseCubeMission::~UseCubeMission()
# range [0x08165974, 0x08165991]
08165974 +0x00:  push   %ebp
08165975 +0x01:  mov    %esp,%ebp
08165977 +0x03:  sub    $0x18,%esp
0816597a +0x06:  mov    0x8(%ebp),%eax
0816597d +0x09:  mov    %eax,(%esp)
08165980 +0x0c:  call   08165944 <_ZN14UseCubeMissionD1Ev>  ; UseCubeMission::~UseCubeMission()
08165985 +0x11:  mov    0x8(%ebp),%eax
08165988 +0x14:  mov    %eax,(%esp)
0816598b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08165990 +0x1c:  leave
08165991 +0x1d:  ret
```

## 反编译 C

```c
// UseCubeMission::~UseCubeMission @ 0x8165974

/* UseCubeMission::~UseCubeMission() */

void __thiscall UseCubeMission::~UseCubeMission(UseCubeMission *this)

{
  ~UseCubeMission(this);
  operator_delete(this);
  return;
}
```
