# getCallback

`_ZNK10LwCallback11getCallbackEv`

`LwCallback::getCallback() const`

| 类 | 地址 |
|---|---|
| `LwCallback` | `0x08ad3b0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3b0e  _ZNK10LwCallback11getCallbackEv
#           LwCallback::getCallback() const
# range [0x08ad3b0e, 0x08ad3b35]
08ad3b0e +0x00:  push   %ebp
08ad3b0f +0x01:  mov    %esp,%ebp
08ad3b11 +0x03:  push   %ebx
08ad3b12 +0x04:  sub    $0x14,%esp
08ad3b15 +0x07:  mov    0x8(%ebp),%ebx
08ad3b18 +0x0a:  mov    %ebx,%eax
08ad3b1a +0x0c:  mov    0xc(%ebp),%edx
08ad3b1d +0x0f:  add    $0x4,%edx
08ad3b20 +0x12:  mov    %edx,0x4(%esp)
08ad3b24 +0x16:  mov    %eax,(%esp)
08ad3b27 +0x19:  call   08ad417a <_GLOBAL__I__ZN9LogWriterC2Ev+0x1c3>  ; global constructors keyed to LogWriter::LogWriter()+0x1c3
08ad3b2c +0x1e:  mov    %ebx,%eax
08ad3b2e +0x20:  mov    %ebx,%eax
08ad3b30 +0x22:  add    $0x14,%esp
08ad3b33 +0x25:  pop    %ebx
08ad3b34 +0x26:  pop    %ebp
08ad3b35 +0x27:  ret    $0x4
```

## 反编译 C

```c
// LwCallback::getCallback @ 0x8ad3b0e

/* LwCallback::getCallback() const */

function<void(char_const*,char_const*,int,char_const*)> * LwCallback::getCallback(void)

{
  function<void(char_const*,char_const*,int,char_const*)> *in_stack_00000004;
  int in_stack_00000008;
  
  std::function<void(char_const*,char_const*,int,char_const*)>::function
            (in_stack_00000004,(function *)(in_stack_00000008 + 4));
  return in_stack_00000004;
}
```
