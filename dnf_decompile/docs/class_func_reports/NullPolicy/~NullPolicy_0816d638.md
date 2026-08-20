# ~NullPolicy

`_ZN10NullPolicyD0Ev`

`NullPolicy::~NullPolicy()`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d638  _ZN10NullPolicyD0Ev
#           NullPolicy::~NullPolicy()
# range [0x0816d638, 0x0816d655]
0816d638 +0x00:  push   %ebp
0816d639 +0x01:  mov    %esp,%ebp
0816d63b +0x03:  sub    $0x18,%esp
0816d63e +0x06:  mov    0x8(%ebp),%eax
0816d641 +0x09:  mov    %eax,(%esp)
0816d644 +0x0c:  call   0816d608 <_ZN10NullPolicyD1Ev>  ; NullPolicy::~NullPolicy()
0816d649 +0x11:  mov    0x8(%ebp),%eax
0816d64c +0x14:  mov    %eax,(%esp)
0816d64f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816d654 +0x1c:  leave
0816d655 +0x1d:  ret
```

## 反编译 C

```c
// NullPolicy::~NullPolicy @ 0x816d638

/* NullPolicy::~NullPolicy() */

void __thiscall NullPolicy::~NullPolicy(NullPolicy *this)

{
  ~NullPolicy(this);
  operator_delete(this);
  return;
}
```
