# getCurPosXY

`_ZN13CBattle_Field11getCurPosXYERiS0_`

`CBattle_Field::getCurPosXY(int&, int&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08300da6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08300da6  _ZN13CBattle_Field11getCurPosXYERiS0_
#           CBattle_Field::getCurPosXY(int&, int&)
# range [0x08300da6, 0x08300e43]
08300da6 +0x00:  push   %ebp
08300da7 +0x01:  mov    %esp,%ebp
08300da9 +0x03:  sub    $0x18,%esp
08300dac +0x06:  mov    0x8(%ebp),%eax
08300daf +0x09:  mov    0x188(%eax),%eax
08300db5 +0x0f:  test   %eax,%eax
08300db7 +0x11:  je     08300df0 <+0x4a>
08300db9 +0x13:  mov    0x8(%ebp),%eax
08300dbc +0x16:  mov    0x188(%eax),%eax
08300dc2 +0x1c:  mov    %eax,(%esp)
08300dc5 +0x1f:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
08300dca +0x24:  test   %al,%al
08300dcc +0x26:  je     08300df0 <+0x4a>
08300dce +0x28:  mov    0x8(%ebp),%eax
08300dd1 +0x2b:  mov    0x114(%eax),%eax
08300dd7 +0x31:  test   %eax,%eax
08300dd9 +0x33:  js     08300df0 <+0x4a>
08300ddb +0x35:  mov    0x8(%ebp),%eax
08300dde +0x38:  mov    0x114(%eax),%eax
08300de4 +0x3e:  cmp    $0x3,%eax
08300de7 +0x41:  jg     08300df0 <+0x4a>
08300de9 +0x43:  mov    $0x1,%eax
08300dee +0x48:  jmp    08300df5 <+0x4f>
08300df0 +0x4a:  mov    $0x0,%eax
08300df5 +0x4f:  test   %al,%al
08300df7 +0x51:  je     08300e2b <+0x85>
08300df9 +0x53:  mov    0x8(%ebp),%eax
08300dfc +0x56:  mov    0x114(%eax),%edx
08300e02 +0x5c:  mov    0x8(%ebp),%eax
08300e05 +0x5f:  add    $0x2,%edx
08300e08 +0x62:  mov    0xc(%eax,%edx,8),%edx
08300e0c +0x66:  mov    0xc(%ebp),%eax
08300e0f +0x69:  mov    %edx,(%eax)
08300e11 +0x6b:  mov    0x8(%ebp),%eax
08300e14 +0x6e:  mov    0x114(%eax),%edx
08300e1a +0x74:  mov    0x8(%ebp),%eax
08300e1d +0x77:  add    $0x2,%edx
08300e20 +0x7a:  mov    0x10(%eax,%edx,8),%edx
08300e24 +0x7e:  mov    0x10(%ebp),%eax
08300e27 +0x81:  mov    %edx,(%eax)
08300e29 +0x83:  jmp    08300e41 <+0x9b>
08300e2b +0x85:  mov    0x8(%ebp),%eax
08300e2e +0x88:  mov    0x60(%eax),%edx
08300e31 +0x8b:  mov    0xc(%ebp),%eax
08300e34 +0x8e:  mov    %edx,(%eax)
08300e36 +0x90:  mov    0x8(%ebp),%eax
08300e39 +0x93:  mov    0x64(%eax),%edx
08300e3c +0x96:  mov    0x10(%ebp),%eax
08300e3f +0x99:  mov    %edx,(%eax)
08300e41 +0x9b:  leave
08300e42 +0x9c:  ret
08300e43 +0x9d:  nop
```

## 反编译 C

```c
// CBattle_Field::getCurPosXY @ 0x8300da6

/* CBattle_Field::getCurPosXY(int&, int&) */

void __thiscall CBattle_Field::getCurPosXY(CBattle_Field *this,int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  
  if (*(int *)(this + 0x188) != 0) {
    cVar2 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188));
    if (((cVar2 != '\0') && (-1 < *(int *)(this + 0x114))) && (*(int *)(this + 0x114) < 4)) {
      bVar1 = true;
      goto LAB_08300df5;
    }
  }
  bVar1 = false;
LAB_08300df5:
  if (bVar1) {
    *param_1 = *(int *)(this + (*(int *)(this + 0x114) + 2) * 8 + 0xc);
    *param_2 = *(int *)(this + (*(int *)(this + 0x114) + 2) * 8 + 0x10);
  }
  else {
    *param_1 = *(int *)(this + 0x60);
    *param_2 = *(int *)(this + 100);
  }
  return;
}
```
