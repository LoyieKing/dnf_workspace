# get_gate_area

`_ZN7Village13get_gate_areaEv`

`Village::get_gate_area()`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c3b58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3b58  _ZN7Village13get_gate_areaEv
#           Village::get_gate_area()
# range [0x086c3b58, 0x086c3ba1]
086c3b58 +0x00:  push   %ebp
086c3b59 +0x01:  mov    %esp,%ebp
086c3b5b +0x03:  sub    $0x10,%esp
086c3b5e +0x06:  movl   $0x0,-0x4(%ebp)
086c3b65 +0x0d:  jmp    086c3b8a <+0x32>
086c3b67 +0x0f:  mov    0x8(%ebp),%eax
086c3b6a +0x12:  mov    0x28(%eax),%edx
086c3b6d +0x15:  mov    -0x4(%ebp),%eax
086c3b70 +0x18:  imul   $0x98,%eax,%eax
086c3b76 +0x1e:  lea    (%edx,%eax,1),%eax
086c3b79 +0x21:  mov    0x68(%eax),%eax
086c3b7c +0x24:  cmp    $0x1,%eax
086c3b7f +0x27:  jne    086c3b86 <+0x2e>
086c3b81 +0x29:  mov    -0x4(%ebp),%eax
086c3b84 +0x2c:  jmp    086c3b9f <+0x47>
086c3b86 +0x2e:  addl   $0x1,-0x4(%ebp)
086c3b8a +0x32:  mov    0x8(%ebp),%eax
086c3b8d +0x35:  mov    0x24(%eax),%eax
086c3b90 +0x38:  cmp    -0x4(%ebp),%eax
086c3b93 +0x3b:  setg   %al
086c3b96 +0x3e:  test   %al,%al
086c3b98 +0x40:  jne    086c3b67 <+0xf>
086c3b9a +0x42:  mov    $0x1,%eax
086c3b9f +0x47:  leave
086c3ba0 +0x48:  ret
086c3ba1 +0x49:  nop
```

## 反编译 C

```c
// Village::get_gate_area @ 0x86c3b58

/* Village::get_gate_area() */

int __thiscall Village::get_gate_area(Village *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(this + 0x24) <= local_8) {
      return 1;
    }
    if (*(int *)(*(int *)(this + 0x28) + local_8 * 0x98 + 0x68) == 1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
