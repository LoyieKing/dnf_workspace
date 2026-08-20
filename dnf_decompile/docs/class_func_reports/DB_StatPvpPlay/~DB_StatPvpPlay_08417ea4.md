# ~DB_StatPvpPlay

`_ZN14DB_StatPvpPlayD0Ev`

`DB_StatPvpPlay::~DB_StatPvpPlay()`

| 类 | 地址 |
|---|---|
| `DB_StatPvpPlay` | `0x08417ea4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417ea4  _ZN14DB_StatPvpPlayD0Ev
#           DB_StatPvpPlay::~DB_StatPvpPlay()
# range [0x08417ea4, 0x08417ec1]
08417ea4 +0x00:  push   %ebp
08417ea5 +0x01:  mov    %esp,%ebp
08417ea7 +0x03:  sub    $0x18,%esp
08417eaa +0x06:  mov    0x8(%ebp),%eax
08417ead +0x09:  mov    %eax,(%esp)
08417eb0 +0x0c:  call   08417e74 <_ZN14DB_StatPvpPlayD1Ev>  ; DB_StatPvpPlay::~DB_StatPvpPlay()
08417eb5 +0x11:  mov    0x8(%ebp),%eax
08417eb8 +0x14:  mov    %eax,(%esp)
08417ebb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417ec0 +0x1c:  leave
08417ec1 +0x1d:  ret
```

## 反编译 C

```c
// DB_StatPvpPlay::~DB_StatPvpPlay @ 0x8417ea4

/* DB_StatPvpPlay::~DB_StatPvpPlay() */

void __thiscall DB_StatPvpPlay::~DB_StatPvpPlay(DB_StatPvpPlay *this)

{
  ~DB_StatPvpPlay(this);
  operator_delete(this);
  return;
}
```
