# Clear

`_ZN14GameResultType5ClearEv`

`GameResultType::Clear()`

| 类 | 地址 |
|---|---|
| `GameResultType` | `0x084b7442` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7442  _ZN14GameResultType5ClearEv
#           GameResultType::Clear()
# range [0x084b7442, 0x084b750b]
084b7442 +0x00:  push   %ebp
084b7443 +0x01:  mov    %esp,%ebp
084b7445 +0x03:  sub    $0x18,%esp
084b7448 +0x06:  mov    0x8(%ebp),%eax
084b744b +0x09:  movb   $0x0,(%eax)
084b744e +0x0c:  mov    0x8(%ebp),%eax
084b7451 +0x0f:  movl   $0x0,0x4(%eax)
084b7458 +0x16:  mov    0x8(%ebp),%eax
084b745b +0x19:  movb   $0x0,0x8(%eax)
084b745f +0x1d:  mov    0x8(%ebp),%eax
084b7462 +0x20:  movb   $0x0,0x9(%eax)
084b7466 +0x24:  mov    0x8(%ebp),%eax
084b7469 +0x27:  movb   $0x0,0xa(%eax)
084b746d +0x2b:  mov    0x8(%ebp),%eax
084b7470 +0x2e:  movl   $0x0,0xc(%eax)
084b7477 +0x35:  mov    0x8(%ebp),%eax
084b747a +0x38:  movb   $0x0,0x10(%eax)
084b747e +0x3c:  mov    0x8(%ebp),%eax
084b7481 +0x3f:  movw   $0x0,0x34(%eax)
084b7487 +0x45:  mov    0x8(%ebp),%eax
084b748a +0x48:  movw   $0x0,0x36(%eax)
084b7490 +0x4e:  mov    0x8(%ebp),%eax
084b7493 +0x51:  movw   $0x0,0x38(%eax)
084b7499 +0x57:  mov    0x8(%ebp),%eax
084b749c +0x5a:  movw   $0x0,0x3a(%eax)
084b74a2 +0x60:  mov    0x8(%ebp),%eax
084b74a5 +0x63:  movw   $0x0,0x3c(%eax)
084b74ab +0x69:  mov    0x8(%ebp),%eax
084b74ae +0x6c:  movw   $0x0,0x3e(%eax)
084b74b4 +0x72:  mov    0x8(%ebp),%eax
084b74b7 +0x75:  movw   $0x0,0x40(%eax)
084b74bd +0x7b:  mov    0x8(%ebp),%eax
084b74c0 +0x7e:  movw   $0x0,0x42(%eax)
084b74c6 +0x84:  mov    0x8(%ebp),%eax
084b74c9 +0x87:  movw   $0x0,0x48(%eax)
084b74cf +0x8d:  mov    0x8(%ebp),%eax
084b74d2 +0x90:  movl   $0x0,0x44(%eax)
084b74d9 +0x97:  mov    0x8(%ebp),%eax
084b74dc +0x9a:  movw   $0x0,0x4a(%eax)
084b74e2 +0xa0:  mov    0x8(%ebp),%eax
084b74e5 +0xa3:  movl   $0x0,0x4c(%eax)
084b74ec +0xaa:  mov    0x8(%ebp),%eax
084b74ef +0xad:  add    $0x14,%eax
084b74f2 +0xb0:  movl   $0x20,0x8(%esp)
084b74fa +0xb8:  movl   $0x0,0x4(%esp)
084b7502 +0xc0:  mov    %eax,(%esp)
084b7505 +0xc3:  call   0807dcc0 <_init+0x5b8>
084b750a +0xc8:  leave
084b750b +0xc9:  ret
```

## 反编译 C

```c
// GameResultType::Clear @ 0x84b7442

/* GameResultType::Clear() */

void __thiscall GameResultType::Clear(GameResultType *this)

{
  *this = (GameResultType)0x0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (GameResultType)0x0;
  this[9] = (GameResultType)0x0;
  this[10] = (GameResultType)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (GameResultType)0x0;
  *(undefined2 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 0x36) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x3a) = 0;
  *(undefined2 *)(this + 0x3c) = 0;
  *(undefined2 *)(this + 0x3e) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x42) = 0;
  *(undefined2 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined2 *)(this + 0x4a) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  memset(this + 0x14,0,0x20);
  return;
}
```
