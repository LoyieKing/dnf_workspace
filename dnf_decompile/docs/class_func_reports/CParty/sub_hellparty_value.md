# sub_hellparty_value

`_ZN6CParty19sub_hellparty_valueEv`

`CParty::sub_hellparty_value()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b690a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b690a  _ZN6CParty19sub_hellparty_valueEv
#           CParty::sub_hellparty_value()
# range [0x085b690a, 0x085b697b]
085b690a +0x00:  push   %ebp
085b690b +0x01:  mov    %esp,%ebp
085b690d +0x03:  sub    $0x38,%esp
085b6910 +0x06:  mov    0x8(%ebp),%eax
085b6913 +0x09:  flds   0xb0c(%eax)
085b6919 +0x0f:  mov    0x8(%ebp),%eax
085b691c +0x12:  flds   0xd1c(%eax)
085b6922 +0x18:  fmulp  %st,%st(1)
085b6924 +0x1a:  fstps  -0xc(%ebp)
085b6927 +0x1d:  flds   -0xc(%ebp)
085b692a +0x20:  fnstcw -0x1e(%ebp)
085b692d +0x23:  movzwl -0x1e(%ebp),%eax
085b6931 +0x27:  mov    $0xc,%ah
085b6933 +0x29:  mov    %ax,-0x20(%ebp)
085b6937 +0x2d:  fldcw  -0x20(%ebp)
085b693a +0x30:  fistpl -0x1c(%ebp)
085b693d +0x33:  fldcw  -0x1e(%ebp)
085b6940 +0x36:  mov    -0x1c(%ebp),%edx
085b6943 +0x39:  mov    0x8(%ebp),%eax
085b6946 +0x3c:  mov    0xd10(%eax),%eax
085b694c +0x42:  cmp    %eax,%edx
085b694e +0x44:  jge    085b6962 <+0x58>
085b6950 +0x46:  mov    0x8(%ebp),%eax
085b6953 +0x49:  mov    0xd10(%eax),%eax
085b6959 +0x4f:  mov    %eax,-0x1c(%ebp)
085b695c +0x52:  fildl  -0x1c(%ebp)
085b695f +0x55:  fstps  -0xc(%ebp)
085b6962 +0x58:  mov    0x8(%ebp),%eax
085b6965 +0x5b:  mov    -0xc(%ebp),%edx
085b6968 +0x5e:  mov    %edx,0xb0c(%eax)
085b696e +0x64:  mov    0x8(%ebp),%eax
085b6971 +0x67:  mov    %eax,(%esp)
085b6974 +0x6a:  call   085b697c <_ZN6CParty20send_hellParty_valueEv>  ; CParty::send_hellParty_value()
085b6979 +0x6f:  leave
085b697a +0x70:  ret
085b697b +0x71:  nop
```

## 反编译 C

```c
// CParty::sub_hellparty_value @ 0x85b690a

/* CParty::sub_hellparty_value() */

void __thiscall CParty::sub_hellparty_value(CParty *this)

{
  float local_10;
  
  local_10 = *(float *)(this + 0xd1c) * *(float *)(this + 0xb0c);
  if ((int)ROUND(local_10) < *(int *)(this + 0xd10)) {
    local_10 = (float)*(int *)(this + 0xd10);
  }
  *(float *)(this + 0xb0c) = local_10;
  send_hellParty_value(this);
  return;
}
```
