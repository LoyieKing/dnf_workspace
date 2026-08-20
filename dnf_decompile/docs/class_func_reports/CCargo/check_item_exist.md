# check_item_exist

`_ZNK6CCargo16check_item_existEi`

`CCargo::check_item_exist(int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850bc14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850bc14  _ZNK6CCargo16check_item_existEi
#           CCargo::check_item_exist(int) const
# range [0x0850bc14, 0x0850bc59]
0850bc14 +0x00:  push   %ebp
0850bc15 +0x01:  mov    %esp,%ebp
0850bc17 +0x03:  sub    $0x10,%esp
0850bc1a +0x06:  movl   $0x0,-0x4(%ebp)
0850bc21 +0x0d:  jmp    0850bc45 <+0x31>
0850bc23 +0x0f:  mov    0x8(%ebp),%eax
0850bc26 +0x12:  mov    0x4(%eax),%edx
0850bc29 +0x15:  mov    -0x4(%ebp),%eax
0850bc2c +0x18:  imul   $0x3d,%eax,%eax
0850bc2f +0x1b:  lea    (%edx,%eax,1),%eax
0850bc32 +0x1e:  mov    0x2(%eax),%edx
0850bc35 +0x21:  mov    0xc(%ebp),%eax
0850bc38 +0x24:  cmp    %eax,%edx
0850bc3a +0x26:  jne    0850bc41 <+0x2d>
0850bc3c +0x28:  mov    -0x4(%ebp),%eax
0850bc3f +0x2b:  jmp    0850bc58 <+0x44>
0850bc41 +0x2d:  addl   $0x1,-0x4(%ebp)
0850bc45 +0x31:  cmpl   $0x97,-0x4(%ebp)
0850bc4c +0x38:  setle  %al
0850bc4f +0x3b:  test   %al,%al
0850bc51 +0x3d:  jne    0850bc23 <+0xf>
0850bc53 +0x3f:  mov    $0xffffffff,%eax
0850bc58 +0x44:  leave
0850bc59 +0x45:  ret
```

## 反编译 C

```c
// CCargo::check_item_exist @ 0x850bc14

/* CCargo::check_item_exist(int) const */

int __thiscall CCargo::check_item_exist(CCargo *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x97 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 4) + local_8 * 0x3d + 2) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
