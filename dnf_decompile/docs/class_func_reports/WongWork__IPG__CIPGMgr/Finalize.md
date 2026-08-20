# Finalize

`_ZN8WongWork3IPG7CIPGMgr8FinalizeEv`

`WongWork::IPG::CIPGMgr::Finalize()`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr` | `0x08104600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08104600  _ZN8WongWork3IPG7CIPGMgr8FinalizeEv
#           WongWork::IPG::CIPGMgr::Finalize()
# range [0x08104600, 0x0810466b]
08104600 +0x00:  push   %ebp
08104601 +0x01:  mov    %esp,%ebp
08104603 +0x03:  sub    $0x28,%esp
08104606 +0x06:  mov    0x8(%ebp),%eax
08104609 +0x09:  mov    (%eax),%eax
0810460b +0x0b:  test   %eax,%eax
0810460d +0x0d:  je     08104669 <+0x69>
0810460f +0x0f:  movl   $0x0,-0xc(%ebp)
08104616 +0x16:  jmp    0810462f <+0x2f>
08104618 +0x18:  mov    0x8(%ebp),%eax
0810461b +0x1b:  mov    (%eax),%eax
0810461d +0x1d:  mov    (%eax),%eax
0810461f +0x1f:  mov    (%eax),%edx
08104621 +0x21:  mov    0x8(%ebp),%eax
08104624 +0x24:  mov    (%eax),%eax
08104626 +0x26:  mov    %eax,(%esp)
08104629 +0x29:  call   *%edx
0810462b +0x2b:  addl   $0x1,-0xc(%ebp)
0810462f +0x2f:  mov    0x8(%ebp),%eax
08104632 +0x32:  mov    0x4(%eax),%eax
08104635 +0x35:  cmp    -0xc(%ebp),%eax
08104638 +0x38:  seta   %al
0810463b +0x3b:  test   %al,%al
0810463d +0x3d:  jne    08104618 <+0x18>
0810463f +0x3f:  mov    0x8(%ebp),%eax
08104642 +0x42:  mov    (%eax),%eax
08104644 +0x44:  test   %eax,%eax
08104646 +0x46:  je     0810465e <+0x5e>
08104648 +0x48:  mov    0x8(%ebp),%eax
0810464b +0x4b:  mov    (%eax),%eax
0810464d +0x4d:  mov    (%eax),%eax
0810464f +0x4f:  add    $0x8,%eax
08104652 +0x52:  mov    (%eax),%edx
08104654 +0x54:  mov    0x8(%ebp),%eax
08104657 +0x57:  mov    (%eax),%eax
08104659 +0x59:  mov    %eax,(%esp)
0810465c +0x5c:  call   *%edx
0810465e +0x5e:  mov    0x8(%ebp),%eax
08104661 +0x61:  movl   $0x0,(%eax)
08104667 +0x67:  jmp    0810466a <+0x6a>
08104669 +0x69:  nop
0810466a +0x6a:  leave
0810466b +0x6b:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::Finalize @ 0x8104600

/* WongWork::IPG::CIPGMgr::Finalize() */

void __thiscall WongWork::IPG::CIPGMgr::Finalize(CIPGMgr *this)

{
  uint local_10;
  
  if (*(int *)this != 0) {
    for (local_10 = 0; local_10 < *(uint *)(this + 4); local_10 = local_10 + 1) {
      (**(code **)**(undefined4 **)this)(*(undefined4 *)this);
    }
    if (*(int *)this != 0) {
      (**(code **)(**(int **)this + 8))(*(undefined4 *)this);
    }
    *(undefined4 *)this = 0;
  }
  return;
}
```
