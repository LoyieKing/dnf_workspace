# ~TOD_UserState

`_ZN13TOD_UserStateD0Ev`

`TOD_UserState::~TOD_UserState()`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x086434de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086434de  _ZN13TOD_UserStateD0Ev
#           TOD_UserState::~TOD_UserState()
# range [0x086434de, 0x086434fb]
086434de +0x00:  push   %ebp
086434df +0x01:  mov    %esp,%ebp
086434e1 +0x03:  sub    $0x18,%esp
086434e4 +0x06:  mov    0x8(%ebp),%eax
086434e7 +0x09:  mov    %eax,(%esp)
086434ea +0x0c:  call   086434ae <_ZN13TOD_UserStateD1Ev>  ; TOD_UserState::~TOD_UserState()
086434ef +0x11:  mov    0x8(%ebp),%eax
086434f2 +0x14:  mov    %eax,(%esp)
086434f5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086434fa +0x1c:  leave
086434fb +0x1d:  ret
```

## 反编译 C

```c
// TOD_UserState::~TOD_UserState @ 0x86434de

/* TOD_UserState::~TOD_UserState() */

void __thiscall TOD_UserState::~TOD_UserState(TOD_UserState *this)

{
  ~TOD_UserState(this);
  operator_delete(this);
  return;
}
```
