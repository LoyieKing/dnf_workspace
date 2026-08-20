# dispatch

`_ZN15TimerDispatcher8dispatchER10TimerEntry`

`TimerDispatcher::dispatch(TimerEntry&)`

| 类 | 地址 |
|---|---|
| `TimerDispatcher` | `0x08632a18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08632a18  _ZN15TimerDispatcher8dispatchER10TimerEntry
#           TimerDispatcher::dispatch(TimerEntry&)
# range [0x08632a18, 0x08632a77]
08632a18 +0x00:  push   %ebp
08632a19 +0x01:  mov    %esp,%ebp
08632a1b +0x03:  push   %ebx
08632a1c +0x04:  sub    $0x24,%esp
08632a1f +0x07:  mov    0xc(%ebp),%eax
08632a22 +0x0a:  mov    0x8(%eax),%eax
08632a25 +0x0d:  mov    %eax,0x4(%esp)
08632a29 +0x11:  mov    0x8(%ebp),%eax
08632a2c +0x14:  mov    %eax,(%esp)
08632a2f +0x17:  call   086329f6 <_ZN15TimerDispatcher14get_dispatcherEi>  ; TimerDispatcher::get_dispatcher(int)
08632a34 +0x1c:  mov    %eax,-0xc(%ebp)
08632a37 +0x1f:  cmpl   $0x0,-0xc(%ebp)
08632a3b +0x23:  jne    08632a44 <+0x2c>
08632a3d +0x25:  mov    $0x0,%eax
08632a42 +0x2a:  jmp    08632a71 <+0x59>
08632a44 +0x2c:  mov    -0xc(%ebp),%eax
08632a47 +0x2f:  mov    (%eax),%eax
08632a49 +0x31:  mov    (%eax),%ebx
08632a4b +0x33:  mov    0xc(%ebp),%eax
08632a4e +0x36:  mov    0x18(%eax),%ecx
08632a51 +0x39:  mov    0xc(%ebp),%eax
08632a54 +0x3c:  mov    0x14(%eax),%edx
08632a57 +0x3f:  mov    0xc(%ebp),%eax
08632a5a +0x42:  mov    0x4(%eax),%eax
08632a5d +0x45:  mov    %ecx,0xc(%esp)
08632a61 +0x49:  mov    %edx,0x8(%esp)
08632a65 +0x4d:  mov    %eax,0x4(%esp)
08632a69 +0x51:  mov    -0xc(%ebp),%eax
08632a6c +0x54:  mov    %eax,(%esp)
08632a6f +0x57:  call   *%ebx
08632a71 +0x59:  add    $0x24,%esp
08632a74 +0x5c:  pop    %ebx
08632a75 +0x5d:  pop    %ebp
08632a76 +0x5e:  ret
08632a77 +0x5f:  nop
```

## 反编译 C

```c
// TimerDispatcher::dispatch @ 0x8632a18

/* TimerDispatcher::dispatch(TimerEntry&) */

undefined4 __thiscall TimerDispatcher::dispatch(TimerDispatcher *this,TimerEntry *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)get_dispatcher(this,*(int *)(param_1 + 8));
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),
                       *(undefined4 *)(param_1 + 0x18));
  }
  return uVar2;
}
```
