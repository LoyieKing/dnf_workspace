# Reset

`_ZN13user_creature9CArtifact5ResetEv`

`user_creature::CArtifact::Reset()`

| 类 | 地址 |
|---|---|
| `user_creature::CArtifact` | `0x08336f60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336f60  _ZN13user_creature9CArtifact5ResetEv
#           user_creature::CArtifact::Reset()
# range [0x08336f60, 0x08336f6d]
08336f60 +0x00:  push   %ebp
08336f61 +0x01:  mov    %esp,%ebp
08336f63 +0x03:  mov    0x8(%ebp),%eax
08336f66 +0x06:  movl   $0x0,(%eax)
08336f6c +0x0c:  pop    %ebp
08336f6d +0x0d:  ret
```

## 反编译 C

```c
// user_creature::CArtifact::Reset @ 0x8336f60

/* user_creature::CArtifact::Reset() */

void __thiscall user_creature::CArtifact::Reset(CArtifact *this)

{
  *(undefined4 *)this = 0;
  return;
}
```
