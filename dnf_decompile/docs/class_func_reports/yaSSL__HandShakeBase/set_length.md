# set_length

`_ZN5yaSSL13HandShakeBase10set_lengthEi`

`yaSSL::HandShakeBase::set_length(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeBase` | `0x08746ab0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746ab0  _ZN5yaSSL13HandShakeBase10set_lengthEi
#           yaSSL::HandShakeBase::set_length(int)
# range [0x08746ab0, 0x08746abe]
08746ab0 +0x00:  push   %ebp
08746ab1 +0x01:  mov    %esp,%ebp
08746ab3 +0x03:  mov    0xc(%ebp),%edx
08746ab6 +0x06:  mov    0x8(%ebp),%eax
08746ab9 +0x09:  mov    %edx,0x4(%eax)
08746abc +0x0c:  pop    %ebp
08746abd +0x0d:  ret
08746abe +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::HandShakeBase::set_length @ 0x8746ab0

/* yaSSL::HandShakeBase::set_length(int) */

void __thiscall yaSSL::HandShakeBase::set_length(HandShakeBase *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  return;
}
```
