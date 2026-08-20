# setType

`_ZN20StrikerDirectionType7setTypeEi`

`StrikerDirectionType::setType(int)`

| 类 | 地址 |
|---|---|
| `StrikerDirectionType` | `0x08a9d7fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d7fa  _ZN20StrikerDirectionType7setTypeEi
#           StrikerDirectionType::setType(int)
# range [0x08a9d7fa, 0x08a9d819]
08a9d7fa +0x00:  push   %ebp
08a9d7fb +0x01:  mov    %esp,%ebp
08a9d7fd +0x03:  cmpl   $0x0,0xc(%ebp)
08a9d801 +0x07:  js     08a9d813 <+0x19>
08a9d803 +0x09:  cmpl   $0x1,0xc(%ebp)
08a9d807 +0x0d:  jg     08a9d816 <+0x1c>
08a9d809 +0x0f:  mov    0xc(%ebp),%edx
08a9d80c +0x12:  mov    0x8(%ebp),%eax
08a9d80f +0x15:  mov    %edx,(%eax)
08a9d811 +0x17:  jmp    08a9d817 <+0x1d>
08a9d813 +0x19:  nop
08a9d814 +0x1a:  jmp    08a9d817 <+0x1d>
08a9d816 +0x1c:  nop
08a9d817 +0x1d:  pop    %ebp
08a9d818 +0x1e:  ret
08a9d819 +0x1f:  nop
```

## 反编译 C

```c
// StrikerDirectionType::setType @ 0x8a9d7fa

/* StrikerDirectionType::setType(int) */

void __thiscall StrikerDirectionType::setType(StrikerDirectionType *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 2)) {
    *(int *)this = param_1;
  }
  return;
}
```
